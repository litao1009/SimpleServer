#ifndef DecomposeInfo_h__
#define DecomposeInfo_h__

#pragma once

#include "Utils/IntDef.h"
#include "Utils/StrDef.h"
#include "DecomposeInfoFwd.h"

#include <vector>
#include <map>
#include <memory>

class	SNewInfo
{
public:

	SNewInfo(int64_t newID, AStringType name="", AStringType code=""):
		NewID_(newID),Name_(name),Code_(code) {}

	int64_t		NewID_;
	AStringType	Name_;
	AStringType	Code_;
};

class	SCabinetInfo : public SNewInfo
{
public:

	SCabinetInfo(int64_t newID, int32_t footID, int32_t footCount, AStringType name="", AStringType code=""):
		SNewInfo(newID, name, code),FootID_(footID),FootCount_(footCount) {}

	int32_t		FootID_;
	int32_t		FootCount_;
};

class	SFittingRuleInfo
{
public:

	SFittingRuleInfo(int64_t pntID, int32_t rTypeID, int32_t ownID, int64_t verCode):ParentID_(pntID),RTypeID_(rTypeID),OwnID_(ownID),VerCode_(verCode) {}

	int64_t	ParentID_;
	int32_t RTypeID_,OwnID_;
	int64_t VerCode_;
};

class	SPackageInfo
{
public:
	SPackageInfo(int64_t newID, int32_t fittingPackID)
	{
		NewID_ = newID;
		FittingPackID_ = fittingPackID;
	}

	int64_t	NewID_;
	int32_t	FittingPackID_;
};

typedef	std::map<int64_t,SNewInfo>	InfoMap;

class	SDecomposeInfo
{
public:

	SDecomposeInfo()
	{
		Square_ = 0;
	}

	std::map<int64_t,SCabinetInfo>		Cabinet_;
	InfoMap								CabBoard_;

	InfoMap								CabDoorSys_;
	InfoMap								CabDoor_;
	InfoMap								CabDoorBoard_;

	InfoMap								DecorBoard_;
	InfoMap								DecorBoardUnitBoard_;

	InfoMap								DecorBoardUnitDoorUnit_;
	InfoMap								DecorBoardUnitDoorBoard_;

	InfoMap								FNF_;
	InfoMap								CabFNFPart_;

	InfoMap								Table_;
	InfoMap								TablePart_;

	std::vector<SFittingRuleInfo>		FittingRuleInfo_;
	std::vector<SPackageInfo>			PackageInfo_;

	double								Square_;
};
#endif // DecomposeInfo_h__