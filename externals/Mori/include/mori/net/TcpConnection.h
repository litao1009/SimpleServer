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
	//		����
	//************************************
	bool				StartRead();

	//************************************
	// Method:    ShutDown
	// FullName:  mori::TcpConnection::ShutDown
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: bool clearOnRecv	�Ƿ���ջص�
	//		�رն�/д
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
	//		���ý��ջص�
	//************************************
	void				SetOnReceive(OnConnReceiveFtr func);

	//************************************
	// Method:    SetOnSend
	// FullName:  TcpConnection::SetOnSend
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnConnSendFtr func
	//		���÷��ͻص�
	//************************************
	void				SetOnSend(OnConnSendFtr func);

	//************************************
	// Method:    SetOnReciveMonitor
	// FullName:  mori::TcpConnection::SetOnReciveMonitor
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnConnMonitorFtr func
	//		(��ѡ)���ý��ռ��ӻص�(���ÿһ�ε����ݰ����ʹ�С)
	//************************************
	void				SetOnReciveMonitor(OnConnMonitorFtr func);

	//************************************
	// Method:    HasOnReciveMonitor
	// FullName:  mori::TcpConnection::HasOnReciveMonitor
	// Access:    public 
	// Returns:   bool
	// Qualifier: const
	//		��ѯ���ռ��ӻص�
	//************************************
	bool				HasOnReciveMonitor() const;

	//************************************
	// Method:    SetOnSendMonitor
	// FullName:  mori::TcpConnection::SetOnSendMonitor
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnConnMonitorFtr func
	//		(��ѡ)���÷��ͼ��ӻص�(���ÿһ�ε����ݰ����ʹ�С)
	//************************************
	void				SetOnSendMonitor(OnConnMonitorFtr func);

	//************************************
	// Method:    HasOnSendMonitor
	// FullName:  mori::TcpConnection::HasOnSendMonitor
	// Access:    public 
	// Returns:   bool
	// Qualifier: const
	//		��ѯ���ͼ��ӻص�
	//************************************
	bool				HasOnSendMonitor() const;

	//************************************
	// Method:    IsSending
	// FullName:  mori::TcpConnection::IsSending
	// Access:    public 
	// Returns:   bool
	// Qualifier: const
	//		�������Ƿ����ڷ�������
	//************************************
	bool				IsSending() const;

	//************************************
	// Method:    SetOnClose
	// FullName:  mori::TcpConnection::SetOnClose
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnCloseFtr func
	//		����ѡ�����ùرջص�
	//************************************
	void				SetOnClose(OnCloseFtr func);

	//************************************
	// Method:    HasOnClose
	// FullName:  mori::TcpConnection::HasOnClose
	// Access:    public 
	// Returns:   bool
	// Qualifier: const
	//		��ѯ�رջص�
	//************************************
	bool				HasOnClose() const;

	//************************************
	// Method:    Send
	// FullName:  TcpConnection::Send
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: BufferType & buf
	//		����buf(����)
	//************************************
	boost::optional<uint32_t>	Send(const TcpConnBuffer& buf);

	//************************************
	// Method:    Send
	// FullName:  mori::TcpConnection::Send
	// Access:    public 
	// Returns:   boost::optional<uint32_t>
	// Qualifier:
	// Parameter: TcpConnBuffer & & buf
	//		����buf
	//************************************
	boost::optional<uint32_t>	Send(TcpConnBuffer&& buf);

	//************************************
	// Method:    Send
	// FullName:  mori::TcpConnection::Send
	// Access:    public 
	// Returns:   boost::optional<uint32_t>
	// Qualifier:
	// Parameter: FileList & files
	//		�����ļ�
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
	//		����buf(����)���ļ�
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
	//		����buf(����)���ļ�
	//************************************
	boost::optional<uint32_t>	Send(TcpConnBuffer&& buf, SendFileList& files);

	//************************************
	// Method:    SetContext
	// FullName:  TcpConnection::SetContext
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: TcpContextWPtr contextPtr
	//		����������
	//************************************
	void				SetContext(ITcpContextWPtr contextPtr);

	//************************************
	// Method:    GetContext
	// FullName:  TcpConnection::GetContext
	// Access:    public 
	// Returns:   TcpContextWPtr
	// Qualifier:
	//		��ȡ������
	//************************************
	ITcpContextWPtr		GetContext();

	//************************************
	// Method:    GetRemoteEP
	// FullName:  TcpConnection::GetRemoteEP
	// Access:    public 
	// Returns:   const EndPointType&
	// Qualifier: const
	//		��ȡԶ�˶˿�
	//************************************
	const EndPoint&		GetRemoteEP() const;
	
	//************************************
	// Method:    GetLocalEP
	// FullName:  TcpConnection::GetLocalEP
	// Access:    public 
	// Returns:   const EndPointType&
	// Qualifier: const
	//		��ȡ���ض˿�
	//************************************
	const EndPoint&		GetLocalEP() const;
	};
}
#endif // TcpConnection_h__