#ifndef SColumns_h__
#define SColumns_h__

#pragma once

#include "SColumnsFwd.h"
#include "Column.h"

#include <vector>

namespace autoDB
{

class	SColumns
{
public:

	SColumns();

	SColumns(const SColumns& rhs);

	SColumns(SColumns&& rhs);

	SColumns& With (const Column& rhs);

	SColumns& With (const SColumns& rhs);

public:

	std::vector<Column>	Cols_;
};

SColumns	operator | ( const SColumns& lhs, const Column& rhs);

SColumns	operator | ( const SColumns& lhs, const SColumns& rhs);

}
#endif // SColumns_h__
