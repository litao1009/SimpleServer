#ifndef MsgHead_h__
#define MsgHead_h__

#pragma once

#include "Utils/intDef.h"
#include "Utils/Type/StrDef.h"
#include "mori/net/TcpConnectionFwd.h"

namespace mori
{
	class SHeadInfo
	{
	public:

		SHeadInfo():Done_(false),MsgLen_(0),MsgChkSum_(0),Offset_(0) {}
		bool		Done_;
		uint32_t	MsgLen_;
		uint32_t	MsgChkSum_;
		uint32_t	Offset_;

	};

	class MsgHead
	{

	public:

		static	SHeadInfo		OnHead(TcpConnBuffer& headBuf, uint32_t bytesTransfered);

		static	const uint32_t	HeadSize();

		static	void			InitHeadBuf(TcpConnBuffer& headBuf);

		static	void			PackHead(TcpConnBuffer& outBuf);

		static TcpConnBuffer	PackHeadBuffer(const TcpConnBuffer& msgBuf, const FileInfoList& files);
	};
}
#endif // MsgHead_h__