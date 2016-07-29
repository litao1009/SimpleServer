#include "COrderState.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_DROP);

COrderState<order::EOS_DROP>::COrderState()
{ 
	
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_DROP>::_Init()
{
	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_DROP>::_PeekStateCondition(const SUserInfo& userInfo)
{
	return false;
}

template<>
bool					COrderState<order::EOS_DROP>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	auto userID = userInfo.UserInfo_.UserID_;
	return (userID == *statusInfo.DesignerID_) || (userID == *statusInfo.ShopAuditorID_) || (userID == *statusInfo.ShopCommitorID_);
}


transMsg::EReturnStatus	COrderState<order::EOS_DROP>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	return transMsg::ERS_ORDER_DENY;
}


transMsg::EReturnStatus	COrderState<order::EOS_DROP>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}


void	COrderState<order::EOS_DROP>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{

}