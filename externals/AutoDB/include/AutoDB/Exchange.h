#ifndef Exchange_h__
#define Exchange_h__

#pragma once

#include "Config.h"

#include <functional>
#include <boost/date_time/posix_time/ptime.hpp>

namespace autoDB
{


enum class EDataType
{
	EDT_INT,
	EDT_BIGINT,
	EDT_FLOAT,
	EDT_STRING,
	EDT_TIME,
	EDT_BOOL,
	EDT_COUNT
};

template<typename T>
class	DBType
{
public:
	static const EDataType Type = EDataType::EDT_COUNT;
};

template<>
class	DBType<int32_t>
{
public:
	static const EDataType Type = EDataType::EDT_INT;
};

template<>
class	DBType<int64_t>
{
public:
	static const EDataType Type = EDataType::EDT_BIGINT;
};

template<>
class	DBType<double>
{
public:
	static const EDataType Type = EDataType::EDT_FLOAT;
};

template<>
class	DBType<StringType>
{
public:
	static const EDataType Type = EDataType::EDT_STRING;
};

template<>
class	DBType<bool>
{
public:
	static const EDataType Type = EDataType::EDT_BOOL;
};

template<>
class	DBType<boost::posix_time::ptime>
{
public:
	static const EDataType Type = EDataType::EDT_TIME;
};

template<typename T>
class	Readable
{
public:

	typedef	T	ValueType;

	Readable(const T& val):Val_(val) {}

	const T&	Val_;
};

template<typename T>
class	Writable
{
public:

	typedef	T	ValueType;

	Writable(T& val):Val_(val) {}

	T&	Val_;
};


template<typename T>
Writable<T>	Into(T& val)
{
	return Writable<T>(val);
}

template<typename T>
Readable<T>	Use(const T& val)
{
	return Readable<T>(val);
}

typedef	std::function<void(void*)>	CallBackFtr;
}

#endif // Exchange_h__
