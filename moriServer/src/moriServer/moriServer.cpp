#include "moriServer.h"

#include "Utils/SmartPtr.h"
#include "Utils/Type/ErrCodeType.h"

#include "Utils/Type/FileType.h"
#include "Utils/NameSpace/nsFileSystem.h"

#include "mori/net/Server.h"
#include "mori/net/TcpConnection.h"
#include "mori/concurrency/AsynConcurrentPool.h"

#include "Data/TcpMsgQueue.h"
#include "Data/TcpMessage.h"

#include "Codec/Codec.h"
#include "DataBase/DataBase.h"
//#include "DataBase/dbTable-GL.h"
#include "Encrypt.h"
#include "MsgCallBack/IMsgCallBack.h"
#include "Verification/SafeIDMap.h"
#include "Config/ConfigMgr.h"

#include "DecomposeMgr/DecomposeMgr.h"

#include "TinyLog.h"

#include "transMsg/Login.pb.h"
#include "transMsg/Test.pb.h"
#include "transMsg/GetAppVersion.pb.h"
#include "transMsg/UploadASData.pb.h"

#include <thread>
#include <atomic>

static	const int	g_1G	= 0x40000000;


class	moriServer::Imp : public std::enable_shared_from_this<moriServer::Imp>
{
public:

	Imp():RecvMsgIDRcder(0)
	{
		PreChecker_ = mori::bind([](Codec::SDecodeContext& dc)
		{
			if ( !dc.VerifyCode_ )
			{
				return AStringType();
			}

			auto key = SafeIDMap::GetInstance().GetIDInfo(*dc.VerifyCode_);
			if ( key )
			{
				return key->RSAPriKey_;
			}
			else
			{
				return AStringType();
			}
			return AStringType();
		}, mori::_1);
	}

	void	RecvLoop()
	{
		while (true)
		{
			STcpMessageSPtr msgPtr = RecvQueue_.Pop();

			if ( RecvQueue_.IsStop() )
			{
				LOG_INFO << L"return from RecvLoop";

				return;
			}

			if ( !msgPtr )
			{
				continue;
			}

			if ( !msgPtr->ConnPtr_->IsWorking() )
			{
				LOG_INFO << msgPtr->ConnPtr_->GetRemoteEP() << L"Doesn't work anymore, Msg " << msgPtr->RecvID_ << L" Is Droping";
				continue;
			}

			BackEndPoolPtr_->Post([this,msgPtr]()
			{
				auto& info = msgPtr->DecodeContext_;

				auto proc = IMsgCallBack::CallBackFactory(info.MsgName_);
				if ( !proc )
				{
					LOG_INFO << L"无效消息名称：" << info.MsgName_ << msgPtr->ConnPtr_->GetRemoteEP();
					return;
				}

				auto connPtr = msgPtr->ConnPtr_;
				auto sendInfoPtr = smartPtr::make_shared<SSendInfo>(mori::TcpConnectionWPtr(connPtr), SendQueue_);

				proc->Process(msgPtr->Buffer_, msgPtr->RecvFiles_, msgPtr->RecvID_, connPtr->GetRemoteEP(), info, sendInfoPtr);
			});
		}

	}

	void	SendLoop()
	{
		while (true)
		{
			auto msgPtr = SendQueue_.Pop();

			if ( SendQueue_.IsStop() )
			{
				return;
			}

			if ( !msgPtr || !msgPtr->ConnPtr_->IsWorking() )
			{
				continue;
			}

			msgPtr->ConnPtr_->Send(std::move(msgPtr->Buffer_), msgPtr->SendFiles_);
		}
	}

