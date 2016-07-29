#pragma once


#include <boost/locale/encoding.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/optional.hpp>
#include <string>

namespace	nsConvUTF	=	boost::locale::conv;
using		boost::lexical_cast;

template<typename DestT, typename SrcT>
boost::optional<DestT>	LexCast(SrcT&& t)
{
	try
	{
		return boost::optional<DestT>(boost::lexical_cast<DestT>(t));
	}
	catch(...)
	{
		return boost::optional<DestT>();
	}
}

template<typename DestT, typename SrcT>
DestT	LexCast(SrcT&& t, DestT defaultVal)
{
	try
	{
		return std::move(boost::lexical_cast<DestT>(t));
	}
	catch(...)
	{
		return std::move(defaultVal);
	}
}


template<typename DestT, typename SrcT>
boost::optional<DestT>	UtfToUtfConv(SrcT& t)
{
	try
	{
		return boost::optional<DestT>(boost::locale::conv::utf_to_utf<DestT::value_type>(t));
	}
	catch(...)
	{
		return boost::optional<DestT>();
	}
}

template<typename DestT, typename SrcT>
DestT	UtfToUtfConv(SrcT& t, DestT defaultVal)
{
	try
	{
		return std::move(boost::locale::conv::utf_to_utf<DestT::value_type>(t));
	}
	catch(...)
	{
		return std::move(defaultVal);
	}
}


template<typename SrcT>
boost::optional<std::string>	FromUtfConv(SrcT& t)
{
	try
	{
		return boost::optional<std::string>(boost::locale::conv::from_utf(t, "GB2312"));
	}
	catch(...)
	{
		return boost::optional<std::string>();
	}
}

template<typename SrcT>
std::string	FromUtfConv(SrcT& t, std::string defaultVal)
{
	try
	{
		return std::move(boost::locale::conv::from_utf(t, "GB2312"));
	}
	catch(...)
	{
		return std::move(defaultVal);
	}
}


template<typename DestT, typename SrcT>
boost::optional<DestT>	ToUtfConv(SrcT& t)
{
	try
	{
		return boost::optional<DestT>(boost::locale::conv::to_utf<DestT::value_type>(t, "GB2312"));
	}
	catch(...)
	{
		return boost::optional<DestT>();
	}
}

template<typename DestT, typename SrcT>
DestT	ToUtfConv(SrcT& t, DestT defaultVal)
{
	try
	{
		return std::move(boost::locale::conv::to_utf<DestT::value_type>(t, "GB2312"));
	}
	catch(...)
	{
		return std::move(defaultVal);
	}
}