#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionType_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.InteractionType","new",0xd712f318,"nape.callbacks.InteractionType.new","nape/callbacks/InteractionType.hx",181,0xf2de5b1a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate InteractionType","\x67","\x6f","\x84","\x2e");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//InteractionType_obj::~InteractionType_obj() { }

Dynamic InteractionType_obj::__CreateEmpty() { return  new InteractionType_obj; }
hx::ObjectPtr< InteractionType_obj > InteractionType_obj::__new()
{  hx::ObjectPtr< InteractionType_obj > _result_ = new InteractionType_obj();
	_result_->__construct();
	return _result_;}

Dynamic InteractionType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionType_obj > _result_ = new InteractionType_obj();
	_result_->__construct();
	return _result_;}

::String InteractionType_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","toString",0x413ed2f4,"nape.callbacks.InteractionType.toString","nape/callbacks/InteractionType.hx",192,0xf2de5b1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::callbacks::InteractionType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::callbacks::InteractionType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::callbacks::InteractionType tmp3 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
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
		::nape::callbacks::InteractionType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::callbacks::InteractionType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::callbacks::InteractionType tmp5 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
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
			::nape::callbacks::InteractionType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::nape::callbacks::InteractionType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				if ((tmp6)){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::callbacks::InteractionType tmp7 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp7;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
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
				::nape::callbacks::InteractionType tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					::nape::callbacks::InteractionType tmp7 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(195)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(195)
					if ((tmp8)){
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(195)
						::nape::callbacks::InteractionType tmp9 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp9;
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(195)
					tmp6 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
				}
				HX_STACK_LINE(195)
				bool tmp7 = (hx::ObjectPtr<OBJ_>(this) == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(195)
				if ((tmp7)){
					HX_STACK_LINE(195)
					return HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00");
				}
				else{
					HX_STACK_LINE(196)
					return HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,toString,return )

::nape::callbacks::InteractionType InteractionType_obj::get_COLLISION( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","get_COLLISION",0x1d91a4e1,"nape.callbacks.InteractionType.get_COLLISION","nape/callbacks/InteractionType.hx",203,0xf2de5b1a)
	HX_STACK_LINE(204)
	::nape::callbacks::InteractionType tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::callbacks::InteractionType tmp2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp2;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	::nape::callbacks::InteractionType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_COLLISION,return )

::nape::callbacks::InteractionType InteractionType_obj::get_SENSOR( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","get_SENSOR",0xed25724b,"nape.callbacks.InteractionType.get_SENSOR","nape/callbacks/InteractionType.hx",215,0xf2de5b1a)
	HX_STACK_LINE(216)
	::nape::callbacks::InteractionType tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	if ((tmp1)){
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(218)
		::nape::callbacks::InteractionType tmp2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp2;
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(221)
	::nape::callbacks::InteractionType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(221)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_SENSOR,return )

::nape::callbacks::InteractionType InteractionType_obj::get_FLUID( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","get_FLUID",0x7164eaf9,"nape.callbacks.InteractionType.get_FLUID","nape/callbacks/InteractionType.hx",228,0xf2de5b1a)
	HX_STACK_LINE(229)
	::nape::callbacks::InteractionType tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	if ((tmp1)){
		HX_STACK_LINE(230)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(231)
		::nape::callbacks::InteractionType tmp2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp2;
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(234)
	::nape::callbacks::InteractionType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_FLUID,return )

::nape::callbacks::InteractionType InteractionType_obj::get_ANY( ){
	HX_STACK_FRAME("nape.callbacks.InteractionType","get_ANY",0x5a593e1b,"nape.callbacks.InteractionType.get_ANY","nape/callbacks/InteractionType.hx",241,0xf2de5b1a)
	HX_STACK_LINE(242)
	::nape::callbacks::InteractionType tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	if ((tmp1)){
		HX_STACK_LINE(243)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(244)
		::nape::callbacks::InteractionType tmp2 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp2;
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(247)
	::nape::callbacks::InteractionType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_ANY,return )


InteractionType_obj::InteractionType_obj()
{
}

Dynamic InteractionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool InteractionType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY(); return true; } }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { if (inCallProp == hx::paccAlways) { outValue = get_FLUID(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { if (inCallProp == hx::paccAlways) { outValue = get_SENSOR(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ANY") ) { outValue = get_ANY_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(InteractionType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionType_obj::__mClass,"__mClass");
};

#endif

hx::Class InteractionType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_COLLISION","\x29","\xec","\xf6","\x97"),
	HX_HCSTRING("get_SENSOR","\x03","\x4e","\x9a","\x0e"),
	HX_HCSTRING("get_FLUID","\x41","\xee","\x32","\xc4"),
	HX_HCSTRING("get_ANY","\x63","\x5f","\xa6","\x26"),
	::String(null()) };

void InteractionType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.InteractionType","\x26","\xc7","\x2d","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InteractionType_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractionType_obj >;
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
} // end namespace callbacks
