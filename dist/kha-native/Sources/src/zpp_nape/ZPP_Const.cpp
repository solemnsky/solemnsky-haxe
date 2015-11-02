#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_zpp_nape_ZPP_Const
#include <zpp_nape/ZPP_Const.h>
#endif
namespace zpp_nape{

Void ZPP_Const_obj::__construct()
{
	return null();
}

//ZPP_Const_obj::~ZPP_Const_obj() { }

Dynamic ZPP_Const_obj::__CreateEmpty() { return  new ZPP_Const_obj; }
hx::ObjectPtr< ZPP_Const_obj > ZPP_Const_obj::__new()
{  hx::ObjectPtr< ZPP_Const_obj > _result_ = new ZPP_Const_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Const_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Const_obj > _result_ = new ZPP_Const_obj();
	_result_->__construct();
	return _result_;}

Float ZPP_Const_obj::POSINF( ){
	HX_STACK_FRAME("zpp_nape.ZPP_Const","POSINF",0x143cd95e,"zpp_nape.ZPP_Const.POSINF","zpp_nape/Const.hx",184,0x5415a15d)
	HX_STACK_LINE(185)
	Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Const_obj,POSINF,return )

Float ZPP_Const_obj::NEGINF( ){
	HX_STACK_FRAME("zpp_nape.ZPP_Const","NEGINF",0x7d95c422,"zpp_nape.ZPP_Const.NEGINF","zpp_nape/Const.hx",188,0x5415a15d)
	HX_STACK_LINE(189)
	Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Const_obj,NEGINF,return )

Float ZPP_Const_obj::FMAX;


ZPP_Const_obj::ZPP_Const_obj()
{
}

bool ZPP_Const_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"POSINF") ) { outValue = POSINF_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"NEGINF") ) { outValue = NEGINF_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &ZPP_Const_obj::FMAX,HX_HCSTRING("FMAX","\xfe","\x95","\x7f","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Const_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Const_obj::FMAX,"FMAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Const_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Const_obj::FMAX,"FMAX");
};

#endif

hx::Class ZPP_Const_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("POSINF","\xcd","\x0f","\x49","\xb0"),
	HX_HCSTRING("NEGINF","\x91","\xfa","\xa1","\x19"),
	HX_HCSTRING("FMAX","\xfe","\x95","\x7f","\x2e"),
	::String(null()) };

void ZPP_Const_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.ZPP_Const","\xbd","\x8e","\xd3","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Const_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Const_obj >;
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

void ZPP_Const_obj::__boot()
{
	FMAX= ((Float)1e100);
}

} // end namespace zpp_nape
