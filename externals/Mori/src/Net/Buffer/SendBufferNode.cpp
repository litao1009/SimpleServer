#include "SendBufferNode.h"
#include "InternalBuffer.h"

#include "Net/Message/MsgHead.h"
#include "Net/Message/HeadInfo.pb.h"
#include "mori/net/STransInfo.h"

#include "Utils/Type/FileType.h"
#include "Utils/SmartPtr.h"
#include "Utils/Type/Crc32Type.h"

namespace mori
{
	enum ESendState
	{
		ESS_HEAD,
		ESS_MSG,
		ESS_FILE,
		ESS_FINISH,
		ESS_COUNT
	};

	static	const uint32_t	g_4M	= 0x400000;

	class	SendBufferNode::Imp
	{
	public:

		uint32_t		MsgID_;
		InternalBuffer	Buffer_;
		InternalBuffer	HeadBuffer_;
		FileInfoList	ToSendList_;
		InFileType		Ifs_;
		ESendState		State_;
		STransInfo		TransInfo_;

	public:

		Imp(uint32_t msgID, const FileInfoList& files):MsgID_(msgID),ToSendList_(files.rbegin(), files.rend())
		{
			State_ = ESS_HEAD;
		}

		void	FlushBuffer()
		{
			if ( ToSendList_.empty() )
			{
				return;
			}

			auto& curFile = ToSendList_.back();

			if ( !Ifs_.is_open() )
			{
				Ifs_.open(curFile.Path_, std::ios::binary);
				assert(Ifs_.is_open());
			}

			auto left = curFile.Size_ - static_cast<uint32_t>(Ifs_.tellg());
			left = std::min(left, g_4M);

			Buffer_.ReSize(left);

			Ifs_.read(Buffer_.GetRawBuffer().data(), Buffer_.GetRawBuffer().size());

			if ( static_cast<uint32_t>(Ifs_.tellg()) == curFile.Size_ )
			{
				Ifs_.close();
				ToSendList_.pop_back();
			}

		}

		void	SetTransInfo(STransInfoPtr& infoPtr)
		{
			if ( !infoPtr )
			{
				infoPtr = smartPtr::make_shared<STransInfo>();
			}

			*infoPtr = TransInfo_;
		}

		void	UpdateHead(uint32_t transBytes, STransInfoPtr& transInfoPtr)
		{
			HeadBuffer_.Update(transBytes);
			if ( !HeadBuffer_.IsFinish() )
			{
				return;
			}

			HeadBuffer_.ReSize(0);

			if ( !Buffer_.GetRawBuffer().empty() )
			{
				State_ = ESS_MSG;
			}
			else
			{
				State_ = ESS_FILE;
				FlushBuffer();
			}
		}

		void	UpdateMsg(uint32_t transBytes, STransInfoPtr& transInfoPtr)
		{
			TransInfo_.TransSize_ += transBytes;
			SetTransInfo(transInfoPtr);

			Buffer_.Update(transBytes);
			if ( !Buffer_.IsFinish() )
			{
				return;
			}

			if ( ToSendList_.empty() )
			{
				State_ = ESS_FINISH;
			}
			else
			{
				State_ = ESS_FILE;
				FlushBuffer();
			}
		}

		void	UpdateFiles(uint32_t transBytes, STransInfoPtr& transInfoPtr)
		{
			TransInfo_.TransSize_ += transBytes;
			SetTransInfo(transInfoPtr);

			Buffer_.Update(transBytes);
			if ( !Buffer_.IsFinish() )
			{
				return;
			}

			if ( !ToSendList_.empty() )
			{
				FlushBuffer();
			}
			else
			{
				State_ = ESS_FINISH;
			}
		}
	};

	SendBufferNode::SendBufferNode( uint32_t msgID, TcpConnBuffer& buf, const FileInfoList& files ):
		ImpUPtr_(smartPtr::make_unique<SendBufferNode::Imp>(msgID,files))
	{
		auto& transInfo_ = ImpUPtr_->TransInfo_;
		transInfo_.MsgID_ = msgID;
		transInfo_.TotalSize_ = buf.size();

		for ( auto& perFile : files )
		{
			transInfo_.TotalSize_ += perFile.Size_;
		}

		auto headBuf = MsgHead::PackHeadBuffer(buf, files);

		ImpUPtr_->HeadBuffer_.Reset(std::move(headBuf));
		ImpUPtr_->Buffer_.Reset(std::move(buf));
	}

	SendBufferNode::~SendBufferNode()
	{

	}

	void SendBufferNode::Upate( uint32_t transBytes, STransInfoPtr& transInfoPtr )
	{
		if ( IsFinish() )
		{
			return;
		}

		auto& step_		= ImpUPtr_->State_;

		if ( ESS_HEAD == step_ )
		{
			ImpUPtr_->UpdateHead(transBytes, transInfoPtr);
		}
		else if ( ESS_MSG == step_ )
		{
			ImpUPtr_->UpdateMsg(transBytes, transInfoPtr);
		}
		else if ( ESS_FILE == step_ )
		{
			ImpUPtr_->UpdateFiles(transBytes, transInfoPtr);
		}
	}

	bool SendBufferNode::IsFinish()
	{
		auto& step_ = ImpUPtr_->State_;

		return ESS_FINISH == step_;
	}

	uint32_t SendBufferNode::GetID() const
	{
		auto& id_ = ImpUPtr_->MsgID_;

		return id_;
	}

	SendBufferNode::operator ConstBuffer()
	{
		auto& step_ = ImpUPtr_->State_;
		
		if ( ESS_HEAD == step_ )
		{
			return ImpUPtr_->HeadBuffer_;
		}
		else
		{
			return ImpUPtr_->Buffer_;
		}
	}

}