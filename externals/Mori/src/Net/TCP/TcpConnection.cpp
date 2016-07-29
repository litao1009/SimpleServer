#include "mori/net/TcpConnection.h"
#include "mori/net/STransInfo.h"
#include "mori/net/ITcpContext.h"

#include "Net/Buffer/RecvBuffer.h"
#include "Net/Buffer/SendBuffer.h"

#include "Net/TCP/TcpSoket.h"
#include "Net/TCP/TcpEndPoint.h"

#include "Utils/SmartPtr.h"
#include "Utils/NameSpace/nsAsio.h"
#include "Utils/NameSpace/nsFileSystem.h"
#include "Utils/Type/FileType.h"
#include "Utils/Type/Crc32Type.h"

#include "google/protobuf/message.h"

#include <list>
#include <cassert>
#include <atomic>

#include "Log.h"

namespace mori
{
	enum EConnState
	{
		ECS_INIT,
		ECS_WORKING,
		ECS_SHUTDOWN,
		ECS_CLOSE,
		ECS_COUNT
	};

	auto			DefaultRecvFtr = [](const ErrCode&, SRecvMsgInfo&, RecvFileList&, TcpConnectionSPtr&){};
	auto			DefaultSendFtr = [](uint32_t, const ErrCode&,TcpConnectionSPtr&){};

	class TcpConnection::Imp
	{
	public:

		typedef	std::atomic<EConnState>		SafeState;

		SocketTypeUPtr		SockUPtr_;
		SafeState			State_;

		OnConnReceiveFtr	OnRecvFtr_;
		OnConnSendFtr		OnSendFtr_;

		OnConnMonitorFtr	OnRecvMonitorFtr_;
		OnConnMonitorFtr	OnSendMonitorFtr_;

		OnCloseFtr			OnCloseFtr_;

		SendBuffer			SendBuf_;
		RecvBuffer			RecvBuf_;

		EndPoint			RemoteEP_;
		EndPoint			LocalEP_;
		TcpEndPoint			InternalREP_;
		TcpEndPoint			InternalLEP_;
		
		ITcpContextWPtr		ContextWPtr_;

	public:

		Imp(SocketTypeUPtr& sockPtr):SockUPtr_(std::move(sockPtr)),State_(ECS_INIT)
		{
			OnRecvFtr_	= DefaultRecvFtr;
			OnSendFtr_	= DefaultSendFtr;

			ErrCode ec;

			InternalREP_		= SockUPtr_->remote_endpoint(ec);
			assert(!ec);
			RemoteEP_.Port_		= InternalREP_.port();
			RemoteEP_.Adress_	= InternalREP_.address().to_string();
			
			InternalLEP_		= SockUPtr_->remote_endpoint(ec);
			assert(!ec);
			RemoteEP_.Port_		= InternalLEP_.port();
			RemoteEP_.Adress_	= InternalLEP_.address().to_string();
		}

		void	Close()
		{
			State_.store(ECS_CLOSE);

			ErrCode ec;
			SockUPtr_->shutdown(nsAsio::socket_base::shutdown_both, ec);
			if ( ec )
			{
				TLOG(LOG_INFO << L" Mori:" << ec;)
			}

			SockUPtr_->close(ec);
			if ( ec )
			{
				TLOG(LOG_INFO << L" Mori:" << ec;)
			}

			TLOG(LOG_INFO << L" Mori:" << RemoteEP_ << L"关闭连接");

			if ( OnCloseFtr_ )
			{
				OnCloseFtr_(LocalEP_,RemoteEP_);
			}
		}

		bool	Check(const ErrCode& ec)
		{
			if ( ECS_WORKING != State_.load() )
			{
				TLOG(LOG_INFO << L" Mori:" << RemoteEP_ << L"Doesn't Work Anymore";)
				return false;
			}

			if ( ec )
			{
				TLOG(LOG_INFO << L" Mori:" << RemoteEP_ << ec;)
				return false;
			}

			return true;
		}

		bool	Start(TcpConnectionSPtr& PntSPtr)
		{
			if ( !SockUPtr_->is_open() )
			{
				return false;
			}

			if ( ECS_INIT != State_.load() )
			{
				return false;
			}

			State_.store(ECS_WORKING);

			SockUPtr_->async_receive(nsAsio::buffer(RecvBuf_),
				[this, PntSPtr](const ErrCode& ec, uint32_t transBytes) mutable
			{
				if ( Check(ec) )
				{
					RecvBuf(transBytes, PntSPtr);
				}
				else
				{
					OnRecvFtr_(ec, SRecvMsgInfo(), RecvBuf_.GetRecvFileList(), PntSPtr);
				}
			});

			return true;
		}

