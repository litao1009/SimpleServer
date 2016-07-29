#include "TcpMsgQueue.h"

#include <list>
#include <cassert>
#include <atomic>
#include <mutex>
#include <condition_variable>

#include "TcpMessage.h"
#include "Utils/SmartPtr.h"

typedef	std::list<TcpMsgQueue::JobType>		QueueType;

class	TcpMsgQueue::Imp
{
public:

	Imp():StopFlag_(false)
	{
		TotalSize_ = 0;
		MaxSize_	= 0;
	}

	void					Push(const TcpMsgQueue::JobType& theJob)
	{
		{
			std::unique_lock<std::mutex>	lock(Mutex_);

			while (TotalSize_>=MaxSize_ && !StopFlag_)
			{
				IsMaxSize_.wait(lock);
			}

			Queue_.push_back(theJob);
			TotalSize_ += theJob->Buffer_.size();
		}

		HasJob_.notify_one();
	}

	TcpMsgQueue::JobType	Pop()
	{
		std::unique_lock<std::mutex>	lock(Mutex_);

		while (Queue_.empty() && !StopFlag_)
		{
			HasJob_.wait(lock);
		}

		if (StopFlag_.load())
		{
			return JobType();
		}

		assert(!Queue_.empty());

		JobType tmp = Queue_.front();
		Queue_.pop_front();

		IsMaxSize_.notify_one();
		TotalSize_ -= tmp->Buffer_.size();

		return tmp;
	}

	void					Stop()
	{
		StopFlag_.store(true);
		HasJob_.notify_all();
	}

	bool					IsStop() const
	{
		return StopFlag_.load();
	}

	void					Clear()
	{
		std::lock_guard<std::mutex> lock(Mutex_);
		Queue_.clear();
	}

	QueueType				Queue_;
	std::mutex				Mutex_;
	std::condition_variable	HasJob_;
	std::condition_variable	IsMaxSize_;
	std::atomic<bool>		StopFlag_;
	uint32_t				TotalSize_;
	uint32_t				MaxSize_;


};
TcpMsgQueue::TcpMsgQueue():ImpUPtr_(smartPtr::make_unique<TcpMsgQueue::Imp>())
{
	
}


TcpMsgQueue::~TcpMsgQueue()
{

}



void	TcpMsgQueue::SetMaxSize(uint32_t maxSize)
{
	ImpUPtr_->MaxSize_ = maxSize;
}

void	TcpMsgQueue::Push(const TcpMsgQueue::JobType& theJob)
{
	ImpUPtr_->Push(theJob);
}

TcpMsgQueue::JobType		TcpMsgQueue::Pop()
{
	return std::move(ImpUPtr_->Pop());
}

void	TcpMsgQueue::Stop()
{
	ImpUPtr_->Stop();
}

bool	TcpMsgQueue::IsStop() const
{
	return ImpUPtr_->IsStop();
}

void	TcpMsgQueue::Clear()
{
	ImpUPtr_->Clear();
}
