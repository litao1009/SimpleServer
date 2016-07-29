#include "mori/net/Client.h"
#include "mori/net/TcpConnection.h"
#include "mori/concurrency/AsynConcurrentPool.h"
#include "mori/predef/net.h"

#include "AsyncCore/AsyncProactorImp.h"
#include "Net/Buffer/RecvBuffer.h"
#include "Net/TCP/TcpSoket.h"
#include "Net/TCP/TcpEndPoint.h"

#include "Utils/SmartPtr.h"
#include "Utils/NameSpace/nsPosixtime.h"
#include "Utils/Type/DeadlineTimerType.h"
#include "Utils/Type/TcpType.h"

#include <unordered_map>
#include <atomic>
#include <mutex>

typedef	std::atomic<bool>					ContinueFlag;
typedef	std::atomic<uint32_t>				SafeKey;

typedef	smartPtr::shared_ptr<ContinueFlag>	ContinueFlagSPtr;

namespace mori
{
	class	STimerInfo
	{
	public:

		STimerInfo():Tick_(nsPosixtime::seconds(1)) {}

		DeadlineTimerTypePtr	TimerPtr_;
		nsPosixtime::seconds	Tick_;
		LooperFtr				Ftr_;
	};

	class	Client::Imp
	{
	public:

		typedef	std::unordered_map<uint32_t,STimerInfo>	TimerMap;

		Imp()
		{
			uint32_t ThreadNr = 2;
			AsyncThreadPool_ = std::move(smartPtr::make_unique<AsynConcurrentPool>(ThreadNr));
		}

		~Imp()
		{

		}

		void	Looper(uint32_t key, mori::ErrCode ec)
		{
			if ( AsyncThreadPool_->IsStop() )
			{
				return;
			}

			TimerMap::iterator itor;
			{
				std::lock_guard<std::mutex> lock(TimerMutex_);
				itor = TimerMap_.find(key);
				if ( itor == TimerMap_.end() )
				{
					return;
				}
			}

			auto& info = itor->second;

			info.Ftr_(ec);
			info.TimerPtr_->expires_from_now(info.Tick_);
			info.TimerPtr_->async_wait([this,key](mori::ErrCode ec)
			{
				Looper(key, ec);
			});
		}

	public:

		AsynConcurrentPoolPtr				AsyncThreadPool_;
		TcpEndPoint							ServerEP_;
		TimerMap							TimerMap_;
		std::mutex							TimerMutex_;
	};

	Client::Client():ImpUPtr_(smartPtr::make_unique<Client::Imp>())
	{

	}

	Client::~Client()
	{

	}

	void Client::SetServerAddress( std::string IP, uint16_t port )
	{
		ImpUPtr_->ServerEP_ = TcpEndPoint(IPAdressType::from_string(IP), port);
	}

	mori::TcpConnectionSPtr Client::CreateConnPtr( ErrCode& ec/*=ErrCode()*/ )
	{
		SocketTypeUPtr sockPtr(smartPtr::make_unique<SocketType>(ImpUPtr_->AsyncThreadPool_->GetProactor().ImpSPtr_->ProactorRef_));
		
		TcpSocket sockWrap;
		sockWrap.SockUPtr_ = std::move(sockPtr);

		sockPtr->connect(ImpUPtr_->ServerEP_, ec);
		if ( ec )
		{
			return TcpConnectionSPtr();
		}
		
		TcpConnectionSPtr connPtr = mori::make_shared<TcpConnection>(sockWrap);

		return connPtr;
	}

