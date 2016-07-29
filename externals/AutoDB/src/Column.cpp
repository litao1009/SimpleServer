#include "AutoDB/Column.h"
#include "AutoDB/SColumns.h"
#include "ColumnImp.h"

#include <assert.h>

namespace autoDB
{

Column::Column( TableImpSPtr sptb, const StringType& colName):ImpUPtr_(new Imp(colName))
{
	ImpUPtr_->TableInfoSPtr_ = sptb;
}

Column::Column( const Column& rhs ):ImpUPtr_(new Imp(*rhs.ImpUPtr_))
{

}

Column::Column( Column&& rhs ):ImpUPtr_(std::move(rhs.ImpUPtr_))
{

}

Column::Column( const StringType& statement ):ImpUPtr_(new Imp(statement))
{

}

Column::~Column()
{

}


autoDB::SColumns Column::With( const Column& rhs ) const
{
	SColumns ret;

	ret.Cols_.push_back(*this);
	ret.Cols_.push_back(rhs);

	return std::move(ret);
}


Column::operator SColumns()
{
	SColumns ret;

	ret.Cols_.push_back(*this);

	return std::move(ret);
}

const StringType& Column::GetColName() const
{
	return ImpUPtr_->GetColumnName();
}

void Column::SetInto( EDataType edt, CallBackFtr ftr, bool isVec )
{
	ValueWrap val(ValueWrap::TransFromEDT(edt),ftr, isVec);
	ImpUPtr_->IntoVal_ = val;
	ImpUPtr_->UseVal_.reset();
}

void Column::SetUse( EDataType edt, CallBackFtr ftr )
{
	ValueWrap val(ValueWrap::TransFromEDT(edt),ftr);
	ImpUPtr_->UseVal_ = val;
	ImpUPtr_->IntoVal_.reset();
}


autoDB::StringType Column::GetFullName(bool alias) const
{
	return std::move(ImpUPtr_->GetFullName(alias));
}

autoDB::SColumns operator|( const Column& lhs, const Column& rhs )
{
	return lhs.With(rhs);
}

}