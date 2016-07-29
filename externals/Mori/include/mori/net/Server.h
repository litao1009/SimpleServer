#ifndef Server_h__
#define Server_h__

#pragma once

#include "ServerFwd.h"
#include "mori/predef/int.h"
#include "mori/predef/smartPtr.h"
#include "mori/predef/file.h"
#include "TcpConnectionFwd.h"

#include <boost/noncopyable.hpp>

namespace mori
{
	class	Server : boost::noncopyable
	{
		MORI_DEFINE_PIMP

	public:

		Server();

		~Server();

		//************************************
		// Method:    SetThreadSize
		// FullName:  mori::Server::SetThreadSize
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: uint32t threadSize
		//		设置工作线程数量
		//************************************
		void	SetThreadSize(uint32_t threadSize);

		//************************************
		// Method:    AddListenPort
		// FullName:  mori::Server::AddListenPort
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: uint16t listenPort
		//		添加监听端口
		//************************************
		void	AddListenPort(uint16_t listenPort);

		//************************************
		// Method:    SetTimeWheel
		// FullName:  mori::Server::SetTimeWheel
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: uint32t perTick	心跳间隔
		// Parameter: uint32t tickSize	心跳步长
		//		(可选项)设置心跳长度 心跳超时时间=心跳间隔*心跳步长
		//************************************
		void	SetTimeWheel(uint32_t perTick, uint32_t tickSize);

		//************************************
		// Method:    SetOnReceive
		// FullName:  mori::Server::SetOnReceive
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		设置接收回调
		//************************************
		void	SetOnReceive(OnConnReceiveFtr orFtr);

		//************************************
		// Method:    SetRecvFilesFolder
		// FullName:  mori::Server::SetRecvFilesFolder
		// Access:    public 
		// Returns:   bool
		// Qualifier:
		// Parameter: FilePath folder
		//		设置接收文件夹路径
		//************************************
		bool	SetRecvFilesFolder(FilePath folder);

		//************************************
		// Method:    Start
		// FullName:  mori::Server::Start
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		启动
		//************************************
		void	Start();

		//************************************
		// Method:    Stop
		// FullName:  mori::Server::Stop
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		停止
		//************************************
		void	Stop();

		//************************************
		// Method:    IsStop
		// FullName:  mori::Server::IsStop
		// Access:    public 
		// Returns:   bool
		// Qualifier: const
		//		是否已停止
		//************************************
		bool	IsStop() const;

		//************************************
		// Method:    Join
		// FullName:  mori::Server::Join
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		等待线程返回
		//************************************
		void	Join();
	};
}
#endif // Server_h__