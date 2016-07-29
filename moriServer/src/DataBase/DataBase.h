#ifndef DataBase_h__
#define DataBase_h__

#pragma once

#include "Utils/StrDef.h"
#include "Utils/Pimp.h"

#include "soci.h"
#include "AutoDB/Statement.h"
#include "AutoDB/Adaptor/SociAdaptor.h"

class	DataBase
{
	DEFINE_PIMP

	DataBase();

public:

	soci::session&			GetThreadSession();

	soci::session&			GetNameSession(CAStringType name);

public:

	static	DataBase&		GetInstance();

	static	bool			Init(const WStringType& connStatement);

	static	soci::session	CreateSession();

	static	soci::session	OpenSqlite(const AStringType& filePath, const AStringType& pwd);

	static	bool			ReKeySqliteFile(soci::session& sqlFile, const AStringType& newPwd);

	static	AStringType		GetSociErrorString(soci::soci_error& err);
};
#endif // DataBase_h__