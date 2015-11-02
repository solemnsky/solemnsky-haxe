#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void PreFlag_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.PreFlag","new",0xdcfcc45b,"nape.callbacks.PreFlag.new","nape/callbacks/PreFlag.hx",182,0x68e91137)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	if ((tmp1)){
		HX_STACK_LINE(184)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate PreFlag","\x2a","\xfa","\x52","\x9f");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//PreFlag_obj::~PreFlag_obj() { }

Dynamic PreFlag_obj::__CreateEmpty() { return  new PreFlag_obj; }
hx::ObjectPtr< PreFlag_obj > PreFlag_obj::__new()
{  hx::ObjectPtr< PreFlag_obj > _result_ = new PreFlag_obj();
	_result_->__construct();
	return _result_;}

Dynamic PreFlag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PreFlag_obj > _result_ = new PreFlag_obj();
	_result_->__construct();
	return _result_;}

::String PreFlag_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","toString",0x8f088ed1,"nape.callbacks.PreFlag.toString","nape/callbacks/PreFlag.hx",193,0x68e91137)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	::nape::callbacks::PreFlag tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		::nape::callbacks::PreFlag tmp1 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		if ((tmp2)){
			HX_STACK_LINE(193)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(193)
			::nape::callbacks::PreFlag tmp3 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = tmp3;
			HX_STACK_LINE(193)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(193)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
	}
	HX_STACK_LINE(193)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	if ((tmp1)){
		HX_STACK_LINE(193)
		return HX_HCSTRING("ACCEPT","\x08","\x3f","\x89","\xbd");
	}
	else{
		HX_STACK_LINE(194)
		::nape::callbacks::PreFlag tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::nape::callbacks::PreFlag tmp3 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			if ((tmp4)){
				HX_STACK_LINE(194)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(194)
				::nape::callbacks::PreFlag tmp5 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = tmp5;
				HX_STACK_LINE(194)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(194)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
		}
		HX_STACK_LINE(194)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		if ((tmp3)){
			HX_STACK_LINE(194)
			return HX_HCSTRING("IGNORE","\x12","\x65","\x4b","\x45");
		}
		else{
			HX_STACK_LINE(195)
			::nape::callbacks::PreFlag tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				::nape::callbacks::PreFlag tmp5 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(195)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(195)
				if ((tmp6)){
					HX_STACK_LINE(195)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(195)
					::nape::callbacks::PreFlag tmp7 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(195)
					::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = tmp7;
					HX_STACK_LINE(195)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(195)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
			}
			HX_STACK_LINE(195)
			bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(195)
			if ((tmp5)){
				HX_STACK_LINE(195)
				return HX_HCSTRING("ACCEPT_ONCE","\x58","\xa5","\xf1","\x27");
			}
			else{
				HX_STACK_LINE(196)
				::nape::callbacks::PreFlag tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					::nape::callbacks::PreFlag tmp7 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(196)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(196)
					if ((tmp8)){
						HX_STACK_LINE(196)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(196)
						::nape::callbacks::PreFlag tmp9 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(196)
						::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = tmp9;
						HX_STACK_LINE(196)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(196)
					tmp6 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
				}
				HX_STACK_LINE(196)
				bool tmp7 = (hx::ObjectPtr<OBJ_>(this) == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				if ((tmp7)){
					HX_STACK_LINE(196)
					return HX_HCSTRING("IGNORE_ONCE","\x0e","\x5b","\x37","\xd0");
				}
				else{
					HX_STACK_LINE(197)
					return HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
			}
		}
	}
	HX_STACK_LINE(193)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,toString,return )

::nape::callbacks::PreFlag PreFlag_obj::get_ACCEPT( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","get_ACCEPT",0x2d320036,"nape.callbacks.PreFlag.get_ACCEPT","nape/callbacks/PreFlag.hx",204,0x68e91137)
	HX_STACK_LINE(205)
	::nape::callbacks::PreFlag tmp = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	if ((tmp1)){
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(207)
		::nape::callbacks::PreFlag tmp2 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = tmp2;
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(210)
	::nape::callbacks::PreFlag tmp2 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_ACCEPT,return )

::nape::callbacks::PreFlag PreFlag_obj::get_IGNORE( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","get_IGNORE",0xb4f42640,"nape.callbacks.PreFlag.get_IGNORE","nape/callbacks/PreFlag.hx",217,0x68e91137)
	HX_STACK_LINE(218)
	::nape::callbacks::PreFlag tmp = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	if ((tmp1)){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::callbacks::PreFlag tmp2 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = tmp2;
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(223)
	::nape::callbacks::PreFlag tmp2 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_IGNORE,return )

::nape::callbacks::PreFlag PreFlag_obj::get_ACCEPT_ONCE( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","get_ACCEPT_ONCE",0x3c57dd6a,"nape.callbacks.PreFlag.get_ACCEPT_ONCE","nape/callbacks/PreFlag.hx",231,0x68e91137)
	HX_STACK_LINE(232)
	::nape::callbacks::PreFlag tmp = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	if ((tmp1)){
		HX_STACK_LINE(233)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(234)
		::nape::callbacks::PreFlag tmp2 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = tmp2;
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(237)
	::nape::callbacks::PreFlag tmp2 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(237)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_ACCEPT_ONCE,return )

::nape::callbacks::PreFlag PreFlag_obj::get_IGNORE_ONCE( ){
	HX_STACK_FRAME("nape.callbacks.PreFlag","get_IGNORE_ONCE",0xe49d9320,"nape.callbacks.PreFlag.get_IGNORE_ONCE","nape/callbacks/PreFlag.hx",245,0x68e91137)
	HX_STACK_LINE(246)
	::nape::callbacks::PreFlag tmp = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	if ((tmp1)){
		HX_STACK_LINE(247)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(248)
		::nape::callbacks::PreFlag tmp2 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = tmp2;
		HX_STACK_LINE(249)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(251)
	::nape::callbacks::PreFlag tmp2 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_IGNORE_ONCE,return )


PreFlag_obj::PreFlag_obj()
{
}

Dynamic PreFlag_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool PreFlag_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == hx::paccAlways) { outValue = get_ACCEPT(); return true; } }
		if (HX_FIELD_EQ(inName,"IGNORE") ) { if (inCallProp == hx::paccAlways) { outValue = get_IGNORE(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { outValue = get_ACCEPT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_IGNORE") ) { outValue = get_IGNORE_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ACCEPT_ONCE") ) { if (inCallProp == hx::paccAlways) { outValue = get_ACCEPT_ONCE(); return true; } }
		if (HX_FIELD_EQ(inName,"IGNORE_ONCE") ) { if (inCallProp == hx::paccAlways) { outValue = get_IGNORE_ONCE(); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_ACCEPT_ONCE") ) { outValue = get_ACCEPT_ONCE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_IGNORE_ONCE") ) { outValue = get_IGNORE_ONCE_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(PreFlag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreFlag_obj::__mClass,"__mClass");
};

#endif

hx::Class PreFlag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_ACCEPT","\xd1","\xae","\x10","\xae"),
	HX_HCSTRING("get_IGNORE","\xdb","\xd4","\xd2","\x35"),
	HX_HCSTRING("get_ACCEPT_ONCE","\xef","\x5c","\xd3","\xe8"),
	HX_HCSTRING("get_IGNORE_ONCE","\xa5","\x12","\x19","\x91"),
	::String(null()) };

void PreFlag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.PreFlag","\xe9","\xfa","\xde","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PreFlag_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PreFlag_obj >;
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
