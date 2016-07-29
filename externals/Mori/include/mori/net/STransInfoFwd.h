#ifndef STransInfoFwd_h__
#define STransInfoFwd_h__

#pragma once

#include "mori/predef/func.h"
#include "mori/predef/smartPtr.h"

namespace mori
{
	class	STransInfo;
	typedef	mori::shared_ptr<STransInfo>			STransInfoPtr;

	typedef	mori::function<void(const STransInfo&)>	OnConnMonitorFtr;
}
#endif // STransInfoFwd_h__
