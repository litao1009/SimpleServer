#include "ProcessorCommon.h"
#include "transMsg/DownloadInfo.pb.h"
#include "Encrypt.h"
#include "Utils/Type/ErrCodeType.h"
#include "DataBase/msg-GLUtils.h"

#include <sstream>


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QDownloadInfo);


CMsgCallBack<transMsg::QDownloadInfo>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QDownloadInfo>::_Process( transMsg::QDownloadInfo& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::ADownloadInfo>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	if ( msg.gl_areainfo() )
	{			
		std::vector<int32_t> areaIDs;
		GL_AreaInfo_Data areaRes;

		{
			areaRes.SetAll(true);
			SociAdaptor ada(Statement()
				.Select(GL_AreaInfo.Into(areaRes))
				.From(GL_AreaInfo)
				.Where(GL_AreaInfo.DeptID==*userInfo.UserInfo_.FactoryID_), sql);
			
			ada.Excute(false);

			while ( ada.Fetch() )
			{
				areaIDs.push_back(*areaRes.AreaID_);
				ToUTF8(areaRes);
				retMsg->mutable_gl_table()->add_gl_areainfo()->Swap(&ToMessage(areaRes));
			}
		}

		if ( msg.gl_areageomapinfo() )
		{
			int32_t val = 0;
			GL_AreaGeoMapInfo_Data agm;
			agm.SetAll(true);

			SociAdaptor ada(Statement()
				.Select(GL_AreaGeoMapInfo.Into(agm))
				.From(GL_AreaGeoMapInfo)
				.Where(GL_AreaGeoMapInfo.AreaID==Use(val)), sql);

			for ( auto& theAreaID : areaIDs )
			{
				val = theAreaID;
				if ( !ada.Excute() )
				{
					continue;
				}
					
				ToUTF8(agm);
				retMsg->mutable_gl_table()->add_gl_areageomapinfo()->Swap(&ToMessage(agm));
			}
		}
	}

	if ( msg.gl_deptinfo() )
	{
		auto curDeptID = userInfo.UserInfo_.DeptID_;
		GL_DeptInfo_Data curInfo;
		curInfo.SetAll(true);

		{
			SociAdaptor ada(Statement()
				.Select(GL_DeptInfo.Into(curInfo))
				.From(GL_DeptInfo)
				.Where(GL_DeptInfo.DeptID==Use(*curDeptID)), sql);

			if ( ada.Excute() )
			{
				curDeptID = curInfo.ParentID_;
				ToUTF8(curInfo);
				retMsg->mutable_gl_table()->add_gl_deptinfo()->Swap(&ToMessage(curInfo));

				while ( 0 != curDeptID )
				{
					if ( ada.Excute() )
					{
						curDeptID = curInfo.ParentID_;
						ToUTF8(curInfo);
						retMsg->mutable_gl_table()->add_gl_deptinfo()->Swap(&ToMessage(curInfo));
					}
					else
					{
						break;
					}
				}
			}
		}

		curDeptID = userInfo.UserInfo_.DeptID_;
		curInfo.SetAll(true);

		std::vector<GL_DeptInfo_Data>	subData;
		{
			{
				SociAdaptor ada(Statement().Select(GL_DeptInfo.Into(curInfo)).From(GL_DeptInfo).Where(GL_DeptInfo.ParentID==*curDeptID), sql);
				
				ada.Excute(false);
				while ( ada.Fetch() )
				{
					subData.push_back(curInfo);
				}
			}

			while ( !subData.empty() )
			{
				auto curSub = subData.back();
				subData.pop_back();

				ToUTF8(curSub);
				retMsg->mutable_gl_table()->add_gl_deptinfo()->Swap(&ToMessage(curSub));

				SociAdaptor ada(Statement().Select(GL_DeptInfo.Into(curInfo)).From(GL_DeptInfo).Where(GL_DeptInfo.ParentID==*curSub.DeptID_), sql);
				
				ada.Excute(false);
				while ( ada.Fetch() )
				{
					subData.push_back(curInfo);
				}
			}			
		}
	}

	if ( msg.gl_designerconfiginfo() )
	{
		GL_DesignerConfigInfo_Data dcRes;
		dcRes.SetAll(true);

		SociAdaptor ada(Statement()
			.Select(GL_DesignerConfigInfo.Into(dcRes))
			.From(GL_DesignerConfigInfo)
			.Where(GL_DesignerConfigInfo.UserID==*userInfo.UserInfo_.UserID_), sql);
		
		ada.Excute(false);

		while ( ada.Fetch() )
		{
			dcRes.ToUtf8();
			retMsg->mutable_gl_table()->add_gl_designerconfiginfo()->Swap(&ToMessage(dcRes));
		}
	}

	if ( msg.gl_geocodeinfo() )
	{
		GL_GeoCodeInfo_Data gcRes;
		gcRes.SetAll(true);

		SociAdaptor ada(Statement()
			.Select(GL_GeoCodeInfo.Into(gcRes))
			.From(GL_GeoCodeInfo), sql);

		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(gcRes);
			retMsg->mutable_gl_table()->add_gl_geocodeinfo()->Swap(&ToMessage(gcRes));
		}
	}

	if ( msg.gl_gtypeinfo() )
	{
		GL_GTypeInfo_Data gtRes;
		gtRes.SetAll(true);

		SociAdaptor ada(Statement()
			.Select(GL_GTypeInfo.Into(gtRes))
			.From(GL_GTypeInfo), sql);

		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(gtRes);
			retMsg->mutable_gl_table()->add_gl_gtypeinfo()->Swap(&ToMessage(gtRes));
		}
	}

	if ( msg.gl_majorcateinfo() )
	{
		{
			GL_MajorCateInfo_Data res;
			res.SetAll(true);

			SociAdaptor ada(Statement()
				.Select(GL_MajorCateInfo.Into(res))
				.From(GL_MajorCateInfo), sql);

			ada.Excute(false);

			while ( ada.Fetch() )
			{
				ToUTF8(res);
				retMsg->mutable_gl_table()->add_gl_majorcateinfo()->Swap(&ToMessage(res));
			}
		}
		{
			GL_MinorCateInfo_Data res;
			res.SetAll(true);

			SociAdaptor ada(Statement()
				.Select(GL_MinorCateInfo.Into(res))
				.From(GL_MinorCateInfo), sql);

			ada.Excute(false);

			while ( ada.Fetch() )
			{
				ToUTF8(res);
				retMsg->mutable_gl_table()->add_gl_minorcateinfo()->Swap(&ToMessage(res));
			}
		}
		{
			GL_MinorGTypeMapInfo_Data res;
			res.SetAll(true);

			SociAdaptor ada(Statement()
				.Select(GL_MinorGTypeMapInfo.Into(res))
				.From(GL_MinorGTypeMapInfo), sql);

			ada.Excute(false);

			while ( ada.Fetch() )
			{
				ToUTF8(res);
				retMsg->mutable_gl_table()->add_gl_minorgtypemapinfo()->Swap(&ToMessage(res));
			}
		}
	}

	if ( msg.gl_unitinfo() )
	{
		GL_UnitInfo_Data res;
		res.SetAll(true);

		SociAdaptor ada(Statement()
			.Select(GL_UnitInfo.Into(res))
			.From(GL_UnitInfo), sql);

		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(res);
			retMsg->mutable_gl_table()->add_gl_unitinfo()->Swap(&ToMessage(res));
		}
	}

	if ( msg.gl_userinfo() )
	{
		GL_UserInfo_Data curInfo;
		curInfo.SetAll(true);

		Statement st;
		st.Select(GL_UserInfo.Into(curInfo)).From(GL_UserInfo);

		if ( 0 == userInfo.UserInfo_.ShopID_ )
		{
			st.Where(GL_UserInfo.FactoryID==*userInfo.UserInfo_.FactoryID_);
		}
		else
		{
			st.Where(GL_UserInfo.ShopID==*userInfo.UserInfo_.ShopID_);
		}

		SociAdaptor ada(st, sql);
		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(curInfo);
			retMsg->mutable_gl_table()->add_gl_userinfo()->Swap(&ToMessage(curInfo));
		}
	}

	if ( msg.gl_rolerightinfo() && userInfo.UserInfo_.ShopID_ )
	{
		GL_RoleRightInfo_Data res;
		res.SetAll(true);

		Statement st;
		st.Select(GL_RoleRightInfo.Into(res))
			.From(GL_RoleRightInfo).
				InnerJoin(GL_UserInfo).On(GL_UserInfo.RoleID==GL_RoleRightInfo.RoleID &&
										GL_UserInfo.FactoryID==*userInfo.UserInfo_.FactoryID_ &&
										GL_UserInfo.ShopID==*userInfo.UserInfo_.ShopID_)
			.Where(GL_RoleRightInfo.RightType==userInfo.DC_.ClientType_)
			.GroupBy(GL_RoleRightInfo.RoleID|GL_RoleRightInfo.RightID|GL_RoleRightInfo.RightType);

		SociAdaptor ada(st, sql);
		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(res);
			retMsg->mutable_gl_table()->add_gl_rolerightinfo()->Swap(&ToMessage(res));
		}
	}

	if ( msg.gl_printtemplateinfo() )
	{
		GL_PrintTemplateInfo_Data res;
		res.SetAll(true);
		res.RelativePath_ = boost::none;

		SociAdaptor ada(Statement()
			.Select(GL_PrintTemplateInfo.Into(res))
			.From(GL_PrintTemplateInfo)
			.Where(GL_PrintTemplateInfo.FactoryID==*userInfo.UserInfo_.FactoryID_), sql);

		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(res);
			retMsg->mutable_gl_table()->add_gl_printtemplateinfo()->Swap(&ToMessage(res));
		}
	}

	if ( msg.gl_appleseedinfo() )
	{
		GL_AppleseedInfo_Data res;
		res.SetAll(true);

		SociAdaptor ada(Statement()
			.Select(GL_AppleseedInfo.Into(res)
			).From(GL_AppleseedInfo), sql);

		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(res);
			retMsg->mutable_gl_table()->add_gl_appleseedinfo()->Swap(&ToMessage(res));
		}
	}

	retMsg->set_stats(transMsg::ERS_SUCCESS);
	retInfo.Encode_.AESKey_ = FastEncrypt::AES_GenerateKey();
	retInfo.Encode_.Compress_ = true;
}