#pragma once

#include "Utils/Type/ErrCodeType.h"
#include "Utils/Type/ProactorType.h"
#include "Utils/Pimp.h"
#include "Utils/intDef.h"

namespace tinyLog
{



/*************************************************************************************
									Ç°ÉãÆ÷
*************************************************************************************/
class Proactor
{
	DEFINE_PIMP

public:

	Proactor();

	~Proactor();

	uint32_t			Run();

	uint32_t			Run(ErrCodeType& ec);

	void				Stop();

	bool				IsStop() const;

	ProactorType&		GetProactor();

	SafeProactorType&	GetStrand();
};

}