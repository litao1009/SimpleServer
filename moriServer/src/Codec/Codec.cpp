#include "Codec.h"
#include "Codec.pb.h"
#include "zlib.h"
#include "Encrypt.h"

#ifndef _WIN32_WINNT
#define _WIN32_WINNT  0x0501
#endif

#include <cassert>
#include <boost/asio/detail/socket_ops.hpp>

boost::optional<Codec::SDecodeContext>	Codec::Decode( mori::TcpConnBuffer& buf, mori::TcpConnectionSPtr& connPtr, const std::string& rsaPriKey, PreChecker& ftr )
{
	CodecProtocol::Codec decodeMsg;

	if ( buf.size() < sizeof(uint32_t) )
	{
		return boost::optional<Codec::SDecodeContext>();
	}

	uint32_t* pSize = reinterpret_cast<uint32_t*>(buf.data());
	*pSize = boost::asio::detail::socket_ops::network_to_host_long(*pSize);
	uint32_t msgSize = *pSize;

	if ( msgSize > buf.size()-sizeof(uint32_t) )
	{
		return boost::optional<Codec::SDecodeContext>();
	}

	if ( !decodeMsg.ParseFromArray(buf.data()+sizeof(uint32_t), msgSize) )
	{
		return boost::optional<SDecodeContext>();
	}

	std::copy(buf.begin()+sizeof(uint32_t)+msgSize, buf.end(), buf.begin());
	buf.resize(buf.size()-sizeof(uint32_t)-msgSize);

	SDecodeContext ret;
	ret.MsgName_	= decodeMsg.msgname();
	ret.ClientType_ = decodeMsg.clienttype();
	if ( decodeMsg.has_userid() )
	{
		ret.UserID_	= decodeMsg.userid();
	}
	
	if ( decodeMsg.has_verifycode() )
	{
		ret.VerifyCode_ = decodeMsg.verifycode();
	}

	if ( decodeMsg.has_rawsize() )
	{
		auto unCompSize = decodeMsg.rawsize();

		if ( 0 == unCompSize )
		{
			buf.resize(0);
		}
		else
		{
			mori::TcpConnBuffer tmpBuf(unCompSize);

			auto err = uncompress(reinterpret_cast<Bytef*>(tmpBuf.data()), reinterpret_cast<uLongf*>(&unCompSize),
				reinterpret_cast<const Bytef*>(buf.data()), buf.size());
			if ( Z_OK != err )
			{
				return boost::optional<SDecodeContext>();
			}

			buf.swap(tmpBuf);
		}		
	}

	bool useNewKey = false;
	std::string newKey;
	if ( ftr )
	{
		newKey = ftr(ret);
		if ( !newKey.empty() )
		{
			useNewKey = true;
		}
	}

	if ( decodeMsg.rsaencode() )
	{
		if ( !decodeMsg.has_aeskey() || rsaPriKey.empty() )
		{
			return boost::optional<SDecodeContext>();
		}

		auto aesDecode = FastEncrypt::RSA_PriDecrypt(useNewKey?newKey:rsaPriKey, decodeMsg.aeskey());
		if ( !aesDecode )
		{
			return boost::optional<SDecodeContext>();
		}

		decodeMsg.mutable_aeskey()->swap(*aesDecode);
	}

	if ( decodeMsg.has_aeskey() )
	{
		auto tmpBuf = std::move(FastEncrypt::AES_CBCDecrypt(decodeMsg.aeskey(), buf.data(), buf.size()));
		buf.resize(tmpBuf.size());
		std::copy(tmpBuf.begin(), tmpBuf.end(), buf.begin());
	}

	return ret;
}

mori::TcpConnBuffer						Codec::Encode( const google::protobuf::Message& msg, const SEncodeContext& context )
{
	assert(msg.IsInitialized());

	CodecProtocol::Codec encodeMsg;
	encodeMsg.set_msgname(msg.GetDescriptor()->full_name());
	encodeMsg.set_clienttype(context.ClientType_);
	if ( context.UserID_ )
	{
		encodeMsg.set_userid(*context.UserID_);
	}
	if ( context.VerifyCode_ )
	{
		encodeMsg.set_verifycode(*context.VerifyCode_);
	}

	std::string msgBuf;
	msg.SerializeToString(&msgBuf);

	auto bContinue = true;
	auto step = 0;
	while ( bContinue )
	{	
		switch (step)
		{
		case 0:
			{
				if ( !context.AESKey_.empty() )
				{
					msgBuf = FastEncrypt::AES_CBCEncrypt(context.AESKey_, msgBuf);
					encodeMsg.set_aeskey(context.AESKey_);
				}

				++step;
			}break;
		case 1:
			{
				if ( !context.RSAKey_.empty() && !context.AESKey_.empty() )
				{
					auto EncryptAESKey = FastEncrypt::RSA_PubEncrypt(context.RSAKey_, context.AESKey_);
					encodeMsg.mutable_aeskey()->swap(EncryptAESKey);
					encodeMsg.set_rsaencode(true);
				}

				++step;
			}
			break;
		case 2:
			{
				if ( context.Compress_ )
				{
					auto compSize = compressBound(msgBuf.size());
					std::string tmpbuf;
					tmpbuf.resize(compSize);

					auto err = compress(reinterpret_cast<Bytef*>(&tmpbuf[0]), &compSize, reinterpret_cast<const Bytef*>(msgBuf.data()), msgBuf.size());
					if ( Z_OK != err )
					{
						assert(0);
						bContinue = false;
					}
					else
					{
						encodeMsg.set_rawsize(msgBuf.size());

						msgBuf.clear();
						tmpbuf.resize(compSize);
						
						msgBuf.swap(tmpbuf);
					}
				}

				++step;
			}
			break;
		default:
			{
				bContinue = false;
			}
			break;
		}
	}

	mori::TcpConnBuffer ret(sizeof(uint32_t)+encodeMsg.ByteSize());

	encodeMsg.SerializeToArray(ret.data()+sizeof(uint32_t), ret.size()-sizeof(uint32_t));
	
	uint32_t* pSize = reinterpret_cast<uint32_t*>(ret.data());
	*pSize = boost::asio::detail::socket_ops::host_to_network_long(encodeMsg.ByteSize());

	ret.reserve(ret.size()+msgBuf.size());
	std::copy(msgBuf.begin(), msgBuf.end(), std::back_inserter(ret));

	return std::move(ret);
}
