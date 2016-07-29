#pragma once

#include "msg-JK.h"
#include "transMsg/msg-JK.pb.h"

namespace autoDB
{
transMsg::JK_CabBoardMatInfo	ToMessage( const JK_CabBoardMatInfoImp::SData& sdata );
JK_CabBoardMatInfoImp::SData	ToData( const transMsg::JK_CabBoardMatInfo& message );

transMsg::JK_CabBoardMatSkinInfo	ToMessage( const JK_CabBoardMatSkinInfoImp::SData& sdata );
JK_CabBoardMatSkinInfoImp::SData	ToData( const transMsg::JK_CabBoardMatSkinInfo& message );

transMsg::JK_CabDesignBoardSealEdgeInfo	ToMessage( const JK_CabDesignBoardSealEdgeInfoImp::SData& sdata );
JK_CabDesignBoardSealEdgeInfoImp::SData	ToData( const transMsg::JK_CabDesignBoardSealEdgeInfo& message );

transMsg::JK_CabDesignBoardSealInfo	ToMessage( const JK_CabDesignBoardSealInfoImp::SData& sdata );
JK_CabDesignBoardSealInfoImp::SData	ToData( const transMsg::JK_CabDesignBoardSealInfo& message );

transMsg::JK_CabDesignDoorRegionHandleInfo	ToMessage( const JK_CabDesignDoorRegionHandleInfoImp::SData& sdata );
JK_CabDesignDoorRegionHandleInfoImp::SData	ToData( const transMsg::JK_CabDesignDoorRegionHandleInfo& message );

transMsg::JK_CabDesignDoorRegionInfo	ToMessage( const JK_CabDesignDoorRegionInfoImp::SData& sdata );
JK_CabDesignDoorRegionInfoImp::SData	ToData( const transMsg::JK_CabDesignDoorRegionInfo& message );

transMsg::JK_CabDesignDoorSystemInfo	ToMessage( const JK_CabDesignDoorSystemInfoImp::SData& sdata );
JK_CabDesignDoorSystemInfoImp::SData	ToData( const transMsg::JK_CabDesignDoorSystemInfo& message );

transMsg::JK_CabDesignFNFittingInfo	ToMessage( const JK_CabDesignFNFittingInfoImp::SData& sdata );
JK_CabDesignFNFittingInfoImp::SData	ToData( const transMsg::JK_CabDesignFNFittingInfo& message );

transMsg::JK_CabDesignFNFittingMapInfo	ToMessage( const JK_CabDesignFNFittingMapInfoImp::SData& sdata );
JK_CabDesignFNFittingMapInfoImp::SData	ToData( const transMsg::JK_CabDesignFNFittingMapInfo& message );

transMsg::JK_CabDesignFootInfo	ToMessage( const JK_CabDesignFootInfoImp::SData& sdata );
JK_CabDesignFootInfoImp::SData	ToData( const transMsg::JK_CabDesignFootInfo& message );

transMsg::JK_CabDesignInfo	ToMessage( const JK_CabDesignInfoImp::SData& sdata );
JK_CabDesignInfoImp::SData	ToData( const transMsg::JK_CabDesignInfo& message );

transMsg::JK_CabDesignMatInfo	ToMessage( const JK_CabDesignMatInfoImp::SData& sdata );
JK_CabDesignMatInfoImp::SData	ToData( const transMsg::JK_CabDesignMatInfo& message );

transMsg::JK_CabMatPlanInfo	ToMessage( const JK_CabMatPlanInfoImp::SData& sdata );
JK_CabMatPlanInfoImp::SData	ToData( const transMsg::JK_CabMatPlanInfo& message );

transMsg::JK_CabStructBoardGapInfo	ToMessage( const JK_CabStructBoardGapInfoImp::SData& sdata );
JK_CabStructBoardGapInfoImp::SData	ToData( const transMsg::JK_CabStructBoardGapInfo& message );

transMsg::JK_CabStructBoardInfo	ToMessage( const JK_CabStructBoardInfoImp::SData& sdata );
JK_CabStructBoardInfoImp::SData	ToData( const transMsg::JK_CabStructBoardInfo& message );

transMsg::JK_CabStructBoardSealInfo	ToMessage( const JK_CabStructBoardSealInfoImp::SData& sdata );
JK_CabStructBoardSealInfoImp::SData	ToData( const transMsg::JK_CabStructBoardSealInfo& message );

transMsg::JK_CabStructGapInfo	ToMessage( const JK_CabStructGapInfoImp::SData& sdata );
JK_CabStructGapInfoImp::SData	ToData( const transMsg::JK_CabStructGapInfo& message );

transMsg::JK_CabStructInfo	ToMessage( const JK_CabStructInfoImp::SData& sdata );
JK_CabStructInfoImp::SData	ToData( const transMsg::JK_CabStructInfo& message );

transMsg::JK_CabStructMatPlanMapInfo	ToMessage( const JK_CabStructMatPlanMapInfoImp::SData& sdata );
JK_CabStructMatPlanMapInfoImp::SData	ToData( const transMsg::JK_CabStructMatPlanMapInfo& message );

transMsg::JK_CabinetSizeBoardInfo	ToMessage( const JK_CabinetSizeBoardInfoImp::SData& sdata );
JK_CabinetSizeBoardInfoImp::SData	ToData( const transMsg::JK_CabinetSizeBoardInfo& message );

transMsg::JK_CabinetSizeInfo	ToMessage( const JK_CabinetSizeInfoImp::SData& sdata );
JK_CabinetSizeInfoImp::SData	ToData( const transMsg::JK_CabinetSizeInfo& message );

transMsg::JK_CabinetSizeStructBoardInfo	ToMessage( const JK_CabinetSizeStructBoardInfoImp::SData& sdata );
JK_CabinetSizeStructBoardInfoImp::SData	ToData( const transMsg::JK_CabinetSizeStructBoardInfo& message );

transMsg::JK_DecorBoardFrameMapInfo	ToMessage( const JK_DecorBoardFrameMapInfoImp::SData& sdata );
JK_DecorBoardFrameMapInfoImp::SData	ToData( const transMsg::JK_DecorBoardFrameMapInfo& message );

transMsg::JK_DecorBoardInfo	ToMessage( const JK_DecorBoardInfoImp::SData& sdata );
JK_DecorBoardInfoImp::SData	ToData( const transMsg::JK_DecorBoardInfo& message );

transMsg::JK_DecorBoardMatInfo	ToMessage( const JK_DecorBoardMatInfoImp::SData& sdata );
JK_DecorBoardMatInfoImp::SData	ToData( const transMsg::JK_DecorBoardMatInfo& message );

transMsg::JK_DecorBoardUnitInfo	ToMessage( const JK_DecorBoardUnitInfoImp::SData& sdata );
JK_DecorBoardUnitInfoImp::SData	ToData( const transMsg::JK_DecorBoardUnitInfo& message );

transMsg::JK_DecorBoardUnitMatInfo	ToMessage( const JK_DecorBoardUnitMatInfoImp::SData& sdata );
JK_DecorBoardUnitMatInfoImp::SData	ToData( const transMsg::JK_DecorBoardUnitMatInfo& message );

transMsg::JK_DecorBoardUnitSealInfo	ToMessage( const JK_DecorBoardUnitSealInfoImp::SData& sdata );
JK_DecorBoardUnitSealInfoImp::SData	ToData( const transMsg::JK_DecorBoardUnitSealInfo& message );

transMsg::JK_DecorInfo	ToMessage( const JK_DecorInfoImp::SData& sdata );
JK_DecorInfoImp::SData	ToData( const transMsg::JK_DecorInfo& message );

transMsg::JK_DecorLineInfo	ToMessage( const JK_DecorLineInfoImp::SData& sdata );
JK_DecorLineInfoImp::SData	ToData( const transMsg::JK_DecorLineInfo& message );

transMsg::JK_DecorLineMatInfo	ToMessage( const JK_DecorLineMatInfoImp::SData& sdata );
JK_DecorLineMatInfoImp::SData	ToData( const transMsg::JK_DecorLineMatInfo& message );

transMsg::JK_DecorUnitHWFittingMapInfo	ToMessage( const JK_DecorUnitHWFittingMapInfoImp::SData& sdata );
JK_DecorUnitHWFittingMapInfoImp::SData	ToData( const transMsg::JK_DecorUnitHWFittingMapInfo& message );

transMsg::JK_DoorBoardGapInfo	ToMessage( const JK_DoorBoardGapInfoImp::SData& sdata );
JK_DoorBoardGapInfoImp::SData	ToData( const transMsg::JK_DoorBoardGapInfo& message );

transMsg::JK_DoorBoardInfo	ToMessage( const JK_DoorBoardInfoImp::SData& sdata );
JK_DoorBoardInfoImp::SData	ToData( const transMsg::JK_DoorBoardInfo& message );

transMsg::JK_DoorBoardMatMapInfo	ToMessage( const JK_DoorBoardMatMapInfoImp::SData& sdata );
JK_DoorBoardMatMapInfoImp::SData	ToData( const transMsg::JK_DoorBoardMatMapInfo& message );

transMsg::JK_DoorBoardSealInfo	ToMessage( const JK_DoorBoardSealInfoImp::SData& sdata );
JK_DoorBoardSealInfoImp::SData	ToData( const transMsg::JK_DoorBoardSealInfo& message );

transMsg::JK_DoorInfo	ToMessage( const JK_DoorInfoImp::SData& sdata );
JK_DoorInfoImp::SData	ToData( const transMsg::JK_DoorInfo& message );

transMsg::JK_DoorMatMapInfo	ToMessage( const JK_DoorMatMapInfoImp::SData& sdata );
JK_DoorMatMapInfoImp::SData	ToData( const transMsg::JK_DoorMatMapInfo& message );

transMsg::JK_DoorMatPlanHandleMapInfo	ToMessage( const JK_DoorMatPlanHandleMapInfoImp::SData& sdata );
JK_DoorMatPlanHandleMapInfoImp::SData	ToData( const transMsg::JK_DoorMatPlanHandleMapInfo& message );

transMsg::JK_DoorMatPlanInfo	ToMessage( const JK_DoorMatPlanInfoImp::SData& sdata );
JK_DoorMatPlanInfoImp::SData	ToData( const transMsg::JK_DoorMatPlanInfo& message );

transMsg::JK_DoorRegionHWFittingMapInfo	ToMessage( const JK_DoorRegionHWFittingMapInfoImp::SData& sdata );
JK_DoorRegionHWFittingMapInfoImp::SData	ToData( const transMsg::JK_DoorRegionHWFittingMapInfo& message );

transMsg::JK_DoorSystemInfo	ToMessage( const JK_DoorSystemInfoImp::SData& sdata );
JK_DoorSystemInfoImp::SData	ToData( const transMsg::JK_DoorSystemInfo& message );

transMsg::JK_DoorSystemMatMapInfo	ToMessage( const JK_DoorSystemMatMapInfoImp::SData& sdata );
JK_DoorSystemMatMapInfoImp::SData	ToData( const transMsg::JK_DoorSystemMatMapInfo& message );

transMsg::JK_DoorSystemRegionDoorMapInfo	ToMessage( const JK_DoorSystemRegionDoorMapInfoImp::SData& sdata );
JK_DoorSystemRegionDoorMapInfoImp::SData	ToData( const transMsg::JK_DoorSystemRegionDoorMapInfo& message );

transMsg::JK_DoorSystemRegionInfo	ToMessage( const JK_DoorSystemRegionInfoImp::SData& sdata );
JK_DoorSystemRegionInfoImp::SData	ToData( const transMsg::JK_DoorSystemRegionInfo& message );

transMsg::JK_DoorSystemRegionSlideMapInfo	ToMessage( const JK_DoorSystemRegionSlideMapInfoImp::SData& sdata );
JK_DoorSystemRegionSlideMapInfoImp::SData	ToData( const transMsg::JK_DoorSystemRegionSlideMapInfo& message );

transMsg::JK_DoorSystemRegionSlidePositionSizeInfo	ToMessage( const JK_DoorSystemRegionSlidePositionSizeInfoImp::SData& sdata );
JK_DoorSystemRegionSlidePositionSizeInfoImp::SData	ToData( const transMsg::JK_DoorSystemRegionSlidePositionSizeInfo& message );

transMsg::JK_FNFittingInfo	ToMessage( const JK_FNFittingInfoImp::SData& sdata );
JK_FNFittingInfoImp::SData	ToData( const transMsg::JK_FNFittingInfo& message );

transMsg::JK_FNFittingMatInfo	ToMessage( const JK_FNFittingMatInfoImp::SData& sdata );
JK_FNFittingMatInfoImp::SData	ToData( const transMsg::JK_FNFittingMatInfo& message );

transMsg::JK_FNFittingPartInfo	ToMessage( const JK_FNFittingPartInfoImp::SData& sdata );
JK_FNFittingPartInfoImp::SData	ToData( const transMsg::JK_FNFittingPartInfo& message );

transMsg::JK_FNFittingPartMatInfo	ToMessage( const JK_FNFittingPartMatInfoImp::SData& sdata );
JK_FNFittingPartMatInfoImp::SData	ToData( const transMsg::JK_FNFittingPartMatInfo& message );

transMsg::JK_FNFittingPartSealInfo	ToMessage( const JK_FNFittingPartSealInfoImp::SData& sdata );
JK_FNFittingPartSealInfoImp::SData	ToData( const transMsg::JK_FNFittingPartSealInfo& message );

transMsg::JK_FittingInfo	ToMessage( const JK_FittingInfoImp::SData& sdata );
JK_FittingInfoImp::SData	ToData( const transMsg::JK_FittingInfo& message );

transMsg::JK_FittingRuleInfo	ToMessage( const JK_FittingRuleInfoImp::SData& sdata );
JK_FittingRuleInfoImp::SData	ToData( const transMsg::JK_FittingRuleInfo& message );

transMsg::JK_FormulaConstInfo	ToMessage( const JK_FormulaConstInfoImp::SData& sdata );
JK_FormulaConstInfoImp::SData	ToData( const transMsg::JK_FormulaConstInfo& message );

transMsg::JK_GroupInfo	ToMessage( const JK_GroupInfoImp::SData& sdata );
JK_GroupInfoImp::SData	ToData( const transMsg::JK_GroupInfo& message );

transMsg::JK_HWFittingInfo	ToMessage( const JK_HWFittingInfoImp::SData& sdata );
JK_HWFittingInfoImp::SData	ToData( const transMsg::JK_HWFittingInfo& message );

transMsg::JK_HoleRuleInfo	ToMessage( const JK_HoleRuleInfoImp::SData& sdata );
JK_HoleRuleInfoImp::SData	ToData( const transMsg::JK_HoleRuleInfo& message );

transMsg::JK_MaterialInfo	ToMessage( const JK_MaterialInfoImp::SData& sdata );
JK_MaterialInfoImp::SData	ToData( const transMsg::JK_MaterialInfo& message );

transMsg::JK_MaterialSealRuleMapInfo	ToMessage( const JK_MaterialSealRuleMapInfoImp::SData& sdata );
JK_MaterialSealRuleMapInfoImp::SData	ToData( const transMsg::JK_MaterialSealRuleMapInfo& message );

transMsg::JK_ModelInfo	ToMessage( const JK_ModelInfoImp::SData& sdata );
JK_ModelInfoImp::SData	ToData( const transMsg::JK_ModelInfo& message );

transMsg::JK_NumberRuleInfo	ToMessage( const JK_NumberRuleInfoImp::SData& sdata );
JK_NumberRuleInfoImp::SData	ToData( const transMsg::JK_NumberRuleInfo& message );

transMsg::JK_PackageInfo	ToMessage( const JK_PackageInfoImp::SData& sdata );
JK_PackageInfoImp::SData	ToData( const transMsg::JK_PackageInfo& message );

transMsg::JK_PackageMapInfo	ToMessage( const JK_PackageMapInfoImp::SData& sdata );
JK_PackageMapInfoImp::SData	ToData( const transMsg::JK_PackageMapInfo& message );

transMsg::JK_ProductInfo	ToMessage( const JK_ProductInfoImp::SData& sdata );
JK_ProductInfoImp::SData	ToData( const transMsg::JK_ProductInfo& message );

transMsg::JK_ProductSeriesInfo	ToMessage( const JK_ProductSeriesInfoImp::SData& sdata );
JK_ProductSeriesInfoImp::SData	ToData( const transMsg::JK_ProductSeriesInfo& message );

transMsg::JK_ProductSeriesValidInfo	ToMessage( const JK_ProductSeriesValidInfoImp::SData& sdata );
JK_ProductSeriesValidInfoImp::SData	ToData( const transMsg::JK_ProductSeriesValidInfo& message );

transMsg::JK_ResourceInfo	ToMessage( const JK_ResourceInfoImp::SData& sdata );
JK_ResourceInfoImp::SData	ToData( const transMsg::JK_ResourceInfo& message );

transMsg::JK_SealRuleInfo	ToMessage( const JK_SealRuleInfoImp::SData& sdata );
JK_SealRuleInfoImp::SData	ToData( const transMsg::JK_SealRuleInfo& message );

transMsg::JK_SysConfigInfo	ToMessage( const JK_SysConfigInfoImp::SData& sdata );
JK_SysConfigInfoImp::SData	ToData( const transMsg::JK_SysConfigInfo& message );

transMsg::JK_SysRuleConfigInfo	ToMessage( const JK_SysRuleConfigInfoImp::SData& sdata );
JK_SysRuleConfigInfoImp::SData	ToData( const transMsg::JK_SysRuleConfigInfo& message );

transMsg::JK_SysRuleTypeInfo	ToMessage( const JK_SysRuleTypeInfoImp::SData& sdata );
JK_SysRuleTypeInfoImp::SData	ToData( const transMsg::JK_SysRuleTypeInfo& message );

transMsg::JK_TableTopSideInfo	ToMessage( const JK_TableTopSideInfoImp::SData& sdata );
JK_TableTopSideInfoImp::SData	ToData( const transMsg::JK_TableTopSideInfo& message );

void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabBoardMatInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabBoardMatSkinInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignBoardSealEdgeInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignBoardSealInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignDoorRegionHandleInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignDoorRegionInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignDoorSystemInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignFNFittingInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignFNFittingMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignFootInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignMatInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabMatPlanInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructBoardGapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructBoardInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructBoardSealInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructGapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructMatPlanMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabinetSizeBoardInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabinetSizeInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabinetSizeStructBoardInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardFrameMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardMatInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardUnitInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardUnitMatInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardUnitSealInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorLineInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorLineMatInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorUnitHWFittingMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorBoardGapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorBoardInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorBoardMatMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorBoardSealInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorMatMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorMatPlanHandleMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorMatPlanInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorRegionHWFittingMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemMatMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemRegionDoorMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemRegionInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemRegionSlideMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemRegionSlidePositionSizeInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingMatInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingPartInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingPartMatInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingPartSealInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FittingInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FittingRuleInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FormulaConstInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_GroupInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_HWFittingInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_HoleRuleInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_MaterialInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_MaterialSealRuleMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ModelInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_NumberRuleInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_PackageInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_PackageMapInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ProductInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ProductSeriesInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ProductSeriesValidInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ResourceInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_SealRuleInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_SysConfigInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_SysRuleConfigInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_SysRuleTypeInfo& toAdd);
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_TableTopSideInfo& toAdd);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabBoardMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabBoardMatInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabBoardMatSkinInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabBoardMatSkinInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignBoardSealEdgeInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignBoardSealEdgeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignBoardSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignDoorRegionHandleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignDoorRegionHandleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignDoorRegionInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignDoorRegionInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignDoorSystemInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignDoorSystemInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignFNFittingInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignFNFittingInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignFNFittingMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignFNFittingMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignFootInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignFootInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignMatInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabMatPlanInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabMatPlanInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructBoardGapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructBoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructBoardSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructGapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructMatPlanMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructMatPlanMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabinetSizeBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabinetSizeBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabinetSizeInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabinetSizeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabinetSizeStructBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabinetSizeStructBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardFrameMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardFrameMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardMatInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardUnitInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardUnitInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardUnitMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardUnitMatInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardUnitSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardUnitSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorLineInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorLineInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorLineMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorLineMatInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorUnitHWFittingMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorUnitHWFittingMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorBoardGapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorBoardGapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorBoardInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorBoardMatMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorBoardMatMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorBoardSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorBoardSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorMatMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorMatMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorMatPlanHandleMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorMatPlanHandleMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorMatPlanInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorMatPlanInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorRegionHWFittingMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorRegionHWFittingMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemMatMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemMatMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemRegionDoorMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemRegionDoorMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemRegionInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemRegionInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemRegionSlideMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemRegionSlideMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemRegionSlidePositionSizeInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemRegionSlidePositionSizeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingMatInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingPartInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingPartInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingPartMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingPartMatInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingPartSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingPartSealInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FittingInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FittingInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FittingRuleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FittingRuleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FormulaConstInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FormulaConstInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_GroupInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_GroupInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_HWFittingInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_HWFittingInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_HoleRuleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_HoleRuleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_MaterialInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_MaterialInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_MaterialSealRuleMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_MaterialSealRuleMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ModelInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ModelInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_NumberRuleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_NumberRuleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_PackageInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_PackageInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_PackageMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_PackageMapInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ProductInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ProductInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ProductSeriesInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ProductSeriesInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ProductSeriesValidInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ProductSeriesValidInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ResourceInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ResourceInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_SealRuleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_SealRuleInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_SysConfigInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_SysConfigInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_SysRuleConfigInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_SysRuleConfigInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_SysRuleTypeInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_SysRuleTypeInfoImp& tableObj);
::google::protobuf::RepeatedPtrField< ::transMsg::JK_TableTopSideInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_TableTopSideInfoImp& tableObj);

}
