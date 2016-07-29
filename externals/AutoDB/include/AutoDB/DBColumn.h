#ifndef DBColumn_h__
#define DBColumn_h__

#pragma once

#include "Config.h"
#include "Condition.h"
#include "Column.h"
#include "SColumns.h"
#include "ColumnOperator.h"

#include <stdint.h>
#include <boost/date_time/posix_time/ptime.hpp>

namespace autoDB
{



class	IntColumn : public ColumnOperator<IntColumn,int32_t>
{
public:

	typedef	int32_t	ValueType;

public:

	IntColumn(const StringType& st):ColumnOperator(st) {}

	IntColumn(TableImpSPtr sptb, const StringType& name):ColumnOperator(sptb,name) {}

	template<typename T2, typename ValT2>
	explicit IntColumn( const ColumnOperator<T2,ValT2>& rhs):ColumnOperator(rhs) {}
};

class	BigintColumn : public ColumnOperator<BigintColumn,int64_t>
{
public:

	typedef	int64_t	ValueType;

public:

	BigintColumn(const StringType& st):ColumnOperator(st) {}

	BigintColumn(TableImpSPtr sptb, const StringType& name):ColumnOperator(sptb,name) {}

	template<typename T2, typename ValT2>
	explicit BigintColumn( const ColumnOperator<T2,ValT2>& rhs):ColumnOperator(rhs) {}
};


class	FloatColumn : public ColumnOperator<FloatColumn,double>
{
public:

	typedef	double	ValueType;

public:

	FloatColumn(const StringType& st):ColumnOperator(st) {}

	FloatColumn(TableImpSPtr sptb, const StringType& name):ColumnOperator(sptb,name) {}

	template<typename T2, typename ValT2>
	explicit FloatColumn( const ColumnOperator<T2,ValT2>& rhs):ColumnOperator(rhs) {}
};


class	DateTimeColumn : public ColumnOperator<DateTimeColumn,boost::posix_time::ptime>
{
public:

	typedef	boost::posix_time::ptime	ValueType;

public:

	DateTimeColumn(const StringType& st):ColumnOperator(st) {}

	DateTimeColumn(TableImpSPtr sptb, const StringType& name):ColumnOperator(sptb,name) {}

	template<typename T2, typename ValT2>
	explicit DateTimeColumn( const ColumnOperator<T2,ValT2>& rhs):ColumnOperator(rhs) {}
};


class	StringColumn : public ColumnOperator<StringColumn,StringType>
{
public:

	typedef	StringType	ValueType;

public:

	StringColumn(const StringType& st):ColumnOperator(AUTODB_STR("'")+st+AUTODB_STR("'")) {}

	StringColumn(TableImpSPtr sptb, const StringType& name):ColumnOperator(sptb,name) {}

	template<typename T2, typename ValT2>
	explicit StringColumn( const ColumnOperator<T2,ValT2>& rhs):ColumnOperator(rhs) {}

	Condition	Like(const StringType& str);

	StringColumn	Left(int32_t offset);

};


class	BoolColumn : public ColumnOperator<BoolColumn,bool>
{
public:

	typedef	bool	ValueType;

public:

	BoolColumn(const StringType& st):ColumnOperator(st) {}

	BoolColumn(TableImpSPtr sptb, const StringType& name):ColumnOperator(sptb,name) {}

	template<typename T2, typename ValT2>
	explicit BoolColumn( const ColumnOperator<T2,ValT2>& rhs):ColumnOperator(rhs) {}
};

typedef	boost::posix_time::ptime		DBTime;
typedef	boost::gregorian::date			DBDate;
typedef	boost::posix_time::seconds		DBSeconds;
typedef	boost::posix_time::milliseconds	DBMilliseconds;

const DBDate	rawDate(1900,1,1);
}
#endif // DBColumn_h__
