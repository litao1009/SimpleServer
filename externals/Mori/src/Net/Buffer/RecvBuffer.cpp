#include "RecvBuffer.h"

#include "BufferFwd.h"
#include "InternalBuffer.h"
#include "Net/Message/MsgHead.h"
#include "Net/Message/HeadInfo.pb.h"
#include "mori/net/STransInfo.h"

#include "Utils/SmartPtr.h"
#include "Utils/NameSpace/nsPosixtime.h"
#include "Utils/Type/Crc32Type.h"
#include "Utils/Type/FileType.h"
#include "Log.h"
#include <vector>
#include <unordered_map>
#include <functional>
#include <atomic>
#include <boost/format.hpp>
#include <boost/range/adaptor/reversed.hpp>

namespace mori
{
	enum ERecvStep
	{
		ERS_HEAD,
		ERS_INFO,
		ERS_MSG,
		ERS_FILE,
		ERS_FINISH,
		ERS_COUNT
	};

	static	const uint32_t	g_4M	= 0x400000;
	static	const uint32_t	g_10M	= 0xF00000;
	static	const uint32_t	g_100M	= 0x6400000;

	class	RecvBuffer::Imp
	{
	public:

		typedef	std::function<void(uint32_t,STransInfoPtr&)>	Updator;
		typedef	std::unordered_map<ERecvStep,Updator>			UpdatorMap;

		ERecvStep			Step_;			//��ǰ״̬
		InternalBuffer		InternalBuf_;	//Buffer
		UpdatorMap			FtrMap_;		//״̬����

		SRecvMsgInfo		RecvMsg_;		//���յ���Ϣ
		RecvFileList		Files_;			//���յ��ļ�
		RecvFileList		ToRecv_;		//���ն���

		moriMsg::HeadInfo	SaveData_;		//��ǰ��Ϣ��HeadInfo
		uint32_t			InfoChksum_;	//��ǰHeadInfo��У��
		
		Crc32Type			Crc32_;			//��ǰ��Ϣ��У��
		STransInfo			TransInfo_;		//��������

		OutFileType			Ofs_;

		static	FilePath	s_RecvFolder;

	public:

		Imp()
		{
			Reset();

			FtrMap_[ERS_HEAD]	= std::bind(&RecvBuffer::Imp::UpdateHead,	this, std::placeholders::_1, std::placeholders::_2);
			FtrMap_[ERS_INFO]	= std::bind(&RecvBuffer::Imp::UpdateInfo,	this, std::placeholders::_1, std::placeholders::_2);
			FtrMap_[ERS_MSG]	= std::bind(&RecvBuffer::Imp::UpdateMsg,	this, std::placeholders::_1, std::placeholders::_2);
			FtrMap_[ERS_FILE]	= std::bind(&RecvBuffer::Imp::UpdateFile,	this, std::placeholders::_1, std::placeholders::_2);
		}

		void	SetTransInfo(STransInfoPtr& infoPtr)
		{
			if ( !infoPtr )
			{
				infoPtr = smartPtr::make_shared<STransInfo>();
			}

			*infoPtr = TransInfo_;
		}

		FilePath	RandomFileName(const SFileInfo& fileInfo)
		{
			static	std::atomic<uint64_t>	RandNr(0);

			auto nr = RandNr.fetch_add(1);
			auto now = nsPosixtime::second_clock::local_time();
			auto time = nsPosixtime::to_iso_string(now);
			
			boost::format fmt("%1$X.%2$s__%3$X.%4$X");	//	���.ʱ��__CRC.����
			fmt % nr % time % fileInfo.Chksum_ % fileInfo.Size_;

			return fmt.str();
		}

		void	Reset()
		{
			Step_		= ERS_HEAD;
			RecvMsg_	= SRecvMsgInfo();
			TransInfo_	= STransInfo();
			InfoChksum_	= 0;

			InternalBuf_.ReSize(MsgHead::HeadSize());
			Files_.clear();
			ToRecv_.clear();
			SaveData_.Clear();
			Crc32_.reset();
		}

