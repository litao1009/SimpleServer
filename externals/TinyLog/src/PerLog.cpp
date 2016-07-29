#include "TinyLogConf.h"
#include "TinyLogImp.h"
#include "Utils/SmartPtr.h"
#include "Utils/intDef.h"
#include "Utils/StrDef.h"
#include "Utils/Cast.h"
#include "Utils/Type/TimeType.h"
#include "Utils/Type/TcpType.h"
#include "Utils/Type/ErrCodeType.h"
#include "Utils/Type/PathType.h"

#include <thread>
#include <sstream>

class	PerLog::CImp
{
public:

	CImp():Buf_(nsPosixtime::to_simple_wstring(MicrosecClockType::local_time()))
	{
		Buf_ += L"\t0x";

		auto tid = std::this_thread::get_id();
		std::wstringstream ss;
		ss << std::uppercase << tid;
		Buf_ += ss.str() + L"\t";
	}

	~CImp()
	{
		if ( !AddtionBuf_.empty() )
		{
			Buf_ += AddtionBuf_;
		}

		TinyLogMgr::GetInstance().mImpPtr->PushLog(Buf_);
	}

public:

	WStringType	Buf_;
	WStringType	AddtionBuf_;
};



PerLog::PerLog(CWStringType strType):mImpPtr(smartPtr::make_unique<PerLog::CImp>())
{
	mImpPtr->Buf_ += WStringType(strType) + L"\t";
}


PerLog::PerLog(CWStringType strType, CWStringType strFile, int32_t iLine):mImpPtr(smartPtr::make_unique<PerLog::CImp>())
{
	mImpPtr->Buf_ += WStringType(strType) + L"\t";

	mImpPtr->AddtionBuf_ = std::move(WStringType(L"\t") + WStringType(strFile) + WStringType(L","));
	mImpPtr->AddtionBuf_ += std::to_wstring(iLine);
}

PerLog::PerLog(PerLog&& rValue):mImpPtr(std::move(rValue.mImpPtr))
{

}

PerLog::~PerLog()
{

}


template<>
PerLog&	PerLog::operator << (const uint64_t& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const int64_t& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const uint32_t& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const int32_t& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const uint16_t& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const int16_t& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const uint8_t& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const int8_t& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const float& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const double& Nr)
{
	mImpPtr->Buf_ += std::to_wstring(Nr);
	return *this;
}

template<>
PerLog&	PerLog::operator << (const bool& val)
{
	if ( val )
	{
		mImpPtr->Buf_ += L"true";
	}
	else
	{
		mImpPtr->Buf_ += L"false";
	}
	return *this;
}

template<>
PerLog&	PerLog::operator << (const WStringType& str)
{
	mImpPtr->Buf_ += str;

	return *this;
}

template<>
PerLog&	PerLog::operator << (CWStringType str)
{
	mImpPtr->Buf_ += WStringType(str);

	return *this;
}

template<>
PerLog&	PerLog::operator << (const AStringType& str)
{
	auto res = ToUtfConv<WStringType>(str);
	if ( res )
	{
		mImpPtr->Buf_ += *res;
	}
	return *this;
}

template<>
PerLog&	PerLog::operator << (CAStringType str)
{
	auto res = ToUtfConv<WStringType>(AStringType(str));
	if ( res )
	{
		mImpPtr->Buf_ += *res;
	}
	return *this;
}


template<>
PerLog&	PerLog::operator << (const EndPointType& ep)
{
	auto addr = ep.address().to_string();
	auto res1 = ToUtfConv<WStringType>(addr);
	mImpPtr->Buf_ += L" [";
	mImpPtr->Buf_ += *res1;
	mImpPtr->Buf_ += L":";
	mImpPtr->Buf_ += std::to_wstring(ep.port());
	mImpPtr->Buf_ += L"] ";

	return *this;
}

template<>
PerLog&	PerLog::operator << (const ErrCodeType& ec)
{
	auto res = ToUtfConv<WStringType>(ec.message());
	if ( res )
	{
		mImpPtr->Buf_ += L" {" + std::to_wstring(ec.value()) + L":" + *res;
		mImpPtr->Buf_ += L"} ";
	}

	return *this;
}

template<>
PerLog&	PerLog::operator <<(const std::thread::id& id)
{
	std::wstringstream ss;
	ss << std::uppercase << id;
	mImpPtr->Buf_ += WStringType(L"0x") + ss.str();
	mImpPtr->Buf_ += L" ";

	return *this;
}

template<>
PerLog&	PerLog::operator <<(const PathType& pt)
{
	mImpPtr->Buf_ += pt.wstring();

	return *this;
}