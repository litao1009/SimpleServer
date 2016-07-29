#pragma once

#include "mori/predef/async.h"
#include "Utils/Type/ProactorType.h"

namespace mori
{
	class	AsyncProactor::Implement
	{
	public:

		Implement(ProactorType& ref):ProactorRef_(ref) {}

		~Implement() {}

		ProactorType&	ProactorRef_;
	};
}