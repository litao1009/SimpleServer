#ifndef DecomposeUtil_h__
#define DecomposeUtil_h__

#pragma once

#include "DataBase/msg-JD.h"
#include "DataBase/msg-JK.h"

#include "DecomposeInfo.h"

//********************************************************************************************************************
#define	DCP_ORDERINFO_TYPE							JD_OrderInfoImp,		GC_OrderDataInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_CABINET_TYPE							JD_ObjectsImp,			GC_CabInfoImp
	#define	DCP_CABINET_FNF_TYPE					JD_ObjectsImp,			GC_CabFNFInfoImp
	#define	DCP_CABBOARD_TYPE						JD_BoardInfoImp,		GC_CabBoardInfoImp
		#define	DCP_CABBOARD_SEAL_TYPE				JD_BoardSealInfoImp,	GC_CabBoardSealInfoImp
		#define	DCP_CABBOARD_GAP_TYPE				JD_BoardGapInfoImp,	GC_CabBoardGapInfoImp
	#define	DCP_CABFOOT_TYPE						JD_ObjectsImp,			JK_HWFittingInfoImp
	#define	DCP_CABDOOR_TYPE						JD_ObjectsImp,			GC_CabDoorSystemInfoImp
		#define	DCP_CABDOOR_REGIONFNF_TYPE			JD_ObjectsImp,			GC_CabDoorRegionInfoImp
		#define	DCP_CABDOOR_SLIDE_TYPE				JD_ObjectsImp,			GC_CabDoorSlideInfoImp
		#define	DCP_CABDOOR_UNIT_TYPE				JD_ObjectsImp,			GC_CabDoorInfoImp
			#define	DCP_CABDOOR_BOARD_TYPE			JD_BoardInfoImp,		GC_CabDoorBoardInfoImp
				#define	DCP_CABDOOR_BOARD_SEAL_TYPE	JD_BoardSealInfoImp,	GC_CabDoorBoardSealInfoImp
				#define	DCP_CABDOOR_BOARD_GAP_TYPE	JD_BoardGapInfoImp,	GC_CabDoorBoardGapInfoImp
		#define	DCP_CABDOOR_HANDLE_TYPE				JD_ObjectsImp,			GC_CabDoorHandleInfoImp
		#define	DCP_CABDOOR_HWF_TYPE				JD_ObjectsImp,			GC_CabDoorHWFInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_DECOR_BOARD_TYPE								JD_ObjectsImp,			GC_DecorBoardInfoImp

	#define	DCP_DECORBARDUINT_BOARD_TYPE					JD_BoardInfoImp,		GC_DecorBoardUnitInfoImp
		#define	DCP_DECORBARDUNIT_BOARD_SEAL_TYPE			JD_BoardSealInfoImp,	GC_DecorBoardUnitSealInfoImp

	#define	DCP_DECORBARDUNIT_DOOR_TYPE						JD_ObjectsImp,			GC_CabDoorInfoImp, 1
		#define	DCP_DECORBARDUNIT_DOORBOARD_TYPE			JD_BoardInfoImp,		GC_CabDoorBoardInfoImp, 1
			#define	DCP_DECORBARDUNIT_DOORBOARD_SEAL_TYPE	JD_BoardSealInfoImp,	GC_CabDoorBoardSealInfoImp, 1
			#define	DCP_DECORBARDUNIT_DOORBOARD_GAP_TYPE	JD_BoardGapInfoImp,	GC_CabDoorBoardGapInfoImp, 1
	#define	DCP_DECORBARD_DOOR_HANDLE_TYPE					JD_ObjectsImp,			GC_CabDoorHandleInfoImp, 1
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_DECOR_LINE_TYPE							JD_ObjectsImp,			GC_DecorLineInfoImp
#define	DCP_DECOR_LINE_SPECIAL_TYPE					JD_BoardInfoImp,		GC_DecorLineInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_ORDER_FITTINGINFO_TYPE						JD_ObjectsImp,			GC_FittingInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_ORDER_PACKINFO_TYPE							JD_ObjectsImp,			GC_PackInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_FITTINGINFO_TYPE							JD_ObjectsImp,			JK_FittingInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_HWFINFO_TYPE							JD_ObjectsImp,			GC_HWFInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_CABFNF_INFO_TYPE						JD_ObjectsImp,			GC_CabFNFInfoImp, 1
	#define	DCP_CABFNFPART_INFO_TOOBJECT_TYPE		JD_ObjectsImp,			GC_CabFNFPartInfoImp
	#define	DCP_CABFNFPART_INFO_TOBOARD_TYPE		JD_BoardInfoImp,		GC_CabFNFPartInfoImp
	#define	DCP_CABFNFHWF_INFO_TYPE					JD_ObjectsImp,			GC_CabFNFHWFInfoImp
		#define DCP_CABDOORBOARDSEAL_TYPE			JD_BoardSealInfoImp,	GC_CabFNFPartSealInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_PRODUCT_TYPE							JD_ObjectsImp,			GC_ProductInfoImp
//********************************************************************************************************************

//********************************************************************************************************************
#define	DCP_DECORROOM_TYPE							JD_ObjectsImp,			GC_DecorInfoImp
//********************************************************************************************************************


//********************************************************************************************************************
#define	DCP_TABLE_TYPE								JD_ObjectsImp,			GC_TableInfoImp
#define	DCP_TABLETOBOARD_TYPE						JD_BoardInfoImp,		GC_TableInfoImp
	#define	DCP_TABLEPART_TYPE						JD_ObjectsImp,			GC_TablePartInfoImp
	#define	DCP_TABLEPART_TOBOARD_TYPE				JD_BoardInfoImp,		GC_TablePartInfoImp
//********************************************************************************************************************


//********************************************************************************************************************
#define	DCP_WALLDECOR_TYPE							JD_ObjectsImp,			GC_WallDecorInfoImp
//********************************************************************************************************************
#endif // DecomposeUtil_h__