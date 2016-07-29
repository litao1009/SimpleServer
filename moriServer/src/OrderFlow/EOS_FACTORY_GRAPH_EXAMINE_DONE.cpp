#include "COrderState.h"
#include "ChargingSystem/ChargingSystem.h"
#include "DecomposeMgr/DecomposeMgr.h"
#include "Tool/GCTool.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_FACTORY_GRAPH_EXAMINE_DONE);

COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DONE>::COrderState()
{ 
	
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DONE>::_Init()
{
	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DONE>::_PeekStateCondition(const SUserInfo& userInfo)
{
	return false;
}

template<>
bool					COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DONE>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.FactoryGraphAuditorID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DONE>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_GC_TABLE == tableType )
	{
		if ( *statusInfo.ShopAuditorID_ == *userInfo.UserInfo_.UserID_ ||
			*statusInfo.DesignerID_ == *userInfo.UserInfo_.UserID_ ||
			*statusInfo.FactoryListAuditorID_ == *userInfo.UserInfo_.UserID_ ||
			*statusInfo.FactoryFinanceAuditorID_ == *userInfo.UserInfo_.UserID_ )
		{
			transMsg::GC_Table gcTb;
			orderTool::GCTool tool(statusInfo, sql, gcTb);

			return tool.Download(buffer, orderFile);
		}
	}

	auto dsState = IOrderState::Factory(order::EOS_FACTORY_GRAPH_EXAMINE_DURING);
	return dsState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DONE>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}


void	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DONE>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	DecomposeMgr::GetInstance().Push(*statusInfo.OrderID_);
}