#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void ListenerType_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.ListenerType","new",0xec0b3486,"nape.callbacks.ListenerType.new","nape/callbacks/ListenerType.hx",181,0xddcbcca8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate ListenerType","\xb3","\x4e","\x53","\x12");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//ListenerType_obj::~ListenerType_obj() { }

Dynamic ListenerType_obj::__CreateEmpty() { return  new ListenerType_obj; }
hx::ObjectPtr< ListenerType_obj > ListenerType_obj::__new()
{  hx::ObjectPtr< ListenerType_obj > _result_ = new ListenerType_obj();
	_result_->__construct();
	return _result_;}

Dynamic ListenerType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListenerType_obj > _result_ = new ListenerType_obj();
	_result_->__construct();
	return _result_;}

::String ListenerType_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","toString",0x56fca2c6,"nape.callbacks.ListenerType.toString","nape/callbacks/ListenerType.hx",192,0xddcbcca8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::callbacks::ListenerType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::callbacks::ListenerType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::callbacks::ListenerType tmp3 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;
	}
	HX_STACK_LINE(192)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("BODY","\xa2","\x42","\xdc","\x2b");
	}
	else{
		HX_STACK_LINE(193)
		::nape::callbacks::ListenerType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::callbacks::ListenerType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::callbacks::ListenerType tmp5 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;
		}
		HX_STACK_LINE(193)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return HX_HCSTRING("CONSTRAINT","\x5d","\x74","\xd5","\x4c");
		}
		else{
			HX_STACK_LINE(194)
			::nape::callbacks::ListenerType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::nape::callbacks::ListenerType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				if ((tmp6)){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(194)
					::nape::callbacks::ListenerType tmp7 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = tmp7;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(194)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;
			}
			HX_STACK_LINE(194)
			bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			if ((tmp5)){
				HX_STACK_LINE(194)
				return HX_HCSTRING("INTERACTION","\xb2","\x43","\x95","\x12");
			}
			else{
				HX_STACK_LINE(195)
				::nape::callbacks::ListenerType tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					::nape::callbacks::ListenerType tmp7 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(195)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(195)
					if ((tmp8)){
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(195)
						::nape::callbacks::ListenerType tmp9 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = tmp9;
						HX_STACK_LINE(195)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(195)
					tmp6 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;
				}
				HX_STACK_LINE(195)
				bool tmp7 = (hx::ObjectPtr<OBJ_>(this) == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(195)
				if ((tmp7)){
					HX_STACK_LINE(195)
					return HX_HCSTRING("PRE","\x03","\xfc","\x3c","\x00");
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


HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,toString,return )

::nape::callbacks::ListenerType ListenerType_obj::get_BODY( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","get_BODY",0xca24d045,"nape.callbacks.ListenerType.get_BODY","nape/callbacks/ListenerType.hx",203,0xddcbcca8)
	HX_STACK_LINE(204)
	::nape::callbacks::ListenerType tmp = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::nape::callbacks::ListenerType tmp2 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = tmp2;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	::nape::callbacks::ListenerType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_BODY,return )

::nape::callbacks::ListenerType ListenerType_obj::get_CONSTRAINT( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","get_CONSTRAINT",0x9db05e40,"nape.callbacks.ListenerType.get_CONSTRAINT","nape/callbacks/ListenerType.hx",216,0xddcbcca8)
	HX_STACK_LINE(217)
	::nape::callbacks::ListenerType tmp = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	if ((tmp1)){
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(219)
		::nape::callbacks::ListenerType tmp2 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = tmp2;
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(222)
	::nape::callbacks::ListenerType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_CONSTRAINT,return )

::nape::callbacks::ListenerType ListenerType_obj::get_INTERACTION( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","get_INTERACTION",0x8147006f,"nape.callbacks.ListenerType.get_INTERACTION","nape/callbacks/ListenerType.hx",229,0xddcbcca8)
	HX_STACK_LINE(230)
	::nape::callbacks::ListenerType tmp = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	if ((tmp1)){
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(232)
		::nape::callbacks::ListenerType tmp2 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = tmp2;
		HX_STACK_LINE(233)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(235)
	::nape::callbacks::ListenerType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_INTERACTION,return )

::nape::callbacks::ListenerType ListenerType_obj::get_PRE( ){
	HX_STACK_FRAME("nape.callbacks.ListenerType","get_PRE",0xad2533c0,"nape.callbacks.ListenerType.get_PRE","nape/callbacks/ListenerType.hx",242,0xddcbcca8)
	HX_STACK_LINE(243)
	::nape::callbacks::ListenerType tmp = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	if ((tmp1)){
		HX_STACK_LINE(244)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(245)
		::nape::callbacks::ListenerType tmp2 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = tmp2;
		HX_STACK_LINE(246)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(248)
	::nape::callbacks::ListenerType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_PRE,return )


ListenerType_obj::ListenerType_obj()
{
}

Dynamic ListenerType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ListenerType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"PRE") ) { if (inCallProp == hx::paccAlways) { outValue = get_PRE(); return true; } }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BODY") ) { if (inCallProp == hx::paccAlways) { outValue = get_BODY(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_PRE") ) { outValue = get_PRE_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_BODY") ) { outValue = get_BODY_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CONSTRAINT") ) { if (inCallProp == hx::paccAlways) { outValue = get_CONSTRAINT(); return true; } }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"INTERACTION") ) { if (inCallProp == hx::paccAlways) { outValue = get_INTERACTION(); return true; } }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_CONSTRAINT") ) { outValue = get_CONSTRAINT_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_INTERACTION") ) { outValue = get_INTERACTION_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(ListenerType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListenerType_obj::__mClass,"__mClass");
};

#endif

hx::Class ListenerType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_BODY","\x2b","\xfe","\x96","\xab"),
	HX_HCSTRING("get_CONSTRAINT","\xa6","\xfc","\xca","\xc2"),
	HX_HCSTRING("get_INTERACTION","\x49","\xfb","\x76","\xd3"),
	HX_HCSTRING("get_PRE","\x9a","\xc4","\xb1","\x26"),
	::String(null()) };

void ListenerType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.ListenerType","\x94","\x39","\x71","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ListenerType_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListenerType_obj >;
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
