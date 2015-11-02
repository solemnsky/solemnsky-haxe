#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void BodyType_obj::__construct()
{
HX_STACK_FRAME("nape.phys.BodyType","new",0x00b540a4,"nape.phys.BodyType.new","nape/phys/BodyType.hx",181,0x8b4ddeec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate BodyType","\x61","\xa1","\x0e","\x13");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//BodyType_obj::~BodyType_obj() { }

Dynamic BodyType_obj::__CreateEmpty() { return  new BodyType_obj; }
hx::ObjectPtr< BodyType_obj > BodyType_obj::__new()
{  hx::ObjectPtr< BodyType_obj > _result_ = new BodyType_obj();
	_result_->__construct();
	return _result_;}

Dynamic BodyType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyType_obj > _result_ = new BodyType_obj();
	_result_->__construct();
	return _result_;}

::String BodyType_obj::toString( ){
	HX_STACK_FRAME("nape.phys.BodyType","toString",0x611be9e8,"nape.phys.BodyType.toString","nape/phys/BodyType.hx",192,0x8b4ddeec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::phys::BodyType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::phys::BodyType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::phys::BodyType tmp3 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
	}
	HX_STACK_LINE(192)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8");
	}
	else{
		HX_STACK_LINE(193)
		::nape::phys::BodyType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::phys::BodyType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::phys::BodyType tmp5 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		HX_STACK_LINE(193)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5");
		}
		else{
			HX_STACK_LINE(194)
			::nape::phys::BodyType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::nape::phys::BodyType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				if ((tmp6)){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::phys::BodyType tmp7 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp7;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
			}
			HX_STACK_LINE(194)
			bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			if ((tmp5)){
				HX_STACK_LINE(194)
				return HX_HCSTRING("KINEMATIC","\xe5","\xe8","\x57","\xdf");
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


HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,toString,return )

::nape::phys::BodyType BodyType_obj::get_STATIC( ){
	HX_STACK_FRAME("nape.phys.BodyType","get_STATIC",0x2a18d8b3,"nape.phys.BodyType.get_STATIC","nape/phys/BodyType.hx",203,0x8b4ddeec)
	HX_STACK_LINE(204)
	::nape::phys::BodyType tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::phys::BodyType tmp2 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp2;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	::nape::phys::BodyType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_STATIC,return )

::nape::phys::BodyType BodyType_obj::get_DYNAMIC( ){
	HX_STACK_FRAME("nape.phys.BodyType","get_DYNAMIC",0xab5527ba,"nape.phys.BodyType.get_DYNAMIC","nape/phys/BodyType.hx",217,0x8b4ddeec)
	HX_STACK_LINE(218)
	::nape::phys::BodyType tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	if ((tmp1)){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::phys::BodyType tmp2 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp2;
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(223)
	::nape::phys::BodyType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_DYNAMIC,return )

::nape::phys::BodyType BodyType_obj::get_KINEMATIC( ){
	HX_STACK_FRAME("nape.phys.BodyType","get_KINEMATIC",0xce5daa00,"nape.phys.BodyType.get_KINEMATIC","nape/phys/BodyType.hx",232,0x8b4ddeec)
	HX_STACK_LINE(233)
	::nape::phys::BodyType tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	if ((tmp1)){
		HX_STACK_LINE(234)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(235)
		::nape::phys::BodyType tmp2 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp2;
		HX_STACK_LINE(236)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(238)
	::nape::phys::BodyType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_KINEMATIC,return )


BodyType_obj::BodyType_obj()
{
}

Dynamic BodyType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BodyType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"STATIC") ) { if (inCallProp == hx::paccAlways) { outValue = get_STATIC(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DYNAMIC") ) { if (inCallProp == hx::paccAlways) { outValue = get_DYNAMIC(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"KINEMATIC") ) { if (inCallProp == hx::paccAlways) { outValue = get_KINEMATIC(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_STATIC") ) { outValue = get_STATIC_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DYNAMIC") ) { outValue = get_DYNAMIC_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_KINEMATIC") ) { outValue = get_KINEMATIC_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(BodyType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyType_obj::__mClass,"__mClass");
};

#endif

hx::Class BodyType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_STATIC","\x77","\xf8","\x05","\xa9"),
	HX_HCSTRING("get_DYNAMIC","\x76","\xd3","\xe3","\x3b"),
	HX_HCSTRING("get_KINEMATIC","\xbc","\xbc","\xbb","\xa0"),
	::String(null()) };

void BodyType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.phys.BodyType","\xb2","\x5e","\x9f","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BodyType_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BodyType_obj >;
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
