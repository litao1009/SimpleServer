#ifndef Config_h__
#define Config_h__

#pragma once

#include <string>
#include <memory>

namespace autoDB
{
#ifdef AUTODB_UNICODE
	typedef	std::wstring	StringType;
#define AUTODB_STR(str)		L#str
#else
	typedef	std::string		StringType;
#define AUTODB_STR(str)		str
#endif // AUTODB_UNICODE

}

#endif // Config_h__