		bool	FlushBuffer()
		{
			//	���ն���Ϊ��
			if ( ToRecv_.empty() )
			{
				return false;
			}

			if ( Ofs_.is_open() )
			{
				//	��ǰ�����ļ�
				auto& curFile = ToRecv_.back();

				Ofs_.write(InternalBuf_.GetRawBuffer().data(), InternalBuf_.GetRawBuffer().size());
				
				Crc32_.process_bytes(InternalBuf_.GetRawBuffer().data(), InternalBuf_.GetRawBuffer().size());

				//	δ�������
				//*********************************************************************
				auto bufSize = curFile.Size_ - static_cast<uint32_t>(Ofs_.tellp());
				if ( 0 != bufSize )
				{
					bufSize = std::min(g_4M, bufSize);
					InternalBuf_.ReSize(bufSize);

					return true;
				}
				//*********************************************************************

				//	У��
				curFile.ChkFaild_ = !(Crc32_.checksum() == curFile.Chksum_);

				if ( curFile.ChkFaild_ )
				{
					boost::format fmt("����ֵ��%x ʵ��ֵ��%x");
					fmt % curFile.Chksum_ % Crc32_.checksum();
					TLOG(LOG_INFO << L" Mori: �ļ�У�����" << fmt.str());
				}
				
				Ofs_.close();

				//	��ӵ���ɶ���
				Files_.push_back(curFile);
				ToRecv_.pop_back();

				//	������ն���
				if ( ToRecv_.empty() )
				{
					return false;
				}
			}

			Crc32_.reset();

			//	��ǰ�����ļ�
			auto& curFile = ToRecv_.back();

			Ofs_.open(curFile.Path_, std::ios::binary);
			if ( !Ofs_.is_open() )
			{
				assert(0);
				return false;
			}

			auto bufSize = std::min(curFile.Size_, g_4M);
			InternalBuf_.ReSize(bufSize);

			return true;
		}

		void	UpdateHead( uint32_t transBytes, STransInfoPtr& transInfo )
		{
			InternalBuf_.Update(transBytes);
			if ( !InternalBuf_.IsFinish() )
			{
				return;
			}

			//	��ȡheadInfo
			auto headBlock = MsgHead::OnHead(InternalBuf_.GetRawBuffer(), InternalBuf_.GetCurOffset());
			if ( headBlock.Done_ )
			{
				//	headInfo��С����
				if ( headBlock.MsgLen_ <= g_10M )
				{
					InfoChksum_ = headBlock.MsgChkSum_;
					InternalBuf_.ReSize(headBlock.MsgLen_);

					Step_ = ERS_INFO;
				}
				else
				{
					Reset();
				}
			}
			else
			{
				//	����ƫ��
				InternalBuf_.ResetOffset(headBlock.Offset_);
			}
		}

		void	UpdateInfo( uint32_t transBytes, STransInfoPtr& transInfo )
		{
			InternalBuf_.Update(transBytes);
			if ( !InternalBuf_.IsFinish() )
			{
				return;
			}

			if ( !SaveData_.ParseFromArray(InternalBuf_.GetRawBuffer().data(), InternalBuf_.GetRawBuffer().size()) )
			{
				Reset();
			}

			//	���¼�������
			TransInfo_ = STransInfo();

			//	��һ�������Ҫ������Ϣ
			if ( SaveData_.has_msginfo() && SaveData_.msginfo().msglen()>0 )
			{
				if ( g_100M < SaveData_.msginfo().msglen() )
				{
					Reset();
					return;
				}

				Step_ = ERS_MSG;
				InternalBuf_.ReSize(SaveData_.msginfo().msglen());

				//	���¼�������
				TransInfo_.TotalSize_ = SaveData_.msginfo().msglen();
			}
			
			//	��һ�������Ҫ�����ļ�
			if ( 0 != SaveData_.filesinfo_size() )
			{
				ToRecv_.reserve(SaveData_.filesinfo_size());

				for ( auto& perFile : boost::adaptors::reverse(SaveData_.filesinfo()) )
				{
					if ( 0 == perFile.filelen() )
					{
						continue;
					}

					SFileInfo newFile;
					newFile.Size_	= perFile.filelen();
					newFile.Chksum_	= perFile.filechksum();
					newFile.Path_	= s_RecvFolder / RandomFileName(newFile);
					ToRecv_.push_back(newFile);

					//	���¼�������
					TransInfo_.TotalSize_ += perFile.filelen();
				}
			}
		}

