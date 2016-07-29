#ifndef mori_net_h__
#define mori_net_h__

#pragma once

#include "mori/predef/int.h"
#include <string>

namespace mori
{
	class	TcpSocket;

	class	EndPoint
	{
	public:

		bool operator < ( const EndPoint& rhs) const
		{
			if ( Adress_ < rhs.Adress_ )
			{
				return true;
			}

			if ( Adress_ > rhs.Adress_ )
			{
				return false;
			}

			if ( Port_ >= rhs.Port_ )
			{
				return false;
			}

			return true;
		}
		uint16_t	Port_;
		std::string	Adress_;
	};
}

#endif // net_h__