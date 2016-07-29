#ifndef StatementImp_h__
#define StatementImp_h__

#pragma once

#include "AutoDB/Statement.h"
#include "ValueWrap.h"

#include <vector>

namespace autoDB
{

class	Statement::Imp
{
public:

	StringType				Str_;
	std::vector<ValueWrap>	Wraps_;
};

}


#endif // StatementImp_h__
