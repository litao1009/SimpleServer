#include "AutoDB/Table.h"
#include "TableImp.h"

namespace autoDB
{


Table::Table( const StringType& tbName, const StringType& asName ):ImpSPtr_(new TableImp)
{
	ImpSPtr_->TableName_ = tbName;
	ImpSPtr_->TableAlias_ = asName;
}

Table::Table( Table&& rhs ):ImpSPtr_(rhs.ImpSPtr_)
{

}

Table::Table( const Table& rhs ):ImpSPtr_(rhs.ImpSPtr_)
{

}

const StringType& Table::GetTableName() const
{
	return ImpSPtr_->TableName_;
}

const StringType& Table::GetAlias() const
{
	return ImpSPtr_->TableAlias_;
}

}