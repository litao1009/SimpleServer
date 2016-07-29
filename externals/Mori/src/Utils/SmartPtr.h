#pragma once

#include <memory>
#include <boost/functional/factory.hpp>

namespace smartPtr
{
	using	std::unique_ptr;
	using	std::shared_ptr;
	using	std::weak_ptr;
	using	std::make_shared;
	using	std::enable_shared_from_this;

	template<typename T>
	unique_ptr<T>	make_unique()
	{
		auto *pT = boost::factory<T*>()();
		return std::move(unique_ptr<T>(pT));
	}

	template<typename T, typename Arg1>
	unique_ptr<T>	make_unique(Arg1&& a1)
	{
		auto *pT = boost::factory<T*>()(a1);
		return std::move(unique_ptr<T>(pT));
	}

	template<typename T, typename Arg1, typename Arg2>
	unique_ptr<T>	make_unique(Arg1&& a1, Arg2&& a2)
	{
		auto *pT = boost::factory<T*>()(a1,a2);
		return std::move(unique_ptr<T>(pT));
	}

	template<typename T, typename Arg1, typename Arg2, typename Arg3>
	unique_ptr<T>	make_unique(Arg1&& a1, Arg2&& a2, Arg3&& a3)
	{
		auto *pT = boost::factory<T*>()(a1,a2,a3);
		return std::move(unique_ptr<T>(pT));
	}
}

template<typename T>
class SCopybleWrap
{
public:

	typedef	typename smartPtr::shared_ptr<SCopybleWrap<T>>	SCopyblePtr;

	SCopybleWrap(T& t):Ptr_(std::move(t)) {}

	T			Ptr_;
};