#ifndef AsynConcurrentPool_h__
#define AsynConcurrentPool_h__

#pragma once

/*******************************************************************
					异步多线程前摄器并发池
*******************************************************************/
#include "AsynConcurrentPoolFwd.h"
#include "mori/predef/smartPtr.h"
#include "mori/predef/int.h"
#include "mori/predef/sys.h"
#include "mori/predef/async.h"
#include "mori/predef/func.h"

#include <boost/noncopyable.hpp>

namespace mori
{
	typedef	mori::function<void()>		PostFunc;

	class AsynConcurrentPool : boost::noncopyable
	{
		MORI_DEFINE_PIMP

	public:
		//************************************
		// Method:    AsynConcurrentPool
		// FullName:  AsynConcurrentPool::AsynConcurrentPool
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: uint32t ThreadNr			线程池数量
		// Parameter: const wchar_t * Describ	线程池描述
		//************************************
		AsynConcurrentPool(uint32_t ThreadNr, PostFunc func = PostFunc(), PostFunc joinFunc = PostFunc());

		~AsynConcurrentPool();

		//************************************
		// Method:    Start
		// FullName:  AsynConcurrentPool::Start
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		非阻塞启动，立即返回
		//************************************
		void				Start();

		//************************************
		// Method:    Run
		// FullName:  AsynConcurrentPool::Run
		// Access:    public 
		// Returns:   uint32t
		// Qualifier:
		//		阻塞启动，所有工作线程停止后返回
		//************************************
		uint32_t			Run();

		//************************************
		// Method:    Run
		// FullName:  AsynConcurrentPool::Run
		// Access:    public 
		// Returns:   uint32t
		// Qualifier:
		// Parameter: ErrCodeType & ec
		//		阻塞启动，所有工作线程停止后返回
		//************************************
		uint32_t			Run(ErrCode& ec);

		//************************************
		// Method:    Join
		// FullName:  AsynConcurrentPool::Join
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		等待所有工作线程结束
		//************************************
		void				Join();

		//************************************
		// Method:    Stop
		// FullName:  AsynConcurrentPool::Stop
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		停止前摄器工作，所有线程立即返回
		//************************************
		void				Stop();

		//************************************
		// Method:    IsStop
		// FullName:  AsynConcurrentPool::IsStop
		// Access:    public 
		// Returns:   bool
		// Qualifier:
		//		是否停止
		//************************************
		bool				IsStop() const;

		//************************************
		// Method:    GetProactor
		// FullName:  AsynConcurrentPool::GetProactor
		// Access:    public 
		// Returns:   ProactorType&
		// Qualifier:
		//		获取前摄器
		//************************************
		AsyncProactor		GetProactor();

		//************************************
		// Method:    Post
		// FullName:  mori::AsynConcurrentPool::Post
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: PostFunc ftr
		//		异步启动
		//************************************
		void				Post(PostFunc ftr);

		//************************************
		// Method:    GetThreadsSize
		// FullName:  AsynConcurrentPool::GetThreadsSize
		// Access:    public 
		// Returns:   uint32t
		// Qualifier: const
		//		获取线程数量
		//************************************
		uint32_t			GetThreadsSize() const;
	};
}
#endif // AsynConcurrentPool_h__