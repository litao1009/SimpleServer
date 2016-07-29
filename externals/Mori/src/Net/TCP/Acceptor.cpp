#include "Acceptor.h"
#include "mori/concurrency/AsynConcurrentPool.h"
#include "mori/predef/smartPtr.h"
#include "AsyncCore/AsyncProactorImp.h"

#include "Utils/SmartPtr.h"
#include "Utils/Type/TcpType.h"

#include <cassert>

#include "Log.h"

static auto g_AcceptorInitFunc_ = []()
{
	TLOG(LOG_INFO << L" Mori:Start Thread for mori::Acceptor" ;)
};
static auto g_AcceptorJoinFunc_ = []()
{
	TLOG(LOG_INFO << L" Mori:Join All Threads for mori::Acceptor";)
};

namespace mori
{
	typedef	mori::unique_ptr<AcceptorType>	AcceptorUPtr;

	class	Acceptor::Imp
	{
	public:

		Imp(ProactorType& proactor, uint16_t Port):AsynPool_(1, g_AcceptorInitFunc_, g_AcceptorJoinFunc_),DispatchProactor_(proactor)
		{
			Port_ = Port;
			OnAcceptFtr_ = [](SocketTypeUPtr&){};
		}

		void	Accept()
		{
			assert(AcceptorPtr_);

			// create new socket instance
			SCopybleWrap<SocketTypeUPtr>::SCopyblePtr copySockPtr =
				mori::make_shared<SCopybleWrap<SocketTypeUPtr>>(CreateSockPtr());

			// start async accept
			AcceptorPtr_->async_accept(*(copySockPtr->Ptr_), /*std::bind(*/[this,copySockPtr](const ErrCode& ec)
			{
				if ( !ec )
				{
					if ( AsynPool_.IsStop() )
					{
						return;
					}

					// start new accept
					Accept();

					// on callback
					OnAcceptFtr_(copySockPtr->Ptr_);		
				}
				else
				{
					TLOG(LOG_INFO << L" Mori:Acceptor:" << ec;)
				}
			}/*, std::placeholders::_1)*/);
		}

		SocketTypeUPtr	CreateSockPtr()
		{
			SocketTypeUPtr sockPtr = std::move(smartPtr::make_unique<SocketType>(DispatchProactor_));

			return std::move(sockPtr);
		}

	public:

		AsynConcurrentPool	AsynPool_;
		ProactorType&		DispatchProactor_;
		uint16_t			Port_;
		AcceptorUPtr		AcceptorPtr_;
		OnAcceptFtr			OnAcceptFtr_;
	};

	
	Acceptor::Acceptor(ProactorType& proactor, uint16_t Port):ImpUPtr_(smartPtr::make_unique<Acceptor::Imp>(proactor, Port))
	{
		
	}

	Acceptor::~Acceptor()
	{

	}

	void Acceptor::Start()
	{
		if ( ImpUPtr_->AcceptorPtr_ )
		{
			return;
		}

		ImpUPtr_->AsynPool_.Start();

		ImpUPtr_->AcceptorPtr_ = std::move(smartPtr::make_unique<AcceptorType>(ImpUPtr_->AsynPool_.GetProactor().ImpSPtr_->ProactorRef_,
																				EndPointType(TcpType::v4(), ImpUPtr_->Port_)));

		ImpUPtr_->Accept();
	}

	void Acceptor::Stop()
	{
		ErrCode ec;

		ImpUPtr_->AsynPool_.Stop();
		ImpUPtr_->AcceptorPtr_->close(ec);

		TLOG(LOG_INFO << L" Mori:Stop Accept on port: " << ImpUPtr_->Port_;)
	}

	void Acceptor::Join()
	{
		ImpUPtr_->AsynPool_.Join();
	}

	void Acceptor::SetOnAccept( OnAcceptFtr ftr )
	{
		if ( ftr )
		{
			ImpUPtr_->OnAcceptFtr_ = ftr;
		}
		else
		{
			TLOG(LOG_ERROR << L" Mori:Can not set the callback function";)
		}
	}

}

