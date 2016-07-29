#include "IMsgCallBack.h"
#include "mori/net/TcpConnection.h"

#include "Data/TcpMsgQueue.h"
#include "Data/TcpMessage.h"

#include <google/protobuf/stubs/common.h>
#include <unordered_map>
#include <cassert>


IMsgCallBack::ReflectionPtr IMsgCallBack::CallBackFactory(const AStringType& msgName)
{
	return IReflection::Factory(msgName);
}

void			IMsgCallBack::Release()
{
	IReflection::Release();
	google::protobuf::ShutdownProtobufLibrary();
}

SSendInfo::SSendInfo( mori::TcpConnectionWPtr connWPtr, TcpMsgQueue& sendQueue ):ConnWPtr_(connWPtr),SendQueue_(sendQueue)
{
	Cancel_ = false;
}

SSendInfo::~SSendInfo()
{
	if ( Cancel_ )
	{
		return;
	}

	auto connSPtr = ConnWPtr_.lock();
	if ( connSPtr && connSPtr->IsWorking() && !SendQueue_.IsStop() )
	{
		for ( auto& perSend : List_ )
		{
			mori::TcpConnBuffer buf;

			if ( perSend.MsgPtr_ )
			{
				buf = Codec::Encode(*perSend.MsgPtr_, perSend.Encode_);
			}

			if ( buf.empty() && perSend.Files_.empty() )
			{
				continue;;
			}

			auto msgPtr = smartPtr::make_shared<STcpMessage>(std::move(buf), perSend.Files_, connSPtr);
			SendQueue_.Push(msgPtr);
		}
	}
}

void SSendInfo::Cancel()
{
	Cancel_ = true;
}
