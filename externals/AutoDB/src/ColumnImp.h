#ifndef ColumnImp_h__
#define ColumnImp_h__

#pragma once

#include "AutoDB/Column.h"
#include "TableImp.h"
#include "ValueWrap.h"

#include <boost/optional.hpp>
#include <functional>

namespace autoDB
{

class	Column::Imp
{
public:

	Imp(const StringType& name):Colname_(name) {}

	TableImpSPtr				TableInfoSPtr_;
	StringType					Colname_;
	boost::optional<ValueWrap>	IntoVal_;
	boost::optional<ValueWrap>	UseVal_;
	std::function<StringType(const StringType&)>	Function_;

public:

	const StringType&	GetColumnName() const
	{
		return Colname_;
	}

	StringType			GetFullName(bool withAlias)
	{
		if ( !TableInfoSPtr_ )
		{
			return Colname_;
		}

		auto& tbName = withAlias
			? (TableInfoSPtr_->TableAlias_.empty() ? TableInfoSPtr_->TableName_ : TableInfoSPtr_->TableAlias_)
			: (TableInfoSPtr_->TableName_);

		if ( !Function_ )
		{
			return tbName + AUTODB_STR(".") + Colname_;
		}
		else
		{
			return Function_(tbName + AUTODB_STR(".") + Colname_);
		}
	}
};

}
#endif // ColumnImp_h__
