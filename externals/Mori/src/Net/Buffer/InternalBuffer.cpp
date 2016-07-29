#include "InternalBuffer.h"

#include "Utils/SmartPtr.h"

namespace mori
{
	class	InternalBuffer::Imp
	{
	public:

		TcpConnBuffer	Buffer_;
		uint32_t		Offset_;

	public:

		Imp():Buffer_(0)
		{
			Offset_ = 0;
		}
	};

	InternalBuffer::InternalBuffer():ImpUPtr_(smartPtr::make_unique<InternalBuffer::Imp>())
	{

	}

	InternalBuffer::~InternalBuffer()
	{

	}

	void InternalBuffer::ReSize( uint32_t bytes )
	{
		auto& buf_	= ImpUPtr_->Buffer_;
		auto& off_	= ImpUPtr_->Offset_;
		
		buf_.resize(bytes);
		off_ = 0;
	}

	void InternalBuffer::ResetOffset( uint32_t off )
	{
		assert( off < ImpUPtr_->Buffer_.size() );

		auto& off_	= ImpUPtr_->Offset_;
		off_ = off;
	}

	void InternalBuffer::Reset( TcpConnBuffer&& buf )
	{
		auto& buf_	= ImpUPtr_->Buffer_;
		auto& off_	= ImpUPtr_->Offset_;

		buf_ = std::move(buf);
		off_ = 0;		
	}

	void InternalBuffer::Reset( const TcpConnBuffer& buf )
	{
		auto& buf_	= ImpUPtr_->Buffer_;
		auto& off_	= ImpUPtr_->Offset_;

		buf_ = buf;
		off_ = 0;		
	}

	void InternalBuffer::Update( uint32_t bytes )
	{
		assert( !IsFinish() );

		auto& buf_	= ImpUPtr_->Buffer_;
		auto& off_	= ImpUPtr_->Offset_;

		assert(off_+bytes <= buf_.size());

		off_ += bytes;
	}

	uint32_t InternalBuffer::GetLeftSize() const
	{
		auto& buf_	= ImpUPtr_->Buffer_;
		auto& off_	= ImpUPtr_->Offset_;

		return buf_.size()-off_;
	}

	bool InternalBuffer::IsFinish() const
	{
		auto& buf_	= ImpUPtr_->Buffer_;
		auto& off_	= ImpUPtr_->Offset_;

		return buf_.size() == off_;
	}

	InternalBuffer::operator MutableBuffer()
	{
		auto& buf_	= ImpUPtr_->Buffer_;
		auto& off_	= ImpUPtr_->Offset_;

		return nsAsio::buffer(buf_.data()+off_, buf_.size()-off_);
	}

	InternalBuffer::operator ConstBuffer()
	{
		auto& buf_	= ImpUPtr_->Buffer_;
		auto& off_	= ImpUPtr_->Offset_;

		return nsAsio::buffer(buf_.data()+off_, buf_.size()-off_);
	}

	TcpConnBuffer& InternalBuffer::GetRawBuffer()
	{
		auto& buf_	= ImpUPtr_->Buffer_;

		return buf_;
	}

	uint32_t InternalBuffer::GetCurOffset() const
	{
		auto& off_	= ImpUPtr_->Offset_;

		return off_;
	}

}