		void	RecvBuf(uint32_t transBytes, TcpConnectionSPtr& PntSPtr)
		{ 
			TLOG(LOG_INFO << L" Mori:" << RemoteEP_ << L"Receive " << transBytes << " bytes";)
			
			auto conText = ContextWPtr_.lock();
			if ( conText )
			{
				conText->Update();
			}

			STransInfoPtr transInfoPtr;
			RecvBuf_.Update(transBytes, transInfoPtr);

			if ( OnRecvMonitorFtr_ && transInfoPtr )
			{
				OnRecvMonitorFtr_(*transInfoPtr);
			}

			if ( RecvBuf_.IsFinish() )
			{
				OnRecvFtr_(ErrCode(), RecvBuf_.GetMsg(), RecvBuf_.GetRecvFileList(), PntSPtr);

				RecvBuf_.Reset();
			}

			if ( ECS_WORKING != State_.load() )
			{
				return;
			}

			SockUPtr_->async_receive(nsAsio::buffer(RecvBuf_),
				[this, PntSPtr](const ErrCode& ec, uint32_t transBytes) mutable
			{
				if ( Check(ec) )
				{
					RecvBuf(transBytes, PntSPtr);
				}
				else
				{
					OnRecvFtr_(ec, SRecvMsgInfo(), RecvBuf_.GetRecvFileList(), PntSPtr);
				}
			});
			
		}

		boost::optional<uint32_t> Send( TcpConnBuffer& buf, SendFileList& files, TcpConnectionSPtr& PntPtr )
		{
			if ( ECS_WORKING != State_.load() )
			{
				return boost::optional<uint32_t>();
			}

			//	跳过空消息
			if ( buf.empty() && files.empty() )
			{
				return boost::optional<uint32_t>();
			}

			FileInfoList	filesInfo;
			TcpConnBuffer	fileBuf;
			static	const uint32_t	g_4M	= 0x400000;

			//	获取文件信息，剔除空文件、错文件
			//********************************************************************************
			auto itor = std::remove_if(files.begin(), files.end(), [&filesInfo,&fileBuf](const FilePath& filePath)->bool
			{
				if ( !nsFileSystem::exists(filePath) )
				{
					assert(0);
					return true;
				}

				auto fileSize = static_cast<uint32_t>(nsFileSystem::file_size(filePath));
				if ( 0 == fileSize )
				{
					return true;
				}

				InFileType ifs(filePath, std::ios::binary);
				Crc32Type crc;
				assert(ifs.is_open());
				while ( !ifs.eof() )
				{
					auto left = fileSize - static_cast<uint32_t>(ifs.tellg());
					left = std::min(left, g_4M);

					if ( 0 == left )
					{
						ifs.close();
						break;
					}

					fileBuf.resize(left);
					ifs.read(fileBuf.data(), fileBuf.size());

					crc.process_bytes(fileBuf.data(), fileBuf.size());
				}

				SFileInfo newInfo;
				newInfo.Path_	= filePath;
				newInfo.Size_	= fileSize;
				newInfo.Chksum_	= crc.checksum();
				filesInfo.push_back(newInfo);

				return false;
			});
			files.erase(itor, files.end());
			//********************************************************************************
			
			bool isNeedSend = false;	//	是否真正需要开始发送
			auto msgID = SendBuf_.Add(buf, filesInfo, isNeedSend);

			if ( !isNeedSend )
			{
				return msgID;
			}

			SockUPtr_->async_write_some(nsAsio::buffer(SendBuf_),
				[this, PntPtr](const ErrCode& ec, uint32_t ubytes) mutable
			{
				if ( Check(ec) )
				{
					SendBuf(ubytes, PntPtr);
				}
				else
				{
					auto msgId = SendBuf_.GetCurrentMsgID();
					if ( msgId )
					{
						OnSendFtr_(*msgId, ec, PntPtr);
					}
				}
			});

			return msgID;
		}

		void SendBuf(uint32_t ubytes, TcpConnectionSPtr& PntPtr)
		{
			TLOG(LOG_INFO << L" Mori:" << RemoteEP_ << L"Send " << ubytes << " bytes";)

			STransInfoPtr infoPtr;
			SendBuf_.Update(ubytes, infoPtr);

			if ( infoPtr && OnSendMonitorFtr_ )
			{
				OnSendMonitorFtr_(*infoPtr);
			}

			if ( SendBuf_.Empty() )
			{
				return;
			}

			SockUPtr_->async_write_some(nsAsio::buffer(SendBuf_),
				[this, PntPtr](const ErrCode& ec, uint32_t ubytes) mutable
			{				
				if ( Check(ec) )
				{
					SendBuf(ubytes, PntPtr);
				}
				else
				{
					auto msgId = SendBuf_.GetCurrentMsgID();
					if ( msgId )
					{
						OnSendFtr_(*msgId, ec, PntPtr);
					}
				}
			});
		}
	};

