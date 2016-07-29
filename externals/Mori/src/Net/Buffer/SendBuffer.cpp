#include "SendBuffer.h"
#include "SendBufferNode.h"
#include "InternalBuffer.h"

#include "mori/predef/smartPtr.h"
#include "mori/net/STransInfo.h"

#include "Utils/SmartPtr.h"

#include <mutex>
#include <atomic>
#include <list>

namespace mori
{
	typedef	smartPtr::shared_ptr<SendBufferNode>	SendBufferNodePtr;
	typedef	std::list<SendBufferNodePtr>			SendBufferNodeList;

	class	SendBuffer::Imp
	{
	public:

		typedef	std::atomic<uint32_t>	SafeRecord;

		static	SafeRecord		MsgIDRecord_;
		SendBufferNodeList		SendList_;
		std::mutex				SendListMutex_;

	public:

		Imp()
		{
			MsgIDRecord_	= 0;
		}
	};

	SendBuffer::Imp::SafeRecord	SendBuffer::Imp::MsgIDRecord_(0);

	SendBuffer::SendBuffer():ImpUPtr_(smartPtr::make_unique<SendBuffer::Imp>())
	{

	}

	SendBuffer::~SendBuffer()
	{

	}

	SendBuffer::operator ConstBuffer()
	{
		auto& sendList_ = ImpUPtr_->SendList_;
		auto& mutex_	= ImpUPtr_->SendListMutex_;

		SendBufferNodePtr curBufPtr;
		{
			std::lock_guard<std::mutex> lock(mutex_);
			
			if ( sendList_.empty() )
			{
				assert(0);
				return ConstBuffer();
			}

			curBufPtr = sendList_.front();
		}

		return *curBufPtr;
	}

	void SendBuffer::Update( uint32_t transBytes, STransInfoPtr& transInfoPtr )
	{
		auto& sendList_ = ImpUPtr_->SendList_;
		auto& mutex_	= ImpUPtr_->SendListMutex_;

		SendBufferNodePtr curBufPtr;
		{
			std::lock_guard<std::mutex> lock(mutex_);

			if ( sendList_.empty() )
			{
				assert(0);
				return;
			}

			curBufPtr = sendList_.front();
		}

		curBufPtr->Upate(transBytes, transInfoPtr);

		if ( curBufPtr->IsFinish() )
		{
			std::lock_guard<std::mutex> lock(mutex_);
			sendList_.pop_front();
		}
	}

	void SendBuffer::Reset()
	{
		auto& sendList_ = ImpUPtr_->SendList_;
		auto& mutex_	= ImpUPtr_->SendListMutex_;

		std::lock_guard<std::mutex> lock(mutex_);
		sendList_.clear();
	}

	uint32_t SendBuffer::Add( TcpConnBuffer& buf, const FileInfoList& files, bool& isNeedSend )
	{
		auto& sendList_ = ImpUPtr_->SendList_;
		auto& mutex_	= ImpUPtr_->SendListMutex_;
		auto& idRecord_	= ImpUPtr_->MsgIDRecord_;

		auto newID = idRecord_.fetch_add(1);
		isNeedSend = false;

		auto newBufPtr = smartPtr::make_shared<SendBufferNode>(newID, buf, files);

		std::lock_guard<std::mutex> lock(mutex_);
		{
			isNeedSend = sendList_.empty();
			sendList_.push_back(newBufPtr);
		}

		return newID;
	}

	boost::optional<uint32_t> SendBuffer::GetCurrentMsgID()
	{
		auto& sendList_ = ImpUPtr_->SendList_;
		auto& mutex_	= ImpUPtr_->SendListMutex_;

		SendBufferNodePtr curPtr;
		{
			std::lock_guard<std::mutex> lock(mutex_);

			if ( sendList_.empty() )
			{
				return boost::optional<uint32_t>();
			}

			curPtr = sendList_.front();
		}

		return curPtr->GetID();
	}

	bool SendBuffer::Empty()
	{
		auto& sendList_ = ImpUPtr_->SendList_;
		auto& mutex_	= ImpUPtr_->SendListMutex_;

		SendBufferNodePtr curPtr;
		{
			std::lock_guard<std::mutex> lock(mutex_);

			return sendList_.empty();
		}
	}
}