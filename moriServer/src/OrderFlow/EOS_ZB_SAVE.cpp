#include "COrderState.h"
#include "Tool/ZBTool.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_ZB_SAVE);

COrderState<order::EOS_ZB_SAVE>::COrderState()
{ 

}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_ZB_SAVE>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool allowEmpty)
		{
			if ( !_OrderVerify(userInfo, statusInfo) )
			{
				return false;
			}

			return true;
		};
		_GetNextStateList().emplace(order::EOS_ZB_COMMIT_WAIT, ftr);
	}

	_GetUploadRights().insert(RValue::Desgin::Design);

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_ZB_SAVE>::_PeekStateCondition(const SUserInfo& userInfo)
{
	return false;
}

template<>
bool					COrderState<order::EOS_ZB_SAVE>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.DesignerID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_ZB_SAVE>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_ZB_TABLE != tableType )
	{
		return transMsg::ERS_ORDER_DENY;
	}

	if ( 0 == userInfo.Rights_.count(RValue::Desgin::ZBDesign) )
	{
		return transMsg::ERS_WRONG_ACCESS;
	}

	if ( !_OrderVerify(userInfo, statusInfo) )
	{
		return transMsg::ERS_WRONG_ACCESS;
	}

	transMsg::ZB_Table zbTb;
	orderTool::ZBTool tool(statusInfo, sql, zbTb);

	try
	{
		tool.GetTable();
	}
	catch(soci::soci_error& err)
	{
		LOG_ERROR << DataBase::GetSociErrorString(err) << userInfo.RemoteEP_;
		return transMsg::ERS_SERVER_ERROR;
	}

	zbTb.SerializeToString(&buffer);

	return transMsg::ERS_SUCCESS;
}


transMsg::EReturnStatus	COrderState<order::EOS_ZB_SAVE>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	transMsg::ZB_Table zbTb;

	if ( !zbTb.ParseFromString(buffer) )
	{
		return transMsg::ERS_WRONG_MESSAGE;
	}

	orderTool::ZBTool tool(statusInfo, sql, zbTb);
	soci::transaction trans(sql);
	try
	{
		tool.InsertTable();
	}
	catch(soci::soci_error& err)
	{
		LOG_ERROR << DataBase::GetSociErrorString(err) << userInfo.RemoteEP_;
		return transMsg::ERS_SERVER_ERROR;
	}

	sql.commit();

	return transMsg::ERS_SUCCESS;
}


void	COrderState<order::EOS_ZB_SAVE>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{

}