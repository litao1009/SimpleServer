#include "Log.h"

#ifdef USE_TINYLOG

#include "mori/predef/net.h"
#include "Net/TCP/TcpEndPoint.h"

template<>
PerLog&	PerLog::operator << (const mori::EndPoint& ep)
{
	TcpEndPoint wrap(boost::asio::ip::address::from_string(ep.Adress_), ep.Port_);

	*this << wrap;

	return *this;
}

#endif