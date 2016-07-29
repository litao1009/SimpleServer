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
			IReflection::_Proc(EOT_ADD, cat, ftr);
		}
	};

	static		BaseTPtr	Factory(const CatT& cat)
	{
		return _Proc(EOT_GET, cat);
	}

	static		void		Release()
	{
		_Proc(EOT_CLEAR, CatT());
	}

private:

	enum EOperateType
	{
		EOT_ADD,
		EOT_CLEAR,
		EOT_GET,
		EOT_COUNT
	};

	static	BaseTPtr	_Proc(EOperateType eot, const CatT& cat, BaseTFtr ftr = BaseTFtr())
	{
		typedef	typename	std::unordered_map<CatT, BaseTFtr>	FtrMap;

		static	FtrMap		s_FtrMap;

		if ( EOT_GET == eot )
		{
			auto res = s_FtrMap.find(cat);
			if ( res != s_FtrMap.end() )
			{
				return res->second();
			}
			else
			{
				return BaseTPtr();
			}
		}
		else if ( EOT_ADD == eot )
		{
			assert(ftr);

			s_FtrMap[cat] = ftr;
		}
		else if ( EOT_CLEAR == eot )
		{
			s_FtrMap.clear();
		}

		return BaseTPtr();
	}
};