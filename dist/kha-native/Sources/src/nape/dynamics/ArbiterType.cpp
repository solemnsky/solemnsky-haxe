#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void ArbiterType_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.ArbiterType","new",0x498d4181,"nape.dynamics.ArbiterType.new","nape/dynamics/ArbiterType.hx",181,0xeb73a8ef)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate ArbiterType","\x7e","\x15","\x99","\x4b");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//ArbiterType_obj::~ArbiterType_obj() { }

Dynamic ArbiterType_obj::__CreateEmpty() { return  new ArbiterType_obj; }
hx::ObjectPtr< ArbiterType_obj > ArbiterType_obj::__new()
{  hx::ObjectPtr< ArbiterType_obj > _result_ = new ArbiterType_obj();
	_result_->__construct();
	return _result_;}

Dynamic ArbiterType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArbiterType_obj > _result_ = new ArbiterType_obj();
	_result_->__construct();
	return _result_;}

::String ArbiterType_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterType","toString",0x6622a7eb,"nape.dynamics.ArbiterType.toString","nape/dynamics/ArbiterType.hx",192,0xeb73a8ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::dynamics::ArbiterType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::dynamics::ArbiterType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::dynamics::ArbiterType tmp3 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;
	}
	HX_STACK_LINE(192)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("COLLISION","\x52","\x18","\x93","\xd6");
	}
	else{
		HX_STACK_LINE(193)
		::nape::dynamics::ArbiterType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::dynamics::ArbiterType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::dynamics::ArbiterType tmp5 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;
		}
		HX_STACK_LINE(193)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return HX_HCSTRING("SENSOR","\x3a","\xde","\x12","\x1e");
		}
		else{
			HX_STACK_LINE(194)
			::nape::dynamics::ArbiterType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::nape::dynamics::ArbiterType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				if ((tmp6)){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::dynamics::ArbiterType tmp7 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID = tmp7;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;
			}
			HX_STACK_LINE(194)
			bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			if ((tmp5)){
				HX_STACK_LINE(194)
				return HX_HCSTRING("FLUID","\xea","\x91","\x89","\x80");
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


HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,toString,return )

::nape::dynamics::ArbiterType ArbiterType_obj::get_COLLISION( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterType","get_COLLISION",0xcc73708a,"nape.dynamics.ArbiterType.get_COLLISION","nape/dynamics/ArbiterType.hx",202,0xeb73a8ef)
	HX_STACK_LINE(203)
	::nape::dynamics::ArbiterType tmp = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(205)
		::nape::dynamics::ArbiterType tmp2 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION = tmp2;
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(208)
	::nape::dynamics::ArbiterType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_COLLISION,return )

::nape::dynamics::ArbiterType ArbiterType_obj::get_SENSOR( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterType","get_SENSOR",0xf261b302,"nape.dynamics.ArbiterType.get_SENSOR","nape/dynamics/ArbiterType.hx",215,0xeb73a8ef)
	HX_STACK_LINE(216)
	::nape::dynamics::ArbiterType tmp = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	if ((tmp1)){
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(218)
		::nape::dynamics::ArbiterType tmp2 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR = tmp2;
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(221)
	::nape::dynamics::ArbiterType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(221)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_SENSOR,return )

::nape::dynamics::ArbiterType ArbiterType_obj::get_FLUID( ){
	HX_STACK_FRAME("nape.dynamics.ArbiterType","get_FLUID",0x93db6e22,"nape.dynamics.ArbiterType.get_FLUID","nape/dynamics/ArbiterType.hx",228,0xeb73a8ef)
	HX_STACK_LINE(229)
	::nape::dynamics::ArbiterType tmp = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	if ((tmp1)){
		HX_STACK_LINE(230)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(231)
		::nape::dynamics::ArbiterType tmp2 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID = tmp2;
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(234)
	::nape::dynamics::ArbiterType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_FLUID,return )


ArbiterType_obj::ArbiterType_obj()
{
}

Dynamic ArbiterType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArbiterType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { if (inCallProp == hx::paccAlways) { outValue = get_FLUID(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { if (inCallProp == hx::paccAlways) { outValue = get_SENSOR(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"COLLISION") ) { if (inCallProp == hx::paccAlways) { outValue = get_COLLISION(); return true; } }
		if (HX_FIELD_EQ(inName,"get_FLUID") ) { outValue = get_FLUID_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_SENSOR") ) { outValue = get_SENSOR_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_COLLISION") ) { outValue = get_COLLISION_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(ArbiterType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArbiterType_obj::__mClass,"__mClass");
};

#endif

hx::Class ArbiterType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_COLLISION","\x29","\xec","\xf6","\x97"),
	HX_HCSTRING("get_SENSOR","\x03","\x4e","\x9a","\x0e"),
	HX_HCSTRING("get_FLUID","\x41","\xee","\x32","\xc4"),
	::String(null()) };

void ArbiterType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.ArbiterType","\x0f","\x6d","\x94","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArbiterType_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArbiterType_obj >;
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
} // end namespace dynamics
