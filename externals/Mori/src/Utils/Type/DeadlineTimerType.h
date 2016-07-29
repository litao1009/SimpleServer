#ifndef	_DEF_DEADLINETIMER_
#define	_DEF_DEADLINETIMER_

#pragma once

#include "Utils/NameSpace/nsAsio.h"
#include "Utils/SmartPtr.h"

typedef	nsAsio::deadline_timer					DeadlineTimerType;
typedef	smartPtr::shared_ptr<DeadlineTimerType>	DeadlineTimerTypePtr;

#endif