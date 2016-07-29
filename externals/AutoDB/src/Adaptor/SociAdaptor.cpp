#define  SOCI_USE_BOOST
#pragma warning(disable:4345)
#include "AutoDB/Adaptor/SociAdaptor.h"
#include "AutoDB/DBColumn.h"
#include "StatementImp.h"

#include <list>
#include <boost/optional.hpp>
#include <regex>

namespace autoDB
{

class	SInto
{
public:

	SInto()
	{
		FirstUpdate_ = true;
		FetchSize_ = 30;
	}

	void	Reset()
	{
		for ( auto& cur : IntIntoVec_ )
		{
			std::get<1>(cur).resize(FetchSize_);
		}
		for ( auto& cur : BigintIntoVec_ )
		{
			std::get<1>(cur).resize(FetchSize_);
		}
		for ( auto& cur : StringIntoVec_ )
		{
			std::get<1>(cur).resize(FetchSize_);
		}
		for ( auto& cur : TimeIntoVec_ )
		{
			std::get<1>(cur).resize(FetchSize_);
		}
		for ( auto& cur : FloatIntoVec_ )
		{
			std::get<1>(cur).resize(FetchSize_);
		}
		for ( auto& cur : BitIntoVec_ )
		{
			std::get<1>(cur).resize(FetchSize_);
		}

		FirstUpdate_ = true;
	}

	void	Clean()
	{
		IntIntoVec_.clear();
		BigintIntoVec_.clear();
		StringIntoVec_.clear();
		TimeIntoVec_.clear();
		FloatIntoVec_.clear();
		BitIntoVec_.clear();
	}

	bool	UpdatePiece()
	{
		if ( FirstUpdate_ )
		{
			for ( auto& cur : IntIntoVec_ )
			{
				std::reverse(std::get<1>(cur).begin(), std::get<1>(cur).end());
				std::reverse(std::get<2>(cur).begin(), std::get<2>(cur).end());
			}
			for ( auto& cur : BigintIntoVec_ )
			{
				std::reverse(std::get<1>(cur).begin(), std::get<1>(cur).end());
				std::reverse(std::get<2>(cur).begin(), std::get<2>(cur).end());
			}
			for ( auto& cur : StringIntoVec_ )
			{
				std::reverse(std::get<1>(cur).begin(), std::get<1>(cur).end());
				std::reverse(std::get<2>(cur).begin(), std::get<2>(cur).end());
			}
			for ( auto& cur : TimeIntoVec_ )
			{
				std::reverse(std::get<1>(cur).begin(), std::get<1>(cur).end());
				std::reverse(std::get<2>(cur).begin(), std::get<2>(cur).end());
			}
			for ( auto& cur : FloatIntoVec_ )
			{
				std::reverse(std::get<1>(cur).begin(), std::get<1>(cur).end());
				std::reverse(std::get<2>(cur).begin(), std::get<2>(cur).end());
			}
			for ( auto& cur : BitIntoVec_ )
			{
				std::reverse(std::get<1>(cur).begin(), std::get<1>(cur).end());
				std::reverse(std::get<2>(cur).begin(), std::get<2>(cur).end());
			}

			FirstUpdate_ = false;
		}
		
		for ( auto& cur : IntIntoVec_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			if ( vec.empty() )
			{
				return false;
			}

			boost::optional<int32_t> val;
			soci::i_null != ind.back() ? val = vec.back() : val = boost::none;

			ftr(&val);

			vec.pop_back();
			ind.pop_back();
		}
		for ( auto& cur : BigintIntoVec_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			if ( vec.empty() )
			{
				return false;
			}

			boost::optional<int64_t> val;
			soci::i_null != ind.back() ? val = vec.back() : val = boost::none;

			ftr(&val);

			vec.pop_back();
			ind.pop_back();
		}
		for ( auto& cur : StringIntoVec_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			if ( vec.empty() )
			{
				return false;
			}

			boost::optional<StringType> val;
			soci::i_null != ind.back() ? val = vec.back() : val = boost::none;

			ftr(&val);

			vec.pop_back();
			ind.pop_back();
		}
		for ( auto& cur : TimeIntoVec_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			if ( vec.empty() )
			{
				return false;
			}

			boost::optional<DBTime> val;
			soci::i_null != ind.back() ? val = boost::posix_time::ptime_from_tm(vec.back()) : val = boost::none;

			ftr(&val);

			vec.pop_back();
			ind.pop_back();
		}
		for ( auto& cur : FloatIntoVec_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			if ( vec.empty() )
			{
				return false;
			}

			boost::optional<double> val;
			soci::i_null != ind.back() ? val = vec.back() : val = boost::none;

			ftr(&val);

			vec.pop_back();
			ind.pop_back();
		}
		for ( auto& cur : BitIntoVec_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			if ( vec.empty() )
			{
				return false;
			}

			boost::optional<bool> val;
			soci::i_null != ind.back() ? val =  0 != vec.back() : val = boost::none;

			ftr(&val);

			vec.pop_back();
			ind.pop_back();
		}

		return true;
	}

