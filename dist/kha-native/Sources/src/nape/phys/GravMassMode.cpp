#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void GravMassMode_obj::__construct()
{
HX_STACK_FRAME("nape.phys.GravMassMode","new",0xf67ed11f,"nape.phys.GravMassMode.new","nape/phys/GravMassMode.hx",181,0xc89986d1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate GravMassMode","\xdc","\x1b","\x7a","\x20");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//GravMassMode_obj::~GravMassMode_obj() { }

Dynamic GravMassMode_obj::__CreateEmpty() { return  new GravMassMode_obj; }
hx::ObjectPtr< GravMassMode_obj > GravMassMode_obj::__new()
{  hx::ObjectPtr< GravMassMode_obj > _result_ = new GravMassMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic GravMassMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GravMassMode_obj > _result_ = new GravMassMode_obj();
	_result_->__construct();
	return _result_;}

::String GravMassMode_obj::toString( ){
	HX_STACK_FRAME("nape.phys.GravMassMode","toString",0x648dbb8d,"nape.phys.GravMassMode.toString","nape/phys/GravMassMode.hx",192,0xc89986d1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::phys::GravMassMode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::phys::GravMassMode tmp1 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::phys::GravMassMode tmp3 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
	}
	HX_STACK_LINE(192)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b");
	}
	else{
		HX_STACK_LINE(193)
		::nape::phys::GravMassMode tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::phys::GravMassMode tmp3 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::phys::GravMassMode tmp5 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
		}
		HX_STACK_LINE(193)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return HX_HCSTRING("FIXED","\x54","\x31","\x90","\x7e");
		}
		else{
			HX_STACK_LINE(194)
			::nape::phys::GravMassMode tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::nape::phys::GravMassMode tmp5 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				if ((tmp6)){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::phys::GravMassMode tmp7 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = tmp7;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
			}
			HX_STACK_LINE(194)
			bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			if ((tmp5)){
				HX_STACK_LINE(194)
				return HX_HCSTRING("SCALED","\x9a","\x96","\xa8","\xee");
			}
			else{
				HX_STACK_LINE(195)
				return HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,toString,return )

::nape::phys::GravMassMode GravMassMode_obj::get_DEFAULT( ){
	HX_STACK_FRAME("nape.phys.GravMassMode","get_DEFAULT",0x9cda6477,"nape.phys.GravMassMode.get_DEFAULT","nape/phys/GravMassMode.hx",204,0xc89986d1)
	HX_STACK_LINE(205)
	::nape::phys::GravMassMode tmp = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	if ((tmp1)){
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(207)
		::nape::phys::GravMassMode tmp2 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = tmp2;
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(210)
	::nape::phys::GravMassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_DEFAULT,return )

::nape::phys::GravMassMode GravMassMode_obj::get_FIXED( ){
	HX_STACK_FRAME("nape.phys.GravMassMode","get_FIXED",0x312827aa,"nape.phys.GravMassMode.get_FIXED","nape/phys/GravMassMode.hx",219,0xc89986d1)
	HX_STACK_LINE(220)
	::nape::phys::GravMassMode tmp = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	if ((tmp1)){
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(222)
		::nape::phys::GravMassMode tmp2 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = tmp2;
		HX_STACK_LINE(223)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(225)
	::nape::phys::GravMassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_FIXED,return )

::nape::phys::GravMassMode GravMassMode_obj::get_SCALED( ){
	HX_STACK_FRAME("nape.phys.GravMassMode","get_SCALED",0x81082b84,"nape.phys.GravMassMode.get_SCALED","nape/phys/GravMassMode.hx",235,0xc89986d1)
	HX_STACK_LINE(236)
	::nape::phys::GravMassMode tmp = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	if ((tmp1)){
		HX_STACK_LINE(237)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(238)
		::nape::phys::GravMassMode tmp2 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = tmp2;
		HX_STACK_LINE(239)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(241)
	::nape::phys::GravMassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_SCALED,return )


GravMassMode_obj::GravMassMode_obj()
{
}

Dynamic GravMassMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool GravMassMode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FIXED") ) { if (inCallProp == hx::paccAlways) { outValue = get_FIXED(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SCALED") ) { if (inCallProp == hx::paccAlways) { outValue = get_SCALED(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { if (inCallProp == hx::paccAlways) { outValue = get_DEFAULT(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_FIXED") ) { outValue = get_FIXED_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_SCALED") ) { outValue = get_SCALED_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DEFAULT") ) { outValue = get_DEFAULT_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GravMassMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GravMassMode_obj::__mClass,"__mClass");
};

#endif

hx::Class GravMassMode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_DEFAULT","\xb8","\x0c","\x92","\xa1"),
	HX_HCSTRING("get_FIXED","\xab","\x8d","\x39","\xc2"),
	HX_HCSTRING("get_SCALED","\x63","\x06","\x30","\xdf"),
	::String(null()) };

void GravMassMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.phys.GravMassMode","\xad","\x55","\x22","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GravMassMode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GravMassMode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace phys
