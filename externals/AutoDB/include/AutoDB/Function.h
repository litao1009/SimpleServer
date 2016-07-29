#ifndef Function_h__
#define Function_h__

#pragma once

#include "Config.h"
#include "ColumnFwd.h"
#include "DBColumn.h"

#ifdef max
#undef max
#endif

namespace autoDB
{

IntColumn max(const IntColumn& col);
BigintColumn max(const BigintColumn& col);
FloatColumn max(const FloatColumn& col);
DateTimeColumn max(const DateTimeColumn& col);


IntColumn count(const IntColumn& col);
IntColumn count(const BigintColumn& col);
IntColumn count(const FloatColumn& col);
IntColumn count(const DateTimeColumn& col);
IntColumn count(const BoolColumn& col);
IntColumn count(const StringColumn& col);

IntColumn isnull(const IntColumn& col, int32_t val);
BigintColumn isnull(const BigintColumn& col, int64_t val);
IntColumn ifnull(const IntColumn& col, int32_t val);
BigintColumn ifnull(const BigintColumn& col, int64_t val);
// IntColumn isnull(const BigintColumn& col);
// IntColumn isnull(const FloatColumn& col);
// IntColumn isnull(const DateTimeColumn& col);
// IntColumn isnull(const BoolColumn& col);
// IntColumn isnull(const StringColumn& col);

BigintColumn	identity();

IntColumn sum(const IntColumn& col);
FloatColumn sum(const FloatColumn& col);
//IntColumn count(const BigintColumn& col);
//IntColumn count(const FloatColumn& col);
//IntColumn count(const DateTimeColumn& col);
//IntColumn count(const BoolColumn& col);
//IntColumn count(const StringColumn& col);

StringColumn SubStr(const StringColumn& col, int from, int len);
StringColumn CONCAT(const StringColumn& col1, const StringColumn& col2);

DBTime	getdate();

}
#endif // Function_h__
