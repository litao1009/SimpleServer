#include "AutoDB/SColumns.h"
#include "ColumnImp.h"

namespace autoDB
{


SColumns::SColumns()
{

}

SColumns::SColumns( const SColumns& rhs ):Cols_(rhs.Cols_)
{

}

SColumns::SColumns( SColumns&& rhs ):Cols_(std::move(rhs.Cols_))
{

}

autoDB::SColumns& SColumns::With( const Column& rhs )
{	
	Cols_.push_back(rhs);

	return *this;
}

autoDB::SColumns& SColumns::With( const SColumns& rhs )
{
	std::copy(rhs.Cols_.begin(), rhs.Cols_.end(), std::back_inserter(Cols_));

	return *this;
}

autoDB::SColumns operator|( const SColumns& lhs, const Column& rhs )
{
	SColumns ret(lhs);
	ret.With(rhs);

	return std::move(ret);
}

autoDB::SColumns operator|( const SColumns& lhs, const SColumns& rhs )
{
	SColumns ret(lhs);
	ret.With(rhs);

	return std::move(ret);
}

}