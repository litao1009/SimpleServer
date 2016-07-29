#ifndef IOrderState_h__
#define IOrderState_h__

#pragma once

#include "transMsg/EReturnStatus.pb.h"
#include "transMsg/ETableType.pb.h"
#include "transMsg/EOrderState.pb.h"
#include "Processor/SUserInfo.h"
#include "DataBase/DataBase.h"
#include "DataBase/msg-GL.h"

#include "Utils/intDef.h"
#include "Utils/StrDef.h"
#include "Utils/SmartPtr.h"
#include "Utils/Type/PathType.h"

#include <unordered_map>
#include <vector>
#include <functional>
#include <boost/optional.hpp>

using namespace autoDB;

class	IOrderState;
typedef	std::shared_ptr<IOrderState>		IOrderStatePtr;
typedef	std::vector<order::EOrderState>		OrderPathList;

class	IOrderState
{
	class	Imp;

protected:
	
	typedef	std::function<IOrderStatePtr()>											FactoryFtr;
	
	typedef	std::function<boost::optional<order::EOrderState>(const SUserInfo&)>	PeekStateCondFtr;
	
	typedef	std::function<bool(const SUserInfo&,const GL_OrderInfo_Data&,bool)>		ChangeStateCondFtr;
	typedef	std::unordered_map<order::EOrderState,ChangeStateCondFtr>				NextStateList;
	typedef	std::function<NextStateList&()>											NextStateListGetFtr;

	class	Constext
	{
	public:
		Constext(order::EOrderState eos, FactoryFtr ftr, PeekStateCondFtr pscf, NextStateListGetFtr tagListFtr);
	};
	

protected:

	static	void							RegistCreator(order::EOrderState eos, const FactoryFtr& ftr);

	static	void							RegistPeekState(const PeekStateCondFtr& ftr);

	static	void							RegistStateTagList(order::EOrderState eos, NextStateList& tagList);

public:

	virtual	~IOrderState()					{}

	static	IOrderStatePtr					Factory(order::EOrderState cat);

	static	Condition						GetPeekRightCondString(const SUserInfo& userInfo);//根据当前用户的UserID和权限

	static	Condition						GetPeekStateCondString(const SUserInfo& userInfo);//根据各个状态

	static	OrderPathList					CalcuOrderPathList(order::EOrderState fromState, order::EOrderState toSate, const GL_OrderInfo_Data& statusInfo, const SUserInfo& userInfo);

public:

	virtual	transMsg::EReturnStatus			ReSet( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, soci::session& sql) = 0;

	virtual	transMsg::EReturnStatus			ChangeTo( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, order::EOrderState toState, const AStringType& comment, soci::session& sql) = 0;

	virtual	transMsg::EReturnStatus			OnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, const AStringType& comment, soci::session& sql) = 0;

	virtual	transMsg::EReturnStatus			Download( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql) = 0;

	virtual	transMsg::EReturnStatus			Upload( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql) = 0;
};
#endif // IOrderState_h__