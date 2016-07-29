#ifndef Acceptor_h__
#define Acceptor_h__

#pragma once

#pragma once

#include "TcpSoket.h"
#include "mori/predef/async.h"
#include "mori/predef/func.h"
#include "Utils/Pimp.h"
#include "Utils/intDef.h"
#include "Utils/Type/ProactorType.h"

#include "mori/net/TcpConnection.h"


#include <boost/noncopyable.hpp>

namespace mori
{
	/*******************************************************************
					�첽������
*******************************************************************/
class Acceptor : boost::noncopyable
{
	DEFINE_PIMP

public:

	typedef	mori::function<void(SocketTypeUPtr&)>	OnAcceptFtr;

			//************************************
			// Method:    CAcceptor
			// FullName:  CAcceptor::CAcceptor
			// Access:    public 
			// Returns:   
			// Qualifier:
			// Parameter: ProactorType & proactor	�ɷ�ǰ����(CAcceptor����Socket�Ժ���ɷ���proactor)
			// Parameter: uint16t Port				�˿ں�
			//************************************
			Acceptor(ProactorType& proactor, uint16_t Port);

			~Acceptor();

public:

	//************************************
	// Method:    Start
	// FullName:  CAcceptor::Start
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		����
	//************************************
	void	Start();

	//************************************
	// Method:    Stop
	// FullName:  CAcceptor::Stop
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		ֹͣ
	//************************************
	void	Stop();

	//************************************
	// Method:    Join
	// FullName:  CAcceptor::Join
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		�ȴ�����
	//************************************
	void	Join();

	//************************************
	// Method:    SetOnAccept
	// FullName:  CAcceptor::SetOnAccept
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: OnAcceptFtr ftr
	//		���ü����ص�
	//************************************
	void	SetOnAccept(OnAcceptFtr ftr);
};
}

#endif // Acceptor_h__
