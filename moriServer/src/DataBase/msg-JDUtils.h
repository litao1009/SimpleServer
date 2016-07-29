#pragma once

#include "msg-JD.h"
#include "transMsg/msg-JD.pb.h"

namespace autoDB
{
transMsg::JD_BoardGapInfo	ToMessage( const JD_BoardGapInfoImp::SData& sdata );
JD_BoardGapInfoImp::SData	ToData( const transMsg::JD_BoardGapInfo& message );

transMsg::JD_BoardInfo	ToMessage( const JD_BoardInfoImp::SData& sdata );
JD_BoardInfoImp::SData	ToData( const transMsg::JD_BoardInfo& message );

transMsg::JD_BoardSealInfo	ToMessage( const JD_BoardSealInfoImp::SData& sdata );
JD_BoardSealInfoImp::SData	ToData( const transMsg::JD_BoardSealInfo& message );

transMsg::JD_Objects	ToMessage( const JD_ObjectsImp::SData& sdata );
JD_ObjectsImp::SData	ToData( const transMsg::JD_Objects& message );

transMsg::JD_OrderInfo	ToMessage( const JD_OrderInfoImp::SData& sdata );
JD_OrderInfoImp::SData	ToData( const transMsg::JD_OrderInfo& message );

void	AddToPack(transMsg::JD_Table& package, transMsg::JD_BoardGapInfo& toAdd);
void	AddToPack(transMsg::JD_Table& package, transMsg::JD_BoardInfo& toAdd);
void	AddToPack(transMsg::JD_Table& package, transMsg::JD_BoardSealInfo& toAdd);
void	AddToPack(transMsg::JD_Table& package, transMsg::JD_Objects& toAdd);
void	AddToPack(transMsg::JD_Table& package, transMsg::JD_OrderInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::JD_BoardGapInfo >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_BoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JD_BoardInfo >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_BoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JD_BoardSealInfo >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_BoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JD_Objects >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_ObjectsImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JD_OrderInfo >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_OrderInfoImp& tableObj);

}