	bool	UpdateVector()
	{
		for ( auto& cur : IntIntoVec_ )
		{
			if ( std::get<1>(cur).empty() )
			{
				return false;
			}

			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);
			
			std::vector<boost::optional<int32_t>> tmp;
			tmp.reserve(vec.size());
			
			for ( uint32_t index=0; index<vec.size(); ++index )
			{
				soci::i_null == ind[index] ? tmp.emplace_back(boost::none) : tmp.emplace_back(vec[index]);
			}
			
			std::get<0>(cur)(&tmp);
		}
		for ( auto& cur : BigintIntoVec_ )
		{
			if ( std::get<1>(cur).empty() )
			{
				return false;
			}

			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			std::vector<boost::optional<int64_t>> tmp;
			tmp.reserve(vec.size());

			for ( uint32_t index=0; index<vec.size(); ++index )
			{
				soci::i_null == ind[index] ? tmp.emplace_back(boost::none) : tmp.emplace_back(vec[index]);
			}

			std::get<0>(cur)(&tmp);
		}
		for ( auto& cur : StringIntoVec_ )
		{
			if ( std::get<1>(cur).empty() )
			{
				return false;
			}

			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			std::vector<boost::optional<StringType>> tmp;
			tmp.reserve(vec.size());

			for ( uint32_t index=0; index<vec.size(); ++index )
			{
				soci::i_null == ind[index] ? tmp.emplace_back(boost::none) : tmp.emplace_back(vec[index]);
			}

			std::get<0>(cur)(&tmp);
		}
		for ( auto& cur : TimeIntoVec_ )
		{
			if ( std::get<1>(cur).empty() )
			{
				return false;
			}

			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			std::vector<boost::optional<DBTime>> tmp;
			tmp.reserve(vec.size());

			for ( uint32_t index=0; index<vec.size(); ++index )
			{
				soci::i_null == ind[index] ? tmp.emplace_back(boost::none) : tmp.emplace_back(boost::posix_time::ptime_from_tm(vec[index]));
			}

			std::get<0>(cur)(&tmp);
		}
		for ( auto& cur : FloatIntoVec_ )
		{
			if ( std::get<1>(cur).empty() )
			{
				return false;
			}

			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			std::vector<boost::optional<double>> tmp;
			tmp.reserve(vec.size());

			for ( uint32_t index=0; index<vec.size(); ++index )
			{
				soci::i_null == ind[index] ? tmp.emplace_back(boost::none) : tmp.emplace_back(vec[index]);
			}

			std::get<0>(cur)(&tmp);
		}
		for ( auto& cur : BitIntoVec_ )
		{
			if ( std::get<1>(cur).empty() )
			{
				return false;
			}

			auto& vec = std::get<1>(cur);
			auto& ind = std::get<2>(cur);

			std::vector<boost::optional<bool>> tmp;
			tmp.reserve(vec.size());

			for ( uint32_t index=0; index<vec.size(); ++index )
			{
				soci::i_null == ind[index] ? tmp.emplace_back(boost::none) : tmp.emplace_back( 0 != vec[index]);
			}

			std::get<0>(cur)(&tmp);
		}

