#pragma once

#include "msg-SV.h"
#include "transMsg/msg-SV.pb.h"

namespace autoDB
{
transMsg::SV_BOMChargeInfo	ToMessage( const SV_BOMChargeInfoImp::SData& sdata );
SV_BOMChargeInfoImp::SData	ToData( const transMsg::SV_BOMChargeInfo& message );

transMsg::SV_ChargeShopInfo	ToMessage( const SV_ChargeShopInfoImp::SData& sdata );
SV_ChargeShopInfoImp::SData	ToData( const transMsg::SV_ChargeShopInfo& message );

transMsg::SV_LibFileInfo	ToMessage( const SV_LibFileInfoImp::SData& sdata );
SV_LibFileInfoImp::SData	ToData( const transMsg::SV_LibFileInfo& message );

transMsg::SV_ModuleChargeInfo	ToMessage( const SV_ModuleChargeInfoImp::SData& sdata );
SV_ModuleChargeInfoImp::SData	ToData( const transMsg::SV_ModuleChargeInfo& message );

transMsg::SV_OrderActionRecordInfo	ToMessage( const SV_OrderActionRecordInfoImp::SData& sdata );
SV_OrderActionRecordInfoImp::SData	ToData( const transMsg::SV_OrderActionRecordInfo& message );

transMsg::SV_OrderFileInfo	ToMessage( const SV_OrderFileInfoImp::SData& sdata );
SV_OrderFileInfoImp::SData	ToData( const transMsg::SV_OrderFileInfo& message );

transMsg::SV_UserLoginStatusInfo	ToMessage( const SV_UserLoginStatusInfoImp::SData& sdata );
SV_UserLoginStatusInfoImp::SData	ToData( const transMsg::SV_UserLoginStatusInfo& message );

void	AddToPack(transMsg::SV_Table& package, transMsg::SV_BOMChargeInfo& toAdd);
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_ChargeShopInfo& toAdd);
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_LibFileInfo& toAdd);
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_ModuleChargeInfo& toAdd);
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_OrderActionRecordInfo& toAdd);
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_OrderFileInfo& toAdd);
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_UserLoginStatusInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::SV_BOMChargeInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_BOMChargeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SV_ChargeShopInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_ChargeShopInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SV_LibFileInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_LibFileInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SV_ModuleChargeInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_ModuleChargeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SV_OrderActionRecordInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_OrderActionRecordInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SV_OrderFileInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_OrderFileInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SV_UserLoginStatusInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_UserLoginStatusInfoImp& tableObj);

}
