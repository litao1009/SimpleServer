#ifndef COrderState_h__
#define COrderState_h__

#pragma once
#include "IOrderState.h"
#include "Processor/DBValue.h"
#include "DataBase/msg-GL.h"
#include "DataBase/msg-SV.h"

#include "TinyLog.h"

#include <algorithm>
#include <sstream>

#define IMPLEMENT_ORDERSTATE_MEMBER(Enum)									\
	IOrderState::Constext	COrderState<Enum>::s_CallBackContext(			\
	Enum,																	\
	std::bind(COrderState<Enum>::Factory),									\
	std::bind(COrderState<Enum>::PeekStateCondition,std::placeholders::_1),	\
	std::bind(COrderState<Enum>::_Init));





template<order::EOrderState Enum>
class	COrderState : public IOrderState
{
	static	IOrderState::Constext					s_CallBackContext;

	static	IOrderStatePtr							Factory() {	return std::make_shared<COrderState<Enum>>(); }

	static	boost::optional<order::EOrderState>	PeekStateCondition(const SUserInfo& userInfo)//用户可直接查看的状态
	{
		if ( _PeekStateCondition(userInfo) )
		{
			return Enum;
		}

		return boost::optional<order::EOrderState>();
	}

	typedef	std::function<void(const GL_OrderInfo_Data&, soci::session&)>										ResetFtr;
	typedef	std::function<void(GL_OrderInfo_Data&, const SUserInfo&, const AStringType&)>						UpdateStatusFtr;
	typedef	std::function<bool(const GL_OrderInfo_Data&, const SUserInfo&)>										ChargeFtr;
	typedef	std::function<transMsg::EReturnStatus(const SUserInfo&, const GL_OrderInfo_Data&, soci::session&)>	PreOnChangeFtr;

public:

	COrderState();

	virtual ~COrderState() {}

	order::EOrderState				GetOrderState() const {	return Enum;}

	transMsg::EReturnStatus			ReSet( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, soci::session& sql )
	{
		if ( !ResetFtr_ )
		{
			return transMsg::ERS_ORDER_DENY;
		}

		//权限验证
		//**************************************************************************************************************************************************
		if ( !_VerifyRights(userInfo, _GetUploadRights()) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}
		//**************************************************************************************************************************************************

		//订单验证
		//**************************************************************************************************************************************************
		if ( !_OrderVerify(userInfo, statusInfo) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}
		//**************************************************************************************************************************************************

		ResetFtr_(statusInfo, sql);

		//更新记录
		//**************************************************************************************************************************************************
		try
		{
			SV_OrderActionRecordInfo_Data recordInfo;

			recordInfo.ActionID_= DBValue::OrderAction::Reset;
			recordInfo.OrderID_ = statusInfo.OrderID_;
			recordInfo.UserID_ = userInfo.UserInfo_.UserID_;
			recordInfo.RecordTime_ = boost::posix_time::second_clock::local_time();

			SociAdaptor(Statement().Insert(SV_OrderActionRecordInfo.Use(recordInfo)), sql).Excute();
		}
		catch(soci::soci_error& err)
		{
			LOG_ERROR << DataBase::GetSociErrorString(err) << userInfo.RemoteEP_;
		}
		//**************************************************************************************************************************************************
		return transMsg::ERS_SUCCESS;
	}

	transMsg::EReturnStatus			ChangeTo( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, order::EOrderState toState, const AStringType& comment, soci::session& sql )
	{
		//状态验证
		//**************************************************************************************************************************************************
		auto itorToState = _GetNextStateList().find(toState);
		if ( itorToState == _GetNextStateList().end() )
		{
			return transMsg::ERS_ORDER_DENY;
		}

		if ( !itorToState->second(userInfo, statusInfo, false) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}
		//**************************************************************************************************************************************************

		auto nextState = IOrderState::Factory(toState);
		assert(nextState);

		return nextState->OnChange(userInfo, statusInfo, comment, sql);
	}

