#ifndef DecomposeFitting_h__
#define DecomposeFitting_h__
 
#pragma once
 
#include "DecomposeInfoFwd.h"
#include "DataBase/DataBase.h"
#include "DataBase/msg-GL.h"
 
class	DecomposeFitting
{
public:

	static	void	Decompose( soci::session& sql, soci::session& sqlInsert, SDecomposeInfoSPtr infoPtr, const autoDB::GL_OrderInfo_Data& statusInfo);
};
#endif // DecomposeFitting_h__