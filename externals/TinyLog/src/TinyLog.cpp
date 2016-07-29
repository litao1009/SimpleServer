#include "TinyLogConf.h"
#include "TinyLogImp.h"
#include "Utils/SmartPtr.h"
#include "Utils/Type/PathType.h"
#include <iostream>
#include <vector>

class	TinyLogMgr::PrivateCreator {};


std::unique_ptr<TinyLogMgr>	sInstancePtr;

void TinyLogMgr::Init(tinyLog::PathType folder)
{
	PrivateCreator pc;
	sInstancePtr = std::move(smartPtr::make_unique<TinyLogMgr>(pc, folder));
	
	sInstancePtr->mImpPtr->Start();
}

TinyLogMgr& TinyLogMgr::GetInstance()
{
	return *sInstancePtr;
}

void TinyLogMgr::UnInit()
{
	sInstancePtr->mImpPtr->Stop();
}

TinyLogMgr::TinyLogMgr( PrivateCreator, PathType folder):mImpPtr(smartPtr::make_unique<TinyLogMgr::CImp>())
{
	assert( !nsFileSystem::is_directory(folder) );

	auto pntFolder = folder.parent_path();
	if ( !nsFileSystem::exists(pntFolder) )
	{
		nsFileSystem::create_directories(pntFolder);
	}
	mImpPtr->Ofs_.open(folder, std::ios::app|std::ios::binary);

	assert( mImpPtr->Ofs_.is_open() );

	mImpPtr->Timer_.expires_from_now(mImpPtr->Tick_);
	mImpPtr->Timer_.async_wait([this](boost::system::error_code ec)
	{
		if ( !ec )
		{
			mImpPtr->TimeWrite();
		}		
	});

}

TinyLogMgr::~TinyLogMgr()
{

}


PerLog	 TinyLogMgr::CreateLog( CWStringType strType, CWStringType strFile, int iLine )
{
	PerLog res(strType, strFile, iLine);
	return std::move(res);
}

PerLog TinyLogMgr::CreateLog( CWStringType strType )
{
	PerLog res(strType);
	return std::move(res);
}