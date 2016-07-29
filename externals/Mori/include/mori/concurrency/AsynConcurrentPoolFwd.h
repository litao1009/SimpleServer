#ifndef AsynConcurrentPoolFwd_h__
#define AsynConcurrentPoolFwd_h__

#pragma once

#include "mori/predef/smartPtr.h"

namespace mori
{
	class			AsynConcurrentPool;

	typedef			mori::unique_ptr<AsynConcurrentPool>	AsynConcurrentPoolPtr;
}

#endif // AsynConcurrentPoolFwd_h__
