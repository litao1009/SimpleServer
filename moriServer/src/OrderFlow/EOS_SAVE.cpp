#include "COrderState.h"
#include "DataBase/msg-SJUtils.h"
#include "Tool/SJTool.h"
#include "ChargingSystem/ChargingSystem.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_SAVE);

COrderState<order::EOS_SAVE>::COrderState()
{ 
	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.ShopAuditorID_ = 0;
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_SAVE>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
		{
			if ( !_OrderVerify(userInfo, statusInfo) )
			{
				return false;
			}

			if ( !ChargingSysMgr::VerifyShopCommit(*userInfo.UserInfo_.FactoryID_,
												*userInfo.UserInfo_.ShopID_,
												*userInfo.UserInfo_.UserID_,
												*statusInfo.OrderID_) )
			{
				return false;
			}

			return true;
		};

		_GetNextStateList().emplace(order::EOS_SHOP_EXAMINE_WAIT, ftr);
		_GetNextStateList().emplace(order::EOS_DELETE, ftr);
		_GetNextStateList().emplace(order::EOS_DROP, ftr);
	}

	_GetUploadRights().insert(RValue::Desgin::Design);

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_SAVE>::_PeekStateCondition(const SUserInfo& userInfo)
{
	return false;
}

template<>
bool					COrderState<order::EOS_SAVE>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.DesignerID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_SAVE>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_SJ_TABLE != tableType )
	{
		return transMsg::ERS_ORDER_DENY;
	}

	if ( 0 == userInfo.Rights_.count(RValue::Desgin::Design) )
	{
		return transMsg::ERS_WRONG_ACCESS;
	}

	if ( !_OrderVerify(userInfo, statusInfo) )
	{
		return transMsg::ERS_WRONG_ACCESS;
	}

	transMsg::SJ_Table sjTb;
	orderTool::SJTool tool(statusInfo, sql, sjTb);
	return tool.Download(buffer, orderFile);
}


transMsg::EReturnStatus	COrderState<order::EOS_SAVE>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	transMsg::SJ_Table sjTb;	
	orderTool::SJTool tool(statusInfo, sql, sjTb);
	return tool.Upload(buffer, orderFile);
}


void	COrderState<order::EOS_SAVE>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{

}