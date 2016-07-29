#ifndef TimeWheel_h__
#define TimeWheel_h__

#pragma once

#include "Utils/Pimp.h"
#include "Utils/intDef.h"
#include "mori/net/ITcpContext.h"


namespace mori
{
	/*******************************************************************
					TimeWheel
					���ڳ�ʱ�������Ŀ���
*******************************************************************/
class	TimeWheel
{
	DEFINE_SHARE_PIMP

public:

	//************************************
	// Method:    CTimeWheel
	// FullName:  CTimeWheel::CTimeWheel
	// Access:    public 
	// Returns:   
	// Qualifier:
	// Parameter: uint32t peerClock		ÿ��ʱ��
	// Parameter: uint32t bufferLen		����
	//		����ʱ�� = ÿ��ʱ�� * ����
	//************************************
	TimeWheel( uint32_t peerClock, uint32_t bufferLen );

	~TimeWheel();

	//************************************
	// Method:    Insert
	// FullName:  CTimeWheel::Insert
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: CConnContextSPtr & connPtr
	//		����������
	//************************************
	void	Insert(ITcpContextSPtr& connPtr);

	//************************************
	// Method:    Start
	// FullName:  CTimeWheel::Start
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		����
	//************************************
	void	Start();

	//************************************
	// Method:    Stop
	// FullName:  CTimeWheel::Stop
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		ֹͣ
	//************************************
	void	Stop();

	//************************************
	// Method:    Join
	// FullName:  CTimeWheel::Join
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		�ȴ��̷߳���
	//************************************
	void	Join();
};
}
#endif // TimeWheel_h__