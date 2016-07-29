#ifndef TcpSoket_h__
#define TcpSoket_h__

#pragma once

#include "mori/predef/net.h"
#include "mori/net/TcpConnectionFwd.h"
#include "mori/net/ServerFwd.h"
#include "mori/net/ClientFwd.h"

#include <boost/asio/ip/tcp.hpp>

namespace mori
{
	typedef	boost::asio::ip::tcp::socket	SocketType;
	typedef	mori::unique_ptr<SocketType>	SocketTypeUPtr;

	class	TcpSocket
	{
		friend	class	TcpConnection;
		friend	class	Server;
		friend	class	Client;

		SocketTypeUPtr	SockUPtr_;	
	};
}
#endif // TcpSoket_h__