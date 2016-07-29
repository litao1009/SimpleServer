#ifndef Log_h__
#define Log_h__

#pragma once

#ifdef USE_TINYLOG
	#include "Tinylog.h"

	#define TLOG(x) x
#else
	
	#define TLOG(x)

#endif // TINYLOG

#endif // Log_h__
