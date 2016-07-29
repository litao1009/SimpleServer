#pragma once

#include "msg-GC.h"
#include "transMsg/msg-GC.pb.h"

namespace autoDB
{
transMsg::GC_CabBoardGapInfo	ToMessage( const GC_CabBoardGapInfoImp::SData& sdata );
GC_CabBoardGapInfoImp::SData	ToData( const transMsg::GC_CabBoardGapInfo& message );

transMsg::GC_CabBoardInfo	ToMessage( const GC_CabBoardInfoImp::SData& sdata );
GC_CabBoardInfoImp::SData	ToData( const transMsg::GC_CabBoardInfo& message );

transMsg::GC_CabBoardSealInfo	ToMessage( const GC_CabBoardSealInfoImp::SData& sdata );
GC_CabBoardSealInfoImp::SData	ToData( const transMsg::GC_CabBoardSealInfo& message );

transMsg::GC_CabDoorBoardGapInfo	ToMessage( const GC_CabDoorBoardGapInfoImp::SData& sdata );
GC_CabDoorBoardGapInfoImp::SData	ToData( const transMsg::GC_CabDoorBoardGapInfo& message );

transMsg::GC_CabDoorBoardInfo	ToMessage( const GC_CabDoorBoardInfoImp::SData& sdata );
GC_CabDoorBoardInfoImp::SData	ToData( const transMsg::GC_CabDoorBoardInfo& message );

transMsg::GC_CabDoorBoardSealInfo	ToMessage( const GC_CabDoorBoardSealInfoImp::SData& sdata );
GC_CabDoorBoardSealInfoImp::SData	ToData( const transMsg::GC_CabDoorBoardSealInfo& message );

transMsg::GC_CabDoorHWFInfo	ToMessage( const GC_CabDoorHWFInfoImp::SData& sdata );
GC_CabDoorHWFInfoImp::SData	ToData( const transMsg::GC_CabDoorHWFInfo& message );

transMsg::GC_CabDoorHandleInfo	ToMessage( const GC_CabDoorHandleInfoImp::SData& sdata );
GC_CabDoorHandleInfoImp::SData	ToData( const transMsg::GC_CabDoorHandleInfo& message );

transMsg::GC_CabDoorInfo	ToMessage( const GC_CabDoorInfoImp::SData& sdata );
GC_CabDoorInfoImp::SData	ToData( const transMsg::GC_CabDoorInfo& message );

transMsg::GC_CabDoorRegionInfo	ToMessage( const GC_CabDoorRegionInfoImp::SData& sdata );
GC_CabDoorRegionInfoImp::SData	ToData( const transMsg::GC_CabDoorRegionInfo& message );

transMsg::GC_CabDoorSlideInfo	ToMessage( const GC_CabDoorSlideInfoImp::SData& sdata );
GC_CabDoorSlideInfoImp::SData	ToData( const transMsg::GC_CabDoorSlideInfo& message );

transMsg::GC_CabDoorSystemInfo	ToMessage( const GC_CabDoorSystemInfoImp::SData& sdata );
GC_CabDoorSystemInfoImp::SData	ToData( const transMsg::GC_CabDoorSystemInfo& message );

transMsg::GC_CabFNFHWFInfo	ToMessage( const GC_CabFNFHWFInfoImp::SData& sdata );
GC_CabFNFHWFInfoImp::SData	ToData( const transMsg::GC_CabFNFHWFInfo& message );

transMsg::GC_CabFNFHoleInfo	ToMessage( const GC_CabFNFHoleInfoImp::SData& sdata );
GC_CabFNFHoleInfoImp::SData	ToData( const transMsg::GC_CabFNFHoleInfo& message );

transMsg::GC_CabFNFInfo	ToMessage( const GC_CabFNFInfoImp::SData& sdata );
GC_CabFNFInfoImp::SData	ToData( const transMsg::GC_CabFNFInfo& message );

transMsg::GC_CabFNFPartInfo	ToMessage( const GC_CabFNFPartInfoImp::SData& sdata );
GC_CabFNFPartInfoImp::SData	ToData( const transMsg::GC_CabFNFPartInfo& message );

transMsg::GC_CabFNFPartSealInfo	ToMessage( const GC_CabFNFPartSealInfoImp::SData& sdata );
GC_CabFNFPartSealInfoImp::SData	ToData( const transMsg::GC_CabFNFPartSealInfo& message );

transMsg::GC_CabInfo	ToMessage( const GC_CabInfoImp::SData& sdata );
GC_CabInfoImp::SData	ToData( const transMsg::GC_CabInfo& message );

transMsg::GC_DecorBoardInfo	ToMessage( const GC_DecorBoardInfoImp::SData& sdata );
GC_DecorBoardInfoImp::SData	ToData( const transMsg::GC_DecorBoardInfo& message );

transMsg::GC_DecorBoardUnitInfo	ToMessage( const GC_DecorBoardUnitInfoImp::SData& sdata );
GC_DecorBoardUnitInfoImp::SData	ToData( const transMsg::GC_DecorBoardUnitInfo& message );

transMsg::GC_DecorBoardUnitSealInfo	ToMessage( const GC_DecorBoardUnitSealInfoImp::SData& sdata );
GC_DecorBoardUnitSealInfoImp::SData	ToData( const transMsg::GC_DecorBoardUnitSealInfo& message );

transMsg::GC_DecorInfo	ToMessage( const GC_DecorInfoImp::SData& sdata );
GC_DecorInfoImp::SData	ToData( const transMsg::GC_DecorInfo& message );

transMsg::GC_DecorLineInfo	ToMessage( const GC_DecorLineInfoImp::SData& sdata );
GC_DecorLineInfoImp::SData	ToData( const transMsg::GC_DecorLineInfo& message );

transMsg::GC_DesignPlanInfo	ToMessage( const GC_DesignPlanInfoImp::SData& sdata );
GC_DesignPlanInfoImp::SData	ToData( const transMsg::GC_DesignPlanInfo& message );

transMsg::GC_FittingInfo	ToMessage( const GC_FittingInfoImp::SData& sdata );
GC_FittingInfoImp::SData	ToData( const transMsg::GC_FittingInfo& message );

transMsg::GC_HWFInfo	ToMessage( const GC_HWFInfoImp::SData& sdata );
GC_HWFInfoImp::SData	ToData( const transMsg::GC_HWFInfo& message );

transMsg::GC_MarkInfo	ToMessage( const GC_MarkInfoImp::SData& sdata );
GC_MarkInfoImp::SData	ToData( const transMsg::GC_MarkInfo& message );

transMsg::GC_MatrixInfo	ToMessage( const GC_MatrixInfoImp::SData& sdata );
GC_MatrixInfoImp::SData	ToData( const transMsg::GC_MatrixInfo& message );

transMsg::GC_OrderAddedInfo	ToMessage( const GC_OrderAddedInfoImp::SData& sdata );
GC_OrderAddedInfoImp::SData	ToData( const transMsg::GC_OrderAddedInfo& message );

transMsg::GC_OrderDataInfo	ToMessage( const GC_OrderDataInfoImp::SData& sdata );
GC_OrderDataInfoImp::SData	ToData( const transMsg::GC_OrderDataInfo& message );

transMsg::GC_PackInfo	ToMessage( const GC_PackInfoImp::SData& sdata );
GC_PackInfoImp::SData	ToData( const transMsg::GC_PackInfo& message );

transMsg::GC_PointInfo	ToMessage( const GC_PointInfoImp::SData& sdata );
GC_PointInfoImp::SData	ToData( const transMsg::GC_PointInfo& message );

transMsg::GC_PrintElementInfo	ToMessage( const GC_PrintElementInfoImp::SData& sdata );
GC_PrintElementInfoImp::SData	ToData( const transMsg::GC_PrintElementInfo& message );

transMsg::GC_PrintGroupInfo	ToMessage( const GC_PrintGroupInfoImp::SData& sdata );
GC_PrintGroupInfoImp::SData	ToData( const transMsg::GC_PrintGroupInfo& message );

transMsg::GC_PrintInfo	ToMessage( const GC_PrintInfoImp::SData& sdata );
GC_PrintInfoImp::SData	ToData( const transMsg::GC_PrintInfo& message );

transMsg::GC_PrintTableInfo	ToMessage( const GC_PrintTableInfoImp::SData& sdata );
GC_PrintTableInfoImp::SData	ToData( const transMsg::GC_PrintTableInfo& message );

transMsg::GC_PrintTableRowColInfo	ToMessage( const GC_PrintTableRowColInfoImp::SData& sdata );
GC_PrintTableRowColInfoImp::SData	ToData( const transMsg::GC_PrintTableRowColInfo& message );

transMsg::GC_PrintTableRowInfo	ToMessage( const GC_PrintTableRowInfoImp::SData& sdata );
GC_PrintTableRowInfoImp::SData	ToData( const transMsg::GC_PrintTableRowInfo& message );

transMsg::GC_ProductInfo	ToMessage( const GC_ProductInfoImp::SData& sdata );
GC_ProductInfoImp::SData	ToData( const transMsg::GC_ProductInfo& message );

transMsg::GC_RemarkInfo	ToMessage( const GC_RemarkInfoImp::SData& sdata );
GC_RemarkInfoImp::SData	ToData( const transMsg::GC_RemarkInfo& message );

transMsg::GC_ShapeInfo	ToMessage( const GC_ShapeInfoImp::SData& sdata );
GC_ShapeInfoImp::SData	ToData( const transMsg::GC_ShapeInfo& message );

transMsg::GC_SkinInfo	ToMessage( const GC_SkinInfoImp::SData& sdata );
GC_SkinInfoImp::SData	ToData( const transMsg::GC_SkinInfo& message );

transMsg::GC_TableInfo	ToMessage( const GC_TableInfoImp::SData& sdata );
GC_TableInfoImp::SData	ToData( const transMsg::GC_TableInfo& message );

transMsg::GC_TablePartInfo	ToMessage( const GC_TablePartInfoImp::SData& sdata );
GC_TablePartInfoImp::SData	ToData( const transMsg::GC_TablePartInfo& message );

transMsg::GC_TableSideInfo	ToMessage( const GC_TableSideInfoImp::SData& sdata );
GC_TableSideInfoImp::SData	ToData( const transMsg::GC_TableSideInfo& message );

transMsg::GC_WallDecorInfo	ToMessage( const GC_WallDecorInfoImp::SData& sdata );
GC_WallDecorInfoImp::SData	ToData( const transMsg::GC_WallDecorInfo& message );

transMsg::GC_WallInfo	ToMessage( const GC_WallInfoImp::SData& sdata );
GC_WallInfoImp::SData	ToData( const transMsg::GC_WallInfo& message );

void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabBoardGapInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabBoardInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabBoardSealInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorBoardGapInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorBoardInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorBoardSealInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorHWFInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorHandleInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorRegionInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorSlideInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorSystemInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFHWFInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFHoleInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFPartInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFPartSealInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorBoardInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorBoardUnitInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorBoardUnitSealInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorLineInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DesignPlanInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_FittingInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_HWFInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_MarkInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_MatrixInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_OrderAddedInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_OrderDataInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PackInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PointInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintElementInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintGroupInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintTableInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintTableRowColInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintTableRowInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_ProductInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_RemarkInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_ShapeInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_SkinInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_TableInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_TablePartInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_TableSideInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_WallDecorInfo& toAdd);
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_WallInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabBoardGapInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabBoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabBoardInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabBoardSealInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorBoardGapInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorBoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorBoardInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorBoardSealInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorHWFInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorHWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorHandleInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorHandleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorRegionInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorRegionInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorSlideInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorSlideInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorSystemInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorSystemInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFHWFInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFHWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFHoleInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFHoleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFPartInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFPartInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFPartSealInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFPartSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorBoardInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorBoardUnitInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorBoardUnitInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorBoardUnitSealInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorBoardUnitSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorLineInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorLineInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DesignPlanInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DesignPlanInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_FittingInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_FittingInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_HWFInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_HWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_MarkInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_MarkInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_MatrixInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_MatrixInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_OrderAddedInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_OrderAddedInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_OrderDataInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_OrderDataInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PackInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PackInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PointInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PointInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintElementInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintElementInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintGroupInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintGroupInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintTableInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintTableInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintTableRowColInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintTableRowColInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintTableRowInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintTableRowInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_ProductInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_ProductInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_RemarkInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_RemarkInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_ShapeInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_ShapeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_SkinInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_SkinInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_TableInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_TableInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_TablePartInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_TablePartInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_TableSideInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_TableSideInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_WallDecorInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_WallDecorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::GC_WallInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_WallInfoImp& tableObj);

}
