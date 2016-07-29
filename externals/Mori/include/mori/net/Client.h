#ifndef Client_h__
#define Client_h__

#pragma once

#include "ClientFwd.h"
#include "mori/predef/int.h"
#include "mori/predef/smartPtr.h"
#include "mori/predef/func.h"
#include "mori/predef/sys.h"
#include "mori/predef/file.h"
#include "TcpConnectionFwd.h"

#include <string>
#include <boost/noncopyable.hpp>

namespace mori
{
	typedef	mori::function<void(ErrCode,TcpConnectionSPtr&)>	AsyncCreateConnFtr;
	typedef	mori::function<void(ErrCode)>						LooperFtr;

	class	Client : boost::noncopyable
	{
		MORI_DEFINE_PIMP

	public:

		Client();

		~Client();

		//************************************
		// Method:    SetServerAddress
		// FullName:  mori::Client::SetServerAddress
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: const char * IP
		// Parameter: uint16t port
		//		初始化服务器地址
		//************************************
		void				SetServerAddress(std::string IP, uint16_t port);

		//************************************
		// Method:    CreateConnPtr
		// FullName:  mori::Client::CreateConnPtr
		// Access:    public 
		// Returns:   mori::TcpConnectionSPtr
		// Qualifier:
		// Parameter: ErrCode & ec
		//		同步建立连接
		//************************************
		TcpConnectionSPtr	CreateConnPtr(ErrCode& ec=ErrCode());


		//************************************
		// Method:    AsyncCreateConnPtr
		// FullName:  mori::Client::AsyncCreateConnPtr
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: AsyncCreateConnFtr ftr
		// Parameter: uint32_t timeout
		//		异步建立链接
		//************************************
		void				AsyncCreateConnPtr(AsyncCreateConnFtr ftr, uint32_t timeout = 0);

		
		//************************************
		// Method:    SetLooper
		// FullName:  mori::Client::SetLooper
		// Access:    public 
		// Returns:   uint32t	此次计时的Key
		// Qualifier:
		// Parameter: LooperFtr
		// Parameter: uint32t tick
		//		设置循环调用
		//************************************
		uint32_t			SetLooper(LooperFtr, uint32_t tick);

		//************************************
		// Method:    StopLooper
		// FullName:  mori::Client::StopLooper
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: uint32t key
		//		取消已设置的循环
		//************************************
		void				StopLooper(uint32_t key);

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
		void				Start();

		//************************************
		// Method:    Stop
		// FullName:  mori::Server::Stop
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		停止
		//************************************
		void				Stop();

		//************************************
		// Method:    IsStop
		// FullName:  mori::Server::IsStop
		// Access:    public 
		// Returns:   bool
		// Qualifier: const
		//		是否已停止
		//************************************
		bool				IsStop() const;

		//************************************
		// Method:    Join
		// FullName:  mori::Server::Join
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		等待线程返回
		//************************************
		void				Join();
	};
}
#endif // Client_h__