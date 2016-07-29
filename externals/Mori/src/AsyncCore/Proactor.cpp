#include "Proactor.h"
#include "Utils/SmartPtr.h"
#include "Utils/NameSpace/nsAsio.h"

namespace mori
{



	class	Proactor::Imp
	{
	public:
		Imp():IosContext_(IoService_),Strand_(IoService_)
		{

		}

	public:

		ProactorType		IoService_;
		ProactorType::work	IosContext_;
		SafeProactorType	Strand_;
	};



	Proactor::Proactor():ImpUPtr_(smartPtr::make_unique<Proactor::Imp>())
	{
		
	}

	Proactor::~Proactor()
	{

	}


	uint32_t Proactor::Run()
	{
		return ImpUPtr_->IoService_.run();
	}

	uint32_t Proactor::Run( ErrCode& ec )
	{
		return ImpUPtr_->IoService_.run(ec);
	}

	void Proactor::Stop()
	{
		ImpUPtr_->IoService_.stop();
	}

	bool Proactor::IsStop() const
	{
		return ImpUPtr_->IoService_.stopped();
	}

	ProactorType& Proactor::GetProactor()
	{
		return ImpUPtr_->IoService_;
	}

	SafeProactorType& Proactor::GetStrand()
	{
		return ImpUPtr_->Strand_;
	}

}