	void	OnRecv(const mori::ErrCode& ec, mori::SRecvMsgInfo& recvMsg, mori::RecvFileList& fileList, mori::TcpConnectionSPtr& connPtr)
	{
		if ( ec )
		{
			LOG_INFO << connPtr->GetRemoteEP() << L"ShutDown in OnRecv";

			connPtr->ShutDown();

			for ( auto& perfile : fileList )
			{
				if ( !nsFileSystem::exists(perfile.Path_) )
				{
					continue;
				}

				mori::ErrCode fec;
				nsFileSystem::remove(perfile.Path_, fec);
				if ( !fec )
				{
					continue;
				}

				LOG_ERROR << fec << L" when removing " << perfile.Path_;
			}

			return;
		}

		if ( !connPtr->HasOnClose() )
		{
			connPtr->SetOnClose([this](const mori::EndPoint& lep, const mori::EndPoint& rep)
			{
				BackEndPoolPtr_->Post([rep]()
				{
					LOG_INFO << L"OnClose" << rep;
					SafeIDMap::GetInstance().EraseConnection(rep);
				});
			});
		}

		if ( !recvMsg.IsChkFaild_ )
		{
			boost::optional<Codec::SDecodeContext> dc;
			auto saveKey = SafeIDMap::GetInstance().GetIDInfo(connPtr->GetRemoteEP());

			if ( !saveKey )
			{
				dc = Codec::Decode(recvMsg.Buffer_, connPtr, SafeIDMap::GetInstance().GetCommonPrivateKey(), PreChecker_);
			}
			else
			{
				dc = Codec::Decode(recvMsg.Buffer_, connPtr, saveKey->RSAPriKey_);
			}

			if ( !dc )
			{
				LOG_INFO << L"OnRecv解码失败" << connPtr->GetRemoteEP();
				return;
			}

			if ( !SafeIDMap::GetInstance().Verify(*dc, connPtr->GetRemoteEP()) )
			{
				LOG_INFO << L"OnRecv验证失败" << connPtr->GetRemoteEP();
				return;
			}

			STcpMessageSPtr msgPtr = std::make_shared<STcpMessage>(std::move(recvMsg.Buffer_), fileList, *dc, connPtr);
			msgPtr->RecvID_ = RecvMsgIDRcder.fetch_add(1);

			LOG_INFO << L"New RecvMsgID:" << msgPtr->RecvID_ << L" For " << connPtr->GetRemoteEP();

			RecvQueue_.Push(msgPtr);
		}
		else
		{
			LOG_INFO << L"OnRecv消息校验失败" << connPtr->GetRemoteEP();

			for ( const auto& perFile : fileList )
			{
				if ( !nsFileSystem::exists(perFile.Path_) )
				{
					continue;;
				}

				ErrCodeType ec;
				nsFileSystem::remove(perFile.Path_, ec);

				if ( !ec )
				{
					continue;;
				}

				LOG_INFO << L"OnRecv删除文件失败" << perFile.Path_;
			}
		}
	}

public:

	mori::Server					ForEnd_;
	mori::AsynConcurrentPoolPtr		BackEndPoolPtr_;
	mori::AsynConcurrentPoolPtr		RecvLoopPoolPtr_;
	mori::AsynConcurrentPoolPtr		SendLoopPoolPtr_;
	mori::AsynConcurrentPoolPtr		TimingPoolPtr_;
	Codec::PreChecker				PreChecker_;
	std::atomic<uint64_t>			RecvMsgIDRcder;

	TcpMsgQueue						RecvQueue_;
	TcpMsgQueue						SendQueue_;
};

moriServer::moriServer():ImpSPtr_(smartPtr::make_shared<moriServer::Imp>())
{

}

moriServer::~moriServer()
{

}

