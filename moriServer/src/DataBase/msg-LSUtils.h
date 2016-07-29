#pragma once

#include "msg-LS.h"
#include "transMsg/msg-LS.pb.h"

namespace autoDB
{
transMsg::LS_BoardGapInfo	ToMessage( const LS_BoardGapInfoImp::SData& sdata );
LS_BoardGapInfoImp::SData	ToData( const transMsg::LS_BoardGapInfo& message );

transMsg::LS_BoardInfo	ToMessage( const LS_BoardInfoImp::SData& sdata );
LS_BoardInfoImp::SData	ToData( const transMsg::LS_BoardInfo& message );

transMsg::LS_BoardSealInfo	ToMessage( const LS_BoardSealInfoImp::SData& sdata );
LS_BoardSealInfoImp::SData	ToData( const transMsg::LS_BoardSealInfo& message );

transMsg::LS_Objects	ToMessage( const LS_ObjectsImp::SData& sdata );
LS_ObjectsImp::SData	ToData( const transMsg::LS_Objects& message );

transMsg::LS_OrderInfo	ToMessage( const LS_OrderInfoImp::SData& sdata );
LS_OrderInfoImp::SData	ToData( const transMsg::LS_OrderInfo& message );

void	AddToPack(transMsg::LS_Table& package, transMsg::LS_BoardGapInfo& toAdd);
void	AddToPack(transMsg::LS_Table& package, transMsg::LS_BoardInfo& toAdd);
void	AddToPack(transMsg::LS_Table& package, transMsg::LS_BoardSealInfo& toAdd);
void	AddToPack(transMsg::LS_Table& package, transMsg::LS_Objects& toAdd);
void	AddToPack(transMsg::LS_Table& package, transMsg::LS_OrderInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::LS_BoardGapInfo >&	ExtractFromPack(transMsg::LS_Table& package, autoDB::LS_BoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::LS_BoardInfo >&	ExtractFromPack(transMsg::LS_Table& package, autoDB::LS_BoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::LS_BoardSealInfo >&	ExtractFromPack(transMsg::LS_Table& package, autoDB::LS_BoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::LS_Objects >&	ExtractFromPack(transMsg::LS_Table& package, autoDB::LS_ObjectsImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::LS_OrderInfo >&	ExtractFromPack(transMsg::LS_Table& package, autoDB::LS_OrderInfoImp& tableObj);

}
