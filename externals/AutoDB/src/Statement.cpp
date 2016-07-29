#include "AutoDB/Statement.h"
#include "StatementImp.h"
#include "ColumnImp.h"
#include "ConditionImp.h"
#include "TableImp.h"

#include <assert.h>

namespace autoDB
{


Statement::Statement():ImpUPtr_(new Imp)
{

}

Statement::Statement( const Statement& rhs ):ImpUPtr_(new Imp(*rhs.ImpUPtr_))
{

}

Statement::Statement( Statement&& rhs ):ImpUPtr_(std::move(rhs.ImpUPtr_))
{

}

Statement::~Statement()
{

}

Statement& Statement::Select( const SColumns& selection )
{
	if ( selection.Cols_.empty() )
	{
		return *this;
	}

	StringType str = AUTODB_STR(" select ");

	for ( auto& cur : selection.Cols_ )
	{
		str += cur.GetFullName() + AUTODB_STR(", ");
		
		if ( cur.ImpUPtr_->IntoVal_ )
		{
			ImpUPtr_->Wraps_.push_back(*(cur.ImpUPtr_->IntoVal_));
		}
		if ( cur.ImpUPtr_->UseVal_ )
		{
			ImpUPtr_->Wraps_.push_back(*(cur.ImpUPtr_->UseVal_));
		}
	}
	str.erase(str.length()-2);

	ImpUPtr_->Str_ += str;

	return *this;
}

Statement& Statement::From( const Table& tb )
{
	StringType str = AUTODB_STR(" from ") + tb.ImpSPtr_->TableName_;
	
	if ( !tb.ImpSPtr_->TableAlias_.empty() )
	{
		str += AUTODB_STR(" ") + tb.ImpSPtr_->TableAlias_;
	}

	ImpUPtr_->Str_ += str;

	return *this;
}

Statement& Statement::From( const Statement& statement, const StringType& tableName )
{
	ImpUPtr_->Str_ += AUTODB_STR(" from ( ") + statement.ImpUPtr_->Str_ + AUTODB_STR(" ) ") + tableName;
	
	return *this;
}

Statement& Statement::Where( const Condition& condition )
{
	ImpUPtr_->Str_ += AUTODB_STR(" where ") + condition.ImpUPtr_->Str_;

	auto& useVals = condition.ImpUPtr_->UseValues_;
	std::copy(useVals.begin(), useVals.end(), std::back_inserter(ImpUPtr_->Wraps_));

	return *this;
}

Statement& Statement::InnerJoin( const Table& tb )
{
	StringType str = AUTODB_STR(" inner join ") + tb.ImpSPtr_->TableName_;

	if ( !tb.ImpSPtr_->TableAlias_.empty() )
	{
		str += AUTODB_STR(" ") + tb.ImpSPtr_->TableAlias_;
	}

	ImpUPtr_->Str_ += str;

	return *this;
}

Statement& Statement::LeftOuterJoin( const Table& tb )
{
	StringType str = AUTODB_STR(" left outer join ") + tb.ImpSPtr_->TableName_;

	if ( !tb.ImpSPtr_->TableAlias_.empty() )
	{
		str += AUTODB_STR(" ") + tb.ImpSPtr_->TableAlias_;
	}

	ImpUPtr_->Str_ += str;

	return *this;
}

Statement& Statement::On( const Condition& condition )
{
	ImpUPtr_->Str_ += AUTODB_STR(" on ") + condition.ImpUPtr_->Str_;

	for ( auto& cur : condition.ImpUPtr_->UseValues_ )
	{
		ImpUPtr_->Wraps_.push_back(cur);
	}

	return *this;
}

Statement& Statement::Union( const Statement& statement )
{
	ImpUPtr_->Str_ += AUTODB_STR(" union ") + statement.ImpUPtr_->Str_;

	return *this;
}

Statement& Statement::InsertInto( const Table& tb )
{
	ImpUPtr_->Str_ += AUTODB_STR(" insert into ") + tb.ImpSPtr_->TableName_;

	return *this;
}

Statement& Statement::Values()
{
	return *this;
}

Statement& Statement::Insert( const SColumns& selection )
{
	assert( !selection.Cols_.empty() );

	if ( selection.Cols_.empty() )
	{
		return *this;
	}

	StringType tbName = selection.Cols_.front().ImpUPtr_->TableInfoSPtr_->TableName_;

#ifndef NDEBUG
	for ( auto& cur : selection.Cols_ )
	{
		if ( tbName.empty() )
		{
			tbName = cur.ImpUPtr_->TableInfoSPtr_->TableName_;
		}
		else
		{
			assert(tbName == cur.ImpUPtr_->TableInfoSPtr_->TableName_);
		}
	}
#endif

	StringType col = AUTODB_STR(" insert into ") + tbName + AUTODB_STR(" (");
	StringType vals = AUTODB_STR(" values ( ");

	for ( auto& cur : selection.Cols_ )
	{
		col += cur.GetColName() + AUTODB_STR(", ");
		vals += AUTODB_STR(":use, ");

		if ( cur.ImpUPtr_->UseVal_ )
		{
			ImpUPtr_->Wraps_.push_back(*cur.ImpUPtr_->UseVal_);
		}
	}

	col.erase(col.length()-2);
	vals.erase(vals.length()-2);
	col += AUTODB_STR(" )");
	vals += AUTODB_STR(" )");

	ImpUPtr_->Str_ += col + vals;

	return *this;
}

Statement& Statement::Update( const SColumns& selection )
{
	assert( !selection.Cols_.empty() );

	if ( selection.Cols_.empty() )
	{
		return *this;
	}

	StringType tbName = selection.Cols_.front().ImpUPtr_->TableInfoSPtr_->TableName_;

#ifndef NDEBUG
	for ( auto& cur : selection.Cols_ )
	{
		if ( tbName.empty() )
		{
			tbName = cur.ImpUPtr_->TableInfoSPtr_->TableName_;
		}
		else
		{
			assert(tbName == cur.ImpUPtr_->TableInfoSPtr_->TableName_);
		}
	}
#endif

	StringType col = AUTODB_STR(" update ") + tbName + AUTODB_STR(" set ");

	for ( auto& cur : selection.Cols_ )
	{
		col += cur.GetColName() + AUTODB_STR("=:use, ");

		if ( cur.ImpUPtr_->UseVal_ )
		{
			ImpUPtr_->Wraps_.push_back(*cur.ImpUPtr_->UseVal_);
		}
	}

	col.erase(col.length()-2);

	ImpUPtr_->Str_ += col;

	return *this;
}

Statement& Statement::GroupBy( const SColumns& selection )
{
	if ( selection.Cols_.empty() )
	{
		return *this;
	}

	StringType str = AUTODB_STR(" group by ");

	for ( auto& cur : selection.Cols_ )
	{
		str += cur.GetFullName() + AUTODB_STR(", ");
	}
	str.erase(str.length()-2);

	ImpUPtr_->Str_ += str;

	return *this;
}

const StringType& Statement::GetString() const
{
	return ImpUPtr_->Str_;
}

Statement& Statement::operator=( const Statement& rhs )
{
	Statement tmp(rhs);
	ImpUPtr_.swap(tmp.ImpUPtr_);

	return *this;
}

Statement& Statement::Delete( const Table& tb )
{
	ImpUPtr_->Str_ += AUTODB_STR(" delete from ") + tb.GetTableName();
	return *this;
}

Statement& Statement::SetNocountOn()
{
	ImpUPtr_->Str_ += AUTODB_STR(" set nocount on ");
	return *this;
}

Statement& Statement::Semicolon()
{
	ImpUPtr_->Str_ += AUTODB_STR("; ");
	return *this;
}

}