#include <boost/config/warning_disable.hpp>

#include "DataBase.h"

#include "Utils/Cast.h"
#include "Utils/SmartPtr.h"

#include "TinyLog.h"

#include <thread>
#include <mutex>

#ifdef USE_SQLSERVER
#include "soci-odbc.h"
#endif
#ifdef USE_MYSQL
#include "soci-mysql.h"
#endif

#include "soci-sqlite3.h"

#include <map>

class	DataBase::Imp
{
public:

	typedef	std::map<std::thread::id,soci::session>	ThreadSessionMap;
	typedef	std::map<CAStringType,ThreadSessionMap>	NameSessionMap;

	UTF8StringType		ConnStatement_;
	ThreadSessionMap	ThreadMap_;
	std::mutex			ThreadMutex_;
	NameSessionMap		NameMap_;
	std::mutex			NameMutex_;

	static	void	CheckSession(soci::session& sql)
	{
#ifdef USE_MYSQL
		auto mysqlSession = static_cast<soci::mysql_session_backend*>(sql.get_backend());
		auto ret = mysql_ping(mysqlSession->conn_);
#endif
	}
};

DataBase::DataBase():ImpUPtr_(smartPtr::make_unique<Imp>())
{

}

bool DataBase::Init( const WStringType& connStatement )
{
	auto& connStatement_ = GetInstance().ImpUPtr_->ConnStatement_;

	auto ret = UtfToUtfConv<UTF8StringType>(connStatement);

	if ( !ret )
	{
		return false;
	}

	connStatement_ = *ret;

#ifdef USE_SQLSERVER
	try
	{
		soci::session sql(soci::odbc, connStatement_);
		sql.close();

		return true;
	}
	catch(soci::odbc_soci_error& err)
	{
		AStringType errStr = reinterpret_cast<const char*>(err.odbc_error_message());
		LOG_ERROR << errStr;

		return false;
	}
#elif defined USE_MYSQL
	try
	{
		soci::session sql(soci::mysql, connStatement_);
		sql.close();

		return true;
	}
	catch(soci::mysql_soci_error& err)
	{
		AStringType errStr = reinterpret_cast<const char*>(err.what());
		LOG_ERROR << errStr;

		return false;
	}
#endif
}

soci::session DataBase::CreateSession()
{
	auto& connStatement_ = GetInstance().ImpUPtr_->ConnStatement_;
#ifdef USE_SQLSERVER
	return std::move(soci::session(soci::odbc, connStatement_));
#elif defined USE_MYSQL
	auto sql = std::move(soci::session(soci::mysql, connStatement_));
	
	static int value = 1;
	auto mysqlSession = static_cast<soci::mysql_session_backend*>(sql.get_backend());
	if ( 0 != mysql_options(mysqlSession->conn_, MYSQL_OPT_RECONNECT, &value) )
	{
		throw("mysql_options() failed when trying to set reconnect.");
	}

	return sql;
#endif // USE_SQLSERVER
}

soci::session DataBase::OpenSqlite( const AStringType& filePath, const AStringType& pwd )
{
	soci::session sql(soci::sqlite3, filePath);

	auto pImp = static_cast<soci::sqlite3_session_backend*>(sql.get_backend());
	auto ret = sqlite3_key(pImp->conn_, pwd.data(), pwd.length());

	if ( SQLITE_OK != ret )
	{
		throw soci::soci_error("√‹¬Î¥ÌŒÛ!");
	}

	return std::move(sql);
}

bool DataBase::ReKeySqliteFile( soci::session& sqlFile, const AStringType& newPwd )
{
	auto pImp = static_cast<soci::sqlite3_session_backend*>(sqlFile.get_backend());

	auto ret = sqlite3_rekey(pImp->conn_, newPwd.data(), newPwd.size());

	return SQLITE_OK == ret;
}

AStringType DataBase::GetSociErrorString( soci::soci_error& err )
{
#ifdef USE_SQLSERVER
	auto odbcErr = dynamic_cast<soci::odbc_soci_error*>(&err);
	if ( nullptr != odbcErr )
	{
		return reinterpret_cast<const char*>(odbcErr->odbc_error_message());
	}
	else
	{
		return err.what();
	}
#elif defined USE_MYSQL
	auto mysqlErr = dynamic_cast<soci::mysql_soci_error*>(&err);
	if ( nullptr == mysqlErr )
	{
		return err.what();
	}
	return AStringType(err.what()) + " ErrCode:" + std::to_string(mysqlErr->err_num_);
#endif // USE_SQLSERVER
}

DataBase& DataBase::GetInstance()
{
	static	DataBase	sInstance;
	return sInstance;
}

soci::session& DataBase::GetThreadSession()
{
	auto&	theMap_ = ImpUPtr_->ThreadMap_;
	auto&	theMutex = ImpUPtr_->ThreadMutex_;
	auto	theID = std::this_thread::get_id();

	{
		std::lock_guard<std::mutex> lock(theMutex);

		auto itor = theMap_.find(theID);
		if ( itor != theMap_.end() )
		{
			Imp::CheckSession(itor->second);
			return itor->second;
		}
		else
		{
			LOG_INFO << L"Create New Thread Session";

			auto pr = theMap_.emplace(theID, CreateSession());
			return pr.first->second;
		}
	}
}

soci::session& DataBase::GetNameSession(CAStringType name)
{
	auto&	theMutex = ImpUPtr_->NameMutex_;
	auto	theID	= std::this_thread::get_id();
	{
		std::lock_guard<std::mutex> lock(theMutex);
		
		auto&	theMap_ = ImpUPtr_->NameMap_[name];

		auto itor = theMap_.find(theID);
		if ( itor != theMap_.end() )
		{
			Imp::CheckSession(itor->second);
			return itor->second;
		}
		else
		{
			LOG_INFO << L"Create New Name Session:" << name;

			auto pr = theMap_.emplace(theID, CreateSession());
			return pr.first->second;
		}
	}
}
