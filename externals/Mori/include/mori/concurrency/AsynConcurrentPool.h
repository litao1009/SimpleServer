#ifndef AsynConcurrentPool_h__
#define AsynConcurrentPool_h__

#pragma once

/*******************************************************************
					�첽���߳�ǰ����������
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
		// Parameter: uint32t ThreadNr			�̳߳�����
		// Parameter: const wchar_t * Describ	�̳߳�����
		//************************************
		AsynConcurrentPool(uint32_t ThreadNr, PostFunc func = PostFunc(), PostFunc joinFunc = PostFunc());

		~AsynConcurrentPool();

		//************************************
		// Method:    Start
		// FullName:  AsynConcurrentPool::Start
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		��������������������
		//************************************
		void				Start();

		//************************************
		// Method:    Run
		// FullName:  AsynConcurrentPool::Run
		// Access:    public 
		// Returns:   uint32t
		// Qualifier:
		//		�������������й����߳�ֹͣ�󷵻�
		//************************************
		uint32_t			Run();

		//************************************
		// Method:    Run
		// FullName:  AsynConcurrentPool::Run
		// Access:    public 
		// Returns:   uint32t
		// Qualifier:
		// Parameter: ErrCodeType & ec
		//		�������������й����߳�ֹͣ�󷵻�
		//************************************
		uint32_t			Run(ErrCode& ec);

		//************************************
		// Method:    Join
		// FullName:  AsynConcurrentPool::Join
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		�ȴ����й����߳̽���
		//************************************
		void				Join();

		//************************************
		// Method:    Stop
		// FullName:  AsynConcurrentPool::Stop
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//		ֹͣǰ���������������߳���������
		//************************************
		void				Stop();

		//************************************
		// Method:    IsStop
		// FullName:  AsynConcurrentPool::IsStop
		// Access:    public 
		// Returns:   bool
		// Qualifier:
		//		�Ƿ�ֹͣ
		//************************************
		bool				IsStop() const;

		//************************************
		// Method:    GetProactor
		// FullName:  AsynConcurrentPool::GetProactor
		// Access:    public 
		// Returns:   ProactorType&
		// Qualifier:
		//		��ȡǰ����
		//************************************
		AsyncProactor		GetProactor();

		//************************************
		// Method:    Post
		// FullName:  mori::AsynConcurrentPool::Post
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: PostFunc ftr
		//		�첽����
		//************************************
		void				Post(PostFunc ftr);

		//************************************
		// Method:    GetThreadsSize
		// FullName:  AsynConcurrentPool::GetThreadsSize
		// Access:    public 
		// Returns:   uint32t
		// Qualifier: const
		//		��ȡ�߳�����
		//************************************
		uint32_t			GetThreadsSize() const;
	};
}
#endif // AsynConcurrentPool_h__