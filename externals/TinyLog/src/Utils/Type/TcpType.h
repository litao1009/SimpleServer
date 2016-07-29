#ifndef	_DEF_TCPTYPE_
#define	_DEF_TCPTYPE_

#pragma once

#include "Utils/NameSpace/nsAsio.h"

typedef	nsAsio::ip::tcp					TcpType;
typedef	nsAsio::ip::address				IPAdressType;

typedef	TcpType::socket					SocketType;
typedef	TcpType::acceptor				AcceptorType;
typedef	TcpType::endpoint				EndPointType;

#endif