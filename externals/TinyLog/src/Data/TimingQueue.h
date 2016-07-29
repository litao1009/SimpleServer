#pragma once

#include <list>
#include <functional>
#include <cassert>
#include <mutex>
#include <condition_variable>
#include <boost/concept_check.hpp>
#include <boost/noncopyable.hpp>


template<typename Job>
class TimingQueue : boost::noncopyable
{
public:

	typedef	Job									JobType;
	typedef	std::list<JobType>					QueueType;

	BOOST_CONCEPT_ASSERT( (boost::SGIAssignable<JobType>) );
	BOOST_CONCEPT_ASSERT( (boost::DefaultConstructible<JobType>) );

public:

	void		Push(JobType& theJob)
	{
		std::lock_guard<std::mutex>	lock(mMutex);
		mQueue.emplace_back(std::move(theJob));
	}

	QueueType	GetQueue()
	{
		QueueType	localQueue;
		{
			std::lock_guard<std::mutex> lock(mMutex);
			mQueue.swap(localQueue);
		}

		return std::move(localQueue);
	}

	void		Clear()
	{
		std::lock_guard<std::mutex> lock(mMutex);
		mQueue.clear();
	}

private:

	QueueType		mQueue;
	std::mutex		mMutex;
};