#ifndef InternalBuffer_h__
#define InternalBuffer_h__
#pragma once

#include "Utils/Pimp.h"
#include "Utils/intDef.h"
#include "Utils/NameSpace/nsAsio.h"

#include "mori/net/TcpConnectionFwd.h"

#include <boost/noncopyable.hpp>

namespace mori
{
	typedef	nsAsio::mutable_buffer	MutableBuffer;
	typedef	nsAsio::const_buffer	ConstBuffer;

	class	InternalBuffer : boost::noncopyable
	{
		DEFINE_PIMP

	public:

		InternalBuffer();

		~InternalBuffer();

		operator	MutableBuffer();

		operator	ConstBuffer();

		void		ReSize(uint32_t bytes);

		void		ResetOffset(uint32_t off=0);

		void		Reset(TcpConnBuffer&& buf);

		void		Reset(const TcpConnBuffer& buf);

		void		Update(uint32_t bytes);

		uint32_t	GetLeftSize() const;

		uint32_t	GetCurOffset() const;

		bool		IsFinish() const;

		TcpConnBuffer&	GetRawBuffer();
	};
}

#endif // InternalBuffer_h__