#ifndef CMsgCallBack_h__
#define CMsgCallBack_h__

#pragma once

#include "IMsgCallBack.h"
#include "google/protobuf/message.h"

#include "Verification/SafeIDMap.h"
#include "DataBase/DataBase.h"
#include "DataBase/msg-SV.h"
#include "Processor/DBValue.h"
#include "Processor/SUserInfo.h"

#include "Utils/Pimp.h"
#include "Utils/NameSpace/nsFileSystem.h"

#include "TinyLog.h"


#define IMPLEMENT_IMSGCALLBACK_MEMBER(Type)									\
	IMsgCallBack::ReflectionContext	CMsgCallBack<Type>::s_CallBackContext(	\
	Type::descriptor()->full_name(),										\
	std::bind(CMsgCallBack<Type>::Factory) );


template<typename T>
class	CMsgCallBack : public IMsgCallBack
{
	DEFINE_SHARE_PIMP
	
	static	IMsgCallBack::ReflectionContext	s_CallBackContext;
	
	static	IMsgCallBack::ReflectionPtr		Factory()
	{
		return smartPtr::make_shared<CMsgCallBack<T>>();
	}

public:

	CMsgCallBack();

	virtual ~CMsgCallBack() {}

	virtual	void	Process( mori::TcpConnBuffer& msgBuf, const mori::RecvFileList& files, uint64_t recvID,
		const mori::EndPoint& remoteEP, const Codec::SDecodeContext& dc, SSendInfoSPtr& sendInfoPtr )
	{
		T  subMsg;

		if ( !subMsg.ParseFromArray(msgBuf.data(), msgBuf.size()) )
		{
			LOG_INFO << L"Message" << recvID << L"can not parse";
			return;
		}

		AStringType dVCode = "empty";
		if ( dc.VerifyCode_ )
		{
			dVCode = SafeIDMap::GetInstance().DecodeVCode(*dc.VerifyCode_);
		}

		LOG_INFO << T::descriptor()->full_name() << L" Begin On " << recvID << L", " << dVCode << remoteEP;
		
		try
		{
			using namespace autoDB;

			auto& sql = DataBase::GetInstance().GetThreadSession();

			if ( dc.VerifyCode_ )
			{
				auto idInfo = SafeIDMap::GetInstance().GetIDInfo(*dc.VerifyCode_);
				if ( !idInfo )
				{
					LOG_INFO << L"Can not Find UserInfo For" << dVCode << L", " << remoteEP;
				}
				else
				{
					auto userInfo = SUserInfo(dc,remoteEP);
					bool gotData = false;
					{
						userInfo.UserInfo_.SetAll(true);
						Statement st;
						st.Select(GL_UserInfo.Into(userInfo.UserInfo_)).From(GL_UserInfo)
							.InnerJoin(SV_UserLoginStatusInfo).On(GL_UserInfo.UserID==SV_UserLoginStatusInfo.UserID)
							.Where(GL_UserInfo.UserID==idInfo->UserID_ && SV_UserLoginStatusInfo.LoginStatus==DBValue::LoginStatus::Login);
						gotData = SociAdaptor (st,sql).Excute();
					}

					if ( !gotData )
					{
						LOG_INFO << L"The User Is Aready Logout:" << SafeIDMap::GetInstance().DecodeVCode(idInfo->VerifyCode_) << remoteEP;
					}
					else
					{
						{
							std::vector<int32_t> rights;
							Statement st;
							st.Select(GL_RoleRightInfo.RightID.Into(rights)).From(GL_RoleRightInfo).
								Where(GL_RoleRightInfo.RoleID==*userInfo.UserInfo_.RoleID_ && GL_RoleRightInfo.RightType==static_cast<int32_t>(idInfo->ClientType_));
							SociAdaptor (st,sql).Excute();

							std::transform(rights.begin(), rights.end(), std::inserter(userInfo.Rights_, userInfo.Rights_.begin()),
								[&dc](int32_t val){ return RValue::FixValueFactor(val, dc.ClientType_);});
						}

						_Process(subMsg, recvID, files, userInfo, sql, sendInfoPtr);
					}
				}				
			}
			else
			{
				_Process(subMsg, recvID, files, SUserInfo(dc,remoteEP), sql, sendInfoPtr);
			}			
		}
		catch(soci::soci_error& err)
		{
			LOG_ERROR << DataBase::GetSociErrorString(err) << dVCode << L", " << remoteEP;

			auto itor = std::remove_if(sendInfoPtr->List_.begin(), sendInfoPtr->List_.end(), [](SPerSendInfo& perSend)
			{
				if ( !perSend.MsgPtr_ )
				{
					return true;
				}

				if ( !perSend.MsgPtr_->IsInitialized() )
				{
					return true;
				}

				return false;
			});

			sendInfoPtr->List_.erase(itor, sendInfoPtr->List_.end());
		}
		catch(std::exception& err)
		{
			LOG_ERROR << "Unkown Error: " << err.what() << remoteEP;
		}

		LOG_INFO << T::descriptor()->full_name() << L" End On " << recvID << L", " << dVCode << remoteEP;
	}

#ifdef _DEBUG
	void	Debug( T& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sqlSession, SSendInfoSPtr& sendInfoPtr )
	{
		_Process(msg, recvID, files, userInfo, sqlSession, sendInfoPtr);
	}
#endif // _DEBUG

private:

	void	_Process( T& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sqlSession, SSendInfoSPtr& sendInfoPtr );
};
#endif // CMsgCallBack_h__