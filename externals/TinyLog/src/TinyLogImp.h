#pragma once

#include "TinyLog.h"
#include "AsyncCore/AsynConcurrentPool.h"
#include "Data/TimingQueue.h"
#include "Utils/NameSpace/nsPosixtime.h"
#include "Utils/Type/DeadlineTimerType.h"
#include "Utils/Type/FileType.h"
#include "Utils/StrDef.h"

#include <mutex>

class	TinyLogMgr::CImp
{
public:

	CImp();

	~CImp();

	void	TimeWrite();

	void	OnTimeingWrite();

	void	Start();

	void	Stop();

	void	PushLog(WStringType& log);

public:

	tinyLog::AsynConcurrentPool			AsynPool_;
	DeadlineTimerType					Timer_;
	TimingQueue<WStringType>			TimeingQueue_;
	nsPosixtime::seconds				Tick_;
	OutFileType							Ofs_;

#ifdef FLUSH_TO_SCREEN
	std::mutex							IOMutex_;
#endif
};