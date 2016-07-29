#ifndef TcpConnectionFwd_h__
#define TcpConnectionFwd_h__

#pragma once

#include "mori/predef/smartPtr.h"
#include "mori/predef/sys.h"
#include "mori/predef/net.h"
#include "mori/predef/func.h"
#include "mori/predef/file.h"

#include <vector>

namespace mori
{
	class	TcpConnection;

	typedef	mori::shared_ptr<TcpConnection>	TcpConnectionSPtr;
	typedef	mori::weak_ptr<TcpConnection>	TcpConnectionWPtr;

	typedef	std::vector<char>				TcpConnBuffer;

	class	SRecvMsgInfo
	{
	public:
		SRecvMsgInfo():Buffer_(0),IsChkFaild_(false) {}
		SRecvMsgInfo(SRecvMsgInfo&& rhs):Buffer_(rhs.Buffer_),IsChkFaild_(rhs.IsChkFaild_) {}

		TcpConnBuffer	Buffer_;
		bool			IsChkFaild_;
	};

	typedef	mori::function<void(const ErrCode&, SRecvMsgInfo&, RecvFileList&, TcpConnectionSPtr&)>	OnConnReceiveFtr;
	typedef	mori::function<void(uint32_t, const ErrCode&, TcpConnectionSPtr&)>						OnConnSendFtr;
	typedef	mori::function<void(const mori::EndPoint&/*local*/,const mori::EndPoint&/*remote*/)>	OnCloseFtr;
}
#endif // TcpConnectionFwd_h__
