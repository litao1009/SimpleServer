#ifndef TcpConnection_h__
#define TcpConnection_h__

#pragma once

#include "mori/predef/net.h"
#include "TcpConnectionFwd.h"
#include "STransInfoFwd.h"
#include "ITcpContext.h"

#include <boost/noncopyable.hpp>
#include <boost/optional.hpp>

namespace mori
{
	class	TcpConnection : public mori::enable_shared_from_this<TcpConnection>, boost::noncopyable
	{
		MORI_DEFINE_PIMP

	public:

	//************************************
	// Method:    TcpConnection
	// FullName:  TcpConnection::TcpConnection
	// Access:    public 
	// Returns:   
	// Qualifier:
	// Parameter: SocketTypePtr & sockPtr
	//************************************
	TcpConnection(TcpSocket& sock);

	~TcpConnection();

	//************************************
	// Method:    Start
	// FullName:  TcpConnection::Start
	// Access:    public 
	// Returns:   bool
	// Qualifier:
	//		启动
	//************************************
	bool				StartRead();

	//************************************
	// Method:    ShutDown
	// FullName:  mori::TcpConnection::ShutDown
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: bool clearOnRecv	是否清空回调
	//		关闭读/写
	//************************************
	void				ShutDown(bool clearOnRecv= false);

	bool				IsWorking();

	//************************************
	// Method:    SetOnRecive
	// FullName:  TcpConnection::SetOnRecive
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnConnReciveFtr func
	//		设置接收回调
	//************************************
	void				SetOnReceive(OnConnReceiveFtr func);

	//************************************
	// Method:    SetOnSend
	// FullName:  TcpConnection::SetOnSend
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnConnSendFtr func
	//		设置发送回调
	//************************************
	void				SetOnSend(OnConnSendFtr func);

	//************************************
	// Method:    SetOnReciveMonitor
	// FullName:  mori::TcpConnection::SetOnReciveMonitor
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnConnMonitorFtr func
	//		(可选)设置接收监视回调(检测每一次的数据包传送大小)
	//************************************
	void				SetOnReciveMonitor(OnConnMonitorFtr func);

	//************************************
	// Method:    HasOnReciveMonitor
	// FullName:  mori::TcpConnection::HasOnReciveMonitor
	// Access:    public 
	// Returns:   bool
	// Qualifier: const
	//		查询接收监视回调
	//************************************
	bool				HasOnReciveMonitor() const;

	//************************************
	// Method:    SetOnSendMonitor
	// FullName:  mori::TcpConnection::SetOnSendMonitor
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnConnMonitorFtr func
	//		(可选)设置发送监视回调(检测每一次的数据包传送大小)
	//************************************
	void				SetOnSendMonitor(OnConnMonitorFtr func);

	//************************************
	// Method:    HasOnSendMonitor
	// FullName:  mori::TcpConnection::HasOnSendMonitor
	// Access:    public 
	// Returns:   bool
	// Qualifier: const
	//		查询发送监视回调
	//************************************
	bool				HasOnSendMonitor() const;

	//************************************
	// Method:    IsSending
	// FullName:  mori::TcpConnection::IsSending
	// Access:    public 
	// Returns:   bool
	// Qualifier: const
	//		该链接是否正在发送数据
	//************************************
	bool				IsSending() const;

	//************************************
	// Method:    SetOnClose
	// FullName:  mori::TcpConnection::SetOnClose
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnCloseFtr func
	//		（可选）设置关闭回调
	//************************************
	void				SetOnClose(OnCloseFtr func);

	//************************************
	// Method:    HasOnClose
	// FullName:  mori::TcpConnection::HasOnClose
	// Access:    public 
	// Returns:   bool
	// Qualifier: const
	//		查询关闭回调
	//************************************
	bool				HasOnClose() const;

	//************************************
	// Method:    Send
	// FullName:  TcpConnection::Send
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: BufferType & buf
	//		发送buf(拷贝)
	//************************************
	boost::optional<uint32_t>	Send(const TcpConnBuffer& buf);

	//************************************
	// Method:    Send
	// FullName:  mori::TcpConnection::Send
	// Access:    public 
	// Returns:   boost::optional<uint32_t>
	// Qualifier:
	// Parameter: TcpConnBuffer & & buf
	//		发送buf
	//************************************
	boost::optional<uint32_t>	Send(TcpConnBuffer&& buf);

	//************************************
	// Method:    Send
	// FullName:  mori::TcpConnection::Send
	// Access:    public 
	// Returns:   boost::optional<uint32_t>
	// Qualifier:
	// Parameter: FileList & files
	//		发送文件
	//************************************
	boost::optional<uint32_t>	Send(SendFileList& files);

	//************************************
	// Method:    Send
	// FullName:  mori::TcpConnection::Send
	// Access:    public 
	// Returns:   boost::optional<uint32_t>
	// Qualifier:
	// Parameter: TcpConnBuffer & buf
	// Parameter: FileList & files
	//		发送buf(拷贝)和文件
	//************************************
	boost::optional<uint32_t>	Send(const TcpConnBuffer& buf, SendFileList& files);

	//************************************
	// Method:    Send
	// FullName:  mori::TcpConnection::Send
	// Access:    public 
	// Returns:   boost::optional<uint32_t>
	// Qualifier:
	// Parameter: TcpConnBuffer & & buf
	// Parameter: SendFileList & files
	//		发送buf(拷贝)和文件
	//************************************
	boost::optional<uint32_t>	Send(TcpConnBuffer&& buf, SendFileList& files);

	//************************************
	// Method:    SetContext
	// FullName:  TcpConnection::SetContext
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: TcpContextWPtr contextPtr
	//		设置上下文
	//************************************
	void				SetContext(ITcpContextWPtr contextPtr);

	//************************************
	// Method:    GetContext
	// FullName:  TcpConnection::GetContext
	// Access:    public 
	// Returns:   TcpContextWPtr
	// Qualifier:
	//		获取上下文
	//************************************
	ITcpContextWPtr		GetContext();

	//************************************
	// Method:    GetRemoteEP
	// FullName:  TcpConnection::GetRemoteEP
	// Access:    public 
	// Returns:   const EndPointType&
	// Qualifier: const
	//		获取远端端口
	//************************************
	const EndPoint&		GetRemoteEP() const;
	
	//************************************
	// Method:    GetLocalEP
	// FullName:  TcpConnection::GetLocalEP
	// Access:    public 
	// Returns:   const EndPointType&
	// Qualifier: const
	//		获取本地端口
	//************************************
	const EndPoint&		GetLocalEP() const;
	};
}
#endif // TcpConnection_h__