bool moriServer::Start(const boost::filesystem::path& workingPath)
{
	auto ret = ConfigMgr::Init( workingPath / "config.xml" );
	
	if ( !ret )
	{
		LOG_ERROR << L"没有找到配置文件";
		return false;
	}

	auto backMode	= ConfigMgr::GetInstance().GetConfig("Backend.Thread.<xmlattr>.Mode");
	auto backNr		= ConfigMgr::GetInstance().GetConfig("Backend.Thread");
	if ( backNr.empty() || backMode.empty() )
	{
		LOG_ERROR << L"配置错误：没有后端数据";

		return false;
	}
	auto backTdNr = std::stoi(backNr);
	if ( 0 == backTdNr )
	{
		LOG_ERROR << L"后端配置错误";

		return false;
	}

	auto dbServer	= ConfigMgr::GetInstance().GetConfig("DBServer");
	if ( dbServer.empty() )
	{
		LOG_ERROR << L"配置错误：数据库";

		return false;
	}

	auto frontMode	= ConfigMgr::GetInstance().GetConfig("Forend.Thread.<xmlattr>.Mode");
	auto frontNr	= ConfigMgr::GetInstance().GetConfig("Forend.Thread");
	if ( frontNr.empty() || frontMode.empty() )
	{
		LOG_ERROR << L"配置错误：没有前端端数据";

		return false;
	}
	auto frontTdNr = std::stoi(frontNr);
	if ( 0 == frontTdNr )
	{
		LOG_ERROR << L"前端配置错误";

		return false;
	}

	auto ports		= ConfigMgr::GetInstance().GetConfigs("Forend.ListenPorts");
	if ( ports.empty() )
	{
		LOG_ERROR << L"配置错误：没有端口";

		return false;
	}
	std::vector<uint16_t>	listenPorts;
	for ( auto& perPort : ports )
	{
		auto nr = std::stoi(perPort);
		if ( nr )
		{
			listenPorts.push_back(nr);
		}
		else
		{
			LOG_ERROR << L"端口配置错误";

			return false;
		}
	}

	if ( !DataBase::Init(dbServer) )
	{
		LOG_ERROR << L"无法连接数据库";

		return false;
	}
	
	if ( L"CPU Factor" == backMode )
	{		
		backTdNr *= std::thread::hardware_concurrency();
	}

	if ( L"CPU Factor" == frontMode )
	{
		frontTdNr *= std::thread::hardware_concurrency();
	}

	SafeIDMap::GetInstance().AddIgnoreName(transMsg::QLogin::descriptor()->full_name());
	SafeIDMap::GetInstance().AddIgnoreName(transMsg::QTest::descriptor()->full_name());
	SafeIDMap::GetInstance().AddIgnoreName(transMsg::QGetAppVersion::descriptor()->full_name());
	SafeIDMap::GetInstance().AddIgnoreName(transMsg::QUploadASData::descriptor()->full_name());

	ImpSPtr_->TimingPoolPtr_ = smartPtr::make_unique<mori::AsynConcurrentPool>(1,
		[]()
	{
		LOG_INFO << L" Start Thread for TimingPool" ;
	},
		[]()
	{
		LOG_INFO << L" Join Thread for TimingPool" ;
	});
	ImpSPtr_->RecvLoopPoolPtr_	= smartPtr::make_unique<mori::AsynConcurrentPool>(1,
		[]()

	{
		LOG_INFO << L" Start Thread for RecvLoop" ;
	},
		[]()
	{
		LOG_INFO << L" Join Thread for RecvLoop" ;
	});
	ImpSPtr_->SendLoopPoolPtr_	= smartPtr::make_unique<mori::AsynConcurrentPool>(1,
		[]()
	{
		LOG_INFO << L" Start Thread for SendLoop" ;
	},
		[]()
	{
		LOG_INFO << L" Join Thread for SendLoop" ;
	});
	ImpSPtr_->RecvLoopPoolPtr_->Post([this](){ImpSPtr_->RecvLoop();});
	ImpSPtr_->SendLoopPoolPtr_->Post([this](){ImpSPtr_->SendLoop();});

	ImpSPtr_->BackEndPoolPtr_ = smartPtr::make_unique<mori::AsynConcurrentPool>(backTdNr,
		[]()
	{
		LOG_INFO << L" Start Thread for BackEnd" ;
		DataBase::GetInstance().GetThreadSession();
	},
		[]()
	{
		LOG_INFO << L" Join Thread for BackEnd" ;
	});

	ImpSPtr_->ForEnd_.SetRecvFilesFolder( workingPath /"moriServerRecv/");
	ImpSPtr_->ForEnd_.SetOnReceive(std::bind(&moriServer::Imp::OnRecv, ImpSPtr_, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4));
	ImpSPtr_->ForEnd_.SetTimeWheel(30, 10);
	ImpSPtr_->ForEnd_.SetThreadSize(frontTdNr);
	for ( auto& perPort : listenPorts )
	{
		ImpSPtr_->ForEnd_.AddListenPort(perPort);
	}

	ImpSPtr_->RecvQueue_.SetMaxSize(g_1G);
	ImpSPtr_->SendQueue_.SetMaxSize(g_1G);

	ImpSPtr_->TimingPoolPtr_->Start();
	ImpSPtr_->RecvLoopPoolPtr_->Start();
	ImpSPtr_->SendLoopPoolPtr_->Start();
	ImpSPtr_->BackEndPoolPtr_->Start();
	ImpSPtr_->ForEnd_.Start();

	DecomposeMgr::GetInstance().Start();
	//DecomposeMgr::GetInstance().Push(31);

	return true;
}

void moriServer::Stop()
{
	ImpSPtr_->ForEnd_.Stop();
	DecomposeMgr::GetInstance().Stop();

	ImpSPtr_->RecvLoopPoolPtr_->Stop();

	ImpSPtr_->TimingPoolPtr_->Stop();
	ImpSPtr_->BackEndPoolPtr_->Stop();

	ImpSPtr_->RecvQueue_.Stop();
	ImpSPtr_->SendQueue_.Stop();

	SafeIDMap::GetInstance().Clear();
}

void moriServer::Join()
{
	ImpSPtr_->ForEnd_.Join();

	ImpSPtr_->RecvLoopPoolPtr_->Join();

	ImpSPtr_->BackEndPoolPtr_->Join();
	ImpSPtr_->TimingPoolPtr_->Join();
}

bool moriServer::IsStart()
{
	return !ImpSPtr_->ForEnd_.IsStop();
}
