#include "ConfigMgr.h"

#include "Utils/Cast.h"
#include "Utils/SmartPtr.h"
#include "Utils/NameSpace/nsFileSystem.h"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/algorithm/string.hpp>
#include <cassert>


PRIVATE_IMPLEMENT(ConfigMgr)

typedef	boost::property_tree::ptree	Ptree;


class	ConfigMgr::Imp
{
public:

	Imp()
	{

	}

public:

	Ptree	Ptree_;
};



ConfigMgr&	ConfigMgr::GetInstance()
{
	assert(sIntancePtr);
	return *sIntancePtr;
}

bool		ConfigMgr::Init(PathType pt)
{
	PRIVATE_CREATORCLASS_NAME pc;
	sIntancePtr = std::move(smartPtr::make_unique<ConfigMgr>(pc));

	if ( !nsFileSystem::exists(pt) )
	{
		return false;
	}

	using namespace boost::property_tree;

	try
	{
		read_xml(pt.string(), sIntancePtr->ImpUPtr_->Ptree_, xml_parser::no_comments|xml_parser::trim_whitespace);

		return true;
	}
	catch(...)
	{
		return false;
	}	
}


void		ConfigMgr::UnInit()
{
	sIntancePtr.reset();
}


ConfigMgr::ConfigMgr(PRIVATE_CREATORCLASS_NAME):ImpUPtr_(smartPtr::make_unique<ConfigMgr::Imp>())
{
	
}


ConfigMgr::~ConfigMgr()
{

}

ConfigMgr::XmlVals	ConfigMgr::GetConfigs(AStringType str)
{
 	try
 	{
 		auto childs = ImpUPtr_->Ptree_.get_child_optional(str);
 		if ( childs && childs.get().size() > 0 )
 		{
 			XmlVals ret;
			for ( auto& CurChild : childs.get() )
			{
				AStringType astr = CurChild.second.get_value<AStringType>();
				boost::algorithm::trim(astr);
				auto res = ToUtfConv<WStringType>(astr);
				if ( res )
				{
					ret.push_back(std::move(*res));
				}
			}
 
 			return std::move(ret);
 		}
		else
		{
			return XmlVals();
		}
 	}
 	catch(...)
 	{
 		return XmlVals();
 	}

	
}

WStringType ConfigMgr::GetConfig( AStringType str )
{
	try
	{
		auto child = ImpUPtr_->Ptree_.get_optional<AStringType>(str);
		if ( child )
		{
			AStringType astr = move(child.get());
			boost::algorithm::trim(astr);

			auto res = ToUtfConv<WStringType>(astr, L"");		

			return std::move(res);

		}
		else
		{
			return WStringType();
		}
	}
	catch(...)
	{
		return WStringType();
	}
}
