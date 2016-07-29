#include "AutoDB/DBColumn.h"
#include "ConditionImp.h"

namespace autoDB
{

autoDB::Condition StringColumn::Like( const StringType& str )
{
	return std::move(Condition(GetFullName() + AUTODB_STR(" like ") + Util::ToString(str)));
}

autoDB::StringColumn StringColumn::Left( int32_t offset )
{
	return AUTODB_STR(" left (") + GetFullName() + AUTODB_STR(", ") + Util::ToString(offset) + AUTODB_STR(" )");
}

}
