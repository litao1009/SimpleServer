#ifndef Proactor_h__
#define Proactor_h__

#pragma once

#include "mori/predef/smartPtr.h"
#include "mori/predef/int.h"
#include "mori/predef/sys.h"
#include "Utils/Type/ProactorType.h"

#include <boost/noncopyable.hpp>

namespace mori
{
	/*************************************************************************************
									前摄器
	*************************************************************************************/
	class Proactor : public boost::noncopyable
	{
		MORI_DEFINE_PIMP

	public:

		Proactor();

		~Proactor();

		//************************************
		// Method:    Run
		// FullName:  CProactor::Run
		// Access:    public 
		// Returns:   uint32t
		// Qualifier:
		//				启动前摄器
		//************************************
		uint32_t			Run();

		//************************************
		// Method:    Run
		// FullName:  CProactor::Run
		// Access:    public 
		// Returns:   uint32t
		// Qualifier:
		// Parameter: ErrCodeType & ec
		//				启动前摄器
		//************************************
		uint32_t			Run(ErrCode& ec);

		//************************************
		// Method:    Stop
		// FullName:  CProactor::Stop
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//			关闭前摄器，停止派发新任务
		//************************************
		void				Stop();

		//************************************
		// Method:    IsStop
		// FullName:  CProactor::IsStop
		// Access:    public 
		// Returns:   bool
		// Qualifier: const
		//			查询前摄器是否已停止
		//************************************
		bool				IsStop() const;

		//************************************
		// Method:    GetProactor
		// FullName:  CProactor::GetProactor
		// Access:    public 
		// Returns:   ProactorType&
		// Qualifier:
		//			取得前摄器
		//************************************
		ProactorType&		GetProactor();

		//************************************
		// Method:    GetStrand
		// FullName:  CProactor::GetStrand
		// Access:    public 
		// Returns:   SafeProactorType&
		// Qualifier:
		//			取得线程安全的前摄器
		//************************************
		SafeProactorType&	GetStrand();
	};
}
#endif // Proactor_h__