#include "MsgHead.h"
#include "Utils/NameSpace/nsTransBytes.h"
#include "Utils/Type/Crc32Type.h"
#include "HeadInfo.pb.h"

#include <cassert>
#include <algorithm>

namespace mori
{
	class	SHead
	{
	public:

		static	uint32_t	Size()		{ return sizeof(SHead); }
		//static	uint32_t	ChkSize()	{ return sizeof(SHead)-sizeof(uint32_t)*2; }

		uint32_t	FwFlag_;		//0xfefefefe
		uint32_t	InfoLen_;		//Len	[1, 0x00100001)
		uint32_t	InfoChkSum_;	//MsgChkSum_
		uint32_t	HeadChkSum_;	//Chksum
		uint32_t	EwFlag;			//0xffffffff
	};

	void	FillSHead(SHead& theHead)
	{
		theHead.FwFlag_		= 0xfefefefe;
		theHead.InfoLen_	= 0;
		theHead.InfoChkSum_	= 0;
		theHead.HeadChkSum_	= 0;
		theHead.EwFlag		= 0xffffffff;
	}

	const	uint32_t	g_FW_FLAG		= 0xfefefefe;
	const	uint32_t	g_EW_FLAG		= 0xffffffff;
	const	uint32_t	g_MAX_MSGLEN	= 0x0010000;



	SHeadInfo	MsgHead::OnHead( TcpConnBuffer& headBuf, uint32_t bytesTransfered )
	{
		SHeadInfo ret;

		assert( (headBuf.size() == sizeof(SHead)) && (bytesTransfered <= headBuf.size()) );

		SHead* pHead = reinterpret_cast<SHead*>(headBuf.data());

		uint32_t	offset = 0;

		while (true)
		{
			if ( bytesTransfered == headBuf.size() )
			{
				if ( (g_FW_FLAG == pHead->FwFlag_) && (g_EW_FLAG == pHead->EwFlag) )
				{
					//sus
					uint32_t infoLen	= nsTransBytes::network_to_host_long(pHead->InfoLen_);
					uint32_t infoChksum	= nsTransBytes::network_to_host_long(pHead->HeadChkSum_);
					pHead->HeadChkSum_ = 0;
					Crc32Type crc;
					crc.process_bytes(headBuf.data(), SHead::Size());
					if ( (crc.checksum() == infoChksum) && (infoLen <= g_MAX_MSGLEN) )
					{
						ret.Done_		= true;
						ret.MsgLen_		= infoLen;
						ret.MsgChkSum_	= nsTransBytes::network_to_host_long(pHead->InfoChkSum_);
					}

					break;

				}
				else
				{
					std::copy(headBuf.begin()+1, headBuf.end(), headBuf.begin());
					headBuf.back() = 0;

					pHead = reinterpret_cast<SHead*>(headBuf.data());
					--bytesTransfered;
				}
			}
			else
			{
				if ( 0 == bytesTransfered )
				{
					ret.Offset_ = 0;
					break;
				}

				uint8_t	uchFE = 0xfe;
				int8_t	chFE = static_cast<char>(uchFE);
				auto itorBeg = std::find(headBuf.begin(), headBuf.begin()+bytesTransfered, chFE);
				if ( itorBeg != headBuf.begin()+bytesTransfered )
				{
					ret.Offset_ = std::distance(itorBeg, headBuf.end()) - (headBuf.size()-bytesTransfered);
					std::copy(itorBeg, itorBeg+bytesTransfered, headBuf.begin());
				}

				break;
			}
		}

		return ret;
	}

	void		MsgHead::InitHeadBuf( TcpConnBuffer& headBuf )
	{
		headBuf.resize(SHead::Size());
	}

	void MsgHead::PackHead( TcpConnBuffer& outBuf )
	{
		auto oldSize = outBuf.size();
		Crc32Type crc;
		crc.process_bytes(outBuf.data(), outBuf.size());

		outBuf.resize(SHead::Size()+outBuf.size());
		std::copy(outBuf.begin(), outBuf.end()-SHead::Size(), outBuf.begin()+SHead::Size());
		SHead* pHead = reinterpret_cast<SHead*>(outBuf.data());
		FillSHead(*pHead);

		pHead->InfoChkSum_ = crc.checksum();
		pHead->InfoLen_ = oldSize;
		pHead->InfoChkSum_ = nsTransBytes::host_to_network_long(pHead->InfoChkSum_);
		pHead->InfoLen_ = nsTransBytes::host_to_network_long(pHead->InfoLen_);
		pHead->HeadChkSum_ = 0;
		crc.reset();
		crc.process_bytes(outBuf.data(), SHead::Size());
		pHead->HeadChkSum_ = crc.checksum();
		pHead->HeadChkSum_ = nsTransBytes::host_to_network_long(pHead->HeadChkSum_);
	}

	const uint32_t MsgHead::HeadSize()
	{
		return SHead::Size();
	}

	mori::TcpConnBuffer MsgHead::PackHeadBuffer( const TcpConnBuffer& msgBuf, const FileInfoList& files )
	{
		moriMsg::HeadInfo info;		
		
		TcpConnBuffer outputBuf;

		if ( !msgBuf.empty() )
		{
			Crc32Type crc;
			crc.process_bytes(msgBuf.data(), msgBuf.size());
			auto pMsgInfo = info.mutable_msginfo();

			pMsgInfo->set_msglen(msgBuf.size());
			pMsgInfo->set_msgchksum(crc.checksum());
		}

		for ( auto& perFile : files )
		{
			auto pFileInfo = info.add_filesinfo();

			pFileInfo->set_filelen(perFile.Size_);			
			pFileInfo->set_filechksum(perFile.Chksum_);
		}

		outputBuf.resize(info.ByteSize());
		info.SerializeToArray(outputBuf.data(), outputBuf.size());

		PackHead(outputBuf);
		return std::move(outputBuf);
	}

}

