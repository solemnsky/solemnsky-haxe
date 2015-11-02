#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void MassMode_obj::__construct()
{
HX_STACK_FRAME("nape.phys.MassMode","new",0x1df9921f,"nape.phys.MassMode.new","nape/phys/MassMode.hx",181,0x8a4995d1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate MassMode","\x5c","\xd9","\x57","\xc8");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//MassMode_obj::~MassMode_obj() { }

Dynamic MassMode_obj::__CreateEmpty() { return  new MassMode_obj; }
hx::ObjectPtr< MassMode_obj > MassMode_obj::__new()
{  hx::ObjectPtr< MassMode_obj > _result_ = new MassMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic MassMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MassMode_obj > _result_ = new MassMode_obj();
	_result_->__construct();
	return _result_;}

::String MassMode_obj::toString( ){
	HX_STACK_FRAME("nape.phys.MassMode","toString",0xc3775a8d,"nape.phys.MassMode.toString","nape/phys/MassMode.hx",192,0x8a4995d1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::phys::MassMode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::phys::MassMode tmp1 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::phys::MassMode tmp3 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
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
		::nape::phys::MassMode tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::phys::MassMode tmp3 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::phys::MassMode tmp5 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
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
			return HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MassMode_obj,toString,return )

::nape::phys::MassMode MassMode_obj::get_DEFAULT( ){
	HX_STACK_FRAME("nape.phys.MassMode","get_DEFAULT",0xce7e2577,"nape.phys.MassMode.get_DEFAULT","nape/phys/MassMode.hx",203,0x8a4995d1)
	HX_STACK_LINE(204)
	::nape::phys::MassMode tmp = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::phys::MassMode tmp2 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = tmp2;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	::nape::phys::MassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MassMode_obj,get_DEFAULT,return )

::nape::phys::MassMode MassMode_obj::get_FIXED( ){
	HX_STACK_FRAME("nape.phys.MassMode","get_FIXED",0xdea9a8aa,"nape.phys.MassMode.get_FIXED","nape/phys/MassMode.hx",218,0x8a4995d1)
	HX_STACK_LINE(219)
	::nape::phys::MassMode tmp = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	if ((tmp1)){
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(221)
		::nape::phys::MassMode tmp2 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = tmp2;
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(224)
	::nape::phys::MassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MassMode_obj,get_FIXED,return )


MassMode_obj::MassMode_obj()
{
}

Dynamic MassMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MassMode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FIXED") ) { if (inCallProp == hx::paccAlways) { outValue = get_FIXED(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { if (inCallProp == hx::paccAlways) { outValue = get_DEFAULT(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_FIXED") ) { outValue = get_FIXED_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(MassMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MassMode_obj::__mClass,"__mClass");
};

#endif

hx::Class MassMode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_DEFAULT","\xb8","\x0c","\x92","\xa1"),
	HX_HCSTRING("get_FIXED","\xab","\x8d","\x39","\xc2"),
	::String(null()) };

void MassMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.phys.MassMode","\xad","\x96","\xe8","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MassMode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MassMode_obj >;
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
