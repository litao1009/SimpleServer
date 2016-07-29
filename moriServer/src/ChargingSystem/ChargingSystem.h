#pragma once

#include "Utils/intDef.h"

class	ChargingSysMgr
{
public:

	static	bool	VerifyShopCommit(int32_t factoryID, int32_t shopID, int32_t userID, int64_t orderID);

	static	bool	VerifyFactoryDecompose(int32_t factoryID, int64_t orderID);
};