	transMsg::EReturnStatus			OnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, const AStringType& comment, soci::session& sql )
	{
		//收费验证
		//**************************************************************************************************************************************************
		if ( ChargeFtr_ && !ChargeFtr_(statusInfo, userInfo) )
		{
			return transMsg::ERS_CHARG_DENY;			
		}
		//**************************************************************************************************************************************************

		auto ret = _PreOnChange(userInfo, statusInfo, sql);
		if ( transMsg::ERS_SUCCESS != ret )
		{
			return ret;
		}

		//更新状态
		//**************************************************************************************************************************************************
		GL_OrderInfo_Data toUpdate;
		toUpdate.OrderStatus_ = GetOrderState();

		_UpdateStatus(toUpdate, userInfo, comment);

		int64_t ars = 0;
		{
			SociAdaptor ada(Statement()
				.Update(GL_OrderInfo.Use(toUpdate))
				.Where(GL_OrderInfo.OrderID==*statusInfo.OrderID_ &&
				GL_OrderInfo.FactoryID==*userInfo.UserInfo_.FactoryID_ &&
				GL_OrderInfo.OrderStatus==*statusInfo.OrderStatus_), sql);

			ada.Excute();
			ars = ada.GetAffectedRows();
		}

		if ( 0 != ars )
		{
			statusInfo.OrderStatus_ = GetOrderState();
			_UpdateStatus(statusInfo, userInfo, comment);

			_PostOnChange(userInfo, statusInfo, sql);

			//更新记录
			//**************************************************************************************************************************************************
			try
			{
				SV_OrderActionRecordInfo_Data recordInfo;

				recordInfo.ActionID_= GetOrderState();
				recordInfo.OrderID_ = statusInfo.OrderID_;
				recordInfo.UserID_ = userInfo.UserInfo_.UserID_;
				recordInfo.RecordTime_ = boost::posix_time::second_clock::local_time();

				if ( !comment.empty() )
				{
					recordInfo.AuditComment_ = comment;
					ToASCII(recordInfo);
				}

				SociAdaptor(Statement().Insert(SV_OrderActionRecordInfo.Use(recordInfo)), sql).Excute();
			}
			catch(soci::soci_error& err)
			{
				LOG_ERROR << DataBase::GetSociErrorString(err) << userInfo.RemoteEP_;
			}
			//**************************************************************************************************************************************************

			return transMsg::ERS_SUCCESS;
		}
		else
		{
			return transMsg::ERS_ORDER_OPERATE_FAIL;
		}
		//**************************************************************************************************************************************************
	}

	transMsg::EReturnStatus			Download( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql )
	{
		auto res = _DownloadOrder(userInfo, statusInfo, tableType, buffer, orderFile, sql);

		if ( transMsg::ERS_SUCCESS == res )
		{
			try
			{
				SV_OrderActionRecordInfo_Data recordInfo;

				recordInfo.ActionID_= DBValue::OrderAction::Download;
				recordInfo.OrderID_ = statusInfo.OrderID_;
				recordInfo.UserID_ = userInfo.UserInfo_.UserID_;
				recordInfo.RecordTime_ = boost::posix_time::second_clock::local_time();

				SociAdaptor(Statement().Insert(SV_OrderActionRecordInfo.Use(recordInfo)), sql).Excute();
			}
			catch(soci::soci_error& err)
			{
				LOG_ERROR << DataBase::GetSociErrorString(err) << userInfo.RemoteEP_;
			}
		}

		return res;
	}

	transMsg::EReturnStatus			Upload( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
	{
		//权限验证
		//**************************************************************************************************************************************************
		if ( !_VerifyRights(userInfo, _GetUploadRights()) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}
		//**************************************************************************************************************************************************

		//订单验证
		//**************************************************************************************************************************************************
		if ( !_OrderVerify(userInfo, statusInfo) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}
		//**************************************************************************************************************************************************

		auto res = _UploadOrder( userInfo, statusInfo, buffer, orderFile, sql);

		if ( transMsg::ERS_SUCCESS == res )
		{
			try
			{
				SV_OrderActionRecordInfo_Data recordInfo;

				recordInfo.ActionID_= DBValue::OrderAction::Upload;
				recordInfo.OrderID_ = statusInfo.OrderID_;
				recordInfo.UserID_ = userInfo.UserInfo_.UserID_;
				recordInfo.RecordTime_ = boost::posix_time::second_clock::local_time();

				SociAdaptor(Statement().Insert(SV_OrderActionRecordInfo.Use(recordInfo)), sql).Excute();
			}
			catch(soci::soci_error& err)
			{
				LOG_ERROR << DataBase::GetSociErrorString(err) << userInfo.RemoteEP_;
			}
		}

		return res;
	}

private:

	static	NextStateList&			_Init();

	static	bool					_PeekStateCondition(const SUserInfo& userInfo);

	static	bool					_VerifyRights(const SUserInfo& userInfo, const SUserInfo::RightsList& theVerifyList)
	{
		//权限验证
		SUserInfo::RightsList access;
		std::set_intersection(userInfo.Rights_.begin(), userInfo.Rights_.end(), theVerifyList.begin(), theVerifyList.end(), std::inserter(access, access.begin()));

		return !access.empty();
	}

	static	bool					_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek=false);

	transMsg::EReturnStatus			_DownloadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql );

	transMsg::EReturnStatus			_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql );

	transMsg::EReturnStatus			_PreOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
	{
		if ( PreOnChangeFtr_ )
		{
			return PreOnChangeFtr_(userInfo, statusInfo, sql);
		}

		return transMsg::ERS_SUCCESS;
	}

	void							_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql );

	void							_UpdateStatus( GL_OrderInfo_Data& toUpdate, const SUserInfo& userInfo, const AStringType& comment )
	{
		if ( UpdateStatusFtr_ )
		{
			UpdateStatusFtr_(toUpdate, userInfo, comment);
		}
	}

private:

	static	NextStateList&			_GetNextStateList()
	{
		static NextStateList theNextStateList;
		return theNextStateList;
	}
	static	SUserInfo::RightsList&	_GetUploadRights()
	{
		static SUserInfo::RightsList theRightsList;
		return theRightsList;
	}

	ResetFtr			ResetFtr_;
	ChargeFtr			ChargeFtr_;
	UpdateStatusFtr		UpdateStatusFtr_;
	PreOnChangeFtr		PreOnChangeFtr_;
};

#endif // COrderState_h__