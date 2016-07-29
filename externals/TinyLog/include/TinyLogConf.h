#ifndef TinyLogConf_h__
#define TinyLogConf_h__

#pragma once

#include <boost/optional.hpp>
#include <boost/filesystem/path.hpp>

namespace tinyLog
{
	typedef	boost::filesystem::path	PathType;
}

class	PerLog
{
 	class	CImp;
 	typedef	std::unique_ptr<CImp>	CImpPtr;
	CImpPtr	mImpPtr;

public:

	PerLog(const wchar_t* strType, const wchar_t* strFile, int iLine);

	PerLog(const wchar_t* strType);

	PerLog(PerLog&&);

	~PerLog();

	template<typename T>
	PerLog&	operator << (const T&);

	template<typename T>
	PerLog& operator << ( const boost::optional<T>& val)
	{
		return *this << *val;
	}

	template<typename T>
	PerLog&	operator << (const T*);
};


class TinyLogMgr
{
	friend	class	PerLog;
	class	PrivateCreator;
	class	CImp;
	typedef	std::unique_ptr<CImp>	CImpPtr;
	CImpPtr	mImpPtr;

public:

	static	void		Init(tinyLog::PathType logFile);

	static	TinyLogMgr&	GetInstance();

	static	void		UnInit();

public:

	TinyLogMgr(PrivateCreator,tinyLog::PathType);

	~TinyLogMgr();

public:

	PerLog				CreateLog(const wchar_t* strType, const wchar_t* strFile, int iLine);

	PerLog				CreateLog(const wchar_t* strType);
};

#define TINYLOG_INIT(x)		TinyLogMgr::Init(tinyLog::PathType(x));\
							TINYLOG_INFO << L">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>TinyLog is Begin";

#define TINYLOG_UNINIT		TINYLOG_INFO << L"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<TinyLog is End";\
							TinyLogMgr::UnInit();

#define TINYLOG_INFO		(TinyLogMgr::GetInstance().CreateLog(L"INFO"))
#define TINYLOG_ERROR		(TinyLogMgr::GetInstance().CreateLog(L"ERROR", __FILEW__, __LINE__))
#define TINYLOG_TRACE		(TinyLogMgr::GetInstance().CreateLog(L"TRACE", __FILEW__, __LINE__))
#define TINYLOG(x)			(TinyLogMgr::GetInstance().CreateLog(L#x))
#endif // TinyLogConf_h__