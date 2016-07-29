#include "COrderState.h"


IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_DELETE);

COrderState<order::EOS_DELETE>::COrderState()
{
	
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_DELETE>::_Init()
{
	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_DELETE>::_PeekStateCondition(const SUserInfo& userInfo)
{
	return false;
}

template<>
bool					COrderState<order::EOS_DELETE>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return false;
}


transMsg::EReturnStatus	COrderState<order::EOS_DELETE>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	return transMsg::ERS_ORDER_DENY;
}


transMsg::EReturnStatus	COrderState<order::EOS_DELETE>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}


void	COrderState<order::EOS_DELETE>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	GL_OrderInfo_Data toUpdate;
	toUpdate.IsDel_ = true;

	SociAdaptor(Statement().Update(GL_OrderInfo.Use(toUpdate)).Where(GL_OrderInfo.OrderID==*statusInfo.OrderID_), sql).Excute();
}