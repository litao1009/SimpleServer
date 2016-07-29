#ifndef SendBuffer_h__
#define SendBuffer_h__

#pragma once

#include "BufferFwd.h"
#include "mori/net/STransInfoFwd.h"
#include "mori/net/TcpConnectionFwd.h"
#include "mori/predef/file.h"

#include "Utils/Pimp.h"

#include <boost/optional.hpp>
#include <boost/noncopyable.hpp>

namespace mori
{
	class SendBuffer : boost::noncopyable
	{
		DEFINE_PIMP

	public:

		SendBuffer();

		~SendBuffer();

		operator		ConstBuffer();

		void			Update(uint32_t transBytes, STransInfoPtr& transInfoPtr);

		void			Reset();

		uint32_t		Add(TcpConnBuffer& buf, const FileInfoList& files, bool& isNeedSend);

		boost::optional<uint32_t>	GetCurrentMsgID();

		bool			Empty();
	};
}
#endif // SendBuffer_h__