		return true;
	}

public:

	std::list<std::tuple<CallBackFtr,std::vector<int32_t>,std::vector<soci::indicator>>>		IntIntoVec_;
	std::list<std::tuple<CallBackFtr,std::vector<int64_t>,std::vector<soci::indicator>>>		BigintIntoVec_;
	std::list<std::tuple<CallBackFtr,std::vector<std::string>,std::vector<soci::indicator>>>	StringIntoVec_;
	std::list<std::tuple<CallBackFtr,std::vector<std::tm>,std::vector<soci::indicator>>>		TimeIntoVec_;
	std::list<std::tuple<CallBackFtr,std::vector<double>,std::vector<soci::indicator>>>			FloatIntoVec_;
	std::list<std::tuple<CallBackFtr,std::vector<int32_t>,std::vector<soci::indicator>>>		BitIntoVec_;

	bool												IsVec_;
	bool												FirstUpdate_;
	uint32_t											FetchSize_;
};

class	SUse
{
public:

	void	UpdateUse()
	{
		for ( auto& cur : TimeUseMap_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& otm = std::get<1>(cur);
			auto& opt = std::get<2>(cur);

			ftr(&opt);
			
			opt ? otm = boost::posix_time::to_tm(*opt) : otm = boost::none;
		}

		for ( auto& cur : IntMap_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& oi = std::get<1>(cur);

			ftr(&oi);
		}

		for ( auto& cur : BigintMap_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& oi = std::get<1>(cur);

			ftr(&oi);
		}

		for ( auto& cur : FloatMap_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& oi = std::get<1>(cur);

			ftr(&oi);
		}

		for ( auto& cur : StringMap_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& oi = std::get<1>(cur);

			ftr(&oi);
		}

		for ( auto& cur : BoolMap_ )
		{
			auto& ftr = std::get<0>(cur);
			auto& oi = std::get<1>(cur);
			auto& ob = std::get<2>(cur);

			ftr(&ob);

			ob ? ( *ob ? oi = 1 : oi = 0 ): oi = boost::none;			
		}
	}

	std::list<std::tuple<CallBackFtr,boost::optional<std::tm>,boost::optional<DBTime>>>	TimeUseMap_;
	std::list<std::tuple<CallBackFtr,boost::optional<int32_t>>>			IntMap_;
	std::list<std::tuple<CallBackFtr,boost::optional<int64_t>>>			BigintMap_;
	std::list<std::tuple<CallBackFtr,boost::optional<double>>>		FloatMap_;
	std::list<std::tuple<CallBackFtr,boost::optional<StringType>>>		StringMap_;
	std::list<std::tuple<CallBackFtr,boost::optional<int32_t>,boost::optional<bool>>>	BoolMap_;
};

class	SociAdaptor::Imp
{
public:

	Imp(soci::session& sql):SociStatement_(sql) {}

	std::string								Str_;
	soci::statement							SociStatement_;
	
	SInto									Into_;
	SUse									Use_;
	bool									NeedFetch_;
};

