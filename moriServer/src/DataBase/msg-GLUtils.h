#pragma once

#include "msg-GL.h"
#include "transMsg/msg-GL.pb.h"

namespace autoDB
{
transMsg::GL_AppVerInfo	ToMessage( const GL_AppVerInfoImp::SData& sdata );
GL_AppVerInfoImp::SData	ToData( const transMsg::GL_AppVerInfo& message );

transMsg::GL_AppleseedInfo	ToMessage( const GL_AppleseedInfoImp::SData& sdata );
GL_AppleseedInfoImp::SData	ToData( const transMsg::GL_AppleseedInfo& message );

transMsg::GL_AreaGeoMapInfo	ToMessage( const GL_AreaGeoMapInfoImp::SData& sdata );
GL_AreaGeoMapInfoImp::SData	ToData( const transMsg::GL_AreaGeoMapInfo& message );

transMsg::GL_AreaInfo	ToMessage( const GL_AreaInfoImp::SData& sdata );
GL_AreaInfoImp::SData	ToData( const transMsg::GL_AreaInfo& message );

transMsg::GL_BaseBoardInfo	ToMessage( const GL_BaseBoardInfoImp::SData& sdata );
GL_BaseBoardInfoImp::SData	ToData( const transMsg::GL_BaseBoardInfo& message );

transMsg::GL_ChargeLogInfo	ToMessage( const GL_ChargeLogInfoImp::SData& sdata );
GL_ChargeLogInfoImp::SData	ToData( const transMsg::GL_ChargeLogInfo& message );

transMsg::GL_DeptInfo	ToMessage( const GL_DeptInfoImp::SData& sdata );
GL_DeptInfoImp::SData	ToData( const transMsg::GL_DeptInfo& message );

transMsg::GL_DesignerConfigInfo	ToMessage( const GL_DesignerConfigInfoImp::SData& sdata );
GL_DesignerConfigInfoImp::SData	ToData( const transMsg::GL_DesignerConfigInfo& message );

transMsg::GL_GTypeInfo	ToMessage( const GL_GTypeInfoImp::SData& sdata );
GL_GTypeInfoImp::SData	ToData( const transMsg::GL_GTypeInfo& message );

transMsg::GL_GeoCodeInfo	ToMessage( const GL_GeoCodeInfoImp::SData& sdata );
GL_GeoCodeInfoImp::SData	ToData( const transMsg::GL_GeoCodeInfo& message );

transMsg::GL_MajorCateInfo	ToMessage( const GL_MajorCateInfoImp::SData& sdata );
GL_MajorCateInfoImp::SData	ToData( const transMsg::GL_MajorCateInfo& message );

transMsg::GL_MinorCateInfo	ToMessage( const GL_MinorCateInfoImp::SData& sdata );
GL_MinorCateInfoImp::SData	ToData( const transMsg::GL_MinorCateInfo& message );

transMsg::GL_MinorGTypeMapInfo	ToMessage( const GL_MinorGTypeMapInfoImp::SData& sdata );
GL_MinorGTypeMapInfoImp::SData	ToData( const transMsg::GL_MinorGTypeMapInfo& message );

transMsg::GL_OrderInfo	ToMessage( const GL_OrderInfoImp::SData& sdata );
GL_OrderInfoImp::SData	ToData( const transMsg::GL_OrderInfo& message );

transMsg::GL_PinYin	ToMessage( const GL_PinYinImp::SData& sdata );
GL_PinYinImp::SData	ToData( const transMsg::GL_PinYin& message );

transMsg::GL_PrepaidCardInfo	ToMessage( const GL_PrepaidCardInfoImp::SData& sdata );
GL_PrepaidCardInfoImp::SData	ToData( const transMsg::GL_PrepaidCardInfo& message );

transMsg::GL_PrintTemplateInfo	ToMessage( const GL_PrintTemplateInfoImp::SData& sdata );
GL_PrintTemplateInfoImp::SData	ToData( const transMsg::GL_PrintTemplateInfo& message );

transMsg::GL_RoleInfo	ToMessage( const GL_RoleInfoImp::SData& sdata );
GL_RoleInfoImp::SData	ToData( const transMsg::GL_RoleInfo& message );

transMsg::GL_RoleRightInfo	ToMessage( const GL_RoleRightInfoImp::SData& sdata );
GL_RoleRightInfoImp::SData	ToData( const transMsg::GL_RoleRightInfo& message );

transMsg::GL_SugarVerInfo	ToMessage( const GL_SugarVerInfoImp::SData& sdata );
GL_SugarVerInfoImp::SData	ToData( const transMsg::GL_SugarVerInfo& message );

transMsg::GL_TransferOrderInfo	ToMessage( const GL_TransferOrderInfoImp::SData& sdata );
GL_TransferOrderInfoImp::SData	ToData( const transMsg::GL_TransferOrderInfo& message );

transMsg::GL_UnitInfo	ToMessage( const GL_UnitInfoImp::SData& sdata );
GL_UnitInfoImp::SData	ToData( const transMsg::GL_UnitInfo& message );

transMsg::GL_UserActivationInfo	ToMessage( const GL_UserActivationInfoImp::SData& sdata );
GL_UserActivationInfoImp::SData	ToData( const transMsg::GL_UserActivationInfo& message );

transMsg::GL_UserInfo	ToMessage( const GL_UserInfoImp::SData& sdata );
GL_UserInfoImp::SData	ToData( const transMsg::GL_UserInfo& message );

void	AddToPack(transMsg::GL_Table& package, transMsg::GL_AppVerInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_AppleseedInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_AreaGeoMapInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_AreaInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_BaseBoardInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_ChargeLogInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_DeptInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_DesignerConfigInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_GTypeInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_GeoCodeInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_MajorCateInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_MinorCateInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_MinorGTypeMapInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_OrderInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_PinYin& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_PrepaidCardInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_PrintTemplateInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_RoleInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_RoleRightInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_SugarVerInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_TransferOrderInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_UnitInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_UserActivationInfo& toAdd);
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_UserInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_AppVerInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_AppVerInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_AppleseedInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_AppleseedInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_AreaGeoMapInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_AreaGeoMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_AreaInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_AreaInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_BaseBoardInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_BaseBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_ChargeLogInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_ChargeLogInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_DeptInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_DeptInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_DesignerConfigInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_DesignerConfigInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_GTypeInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_GTypeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_GeoCodeInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_GeoCodeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_MajorCateInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_MajorCateInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_MinorCateInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_MinorCateInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_MinorGTypeMapInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_MinorGTypeMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_OrderInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_OrderInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_PinYin >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_PinYinImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrepaidCardInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_PrepaidCardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrintTemplateInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_PrintTemplateInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_RoleInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_RoleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_RoleRightInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_RoleRightInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_SugarVerInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_SugarVerInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_TransferOrderInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_TransferOrderInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_UnitInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_UnitInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_UserActivationInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_UserActivationInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GL_UserInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_UserInfoImp& tableObj);

}
