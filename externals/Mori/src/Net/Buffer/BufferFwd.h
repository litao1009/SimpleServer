#ifndef BufferFwd_h__
#define BufferFwd_h__

#pragma once

#include "Utils/NameSpace/nsAsio.h"
#include "mori/predef/int.h"

namespace mori
{
	typedef	nsAsio::mutable_buffer	MutableBuffer;
	typedef	nsAsio::const_buffer	ConstBuffer;

	class	RecvBuffer;
	class	SendBuffer;
}
#endif // BufferFwd_h__