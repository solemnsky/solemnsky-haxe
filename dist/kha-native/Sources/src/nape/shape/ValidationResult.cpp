#include <hxcpp.h>

#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace shape{

Void ValidationResult_obj::__construct()
{
HX_STACK_FRAME("nape.shape.ValidationResult","new",0x77e8ee3b,"nape.shape.ValidationResult.new","nape/shape/ValidationResult.hx",181,0xd4dffc13)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate ValidationResult","\xdb","\x55","\x31","\xf1");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//ValidationResult_obj::~ValidationResult_obj() { }

Dynamic ValidationResult_obj::__CreateEmpty() { return  new ValidationResult_obj; }
hx::ObjectPtr< ValidationResult_obj > ValidationResult_obj::__new()
{  hx::ObjectPtr< ValidationResult_obj > _result_ = new ValidationResult_obj();
	_result_->__construct();
	return _result_;}

Dynamic ValidationResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ValidationResult_obj > _result_ = new ValidationResult_obj();
	_result_->__construct();
	return _result_;}

::String ValidationResult_obj::toString( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","toString",0x0e5898f1,"nape.shape.ValidationResult.toString","nape/shape/ValidationResult.hx",192,0xd4dffc13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::shape::ValidationResult tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::shape::ValidationResult tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::shape::ValidationResult tmp3 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;
	}
	HX_STACK_LINE(192)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("VALID","\xdc","\xac","\xa6","\xaf");
	}
	else{
		HX_STACK_LINE(193)
		::nape::shape::ValidationResult tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::shape::ValidationResult tmp3 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::shape::ValidationResult tmp5 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;
		}
		HX_STACK_LINE(193)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return HX_HCSTRING("DEGENERATE","\xb6","\x13","\x01","\x22");
		}
		else{
			HX_STACK_LINE(194)
			::nape::shape::ValidationResult tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::nape::shape::ValidationResult tmp5 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				if ((tmp6)){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::shape::ValidationResult tmp7 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE = tmp7;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;
			}
			HX_STACK_LINE(194)
			bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			if ((tmp5)){
				HX_STACK_LINE(194)
				return HX_HCSTRING("CONCAVE","\x6f","\xbe","\x0b","\x8e");
			}
			else{
				HX_STACK_LINE(195)
				::nape::shape::ValidationResult tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					::nape::shape::ValidationResult tmp7 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(195)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(195)
					if ((tmp8)){
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(195)
						::nape::shape::ValidationResult tmp9 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING = tmp9;
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(195)
					tmp6 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;
				}
				HX_STACK_LINE(195)
				bool tmp7 = (hx::ObjectPtr<OBJ_>(this) == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(195)
				if ((tmp7)){
					HX_STACK_LINE(195)
					return HX_HCSTRING("SELF_INTERSECTING","\x36","\xf1","\x3e","\xa4");
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


HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,toString,return )

::nape::shape::ValidationResult ValidationResult_obj::get_VALID( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","get_VALID",0x49f57d4e,"nape.shape.ValidationResult.get_VALID","nape/shape/ValidationResult.hx",203,0xd4dffc13)
	HX_STACK_LINE(204)
	::nape::shape::ValidationResult tmp = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::shape::ValidationResult tmp2 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID = tmp2;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	::nape::shape::ValidationResult tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,get_VALID,return )

::nape::shape::ValidationResult ValidationResult_obj::get_DEGENERATE( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","get_DEGENERATE",0x3caf6604,"nape.shape.ValidationResult.get_DEGENERATE","nape/shape/ValidationResult.hx",216,0xd4dffc13)
	HX_STACK_LINE(217)
	::nape::shape::ValidationResult tmp = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	if ((tmp1)){
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(219)
		::nape::shape::ValidationResult tmp2 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE = tmp2;
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(222)
	::nape::shape::ValidationResult tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,get_DEGENERATE,return )

::nape::shape::ValidationResult ValidationResult_obj::get_CONCAVE( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","get_CONCAVE",0x76050f61,"nape.shape.ValidationResult.get_CONCAVE","nape/shape/ValidationResult.hx",229,0xd4dffc13)
	HX_STACK_LINE(230)
	::nape::shape::ValidationResult tmp = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	if ((tmp1)){
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(232)
		::nape::shape::ValidationResult tmp2 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE = tmp2;
		HX_STACK_LINE(233)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(235)
	::nape::shape::ValidationResult tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,get_CONCAVE,return )

::nape::shape::ValidationResult ValidationResult_obj::get_SELF_INTERSECTING( ){
	HX_STACK_FRAME("nape.shape.ValidationResult","get_SELF_INTERSECTING",0xf13da4a8,"nape.shape.ValidationResult.get_SELF_INTERSECTING","nape/shape/ValidationResult.hx",242,0xd4dffc13)
	HX_STACK_LINE(243)
	::nape::shape::ValidationResult tmp = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	if ((tmp1)){
		HX_STACK_LINE(244)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(245)
		::nape::shape::ValidationResult tmp2 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING = tmp2;
		HX_STACK_LINE(246)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(248)
	::nape::shape::ValidationResult tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidationResult_obj,get_SELF_INTERSECTING,return )


ValidationResult_obj::ValidationResult_obj()
{
}

Dynamic ValidationResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ValidationResult_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"VALID") ) { if (inCallProp == hx::paccAlways) { outValue = get_VALID(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONCAVE") ) { if (inCallProp == hx::paccAlways) { outValue = get_CONCAVE(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_VALID") ) { outValue = get_VALID_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEGENERATE") ) { if (inCallProp == hx::paccAlways) { outValue = get_DEGENERATE(); return true; } }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_CONCAVE") ) { outValue = get_CONCAVE_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_DEGENERATE") ) { outValue = get_DEGENERATE_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SELF_INTERSECTING") ) { if (inCallProp == hx::paccAlways) { outValue = get_SELF_INTERSECTING(); return true; } }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_SELF_INTERSECTING") ) { outValue = get_SELF_INTERSECTING_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(ValidationResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValidationResult_obj::__mClass,"__mClass");
};

#endif

hx::Class ValidationResult_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_VALID","\x33","\x09","\x50","\xf3"),
	HX_HCSTRING("get_DEGENERATE","\xff","\x9b","\xf6","\x97"),
	HX_HCSTRING("get_CONCAVE","\x86","\x1e","\x06","\x14"),
	HX_HCSTRING("get_SELF_INTERSECTING","\x0d","\xf4","\xec","\x22"),
	::String(null()) };

void ValidationResult_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.shape.ValidationResult","\xc9","\xb4","\x38","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValidationResult_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ValidationResult_obj >;
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
} // end namespace shape
