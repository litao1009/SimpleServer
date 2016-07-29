#ifndef Statement_h__
#define Statement_h__

#pragma once

#include "Config.h"
#include "Condition.h"
#include "SColumns.h"
#include "Table.h"
#include "Function.h"

namespace autoDB
{

class	Statement
{
public:

	class	Imp;
	std::unique_ptr<Imp>	ImpUPtr_;

public:

	Statement();

	Statement( const Statement& rhs );

	Statement( Statement&& rhs );

	~Statement();

	Statement&	operator = ( const Statement& rhs );

public:

	Statement&	Select(const SColumns& selection );

	Statement&	From(const Table& tb );

	Statement&	From(const Statement& statement, const StringType& tableName );

	Statement&	Where(const Condition& condition );

	Statement&	InnerJoin(const Table& tb);

	Statement&	LeftOuterJoin(const Table& tb);

	Statement&	On(const Condition& condition);

	Statement&	Union(const Statement& statement);

	Statement&	InsertInto(const Table& tb);

	Statement&	Values();

	Statement&	Delete(const Table& tb);

	Statement&	Insert(const SColumns& selection);

	Statement&	Update(const SColumns& selection);

	Statement&	GroupBy(const SColumns& selection);

	Statement&	SetNocountOn();

	Statement&	Semicolon();

	const StringType&	GetString() const;
};


}

#endif // Statement_h__
