#include "ProcessorCommon.h"

#include "Utils/NameSpace/nsPosixtime.h"
#include "Utils/NameSpace/nsFileSystem.h"
#include "Utils/Type/PathType.h"
#include "Utils/Type/ErrCodeType.h"
#include "Verification/SafeIDMap.h"
#include "DataBase/msg-GL.h"

#include "TinyLog.h"

#include <atomic>

static std::atomic<uint64_t> uniqueIndex(0);


AStringType ProcessorCommon::GenerateFileName( const AStringType& pathName, const AStringType& idCode )
{
	auto now = nsPosixtime::microsec_clock::local_time();
	auto curTime = nsPosixtime::to_iso_string(now);

	PathType folder("Send");

	auto curIndex = uniqueIndex.fetch_add(1);

	folder /= pathName;
	if ( !nsFileSystem::exists(folder) )
	{
		nsFileSystem::create_directories(folder);
	}
	auto verifyName = idCode + "." + curTime + "." + std::to_string(curIndex);
	folder /= verifyName;

	return std::move(nsFileSystem::absolute(folder).string());
}

void ProcessorCommon::RemoveFiles( const mori::RecvFileList& files )
{
	for ( auto& perFile : files )
	{
		if ( !nsFileSystem::exists(perFile.Path_) )
		{
			continue;;
		}

		ErrCodeType ec;
		nsFileSystem::remove(perFile.Path_, ec);

		if ( !ec )
		{
			continue;;
		}

		LOG_ERROR << ec << L", " << perFile.Path_;
	}
}

void ProcessorCommon::RemoveFiles( const mori::FileList& files )
{
	for ( auto& perFile : files )
	{
		if ( !nsFileSystem::exists(perFile) )
		{
			continue;
		}

		ErrCodeType ec;
		nsFileSystem::remove(perFile, ec);

		if ( !ec )
		{
			continue;
		}

		LOG_ERROR << ec << L", " << perFile;
	}
}

void ProcessorCommon::RemoveFile( const mori::FilePath& file )
{
	if ( !nsFileSystem::exists(file) )
	{
		return;
	}

	ErrCodeType ec;
	nsFileSystem::remove(file, ec);

	if ( !ec )
	{
		return;
	}

	LOG_ERROR << ec << L", " << file;
}