#pragma once

#include "msg-ZB.h"
#include "transMsg/msg-ZB.pb.h"

namespace autoDB
{
transMsg::ZB_BoardGapInfo	ToMessage( const ZB_BoardGapInfoImp::SData& sdata );
ZB_BoardGapInfoImp::SData	ToData( const transMsg::ZB_BoardGapInfo& message );

transMsg::ZB_BoardInfo	ToMessage( const ZB_BoardInfoImp::SData& sdata );
ZB_BoardInfoImp::SData	ToData( const transMsg::ZB_BoardInfo& message );

transMsg::ZB_BoardSealInfo	ToMessage( const ZB_BoardSealInfoImp::SData& sdata );
ZB_BoardSealInfoImp::SData	ToData( const transMsg::ZB_BoardSealInfo& message );

transMsg::ZB_Objects	ToMessage( const ZB_ObjectsImp::SData& sdata );
ZB_ObjectsImp::SData	ToData( const transMsg::ZB_Objects& message );

transMsg::ZB_OrderInfo	ToMessage( const ZB_OrderInfoImp::SData& sdata );
ZB_OrderInfoImp::SData	ToData( const transMsg::ZB_OrderInfo& message );

void	AddToPack(transMsg::ZB_Table& package, transMsg::ZB_BoardGapInfo& toAdd);
void	AddToPack(transMsg::ZB_Table& package, transMsg::ZB_BoardInfo& toAdd);
void	AddToPack(transMsg::ZB_Table& package, transMsg::ZB_BoardSealInfo& toAdd);
void	AddToPack(transMsg::ZB_Table& package, transMsg::ZB_Objects& toAdd);
void	AddToPack(transMsg::ZB_Table& package, transMsg::ZB_OrderInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::ZB_BoardGapInfo >&	ExtractFromPack(transMsg::ZB_Table& package, autoDB::ZB_BoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::ZB_BoardInfo >&	ExtractFromPack(transMsg::ZB_Table& package, autoDB::ZB_BoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::ZB_BoardSealInfo >&	ExtractFromPack(transMsg::ZB_Table& package, autoDB::ZB_BoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::ZB_Objects >&	ExtractFromPack(transMsg::ZB_Table& package, autoDB::ZB_ObjectsImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::ZB_OrderInfo >&	ExtractFromPack(transMsg::ZB_Table& package, autoDB::ZB_OrderInfoImp& tableObj);

}
