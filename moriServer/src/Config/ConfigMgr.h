#pragma once

#include "Utils/StrDef.h"
#include "Utils/Pimp.h"
#include "Utils/PrivateCreator.h"
#include "Utils/Type/PathType.h"

#include <vector>


class ConfigMgr
{
	DEFINE_PIMP
	DEFINE_PRIVATE_CREATORCLASS

public:

	typedef	std::vector<WStringType>	XmlVals;

public:

	static	ConfigMgr&	GetInstance();

	static	bool		Init(PathType pt);

	static	void		UnInit();

			ConfigMgr(PRIVATE_CREATORCLASS_NAME);

			~ConfigMgr();

public:

			XmlVals		GetConfigs(AStringType str);

			WStringType	GetConfig(AStringType str);
};