SociAdaptor::SociAdaptor( const Statement& st, soci::session& sql ):ImpUPtr_(new Imp(sql))
{
	ImpUPtr_->Str_ = st.ImpUPtr_->Str_;

	auto& str_ = ImpUPtr_->Str_;
	auto& st_ = ImpUPtr_->SociStatement_;

	auto useCount = 0;
	std::regex rg(":use");
	auto str = std::regex_replace(str_, rg, std::string(":val")+std::to_string(useCount++), std::regex_constants::format_first_only);
	while ( str != str_ )
	{
		str_ = str;
		str = std::regex_replace(str_, rg, std::string(":val")+std::to_string(useCount++), std::regex_constants::format_first_only);
	}

	for ( auto& cur : st.ImpUPtr_->Wraps_ )
	{
		if ( ValueWrap::EAccessType::EAT_INTO == cur.AccessType_ )
		{
			ImpUPtr_->Into_.IsVec_ = cur.IsVec_;

			if ( ValueWrap::EValueType::EVT_INT == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Into_.IntIntoVec_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,std::vector<int32_t>(),std::vector<soci::indicator>()));
				st_.exchange(soci::into(std::get<1>(vec.back()),std::get<2>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_BIGINT == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Into_.BigintIntoVec_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,std::vector<int64_t>(),std::vector<soci::indicator>()));
				st_.exchange(soci::into(std::get<1>(vec.back()),std::get<2>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_FLOAT == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Into_.FloatIntoVec_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,std::vector<double>(),std::vector<soci::indicator>()));
				st_.exchange(soci::into(std::get<1>(vec.back()),std::get<2>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_STRING == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Into_.StringIntoVec_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,std::vector<StringType>(),std::vector<soci::indicator>()));
				st_.exchange(soci::into(std::get<1>(vec.back()),std::get<2>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_TIME == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Into_.TimeIntoVec_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,std::vector<std::tm>(),std::vector<soci::indicator>()));
				st_.exchange(soci::into(std::get<1>(vec.back()),std::get<2>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_BOOL == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Into_.BitIntoVec_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,std::vector<int32_t>(),std::vector<soci::indicator>()));
				st_.exchange(soci::into(std::get<1>(vec.back()),std::get<2>(vec.back())));
			}

		}
		else if ( ValueWrap::EAccessType::EAT_USE == cur.AccessType_ )
		{
			if ( ValueWrap::EValueType::EVT_INT == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Use_.IntMap_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,boost::none));
				st_.exchange(soci::use(std::get<1>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_BIGINT == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Use_.BigintMap_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,boost::none));
				st_.exchange(soci::use(std::get<1>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_FLOAT == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Use_.FloatMap_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,boost::none));
				st_.exchange(soci::use(std::get<1>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_STRING == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Use_.StringMap_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,boost::none));
				st_.exchange(soci::use(std::get<1>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_BOOL == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Use_.BoolMap_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,boost::none,boost::none));
				st_.exchange(soci::use(std::get<1>(vec.back())));
			}
			else if ( ValueWrap::EValueType::EVT_TIME == cur.ValType_ )
			{
				auto& vec = ImpUPtr_->Use_.TimeUseMap_;
				vec.emplace_back(std::make_tuple(cur.Ftr_,boost::none,boost::none));
				st_.exchange(soci::use(std::get<1>(vec.back())));
			}
		}
	}

	ImpUPtr_->Into_.Reset();

	st_.alloc();
	st_.prepare(str_);
	st_.define_and_bind();
}

SociAdaptor::~SociAdaptor()
{

}

bool SociAdaptor::Excute( bool withDataChange /*= true*/ )
{
	if ( withDataChange )
	{
		ImpUPtr_->Use_.UpdateUse();
	}
	
	ImpUPtr_->Into_.Reset();

	auto ret = ImpUPtr_->SociStatement_.execute(withDataChange);

	ImpUPtr_->NeedFetch_ = !withDataChange;

	if ( ret )
	{
		Fetch();
	}

	return ret;
}

bool SociAdaptor::Fetch()
{
	if ( ImpUPtr_->NeedFetch_ )
	{
		ImpUPtr_->SociStatement_.fetch();
		ImpUPtr_->NeedFetch_ = false;
	}

	if ( !ImpUPtr_->Into_.IsVec_ )
	{
		auto ownRet = ImpUPtr_->Into_.UpdatePiece();
		if ( ownRet )
		{
			return ownRet;
		}

		ImpUPtr_->Into_.Reset();

		auto ret = ImpUPtr_->SociStatement_.fetch();

		if ( ret )
		{
			ImpUPtr_->Into_.UpdatePiece();
		}

		return ret;
	}
	else
	{
		do 
		{
			ImpUPtr_->Into_.UpdateVector();
			ImpUPtr_->Into_.Reset();

		} while ( ImpUPtr_->SociStatement_.fetch() );

		return true;
	}
}

void SociAdaptor::SetFetchSize( uint32_t size )
{
	ImpUPtr_->Into_.FetchSize_ = size;
}

int64_t SociAdaptor::GetAffectedRows()
{
	return ImpUPtr_->SociStatement_.get_affected_rows();
}

}