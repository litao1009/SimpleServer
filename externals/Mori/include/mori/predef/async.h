#ifndef mori_async_h__
#define mori_async_h__

#pragma once

#include "mori/predef/smartPtr.h"

namespace mori
{
	class	AsyncProactor
	{
	public:

		class	Implement;
		mori::shared_ptr<Implement>	ImpSPtr_;
	};
}
#endif // async_h__