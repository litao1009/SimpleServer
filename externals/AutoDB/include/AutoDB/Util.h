#ifndef Util_h__
#define Util_h__

#pragma once

#include "AutoDB/Config.h"

#include <sstream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/time_facet.hpp>

namespace autoDB
{
	class	Util
	{
	public:

		template<typename T>
		static	StringType	ToString(const T& val)
		{
#ifdef AUTODB_UNICODE
			return std::to_wstring(val);
#else
			return std::to_string(val);
#endif
		}

		template<>
		static	StringType	ToString<StringType>(const StringType& str)
		{
			return StringType(AUTODB_STR("'")) + str + AUTODB_STR("'");
		}

		template<>
		static	StringType	ToString<boost::posix_time::ptime>(const boost::posix_time::ptime& time)
		{
			typedef	std::basic_stringstream<StringType::value_type, std::char_traits<StringType::value_type>, std::allocator<StringType::value_type> >	StreamType;
			typedef	boost::date_time::time_facet<boost::posix_time::ptime,StringType::value_type>														TimeFacet;

			StreamType ss;
			ss.imbue(std::locale(ss.getloc(), new TimeFacet(AUTODB_STR("%Y-%m-%d %H:%M:%S%F"))));
			ss << time;

			return StringType(AUTODB_STR("'")) + ss.str() + StringType(AUTODB_STR("'"));
		}
	};


}
#endif // Util_h__
