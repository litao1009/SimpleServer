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
									ǰ����
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
		//				����ǰ����
		//************************************
		uint32_t			Run();

		//************************************
		// Method:    Run
		// FullName:  CProactor::Run
		// Access:    public 
		// Returns:   uint32t
		// Qualifier:
		// Parameter: ErrCodeType & ec
		//				����ǰ����
		//************************************
		uint32_t			Run(ErrCode& ec);

		//************************************
		// Method:    Stop
		// FullName:  CProactor::Stop
		// Access:    public 
		// Returns:   void
		// Qualifier:
		//			�ر�ǰ������ֹͣ�ɷ�������
		//************************************
		void				Stop();

		//************************************
		// Method:    IsStop
		// FullName:  CProactor::IsStop
		// Access:    public 
		// Returns:   bool
		// Qualifier: const
		//			��ѯǰ�����Ƿ���ֹͣ
		//************************************
		bool				IsStop() const;

		//************************************
		// Method:    GetProactor
		// FullName:  CProactor::GetProactor
		// Access:    public 
		// Returns:   ProactorType&
		// Qualifier:
		//			ȡ��ǰ����
		//************************************
		ProactorType&		GetProactor();

		//************************************
		// Method:    GetStrand
		// FullName:  CProactor::GetStrand
		// Access:    public 
		// Returns:   SafeProactorType&
		// Qualifier:
		//			ȡ���̰߳�ȫ��ǰ����
		//************************************
		SafeProactorType&	GetStrand();
	};
}
#endif // Proactor_h__