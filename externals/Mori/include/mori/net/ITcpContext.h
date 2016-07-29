#ifndef ITcpContext_h__
#define ITcpContext_h__

#pragma once

#include "mori/predef/smartPtr.h"
#include "mori/net/TcpConnectionFwd.h"

namespace mori
{
	class	ITcpContext;
	class	ITcpContext
	{
	public:
		ITcpContext(TcpConnectionWPtr& connPtr) {}

		virtual	void	Update() {}

		virtual ~ITcpContext() {};
	};

	typedef	mori::shared_ptr<ITcpContext>	ITcpContextSPtr;
	typedef	mori::weak_ptr<ITcpContext>		ITcpContextWPtr;

};
#endif // ITcpContext_h__