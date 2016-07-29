#include "AsynConcurrentPool.h"
#include "Proactor.h"
#include "Utils/SmartPtr.h"

#include <thread>
#include <atomic>
#include <vector>

namespace tinyLog
{


class	AsynConcurrentPool::CImp
{
public:

	CImp(uint32_t ThreadNr):IsStart_(false),IsStop_(false)
	{
		ThreadNr_	= ThreadNr;
	}

public:

	typedef	std::vector<std::unique_ptr<std::thread>>	ThreadGroupType;

	ThreadGroupType		ThreadGroup_;
	uint32_t			ThreadNr_;
	tinyLog::Proactor	Proactor_;

	std::atomic<bool>	IsStart_;
	std::atomic<bool>	IsStop_;

};

AsynConcurrentPool::AsynConcurrentPool( uint32_t ThreadNr ):mImpPtr(smartPtr::make_unique<AsynConcurrentPool::CImp>(ThreadNr))
{

}

AsynConcurrentPool::~AsynConcurrentPool()
{
	if ( !mImpPtr->IsStop_ )
	{
		mImpPtr->Proactor_.Stop();

		for ( auto& curThread : mImpPtr->ThreadGroup_ )
		{
			curThread->join();
		}
	}
}

void AsynConcurrentPool::Start()
{
	if ( mImpPtr->IsStart_ )
	{
		return;
	}

	for ( uint32_t i=0; i<mImpPtr->ThreadNr_; ++i )
	{
		mImpPtr->ThreadGroup_.emplace_back(new std::thread([&]()
		{
			mImpPtr->Proactor_.GetProactor().run();
		}));
	}

	mImpPtr->IsStart_ = true;
}

uint32_t AsynConcurrentPool::Run()
{
	return mImpPtr->Proactor_.Run();
}

uint32_t AsynConcurrentPool::Run( ErrCodeType& ec )
{
	return mImpPtr->Proactor_.Run(ec);
}

void AsynConcurrentPool::Join()
{
	for ( auto& curThread : mImpPtr->ThreadGroup_ )
	{
		curThread->join();
	}
}

void AsynConcurrentPool::Stop()
{
	mImpPtr->Proactor_.Stop();

	mImpPtr->IsStop_ = true;
}

ProactorType& AsynConcurrentPool::GetProactor()
{
	return mImpPtr->Proactor_.GetProactor();
}

SafeProactorType& AsynConcurrentPool::GetStand()
{
	return mImpPtr->Proactor_.GetStrand();
}

uint32_t AsynConcurrentPool::GetThreadsSize() const
{
	return mImpPtr->ThreadGroup_.size();
}

bool AsynConcurrentPool::IsStop() const
{
	return mImpPtr->IsStop_;
}

}
