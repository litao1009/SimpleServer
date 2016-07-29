#ifndef RecvBuffer_h__
#define RecvBuffer_h__

#pragma once

#include "BufferFwd.h"
#include "mori/net/STransInfoFwd.h"
#include "mori/net/TcpConnectionFwd.h"
#include "mori/predef/file.h"

#include "Utils/Pimp.h"

#include <boost/noncopyable.hpp>

namespace mori
{
	class RecvBuffer : boost::noncopyable
	{
		DEFINE_PIMP

	public:

		RecvBuffer();

		~RecvBuffer();
		
		operator		MutableBuffer();

		void			Update(uint32_t transBytes, STransInfoPtr& transInfo);

		bool			IsFinish();

		SRecvMsgInfo	GetMsg();

		RecvFileList	GetRecvFileList();

		void			Reset();

		static	bool	SetRecvFolder(const FilePath& folder);
	};
}
#endif // RecvBuffer_h__