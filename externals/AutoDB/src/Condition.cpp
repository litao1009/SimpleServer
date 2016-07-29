#include "ConditionImp.h"
#include "AutoDB/Condition.h"
#include <boost/optional.hpp>
#include <assert.h>

namespace autoDB
{


	Condition::Condition(const StringType& val):ImpUPtr_( new Imp)
	{
		ImpUPtr_->Str_ = StringType(AUTODB_STR("( ")) + val + StringType(AUTODB_STR(" )"));
	}

	Condition::Condition( const Condition& rhs ):ImpUPtr_(new Imp(*(rhs.ImpUPtr_)))
	{

	}

	Condition::Condition( Condition&& rhs ):ImpUPtr_(std::move(rhs.ImpUPtr_))
	{

	}


	Condition::~Condition()
	{

	}

	autoDB::Condition Condition::operator||( const Condition& rhs ) const
	{
		Condition cond(ImpUPtr_->Str_ + AUTODB_STR(" or ") + rhs.ImpUPtr_->Str_);

		std::copy(ImpUPtr_->UseValues_.begin(), ImpUPtr_->UseValues_.end(), back_inserter(cond.ImpUPtr_->UseValues_));
		std::copy(rhs.ImpUPtr_->UseValues_.begin(), rhs.ImpUPtr_->UseValues_.end(), back_inserter(cond.ImpUPtr_->UseValues_));

		return std::move(cond);
	}

	autoDB::Condition& Condition::operator||( Condition&& rhs )
	{
		ImpUPtr_->Str_ = ImpUPtr_->Str_ + AUTODB_STR(" or ") + rhs.ImpUPtr_->Str_;

		std::copy(ImpUPtr_->UseValues_.begin(), ImpUPtr_->UseValues_.end(), back_inserter(ImpUPtr_->UseValues_));
		std::copy(rhs.ImpUPtr_->UseValues_.begin(), rhs.ImpUPtr_->UseValues_.end(), back_inserter(ImpUPtr_->UseValues_));

		return *this;
	}

	autoDB::Condition Condition::operator&&( const Condition& rhs ) const
	{
		Condition cond(ImpUPtr_->Str_ + AUTODB_STR(" and ") + rhs.ImpUPtr_->Str_);

		std::copy(ImpUPtr_->UseValues_.begin(), ImpUPtr_->UseValues_.end(), back_inserter(cond.ImpUPtr_->UseValues_));
		std::copy(rhs.ImpUPtr_->UseValues_.begin(), rhs.ImpUPtr_->UseValues_.end(), back_inserter(cond.ImpUPtr_->UseValues_));

		return std::move(cond);
	}

	autoDB::Condition& Condition::operator&&( Condition&& rhs )
	{
		ImpUPtr_->Str_ = ImpUPtr_->Str_ + AUTODB_STR(" and ") + rhs.ImpUPtr_->Str_;

		std::copy(ImpUPtr_->UseValues_.begin(), ImpUPtr_->UseValues_.end(), back_inserter(ImpUPtr_->UseValues_));
		std::copy(rhs.ImpUPtr_->UseValues_.begin(), rhs.ImpUPtr_->UseValues_.end(), back_inserter(ImpUPtr_->UseValues_));

		return *this;
	}

	template<>
	void	Condition::SetUseValue(const int32_t& val)
	{
		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<boost::optional<int32_t>*>(src);
			*realSrc = val;
		};

		ImpUPtr_->UseValues_.emplace_back(ValueWrap::EValueType::EVT_INT, func);
	}

	template<>
	void	Condition::SetUseValue(const int64_t& val)
	{
		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<boost::optional<int64_t>*>(src);
			*realSrc = val;
		};

		ImpUPtr_->UseValues_.emplace_back(ValueWrap::EValueType::EVT_BIGINT, func);
	}

	template<>
	void	Condition::SetUseValue(const double& val)
	{
		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<boost::optional<double>*>(src);
			*realSrc = val;
		};

		ImpUPtr_->UseValues_.emplace_back(ValueWrap::EValueType::EVT_FLOAT, func);
	}

	template<>
	void	Condition::SetUseValue(const bool& val)
	{
		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<boost::optional<bool>*>(src);
			*realSrc = val;
		};

		ImpUPtr_->UseValues_.emplace_back(ValueWrap::EValueType::EVT_BOOL, func);
	}

	template<>
	void	Condition::SetUseValue(const StringType& val)
	{
		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<boost::optional<StringType>*>(src);
			*realSrc = val;
		};

		ImpUPtr_->UseValues_.emplace_back(ValueWrap::EValueType::EVT_STRING, func);
	}

	template<>
	void	Condition::SetUseValue(const boost::posix_time::ptime& val)
	{
		auto func = [&val](void* src)
		{
			auto realSrc = static_cast<boost::optional<boost::posix_time::ptime>*>(src);
			*realSrc = val;
		};

		ImpUPtr_->UseValues_.emplace_back(ValueWrap::EValueType::EVT_TIME, func);
	}

}