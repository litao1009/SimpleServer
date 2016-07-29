#ifndef TcpMessage_h__
#define TcpMessage_h__

#pragma once

#include "TcpMessageFwd.h"
#include "mori/net/TcpConnectionFwd.h"
#include "Codec/Codec.h"

class	STcpMessage
{
public:

	STcpMessage() { RecvID_ = 0; }
	STcpMessage(mori::TcpConnBuffer& buf, mori::RecvFileList& files, Codec::SDecodeContext& dc, mori::TcpConnectionSPtr connPtr)
		:Buffer_(buf),RecvFiles_(files),DecodeContext_(dc),ConnPtr_(connPtr) { RecvID_ = 0; }

	STcpMessage(mori::TcpConnBuffer&& buf, mori::RecvFileList& files, Codec::SDecodeContext& dc, mori::TcpConnectionSPtr connPtr)
		:Buffer_(std::move(buf)),RecvFiles_(files),DecodeContext_(dc),ConnPtr_(connPtr) { RecvID_ = 0; }

	STcpMessage(mori::TcpConnBuffer& buf, mori::SendFileList& files, mori::TcpConnectionSPtr connPtr):Buffer_(buf),SendFiles_(files),ConnPtr_(connPtr) { RecvID_ = 0; }
	STcpMessage(mori::TcpConnBuffer&& buf, mori::SendFileList& files, mori::TcpConnectionSPtr connPtr):Buffer_(std::move(buf)),SendFiles_(files),ConnPtr_(connPtr) { RecvID_ = 0; }

	mori::TcpConnBuffer		Buffer_;
	mori::TcpConnectionSPtr	ConnPtr_;
	mori::RecvFileList		RecvFiles_;
	mori::SendFileList		SendFiles_;
	Codec::SDecodeContext	DecodeContext_;
	uint64_t				RecvID_;
};
#endif // TcpMessage_h__