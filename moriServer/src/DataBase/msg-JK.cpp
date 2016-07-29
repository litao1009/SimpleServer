#include"msg-JK.h"

#include <boost\locale\encoding.hpp>

namespace autoDB
{
void	JK_CabBoardMatInfoImp::SData::SetAll(bool val)
{
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? SealRuleID_.reset(boost::initialized_value) : SealRuleID_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? IsUseDefaultSkinDirection_.reset(boost::initialized_value) : IsUseDefaultSkinDirection_=boost::none;
}

void	JK_CabBoardMatInfoImp::SData::Flip()
{
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	SealRuleID_ ? SealRuleID_=boost::none : SealRuleID_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	IsUseDefaultSkinDirection_ ? IsUseDefaultSkinDirection_=boost::none : IsUseDefaultSkinDirection_.reset(boost::initialized_value);
}

void	JK_CabBoardMatInfoImp::SData::Check()
{
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !SealRuleID_ )
	{
		SealRuleID_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !IsUseDefaultSkinDirection_ )
	{
		IsUseDefaultSkinDirection_.reset(boost::initialized_value);
	}
}

void	JK_CabBoardMatInfoImp::SData::ToUtf8()
{
}

void	JK_CabBoardMatInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabBoardMatInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Use(data.SealRuleID_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.IsUseDefaultSkinDirection_ )
	{
		ret.With(IsUseDefaultSkinDirection.Use(data.IsUseDefaultSkinDirection_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabBoardMatInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Into(data.SealRuleID_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.IsUseDefaultSkinDirection_ )
	{
		ret.With(IsUseDefaultSkinDirection.Into(data.IsUseDefaultSkinDirection_));
	}
	return std::move(ret);
}


JK_CabBoardMatInfoImp	JK_CabBoardMatInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabBoardMatInfoImp(alias));
}

JK_CabBoardMatInfoImp::JK_CabBoardMatInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabBoardMatInfo"), alias)
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,SealRuleID(ImpSPtr_,AUTODB_STR("SealRuleID"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,IsUseDefaultSkinDirection(ImpSPtr_,AUTODB_STR("IsUseDefaultSkinDirection"))
{}

JK_CabBoardMatInfoImp::JK_CabBoardMatInfoImp( const JK_CabBoardMatInfoImp& rhs ):Table(rhs)
	,CabMatPlanID(rhs.CabMatPlanID)
	,CabStructBoardID(rhs.CabStructBoardID)
	,IsDefault(rhs.IsDefault)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,SealRuleID(rhs.SealRuleID)
	,SkinDirection(rhs.SkinDirection)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,IsUseDefaultSkinDirection(rhs.IsUseDefaultSkinDirection)
{}

JK_CabBoardMatInfoImp::JK_CabBoardMatInfoImp( JK_CabBoardMatInfoImp&& rhs ):Table(rhs)
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,IsDefault(std::move(rhs.IsDefault))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,SealRuleID(std::move(rhs.SealRuleID))
	,SkinDirection(std::move(rhs.SkinDirection))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,IsUseDefaultSkinDirection(std::move(rhs.IsUseDefaultSkinDirection))
{}

JK_CabBoardMatInfoImp	JK_CabBoardMatInfo("");



void	JK_CabBoardMatSkinInfoImp::SData::SetAll(bool val)
{
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? IsUseDefaultSkinDirection_.reset(boost::initialized_value) : IsUseDefaultSkinDirection_=boost::none;
}

void	JK_CabBoardMatSkinInfoImp::SData::Flip()
{
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	IsUseDefaultSkinDirection_ ? IsUseDefaultSkinDirection_=boost::none : IsUseDefaultSkinDirection_.reset(boost::initialized_value);
}

void	JK_CabBoardMatSkinInfoImp::SData::Check()
{
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !IsUseDefaultSkinDirection_ )
	{
		IsUseDefaultSkinDirection_.reset(boost::initialized_value);
	}
}

void	JK_CabBoardMatSkinInfoImp::SData::ToUtf8()
{
}

void	JK_CabBoardMatSkinInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabBoardMatSkinInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.IsUseDefaultSkinDirection_ )
	{
		ret.With(IsUseDefaultSkinDirection.Use(data.IsUseDefaultSkinDirection_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabBoardMatSkinInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.IsUseDefaultSkinDirection_ )
	{
		ret.With(IsUseDefaultSkinDirection.Into(data.IsUseDefaultSkinDirection_));
	}
	return std::move(ret);
}


JK_CabBoardMatSkinInfoImp	JK_CabBoardMatSkinInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabBoardMatSkinInfoImp(alias));
}

JK_CabBoardMatSkinInfoImp::JK_CabBoardMatSkinInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabBoardMatSkinInfo"), alias)
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,IsUseDefaultSkinDirection(ImpSPtr_,AUTODB_STR("IsUseDefaultSkinDirection"))
{}

JK_CabBoardMatSkinInfoImp::JK_CabBoardMatSkinInfoImp( const JK_CabBoardMatSkinInfoImp& rhs ):Table(rhs)
	,CabMatPlanID(rhs.CabMatPlanID)
	,CabStructBoardID(rhs.CabStructBoardID)
	,SkinDirection(rhs.SkinDirection)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,IsUseDefaultSkinDirection(rhs.IsUseDefaultSkinDirection)
{}

JK_CabBoardMatSkinInfoImp::JK_CabBoardMatSkinInfoImp( JK_CabBoardMatSkinInfoImp&& rhs ):Table(rhs)
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,SkinDirection(std::move(rhs.SkinDirection))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,IsUseDefaultSkinDirection(std::move(rhs.IsUseDefaultSkinDirection))
{}

JK_CabBoardMatSkinInfoImp	JK_CabBoardMatSkinInfo("");



void	JK_CabDesignBoardSealEdgeInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignBoardSealID_.reset(boost::initialized_value) : CabDesignBoardSealID_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
	val ? SealMatID_.reset(boost::initialized_value) : SealMatID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_CabDesignBoardSealEdgeInfoImp::SData::Flip()
{
	CabDesignBoardSealID_ ? CabDesignBoardSealID_=boost::none : CabDesignBoardSealID_.reset(boost::initialized_value);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
	SealMatID_ ? SealMatID_=boost::none : SealMatID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_CabDesignBoardSealEdgeInfoImp::SData::Check()
{
	if ( !CabDesignBoardSealID_ )
	{
		CabDesignBoardSealID_.reset(boost::initialized_value);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
	if ( !SealMatID_ )
	{
		SealMatID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignBoardSealEdgeInfoImp::SData::ToUtf8()
{
}

void	JK_CabDesignBoardSealEdgeInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabDesignBoardSealEdgeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignBoardSealID_ )
	{
		ret.With(CabDesignBoardSealID.Use(data.CabDesignBoardSealID_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	if ( data.SealMatID_ )
	{
		ret.With(SealMatID.Use(data.SealMatID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignBoardSealEdgeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignBoardSealID_ )
	{
		ret.With(CabDesignBoardSealID.Into(data.CabDesignBoardSealID_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	if ( data.SealMatID_ )
	{
		ret.With(SealMatID.Into(data.SealMatID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_CabDesignBoardSealEdgeInfoImp	JK_CabDesignBoardSealEdgeInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignBoardSealEdgeInfoImp(alias));
}

JK_CabDesignBoardSealEdgeInfoImp::JK_CabDesignBoardSealEdgeInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignBoardSealEdgeInfo"), alias)
	,CabDesignBoardSealID(ImpSPtr_,AUTODB_STR("CabDesignBoardSealID"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
	,SealMatID(ImpSPtr_,AUTODB_STR("SealMatID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_CabDesignBoardSealEdgeInfoImp::JK_CabDesignBoardSealEdgeInfoImp( const JK_CabDesignBoardSealEdgeInfoImp& rhs ):Table(rhs)
	,CabDesignBoardSealID(rhs.CabDesignBoardSealID)
	,SealIndex(rhs.SealIndex)
	,SealMatID(rhs.SealMatID)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_CabDesignBoardSealEdgeInfoImp::JK_CabDesignBoardSealEdgeInfoImp( JK_CabDesignBoardSealEdgeInfoImp&& rhs ):Table(rhs)
	,CabDesignBoardSealID(std::move(rhs.CabDesignBoardSealID))
	,SealIndex(std::move(rhs.SealIndex))
	,SealMatID(std::move(rhs.SealMatID))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_CabDesignBoardSealEdgeInfoImp	JK_CabDesignBoardSealEdgeInfo("");



void	JK_CabDesignBoardSealInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignBoardSealID_.reset(boost::initialized_value) : CabDesignBoardSealID_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? CabStructID_.reset(boost::initialized_value) : CabStructID_=boost::none;
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_CabDesignBoardSealInfoImp::SData::Flip()
{
	CabDesignBoardSealID_ ? CabDesignBoardSealID_=boost::none : CabDesignBoardSealID_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	CabStructID_ ? CabStructID_=boost::none : CabStructID_.reset(boost::initialized_value);
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_CabDesignBoardSealInfoImp::SData::Check()
{
	if ( !CabDesignBoardSealID_ )
	{
		CabDesignBoardSealID_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !CabStructID_ )
	{
		CabStructID_.reset(boost::initialized_value);
	}
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignBoardSealInfoImp::SData::ToUtf8()
{
}

void	JK_CabDesignBoardSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabDesignBoardSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignBoardSealID_ )
	{
		ret.With(CabDesignBoardSealID.Use(data.CabDesignBoardSealID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Use(data.CabStructID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignBoardSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignBoardSealID_ )
	{
		ret.With(CabDesignBoardSealID.Into(data.CabDesignBoardSealID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Into(data.CabStructID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_CabDesignBoardSealInfoImp	JK_CabDesignBoardSealInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignBoardSealInfoImp(alias));
}

JK_CabDesignBoardSealInfoImp::JK_CabDesignBoardSealInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignBoardSealInfo"), alias)
	,CabDesignBoardSealID(ImpSPtr_,AUTODB_STR("CabDesignBoardSealID"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,CabStructID(ImpSPtr_,AUTODB_STR("CabStructID"))
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_CabDesignBoardSealInfoImp::JK_CabDesignBoardSealInfoImp( const JK_CabDesignBoardSealInfoImp& rhs ):Table(rhs)
	,CabDesignBoardSealID(rhs.CabDesignBoardSealID)
	,CabStructBoardID(rhs.CabStructBoardID)
	,CabStructID(rhs.CabStructID)
	,CabDesignID(rhs.CabDesignID)
	,MaterialID(rhs.MaterialID)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_CabDesignBoardSealInfoImp::JK_CabDesignBoardSealInfoImp( JK_CabDesignBoardSealInfoImp&& rhs ):Table(rhs)
	,CabDesignBoardSealID(std::move(rhs.CabDesignBoardSealID))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,CabStructID(std::move(rhs.CabStructID))
	,CabDesignID(std::move(rhs.CabDesignID))
	,MaterialID(std::move(rhs.MaterialID))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_CabDesignBoardSealInfoImp	JK_CabDesignBoardSealInfo("");



void	JK_CabDesignDoorRegionHandleInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignDoorRegionHandleID_.reset(boost::initialized_value) : CabDesignDoorRegionHandleID_=boost::none;
	val ? CabDesignDoorRegionID_.reset(boost::initialized_value) : CabDesignDoorRegionID_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? ArcZ_.reset(boost::initialized_value) : ArcZ_=boost::none;
	val ? HandleID_.reset(boost::initialized_value) : HandleID_=boost::none;
	val ? MatchType_.reset(boost::initialized_value) : MatchType_=boost::none;
}

void	JK_CabDesignDoorRegionHandleInfoImp::SData::Flip()
{
	CabDesignDoorRegionHandleID_ ? CabDesignDoorRegionHandleID_=boost::none : CabDesignDoorRegionHandleID_.reset(boost::initialized_value);
	CabDesignDoorRegionID_ ? CabDesignDoorRegionID_=boost::none : CabDesignDoorRegionID_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	ArcZ_ ? ArcZ_=boost::none : ArcZ_.reset(boost::initialized_value);
	HandleID_ ? HandleID_=boost::none : HandleID_.reset(boost::initialized_value);
	MatchType_ ? MatchType_=boost::none : MatchType_.reset(boost::initialized_value);
}

void	JK_CabDesignDoorRegionHandleInfoImp::SData::Check()
{
	if ( !CabDesignDoorRegionHandleID_ )
	{
		CabDesignDoorRegionHandleID_.reset(boost::initialized_value);
	}
	if ( !CabDesignDoorRegionID_ )
	{
		CabDesignDoorRegionID_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !ArcZ_ )
	{
		ArcZ_.reset(boost::initialized_value);
	}
	if ( !HandleID_ )
	{
		HandleID_.reset(boost::initialized_value);
	}
	if ( !MatchType_ )
	{
		MatchType_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignDoorRegionHandleInfoImp::SData::ToUtf8()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
}

void	JK_CabDesignDoorRegionHandleInfoImp::SData::ToAscii()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
}

autoDB::SColumns JK_CabDesignDoorRegionHandleInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignDoorRegionHandleID_ )
	{
		ret.With(CabDesignDoorRegionHandleID.Use(data.CabDesignDoorRegionHandleID_));
	}
	if ( data.CabDesignDoorRegionID_ )
	{
		ret.With(CabDesignDoorRegionID.Use(data.CabDesignDoorRegionID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Use(data.ArcZ_));
	}
	if ( data.HandleID_ )
	{
		ret.With(HandleID.Use(data.HandleID_));
	}
	if ( data.MatchType_ )
	{
		ret.With(MatchType.Use(data.MatchType_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignDoorRegionHandleInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignDoorRegionHandleID_ )
	{
		ret.With(CabDesignDoorRegionHandleID.Into(data.CabDesignDoorRegionHandleID_));
	}
	if ( data.CabDesignDoorRegionID_ )
	{
		ret.With(CabDesignDoorRegionID.Into(data.CabDesignDoorRegionID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Into(data.ArcZ_));
	}
	if ( data.HandleID_ )
	{
		ret.With(HandleID.Into(data.HandleID_));
	}
	if ( data.MatchType_ )
	{
		ret.With(MatchType.Into(data.MatchType_));
	}
	return std::move(ret);
}


JK_CabDesignDoorRegionHandleInfoImp	JK_CabDesignDoorRegionHandleInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignDoorRegionHandleInfoImp(alias));
}

JK_CabDesignDoorRegionHandleInfoImp::JK_CabDesignDoorRegionHandleInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignDoorRegionHandleInfo"), alias)
	,CabDesignDoorRegionHandleID(ImpSPtr_,AUTODB_STR("CabDesignDoorRegionHandleID"))
	,CabDesignDoorRegionID(ImpSPtr_,AUTODB_STR("CabDesignDoorRegionID"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,ArcZ(ImpSPtr_,AUTODB_STR("ArcZ"))
	,HandleID(ImpSPtr_,AUTODB_STR("HandleID"))
	,MatchType(ImpSPtr_,AUTODB_STR("MatchType"))
{}

JK_CabDesignDoorRegionHandleInfoImp::JK_CabDesignDoorRegionHandleInfoImp( const JK_CabDesignDoorRegionHandleInfoImp& rhs ):Table(rhs)
	,CabDesignDoorRegionHandleID(rhs.CabDesignDoorRegionHandleID)
	,CabDesignDoorRegionID(rhs.CabDesignDoorRegionID)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,ArcZ(rhs.ArcZ)
	,HandleID(rhs.HandleID)
	,MatchType(rhs.MatchType)
{}

JK_CabDesignDoorRegionHandleInfoImp::JK_CabDesignDoorRegionHandleInfoImp( JK_CabDesignDoorRegionHandleInfoImp&& rhs ):Table(rhs)
	,CabDesignDoorRegionHandleID(std::move(rhs.CabDesignDoorRegionHandleID))
	,CabDesignDoorRegionID(std::move(rhs.CabDesignDoorRegionID))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,ArcZ(std::move(rhs.ArcZ))
	,HandleID(std::move(rhs.HandleID))
	,MatchType(std::move(rhs.MatchType))
{}

JK_CabDesignDoorRegionHandleInfoImp	JK_CabDesignDoorRegionHandleInfo("");



void	JK_CabDesignDoorRegionInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignDoorRegionID_.reset(boost::initialized_value) : CabDesignDoorRegionID_=boost::none;
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsGroup_.reset(boost::initialized_value) : IsGroup_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? IsCanResize_.reset(boost::initialized_value) : IsCanResize_=boost::none;
	val ? MinXLen_.reset(boost::initialized_value) : MinXLen_=boost::none;
	val ? MaxXLen_.reset(boost::initialized_value) : MaxXLen_=boost::none;
	val ? XLenStep_.reset(boost::initialized_value) : XLenStep_=boost::none;
	val ? MinYLen_.reset(boost::initialized_value) : MinYLen_=boost::none;
	val ? MaxYLen_.reset(boost::initialized_value) : MaxYLen_=boost::none;
	val ? YLenStep_.reset(boost::initialized_value) : YLenStep_=boost::none;
	val ? DefaultMatID_.reset(boost::initialized_value) : DefaultMatID_=boost::none;
	val ? DefaultModelID_.reset(boost::initialized_value) : DefaultModelID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? DefaultDoorID_.reset(boost::initialized_value) : DefaultDoorID_=boost::none;
	val ? CabDesignDoorSystemID_.reset(boost::initialized_value) : CabDesignDoorSystemID_=boost::none;
	val ? DoorSystemID_.reset(boost::initialized_value) : DoorSystemID_=boost::none;
	val ? IsUseDefaultSize_.reset(boost::initialized_value) : IsUseDefaultSize_=boost::none;
	val ? IsUseCutFormula_.reset(boost::initialized_value) : IsUseCutFormula_=boost::none;
	val ? DoorRegionID_.reset(boost::initialized_value) : DoorRegionID_=boost::none;
}

void	JK_CabDesignDoorRegionInfoImp::SData::Flip()
{
	CabDesignDoorRegionID_ ? CabDesignDoorRegionID_=boost::none : CabDesignDoorRegionID_.reset(boost::initialized_value);
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsGroup_ ? IsGroup_=boost::none : IsGroup_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	IsCanResize_ ? IsCanResize_=boost::none : IsCanResize_.reset(boost::initialized_value);
	MinXLen_ ? MinXLen_=boost::none : MinXLen_.reset(boost::initialized_value);
	MaxXLen_ ? MaxXLen_=boost::none : MaxXLen_.reset(boost::initialized_value);
	XLenStep_ ? XLenStep_=boost::none : XLenStep_.reset(boost::initialized_value);
	MinYLen_ ? MinYLen_=boost::none : MinYLen_.reset(boost::initialized_value);
	MaxYLen_ ? MaxYLen_=boost::none : MaxYLen_.reset(boost::initialized_value);
	YLenStep_ ? YLenStep_=boost::none : YLenStep_.reset(boost::initialized_value);
	DefaultMatID_ ? DefaultMatID_=boost::none : DefaultMatID_.reset(boost::initialized_value);
	DefaultModelID_ ? DefaultModelID_=boost::none : DefaultModelID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	DefaultDoorID_ ? DefaultDoorID_=boost::none : DefaultDoorID_.reset(boost::initialized_value);
	CabDesignDoorSystemID_ ? CabDesignDoorSystemID_=boost::none : CabDesignDoorSystemID_.reset(boost::initialized_value);
	DoorSystemID_ ? DoorSystemID_=boost::none : DoorSystemID_.reset(boost::initialized_value);
	IsUseDefaultSize_ ? IsUseDefaultSize_=boost::none : IsUseDefaultSize_.reset(boost::initialized_value);
	IsUseCutFormula_ ? IsUseCutFormula_=boost::none : IsUseCutFormula_.reset(boost::initialized_value);
	DoorRegionID_ ? DoorRegionID_=boost::none : DoorRegionID_.reset(boost::initialized_value);
}

void	JK_CabDesignDoorRegionInfoImp::SData::Check()
{
	if ( !CabDesignDoorRegionID_ )
	{
		CabDesignDoorRegionID_.reset(boost::initialized_value);
	}
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsGroup_ )
	{
		IsGroup_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !IsCanResize_ )
	{
		IsCanResize_.reset(boost::initialized_value);
	}
	if ( !MinXLen_ )
	{
		MinXLen_.reset(boost::initialized_value);
	}
	if ( !MaxXLen_ )
	{
		MaxXLen_.reset(boost::initialized_value);
	}
	if ( !XLenStep_ )
	{
		XLenStep_.reset(boost::initialized_value);
	}
	if ( !MinYLen_ )
	{
		MinYLen_.reset(boost::initialized_value);
	}
	if ( !MaxYLen_ )
	{
		MaxYLen_.reset(boost::initialized_value);
	}
	if ( !YLenStep_ )
	{
		YLenStep_.reset(boost::initialized_value);
	}
	if ( !DefaultMatID_ )
	{
		DefaultMatID_.reset(boost::initialized_value);
	}
	if ( !DefaultModelID_ )
	{
		DefaultModelID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !DefaultDoorID_ )
	{
		DefaultDoorID_.reset(boost::initialized_value);
	}
	if ( !CabDesignDoorSystemID_ )
	{
		CabDesignDoorSystemID_.reset(boost::initialized_value);
	}
	if ( !DoorSystemID_ )
	{
		DoorSystemID_.reset(boost::initialized_value);
	}
	if ( !IsUseDefaultSize_ )
	{
		IsUseDefaultSize_.reset(boost::initialized_value);
	}
	if ( !IsUseCutFormula_ )
	{
		IsUseCutFormula_.reset(boost::initialized_value);
	}
	if ( !DoorRegionID_ )
	{
		DoorRegionID_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignDoorRegionInfoImp::SData::ToUtf8()
{
}

void	JK_CabDesignDoorRegionInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabDesignDoorRegionInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignDoorRegionID_ )
	{
		ret.With(CabDesignDoorRegionID.Use(data.CabDesignDoorRegionID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsGroup_ )
	{
		ret.With(IsGroup.Use(data.IsGroup_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.IsCanResize_ )
	{
		ret.With(IsCanResize.Use(data.IsCanResize_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Use(data.MinXLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Use(data.MaxXLen_));
	}
	if ( data.XLenStep_ )
	{
		ret.With(XLenStep.Use(data.XLenStep_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Use(data.MinYLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Use(data.MaxYLen_));
	}
	if ( data.YLenStep_ )
	{
		ret.With(YLenStep.Use(data.YLenStep_));
	}
	if ( data.DefaultMatID_ )
	{
		ret.With(DefaultMatID.Use(data.DefaultMatID_));
	}
	if ( data.DefaultModelID_ )
	{
		ret.With(DefaultModelID.Use(data.DefaultModelID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.DefaultDoorID_ )
	{
		ret.With(DefaultDoorID.Use(data.DefaultDoorID_));
	}
	if ( data.CabDesignDoorSystemID_ )
	{
		ret.With(CabDesignDoorSystemID.Use(data.CabDesignDoorSystemID_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Use(data.DoorSystemID_));
	}
	if ( data.IsUseDefaultSize_ )
	{
		ret.With(IsUseDefaultSize.Use(data.IsUseDefaultSize_));
	}
	if ( data.IsUseCutFormula_ )
	{
		ret.With(IsUseCutFormula.Use(data.IsUseCutFormula_));
	}
	if ( data.DoorRegionID_ )
	{
		ret.With(DoorRegionID.Use(data.DoorRegionID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignDoorRegionInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignDoorRegionID_ )
	{
		ret.With(CabDesignDoorRegionID.Into(data.CabDesignDoorRegionID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsGroup_ )
	{
		ret.With(IsGroup.Into(data.IsGroup_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.IsCanResize_ )
	{
		ret.With(IsCanResize.Into(data.IsCanResize_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Into(data.MinXLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Into(data.MaxXLen_));
	}
	if ( data.XLenStep_ )
	{
		ret.With(XLenStep.Into(data.XLenStep_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Into(data.MinYLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Into(data.MaxYLen_));
	}
	if ( data.YLenStep_ )
	{
		ret.With(YLenStep.Into(data.YLenStep_));
	}
	if ( data.DefaultMatID_ )
	{
		ret.With(DefaultMatID.Into(data.DefaultMatID_));
	}
	if ( data.DefaultModelID_ )
	{
		ret.With(DefaultModelID.Into(data.DefaultModelID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.DefaultDoorID_ )
	{
		ret.With(DefaultDoorID.Into(data.DefaultDoorID_));
	}
	if ( data.CabDesignDoorSystemID_ )
	{
		ret.With(CabDesignDoorSystemID.Into(data.CabDesignDoorSystemID_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Into(data.DoorSystemID_));
	}
	if ( data.IsUseDefaultSize_ )
	{
		ret.With(IsUseDefaultSize.Into(data.IsUseDefaultSize_));
	}
	if ( data.IsUseCutFormula_ )
	{
		ret.With(IsUseCutFormula.Into(data.IsUseCutFormula_));
	}
	if ( data.DoorRegionID_ )
	{
		ret.With(DoorRegionID.Into(data.DoorRegionID_));
	}
	return std::move(ret);
}


JK_CabDesignDoorRegionInfoImp	JK_CabDesignDoorRegionInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignDoorRegionInfoImp(alias));
}

JK_CabDesignDoorRegionInfoImp::JK_CabDesignDoorRegionInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignDoorRegionInfo"), alias)
	,CabDesignDoorRegionID(ImpSPtr_,AUTODB_STR("CabDesignDoorRegionID"))
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsGroup(ImpSPtr_,AUTODB_STR("IsGroup"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,IsCanResize(ImpSPtr_,AUTODB_STR("IsCanResize"))
	,MinXLen(ImpSPtr_,AUTODB_STR("MinXLen"))
	,MaxXLen(ImpSPtr_,AUTODB_STR("MaxXLen"))
	,XLenStep(ImpSPtr_,AUTODB_STR("XLenStep"))
	,MinYLen(ImpSPtr_,AUTODB_STR("MinYLen"))
	,MaxYLen(ImpSPtr_,AUTODB_STR("MaxYLen"))
	,YLenStep(ImpSPtr_,AUTODB_STR("YLenStep"))
	,DefaultMatID(ImpSPtr_,AUTODB_STR("DefaultMatID"))
	,DefaultModelID(ImpSPtr_,AUTODB_STR("DefaultModelID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,DefaultDoorID(ImpSPtr_,AUTODB_STR("DefaultDoorID"))
	,CabDesignDoorSystemID(ImpSPtr_,AUTODB_STR("CabDesignDoorSystemID"))
	,DoorSystemID(ImpSPtr_,AUTODB_STR("DoorSystemID"))
	,IsUseDefaultSize(ImpSPtr_,AUTODB_STR("IsUseDefaultSize"))
	,IsUseCutFormula(ImpSPtr_,AUTODB_STR("IsUseCutFormula"))
	,DoorRegionID(ImpSPtr_,AUTODB_STR("DoorRegionID"))
{}

JK_CabDesignDoorRegionInfoImp::JK_CabDesignDoorRegionInfoImp( const JK_CabDesignDoorRegionInfoImp& rhs ):Table(rhs)
	,CabDesignDoorRegionID(rhs.CabDesignDoorRegionID)
	,CabDesignID(rhs.CabDesignID)
	,IsDel(rhs.IsDel)
	,IsGroup(rhs.IsGroup)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,IsCanResize(rhs.IsCanResize)
	,MinXLen(rhs.MinXLen)
	,MaxXLen(rhs.MaxXLen)
	,XLenStep(rhs.XLenStep)
	,MinYLen(rhs.MinYLen)
	,MaxYLen(rhs.MaxYLen)
	,YLenStep(rhs.YLenStep)
	,DefaultMatID(rhs.DefaultMatID)
	,DefaultModelID(rhs.DefaultModelID)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,DefaultDoorID(rhs.DefaultDoorID)
	,CabDesignDoorSystemID(rhs.CabDesignDoorSystemID)
	,DoorSystemID(rhs.DoorSystemID)
	,IsUseDefaultSize(rhs.IsUseDefaultSize)
	,IsUseCutFormula(rhs.IsUseCutFormula)
	,DoorRegionID(rhs.DoorRegionID)
{}

JK_CabDesignDoorRegionInfoImp::JK_CabDesignDoorRegionInfoImp( JK_CabDesignDoorRegionInfoImp&& rhs ):Table(rhs)
	,CabDesignDoorRegionID(std::move(rhs.CabDesignDoorRegionID))
	,CabDesignID(std::move(rhs.CabDesignID))
	,IsDel(std::move(rhs.IsDel))
	,IsGroup(std::move(rhs.IsGroup))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,IsCanResize(std::move(rhs.IsCanResize))
	,MinXLen(std::move(rhs.MinXLen))
	,MaxXLen(std::move(rhs.MaxXLen))
	,XLenStep(std::move(rhs.XLenStep))
	,MinYLen(std::move(rhs.MinYLen))
	,MaxYLen(std::move(rhs.MaxYLen))
	,YLenStep(std::move(rhs.YLenStep))
	,DefaultMatID(std::move(rhs.DefaultMatID))
	,DefaultModelID(std::move(rhs.DefaultModelID))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,DefaultDoorID(std::move(rhs.DefaultDoorID))
	,CabDesignDoorSystemID(std::move(rhs.CabDesignDoorSystemID))
	,DoorSystemID(std::move(rhs.DoorSystemID))
	,IsUseDefaultSize(std::move(rhs.IsUseDefaultSize))
	,IsUseCutFormula(std::move(rhs.IsUseCutFormula))
	,DoorRegionID(std::move(rhs.DoorRegionID))
{}

JK_CabDesignDoorRegionInfoImp	JK_CabDesignDoorRegionInfo("");



void	JK_CabDesignDoorSystemInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignDoorSystemID_.reset(boost::initialized_value) : CabDesignDoorSystemID_=boost::none;
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? DoorSystemID_.reset(boost::initialized_value) : DoorSystemID_=boost::none;
	val ? InstallFaceType_.reset(boost::initialized_value) : InstallFaceType_=boost::none;
	val ? XAdjustLen_.reset(boost::initialized_value) : XAdjustLen_=boost::none;
	val ? YAdjustLen_.reset(boost::initialized_value) : YAdjustLen_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? IsCanDel_.reset(boost::initialized_value) : IsCanDel_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
}

void	JK_CabDesignDoorSystemInfoImp::SData::Flip()
{
	CabDesignDoorSystemID_ ? CabDesignDoorSystemID_=boost::none : CabDesignDoorSystemID_.reset(boost::initialized_value);
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	DoorSystemID_ ? DoorSystemID_=boost::none : DoorSystemID_.reset(boost::initialized_value);
	InstallFaceType_ ? InstallFaceType_=boost::none : InstallFaceType_.reset(boost::initialized_value);
	XAdjustLen_ ? XAdjustLen_=boost::none : XAdjustLen_.reset(boost::initialized_value);
	YAdjustLen_ ? YAdjustLen_=boost::none : YAdjustLen_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	IsCanDel_ ? IsCanDel_=boost::none : IsCanDel_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
}

void	JK_CabDesignDoorSystemInfoImp::SData::Check()
{
	if ( !CabDesignDoorSystemID_ )
	{
		CabDesignDoorSystemID_.reset(boost::initialized_value);
	}
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !DoorSystemID_ )
	{
		DoorSystemID_.reset(boost::initialized_value);
	}
	if ( !InstallFaceType_ )
	{
		InstallFaceType_.reset(boost::initialized_value);
	}
	if ( !XAdjustLen_ )
	{
		XAdjustLen_.reset(boost::initialized_value);
	}
	if ( !YAdjustLen_ )
	{
		YAdjustLen_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !IsCanDel_ )
	{
		IsCanDel_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignDoorSystemInfoImp::SData::ToUtf8()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
}

void	JK_CabDesignDoorSystemInfoImp::SData::ToAscii()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
}

autoDB::SColumns JK_CabDesignDoorSystemInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignDoorSystemID_ )
	{
		ret.With(CabDesignDoorSystemID.Use(data.CabDesignDoorSystemID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Use(data.DoorSystemID_));
	}
	if ( data.InstallFaceType_ )
	{
		ret.With(InstallFaceType.Use(data.InstallFaceType_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Use(data.XAdjustLen_));
	}
	if ( data.YAdjustLen_ )
	{
		ret.With(YAdjustLen.Use(data.YAdjustLen_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Use(data.IsCanDel_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignDoorSystemInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignDoorSystemID_ )
	{
		ret.With(CabDesignDoorSystemID.Into(data.CabDesignDoorSystemID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Into(data.DoorSystemID_));
	}
	if ( data.InstallFaceType_ )
	{
		ret.With(InstallFaceType.Into(data.InstallFaceType_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Into(data.XAdjustLen_));
	}
	if ( data.YAdjustLen_ )
	{
		ret.With(YAdjustLen.Into(data.YAdjustLen_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Into(data.IsCanDel_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	return std::move(ret);
}


JK_CabDesignDoorSystemInfoImp	JK_CabDesignDoorSystemInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignDoorSystemInfoImp(alias));
}

JK_CabDesignDoorSystemInfoImp::JK_CabDesignDoorSystemInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignDoorSystemInfo"), alias)
	,CabDesignDoorSystemID(ImpSPtr_,AUTODB_STR("CabDesignDoorSystemID"))
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,DoorSystemID(ImpSPtr_,AUTODB_STR("DoorSystemID"))
	,InstallFaceType(ImpSPtr_,AUTODB_STR("InstallFaceType"))
	,XAdjustLen(ImpSPtr_,AUTODB_STR("XAdjustLen"))
	,YAdjustLen(ImpSPtr_,AUTODB_STR("YAdjustLen"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,IsCanDel(ImpSPtr_,AUTODB_STR("IsCanDel"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
{}

JK_CabDesignDoorSystemInfoImp::JK_CabDesignDoorSystemInfoImp( const JK_CabDesignDoorSystemInfoImp& rhs ):Table(rhs)
	,CabDesignDoorSystemID(rhs.CabDesignDoorSystemID)
	,CabDesignID(rhs.CabDesignID)
	,IsDel(rhs.IsDel)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,DoorSystemID(rhs.DoorSystemID)
	,InstallFaceType(rhs.InstallFaceType)
	,XAdjustLen(rhs.XAdjustLen)
	,YAdjustLen(rhs.YAdjustLen)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,IsCanDel(rhs.IsCanDel)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,ZLen(rhs.ZLen)
{}

JK_CabDesignDoorSystemInfoImp::JK_CabDesignDoorSystemInfoImp( JK_CabDesignDoorSystemInfoImp&& rhs ):Table(rhs)
	,CabDesignDoorSystemID(std::move(rhs.CabDesignDoorSystemID))
	,CabDesignID(std::move(rhs.CabDesignID))
	,IsDel(std::move(rhs.IsDel))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,DoorSystemID(std::move(rhs.DoorSystemID))
	,InstallFaceType(std::move(rhs.InstallFaceType))
	,XAdjustLen(std::move(rhs.XAdjustLen))
	,YAdjustLen(std::move(rhs.YAdjustLen))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,IsCanDel(std::move(rhs.IsCanDel))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,ZLen(std::move(rhs.ZLen))
{}

JK_CabDesignDoorSystemInfoImp	JK_CabDesignDoorSystemInfo("");



void	JK_CabDesignFNFittingInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignFNFittingID_.reset(boost::initialized_value) : CabDesignFNFittingID_=boost::none;
	val ? ContainerID_.reset(boost::initialized_value) : ContainerID_=boost::none;
	val ? ContainerGTypeID_.reset(boost::initialized_value) : ContainerGTypeID_=boost::none;
	val ? IsCanDel_.reset(boost::initialized_value) : IsCanDel_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? ZFormula_.reset(boost::initialized_value) : ZFormula_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_CabDesignFNFittingInfoImp::SData::Flip()
{
	CabDesignFNFittingID_ ? CabDesignFNFittingID_=boost::none : CabDesignFNFittingID_.reset(boost::initialized_value);
	ContainerID_ ? ContainerID_=boost::none : ContainerID_.reset(boost::initialized_value);
	ContainerGTypeID_ ? ContainerGTypeID_=boost::none : ContainerGTypeID_.reset(boost::initialized_value);
	IsCanDel_ ? IsCanDel_=boost::none : IsCanDel_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	ZFormula_ ? ZFormula_=boost::none : ZFormula_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_CabDesignFNFittingInfoImp::SData::Check()
{
	if ( !CabDesignFNFittingID_ )
	{
		CabDesignFNFittingID_.reset(boost::initialized_value);
	}
	if ( !ContainerID_ )
	{
		ContainerID_.reset(boost::initialized_value);
	}
	if ( !ContainerGTypeID_ )
	{
		ContainerGTypeID_.reset(boost::initialized_value);
	}
	if ( !IsCanDel_ )
	{
		IsCanDel_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
	}
	if ( !ZFormula_ )
	{
		ZFormula_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_CabDesignFNFittingInfoImp::SData::ToUtf8()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
	if ( ZFormula_ )
	{
		ZFormula_ = boost::locale::conv::to_utf<char>(*ZFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
}

void	JK_CabDesignFNFittingInfoImp::SData::ToAscii()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
	if ( ZFormula_ )
	{
		ZFormula_ = boost::locale::conv::from_utf(*ZFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
}

autoDB::SColumns JK_CabDesignFNFittingInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignFNFittingID_ )
	{
		ret.With(CabDesignFNFittingID.Use(data.CabDesignFNFittingID_));
	}
	if ( data.ContainerID_ )
	{
		ret.With(ContainerID.Use(data.ContainerID_));
	}
	if ( data.ContainerGTypeID_ )
	{
		ret.With(ContainerGTypeID.Use(data.ContainerGTypeID_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Use(data.IsCanDel_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
	}
	if ( data.ZFormula_ )
	{
		ret.With(ZFormula.Use(data.ZFormula_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignFNFittingInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignFNFittingID_ )
	{
		ret.With(CabDesignFNFittingID.Into(data.CabDesignFNFittingID_));
	}
	if ( data.ContainerID_ )
	{
		ret.With(ContainerID.Into(data.ContainerID_));
	}
	if ( data.ContainerGTypeID_ )
	{
		ret.With(ContainerGTypeID.Into(data.ContainerGTypeID_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Into(data.IsCanDel_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
	}
	if ( data.ZFormula_ )
	{
		ret.With(ZFormula.Into(data.ZFormula_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_CabDesignFNFittingInfoImp	JK_CabDesignFNFittingInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignFNFittingInfoImp(alias));
}

JK_CabDesignFNFittingInfoImp::JK_CabDesignFNFittingInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignFNFittingInfo"), alias)
	,CabDesignFNFittingID(ImpSPtr_,AUTODB_STR("CabDesignFNFittingID"))
	,ContainerID(ImpSPtr_,AUTODB_STR("ContainerID"))
	,ContainerGTypeID(ImpSPtr_,AUTODB_STR("ContainerGTypeID"))
	,IsCanDel(ImpSPtr_,AUTODB_STR("IsCanDel"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,ZFormula(ImpSPtr_,AUTODB_STR("ZFormula"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_CabDesignFNFittingInfoImp::JK_CabDesignFNFittingInfoImp( const JK_CabDesignFNFittingInfoImp& rhs ):Table(rhs)
	,CabDesignFNFittingID(rhs.CabDesignFNFittingID)
	,ContainerID(rhs.ContainerID)
	,ContainerGTypeID(rhs.ContainerGTypeID)
	,IsCanDel(rhs.IsCanDel)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,ZFormula(rhs.ZFormula)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,IsDel(rhs.IsDel)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_CabDesignFNFittingInfoImp::JK_CabDesignFNFittingInfoImp( JK_CabDesignFNFittingInfoImp&& rhs ):Table(rhs)
	,CabDesignFNFittingID(std::move(rhs.CabDesignFNFittingID))
	,ContainerID(std::move(rhs.ContainerID))
	,ContainerGTypeID(std::move(rhs.ContainerGTypeID))
	,IsCanDel(std::move(rhs.IsCanDel))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,ZFormula(std::move(rhs.ZFormula))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,IsDel(std::move(rhs.IsDel))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_CabDesignFNFittingInfoImp	JK_CabDesignFNFittingInfo("");



void	JK_CabDesignFNFittingMapInfoImp::SData::SetAll(bool val)
{
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? CabDesignFNFittingID_.reset(boost::initialized_value) : CabDesignFNFittingID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? FNType_.reset(boost::initialized_value) : FNType_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_CabDesignFNFittingMapInfoImp::SData::Flip()
{
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	CabDesignFNFittingID_ ? CabDesignFNFittingID_=boost::none : CabDesignFNFittingID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	FNType_ ? FNType_=boost::none : FNType_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_CabDesignFNFittingMapInfoImp::SData::Check()
{
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !CabDesignFNFittingID_ )
	{
		CabDesignFNFittingID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !FNType_ )
	{
		FNType_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignFNFittingMapInfoImp::SData::ToUtf8()
{
}

void	JK_CabDesignFNFittingMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabDesignFNFittingMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.CabDesignFNFittingID_ )
	{
		ret.With(CabDesignFNFittingID.Use(data.CabDesignFNFittingID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.FNType_ )
	{
		ret.With(FNType.Use(data.FNType_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignFNFittingMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.CabDesignFNFittingID_ )
	{
		ret.With(CabDesignFNFittingID.Into(data.CabDesignFNFittingID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.FNType_ )
	{
		ret.With(FNType.Into(data.FNType_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_CabDesignFNFittingMapInfoImp	JK_CabDesignFNFittingMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignFNFittingMapInfoImp(alias));
}

JK_CabDesignFNFittingMapInfoImp::JK_CabDesignFNFittingMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignFNFittingMapInfo"), alias)
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,CabDesignFNFittingID(ImpSPtr_,AUTODB_STR("CabDesignFNFittingID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,FNType(ImpSPtr_,AUTODB_STR("FNType"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_CabDesignFNFittingMapInfoImp::JK_CabDesignFNFittingMapInfoImp( const JK_CabDesignFNFittingMapInfoImp& rhs ):Table(rhs)
	,FNFittingID(rhs.FNFittingID)
	,CabDesignFNFittingID(rhs.CabDesignFNFittingID)
	,IsDefault(rhs.IsDefault)
	,FNType(rhs.FNType)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_CabDesignFNFittingMapInfoImp::JK_CabDesignFNFittingMapInfoImp( JK_CabDesignFNFittingMapInfoImp&& rhs ):Table(rhs)
	,FNFittingID(std::move(rhs.FNFittingID))
	,CabDesignFNFittingID(std::move(rhs.CabDesignFNFittingID))
	,IsDefault(std::move(rhs.IsDefault))
	,FNType(std::move(rhs.FNType))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_CabDesignFNFittingMapInfoImp	JK_CabDesignFNFittingMapInfo("");



void	JK_CabDesignFootInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? FootID_.reset(boost::initialized_value) : FootID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_CabDesignFootInfoImp::SData::Flip()
{
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	FootID_ ? FootID_=boost::none : FootID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_CabDesignFootInfoImp::SData::Check()
{
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !FootID_ )
	{
		FootID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignFootInfoImp::SData::ToUtf8()
{
}

void	JK_CabDesignFootInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabDesignFootInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.FootID_ )
	{
		ret.With(FootID.Use(data.FootID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignFootInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.FootID_ )
	{
		ret.With(FootID.Into(data.FootID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_CabDesignFootInfoImp	JK_CabDesignFootInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignFootInfoImp(alias));
}

JK_CabDesignFootInfoImp::JK_CabDesignFootInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignFootInfo"), alias)
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,FootID(ImpSPtr_,AUTODB_STR("FootID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_CabDesignFootInfoImp::JK_CabDesignFootInfoImp( const JK_CabDesignFootInfoImp& rhs ):Table(rhs)
	,CabDesignID(rhs.CabDesignID)
	,FootID(rhs.FootID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_CabDesignFootInfoImp::JK_CabDesignFootInfoImp( JK_CabDesignFootInfoImp&& rhs ):Table(rhs)
	,CabDesignID(std::move(rhs.CabDesignID))
	,FootID(std::move(rhs.FootID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_CabDesignFootInfoImp	JK_CabDesignFootInfo("");



void	JK_CabDesignInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? CabFunction_.reset(boost::initialized_value) : CabFunction_=boost::none;
	val ? CabStructID_.reset(boost::initialized_value) : CabStructID_=boost::none;
	val ? PosType_.reset(boost::initialized_value) : PosType_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? CabDesignCode_.reset(boost::initialized_value) : CabDesignCode_=boost::none;
	val ? CabDesignName_.reset(boost::initialized_value) : CabDesignName_=boost::none;
	val ? CabDesignMemo_.reset(boost::initialized_value) : CabDesignMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? PhotoID_.reset(boost::initialized_value) : PhotoID_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
}

void	JK_CabDesignInfoImp::SData::Flip()
{
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	CabFunction_ ? CabFunction_=boost::none : CabFunction_.reset(boost::initialized_value);
	CabStructID_ ? CabStructID_=boost::none : CabStructID_.reset(boost::initialized_value);
	PosType_ ? PosType_=boost::none : PosType_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	CabDesignCode_ ? CabDesignCode_=boost::none : CabDesignCode_.reset(boost::initialized_value);
	CabDesignName_ ? CabDesignName_=boost::none : CabDesignName_.reset(boost::initialized_value);
	CabDesignMemo_ ? CabDesignMemo_=boost::none : CabDesignMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	PhotoID_ ? PhotoID_=boost::none : PhotoID_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
}

void	JK_CabDesignInfoImp::SData::Check()
{
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !CabFunction_ )
	{
		CabFunction_.reset(boost::initialized_value);
	}
	if ( !CabStructID_ )
	{
		CabStructID_.reset(boost::initialized_value);
	}
	if ( !PosType_ )
	{
		PosType_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !CabDesignCode_ )
	{
		CabDesignCode_.reset(boost::initialized_value);
	}
	if ( !CabDesignName_ )
	{
		CabDesignName_.reset(boost::initialized_value);
	}
	if ( !CabDesignMemo_ )
	{
		CabDesignMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !PhotoID_ )
	{
		PhotoID_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignInfoImp::SData::ToUtf8()
{
	if ( CabDesignCode_ )
	{
		CabDesignCode_ = boost::locale::conv::to_utf<char>(*CabDesignCode_, "GBK");
	}
	if ( CabDesignName_ )
	{
		CabDesignName_ = boost::locale::conv::to_utf<char>(*CabDesignName_, "GBK");
	}
	if ( CabDesignMemo_ )
	{
		CabDesignMemo_ = boost::locale::conv::to_utf<char>(*CabDesignMemo_, "GBK");
	}
}

void	JK_CabDesignInfoImp::SData::ToAscii()
{
	if ( CabDesignCode_ )
	{
		CabDesignCode_ = boost::locale::conv::from_utf(*CabDesignCode_, "GBK");
	}
	if ( CabDesignName_ )
	{
		CabDesignName_ = boost::locale::conv::from_utf(*CabDesignName_, "GBK");
	}
	if ( CabDesignMemo_ )
	{
		CabDesignMemo_ = boost::locale::conv::from_utf(*CabDesignMemo_, "GBK");
	}
}

autoDB::SColumns JK_CabDesignInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.CabFunction_ )
	{
		ret.With(CabFunction.Use(data.CabFunction_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Use(data.CabStructID_));
	}
	if ( data.PosType_ )
	{
		ret.With(PosType.Use(data.PosType_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.CabDesignCode_ )
	{
		ret.With(CabDesignCode.Use(data.CabDesignCode_));
	}
	if ( data.CabDesignName_ )
	{
		ret.With(CabDesignName.Use(data.CabDesignName_));
	}
	if ( data.CabDesignMemo_ )
	{
		ret.With(CabDesignMemo.Use(data.CabDesignMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Use(data.PhotoID_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.CabFunction_ )
	{
		ret.With(CabFunction.Into(data.CabFunction_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Into(data.CabStructID_));
	}
	if ( data.PosType_ )
	{
		ret.With(PosType.Into(data.PosType_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.CabDesignCode_ )
	{
		ret.With(CabDesignCode.Into(data.CabDesignCode_));
	}
	if ( data.CabDesignName_ )
	{
		ret.With(CabDesignName.Into(data.CabDesignName_));
	}
	if ( data.CabDesignMemo_ )
	{
		ret.With(CabDesignMemo.Into(data.CabDesignMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Into(data.PhotoID_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	return std::move(ret);
}


JK_CabDesignInfoImp	JK_CabDesignInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignInfoImp(alias));
}

JK_CabDesignInfoImp::JK_CabDesignInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignInfo"), alias)
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,CabFunction(ImpSPtr_,AUTODB_STR("CabFunction"))
	,CabStructID(ImpSPtr_,AUTODB_STR("CabStructID"))
	,PosType(ImpSPtr_,AUTODB_STR("PosType"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,CabDesignCode(ImpSPtr_,AUTODB_STR("CabDesignCode"))
	,CabDesignName(ImpSPtr_,AUTODB_STR("CabDesignName"))
	,CabDesignMemo(ImpSPtr_,AUTODB_STR("CabDesignMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,PhotoID(ImpSPtr_,AUTODB_STR("PhotoID"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
{}

JK_CabDesignInfoImp::JK_CabDesignInfoImp( const JK_CabDesignInfoImp& rhs ):Table(rhs)
	,CabDesignID(rhs.CabDesignID)
	,IsDel(rhs.IsDel)
	,GroupID(rhs.GroupID)
	,CabFunction(rhs.CabFunction)
	,CabStructID(rhs.CabStructID)
	,PosType(rhs.PosType)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,CabDesignCode(rhs.CabDesignCode)
	,CabDesignName(rhs.CabDesignName)
	,CabDesignMemo(rhs.CabDesignMemo)
	,VerCode(rhs.VerCode)
	,PhotoID(rhs.PhotoID)
	,IsActive(rhs.IsActive)
{}

JK_CabDesignInfoImp::JK_CabDesignInfoImp( JK_CabDesignInfoImp&& rhs ):Table(rhs)
	,CabDesignID(std::move(rhs.CabDesignID))
	,IsDel(std::move(rhs.IsDel))
	,GroupID(std::move(rhs.GroupID))
	,CabFunction(std::move(rhs.CabFunction))
	,CabStructID(std::move(rhs.CabStructID))
	,PosType(std::move(rhs.PosType))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,CabDesignCode(std::move(rhs.CabDesignCode))
	,CabDesignName(std::move(rhs.CabDesignName))
	,CabDesignMemo(std::move(rhs.CabDesignMemo))
	,VerCode(std::move(rhs.VerCode))
	,PhotoID(std::move(rhs.PhotoID))
	,IsActive(std::move(rhs.IsActive))
{}

JK_CabDesignInfoImp	JK_CabDesignInfo("");



void	JK_CabDesignMatInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_CabDesignMatInfoImp::SData::Flip()
{
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_CabDesignMatInfoImp::SData::Check()
{
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_CabDesignMatInfoImp::SData::ToUtf8()
{
}

void	JK_CabDesignMatInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabDesignMatInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabDesignMatInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_CabDesignMatInfoImp	JK_CabDesignMatInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabDesignMatInfoImp(alias));
}

JK_CabDesignMatInfoImp::JK_CabDesignMatInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabDesignMatInfo"), alias)
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_CabDesignMatInfoImp::JK_CabDesignMatInfoImp( const JK_CabDesignMatInfoImp& rhs ):Table(rhs)
	,CabDesignID(rhs.CabDesignID)
	,CabMatPlanID(rhs.CabMatPlanID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_CabDesignMatInfoImp::JK_CabDesignMatInfoImp( JK_CabDesignMatInfoImp&& rhs ):Table(rhs)
	,CabDesignID(std::move(rhs.CabDesignID))
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_CabDesignMatInfoImp	JK_CabDesignMatInfo("");



void	JK_CabMatPlanInfoImp::SData::SetAll(bool val)
{
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? CabMatPlanCode_.reset(boost::initialized_value) : CabMatPlanCode_=boost::none;
	val ? CabMatPlanName_.reset(boost::initialized_value) : CabMatPlanName_=boost::none;
	val ? CabMatPlanMemo_.reset(boost::initialized_value) : CabMatPlanMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_CabMatPlanInfoImp::SData::Flip()
{
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	CabMatPlanCode_ ? CabMatPlanCode_=boost::none : CabMatPlanCode_.reset(boost::initialized_value);
	CabMatPlanName_ ? CabMatPlanName_=boost::none : CabMatPlanName_.reset(boost::initialized_value);
	CabMatPlanMemo_ ? CabMatPlanMemo_=boost::none : CabMatPlanMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_CabMatPlanInfoImp::SData::Check()
{
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !CabMatPlanCode_ )
	{
		CabMatPlanCode_.reset(boost::initialized_value);
	}
	if ( !CabMatPlanName_ )
	{
		CabMatPlanName_.reset(boost::initialized_value);
	}
	if ( !CabMatPlanMemo_ )
	{
		CabMatPlanMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_CabMatPlanInfoImp::SData::ToUtf8()
{
	if ( CabMatPlanCode_ )
	{
		CabMatPlanCode_ = boost::locale::conv::to_utf<char>(*CabMatPlanCode_, "GBK");
	}
	if ( CabMatPlanName_ )
	{
		CabMatPlanName_ = boost::locale::conv::to_utf<char>(*CabMatPlanName_, "GBK");
	}
	if ( CabMatPlanMemo_ )
	{
		CabMatPlanMemo_ = boost::locale::conv::to_utf<char>(*CabMatPlanMemo_, "GBK");
	}
}

void	JK_CabMatPlanInfoImp::SData::ToAscii()
{
	if ( CabMatPlanCode_ )
	{
		CabMatPlanCode_ = boost::locale::conv::from_utf(*CabMatPlanCode_, "GBK");
	}
	if ( CabMatPlanName_ )
	{
		CabMatPlanName_ = boost::locale::conv::from_utf(*CabMatPlanName_, "GBK");
	}
	if ( CabMatPlanMemo_ )
	{
		CabMatPlanMemo_ = boost::locale::conv::from_utf(*CabMatPlanMemo_, "GBK");
	}
}

autoDB::SColumns JK_CabMatPlanInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.CabMatPlanCode_ )
	{
		ret.With(CabMatPlanCode.Use(data.CabMatPlanCode_));
	}
	if ( data.CabMatPlanName_ )
	{
		ret.With(CabMatPlanName.Use(data.CabMatPlanName_));
	}
	if ( data.CabMatPlanMemo_ )
	{
		ret.With(CabMatPlanMemo.Use(data.CabMatPlanMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabMatPlanInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.CabMatPlanCode_ )
	{
		ret.With(CabMatPlanCode.Into(data.CabMatPlanCode_));
	}
	if ( data.CabMatPlanName_ )
	{
		ret.With(CabMatPlanName.Into(data.CabMatPlanName_));
	}
	if ( data.CabMatPlanMemo_ )
	{
		ret.With(CabMatPlanMemo.Into(data.CabMatPlanMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_CabMatPlanInfoImp	JK_CabMatPlanInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabMatPlanInfoImp(alias));
}

JK_CabMatPlanInfoImp::JK_CabMatPlanInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabMatPlanInfo"), alias)
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,CabMatPlanCode(ImpSPtr_,AUTODB_STR("CabMatPlanCode"))
	,CabMatPlanName(ImpSPtr_,AUTODB_STR("CabMatPlanName"))
	,CabMatPlanMemo(ImpSPtr_,AUTODB_STR("CabMatPlanMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_CabMatPlanInfoImp::JK_CabMatPlanInfoImp( const JK_CabMatPlanInfoImp& rhs ):Table(rhs)
	,CabMatPlanID(rhs.CabMatPlanID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,FactoryID(rhs.FactoryID)
	,MatGType(rhs.MatGType)
	,MatID(rhs.MatID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,CabMatPlanCode(rhs.CabMatPlanCode)
	,CabMatPlanName(rhs.CabMatPlanName)
	,CabMatPlanMemo(rhs.CabMatPlanMemo)
	,VerCode(rhs.VerCode)
{}

JK_CabMatPlanInfoImp::JK_CabMatPlanInfoImp( JK_CabMatPlanInfoImp&& rhs ):Table(rhs)
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,FactoryID(std::move(rhs.FactoryID))
	,MatGType(std::move(rhs.MatGType))
	,MatID(std::move(rhs.MatID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,CabMatPlanCode(std::move(rhs.CabMatPlanCode))
	,CabMatPlanName(std::move(rhs.CabMatPlanName))
	,CabMatPlanMemo(std::move(rhs.CabMatPlanMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_CabMatPlanInfoImp	JK_CabMatPlanInfo("");



void	JK_CabStructBoardGapInfoImp::SData::SetAll(bool val)
{
	val ? CabStructBoardGapID_.reset(boost::initialized_value) : CabStructBoardGapID_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? GapPos_.reset(boost::initialized_value) : GapPos_=boost::none;
	val ? GapIndex_.reset(boost::initialized_value) : GapIndex_=boost::none;
	val ? GapType_.reset(boost::initialized_value) : GapType_=boost::none;
	val ? GapShape_.reset(boost::initialized_value) : GapShape_=boost::none;
	val ? XLenFormula_.reset(boost::initialized_value) : XLenFormula_=boost::none;
	val ? YLenFormula_.reset(boost::initialized_value) : YLenFormula_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_CabStructBoardGapInfoImp::SData::Flip()
{
	CabStructBoardGapID_ ? CabStructBoardGapID_=boost::none : CabStructBoardGapID_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	GapPos_ ? GapPos_=boost::none : GapPos_.reset(boost::initialized_value);
	GapIndex_ ? GapIndex_=boost::none : GapIndex_.reset(boost::initialized_value);
	GapType_ ? GapType_=boost::none : GapType_.reset(boost::initialized_value);
	GapShape_ ? GapShape_=boost::none : GapShape_.reset(boost::initialized_value);
	XLenFormula_ ? XLenFormula_=boost::none : XLenFormula_.reset(boost::initialized_value);
	YLenFormula_ ? YLenFormula_=boost::none : YLenFormula_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_CabStructBoardGapInfoImp::SData::Check()
{
	if ( !CabStructBoardGapID_ )
	{
		CabStructBoardGapID_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !GapPos_ )
	{
		GapPos_.reset(boost::initialized_value);
	}
	if ( !GapIndex_ )
	{
		GapIndex_.reset(boost::initialized_value);
	}
	if ( !GapType_ )
	{
		GapType_.reset(boost::initialized_value);
	}
	if ( !GapShape_ )
	{
		GapShape_.reset(boost::initialized_value);
	}
	if ( !XLenFormula_ )
	{
		XLenFormula_.reset(boost::initialized_value);
	}
	if ( !YLenFormula_ )
	{
		YLenFormula_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_CabStructBoardGapInfoImp::SData::ToUtf8()
{
	if ( XLenFormula_ )
	{
		XLenFormula_ = boost::locale::conv::to_utf<char>(*XLenFormula_, "GBK");
	}
	if ( YLenFormula_ )
	{
		YLenFormula_ = boost::locale::conv::to_utf<char>(*YLenFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
}

void	JK_CabStructBoardGapInfoImp::SData::ToAscii()
{
	if ( XLenFormula_ )
	{
		XLenFormula_ = boost::locale::conv::from_utf(*XLenFormula_, "GBK");
	}
	if ( YLenFormula_ )
	{
		YLenFormula_ = boost::locale::conv::from_utf(*YLenFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
}

autoDB::SColumns JK_CabStructBoardGapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabStructBoardGapID_ )
	{
		ret.With(CabStructBoardGapID.Use(data.CabStructBoardGapID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.GapPos_ )
	{
		ret.With(GapPos.Use(data.GapPos_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Use(data.GapIndex_));
	}
	if ( data.GapType_ )
	{
		ret.With(GapType.Use(data.GapType_));
	}
	if ( data.GapShape_ )
	{
		ret.With(GapShape.Use(data.GapShape_));
	}
	if ( data.XLenFormula_ )
	{
		ret.With(XLenFormula.Use(data.XLenFormula_));
	}
	if ( data.YLenFormula_ )
	{
		ret.With(YLenFormula.Use(data.YLenFormula_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabStructBoardGapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabStructBoardGapID_ )
	{
		ret.With(CabStructBoardGapID.Into(data.CabStructBoardGapID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.GapPos_ )
	{
		ret.With(GapPos.Into(data.GapPos_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Into(data.GapIndex_));
	}
	if ( data.GapType_ )
	{
		ret.With(GapType.Into(data.GapType_));
	}
	if ( data.GapShape_ )
	{
		ret.With(GapShape.Into(data.GapShape_));
	}
	if ( data.XLenFormula_ )
	{
		ret.With(XLenFormula.Into(data.XLenFormula_));
	}
	if ( data.YLenFormula_ )
	{
		ret.With(YLenFormula.Into(data.YLenFormula_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_CabStructBoardGapInfoImp	JK_CabStructBoardGapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabStructBoardGapInfoImp(alias));
}

JK_CabStructBoardGapInfoImp::JK_CabStructBoardGapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabStructBoardGapInfo"), alias)
	,CabStructBoardGapID(ImpSPtr_,AUTODB_STR("CabStructBoardGapID"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,GapPos(ImpSPtr_,AUTODB_STR("GapPos"))
	,GapIndex(ImpSPtr_,AUTODB_STR("GapIndex"))
	,GapType(ImpSPtr_,AUTODB_STR("GapType"))
	,GapShape(ImpSPtr_,AUTODB_STR("GapShape"))
	,XLenFormula(ImpSPtr_,AUTODB_STR("XLenFormula"))
	,YLenFormula(ImpSPtr_,AUTODB_STR("YLenFormula"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_CabStructBoardGapInfoImp::JK_CabStructBoardGapInfoImp( const JK_CabStructBoardGapInfoImp& rhs ):Table(rhs)
	,CabStructBoardGapID(rhs.CabStructBoardGapID)
	,CabStructBoardID(rhs.CabStructBoardID)
	,GapPos(rhs.GapPos)
	,GapIndex(rhs.GapIndex)
	,GapType(rhs.GapType)
	,GapShape(rhs.GapShape)
	,XLenFormula(rhs.XLenFormula)
	,YLenFormula(rhs.YLenFormula)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,VerCode(rhs.VerCode)
{}

JK_CabStructBoardGapInfoImp::JK_CabStructBoardGapInfoImp( JK_CabStructBoardGapInfoImp&& rhs ):Table(rhs)
	,CabStructBoardGapID(std::move(rhs.CabStructBoardGapID))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,GapPos(std::move(rhs.GapPos))
	,GapIndex(std::move(rhs.GapIndex))
	,GapType(std::move(rhs.GapType))
	,GapShape(std::move(rhs.GapShape))
	,XLenFormula(std::move(rhs.XLenFormula))
	,YLenFormula(std::move(rhs.YLenFormula))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,VerCode(std::move(rhs.VerCode))
{}

JK_CabStructBoardGapInfoImp	JK_CabStructBoardGapInfo("");



void	JK_CabStructBoardInfoImp::SData::SetAll(bool val)
{
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? CabStructID_.reset(boost::initialized_value) : CabStructID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsUseMain_.reset(boost::initialized_value) : IsUseMain_=boost::none;
	val ? IsCanRepeat_.reset(boost::initialized_value) : IsCanRepeat_=boost::none;
	val ? IsCanDel_.reset(boost::initialized_value) : IsCanDel_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? ArcX_.reset(boost::initialized_value) : ArcX_=boost::none;
	val ? ArcY_.reset(boost::initialized_value) : ArcY_=boost::none;
	val ? ArcZ_.reset(boost::initialized_value) : ArcZ_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? CabStructBoardName_.reset(boost::initialized_value) : CabStructBoardName_=boost::none;
	val ? DefaultSkinDirection_.reset(boost::initialized_value) : DefaultSkinDirection_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_CabStructBoardInfoImp::SData::Flip()
{
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	CabStructID_ ? CabStructID_=boost::none : CabStructID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsUseMain_ ? IsUseMain_=boost::none : IsUseMain_.reset(boost::initialized_value);
	IsCanRepeat_ ? IsCanRepeat_=boost::none : IsCanRepeat_.reset(boost::initialized_value);
	IsCanDel_ ? IsCanDel_=boost::none : IsCanDel_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	ArcX_ ? ArcX_=boost::none : ArcX_.reset(boost::initialized_value);
	ArcY_ ? ArcY_=boost::none : ArcY_.reset(boost::initialized_value);
	ArcZ_ ? ArcZ_=boost::none : ArcZ_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	CabStructBoardName_ ? CabStructBoardName_=boost::none : CabStructBoardName_.reset(boost::initialized_value);
	DefaultSkinDirection_ ? DefaultSkinDirection_=boost::none : DefaultSkinDirection_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_CabStructBoardInfoImp::SData::Check()
{
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !CabStructID_ )
	{
		CabStructID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsUseMain_ )
	{
		IsUseMain_.reset(boost::initialized_value);
	}
	if ( !IsCanRepeat_ )
	{
		IsCanRepeat_.reset(boost::initialized_value);
	}
	if ( !IsCanDel_ )
	{
		IsCanDel_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
	}
	if ( !ArcX_ )
	{
		ArcX_.reset(boost::initialized_value);
	}
	if ( !ArcY_ )
	{
		ArcY_.reset(boost::initialized_value);
	}
	if ( !ArcZ_ )
	{
		ArcZ_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !CabStructBoardName_ )
	{
		CabStructBoardName_.reset(boost::initialized_value);
	}
	if ( !DefaultSkinDirection_ )
	{
		DefaultSkinDirection_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_CabStructBoardInfoImp::SData::ToUtf8()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
	if ( CabStructBoardName_ )
	{
		CabStructBoardName_ = boost::locale::conv::to_utf<char>(*CabStructBoardName_, "GBK");
	}
}

void	JK_CabStructBoardInfoImp::SData::ToAscii()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
	if ( CabStructBoardName_ )
	{
		CabStructBoardName_ = boost::locale::conv::from_utf(*CabStructBoardName_, "GBK");
	}
}

autoDB::SColumns JK_CabStructBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Use(data.CabStructID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsUseMain_ )
	{
		ret.With(IsUseMain.Use(data.IsUseMain_));
	}
	if ( data.IsCanRepeat_ )
	{
		ret.With(IsCanRepeat.Use(data.IsCanRepeat_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Use(data.IsCanDel_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Use(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Use(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Use(data.ArcZ_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.CabStructBoardName_ )
	{
		ret.With(CabStructBoardName.Use(data.CabStructBoardName_));
	}
	if ( data.DefaultSkinDirection_ )
	{
		ret.With(DefaultSkinDirection.Use(data.DefaultSkinDirection_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabStructBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Into(data.CabStructID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsUseMain_ )
	{
		ret.With(IsUseMain.Into(data.IsUseMain_));
	}
	if ( data.IsCanRepeat_ )
	{
		ret.With(IsCanRepeat.Into(data.IsCanRepeat_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Into(data.IsCanDel_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Into(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Into(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Into(data.ArcZ_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.CabStructBoardName_ )
	{
		ret.With(CabStructBoardName.Into(data.CabStructBoardName_));
	}
	if ( data.DefaultSkinDirection_ )
	{
		ret.With(DefaultSkinDirection.Into(data.DefaultSkinDirection_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_CabStructBoardInfoImp	JK_CabStructBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabStructBoardInfoImp(alias));
}

JK_CabStructBoardInfoImp::JK_CabStructBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabStructBoardInfo"), alias)
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,CabStructID(ImpSPtr_,AUTODB_STR("CabStructID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsUseMain(ImpSPtr_,AUTODB_STR("IsUseMain"))
	,IsCanRepeat(ImpSPtr_,AUTODB_STR("IsCanRepeat"))
	,IsCanDel(ImpSPtr_,AUTODB_STR("IsCanDel"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,ArcX(ImpSPtr_,AUTODB_STR("ArcX"))
	,ArcY(ImpSPtr_,AUTODB_STR("ArcY"))
	,ArcZ(ImpSPtr_,AUTODB_STR("ArcZ"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,CabStructBoardName(ImpSPtr_,AUTODB_STR("CabStructBoardName"))
	,DefaultSkinDirection(ImpSPtr_,AUTODB_STR("DefaultSkinDirection"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_CabStructBoardInfoImp::JK_CabStructBoardInfoImp( const JK_CabStructBoardInfoImp& rhs ):Table(rhs)
	,CabStructBoardID(rhs.CabStructBoardID)
	,CabStructID(rhs.CabStructID)
	,IsDel(rhs.IsDel)
	,IsUseMain(rhs.IsUseMain)
	,IsCanRepeat(rhs.IsCanRepeat)
	,IsCanDel(rhs.IsCanDel)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,ArcX(rhs.ArcX)
	,ArcY(rhs.ArcY)
	,ArcZ(rhs.ArcZ)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,CabStructBoardName(rhs.CabStructBoardName)
	,DefaultSkinDirection(rhs.DefaultSkinDirection)
	,VerCode(rhs.VerCode)
{}

JK_CabStructBoardInfoImp::JK_CabStructBoardInfoImp( JK_CabStructBoardInfoImp&& rhs ):Table(rhs)
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,CabStructID(std::move(rhs.CabStructID))
	,IsDel(std::move(rhs.IsDel))
	,IsUseMain(std::move(rhs.IsUseMain))
	,IsCanRepeat(std::move(rhs.IsCanRepeat))
	,IsCanDel(std::move(rhs.IsCanDel))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,ArcX(std::move(rhs.ArcX))
	,ArcY(std::move(rhs.ArcY))
	,ArcZ(std::move(rhs.ArcZ))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,CabStructBoardName(std::move(rhs.CabStructBoardName))
	,DefaultSkinDirection(std::move(rhs.DefaultSkinDirection))
	,VerCode(std::move(rhs.VerCode))
{}

JK_CabStructBoardInfoImp	JK_CabStructBoardInfo("");



void	JK_CabStructBoardSealInfoImp::SData::SetAll(bool val)
{
	val ? CabStructBoardSealID_.reset(boost::initialized_value) : CabStructBoardSealID_=boost::none;
	val ? SealOrder_.reset(boost::initialized_value) : SealOrder_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? SealType_.reset(boost::initialized_value) : SealType_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
}

void	JK_CabStructBoardSealInfoImp::SData::Flip()
{
	CabStructBoardSealID_ ? CabStructBoardSealID_=boost::none : CabStructBoardSealID_.reset(boost::initialized_value);
	SealOrder_ ? SealOrder_=boost::none : SealOrder_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	SealType_ ? SealType_=boost::none : SealType_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
}

void	JK_CabStructBoardSealInfoImp::SData::Check()
{
	if ( !CabStructBoardSealID_ )
	{
		CabStructBoardSealID_.reset(boost::initialized_value);
	}
	if ( !SealOrder_ )
	{
		SealOrder_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !SealType_ )
	{
		SealType_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
}

void	JK_CabStructBoardSealInfoImp::SData::ToUtf8()
{
}

void	JK_CabStructBoardSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabStructBoardSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabStructBoardSealID_ )
	{
		ret.With(CabStructBoardSealID.Use(data.CabStructBoardSealID_));
	}
	if ( data.SealOrder_ )
	{
		ret.With(SealOrder.Use(data.SealOrder_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Use(data.SealType_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabStructBoardSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabStructBoardSealID_ )
	{
		ret.With(CabStructBoardSealID.Into(data.CabStructBoardSealID_));
	}
	if ( data.SealOrder_ )
	{
		ret.With(SealOrder.Into(data.SealOrder_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Into(data.SealType_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	return std::move(ret);
}


JK_CabStructBoardSealInfoImp	JK_CabStructBoardSealInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabStructBoardSealInfoImp(alias));
}

JK_CabStructBoardSealInfoImp::JK_CabStructBoardSealInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabStructBoardSealInfo"), alias)
	,CabStructBoardSealID(ImpSPtr_,AUTODB_STR("CabStructBoardSealID"))
	,SealOrder(ImpSPtr_,AUTODB_STR("SealOrder"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,SealType(ImpSPtr_,AUTODB_STR("SealType"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
{}

JK_CabStructBoardSealInfoImp::JK_CabStructBoardSealInfoImp( const JK_CabStructBoardSealInfoImp& rhs ):Table(rhs)
	,CabStructBoardSealID(rhs.CabStructBoardSealID)
	,SealOrder(rhs.SealOrder)
	,CabStructBoardID(rhs.CabStructBoardID)
	,SealType(rhs.SealType)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,SealIndex(rhs.SealIndex)
{}

JK_CabStructBoardSealInfoImp::JK_CabStructBoardSealInfoImp( JK_CabStructBoardSealInfoImp&& rhs ):Table(rhs)
	,CabStructBoardSealID(std::move(rhs.CabStructBoardSealID))
	,SealOrder(std::move(rhs.SealOrder))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,SealType(std::move(rhs.SealType))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,SealIndex(std::move(rhs.SealIndex))
{}

JK_CabStructBoardSealInfoImp	JK_CabStructBoardSealInfo("");



void	JK_CabStructGapInfoImp::SData::SetAll(bool val)
{
	val ? CabStructGapID_.reset(boost::initialized_value) : CabStructGapID_=boost::none;
	val ? CabStructID_.reset(boost::initialized_value) : CabStructID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CabGapType_.reset(boost::initialized_value) : CabGapType_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? ZFormula_.reset(boost::initialized_value) : ZFormula_=boost::none;
	val ? XVar_.reset(boost::initialized_value) : XVar_=boost::none;
	val ? YVar_.reset(boost::initialized_value) : YVar_=boost::none;
	val ? ZVar_.reset(boost::initialized_value) : ZVar_=boost::none;
	val ? XVarName_.reset(boost::initialized_value) : XVarName_=boost::none;
	val ? YVarName_.reset(boost::initialized_value) : YVarName_=boost::none;
	val ? ZVarName_.reset(boost::initialized_value) : ZVarName_=boost::none;
	val ? CabStructCabStructGapCode_.reset(boost::initialized_value) : CabStructCabStructGapCode_=boost::none;
	val ? CabStructGapName_.reset(boost::initialized_value) : CabStructGapName_=boost::none;
	val ? CabStructGapMemo_.reset(boost::initialized_value) : CabStructGapMemo_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_CabStructGapInfoImp::SData::Flip()
{
	CabStructGapID_ ? CabStructGapID_=boost::none : CabStructGapID_.reset(boost::initialized_value);
	CabStructID_ ? CabStructID_=boost::none : CabStructID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CabGapType_ ? CabGapType_=boost::none : CabGapType_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	ZFormula_ ? ZFormula_=boost::none : ZFormula_.reset(boost::initialized_value);
	XVar_ ? XVar_=boost::none : XVar_.reset(boost::initialized_value);
	YVar_ ? YVar_=boost::none : YVar_.reset(boost::initialized_value);
	ZVar_ ? ZVar_=boost::none : ZVar_.reset(boost::initialized_value);
	XVarName_ ? XVarName_=boost::none : XVarName_.reset(boost::initialized_value);
	YVarName_ ? YVarName_=boost::none : YVarName_.reset(boost::initialized_value);
	ZVarName_ ? ZVarName_=boost::none : ZVarName_.reset(boost::initialized_value);
	CabStructCabStructGapCode_ ? CabStructCabStructGapCode_=boost::none : CabStructCabStructGapCode_.reset(boost::initialized_value);
	CabStructGapName_ ? CabStructGapName_=boost::none : CabStructGapName_.reset(boost::initialized_value);
	CabStructGapMemo_ ? CabStructGapMemo_=boost::none : CabStructGapMemo_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_CabStructGapInfoImp::SData::Check()
{
	if ( !CabStructGapID_ )
	{
		CabStructGapID_.reset(boost::initialized_value);
	}
	if ( !CabStructID_ )
	{
		CabStructID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CabGapType_ )
	{
		CabGapType_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
	}
	if ( !ZFormula_ )
	{
		ZFormula_.reset(boost::initialized_value);
	}
	if ( !XVar_ )
	{
		XVar_.reset(boost::initialized_value);
	}
	if ( !YVar_ )
	{
		YVar_.reset(boost::initialized_value);
	}
	if ( !ZVar_ )
	{
		ZVar_.reset(boost::initialized_value);
	}
	if ( !XVarName_ )
	{
		XVarName_.reset(boost::initialized_value);
	}
	if ( !YVarName_ )
	{
		YVarName_.reset(boost::initialized_value);
	}
	if ( !ZVarName_ )
	{
		ZVarName_.reset(boost::initialized_value);
	}
	if ( !CabStructCabStructGapCode_ )
	{
		CabStructCabStructGapCode_.reset(boost::initialized_value);
	}
	if ( !CabStructGapName_ )
	{
		CabStructGapName_.reset(boost::initialized_value);
	}
	if ( !CabStructGapMemo_ )
	{
		CabStructGapMemo_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_CabStructGapInfoImp::SData::ToUtf8()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
	if ( ZFormula_ )
	{
		ZFormula_ = boost::locale::conv::to_utf<char>(*ZFormula_, "GBK");
	}
	if ( XVar_ )
	{
		XVar_ = boost::locale::conv::to_utf<char>(*XVar_, "GBK");
	}
	if ( YVar_ )
	{
		YVar_ = boost::locale::conv::to_utf<char>(*YVar_, "GBK");
	}
	if ( ZVar_ )
	{
		ZVar_ = boost::locale::conv::to_utf<char>(*ZVar_, "GBK");
	}
	if ( XVarName_ )
	{
		XVarName_ = boost::locale::conv::to_utf<char>(*XVarName_, "GBK");
	}
	if ( YVarName_ )
	{
		YVarName_ = boost::locale::conv::to_utf<char>(*YVarName_, "GBK");
	}
	if ( ZVarName_ )
	{
		ZVarName_ = boost::locale::conv::to_utf<char>(*ZVarName_, "GBK");
	}
	if ( CabStructCabStructGapCode_ )
	{
		CabStructCabStructGapCode_ = boost::locale::conv::to_utf<char>(*CabStructCabStructGapCode_, "GBK");
	}
	if ( CabStructGapName_ )
	{
		CabStructGapName_ = boost::locale::conv::to_utf<char>(*CabStructGapName_, "GBK");
	}
	if ( CabStructGapMemo_ )
	{
		CabStructGapMemo_ = boost::locale::conv::to_utf<char>(*CabStructGapMemo_, "GBK");
	}
}

void	JK_CabStructGapInfoImp::SData::ToAscii()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
	if ( ZFormula_ )
	{
		ZFormula_ = boost::locale::conv::from_utf(*ZFormula_, "GBK");
	}
	if ( XVar_ )
	{
		XVar_ = boost::locale::conv::from_utf(*XVar_, "GBK");
	}
	if ( YVar_ )
	{
		YVar_ = boost::locale::conv::from_utf(*YVar_, "GBK");
	}
	if ( ZVar_ )
	{
		ZVar_ = boost::locale::conv::from_utf(*ZVar_, "GBK");
	}
	if ( XVarName_ )
	{
		XVarName_ = boost::locale::conv::from_utf(*XVarName_, "GBK");
	}
	if ( YVarName_ )
	{
		YVarName_ = boost::locale::conv::from_utf(*YVarName_, "GBK");
	}
	if ( ZVarName_ )
	{
		ZVarName_ = boost::locale::conv::from_utf(*ZVarName_, "GBK");
	}
	if ( CabStructCabStructGapCode_ )
	{
		CabStructCabStructGapCode_ = boost::locale::conv::from_utf(*CabStructCabStructGapCode_, "GBK");
	}
	if ( CabStructGapName_ )
	{
		CabStructGapName_ = boost::locale::conv::from_utf(*CabStructGapName_, "GBK");
	}
	if ( CabStructGapMemo_ )
	{
		CabStructGapMemo_ = boost::locale::conv::from_utf(*CabStructGapMemo_, "GBK");
	}
}

autoDB::SColumns JK_CabStructGapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabStructGapID_ )
	{
		ret.With(CabStructGapID.Use(data.CabStructGapID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Use(data.CabStructID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CabGapType_ )
	{
		ret.With(CabGapType.Use(data.CabGapType_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
	}
	if ( data.ZFormula_ )
	{
		ret.With(ZFormula.Use(data.ZFormula_));
	}
	if ( data.XVar_ )
	{
		ret.With(XVar.Use(data.XVar_));
	}
	if ( data.YVar_ )
	{
		ret.With(YVar.Use(data.YVar_));
	}
	if ( data.ZVar_ )
	{
		ret.With(ZVar.Use(data.ZVar_));
	}
	if ( data.XVarName_ )
	{
		ret.With(XVarName.Use(data.XVarName_));
	}
	if ( data.YVarName_ )
	{
		ret.With(YVarName.Use(data.YVarName_));
	}
	if ( data.ZVarName_ )
	{
		ret.With(ZVarName.Use(data.ZVarName_));
	}
	if ( data.CabStructCabStructGapCode_ )
	{
		ret.With(CabStructCabStructGapCode.Use(data.CabStructCabStructGapCode_));
	}
	if ( data.CabStructGapName_ )
	{
		ret.With(CabStructGapName.Use(data.CabStructGapName_));
	}
	if ( data.CabStructGapMemo_ )
	{
		ret.With(CabStructGapMemo.Use(data.CabStructGapMemo_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabStructGapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabStructGapID_ )
	{
		ret.With(CabStructGapID.Into(data.CabStructGapID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Into(data.CabStructID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CabGapType_ )
	{
		ret.With(CabGapType.Into(data.CabGapType_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
	}
	if ( data.ZFormula_ )
	{
		ret.With(ZFormula.Into(data.ZFormula_));
	}
	if ( data.XVar_ )
	{
		ret.With(XVar.Into(data.XVar_));
	}
	if ( data.YVar_ )
	{
		ret.With(YVar.Into(data.YVar_));
	}
	if ( data.ZVar_ )
	{
		ret.With(ZVar.Into(data.ZVar_));
	}
	if ( data.XVarName_ )
	{
		ret.With(XVarName.Into(data.XVarName_));
	}
	if ( data.YVarName_ )
	{
		ret.With(YVarName.Into(data.YVarName_));
	}
	if ( data.ZVarName_ )
	{
		ret.With(ZVarName.Into(data.ZVarName_));
	}
	if ( data.CabStructCabStructGapCode_ )
	{
		ret.With(CabStructCabStructGapCode.Into(data.CabStructCabStructGapCode_));
	}
	if ( data.CabStructGapName_ )
	{
		ret.With(CabStructGapName.Into(data.CabStructGapName_));
	}
	if ( data.CabStructGapMemo_ )
	{
		ret.With(CabStructGapMemo.Into(data.CabStructGapMemo_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_CabStructGapInfoImp	JK_CabStructGapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabStructGapInfoImp(alias));
}

JK_CabStructGapInfoImp::JK_CabStructGapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabStructGapInfo"), alias)
	,CabStructGapID(ImpSPtr_,AUTODB_STR("CabStructGapID"))
	,CabStructID(ImpSPtr_,AUTODB_STR("CabStructID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CabGapType(ImpSPtr_,AUTODB_STR("CabGapType"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,ZFormula(ImpSPtr_,AUTODB_STR("ZFormula"))
	,XVar(ImpSPtr_,AUTODB_STR("XVar"))
	,YVar(ImpSPtr_,AUTODB_STR("YVar"))
	,ZVar(ImpSPtr_,AUTODB_STR("ZVar"))
	,XVarName(ImpSPtr_,AUTODB_STR("XVarName"))
	,YVarName(ImpSPtr_,AUTODB_STR("YVarName"))
	,ZVarName(ImpSPtr_,AUTODB_STR("ZVarName"))
	,CabStructCabStructGapCode(ImpSPtr_,AUTODB_STR("CabStructCabStructGapCode"))
	,CabStructGapName(ImpSPtr_,AUTODB_STR("CabStructGapName"))
	,CabStructGapMemo(ImpSPtr_,AUTODB_STR("CabStructGapMemo"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_CabStructGapInfoImp::JK_CabStructGapInfoImp( const JK_CabStructGapInfoImp& rhs ):Table(rhs)
	,CabStructGapID(rhs.CabStructGapID)
	,CabStructID(rhs.CabStructID)
	,IsDel(rhs.IsDel)
	,FactoryID(rhs.FactoryID)
	,CabGapType(rhs.CabGapType)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,ZFormula(rhs.ZFormula)
	,XVar(rhs.XVar)
	,YVar(rhs.YVar)
	,ZVar(rhs.ZVar)
	,XVarName(rhs.XVarName)
	,YVarName(rhs.YVarName)
	,ZVarName(rhs.ZVarName)
	,CabStructCabStructGapCode(rhs.CabStructCabStructGapCode)
	,CabStructGapName(rhs.CabStructGapName)
	,CabStructGapMemo(rhs.CabStructGapMemo)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,VerCode(rhs.VerCode)
{}

JK_CabStructGapInfoImp::JK_CabStructGapInfoImp( JK_CabStructGapInfoImp&& rhs ):Table(rhs)
	,CabStructGapID(std::move(rhs.CabStructGapID))
	,CabStructID(std::move(rhs.CabStructID))
	,IsDel(std::move(rhs.IsDel))
	,FactoryID(std::move(rhs.FactoryID))
	,CabGapType(std::move(rhs.CabGapType))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,ZFormula(std::move(rhs.ZFormula))
	,XVar(std::move(rhs.XVar))
	,YVar(std::move(rhs.YVar))
	,ZVar(std::move(rhs.ZVar))
	,XVarName(std::move(rhs.XVarName))
	,YVarName(std::move(rhs.YVarName))
	,ZVarName(std::move(rhs.ZVarName))
	,CabStructCabStructGapCode(std::move(rhs.CabStructCabStructGapCode))
	,CabStructGapName(std::move(rhs.CabStructGapName))
	,CabStructGapMemo(std::move(rhs.CabStructGapMemo))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,VerCode(std::move(rhs.VerCode))
{}

JK_CabStructGapInfoImp	JK_CabStructGapInfo("");



void	JK_CabStructInfoImp::SData::SetAll(bool val)
{
	val ? CabStructID_.reset(boost::initialized_value) : CabStructID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? CabGapType_.reset(boost::initialized_value) : CabGapType_=boost::none;
	val ? CabShapeID_.reset(boost::initialized_value) : CabShapeID_=boost::none;
	val ? VirtualXLen_.reset(boost::initialized_value) : VirtualXLen_=boost::none;
	val ? VirtualYLen_.reset(boost::initialized_value) : VirtualYLen_=boost::none;
	val ? VirtualZLen_.reset(boost::initialized_value) : VirtualZLen_=boost::none;
	val ? VirtualShapeXLen_.reset(boost::initialized_value) : VirtualShapeXLen_=boost::none;
	val ? VirtualShapeZLen_.reset(boost::initialized_value) : VirtualShapeZLen_=boost::none;
	val ? VirtualGapXLen_.reset(boost::initialized_value) : VirtualGapXLen_=boost::none;
	val ? VirtualGapYLen_.reset(boost::initialized_value) : VirtualGapYLen_=boost::none;
	val ? VirtualGapZLen_.reset(boost::initialized_value) : VirtualGapZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? CabStructCode_.reset(boost::initialized_value) : CabStructCode_=boost::none;
	val ? CabStructName_.reset(boost::initialized_value) : CabStructName_=boost::none;
	val ? CabStructMemo_.reset(boost::initialized_value) : CabStructMemo_=boost::none;
}

void	JK_CabStructInfoImp::SData::Flip()
{
	CabStructID_ ? CabStructID_=boost::none : CabStructID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	CabGapType_ ? CabGapType_=boost::none : CabGapType_.reset(boost::initialized_value);
	CabShapeID_ ? CabShapeID_=boost::none : CabShapeID_.reset(boost::initialized_value);
	VirtualXLen_ ? VirtualXLen_=boost::none : VirtualXLen_.reset(boost::initialized_value);
	VirtualYLen_ ? VirtualYLen_=boost::none : VirtualYLen_.reset(boost::initialized_value);
	VirtualZLen_ ? VirtualZLen_=boost::none : VirtualZLen_.reset(boost::initialized_value);
	VirtualShapeXLen_ ? VirtualShapeXLen_=boost::none : VirtualShapeXLen_.reset(boost::initialized_value);
	VirtualShapeZLen_ ? VirtualShapeZLen_=boost::none : VirtualShapeZLen_.reset(boost::initialized_value);
	VirtualGapXLen_ ? VirtualGapXLen_=boost::none : VirtualGapXLen_.reset(boost::initialized_value);
	VirtualGapYLen_ ? VirtualGapYLen_=boost::none : VirtualGapYLen_.reset(boost::initialized_value);
	VirtualGapZLen_ ? VirtualGapZLen_=boost::none : VirtualGapZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	CabStructCode_ ? CabStructCode_=boost::none : CabStructCode_.reset(boost::initialized_value);
	CabStructName_ ? CabStructName_=boost::none : CabStructName_.reset(boost::initialized_value);
	CabStructMemo_ ? CabStructMemo_=boost::none : CabStructMemo_.reset(boost::initialized_value);
}

void	JK_CabStructInfoImp::SData::Check()
{
	if ( !CabStructID_ )
	{
		CabStructID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !CabGapType_ )
	{
		CabGapType_.reset(boost::initialized_value);
	}
	if ( !CabShapeID_ )
	{
		CabShapeID_.reset(boost::initialized_value);
	}
	if ( !VirtualXLen_ )
	{
		VirtualXLen_.reset(boost::initialized_value);
	}
	if ( !VirtualYLen_ )
	{
		VirtualYLen_.reset(boost::initialized_value);
	}
	if ( !VirtualZLen_ )
	{
		VirtualZLen_.reset(boost::initialized_value);
	}
	if ( !VirtualShapeXLen_ )
	{
		VirtualShapeXLen_.reset(boost::initialized_value);
	}
	if ( !VirtualShapeZLen_ )
	{
		VirtualShapeZLen_.reset(boost::initialized_value);
	}
	if ( !VirtualGapXLen_ )
	{
		VirtualGapXLen_.reset(boost::initialized_value);
	}
	if ( !VirtualGapYLen_ )
	{
		VirtualGapYLen_.reset(boost::initialized_value);
	}
	if ( !VirtualGapZLen_ )
	{
		VirtualGapZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !CabStructCode_ )
	{
		CabStructCode_.reset(boost::initialized_value);
	}
	if ( !CabStructName_ )
	{
		CabStructName_.reset(boost::initialized_value);
	}
	if ( !CabStructMemo_ )
	{
		CabStructMemo_.reset(boost::initialized_value);
	}
}

void	JK_CabStructInfoImp::SData::ToUtf8()
{
	if ( CabStructCode_ )
	{
		CabStructCode_ = boost::locale::conv::to_utf<char>(*CabStructCode_, "GBK");
	}
	if ( CabStructName_ )
	{
		CabStructName_ = boost::locale::conv::to_utf<char>(*CabStructName_, "GBK");
	}
	if ( CabStructMemo_ )
	{
		CabStructMemo_ = boost::locale::conv::to_utf<char>(*CabStructMemo_, "GBK");
	}
}

void	JK_CabStructInfoImp::SData::ToAscii()
{
	if ( CabStructCode_ )
	{
		CabStructCode_ = boost::locale::conv::from_utf(*CabStructCode_, "GBK");
	}
	if ( CabStructName_ )
	{
		CabStructName_ = boost::locale::conv::from_utf(*CabStructName_, "GBK");
	}
	if ( CabStructMemo_ )
	{
		CabStructMemo_ = boost::locale::conv::from_utf(*CabStructMemo_, "GBK");
	}
}

autoDB::SColumns JK_CabStructInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Use(data.CabStructID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.CabGapType_ )
	{
		ret.With(CabGapType.Use(data.CabGapType_));
	}
	if ( data.CabShapeID_ )
	{
		ret.With(CabShapeID.Use(data.CabShapeID_));
	}
	if ( data.VirtualXLen_ )
	{
		ret.With(VirtualXLen.Use(data.VirtualXLen_));
	}
	if ( data.VirtualYLen_ )
	{
		ret.With(VirtualYLen.Use(data.VirtualYLen_));
	}
	if ( data.VirtualZLen_ )
	{
		ret.With(VirtualZLen.Use(data.VirtualZLen_));
	}
	if ( data.VirtualShapeXLen_ )
	{
		ret.With(VirtualShapeXLen.Use(data.VirtualShapeXLen_));
	}
	if ( data.VirtualShapeZLen_ )
	{
		ret.With(VirtualShapeZLen.Use(data.VirtualShapeZLen_));
	}
	if ( data.VirtualGapXLen_ )
	{
		ret.With(VirtualGapXLen.Use(data.VirtualGapXLen_));
	}
	if ( data.VirtualGapYLen_ )
	{
		ret.With(VirtualGapYLen.Use(data.VirtualGapYLen_));
	}
	if ( data.VirtualGapZLen_ )
	{
		ret.With(VirtualGapZLen.Use(data.VirtualGapZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.CabStructCode_ )
	{
		ret.With(CabStructCode.Use(data.CabStructCode_));
	}
	if ( data.CabStructName_ )
	{
		ret.With(CabStructName.Use(data.CabStructName_));
	}
	if ( data.CabStructMemo_ )
	{
		ret.With(CabStructMemo.Use(data.CabStructMemo_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabStructInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Into(data.CabStructID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.CabGapType_ )
	{
		ret.With(CabGapType.Into(data.CabGapType_));
	}
	if ( data.CabShapeID_ )
	{
		ret.With(CabShapeID.Into(data.CabShapeID_));
	}
	if ( data.VirtualXLen_ )
	{
		ret.With(VirtualXLen.Into(data.VirtualXLen_));
	}
	if ( data.VirtualYLen_ )
	{
		ret.With(VirtualYLen.Into(data.VirtualYLen_));
	}
	if ( data.VirtualZLen_ )
	{
		ret.With(VirtualZLen.Into(data.VirtualZLen_));
	}
	if ( data.VirtualShapeXLen_ )
	{
		ret.With(VirtualShapeXLen.Into(data.VirtualShapeXLen_));
	}
	if ( data.VirtualShapeZLen_ )
	{
		ret.With(VirtualShapeZLen.Into(data.VirtualShapeZLen_));
	}
	if ( data.VirtualGapXLen_ )
	{
		ret.With(VirtualGapXLen.Into(data.VirtualGapXLen_));
	}
	if ( data.VirtualGapYLen_ )
	{
		ret.With(VirtualGapYLen.Into(data.VirtualGapYLen_));
	}
	if ( data.VirtualGapZLen_ )
	{
		ret.With(VirtualGapZLen.Into(data.VirtualGapZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.CabStructCode_ )
	{
		ret.With(CabStructCode.Into(data.CabStructCode_));
	}
	if ( data.CabStructName_ )
	{
		ret.With(CabStructName.Into(data.CabStructName_));
	}
	if ( data.CabStructMemo_ )
	{
		ret.With(CabStructMemo.Into(data.CabStructMemo_));
	}
	return std::move(ret);
}


JK_CabStructInfoImp	JK_CabStructInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabStructInfoImp(alias));
}

JK_CabStructInfoImp::JK_CabStructInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabStructInfo"), alias)
	,CabStructID(ImpSPtr_,AUTODB_STR("CabStructID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,CabGapType(ImpSPtr_,AUTODB_STR("CabGapType"))
	,CabShapeID(ImpSPtr_,AUTODB_STR("CabShapeID"))
	,VirtualXLen(ImpSPtr_,AUTODB_STR("VirtualXLen"))
	,VirtualYLen(ImpSPtr_,AUTODB_STR("VirtualYLen"))
	,VirtualZLen(ImpSPtr_,AUTODB_STR("VirtualZLen"))
	,VirtualShapeXLen(ImpSPtr_,AUTODB_STR("VirtualShapeXLen"))
	,VirtualShapeZLen(ImpSPtr_,AUTODB_STR("VirtualShapeZLen"))
	,VirtualGapXLen(ImpSPtr_,AUTODB_STR("VirtualGapXLen"))
	,VirtualGapYLen(ImpSPtr_,AUTODB_STR("VirtualGapYLen"))
	,VirtualGapZLen(ImpSPtr_,AUTODB_STR("VirtualGapZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,CabStructCode(ImpSPtr_,AUTODB_STR("CabStructCode"))
	,CabStructName(ImpSPtr_,AUTODB_STR("CabStructName"))
	,CabStructMemo(ImpSPtr_,AUTODB_STR("CabStructMemo"))
{}

JK_CabStructInfoImp::JK_CabStructInfoImp( const JK_CabStructInfoImp& rhs ):Table(rhs)
	,CabStructID(rhs.CabStructID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,CabGapType(rhs.CabGapType)
	,CabShapeID(rhs.CabShapeID)
	,VirtualXLen(rhs.VirtualXLen)
	,VirtualYLen(rhs.VirtualYLen)
	,VirtualZLen(rhs.VirtualZLen)
	,VirtualShapeXLen(rhs.VirtualShapeXLen)
	,VirtualShapeZLen(rhs.VirtualShapeZLen)
	,VirtualGapXLen(rhs.VirtualGapXLen)
	,VirtualGapYLen(rhs.VirtualGapYLen)
	,VirtualGapZLen(rhs.VirtualGapZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,CabStructCode(rhs.CabStructCode)
	,CabStructName(rhs.CabStructName)
	,CabStructMemo(rhs.CabStructMemo)
{}

JK_CabStructInfoImp::JK_CabStructInfoImp( JK_CabStructInfoImp&& rhs ):Table(rhs)
	,CabStructID(std::move(rhs.CabStructID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,CabGapType(std::move(rhs.CabGapType))
	,CabShapeID(std::move(rhs.CabShapeID))
	,VirtualXLen(std::move(rhs.VirtualXLen))
	,VirtualYLen(std::move(rhs.VirtualYLen))
	,VirtualZLen(std::move(rhs.VirtualZLen))
	,VirtualShapeXLen(std::move(rhs.VirtualShapeXLen))
	,VirtualShapeZLen(std::move(rhs.VirtualShapeZLen))
	,VirtualGapXLen(std::move(rhs.VirtualGapXLen))
	,VirtualGapYLen(std::move(rhs.VirtualGapYLen))
	,VirtualGapZLen(std::move(rhs.VirtualGapZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,CabStructCode(std::move(rhs.CabStructCode))
	,CabStructName(std::move(rhs.CabStructName))
	,CabStructMemo(std::move(rhs.CabStructMemo))
{}

JK_CabStructInfoImp	JK_CabStructInfo("");



void	JK_CabStructMatPlanMapInfoImp::SData::SetAll(bool val)
{
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? CabStructID_.reset(boost::initialized_value) : CabStructID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_CabStructMatPlanMapInfoImp::SData::Flip()
{
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	CabStructID_ ? CabStructID_=boost::none : CabStructID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_CabStructMatPlanMapInfoImp::SData::Check()
{
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !CabStructID_ )
	{
		CabStructID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_CabStructMatPlanMapInfoImp::SData::ToUtf8()
{
}

void	JK_CabStructMatPlanMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabStructMatPlanMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Use(data.CabStructID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabStructMatPlanMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Into(data.CabStructID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_CabStructMatPlanMapInfoImp	JK_CabStructMatPlanMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabStructMatPlanMapInfoImp(alias));
}

JK_CabStructMatPlanMapInfoImp::JK_CabStructMatPlanMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabStructMatPlanMapInfo"), alias)
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,CabStructID(ImpSPtr_,AUTODB_STR("CabStructID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_CabStructMatPlanMapInfoImp::JK_CabStructMatPlanMapInfoImp( const JK_CabStructMatPlanMapInfoImp& rhs ):Table(rhs)
	,CabMatPlanID(rhs.CabMatPlanID)
	,CabStructID(rhs.CabStructID)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_CabStructMatPlanMapInfoImp::JK_CabStructMatPlanMapInfoImp( JK_CabStructMatPlanMapInfoImp&& rhs ):Table(rhs)
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,CabStructID(std::move(rhs.CabStructID))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_CabStructMatPlanMapInfoImp	JK_CabStructMatPlanMapInfo("");



void	JK_CabinetSizeBoardInfoImp::SData::SetAll(bool val)
{
	val ? CabinetSizeBoardID_.reset(boost::initialized_value) : CabinetSizeBoardID_=boost::none;
	val ? CabinetSizeID_.reset(boost::initialized_value) : CabinetSizeID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? IsCanRelocate_.reset(boost::initialized_value) : IsCanRelocate_=boost::none;
	val ? IsCanDel_.reset(boost::initialized_value) : IsCanDel_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? CabStructBoardName_.reset(boost::initialized_value) : CabStructBoardName_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_CabinetSizeBoardInfoImp::SData::Flip()
{
	CabinetSizeBoardID_ ? CabinetSizeBoardID_=boost::none : CabinetSizeBoardID_.reset(boost::initialized_value);
	CabinetSizeID_ ? CabinetSizeID_=boost::none : CabinetSizeID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	IsCanRelocate_ ? IsCanRelocate_=boost::none : IsCanRelocate_.reset(boost::initialized_value);
	IsCanDel_ ? IsCanDel_=boost::none : IsCanDel_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	CabStructBoardName_ ? CabStructBoardName_=boost::none : CabStructBoardName_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_CabinetSizeBoardInfoImp::SData::Check()
{
	if ( !CabinetSizeBoardID_ )
	{
		CabinetSizeBoardID_.reset(boost::initialized_value);
	}
	if ( !CabinetSizeID_ )
	{
		CabinetSizeID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !IsCanRelocate_ )
	{
		IsCanRelocate_.reset(boost::initialized_value);
	}
	if ( !IsCanDel_ )
	{
		IsCanDel_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardName_ )
	{
		CabStructBoardName_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_CabinetSizeBoardInfoImp::SData::ToUtf8()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
	if ( CabStructBoardName_ )
	{
		CabStructBoardName_ = boost::locale::conv::to_utf<char>(*CabStructBoardName_, "GBK");
	}
}

void	JK_CabinetSizeBoardInfoImp::SData::ToAscii()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
	if ( CabStructBoardName_ )
	{
		CabStructBoardName_ = boost::locale::conv::from_utf(*CabStructBoardName_, "GBK");
	}
}

autoDB::SColumns JK_CabinetSizeBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabinetSizeBoardID_ )
	{
		ret.With(CabinetSizeBoardID.Use(data.CabinetSizeBoardID_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Use(data.CabinetSizeID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.IsCanRelocate_ )
	{
		ret.With(IsCanRelocate.Use(data.IsCanRelocate_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Use(data.IsCanDel_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.CabStructBoardName_ )
	{
		ret.With(CabStructBoardName.Use(data.CabStructBoardName_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabinetSizeBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabinetSizeBoardID_ )
	{
		ret.With(CabinetSizeBoardID.Into(data.CabinetSizeBoardID_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Into(data.CabinetSizeID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.IsCanRelocate_ )
	{
		ret.With(IsCanRelocate.Into(data.IsCanRelocate_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Into(data.IsCanDel_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.CabStructBoardName_ )
	{
		ret.With(CabStructBoardName.Into(data.CabStructBoardName_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_CabinetSizeBoardInfoImp	JK_CabinetSizeBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabinetSizeBoardInfoImp(alias));
}

JK_CabinetSizeBoardInfoImp::JK_CabinetSizeBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabinetSizeBoardInfo"), alias)
	,CabinetSizeBoardID(ImpSPtr_,AUTODB_STR("CabinetSizeBoardID"))
	,CabinetSizeID(ImpSPtr_,AUTODB_STR("CabinetSizeID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,IsCanRelocate(ImpSPtr_,AUTODB_STR("IsCanRelocate"))
	,IsCanDel(ImpSPtr_,AUTODB_STR("IsCanDel"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,CabStructBoardName(ImpSPtr_,AUTODB_STR("CabStructBoardName"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_CabinetSizeBoardInfoImp::JK_CabinetSizeBoardInfoImp( const JK_CabinetSizeBoardInfoImp& rhs ):Table(rhs)
	,CabinetSizeBoardID(rhs.CabinetSizeBoardID)
	,CabinetSizeID(rhs.CabinetSizeID)
	,IsDel(rhs.IsDel)
	,CabStructBoardID(rhs.CabStructBoardID)
	,IsCanRelocate(rhs.IsCanRelocate)
	,IsCanDel(rhs.IsCanDel)
	,FactoryID(rhs.FactoryID)
	,CreateTime(rhs.CreateTime)
	,CreatorID(rhs.CreatorID)
	,UpdateTime(rhs.UpdateTime)
	,UpdaterID(rhs.UpdaterID)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,CabStructBoardName(rhs.CabStructBoardName)
	,VerCode(rhs.VerCode)
{}

JK_CabinetSizeBoardInfoImp::JK_CabinetSizeBoardInfoImp( JK_CabinetSizeBoardInfoImp&& rhs ):Table(rhs)
	,CabinetSizeBoardID(std::move(rhs.CabinetSizeBoardID))
	,CabinetSizeID(std::move(rhs.CabinetSizeID))
	,IsDel(std::move(rhs.IsDel))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,IsCanRelocate(std::move(rhs.IsCanRelocate))
	,IsCanDel(std::move(rhs.IsCanDel))
	,FactoryID(std::move(rhs.FactoryID))
	,CreateTime(std::move(rhs.CreateTime))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdateTime(std::move(rhs.UpdateTime))
	,UpdaterID(std::move(rhs.UpdaterID))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,CabStructBoardName(std::move(rhs.CabStructBoardName))
	,VerCode(std::move(rhs.VerCode))
{}

JK_CabinetSizeBoardInfoImp	JK_CabinetSizeBoardInfo("");



void	JK_CabinetSizeInfoImp::SData::SetAll(bool val)
{
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? CabinetSizeID_.reset(boost::initialized_value) : CabinetSizeID_=boost::none;
	val ? PhotoID_.reset(boost::initialized_value) : PhotoID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? IsStandard_.reset(boost::initialized_value) : IsStandard_=boost::none;
	val ? MinXLen_.reset(boost::initialized_value) : MinXLen_=boost::none;
	val ? MaxXLen_.reset(boost::initialized_value) : MaxXLen_=boost::none;
	val ? XLenStep_.reset(boost::initialized_value) : XLenStep_=boost::none;
	val ? MinYLen_.reset(boost::initialized_value) : MinYLen_=boost::none;
	val ? MaxYLen_.reset(boost::initialized_value) : MaxYLen_=boost::none;
	val ? YLenStep_.reset(boost::initialized_value) : YLenStep_=boost::none;
	val ? MinZLen_.reset(boost::initialized_value) : MinZLen_=boost::none;
	val ? MaxZLen_.reset(boost::initialized_value) : MaxZLen_=boost::none;
	val ? ZLenStep_.reset(boost::initialized_value) : ZLenStep_=boost::none;
	val ? ShapeXLen_.reset(boost::initialized_value) : ShapeXLen_=boost::none;
	val ? ShapeZLen_.reset(boost::initialized_value) : ShapeZLen_=boost::none;
	val ? GapXLen_.reset(boost::initialized_value) : GapXLen_=boost::none;
	val ? GapYLen_.reset(boost::initialized_value) : GapYLen_=boost::none;
	val ? GapZLen_.reset(boost::initialized_value) : GapZLen_=boost::none;
	val ? ShapeMinXLen_.reset(boost::initialized_value) : ShapeMinXLen_=boost::none;
	val ? ShapeMaxXLen_.reset(boost::initialized_value) : ShapeMaxXLen_=boost::none;
	val ? ShapeXLenStep_.reset(boost::initialized_value) : ShapeXLenStep_=boost::none;
	val ? ShapeMinZLen_.reset(boost::initialized_value) : ShapeMinZLen_=boost::none;
	val ? ShapeMaxZLen_.reset(boost::initialized_value) : ShapeMaxZLen_=boost::none;
	val ? ShapeZLenStep_.reset(boost::initialized_value) : ShapeZLenStep_=boost::none;
	val ? GapMinXLen_.reset(boost::initialized_value) : GapMinXLen_=boost::none;
	val ? GapMaxXLen_.reset(boost::initialized_value) : GapMaxXLen_=boost::none;
	val ? GapXLenStep_.reset(boost::initialized_value) : GapXLenStep_=boost::none;
	val ? GapMinYLen_.reset(boost::initialized_value) : GapMinYLen_=boost::none;
	val ? GapMaxYLen_.reset(boost::initialized_value) : GapMaxYLen_=boost::none;
	val ? GapYLenStep_.reset(boost::initialized_value) : GapYLenStep_=boost::none;
	val ? GapMinZLen_.reset(boost::initialized_value) : GapMinZLen_=boost::none;
	val ? GapMaxZLen_.reset(boost::initialized_value) : GapMaxZLen_=boost::none;
	val ? GapZLenStep_.reset(boost::initialized_value) : GapZLenStep_=boost::none;
	val ? FootCount_.reset(boost::initialized_value) : FootCount_=boost::none;
	val ? IsSysFootRule_.reset(boost::initialized_value) : IsSysFootRule_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? CabinetSizeCode_.reset(boost::initialized_value) : CabinetSizeCode_=boost::none;
	val ? CabinetSizeName_.reset(boost::initialized_value) : CabinetSizeName_=boost::none;
	val ? CabinetSizeMemo_.reset(boost::initialized_value) : CabinetSizeMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_CabinetSizeInfoImp::SData::Flip()
{
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	CabinetSizeID_ ? CabinetSizeID_=boost::none : CabinetSizeID_.reset(boost::initialized_value);
	PhotoID_ ? PhotoID_=boost::none : PhotoID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	IsStandard_ ? IsStandard_=boost::none : IsStandard_.reset(boost::initialized_value);
	MinXLen_ ? MinXLen_=boost::none : MinXLen_.reset(boost::initialized_value);
	MaxXLen_ ? MaxXLen_=boost::none : MaxXLen_.reset(boost::initialized_value);
	XLenStep_ ? XLenStep_=boost::none : XLenStep_.reset(boost::initialized_value);
	MinYLen_ ? MinYLen_=boost::none : MinYLen_.reset(boost::initialized_value);
	MaxYLen_ ? MaxYLen_=boost::none : MaxYLen_.reset(boost::initialized_value);
	YLenStep_ ? YLenStep_=boost::none : YLenStep_.reset(boost::initialized_value);
	MinZLen_ ? MinZLen_=boost::none : MinZLen_.reset(boost::initialized_value);
	MaxZLen_ ? MaxZLen_=boost::none : MaxZLen_.reset(boost::initialized_value);
	ZLenStep_ ? ZLenStep_=boost::none : ZLenStep_.reset(boost::initialized_value);
	ShapeXLen_ ? ShapeXLen_=boost::none : ShapeXLen_.reset(boost::initialized_value);
	ShapeZLen_ ? ShapeZLen_=boost::none : ShapeZLen_.reset(boost::initialized_value);
	GapXLen_ ? GapXLen_=boost::none : GapXLen_.reset(boost::initialized_value);
	GapYLen_ ? GapYLen_=boost::none : GapYLen_.reset(boost::initialized_value);
	GapZLen_ ? GapZLen_=boost::none : GapZLen_.reset(boost::initialized_value);
	ShapeMinXLen_ ? ShapeMinXLen_=boost::none : ShapeMinXLen_.reset(boost::initialized_value);
	ShapeMaxXLen_ ? ShapeMaxXLen_=boost::none : ShapeMaxXLen_.reset(boost::initialized_value);
	ShapeXLenStep_ ? ShapeXLenStep_=boost::none : ShapeXLenStep_.reset(boost::initialized_value);
	ShapeMinZLen_ ? ShapeMinZLen_=boost::none : ShapeMinZLen_.reset(boost::initialized_value);
	ShapeMaxZLen_ ? ShapeMaxZLen_=boost::none : ShapeMaxZLen_.reset(boost::initialized_value);
	ShapeZLenStep_ ? ShapeZLenStep_=boost::none : ShapeZLenStep_.reset(boost::initialized_value);
	GapMinXLen_ ? GapMinXLen_=boost::none : GapMinXLen_.reset(boost::initialized_value);
	GapMaxXLen_ ? GapMaxXLen_=boost::none : GapMaxXLen_.reset(boost::initialized_value);
	GapXLenStep_ ? GapXLenStep_=boost::none : GapXLenStep_.reset(boost::initialized_value);
	GapMinYLen_ ? GapMinYLen_=boost::none : GapMinYLen_.reset(boost::initialized_value);
	GapMaxYLen_ ? GapMaxYLen_=boost::none : GapMaxYLen_.reset(boost::initialized_value);
	GapYLenStep_ ? GapYLenStep_=boost::none : GapYLenStep_.reset(boost::initialized_value);
	GapMinZLen_ ? GapMinZLen_=boost::none : GapMinZLen_.reset(boost::initialized_value);
	GapMaxZLen_ ? GapMaxZLen_=boost::none : GapMaxZLen_.reset(boost::initialized_value);
	GapZLenStep_ ? GapZLenStep_=boost::none : GapZLenStep_.reset(boost::initialized_value);
	FootCount_ ? FootCount_=boost::none : FootCount_.reset(boost::initialized_value);
	IsSysFootRule_ ? IsSysFootRule_=boost::none : IsSysFootRule_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	CabinetSizeCode_ ? CabinetSizeCode_=boost::none : CabinetSizeCode_.reset(boost::initialized_value);
	CabinetSizeName_ ? CabinetSizeName_=boost::none : CabinetSizeName_.reset(boost::initialized_value);
	CabinetSizeMemo_ ? CabinetSizeMemo_=boost::none : CabinetSizeMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_CabinetSizeInfoImp::SData::Check()
{
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !CabinetSizeID_ )
	{
		CabinetSizeID_.reset(boost::initialized_value);
	}
	if ( !PhotoID_ )
	{
		PhotoID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !IsStandard_ )
	{
		IsStandard_.reset(boost::initialized_value);
	}
	if ( !MinXLen_ )
	{
		MinXLen_.reset(boost::initialized_value);
	}
	if ( !MaxXLen_ )
	{
		MaxXLen_.reset(boost::initialized_value);
	}
	if ( !XLenStep_ )
	{
		XLenStep_.reset(boost::initialized_value);
	}
	if ( !MinYLen_ )
	{
		MinYLen_.reset(boost::initialized_value);
	}
	if ( !MaxYLen_ )
	{
		MaxYLen_.reset(boost::initialized_value);
	}
	if ( !YLenStep_ )
	{
		YLenStep_.reset(boost::initialized_value);
	}
	if ( !MinZLen_ )
	{
		MinZLen_.reset(boost::initialized_value);
	}
	if ( !MaxZLen_ )
	{
		MaxZLen_.reset(boost::initialized_value);
	}
	if ( !ZLenStep_ )
	{
		ZLenStep_.reset(boost::initialized_value);
	}
	if ( !ShapeXLen_ )
	{
		ShapeXLen_.reset(boost::initialized_value);
	}
	if ( !ShapeZLen_ )
	{
		ShapeZLen_.reset(boost::initialized_value);
	}
	if ( !GapXLen_ )
	{
		GapXLen_.reset(boost::initialized_value);
	}
	if ( !GapYLen_ )
	{
		GapYLen_.reset(boost::initialized_value);
	}
	if ( !GapZLen_ )
	{
		GapZLen_.reset(boost::initialized_value);
	}
	if ( !ShapeMinXLen_ )
	{
		ShapeMinXLen_.reset(boost::initialized_value);
	}
	if ( !ShapeMaxXLen_ )
	{
		ShapeMaxXLen_.reset(boost::initialized_value);
	}
	if ( !ShapeXLenStep_ )
	{
		ShapeXLenStep_.reset(boost::initialized_value);
	}
	if ( !ShapeMinZLen_ )
	{
		ShapeMinZLen_.reset(boost::initialized_value);
	}
	if ( !ShapeMaxZLen_ )
	{
		ShapeMaxZLen_.reset(boost::initialized_value);
	}
	if ( !ShapeZLenStep_ )
	{
		ShapeZLenStep_.reset(boost::initialized_value);
	}
	if ( !GapMinXLen_ )
	{
		GapMinXLen_.reset(boost::initialized_value);
	}
	if ( !GapMaxXLen_ )
	{
		GapMaxXLen_.reset(boost::initialized_value);
	}
	if ( !GapXLenStep_ )
	{
		GapXLenStep_.reset(boost::initialized_value);
	}
	if ( !GapMinYLen_ )
	{
		GapMinYLen_.reset(boost::initialized_value);
	}
	if ( !GapMaxYLen_ )
	{
		GapMaxYLen_.reset(boost::initialized_value);
	}
	if ( !GapYLenStep_ )
	{
		GapYLenStep_.reset(boost::initialized_value);
	}
	if ( !GapMinZLen_ )
	{
		GapMinZLen_.reset(boost::initialized_value);
	}
	if ( !GapMaxZLen_ )
	{
		GapMaxZLen_.reset(boost::initialized_value);
	}
	if ( !GapZLenStep_ )
	{
		GapZLenStep_.reset(boost::initialized_value);
	}
	if ( !FootCount_ )
	{
		FootCount_.reset(boost::initialized_value);
	}
	if ( !IsSysFootRule_ )
	{
		IsSysFootRule_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !CabinetSizeCode_ )
	{
		CabinetSizeCode_.reset(boost::initialized_value);
	}
	if ( !CabinetSizeName_ )
	{
		CabinetSizeName_.reset(boost::initialized_value);
	}
	if ( !CabinetSizeMemo_ )
	{
		CabinetSizeMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_CabinetSizeInfoImp::SData::ToUtf8()
{
	if ( CabinetSizeCode_ )
	{
		CabinetSizeCode_ = boost::locale::conv::to_utf<char>(*CabinetSizeCode_, "GBK");
	}
	if ( CabinetSizeName_ )
	{
		CabinetSizeName_ = boost::locale::conv::to_utf<char>(*CabinetSizeName_, "GBK");
	}
	if ( CabinetSizeMemo_ )
	{
		CabinetSizeMemo_ = boost::locale::conv::to_utf<char>(*CabinetSizeMemo_, "GBK");
	}
}

void	JK_CabinetSizeInfoImp::SData::ToAscii()
{
	if ( CabinetSizeCode_ )
	{
		CabinetSizeCode_ = boost::locale::conv::from_utf(*CabinetSizeCode_, "GBK");
	}
	if ( CabinetSizeName_ )
	{
		CabinetSizeName_ = boost::locale::conv::from_utf(*CabinetSizeName_, "GBK");
	}
	if ( CabinetSizeMemo_ )
	{
		CabinetSizeMemo_ = boost::locale::conv::from_utf(*CabinetSizeMemo_, "GBK");
	}
}

autoDB::SColumns JK_CabinetSizeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Use(data.CabinetSizeID_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Use(data.PhotoID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.IsStandard_ )
	{
		ret.With(IsStandard.Use(data.IsStandard_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Use(data.MinXLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Use(data.MaxXLen_));
	}
	if ( data.XLenStep_ )
	{
		ret.With(XLenStep.Use(data.XLenStep_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Use(data.MinYLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Use(data.MaxYLen_));
	}
	if ( data.YLenStep_ )
	{
		ret.With(YLenStep.Use(data.YLenStep_));
	}
	if ( data.MinZLen_ )
	{
		ret.With(MinZLen.Use(data.MinZLen_));
	}
	if ( data.MaxZLen_ )
	{
		ret.With(MaxZLen.Use(data.MaxZLen_));
	}
	if ( data.ZLenStep_ )
	{
		ret.With(ZLenStep.Use(data.ZLenStep_));
	}
	if ( data.ShapeXLen_ )
	{
		ret.With(ShapeXLen.Use(data.ShapeXLen_));
	}
	if ( data.ShapeZLen_ )
	{
		ret.With(ShapeZLen.Use(data.ShapeZLen_));
	}
	if ( data.GapXLen_ )
	{
		ret.With(GapXLen.Use(data.GapXLen_));
	}
	if ( data.GapYLen_ )
	{
		ret.With(GapYLen.Use(data.GapYLen_));
	}
	if ( data.GapZLen_ )
	{
		ret.With(GapZLen.Use(data.GapZLen_));
	}
	if ( data.ShapeMinXLen_ )
	{
		ret.With(ShapeMinXLen.Use(data.ShapeMinXLen_));
	}
	if ( data.ShapeMaxXLen_ )
	{
		ret.With(ShapeMaxXLen.Use(data.ShapeMaxXLen_));
	}
	if ( data.ShapeXLenStep_ )
	{
		ret.With(ShapeXLenStep.Use(data.ShapeXLenStep_));
	}
	if ( data.ShapeMinZLen_ )
	{
		ret.With(ShapeMinZLen.Use(data.ShapeMinZLen_));
	}
	if ( data.ShapeMaxZLen_ )
	{
		ret.With(ShapeMaxZLen.Use(data.ShapeMaxZLen_));
	}
	if ( data.ShapeZLenStep_ )
	{
		ret.With(ShapeZLenStep.Use(data.ShapeZLenStep_));
	}
	if ( data.GapMinXLen_ )
	{
		ret.With(GapMinXLen.Use(data.GapMinXLen_));
	}
	if ( data.GapMaxXLen_ )
	{
		ret.With(GapMaxXLen.Use(data.GapMaxXLen_));
	}
	if ( data.GapXLenStep_ )
	{
		ret.With(GapXLenStep.Use(data.GapXLenStep_));
	}
	if ( data.GapMinYLen_ )
	{
		ret.With(GapMinYLen.Use(data.GapMinYLen_));
	}
	if ( data.GapMaxYLen_ )
	{
		ret.With(GapMaxYLen.Use(data.GapMaxYLen_));
	}
	if ( data.GapYLenStep_ )
	{
		ret.With(GapYLenStep.Use(data.GapYLenStep_));
	}
	if ( data.GapMinZLen_ )
	{
		ret.With(GapMinZLen.Use(data.GapMinZLen_));
	}
	if ( data.GapMaxZLen_ )
	{
		ret.With(GapMaxZLen.Use(data.GapMaxZLen_));
	}
	if ( data.GapZLenStep_ )
	{
		ret.With(GapZLenStep.Use(data.GapZLenStep_));
	}
	if ( data.FootCount_ )
	{
		ret.With(FootCount.Use(data.FootCount_));
	}
	if ( data.IsSysFootRule_ )
	{
		ret.With(IsSysFootRule.Use(data.IsSysFootRule_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.CabinetSizeCode_ )
	{
		ret.With(CabinetSizeCode.Use(data.CabinetSizeCode_));
	}
	if ( data.CabinetSizeName_ )
	{
		ret.With(CabinetSizeName.Use(data.CabinetSizeName_));
	}
	if ( data.CabinetSizeMemo_ )
	{
		ret.With(CabinetSizeMemo.Use(data.CabinetSizeMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabinetSizeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Into(data.CabinetSizeID_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Into(data.PhotoID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.IsStandard_ )
	{
		ret.With(IsStandard.Into(data.IsStandard_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Into(data.MinXLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Into(data.MaxXLen_));
	}
	if ( data.XLenStep_ )
	{
		ret.With(XLenStep.Into(data.XLenStep_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Into(data.MinYLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Into(data.MaxYLen_));
	}
	if ( data.YLenStep_ )
	{
		ret.With(YLenStep.Into(data.YLenStep_));
	}
	if ( data.MinZLen_ )
	{
		ret.With(MinZLen.Into(data.MinZLen_));
	}
	if ( data.MaxZLen_ )
	{
		ret.With(MaxZLen.Into(data.MaxZLen_));
	}
	if ( data.ZLenStep_ )
	{
		ret.With(ZLenStep.Into(data.ZLenStep_));
	}
	if ( data.ShapeXLen_ )
	{
		ret.With(ShapeXLen.Into(data.ShapeXLen_));
	}
	if ( data.ShapeZLen_ )
	{
		ret.With(ShapeZLen.Into(data.ShapeZLen_));
	}
	if ( data.GapXLen_ )
	{
		ret.With(GapXLen.Into(data.GapXLen_));
	}
	if ( data.GapYLen_ )
	{
		ret.With(GapYLen.Into(data.GapYLen_));
	}
	if ( data.GapZLen_ )
	{
		ret.With(GapZLen.Into(data.GapZLen_));
	}
	if ( data.ShapeMinXLen_ )
	{
		ret.With(ShapeMinXLen.Into(data.ShapeMinXLen_));
	}
	if ( data.ShapeMaxXLen_ )
	{
		ret.With(ShapeMaxXLen.Into(data.ShapeMaxXLen_));
	}
	if ( data.ShapeXLenStep_ )
	{
		ret.With(ShapeXLenStep.Into(data.ShapeXLenStep_));
	}
	if ( data.ShapeMinZLen_ )
	{
		ret.With(ShapeMinZLen.Into(data.ShapeMinZLen_));
	}
	if ( data.ShapeMaxZLen_ )
	{
		ret.With(ShapeMaxZLen.Into(data.ShapeMaxZLen_));
	}
	if ( data.ShapeZLenStep_ )
	{
		ret.With(ShapeZLenStep.Into(data.ShapeZLenStep_));
	}
	if ( data.GapMinXLen_ )
	{
		ret.With(GapMinXLen.Into(data.GapMinXLen_));
	}
	if ( data.GapMaxXLen_ )
	{
		ret.With(GapMaxXLen.Into(data.GapMaxXLen_));
	}
	if ( data.GapXLenStep_ )
	{
		ret.With(GapXLenStep.Into(data.GapXLenStep_));
	}
	if ( data.GapMinYLen_ )
	{
		ret.With(GapMinYLen.Into(data.GapMinYLen_));
	}
	if ( data.GapMaxYLen_ )
	{
		ret.With(GapMaxYLen.Into(data.GapMaxYLen_));
	}
	if ( data.GapYLenStep_ )
	{
		ret.With(GapYLenStep.Into(data.GapYLenStep_));
	}
	if ( data.GapMinZLen_ )
	{
		ret.With(GapMinZLen.Into(data.GapMinZLen_));
	}
	if ( data.GapMaxZLen_ )
	{
		ret.With(GapMaxZLen.Into(data.GapMaxZLen_));
	}
	if ( data.GapZLenStep_ )
	{
		ret.With(GapZLenStep.Into(data.GapZLenStep_));
	}
	if ( data.FootCount_ )
	{
		ret.With(FootCount.Into(data.FootCount_));
	}
	if ( data.IsSysFootRule_ )
	{
		ret.With(IsSysFootRule.Into(data.IsSysFootRule_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.CabinetSizeCode_ )
	{
		ret.With(CabinetSizeCode.Into(data.CabinetSizeCode_));
	}
	if ( data.CabinetSizeName_ )
	{
		ret.With(CabinetSizeName.Into(data.CabinetSizeName_));
	}
	if ( data.CabinetSizeMemo_ )
	{
		ret.With(CabinetSizeMemo.Into(data.CabinetSizeMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_CabinetSizeInfoImp	JK_CabinetSizeInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabinetSizeInfoImp(alias));
}

JK_CabinetSizeInfoImp::JK_CabinetSizeInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabinetSizeInfo"), alias)
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,CabinetSizeID(ImpSPtr_,AUTODB_STR("CabinetSizeID"))
	,PhotoID(ImpSPtr_,AUTODB_STR("PhotoID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,IsStandard(ImpSPtr_,AUTODB_STR("IsStandard"))
	,MinXLen(ImpSPtr_,AUTODB_STR("MinXLen"))
	,MaxXLen(ImpSPtr_,AUTODB_STR("MaxXLen"))
	,XLenStep(ImpSPtr_,AUTODB_STR("XLenStep"))
	,MinYLen(ImpSPtr_,AUTODB_STR("MinYLen"))
	,MaxYLen(ImpSPtr_,AUTODB_STR("MaxYLen"))
	,YLenStep(ImpSPtr_,AUTODB_STR("YLenStep"))
	,MinZLen(ImpSPtr_,AUTODB_STR("MinZLen"))
	,MaxZLen(ImpSPtr_,AUTODB_STR("MaxZLen"))
	,ZLenStep(ImpSPtr_,AUTODB_STR("ZLenStep"))
	,ShapeXLen(ImpSPtr_,AUTODB_STR("ShapeXLen"))
	,ShapeZLen(ImpSPtr_,AUTODB_STR("ShapeZLen"))
	,GapXLen(ImpSPtr_,AUTODB_STR("GapXLen"))
	,GapYLen(ImpSPtr_,AUTODB_STR("GapYLen"))
	,GapZLen(ImpSPtr_,AUTODB_STR("GapZLen"))
	,ShapeMinXLen(ImpSPtr_,AUTODB_STR("ShapeMinXLen"))
	,ShapeMaxXLen(ImpSPtr_,AUTODB_STR("ShapeMaxXLen"))
	,ShapeXLenStep(ImpSPtr_,AUTODB_STR("ShapeXLenStep"))
	,ShapeMinZLen(ImpSPtr_,AUTODB_STR("ShapeMinZLen"))
	,ShapeMaxZLen(ImpSPtr_,AUTODB_STR("ShapeMaxZLen"))
	,ShapeZLenStep(ImpSPtr_,AUTODB_STR("ShapeZLenStep"))
	,GapMinXLen(ImpSPtr_,AUTODB_STR("GapMinXLen"))
	,GapMaxXLen(ImpSPtr_,AUTODB_STR("GapMaxXLen"))
	,GapXLenStep(ImpSPtr_,AUTODB_STR("GapXLenStep"))
	,GapMinYLen(ImpSPtr_,AUTODB_STR("GapMinYLen"))
	,GapMaxYLen(ImpSPtr_,AUTODB_STR("GapMaxYLen"))
	,GapYLenStep(ImpSPtr_,AUTODB_STR("GapYLenStep"))
	,GapMinZLen(ImpSPtr_,AUTODB_STR("GapMinZLen"))
	,GapMaxZLen(ImpSPtr_,AUTODB_STR("GapMaxZLen"))
	,GapZLenStep(ImpSPtr_,AUTODB_STR("GapZLenStep"))
	,FootCount(ImpSPtr_,AUTODB_STR("FootCount"))
	,IsSysFootRule(ImpSPtr_,AUTODB_STR("IsSysFootRule"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,CabinetSizeCode(ImpSPtr_,AUTODB_STR("CabinetSizeCode"))
	,CabinetSizeName(ImpSPtr_,AUTODB_STR("CabinetSizeName"))
	,CabinetSizeMemo(ImpSPtr_,AUTODB_STR("CabinetSizeMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_CabinetSizeInfoImp::JK_CabinetSizeInfoImp( const JK_CabinetSizeInfoImp& rhs ):Table(rhs)
	,CabDesignID(rhs.CabDesignID)
	,IsDel(rhs.IsDel)
	,CabinetSizeID(rhs.CabinetSizeID)
	,PhotoID(rhs.PhotoID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,IsStandard(rhs.IsStandard)
	,MinXLen(rhs.MinXLen)
	,MaxXLen(rhs.MaxXLen)
	,XLenStep(rhs.XLenStep)
	,MinYLen(rhs.MinYLen)
	,MaxYLen(rhs.MaxYLen)
	,YLenStep(rhs.YLenStep)
	,MinZLen(rhs.MinZLen)
	,MaxZLen(rhs.MaxZLen)
	,ZLenStep(rhs.ZLenStep)
	,ShapeXLen(rhs.ShapeXLen)
	,ShapeZLen(rhs.ShapeZLen)
	,GapXLen(rhs.GapXLen)
	,GapYLen(rhs.GapYLen)
	,GapZLen(rhs.GapZLen)
	,ShapeMinXLen(rhs.ShapeMinXLen)
	,ShapeMaxXLen(rhs.ShapeMaxXLen)
	,ShapeXLenStep(rhs.ShapeXLenStep)
	,ShapeMinZLen(rhs.ShapeMinZLen)
	,ShapeMaxZLen(rhs.ShapeMaxZLen)
	,ShapeZLenStep(rhs.ShapeZLenStep)
	,GapMinXLen(rhs.GapMinXLen)
	,GapMaxXLen(rhs.GapMaxXLen)
	,GapXLenStep(rhs.GapXLenStep)
	,GapMinYLen(rhs.GapMinYLen)
	,GapMaxYLen(rhs.GapMaxYLen)
	,GapYLenStep(rhs.GapYLenStep)
	,GapMinZLen(rhs.GapMinZLen)
	,GapMaxZLen(rhs.GapMaxZLen)
	,GapZLenStep(rhs.GapZLenStep)
	,FootCount(rhs.FootCount)
	,IsSysFootRule(rhs.IsSysFootRule)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,CabinetSizeCode(rhs.CabinetSizeCode)
	,CabinetSizeName(rhs.CabinetSizeName)
	,CabinetSizeMemo(rhs.CabinetSizeMemo)
	,VerCode(rhs.VerCode)
{}

JK_CabinetSizeInfoImp::JK_CabinetSizeInfoImp( JK_CabinetSizeInfoImp&& rhs ):Table(rhs)
	,CabDesignID(std::move(rhs.CabDesignID))
	,IsDel(std::move(rhs.IsDel))
	,CabinetSizeID(std::move(rhs.CabinetSizeID))
	,PhotoID(std::move(rhs.PhotoID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,IsStandard(std::move(rhs.IsStandard))
	,MinXLen(std::move(rhs.MinXLen))
	,MaxXLen(std::move(rhs.MaxXLen))
	,XLenStep(std::move(rhs.XLenStep))
	,MinYLen(std::move(rhs.MinYLen))
	,MaxYLen(std::move(rhs.MaxYLen))
	,YLenStep(std::move(rhs.YLenStep))
	,MinZLen(std::move(rhs.MinZLen))
	,MaxZLen(std::move(rhs.MaxZLen))
	,ZLenStep(std::move(rhs.ZLenStep))
	,ShapeXLen(std::move(rhs.ShapeXLen))
	,ShapeZLen(std::move(rhs.ShapeZLen))
	,GapXLen(std::move(rhs.GapXLen))
	,GapYLen(std::move(rhs.GapYLen))
	,GapZLen(std::move(rhs.GapZLen))
	,ShapeMinXLen(std::move(rhs.ShapeMinXLen))
	,ShapeMaxXLen(std::move(rhs.ShapeMaxXLen))
	,ShapeXLenStep(std::move(rhs.ShapeXLenStep))
	,ShapeMinZLen(std::move(rhs.ShapeMinZLen))
	,ShapeMaxZLen(std::move(rhs.ShapeMaxZLen))
	,ShapeZLenStep(std::move(rhs.ShapeZLenStep))
	,GapMinXLen(std::move(rhs.GapMinXLen))
	,GapMaxXLen(std::move(rhs.GapMaxXLen))
	,GapXLenStep(std::move(rhs.GapXLenStep))
	,GapMinYLen(std::move(rhs.GapMinYLen))
	,GapMaxYLen(std::move(rhs.GapMaxYLen))
	,GapYLenStep(std::move(rhs.GapYLenStep))
	,GapMinZLen(std::move(rhs.GapMinZLen))
	,GapMaxZLen(std::move(rhs.GapMaxZLen))
	,GapZLenStep(std::move(rhs.GapZLenStep))
	,FootCount(std::move(rhs.FootCount))
	,IsSysFootRule(std::move(rhs.IsSysFootRule))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,CabinetSizeCode(std::move(rhs.CabinetSizeCode))
	,CabinetSizeName(std::move(rhs.CabinetSizeName))
	,CabinetSizeMemo(std::move(rhs.CabinetSizeMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_CabinetSizeInfoImp	JK_CabinetSizeInfo("");



void	JK_CabinetSizeStructBoardInfoImp::SData::SetAll(bool val)
{
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? CabinetSizeID_.reset(boost::initialized_value) : CabinetSizeID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_CabinetSizeStructBoardInfoImp::SData::Flip()
{
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	CabinetSizeID_ ? CabinetSizeID_=boost::none : CabinetSizeID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_CabinetSizeStructBoardInfoImp::SData::Check()
{
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !CabinetSizeID_ )
	{
		CabinetSizeID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_CabinetSizeStructBoardInfoImp::SData::ToUtf8()
{
}

void	JK_CabinetSizeStructBoardInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_CabinetSizeStructBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Use(data.CabinetSizeID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_CabinetSizeStructBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Into(data.CabinetSizeID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_CabinetSizeStructBoardInfoImp	JK_CabinetSizeStructBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_CabinetSizeStructBoardInfoImp(alias));
}

JK_CabinetSizeStructBoardInfoImp::JK_CabinetSizeStructBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_CabinetSizeStructBoardInfo"), alias)
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,CabinetSizeID(ImpSPtr_,AUTODB_STR("CabinetSizeID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_CabinetSizeStructBoardInfoImp::JK_CabinetSizeStructBoardInfoImp( const JK_CabinetSizeStructBoardInfoImp& rhs ):Table(rhs)
	,CabStructBoardID(rhs.CabStructBoardID)
	,CabinetSizeID(rhs.CabinetSizeID)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_CabinetSizeStructBoardInfoImp::JK_CabinetSizeStructBoardInfoImp( JK_CabinetSizeStructBoardInfoImp&& rhs ):Table(rhs)
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,CabinetSizeID(std::move(rhs.CabinetSizeID))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_CabinetSizeStructBoardInfoImp	JK_CabinetSizeStructBoardInfo("");



void	JK_DecorBoardFrameMapInfoImp::SData::SetAll(bool val)
{
	val ? DecorBoardID_.reset(boost::initialized_value) : DecorBoardID_=boost::none;
	val ? DecorFrameID_.reset(boost::initialized_value) : DecorFrameID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DecorBoardFrameMapInfoImp::SData::Flip()
{
	DecorBoardID_ ? DecorBoardID_=boost::none : DecorBoardID_.reset(boost::initialized_value);
	DecorFrameID_ ? DecorFrameID_=boost::none : DecorFrameID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DecorBoardFrameMapInfoImp::SData::Check()
{
	if ( !DecorBoardID_ )
	{
		DecorBoardID_.reset(boost::initialized_value);
	}
	if ( !DecorFrameID_ )
	{
		DecorFrameID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DecorBoardFrameMapInfoImp::SData::ToUtf8()
{
}

void	JK_DecorBoardFrameMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DecorBoardFrameMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Use(data.DecorBoardID_));
	}
	if ( data.DecorFrameID_ )
	{
		ret.With(DecorFrameID.Use(data.DecorFrameID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorBoardFrameMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Into(data.DecorBoardID_));
	}
	if ( data.DecorFrameID_ )
	{
		ret.With(DecorFrameID.Into(data.DecorFrameID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DecorBoardFrameMapInfoImp	JK_DecorBoardFrameMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorBoardFrameMapInfoImp(alias));
}

JK_DecorBoardFrameMapInfoImp::JK_DecorBoardFrameMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorBoardFrameMapInfo"), alias)
	,DecorBoardID(ImpSPtr_,AUTODB_STR("DecorBoardID"))
	,DecorFrameID(ImpSPtr_,AUTODB_STR("DecorFrameID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DecorBoardFrameMapInfoImp::JK_DecorBoardFrameMapInfoImp( const JK_DecorBoardFrameMapInfoImp& rhs ):Table(rhs)
	,DecorBoardID(rhs.DecorBoardID)
	,DecorFrameID(rhs.DecorFrameID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DecorBoardFrameMapInfoImp::JK_DecorBoardFrameMapInfoImp( JK_DecorBoardFrameMapInfoImp&& rhs ):Table(rhs)
	,DecorBoardID(std::move(rhs.DecorBoardID))
	,DecorFrameID(std::move(rhs.DecorFrameID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DecorBoardFrameMapInfoImp	JK_DecorBoardFrameMapInfo("");



void	JK_DecorBoardInfoImp::SData::SetAll(bool val)
{
	val ? DecorBoardID_.reset(boost::initialized_value) : DecorBoardID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? SourceType_.reset(boost::initialized_value) : SourceType_=boost::none;
	val ? DefaultYPos_.reset(boost::initialized_value) : DefaultYPos_=boost::none;
	val ? DecorBoardCode_.reset(boost::initialized_value) : DecorBoardCode_=boost::none;
	val ? DecorBoardName_.reset(boost::initialized_value) : DecorBoardName_=boost::none;
	val ? DecorBoardMemo_.reset(boost::initialized_value) : DecorBoardMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? IsCanResize_.reset(boost::initialized_value) : IsCanResize_=boost::none;
	val ? MinXLen_.reset(boost::initialized_value) : MinXLen_=boost::none;
	val ? MaxXLen_.reset(boost::initialized_value) : MaxXLen_=boost::none;
	val ? XLenStep_.reset(boost::initialized_value) : XLenStep_=boost::none;
	val ? MinYLen_.reset(boost::initialized_value) : MinYLen_=boost::none;
	val ? MaxYLen_.reset(boost::initialized_value) : MaxYLen_=boost::none;
	val ? YLenStep_.reset(boost::initialized_value) : YLenStep_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? PhotoID_.reset(boost::initialized_value) : PhotoID_=boost::none;
}

void	JK_DecorBoardInfoImp::SData::Flip()
{
	DecorBoardID_ ? DecorBoardID_=boost::none : DecorBoardID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	SourceType_ ? SourceType_=boost::none : SourceType_.reset(boost::initialized_value);
	DefaultYPos_ ? DefaultYPos_=boost::none : DefaultYPos_.reset(boost::initialized_value);
	DecorBoardCode_ ? DecorBoardCode_=boost::none : DecorBoardCode_.reset(boost::initialized_value);
	DecorBoardName_ ? DecorBoardName_=boost::none : DecorBoardName_.reset(boost::initialized_value);
	DecorBoardMemo_ ? DecorBoardMemo_=boost::none : DecorBoardMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	IsCanResize_ ? IsCanResize_=boost::none : IsCanResize_.reset(boost::initialized_value);
	MinXLen_ ? MinXLen_=boost::none : MinXLen_.reset(boost::initialized_value);
	MaxXLen_ ? MaxXLen_=boost::none : MaxXLen_.reset(boost::initialized_value);
	XLenStep_ ? XLenStep_=boost::none : XLenStep_.reset(boost::initialized_value);
	MinYLen_ ? MinYLen_=boost::none : MinYLen_.reset(boost::initialized_value);
	MaxYLen_ ? MaxYLen_=boost::none : MaxYLen_.reset(boost::initialized_value);
	YLenStep_ ? YLenStep_=boost::none : YLenStep_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	PhotoID_ ? PhotoID_=boost::none : PhotoID_.reset(boost::initialized_value);
}

void	JK_DecorBoardInfoImp::SData::Check()
{
	if ( !DecorBoardID_ )
	{
		DecorBoardID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !SourceType_ )
	{
		SourceType_.reset(boost::initialized_value);
	}
	if ( !DefaultYPos_ )
	{
		DefaultYPos_.reset(boost::initialized_value);
	}
	if ( !DecorBoardCode_ )
	{
		DecorBoardCode_.reset(boost::initialized_value);
	}
	if ( !DecorBoardName_ )
	{
		DecorBoardName_.reset(boost::initialized_value);
	}
	if ( !DecorBoardMemo_ )
	{
		DecorBoardMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !IsCanResize_ )
	{
		IsCanResize_.reset(boost::initialized_value);
	}
	if ( !MinXLen_ )
	{
		MinXLen_.reset(boost::initialized_value);
	}
	if ( !MaxXLen_ )
	{
		MaxXLen_.reset(boost::initialized_value);
	}
	if ( !XLenStep_ )
	{
		XLenStep_.reset(boost::initialized_value);
	}
	if ( !MinYLen_ )
	{
		MinYLen_.reset(boost::initialized_value);
	}
	if ( !MaxYLen_ )
	{
		MaxYLen_.reset(boost::initialized_value);
	}
	if ( !YLenStep_ )
	{
		YLenStep_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !PhotoID_ )
	{
		PhotoID_.reset(boost::initialized_value);
	}
}

void	JK_DecorBoardInfoImp::SData::ToUtf8()
{
	if ( DecorBoardCode_ )
	{
		DecorBoardCode_ = boost::locale::conv::to_utf<char>(*DecorBoardCode_, "GBK");
	}
	if ( DecorBoardName_ )
	{
		DecorBoardName_ = boost::locale::conv::to_utf<char>(*DecorBoardName_, "GBK");
	}
	if ( DecorBoardMemo_ )
	{
		DecorBoardMemo_ = boost::locale::conv::to_utf<char>(*DecorBoardMemo_, "GBK");
	}
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
}

void	JK_DecorBoardInfoImp::SData::ToAscii()
{
	if ( DecorBoardCode_ )
	{
		DecorBoardCode_ = boost::locale::conv::from_utf(*DecorBoardCode_, "GBK");
	}
	if ( DecorBoardName_ )
	{
		DecorBoardName_ = boost::locale::conv::from_utf(*DecorBoardName_, "GBK");
	}
	if ( DecorBoardMemo_ )
	{
		DecorBoardMemo_ = boost::locale::conv::from_utf(*DecorBoardMemo_, "GBK");
	}
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
}

autoDB::SColumns JK_DecorBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Use(data.DecorBoardID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.SourceType_ )
	{
		ret.With(SourceType.Use(data.SourceType_));
	}
	if ( data.DefaultYPos_ )
	{
		ret.With(DefaultYPos.Use(data.DefaultYPos_));
	}
	if ( data.DecorBoardCode_ )
	{
		ret.With(DecorBoardCode.Use(data.DecorBoardCode_));
	}
	if ( data.DecorBoardName_ )
	{
		ret.With(DecorBoardName.Use(data.DecorBoardName_));
	}
	if ( data.DecorBoardMemo_ )
	{
		ret.With(DecorBoardMemo.Use(data.DecorBoardMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.IsCanResize_ )
	{
		ret.With(IsCanResize.Use(data.IsCanResize_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Use(data.MinXLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Use(data.MaxXLen_));
	}
	if ( data.XLenStep_ )
	{
		ret.With(XLenStep.Use(data.XLenStep_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Use(data.MinYLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Use(data.MaxYLen_));
	}
	if ( data.YLenStep_ )
	{
		ret.With(YLenStep.Use(data.YLenStep_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Use(data.PhotoID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Into(data.DecorBoardID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.SourceType_ )
	{
		ret.With(SourceType.Into(data.SourceType_));
	}
	if ( data.DefaultYPos_ )
	{
		ret.With(DefaultYPos.Into(data.DefaultYPos_));
	}
	if ( data.DecorBoardCode_ )
	{
		ret.With(DecorBoardCode.Into(data.DecorBoardCode_));
	}
	if ( data.DecorBoardName_ )
	{
		ret.With(DecorBoardName.Into(data.DecorBoardName_));
	}
	if ( data.DecorBoardMemo_ )
	{
		ret.With(DecorBoardMemo.Into(data.DecorBoardMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.IsCanResize_ )
	{
		ret.With(IsCanResize.Into(data.IsCanResize_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Into(data.MinXLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Into(data.MaxXLen_));
	}
	if ( data.XLenStep_ )
	{
		ret.With(XLenStep.Into(data.XLenStep_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Into(data.MinYLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Into(data.MaxYLen_));
	}
	if ( data.YLenStep_ )
	{
		ret.With(YLenStep.Into(data.YLenStep_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Into(data.PhotoID_));
	}
	return std::move(ret);
}


JK_DecorBoardInfoImp	JK_DecorBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorBoardInfoImp(alias));
}

JK_DecorBoardInfoImp::JK_DecorBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorBoardInfo"), alias)
	,DecorBoardID(ImpSPtr_,AUTODB_STR("DecorBoardID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,SourceType(ImpSPtr_,AUTODB_STR("SourceType"))
	,DefaultYPos(ImpSPtr_,AUTODB_STR("DefaultYPos"))
	,DecorBoardCode(ImpSPtr_,AUTODB_STR("DecorBoardCode"))
	,DecorBoardName(ImpSPtr_,AUTODB_STR("DecorBoardName"))
	,DecorBoardMemo(ImpSPtr_,AUTODB_STR("DecorBoardMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,IsCanResize(ImpSPtr_,AUTODB_STR("IsCanResize"))
	,MinXLen(ImpSPtr_,AUTODB_STR("MinXLen"))
	,MaxXLen(ImpSPtr_,AUTODB_STR("MaxXLen"))
	,XLenStep(ImpSPtr_,AUTODB_STR("XLenStep"))
	,MinYLen(ImpSPtr_,AUTODB_STR("MinYLen"))
	,MaxYLen(ImpSPtr_,AUTODB_STR("MaxYLen"))
	,YLenStep(ImpSPtr_,AUTODB_STR("YLenStep"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,PhotoID(ImpSPtr_,AUTODB_STR("PhotoID"))
{}

JK_DecorBoardInfoImp::JK_DecorBoardInfoImp( const JK_DecorBoardInfoImp& rhs ):Table(rhs)
	,DecorBoardID(rhs.DecorBoardID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,SourceType(rhs.SourceType)
	,DefaultYPos(rhs.DefaultYPos)
	,DecorBoardCode(rhs.DecorBoardCode)
	,DecorBoardName(rhs.DecorBoardName)
	,DecorBoardMemo(rhs.DecorBoardMemo)
	,VerCode(rhs.VerCode)
	,GTypeID(rhs.GTypeID)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,ZLen(rhs.ZLen)
	,IsCanResize(rhs.IsCanResize)
	,MinXLen(rhs.MinXLen)
	,MaxXLen(rhs.MaxXLen)
	,XLenStep(rhs.XLenStep)
	,MinYLen(rhs.MinYLen)
	,MaxYLen(rhs.MaxYLen)
	,YLenStep(rhs.YLenStep)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,PhotoID(rhs.PhotoID)
{}

JK_DecorBoardInfoImp::JK_DecorBoardInfoImp( JK_DecorBoardInfoImp&& rhs ):Table(rhs)
	,DecorBoardID(std::move(rhs.DecorBoardID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,SourceType(std::move(rhs.SourceType))
	,DefaultYPos(std::move(rhs.DefaultYPos))
	,DecorBoardCode(std::move(rhs.DecorBoardCode))
	,DecorBoardName(std::move(rhs.DecorBoardName))
	,DecorBoardMemo(std::move(rhs.DecorBoardMemo))
	,VerCode(std::move(rhs.VerCode))
	,GTypeID(std::move(rhs.GTypeID))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,ZLen(std::move(rhs.ZLen))
	,IsCanResize(std::move(rhs.IsCanResize))
	,MinXLen(std::move(rhs.MinXLen))
	,MaxXLen(std::move(rhs.MaxXLen))
	,XLenStep(std::move(rhs.XLenStep))
	,MinYLen(std::move(rhs.MinYLen))
	,MaxYLen(std::move(rhs.MaxYLen))
	,YLenStep(std::move(rhs.YLenStep))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,PhotoID(std::move(rhs.PhotoID))
{}

JK_DecorBoardInfoImp	JK_DecorBoardInfo("");



void	JK_DecorBoardMatInfoImp::SData::SetAll(bool val)
{
	val ? DecorBoardID_.reset(boost::initialized_value) : DecorBoardID_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DecorBoardMatInfoImp::SData::Flip()
{
	DecorBoardID_ ? DecorBoardID_=boost::none : DecorBoardID_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DecorBoardMatInfoImp::SData::Check()
{
	if ( !DecorBoardID_ )
	{
		DecorBoardID_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DecorBoardMatInfoImp::SData::ToUtf8()
{
}

void	JK_DecorBoardMatInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DecorBoardMatInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Use(data.DecorBoardID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorBoardMatInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Into(data.DecorBoardID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DecorBoardMatInfoImp	JK_DecorBoardMatInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorBoardMatInfoImp(alias));
}

JK_DecorBoardMatInfoImp::JK_DecorBoardMatInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorBoardMatInfo"), alias)
	,DecorBoardID(ImpSPtr_,AUTODB_STR("DecorBoardID"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DecorBoardMatInfoImp::JK_DecorBoardMatInfoImp( const JK_DecorBoardMatInfoImp& rhs ):Table(rhs)
	,DecorBoardID(rhs.DecorBoardID)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DecorBoardMatInfoImp::JK_DecorBoardMatInfoImp( JK_DecorBoardMatInfoImp&& rhs ):Table(rhs)
	,DecorBoardID(std::move(rhs.DecorBoardID))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DecorBoardMatInfoImp	JK_DecorBoardMatInfo("");



void	JK_DecorBoardUnitInfoImp::SData::SetAll(bool val)
{
	val ? DecorBoardUnitID_.reset(boost::initialized_value) : DecorBoardUnitID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? DecorBoardID_.reset(boost::initialized_value) : DecorBoardID_=boost::none;
	val ? SplitType_.reset(boost::initialized_value) : SplitType_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? ArcX_.reset(boost::initialized_value) : ArcX_=boost::none;
	val ? ArcY_.reset(boost::initialized_value) : ArcY_=boost::none;
	val ? ArcZ_.reset(boost::initialized_value) : ArcZ_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? DecorBoardUnitIndex_.reset(boost::initialized_value) : DecorBoardUnitIndex_=boost::none;
	val ? DecorBoardUnitName_.reset(boost::initialized_value) : DecorBoardUnitName_=boost::none;
	val ? DecorBoardUnitMemo_.reset(boost::initialized_value) : DecorBoardUnitMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? IsUseDefaultMat_.reset(boost::initialized_value) : IsUseDefaultMat_=boost::none;
}

void	JK_DecorBoardUnitInfoImp::SData::Flip()
{
	DecorBoardUnitID_ ? DecorBoardUnitID_=boost::none : DecorBoardUnitID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	DecorBoardID_ ? DecorBoardID_=boost::none : DecorBoardID_.reset(boost::initialized_value);
	SplitType_ ? SplitType_=boost::none : SplitType_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	ArcX_ ? ArcX_=boost::none : ArcX_.reset(boost::initialized_value);
	ArcY_ ? ArcY_=boost::none : ArcY_.reset(boost::initialized_value);
	ArcZ_ ? ArcZ_=boost::none : ArcZ_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	DecorBoardUnitIndex_ ? DecorBoardUnitIndex_=boost::none : DecorBoardUnitIndex_.reset(boost::initialized_value);
	DecorBoardUnitName_ ? DecorBoardUnitName_=boost::none : DecorBoardUnitName_.reset(boost::initialized_value);
	DecorBoardUnitMemo_ ? DecorBoardUnitMemo_=boost::none : DecorBoardUnitMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	IsUseDefaultMat_ ? IsUseDefaultMat_=boost::none : IsUseDefaultMat_.reset(boost::initialized_value);
}

void	JK_DecorBoardUnitInfoImp::SData::Check()
{
	if ( !DecorBoardUnitID_ )
	{
		DecorBoardUnitID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !DecorBoardID_ )
	{
		DecorBoardID_.reset(boost::initialized_value);
	}
	if ( !SplitType_ )
	{
		SplitType_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !ArcX_ )
	{
		ArcX_.reset(boost::initialized_value);
	}
	if ( !ArcY_ )
	{
		ArcY_.reset(boost::initialized_value);
	}
	if ( !ArcZ_ )
	{
		ArcZ_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !DecorBoardUnitIndex_ )
	{
		DecorBoardUnitIndex_.reset(boost::initialized_value);
	}
	if ( !DecorBoardUnitName_ )
	{
		DecorBoardUnitName_.reset(boost::initialized_value);
	}
	if ( !DecorBoardUnitMemo_ )
	{
		DecorBoardUnitMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !IsUseDefaultMat_ )
	{
		IsUseDefaultMat_.reset(boost::initialized_value);
	}
}

void	JK_DecorBoardUnitInfoImp::SData::ToUtf8()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
	if ( DecorBoardUnitName_ )
	{
		DecorBoardUnitName_ = boost::locale::conv::to_utf<char>(*DecorBoardUnitName_, "GBK");
	}
	if ( DecorBoardUnitMemo_ )
	{
		DecorBoardUnitMemo_ = boost::locale::conv::to_utf<char>(*DecorBoardUnitMemo_, "GBK");
	}
}

void	JK_DecorBoardUnitInfoImp::SData::ToAscii()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
	if ( DecorBoardUnitName_ )
	{
		DecorBoardUnitName_ = boost::locale::conv::from_utf(*DecorBoardUnitName_, "GBK");
	}
	if ( DecorBoardUnitMemo_ )
	{
		DecorBoardUnitMemo_ = boost::locale::conv::from_utf(*DecorBoardUnitMemo_, "GBK");
	}
}

autoDB::SColumns JK_DecorBoardUnitInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Use(data.DecorBoardUnitID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Use(data.DecorBoardID_));
	}
	if ( data.SplitType_ )
	{
		ret.With(SplitType.Use(data.SplitType_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Use(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Use(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Use(data.ArcZ_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.DecorBoardUnitIndex_ )
	{
		ret.With(DecorBoardUnitIndex.Use(data.DecorBoardUnitIndex_));
	}
	if ( data.DecorBoardUnitName_ )
	{
		ret.With(DecorBoardUnitName.Use(data.DecorBoardUnitName_));
	}
	if ( data.DecorBoardUnitMemo_ )
	{
		ret.With(DecorBoardUnitMemo.Use(data.DecorBoardUnitMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.IsUseDefaultMat_ )
	{
		ret.With(IsUseDefaultMat.Use(data.IsUseDefaultMat_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorBoardUnitInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Into(data.DecorBoardUnitID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Into(data.DecorBoardID_));
	}
	if ( data.SplitType_ )
	{
		ret.With(SplitType.Into(data.SplitType_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Into(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Into(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Into(data.ArcZ_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.DecorBoardUnitIndex_ )
	{
		ret.With(DecorBoardUnitIndex.Into(data.DecorBoardUnitIndex_));
	}
	if ( data.DecorBoardUnitName_ )
	{
		ret.With(DecorBoardUnitName.Into(data.DecorBoardUnitName_));
	}
	if ( data.DecorBoardUnitMemo_ )
	{
		ret.With(DecorBoardUnitMemo.Into(data.DecorBoardUnitMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.IsUseDefaultMat_ )
	{
		ret.With(IsUseDefaultMat.Into(data.IsUseDefaultMat_));
	}
	return std::move(ret);
}


JK_DecorBoardUnitInfoImp	JK_DecorBoardUnitInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorBoardUnitInfoImp(alias));
}

JK_DecorBoardUnitInfoImp::JK_DecorBoardUnitInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorBoardUnitInfo"), alias)
	,DecorBoardUnitID(ImpSPtr_,AUTODB_STR("DecorBoardUnitID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,DecorBoardID(ImpSPtr_,AUTODB_STR("DecorBoardID"))
	,SplitType(ImpSPtr_,AUTODB_STR("SplitType"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,ArcX(ImpSPtr_,AUTODB_STR("ArcX"))
	,ArcY(ImpSPtr_,AUTODB_STR("ArcY"))
	,ArcZ(ImpSPtr_,AUTODB_STR("ArcZ"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,DecorBoardUnitIndex(ImpSPtr_,AUTODB_STR("DecorBoardUnitIndex"))
	,DecorBoardUnitName(ImpSPtr_,AUTODB_STR("DecorBoardUnitName"))
	,DecorBoardUnitMemo(ImpSPtr_,AUTODB_STR("DecorBoardUnitMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,IsUseDefaultMat(ImpSPtr_,AUTODB_STR("IsUseDefaultMat"))
{}

JK_DecorBoardUnitInfoImp::JK_DecorBoardUnitInfoImp( const JK_DecorBoardUnitInfoImp& rhs ):Table(rhs)
	,DecorBoardUnitID(rhs.DecorBoardUnitID)
	,IsDel(rhs.IsDel)
	,DecorBoardID(rhs.DecorBoardID)
	,SplitType(rhs.SplitType)
	,SkinDirection(rhs.SkinDirection)
	,ArcX(rhs.ArcX)
	,ArcY(rhs.ArcY)
	,ArcZ(rhs.ArcZ)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,DecorBoardUnitIndex(rhs.DecorBoardUnitIndex)
	,DecorBoardUnitName(rhs.DecorBoardUnitName)
	,DecorBoardUnitMemo(rhs.DecorBoardUnitMemo)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,IsUseDefaultMat(rhs.IsUseDefaultMat)
{}

JK_DecorBoardUnitInfoImp::JK_DecorBoardUnitInfoImp( JK_DecorBoardUnitInfoImp&& rhs ):Table(rhs)
	,DecorBoardUnitID(std::move(rhs.DecorBoardUnitID))
	,IsDel(std::move(rhs.IsDel))
	,DecorBoardID(std::move(rhs.DecorBoardID))
	,SplitType(std::move(rhs.SplitType))
	,SkinDirection(std::move(rhs.SkinDirection))
	,ArcX(std::move(rhs.ArcX))
	,ArcY(std::move(rhs.ArcY))
	,ArcZ(std::move(rhs.ArcZ))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,DecorBoardUnitIndex(std::move(rhs.DecorBoardUnitIndex))
	,DecorBoardUnitName(std::move(rhs.DecorBoardUnitName))
	,DecorBoardUnitMemo(std::move(rhs.DecorBoardUnitMemo))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,IsUseDefaultMat(std::move(rhs.IsUseDefaultMat))
{}

JK_DecorBoardUnitInfoImp	JK_DecorBoardUnitInfo("");



void	JK_DecorBoardUnitMatInfoImp::SData::SetAll(bool val)
{
	val ? DecorBoardUnitID_.reset(boost::initialized_value) : DecorBoardUnitID_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? DefaultSealRuleID_.reset(boost::initialized_value) : DefaultSealRuleID_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DecorBoardUnitMatInfoImp::SData::Flip()
{
	DecorBoardUnitID_ ? DecorBoardUnitID_=boost::none : DecorBoardUnitID_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	DefaultSealRuleID_ ? DefaultSealRuleID_=boost::none : DefaultSealRuleID_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DecorBoardUnitMatInfoImp::SData::Check()
{
	if ( !DecorBoardUnitID_ )
	{
		DecorBoardUnitID_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !DefaultSealRuleID_ )
	{
		DefaultSealRuleID_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DecorBoardUnitMatInfoImp::SData::ToUtf8()
{
}

void	JK_DecorBoardUnitMatInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DecorBoardUnitMatInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Use(data.DecorBoardUnitID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.DefaultSealRuleID_ )
	{
		ret.With(DefaultSealRuleID.Use(data.DefaultSealRuleID_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorBoardUnitMatInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Into(data.DecorBoardUnitID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.DefaultSealRuleID_ )
	{
		ret.With(DefaultSealRuleID.Into(data.DefaultSealRuleID_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DecorBoardUnitMatInfoImp	JK_DecorBoardUnitMatInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorBoardUnitMatInfoImp(alias));
}

JK_DecorBoardUnitMatInfoImp::JK_DecorBoardUnitMatInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorBoardUnitMatInfo"), alias)
	,DecorBoardUnitID(ImpSPtr_,AUTODB_STR("DecorBoardUnitID"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,DefaultSealRuleID(ImpSPtr_,AUTODB_STR("DefaultSealRuleID"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DecorBoardUnitMatInfoImp::JK_DecorBoardUnitMatInfoImp( const JK_DecorBoardUnitMatInfoImp& rhs ):Table(rhs)
	,DecorBoardUnitID(rhs.DecorBoardUnitID)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,IsDefault(rhs.IsDefault)
	,DefaultSealRuleID(rhs.DefaultSealRuleID)
	,SkinDirection(rhs.SkinDirection)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DecorBoardUnitMatInfoImp::JK_DecorBoardUnitMatInfoImp( JK_DecorBoardUnitMatInfoImp&& rhs ):Table(rhs)
	,DecorBoardUnitID(std::move(rhs.DecorBoardUnitID))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,IsDefault(std::move(rhs.IsDefault))
	,DefaultSealRuleID(std::move(rhs.DefaultSealRuleID))
	,SkinDirection(std::move(rhs.SkinDirection))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DecorBoardUnitMatInfoImp	JK_DecorBoardUnitMatInfo("");



void	JK_DecorBoardUnitSealInfoImp::SData::SetAll(bool val)
{
	val ? DecorBoardUnitID_.reset(boost::initialized_value) : DecorBoardUnitID_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
	val ? SealType_.reset(boost::initialized_value) : SealType_=boost::none;
	val ? DefaultMaterialID_.reset(boost::initialized_value) : DefaultMaterialID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? SealOrder_.reset(boost::initialized_value) : SealOrder_=boost::none;
	val ? DecorBoardUnitSealID_.reset(boost::initialized_value) : DecorBoardUnitSealID_=boost::none;
}

void	JK_DecorBoardUnitSealInfoImp::SData::Flip()
{
	DecorBoardUnitID_ ? DecorBoardUnitID_=boost::none : DecorBoardUnitID_.reset(boost::initialized_value);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
	SealType_ ? SealType_=boost::none : SealType_.reset(boost::initialized_value);
	DefaultMaterialID_ ? DefaultMaterialID_=boost::none : DefaultMaterialID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	SealOrder_ ? SealOrder_=boost::none : SealOrder_.reset(boost::initialized_value);
	DecorBoardUnitSealID_ ? DecorBoardUnitSealID_=boost::none : DecorBoardUnitSealID_.reset(boost::initialized_value);
}

void	JK_DecorBoardUnitSealInfoImp::SData::Check()
{
	if ( !DecorBoardUnitID_ )
	{
		DecorBoardUnitID_.reset(boost::initialized_value);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
	if ( !SealType_ )
	{
		SealType_.reset(boost::initialized_value);
	}
	if ( !DefaultMaterialID_ )
	{
		DefaultMaterialID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !SealOrder_ )
	{
		SealOrder_.reset(boost::initialized_value);
	}
	if ( !DecorBoardUnitSealID_ )
	{
		DecorBoardUnitSealID_.reset(boost::initialized_value);
	}
}

void	JK_DecorBoardUnitSealInfoImp::SData::ToUtf8()
{
}

void	JK_DecorBoardUnitSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DecorBoardUnitSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Use(data.DecorBoardUnitID_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Use(data.SealType_));
	}
	if ( data.DefaultMaterialID_ )
	{
		ret.With(DefaultMaterialID.Use(data.DefaultMaterialID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.SealOrder_ )
	{
		ret.With(SealOrder.Use(data.SealOrder_));
	}
	if ( data.DecorBoardUnitSealID_ )
	{
		ret.With(DecorBoardUnitSealID.Use(data.DecorBoardUnitSealID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorBoardUnitSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Into(data.DecorBoardUnitID_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Into(data.SealType_));
	}
	if ( data.DefaultMaterialID_ )
	{
		ret.With(DefaultMaterialID.Into(data.DefaultMaterialID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.SealOrder_ )
	{
		ret.With(SealOrder.Into(data.SealOrder_));
	}
	if ( data.DecorBoardUnitSealID_ )
	{
		ret.With(DecorBoardUnitSealID.Into(data.DecorBoardUnitSealID_));
	}
	return std::move(ret);
}


JK_DecorBoardUnitSealInfoImp	JK_DecorBoardUnitSealInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorBoardUnitSealInfoImp(alias));
}

JK_DecorBoardUnitSealInfoImp::JK_DecorBoardUnitSealInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorBoardUnitSealInfo"), alias)
	,DecorBoardUnitID(ImpSPtr_,AUTODB_STR("DecorBoardUnitID"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
	,SealType(ImpSPtr_,AUTODB_STR("SealType"))
	,DefaultMaterialID(ImpSPtr_,AUTODB_STR("DefaultMaterialID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,SealOrder(ImpSPtr_,AUTODB_STR("SealOrder"))
	,DecorBoardUnitSealID(ImpSPtr_,AUTODB_STR("DecorBoardUnitSealID"))
{}

JK_DecorBoardUnitSealInfoImp::JK_DecorBoardUnitSealInfoImp( const JK_DecorBoardUnitSealInfoImp& rhs ):Table(rhs)
	,DecorBoardUnitID(rhs.DecorBoardUnitID)
	,SealIndex(rhs.SealIndex)
	,SealType(rhs.SealType)
	,DefaultMaterialID(rhs.DefaultMaterialID)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,SealOrder(rhs.SealOrder)
	,DecorBoardUnitSealID(rhs.DecorBoardUnitSealID)
{}

JK_DecorBoardUnitSealInfoImp::JK_DecorBoardUnitSealInfoImp( JK_DecorBoardUnitSealInfoImp&& rhs ):Table(rhs)
	,DecorBoardUnitID(std::move(rhs.DecorBoardUnitID))
	,SealIndex(std::move(rhs.SealIndex))
	,SealType(std::move(rhs.SealType))
	,DefaultMaterialID(std::move(rhs.DefaultMaterialID))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,SealOrder(std::move(rhs.SealOrder))
	,DecorBoardUnitSealID(std::move(rhs.DecorBoardUnitSealID))
{}

JK_DecorBoardUnitSealInfoImp	JK_DecorBoardUnitSealInfo("");



void	JK_DecorInfoImp::SData::SetAll(bool val)
{
	val ? DecorID_.reset(boost::initialized_value) : DecorID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? IsSplit_.reset(boost::initialized_value) : IsSplit_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? ShowID_.reset(boost::initialized_value) : ShowID_=boost::none;
	val ? SkinID_.reset(boost::initialized_value) : SkinID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? DecorCode_.reset(boost::initialized_value) : DecorCode_=boost::none;
	val ? DecorName_.reset(boost::initialized_value) : DecorName_=boost::none;
	val ? DecorMemo_.reset(boost::initialized_value) : DecorMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_DecorInfoImp::SData::Flip()
{
	DecorID_ ? DecorID_=boost::none : DecorID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	IsSplit_ ? IsSplit_=boost::none : IsSplit_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	ShowID_ ? ShowID_=boost::none : ShowID_.reset(boost::initialized_value);
	SkinID_ ? SkinID_=boost::none : SkinID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	DecorCode_ ? DecorCode_=boost::none : DecorCode_.reset(boost::initialized_value);
	DecorName_ ? DecorName_=boost::none : DecorName_.reset(boost::initialized_value);
	DecorMemo_ ? DecorMemo_=boost::none : DecorMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_DecorInfoImp::SData::Check()
{
	if ( !DecorID_ )
	{
		DecorID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !IsSplit_ )
	{
		IsSplit_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !ShowID_ )
	{
		ShowID_.reset(boost::initialized_value);
	}
	if ( !SkinID_ )
	{
		SkinID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !DecorCode_ )
	{
		DecorCode_.reset(boost::initialized_value);
	}
	if ( !DecorName_ )
	{
		DecorName_.reset(boost::initialized_value);
	}
	if ( !DecorMemo_ )
	{
		DecorMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_DecorInfoImp::SData::ToUtf8()
{
	if ( DecorCode_ )
	{
		DecorCode_ = boost::locale::conv::to_utf<char>(*DecorCode_, "GBK");
	}
	if ( DecorName_ )
	{
		DecorName_ = boost::locale::conv::to_utf<char>(*DecorName_, "GBK");
	}
	if ( DecorMemo_ )
	{
		DecorMemo_ = boost::locale::conv::to_utf<char>(*DecorMemo_, "GBK");
	}
}

void	JK_DecorInfoImp::SData::ToAscii()
{
	if ( DecorCode_ )
	{
		DecorCode_ = boost::locale::conv::from_utf(*DecorCode_, "GBK");
	}
	if ( DecorName_ )
	{
		DecorName_ = boost::locale::conv::from_utf(*DecorName_, "GBK");
	}
	if ( DecorMemo_ )
	{
		DecorMemo_ = boost::locale::conv::from_utf(*DecorMemo_, "GBK");
	}
}

autoDB::SColumns JK_DecorInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Use(data.DecorID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Use(data.IsSplit_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Use(data.ShowID_));
	}
	if ( data.SkinID_ )
	{
		ret.With(SkinID.Use(data.SkinID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.DecorCode_ )
	{
		ret.With(DecorCode.Use(data.DecorCode_));
	}
	if ( data.DecorName_ )
	{
		ret.With(DecorName.Use(data.DecorName_));
	}
	if ( data.DecorMemo_ )
	{
		ret.With(DecorMemo.Use(data.DecorMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Into(data.DecorID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Into(data.IsSplit_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Into(data.ShowID_));
	}
	if ( data.SkinID_ )
	{
		ret.With(SkinID.Into(data.SkinID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.DecorCode_ )
	{
		ret.With(DecorCode.Into(data.DecorCode_));
	}
	if ( data.DecorName_ )
	{
		ret.With(DecorName.Into(data.DecorName_));
	}
	if ( data.DecorMemo_ )
	{
		ret.With(DecorMemo.Into(data.DecorMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_DecorInfoImp	JK_DecorInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorInfoImp(alias));
}

JK_DecorInfoImp::JK_DecorInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorInfo"), alias)
	,DecorID(ImpSPtr_,AUTODB_STR("DecorID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,IsSplit(ImpSPtr_,AUTODB_STR("IsSplit"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,ShowID(ImpSPtr_,AUTODB_STR("ShowID"))
	,SkinID(ImpSPtr_,AUTODB_STR("SkinID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,DecorCode(ImpSPtr_,AUTODB_STR("DecorCode"))
	,DecorName(ImpSPtr_,AUTODB_STR("DecorName"))
	,DecorMemo(ImpSPtr_,AUTODB_STR("DecorMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_DecorInfoImp::JK_DecorInfoImp( const JK_DecorInfoImp& rhs ):Table(rhs)
	,DecorID(rhs.DecorID)
	,GroupID(rhs.GroupID)
	,FactoryID(rhs.FactoryID)
	,IsActive(rhs.IsActive)
	,IsSplit(rhs.IsSplit)
	,IsDel(rhs.IsDel)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,ShowID(rhs.ShowID)
	,SkinID(rhs.SkinID)
	,ModelID(rhs.ModelID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,DecorCode(rhs.DecorCode)
	,DecorName(rhs.DecorName)
	,DecorMemo(rhs.DecorMemo)
	,VerCode(rhs.VerCode)
{}

JK_DecorInfoImp::JK_DecorInfoImp( JK_DecorInfoImp&& rhs ):Table(rhs)
	,DecorID(std::move(rhs.DecorID))
	,GroupID(std::move(rhs.GroupID))
	,FactoryID(std::move(rhs.FactoryID))
	,IsActive(std::move(rhs.IsActive))
	,IsSplit(std::move(rhs.IsSplit))
	,IsDel(std::move(rhs.IsDel))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,ShowID(std::move(rhs.ShowID))
	,SkinID(std::move(rhs.SkinID))
	,ModelID(std::move(rhs.ModelID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,DecorCode(std::move(rhs.DecorCode))
	,DecorName(std::move(rhs.DecorName))
	,DecorMemo(std::move(rhs.DecorMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_DecorInfoImp	JK_DecorInfo("");



void	JK_DecorLineInfoImp::SData::SetAll(bool val)
{
	val ? DecorLineID_.reset(boost::initialized_value) : DecorLineID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? ShowID_.reset(boost::initialized_value) : ShowID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? ZOffset_.reset(boost::initialized_value) : ZOffset_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? DecorLineCode_.reset(boost::initialized_value) : DecorLineCode_=boost::none;
	val ? DecorLineName_.reset(boost::initialized_value) : DecorLineName_=boost::none;
	val ? DecorLineMemo_.reset(boost::initialized_value) : DecorLineMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? DefaultYLen_.reset(boost::initialized_value) : DefaultYLen_=boost::none;
}

void	JK_DecorLineInfoImp::SData::Flip()
{
	DecorLineID_ ? DecorLineID_=boost::none : DecorLineID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	ShowID_ ? ShowID_=boost::none : ShowID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	ZOffset_ ? ZOffset_=boost::none : ZOffset_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	DecorLineCode_ ? DecorLineCode_=boost::none : DecorLineCode_.reset(boost::initialized_value);
	DecorLineName_ ? DecorLineName_=boost::none : DecorLineName_.reset(boost::initialized_value);
	DecorLineMemo_ ? DecorLineMemo_=boost::none : DecorLineMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	DefaultYLen_ ? DefaultYLen_=boost::none : DefaultYLen_.reset(boost::initialized_value);
}

void	JK_DecorLineInfoImp::SData::Check()
{
	if ( !DecorLineID_ )
	{
		DecorLineID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !ShowID_ )
	{
		ShowID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !ZOffset_ )
	{
		ZOffset_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !DecorLineCode_ )
	{
		DecorLineCode_.reset(boost::initialized_value);
	}
	if ( !DecorLineName_ )
	{
		DecorLineName_.reset(boost::initialized_value);
	}
	if ( !DecorLineMemo_ )
	{
		DecorLineMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !DefaultYLen_ )
	{
		DefaultYLen_.reset(boost::initialized_value);
	}
}

void	JK_DecorLineInfoImp::SData::ToUtf8()
{
	if ( DecorLineCode_ )
	{
		DecorLineCode_ = boost::locale::conv::to_utf<char>(*DecorLineCode_, "GBK");
	}
	if ( DecorLineName_ )
	{
		DecorLineName_ = boost::locale::conv::to_utf<char>(*DecorLineName_, "GBK");
	}
	if ( DecorLineMemo_ )
	{
		DecorLineMemo_ = boost::locale::conv::to_utf<char>(*DecorLineMemo_, "GBK");
	}
}

void	JK_DecorLineInfoImp::SData::ToAscii()
{
	if ( DecorLineCode_ )
	{
		DecorLineCode_ = boost::locale::conv::from_utf(*DecorLineCode_, "GBK");
	}
	if ( DecorLineName_ )
	{
		DecorLineName_ = boost::locale::conv::from_utf(*DecorLineName_, "GBK");
	}
	if ( DecorLineMemo_ )
	{
		DecorLineMemo_ = boost::locale::conv::from_utf(*DecorLineMemo_, "GBK");
	}
}

autoDB::SColumns JK_DecorLineInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorLineID_ )
	{
		ret.With(DecorLineID.Use(data.DecorLineID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Use(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.ZOffset_ )
	{
		ret.With(ZOffset.Use(data.ZOffset_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.DecorLineCode_ )
	{
		ret.With(DecorLineCode.Use(data.DecorLineCode_));
	}
	if ( data.DecorLineName_ )
	{
		ret.With(DecorLineName.Use(data.DecorLineName_));
	}
	if ( data.DecorLineMemo_ )
	{
		ret.With(DecorLineMemo.Use(data.DecorLineMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.DefaultYLen_ )
	{
		ret.With(DefaultYLen.Use(data.DefaultYLen_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorLineInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorLineID_ )
	{
		ret.With(DecorLineID.Into(data.DecorLineID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Into(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.ZOffset_ )
	{
		ret.With(ZOffset.Into(data.ZOffset_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.DecorLineCode_ )
	{
		ret.With(DecorLineCode.Into(data.DecorLineCode_));
	}
	if ( data.DecorLineName_ )
	{
		ret.With(DecorLineName.Into(data.DecorLineName_));
	}
	if ( data.DecorLineMemo_ )
	{
		ret.With(DecorLineMemo.Into(data.DecorLineMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.DefaultYLen_ )
	{
		ret.With(DefaultYLen.Into(data.DefaultYLen_));
	}
	return std::move(ret);
}


JK_DecorLineInfoImp	JK_DecorLineInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorLineInfoImp(alias));
}

JK_DecorLineInfoImp::JK_DecorLineInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorLineInfo"), alias)
	,DecorLineID(ImpSPtr_,AUTODB_STR("DecorLineID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,ShowID(ImpSPtr_,AUTODB_STR("ShowID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,ZOffset(ImpSPtr_,AUTODB_STR("ZOffset"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,DecorLineCode(ImpSPtr_,AUTODB_STR("DecorLineCode"))
	,DecorLineName(ImpSPtr_,AUTODB_STR("DecorLineName"))
	,DecorLineMemo(ImpSPtr_,AUTODB_STR("DecorLineMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,DefaultYLen(ImpSPtr_,AUTODB_STR("DefaultYLen"))
{}

JK_DecorLineInfoImp::JK_DecorLineInfoImp( const JK_DecorLineInfoImp& rhs ):Table(rhs)
	,DecorLineID(rhs.DecorLineID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,GTypeID(rhs.GTypeID)
	,ShowID(rhs.ShowID)
	,ModelID(rhs.ModelID)
	,ZOffset(rhs.ZOffset)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,DecorLineCode(rhs.DecorLineCode)
	,DecorLineName(rhs.DecorLineName)
	,DecorLineMemo(rhs.DecorLineMemo)
	,VerCode(rhs.VerCode)
	,DefaultYLen(rhs.DefaultYLen)
{}

JK_DecorLineInfoImp::JK_DecorLineInfoImp( JK_DecorLineInfoImp&& rhs ):Table(rhs)
	,DecorLineID(std::move(rhs.DecorLineID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,GTypeID(std::move(rhs.GTypeID))
	,ShowID(std::move(rhs.ShowID))
	,ModelID(std::move(rhs.ModelID))
	,ZOffset(std::move(rhs.ZOffset))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,DecorLineCode(std::move(rhs.DecorLineCode))
	,DecorLineName(std::move(rhs.DecorLineName))
	,DecorLineMemo(std::move(rhs.DecorLineMemo))
	,VerCode(std::move(rhs.VerCode))
	,DefaultYLen(std::move(rhs.DefaultYLen))
{}

JK_DecorLineInfoImp	JK_DecorLineInfo("");



void	JK_DecorLineMatInfoImp::SData::SetAll(bool val)
{
	val ? DecorLineID_.reset(boost::initialized_value) : DecorLineID_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DecorLineMatInfoImp::SData::Flip()
{
	DecorLineID_ ? DecorLineID_=boost::none : DecorLineID_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DecorLineMatInfoImp::SData::Check()
{
	if ( !DecorLineID_ )
	{
		DecorLineID_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DecorLineMatInfoImp::SData::ToUtf8()
{
}

void	JK_DecorLineMatInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DecorLineMatInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorLineID_ )
	{
		ret.With(DecorLineID.Use(data.DecorLineID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorLineMatInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorLineID_ )
	{
		ret.With(DecorLineID.Into(data.DecorLineID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DecorLineMatInfoImp	JK_DecorLineMatInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorLineMatInfoImp(alias));
}

JK_DecorLineMatInfoImp::JK_DecorLineMatInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorLineMatInfo"), alias)
	,DecorLineID(ImpSPtr_,AUTODB_STR("DecorLineID"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DecorLineMatInfoImp::JK_DecorLineMatInfoImp( const JK_DecorLineMatInfoImp& rhs ):Table(rhs)
	,DecorLineID(rhs.DecorLineID)
	,MaterialID(rhs.MaterialID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DecorLineMatInfoImp::JK_DecorLineMatInfoImp( JK_DecorLineMatInfoImp&& rhs ):Table(rhs)
	,DecorLineID(std::move(rhs.DecorLineID))
	,MaterialID(std::move(rhs.MaterialID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DecorLineMatInfoImp	JK_DecorLineMatInfo("");



void	JK_DecorUnitHWFittingMapInfoImp::SData::SetAll(bool val)
{
	val ? DecorBoardUnitID_.reset(boost::initialized_value) : DecorBoardUnitID_=boost::none;
	val ? HWFittingID_.reset(boost::initialized_value) : HWFittingID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DecorUnitHWFittingMapInfoImp::SData::Flip()
{
	DecorBoardUnitID_ ? DecorBoardUnitID_=boost::none : DecorBoardUnitID_.reset(boost::initialized_value);
	HWFittingID_ ? HWFittingID_=boost::none : HWFittingID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DecorUnitHWFittingMapInfoImp::SData::Check()
{
	if ( !DecorBoardUnitID_ )
	{
		DecorBoardUnitID_.reset(boost::initialized_value);
	}
	if ( !HWFittingID_ )
	{
		HWFittingID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DecorUnitHWFittingMapInfoImp::SData::ToUtf8()
{
}

void	JK_DecorUnitHWFittingMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DecorUnitHWFittingMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Use(data.DecorBoardUnitID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Use(data.HWFittingID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DecorUnitHWFittingMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Into(data.DecorBoardUnitID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Into(data.HWFittingID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DecorUnitHWFittingMapInfoImp	JK_DecorUnitHWFittingMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DecorUnitHWFittingMapInfoImp(alias));
}

JK_DecorUnitHWFittingMapInfoImp::JK_DecorUnitHWFittingMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DecorUnitHWFittingMapInfo"), alias)
	,DecorBoardUnitID(ImpSPtr_,AUTODB_STR("DecorBoardUnitID"))
	,HWFittingID(ImpSPtr_,AUTODB_STR("HWFittingID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DecorUnitHWFittingMapInfoImp::JK_DecorUnitHWFittingMapInfoImp( const JK_DecorUnitHWFittingMapInfoImp& rhs ):Table(rhs)
	,DecorBoardUnitID(rhs.DecorBoardUnitID)
	,HWFittingID(rhs.HWFittingID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DecorUnitHWFittingMapInfoImp::JK_DecorUnitHWFittingMapInfoImp( JK_DecorUnitHWFittingMapInfoImp&& rhs ):Table(rhs)
	,DecorBoardUnitID(std::move(rhs.DecorBoardUnitID))
	,HWFittingID(std::move(rhs.HWFittingID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DecorUnitHWFittingMapInfoImp	JK_DecorUnitHWFittingMapInfo("");



void	JK_DoorBoardGapInfoImp::SData::SetAll(bool val)
{
	val ? DoorBoardGapID_.reset(boost::initialized_value) : DoorBoardGapID_=boost::none;
	val ? DoorBoardID_.reset(boost::initialized_value) : DoorBoardID_=boost::none;
	val ? GapPos_.reset(boost::initialized_value) : GapPos_=boost::none;
	val ? GapIndex_.reset(boost::initialized_value) : GapIndex_=boost::none;
	val ? GapType_.reset(boost::initialized_value) : GapType_=boost::none;
	val ? GapShape_.reset(boost::initialized_value) : GapShape_=boost::none;
	val ? XLenFormula_.reset(boost::initialized_value) : XLenFormula_=boost::none;
	val ? YLenFormula_.reset(boost::initialized_value) : YLenFormula_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_DoorBoardGapInfoImp::SData::Flip()
{
	DoorBoardGapID_ ? DoorBoardGapID_=boost::none : DoorBoardGapID_.reset(boost::initialized_value);
	DoorBoardID_ ? DoorBoardID_=boost::none : DoorBoardID_.reset(boost::initialized_value);
	GapPos_ ? GapPos_=boost::none : GapPos_.reset(boost::initialized_value);
	GapIndex_ ? GapIndex_=boost::none : GapIndex_.reset(boost::initialized_value);
	GapType_ ? GapType_=boost::none : GapType_.reset(boost::initialized_value);
	GapShape_ ? GapShape_=boost::none : GapShape_.reset(boost::initialized_value);
	XLenFormula_ ? XLenFormula_=boost::none : XLenFormula_.reset(boost::initialized_value);
	YLenFormula_ ? YLenFormula_=boost::none : YLenFormula_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_DoorBoardGapInfoImp::SData::Check()
{
	if ( !DoorBoardGapID_ )
	{
		DoorBoardGapID_.reset(boost::initialized_value);
	}
	if ( !DoorBoardID_ )
	{
		DoorBoardID_.reset(boost::initialized_value);
	}
	if ( !GapPos_ )
	{
		GapPos_.reset(boost::initialized_value);
	}
	if ( !GapIndex_ )
	{
		GapIndex_.reset(boost::initialized_value);
	}
	if ( !GapType_ )
	{
		GapType_.reset(boost::initialized_value);
	}
	if ( !GapShape_ )
	{
		GapShape_.reset(boost::initialized_value);
	}
	if ( !XLenFormula_ )
	{
		XLenFormula_.reset(boost::initialized_value);
	}
	if ( !YLenFormula_ )
	{
		YLenFormula_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_DoorBoardGapInfoImp::SData::ToUtf8()
{
	if ( XLenFormula_ )
	{
		XLenFormula_ = boost::locale::conv::to_utf<char>(*XLenFormula_, "GBK");
	}
	if ( YLenFormula_ )
	{
		YLenFormula_ = boost::locale::conv::to_utf<char>(*YLenFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
}

void	JK_DoorBoardGapInfoImp::SData::ToAscii()
{
	if ( XLenFormula_ )
	{
		XLenFormula_ = boost::locale::conv::from_utf(*XLenFormula_, "GBK");
	}
	if ( YLenFormula_ )
	{
		YLenFormula_ = boost::locale::conv::from_utf(*YLenFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
}

autoDB::SColumns JK_DoorBoardGapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorBoardGapID_ )
	{
		ret.With(DoorBoardGapID.Use(data.DoorBoardGapID_));
	}
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Use(data.DoorBoardID_));
	}
	if ( data.GapPos_ )
	{
		ret.With(GapPos.Use(data.GapPos_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Use(data.GapIndex_));
	}
	if ( data.GapType_ )
	{
		ret.With(GapType.Use(data.GapType_));
	}
	if ( data.GapShape_ )
	{
		ret.With(GapShape.Use(data.GapShape_));
	}
	if ( data.XLenFormula_ )
	{
		ret.With(XLenFormula.Use(data.XLenFormula_));
	}
	if ( data.YLenFormula_ )
	{
		ret.With(YLenFormula.Use(data.YLenFormula_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorBoardGapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorBoardGapID_ )
	{
		ret.With(DoorBoardGapID.Into(data.DoorBoardGapID_));
	}
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Into(data.DoorBoardID_));
	}
	if ( data.GapPos_ )
	{
		ret.With(GapPos.Into(data.GapPos_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Into(data.GapIndex_));
	}
	if ( data.GapType_ )
	{
		ret.With(GapType.Into(data.GapType_));
	}
	if ( data.GapShape_ )
	{
		ret.With(GapShape.Into(data.GapShape_));
	}
	if ( data.XLenFormula_ )
	{
		ret.With(XLenFormula.Into(data.XLenFormula_));
	}
	if ( data.YLenFormula_ )
	{
		ret.With(YLenFormula.Into(data.YLenFormula_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_DoorBoardGapInfoImp	JK_DoorBoardGapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorBoardGapInfoImp(alias));
}

JK_DoorBoardGapInfoImp::JK_DoorBoardGapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorBoardGapInfo"), alias)
	,DoorBoardGapID(ImpSPtr_,AUTODB_STR("DoorBoardGapID"))
	,DoorBoardID(ImpSPtr_,AUTODB_STR("DoorBoardID"))
	,GapPos(ImpSPtr_,AUTODB_STR("GapPos"))
	,GapIndex(ImpSPtr_,AUTODB_STR("GapIndex"))
	,GapType(ImpSPtr_,AUTODB_STR("GapType"))
	,GapShape(ImpSPtr_,AUTODB_STR("GapShape"))
	,XLenFormula(ImpSPtr_,AUTODB_STR("XLenFormula"))
	,YLenFormula(ImpSPtr_,AUTODB_STR("YLenFormula"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_DoorBoardGapInfoImp::JK_DoorBoardGapInfoImp( const JK_DoorBoardGapInfoImp& rhs ):Table(rhs)
	,DoorBoardGapID(rhs.DoorBoardGapID)
	,DoorBoardID(rhs.DoorBoardID)
	,GapPos(rhs.GapPos)
	,GapIndex(rhs.GapIndex)
	,GapType(rhs.GapType)
	,GapShape(rhs.GapShape)
	,XLenFormula(rhs.XLenFormula)
	,YLenFormula(rhs.YLenFormula)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,VerCode(rhs.VerCode)
{}

JK_DoorBoardGapInfoImp::JK_DoorBoardGapInfoImp( JK_DoorBoardGapInfoImp&& rhs ):Table(rhs)
	,DoorBoardGapID(std::move(rhs.DoorBoardGapID))
	,DoorBoardID(std::move(rhs.DoorBoardID))
	,GapPos(std::move(rhs.GapPos))
	,GapIndex(std::move(rhs.GapIndex))
	,GapType(std::move(rhs.GapType))
	,GapShape(std::move(rhs.GapShape))
	,XLenFormula(std::move(rhs.XLenFormula))
	,YLenFormula(std::move(rhs.YLenFormula))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,VerCode(std::move(rhs.VerCode))
{}

JK_DoorBoardGapInfoImp	JK_DoorBoardGapInfo("");



void	JK_DoorBoardInfoImp::SData::SetAll(bool val)
{
	val ? DoorBoardID_.reset(boost::initialized_value) : DoorBoardID_=boost::none;
	val ? DoorID_.reset(boost::initialized_value) : DoorID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsUseDefaultMat_.reset(boost::initialized_value) : IsUseDefaultMat_=boost::none;
	val ? SplitType_.reset(boost::initialized_value) : SplitType_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? ArcX_.reset(boost::initialized_value) : ArcX_=boost::none;
	val ? ArcY_.reset(boost::initialized_value) : ArcY_=boost::none;
	val ? ArcZ_.reset(boost::initialized_value) : ArcZ_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? DoorBoardIndex_.reset(boost::initialized_value) : DoorBoardIndex_=boost::none;
	val ? DoorBoardName_.reset(boost::initialized_value) : DoorBoardName_=boost::none;
	val ? DoorBoardMemo_.reset(boost::initialized_value) : DoorBoardMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_DoorBoardInfoImp::SData::Flip()
{
	DoorBoardID_ ? DoorBoardID_=boost::none : DoorBoardID_.reset(boost::initialized_value);
	DoorID_ ? DoorID_=boost::none : DoorID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsUseDefaultMat_ ? IsUseDefaultMat_=boost::none : IsUseDefaultMat_.reset(boost::initialized_value);
	SplitType_ ? SplitType_=boost::none : SplitType_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	ArcX_ ? ArcX_=boost::none : ArcX_.reset(boost::initialized_value);
	ArcY_ ? ArcY_=boost::none : ArcY_.reset(boost::initialized_value);
	ArcZ_ ? ArcZ_=boost::none : ArcZ_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	DoorBoardIndex_ ? DoorBoardIndex_=boost::none : DoorBoardIndex_.reset(boost::initialized_value);
	DoorBoardName_ ? DoorBoardName_=boost::none : DoorBoardName_.reset(boost::initialized_value);
	DoorBoardMemo_ ? DoorBoardMemo_=boost::none : DoorBoardMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_DoorBoardInfoImp::SData::Check()
{
	if ( !DoorBoardID_ )
	{
		DoorBoardID_.reset(boost::initialized_value);
	}
	if ( !DoorID_ )
	{
		DoorID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsUseDefaultMat_ )
	{
		IsUseDefaultMat_.reset(boost::initialized_value);
	}
	if ( !SplitType_ )
	{
		SplitType_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !ArcX_ )
	{
		ArcX_.reset(boost::initialized_value);
	}
	if ( !ArcY_ )
	{
		ArcY_.reset(boost::initialized_value);
	}
	if ( !ArcZ_ )
	{
		ArcZ_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !DoorBoardIndex_ )
	{
		DoorBoardIndex_.reset(boost::initialized_value);
	}
	if ( !DoorBoardName_ )
	{
		DoorBoardName_.reset(boost::initialized_value);
	}
	if ( !DoorBoardMemo_ )
	{
		DoorBoardMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_DoorBoardInfoImp::SData::ToUtf8()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
	if ( DoorBoardName_ )
	{
		DoorBoardName_ = boost::locale::conv::to_utf<char>(*DoorBoardName_, "GBK");
	}
	if ( DoorBoardMemo_ )
	{
		DoorBoardMemo_ = boost::locale::conv::to_utf<char>(*DoorBoardMemo_, "GBK");
	}
}

void	JK_DoorBoardInfoImp::SData::ToAscii()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
	if ( DoorBoardName_ )
	{
		DoorBoardName_ = boost::locale::conv::from_utf(*DoorBoardName_, "GBK");
	}
	if ( DoorBoardMemo_ )
	{
		DoorBoardMemo_ = boost::locale::conv::from_utf(*DoorBoardMemo_, "GBK");
	}
}

autoDB::SColumns JK_DoorBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Use(data.DoorBoardID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Use(data.DoorID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsUseDefaultMat_ )
	{
		ret.With(IsUseDefaultMat.Use(data.IsUseDefaultMat_));
	}
	if ( data.SplitType_ )
	{
		ret.With(SplitType.Use(data.SplitType_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Use(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Use(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Use(data.ArcZ_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.DoorBoardIndex_ )
	{
		ret.With(DoorBoardIndex.Use(data.DoorBoardIndex_));
	}
	if ( data.DoorBoardName_ )
	{
		ret.With(DoorBoardName.Use(data.DoorBoardName_));
	}
	if ( data.DoorBoardMemo_ )
	{
		ret.With(DoorBoardMemo.Use(data.DoorBoardMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Into(data.DoorBoardID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Into(data.DoorID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsUseDefaultMat_ )
	{
		ret.With(IsUseDefaultMat.Into(data.IsUseDefaultMat_));
	}
	if ( data.SplitType_ )
	{
		ret.With(SplitType.Into(data.SplitType_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Into(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Into(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Into(data.ArcZ_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.DoorBoardIndex_ )
	{
		ret.With(DoorBoardIndex.Into(data.DoorBoardIndex_));
	}
	if ( data.DoorBoardName_ )
	{
		ret.With(DoorBoardName.Into(data.DoorBoardName_));
	}
	if ( data.DoorBoardMemo_ )
	{
		ret.With(DoorBoardMemo.Into(data.DoorBoardMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_DoorBoardInfoImp	JK_DoorBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorBoardInfoImp(alias));
}

JK_DoorBoardInfoImp::JK_DoorBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorBoardInfo"), alias)
	,DoorBoardID(ImpSPtr_,AUTODB_STR("DoorBoardID"))
	,DoorID(ImpSPtr_,AUTODB_STR("DoorID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsUseDefaultMat(ImpSPtr_,AUTODB_STR("IsUseDefaultMat"))
	,SplitType(ImpSPtr_,AUTODB_STR("SplitType"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,ArcX(ImpSPtr_,AUTODB_STR("ArcX"))
	,ArcY(ImpSPtr_,AUTODB_STR("ArcY"))
	,ArcZ(ImpSPtr_,AUTODB_STR("ArcZ"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,DoorBoardIndex(ImpSPtr_,AUTODB_STR("DoorBoardIndex"))
	,DoorBoardName(ImpSPtr_,AUTODB_STR("DoorBoardName"))
	,DoorBoardMemo(ImpSPtr_,AUTODB_STR("DoorBoardMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_DoorBoardInfoImp::JK_DoorBoardInfoImp( const JK_DoorBoardInfoImp& rhs ):Table(rhs)
	,DoorBoardID(rhs.DoorBoardID)
	,DoorID(rhs.DoorID)
	,IsDel(rhs.IsDel)
	,IsUseDefaultMat(rhs.IsUseDefaultMat)
	,SplitType(rhs.SplitType)
	,SkinDirection(rhs.SkinDirection)
	,ArcX(rhs.ArcX)
	,ArcY(rhs.ArcY)
	,ArcZ(rhs.ArcZ)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,DoorBoardIndex(rhs.DoorBoardIndex)
	,DoorBoardName(rhs.DoorBoardName)
	,DoorBoardMemo(rhs.DoorBoardMemo)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_DoorBoardInfoImp::JK_DoorBoardInfoImp( JK_DoorBoardInfoImp&& rhs ):Table(rhs)
	,DoorBoardID(std::move(rhs.DoorBoardID))
	,DoorID(std::move(rhs.DoorID))
	,IsDel(std::move(rhs.IsDel))
	,IsUseDefaultMat(std::move(rhs.IsUseDefaultMat))
	,SplitType(std::move(rhs.SplitType))
	,SkinDirection(std::move(rhs.SkinDirection))
	,ArcX(std::move(rhs.ArcX))
	,ArcY(std::move(rhs.ArcY))
	,ArcZ(std::move(rhs.ArcZ))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,DoorBoardIndex(std::move(rhs.DoorBoardIndex))
	,DoorBoardName(std::move(rhs.DoorBoardName))
	,DoorBoardMemo(std::move(rhs.DoorBoardMemo))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_DoorBoardInfoImp	JK_DoorBoardInfo("");



void	JK_DoorBoardMatMapInfoImp::SData::SetAll(bool val)
{
	val ? DoorBoardID_.reset(boost::initialized_value) : DoorBoardID_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DoorBoardMatMapInfoImp::SData::Flip()
{
	DoorBoardID_ ? DoorBoardID_=boost::none : DoorBoardID_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DoorBoardMatMapInfoImp::SData::Check()
{
	if ( !DoorBoardID_ )
	{
		DoorBoardID_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DoorBoardMatMapInfoImp::SData::ToUtf8()
{
}

void	JK_DoorBoardMatMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DoorBoardMatMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Use(data.DoorBoardID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorBoardMatMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Into(data.DoorBoardID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DoorBoardMatMapInfoImp	JK_DoorBoardMatMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorBoardMatMapInfoImp(alias));
}

JK_DoorBoardMatMapInfoImp::JK_DoorBoardMatMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorBoardMatMapInfo"), alias)
	,DoorBoardID(ImpSPtr_,AUTODB_STR("DoorBoardID"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DoorBoardMatMapInfoImp::JK_DoorBoardMatMapInfoImp( const JK_DoorBoardMatMapInfoImp& rhs ):Table(rhs)
	,DoorBoardID(rhs.DoorBoardID)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DoorBoardMatMapInfoImp::JK_DoorBoardMatMapInfoImp( JK_DoorBoardMatMapInfoImp&& rhs ):Table(rhs)
	,DoorBoardID(std::move(rhs.DoorBoardID))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DoorBoardMatMapInfoImp	JK_DoorBoardMatMapInfo("");



void	JK_DoorBoardSealInfoImp::SData::SetAll(bool val)
{
	val ? DoorBoardID_.reset(boost::initialized_value) : DoorBoardID_=boost::none;
	val ? SealOrder_.reset(boost::initialized_value) : SealOrder_=boost::none;
	val ? SealType_.reset(boost::initialized_value) : SealType_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
}

void	JK_DoorBoardSealInfoImp::SData::Flip()
{
	DoorBoardID_ ? DoorBoardID_=boost::none : DoorBoardID_.reset(boost::initialized_value);
	SealOrder_ ? SealOrder_=boost::none : SealOrder_.reset(boost::initialized_value);
	SealType_ ? SealType_=boost::none : SealType_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
}

void	JK_DoorBoardSealInfoImp::SData::Check()
{
	if ( !DoorBoardID_ )
	{
		DoorBoardID_.reset(boost::initialized_value);
	}
	if ( !SealOrder_ )
	{
		SealOrder_.reset(boost::initialized_value);
	}
	if ( !SealType_ )
	{
		SealType_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
}

void	JK_DoorBoardSealInfoImp::SData::ToUtf8()
{
}

void	JK_DoorBoardSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DoorBoardSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Use(data.DoorBoardID_));
	}
	if ( data.SealOrder_ )
	{
		ret.With(SealOrder.Use(data.SealOrder_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Use(data.SealType_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorBoardSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Into(data.DoorBoardID_));
	}
	if ( data.SealOrder_ )
	{
		ret.With(SealOrder.Into(data.SealOrder_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Into(data.SealType_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	return std::move(ret);
}


JK_DoorBoardSealInfoImp	JK_DoorBoardSealInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorBoardSealInfoImp(alias));
}

JK_DoorBoardSealInfoImp::JK_DoorBoardSealInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorBoardSealInfo"), alias)
	,DoorBoardID(ImpSPtr_,AUTODB_STR("DoorBoardID"))
	,SealOrder(ImpSPtr_,AUTODB_STR("SealOrder"))
	,SealType(ImpSPtr_,AUTODB_STR("SealType"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
{}

JK_DoorBoardSealInfoImp::JK_DoorBoardSealInfoImp( const JK_DoorBoardSealInfoImp& rhs ):Table(rhs)
	,DoorBoardID(rhs.DoorBoardID)
	,SealOrder(rhs.SealOrder)
	,SealType(rhs.SealType)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,SealIndex(rhs.SealIndex)
{}

JK_DoorBoardSealInfoImp::JK_DoorBoardSealInfoImp( JK_DoorBoardSealInfoImp&& rhs ):Table(rhs)
	,DoorBoardID(std::move(rhs.DoorBoardID))
	,SealOrder(std::move(rhs.SealOrder))
	,SealType(std::move(rhs.SealType))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,SealIndex(std::move(rhs.SealIndex))
{}

JK_DoorBoardSealInfoImp	JK_DoorBoardSealInfo("");



void	JK_DoorInfoImp::SData::SetAll(bool val)
{
	val ? DoorID_.reset(boost::initialized_value) : DoorID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? CombineType_.reset(boost::initialized_value) : CombineType_=boost::none;
	val ? PhotoID_.reset(boost::initialized_value) : PhotoID_=boost::none;
	val ? VirtualContainerXLen_.reset(boost::initialized_value) : VirtualContainerXLen_=boost::none;
	val ? VirtualContainerYLen_.reset(boost::initialized_value) : VirtualContainerYLen_=boost::none;
	val ? VirtualContainerZLen_.reset(boost::initialized_value) : VirtualContainerZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? DoorCode_.reset(boost::initialized_value) : DoorCode_=boost::none;
	val ? DoorName_.reset(boost::initialized_value) : DoorName_=boost::none;
	val ? DoorMemo_.reset(boost::initialized_value) : DoorMemo_=boost::none;
}

void	JK_DoorInfoImp::SData::Flip()
{
	DoorID_ ? DoorID_=boost::none : DoorID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	CombineType_ ? CombineType_=boost::none : CombineType_.reset(boost::initialized_value);
	PhotoID_ ? PhotoID_=boost::none : PhotoID_.reset(boost::initialized_value);
	VirtualContainerXLen_ ? VirtualContainerXLen_=boost::none : VirtualContainerXLen_.reset(boost::initialized_value);
	VirtualContainerYLen_ ? VirtualContainerYLen_=boost::none : VirtualContainerYLen_.reset(boost::initialized_value);
	VirtualContainerZLen_ ? VirtualContainerZLen_=boost::none : VirtualContainerZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	DoorCode_ ? DoorCode_=boost::none : DoorCode_.reset(boost::initialized_value);
	DoorName_ ? DoorName_=boost::none : DoorName_.reset(boost::initialized_value);
	DoorMemo_ ? DoorMemo_=boost::none : DoorMemo_.reset(boost::initialized_value);
}

void	JK_DoorInfoImp::SData::Check()
{
	if ( !DoorID_ )
	{
		DoorID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !CombineType_ )
	{
		CombineType_.reset(boost::initialized_value);
	}
	if ( !PhotoID_ )
	{
		PhotoID_.reset(boost::initialized_value);
	}
	if ( !VirtualContainerXLen_ )
	{
		VirtualContainerXLen_.reset(boost::initialized_value);
	}
	if ( !VirtualContainerYLen_ )
	{
		VirtualContainerYLen_.reset(boost::initialized_value);
	}
	if ( !VirtualContainerZLen_ )
	{
		VirtualContainerZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !DoorCode_ )
	{
		DoorCode_.reset(boost::initialized_value);
	}
	if ( !DoorName_ )
	{
		DoorName_.reset(boost::initialized_value);
	}
	if ( !DoorMemo_ )
	{
		DoorMemo_.reset(boost::initialized_value);
	}
}

void	JK_DoorInfoImp::SData::ToUtf8()
{
	if ( DoorCode_ )
	{
		DoorCode_ = boost::locale::conv::to_utf<char>(*DoorCode_, "GBK");
	}
	if ( DoorName_ )
	{
		DoorName_ = boost::locale::conv::to_utf<char>(*DoorName_, "GBK");
	}
	if ( DoorMemo_ )
	{
		DoorMemo_ = boost::locale::conv::to_utf<char>(*DoorMemo_, "GBK");
	}
}

void	JK_DoorInfoImp::SData::ToAscii()
{
	if ( DoorCode_ )
	{
		DoorCode_ = boost::locale::conv::from_utf(*DoorCode_, "GBK");
	}
	if ( DoorName_ )
	{
		DoorName_ = boost::locale::conv::from_utf(*DoorName_, "GBK");
	}
	if ( DoorMemo_ )
	{
		DoorMemo_ = boost::locale::conv::from_utf(*DoorMemo_, "GBK");
	}
}

autoDB::SColumns JK_DoorInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Use(data.DoorID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.CombineType_ )
	{
		ret.With(CombineType.Use(data.CombineType_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Use(data.PhotoID_));
	}
	if ( data.VirtualContainerXLen_ )
	{
		ret.With(VirtualContainerXLen.Use(data.VirtualContainerXLen_));
	}
	if ( data.VirtualContainerYLen_ )
	{
		ret.With(VirtualContainerYLen.Use(data.VirtualContainerYLen_));
	}
	if ( data.VirtualContainerZLen_ )
	{
		ret.With(VirtualContainerZLen.Use(data.VirtualContainerZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.DoorCode_ )
	{
		ret.With(DoorCode.Use(data.DoorCode_));
	}
	if ( data.DoorName_ )
	{
		ret.With(DoorName.Use(data.DoorName_));
	}
	if ( data.DoorMemo_ )
	{
		ret.With(DoorMemo.Use(data.DoorMemo_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Into(data.DoorID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.CombineType_ )
	{
		ret.With(CombineType.Into(data.CombineType_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Into(data.PhotoID_));
	}
	if ( data.VirtualContainerXLen_ )
	{
		ret.With(VirtualContainerXLen.Into(data.VirtualContainerXLen_));
	}
	if ( data.VirtualContainerYLen_ )
	{
		ret.With(VirtualContainerYLen.Into(data.VirtualContainerYLen_));
	}
	if ( data.VirtualContainerZLen_ )
	{
		ret.With(VirtualContainerZLen.Into(data.VirtualContainerZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.DoorCode_ )
	{
		ret.With(DoorCode.Into(data.DoorCode_));
	}
	if ( data.DoorName_ )
	{
		ret.With(DoorName.Into(data.DoorName_));
	}
	if ( data.DoorMemo_ )
	{
		ret.With(DoorMemo.Into(data.DoorMemo_));
	}
	return std::move(ret);
}


JK_DoorInfoImp	JK_DoorInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorInfoImp(alias));
}

JK_DoorInfoImp::JK_DoorInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorInfo"), alias)
	,DoorID(ImpSPtr_,AUTODB_STR("DoorID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,CombineType(ImpSPtr_,AUTODB_STR("CombineType"))
	,PhotoID(ImpSPtr_,AUTODB_STR("PhotoID"))
	,VirtualContainerXLen(ImpSPtr_,AUTODB_STR("VirtualContainerXLen"))
	,VirtualContainerYLen(ImpSPtr_,AUTODB_STR("VirtualContainerYLen"))
	,VirtualContainerZLen(ImpSPtr_,AUTODB_STR("VirtualContainerZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,DoorCode(ImpSPtr_,AUTODB_STR("DoorCode"))
	,DoorName(ImpSPtr_,AUTODB_STR("DoorName"))
	,DoorMemo(ImpSPtr_,AUTODB_STR("DoorMemo"))
{}

JK_DoorInfoImp::JK_DoorInfoImp( const JK_DoorInfoImp& rhs ):Table(rhs)
	,DoorID(rhs.DoorID)
	,GroupID(rhs.GroupID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,GTypeID(rhs.GTypeID)
	,CombineType(rhs.CombineType)
	,PhotoID(rhs.PhotoID)
	,VirtualContainerXLen(rhs.VirtualContainerXLen)
	,VirtualContainerYLen(rhs.VirtualContainerYLen)
	,VirtualContainerZLen(rhs.VirtualContainerZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,DoorCode(rhs.DoorCode)
	,DoorName(rhs.DoorName)
	,DoorMemo(rhs.DoorMemo)
{}

JK_DoorInfoImp::JK_DoorInfoImp( JK_DoorInfoImp&& rhs ):Table(rhs)
	,DoorID(std::move(rhs.DoorID))
	,GroupID(std::move(rhs.GroupID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,GTypeID(std::move(rhs.GTypeID))
	,CombineType(std::move(rhs.CombineType))
	,PhotoID(std::move(rhs.PhotoID))
	,VirtualContainerXLen(std::move(rhs.VirtualContainerXLen))
	,VirtualContainerYLen(std::move(rhs.VirtualContainerYLen))
	,VirtualContainerZLen(std::move(rhs.VirtualContainerZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,DoorCode(std::move(rhs.DoorCode))
	,DoorName(std::move(rhs.DoorName))
	,DoorMemo(std::move(rhs.DoorMemo))
{}

JK_DoorInfoImp	JK_DoorInfo("");



void	JK_DoorMatMapInfoImp::SData::SetAll(bool val)
{
	val ? DoorID_.reset(boost::initialized_value) : DoorID_=boost::none;
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DoorMatMapInfoImp::SData::Flip()
{
	DoorID_ ? DoorID_=boost::none : DoorID_.reset(boost::initialized_value);
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DoorMatMapInfoImp::SData::Check()
{
	if ( !DoorID_ )
	{
		DoorID_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DoorMatMapInfoImp::SData::ToUtf8()
{
}

void	JK_DoorMatMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DoorMatMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Use(data.DoorID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorMatMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Into(data.DoorID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DoorMatMapInfoImp	JK_DoorMatMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorMatMapInfoImp(alias));
}

JK_DoorMatMapInfoImp::JK_DoorMatMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorMatMapInfo"), alias)
	,DoorID(ImpSPtr_,AUTODB_STR("DoorID"))
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DoorMatMapInfoImp::JK_DoorMatMapInfoImp( const JK_DoorMatMapInfoImp& rhs ):Table(rhs)
	,DoorID(rhs.DoorID)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DoorMatMapInfoImp::JK_DoorMatMapInfoImp( JK_DoorMatMapInfoImp&& rhs ):Table(rhs)
	,DoorID(std::move(rhs.DoorID))
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DoorMatMapInfoImp	JK_DoorMatMapInfo("");



void	JK_DoorMatPlanHandleMapInfoImp::SData::SetAll(bool val)
{
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? HandleID_.reset(boost::initialized_value) : HandleID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DoorMatPlanHandleMapInfoImp::SData::Flip()
{
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	HandleID_ ? HandleID_=boost::none : HandleID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DoorMatPlanHandleMapInfoImp::SData::Check()
{
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !HandleID_ )
	{
		HandleID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DoorMatPlanHandleMapInfoImp::SData::ToUtf8()
{
}

void	JK_DoorMatPlanHandleMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DoorMatPlanHandleMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.HandleID_ )
	{
		ret.With(HandleID.Use(data.HandleID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorMatPlanHandleMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.HandleID_ )
	{
		ret.With(HandleID.Into(data.HandleID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DoorMatPlanHandleMapInfoImp	JK_DoorMatPlanHandleMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorMatPlanHandleMapInfoImp(alias));
}

JK_DoorMatPlanHandleMapInfoImp::JK_DoorMatPlanHandleMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorMatPlanHandleMapInfo"), alias)
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,HandleID(ImpSPtr_,AUTODB_STR("HandleID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DoorMatPlanHandleMapInfoImp::JK_DoorMatPlanHandleMapInfoImp( const JK_DoorMatPlanHandleMapInfoImp& rhs ):Table(rhs)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,HandleID(rhs.HandleID)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DoorMatPlanHandleMapInfoImp::JK_DoorMatPlanHandleMapInfoImp( JK_DoorMatPlanHandleMapInfoImp&& rhs ):Table(rhs)
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,HandleID(std::move(rhs.HandleID))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DoorMatPlanHandleMapInfoImp	JK_DoorMatPlanHandleMapInfo("");



void	JK_DoorMatPlanInfoImp::SData::SetAll(bool val)
{
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? DoorMatPlanCode_.reset(boost::initialized_value) : DoorMatPlanCode_=boost::none;
	val ? DoorMatPlanName_.reset(boost::initialized_value) : DoorMatPlanName_=boost::none;
	val ? DoorMatPlanMemo_.reset(boost::initialized_value) : DoorMatPlanMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? IsCanSeal_.reset(boost::initialized_value) : IsCanSeal_=boost::none;
}

void	JK_DoorMatPlanInfoImp::SData::Flip()
{
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	DoorMatPlanCode_ ? DoorMatPlanCode_=boost::none : DoorMatPlanCode_.reset(boost::initialized_value);
	DoorMatPlanName_ ? DoorMatPlanName_=boost::none : DoorMatPlanName_.reset(boost::initialized_value);
	DoorMatPlanMemo_ ? DoorMatPlanMemo_=boost::none : DoorMatPlanMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	IsCanSeal_ ? IsCanSeal_=boost::none : IsCanSeal_.reset(boost::initialized_value);
}

void	JK_DoorMatPlanInfoImp::SData::Check()
{
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanCode_ )
	{
		DoorMatPlanCode_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanName_ )
	{
		DoorMatPlanName_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanMemo_ )
	{
		DoorMatPlanMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !IsCanSeal_ )
	{
		IsCanSeal_.reset(boost::initialized_value);
	}
}

void	JK_DoorMatPlanInfoImp::SData::ToUtf8()
{
	if ( DoorMatPlanCode_ )
	{
		DoorMatPlanCode_ = boost::locale::conv::to_utf<char>(*DoorMatPlanCode_, "GBK");
	}
	if ( DoorMatPlanName_ )
	{
		DoorMatPlanName_ = boost::locale::conv::to_utf<char>(*DoorMatPlanName_, "GBK");
	}
	if ( DoorMatPlanMemo_ )
	{
		DoorMatPlanMemo_ = boost::locale::conv::to_utf<char>(*DoorMatPlanMemo_, "GBK");
	}
}

void	JK_DoorMatPlanInfoImp::SData::ToAscii()
{
	if ( DoorMatPlanCode_ )
	{
		DoorMatPlanCode_ = boost::locale::conv::from_utf(*DoorMatPlanCode_, "GBK");
	}
	if ( DoorMatPlanName_ )
	{
		DoorMatPlanName_ = boost::locale::conv::from_utf(*DoorMatPlanName_, "GBK");
	}
	if ( DoorMatPlanMemo_ )
	{
		DoorMatPlanMemo_ = boost::locale::conv::from_utf(*DoorMatPlanMemo_, "GBK");
	}
}

autoDB::SColumns JK_DoorMatPlanInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.DoorMatPlanCode_ )
	{
		ret.With(DoorMatPlanCode.Use(data.DoorMatPlanCode_));
	}
	if ( data.DoorMatPlanName_ )
	{
		ret.With(DoorMatPlanName.Use(data.DoorMatPlanName_));
	}
	if ( data.DoorMatPlanMemo_ )
	{
		ret.With(DoorMatPlanMemo.Use(data.DoorMatPlanMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.IsCanSeal_ )
	{
		ret.With(IsCanSeal.Use(data.IsCanSeal_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorMatPlanInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.DoorMatPlanCode_ )
	{
		ret.With(DoorMatPlanCode.Into(data.DoorMatPlanCode_));
	}
	if ( data.DoorMatPlanName_ )
	{
		ret.With(DoorMatPlanName.Into(data.DoorMatPlanName_));
	}
	if ( data.DoorMatPlanMemo_ )
	{
		ret.With(DoorMatPlanMemo.Into(data.DoorMatPlanMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.IsCanSeal_ )
	{
		ret.With(IsCanSeal.Into(data.IsCanSeal_));
	}
	return std::move(ret);
}


JK_DoorMatPlanInfoImp	JK_DoorMatPlanInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorMatPlanInfoImp(alias));
}

JK_DoorMatPlanInfoImp::JK_DoorMatPlanInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorMatPlanInfo"), alias)
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,DoorMatPlanCode(ImpSPtr_,AUTODB_STR("DoorMatPlanCode"))
	,DoorMatPlanName(ImpSPtr_,AUTODB_STR("DoorMatPlanName"))
	,DoorMatPlanMemo(ImpSPtr_,AUTODB_STR("DoorMatPlanMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,IsCanSeal(ImpSPtr_,AUTODB_STR("IsCanSeal"))
{}

JK_DoorMatPlanInfoImp::JK_DoorMatPlanInfoImp( const JK_DoorMatPlanInfoImp& rhs ):Table(rhs)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,DoorMatPlanCode(rhs.DoorMatPlanCode)
	,DoorMatPlanName(rhs.DoorMatPlanName)
	,DoorMatPlanMemo(rhs.DoorMatPlanMemo)
	,VerCode(rhs.VerCode)
	,ModelID(rhs.ModelID)
	,IsCanSeal(rhs.IsCanSeal)
{}

JK_DoorMatPlanInfoImp::JK_DoorMatPlanInfoImp( JK_DoorMatPlanInfoImp&& rhs ):Table(rhs)
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,DoorMatPlanCode(std::move(rhs.DoorMatPlanCode))
	,DoorMatPlanName(std::move(rhs.DoorMatPlanName))
	,DoorMatPlanMemo(std::move(rhs.DoorMatPlanMemo))
	,VerCode(std::move(rhs.VerCode))
	,ModelID(std::move(rhs.ModelID))
	,IsCanSeal(std::move(rhs.IsCanSeal))
{}

JK_DoorMatPlanInfoImp	JK_DoorMatPlanInfo("");



void	JK_DoorRegionHWFittingMapInfoImp::SData::SetAll(bool val)
{
	val ? DoorSystemRegionID_.reset(boost::initialized_value) : DoorSystemRegionID_=boost::none;
	val ? HWFittingID_.reset(boost::initialized_value) : HWFittingID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DoorRegionHWFittingMapInfoImp::SData::Flip()
{
	DoorSystemRegionID_ ? DoorSystemRegionID_=boost::none : DoorSystemRegionID_.reset(boost::initialized_value);
	HWFittingID_ ? HWFittingID_=boost::none : HWFittingID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DoorRegionHWFittingMapInfoImp::SData::Check()
{
	if ( !DoorSystemRegionID_ )
	{
		DoorSystemRegionID_.reset(boost::initialized_value);
	}
	if ( !HWFittingID_ )
	{
		HWFittingID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DoorRegionHWFittingMapInfoImp::SData::ToUtf8()
{
}

void	JK_DoorRegionHWFittingMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DoorRegionHWFittingMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Use(data.DoorSystemRegionID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Use(data.HWFittingID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorRegionHWFittingMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Into(data.DoorSystemRegionID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Into(data.HWFittingID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DoorRegionHWFittingMapInfoImp	JK_DoorRegionHWFittingMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorRegionHWFittingMapInfoImp(alias));
}

JK_DoorRegionHWFittingMapInfoImp::JK_DoorRegionHWFittingMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorRegionHWFittingMapInfo"), alias)
	,DoorSystemRegionID(ImpSPtr_,AUTODB_STR("DoorSystemRegionID"))
	,HWFittingID(ImpSPtr_,AUTODB_STR("HWFittingID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DoorRegionHWFittingMapInfoImp::JK_DoorRegionHWFittingMapInfoImp( const JK_DoorRegionHWFittingMapInfoImp& rhs ):Table(rhs)
	,DoorSystemRegionID(rhs.DoorSystemRegionID)
	,HWFittingID(rhs.HWFittingID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DoorRegionHWFittingMapInfoImp::JK_DoorRegionHWFittingMapInfoImp( JK_DoorRegionHWFittingMapInfoImp&& rhs ):Table(rhs)
	,DoorSystemRegionID(std::move(rhs.DoorSystemRegionID))
	,HWFittingID(std::move(rhs.HWFittingID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DoorRegionHWFittingMapInfoImp	JK_DoorRegionHWFittingMapInfo("");



void	JK_DoorSystemInfoImp::SData::SetAll(bool val)
{
	val ? DoorSystemID_.reset(boost::initialized_value) : DoorSystemID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? MatchCabShape_.reset(boost::initialized_value) : MatchCabShape_=boost::none;
	val ? InstallType_.reset(boost::initialized_value) : InstallType_=boost::none;
	val ? VirtualXLen_.reset(boost::initialized_value) : VirtualXLen_=boost::none;
	val ? VirtualYLen_.reset(boost::initialized_value) : VirtualYLen_=boost::none;
	val ? VirtualShapeXLen_.reset(boost::initialized_value) : VirtualShapeXLen_=boost::none;
	val ? VirtualShapeZLen_.reset(boost::initialized_value) : VirtualShapeZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? DoorSystemCode_.reset(boost::initialized_value) : DoorSystemCode_=boost::none;
	val ? DoorSystemName_.reset(boost::initialized_value) : DoorSystemName_=boost::none;
	val ? DoorSystemMemo_.reset(boost::initialized_value) : DoorSystemMemo_=boost::none;
}

void	JK_DoorSystemInfoImp::SData::Flip()
{
	DoorSystemID_ ? DoorSystemID_=boost::none : DoorSystemID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	MatchCabShape_ ? MatchCabShape_=boost::none : MatchCabShape_.reset(boost::initialized_value);
	InstallType_ ? InstallType_=boost::none : InstallType_.reset(boost::initialized_value);
	VirtualXLen_ ? VirtualXLen_=boost::none : VirtualXLen_.reset(boost::initialized_value);
	VirtualYLen_ ? VirtualYLen_=boost::none : VirtualYLen_.reset(boost::initialized_value);
	VirtualShapeXLen_ ? VirtualShapeXLen_=boost::none : VirtualShapeXLen_.reset(boost::initialized_value);
	VirtualShapeZLen_ ? VirtualShapeZLen_=boost::none : VirtualShapeZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	DoorSystemCode_ ? DoorSystemCode_=boost::none : DoorSystemCode_.reset(boost::initialized_value);
	DoorSystemName_ ? DoorSystemName_=boost::none : DoorSystemName_.reset(boost::initialized_value);
	DoorSystemMemo_ ? DoorSystemMemo_=boost::none : DoorSystemMemo_.reset(boost::initialized_value);
}

void	JK_DoorSystemInfoImp::SData::Check()
{
	if ( !DoorSystemID_ )
	{
		DoorSystemID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !MatchCabShape_ )
	{
		MatchCabShape_.reset(boost::initialized_value);
	}
	if ( !InstallType_ )
	{
		InstallType_.reset(boost::initialized_value);
	}
	if ( !VirtualXLen_ )
	{
		VirtualXLen_.reset(boost::initialized_value);
	}
	if ( !VirtualYLen_ )
	{
		VirtualYLen_.reset(boost::initialized_value);
	}
	if ( !VirtualShapeXLen_ )
	{
		VirtualShapeXLen_.reset(boost::initialized_value);
	}
	if ( !VirtualShapeZLen_ )
	{
		VirtualShapeZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !DoorSystemCode_ )
	{
		DoorSystemCode_.reset(boost::initialized_value);
	}
	if ( !DoorSystemName_ )
	{
		DoorSystemName_.reset(boost::initialized_value);
	}
	if ( !DoorSystemMemo_ )
	{
		DoorSystemMemo_.reset(boost::initialized_value);
	}
}

void	JK_DoorSystemInfoImp::SData::ToUtf8()
{
	if ( DoorSystemCode_ )
	{
		DoorSystemCode_ = boost::locale::conv::to_utf<char>(*DoorSystemCode_, "GBK");
	}
	if ( DoorSystemName_ )
	{
		DoorSystemName_ = boost::locale::conv::to_utf<char>(*DoorSystemName_, "GBK");
	}
	if ( DoorSystemMemo_ )
	{
		DoorSystemMemo_ = boost::locale::conv::to_utf<char>(*DoorSystemMemo_, "GBK");
	}
}

void	JK_DoorSystemInfoImp::SData::ToAscii()
{
	if ( DoorSystemCode_ )
	{
		DoorSystemCode_ = boost::locale::conv::from_utf(*DoorSystemCode_, "GBK");
	}
	if ( DoorSystemName_ )
	{
		DoorSystemName_ = boost::locale::conv::from_utf(*DoorSystemName_, "GBK");
	}
	if ( DoorSystemMemo_ )
	{
		DoorSystemMemo_ = boost::locale::conv::from_utf(*DoorSystemMemo_, "GBK");
	}
}

autoDB::SColumns JK_DoorSystemInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Use(data.DoorSystemID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.MatchCabShape_ )
	{
		ret.With(MatchCabShape.Use(data.MatchCabShape_));
	}
	if ( data.InstallType_ )
	{
		ret.With(InstallType.Use(data.InstallType_));
	}
	if ( data.VirtualXLen_ )
	{
		ret.With(VirtualXLen.Use(data.VirtualXLen_));
	}
	if ( data.VirtualYLen_ )
	{
		ret.With(VirtualYLen.Use(data.VirtualYLen_));
	}
	if ( data.VirtualShapeXLen_ )
	{
		ret.With(VirtualShapeXLen.Use(data.VirtualShapeXLen_));
	}
	if ( data.VirtualShapeZLen_ )
	{
		ret.With(VirtualShapeZLen.Use(data.VirtualShapeZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.DoorSystemCode_ )
	{
		ret.With(DoorSystemCode.Use(data.DoorSystemCode_));
	}
	if ( data.DoorSystemName_ )
	{
		ret.With(DoorSystemName.Use(data.DoorSystemName_));
	}
	if ( data.DoorSystemMemo_ )
	{
		ret.With(DoorSystemMemo.Use(data.DoorSystemMemo_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorSystemInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Into(data.DoorSystemID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.MatchCabShape_ )
	{
		ret.With(MatchCabShape.Into(data.MatchCabShape_));
	}
	if ( data.InstallType_ )
	{
		ret.With(InstallType.Into(data.InstallType_));
	}
	if ( data.VirtualXLen_ )
	{
		ret.With(VirtualXLen.Into(data.VirtualXLen_));
	}
	if ( data.VirtualYLen_ )
	{
		ret.With(VirtualYLen.Into(data.VirtualYLen_));
	}
	if ( data.VirtualShapeXLen_ )
	{
		ret.With(VirtualShapeXLen.Into(data.VirtualShapeXLen_));
	}
	if ( data.VirtualShapeZLen_ )
	{
		ret.With(VirtualShapeZLen.Into(data.VirtualShapeZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.DoorSystemCode_ )
	{
		ret.With(DoorSystemCode.Into(data.DoorSystemCode_));
	}
	if ( data.DoorSystemName_ )
	{
		ret.With(DoorSystemName.Into(data.DoorSystemName_));
	}
	if ( data.DoorSystemMemo_ )
	{
		ret.With(DoorSystemMemo.Into(data.DoorSystemMemo_));
	}
	return std::move(ret);
}


JK_DoorSystemInfoImp	JK_DoorSystemInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorSystemInfoImp(alias));
}

JK_DoorSystemInfoImp::JK_DoorSystemInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorSystemInfo"), alias)
	,DoorSystemID(ImpSPtr_,AUTODB_STR("DoorSystemID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,MatchCabShape(ImpSPtr_,AUTODB_STR("MatchCabShape"))
	,InstallType(ImpSPtr_,AUTODB_STR("InstallType"))
	,VirtualXLen(ImpSPtr_,AUTODB_STR("VirtualXLen"))
	,VirtualYLen(ImpSPtr_,AUTODB_STR("VirtualYLen"))
	,VirtualShapeXLen(ImpSPtr_,AUTODB_STR("VirtualShapeXLen"))
	,VirtualShapeZLen(ImpSPtr_,AUTODB_STR("VirtualShapeZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,DoorSystemCode(ImpSPtr_,AUTODB_STR("DoorSystemCode"))
	,DoorSystemName(ImpSPtr_,AUTODB_STR("DoorSystemName"))
	,DoorSystemMemo(ImpSPtr_,AUTODB_STR("DoorSystemMemo"))
{}

JK_DoorSystemInfoImp::JK_DoorSystemInfoImp( const JK_DoorSystemInfoImp& rhs ):Table(rhs)
	,DoorSystemID(rhs.DoorSystemID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,SupplyType(rhs.SupplyType)
	,MatchCabShape(rhs.MatchCabShape)
	,InstallType(rhs.InstallType)
	,VirtualXLen(rhs.VirtualXLen)
	,VirtualYLen(rhs.VirtualYLen)
	,VirtualShapeXLen(rhs.VirtualShapeXLen)
	,VirtualShapeZLen(rhs.VirtualShapeZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,DoorSystemCode(rhs.DoorSystemCode)
	,DoorSystemName(rhs.DoorSystemName)
	,DoorSystemMemo(rhs.DoorSystemMemo)
{}

JK_DoorSystemInfoImp::JK_DoorSystemInfoImp( JK_DoorSystemInfoImp&& rhs ):Table(rhs)
	,DoorSystemID(std::move(rhs.DoorSystemID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,SupplyType(std::move(rhs.SupplyType))
	,MatchCabShape(std::move(rhs.MatchCabShape))
	,InstallType(std::move(rhs.InstallType))
	,VirtualXLen(std::move(rhs.VirtualXLen))
	,VirtualYLen(std::move(rhs.VirtualYLen))
	,VirtualShapeXLen(std::move(rhs.VirtualShapeXLen))
	,VirtualShapeZLen(std::move(rhs.VirtualShapeZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,DoorSystemCode(std::move(rhs.DoorSystemCode))
	,DoorSystemName(std::move(rhs.DoorSystemName))
	,DoorSystemMemo(std::move(rhs.DoorSystemMemo))
{}

JK_DoorSystemInfoImp	JK_DoorSystemInfo("");



void	JK_DoorSystemMatMapInfoImp::SData::SetAll(bool val)
{
	val ? DoorSystemID_.reset(boost::initialized_value) : DoorSystemID_=boost::none;
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DoorSystemMatMapInfoImp::SData::Flip()
{
	DoorSystemID_ ? DoorSystemID_=boost::none : DoorSystemID_.reset(boost::initialized_value);
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DoorSystemMatMapInfoImp::SData::Check()
{
	if ( !DoorSystemID_ )
	{
		DoorSystemID_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DoorSystemMatMapInfoImp::SData::ToUtf8()
{
}

void	JK_DoorSystemMatMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DoorSystemMatMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Use(data.DoorSystemID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorSystemMatMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Into(data.DoorSystemID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DoorSystemMatMapInfoImp	JK_DoorSystemMatMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorSystemMatMapInfoImp(alias));
}

JK_DoorSystemMatMapInfoImp::JK_DoorSystemMatMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorSystemMatMapInfo"), alias)
	,DoorSystemID(ImpSPtr_,AUTODB_STR("DoorSystemID"))
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DoorSystemMatMapInfoImp::JK_DoorSystemMatMapInfoImp( const JK_DoorSystemMatMapInfoImp& rhs ):Table(rhs)
	,DoorSystemID(rhs.DoorSystemID)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DoorSystemMatMapInfoImp::JK_DoorSystemMatMapInfoImp( JK_DoorSystemMatMapInfoImp&& rhs ):Table(rhs)
	,DoorSystemID(std::move(rhs.DoorSystemID))
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DoorSystemMatMapInfoImp	JK_DoorSystemMatMapInfo("");



void	JK_DoorSystemRegionDoorMapInfoImp::SData::SetAll(bool val)
{
	val ? DoorSystemRegionID_.reset(boost::initialized_value) : DoorSystemRegionID_=boost::none;
	val ? DoorID_.reset(boost::initialized_value) : DoorID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DoorSystemRegionDoorMapInfoImp::SData::Flip()
{
	DoorSystemRegionID_ ? DoorSystemRegionID_=boost::none : DoorSystemRegionID_.reset(boost::initialized_value);
	DoorID_ ? DoorID_=boost::none : DoorID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DoorSystemRegionDoorMapInfoImp::SData::Check()
{
	if ( !DoorSystemRegionID_ )
	{
		DoorSystemRegionID_.reset(boost::initialized_value);
	}
	if ( !DoorID_ )
	{
		DoorID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DoorSystemRegionDoorMapInfoImp::SData::ToUtf8()
{
}

void	JK_DoorSystemRegionDoorMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DoorSystemRegionDoorMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Use(data.DoorSystemRegionID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Use(data.DoorID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorSystemRegionDoorMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Into(data.DoorSystemRegionID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Into(data.DoorID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DoorSystemRegionDoorMapInfoImp	JK_DoorSystemRegionDoorMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorSystemRegionDoorMapInfoImp(alias));
}

JK_DoorSystemRegionDoorMapInfoImp::JK_DoorSystemRegionDoorMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorSystemRegionDoorMapInfo"), alias)
	,DoorSystemRegionID(ImpSPtr_,AUTODB_STR("DoorSystemRegionID"))
	,DoorID(ImpSPtr_,AUTODB_STR("DoorID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DoorSystemRegionDoorMapInfoImp::JK_DoorSystemRegionDoorMapInfoImp( const JK_DoorSystemRegionDoorMapInfoImp& rhs ):Table(rhs)
	,DoorSystemRegionID(rhs.DoorSystemRegionID)
	,DoorID(rhs.DoorID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DoorSystemRegionDoorMapInfoImp::JK_DoorSystemRegionDoorMapInfoImp( JK_DoorSystemRegionDoorMapInfoImp&& rhs ):Table(rhs)
	,DoorSystemRegionID(std::move(rhs.DoorSystemRegionID))
	,DoorID(std::move(rhs.DoorID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DoorSystemRegionDoorMapInfoImp	JK_DoorSystemRegionDoorMapInfo("");



void	JK_DoorSystemRegionInfoImp::SData::SetAll(bool val)
{
	val ? DoorSystemRegionID_.reset(boost::initialized_value) : DoorSystemRegionID_=boost::none;
	val ? DoorSystemID_.reset(boost::initialized_value) : DoorSystemID_=boost::none;
	val ? ParentID_.reset(boost::initialized_value) : ParentID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? RegionIndex_.reset(boost::initialized_value) : RegionIndex_=boost::none;
	val ? CutDirection_.reset(boost::initialized_value) : CutDirection_=boost::none;
	val ? CutFormula_.reset(boost::initialized_value) : CutFormula_=boost::none;
	val ? IsSlide_.reset(boost::initialized_value) : IsSlide_=boost::none;
	val ? IsRound_.reset(boost::initialized_value) : IsRound_=boost::none;
	val ? LenPrecision_.reset(boost::initialized_value) : LenPrecision_=boost::none;
	val ? OpenDoorType_.reset(boost::initialized_value) : OpenDoorType_=boost::none;
	val ? XAdjustLen_.reset(boost::initialized_value) : XAdjustLen_=boost::none;
	val ? YAdjustLen_.reset(boost::initialized_value) : YAdjustLen_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? IsCanResize_.reset(boost::initialized_value) : IsCanResize_=boost::none;
	val ? DoorFunction_.reset(boost::initialized_value) : DoorFunction_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? HandleXDock_.reset(boost::initialized_value) : HandleXDock_=boost::none;
	val ? HandleYDock_.reset(boost::initialized_value) : HandleYDock_=boost::none;
	val ? HandleZDock_.reset(boost::initialized_value) : HandleZDock_=boost::none;
	val ? HandleXOffsetFormula_.reset(boost::initialized_value) : HandleXOffsetFormula_=boost::none;
	val ? HandleYOffsetFormula_.reset(boost::initialized_value) : HandleYOffsetFormula_=boost::none;
	val ? HandleZOffsetFormula_.reset(boost::initialized_value) : HandleZOffsetFormula_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? DoorBoardMatType_.reset(boost::initialized_value) : DoorBoardMatType_=boost::none;
	val ? DoorBoardMatID_.reset(boost::initialized_value) : DoorBoardMatID_=boost::none;
	val ? IsUseCustomThick_.reset(boost::initialized_value) : IsUseCustomThick_=boost::none;
}

void	JK_DoorSystemRegionInfoImp::SData::Flip()
{
	DoorSystemRegionID_ ? DoorSystemRegionID_=boost::none : DoorSystemRegionID_.reset(boost::initialized_value);
	DoorSystemID_ ? DoorSystemID_=boost::none : DoorSystemID_.reset(boost::initialized_value);
	ParentID_ ? ParentID_=boost::none : ParentID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	RegionIndex_ ? RegionIndex_=boost::none : RegionIndex_.reset(boost::initialized_value);
	CutDirection_ ? CutDirection_=boost::none : CutDirection_.reset(boost::initialized_value);
	CutFormula_ ? CutFormula_=boost::none : CutFormula_.reset(boost::initialized_value);
	IsSlide_ ? IsSlide_=boost::none : IsSlide_.reset(boost::initialized_value);
	IsRound_ ? IsRound_=boost::none : IsRound_.reset(boost::initialized_value);
	LenPrecision_ ? LenPrecision_=boost::none : LenPrecision_.reset(boost::initialized_value);
	OpenDoorType_ ? OpenDoorType_=boost::none : OpenDoorType_.reset(boost::initialized_value);
	XAdjustLen_ ? XAdjustLen_=boost::none : XAdjustLen_.reset(boost::initialized_value);
	YAdjustLen_ ? YAdjustLen_=boost::none : YAdjustLen_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	IsCanResize_ ? IsCanResize_=boost::none : IsCanResize_.reset(boost::initialized_value);
	DoorFunction_ ? DoorFunction_=boost::none : DoorFunction_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	HandleXDock_ ? HandleXDock_=boost::none : HandleXDock_.reset(boost::initialized_value);
	HandleYDock_ ? HandleYDock_=boost::none : HandleYDock_.reset(boost::initialized_value);
	HandleZDock_ ? HandleZDock_=boost::none : HandleZDock_.reset(boost::initialized_value);
	HandleXOffsetFormula_ ? HandleXOffsetFormula_=boost::none : HandleXOffsetFormula_.reset(boost::initialized_value);
	HandleYOffsetFormula_ ? HandleYOffsetFormula_=boost::none : HandleYOffsetFormula_.reset(boost::initialized_value);
	HandleZOffsetFormula_ ? HandleZOffsetFormula_=boost::none : HandleZOffsetFormula_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	DoorBoardMatType_ ? DoorBoardMatType_=boost::none : DoorBoardMatType_.reset(boost::initialized_value);
	DoorBoardMatID_ ? DoorBoardMatID_=boost::none : DoorBoardMatID_.reset(boost::initialized_value);
	IsUseCustomThick_ ? IsUseCustomThick_=boost::none : IsUseCustomThick_.reset(boost::initialized_value);
}

void	JK_DoorSystemRegionInfoImp::SData::Check()
{
	if ( !DoorSystemRegionID_ )
	{
		DoorSystemRegionID_.reset(boost::initialized_value);
	}
	if ( !DoorSystemID_ )
	{
		DoorSystemID_.reset(boost::initialized_value);
	}
	if ( !ParentID_ )
	{
		ParentID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !RegionIndex_ )
	{
		RegionIndex_.reset(boost::initialized_value);
	}
	if ( !CutDirection_ )
	{
		CutDirection_.reset(boost::initialized_value);
	}
	if ( !CutFormula_ )
	{
		CutFormula_.reset(boost::initialized_value);
	}
	if ( !IsSlide_ )
	{
		IsSlide_.reset(boost::initialized_value);
	}
	if ( !IsRound_ )
	{
		IsRound_.reset(boost::initialized_value);
	}
	if ( !LenPrecision_ )
	{
		LenPrecision_.reset(boost::initialized_value);
	}
	if ( !OpenDoorType_ )
	{
		OpenDoorType_.reset(boost::initialized_value);
	}
	if ( !XAdjustLen_ )
	{
		XAdjustLen_.reset(boost::initialized_value);
	}
	if ( !YAdjustLen_ )
	{
		YAdjustLen_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !IsCanResize_ )
	{
		IsCanResize_.reset(boost::initialized_value);
	}
	if ( !DoorFunction_ )
	{
		DoorFunction_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !HandleXDock_ )
	{
		HandleXDock_.reset(boost::initialized_value);
	}
	if ( !HandleYDock_ )
	{
		HandleYDock_.reset(boost::initialized_value);
	}
	if ( !HandleZDock_ )
	{
		HandleZDock_.reset(boost::initialized_value);
	}
	if ( !HandleXOffsetFormula_ )
	{
		HandleXOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !HandleYOffsetFormula_ )
	{
		HandleYOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !HandleZOffsetFormula_ )
	{
		HandleZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !DoorBoardMatType_ )
	{
		DoorBoardMatType_.reset(boost::initialized_value);
	}
	if ( !DoorBoardMatID_ )
	{
		DoorBoardMatID_.reset(boost::initialized_value);
	}
	if ( !IsUseCustomThick_ )
	{
		IsUseCustomThick_.reset(boost::initialized_value);
	}
}

void	JK_DoorSystemRegionInfoImp::SData::ToUtf8()
{
	if ( CutFormula_ )
	{
		CutFormula_ = boost::locale::conv::to_utf<char>(*CutFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
	if ( HandleXOffsetFormula_ )
	{
		HandleXOffsetFormula_ = boost::locale::conv::to_utf<char>(*HandleXOffsetFormula_, "GBK");
	}
	if ( HandleYOffsetFormula_ )
	{
		HandleYOffsetFormula_ = boost::locale::conv::to_utf<char>(*HandleYOffsetFormula_, "GBK");
	}
	if ( HandleZOffsetFormula_ )
	{
		HandleZOffsetFormula_ = boost::locale::conv::to_utf<char>(*HandleZOffsetFormula_, "GBK");
	}
}

void	JK_DoorSystemRegionInfoImp::SData::ToAscii()
{
	if ( CutFormula_ )
	{
		CutFormula_ = boost::locale::conv::from_utf(*CutFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
	if ( HandleXOffsetFormula_ )
	{
		HandleXOffsetFormula_ = boost::locale::conv::from_utf(*HandleXOffsetFormula_, "GBK");
	}
	if ( HandleYOffsetFormula_ )
	{
		HandleYOffsetFormula_ = boost::locale::conv::from_utf(*HandleYOffsetFormula_, "GBK");
	}
	if ( HandleZOffsetFormula_ )
	{
		HandleZOffsetFormula_ = boost::locale::conv::from_utf(*HandleZOffsetFormula_, "GBK");
	}
}

autoDB::SColumns JK_DoorSystemRegionInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Use(data.DoorSystemRegionID_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Use(data.DoorSystemID_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Use(data.ParentID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.RegionIndex_ )
	{
		ret.With(RegionIndex.Use(data.RegionIndex_));
	}
	if ( data.CutDirection_ )
	{
		ret.With(CutDirection.Use(data.CutDirection_));
	}
	if ( data.CutFormula_ )
	{
		ret.With(CutFormula.Use(data.CutFormula_));
	}
	if ( data.IsSlide_ )
	{
		ret.With(IsSlide.Use(data.IsSlide_));
	}
	if ( data.IsRound_ )
	{
		ret.With(IsRound.Use(data.IsRound_));
	}
	if ( data.LenPrecision_ )
	{
		ret.With(LenPrecision.Use(data.LenPrecision_));
	}
	if ( data.OpenDoorType_ )
	{
		ret.With(OpenDoorType.Use(data.OpenDoorType_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Use(data.XAdjustLen_));
	}
	if ( data.YAdjustLen_ )
	{
		ret.With(YAdjustLen.Use(data.YAdjustLen_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.IsCanResize_ )
	{
		ret.With(IsCanResize.Use(data.IsCanResize_));
	}
	if ( data.DoorFunction_ )
	{
		ret.With(DoorFunction.Use(data.DoorFunction_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.HandleXDock_ )
	{
		ret.With(HandleXDock.Use(data.HandleXDock_));
	}
	if ( data.HandleYDock_ )
	{
		ret.With(HandleYDock.Use(data.HandleYDock_));
	}
	if ( data.HandleZDock_ )
	{
		ret.With(HandleZDock.Use(data.HandleZDock_));
	}
	if ( data.HandleXOffsetFormula_ )
	{
		ret.With(HandleXOffsetFormula.Use(data.HandleXOffsetFormula_));
	}
	if ( data.HandleYOffsetFormula_ )
	{
		ret.With(HandleYOffsetFormula.Use(data.HandleYOffsetFormula_));
	}
	if ( data.HandleZOffsetFormula_ )
	{
		ret.With(HandleZOffsetFormula.Use(data.HandleZOffsetFormula_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.DoorBoardMatType_ )
	{
		ret.With(DoorBoardMatType.Use(data.DoorBoardMatType_));
	}
	if ( data.DoorBoardMatID_ )
	{
		ret.With(DoorBoardMatID.Use(data.DoorBoardMatID_));
	}
	if ( data.IsUseCustomThick_ )
	{
		ret.With(IsUseCustomThick.Use(data.IsUseCustomThick_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorSystemRegionInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Into(data.DoorSystemRegionID_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Into(data.DoorSystemID_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Into(data.ParentID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.RegionIndex_ )
	{
		ret.With(RegionIndex.Into(data.RegionIndex_));
	}
	if ( data.CutDirection_ )
	{
		ret.With(CutDirection.Into(data.CutDirection_));
	}
	if ( data.CutFormula_ )
	{
		ret.With(CutFormula.Into(data.CutFormula_));
	}
	if ( data.IsSlide_ )
	{
		ret.With(IsSlide.Into(data.IsSlide_));
	}
	if ( data.IsRound_ )
	{
		ret.With(IsRound.Into(data.IsRound_));
	}
	if ( data.LenPrecision_ )
	{
		ret.With(LenPrecision.Into(data.LenPrecision_));
	}
	if ( data.OpenDoorType_ )
	{
		ret.With(OpenDoorType.Into(data.OpenDoorType_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Into(data.XAdjustLen_));
	}
	if ( data.YAdjustLen_ )
	{
		ret.With(YAdjustLen.Into(data.YAdjustLen_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.IsCanResize_ )
	{
		ret.With(IsCanResize.Into(data.IsCanResize_));
	}
	if ( data.DoorFunction_ )
	{
		ret.With(DoorFunction.Into(data.DoorFunction_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.HandleXDock_ )
	{
		ret.With(HandleXDock.Into(data.HandleXDock_));
	}
	if ( data.HandleYDock_ )
	{
		ret.With(HandleYDock.Into(data.HandleYDock_));
	}
	if ( data.HandleZDock_ )
	{
		ret.With(HandleZDock.Into(data.HandleZDock_));
	}
	if ( data.HandleXOffsetFormula_ )
	{
		ret.With(HandleXOffsetFormula.Into(data.HandleXOffsetFormula_));
	}
	if ( data.HandleYOffsetFormula_ )
	{
		ret.With(HandleYOffsetFormula.Into(data.HandleYOffsetFormula_));
	}
	if ( data.HandleZOffsetFormula_ )
	{
		ret.With(HandleZOffsetFormula.Into(data.HandleZOffsetFormula_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.DoorBoardMatType_ )
	{
		ret.With(DoorBoardMatType.Into(data.DoorBoardMatType_));
	}
	if ( data.DoorBoardMatID_ )
	{
		ret.With(DoorBoardMatID.Into(data.DoorBoardMatID_));
	}
	if ( data.IsUseCustomThick_ )
	{
		ret.With(IsUseCustomThick.Into(data.IsUseCustomThick_));
	}
	return std::move(ret);
}


JK_DoorSystemRegionInfoImp	JK_DoorSystemRegionInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorSystemRegionInfoImp(alias));
}

JK_DoorSystemRegionInfoImp::JK_DoorSystemRegionInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorSystemRegionInfo"), alias)
	,DoorSystemRegionID(ImpSPtr_,AUTODB_STR("DoorSystemRegionID"))
	,DoorSystemID(ImpSPtr_,AUTODB_STR("DoorSystemID"))
	,ParentID(ImpSPtr_,AUTODB_STR("ParentID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,RegionIndex(ImpSPtr_,AUTODB_STR("RegionIndex"))
	,CutDirection(ImpSPtr_,AUTODB_STR("CutDirection"))
	,CutFormula(ImpSPtr_,AUTODB_STR("CutFormula"))
	,IsSlide(ImpSPtr_,AUTODB_STR("IsSlide"))
	,IsRound(ImpSPtr_,AUTODB_STR("IsRound"))
	,LenPrecision(ImpSPtr_,AUTODB_STR("LenPrecision"))
	,OpenDoorType(ImpSPtr_,AUTODB_STR("OpenDoorType"))
	,XAdjustLen(ImpSPtr_,AUTODB_STR("XAdjustLen"))
	,YAdjustLen(ImpSPtr_,AUTODB_STR("YAdjustLen"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,IsCanResize(ImpSPtr_,AUTODB_STR("IsCanResize"))
	,DoorFunction(ImpSPtr_,AUTODB_STR("DoorFunction"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,HandleXDock(ImpSPtr_,AUTODB_STR("HandleXDock"))
	,HandleYDock(ImpSPtr_,AUTODB_STR("HandleYDock"))
	,HandleZDock(ImpSPtr_,AUTODB_STR("HandleZDock"))
	,HandleXOffsetFormula(ImpSPtr_,AUTODB_STR("HandleXOffsetFormula"))
	,HandleYOffsetFormula(ImpSPtr_,AUTODB_STR("HandleYOffsetFormula"))
	,HandleZOffsetFormula(ImpSPtr_,AUTODB_STR("HandleZOffsetFormula"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,DoorBoardMatType(ImpSPtr_,AUTODB_STR("DoorBoardMatType"))
	,DoorBoardMatID(ImpSPtr_,AUTODB_STR("DoorBoardMatID"))
	,IsUseCustomThick(ImpSPtr_,AUTODB_STR("IsUseCustomThick"))
{}

JK_DoorSystemRegionInfoImp::JK_DoorSystemRegionInfoImp( const JK_DoorSystemRegionInfoImp& rhs ):Table(rhs)
	,DoorSystemRegionID(rhs.DoorSystemRegionID)
	,DoorSystemID(rhs.DoorSystemID)
	,ParentID(rhs.ParentID)
	,IsDel(rhs.IsDel)
	,RegionIndex(rhs.RegionIndex)
	,CutDirection(rhs.CutDirection)
	,CutFormula(rhs.CutFormula)
	,IsSlide(rhs.IsSlide)
	,IsRound(rhs.IsRound)
	,LenPrecision(rhs.LenPrecision)
	,OpenDoorType(rhs.OpenDoorType)
	,XAdjustLen(rhs.XAdjustLen)
	,YAdjustLen(rhs.YAdjustLen)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,IsCanResize(rhs.IsCanResize)
	,DoorFunction(rhs.DoorFunction)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,HandleXDock(rhs.HandleXDock)
	,HandleYDock(rhs.HandleYDock)
	,HandleZDock(rhs.HandleZDock)
	,HandleXOffsetFormula(rhs.HandleXOffsetFormula)
	,HandleYOffsetFormula(rhs.HandleYOffsetFormula)
	,HandleZOffsetFormula(rhs.HandleZOffsetFormula)
	,ZLen(rhs.ZLen)
	,DoorBoardMatType(rhs.DoorBoardMatType)
	,DoorBoardMatID(rhs.DoorBoardMatID)
	,IsUseCustomThick(rhs.IsUseCustomThick)
{}

JK_DoorSystemRegionInfoImp::JK_DoorSystemRegionInfoImp( JK_DoorSystemRegionInfoImp&& rhs ):Table(rhs)
	,DoorSystemRegionID(std::move(rhs.DoorSystemRegionID))
	,DoorSystemID(std::move(rhs.DoorSystemID))
	,ParentID(std::move(rhs.ParentID))
	,IsDel(std::move(rhs.IsDel))
	,RegionIndex(std::move(rhs.RegionIndex))
	,CutDirection(std::move(rhs.CutDirection))
	,CutFormula(std::move(rhs.CutFormula))
	,IsSlide(std::move(rhs.IsSlide))
	,IsRound(std::move(rhs.IsRound))
	,LenPrecision(std::move(rhs.LenPrecision))
	,OpenDoorType(std::move(rhs.OpenDoorType))
	,XAdjustLen(std::move(rhs.XAdjustLen))
	,YAdjustLen(std::move(rhs.YAdjustLen))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,IsCanResize(std::move(rhs.IsCanResize))
	,DoorFunction(std::move(rhs.DoorFunction))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,HandleXDock(std::move(rhs.HandleXDock))
	,HandleYDock(std::move(rhs.HandleYDock))
	,HandleZDock(std::move(rhs.HandleZDock))
	,HandleXOffsetFormula(std::move(rhs.HandleXOffsetFormula))
	,HandleYOffsetFormula(std::move(rhs.HandleYOffsetFormula))
	,HandleZOffsetFormula(std::move(rhs.HandleZOffsetFormula))
	,ZLen(std::move(rhs.ZLen))
	,DoorBoardMatType(std::move(rhs.DoorBoardMatType))
	,DoorBoardMatID(std::move(rhs.DoorBoardMatID))
	,IsUseCustomThick(std::move(rhs.IsUseCustomThick))
{}

JK_DoorSystemRegionInfoImp	JK_DoorSystemRegionInfo("");



void	JK_DoorSystemRegionSlideMapInfoImp::SData::SetAll(bool val)
{
	val ? DoorSystemRegionID_.reset(boost::initialized_value) : DoorSystemRegionID_=boost::none;
	val ? SlideID_.reset(boost::initialized_value) : SlideID_=boost::none;
	val ? SlidePosition_.reset(boost::initialized_value) : SlidePosition_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_DoorSystemRegionSlideMapInfoImp::SData::Flip()
{
	DoorSystemRegionID_ ? DoorSystemRegionID_=boost::none : DoorSystemRegionID_.reset(boost::initialized_value);
	SlideID_ ? SlideID_=boost::none : SlideID_.reset(boost::initialized_value);
	SlidePosition_ ? SlidePosition_=boost::none : SlidePosition_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_DoorSystemRegionSlideMapInfoImp::SData::Check()
{
	if ( !DoorSystemRegionID_ )
	{
		DoorSystemRegionID_.reset(boost::initialized_value);
	}
	if ( !SlideID_ )
	{
		SlideID_.reset(boost::initialized_value);
	}
	if ( !SlidePosition_ )
	{
		SlidePosition_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_DoorSystemRegionSlideMapInfoImp::SData::ToUtf8()
{
}

void	JK_DoorSystemRegionSlideMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_DoorSystemRegionSlideMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Use(data.DoorSystemRegionID_));
	}
	if ( data.SlideID_ )
	{
		ret.With(SlideID.Use(data.SlideID_));
	}
	if ( data.SlidePosition_ )
	{
		ret.With(SlidePosition.Use(data.SlidePosition_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorSystemRegionSlideMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Into(data.DoorSystemRegionID_));
	}
	if ( data.SlideID_ )
	{
		ret.With(SlideID.Into(data.SlideID_));
	}
	if ( data.SlidePosition_ )
	{
		ret.With(SlidePosition.Into(data.SlidePosition_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_DoorSystemRegionSlideMapInfoImp	JK_DoorSystemRegionSlideMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorSystemRegionSlideMapInfoImp(alias));
}

JK_DoorSystemRegionSlideMapInfoImp::JK_DoorSystemRegionSlideMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorSystemRegionSlideMapInfo"), alias)
	,DoorSystemRegionID(ImpSPtr_,AUTODB_STR("DoorSystemRegionID"))
	,SlideID(ImpSPtr_,AUTODB_STR("SlideID"))
	,SlidePosition(ImpSPtr_,AUTODB_STR("SlidePosition"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_DoorSystemRegionSlideMapInfoImp::JK_DoorSystemRegionSlideMapInfoImp( const JK_DoorSystemRegionSlideMapInfoImp& rhs ):Table(rhs)
	,DoorSystemRegionID(rhs.DoorSystemRegionID)
	,SlideID(rhs.SlideID)
	,SlidePosition(rhs.SlidePosition)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_DoorSystemRegionSlideMapInfoImp::JK_DoorSystemRegionSlideMapInfoImp( JK_DoorSystemRegionSlideMapInfoImp&& rhs ):Table(rhs)
	,DoorSystemRegionID(std::move(rhs.DoorSystemRegionID))
	,SlideID(std::move(rhs.SlideID))
	,SlidePosition(std::move(rhs.SlidePosition))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_DoorSystemRegionSlideMapInfoImp	JK_DoorSystemRegionSlideMapInfo("");



void	JK_DoorSystemRegionSlidePositionSizeInfoImp::SData::SetAll(bool val)
{
	val ? DoorSystemRegionID_.reset(boost::initialized_value) : DoorSystemRegionID_=boost::none;
	val ? SlidePosition_.reset(boost::initialized_value) : SlidePosition_=boost::none;
	val ? XAdjustLen_.reset(boost::initialized_value) : XAdjustLen_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_DoorSystemRegionSlidePositionSizeInfoImp::SData::Flip()
{
	DoorSystemRegionID_ ? DoorSystemRegionID_=boost::none : DoorSystemRegionID_.reset(boost::initialized_value);
	SlidePosition_ ? SlidePosition_=boost::none : SlidePosition_.reset(boost::initialized_value);
	XAdjustLen_ ? XAdjustLen_=boost::none : XAdjustLen_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_DoorSystemRegionSlidePositionSizeInfoImp::SData::Check()
{
	if ( !DoorSystemRegionID_ )
	{
		DoorSystemRegionID_.reset(boost::initialized_value);
	}
	if ( !SlidePosition_ )
	{
		SlidePosition_.reset(boost::initialized_value);
	}
	if ( !XAdjustLen_ )
	{
		XAdjustLen_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_DoorSystemRegionSlidePositionSizeInfoImp::SData::ToUtf8()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
}

void	JK_DoorSystemRegionSlidePositionSizeInfoImp::SData::ToAscii()
{
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
}

autoDB::SColumns JK_DoorSystemRegionSlidePositionSizeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Use(data.DoorSystemRegionID_));
	}
	if ( data.SlidePosition_ )
	{
		ret.With(SlidePosition.Use(data.SlidePosition_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Use(data.XAdjustLen_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_DoorSystemRegionSlidePositionSizeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Into(data.DoorSystemRegionID_));
	}
	if ( data.SlidePosition_ )
	{
		ret.With(SlidePosition.Into(data.SlidePosition_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Into(data.XAdjustLen_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_DoorSystemRegionSlidePositionSizeInfoImp	JK_DoorSystemRegionSlidePositionSizeInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_DoorSystemRegionSlidePositionSizeInfoImp(alias));
}

JK_DoorSystemRegionSlidePositionSizeInfoImp::JK_DoorSystemRegionSlidePositionSizeInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_DoorSystemRegionSlidePositionSizeInfo"), alias)
	,DoorSystemRegionID(ImpSPtr_,AUTODB_STR("DoorSystemRegionID"))
	,SlidePosition(ImpSPtr_,AUTODB_STR("SlidePosition"))
	,XAdjustLen(ImpSPtr_,AUTODB_STR("XAdjustLen"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_DoorSystemRegionSlidePositionSizeInfoImp::JK_DoorSystemRegionSlidePositionSizeInfoImp( const JK_DoorSystemRegionSlidePositionSizeInfoImp& rhs ):Table(rhs)
	,DoorSystemRegionID(rhs.DoorSystemRegionID)
	,SlidePosition(rhs.SlidePosition)
	,XAdjustLen(rhs.XAdjustLen)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_DoorSystemRegionSlidePositionSizeInfoImp::JK_DoorSystemRegionSlidePositionSizeInfoImp( JK_DoorSystemRegionSlidePositionSizeInfoImp&& rhs ):Table(rhs)
	,DoorSystemRegionID(std::move(rhs.DoorSystemRegionID))
	,SlidePosition(std::move(rhs.SlidePosition))
	,XAdjustLen(std::move(rhs.XAdjustLen))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_DoorSystemRegionSlidePositionSizeInfoImp	JK_DoorSystemRegionSlidePositionSizeInfo("");



void	JK_FNFittingInfoImp::SData::SetAll(bool val)
{
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? IsSplit_.reset(boost::initialized_value) : IsSplit_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? IsEntire_.reset(boost::initialized_value) : IsEntire_=boost::none;
	val ? ShowID_.reset(boost::initialized_value) : ShowID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? MinInstallX_.reset(boost::initialized_value) : MinInstallX_=boost::none;
	val ? MinInstallY_.reset(boost::initialized_value) : MinInstallY_=boost::none;
	val ? MinInstallZ_.reset(boost::initialized_value) : MinInstallZ_=boost::none;
	val ? MinXLen_.reset(boost::initialized_value) : MinXLen_=boost::none;
	val ? MaxXLen_.reset(boost::initialized_value) : MaxXLen_=boost::none;
	val ? MinYLen_.reset(boost::initialized_value) : MinYLen_=boost::none;
	val ? MaxYLen_.reset(boost::initialized_value) : MaxYLen_=boost::none;
	val ? MinZLen_.reset(boost::initialized_value) : MinZLen_=boost::none;
	val ? MaxZLen_.reset(boost::initialized_value) : MaxZLen_=boost::none;
	val ? IsMatchXLen_.reset(boost::initialized_value) : IsMatchXLen_=boost::none;
	val ? IsMatchYLen_.reset(boost::initialized_value) : IsMatchYLen_=boost::none;
	val ? IsMatchZLen_.reset(boost::initialized_value) : IsMatchZLen_=boost::none;
	val ? DefaultYPos_.reset(boost::initialized_value) : DefaultYPos_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? FNFittingCode_.reset(boost::initialized_value) : FNFittingCode_=boost::none;
	val ? FNFittingName_.reset(boost::initialized_value) : FNFittingName_=boost::none;
	val ? FNFittingMemo_.reset(boost::initialized_value) : FNFittingMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_FNFittingInfoImp::SData::Flip()
{
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	IsSplit_ ? IsSplit_=boost::none : IsSplit_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	IsEntire_ ? IsEntire_=boost::none : IsEntire_.reset(boost::initialized_value);
	ShowID_ ? ShowID_=boost::none : ShowID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	MinInstallX_ ? MinInstallX_=boost::none : MinInstallX_.reset(boost::initialized_value);
	MinInstallY_ ? MinInstallY_=boost::none : MinInstallY_.reset(boost::initialized_value);
	MinInstallZ_ ? MinInstallZ_=boost::none : MinInstallZ_.reset(boost::initialized_value);
	MinXLen_ ? MinXLen_=boost::none : MinXLen_.reset(boost::initialized_value);
	MaxXLen_ ? MaxXLen_=boost::none : MaxXLen_.reset(boost::initialized_value);
	MinYLen_ ? MinYLen_=boost::none : MinYLen_.reset(boost::initialized_value);
	MaxYLen_ ? MaxYLen_=boost::none : MaxYLen_.reset(boost::initialized_value);
	MinZLen_ ? MinZLen_=boost::none : MinZLen_.reset(boost::initialized_value);
	MaxZLen_ ? MaxZLen_=boost::none : MaxZLen_.reset(boost::initialized_value);
	IsMatchXLen_ ? IsMatchXLen_=boost::none : IsMatchXLen_.reset(boost::initialized_value);
	IsMatchYLen_ ? IsMatchYLen_=boost::none : IsMatchYLen_.reset(boost::initialized_value);
	IsMatchZLen_ ? IsMatchZLen_=boost::none : IsMatchZLen_.reset(boost::initialized_value);
	DefaultYPos_ ? DefaultYPos_=boost::none : DefaultYPos_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	FNFittingCode_ ? FNFittingCode_=boost::none : FNFittingCode_.reset(boost::initialized_value);
	FNFittingName_ ? FNFittingName_=boost::none : FNFittingName_.reset(boost::initialized_value);
	FNFittingMemo_ ? FNFittingMemo_=boost::none : FNFittingMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_FNFittingInfoImp::SData::Check()
{
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !IsSplit_ )
	{
		IsSplit_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !IsEntire_ )
	{
		IsEntire_.reset(boost::initialized_value);
	}
	if ( !ShowID_ )
	{
		ShowID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !MinInstallX_ )
	{
		MinInstallX_.reset(boost::initialized_value);
	}
	if ( !MinInstallY_ )
	{
		MinInstallY_.reset(boost::initialized_value);
	}
	if ( !MinInstallZ_ )
	{
		MinInstallZ_.reset(boost::initialized_value);
	}
	if ( !MinXLen_ )
	{
		MinXLen_.reset(boost::initialized_value);
	}
	if ( !MaxXLen_ )
	{
		MaxXLen_.reset(boost::initialized_value);
	}
	if ( !MinYLen_ )
	{
		MinYLen_.reset(boost::initialized_value);
	}
	if ( !MaxYLen_ )
	{
		MaxYLen_.reset(boost::initialized_value);
	}
	if ( !MinZLen_ )
	{
		MinZLen_.reset(boost::initialized_value);
	}
	if ( !MaxZLen_ )
	{
		MaxZLen_.reset(boost::initialized_value);
	}
	if ( !IsMatchXLen_ )
	{
		IsMatchXLen_.reset(boost::initialized_value);
	}
	if ( !IsMatchYLen_ )
	{
		IsMatchYLen_.reset(boost::initialized_value);
	}
	if ( !IsMatchZLen_ )
	{
		IsMatchZLen_.reset(boost::initialized_value);
	}
	if ( !DefaultYPos_ )
	{
		DefaultYPos_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !FNFittingCode_ )
	{
		FNFittingCode_.reset(boost::initialized_value);
	}
	if ( !FNFittingName_ )
	{
		FNFittingName_.reset(boost::initialized_value);
	}
	if ( !FNFittingMemo_ )
	{
		FNFittingMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_FNFittingInfoImp::SData::ToUtf8()
{
	if ( FNFittingCode_ )
	{
		FNFittingCode_ = boost::locale::conv::to_utf<char>(*FNFittingCode_, "GBK");
	}
	if ( FNFittingName_ )
	{
		FNFittingName_ = boost::locale::conv::to_utf<char>(*FNFittingName_, "GBK");
	}
	if ( FNFittingMemo_ )
	{
		FNFittingMemo_ = boost::locale::conv::to_utf<char>(*FNFittingMemo_, "GBK");
	}
}

void	JK_FNFittingInfoImp::SData::ToAscii()
{
	if ( FNFittingCode_ )
	{
		FNFittingCode_ = boost::locale::conv::from_utf(*FNFittingCode_, "GBK");
	}
	if ( FNFittingName_ )
	{
		FNFittingName_ = boost::locale::conv::from_utf(*FNFittingName_, "GBK");
	}
	if ( FNFittingMemo_ )
	{
		FNFittingMemo_ = boost::locale::conv::from_utf(*FNFittingMemo_, "GBK");
	}
}

autoDB::SColumns JK_FNFittingInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Use(data.IsSplit_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.IsEntire_ )
	{
		ret.With(IsEntire.Use(data.IsEntire_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Use(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.MinInstallX_ )
	{
		ret.With(MinInstallX.Use(data.MinInstallX_));
	}
	if ( data.MinInstallY_ )
	{
		ret.With(MinInstallY.Use(data.MinInstallY_));
	}
	if ( data.MinInstallZ_ )
	{
		ret.With(MinInstallZ.Use(data.MinInstallZ_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Use(data.MinXLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Use(data.MaxXLen_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Use(data.MinYLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Use(data.MaxYLen_));
	}
	if ( data.MinZLen_ )
	{
		ret.With(MinZLen.Use(data.MinZLen_));
	}
	if ( data.MaxZLen_ )
	{
		ret.With(MaxZLen.Use(data.MaxZLen_));
	}
	if ( data.IsMatchXLen_ )
	{
		ret.With(IsMatchXLen.Use(data.IsMatchXLen_));
	}
	if ( data.IsMatchYLen_ )
	{
		ret.With(IsMatchYLen.Use(data.IsMatchYLen_));
	}
	if ( data.IsMatchZLen_ )
	{
		ret.With(IsMatchZLen.Use(data.IsMatchZLen_));
	}
	if ( data.DefaultYPos_ )
	{
		ret.With(DefaultYPos.Use(data.DefaultYPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.FNFittingCode_ )
	{
		ret.With(FNFittingCode.Use(data.FNFittingCode_));
	}
	if ( data.FNFittingName_ )
	{
		ret.With(FNFittingName.Use(data.FNFittingName_));
	}
	if ( data.FNFittingMemo_ )
	{
		ret.With(FNFittingMemo.Use(data.FNFittingMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_FNFittingInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Into(data.IsSplit_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.IsEntire_ )
	{
		ret.With(IsEntire.Into(data.IsEntire_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Into(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.MinInstallX_ )
	{
		ret.With(MinInstallX.Into(data.MinInstallX_));
	}
	if ( data.MinInstallY_ )
	{
		ret.With(MinInstallY.Into(data.MinInstallY_));
	}
	if ( data.MinInstallZ_ )
	{
		ret.With(MinInstallZ.Into(data.MinInstallZ_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Into(data.MinXLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Into(data.MaxXLen_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Into(data.MinYLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Into(data.MaxYLen_));
	}
	if ( data.MinZLen_ )
	{
		ret.With(MinZLen.Into(data.MinZLen_));
	}
	if ( data.MaxZLen_ )
	{
		ret.With(MaxZLen.Into(data.MaxZLen_));
	}
	if ( data.IsMatchXLen_ )
	{
		ret.With(IsMatchXLen.Into(data.IsMatchXLen_));
	}
	if ( data.IsMatchYLen_ )
	{
		ret.With(IsMatchYLen.Into(data.IsMatchYLen_));
	}
	if ( data.IsMatchZLen_ )
	{
		ret.With(IsMatchZLen.Into(data.IsMatchZLen_));
	}
	if ( data.DefaultYPos_ )
	{
		ret.With(DefaultYPos.Into(data.DefaultYPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.FNFittingCode_ )
	{
		ret.With(FNFittingCode.Into(data.FNFittingCode_));
	}
	if ( data.FNFittingName_ )
	{
		ret.With(FNFittingName.Into(data.FNFittingName_));
	}
	if ( data.FNFittingMemo_ )
	{
		ret.With(FNFittingMemo.Into(data.FNFittingMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_FNFittingInfoImp	JK_FNFittingInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_FNFittingInfoImp(alias));
}

JK_FNFittingInfoImp::JK_FNFittingInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_FNFittingInfo"), alias)
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,IsSplit(ImpSPtr_,AUTODB_STR("IsSplit"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,IsEntire(ImpSPtr_,AUTODB_STR("IsEntire"))
	,ShowID(ImpSPtr_,AUTODB_STR("ShowID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,MinInstallX(ImpSPtr_,AUTODB_STR("MinInstallX"))
	,MinInstallY(ImpSPtr_,AUTODB_STR("MinInstallY"))
	,MinInstallZ(ImpSPtr_,AUTODB_STR("MinInstallZ"))
	,MinXLen(ImpSPtr_,AUTODB_STR("MinXLen"))
	,MaxXLen(ImpSPtr_,AUTODB_STR("MaxXLen"))
	,MinYLen(ImpSPtr_,AUTODB_STR("MinYLen"))
	,MaxYLen(ImpSPtr_,AUTODB_STR("MaxYLen"))
	,MinZLen(ImpSPtr_,AUTODB_STR("MinZLen"))
	,MaxZLen(ImpSPtr_,AUTODB_STR("MaxZLen"))
	,IsMatchXLen(ImpSPtr_,AUTODB_STR("IsMatchXLen"))
	,IsMatchYLen(ImpSPtr_,AUTODB_STR("IsMatchYLen"))
	,IsMatchZLen(ImpSPtr_,AUTODB_STR("IsMatchZLen"))
	,DefaultYPos(ImpSPtr_,AUTODB_STR("DefaultYPos"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,FNFittingCode(ImpSPtr_,AUTODB_STR("FNFittingCode"))
	,FNFittingName(ImpSPtr_,AUTODB_STR("FNFittingName"))
	,FNFittingMemo(ImpSPtr_,AUTODB_STR("FNFittingMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_FNFittingInfoImp::JK_FNFittingInfoImp( const JK_FNFittingInfoImp& rhs ):Table(rhs)
	,FNFittingID(rhs.FNFittingID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,IsSplit(rhs.IsSplit)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,IsEntire(rhs.IsEntire)
	,ShowID(rhs.ShowID)
	,ModelID(rhs.ModelID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,MinInstallX(rhs.MinInstallX)
	,MinInstallY(rhs.MinInstallY)
	,MinInstallZ(rhs.MinInstallZ)
	,MinXLen(rhs.MinXLen)
	,MaxXLen(rhs.MaxXLen)
	,MinYLen(rhs.MinYLen)
	,MaxYLen(rhs.MaxYLen)
	,MinZLen(rhs.MinZLen)
	,MaxZLen(rhs.MaxZLen)
	,IsMatchXLen(rhs.IsMatchXLen)
	,IsMatchYLen(rhs.IsMatchYLen)
	,IsMatchZLen(rhs.IsMatchZLen)
	,DefaultYPos(rhs.DefaultYPos)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,FNFittingCode(rhs.FNFittingCode)
	,FNFittingName(rhs.FNFittingName)
	,FNFittingMemo(rhs.FNFittingMemo)
	,VerCode(rhs.VerCode)
{}

JK_FNFittingInfoImp::JK_FNFittingInfoImp( JK_FNFittingInfoImp&& rhs ):Table(rhs)
	,FNFittingID(std::move(rhs.FNFittingID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,IsSplit(std::move(rhs.IsSplit))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,IsEntire(std::move(rhs.IsEntire))
	,ShowID(std::move(rhs.ShowID))
	,ModelID(std::move(rhs.ModelID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,MinInstallX(std::move(rhs.MinInstallX))
	,MinInstallY(std::move(rhs.MinInstallY))
	,MinInstallZ(std::move(rhs.MinInstallZ))
	,MinXLen(std::move(rhs.MinXLen))
	,MaxXLen(std::move(rhs.MaxXLen))
	,MinYLen(std::move(rhs.MinYLen))
	,MaxYLen(std::move(rhs.MaxYLen))
	,MinZLen(std::move(rhs.MinZLen))
	,MaxZLen(std::move(rhs.MaxZLen))
	,IsMatchXLen(std::move(rhs.IsMatchXLen))
	,IsMatchYLen(std::move(rhs.IsMatchYLen))
	,IsMatchZLen(std::move(rhs.IsMatchZLen))
	,DefaultYPos(std::move(rhs.DefaultYPos))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,FNFittingCode(std::move(rhs.FNFittingCode))
	,FNFittingName(std::move(rhs.FNFittingName))
	,FNFittingMemo(std::move(rhs.FNFittingMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_FNFittingInfoImp	JK_FNFittingInfo("");



void	JK_FNFittingMatInfoImp::SData::SetAll(bool val)
{
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_FNFittingMatInfoImp::SData::Flip()
{
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_FNFittingMatInfoImp::SData::Check()
{
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_FNFittingMatInfoImp::SData::ToUtf8()
{
}

void	JK_FNFittingMatInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_FNFittingMatInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_FNFittingMatInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_FNFittingMatInfoImp	JK_FNFittingMatInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_FNFittingMatInfoImp(alias));
}

JK_FNFittingMatInfoImp::JK_FNFittingMatInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_FNFittingMatInfo"), alias)
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_FNFittingMatInfoImp::JK_FNFittingMatInfoImp( const JK_FNFittingMatInfoImp& rhs ):Table(rhs)
	,FNFittingID(rhs.FNFittingID)
	,MaterialID(rhs.MaterialID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_FNFittingMatInfoImp::JK_FNFittingMatInfoImp( JK_FNFittingMatInfoImp&& rhs ):Table(rhs)
	,FNFittingID(std::move(rhs.FNFittingID))
	,MaterialID(std::move(rhs.MaterialID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_FNFittingMatInfoImp	JK_FNFittingMatInfo("");



void	JK_FNFittingPartInfoImp::SData::SetAll(bool val)
{
	val ? FNFittingPartID_.reset(boost::initialized_value) : FNFittingPartID_=boost::none;
	val ? PartType_.reset(boost::initialized_value) : PartType_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? IsUseMain_.reset(boost::initialized_value) : IsUseMain_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? SplitType_.reset(boost::initialized_value) : SplitType_=boost::none;
	val ? ArcX_.reset(boost::initialized_value) : ArcX_=boost::none;
	val ? ArcY_.reset(boost::initialized_value) : ArcY_=boost::none;
	val ? ArcZ_.reset(boost::initialized_value) : ArcZ_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffsetFormula_.reset(boost::initialized_value) : XOffsetFormula_=boost::none;
	val ? YOffsetFormula_.reset(boost::initialized_value) : YOffsetFormula_=boost::none;
	val ? ZOffsetFormula_.reset(boost::initialized_value) : ZOffsetFormula_=boost::none;
	val ? FNFittingPartCode_.reset(boost::initialized_value) : FNFittingPartCode_=boost::none;
	val ? FNFittingPartName_.reset(boost::initialized_value) : FNFittingPartName_=boost::none;
	val ? FNFittingPartMemo_.reset(boost::initialized_value) : FNFittingPartMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_FNFittingPartInfoImp::SData::Flip()
{
	FNFittingPartID_ ? FNFittingPartID_=boost::none : FNFittingPartID_.reset(boost::initialized_value);
	PartType_ ? PartType_=boost::none : PartType_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	IsUseMain_ ? IsUseMain_=boost::none : IsUseMain_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	SplitType_ ? SplitType_=boost::none : SplitType_.reset(boost::initialized_value);
	ArcX_ ? ArcX_=boost::none : ArcX_.reset(boost::initialized_value);
	ArcY_ ? ArcY_=boost::none : ArcY_.reset(boost::initialized_value);
	ArcZ_ ? ArcZ_=boost::none : ArcZ_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffsetFormula_ ? XOffsetFormula_=boost::none : XOffsetFormula_.reset(boost::initialized_value);
	YOffsetFormula_ ? YOffsetFormula_=boost::none : YOffsetFormula_.reset(boost::initialized_value);
	ZOffsetFormula_ ? ZOffsetFormula_=boost::none : ZOffsetFormula_.reset(boost::initialized_value);
	FNFittingPartCode_ ? FNFittingPartCode_=boost::none : FNFittingPartCode_.reset(boost::initialized_value);
	FNFittingPartName_ ? FNFittingPartName_=boost::none : FNFittingPartName_.reset(boost::initialized_value);
	FNFittingPartMemo_ ? FNFittingPartMemo_=boost::none : FNFittingPartMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_FNFittingPartInfoImp::SData::Check()
{
	if ( !FNFittingPartID_ )
	{
		FNFittingPartID_.reset(boost::initialized_value);
	}
	if ( !PartType_ )
	{
		PartType_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !IsUseMain_ )
	{
		IsUseMain_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !SplitType_ )
	{
		SplitType_.reset(boost::initialized_value);
	}
	if ( !ArcX_ )
	{
		ArcX_.reset(boost::initialized_value);
	}
	if ( !ArcY_ )
	{
		ArcY_.reset(boost::initialized_value);
	}
	if ( !ArcZ_ )
	{
		ArcZ_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XOffsetFormula_ )
	{
		XOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !YOffsetFormula_ )
	{
		YOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !ZOffsetFormula_ )
	{
		ZOffsetFormula_.reset(boost::initialized_value);
	}
	if ( !FNFittingPartCode_ )
	{
		FNFittingPartCode_.reset(boost::initialized_value);
	}
	if ( !FNFittingPartName_ )
	{
		FNFittingPartName_.reset(boost::initialized_value);
	}
	if ( !FNFittingPartMemo_ )
	{
		FNFittingPartMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_FNFittingPartInfoImp::SData::ToUtf8()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::to_utf<char>(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::to_utf<char>(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::to_utf<char>(*ZOffsetFormula_, "GBK");
	}
	if ( FNFittingPartCode_ )
	{
		FNFittingPartCode_ = boost::locale::conv::to_utf<char>(*FNFittingPartCode_, "GBK");
	}
	if ( FNFittingPartName_ )
	{
		FNFittingPartName_ = boost::locale::conv::to_utf<char>(*FNFittingPartName_, "GBK");
	}
	if ( FNFittingPartMemo_ )
	{
		FNFittingPartMemo_ = boost::locale::conv::to_utf<char>(*FNFittingPartMemo_, "GBK");
	}
}

void	JK_FNFittingPartInfoImp::SData::ToAscii()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
	if ( XOffsetFormula_ )
	{
		XOffsetFormula_ = boost::locale::conv::from_utf(*XOffsetFormula_, "GBK");
	}
	if ( YOffsetFormula_ )
	{
		YOffsetFormula_ = boost::locale::conv::from_utf(*YOffsetFormula_, "GBK");
	}
	if ( ZOffsetFormula_ )
	{
		ZOffsetFormula_ = boost::locale::conv::from_utf(*ZOffsetFormula_, "GBK");
	}
	if ( FNFittingPartCode_ )
	{
		FNFittingPartCode_ = boost::locale::conv::from_utf(*FNFittingPartCode_, "GBK");
	}
	if ( FNFittingPartName_ )
	{
		FNFittingPartName_ = boost::locale::conv::from_utf(*FNFittingPartName_, "GBK");
	}
	if ( FNFittingPartMemo_ )
	{
		FNFittingPartMemo_ = boost::locale::conv::from_utf(*FNFittingPartMemo_, "GBK");
	}
}

autoDB::SColumns JK_FNFittingPartInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Use(data.FNFittingPartID_));
	}
	if ( data.PartType_ )
	{
		ret.With(PartType.Use(data.PartType_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.IsUseMain_ )
	{
		ret.With(IsUseMain.Use(data.IsUseMain_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.SplitType_ )
	{
		ret.With(SplitType.Use(data.SplitType_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Use(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Use(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Use(data.ArcZ_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Use(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Use(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Use(data.ZOffsetFormula_));
	}
	if ( data.FNFittingPartCode_ )
	{
		ret.With(FNFittingPartCode.Use(data.FNFittingPartCode_));
	}
	if ( data.FNFittingPartName_ )
	{
		ret.With(FNFittingPartName.Use(data.FNFittingPartName_));
	}
	if ( data.FNFittingPartMemo_ )
	{
		ret.With(FNFittingPartMemo.Use(data.FNFittingPartMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_FNFittingPartInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Into(data.FNFittingPartID_));
	}
	if ( data.PartType_ )
	{
		ret.With(PartType.Into(data.PartType_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.IsUseMain_ )
	{
		ret.With(IsUseMain.Into(data.IsUseMain_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.SplitType_ )
	{
		ret.With(SplitType.Into(data.SplitType_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Into(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Into(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Into(data.ArcZ_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XOffsetFormula_ )
	{
		ret.With(XOffsetFormula.Into(data.XOffsetFormula_));
	}
	if ( data.YOffsetFormula_ )
	{
		ret.With(YOffsetFormula.Into(data.YOffsetFormula_));
	}
	if ( data.ZOffsetFormula_ )
	{
		ret.With(ZOffsetFormula.Into(data.ZOffsetFormula_));
	}
	if ( data.FNFittingPartCode_ )
	{
		ret.With(FNFittingPartCode.Into(data.FNFittingPartCode_));
	}
	if ( data.FNFittingPartName_ )
	{
		ret.With(FNFittingPartName.Into(data.FNFittingPartName_));
	}
	if ( data.FNFittingPartMemo_ )
	{
		ret.With(FNFittingPartMemo.Into(data.FNFittingPartMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_FNFittingPartInfoImp	JK_FNFittingPartInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_FNFittingPartInfoImp(alias));
}

JK_FNFittingPartInfoImp::JK_FNFittingPartInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_FNFittingPartInfo"), alias)
	,FNFittingPartID(ImpSPtr_,AUTODB_STR("FNFittingPartID"))
	,PartType(ImpSPtr_,AUTODB_STR("PartType"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,IsUseMain(ImpSPtr_,AUTODB_STR("IsUseMain"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,SplitType(ImpSPtr_,AUTODB_STR("SplitType"))
	,ArcX(ImpSPtr_,AUTODB_STR("ArcX"))
	,ArcY(ImpSPtr_,AUTODB_STR("ArcY"))
	,ArcZ(ImpSPtr_,AUTODB_STR("ArcZ"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffsetFormula(ImpSPtr_,AUTODB_STR("XOffsetFormula"))
	,YOffsetFormula(ImpSPtr_,AUTODB_STR("YOffsetFormula"))
	,ZOffsetFormula(ImpSPtr_,AUTODB_STR("ZOffsetFormula"))
	,FNFittingPartCode(ImpSPtr_,AUTODB_STR("FNFittingPartCode"))
	,FNFittingPartName(ImpSPtr_,AUTODB_STR("FNFittingPartName"))
	,FNFittingPartMemo(ImpSPtr_,AUTODB_STR("FNFittingPartMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_FNFittingPartInfoImp::JK_FNFittingPartInfoImp( const JK_FNFittingPartInfoImp& rhs ):Table(rhs)
	,FNFittingPartID(rhs.FNFittingPartID)
	,PartType(rhs.PartType)
	,IsDel(rhs.IsDel)
	,FNFittingID(rhs.FNFittingID)
	,IsUseMain(rhs.IsUseMain)
	,SkinDirection(rhs.SkinDirection)
	,SplitType(rhs.SplitType)
	,ArcX(rhs.ArcX)
	,ArcY(rhs.ArcY)
	,ArcZ(rhs.ArcZ)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffsetFormula(rhs.XOffsetFormula)
	,YOffsetFormula(rhs.YOffsetFormula)
	,ZOffsetFormula(rhs.ZOffsetFormula)
	,FNFittingPartCode(rhs.FNFittingPartCode)
	,FNFittingPartName(rhs.FNFittingPartName)
	,FNFittingPartMemo(rhs.FNFittingPartMemo)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_FNFittingPartInfoImp::JK_FNFittingPartInfoImp( JK_FNFittingPartInfoImp&& rhs ):Table(rhs)
	,FNFittingPartID(std::move(rhs.FNFittingPartID))
	,PartType(std::move(rhs.PartType))
	,IsDel(std::move(rhs.IsDel))
	,FNFittingID(std::move(rhs.FNFittingID))
	,IsUseMain(std::move(rhs.IsUseMain))
	,SkinDirection(std::move(rhs.SkinDirection))
	,SplitType(std::move(rhs.SplitType))
	,ArcX(std::move(rhs.ArcX))
	,ArcY(std::move(rhs.ArcY))
	,ArcZ(std::move(rhs.ArcZ))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffsetFormula(std::move(rhs.XOffsetFormula))
	,YOffsetFormula(std::move(rhs.YOffsetFormula))
	,ZOffsetFormula(std::move(rhs.ZOffsetFormula))
	,FNFittingPartCode(std::move(rhs.FNFittingPartCode))
	,FNFittingPartName(std::move(rhs.FNFittingPartName))
	,FNFittingPartMemo(std::move(rhs.FNFittingPartMemo))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_FNFittingPartInfoImp	JK_FNFittingPartInfo("");



void	JK_FNFittingPartMatInfoImp::SData::SetAll(bool val)
{
	val ? FNFittingPartID_.reset(boost::initialized_value) : FNFittingPartID_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
}

void	JK_FNFittingPartMatInfoImp::SData::Flip()
{
	FNFittingPartID_ ? FNFittingPartID_=boost::none : FNFittingPartID_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
}

void	JK_FNFittingPartMatInfoImp::SData::Check()
{
	if ( !FNFittingPartID_ )
	{
		FNFittingPartID_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
}

void	JK_FNFittingPartMatInfoImp::SData::ToUtf8()
{
}

void	JK_FNFittingPartMatInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_FNFittingPartMatInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Use(data.FNFittingPartID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_FNFittingPartMatInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Into(data.FNFittingPartID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	return std::move(ret);
}


JK_FNFittingPartMatInfoImp	JK_FNFittingPartMatInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_FNFittingPartMatInfoImp(alias));
}

JK_FNFittingPartMatInfoImp::JK_FNFittingPartMatInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_FNFittingPartMatInfo"), alias)
	,FNFittingPartID(ImpSPtr_,AUTODB_STR("FNFittingPartID"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
{}

JK_FNFittingPartMatInfoImp::JK_FNFittingPartMatInfoImp( const JK_FNFittingPartMatInfoImp& rhs ):Table(rhs)
	,FNFittingPartID(rhs.FNFittingPartID)
	,MaterialID(rhs.MaterialID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,MatGType(rhs.MatGType)
{}

JK_FNFittingPartMatInfoImp::JK_FNFittingPartMatInfoImp( JK_FNFittingPartMatInfoImp&& rhs ):Table(rhs)
	,FNFittingPartID(std::move(rhs.FNFittingPartID))
	,MaterialID(std::move(rhs.MaterialID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,MatGType(std::move(rhs.MatGType))
{}

JK_FNFittingPartMatInfoImp	JK_FNFittingPartMatInfo("");



void	JK_FNFittingPartSealInfoImp::SData::SetAll(bool val)
{
	val ? FNFittingPartID_.reset(boost::initialized_value) : FNFittingPartID_=boost::none;
	val ? SealOrder_.reset(boost::initialized_value) : SealOrder_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
	val ? SealType_.reset(boost::initialized_value) : SealType_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_FNFittingPartSealInfoImp::SData::Flip()
{
	FNFittingPartID_ ? FNFittingPartID_=boost::none : FNFittingPartID_.reset(boost::initialized_value);
	SealOrder_ ? SealOrder_=boost::none : SealOrder_.reset(boost::initialized_value);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
	SealType_ ? SealType_=boost::none : SealType_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_FNFittingPartSealInfoImp::SData::Check()
{
	if ( !FNFittingPartID_ )
	{
		FNFittingPartID_.reset(boost::initialized_value);
	}
	if ( !SealOrder_ )
	{
		SealOrder_.reset(boost::initialized_value);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
	if ( !SealType_ )
	{
		SealType_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_FNFittingPartSealInfoImp::SData::ToUtf8()
{
}

void	JK_FNFittingPartSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_FNFittingPartSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Use(data.FNFittingPartID_));
	}
	if ( data.SealOrder_ )
	{
		ret.With(SealOrder.Use(data.SealOrder_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Use(data.SealType_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_FNFittingPartSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Into(data.FNFittingPartID_));
	}
	if ( data.SealOrder_ )
	{
		ret.With(SealOrder.Into(data.SealOrder_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Into(data.SealType_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_FNFittingPartSealInfoImp	JK_FNFittingPartSealInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_FNFittingPartSealInfoImp(alias));
}

JK_FNFittingPartSealInfoImp::JK_FNFittingPartSealInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_FNFittingPartSealInfo"), alias)
	,FNFittingPartID(ImpSPtr_,AUTODB_STR("FNFittingPartID"))
	,SealOrder(ImpSPtr_,AUTODB_STR("SealOrder"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
	,SealType(ImpSPtr_,AUTODB_STR("SealType"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_FNFittingPartSealInfoImp::JK_FNFittingPartSealInfoImp( const JK_FNFittingPartSealInfoImp& rhs ):Table(rhs)
	,FNFittingPartID(rhs.FNFittingPartID)
	,SealOrder(rhs.SealOrder)
	,SealIndex(rhs.SealIndex)
	,SealType(rhs.SealType)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_FNFittingPartSealInfoImp::JK_FNFittingPartSealInfoImp( JK_FNFittingPartSealInfoImp&& rhs ):Table(rhs)
	,FNFittingPartID(std::move(rhs.FNFittingPartID))
	,SealOrder(std::move(rhs.SealOrder))
	,SealIndex(std::move(rhs.SealIndex))
	,SealType(std::move(rhs.SealType))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_FNFittingPartSealInfoImp	JK_FNFittingPartSealInfo("");



void	JK_FittingInfoImp::SData::SetAll(bool val)
{
	val ? FittingID_.reset(boost::initialized_value) : FittingID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? IsSplit_.reset(boost::initialized_value) : IsSplit_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? ShowID_.reset(boost::initialized_value) : ShowID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? FittingCode_.reset(boost::initialized_value) : FittingCode_=boost::none;
	val ? FittingName_.reset(boost::initialized_value) : FittingName_=boost::none;
	val ? FittingMemo_.reset(boost::initialized_value) : FittingMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_FittingInfoImp::SData::Flip()
{
	FittingID_ ? FittingID_=boost::none : FittingID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	IsSplit_ ? IsSplit_=boost::none : IsSplit_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	ShowID_ ? ShowID_=boost::none : ShowID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	FittingCode_ ? FittingCode_=boost::none : FittingCode_.reset(boost::initialized_value);
	FittingName_ ? FittingName_=boost::none : FittingName_.reset(boost::initialized_value);
	FittingMemo_ ? FittingMemo_=boost::none : FittingMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_FittingInfoImp::SData::Check()
{
	if ( !FittingID_ )
	{
		FittingID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !IsSplit_ )
	{
		IsSplit_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !ShowID_ )
	{
		ShowID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !FittingCode_ )
	{
		FittingCode_.reset(boost::initialized_value);
	}
	if ( !FittingName_ )
	{
		FittingName_.reset(boost::initialized_value);
	}
	if ( !FittingMemo_ )
	{
		FittingMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_FittingInfoImp::SData::ToUtf8()
{
	if ( FittingCode_ )
	{
		FittingCode_ = boost::locale::conv::to_utf<char>(*FittingCode_, "GBK");
	}
	if ( FittingName_ )
	{
		FittingName_ = boost::locale::conv::to_utf<char>(*FittingName_, "GBK");
	}
	if ( FittingMemo_ )
	{
		FittingMemo_ = boost::locale::conv::to_utf<char>(*FittingMemo_, "GBK");
	}
}

void	JK_FittingInfoImp::SData::ToAscii()
{
	if ( FittingCode_ )
	{
		FittingCode_ = boost::locale::conv::from_utf(*FittingCode_, "GBK");
	}
	if ( FittingName_ )
	{
		FittingName_ = boost::locale::conv::from_utf(*FittingName_, "GBK");
	}
	if ( FittingMemo_ )
	{
		FittingMemo_ = boost::locale::conv::from_utf(*FittingMemo_, "GBK");
	}
}

autoDB::SColumns JK_FittingInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Use(data.FittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Use(data.IsSplit_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Use(data.ShowID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.FittingCode_ )
	{
		ret.With(FittingCode.Use(data.FittingCode_));
	}
	if ( data.FittingName_ )
	{
		ret.With(FittingName.Use(data.FittingName_));
	}
	if ( data.FittingMemo_ )
	{
		ret.With(FittingMemo.Use(data.FittingMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_FittingInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Into(data.FittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Into(data.IsSplit_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Into(data.ShowID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.FittingCode_ )
	{
		ret.With(FittingCode.Into(data.FittingCode_));
	}
	if ( data.FittingName_ )
	{
		ret.With(FittingName.Into(data.FittingName_));
	}
	if ( data.FittingMemo_ )
	{
		ret.With(FittingMemo.Into(data.FittingMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_FittingInfoImp	JK_FittingInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_FittingInfoImp(alias));
}

JK_FittingInfoImp::JK_FittingInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_FittingInfo"), alias)
	,FittingID(ImpSPtr_,AUTODB_STR("FittingID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,IsSplit(ImpSPtr_,AUTODB_STR("IsSplit"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,ShowID(ImpSPtr_,AUTODB_STR("ShowID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,FittingCode(ImpSPtr_,AUTODB_STR("FittingCode"))
	,FittingName(ImpSPtr_,AUTODB_STR("FittingName"))
	,FittingMemo(ImpSPtr_,AUTODB_STR("FittingMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_FittingInfoImp::JK_FittingInfoImp( const JK_FittingInfoImp& rhs ):Table(rhs)
	,FittingID(rhs.FittingID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,IsSplit(rhs.IsSplit)
	,GTypeID(rhs.GTypeID)
	,SupplyType(rhs.SupplyType)
	,ShowID(rhs.ShowID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,FittingCode(rhs.FittingCode)
	,FittingName(rhs.FittingName)
	,FittingMemo(rhs.FittingMemo)
	,VerCode(rhs.VerCode)
{}

JK_FittingInfoImp::JK_FittingInfoImp( JK_FittingInfoImp&& rhs ):Table(rhs)
	,FittingID(std::move(rhs.FittingID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,IsSplit(std::move(rhs.IsSplit))
	,GTypeID(std::move(rhs.GTypeID))
	,SupplyType(std::move(rhs.SupplyType))
	,ShowID(std::move(rhs.ShowID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,FittingCode(std::move(rhs.FittingCode))
	,FittingName(std::move(rhs.FittingName))
	,FittingMemo(std::move(rhs.FittingMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_FittingInfoImp	JK_FittingInfo("");



void	JK_FittingRuleInfoImp::SData::SetAll(bool val)
{
	val ? FittingRuleID_.reset(boost::initialized_value) : FittingRuleID_=boost::none;
	val ? OwnerID_.reset(boost::initialized_value) : OwnerID_=boost::none;
	val ? OwnerGTypeID_.reset(boost::initialized_value) : OwnerGTypeID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? IsCanDel_.reset(boost::initialized_value) : IsCanDel_=boost::none;
	val ? MinLen_.reset(boost::initialized_value) : MinLen_=boost::none;
	val ? MaxLen_.reset(boost::initialized_value) : MaxLen_=boost::none;
	val ? FittingID_.reset(boost::initialized_value) : FittingID_=boost::none;
	val ? FittingType_.reset(boost::initialized_value) : FittingType_=boost::none;
	val ? UseCount_.reset(boost::initialized_value) : UseCount_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_FittingRuleInfoImp::SData::Flip()
{
	FittingRuleID_ ? FittingRuleID_=boost::none : FittingRuleID_.reset(boost::initialized_value);
	OwnerID_ ? OwnerID_=boost::none : OwnerID_.reset(boost::initialized_value);
	OwnerGTypeID_ ? OwnerGTypeID_=boost::none : OwnerGTypeID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	IsCanDel_ ? IsCanDel_=boost::none : IsCanDel_.reset(boost::initialized_value);
	MinLen_ ? MinLen_=boost::none : MinLen_.reset(boost::initialized_value);
	MaxLen_ ? MaxLen_=boost::none : MaxLen_.reset(boost::initialized_value);
	FittingID_ ? FittingID_=boost::none : FittingID_.reset(boost::initialized_value);
	FittingType_ ? FittingType_=boost::none : FittingType_.reset(boost::initialized_value);
	UseCount_ ? UseCount_=boost::none : UseCount_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_FittingRuleInfoImp::SData::Check()
{
	if ( !FittingRuleID_ )
	{
		FittingRuleID_.reset(boost::initialized_value);
	}
	if ( !OwnerID_ )
	{
		OwnerID_.reset(boost::initialized_value);
	}
	if ( !OwnerGTypeID_ )
	{
		OwnerGTypeID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !IsCanDel_ )
	{
		IsCanDel_.reset(boost::initialized_value);
	}
	if ( !MinLen_ )
	{
		MinLen_.reset(boost::initialized_value);
	}
	if ( !MaxLen_ )
	{
		MaxLen_.reset(boost::initialized_value);
	}
	if ( !FittingID_ )
	{
		FittingID_.reset(boost::initialized_value);
	}
	if ( !FittingType_ )
	{
		FittingType_.reset(boost::initialized_value);
	}
	if ( !UseCount_ )
	{
		UseCount_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_FittingRuleInfoImp::SData::ToUtf8()
{
}

void	JK_FittingRuleInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_FittingRuleInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FittingRuleID_ )
	{
		ret.With(FittingRuleID.Use(data.FittingRuleID_));
	}
	if ( data.OwnerID_ )
	{
		ret.With(OwnerID.Use(data.OwnerID_));
	}
	if ( data.OwnerGTypeID_ )
	{
		ret.With(OwnerGTypeID.Use(data.OwnerGTypeID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Use(data.IsCanDel_));
	}
	if ( data.MinLen_ )
	{
		ret.With(MinLen.Use(data.MinLen_));
	}
	if ( data.MaxLen_ )
	{
		ret.With(MaxLen.Use(data.MaxLen_));
	}
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Use(data.FittingID_));
	}
	if ( data.FittingType_ )
	{
		ret.With(FittingType.Use(data.FittingType_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Use(data.UseCount_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_FittingRuleInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FittingRuleID_ )
	{
		ret.With(FittingRuleID.Into(data.FittingRuleID_));
	}
	if ( data.OwnerID_ )
	{
		ret.With(OwnerID.Into(data.OwnerID_));
	}
	if ( data.OwnerGTypeID_ )
	{
		ret.With(OwnerGTypeID.Into(data.OwnerGTypeID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.IsCanDel_ )
	{
		ret.With(IsCanDel.Into(data.IsCanDel_));
	}
	if ( data.MinLen_ )
	{
		ret.With(MinLen.Into(data.MinLen_));
	}
	if ( data.MaxLen_ )
	{
		ret.With(MaxLen.Into(data.MaxLen_));
	}
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Into(data.FittingID_));
	}
	if ( data.FittingType_ )
	{
		ret.With(FittingType.Into(data.FittingType_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Into(data.UseCount_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_FittingRuleInfoImp	JK_FittingRuleInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_FittingRuleInfoImp(alias));
}

JK_FittingRuleInfoImp::JK_FittingRuleInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_FittingRuleInfo"), alias)
	,FittingRuleID(ImpSPtr_,AUTODB_STR("FittingRuleID"))
	,OwnerID(ImpSPtr_,AUTODB_STR("OwnerID"))
	,OwnerGTypeID(ImpSPtr_,AUTODB_STR("OwnerGTypeID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,IsCanDel(ImpSPtr_,AUTODB_STR("IsCanDel"))
	,MinLen(ImpSPtr_,AUTODB_STR("MinLen"))
	,MaxLen(ImpSPtr_,AUTODB_STR("MaxLen"))
	,FittingID(ImpSPtr_,AUTODB_STR("FittingID"))
	,FittingType(ImpSPtr_,AUTODB_STR("FittingType"))
	,UseCount(ImpSPtr_,AUTODB_STR("UseCount"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_FittingRuleInfoImp::JK_FittingRuleInfoImp( const JK_FittingRuleInfoImp& rhs ):Table(rhs)
	,FittingRuleID(rhs.FittingRuleID)
	,OwnerID(rhs.OwnerID)
	,OwnerGTypeID(rhs.OwnerGTypeID)
	,IsDefault(rhs.IsDefault)
	,IsCanDel(rhs.IsCanDel)
	,MinLen(rhs.MinLen)
	,MaxLen(rhs.MaxLen)
	,FittingID(rhs.FittingID)
	,FittingType(rhs.FittingType)
	,UseCount(rhs.UseCount)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_FittingRuleInfoImp::JK_FittingRuleInfoImp( JK_FittingRuleInfoImp&& rhs ):Table(rhs)
	,FittingRuleID(std::move(rhs.FittingRuleID))
	,OwnerID(std::move(rhs.OwnerID))
	,OwnerGTypeID(std::move(rhs.OwnerGTypeID))
	,IsDefault(std::move(rhs.IsDefault))
	,IsCanDel(std::move(rhs.IsCanDel))
	,MinLen(std::move(rhs.MinLen))
	,MaxLen(std::move(rhs.MaxLen))
	,FittingID(std::move(rhs.FittingID))
	,FittingType(std::move(rhs.FittingType))
	,UseCount(std::move(rhs.UseCount))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_FittingRuleInfoImp	JK_FittingRuleInfo("");



void	JK_FormulaConstInfoImp::SData::SetAll(bool val)
{
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? ConstCode_.reset(boost::initialized_value) : ConstCode_=boost::none;
	val ? ConstText_.reset(boost::initialized_value) : ConstText_=boost::none;
	val ? ConstValue_.reset(boost::initialized_value) : ConstValue_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_FormulaConstInfoImp::SData::Flip()
{
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	ConstCode_ ? ConstCode_=boost::none : ConstCode_.reset(boost::initialized_value);
	ConstText_ ? ConstText_=boost::none : ConstText_.reset(boost::initialized_value);
	ConstValue_ ? ConstValue_=boost::none : ConstValue_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_FormulaConstInfoImp::SData::Check()
{
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !ConstCode_ )
	{
		ConstCode_.reset(boost::initialized_value);
	}
	if ( !ConstText_ )
	{
		ConstText_.reset(boost::initialized_value);
	}
	if ( !ConstValue_ )
	{
		ConstValue_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_FormulaConstInfoImp::SData::ToUtf8()
{
	if ( ConstCode_ )
	{
		ConstCode_ = boost::locale::conv::to_utf<char>(*ConstCode_, "GBK");
	}
	if ( ConstText_ )
	{
		ConstText_ = boost::locale::conv::to_utf<char>(*ConstText_, "GBK");
	}
}

void	JK_FormulaConstInfoImp::SData::ToAscii()
{
	if ( ConstCode_ )
	{
		ConstCode_ = boost::locale::conv::from_utf(*ConstCode_, "GBK");
	}
	if ( ConstText_ )
	{
		ConstText_ = boost::locale::conv::from_utf(*ConstText_, "GBK");
	}
}

autoDB::SColumns JK_FormulaConstInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.ConstCode_ )
	{
		ret.With(ConstCode.Use(data.ConstCode_));
	}
	if ( data.ConstText_ )
	{
		ret.With(ConstText.Use(data.ConstText_));
	}
	if ( data.ConstValue_ )
	{
		ret.With(ConstValue.Use(data.ConstValue_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_FormulaConstInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.ConstCode_ )
	{
		ret.With(ConstCode.Into(data.ConstCode_));
	}
	if ( data.ConstText_ )
	{
		ret.With(ConstText.Into(data.ConstText_));
	}
	if ( data.ConstValue_ )
	{
		ret.With(ConstValue.Into(data.ConstValue_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_FormulaConstInfoImp	JK_FormulaConstInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_FormulaConstInfoImp(alias));
}

JK_FormulaConstInfoImp::JK_FormulaConstInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_FormulaConstInfo"), alias)
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,ConstCode(ImpSPtr_,AUTODB_STR("ConstCode"))
	,ConstText(ImpSPtr_,AUTODB_STR("ConstText"))
	,ConstValue(ImpSPtr_,AUTODB_STR("ConstValue"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_FormulaConstInfoImp::JK_FormulaConstInfoImp( const JK_FormulaConstInfoImp& rhs ):Table(rhs)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,ConstCode(rhs.ConstCode)
	,ConstText(rhs.ConstText)
	,ConstValue(rhs.ConstValue)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_FormulaConstInfoImp::JK_FormulaConstInfoImp( JK_FormulaConstInfoImp&& rhs ):Table(rhs)
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,ConstCode(std::move(rhs.ConstCode))
	,ConstText(std::move(rhs.ConstText))
	,ConstValue(std::move(rhs.ConstValue))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_FormulaConstInfoImp	JK_FormulaConstInfo("");



void	JK_GroupInfoImp::SData::SetAll(bool val)
{
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? ParentID_.reset(boost::initialized_value) : ParentID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? GroupCode_.reset(boost::initialized_value) : GroupCode_=boost::none;
	val ? GroupName_.reset(boost::initialized_value) : GroupName_=boost::none;
	val ? GroupMemo_.reset(boost::initialized_value) : GroupMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_GroupInfoImp::SData::Flip()
{
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	ParentID_ ? ParentID_=boost::none : ParentID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	GroupCode_ ? GroupCode_=boost::none : GroupCode_.reset(boost::initialized_value);
	GroupName_ ? GroupName_=boost::none : GroupName_.reset(boost::initialized_value);
	GroupMemo_ ? GroupMemo_=boost::none : GroupMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_GroupInfoImp::SData::Check()
{
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !ParentID_ )
	{
		ParentID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !GroupCode_ )
	{
		GroupCode_.reset(boost::initialized_value);
	}
	if ( !GroupName_ )
	{
		GroupName_.reset(boost::initialized_value);
	}
	if ( !GroupMemo_ )
	{
		GroupMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_GroupInfoImp::SData::ToUtf8()
{
	if ( GroupCode_ )
	{
		GroupCode_ = boost::locale::conv::to_utf<char>(*GroupCode_, "GBK");
	}
	if ( GroupName_ )
	{
		GroupName_ = boost::locale::conv::to_utf<char>(*GroupName_, "GBK");
	}
	if ( GroupMemo_ )
	{
		GroupMemo_ = boost::locale::conv::to_utf<char>(*GroupMemo_, "GBK");
	}
}

void	JK_GroupInfoImp::SData::ToAscii()
{
	if ( GroupCode_ )
	{
		GroupCode_ = boost::locale::conv::from_utf(*GroupCode_, "GBK");
	}
	if ( GroupName_ )
	{
		GroupName_ = boost::locale::conv::from_utf(*GroupName_, "GBK");
	}
	if ( GroupMemo_ )
	{
		GroupMemo_ = boost::locale::conv::from_utf(*GroupMemo_, "GBK");
	}
}

autoDB::SColumns JK_GroupInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Use(data.ParentID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.GroupCode_ )
	{
		ret.With(GroupCode.Use(data.GroupCode_));
	}
	if ( data.GroupName_ )
	{
		ret.With(GroupName.Use(data.GroupName_));
	}
	if ( data.GroupMemo_ )
	{
		ret.With(GroupMemo.Use(data.GroupMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_GroupInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Into(data.ParentID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.GroupCode_ )
	{
		ret.With(GroupCode.Into(data.GroupCode_));
	}
	if ( data.GroupName_ )
	{
		ret.With(GroupName.Into(data.GroupName_));
	}
	if ( data.GroupMemo_ )
	{
		ret.With(GroupMemo.Into(data.GroupMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_GroupInfoImp	JK_GroupInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_GroupInfoImp(alias));
}

JK_GroupInfoImp::JK_GroupInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_GroupInfo"), alias)
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,ParentID(ImpSPtr_,AUTODB_STR("ParentID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,GroupCode(ImpSPtr_,AUTODB_STR("GroupCode"))
	,GroupName(ImpSPtr_,AUTODB_STR("GroupName"))
	,GroupMemo(ImpSPtr_,AUTODB_STR("GroupMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_GroupInfoImp::JK_GroupInfoImp( const JK_GroupInfoImp& rhs ):Table(rhs)
	,GroupID(rhs.GroupID)
	,ParentID(rhs.ParentID)
	,FactoryID(rhs.FactoryID)
	,IsDel(rhs.IsDel)
	,GTypeID(rhs.GTypeID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,GroupCode(rhs.GroupCode)
	,GroupName(rhs.GroupName)
	,GroupMemo(rhs.GroupMemo)
	,VerCode(rhs.VerCode)
{}

JK_GroupInfoImp::JK_GroupInfoImp( JK_GroupInfoImp&& rhs ):Table(rhs)
	,GroupID(std::move(rhs.GroupID))
	,ParentID(std::move(rhs.ParentID))
	,FactoryID(std::move(rhs.FactoryID))
	,IsDel(std::move(rhs.IsDel))
	,GTypeID(std::move(rhs.GTypeID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,GroupCode(std::move(rhs.GroupCode))
	,GroupName(std::move(rhs.GroupName))
	,GroupMemo(std::move(rhs.GroupMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_GroupInfoImp	JK_GroupInfo("");



void	JK_HWFittingInfoImp::SData::SetAll(bool val)
{
	val ? HWFittingID_.reset(boost::initialized_value) : HWFittingID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? IsSplit_.reset(boost::initialized_value) : IsSplit_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? ShowID_.reset(boost::initialized_value) : ShowID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? SettingCountRuleID_.reset(boost::initialized_value) : SettingCountRuleID_=boost::none;
	val ? IsMatchXLen_.reset(boost::initialized_value) : IsMatchXLen_=boost::none;
	val ? IsMatchYLen_.reset(boost::initialized_value) : IsMatchYLen_=boost::none;
	val ? IsMatchZLen_.reset(boost::initialized_value) : IsMatchZLen_=boost::none;
	val ? EffectLen_.reset(boost::initialized_value) : EffectLen_=boost::none;
	val ? XAdjustLen_.reset(boost::initialized_value) : XAdjustLen_=boost::none;
	val ? IsEmbed_.reset(boost::initialized_value) : IsEmbed_=boost::none;
	val ? InstallDirection_.reset(boost::initialized_value) : InstallDirection_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? HWFittingCode_.reset(boost::initialized_value) : HWFittingCode_=boost::none;
	val ? HWFittingName_.reset(boost::initialized_value) : HWFittingName_=boost::none;
	val ? HWFittingMemo_.reset(boost::initialized_value) : HWFittingMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_HWFittingInfoImp::SData::Flip()
{
	HWFittingID_ ? HWFittingID_=boost::none : HWFittingID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	IsSplit_ ? IsSplit_=boost::none : IsSplit_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	ShowID_ ? ShowID_=boost::none : ShowID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	SettingCountRuleID_ ? SettingCountRuleID_=boost::none : SettingCountRuleID_.reset(boost::initialized_value);
	IsMatchXLen_ ? IsMatchXLen_=boost::none : IsMatchXLen_.reset(boost::initialized_value);
	IsMatchYLen_ ? IsMatchYLen_=boost::none : IsMatchYLen_.reset(boost::initialized_value);
	IsMatchZLen_ ? IsMatchZLen_=boost::none : IsMatchZLen_.reset(boost::initialized_value);
	EffectLen_ ? EffectLen_=boost::none : EffectLen_.reset(boost::initialized_value);
	XAdjustLen_ ? XAdjustLen_=boost::none : XAdjustLen_.reset(boost::initialized_value);
	IsEmbed_ ? IsEmbed_=boost::none : IsEmbed_.reset(boost::initialized_value);
	InstallDirection_ ? InstallDirection_=boost::none : InstallDirection_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	HWFittingCode_ ? HWFittingCode_=boost::none : HWFittingCode_.reset(boost::initialized_value);
	HWFittingName_ ? HWFittingName_=boost::none : HWFittingName_.reset(boost::initialized_value);
	HWFittingMemo_ ? HWFittingMemo_=boost::none : HWFittingMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_HWFittingInfoImp::SData::Check()
{
	if ( !HWFittingID_ )
	{
		HWFittingID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !IsSplit_ )
	{
		IsSplit_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !ShowID_ )
	{
		ShowID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !SettingCountRuleID_ )
	{
		SettingCountRuleID_.reset(boost::initialized_value);
	}
	if ( !IsMatchXLen_ )
	{
		IsMatchXLen_.reset(boost::initialized_value);
	}
	if ( !IsMatchYLen_ )
	{
		IsMatchYLen_.reset(boost::initialized_value);
	}
	if ( !IsMatchZLen_ )
	{
		IsMatchZLen_.reset(boost::initialized_value);
	}
	if ( !EffectLen_ )
	{
		EffectLen_.reset(boost::initialized_value);
	}
	if ( !XAdjustLen_ )
	{
		XAdjustLen_.reset(boost::initialized_value);
	}
	if ( !IsEmbed_ )
	{
		IsEmbed_.reset(boost::initialized_value);
	}
	if ( !InstallDirection_ )
	{
		InstallDirection_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !HWFittingCode_ )
	{
		HWFittingCode_.reset(boost::initialized_value);
	}
	if ( !HWFittingName_ )
	{
		HWFittingName_.reset(boost::initialized_value);
	}
	if ( !HWFittingMemo_ )
	{
		HWFittingMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_HWFittingInfoImp::SData::ToUtf8()
{
	if ( HWFittingCode_ )
	{
		HWFittingCode_ = boost::locale::conv::to_utf<char>(*HWFittingCode_, "GBK");
	}
	if ( HWFittingName_ )
	{
		HWFittingName_ = boost::locale::conv::to_utf<char>(*HWFittingName_, "GBK");
	}
	if ( HWFittingMemo_ )
	{
		HWFittingMemo_ = boost::locale::conv::to_utf<char>(*HWFittingMemo_, "GBK");
	}
}

void	JK_HWFittingInfoImp::SData::ToAscii()
{
	if ( HWFittingCode_ )
	{
		HWFittingCode_ = boost::locale::conv::from_utf(*HWFittingCode_, "GBK");
	}
	if ( HWFittingName_ )
	{
		HWFittingName_ = boost::locale::conv::from_utf(*HWFittingName_, "GBK");
	}
	if ( HWFittingMemo_ )
	{
		HWFittingMemo_ = boost::locale::conv::from_utf(*HWFittingMemo_, "GBK");
	}
}

autoDB::SColumns JK_HWFittingInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Use(data.HWFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Use(data.IsSplit_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Use(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.SettingCountRuleID_ )
	{
		ret.With(SettingCountRuleID.Use(data.SettingCountRuleID_));
	}
	if ( data.IsMatchXLen_ )
	{
		ret.With(IsMatchXLen.Use(data.IsMatchXLen_));
	}
	if ( data.IsMatchYLen_ )
	{
		ret.With(IsMatchYLen.Use(data.IsMatchYLen_));
	}
	if ( data.IsMatchZLen_ )
	{
		ret.With(IsMatchZLen.Use(data.IsMatchZLen_));
	}
	if ( data.EffectLen_ )
	{
		ret.With(EffectLen.Use(data.EffectLen_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Use(data.XAdjustLen_));
	}
	if ( data.IsEmbed_ )
	{
		ret.With(IsEmbed.Use(data.IsEmbed_));
	}
	if ( data.InstallDirection_ )
	{
		ret.With(InstallDirection.Use(data.InstallDirection_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.HWFittingCode_ )
	{
		ret.With(HWFittingCode.Use(data.HWFittingCode_));
	}
	if ( data.HWFittingName_ )
	{
		ret.With(HWFittingName.Use(data.HWFittingName_));
	}
	if ( data.HWFittingMemo_ )
	{
		ret.With(HWFittingMemo.Use(data.HWFittingMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_HWFittingInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Into(data.HWFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Into(data.IsSplit_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Into(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.SettingCountRuleID_ )
	{
		ret.With(SettingCountRuleID.Into(data.SettingCountRuleID_));
	}
	if ( data.IsMatchXLen_ )
	{
		ret.With(IsMatchXLen.Into(data.IsMatchXLen_));
	}
	if ( data.IsMatchYLen_ )
	{
		ret.With(IsMatchYLen.Into(data.IsMatchYLen_));
	}
	if ( data.IsMatchZLen_ )
	{
		ret.With(IsMatchZLen.Into(data.IsMatchZLen_));
	}
	if ( data.EffectLen_ )
	{
		ret.With(EffectLen.Into(data.EffectLen_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Into(data.XAdjustLen_));
	}
	if ( data.IsEmbed_ )
	{
		ret.With(IsEmbed.Into(data.IsEmbed_));
	}
	if ( data.InstallDirection_ )
	{
		ret.With(InstallDirection.Into(data.InstallDirection_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.HWFittingCode_ )
	{
		ret.With(HWFittingCode.Into(data.HWFittingCode_));
	}
	if ( data.HWFittingName_ )
	{
		ret.With(HWFittingName.Into(data.HWFittingName_));
	}
	if ( data.HWFittingMemo_ )
	{
		ret.With(HWFittingMemo.Into(data.HWFittingMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_HWFittingInfoImp	JK_HWFittingInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_HWFittingInfoImp(alias));
}

JK_HWFittingInfoImp::JK_HWFittingInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_HWFittingInfo"), alias)
	,HWFittingID(ImpSPtr_,AUTODB_STR("HWFittingID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,IsSplit(ImpSPtr_,AUTODB_STR("IsSplit"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,ShowID(ImpSPtr_,AUTODB_STR("ShowID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,SettingCountRuleID(ImpSPtr_,AUTODB_STR("SettingCountRuleID"))
	,IsMatchXLen(ImpSPtr_,AUTODB_STR("IsMatchXLen"))
	,IsMatchYLen(ImpSPtr_,AUTODB_STR("IsMatchYLen"))
	,IsMatchZLen(ImpSPtr_,AUTODB_STR("IsMatchZLen"))
	,EffectLen(ImpSPtr_,AUTODB_STR("EffectLen"))
	,XAdjustLen(ImpSPtr_,AUTODB_STR("XAdjustLen"))
	,IsEmbed(ImpSPtr_,AUTODB_STR("IsEmbed"))
	,InstallDirection(ImpSPtr_,AUTODB_STR("InstallDirection"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,HWFittingCode(ImpSPtr_,AUTODB_STR("HWFittingCode"))
	,HWFittingName(ImpSPtr_,AUTODB_STR("HWFittingName"))
	,HWFittingMemo(ImpSPtr_,AUTODB_STR("HWFittingMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_HWFittingInfoImp::JK_HWFittingInfoImp( const JK_HWFittingInfoImp& rhs ):Table(rhs)
	,HWFittingID(rhs.HWFittingID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,IsSplit(rhs.IsSplit)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,ShowID(rhs.ShowID)
	,ModelID(rhs.ModelID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,SettingCountRuleID(rhs.SettingCountRuleID)
	,IsMatchXLen(rhs.IsMatchXLen)
	,IsMatchYLen(rhs.IsMatchYLen)
	,IsMatchZLen(rhs.IsMatchZLen)
	,EffectLen(rhs.EffectLen)
	,XAdjustLen(rhs.XAdjustLen)
	,IsEmbed(rhs.IsEmbed)
	,InstallDirection(rhs.InstallDirection)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,HWFittingCode(rhs.HWFittingCode)
	,HWFittingName(rhs.HWFittingName)
	,HWFittingMemo(rhs.HWFittingMemo)
	,VerCode(rhs.VerCode)
{}

JK_HWFittingInfoImp::JK_HWFittingInfoImp( JK_HWFittingInfoImp&& rhs ):Table(rhs)
	,HWFittingID(std::move(rhs.HWFittingID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,IsSplit(std::move(rhs.IsSplit))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,ShowID(std::move(rhs.ShowID))
	,ModelID(std::move(rhs.ModelID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,SettingCountRuleID(std::move(rhs.SettingCountRuleID))
	,IsMatchXLen(std::move(rhs.IsMatchXLen))
	,IsMatchYLen(std::move(rhs.IsMatchYLen))
	,IsMatchZLen(std::move(rhs.IsMatchZLen))
	,EffectLen(std::move(rhs.EffectLen))
	,XAdjustLen(std::move(rhs.XAdjustLen))
	,IsEmbed(std::move(rhs.IsEmbed))
	,InstallDirection(std::move(rhs.InstallDirection))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,HWFittingCode(std::move(rhs.HWFittingCode))
	,HWFittingName(std::move(rhs.HWFittingName))
	,HWFittingMemo(std::move(rhs.HWFittingMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_HWFittingInfoImp	JK_HWFittingInfo("");



void	JK_HoleRuleInfoImp::SData::SetAll(bool val)
{
	val ? HoleID_.reset(boost::initialized_value) : HoleID_=boost::none;
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? HoleTypeID_.reset(boost::initialized_value) : HoleTypeID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? OverHeight_.reset(boost::initialized_value) : OverHeight_=boost::none;
	val ? HolePicID_.reset(boost::initialized_value) : HolePicID_=boost::none;
	val ? MinXDistance_.reset(boost::initialized_value) : MinXDistance_=boost::none;
	val ? MinZDistance_.reset(boost::initialized_value) : MinZDistance_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_HoleRuleInfoImp::SData::Flip()
{
	HoleID_ ? HoleID_=boost::none : HoleID_.reset(boost::initialized_value);
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	HoleTypeID_ ? HoleTypeID_=boost::none : HoleTypeID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	OverHeight_ ? OverHeight_=boost::none : OverHeight_.reset(boost::initialized_value);
	HolePicID_ ? HolePicID_=boost::none : HolePicID_.reset(boost::initialized_value);
	MinXDistance_ ? MinXDistance_=boost::none : MinXDistance_.reset(boost::initialized_value);
	MinZDistance_ ? MinZDistance_=boost::none : MinZDistance_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_HoleRuleInfoImp::SData::Check()
{
	if ( !HoleID_ )
	{
		HoleID_.reset(boost::initialized_value);
	}
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !HoleTypeID_ )
	{
		HoleTypeID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !OverHeight_ )
	{
		OverHeight_.reset(boost::initialized_value);
	}
	if ( !HolePicID_ )
	{
		HolePicID_.reset(boost::initialized_value);
	}
	if ( !MinXDistance_ )
	{
		MinXDistance_.reset(boost::initialized_value);
	}
	if ( !MinZDistance_ )
	{
		MinZDistance_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_HoleRuleInfoImp::SData::ToUtf8()
{
}

void	JK_HoleRuleInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_HoleRuleInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.HoleID_ )
	{
		ret.With(HoleID.Use(data.HoleID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.HoleTypeID_ )
	{
		ret.With(HoleTypeID.Use(data.HoleTypeID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.OverHeight_ )
	{
		ret.With(OverHeight.Use(data.OverHeight_));
	}
	if ( data.HolePicID_ )
	{
		ret.With(HolePicID.Use(data.HolePicID_));
	}
	if ( data.MinXDistance_ )
	{
		ret.With(MinXDistance.Use(data.MinXDistance_));
	}
	if ( data.MinZDistance_ )
	{
		ret.With(MinZDistance.Use(data.MinZDistance_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_HoleRuleInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.HoleID_ )
	{
		ret.With(HoleID.Into(data.HoleID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.HoleTypeID_ )
	{
		ret.With(HoleTypeID.Into(data.HoleTypeID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.OverHeight_ )
	{
		ret.With(OverHeight.Into(data.OverHeight_));
	}
	if ( data.HolePicID_ )
	{
		ret.With(HolePicID.Into(data.HolePicID_));
	}
	if ( data.MinXDistance_ )
	{
		ret.With(MinXDistance.Into(data.MinXDistance_));
	}
	if ( data.MinZDistance_ )
	{
		ret.With(MinZDistance.Into(data.MinZDistance_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_HoleRuleInfoImp	JK_HoleRuleInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_HoleRuleInfoImp(alias));
}

JK_HoleRuleInfoImp::JK_HoleRuleInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_HoleRuleInfo"), alias)
	,HoleID(ImpSPtr_,AUTODB_STR("HoleID"))
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,HoleTypeID(ImpSPtr_,AUTODB_STR("HoleTypeID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,OverHeight(ImpSPtr_,AUTODB_STR("OverHeight"))
	,HolePicID(ImpSPtr_,AUTODB_STR("HolePicID"))
	,MinXDistance(ImpSPtr_,AUTODB_STR("MinXDistance"))
	,MinZDistance(ImpSPtr_,AUTODB_STR("MinZDistance"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_HoleRuleInfoImp::JK_HoleRuleInfoImp( const JK_HoleRuleInfoImp& rhs ):Table(rhs)
	,HoleID(rhs.HoleID)
	,FNFittingID(rhs.FNFittingID)
	,HoleTypeID(rhs.HoleTypeID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,OverHeight(rhs.OverHeight)
	,HolePicID(rhs.HolePicID)
	,MinXDistance(rhs.MinXDistance)
	,MinZDistance(rhs.MinZDistance)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_HoleRuleInfoImp::JK_HoleRuleInfoImp( JK_HoleRuleInfoImp&& rhs ):Table(rhs)
	,HoleID(std::move(rhs.HoleID))
	,FNFittingID(std::move(rhs.FNFittingID))
	,HoleTypeID(std::move(rhs.HoleTypeID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,OverHeight(std::move(rhs.OverHeight))
	,HolePicID(std::move(rhs.HolePicID))
	,MinXDistance(std::move(rhs.MinXDistance))
	,MinZDistance(std::move(rhs.MinZDistance))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_HoleRuleInfoImp	JK_HoleRuleInfo("");



void	JK_MaterialInfoImp::SData::SetAll(bool val)
{
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? IsSplit_.reset(boost::initialized_value) : IsSplit_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? ShowID_.reset(boost::initialized_value) : ShowID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? IsMatchXLen_.reset(boost::initialized_value) : IsMatchXLen_=boost::none;
	val ? IsMatchYLen_.reset(boost::initialized_value) : IsMatchYLen_=boost::none;
	val ? IsMatchZLen_.reset(boost::initialized_value) : IsMatchZLen_=boost::none;
	val ? SkinID_.reset(boost::initialized_value) : SkinID_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? TransCode_.reset(boost::initialized_value) : TransCode_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? MaterialCode_.reset(boost::initialized_value) : MaterialCode_=boost::none;
	val ? MaterialName_.reset(boost::initialized_value) : MaterialName_=boost::none;
	val ? MaterialMemo_.reset(boost::initialized_value) : MaterialMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_MaterialInfoImp::SData::Flip()
{
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	IsSplit_ ? IsSplit_=boost::none : IsSplit_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	ShowID_ ? ShowID_=boost::none : ShowID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	IsMatchXLen_ ? IsMatchXLen_=boost::none : IsMatchXLen_.reset(boost::initialized_value);
	IsMatchYLen_ ? IsMatchYLen_=boost::none : IsMatchYLen_.reset(boost::initialized_value);
	IsMatchZLen_ ? IsMatchZLen_=boost::none : IsMatchZLen_.reset(boost::initialized_value);
	SkinID_ ? SkinID_=boost::none : SkinID_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	TransCode_ ? TransCode_=boost::none : TransCode_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	MaterialCode_ ? MaterialCode_=boost::none : MaterialCode_.reset(boost::initialized_value);
	MaterialName_ ? MaterialName_=boost::none : MaterialName_.reset(boost::initialized_value);
	MaterialMemo_ ? MaterialMemo_=boost::none : MaterialMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_MaterialInfoImp::SData::Check()
{
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !IsSplit_ )
	{
		IsSplit_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !ShowID_ )
	{
		ShowID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !IsMatchXLen_ )
	{
		IsMatchXLen_.reset(boost::initialized_value);
	}
	if ( !IsMatchYLen_ )
	{
		IsMatchYLen_.reset(boost::initialized_value);
	}
	if ( !IsMatchZLen_ )
	{
		IsMatchZLen_.reset(boost::initialized_value);
	}
	if ( !SkinID_ )
	{
		SkinID_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !TransCode_ )
	{
		TransCode_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !MaterialCode_ )
	{
		MaterialCode_.reset(boost::initialized_value);
	}
	if ( !MaterialName_ )
	{
		MaterialName_.reset(boost::initialized_value);
	}
	if ( !MaterialMemo_ )
	{
		MaterialMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_MaterialInfoImp::SData::ToUtf8()
{
	if ( MaterialCode_ )
	{
		MaterialCode_ = boost::locale::conv::to_utf<char>(*MaterialCode_, "GBK");
	}
	if ( MaterialName_ )
	{
		MaterialName_ = boost::locale::conv::to_utf<char>(*MaterialName_, "GBK");
	}
	if ( MaterialMemo_ )
	{
		MaterialMemo_ = boost::locale::conv::to_utf<char>(*MaterialMemo_, "GBK");
	}
}

void	JK_MaterialInfoImp::SData::ToAscii()
{
	if ( MaterialCode_ )
	{
		MaterialCode_ = boost::locale::conv::from_utf(*MaterialCode_, "GBK");
	}
	if ( MaterialName_ )
	{
		MaterialName_ = boost::locale::conv::from_utf(*MaterialName_, "GBK");
	}
	if ( MaterialMemo_ )
	{
		MaterialMemo_ = boost::locale::conv::from_utf(*MaterialMemo_, "GBK");
	}
}

autoDB::SColumns JK_MaterialInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Use(data.IsSplit_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Use(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.IsMatchXLen_ )
	{
		ret.With(IsMatchXLen.Use(data.IsMatchXLen_));
	}
	if ( data.IsMatchYLen_ )
	{
		ret.With(IsMatchYLen.Use(data.IsMatchYLen_));
	}
	if ( data.IsMatchZLen_ )
	{
		ret.With(IsMatchZLen.Use(data.IsMatchZLen_));
	}
	if ( data.SkinID_ )
	{
		ret.With(SkinID.Use(data.SkinID_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.TransCode_ )
	{
		ret.With(TransCode.Use(data.TransCode_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.MaterialCode_ )
	{
		ret.With(MaterialCode.Use(data.MaterialCode_));
	}
	if ( data.MaterialName_ )
	{
		ret.With(MaterialName.Use(data.MaterialName_));
	}
	if ( data.MaterialMemo_ )
	{
		ret.With(MaterialMemo.Use(data.MaterialMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_MaterialInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Into(data.IsSplit_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Into(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.IsMatchXLen_ )
	{
		ret.With(IsMatchXLen.Into(data.IsMatchXLen_));
	}
	if ( data.IsMatchYLen_ )
	{
		ret.With(IsMatchYLen.Into(data.IsMatchYLen_));
	}
	if ( data.IsMatchZLen_ )
	{
		ret.With(IsMatchZLen.Into(data.IsMatchZLen_));
	}
	if ( data.SkinID_ )
	{
		ret.With(SkinID.Into(data.SkinID_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.TransCode_ )
	{
		ret.With(TransCode.Into(data.TransCode_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.MaterialCode_ )
	{
		ret.With(MaterialCode.Into(data.MaterialCode_));
	}
	if ( data.MaterialName_ )
	{
		ret.With(MaterialName.Into(data.MaterialName_));
	}
	if ( data.MaterialMemo_ )
	{
		ret.With(MaterialMemo.Into(data.MaterialMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_MaterialInfoImp	JK_MaterialInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_MaterialInfoImp(alias));
}

JK_MaterialInfoImp::JK_MaterialInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_MaterialInfo"), alias)
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,IsSplit(ImpSPtr_,AUTODB_STR("IsSplit"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,ShowID(ImpSPtr_,AUTODB_STR("ShowID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,IsMatchXLen(ImpSPtr_,AUTODB_STR("IsMatchXLen"))
	,IsMatchYLen(ImpSPtr_,AUTODB_STR("IsMatchYLen"))
	,IsMatchZLen(ImpSPtr_,AUTODB_STR("IsMatchZLen"))
	,SkinID(ImpSPtr_,AUTODB_STR("SkinID"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,TransCode(ImpSPtr_,AUTODB_STR("TransCode"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,MaterialCode(ImpSPtr_,AUTODB_STR("MaterialCode"))
	,MaterialName(ImpSPtr_,AUTODB_STR("MaterialName"))
	,MaterialMemo(ImpSPtr_,AUTODB_STR("MaterialMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_MaterialInfoImp::JK_MaterialInfoImp( const JK_MaterialInfoImp& rhs ):Table(rhs)
	,MaterialID(rhs.MaterialID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,IsSplit(rhs.IsSplit)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,ShowID(rhs.ShowID)
	,ModelID(rhs.ModelID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,IsMatchXLen(rhs.IsMatchXLen)
	,IsMatchYLen(rhs.IsMatchYLen)
	,IsMatchZLen(rhs.IsMatchZLen)
	,SkinID(rhs.SkinID)
	,SkinDirection(rhs.SkinDirection)
	,TransCode(rhs.TransCode)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,MaterialCode(rhs.MaterialCode)
	,MaterialName(rhs.MaterialName)
	,MaterialMemo(rhs.MaterialMemo)
	,VerCode(rhs.VerCode)
{}

JK_MaterialInfoImp::JK_MaterialInfoImp( JK_MaterialInfoImp&& rhs ):Table(rhs)
	,MaterialID(std::move(rhs.MaterialID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,IsSplit(std::move(rhs.IsSplit))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,ShowID(std::move(rhs.ShowID))
	,ModelID(std::move(rhs.ModelID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,IsMatchXLen(std::move(rhs.IsMatchXLen))
	,IsMatchYLen(std::move(rhs.IsMatchYLen))
	,IsMatchZLen(std::move(rhs.IsMatchZLen))
	,SkinID(std::move(rhs.SkinID))
	,SkinDirection(std::move(rhs.SkinDirection))
	,TransCode(std::move(rhs.TransCode))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,MaterialCode(std::move(rhs.MaterialCode))
	,MaterialName(std::move(rhs.MaterialName))
	,MaterialMemo(std::move(rhs.MaterialMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_MaterialInfoImp	JK_MaterialInfo("");



void	JK_MaterialSealRuleMapInfoImp::SData::SetAll(bool val)
{
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? SealRuleID_.reset(boost::initialized_value) : SealRuleID_=boost::none;
	val ? IsCabDef_.reset(boost::initialized_value) : IsCabDef_=boost::none;
	val ? IsDoorDef_.reset(boost::initialized_value) : IsDoorDef_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_MaterialSealRuleMapInfoImp::SData::Flip()
{
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	SealRuleID_ ? SealRuleID_=boost::none : SealRuleID_.reset(boost::initialized_value);
	IsCabDef_ ? IsCabDef_=boost::none : IsCabDef_.reset(boost::initialized_value);
	IsDoorDef_ ? IsDoorDef_=boost::none : IsDoorDef_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_MaterialSealRuleMapInfoImp::SData::Check()
{
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !SealRuleID_ )
	{
		SealRuleID_.reset(boost::initialized_value);
	}
	if ( !IsCabDef_ )
	{
		IsCabDef_.reset(boost::initialized_value);
	}
	if ( !IsDoorDef_ )
	{
		IsDoorDef_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_MaterialSealRuleMapInfoImp::SData::ToUtf8()
{
}

void	JK_MaterialSealRuleMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_MaterialSealRuleMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Use(data.SealRuleID_));
	}
	if ( data.IsCabDef_ )
	{
		ret.With(IsCabDef.Use(data.IsCabDef_));
	}
	if ( data.IsDoorDef_ )
	{
		ret.With(IsDoorDef.Use(data.IsDoorDef_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_MaterialSealRuleMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Into(data.SealRuleID_));
	}
	if ( data.IsCabDef_ )
	{
		ret.With(IsCabDef.Into(data.IsCabDef_));
	}
	if ( data.IsDoorDef_ )
	{
		ret.With(IsDoorDef.Into(data.IsDoorDef_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_MaterialSealRuleMapInfoImp	JK_MaterialSealRuleMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_MaterialSealRuleMapInfoImp(alias));
}

JK_MaterialSealRuleMapInfoImp::JK_MaterialSealRuleMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_MaterialSealRuleMapInfo"), alias)
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,SealRuleID(ImpSPtr_,AUTODB_STR("SealRuleID"))
	,IsCabDef(ImpSPtr_,AUTODB_STR("IsCabDef"))
	,IsDoorDef(ImpSPtr_,AUTODB_STR("IsDoorDef"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_MaterialSealRuleMapInfoImp::JK_MaterialSealRuleMapInfoImp( const JK_MaterialSealRuleMapInfoImp& rhs ):Table(rhs)
	,MaterialID(rhs.MaterialID)
	,SealRuleID(rhs.SealRuleID)
	,IsCabDef(rhs.IsCabDef)
	,IsDoorDef(rhs.IsDoorDef)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_MaterialSealRuleMapInfoImp::JK_MaterialSealRuleMapInfoImp( JK_MaterialSealRuleMapInfoImp&& rhs ):Table(rhs)
	,MaterialID(std::move(rhs.MaterialID))
	,SealRuleID(std::move(rhs.SealRuleID))
	,IsCabDef(std::move(rhs.IsCabDef))
	,IsDoorDef(std::move(rhs.IsDoorDef))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_MaterialSealRuleMapInfoImp	JK_MaterialSealRuleMapInfo("");



void	JK_ModelInfoImp::SData::SetAll(bool val)
{
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? ArcX_.reset(boost::initialized_value) : ArcX_=boost::none;
	val ? ArcY_.reset(boost::initialized_value) : ArcY_=boost::none;
	val ? ArcZ_.reset(boost::initialized_value) : ArcZ_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? ModelCode_.reset(boost::initialized_value) : ModelCode_=boost::none;
	val ? ModelName_.reset(boost::initialized_value) : ModelName_=boost::none;
	val ? RelativePath_.reset(boost::initialized_value) : RelativePath_=boost::none;
	val ? ModelMemo_.reset(boost::initialized_value) : ModelMemo_=boost::none;
	val ? HASHCode_.reset(boost::initialized_value) : HASHCode_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FrontViewID_.reset(boost::initialized_value) : FrontViewID_=boost::none;
	val ? RightViewID_.reset(boost::initialized_value) : RightViewID_=boost::none;
	val ? TopViewID_.reset(boost::initialized_value) : TopViewID_=boost::none;
	val ? PhotoID_.reset(boost::initialized_value) : PhotoID_=boost::none;
}

void	JK_ModelInfoImp::SData::Flip()
{
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	ArcX_ ? ArcX_=boost::none : ArcX_.reset(boost::initialized_value);
	ArcY_ ? ArcY_=boost::none : ArcY_.reset(boost::initialized_value);
	ArcZ_ ? ArcZ_=boost::none : ArcZ_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	ModelCode_ ? ModelCode_=boost::none : ModelCode_.reset(boost::initialized_value);
	ModelName_ ? ModelName_=boost::none : ModelName_.reset(boost::initialized_value);
	RelativePath_ ? RelativePath_=boost::none : RelativePath_.reset(boost::initialized_value);
	ModelMemo_ ? ModelMemo_=boost::none : ModelMemo_.reset(boost::initialized_value);
	HASHCode_ ? HASHCode_=boost::none : HASHCode_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FrontViewID_ ? FrontViewID_=boost::none : FrontViewID_.reset(boost::initialized_value);
	RightViewID_ ? RightViewID_=boost::none : RightViewID_.reset(boost::initialized_value);
	TopViewID_ ? TopViewID_=boost::none : TopViewID_.reset(boost::initialized_value);
	PhotoID_ ? PhotoID_=boost::none : PhotoID_.reset(boost::initialized_value);
}

void	JK_ModelInfoImp::SData::Check()
{
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !ArcX_ )
	{
		ArcX_.reset(boost::initialized_value);
	}
	if ( !ArcY_ )
	{
		ArcY_.reset(boost::initialized_value);
	}
	if ( !ArcZ_ )
	{
		ArcZ_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !ModelCode_ )
	{
		ModelCode_.reset(boost::initialized_value);
	}
	if ( !ModelName_ )
	{
		ModelName_.reset(boost::initialized_value);
	}
	if ( !RelativePath_ )
	{
		RelativePath_.reset(boost::initialized_value);
	}
	if ( !ModelMemo_ )
	{
		ModelMemo_.reset(boost::initialized_value);
	}
	if ( !HASHCode_ )
	{
		HASHCode_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FrontViewID_ )
	{
		FrontViewID_.reset(boost::initialized_value);
	}
	if ( !RightViewID_ )
	{
		RightViewID_.reset(boost::initialized_value);
	}
	if ( !TopViewID_ )
	{
		TopViewID_.reset(boost::initialized_value);
	}
	if ( !PhotoID_ )
	{
		PhotoID_.reset(boost::initialized_value);
	}
}

void	JK_ModelInfoImp::SData::ToUtf8()
{
	if ( ModelCode_ )
	{
		ModelCode_ = boost::locale::conv::to_utf<char>(*ModelCode_, "GBK");
	}
	if ( ModelName_ )
	{
		ModelName_ = boost::locale::conv::to_utf<char>(*ModelName_, "GBK");
	}
	if ( RelativePath_ )
	{
		RelativePath_ = boost::locale::conv::to_utf<char>(*RelativePath_, "GBK");
	}
	if ( ModelMemo_ )
	{
		ModelMemo_ = boost::locale::conv::to_utf<char>(*ModelMemo_, "GBK");
	}
	if ( HASHCode_ )
	{
		HASHCode_ = boost::locale::conv::to_utf<char>(*HASHCode_, "GBK");
	}
}

void	JK_ModelInfoImp::SData::ToAscii()
{
	if ( ModelCode_ )
	{
		ModelCode_ = boost::locale::conv::from_utf(*ModelCode_, "GBK");
	}
	if ( ModelName_ )
	{
		ModelName_ = boost::locale::conv::from_utf(*ModelName_, "GBK");
	}
	if ( RelativePath_ )
	{
		RelativePath_ = boost::locale::conv::from_utf(*RelativePath_, "GBK");
	}
	if ( ModelMemo_ )
	{
		ModelMemo_ = boost::locale::conv::from_utf(*ModelMemo_, "GBK");
	}
	if ( HASHCode_ )
	{
		HASHCode_ = boost::locale::conv::from_utf(*HASHCode_, "GBK");
	}
}

autoDB::SColumns JK_ModelInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Use(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Use(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Use(data.ArcZ_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.ModelCode_ )
	{
		ret.With(ModelCode.Use(data.ModelCode_));
	}
	if ( data.ModelName_ )
	{
		ret.With(ModelName.Use(data.ModelName_));
	}
	if ( data.RelativePath_ )
	{
		ret.With(RelativePath.Use(data.RelativePath_));
	}
	if ( data.ModelMemo_ )
	{
		ret.With(ModelMemo.Use(data.ModelMemo_));
	}
	if ( data.HASHCode_ )
	{
		ret.With(HASHCode.Use(data.HASHCode_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FrontViewID_ )
	{
		ret.With(FrontViewID.Use(data.FrontViewID_));
	}
	if ( data.RightViewID_ )
	{
		ret.With(RightViewID.Use(data.RightViewID_));
	}
	if ( data.TopViewID_ )
	{
		ret.With(TopViewID.Use(data.TopViewID_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Use(data.PhotoID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_ModelInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Into(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Into(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Into(data.ArcZ_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.ModelCode_ )
	{
		ret.With(ModelCode.Into(data.ModelCode_));
	}
	if ( data.ModelName_ )
	{
		ret.With(ModelName.Into(data.ModelName_));
	}
	if ( data.RelativePath_ )
	{
		ret.With(RelativePath.Into(data.RelativePath_));
	}
	if ( data.ModelMemo_ )
	{
		ret.With(ModelMemo.Into(data.ModelMemo_));
	}
	if ( data.HASHCode_ )
	{
		ret.With(HASHCode.Into(data.HASHCode_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FrontViewID_ )
	{
		ret.With(FrontViewID.Into(data.FrontViewID_));
	}
	if ( data.RightViewID_ )
	{
		ret.With(RightViewID.Into(data.RightViewID_));
	}
	if ( data.TopViewID_ )
	{
		ret.With(TopViewID.Into(data.TopViewID_));
	}
	if ( data.PhotoID_ )
	{
		ret.With(PhotoID.Into(data.PhotoID_));
	}
	return std::move(ret);
}


JK_ModelInfoImp	JK_ModelInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_ModelInfoImp(alias));
}

JK_ModelInfoImp::JK_ModelInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_ModelInfo"), alias)
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,ArcX(ImpSPtr_,AUTODB_STR("ArcX"))
	,ArcY(ImpSPtr_,AUTODB_STR("ArcY"))
	,ArcZ(ImpSPtr_,AUTODB_STR("ArcZ"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,ModelCode(ImpSPtr_,AUTODB_STR("ModelCode"))
	,ModelName(ImpSPtr_,AUTODB_STR("ModelName"))
	,RelativePath(ImpSPtr_,AUTODB_STR("RelativePath"))
	,ModelMemo(ImpSPtr_,AUTODB_STR("ModelMemo"))
	,HASHCode(ImpSPtr_,AUTODB_STR("HASHCode"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FrontViewID(ImpSPtr_,AUTODB_STR("FrontViewID"))
	,RightViewID(ImpSPtr_,AUTODB_STR("RightViewID"))
	,TopViewID(ImpSPtr_,AUTODB_STR("TopViewID"))
	,PhotoID(ImpSPtr_,AUTODB_STR("PhotoID"))
{}

JK_ModelInfoImp::JK_ModelInfoImp( const JK_ModelInfoImp& rhs ):Table(rhs)
	,ModelID(rhs.ModelID)
	,GroupID(rhs.GroupID)
	,FactoryID(rhs.FactoryID)
	,GTypeID(rhs.GTypeID)
	,ArcX(rhs.ArcX)
	,ArcY(rhs.ArcY)
	,ArcZ(rhs.ArcZ)
	,IsDel(rhs.IsDel)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,ModelCode(rhs.ModelCode)
	,ModelName(rhs.ModelName)
	,RelativePath(rhs.RelativePath)
	,ModelMemo(rhs.ModelMemo)
	,HASHCode(rhs.HASHCode)
	,VerCode(rhs.VerCode)
	,FrontViewID(rhs.FrontViewID)
	,RightViewID(rhs.RightViewID)
	,TopViewID(rhs.TopViewID)
	,PhotoID(rhs.PhotoID)
{}

JK_ModelInfoImp::JK_ModelInfoImp( JK_ModelInfoImp&& rhs ):Table(rhs)
	,ModelID(std::move(rhs.ModelID))
	,GroupID(std::move(rhs.GroupID))
	,FactoryID(std::move(rhs.FactoryID))
	,GTypeID(std::move(rhs.GTypeID))
	,ArcX(std::move(rhs.ArcX))
	,ArcY(std::move(rhs.ArcY))
	,ArcZ(std::move(rhs.ArcZ))
	,IsDel(std::move(rhs.IsDel))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,ModelCode(std::move(rhs.ModelCode))
	,ModelName(std::move(rhs.ModelName))
	,RelativePath(std::move(rhs.RelativePath))
	,ModelMemo(std::move(rhs.ModelMemo))
	,HASHCode(std::move(rhs.HASHCode))
	,VerCode(std::move(rhs.VerCode))
	,FrontViewID(std::move(rhs.FrontViewID))
	,RightViewID(std::move(rhs.RightViewID))
	,TopViewID(std::move(rhs.TopViewID))
	,PhotoID(std::move(rhs.PhotoID))
{}

JK_ModelInfoImp	JK_ModelInfo("");



void	JK_NumberRuleInfoImp::SData::SetAll(bool val)
{
	val ? NumberRuleID_.reset(boost::initialized_value) : NumberRuleID_=boost::none;
	val ? FittingID_.reset(boost::initialized_value) : FittingID_=boost::none;
	val ? MinLen_.reset(boost::initialized_value) : MinLen_=boost::none;
	val ? MaxLen_.reset(boost::initialized_value) : MaxLen_=boost::none;
	val ? UseCount_.reset(boost::initialized_value) : UseCount_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_NumberRuleInfoImp::SData::Flip()
{
	NumberRuleID_ ? NumberRuleID_=boost::none : NumberRuleID_.reset(boost::initialized_value);
	FittingID_ ? FittingID_=boost::none : FittingID_.reset(boost::initialized_value);
	MinLen_ ? MinLen_=boost::none : MinLen_.reset(boost::initialized_value);
	MaxLen_ ? MaxLen_=boost::none : MaxLen_.reset(boost::initialized_value);
	UseCount_ ? UseCount_=boost::none : UseCount_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_NumberRuleInfoImp::SData::Check()
{
	if ( !NumberRuleID_ )
	{
		NumberRuleID_.reset(boost::initialized_value);
	}
	if ( !FittingID_ )
	{
		FittingID_.reset(boost::initialized_value);
	}
	if ( !MinLen_ )
	{
		MinLen_.reset(boost::initialized_value);
	}
	if ( !MaxLen_ )
	{
		MaxLen_.reset(boost::initialized_value);
	}
	if ( !UseCount_ )
	{
		UseCount_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_NumberRuleInfoImp::SData::ToUtf8()
{
}

void	JK_NumberRuleInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_NumberRuleInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.NumberRuleID_ )
	{
		ret.With(NumberRuleID.Use(data.NumberRuleID_));
	}
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Use(data.FittingID_));
	}
	if ( data.MinLen_ )
	{
		ret.With(MinLen.Use(data.MinLen_));
	}
	if ( data.MaxLen_ )
	{
		ret.With(MaxLen.Use(data.MaxLen_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Use(data.UseCount_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_NumberRuleInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.NumberRuleID_ )
	{
		ret.With(NumberRuleID.Into(data.NumberRuleID_));
	}
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Into(data.FittingID_));
	}
	if ( data.MinLen_ )
	{
		ret.With(MinLen.Into(data.MinLen_));
	}
	if ( data.MaxLen_ )
	{
		ret.With(MaxLen.Into(data.MaxLen_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Into(data.UseCount_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_NumberRuleInfoImp	JK_NumberRuleInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_NumberRuleInfoImp(alias));
}

JK_NumberRuleInfoImp::JK_NumberRuleInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_NumberRuleInfo"), alias)
	,NumberRuleID(ImpSPtr_,AUTODB_STR("NumberRuleID"))
	,FittingID(ImpSPtr_,AUTODB_STR("FittingID"))
	,MinLen(ImpSPtr_,AUTODB_STR("MinLen"))
	,MaxLen(ImpSPtr_,AUTODB_STR("MaxLen"))
	,UseCount(ImpSPtr_,AUTODB_STR("UseCount"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_NumberRuleInfoImp::JK_NumberRuleInfoImp( const JK_NumberRuleInfoImp& rhs ):Table(rhs)
	,NumberRuleID(rhs.NumberRuleID)
	,FittingID(rhs.FittingID)
	,MinLen(rhs.MinLen)
	,MaxLen(rhs.MaxLen)
	,UseCount(rhs.UseCount)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_NumberRuleInfoImp::JK_NumberRuleInfoImp( JK_NumberRuleInfoImp&& rhs ):Table(rhs)
	,NumberRuleID(std::move(rhs.NumberRuleID))
	,FittingID(std::move(rhs.FittingID))
	,MinLen(std::move(rhs.MinLen))
	,MaxLen(std::move(rhs.MaxLen))
	,UseCount(std::move(rhs.UseCount))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_NumberRuleInfoImp	JK_NumberRuleInfo("");



void	JK_PackageInfoImp::SData::SetAll(bool val)
{
	val ? FittingPackID_.reset(boost::initialized_value) : FittingPackID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? IsSplit_.reset(boost::initialized_value) : IsSplit_=boost::none;
	val ? IsSeparate_.reset(boost::initialized_value) : IsSeparate_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? FittingPackCode_.reset(boost::initialized_value) : FittingPackCode_=boost::none;
	val ? FittingPackName_.reset(boost::initialized_value) : FittingPackName_=boost::none;
	val ? FittingPackMemo_.reset(boost::initialized_value) : FittingPackMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_PackageInfoImp::SData::Flip()
{
	FittingPackID_ ? FittingPackID_=boost::none : FittingPackID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	IsSplit_ ? IsSplit_=boost::none : IsSplit_.reset(boost::initialized_value);
	IsSeparate_ ? IsSeparate_=boost::none : IsSeparate_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	FittingPackCode_ ? FittingPackCode_=boost::none : FittingPackCode_.reset(boost::initialized_value);
	FittingPackName_ ? FittingPackName_=boost::none : FittingPackName_.reset(boost::initialized_value);
	FittingPackMemo_ ? FittingPackMemo_=boost::none : FittingPackMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_PackageInfoImp::SData::Check()
{
	if ( !FittingPackID_ )
	{
		FittingPackID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !IsSplit_ )
	{
		IsSplit_.reset(boost::initialized_value);
	}
	if ( !IsSeparate_ )
	{
		IsSeparate_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !FittingPackCode_ )
	{
		FittingPackCode_.reset(boost::initialized_value);
	}
	if ( !FittingPackName_ )
	{
		FittingPackName_.reset(boost::initialized_value);
	}
	if ( !FittingPackMemo_ )
	{
		FittingPackMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_PackageInfoImp::SData::ToUtf8()
{
	if ( FittingPackCode_ )
	{
		FittingPackCode_ = boost::locale::conv::to_utf<char>(*FittingPackCode_, "GBK");
	}
	if ( FittingPackName_ )
	{
		FittingPackName_ = boost::locale::conv::to_utf<char>(*FittingPackName_, "GBK");
	}
	if ( FittingPackMemo_ )
	{
		FittingPackMemo_ = boost::locale::conv::to_utf<char>(*FittingPackMemo_, "GBK");
	}
}

void	JK_PackageInfoImp::SData::ToAscii()
{
	if ( FittingPackCode_ )
	{
		FittingPackCode_ = boost::locale::conv::from_utf(*FittingPackCode_, "GBK");
	}
	if ( FittingPackName_ )
	{
		FittingPackName_ = boost::locale::conv::from_utf(*FittingPackName_, "GBK");
	}
	if ( FittingPackMemo_ )
	{
		FittingPackMemo_ = boost::locale::conv::from_utf(*FittingPackMemo_, "GBK");
	}
}

autoDB::SColumns JK_PackageInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FittingPackID_ )
	{
		ret.With(FittingPackID.Use(data.FittingPackID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Use(data.IsSplit_));
	}
	if ( data.IsSeparate_ )
	{
		ret.With(IsSeparate.Use(data.IsSeparate_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.FittingPackCode_ )
	{
		ret.With(FittingPackCode.Use(data.FittingPackCode_));
	}
	if ( data.FittingPackName_ )
	{
		ret.With(FittingPackName.Use(data.FittingPackName_));
	}
	if ( data.FittingPackMemo_ )
	{
		ret.With(FittingPackMemo.Use(data.FittingPackMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_PackageInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FittingPackID_ )
	{
		ret.With(FittingPackID.Into(data.FittingPackID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Into(data.IsSplit_));
	}
	if ( data.IsSeparate_ )
	{
		ret.With(IsSeparate.Into(data.IsSeparate_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.FittingPackCode_ )
	{
		ret.With(FittingPackCode.Into(data.FittingPackCode_));
	}
	if ( data.FittingPackName_ )
	{
		ret.With(FittingPackName.Into(data.FittingPackName_));
	}
	if ( data.FittingPackMemo_ )
	{
		ret.With(FittingPackMemo.Into(data.FittingPackMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_PackageInfoImp	JK_PackageInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_PackageInfoImp(alias));
}

JK_PackageInfoImp::JK_PackageInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_PackageInfo"), alias)
	,FittingPackID(ImpSPtr_,AUTODB_STR("FittingPackID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,IsSplit(ImpSPtr_,AUTODB_STR("IsSplit"))
	,IsSeparate(ImpSPtr_,AUTODB_STR("IsSeparate"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,FittingPackCode(ImpSPtr_,AUTODB_STR("FittingPackCode"))
	,FittingPackName(ImpSPtr_,AUTODB_STR("FittingPackName"))
	,FittingPackMemo(ImpSPtr_,AUTODB_STR("FittingPackMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_PackageInfoImp::JK_PackageInfoImp( const JK_PackageInfoImp& rhs ):Table(rhs)
	,FittingPackID(rhs.FittingPackID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,IsSplit(rhs.IsSplit)
	,IsSeparate(rhs.IsSeparate)
	,GTypeID(rhs.GTypeID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,FittingPackCode(rhs.FittingPackCode)
	,FittingPackName(rhs.FittingPackName)
	,FittingPackMemo(rhs.FittingPackMemo)
	,VerCode(rhs.VerCode)
{}

JK_PackageInfoImp::JK_PackageInfoImp( JK_PackageInfoImp&& rhs ):Table(rhs)
	,FittingPackID(std::move(rhs.FittingPackID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,IsSplit(std::move(rhs.IsSplit))
	,IsSeparate(std::move(rhs.IsSeparate))
	,GTypeID(std::move(rhs.GTypeID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,FittingPackCode(std::move(rhs.FittingPackCode))
	,FittingPackName(std::move(rhs.FittingPackName))
	,FittingPackMemo(std::move(rhs.FittingPackMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_PackageInfoImp	JK_PackageInfo("");



void	JK_PackageMapInfoImp::SData::SetAll(bool val)
{
	val ? PackageID_.reset(boost::initialized_value) : PackageID_=boost::none;
	val ? FittingID_.reset(boost::initialized_value) : FittingID_=boost::none;
	val ? FittingCount_.reset(boost::initialized_value) : FittingCount_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
}

void	JK_PackageMapInfoImp::SData::Flip()
{
	PackageID_ ? PackageID_=boost::none : PackageID_.reset(boost::initialized_value);
	FittingID_ ? FittingID_=boost::none : FittingID_.reset(boost::initialized_value);
	FittingCount_ ? FittingCount_=boost::none : FittingCount_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
}

void	JK_PackageMapInfoImp::SData::Check()
{
	if ( !PackageID_ )
	{
		PackageID_.reset(boost::initialized_value);
	}
	if ( !FittingID_ )
	{
		FittingID_.reset(boost::initialized_value);
	}
	if ( !FittingCount_ )
	{
		FittingCount_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
}

void	JK_PackageMapInfoImp::SData::ToUtf8()
{
}

void	JK_PackageMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_PackageMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.PackageID_ )
	{
		ret.With(PackageID.Use(data.PackageID_));
	}
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Use(data.FittingID_));
	}
	if ( data.FittingCount_ )
	{
		ret.With(FittingCount.Use(data.FittingCount_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_PackageMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.PackageID_ )
	{
		ret.With(PackageID.Into(data.PackageID_));
	}
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Into(data.FittingID_));
	}
	if ( data.FittingCount_ )
	{
		ret.With(FittingCount.Into(data.FittingCount_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	return std::move(ret);
}


JK_PackageMapInfoImp	JK_PackageMapInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_PackageMapInfoImp(alias));
}

JK_PackageMapInfoImp::JK_PackageMapInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_PackageMapInfo"), alias)
	,PackageID(ImpSPtr_,AUTODB_STR("PackageID"))
	,FittingID(ImpSPtr_,AUTODB_STR("FittingID"))
	,FittingCount(ImpSPtr_,AUTODB_STR("FittingCount"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
{}

JK_PackageMapInfoImp::JK_PackageMapInfoImp( const JK_PackageMapInfoImp& rhs ):Table(rhs)
	,PackageID(rhs.PackageID)
	,FittingID(rhs.FittingID)
	,FittingCount(rhs.FittingCount)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
{}

JK_PackageMapInfoImp::JK_PackageMapInfoImp( JK_PackageMapInfoImp&& rhs ):Table(rhs)
	,PackageID(std::move(rhs.PackageID))
	,FittingID(std::move(rhs.FittingID))
	,FittingCount(std::move(rhs.FittingCount))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
{}

JK_PackageMapInfoImp	JK_PackageMapInfo("");



void	JK_ProductInfoImp::SData::SetAll(bool val)
{
	val ? ProductID_.reset(boost::initialized_value) : ProductID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? IsSplit_.reset(boost::initialized_value) : IsSplit_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? ShowID_.reset(boost::initialized_value) : ShowID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? ProductCode_.reset(boost::initialized_value) : ProductCode_=boost::none;
	val ? ProductName_.reset(boost::initialized_value) : ProductName_=boost::none;
	val ? ProductMemo_.reset(boost::initialized_value) : ProductMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_ProductInfoImp::SData::Flip()
{
	ProductID_ ? ProductID_=boost::none : ProductID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	IsSplit_ ? IsSplit_=boost::none : IsSplit_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	ShowID_ ? ShowID_=boost::none : ShowID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	ProductCode_ ? ProductCode_=boost::none : ProductCode_.reset(boost::initialized_value);
	ProductName_ ? ProductName_=boost::none : ProductName_.reset(boost::initialized_value);
	ProductMemo_ ? ProductMemo_=boost::none : ProductMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_ProductInfoImp::SData::Check()
{
	if ( !ProductID_ )
	{
		ProductID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !IsSplit_ )
	{
		IsSplit_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !ShowID_ )
	{
		ShowID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !ProductCode_ )
	{
		ProductCode_.reset(boost::initialized_value);
	}
	if ( !ProductName_ )
	{
		ProductName_.reset(boost::initialized_value);
	}
	if ( !ProductMemo_ )
	{
		ProductMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_ProductInfoImp::SData::ToUtf8()
{
	if ( ProductCode_ )
	{
		ProductCode_ = boost::locale::conv::to_utf<char>(*ProductCode_, "GBK");
	}
	if ( ProductName_ )
	{
		ProductName_ = boost::locale::conv::to_utf<char>(*ProductName_, "GBK");
	}
	if ( ProductMemo_ )
	{
		ProductMemo_ = boost::locale::conv::to_utf<char>(*ProductMemo_, "GBK");
	}
}

void	JK_ProductInfoImp::SData::ToAscii()
{
	if ( ProductCode_ )
	{
		ProductCode_ = boost::locale::conv::from_utf(*ProductCode_, "GBK");
	}
	if ( ProductName_ )
	{
		ProductName_ = boost::locale::conv::from_utf(*ProductName_, "GBK");
	}
	if ( ProductMemo_ )
	{
		ProductMemo_ = boost::locale::conv::from_utf(*ProductMemo_, "GBK");
	}
}

autoDB::SColumns JK_ProductInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ProductID_ )
	{
		ret.With(ProductID.Use(data.ProductID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Use(data.IsSplit_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Use(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.ProductCode_ )
	{
		ret.With(ProductCode.Use(data.ProductCode_));
	}
	if ( data.ProductName_ )
	{
		ret.With(ProductName.Use(data.ProductName_));
	}
	if ( data.ProductMemo_ )
	{
		ret.With(ProductMemo.Use(data.ProductMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_ProductInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ProductID_ )
	{
		ret.With(ProductID.Into(data.ProductID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.IsSplit_ )
	{
		ret.With(IsSplit.Into(data.IsSplit_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Into(data.ShowID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.ProductCode_ )
	{
		ret.With(ProductCode.Into(data.ProductCode_));
	}
	if ( data.ProductName_ )
	{
		ret.With(ProductName.Into(data.ProductName_));
	}
	if ( data.ProductMemo_ )
	{
		ret.With(ProductMemo.Into(data.ProductMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_ProductInfoImp	JK_ProductInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_ProductInfoImp(alias));
}

JK_ProductInfoImp::JK_ProductInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_ProductInfo"), alias)
	,ProductID(ImpSPtr_,AUTODB_STR("ProductID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,IsSplit(ImpSPtr_,AUTODB_STR("IsSplit"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,ShowID(ImpSPtr_,AUTODB_STR("ShowID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,ProductCode(ImpSPtr_,AUTODB_STR("ProductCode"))
	,ProductName(ImpSPtr_,AUTODB_STR("ProductName"))
	,ProductMemo(ImpSPtr_,AUTODB_STR("ProductMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_ProductInfoImp::JK_ProductInfoImp( const JK_ProductInfoImp& rhs ):Table(rhs)
	,ProductID(rhs.ProductID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,IsSplit(rhs.IsSplit)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,ShowID(rhs.ShowID)
	,ModelID(rhs.ModelID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,ProductCode(rhs.ProductCode)
	,ProductName(rhs.ProductName)
	,ProductMemo(rhs.ProductMemo)
	,VerCode(rhs.VerCode)
{}

JK_ProductInfoImp::JK_ProductInfoImp( JK_ProductInfoImp&& rhs ):Table(rhs)
	,ProductID(std::move(rhs.ProductID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,IsSplit(std::move(rhs.IsSplit))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,ShowID(std::move(rhs.ShowID))
	,ModelID(std::move(rhs.ModelID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,ProductCode(std::move(rhs.ProductCode))
	,ProductName(std::move(rhs.ProductName))
	,ProductMemo(std::move(rhs.ProductMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_ProductInfoImp	JK_ProductInfo("");



void	JK_ProductSeriesInfoImp::SData::SetAll(bool val)
{
	val ? ProductSeriesID_.reset(boost::initialized_value) : ProductSeriesID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? ProductSeriesCode_.reset(boost::initialized_value) : ProductSeriesCode_=boost::none;
	val ? ProductSeriesName_.reset(boost::initialized_value) : ProductSeriesName_=boost::none;
	val ? ProductSeriesMemo_.reset(boost::initialized_value) : ProductSeriesMemo_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_ProductSeriesInfoImp::SData::Flip()
{
	ProductSeriesID_ ? ProductSeriesID_=boost::none : ProductSeriesID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	ProductSeriesCode_ ? ProductSeriesCode_=boost::none : ProductSeriesCode_.reset(boost::initialized_value);
	ProductSeriesName_ ? ProductSeriesName_=boost::none : ProductSeriesName_.reset(boost::initialized_value);
	ProductSeriesMemo_ ? ProductSeriesMemo_=boost::none : ProductSeriesMemo_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_ProductSeriesInfoImp::SData::Check()
{
	if ( !ProductSeriesID_ )
	{
		ProductSeriesID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !ProductSeriesCode_ )
	{
		ProductSeriesCode_.reset(boost::initialized_value);
	}
	if ( !ProductSeriesName_ )
	{
		ProductSeriesName_.reset(boost::initialized_value);
	}
	if ( !ProductSeriesMemo_ )
	{
		ProductSeriesMemo_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_ProductSeriesInfoImp::SData::ToUtf8()
{
	if ( ProductSeriesCode_ )
	{
		ProductSeriesCode_ = boost::locale::conv::to_utf<char>(*ProductSeriesCode_, "GBK");
	}
	if ( ProductSeriesName_ )
	{
		ProductSeriesName_ = boost::locale::conv::to_utf<char>(*ProductSeriesName_, "GBK");
	}
	if ( ProductSeriesMemo_ )
	{
		ProductSeriesMemo_ = boost::locale::conv::to_utf<char>(*ProductSeriesMemo_, "GBK");
	}
}

void	JK_ProductSeriesInfoImp::SData::ToAscii()
{
	if ( ProductSeriesCode_ )
	{
		ProductSeriesCode_ = boost::locale::conv::from_utf(*ProductSeriesCode_, "GBK");
	}
	if ( ProductSeriesName_ )
	{
		ProductSeriesName_ = boost::locale::conv::from_utf(*ProductSeriesName_, "GBK");
	}
	if ( ProductSeriesMemo_ )
	{
		ProductSeriesMemo_ = boost::locale::conv::from_utf(*ProductSeriesMemo_, "GBK");
	}
}

autoDB::SColumns JK_ProductSeriesInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ProductSeriesID_ )
	{
		ret.With(ProductSeriesID.Use(data.ProductSeriesID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.ProductSeriesCode_ )
	{
		ret.With(ProductSeriesCode.Use(data.ProductSeriesCode_));
	}
	if ( data.ProductSeriesName_ )
	{
		ret.With(ProductSeriesName.Use(data.ProductSeriesName_));
	}
	if ( data.ProductSeriesMemo_ )
	{
		ret.With(ProductSeriesMemo.Use(data.ProductSeriesMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_ProductSeriesInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ProductSeriesID_ )
	{
		ret.With(ProductSeriesID.Into(data.ProductSeriesID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.ProductSeriesCode_ )
	{
		ret.With(ProductSeriesCode.Into(data.ProductSeriesCode_));
	}
	if ( data.ProductSeriesName_ )
	{
		ret.With(ProductSeriesName.Into(data.ProductSeriesName_));
	}
	if ( data.ProductSeriesMemo_ )
	{
		ret.With(ProductSeriesMemo.Into(data.ProductSeriesMemo_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_ProductSeriesInfoImp	JK_ProductSeriesInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_ProductSeriesInfoImp(alias));
}

JK_ProductSeriesInfoImp::JK_ProductSeriesInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_ProductSeriesInfo"), alias)
	,ProductSeriesID(ImpSPtr_,AUTODB_STR("ProductSeriesID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,ProductSeriesCode(ImpSPtr_,AUTODB_STR("ProductSeriesCode"))
	,ProductSeriesName(ImpSPtr_,AUTODB_STR("ProductSeriesName"))
	,ProductSeriesMemo(ImpSPtr_,AUTODB_STR("ProductSeriesMemo"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_ProductSeriesInfoImp::JK_ProductSeriesInfoImp( const JK_ProductSeriesInfoImp& rhs ):Table(rhs)
	,ProductSeriesID(rhs.ProductSeriesID)
	,FactoryID(rhs.FactoryID)
	,GroupID(rhs.GroupID)
	,IsDel(rhs.IsDel)
	,IsActive(rhs.IsActive)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,ProductSeriesCode(rhs.ProductSeriesCode)
	,ProductSeriesName(rhs.ProductSeriesName)
	,ProductSeriesMemo(rhs.ProductSeriesMemo)
	,VerCode(rhs.VerCode)
{}

JK_ProductSeriesInfoImp::JK_ProductSeriesInfoImp( JK_ProductSeriesInfoImp&& rhs ):Table(rhs)
	,ProductSeriesID(std::move(rhs.ProductSeriesID))
	,FactoryID(std::move(rhs.FactoryID))
	,GroupID(std::move(rhs.GroupID))
	,IsDel(std::move(rhs.IsDel))
	,IsActive(std::move(rhs.IsActive))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,ProductSeriesCode(std::move(rhs.ProductSeriesCode))
	,ProductSeriesName(std::move(rhs.ProductSeriesName))
	,ProductSeriesMemo(std::move(rhs.ProductSeriesMemo))
	,VerCode(std::move(rhs.VerCode))
{}

JK_ProductSeriesInfoImp	JK_ProductSeriesInfo("");



void	JK_ProductSeriesValidInfoImp::SData::SetAll(bool val)
{
	val ? ProductSeriesID_.reset(boost::initialized_value) : ProductSeriesID_=boost::none;
	val ? ProductSeriesItemID_.reset(boost::initialized_value) : ProductSeriesItemID_=boost::none;
	val ? PSType_.reset(boost::initialized_value) : PSType_=boost::none;
	val ? ParentID_.reset(boost::initialized_value) : ParentID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? IsGroup_.reset(boost::initialized_value) : IsGroup_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? DefaultItemID_.reset(boost::initialized_value) : DefaultItemID_=boost::none;
}

void	JK_ProductSeriesValidInfoImp::SData::Flip()
{
	ProductSeriesID_ ? ProductSeriesID_=boost::none : ProductSeriesID_.reset(boost::initialized_value);
	ProductSeriesItemID_ ? ProductSeriesItemID_=boost::none : ProductSeriesItemID_.reset(boost::initialized_value);
	PSType_ ? PSType_=boost::none : PSType_.reset(boost::initialized_value);
	ParentID_ ? ParentID_=boost::none : ParentID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	IsGroup_ ? IsGroup_=boost::none : IsGroup_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	DefaultItemID_ ? DefaultItemID_=boost::none : DefaultItemID_.reset(boost::initialized_value);
}

void	JK_ProductSeriesValidInfoImp::SData::Check()
{
	if ( !ProductSeriesID_ )
	{
		ProductSeriesID_.reset(boost::initialized_value);
	}
	if ( !ProductSeriesItemID_ )
	{
		ProductSeriesItemID_.reset(boost::initialized_value);
	}
	if ( !PSType_ )
	{
		PSType_.reset(boost::initialized_value);
	}
	if ( !ParentID_ )
	{
		ParentID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !IsGroup_ )
	{
		IsGroup_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !DefaultItemID_ )
	{
		DefaultItemID_.reset(boost::initialized_value);
	}
}

void	JK_ProductSeriesValidInfoImp::SData::ToUtf8()
{
}

void	JK_ProductSeriesValidInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_ProductSeriesValidInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ProductSeriesID_ )
	{
		ret.With(ProductSeriesID.Use(data.ProductSeriesID_));
	}
	if ( data.ProductSeriesItemID_ )
	{
		ret.With(ProductSeriesItemID.Use(data.ProductSeriesItemID_));
	}
	if ( data.PSType_ )
	{
		ret.With(PSType.Use(data.PSType_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Use(data.ParentID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.IsGroup_ )
	{
		ret.With(IsGroup.Use(data.IsGroup_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.DefaultItemID_ )
	{
		ret.With(DefaultItemID.Use(data.DefaultItemID_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_ProductSeriesValidInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ProductSeriesID_ )
	{
		ret.With(ProductSeriesID.Into(data.ProductSeriesID_));
	}
	if ( data.ProductSeriesItemID_ )
	{
		ret.With(ProductSeriesItemID.Into(data.ProductSeriesItemID_));
	}
	if ( data.PSType_ )
	{
		ret.With(PSType.Into(data.PSType_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Into(data.ParentID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.IsGroup_ )
	{
		ret.With(IsGroup.Into(data.IsGroup_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.DefaultItemID_ )
	{
		ret.With(DefaultItemID.Into(data.DefaultItemID_));
	}
	return std::move(ret);
}


JK_ProductSeriesValidInfoImp	JK_ProductSeriesValidInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_ProductSeriesValidInfoImp(alias));
}

JK_ProductSeriesValidInfoImp::JK_ProductSeriesValidInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_ProductSeriesValidInfo"), alias)
	,ProductSeriesID(ImpSPtr_,AUTODB_STR("ProductSeriesID"))
	,ProductSeriesItemID(ImpSPtr_,AUTODB_STR("ProductSeriesItemID"))
	,PSType(ImpSPtr_,AUTODB_STR("PSType"))
	,ParentID(ImpSPtr_,AUTODB_STR("ParentID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,IsGroup(ImpSPtr_,AUTODB_STR("IsGroup"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,DefaultItemID(ImpSPtr_,AUTODB_STR("DefaultItemID"))
{}

JK_ProductSeriesValidInfoImp::JK_ProductSeriesValidInfoImp( const JK_ProductSeriesValidInfoImp& rhs ):Table(rhs)
	,ProductSeriesID(rhs.ProductSeriesID)
	,ProductSeriesItemID(rhs.ProductSeriesItemID)
	,PSType(rhs.PSType)
	,ParentID(rhs.ParentID)
	,IsDefault(rhs.IsDefault)
	,IsGroup(rhs.IsGroup)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,DefaultItemID(rhs.DefaultItemID)
{}

JK_ProductSeriesValidInfoImp::JK_ProductSeriesValidInfoImp( JK_ProductSeriesValidInfoImp&& rhs ):Table(rhs)
	,ProductSeriesID(std::move(rhs.ProductSeriesID))
	,ProductSeriesItemID(std::move(rhs.ProductSeriesItemID))
	,PSType(std::move(rhs.PSType))
	,ParentID(std::move(rhs.ParentID))
	,IsDefault(std::move(rhs.IsDefault))
	,IsGroup(std::move(rhs.IsGroup))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,DefaultItemID(std::move(rhs.DefaultItemID))
{}

JK_ProductSeriesValidInfoImp	JK_ProductSeriesValidInfo("");



void	JK_ResourceInfoImp::SData::SetAll(bool val)
{
	val ? ResourceID_.reset(boost::initialized_value) : ResourceID_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? ResourceCode_.reset(boost::initialized_value) : ResourceCode_=boost::none;
	val ? ResourceName_.reset(boost::initialized_value) : ResourceName_=boost::none;
	val ? RelativePath_.reset(boost::initialized_value) : RelativePath_=boost::none;
	val ? ResourceMemo_.reset(boost::initialized_value) : ResourceMemo_=boost::none;
	val ? HASHCode_.reset(boost::initialized_value) : HASHCode_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
}

void	JK_ResourceInfoImp::SData::Flip()
{
	ResourceID_ ? ResourceID_=boost::none : ResourceID_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	ResourceCode_ ? ResourceCode_=boost::none : ResourceCode_.reset(boost::initialized_value);
	ResourceName_ ? ResourceName_=boost::none : ResourceName_.reset(boost::initialized_value);
	RelativePath_ ? RelativePath_=boost::none : RelativePath_.reset(boost::initialized_value);
	ResourceMemo_ ? ResourceMemo_=boost::none : ResourceMemo_.reset(boost::initialized_value);
	HASHCode_ ? HASHCode_=boost::none : HASHCode_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
}

void	JK_ResourceInfoImp::SData::Check()
{
	if ( !ResourceID_ )
	{
		ResourceID_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !ResourceCode_ )
	{
		ResourceCode_.reset(boost::initialized_value);
	}
	if ( !ResourceName_ )
	{
		ResourceName_.reset(boost::initialized_value);
	}
	if ( !RelativePath_ )
	{
		RelativePath_.reset(boost::initialized_value);
	}
	if ( !ResourceMemo_ )
	{
		ResourceMemo_.reset(boost::initialized_value);
	}
	if ( !HASHCode_ )
	{
		HASHCode_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
}

void	JK_ResourceInfoImp::SData::ToUtf8()
{
	if ( ResourceCode_ )
	{
		ResourceCode_ = boost::locale::conv::to_utf<char>(*ResourceCode_, "GBK");
	}
	if ( ResourceName_ )
	{
		ResourceName_ = boost::locale::conv::to_utf<char>(*ResourceName_, "GBK");
	}
	if ( RelativePath_ )
	{
		RelativePath_ = boost::locale::conv::to_utf<char>(*RelativePath_, "GBK");
	}
	if ( ResourceMemo_ )
	{
		ResourceMemo_ = boost::locale::conv::to_utf<char>(*ResourceMemo_, "GBK");
	}
	if ( HASHCode_ )
	{
		HASHCode_ = boost::locale::conv::to_utf<char>(*HASHCode_, "GBK");
	}
}

void	JK_ResourceInfoImp::SData::ToAscii()
{
	if ( ResourceCode_ )
	{
		ResourceCode_ = boost::locale::conv::from_utf(*ResourceCode_, "GBK");
	}
	if ( ResourceName_ )
	{
		ResourceName_ = boost::locale::conv::from_utf(*ResourceName_, "GBK");
	}
	if ( RelativePath_ )
	{
		RelativePath_ = boost::locale::conv::from_utf(*RelativePath_, "GBK");
	}
	if ( ResourceMemo_ )
	{
		ResourceMemo_ = boost::locale::conv::from_utf(*ResourceMemo_, "GBK");
	}
	if ( HASHCode_ )
	{
		HASHCode_ = boost::locale::conv::from_utf(*HASHCode_, "GBK");
	}
}

autoDB::SColumns JK_ResourceInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ResourceID_ )
	{
		ret.With(ResourceID.Use(data.ResourceID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.ResourceCode_ )
	{
		ret.With(ResourceCode.Use(data.ResourceCode_));
	}
	if ( data.ResourceName_ )
	{
		ret.With(ResourceName.Use(data.ResourceName_));
	}
	if ( data.RelativePath_ )
	{
		ret.With(RelativePath.Use(data.RelativePath_));
	}
	if ( data.ResourceMemo_ )
	{
		ret.With(ResourceMemo.Use(data.ResourceMemo_));
	}
	if ( data.HASHCode_ )
	{
		ret.With(HASHCode.Use(data.HASHCode_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_ResourceInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ResourceID_ )
	{
		ret.With(ResourceID.Into(data.ResourceID_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.ResourceCode_ )
	{
		ret.With(ResourceCode.Into(data.ResourceCode_));
	}
	if ( data.ResourceName_ )
	{
		ret.With(ResourceName.Into(data.ResourceName_));
	}
	if ( data.RelativePath_ )
	{
		ret.With(RelativePath.Into(data.RelativePath_));
	}
	if ( data.ResourceMemo_ )
	{
		ret.With(ResourceMemo.Into(data.ResourceMemo_));
	}
	if ( data.HASHCode_ )
	{
		ret.With(HASHCode.Into(data.HASHCode_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	return std::move(ret);
}


JK_ResourceInfoImp	JK_ResourceInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_ResourceInfoImp(alias));
}

JK_ResourceInfoImp::JK_ResourceInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_ResourceInfo"), alias)
	,ResourceID(ImpSPtr_,AUTODB_STR("ResourceID"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,ResourceCode(ImpSPtr_,AUTODB_STR("ResourceCode"))
	,ResourceName(ImpSPtr_,AUTODB_STR("ResourceName"))
	,RelativePath(ImpSPtr_,AUTODB_STR("RelativePath"))
	,ResourceMemo(ImpSPtr_,AUTODB_STR("ResourceMemo"))
	,HASHCode(ImpSPtr_,AUTODB_STR("HASHCode"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
{}

JK_ResourceInfoImp::JK_ResourceInfoImp( const JK_ResourceInfoImp& rhs ):Table(rhs)
	,ResourceID(rhs.ResourceID)
	,GroupID(rhs.GroupID)
	,FactoryID(rhs.FactoryID)
	,GTypeID(rhs.GTypeID)
	,IsDel(rhs.IsDel)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,ResourceCode(rhs.ResourceCode)
	,ResourceName(rhs.ResourceName)
	,RelativePath(rhs.RelativePath)
	,ResourceMemo(rhs.ResourceMemo)
	,HASHCode(rhs.HASHCode)
	,VerCode(rhs.VerCode)
{}

JK_ResourceInfoImp::JK_ResourceInfoImp( JK_ResourceInfoImp&& rhs ):Table(rhs)
	,ResourceID(std::move(rhs.ResourceID))
	,GroupID(std::move(rhs.GroupID))
	,FactoryID(std::move(rhs.FactoryID))
	,GTypeID(std::move(rhs.GTypeID))
	,IsDel(std::move(rhs.IsDel))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,ResourceCode(std::move(rhs.ResourceCode))
	,ResourceName(std::move(rhs.ResourceName))
	,RelativePath(std::move(rhs.RelativePath))
	,ResourceMemo(std::move(rhs.ResourceMemo))
	,HASHCode(std::move(rhs.HASHCode))
	,VerCode(std::move(rhs.VerCode))
{}

JK_ResourceInfoImp	JK_ResourceInfo("");



void	JK_SealRuleInfoImp::SData::SetAll(bool val)
{
	val ? SealRuleID_.reset(boost::initialized_value) : SealRuleID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? VisibleSealID_.reset(boost::initialized_value) : VisibleSealID_=boost::none;
	val ? InvisibleSealID_.reset(boost::initialized_value) : InvisibleSealID_=boost::none;
	val ? VisPreMill_.reset(boost::initialized_value) : VisPreMill_=boost::none;
	val ? InvisPreMill_.reset(boost::initialized_value) : InvisPreMill_=boost::none;
	val ? STypeID_.reset(boost::initialized_value) : STypeID_=boost::none;
	val ? SealRuleName_.reset(boost::initialized_value) : SealRuleName_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_SealRuleInfoImp::SData::Flip()
{
	SealRuleID_ ? SealRuleID_=boost::none : SealRuleID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	VisibleSealID_ ? VisibleSealID_=boost::none : VisibleSealID_.reset(boost::initialized_value);
	InvisibleSealID_ ? InvisibleSealID_=boost::none : InvisibleSealID_.reset(boost::initialized_value);
	VisPreMill_ ? VisPreMill_=boost::none : VisPreMill_.reset(boost::initialized_value);
	InvisPreMill_ ? InvisPreMill_=boost::none : InvisPreMill_.reset(boost::initialized_value);
	STypeID_ ? STypeID_=boost::none : STypeID_.reset(boost::initialized_value);
	SealRuleName_ ? SealRuleName_=boost::none : SealRuleName_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_SealRuleInfoImp::SData::Check()
{
	if ( !SealRuleID_ )
	{
		SealRuleID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !VisibleSealID_ )
	{
		VisibleSealID_.reset(boost::initialized_value);
	}
	if ( !InvisibleSealID_ )
	{
		InvisibleSealID_.reset(boost::initialized_value);
	}
	if ( !VisPreMill_ )
	{
		VisPreMill_.reset(boost::initialized_value);
	}
	if ( !InvisPreMill_ )
	{
		InvisPreMill_.reset(boost::initialized_value);
	}
	if ( !STypeID_ )
	{
		STypeID_.reset(boost::initialized_value);
	}
	if ( !SealRuleName_ )
	{
		SealRuleName_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_SealRuleInfoImp::SData::ToUtf8()
{
	if ( SealRuleName_ )
	{
		SealRuleName_ = boost::locale::conv::to_utf<char>(*SealRuleName_, "GBK");
	}
}

void	JK_SealRuleInfoImp::SData::ToAscii()
{
	if ( SealRuleName_ )
	{
		SealRuleName_ = boost::locale::conv::from_utf(*SealRuleName_, "GBK");
	}
}

autoDB::SColumns JK_SealRuleInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Use(data.SealRuleID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.VisibleSealID_ )
	{
		ret.With(VisibleSealID.Use(data.VisibleSealID_));
	}
	if ( data.InvisibleSealID_ )
	{
		ret.With(InvisibleSealID.Use(data.InvisibleSealID_));
	}
	if ( data.VisPreMill_ )
	{
		ret.With(VisPreMill.Use(data.VisPreMill_));
	}
	if ( data.InvisPreMill_ )
	{
		ret.With(InvisPreMill.Use(data.InvisPreMill_));
	}
	if ( data.STypeID_ )
	{
		ret.With(STypeID.Use(data.STypeID_));
	}
	if ( data.SealRuleName_ )
	{
		ret.With(SealRuleName.Use(data.SealRuleName_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_SealRuleInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Into(data.SealRuleID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.VisibleSealID_ )
	{
		ret.With(VisibleSealID.Into(data.VisibleSealID_));
	}
	if ( data.InvisibleSealID_ )
	{
		ret.With(InvisibleSealID.Into(data.InvisibleSealID_));
	}
	if ( data.VisPreMill_ )
	{
		ret.With(VisPreMill.Into(data.VisPreMill_));
	}
	if ( data.InvisPreMill_ )
	{
		ret.With(InvisPreMill.Into(data.InvisPreMill_));
	}
	if ( data.STypeID_ )
	{
		ret.With(STypeID.Into(data.STypeID_));
	}
	if ( data.SealRuleName_ )
	{
		ret.With(SealRuleName.Into(data.SealRuleName_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_SealRuleInfoImp	JK_SealRuleInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_SealRuleInfoImp(alias));
}

JK_SealRuleInfoImp::JK_SealRuleInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_SealRuleInfo"), alias)
	,SealRuleID(ImpSPtr_,AUTODB_STR("SealRuleID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,VisibleSealID(ImpSPtr_,AUTODB_STR("VisibleSealID"))
	,InvisibleSealID(ImpSPtr_,AUTODB_STR("InvisibleSealID"))
	,VisPreMill(ImpSPtr_,AUTODB_STR("VisPreMill"))
	,InvisPreMill(ImpSPtr_,AUTODB_STR("InvisPreMill"))
	,STypeID(ImpSPtr_,AUTODB_STR("STypeID"))
	,SealRuleName(ImpSPtr_,AUTODB_STR("SealRuleName"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_SealRuleInfoImp::JK_SealRuleInfoImp( const JK_SealRuleInfoImp& rhs ):Table(rhs)
	,SealRuleID(rhs.SealRuleID)
	,IsDel(rhs.IsDel)
	,VisibleSealID(rhs.VisibleSealID)
	,InvisibleSealID(rhs.InvisibleSealID)
	,VisPreMill(rhs.VisPreMill)
	,InvisPreMill(rhs.InvisPreMill)
	,STypeID(rhs.STypeID)
	,SealRuleName(rhs.SealRuleName)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_SealRuleInfoImp::JK_SealRuleInfoImp( JK_SealRuleInfoImp&& rhs ):Table(rhs)
	,SealRuleID(std::move(rhs.SealRuleID))
	,IsDel(std::move(rhs.IsDel))
	,VisibleSealID(std::move(rhs.VisibleSealID))
	,InvisibleSealID(std::move(rhs.InvisibleSealID))
	,VisPreMill(std::move(rhs.VisPreMill))
	,InvisPreMill(std::move(rhs.InvisPreMill))
	,STypeID(std::move(rhs.STypeID))
	,SealRuleName(std::move(rhs.SealRuleName))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_SealRuleInfoImp	JK_SealRuleInfo("");



void	JK_SysConfigInfoImp::SData::SetAll(bool val)
{
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? ConfigID_.reset(boost::initialized_value) : ConfigID_=boost::none;
	val ? TableFrontLen_.reset(boost::initialized_value) : TableFrontLen_=boost::none;
	val ? TableSideLen_.reset(boost::initialized_value) : TableSideLen_=boost::none;
	val ? BaseCabDefaultYPos_.reset(boost::initialized_value) : BaseCabDefaultYPos_=boost::none;
	val ? BaseCabSideLen_.reset(boost::initialized_value) : BaseCabSideLen_=boost::none;
	val ? WallCabDefaultYPos_.reset(boost::initialized_value) : WallCabDefaultYPos_=boost::none;
	val ? WallCabSideLen_.reset(boost::initialized_value) : WallCabSideLen_=boost::none;
	val ? ToekickFrontLen_.reset(boost::initialized_value) : ToekickFrontLen_=boost::none;
	val ? DefaultBarHeight_.reset(boost::initialized_value) : DefaultBarHeight_=boost::none;
	val ? DefaultSealExtraLen_.reset(boost::initialized_value) : DefaultSealExtraLen_=boost::none;
	val ? DefaultSealPreMillLen_.reset(boost::initialized_value) : DefaultSealPreMillLen_=boost::none;
	val ? ShelfDefaultYPos_.reset(boost::initialized_value) : ShelfDefaultYPos_=boost::none;
	val ? BGPanelDefaultYPos_.reset(boost::initialized_value) : BGPanelDefaultYPos_=boost::none;
	val ? TableToCabDefaultYLen_.reset(boost::initialized_value) : TableToCabDefaultYLen_=boost::none;
	val ? DefaultBaseCabinetXLen_.reset(boost::initialized_value) : DefaultBaseCabinetXLen_=boost::none;
	val ? DefaultBaseCabinetYLen_.reset(boost::initialized_value) : DefaultBaseCabinetYLen_=boost::none;
	val ? DefaultBaseCabinetZLen_.reset(boost::initialized_value) : DefaultBaseCabinetZLen_=boost::none;
	val ? DefaultWallCabinetXLen_.reset(boost::initialized_value) : DefaultWallCabinetXLen_=boost::none;
	val ? DefaultWallCabinetYLen_.reset(boost::initialized_value) : DefaultWallCabinetYLen_=boost::none;
	val ? DefaultWallCabinetZLen_.reset(boost::initialized_value) : DefaultWallCabinetZLen_=boost::none;
	val ? DefaultLCabinetXLen_.reset(boost::initialized_value) : DefaultLCabinetXLen_=boost::none;
	val ? DefaultLCabinetZLen_.reset(boost::initialized_value) : DefaultLCabinetZLen_=boost::none;
	val ? DefaultCabinetBoardThick_.reset(boost::initialized_value) : DefaultCabinetBoardThick_=boost::none;
	val ? DefaultDoorBoardThick_.reset(boost::initialized_value) : DefaultDoorBoardThick_=boost::none;
	val ? DefaultThinBoardThick_.reset(boost::initialized_value) : DefaultThinBoardThick_=boost::none;
	val ? DefaultDecorLineHeight_.reset(boost::initialized_value) : DefaultDecorLineHeight_=boost::none;
	val ? DefaultDrawerXLen_.reset(boost::initialized_value) : DefaultDrawerXLen_=boost::none;
	val ? DefaultDrawerYLen_.reset(boost::initialized_value) : DefaultDrawerYLen_=boost::none;
	val ? DefaultDrawerZLen_.reset(boost::initialized_value) : DefaultDrawerZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_SysConfigInfoImp::SData::Flip()
{
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	ConfigID_ ? ConfigID_=boost::none : ConfigID_.reset(boost::initialized_value);
	TableFrontLen_ ? TableFrontLen_=boost::none : TableFrontLen_.reset(boost::initialized_value);
	TableSideLen_ ? TableSideLen_=boost::none : TableSideLen_.reset(boost::initialized_value);
	BaseCabDefaultYPos_ ? BaseCabDefaultYPos_=boost::none : BaseCabDefaultYPos_.reset(boost::initialized_value);
	BaseCabSideLen_ ? BaseCabSideLen_=boost::none : BaseCabSideLen_.reset(boost::initialized_value);
	WallCabDefaultYPos_ ? WallCabDefaultYPos_=boost::none : WallCabDefaultYPos_.reset(boost::initialized_value);
	WallCabSideLen_ ? WallCabSideLen_=boost::none : WallCabSideLen_.reset(boost::initialized_value);
	ToekickFrontLen_ ? ToekickFrontLen_=boost::none : ToekickFrontLen_.reset(boost::initialized_value);
	DefaultBarHeight_ ? DefaultBarHeight_=boost::none : DefaultBarHeight_.reset(boost::initialized_value);
	DefaultSealExtraLen_ ? DefaultSealExtraLen_=boost::none : DefaultSealExtraLen_.reset(boost::initialized_value);
	DefaultSealPreMillLen_ ? DefaultSealPreMillLen_=boost::none : DefaultSealPreMillLen_.reset(boost::initialized_value);
	ShelfDefaultYPos_ ? ShelfDefaultYPos_=boost::none : ShelfDefaultYPos_.reset(boost::initialized_value);
	BGPanelDefaultYPos_ ? BGPanelDefaultYPos_=boost::none : BGPanelDefaultYPos_.reset(boost::initialized_value);
	TableToCabDefaultYLen_ ? TableToCabDefaultYLen_=boost::none : TableToCabDefaultYLen_.reset(boost::initialized_value);
	DefaultBaseCabinetXLen_ ? DefaultBaseCabinetXLen_=boost::none : DefaultBaseCabinetXLen_.reset(boost::initialized_value);
	DefaultBaseCabinetYLen_ ? DefaultBaseCabinetYLen_=boost::none : DefaultBaseCabinetYLen_.reset(boost::initialized_value);
	DefaultBaseCabinetZLen_ ? DefaultBaseCabinetZLen_=boost::none : DefaultBaseCabinetZLen_.reset(boost::initialized_value);
	DefaultWallCabinetXLen_ ? DefaultWallCabinetXLen_=boost::none : DefaultWallCabinetXLen_.reset(boost::initialized_value);
	DefaultWallCabinetYLen_ ? DefaultWallCabinetYLen_=boost::none : DefaultWallCabinetYLen_.reset(boost::initialized_value);
	DefaultWallCabinetZLen_ ? DefaultWallCabinetZLen_=boost::none : DefaultWallCabinetZLen_.reset(boost::initialized_value);
	DefaultLCabinetXLen_ ? DefaultLCabinetXLen_=boost::none : DefaultLCabinetXLen_.reset(boost::initialized_value);
	DefaultLCabinetZLen_ ? DefaultLCabinetZLen_=boost::none : DefaultLCabinetZLen_.reset(boost::initialized_value);
	DefaultCabinetBoardThick_ ? DefaultCabinetBoardThick_=boost::none : DefaultCabinetBoardThick_.reset(boost::initialized_value);
	DefaultDoorBoardThick_ ? DefaultDoorBoardThick_=boost::none : DefaultDoorBoardThick_.reset(boost::initialized_value);
	DefaultThinBoardThick_ ? DefaultThinBoardThick_=boost::none : DefaultThinBoardThick_.reset(boost::initialized_value);
	DefaultDecorLineHeight_ ? DefaultDecorLineHeight_=boost::none : DefaultDecorLineHeight_.reset(boost::initialized_value);
	DefaultDrawerXLen_ ? DefaultDrawerXLen_=boost::none : DefaultDrawerXLen_.reset(boost::initialized_value);
	DefaultDrawerYLen_ ? DefaultDrawerYLen_=boost::none : DefaultDrawerYLen_.reset(boost::initialized_value);
	DefaultDrawerZLen_ ? DefaultDrawerZLen_=boost::none : DefaultDrawerZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_SysConfigInfoImp::SData::Check()
{
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !ConfigID_ )
	{
		ConfigID_.reset(boost::initialized_value);
	}
	if ( !TableFrontLen_ )
	{
		TableFrontLen_.reset(boost::initialized_value);
	}
	if ( !TableSideLen_ )
	{
		TableSideLen_.reset(boost::initialized_value);
	}
	if ( !BaseCabDefaultYPos_ )
	{
		BaseCabDefaultYPos_.reset(boost::initialized_value);
	}
	if ( !BaseCabSideLen_ )
	{
		BaseCabSideLen_.reset(boost::initialized_value);
	}
	if ( !WallCabDefaultYPos_ )
	{
		WallCabDefaultYPos_.reset(boost::initialized_value);
	}
	if ( !WallCabSideLen_ )
	{
		WallCabSideLen_.reset(boost::initialized_value);
	}
	if ( !ToekickFrontLen_ )
	{
		ToekickFrontLen_.reset(boost::initialized_value);
	}
	if ( !DefaultBarHeight_ )
	{
		DefaultBarHeight_.reset(boost::initialized_value);
	}
	if ( !DefaultSealExtraLen_ )
	{
		DefaultSealExtraLen_.reset(boost::initialized_value);
	}
	if ( !DefaultSealPreMillLen_ )
	{
		DefaultSealPreMillLen_.reset(boost::initialized_value);
	}
	if ( !ShelfDefaultYPos_ )
	{
		ShelfDefaultYPos_.reset(boost::initialized_value);
	}
	if ( !BGPanelDefaultYPos_ )
	{
		BGPanelDefaultYPos_.reset(boost::initialized_value);
	}
	if ( !TableToCabDefaultYLen_ )
	{
		TableToCabDefaultYLen_.reset(boost::initialized_value);
	}
	if ( !DefaultBaseCabinetXLen_ )
	{
		DefaultBaseCabinetXLen_.reset(boost::initialized_value);
	}
	if ( !DefaultBaseCabinetYLen_ )
	{
		DefaultBaseCabinetYLen_.reset(boost::initialized_value);
	}
	if ( !DefaultBaseCabinetZLen_ )
	{
		DefaultBaseCabinetZLen_.reset(boost::initialized_value);
	}
	if ( !DefaultWallCabinetXLen_ )
	{
		DefaultWallCabinetXLen_.reset(boost::initialized_value);
	}
	if ( !DefaultWallCabinetYLen_ )
	{
		DefaultWallCabinetYLen_.reset(boost::initialized_value);
	}
	if ( !DefaultWallCabinetZLen_ )
	{
		DefaultWallCabinetZLen_.reset(boost::initialized_value);
	}
	if ( !DefaultLCabinetXLen_ )
	{
		DefaultLCabinetXLen_.reset(boost::initialized_value);
	}
	if ( !DefaultLCabinetZLen_ )
	{
		DefaultLCabinetZLen_.reset(boost::initialized_value);
	}
	if ( !DefaultCabinetBoardThick_ )
	{
		DefaultCabinetBoardThick_.reset(boost::initialized_value);
	}
	if ( !DefaultDoorBoardThick_ )
	{
		DefaultDoorBoardThick_.reset(boost::initialized_value);
	}
	if ( !DefaultThinBoardThick_ )
	{
		DefaultThinBoardThick_.reset(boost::initialized_value);
	}
	if ( !DefaultDecorLineHeight_ )
	{
		DefaultDecorLineHeight_.reset(boost::initialized_value);
	}
	if ( !DefaultDrawerXLen_ )
	{
		DefaultDrawerXLen_.reset(boost::initialized_value);
	}
	if ( !DefaultDrawerYLen_ )
	{
		DefaultDrawerYLen_.reset(boost::initialized_value);
	}
	if ( !DefaultDrawerZLen_ )
	{
		DefaultDrawerZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_SysConfigInfoImp::SData::ToUtf8()
{
}

void	JK_SysConfigInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_SysConfigInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.ConfigID_ )
	{
		ret.With(ConfigID.Use(data.ConfigID_));
	}
	if ( data.TableFrontLen_ )
	{
		ret.With(TableFrontLen.Use(data.TableFrontLen_));
	}
	if ( data.TableSideLen_ )
	{
		ret.With(TableSideLen.Use(data.TableSideLen_));
	}
	if ( data.BaseCabDefaultYPos_ )
	{
		ret.With(BaseCabDefaultYPos.Use(data.BaseCabDefaultYPos_));
	}
	if ( data.BaseCabSideLen_ )
	{
		ret.With(BaseCabSideLen.Use(data.BaseCabSideLen_));
	}
	if ( data.WallCabDefaultYPos_ )
	{
		ret.With(WallCabDefaultYPos.Use(data.WallCabDefaultYPos_));
	}
	if ( data.WallCabSideLen_ )
	{
		ret.With(WallCabSideLen.Use(data.WallCabSideLen_));
	}
	if ( data.ToekickFrontLen_ )
	{
		ret.With(ToekickFrontLen.Use(data.ToekickFrontLen_));
	}
	if ( data.DefaultBarHeight_ )
	{
		ret.With(DefaultBarHeight.Use(data.DefaultBarHeight_));
	}
	if ( data.DefaultSealExtraLen_ )
	{
		ret.With(DefaultSealExtraLen.Use(data.DefaultSealExtraLen_));
	}
	if ( data.DefaultSealPreMillLen_ )
	{
		ret.With(DefaultSealPreMillLen.Use(data.DefaultSealPreMillLen_));
	}
	if ( data.ShelfDefaultYPos_ )
	{
		ret.With(ShelfDefaultYPos.Use(data.ShelfDefaultYPos_));
	}
	if ( data.BGPanelDefaultYPos_ )
	{
		ret.With(BGPanelDefaultYPos.Use(data.BGPanelDefaultYPos_));
	}
	if ( data.TableToCabDefaultYLen_ )
	{
		ret.With(TableToCabDefaultYLen.Use(data.TableToCabDefaultYLen_));
	}
	if ( data.DefaultBaseCabinetXLen_ )
	{
		ret.With(DefaultBaseCabinetXLen.Use(data.DefaultBaseCabinetXLen_));
	}
	if ( data.DefaultBaseCabinetYLen_ )
	{
		ret.With(DefaultBaseCabinetYLen.Use(data.DefaultBaseCabinetYLen_));
	}
	if ( data.DefaultBaseCabinetZLen_ )
	{
		ret.With(DefaultBaseCabinetZLen.Use(data.DefaultBaseCabinetZLen_));
	}
	if ( data.DefaultWallCabinetXLen_ )
	{
		ret.With(DefaultWallCabinetXLen.Use(data.DefaultWallCabinetXLen_));
	}
	if ( data.DefaultWallCabinetYLen_ )
	{
		ret.With(DefaultWallCabinetYLen.Use(data.DefaultWallCabinetYLen_));
	}
	if ( data.DefaultWallCabinetZLen_ )
	{
		ret.With(DefaultWallCabinetZLen.Use(data.DefaultWallCabinetZLen_));
	}
	if ( data.DefaultLCabinetXLen_ )
	{
		ret.With(DefaultLCabinetXLen.Use(data.DefaultLCabinetXLen_));
	}
	if ( data.DefaultLCabinetZLen_ )
	{
		ret.With(DefaultLCabinetZLen.Use(data.DefaultLCabinetZLen_));
	}
	if ( data.DefaultCabinetBoardThick_ )
	{
		ret.With(DefaultCabinetBoardThick.Use(data.DefaultCabinetBoardThick_));
	}
	if ( data.DefaultDoorBoardThick_ )
	{
		ret.With(DefaultDoorBoardThick.Use(data.DefaultDoorBoardThick_));
	}
	if ( data.DefaultThinBoardThick_ )
	{
		ret.With(DefaultThinBoardThick.Use(data.DefaultThinBoardThick_));
	}
	if ( data.DefaultDecorLineHeight_ )
	{
		ret.With(DefaultDecorLineHeight.Use(data.DefaultDecorLineHeight_));
	}
	if ( data.DefaultDrawerXLen_ )
	{
		ret.With(DefaultDrawerXLen.Use(data.DefaultDrawerXLen_));
	}
	if ( data.DefaultDrawerYLen_ )
	{
		ret.With(DefaultDrawerYLen.Use(data.DefaultDrawerYLen_));
	}
	if ( data.DefaultDrawerZLen_ )
	{
		ret.With(DefaultDrawerZLen.Use(data.DefaultDrawerZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_SysConfigInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.ConfigID_ )
	{
		ret.With(ConfigID.Into(data.ConfigID_));
	}
	if ( data.TableFrontLen_ )
	{
		ret.With(TableFrontLen.Into(data.TableFrontLen_));
	}
	if ( data.TableSideLen_ )
	{
		ret.With(TableSideLen.Into(data.TableSideLen_));
	}
	if ( data.BaseCabDefaultYPos_ )
	{
		ret.With(BaseCabDefaultYPos.Into(data.BaseCabDefaultYPos_));
	}
	if ( data.BaseCabSideLen_ )
	{
		ret.With(BaseCabSideLen.Into(data.BaseCabSideLen_));
	}
	if ( data.WallCabDefaultYPos_ )
	{
		ret.With(WallCabDefaultYPos.Into(data.WallCabDefaultYPos_));
	}
	if ( data.WallCabSideLen_ )
	{
		ret.With(WallCabSideLen.Into(data.WallCabSideLen_));
	}
	if ( data.ToekickFrontLen_ )
	{
		ret.With(ToekickFrontLen.Into(data.ToekickFrontLen_));
	}
	if ( data.DefaultBarHeight_ )
	{
		ret.With(DefaultBarHeight.Into(data.DefaultBarHeight_));
	}
	if ( data.DefaultSealExtraLen_ )
	{
		ret.With(DefaultSealExtraLen.Into(data.DefaultSealExtraLen_));
	}
	if ( data.DefaultSealPreMillLen_ )
	{
		ret.With(DefaultSealPreMillLen.Into(data.DefaultSealPreMillLen_));
	}
	if ( data.ShelfDefaultYPos_ )
	{
		ret.With(ShelfDefaultYPos.Into(data.ShelfDefaultYPos_));
	}
	if ( data.BGPanelDefaultYPos_ )
	{
		ret.With(BGPanelDefaultYPos.Into(data.BGPanelDefaultYPos_));
	}
	if ( data.TableToCabDefaultYLen_ )
	{
		ret.With(TableToCabDefaultYLen.Into(data.TableToCabDefaultYLen_));
	}
	if ( data.DefaultBaseCabinetXLen_ )
	{
		ret.With(DefaultBaseCabinetXLen.Into(data.DefaultBaseCabinetXLen_));
	}
	if ( data.DefaultBaseCabinetYLen_ )
	{
		ret.With(DefaultBaseCabinetYLen.Into(data.DefaultBaseCabinetYLen_));
	}
	if ( data.DefaultBaseCabinetZLen_ )
	{
		ret.With(DefaultBaseCabinetZLen.Into(data.DefaultBaseCabinetZLen_));
	}
	if ( data.DefaultWallCabinetXLen_ )
	{
		ret.With(DefaultWallCabinetXLen.Into(data.DefaultWallCabinetXLen_));
	}
	if ( data.DefaultWallCabinetYLen_ )
	{
		ret.With(DefaultWallCabinetYLen.Into(data.DefaultWallCabinetYLen_));
	}
	if ( data.DefaultWallCabinetZLen_ )
	{
		ret.With(DefaultWallCabinetZLen.Into(data.DefaultWallCabinetZLen_));
	}
	if ( data.DefaultLCabinetXLen_ )
	{
		ret.With(DefaultLCabinetXLen.Into(data.DefaultLCabinetXLen_));
	}
	if ( data.DefaultLCabinetZLen_ )
	{
		ret.With(DefaultLCabinetZLen.Into(data.DefaultLCabinetZLen_));
	}
	if ( data.DefaultCabinetBoardThick_ )
	{
		ret.With(DefaultCabinetBoardThick.Into(data.DefaultCabinetBoardThick_));
	}
	if ( data.DefaultDoorBoardThick_ )
	{
		ret.With(DefaultDoorBoardThick.Into(data.DefaultDoorBoardThick_));
	}
	if ( data.DefaultThinBoardThick_ )
	{
		ret.With(DefaultThinBoardThick.Into(data.DefaultThinBoardThick_));
	}
	if ( data.DefaultDecorLineHeight_ )
	{
		ret.With(DefaultDecorLineHeight.Into(data.DefaultDecorLineHeight_));
	}
	if ( data.DefaultDrawerXLen_ )
	{
		ret.With(DefaultDrawerXLen.Into(data.DefaultDrawerXLen_));
	}
	if ( data.DefaultDrawerYLen_ )
	{
		ret.With(DefaultDrawerYLen.Into(data.DefaultDrawerYLen_));
	}
	if ( data.DefaultDrawerZLen_ )
	{
		ret.With(DefaultDrawerZLen.Into(data.DefaultDrawerZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_SysConfigInfoImp	JK_SysConfigInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_SysConfigInfoImp(alias));
}

JK_SysConfigInfoImp::JK_SysConfigInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_SysConfigInfo"), alias)
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,ConfigID(ImpSPtr_,AUTODB_STR("ConfigID"))
	,TableFrontLen(ImpSPtr_,AUTODB_STR("TableFrontLen"))
	,TableSideLen(ImpSPtr_,AUTODB_STR("TableSideLen"))
	,BaseCabDefaultYPos(ImpSPtr_,AUTODB_STR("BaseCabDefaultYPos"))
	,BaseCabSideLen(ImpSPtr_,AUTODB_STR("BaseCabSideLen"))
	,WallCabDefaultYPos(ImpSPtr_,AUTODB_STR("WallCabDefaultYPos"))
	,WallCabSideLen(ImpSPtr_,AUTODB_STR("WallCabSideLen"))
	,ToekickFrontLen(ImpSPtr_,AUTODB_STR("ToekickFrontLen"))
	,DefaultBarHeight(ImpSPtr_,AUTODB_STR("DefaultBarHeight"))
	,DefaultSealExtraLen(ImpSPtr_,AUTODB_STR("DefaultSealExtraLen"))
	,DefaultSealPreMillLen(ImpSPtr_,AUTODB_STR("DefaultSealPreMillLen"))
	,ShelfDefaultYPos(ImpSPtr_,AUTODB_STR("ShelfDefaultYPos"))
	,BGPanelDefaultYPos(ImpSPtr_,AUTODB_STR("BGPanelDefaultYPos"))
	,TableToCabDefaultYLen(ImpSPtr_,AUTODB_STR("TableToCabDefaultYLen"))
	,DefaultBaseCabinetXLen(ImpSPtr_,AUTODB_STR("DefaultBaseCabinetXLen"))
	,DefaultBaseCabinetYLen(ImpSPtr_,AUTODB_STR("DefaultBaseCabinetYLen"))
	,DefaultBaseCabinetZLen(ImpSPtr_,AUTODB_STR("DefaultBaseCabinetZLen"))
	,DefaultWallCabinetXLen(ImpSPtr_,AUTODB_STR("DefaultWallCabinetXLen"))
	,DefaultWallCabinetYLen(ImpSPtr_,AUTODB_STR("DefaultWallCabinetYLen"))
	,DefaultWallCabinetZLen(ImpSPtr_,AUTODB_STR("DefaultWallCabinetZLen"))
	,DefaultLCabinetXLen(ImpSPtr_,AUTODB_STR("DefaultLCabinetXLen"))
	,DefaultLCabinetZLen(ImpSPtr_,AUTODB_STR("DefaultLCabinetZLen"))
	,DefaultCabinetBoardThick(ImpSPtr_,AUTODB_STR("DefaultCabinetBoardThick"))
	,DefaultDoorBoardThick(ImpSPtr_,AUTODB_STR("DefaultDoorBoardThick"))
	,DefaultThinBoardThick(ImpSPtr_,AUTODB_STR("DefaultThinBoardThick"))
	,DefaultDecorLineHeight(ImpSPtr_,AUTODB_STR("DefaultDecorLineHeight"))
	,DefaultDrawerXLen(ImpSPtr_,AUTODB_STR("DefaultDrawerXLen"))
	,DefaultDrawerYLen(ImpSPtr_,AUTODB_STR("DefaultDrawerYLen"))
	,DefaultDrawerZLen(ImpSPtr_,AUTODB_STR("DefaultDrawerZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_SysConfigInfoImp::JK_SysConfigInfoImp( const JK_SysConfigInfoImp& rhs ):Table(rhs)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,ConfigID(rhs.ConfigID)
	,TableFrontLen(rhs.TableFrontLen)
	,TableSideLen(rhs.TableSideLen)
	,BaseCabDefaultYPos(rhs.BaseCabDefaultYPos)
	,BaseCabSideLen(rhs.BaseCabSideLen)
	,WallCabDefaultYPos(rhs.WallCabDefaultYPos)
	,WallCabSideLen(rhs.WallCabSideLen)
	,ToekickFrontLen(rhs.ToekickFrontLen)
	,DefaultBarHeight(rhs.DefaultBarHeight)
	,DefaultSealExtraLen(rhs.DefaultSealExtraLen)
	,DefaultSealPreMillLen(rhs.DefaultSealPreMillLen)
	,ShelfDefaultYPos(rhs.ShelfDefaultYPos)
	,BGPanelDefaultYPos(rhs.BGPanelDefaultYPos)
	,TableToCabDefaultYLen(rhs.TableToCabDefaultYLen)
	,DefaultBaseCabinetXLen(rhs.DefaultBaseCabinetXLen)
	,DefaultBaseCabinetYLen(rhs.DefaultBaseCabinetYLen)
	,DefaultBaseCabinetZLen(rhs.DefaultBaseCabinetZLen)
	,DefaultWallCabinetXLen(rhs.DefaultWallCabinetXLen)
	,DefaultWallCabinetYLen(rhs.DefaultWallCabinetYLen)
	,DefaultWallCabinetZLen(rhs.DefaultWallCabinetZLen)
	,DefaultLCabinetXLen(rhs.DefaultLCabinetXLen)
	,DefaultLCabinetZLen(rhs.DefaultLCabinetZLen)
	,DefaultCabinetBoardThick(rhs.DefaultCabinetBoardThick)
	,DefaultDoorBoardThick(rhs.DefaultDoorBoardThick)
	,DefaultThinBoardThick(rhs.DefaultThinBoardThick)
	,DefaultDecorLineHeight(rhs.DefaultDecorLineHeight)
	,DefaultDrawerXLen(rhs.DefaultDrawerXLen)
	,DefaultDrawerYLen(rhs.DefaultDrawerYLen)
	,DefaultDrawerZLen(rhs.DefaultDrawerZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_SysConfigInfoImp::JK_SysConfigInfoImp( JK_SysConfigInfoImp&& rhs ):Table(rhs)
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,ConfigID(std::move(rhs.ConfigID))
	,TableFrontLen(std::move(rhs.TableFrontLen))
	,TableSideLen(std::move(rhs.TableSideLen))
	,BaseCabDefaultYPos(std::move(rhs.BaseCabDefaultYPos))
	,BaseCabSideLen(std::move(rhs.BaseCabSideLen))
	,WallCabDefaultYPos(std::move(rhs.WallCabDefaultYPos))
	,WallCabSideLen(std::move(rhs.WallCabSideLen))
	,ToekickFrontLen(std::move(rhs.ToekickFrontLen))
	,DefaultBarHeight(std::move(rhs.DefaultBarHeight))
	,DefaultSealExtraLen(std::move(rhs.DefaultSealExtraLen))
	,DefaultSealPreMillLen(std::move(rhs.DefaultSealPreMillLen))
	,ShelfDefaultYPos(std::move(rhs.ShelfDefaultYPos))
	,BGPanelDefaultYPos(std::move(rhs.BGPanelDefaultYPos))
	,TableToCabDefaultYLen(std::move(rhs.TableToCabDefaultYLen))
	,DefaultBaseCabinetXLen(std::move(rhs.DefaultBaseCabinetXLen))
	,DefaultBaseCabinetYLen(std::move(rhs.DefaultBaseCabinetYLen))
	,DefaultBaseCabinetZLen(std::move(rhs.DefaultBaseCabinetZLen))
	,DefaultWallCabinetXLen(std::move(rhs.DefaultWallCabinetXLen))
	,DefaultWallCabinetYLen(std::move(rhs.DefaultWallCabinetYLen))
	,DefaultWallCabinetZLen(std::move(rhs.DefaultWallCabinetZLen))
	,DefaultLCabinetXLen(std::move(rhs.DefaultLCabinetXLen))
	,DefaultLCabinetZLen(std::move(rhs.DefaultLCabinetZLen))
	,DefaultCabinetBoardThick(std::move(rhs.DefaultCabinetBoardThick))
	,DefaultDoorBoardThick(std::move(rhs.DefaultDoorBoardThick))
	,DefaultThinBoardThick(std::move(rhs.DefaultThinBoardThick))
	,DefaultDecorLineHeight(std::move(rhs.DefaultDecorLineHeight))
	,DefaultDrawerXLen(std::move(rhs.DefaultDrawerXLen))
	,DefaultDrawerYLen(std::move(rhs.DefaultDrawerYLen))
	,DefaultDrawerZLen(std::move(rhs.DefaultDrawerZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_SysConfigInfoImp	JK_SysConfigInfo("");



void	JK_SysRuleConfigInfoImp::SData::SetAll(bool val)
{
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? RuleConfigID_.reset(boost::initialized_value) : RuleConfigID_=boost::none;
	val ? RuleTypeID_.reset(boost::initialized_value) : RuleTypeID_=boost::none;
	val ? CabType_.reset(boost::initialized_value) : CabType_=boost::none;
	val ? MinXLen_.reset(boost::initialized_value) : MinXLen_=boost::none;
	val ? MinYLen_.reset(boost::initialized_value) : MinYLen_=boost::none;
	val ? MaxXLen_.reset(boost::initialized_value) : MaxXLen_=boost::none;
	val ? MaxYLen_.reset(boost::initialized_value) : MaxYLen_=boost::none;
	val ? UseCount_.reset(boost::initialized_value) : UseCount_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_SysRuleConfigInfoImp::SData::Flip()
{
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	RuleConfigID_ ? RuleConfigID_=boost::none : RuleConfigID_.reset(boost::initialized_value);
	RuleTypeID_ ? RuleTypeID_=boost::none : RuleTypeID_.reset(boost::initialized_value);
	CabType_ ? CabType_=boost::none : CabType_.reset(boost::initialized_value);
	MinXLen_ ? MinXLen_=boost::none : MinXLen_.reset(boost::initialized_value);
	MinYLen_ ? MinYLen_=boost::none : MinYLen_.reset(boost::initialized_value);
	MaxXLen_ ? MaxXLen_=boost::none : MaxXLen_.reset(boost::initialized_value);
	MaxYLen_ ? MaxYLen_=boost::none : MaxYLen_.reset(boost::initialized_value);
	UseCount_ ? UseCount_=boost::none : UseCount_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_SysRuleConfigInfoImp::SData::Check()
{
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !RuleConfigID_ )
	{
		RuleConfigID_.reset(boost::initialized_value);
	}
	if ( !RuleTypeID_ )
	{
		RuleTypeID_.reset(boost::initialized_value);
	}
	if ( !CabType_ )
	{
		CabType_.reset(boost::initialized_value);
	}
	if ( !MinXLen_ )
	{
		MinXLen_.reset(boost::initialized_value);
	}
	if ( !MinYLen_ )
	{
		MinYLen_.reset(boost::initialized_value);
	}
	if ( !MaxXLen_ )
	{
		MaxXLen_.reset(boost::initialized_value);
	}
	if ( !MaxYLen_ )
	{
		MaxYLen_.reset(boost::initialized_value);
	}
	if ( !UseCount_ )
	{
		UseCount_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_SysRuleConfigInfoImp::SData::ToUtf8()
{
}

void	JK_SysRuleConfigInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_SysRuleConfigInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.RuleConfigID_ )
	{
		ret.With(RuleConfigID.Use(data.RuleConfigID_));
	}
	if ( data.RuleTypeID_ )
	{
		ret.With(RuleTypeID.Use(data.RuleTypeID_));
	}
	if ( data.CabType_ )
	{
		ret.With(CabType.Use(data.CabType_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Use(data.MinXLen_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Use(data.MinYLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Use(data.MaxXLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Use(data.MaxYLen_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Use(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_SysRuleConfigInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.RuleConfigID_ )
	{
		ret.With(RuleConfigID.Into(data.RuleConfigID_));
	}
	if ( data.RuleTypeID_ )
	{
		ret.With(RuleTypeID.Into(data.RuleTypeID_));
	}
	if ( data.CabType_ )
	{
		ret.With(CabType.Into(data.CabType_));
	}
	if ( data.MinXLen_ )
	{
		ret.With(MinXLen.Into(data.MinXLen_));
	}
	if ( data.MinYLen_ )
	{
		ret.With(MinYLen.Into(data.MinYLen_));
	}
	if ( data.MaxXLen_ )
	{
		ret.With(MaxXLen.Into(data.MaxXLen_));
	}
	if ( data.MaxYLen_ )
	{
		ret.With(MaxYLen.Into(data.MaxYLen_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Into(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_SysRuleConfigInfoImp	JK_SysRuleConfigInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_SysRuleConfigInfoImp(alias));
}

JK_SysRuleConfigInfoImp::JK_SysRuleConfigInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_SysRuleConfigInfo"), alias)
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,RuleConfigID(ImpSPtr_,AUTODB_STR("RuleConfigID"))
	,RuleTypeID(ImpSPtr_,AUTODB_STR("RuleTypeID"))
	,CabType(ImpSPtr_,AUTODB_STR("CabType"))
	,MinXLen(ImpSPtr_,AUTODB_STR("MinXLen"))
	,MinYLen(ImpSPtr_,AUTODB_STR("MinYLen"))
	,MaxXLen(ImpSPtr_,AUTODB_STR("MaxXLen"))
	,MaxYLen(ImpSPtr_,AUTODB_STR("MaxYLen"))
	,UseCount(ImpSPtr_,AUTODB_STR("UseCount"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_SysRuleConfigInfoImp::JK_SysRuleConfigInfoImp( const JK_SysRuleConfigInfoImp& rhs ):Table(rhs)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,IsDel(rhs.IsDel)
	,RuleConfigID(rhs.RuleConfigID)
	,RuleTypeID(rhs.RuleTypeID)
	,CabType(rhs.CabType)
	,MinXLen(rhs.MinXLen)
	,MinYLen(rhs.MinYLen)
	,MaxXLen(rhs.MaxXLen)
	,MaxYLen(rhs.MaxYLen)
	,UseCount(rhs.UseCount)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_SysRuleConfigInfoImp::JK_SysRuleConfigInfoImp( JK_SysRuleConfigInfoImp&& rhs ):Table(rhs)
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,IsDel(std::move(rhs.IsDel))
	,RuleConfigID(std::move(rhs.RuleConfigID))
	,RuleTypeID(std::move(rhs.RuleTypeID))
	,CabType(std::move(rhs.CabType))
	,MinXLen(std::move(rhs.MinXLen))
	,MinYLen(std::move(rhs.MinYLen))
	,MaxXLen(std::move(rhs.MaxXLen))
	,MaxYLen(std::move(rhs.MaxYLen))
	,UseCount(std::move(rhs.UseCount))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_SysRuleConfigInfoImp	JK_SysRuleConfigInfo("");



void	JK_SysRuleTypeInfoImp::SData::SetAll(bool val)
{
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? RuleTypeID_.reset(boost::initialized_value) : RuleTypeID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? RuleTypeName_.reset(boost::initialized_value) : RuleTypeName_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? RType_.reset(boost::initialized_value) : RType_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_SysRuleTypeInfoImp::SData::Flip()
{
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	RuleTypeID_ ? RuleTypeID_=boost::none : RuleTypeID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	RuleTypeName_ ? RuleTypeName_=boost::none : RuleTypeName_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	RType_ ? RType_=boost::none : RType_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_SysRuleTypeInfoImp::SData::Check()
{
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !RuleTypeID_ )
	{
		RuleTypeID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !RuleTypeName_ )
	{
		RuleTypeName_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !RType_ )
	{
		RType_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_SysRuleTypeInfoImp::SData::ToUtf8()
{
	if ( RuleTypeName_ )
	{
		RuleTypeName_ = boost::locale::conv::to_utf<char>(*RuleTypeName_, "GBK");
	}
}

void	JK_SysRuleTypeInfoImp::SData::ToAscii()
{
	if ( RuleTypeName_ )
	{
		RuleTypeName_ = boost::locale::conv::from_utf(*RuleTypeName_, "GBK");
	}
}

autoDB::SColumns JK_SysRuleTypeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.RuleTypeID_ )
	{
		ret.With(RuleTypeID.Use(data.RuleTypeID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.RuleTypeName_ )
	{
		ret.With(RuleTypeName.Use(data.RuleTypeName_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.RType_ )
	{
		ret.With(RType.Use(data.RType_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_SysRuleTypeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.RuleTypeID_ )
	{
		ret.With(RuleTypeID.Into(data.RuleTypeID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.RuleTypeName_ )
	{
		ret.With(RuleTypeName.Into(data.RuleTypeName_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.RType_ )
	{
		ret.With(RType.Into(data.RType_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_SysRuleTypeInfoImp	JK_SysRuleTypeInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_SysRuleTypeInfoImp(alias));
}

JK_SysRuleTypeInfoImp::JK_SysRuleTypeInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_SysRuleTypeInfo"), alias)
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,RuleTypeID(ImpSPtr_,AUTODB_STR("RuleTypeID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,RuleTypeName(ImpSPtr_,AUTODB_STR("RuleTypeName"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,RType(ImpSPtr_,AUTODB_STR("RType"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_SysRuleTypeInfoImp::JK_SysRuleTypeInfoImp( const JK_SysRuleTypeInfoImp& rhs ):Table(rhs)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,RuleTypeID(rhs.RuleTypeID)
	,IsDel(rhs.IsDel)
	,RuleTypeName(rhs.RuleTypeName)
	,IsDefault(rhs.IsDefault)
	,RType(rhs.RType)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_SysRuleTypeInfoImp::JK_SysRuleTypeInfoImp( JK_SysRuleTypeInfoImp&& rhs ):Table(rhs)
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,RuleTypeID(std::move(rhs.RuleTypeID))
	,IsDel(std::move(rhs.IsDel))
	,RuleTypeName(std::move(rhs.RuleTypeName))
	,IsDefault(std::move(rhs.IsDefault))
	,RType(std::move(rhs.RType))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_SysRuleTypeInfoImp	JK_SysRuleTypeInfo("");



void	JK_TableTopSideInfoImp::SData::SetAll(bool val)
{
	val ? TableTopSideID_.reset(boost::initialized_value) : TableTopSideID_=boost::none;
	val ? TableTopID_.reset(boost::initialized_value) : TableTopID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? ShowID_.reset(boost::initialized_value) : ShowID_=boost::none;
	val ? SideWidth_.reset(boost::initialized_value) : SideWidth_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? IsDefault_.reset(boost::initialized_value) : IsDefault_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	JK_TableTopSideInfoImp::SData::Flip()
{
	TableTopSideID_ ? TableTopSideID_=boost::none : TableTopSideID_.reset(boost::initialized_value);
	TableTopID_ ? TableTopID_=boost::none : TableTopID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	ShowID_ ? ShowID_=boost::none : ShowID_.reset(boost::initialized_value);
	SideWidth_ ? SideWidth_=boost::none : SideWidth_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	IsDefault_ ? IsDefault_=boost::none : IsDefault_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	JK_TableTopSideInfoImp::SData::Check()
{
	if ( !TableTopSideID_ )
	{
		TableTopSideID_.reset(boost::initialized_value);
	}
	if ( !TableTopID_ )
	{
		TableTopID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !ShowID_ )
	{
		ShowID_.reset(boost::initialized_value);
	}
	if ( !SideWidth_ )
	{
		SideWidth_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !IsDefault_ )
	{
		IsDefault_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	JK_TableTopSideInfoImp::SData::ToUtf8()
{
}

void	JK_TableTopSideInfoImp::SData::ToAscii()
{
}

autoDB::SColumns JK_TableTopSideInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.TableTopSideID_ )
	{
		ret.With(TableTopSideID.Use(data.TableTopSideID_));
	}
	if ( data.TableTopID_ )
	{
		ret.With(TableTopID.Use(data.TableTopID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Use(data.ShowID_));
	}
	if ( data.SideWidth_ )
	{
		ret.With(SideWidth.Use(data.SideWidth_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Use(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns JK_TableTopSideInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.TableTopSideID_ )
	{
		ret.With(TableTopSideID.Into(data.TableTopSideID_));
	}
	if ( data.TableTopID_ )
	{
		ret.With(TableTopID.Into(data.TableTopID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.ShowID_ )
	{
		ret.With(ShowID.Into(data.ShowID_));
	}
	if ( data.SideWidth_ )
	{
		ret.With(SideWidth.Into(data.SideWidth_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.IsDefault_ )
	{
		ret.With(IsDefault.Into(data.IsDefault_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


JK_TableTopSideInfoImp	JK_TableTopSideInfoImp::operator() (const StringType& alias)
{
	return std::move(JK_TableTopSideInfoImp(alias));
}

JK_TableTopSideInfoImp::JK_TableTopSideInfoImp( const StringType& alias ):Table(AUTODB_STR("JK_TableTopSideInfo"), alias)
	,TableTopSideID(ImpSPtr_,AUTODB_STR("TableTopSideID"))
	,TableTopID(ImpSPtr_,AUTODB_STR("TableTopID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,ShowID(ImpSPtr_,AUTODB_STR("ShowID"))
	,SideWidth(ImpSPtr_,AUTODB_STR("SideWidth"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,IsDefault(ImpSPtr_,AUTODB_STR("IsDefault"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

JK_TableTopSideInfoImp::JK_TableTopSideInfoImp( const JK_TableTopSideInfoImp& rhs ):Table(rhs)
	,TableTopSideID(rhs.TableTopSideID)
	,TableTopID(rhs.TableTopID)
	,IsDel(rhs.IsDel)
	,ModelID(rhs.ModelID)
	,ShowID(rhs.ShowID)
	,SideWidth(rhs.SideWidth)
	,MaterialID(rhs.MaterialID)
	,IsDefault(rhs.IsDefault)
	,VerCode(rhs.VerCode)
	,FactoryID(rhs.FactoryID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

JK_TableTopSideInfoImp::JK_TableTopSideInfoImp( JK_TableTopSideInfoImp&& rhs ):Table(rhs)
	,TableTopSideID(std::move(rhs.TableTopSideID))
	,TableTopID(std::move(rhs.TableTopID))
	,IsDel(std::move(rhs.IsDel))
	,ModelID(std::move(rhs.ModelID))
	,ShowID(std::move(rhs.ShowID))
	,SideWidth(std::move(rhs.SideWidth))
	,MaterialID(std::move(rhs.MaterialID))
	,IsDefault(std::move(rhs.IsDefault))
	,VerCode(std::move(rhs.VerCode))
	,FactoryID(std::move(rhs.FactoryID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

JK_TableTopSideInfoImp	JK_TableTopSideInfo("");



}
