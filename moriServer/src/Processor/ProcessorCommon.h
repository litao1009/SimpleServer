#ifndef ProcessorCommon_h__
#define ProcessorCommon_h__

#pragma once
#pragma warning(disable:4819)

#include "MsgCallBack/CMsgCallBack.h"

#include "DataBase/DataBase.h"

#include "Utils/intDef.h"
#include "Utils/StrDef.h"
#include "Utils/NameSpace/nsFileSystem.h"

#include "DBValue.h"

namespace autoDB
{
	class	GL_UserInfo;
}

class	ProcessorCommon
{
public:

	static	AStringType								GenerateFileName(const AStringType& pathName, const AStringType& idCode);

	static	void									RemoveFiles(const mori::RecvFileList& files);

	static	void									RemoveFiles(const mori::FileList& files);

	static	void									RemoveFile(const mori::FilePath& file);
};





using namespace autoDB;

#endif // ProcessorCommon_h__