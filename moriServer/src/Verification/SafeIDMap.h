#ifndef SafeIDMap_h__
#define SafeIDMap_h__

#pragma once


#include "Utils/Pimp.h"
#include "Utils/PrivateCreator.h"

#include "Utils/strDef.h"
#include "Utils/intDef.h"
#include "Utils/SmartPtr.h"
#include "mori/predef/net.h"

#include "Codec/Codec.h"

#include <boost/noncopyable.hpp>

class	SIDInfo
{
public:

	SIDInfo():UserID_(0) {}

	int32_t						UserID_;
	CodecProtocol::EClientType	ClientType_;
	AStringType					VerifyCode_;
	AStringType					RSAPubKey_;
	AStringType					RSAPriKey_;
};

typedef	std::shared_ptr<SIDInfo>	SIDInfoSPtr;
typedef	std::weak_ptr<SIDInfo>		SIDInfoWPtr;

class	SafeIDMap : boost::noncopyable
{
	DEFINE_PIMP
	DEFINE_PRIVATE_CREATORCLASS

public:
	
	SafeIDMap(PRIVATE_CREATORCLASS_NAME);

	~SafeIDMap();

	static	SafeIDMap&			GetInstance();

public:

	bool						Verify(const Codec::SDecodeContext& dc, const mori::EndPoint& remoteEP);

	void						AddIgnoreName(const AStringType& name);

	void						Insert(const SIDInfoSPtr& idinfo, const mori::EndPoint& remoteEP);

	SIDInfoSPtr					GetIDInfo(const AStringType& verifyCode);

	SIDInfoSPtr					GetIDInfo(const mori::EndPoint& endPoint);

	void						EraseConnection(const mori::EndPoint& remoteEP);

	void						EraseVerifyCode(const AStringType& veriCode);

	const AStringType&			GetCommonPublicKey() const;

	const AStringType&			GetCommonPrivateKey() const;

	AStringType					DecodeVCode(const AStringType& veriCode);

	AStringType					CreateVCode(int32_t userID, int32_t cType);

	void						Clear();
};
#endif // SafeIDMap_h__