#ifndef	_NS_ASIO_
#define	_NS_ASIO_

#pragma once

#ifndef _WIN32_WINNT
#define _WIN32_WINNT	0x0501
#endif

#include <boost/asio.hpp>

namespace	nsAsio		=	boost::asio;

#endif