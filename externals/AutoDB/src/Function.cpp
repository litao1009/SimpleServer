#include "AutoDB/Function.h"
#include "AutoDB/Column.h"
#include "ColumnImp.h"

namespace autoDB
{

autoDB::IntColumn max( const IntColumn& col )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("max(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("max(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::BigintColumn max( const BigintColumn& col )
{
	BigintColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("max(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("max(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::FloatColumn max( const FloatColumn& col )
{
	FloatColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("max(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("max(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::DateTimeColumn max( const DateTimeColumn& col )
{
	DateTimeColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("max(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("max(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::DBTime getdate()
{
	return boost::posix_time::second_clock::local_time();
}

autoDB::IntColumn count( const IntColumn& col )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("count(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("count(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::IntColumn count( const BigintColumn& col )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("count(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("count(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::IntColumn count( const FloatColumn& col )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("count(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("count(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::IntColumn count( const DateTimeColumn& col )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("count(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("count(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::IntColumn count( const BoolColumn& col )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("count(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("count(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::IntColumn count( const StringColumn& col )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("count(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("count(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::IntColumn isnull( const IntColumn& col, int32_t val )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [val,ftr](const StringType& col)
	{
		if ( !ftr )
		{
			return AUTODB_STR("isnull(") + col + AUTODB_STR(",") + Util::ToString(val) + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("isnull(") + ftr(col) + AUTODB_STR(",") + Util::ToString(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::BigintColumn isnull( const BigintColumn& col, int64_t val )
{
	BigintColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [val,ftr](const StringType& col)
	{
		if ( !ftr )
		{
			return AUTODB_STR("isnull(") + col + AUTODB_STR(",") + Util::ToString(val) + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("isnull(") + ftr(col) + AUTODB_STR(",") + Util::ToString(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::BigintColumn identity()
{
	return std::move(BigintColumn(AUTODB_STR("@@IDENTITY")));
}

autoDB::IntColumn sum( const IntColumn& col )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("sum(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("sum(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::FloatColumn sum( const FloatColumn& col )
{
	FloatColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("sum(") + val + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("sum(") + ftr(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::IntColumn ifnull( const IntColumn& col, int32_t val )
{
	IntColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [val,ftr](const StringType& col)
	{
		if ( !ftr )
		{
			return AUTODB_STR("ifnull(") + col + AUTODB_STR(",") + Util::ToString(val) + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("ifnull(") + ftr(col) + AUTODB_STR(",") + Util::ToString(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::BigintColumn ifnull( const BigintColumn& col, int64_t val )
{
	BigintColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [val,ftr](const StringType& col)
	{
		if ( !ftr )
		{
			return AUTODB_STR("ifnull(") + col + AUTODB_STR(",") + Util::ToString(val) + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("ifnull(") + ftr(col) + AUTODB_STR(",") + Util::ToString(val) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::StringColumn SubStr( const StringColumn& col, int from, int len )
{
	StringColumn ret(col);
	auto ftr = col.ImpUPtr_->Function_;

	ret.ImpUPtr_->Function_ = [ftr, from, len](const StringType& val)
	{
		if ( !ftr )
		{
			return AUTODB_STR("substr(") + val + AUTODB_STR(",") + Util::ToString(from) + AUTODB_STR(",") + Util::ToString(len) + AUTODB_STR(")");
		}
		else
		{
			return AUTODB_STR("substr(") + ftr(val) + AUTODB_STR(",") + Util::ToString(from) + AUTODB_STR(",") + Util::ToString(len) + AUTODB_STR(")");
		}
	};

	return std::move(ret);
}

autoDB::StringColumn CONCAT( const StringColumn& col1, const StringColumn& col2 )
{
	StringColumn ret(col1);

	auto str1 = col1.GetFullName(true);
	auto str2 = col2.GetFullName(true);

	ret.ImpUPtr_->Function_ = [str1, str2](const StringType& val)
	{
		return AUTODB_STR("CONCAT(") + str1 + AUTODB_STR(",") + str2 + AUTODB_STR(")");
	};

	return std::move(ret);
}

}