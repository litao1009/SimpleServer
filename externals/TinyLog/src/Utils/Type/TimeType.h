#ifndef	_DEF_TIMETYPE_
#define	_DEF_TIMETYPE_

#pragma once
#define BOOST_DATE_TIME_POSIX_STD_CONFIG
#include "Utils/NameSpace/nsPosixtime.h"

typedef	nsPosixtime::millisec				MillisecType;
typedef	nsPosixtime::seconds				SecondsType;
typedef	nsPosixtime::second_clock			SecondClockType;
typedef	nsPosixtime::microsec_clock			MicrosecClockType;


#endif