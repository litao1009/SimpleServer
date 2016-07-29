#include "TinyLogImp.h"
#include "Utils/Cast.h"


TinyLogMgr::CImp::CImp():AsynPool_(1),Timer_(AsynPool_.GetProactor()),Tick_(nsPosixtime::seconds(2))
{

}

TinyLogMgr::CImp::~CImp()
{

}

void	TinyLogMgr::CImp::TimeWrite()
{
	OnTimeingWrite();

	if ( AsynPool_.IsStop() )
	{
		return;
	}
	
	Timer_.expires_from_now(Tick_);
	Timer_.async_wait([this](boost::system::error_code ec)
	{
		if ( !ec )
		{
			TimeWrite();
		}		
	});
}

void	TinyLogMgr::CImp::OnTimeingWrite()
{
	auto logQueue = std::move(TimeingQueue_.GetQueue());

	AStringType log;
	for ( auto& str : logQueue )
	{
		auto res = FromUtfConv(str);
		if ( res )
		{
			log += *res + "\n";
		}
	}

	if ( !log.empty() )
	{
		Ofs_.write(log.data(), log.size());
		Ofs_.flush();
	}
}

void	TinyLogMgr::CImp::Start()
{
	AsynPool_.Start();
}

void	TinyLogMgr::CImp::Stop()
{
	Timer_.cancel();
	AsynPool_.Stop();
	AsynPool_.Join();

	OnTimeingWrite();

	Ofs_.close();
	TimeingQueue_.Clear();
}

void	TinyLogMgr::CImp::PushLog(WStringType& log)
{
#ifdef FLUSH_TO_SCREEN
	#ifdef OUTPUT_TO_DBGVIEW
		{		
			std::lock_guard<std::mutex> lock(IOMutex_);
		#ifdef _UNICODE		
			OutputDebugString(WStringType(log+L"\n").c_str());
		#else
				auto toScreen = *(FromUtfConv(log));
			OutputDebugString(WStringType(toScreen+"\n").c_str());
		#endif
		}

	#else
		auto toScreen = *(FromUtfConv(log));
		{
			std::lock_guard<std::mutex> lock(IOMutex_);
			std::cout << toScreen << std::endl;
		}
	#endif

#endif

	TimeingQueue_.Push(log);
}