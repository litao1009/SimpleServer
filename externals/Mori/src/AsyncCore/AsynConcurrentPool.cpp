#include "mori/concurrency/AsynConcurrentPool.h"

#include "Proactor.h"
#include "AsyncCore/AsyncProactorImp.h"

#include "Utils/SmartPtr.h"
#include "Utils/type/ThreadType.h"
#include "Utils/Type/StrDef.h"

#include <atomic>

namespace mori
{

	class	AsynConcurrentPool::Imp
	{
	public:

		Imp(uint32_t ThreadNr, PostFunc func, PostFunc joinFunc):InitFunc_(func),JoinFunc_(joinFunc),IsStart_(false),IsStop_(false)
		{
			ThreadNr_	= ThreadNr;
		}

		~Imp()
		{

		}

	public:

		ThreadGroupType		ThreadGroup_;
		uint32_t			ThreadNr_;
		Proactor			Proactor_;
		PostFunc			InitFunc_;
		PostFunc			JoinFunc_;

		typedef	std::atomic<bool>	SafeBool;

		SafeBool			IsStart_;
		SafeBool			IsStop_;
	};

	AsynConcurrentPool::AsynConcurrentPool( uint32_t ThreadNr, PostFunc func, PostFunc joinFunc):
		ImpUPtr_(smartPtr::make_unique<AsynConcurrentPool::Imp>(ThreadNr, func, joinFunc))
	{
		
	}

	AsynConcurrentPool::~AsynConcurrentPool()
	{
		auto& imp_ = *ImpUPtr_;

		if ( !imp_.IsStop_.load() )
		{
			imp_.Proactor_.Stop();

			for ( auto& curThread : imp_.ThreadGroup_ )
			{
				curThread->join();
			}
		}
	}

	void AsynConcurrentPool::Start()
	{
		if ( ImpUPtr_->IsStart_.load() )
		{
			return;
		}

		// start threads
		for ( uint32_t i=0; i<ImpUPtr_->ThreadNr_; ++i )
		{
			ImpUPtr_->ThreadGroup_.emplace_back(new ThreadType([&]()
			{
				if ( ImpUPtr_->InitFunc_ )
				{
					ImpUPtr_->InitFunc_();
				}

				ImpUPtr_->Proactor_.GetProactor().run();
			}));
		}

		ImpUPtr_->IsStart_.store(true);
	}

	uint32_t AsynConcurrentPool::Run()
	{
		return ImpUPtr_->Proactor_.Run();
	}

	uint32_t AsynConcurrentPool::Run( ErrCode& ec )
	{
		return ImpUPtr_->Proactor_.Run(ec);
	}

	void AsynConcurrentPool::Join()
	{
		for ( auto& curThread : ImpUPtr_->ThreadGroup_ )
		{
			curThread->join();
		}

		if ( ImpUPtr_->JoinFunc_ )
		{
			ImpUPtr_->JoinFunc_();
		}
	}

	void AsynConcurrentPool::Stop()
	{
		ImpUPtr_->Proactor_.Stop();

		ImpUPtr_->IsStop_.store(true);
	}


	bool AsynConcurrentPool::IsStop() const
	{
		return ImpUPtr_->IsStop_.load();
	}


	AsyncProactor AsynConcurrentPool::GetProactor()
	{
		AsyncProactor ap;
		ap.ImpSPtr_ = smartPtr::make_shared<AsyncProactor::Implement>(ImpUPtr_->Proactor_.GetProactor());

		return ap;
	}

	uint32_t AsynConcurrentPool::GetThreadsSize() const
	{
		return ImpUPtr_->ThreadGroup_.size();
	}

	void AsynConcurrentPool::Post( PostFunc ftr )
	{
		ImpUPtr_->Proactor_.GetProactor().post(ftr);
	}

}