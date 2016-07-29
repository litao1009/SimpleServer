#ifndef SUserInfo_h__
#define SUserInfo_h__

#pragma once

#include "Codec/Codec.h"
#include "mori/predef/net.h"
#include "DataBase/msg-GL.h"
#include <set>

class	SUserInfo
{
public:

	SUserInfo(const Codec::SDecodeContext& dc,const mori::EndPoint& remoteEP):DC_(dc),RemoteEP_(remoteEP) {}

	typedef	std::set<int32_t>	RightsList;

	autoDB::GL_UserInfo_Data		UserInfo_;
	RightsList						Rights_;
	const Codec::SDecodeContext&	DC_;
	const mori::EndPoint&			RemoteEP_;
};
#endif // SUserInfo_h__