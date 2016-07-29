#include "ProcessorCommon.h"

#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1

#include "transMsg/Login.pb.h"
#include "md5.h"
#include "Encrypt.h"
#include "hex.h"
#include "DataBase/msg-GLUtils.h"
#include "DataBase/msg-SV.h"

#include <boost/algorithm/string.hpp>

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QLogin);


CMsgCallBack<transMsg::QLogin>::CMsgCallBack()
{

}


void CMsgCallBack<transMsg::QLogin>::_Process( transMsg::QLogin& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& nullInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::ALogin>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	GL_UserInfo_Data userInfo;
	userInfo.SetAll(true);

	//Get UserInfo
	//**************************************************************************************************************************
	{
		if ( !SociAdaptor(Statement()
			.Select(autoDB::GL_UserInfo.Into(userInfo))
			.From(GL_UserInfo)
			.Where(autoDB::GL_UserInfo.UserCode==msg.usercode()), sql).Excute() )
		{
			retMsg->set_stats(transMsg::ERS_EMPTY_USERINFO);
			return;
		}
	}
	//**************************************************************************************************************************

	//Is Active
	//**************************************************************************************************************************
	{
		if ( !(*userInfo.IsActived_) )
		{
			retMsg->set_stats(transMsg::ERS_USER_NONACTIVE);
			return;
		}
	}
	//**************************************************************************************************************************
	
	//Judge Password
	//**************************************************************************************************************************
	{
			
		auto str = msg.userpwd() + *userInfo.EncodeStr_;
		CryptoPP::Weak::MD5 md;
		md.Update(reinterpret_cast<const byte*>(str.data()), str.length());
		AStringType pwdMd5(md.DigestSize(),0);
		md.Final(reinterpret_cast<byte*>(&pwdMd5[0]));

		CryptoPP::HexEncoder hed;
		hed.Put(reinterpret_cast<const byte*>(pwdMd5.data()), pwdMd5.size());
		hed.MessageEnd();

		auto res = hed.MaxRetrievable();
		if ( 0 != res )
		{
			str.resize(static_cast<std::size_t>(res));
			hed.Get(reinterpret_cast<byte*>(&str[0]), str.size());
			boost::algorithm::to_lower(str);
		}
		else
		{
			retMsg->set_stats(transMsg::ERS_WRONG_PWD);
			return;
		}

		if ( str != userInfo.UserPwd_ )
		{
			retMsg->set_stats(transMsg::ERS_WRONG_PWD);
			return;
		}
	}
	//**************************************************************************************************************************

	bool isStatusExist = false;
	SV_UserLoginStatusInfo_Data lastVisitInfo;
	//Judge LoginStatus
	//**************************************************************************************************************************
	{
		lastVisitInfo.SetAll(true);

		Statement st;
		st.Select(SV_UserLoginStatusInfo.Into(lastVisitInfo))
			.From(SV_UserLoginStatusInfo)
			.Where(SV_UserLoginStatusInfo.UserID==*userInfo.UserID_ && 
					SV_UserLoginStatusInfo.LoginType==static_cast<int>(nullInfo.DC_.ClientType_));
			
		if ( SociAdaptor(st,sql).Excute() && DBValue::LoginStatus::Login == lastVisitInfo.LoginStatus_ )
		{
			retMsg->set_stats(transMsg::ERS_ALREAD_LOGIN);
			return;
		}

		isStatusExist = sql.got_data();
	}
	//**************************************************************************************************************************

	std::vector<transMsg::GL_DeptInfo>	deptsInfo;

	//Get DeptInfo
	//**************************************************************************************************************************
	{
		auto curDeptID = userInfo.DeptID_;
		GL_DeptInfo_Data curInfo;
		curInfo.SetAll(true);

		Statement st;
		st.Select(GL_DeptInfo.Into(curInfo))
			.From(GL_DeptInfo)
			.Where(GL_DeptInfo.DeptID==Use(*curDeptID));

		SociAdaptor adaDeptInfo(st, sql);

		if ( !adaDeptInfo.Excute() )
		{
			retMsg->set_stats(transMsg::ERS_EMPTY_RECORD);
			return;
		}

		curDeptID = curInfo.ParentID_;
		ToUTF8(curInfo);
		deptsInfo.emplace_back(ToMessage(curInfo));

		while ( 0 != *curDeptID )
		{
			if ( adaDeptInfo.Excute() )
			{
				assert(curDeptID!=curInfo.ParentID_);

				curDeptID = curInfo.ParentID_;
				ToUTF8(curInfo);
				deptsInfo.emplace_back(ToMessage(curInfo));
			}
			else
			{
				LOG_ERROR << L"检索" << GL_DeptInfo.GetTableName() << L"出错," << GL_DeptInfo.DeptID.GetColName() << L":" << curDeptID;

				retMsg->set_stats(transMsg::ERS_SERVER_ERROR);
				return;
			}
		}
	}
	//**************************************************************************************************************************

	std::vector<int32_t>	rightsID;

	//Get RightInfo
	//**************************************************************************************************************************
	{
		Statement st;
		st.Select(GL_RoleRightInfo.RightID.Into(rightsID))
			.From(GL_RoleRightInfo).
			InnerJoin(GL_UserInfo).On(GL_UserInfo.RoleID==GL_RoleRightInfo.RoleID && GL_UserInfo.UserID==*userInfo.UserID_).
			Where(GL_RoleRightInfo.RightType==static_cast<int32_t>(nullInfo.DC_.ClientType_) && GL_RoleRightInfo.RoleID==*userInfo.RoleID_);

		SociAdaptor(st,sql).Excute();

		if ( rightsID.empty() )
		{
			LOG_ERROR	<< L"检索" << GL_RoleRightInfo.GetTableName() << L"为空,"
						<< GL_RoleRightInfo.RightType.GetColName() << L":" << static_cast<uint32_t>(nullInfo.DC_.ClientType_)
						<< L", " << GL_RoleRightInfo.RoleID.GetColName() << L":" << *userInfo.RoleID_;

			retMsg->set_stats(transMsg::ERS_WRONG_ACCESS);
			return;
		}

		if ( rightsID.end() == std::find(rightsID.begin(), rightsID.end(), RValue::Login) )
		{
			LOG_ERROR	<< L"没有登录权限！"
				<< GL_RoleRightInfo.RightType.GetColName() << L":" << static_cast<uint32_t>(nullInfo.DC_.ClientType_)
				<< L", " << GL_RoleRightInfo.RoleID.GetColName() << L":" << *userInfo.RoleID_;

			retMsg->set_stats(transMsg::ERS_WRONG_ACCESS);
			return;
		}
	}
	//**************************************************************************************************************************

	//Update loginStatus
	//**************************************************************************************************************************
	{
		SV_UserLoginStatusInfo_Data status;
		status.SetAll(true);
		
		status.LoginStatus_ = DBValue::LoginStatus::Login;
		status.LoginIP_ = nullInfo.RemoteEP_.Adress_;
		status.LoginTime_ = boost::posix_time::second_clock::local_time();
		status.LastVisitTime_ = lastVisitInfo.LoginTime_;

		if ( isStatusExist )
		{
			status.LoginType_ = boost::none;
			status.UserID_ = boost::none;;

			Statement st;
			st.Update(SV_UserLoginStatusInfo.Use(status))
				.Where(SV_UserLoginStatusInfo.LoginStatus!=DBValue::LoginStatus::Login && 
						SV_UserLoginStatusInfo.UserID==*userInfo.UserID_ &&
						SV_UserLoginStatusInfo.LoginType==static_cast<int32_t>(nullInfo.DC_.ClientType_));

			SociAdaptor ada(st,sql);
			ada.Excute();

			if ( 0 == ada.GetAffectedRows() )
			{
				retMsg->set_stats(transMsg::ERS_ALREAD_LOGIN);
				return;
			}
		}
		else
		{
			status.LastVisitTime_ = status.LoginTime_;
			status.LoginType_ = static_cast<int32_t>(nullInfo.DC_.ClientType_);
			status.UserID_ = userInfo.UserID_;
				
			try
			{
				SociAdaptor(Statement().Insert(SV_UserLoginStatusInfo.Use(status)), sql).Excute();
			}
			catch(...)
			{
				retMsg->set_stats(transMsg::ERS_ALREAD_LOGIN);
				return;
			}
		}
			
	}
	//**************************************************************************************************************************

	ToUTF8(userInfo);
	retMsg->mutable_gl_userinfo()->Swap(&ToMessage(userInfo));
	ToASCII(userInfo);

	for ( auto& perDeptInfo : deptsInfo )
	{
		retMsg->add_gl_deptinfo()->Swap(&perDeptInfo);
	}

	for ( auto& rightID : rightsID )
	{
		retMsg->add_gl_rolerightinfo()->set_rightid(rightID);
	}

	auto newVCode = SafeIDMap::GetInstance().CreateVCode(*userInfo.UserID_, static_cast<int>(nullInfo.DC_.ClientType_));
	auto newRSACode = FastEncrypt::RSA_GenerateKey();

	auto newIDInfoSPtr = std::make_shared<SIDInfo>();
	auto& newIDInfo = *newIDInfoSPtr;
	newIDInfo.UserID_ = *userInfo.UserID_;
	newIDInfo.ClientType_ = nullInfo.DC_.ClientType_;
	newIDInfo.RSAPriKey_ = std::move(newRSACode.PrivateKey_);
	newIDInfo.VerifyCode_ = newVCode;
	if ( msg.has_pubrsakey() )
	{
		newIDInfo.RSAPubKey_ = msg.pubrsakey();
	}

	SafeIDMap::GetInstance().Insert(newIDInfoSPtr, nullInfo.RemoteEP_);
			
	retMsg->set_stats(transMsg::ERS_SUCCESS);
	retMsg->set_verifycode(newVCode);
	retMsg->mutable_pubrsakey()->swap(newRSACode.PublicKey_);

	retInfo.Encode_.AESKey_ = FastEncrypt::AES_GenerateKey();
	retInfo.Encode_.Compress_ = true;
	retInfo.Encode_.RSAKey_ = newIDInfo.RSAPubKey_;
}