#include "TimeWheel.h"

#include "mori/concurrency/AsynConcurrentPool.h"
#include "mori/predef/func.h"

#include "AsyncCore/AsyncProactorImp.h"

#include "Utils/SmartPtr.h"
#include "Utils/Type/DeadlineTimerType.h"

#include "Log.h"

#include <mutex>
#include <unordered_set>
#include <boost/circular_buffer.hpp>

static auto g_TimeWheelInitFunc_ = []()
{
	TLOG(LOG_INFO << L" Mori:Start Thread for mori::TimeWheel" ;)
};
static auto g_TimeWheelJoinFunc_ = []()
{
	TLOG(LOG_INFO << L" Mori:Join All Threads for mori::TimeWheel";)
};

namespace mori
{
	typedef	std::unordered_set<ITcpContextSPtr>		ConnListType;
	typedef	boost::circular_buffer<ConnListType>	ConnCircularBuffer;

	class	TimeWheel::Imp : public smartPtr::enable_shared_from_this<TimeWheel::Imp>
	{
	public:
		Imp( uint32_t peerClock, uint32_t bufferLen ):
			ThreadPool_(1, g_TimeWheelInitFunc_, g_TimeWheelJoinFunc_),
			CircularBuffer_(bufferLen),
			Timer_(ThreadPool_.GetProactor().ImpSPtr_->ProactorRef_)
		{
			CircularBuffer_.push_back(ConnListType());
			IsStop_ = false;
			PeerClock_ = peerClock;
		}

		void	Tick(ErrCode ec)
		{
			if ( IsStop_ )
			{
				return;
			}

			{
				std::lock_guard<std::mutex> lock(Mutex_);
				CircularBuffer_.push_back(ConnListType());
			}

			Timer_.expires_from_now(boost::posix_time::seconds(PeerClock_));
			Timer_.async_wait(mori::bind(&TimeWheel::Imp::Tick, shared_from_this(), mori::_1));
		}

	public:

		bool				IsStop_;
		uint32_t			PeerClock_;
		std::mutex			Mutex_;

		AsynConcurrentPool	ThreadPool_;	
		ConnCircularBuffer	CircularBuffer_;	
		DeadlineTimerType	Timer_;
	};



	TimeWheel::TimeWheel( uint32_t peerClock, uint32_t bufferLen ):ImpSPtr_(smartPtr::make_shared<TimeWheel::Imp>(peerClock,bufferLen))
	{

	}

	TimeWheel::~TimeWheel()
	{
		
	}


	void TimeWheel::Insert( ITcpContextSPtr& connPtr )
	{
		if ( ImpSPtr_->IsStop_ )
		{
			return;
		}

		{
			std::lock_guard<std::mutex> lock(ImpSPtr_->Mutex_);
			ImpSPtr_->CircularBuffer_.back().insert(connPtr);
		}
	}

	void TimeWheel::Start()
	{
		ImpSPtr_->ThreadPool_.Start();
		ImpSPtr_->Timer_.expires_from_now(boost::posix_time::seconds(ImpSPtr_->PeerClock_));
		ImpSPtr_->Timer_.async_wait(mori::bind(&TimeWheel::Imp::Tick, ImpSPtr_, mori::_1));
	}

	void TimeWheel::Stop()
	{
		ErrCode ec;
		ImpSPtr_->IsStop_ = true;
		ImpSPtr_->Timer_.cancel(ec);
		ImpSPtr_->ThreadPool_.Stop();
	}

	void TimeWheel::Join()
	{
		ImpSPtr_->ThreadPool_.Join();
	}

}