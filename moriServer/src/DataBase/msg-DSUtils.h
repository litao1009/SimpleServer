#pragma once

#include "msg-DS.h"
#include "transMsg/msg-DS.pb.h"

namespace autoDB
{
transMsg::DS_CabBoardGapInfo	ToMessage( const DS_CabBoardGapInfoImp::SData& sdata );
DS_CabBoardGapInfoImp::SData	ToData( const transMsg::DS_CabBoardGapInfo& message );

transMsg::DS_CabBoardInfo	ToMessage( const DS_CabBoardInfoImp::SData& sdata );
DS_CabBoardInfoImp::SData	ToData( const transMsg::DS_CabBoardInfo& message );

transMsg::DS_CabBoardSealInfo	ToMessage( const DS_CabBoardSealInfoImp::SData& sdata );
DS_CabBoardSealInfoImp::SData	ToData( const transMsg::DS_CabBoardSealInfo& message );

transMsg::DS_CabDoorBoardGapInfo	ToMessage( const DS_CabDoorBoardGapInfoImp::SData& sdata );
DS_CabDoorBoardGapInfoImp::SData	ToData( const transMsg::DS_CabDoorBoardGapInfo& message );

transMsg::DS_CabDoorBoardInfo	ToMessage( const DS_CabDoorBoardInfoImp::SData& sdata );
DS_CabDoorBoardInfoImp::SData	ToData( const transMsg::DS_CabDoorBoardInfo& message );

transMsg::DS_CabDoorBoardSealInfo	ToMessage( const DS_CabDoorBoardSealInfoImp::SData& sdata );
DS_CabDoorBoardSealInfoImp::SData	ToData( const transMsg::DS_CabDoorBoardSealInfo& message );

transMsg::DS_CabDoorHWFInfo	ToMessage( const DS_CabDoorHWFInfoImp::SData& sdata );
DS_CabDoorHWFInfoImp::SData	ToData( const transMsg::DS_CabDoorHWFInfo& message );

transMsg::DS_CabDoorHandleInfo	ToMessage( const DS_CabDoorHandleInfoImp::SData& sdata );
DS_CabDoorHandleInfoImp::SData	ToData( const transMsg::DS_CabDoorHandleInfo& message );

transMsg::DS_CabDoorInfo	ToMessage( const DS_CabDoorInfoImp::SData& sdata );
DS_CabDoorInfoImp::SData	ToData( const transMsg::DS_CabDoorInfo& message );

transMsg::DS_CabDoorRegionInfo	ToMessage( const DS_CabDoorRegionInfoImp::SData& sdata );
DS_CabDoorRegionInfoImp::SData	ToData( const transMsg::DS_CabDoorRegionInfo& message );

transMsg::DS_CabDoorSlideInfo	ToMessage( const DS_CabDoorSlideInfoImp::SData& sdata );
DS_CabDoorSlideInfoImp::SData	ToData( const transMsg::DS_CabDoorSlideInfo& message );

transMsg::DS_CabDoorSystemInfo	ToMessage( const DS_CabDoorSystemInfoImp::SData& sdata );
DS_CabDoorSystemInfoImp::SData	ToData( const transMsg::DS_CabDoorSystemInfo& message );

transMsg::DS_CabFNFHWFInfo	ToMessage( const DS_CabFNFHWFInfoImp::SData& sdata );
DS_CabFNFHWFInfoImp::SData	ToData( const transMsg::DS_CabFNFHWFInfo& message );

transMsg::DS_CabFNFHoleInfo	ToMessage( const DS_CabFNFHoleInfoImp::SData& sdata );
DS_CabFNFHoleInfoImp::SData	ToData( const transMsg::DS_CabFNFHoleInfo& message );

transMsg::DS_CabFNFInfo	ToMessage( const DS_CabFNFInfoImp::SData& sdata );
DS_CabFNFInfoImp::SData	ToData( const transMsg::DS_CabFNFInfo& message );

transMsg::DS_CabFNFPartInfo	ToMessage( const DS_CabFNFPartInfoImp::SData& sdata );
DS_CabFNFPartInfoImp::SData	ToData( const transMsg::DS_CabFNFPartInfo& message );

transMsg::DS_CabFNFPartSealInfo	ToMessage( const DS_CabFNFPartSealInfoImp::SData& sdata );
DS_CabFNFPartSealInfoImp::SData	ToData( const transMsg::DS_CabFNFPartSealInfo& message );

transMsg::DS_CabInfo	ToMessage( const DS_CabInfoImp::SData& sdata );
DS_CabInfoImp::SData	ToData( const transMsg::DS_CabInfo& message );

transMsg::DS_DecorBoardInfo	ToMessage( const DS_DecorBoardInfoImp::SData& sdata );
DS_DecorBoardInfoImp::SData	ToData( const transMsg::DS_DecorBoardInfo& message );

transMsg::DS_DecorBoardUnitInfo	ToMessage( const DS_DecorBoardUnitInfoImp::SData& sdata );
DS_DecorBoardUnitInfoImp::SData	ToData( const transMsg::DS_DecorBoardUnitInfo& message );

transMsg::DS_DecorBoardUnitSealInfo	ToMessage( const DS_DecorBoardUnitSealInfoImp::SData& sdata );
DS_DecorBoardUnitSealInfoImp::SData	ToData( const transMsg::DS_DecorBoardUnitSealInfo& message );

transMsg::DS_DecorInfo	ToMessage( const DS_DecorInfoImp::SData& sdata );
DS_DecorInfoImp::SData	ToData( const transMsg::DS_DecorInfo& message );

transMsg::DS_DecorLineInfo	ToMessage( const DS_DecorLineInfoImp::SData& sdata );
DS_DecorLineInfoImp::SData	ToData( const transMsg::DS_DecorLineInfo& message );

transMsg::DS_DesignPlanInfo	ToMessage( const DS_DesignPlanInfoImp::SData& sdata );
DS_DesignPlanInfoImp::SData	ToData( const transMsg::DS_DesignPlanInfo& message );

transMsg::DS_FittingInfo	ToMessage( const DS_FittingInfoImp::SData& sdata );
DS_FittingInfoImp::SData	ToData( const transMsg::DS_FittingInfo& message );

transMsg::DS_HWFInfo	ToMessage( const DS_HWFInfoImp::SData& sdata );
DS_HWFInfoImp::SData	ToData( const transMsg::DS_HWFInfo& message );

transMsg::DS_MarkInfo	ToMessage( const DS_MarkInfoImp::SData& sdata );
DS_MarkInfoImp::SData	ToData( const transMsg::DS_MarkInfo& message );

transMsg::DS_MatrixInfo	ToMessage( const DS_MatrixInfoImp::SData& sdata );
DS_MatrixInfoImp::SData	ToData( const transMsg::DS_MatrixInfo& message );

transMsg::DS_OrderAddedInfo	ToMessage( const DS_OrderAddedInfoImp::SData& sdata );
DS_OrderAddedInfoImp::SData	ToData( const transMsg::DS_OrderAddedInfo& message );

transMsg::DS_OrderDataInfo	ToMessage( const DS_OrderDataInfoImp::SData& sdata );
DS_OrderDataInfoImp::SData	ToData( const transMsg::DS_OrderDataInfo& message );

transMsg::DS_PackInfo	ToMessage( const DS_PackInfoImp::SData& sdata );
DS_PackInfoImp::SData	ToData( const transMsg::DS_PackInfo& message );

transMsg::DS_PointInfo	ToMessage( const DS_PointInfoImp::SData& sdata );
DS_PointInfoImp::SData	ToData( const transMsg::DS_PointInfo& message );

transMsg::DS_PrintElementInfo	ToMessage( const DS_PrintElementInfoImp::SData& sdata );
DS_PrintElementInfoImp::SData	ToData( const transMsg::DS_PrintElementInfo& message );

transMsg::DS_PrintGroupInfo	ToMessage( const DS_PrintGroupInfoImp::SData& sdata );
DS_PrintGroupInfoImp::SData	ToData( const transMsg::DS_PrintGroupInfo& message );

transMsg::DS_PrintInfo	ToMessage( const DS_PrintInfoImp::SData& sdata );
DS_PrintInfoImp::SData	ToData( const transMsg::DS_PrintInfo& message );

transMsg::DS_PrintTableInfo	ToMessage( const DS_PrintTableInfoImp::SData& sdata );
DS_PrintTableInfoImp::SData	ToData( const transMsg::DS_PrintTableInfo& message );

transMsg::DS_PrintTableRowColInfo	ToMessage( const DS_PrintTableRowColInfoImp::SData& sdata );
DS_PrintTableRowColInfoImp::SData	ToData( const transMsg::DS_PrintTableRowColInfo& message );

transMsg::DS_PrintTableRowInfo	ToMessage( const DS_PrintTableRowInfoImp::SData& sdata );
DS_PrintTableRowInfoImp::SData	ToData( const transMsg::DS_PrintTableRowInfo& message );

transMsg::DS_ProductInfo	ToMessage( const DS_ProductInfoImp::SData& sdata );
DS_ProductInfoImp::SData	ToData( const transMsg::DS_ProductInfo& message );

transMsg::DS_RemarkInfo	ToMessage( const DS_RemarkInfoImp::SData& sdata );
DS_RemarkInfoImp::SData	ToData( const transMsg::DS_RemarkInfo& message );

transMsg::DS_ShapeInfo	ToMessage( const DS_ShapeInfoImp::SData& sdata );
DS_ShapeInfoImp::SData	ToData( const transMsg::DS_ShapeInfo& message );

transMsg::DS_SkinInfo	ToMessage( const DS_SkinInfoImp::SData& sdata );
DS_SkinInfoImp::SData	ToData( const transMsg::DS_SkinInfo& message );

transMsg::DS_TableInfo	ToMessage( const DS_TableInfoImp::SData& sdata );
DS_TableInfoImp::SData	ToData( const transMsg::DS_TableInfo& message );

transMsg::DS_TablePartInfo	ToMessage( const DS_TablePartInfoImp::SData& sdata );
DS_TablePartInfoImp::SData	ToData( const transMsg::DS_TablePartInfo& message );

transMsg::DS_TableSideInfo	ToMessage( const DS_TableSideInfoImp::SData& sdata );
DS_TableSideInfoImp::SData	ToData( const transMsg::DS_TableSideInfo& message );

transMsg::DS_WallDecorInfo	ToMessage( const DS_WallDecorInfoImp::SData& sdata );
DS_WallDecorInfoImp::SData	ToData( const transMsg::DS_WallDecorInfo& message );

transMsg::DS_WallInfo	ToMessage( const DS_WallInfoImp::SData& sdata );
DS_WallInfoImp::SData	ToData( const transMsg::DS_WallInfo& message );

void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabBoardGapInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabBoardInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabBoardSealInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorBoardGapInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorBoardInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorBoardSealInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorHWFInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorHandleInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorRegionInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorSlideInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabDoorSystemInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabFNFHWFInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabFNFHoleInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabFNFInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabFNFPartInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabFNFPartSealInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_CabInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_DecorBoardInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_DecorBoardUnitInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_DecorBoardUnitSealInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_DecorInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_DecorLineInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_DesignPlanInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_FittingInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_HWFInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_MarkInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_MatrixInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_OrderAddedInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_OrderDataInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_PackInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_PointInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_PrintElementInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_PrintGroupInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_PrintInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_PrintTableInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_PrintTableRowColInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_PrintTableRowInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_ProductInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_RemarkInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_ShapeInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_SkinInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_TableInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_TablePartInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_TableSideInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_WallDecorInfo& toAdd);
void	AddToPack(transMsg::DS_Table& package, transMsg::DS_WallInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabBoardGapInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabBoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabBoardInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabBoardSealInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorBoardGapInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorBoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorBoardInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorBoardSealInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorHWFInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorHWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorHandleInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorHandleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorRegionInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorRegionInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorSlideInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorSlideInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabDoorSystemInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabDoorSystemInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabFNFHWFInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabFNFHWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabFNFHoleInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabFNFHoleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabFNFInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabFNFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabFNFPartInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabFNFPartInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabFNFPartSealInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabFNFPartSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_CabInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_CabInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_DecorBoardInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_DecorBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_DecorBoardUnitInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_DecorBoardUnitInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_DecorBoardUnitSealInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_DecorBoardUnitSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_DecorInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_DecorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_DecorLineInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_DecorLineInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_DesignPlanInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_DesignPlanInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_FittingInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_FittingInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_HWFInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_HWFInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_MarkInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_MarkInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_MatrixInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_MatrixInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_OrderAddedInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_OrderAddedInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_OrderDataInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_OrderDataInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_PackInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_PackInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_PointInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_PointInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_PrintElementInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_PrintElementInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_PrintGroupInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_PrintGroupInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_PrintInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_PrintInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_PrintTableInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_PrintTableInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_PrintTableRowColInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_PrintTableRowColInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_PrintTableRowInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_PrintTableRowInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_ProductInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_ProductInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_RemarkInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_RemarkInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_ShapeInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_ShapeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_SkinInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_SkinInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_TableInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_TableInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_TablePartInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_TablePartInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_TableSideInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_TableSideInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_WallDecorInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_WallDecorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::DS_WallInfo >&	ExtractFromPack(transMsg::DS_Table& package, autoDB::DS_WallInfoImp& tableObj);

}
