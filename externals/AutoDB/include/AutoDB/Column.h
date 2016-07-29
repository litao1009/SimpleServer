#ifndef Column_h__
#define Column_h__

#pragma once

#include "Config.h"
#include "TableImpFwd.h"
#include "SColumnsFwd.h"
#include "Exchange.h"

namespace autoDB
{



class	Column
{
public:

	friend	class	SColumns;
	class	Imp;
	std::unique_ptr<Imp>	ImpUPtr_;

public:

	Column(const StringType& statement);

	Column(TableImpSPtr sptb, const StringType& colName);

	Column(const Column& rhs);

	Column(Column&& rhs);

	~Column();

public:

	SColumns	With ( const Column& rhs) const;

	const StringType&	GetColName() const;

	StringType			GetFullName(bool alias = true) const;

	operator SColumns();

protected:

	void	SetInto(EDataType edt, CallBackFtr ftr, bool isVec);

	void	SetUse(EDataType edt, CallBackFtr ftr);
};

SColumns	operator | ( const Column& lhs, const Column& rhs);

}

#endif // Column_h__
