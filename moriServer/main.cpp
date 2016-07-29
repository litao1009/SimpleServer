#ifndef MORI_SERVICE
#ifndef NDEBUG
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include "./vld/vld.h"
#endif // NDEBUG

#include "src/moriServer/moriServer.h"
#include "mori/common.h"
#include "TinyLog.h"

#include <iostream>
#include <cstdlib>

class	moriServerMgr
{
public:

	static	moriServer&	GetInstance()
	{
		static moriServer sInstance;
		return sInstance;
	}
};

void	StopFunc()
{
	if ( moriServerMgr::GetInstance().IsStart() )
	{
		moriServerMgr::GetInstance().Stop();
		moriServerMgr::GetInstance().Join();
	}
}

int main()
{
	atexit(StopFunc);

	{
		LOG_INIT("./Log");

		{
			auto& server = moriServerMgr::GetInstance();

			if ( server.Start() )
			{
				server.Join();
			}

			mori::ReleaseMoriState();
		}

		LOG_UNINIT
	}
}
#endif