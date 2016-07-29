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

	TinyLog��һ������������־�⣬ּ�ڿ�����STDIO���ļ���ӡlog��

	TinyLog���� ǰ/��̨ ���й���ģʽ��֧�ֶ��̹߳����������ڳ�ʼ������Ժ�TinyLog���������̣߳�д���̺߳ͼ�ʱ�̡߳�
	����־��ǰ̨���û��̣߳��������Ժ󣬶�ʱ��ÿ��2s�ӻὫ�ڲ������е���־��Ϣȫ��д���ļ���ע�⣺����STDIO���������
	��ʱ�����ƣ���־���ɼ����������ڶ��̻߳����У���STDIO�����ؽ�����������Ĳ���Ч�ʣ�����

	TinyLogĬ���ṩ������־����INFO/ERROR/TRACE, ��������ERROR/TRACE�������ǰ��cpp�ļ����ƺ�������Ҳ���Զ�����־�ȼ���
	����LOG(LogTag)��LogTag��Ϊ�Զ��弶��
	
	TinyLog�ݲ�֧����־�ȼ��Ĺ��ˡ�

	�����ʽ��LOG_INFOΪ����
	input>>	Log_INFO << "Begin";
	output>>	2013-Aug-24 10:31:46.156007	0xE9C		INFO	Begin
	˵����		<	����  >	<	ʱ��	  >	<�߳�ID	>	<Tag>	<��־����>

	ĿǰTinyLog������ı������ͣ�
	bool,float,double,(unsigned)char/short/int/__int64
	const char/wchar_t *
	std::string/std::wstring
	boost::system::error_code
	boost::asio::ip::tcp::endpoint
	boost::filesystem::path
	boost::thread::id

Optional:
	
	FLUSH_TO_SCREEN�������־�Ƿ������STDIO��Ĭ��������DEBUG�ж��壬RELEASE���޶��塣

Configuration:

	Console(Debug/Release):����̨���;
	Win(Debug/Release):MFC���;

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