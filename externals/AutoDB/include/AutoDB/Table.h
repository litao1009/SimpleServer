#ifndef Table_h__
#define Table_h__

#pragma once

#include "AutoDB/Config.h"

namespace autoDB
{

class	TableImp;

class	Table
{
public:

	std::shared_ptr<TableImp>	ImpSPtr_;

public:

	Table(const StringType& tbName, const StringType& asName );

	Table(Table&& rhs);

	Table(const Table& rhs);

	virtual	~Table() {}

public:

	const StringType&	GetTableName() const;

	const StringType&	GetAlias() const;
};


}
#endif // Table_h__
