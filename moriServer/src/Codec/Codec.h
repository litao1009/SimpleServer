#ifndef Codec_h__
#define Codec_h__

#pragma once

#include "mori/net/TcpConnectionFwd.h"
#include "mori/predef/func.h"
#include "EClientType.pb.h"

#include <string>
#include <google/protobuf/message.h>
#include <boost/optional.hpp>

class	Codec
{
public:

	class	SDecodeContext
	{
	public:
		SDecodeContext():ClientType_(CodecProtocol::EClientType_MAX) {}

		std::string						MsgName_;
		boost::optional<std::string>	VerifyCode_;
		boost::optional<int32_t>		UserID_;
		CodecProtocol::EClientType		ClientType_;
	};

	class	SEncodeContext
	{
	public:

		SEncodeContext():Compress_(false),ClientType_(CodecProtocol::EClientType_MAX) {}

		boost::optional<std::string>	VerifyCode_;
		boost::optional<int32_t>		UserID_;
		CodecProtocol::EClientType		ClientType_;
		std::string						AESKey_;
		std::string						RSAKey_;
		bool							Compress_;
	};

	typedef	mori::function<std::string(SDecodeContext& dc)>	PreChecker;

	static boost::optional<SDecodeContext>	Decode(mori::TcpConnBuffer& buf, mori::TcpConnectionSPtr& connPtr, const std::string& rsaPriKey = std::string(), PreChecker& ftr=PreChecker());

	static mori::TcpConnBuffer				Encode(const google::protobuf::Message& msg, const SEncodeContext& context);
};
#endif // Codec_h__