	void Client::AsyncCreateConnPtr( AsyncCreateConnFtr ftr, uint32_t timeout )
	{
		SocketTypeUPtr sockPtr(smartPtr::make_unique<SocketType>(ImpUPtr_->AsyncThreadPool_->GetProactor().ImpSPtr_->ProactorRef_));

		SCopybleWrap<SocketTypeUPtr>::SCopyblePtr copySockPtr =
			mori::make_shared<SCopybleWrap<SocketTypeUPtr>>(sockPtr);

		ContinueFlagSPtr		flagSPtr;
		DeadlineTimerTypePtr	timerSPtr;
		
		if ( 0 != timeout )
		{
			flagSPtr	= smartPtr::make_shared<ContinueFlag>(true);
			timerSPtr	= smartPtr::make_shared<DeadlineTimerType>(ImpUPtr_->AsyncThreadPool_->GetProactor().ImpSPtr_->ProactorRef_);
		}

		copySockPtr->Ptr_->async_connect(ImpUPtr_->ServerEP_, [copySockPtr, ftr, flagSPtr, timerSPtr](const ErrCode ec)
		{
			if ( flagSPtr && !flagSPtr->load() )
			{
				ftr(boost::asio::error::timed_out, TcpConnectionSPtr());
				return;
			}
			else if ( timerSPtr )
			{
				ErrCode dtEc;
				timerSPtr->cancel(dtEc);
			}

			if ( !ec )
			{
				TcpSocket sockWrap;
				sockWrap.SockUPtr_ = std::move(copySockPtr->Ptr_);

				TcpConnectionSPtr connPtr = mori::make_shared<TcpConnection>(sockWrap);
				ftr(ec, connPtr);
			}
			else
			{
				ftr(ec, TcpConnectionSPtr());
			}
			
		});

		if ( 0 != timeout )
		{
			timerSPtr->expires_from_now(boost::posix_time::seconds(timeout));
			timerSPtr->async_wait([flagSPtr, copySockPtr](ErrCode ec)
			{
				if ( !ec )
				{
					flagSPtr->store(false);
					if ( copySockPtr->Ptr_ )
					{
						copySockPtr->Ptr_->close(ec);
					}
				}
			});
		}
	}

	uint32_t Client::SetLooper( LooperFtr ftr, uint32_t tick )
	{
		static SafeKey sKey(0);
		
		if ( !ftr )
		{
			return 0;
		}

		auto curKey = sKey.fetch_add(1);

		STimerInfo info;
		info.Ftr_ = ftr;
		info.TimerPtr_ = mori::make_shared<DeadlineTimerType>(ImpUPtr_->AsyncThreadPool_->GetProactor().ImpSPtr_->ProactorRef_);
		info.Tick_ = nsPosixtime::seconds(tick);

		{
			std::lock_guard<std::mutex> lock(ImpUPtr_->TimerMutex_);
			ImpUPtr_->TimerMap_.insert(std::make_pair(curKey,info));
		}

		info.TimerPtr_->expires_from_now(info.Tick_);
		info.TimerPtr_->async_wait([this,curKey](mori::ErrCode ec)
		{
			ImpUPtr_->Looper(curKey, ec);
		});

		return curKey;
	}


	void Client::StopLooper( uint32_t key )
	{
		std::lock_guard<std::mutex> lock(ImpUPtr_->TimerMutex_);
		
		auto itor = ImpUPtr_->TimerMap_.find(key);
		if ( itor == ImpUPtr_->TimerMap_.end() )
		{
			return;
		}

		auto timerSPtr = itor->second.TimerPtr_;
		ImpUPtr_->TimerMap_.erase(key);

		ErrCode ec;
		timerSPtr->cancel(ec);
	}


	void Client::Start()
	{
		ImpUPtr_->AsyncThreadPool_->Start();
	}

	void Client::Stop()
	{
		ErrCode ec;
		
		{
			std::lock_guard<std::mutex> lock(ImpUPtr_->TimerMutex_);

			for ( auto& timerInfo : ImpUPtr_->TimerMap_ )
			{
				timerInfo.second.TimerPtr_->cancel(ec);
			}

			ImpUPtr_->AsyncThreadPool_->Stop();
			ImpUPtr_->TimerMap_.clear();
		}

	}

	bool Client::IsStop() const
	{
		return ImpUPtr_->AsyncThreadPool_->IsStop();
	}

	void Client::Join()
	{
		ImpUPtr_->AsyncThreadPool_->Join();
	}

	bool Client::SetRecvFilesFolder( FilePath folder )
	{
		return RecvBuffer::SetRecvFolder(folder);
	}

}