#ifndef ColumnOperator_h__
#define ColumnOperator_h__

#pragma once

#include "Config.h"
#include "Column.h"
#include "Condition.h"
#include "Exchange.h"
#include "Util.h"
#include "Optional.h"

namespace autoDB
{

template<typename T, typename ValT>
class	ColumnOperator : public Column
{

public:

	typedef	typename boost::optional<ValT>	OptionalT;

	ColumnOperator(const StringType& statement):Column(statement) {}

	ColumnOperator(TableImpSPtr sptb, const StringType& name):Column(sptb,name) {}

	//ColumnOperator( const ColumnOperator& rhs):Column(rhs) {}

	template<typename T2, typename ValT2>
	ColumnOperator( const ColumnOperator<T2, ValT2>& rhs):Column(rhs) {}

	ColumnOperator( const ColumnOperator&& rhs):Column(rhs) {}

	Condition	operator < (const T& rhs) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("<") + rhs.GetFullName()));
	}
	Condition	operator < (const ValT& val) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("<") + Util::ToString(val)));
	}
	Condition	operator < (const Readable<ValT>& val) const
	{
		Condition ret(GetFullName() + AUTODB_STR("<:use"));
		ret.SetUseValue<ValT>(val.Val_);
		
		return std::move(ret);
	}

	Condition	operator <= (const T& rhs) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("<=") + rhs.GetFullName()));
	}
	Condition	operator <= (const ValT& val) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("<=") + Util::ToString(val)));
	}
	Condition	operator <= (const Readable<ValT>& val) const
	{
		Condition ret(GetFullName() + AUTODB_STR("<=:use"));
		ret.SetUseValue<ValT>(val.Val_);

		return std::move(ret);
	}

	Condition	operator > (const T& rhs) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR(">") + rhs.GetFullName()));
	}
	Condition	operator > (const ValT& val) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR(">") + Util::ToString(val)));
	}
	Condition	operator > (const Readable<ValT>& val) const
	{
		Condition ret(GetFullName() + AUTODB_STR(">:use"));
		ret.SetUseValue<ValT>(val.Val_);

		return std::move(ret);
	}

	Condition	operator >= (const T& rhs) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR(">=") + rhs.GetFullName()));
	}
	Condition	operator >= (const ValT& val) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR(">=") + Util::ToString(val)));
	}
	Condition	operator >= (const Readable<ValT>& val) const
	{
		Condition ret(GetFullName() + AUTODB_STR(">=:use"));
		ret.SetUseValue<ValT>(val.Val_);

		return std::move(ret);
	}

	Condition	operator == (const T& rhs) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("=") + rhs.GetFullName()));
	}
	Condition	operator == (const ValT& val) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("=") + Util::ToString(val)));
	}
	Condition	operator == (const Readable<ValT>& val) const
	{
		Condition ret(GetFullName() + AUTODB_STR("=:use"));
		ret.SetUseValue<ValT>(val.Val_);

		return std::move(ret);
	}

	Condition	Equal (const StringType& str) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("= ( ") + str + AUTODB_STR(" )")));
	}

	template<typename ItorType>
	Condition	In(const ItorType itorbeg, const ItorType itorend)
	{
		StringType str = GetFullName() + AUTODB_STR(" in ( ");
 		std::for_each(itorbeg, itorend, [&str](const ValT& val)
 		{
 			str += Util::ToString(val) + AUTODB_STR(", ");
 		});

		str.erase(str.length()-2);
		str += AUTODB_STR(" )");

		return std::move(Condition(str)); 
	}

	Condition	In(const StringType& str)
	{
		return std::move(Condition(str));
	}

	template<typename ItorType>
	Condition	NotIn(const ItorType itorbeg, const ItorType itorend)
	{
		StringType str = GetFullName() + AUTODB_STR(" not in ( ");
		std::for_each(itorbeg, itorend, [&str](const ValT& val)
		{
			str += Util::ToString(val) + AUTODB_STR(", ");
		});

		str.erase(str.length()-2);
		str += AUTODB_STR(" )");

		return std::move(Condition(str)); 
	}

	Condition	NotIn(const StringType& str)
	{
		return std::move(Condition( GetFullName() + AUTODB_STR(" not in ( ") + str + AUTODB_STR(" )") ));
	}

	Condition	operator != (const T& rhs) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("<>") + rhs.GetFullName()));
	}
	Condition	operator != (const ValT& val) const
	{
		return std::move(Condition(GetFullName() + AUTODB_STR("<>") + Util::ToString(val)));
	}
	Condition	operator != (const Readable<ValT>& val) const
	{
		Condition ret(GetFullName() + AUTODB_STR("<>:use"));
		ret.SetUseValue<ValT>(val.Val_);

		return std::move(ret);
	}

	ColumnOperator			Into(OptionalT& val) const
	{
		ColumnOperator ret(*this);

		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<OptionalT*>(src);
			val = *realSrc;
		};
		
		ret.SetInto(DBType<ValT>::Type, func, false);

		return std::move(ret);
	}

	ColumnOperator			Into(ValT& val) const
	{
		ColumnOperator ret(*this);

		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<OptionalT*>(src);
			if ( *realSrc )
			{
				val = **realSrc;
			}
		};
		
		ret.SetInto(DBType<ValT>::Type, func, false);

		return std::move(ret);
	}

	ColumnOperator			Into(std::vector<ValT>& val) const
	{
		ColumnOperator ret(*this);

		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<std::vector<OptionalT>*>(src);
			std::transform(realSrc->begin(), realSrc->end(), std::back_inserter(val), [](const OptionalT& cur){ return *cur; });
		};

		ret.SetInto(DBType<ValT>::Type, func, true);

		return std::move(ret);
	}

	ColumnOperator			Into(std::vector<OptionalT>& val) const
	{
		ColumnOperator ret(*this);

		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<std::vector<OptionalT>*>(src);
			std::copy(realSrc->begin(), realSrc->end(), std::back_inserter(val));
		};
		
		ret.SetInto(DBType<ValT>::Type, func, true);

		return std::move(ret);
	}

	ColumnOperator			Use(const ValT& val) const
	{
		ColumnOperator ret(*this);

		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<OptionalT*>(src);
			*realSrc = val;
		};

		ret.SetUse(DBType<ValT>::Type, func);

		return std::move(ret);
	}

	ColumnOperator			Use(const OptionalT& val) const
	{
		ColumnOperator ret(*this);

		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<OptionalT*>(src);
			*realSrc = val;
		};

		ret.SetUse(DBType<ValT>::Type, func);

		return std::move(ret);
	}
};

}
#endif // ColumnOperator_h__
