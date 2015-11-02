#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_zpp_nape_geom_ZPP_VecMath
#include <zpp_nape/geom/ZPP_VecMath.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_VecMath_obj::__construct()
{
	return null();
}

//ZPP_VecMath_obj::~ZPP_VecMath_obj() { }

Dynamic ZPP_VecMath_obj::__CreateEmpty() { return  new ZPP_VecMath_obj; }
hx::ObjectPtr< ZPP_VecMath_obj > ZPP_VecMath_obj::__new()
{  hx::ObjectPtr< ZPP_VecMath_obj > _result_ = new ZPP_VecMath_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_VecMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_VecMath_obj > _result_ = new ZPP_VecMath_obj();
	_result_->__construct();
	return _result_;}

Float ZPP_VecMath_obj::vec_dsq( Float ax,Float ay,Float bx,Float by){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_VecMath","vec_dsq",0xb07d1caf,"zpp_nape.geom.ZPP_VecMath.vec_dsq","zpp_nape/geom/VecMath.hx",176,0x9d2cc613)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(177)
	Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(178)
	Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(180)
		Float tmp = (ax - bx);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		dx = tmp;
		HX_STACK_LINE(181)
		Float tmp1 = (ay - by);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		dy = tmp1;
	}
	HX_STACK_LINE(183)
	Float tmp = (dx * dx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	Float tmp1 = (dy * dy);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_VecMath_obj,vec_dsq,return )

Float ZPP_VecMath_obj::vec_distance( Float ax,Float ay,Float bx,Float by){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_VecMath","vec_distance",0x98be6968,"zpp_nape.geom.ZPP_VecMath.vec_distance","zpp_nape/geom/VecMath.hx",186,0x9d2cc613)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(187)
	Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(188)
	Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(190)
		Float tmp = (ax - bx);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		dx = tmp;
		HX_STACK_LINE(191)
		Float tmp1 = (ay - by);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		dy = tmp1;
	}
	HX_STACK_LINE(193)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		Float tmp1 = (dx * dx);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		Float tmp2 = (dy * dy);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		tmp = ::Math_obj::sqrt(tmp3);
	}
	HX_STACK_LINE(193)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_VecMath_obj,vec_distance,return )


ZPP_VecMath_obj::ZPP_VecMath_obj()
{
}

bool ZPP_VecMath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"vec_dsq") ) { outValue = vec_dsq_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vec_distance") ) { outValue = vec_distance_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_VecMath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_VecMath_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_VecMath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("vec_dsq","\x57","\x27","\xb3","\xcc"),
	HX_HCSTRING("vec_distance","\xc0","\xbd","\x58","\x36"),
	::String(null()) };

void ZPP_VecMath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_VecMath","\xc6","\x3d","\xfd","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_VecMath_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_VecMath_obj >;
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

} // end namespace zpp_nape
} // end namespace geom