		void	UpdateMsg( uint32_t transBytes, STransInfoPtr& transInfo )
		{
			InternalBuf_.Update(transBytes);
			
			TransInfo_.TransSize_ += transBytes;
			SetTransInfo(transInfo);

			if ( !InternalBuf_.IsFinish() )
			{
				return;
			}

			RecvMsg_.Buffer_.swap(InternalBuf_.GetRawBuffer());
			
			Crc32_.reset();
			Crc32_.process_bytes(RecvMsg_.Buffer_.data(), RecvMsg_.Buffer_.size());			
			RecvMsg_.IsChkFaild_ = !(Crc32_.checksum() == SaveData_.msginfo().msgchksum());

			if ( !ToRecv_.empty() )
			{
				Step_ = ERS_FILE;
				FlushBuffer();
			}
			else
			{
				Step_ = ERS_FINISH;
			}
		}

		void	UpdateFile( uint32_t transBytes, STransInfoPtr& transInfoPtr )
		{
			InternalBuf_.Update(transBytes);
			
			TransInfo_.TransSize_ += transBytes;
			SetTransInfo(transInfoPtr);

			if ( !InternalBuf_.IsFinish() )
			{
				return;
			}

			if ( !FlushBuffer() )
			{
				Step_ = ERS_FINISH;
			}
		}

		static	FilePath	InitDefaultRecvFolder()
		{
			FilePath folder("./moriRecv/");

			if ( !nsFileSystem::exists(folder) )
			{
				nsFileSystem::create_directory(folder);
			}

			return folder;
		}
	};

	FilePath	RecvBuffer::Imp::s_RecvFolder = RecvBuffer::Imp::InitDefaultRecvFolder();

	RecvBuffer::RecvBuffer():ImpUPtr_(smartPtr::make_unique<RecvBuffer::Imp>())
	{

	}

	RecvBuffer::~RecvBuffer()
	{

	}

	RecvBuffer::operator MutableBuffer()
	{
		auto& internalBuf_	= ImpUPtr_->InternalBuf_;

		return internalBuf_;
	}

	void RecvBuffer::Update( uint32_t transBytes, STransInfoPtr& transInfo )
	{
		auto& step_ = ImpUPtr_->Step_;
		auto& fmap_	= ImpUPtr_->FtrMap_;

		if ( ERS_FINISH == step_ )
		{
			return;
		}

		auto uptor_ = fmap_.find(step_);
		assert( uptor_!= fmap_.end() );

		uptor_->second(transBytes, transInfo);
	}

	bool RecvBuffer::IsFinish()
	{
		auto& step_ = ImpUPtr_->Step_;

		return ERS_FINISH == step_;
	}

	mori::SRecvMsgInfo RecvBuffer::GetMsg()
	{
		auto& msg_ = ImpUPtr_->RecvMsg_;

		return std::move(msg_);
	}

	mori::RecvFileList RecvBuffer::GetRecvFileList()
	{
		auto& files_ = ImpUPtr_->Files_;

		return files_;
	}

	void RecvBuffer::Reset()
	{
		ImpUPtr_->Reset();
	}

	bool RecvBuffer::SetRecvFolder( const FilePath& folder )
	{
		if ( nsFileSystem::is_directory(folder) )
		{
			RecvBuffer::Imp::s_RecvFolder = folder;

			return true;
		}
		else
		{
			return false;
		}
	}

}