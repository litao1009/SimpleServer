#pragma once

#include <memory>
#include <functional>
#include <unordered_map>
#include <cassert>

template<typename BaseT, typename CatT>
class	IReflection
{
public:

	typedef	typename	std::shared_ptr<BaseT>		BaseTPtr;
	typedef	typename	std::function<BaseTPtr()>	BaseTFtr;

	class Context
	{
	public:
		Context(CatT cat, BaseTFtr ftr)
		{
			auto& map_ = IReflection::_GetFtrMap();

			map_[cat] = ftr;
		}
	};

	static		BaseTPtr	Factory(const CatT& cat)
	{
		auto& map_ = _GetFtrMap();

		auto res = map_.find(cat);
		if ( res != map_.end() )
		{
			return res->second();
		}
		else
		{
			return BaseTPtr();
		}
	}

	static		void		Release()
	{
		auto& map_ = _GetFtrMap();

		map_.clear();
	}

private:

	typedef	typename	std::unordered_map<CatT, BaseTFtr>	FtrMap;

	static	FtrMap&		_GetFtrMap()
	{
		static	FtrMap		s_FtrMap;

		return s_FtrMap;
	}
};