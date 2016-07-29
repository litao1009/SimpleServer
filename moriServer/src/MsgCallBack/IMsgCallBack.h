#ifndef IMsgCallBack_h__
#define IMsgCallBack_h__

#pragma once

#include <functional>

#include "mori/net/TcpConnectionFwd.h"
#include "mori/predef/net.h"

#include "Utils/IReflection.h"
#include "Utils/StrDef.h"
#include "Utils/SmartPtr.h"

#include "Codec/Codec.h"
#include "Data/TcpMsgQueueFwd.h"

#include <vector>
#include <google/protobuf/message.h>

typedef	smartPtr::shared_ptr<google::protobuf::Message>	moriMessageSPtr;


class	SPerSendInfo
{
public:

	SPerSendInfo()
	{
		Encode_.ClientType_ = CodecProtocol::ECT_SERVER;
	}

	moriMessageSPtr			MsgPtr_;
	mori::SendFileList		Files_;
	Codec::SEncodeContext	Encode_;
};
typedef	std::vector<SPerSendInfo>	SendList;


class	SSendInfo
{
public:

	SSendInfo(mori::TcpConnectionWPtr connWPtr, TcpMsgQueue& sendQueue);
	~SSendInfo();

	SPerSendInfo&	Add()
	{
		List_.push_back(SPerSendInfo());
		return List_.back();
	}

	void			Cancel();

	SendList	List_;

private:
	mori::TcpConnectionWPtr	ConnWPtr_;
	TcpMsgQueue&			SendQueue_;
	bool					Cancel_;
};
typedef	smartPtr::shared_ptr<SSendInfo>	SSendInfoSPtr;


class	IMsgCallBack : private IReflection<IMsgCallBack, AStringType>
{
public:

	typedef	BaseTPtr		ReflectionPtr;
	typedef	BaseTFtr		ReflectionFtr;
	typedef Context			ReflectionContext;

	virtual					~IMsgCallBack() {}

	virtual	void			Process( mori::TcpConnBuffer& msgBuf, const mori::RecvFileList& files, uint64_t recvID,
									const mori::EndPoint& remoteEP, const Codec::SDecodeContext& dc, SSendInfoSPtr& sendInfoPtr ) = 0;

public:

	static	ReflectionPtr	CallBackFactory(const AStringType& msgName);

	static	void			Release();
};
#endif // IMsgCallBack_h__