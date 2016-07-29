#pragma once

#include "Utils/SmartPtr.h"

namespace tinyLog
{
	class			AsynConcurrentPool;

	typedef			smartPtr::unique_ptr<AsynConcurrentPool>	AsynConcurrentPoolPtr;
}