#include "COrderState.h"
#include "Tool/GCTool.h"
#include "ChargingSystem/ChargingSystem.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_FACTORY_GRAPH_EXAMINE_DURING);

COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DURING>::COrderState()
{ 
	ResetFtr_ = [](const GL_OrderInfo_Data& statusInfo, soci::session& sql)
	{
		orderTool::GCTool tool(statusInfo,sql);
		tool.CopyFromDS();
	};

	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.FactoryGraphAuditorID_ = userInfo.UserInfo_.UserID_;
		statusInfo.FactoryListAuditorID_ = 0;
		statusInfo.GraphAuditTime_ = boost::posix_time::second_clock::local_time();
	};

	ChargeFtr_ = [](const GL_OrderInfo_Data& orderInfo, const SUserInfo& userInfo)
	{
		return ChargingSysMgr::VerifyFactoryDecompose(*orderInfo.FactoryID_, *orderInfo.OrderID_);
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DURING>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
		{
			if ( 0 == userInfo.Rights_.count(RValue::FactoryExamine::GraphExamine) )
			{
				return false;
			}

			if ( !_OrderVerify(userInfo, statusInfo, isPeek) )
			{
				return false;
			}
			

			return true;
		};
		_GetNextStateList().emplace(order::EOS_FACTORY_GRAPH_EXAMINE_DONE, ftr);
		_GetNextStateList().emplace(order::EOS_FACTORY_GRAPH_EXAMINE_FAIL, ftr);
	}


	_GetUploadRights().insert(RValue::FactoryExamine::GraphExamine);

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DURING>::_PeekStateCondition(const SUserInfo& userInfo)
{
	return false;
}

template<>
bool					COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DURING>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	if ( isPeek )
	{
		return 0 == *statusInfo.FactoryGraphAuditorID_ || *userInfo.UserInfo_.UserID_ == *statusInfo.FactoryGraphAuditorID_;
	}
	else
	{
		return *userInfo.UserInfo_.UserID_ == *statusInfo.FactoryGraphAuditorID_;
	}
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DURING>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_GC_TABLE == tableType && _OrderVerify(userInfo, statusInfo) )
	{
		if ( 0 == userInfo.Rights_.count(RValue::FactoryExamine::GraphExamine) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}

		transMsg::GC_Table gcTb;
		orderTool::GCTool tool(statusInfo, sql, gcTb);

		return tool.Download(buffer, orderFile);
	}
	else
	{
		auto dsState = IOrderState::Factory(order::EOS_FACTORY_EXAMINE_WAIT);
		return dsState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
	}
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DURING>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	transMsg::GC_Table gcTb;
	orderTool::GCTool tool(statusInfo, sql, gcTb);
	
	return tool.Upload(buffer, orderFile);
}


void	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_DURING>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	ResetFtr_(statusInfo, sql);
}