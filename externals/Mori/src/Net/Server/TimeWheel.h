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
					用于超时、上下文控制
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
	// Parameter: uint32t peerClock		每步时长
	// Parameter: uint32t bufferLen		步数
	//		心跳时长 = 每步时长 * 步数
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
	//		更新上下文
	//************************************
	void	Insert(ITcpContextSPtr& connPtr);

	//************************************
	// Method:    Start
	// FullName:  CTimeWheel::Start
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		启动
	//************************************
	void	Start();

	//************************************
	// Method:    Stop
	// FullName:  CTimeWheel::Stop
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		停止
	//************************************
	void	Stop();

	//************************************
	// Method:    Join
	// FullName:  CTimeWheel::Join
	// Access:    public 
	// Returns:   void
	// Qualifier:
	//		等待线程返回
	//************************************
	void	Join();
};
}
#endif // TimeWheel_h__