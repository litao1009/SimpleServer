#ifndef STransInfo_h__
#define STransInfo_h__

#pragma once

#include "STransInfoFwd.h"
#include "mori/predef/int.h"

namespace mori
{
	class STransInfo
	{
	public:

		STransInfo():TotalSize_(0),TransSize_(0),MsgID_(0),IsChkFaild(false) {}
		
		uint32_t	TotalSize_;
		uint32_t	TransSize_;
		uint32_t	MsgID_;
		bool		IsChkFaild;
	};
}
#endif // STransInfo_h__