	TcpConnection::TcpConnection( TcpSocket& sock ):ImpUPtr_(smartPtr::make_unique<TcpConnection::Imp>(sock.SockUPtr_))
	{
		
	}

	TcpConnection::~TcpConnection()
	{
		ImpUPtr_->Close();
	}

	void TcpConnection::ShutDown( bool clearOnRecv )
	{
		if ( clearOnRecv )
		{
			ImpUPtr_->OnRecvFtr_ = DefaultRecvFtr;
			ImpUPtr_->OnSendFtr_ = DefaultSendFtr;
		}

		ImpUPtr_->State_.store(ECS_SHUTDOWN);

		ErrCode ec;
		ImpUPtr_->SockUPtr_->shutdown(nsAsio::socket_base::shutdown_both, ec);

		if ( ec )
		{

		}
#ifdef WIN32
#if _WIN32_WINNT >= 0x600
		ImpUPtr_->SockUPtr_->cancel(ec);
#endif
#endif
		ImpUPtr_->RecvBuf_.Reset();

		TLOG(LOG_INFO << L" Mori:" << ImpUPtr_->RemoteEP_ << L"ShutDown");
	}

	void TcpConnection::SetOnReceive( OnConnReceiveFtr func )
	{
		if ( func )
		{
			ImpUPtr_->OnRecvFtr_ = func;
		}	
	}

	void TcpConnection::SetOnSend( OnConnSendFtr func )
	{
		if ( func )
		{
			ImpUPtr_->OnSendFtr_ = func;
		}
	}

	boost::optional<uint32_t> TcpConnection::Send( const TcpConnBuffer& buf )
	{
		TcpConnBuffer cpBuf(buf);
		return ImpUPtr_->Send(cpBuf, SendFileList(), shared_from_this());
	}

	boost::optional<uint32_t> TcpConnection::Send( SendFileList& files )
	{
		return ImpUPtr_->Send(TcpConnBuffer(0), files, shared_from_this());
	}

	boost::optional<uint32_t> TcpConnection::Send( const TcpConnBuffer& buf, SendFileList& files )
	{
		TcpConnBuffer cpBuf(buf);
		return ImpUPtr_->Send(cpBuf, files, shared_from_this());
	}

	boost::optional<uint32_t> TcpConnection::Send( TcpConnBuffer&& buf )
	{
		return ImpUPtr_->Send(buf, SendFileList(), shared_from_this());
	}

	boost::optional<uint32_t> TcpConnection::Send( TcpConnBuffer&& buf, SendFileList& files )
	{
		return ImpUPtr_->Send(buf, files, shared_from_this());
	}

	bool TcpConnection::StartRead()
	{
		return ImpUPtr_->Start(shared_from_this());
	}

	const EndPoint& TcpConnection::GetRemoteEP() const
	{
		return ImpUPtr_->RemoteEP_;
	}
	
	const EndPoint& TcpConnection::GetLocalEP() const
	{
		return ImpUPtr_->LocalEP_;
	}

	void TcpConnection::SetContext( ITcpContextWPtr contextPtr )
	{
		ImpUPtr_->ContextWPtr_ = contextPtr;
	}

	ITcpContextWPtr TcpConnection::GetContext()
	{
		return ImpUPtr_->ContextWPtr_;
	}

	void TcpConnection::SetOnReciveMonitor( OnConnMonitorFtr func )
	{
		ImpUPtr_->OnRecvMonitorFtr_ = func;
	}

	void TcpConnection::SetOnSendMonitor( OnConnMonitorFtr func )
	{
		ImpUPtr_->OnSendMonitorFtr_ = func;
	}

	void TcpConnection::SetOnClose( OnCloseFtr func )
	{
		ImpUPtr_->OnCloseFtr_ = func;
	}

	bool TcpConnection::HasOnReciveMonitor() const
	{
		return ImpUPtr_->OnRecvMonitorFtr_;
	}

	bool TcpConnection::HasOnSendMonitor() const
	{
		return ImpUPtr_->OnSendMonitorFtr_;
	}

	bool TcpConnection::HasOnClose() const
	{
		return ImpUPtr_->OnCloseFtr_;
	}

	bool TcpConnection::IsSending() const
	{
		return !ImpUPtr_->SendBuf_.Empty();
	}

	bool TcpConnection::IsWorking()
	{
		return ECS_WORKING == ImpUPtr_->State_;
	}
}