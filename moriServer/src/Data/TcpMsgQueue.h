#ifndef TcpMsgQueue_h__
#define TcpMsgQueue_h__

#pragma once

#include <list>
#include <cassert>
#include <boost/noncopyable.hpp>
#include <atomic>

#include "TcpMessageFwd.h"
#include "Utils/intDef.h"
#include "Utils/Pimp.h"



class TcpMsgQueue : boost::noncopyable
{
	DEFINE_PIMP

public:

	typedef	STcpMessageSPtr		JobType;

public:

				TcpMsgQueue();

				~TcpMsgQueue();

public:

	void		SetMaxSize(uint32_t maxSize);

	void		Push(const JobType& theJob);

	JobType		Pop();

	void		Stop();

	bool		IsStop() const;

	void		Clear();
};

#endif // TcpMsgQueue_h__
