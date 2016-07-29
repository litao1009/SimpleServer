#include "Proactor.h"
#include "Utils/SmartPtr.h"

namespace tinyLog
{



class	Proactor::CImp
{
public:
	CImp():wk_(ios_),stand_(ios_)
	{

	}

public:

	ProactorType		ios_;
	ProactorType::work	wk_;
	SafeProactorType	stand_;
};



Proactor::Proactor():mImpPtr(smartPtr::make_unique<Proactor::CImp>())
{

}

Proactor::~Proactor()
{

}


uint32_t Proactor::Run()
{
	return mImpPtr->ios_.run();
}

uint32_t Proactor::Run( ErrCodeType& ec )
{
	return mImpPtr->ios_.run(ec);
}

void Proactor::Stop()
{
	mImpPtr->ios_.stop();
}

bool Proactor::IsStop() const
{
	return mImpPtr->ios_.stopped();
}

ProactorType& Proactor::GetProactor()
{
	return mImpPtr->ios_;
}

SafeProactorType& Proactor::GetStrand()
{
	return mImpPtr->stand_;
}

}