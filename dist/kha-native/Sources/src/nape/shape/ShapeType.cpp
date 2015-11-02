#include <hxcpp.h>

#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace shape{

Void ShapeType_obj::__construct()
{
HX_STACK_FRAME("nape.shape.ShapeType","new",0xb55a943a,"nape.shape.ShapeType.new","nape/shape/ShapeType.hx",181,0xe7bde238)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate ShapeType","\xf6","\x9f","\xd0","\xa6");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//ShapeType_obj::~ShapeType_obj() { }

Dynamic ShapeType_obj::__CreateEmpty() { return  new ShapeType_obj; }
hx::ObjectPtr< ShapeType_obj > ShapeType_obj::__new()
{  hx::ObjectPtr< ShapeType_obj > _result_ = new ShapeType_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShapeType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeType_obj > _result_ = new ShapeType_obj();
	_result_->__construct();
	return _result_;}

::String ShapeType_obj::toString( ){
	HX_STACK_FRAME("nape.shape.ShapeType","toString",0x4ed1d692,"nape.shape.ShapeType.toString","nape/shape/ShapeType.hx",192,0xe7bde238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::shape::ShapeType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::shape::ShapeType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::shape::ShapeType tmp3 = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;
	}
	HX_STACK_LINE(192)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08");
	}
	else{
		HX_STACK_LINE(193)
		::nape::shape::ShapeType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::shape::ShapeType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::shape::ShapeType tmp5 = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;
		}
		HX_STACK_LINE(193)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return HX_HCSTRING("POLYGON","\x5a","\xd6","\x64","\x92");
		}
		else{
			HX_STACK_LINE(194)
			return HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,toString,return )

::nape::shape::ShapeType ShapeType_obj::get_CIRCLE( ){
	HX_STACK_FRAME("nape.shape.ShapeType","get_CIRCLE",0xb2b4593f,"nape.shape.ShapeType.get_CIRCLE","nape/shape/ShapeType.hx",201,0xe7bde238)
	HX_STACK_LINE(202)
	::nape::shape::ShapeType tmp = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	if ((tmp1)){
		HX_STACK_LINE(203)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(204)
		::nape::shape::ShapeType tmp2 = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = tmp2;
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(207)
	::nape::shape::ShapeType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,get_CIRCLE,return )

::nape::shape::ShapeType ShapeType_obj::get_POLYGON( ){
	HX_STACK_FRAME("nape.shape.ShapeType","get_POLYGON",0xc7f4644b,"nape.shape.ShapeType.get_POLYGON","nape/shape/ShapeType.hx",214,0xe7bde238)
	HX_STACK_LINE(215)
	::nape::shape::ShapeType tmp = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	if ((tmp1)){
		HX_STACK_LINE(216)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(217)
		::nape::shape::ShapeType tmp2 = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = tmp2;
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(220)
	::nape::shape::ShapeType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,get_POLYGON,return )


ShapeType_obj::ShapeType_obj()
{
}

Dynamic ShapeType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShapeType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"CIRCLE") ) { if (inCallProp == hx::paccAlways) { outValue = get_CIRCLE(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"POLYGON") ) { if (inCallProp == hx::paccAlways) { outValue = get_POLYGON(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_CIRCLE") ) { outValue = get_CIRCLE_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_POLYGON") ) { outValue = get_POLYGON_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(ShapeType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeType_obj::__mClass,"__mClass");
};

#endif

hx::Class ShapeType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_CIRCLE","\xd9","\x8d","\x17","\xf9"),
	HX_HCSTRING("get_POLYGON","\x71","\x36","\x5f","\x18"),
	::String(null()) };

void ShapeType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.shape.ShapeType","\x48","\xaf","\xc1","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShapeType_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShapeType_obj >;
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
