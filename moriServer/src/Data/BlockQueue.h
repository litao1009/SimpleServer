#pragma once

#include <list>
#include <cassert>
#include <boost/concept_check.hpp>
#include <boost/noncopyable.hpp>
#include <atomic>
#include <mutex>
#include <condition_variable>


template<typename Job>
class BlockQueue : boost::noncopyable
{
public:
	typedef	Job									JobType;
	typedef	std::list<JobType>					QueueType;

	BOOST_CONCEPT_ASSERT( (boost::SGIAssignable<JobType>) );
	BOOST_CONCEPT_ASSERT( (boost::DefaultConstructible<JobType>) );

public:

	BlockQueue():StopFlag_(false)
	{
		
	}

public:

	void		Push(const JobType& theJob)
	{
		{
			std::lock_guard<std::mutex>	lock(Mutex_);
			Queue_.push_back(theJob);
		}
		HasJob_.notify_one();
	}

	void		Emplace(JobType& theJob)
	{
		{
			std::lock_guard<std::mutex>	lock(Mutex_);
			Queue_.emplace_back(std::move(theJob));
		}
		HasJob_.notify_one();
	}

	JobType		Pop()
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

		JobType tmp(std::move(Queue_.front()));
		Queue_.pop_front();

		return std::move(tmp);
	}

	void		Stop()
	{
		StopFlag_.store(true);
		//HasJob_.notify_all();
	}

	bool		IsStop() const
	{
		return StopFlag_.load();
	}

	void		Clear()
	{
		std::lock_guard<std::mutex> lock(Mutex_);
		Queue_.clear();
	}

private:

	QueueType					Queue_;
	std::mutex					Mutex_;
	std::condition_variable		HasJob_;
	std::atomic<bool>			StopFlag_;
};