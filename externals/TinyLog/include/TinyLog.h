#ifndef TinyLog_h__
#define TinyLog_h__

#pragma once

#include "./TinyLogConf.h"

/***********************************************************************************
							TinyLog	Ver 0.0.2
								-by	Lee	in	8/25/13
Example:

	#include "TinyLog.h"

	int main()
	{
		LOG_INIT("./LogFile");

		LOG_INFO << "Begin";

		LOG_ERROR << "An Error occured!";

		LOG_UNINIT

		::system("pause");
	}

Introduce:

	TinyLog是一个轻量级的日志库，旨在快速向STDIO和文件打印log。

	TinyLog采用 前/后台 并行工作模式，支持多线程工作环境。在初始化完成以后，TinyLog持有两个线程，写入线程和计时线程。
	当日志在前台（用户线程）被建立以后，定时器每隔2s钟会将内部缓存中的日志信息全部写入文件（注意：对于STDIO的输出不受
	定时器控制，日志生成即输出，因此在多线程环境中，打开STDIO会严重降低整个程序的并发效率！）。

	TinyLog默认提供三种日志级别：INFO/ERROR/TRACE, 区别在于ERROR/TRACE会输出当前的cpp文件名称和行数。也可自定义日志等级，
	调用LOG(LogTag)，LogTag即为自定义级别。
	
	TinyLog暂不支持日志等级的过滤。

	输出格式以LOG_INFO为例：
	input>>	Log_INFO << "Begin";
	output>>	2013-Aug-24 10:31:46.156007	0xE9C		INFO	Begin
	说明：		<	日期  >	<	时间	  >	<线程ID	>	<Tag>	<日志内容>

	目前TinyLog可输出的变量类型：
	bool,float,double,(unsigned)char/short/int/__int64
	const char/wchar_t *
	std::string/std::wstring
	boost::system::error_code
	boost::asio::ip::tcp::endpoint
	boost::filesystem::path
	boost::thread::id

Optional:
	
	FLUSH_TO_SCREEN宏控制日志是否输出到STDIO，默认配置下DEBUG中定义，RELEASE中无定义。

Configuration:

	Console(Debug/Release):控制台输出;
	Win(Debug/Release):MFC输出;

Dependence:
	
	MSVC_VER  > 1400
	boost ver > 1.49
	
***********************************************************************************/


#define LOG_INIT(LogFileName)	TINYLOG_INIT(LogFileName)
#define LOG_UNINIT				TINYLOG_UNINIT

#define LOG_INFO				TINYLOG_INFO
#define LOG_ERROR				TINYLOG_ERROR
#define LOG_TRACE				TINYLOG_TRACE
#define LOG(LogTag)				TINYLOG(LogTag)
#endif // TinyLog_h__