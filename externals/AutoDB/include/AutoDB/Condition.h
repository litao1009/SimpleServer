#ifndef Condition_h__
#define Condition_h__

#pragma once

#include "Config.h"

namespace autoDB
{

class	Condition
{
public:

 	class	Imp;
 	std::unique_ptr<Imp>	ImpUPtr_;

public:

	Condition( const Condition& rhs);

	Condition( Condition&& rhs);

	Condition(const StringType& val);

	~Condition();

public:

	Condition	operator || ( const Condition& rhs) const;

	Condition&	operator || ( Condition&& rhs);

	Condition	operator && ( const Condition& rhs) const;

	Condition&	operator && ( Condition&& rhs);
public:

	template<typename T>
	void	SetUseValue(const T& val);
};

}
#endif // Condition_h__
