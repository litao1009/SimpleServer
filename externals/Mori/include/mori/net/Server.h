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
		//		���ù����߳�����
		//************************************
		void	SetThreadSize(uint32_t threadSize);

		//************************************
		// Method:    AddListenPort
		// FullName:  mori::Server::AddListenPort
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: uint16t listenPort
		//		��Ӽ����˿�
		//************************************
		void	AddListenPort(uint16_t listenPort);

		//************************************
		// Method:    SetTimeWheel
		// FullName:  mori::Server::SetTimeWheel
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: uint32t perTick	�������
		// Parameter: uint32t tickSize	��������
		//		(��ѡ��)������������ ������ʱʱ��=�������*��������
		//************************************
		void	SetTimeWheel(uint32_t perTick, uint32_t tickSize);

		//************************************
		// Method:    SetOnReceive
		// FullName:  mori::Server::SetOnReceive
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		���ý��ջص�
		//************************************
		void	SetOnReceive(OnConnReceiveFtr orFtr);

		//************************************
		// Method:    SetRecvFilesFolder
		// FullName:  mori::Server::SetRecvFilesFolder
		// Access:    public 
		// Returns:   bool
		// Qualifier:
		// Parameter: FilePath folder
		//		���ý����ļ���·��
		//************************************
		bool	SetRecvFilesFolder(FilePath folder);

		//************************************
		// Method:    Start
		// FullName:  mori::Server::Start
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		����
		//************************************
		void	Start();

		//************************************
		// Method:    Stop
		// FullName:  mori::Server::Stop
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		ֹͣ
		//************************************
		void	Stop();

		//************************************
		// Method:    IsStop
		// FullName:  mori::Server::IsStop
		// Access:    public 
		// Returns:   bool
		// Qualifier: const
		//		�Ƿ���ֹͣ
		//************************************
		bool	IsStop() const;

		//************************************
		// Method:    Join
		// FullName:  mori::Server::Join
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		�ȴ��̷߳���
		//************************************
		void	Join();
	};
}
#endif // Server_h__