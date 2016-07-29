#ifndef SendBufferNode_h__
#define SendBufferNode_h__

#pragma once

#include "BufferFwd.h"
#include "mori/net/TcpConnectionFwd.h"
#include "mori/predef/file.h"
#include "mori/net/STransInfoFwd.h"

#include "Utils/intDef.h"
#include "Utils/Pimp.h"

#include <boost/noncopyable.hpp>

namespace mori
{
	class	SendBufferNode : boost::noncopyable
	{
		DEFINE_PIMP

	public:

		SendBufferNode(uint32_t msgID, TcpConnBuffer& buf, const FileInfoList& files);

		~SendBufferNode();

		void		Upate( uint32_t transBytes, STransInfoPtr& transInfoPtr );

		bool		IsFinish();

		uint32_t	GetID() const;

		operator	ConstBuffer();
	};
}
#endif // SendBufferNode_h__