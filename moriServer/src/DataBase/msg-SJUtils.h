#pragma once

#include "msg-SJ.h"
#include "transMsg/msg-SJ.pb.h"

namespace autoDB
{
transMsg::SJ_CabBoardGapInfo	ToMessage( const SJ_CabBoardGapInfoImp::SData& sdata );
SJ_CabBoardGapInfoImp::SData	ToData( const transMsg::SJ_CabBoardGapInfo& message );

transMsg::SJ_CabBoardInfo	ToMessage( const SJ_CabBoardInfoImp::SData& sdata );
SJ_CabBoardInfoImp::SData	ToData( const transMsg::SJ_CabBoardInfo& message );

transMsg::SJ_CabBoardSealInfo	ToMessage( const SJ_CabBoardSealInfoImp::SData& sdata );
SJ_CabBoardSealInfoImp::SData	ToData( const transMsg::SJ_CabBoardSealInfo& message );

transMsg::SJ_CabDoorBoardGapInfo	ToMessage( const SJ_CabDoorBoardGapInfoImp::SData& sdata );
SJ_CabDoorBoardGapInfoImp::SData	ToData( const transMsg::SJ_CabDoorBoardGapInfo& message );

transMsg::SJ_CabDoorBoardInfo	ToMessage( const SJ_CabDoorBoardInfoImp::SData& sdata );
SJ_CabDoorBoardInfoImp::SData	ToData( const transMsg::SJ_CabDoorBoardInfo& message );

transMsg::SJ_CabDoorBoardSealInfo	ToMessage( const SJ_CabDoorBoardSealInfoImp::SData& sdata );
SJ_CabDoorBoardSealInfoImp::SData	ToData( const transMsg::SJ_CabDoorBoardSealInfo& message );

transMsg::SJ_CabDoorHWFInfo	ToMessage( const SJ_CabDoorHWFInfoImp::SData& sdata );
SJ_CabDoorHWFInfoImp::SData	ToData( const transMsg::SJ_CabDoorHWFInfo& message );

transMsg::SJ_CabDoorHandleInfo	ToMessage( const SJ_CabDoorHandleInfoImp::SData& sdata );
SJ_CabDoorHandleInfoImp::SData	ToData( const transMsg::SJ_CabDoorHandleInfo& message );

transMsg::SJ_CabDoorInfo	ToMessage( const SJ_CabDoorInfoImp::SData& sdata );
SJ_CabDoorInfoImp::SData	ToData( const transMsg::SJ_CabDoorInfo& message );

transMsg::SJ_CabDoorRegionInfo	ToMessage( const SJ_CabDoorRegionInfoImp::SData& sdata );
SJ_CabDoorRegionInfoImp::SData	ToData( const transMsg::SJ_CabDoorRegionInfo& message );

transMsg::SJ_CabDoorSlideInfo	ToMessage( const SJ_CabDoorSlideInfoImp::SData& sdata );
SJ_CabDoorSlideInfoImp::SData	ToData( const transMsg::SJ_CabDoorSlideInfo& message );

transMsg::SJ_CabDoorSystemInfo	ToMessage( const SJ_CabDoorSystemInfoImp::SData& sdata );
SJ_CabDoorSystemInfoImp::SData	ToData( const transMsg::SJ_CabDoorSystemInfo& message );

transMsg::SJ_CabFNFHWFInfo	ToMessage( const SJ_CabFNFHWFInfoImp::SData& sdata );
SJ_CabFNFHWFInfoImp::SData	ToData( const transMsg::SJ_CabFNFHWFInfo& message );

transMsg::SJ_CabFNFHoleInfo	ToMessage( const SJ_CabFNFHoleInfoImp::SData& sdata );
SJ_CabFNFHoleInfoImp::SData	ToData( const transMsg::SJ_CabFNFHoleInfo& message );

transMsg::SJ_CabFNFInfo	ToMessage( const SJ_CabFNFInfoImp::SData& sdata );
SJ_CabFNFInfoImp::SData	ToData( const transMsg::SJ_CabFNFInfo& message );

transMsg::SJ_CabFNFPartInfo	ToMessage( const SJ_CabFNFPartInfoImp::SData& sdata );
SJ_CabFNFPartInfoImp::SData	ToData( const transMsg::SJ_CabFNFPartInfo& message );

transMsg::SJ_CabFNFPartSealInfo	ToMessage( const SJ_CabFNFPartSealInfoImp::SData& sdata );
SJ_CabFNFPartSealInfoImp::SData	ToData( const transMsg::SJ_CabFNFPartSealInfo& message );

transMsg::SJ_CabInfo	ToMessage( const SJ_CabInfoImp::SData& sdata );
SJ_CabInfoImp::SData	ToData( const transMsg::SJ_CabInfo& message );

transMsg::SJ_DecorBoardInfo	ToMessage( const SJ_DecorBoardInfoImp::SData& sdata );
SJ_DecorBoardInfoImp::SData	ToData( const transMsg::SJ_DecorBoardInfo& message );

transMsg::SJ_DecorBoardUnitInfo	ToMessage( const SJ_DecorBoardUnitInfoImp::SData& sdata );
SJ_DecorBoardUnitInfoImp::SData	ToData( const transMsg::SJ_DecorBoardUnitInfo& message );

transMsg::SJ_DecorBoardUnitSealInfo	ToMessage( const SJ_DecorBoardUnitSealInfoImp::SData& sdata );
SJ_DecorBoardUnitSealInfoImp::SData	ToData( const transMsg::SJ_DecorBoardUnitSealInfo& message );

transMsg::SJ_DecorInfo	ToMessage( const SJ_DecorInfoImp::SData& sdata );
SJ_DecorInfoImp::SData	ToData( const transMsg::SJ_DecorInfo& message );

transMsg::SJ_DecorLineInfo	ToMessage( const SJ_DecorLineInfoImp::SData& sdata );
SJ_DecorLineInfoImp::SData	ToData( const transMsg::SJ_DecorLineInfo& message );

transMsg::SJ_DesignPlanInfo	ToMessage( const SJ_DesignPlanInfoImp::SData& sdata );
SJ_DesignPlanInfoImp::SData	ToData( const transMsg::SJ_DesignPlanInfo& message );

transMsg::SJ_FittingInfo	ToMessage( const SJ_FittingInfoImp::SData& sdata );
SJ_FittingInfoImp::SData	ToData( const transMsg::SJ_FittingInfo& message );

transMsg::SJ_HWFInfo	ToMessage( const SJ_HWFInfoImp::SData& sdata );
SJ_HWFInfoImp::SData	ToData( const transMsg::SJ_HWFInfo& message );

transMsg::SJ_MarkInfo	ToMessage( const SJ_MarkInfoImp::SData& sdata );
SJ_MarkInfoImp::SData	ToData( const transMsg::SJ_MarkInfo& message );

transMsg::SJ_MatrixInfo	ToMessage( const SJ_MatrixInfoImp::SData& sdata );
SJ_MatrixInfoImp::SData	ToData( const transMsg::SJ_MatrixInfo& message );

transMsg::SJ_OrderAddedInfo	ToMessage( const SJ_OrderAddedInfoImp::SData& sdata );
SJ_OrderAddedInfoImp::SData	ToData( const transMsg::SJ_OrderAddedInfo& message );

transMsg::SJ_OrderDataInfo	ToMessage( const SJ_OrderDataInfoImp::SData& sdata );
SJ_OrderDataInfoImp::SData	ToData( const transMsg::SJ_OrderDataInfo& message );

transMsg::SJ_PackInfo	ToMessage( const SJ_PackInfoImp::SData& sdata );
SJ_PackInfoImp::SData	ToData( const transMsg::SJ_PackInfo& message );

transMsg::SJ_PointInfo	ToMessage( const SJ_PointInfoImp::SData& sdata );
SJ_PointInfoImp::SData	ToData( const transMsg::SJ_PointInfo& message );

transMsg::SJ_PrintElementInfo	ToMessage( const SJ_PrintElementInfoImp::SData& sdata );
SJ_PrintElementInfoImp::SData	ToData( const transMsg::SJ_PrintElementInfo& message );

transMsg::SJ_PrintGroupInfo	ToMessage( const SJ_PrintGroupInfoImp::SData& sdata );
SJ_PrintGroupInfoImp::SData	ToData( const transMsg::SJ_PrintGroupInfo& message );

transMsg::SJ_PrintInfo	ToMessage( const SJ_PrintInfoImp::SData& sdata );
SJ_PrintInfoImp::SData	ToData( const transMsg::SJ_PrintInfo& message );

transMsg::SJ_PrintTableInfo	ToMessage( const SJ_PrintTableInfoImp::SData& sdata );
SJ_PrintTableInfoImp::SData	ToData( const transMsg::SJ_PrintTableInfo& message );

transMsg::SJ_PrintTableRowColInfo	ToMessage( const SJ_PrintTableRowColInfoImp::SData& sdata );
SJ_PrintTableRowColInfoImp::SData	ToData( const transMsg::SJ_PrintTableRowColInfo& message );

transMsg::SJ_PrintTableRowInfo	ToMessage( const SJ_PrintTableRowInfoImp::SData& sdata );
SJ_PrintTableRowInfoImp::SData	ToData( const transMsg::SJ_PrintTableRowInfo& message );

transMsg::SJ_ProductInfo	ToMessage( const SJ_ProductInfoImp::SData& sdata );
SJ_ProductInfoImp::SData	ToData( const transMsg::SJ_ProductInfo& message );

transMsg::SJ_RemarkInfo	ToMessage( const SJ_RemarkInfoImp::SData& sdata );
SJ_RemarkInfoImp::SData	ToData( const transMsg::SJ_RemarkInfo& message );

transMsg::SJ_ShapeInfo	ToMessage( const SJ_ShapeInfoImp::SData& sdata );
SJ_ShapeInfoImp::SData	ToData( const transMsg::SJ_ShapeInfo& message );

transMsg::SJ_SkinInfo	ToMessage( const SJ_SkinInfoImp::SData& sdata );
SJ_SkinInfoImp::SData	ToData( const transMsg::SJ_SkinInfo& message );

transMsg::SJ_TableInfo	ToMessage( const SJ_TableInfoImp::SData& sdata );
SJ_TableInfoImp::SData	ToData( const transMsg::SJ_TableInfo& message );

transMsg::SJ_TablePartInfo	ToMessage( const SJ_TablePartInfoImp::SData& sdata );
SJ_TablePartInfoImp::SData	ToData( const transMsg::SJ_TablePartInfo& message );

transMsg::SJ_TableSideInfo	ToMessage( const SJ_TableSideInfoImp::SData& sdata );
SJ_TableSideInfoImp::SData	ToData( const transMsg::SJ_TableSideInfo& message );

transMsg::SJ_WallDecorInfo	ToMessage( const SJ_WallDecorInfoImp::SData& sdata );
SJ_WallDecorInfoImp::SData	ToData( const transMsg::SJ_WallDecorInfo& message );

transMsg::SJ_WallInfo	ToMessage( const SJ_WallInfoImp::SData& sdata );
SJ_WallInfoImp::SData	ToData( const transMsg::SJ_WallInfo& message );

void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabBoardGapInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabBoardInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabBoardSealInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorBoardGapInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorBoardInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorBoardSealInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorHWFInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorHandleInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorRegionInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorSlideInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabDoorSystemInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabFNFHWFInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabFNFHoleInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabFNFInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabFNFPartInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabFNFPartSealInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_CabInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_DecorBoardInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_DecorBoardUnitInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_DecorBoardUnitSealInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_DecorInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_DecorLineInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_DesignPlanInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_FittingInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_HWFInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_MarkInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_MatrixInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_OrderAddedInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_OrderDataInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_PackInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_PointInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_PrintElementInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_PrintGroupInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_PrintInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_PrintTableInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_PrintTableRowColInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_PrintTableRowInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_ProductInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_RemarkInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_ShapeInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_SkinInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_TableInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_TablePartInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_TableSideInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_WallDecorInfo& toAdd);
void	AddToPack(transMsg::SJ_Table& package, transMsg::SJ_WallInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabBoardGapInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabBoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabBoardInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabBoardSealInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorBoardGapInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorBoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorBoardInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorBoardSealInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorHWFInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorHWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorHandleInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorHandleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorRegionInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorRegionInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorSlideInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorSlideInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabDoorSystemInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabDoorSystemInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabFNFHWFInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabFNFHWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabFNFHoleInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabFNFHoleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabFNFInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabFNFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabFNFPartInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabFNFPartInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabFNFPartSealInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabFNFPartSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_CabInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_CabInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_DecorBoardInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_DecorBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_DecorBoardUnitInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_DecorBoardUnitInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_DecorBoardUnitSealInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_DecorBoardUnitSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_DecorInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_DecorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_DecorLineInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_DecorLineInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_DesignPlanInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_DesignPlanInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_FittingInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_FittingInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_HWFInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_HWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_MarkInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_MarkInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_MatrixInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_MatrixInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_OrderAddedInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_OrderAddedInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_OrderDataInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_OrderDataInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_PackInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_PackInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_PointInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_PointInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_PrintElementInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_PrintElementInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_PrintGroupInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_PrintGroupInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_PrintInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_PrintInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_PrintTableInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_PrintTableInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_PrintTableRowColInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_PrintTableRowColInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_PrintTableRowInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_PrintTableRowInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_ProductInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_ProductInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_RemarkInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_RemarkInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_ShapeInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_ShapeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_SkinInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_SkinInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_TableInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_TableInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_TablePartInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_TablePartInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_TableSideInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_TableSideInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_WallDecorInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_WallDecorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::SJ_WallInfo >&	ExtractFromPack(transMsg::SJ_Table& package, autoDB::SJ_WallInfoImp& tableObj);

}
