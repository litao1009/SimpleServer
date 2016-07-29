#include "mori/net/Server.h"
#include "mori/concurrency/AsynConcurrentPool.h"
#include "mori/net/TcpConnection.h"

#include "AsyncCore/AsyncProactorImp.h"
#include "Net/TCP/Acceptor.h"
#include "Net/TCP/CTcpDefaultContext.h"
#include "Net/TCP/TcpSoket.h"
#include "Net/Buffer/RecvBuffer.h"

#include "Utils/SmartPtr.h"

#include "TimeWheel.h"
#include "Log.h"

#include <vector>
#include <cassert>

namespace mori
{
	typedef	mori::shared_ptr<Acceptor>		AcceptorSPtr;
	typedef	mori::shared_ptr<TimeWheel>		TimeWheelSPtr;

	class	Server::Imp
	{
	public:

		Imp()
		{
			OnRecvFtr_ = [](const ErrCode&, SRecvMsgInfo& recvMsg, RecvFileList& fileList, TcpConnectionSPtr& TcpConnPtr){};
		}

		void	OnAccept(SocketTypeUPtr& sockPtr)
		{
			TcpSocket sockWrap;
			sockWrap.SockUPtr_ = std::move(sockPtr);
			TcpConnectionSPtr connSPtr = mori::make_shared<TcpConnection>(std::move(sockWrap));

			TLOG(LOG_INFO << L" Mori:New Coming Connection On " << connSPtr->GetRemoteEP();)

			connSPtr->SetOnReceive([this](const ErrCode& ec, SRecvMsgInfo& msg, RecvFileList& files, TcpConnectionSPtr& connSPtr)
			{
				OnReceive(ec, msg, files, connSPtr);
			});

			if ( TimeWheelPtr_ )
			{
				auto copy = std::weak_ptr<TimeWheel>(TimeWheelPtr_);
				ITcpContextSPtr	contextSPtr	= mori::make_shared<CTcpDefaultContext>(TcpConnectionWPtr(connSPtr), [copy](ITcpContextWPtr sptr)
				{
					auto timeweelSPtr = copy.lock();
					auto contextSPtr = sptr.lock();
					if ( timeweelSPtr && contextSPtr )
					{
						timeweelSPtr->Insert(contextSPtr);
					}
				});

				connSPtr->SetContext(contextSPtr);
				TimeWheelPtr_->Insert(contextSPtr);
			}		

			connSPtr->StartRead();
		}

		void	OnReceive(const ErrCode& ec, SRecvMsgInfo& recvMsg, RecvFileList& fileList, TcpConnectionSPtr& connSPtr)
		{
			if ( TimeWheelPtr_ )
			{
				ITcpContextSPtr contextSPtr = connSPtr->GetContext().lock();
				if ( contextSPtr )
				{
					TimeWheelPtr_->Insert(contextSPtr);
				}
			}	

			OnRecvFtr_(ec, recvMsg, fileList, connSPtr);
		}

	public:

		AsynConcurrentPoolPtr		ThreadPoolPtr_;
		std::vector<AcceptorSPtr>	AcceptorList_;
		TimeWheelSPtr				TimeWheelPtr_;
		OnConnReceiveFtr			OnRecvFtr_;
	};


	Server::Server():ImpUPtr_(std::move(smartPtr::make_unique<Server::Imp>()))
	{

	}

	Server::~Server()
	{

	}

	void Server::SetThreadSize( uint32_t threadSize )
	{
		auto initFunc = []()
		{
				TLOG(LOG_INFO << L" Mori:Start Thread for mori::Server" ;)
		};
		auto joinFunc = []()
		{
			TLOG(LOG_INFO << L" Mori:Join All Threads for mori::Server";)
		};

		ImpUPtr_->ThreadPoolPtr_ = std::move(smartPtr::make_unique<AsynConcurrentPool>(threadSize, initFunc, joinFunc));
	}

	void Server::AddListenPort( uint16_t listenPort )
	{
		assert(ImpUPtr_->ThreadPoolPtr_);

		AcceptorSPtr acptPtr = mori::make_shared<Acceptor>(ImpUPtr_->ThreadPoolPtr_->GetProactor().ImpSPtr_->ProactorRef_, listenPort);
		ImpUPtr_->AcceptorList_.push_back(acptPtr);
	}

	void Server::SetTimeWheel( uint32_t perTick, uint32_t tickSize )
	{
		ImpUPtr_->TimeWheelPtr_ = std::move(smartPtr::make_unique<TimeWheel>(perTick, tickSize));
	}

	void Server::SetOnReceive( OnConnReceiveFtr ftr )
	{
		if ( ftr )
		{
			ImpUPtr_->OnRecvFtr_ = ftr;
		}
	}

	void Server::Start()
	{
		ImpUPtr_->ThreadPoolPtr_->Start();

		if ( ImpUPtr_->TimeWheelPtr_ )
		{
			ImpUPtr_->TimeWheelPtr_->Start();
		}	

		//	set callback
		auto ftr = [this](SocketTypeUPtr& sockPtr){ImpUPtr_->OnAccept(sockPtr);};

		for ( auto& acptor : ImpUPtr_->AcceptorList_ )
		{
			acptor->SetOnAccept(ftr);
			acptor->Start();
		}

	}

	void Server::Stop()
	{
		for ( auto& acptor : ImpUPtr_->AcceptorList_ )
		{
			acptor->Stop();
		}

		if ( ImpUPtr_->TimeWheelPtr_ )
		{
			ImpUPtr_->TimeWheelPtr_->Stop();
		}
		
		ImpUPtr_->ThreadPoolPtr_->Stop();

		ImpUPtr_->OnRecvFtr_ = OnConnReceiveFtr();
	}

	bool Server::IsStop() const
	{
		return ImpUPtr_->ThreadPoolPtr_->IsStop();
	}

	void Server::Join()
	{
		for ( auto& acptor : ImpUPtr_->AcceptorList_ )
		{
			acptor->Join();
		}

		if ( ImpUPtr_->TimeWheelPtr_ )
		{
			ImpUPtr_->TimeWheelPtr_->Join();
		}
		
		ImpUPtr_->ThreadPoolPtr_->Join();
	}

	bool Server::SetRecvFilesFolder( FilePath folder )
	{
		return RecvBuffer::SetRecvFolder(folder);
	}

}