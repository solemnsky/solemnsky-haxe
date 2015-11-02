#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_zpp_nape_util_ZPP_Math
#include <zpp_nape/util/ZPP_Math.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Math_obj::__construct()
{
	return null();
}

//ZPP_Math_obj::~ZPP_Math_obj() { }

Dynamic ZPP_Math_obj::__CreateEmpty() { return  new ZPP_Math_obj; }
hx::ObjectPtr< ZPP_Math_obj > ZPP_Math_obj::__new()
{  hx::ObjectPtr< ZPP_Math_obj > _result_ = new ZPP_Math_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Math_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Math_obj > _result_ = new ZPP_Math_obj();
	_result_->__construct();
	return _result_;}

Float ZPP_Math_obj::sqrt( Float x){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Math","sqrt",0x21f81616,"zpp_nape.util.ZPP_Math.sqrt","zpp_nape/util/Math.hx",179,0x3133988b)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(189)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	Float tmp1 = ::Math_obj::sqrt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Math_obj,sqrt,return )

Float ZPP_Math_obj::invsqrt( Float x){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Math","invsqrt",0x7ca2e0db,"zpp_nape.util.ZPP_Math.invsqrt","zpp_nape/util/Math.hx",193,0x3133988b)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(206)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	{
		HX_STACK_LINE(206)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		tmp = ::Math_obj::sqrt(tmp1);
	}
	HX_STACK_LINE(206)
	Float tmp1 = (Float(((Float)1.0)) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Math_obj,invsqrt,return )

Float ZPP_Math_obj::sqr( Float x){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Math","sqr",0x943df49e,"zpp_nape.util.ZPP_Math.sqr","zpp_nape/util/Math.hx",210,0x3133988b)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(219)
	Float tmp = (x * x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Math_obj,sqr,return )

Float ZPP_Math_obj::clamp2( Float x,Float a){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Math","clamp2",0x4ec20c8d,"zpp_nape.util.ZPP_Math.clamp2","zpp_nape/util/Math.hx",222,0x3133988b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(231)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		Float tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		Float a1 = tmp2;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(231)
		bool tmp3 = (x < a1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		if ((tmp3)){
			HX_STACK_LINE(231)
			tmp = a1;
		}
		else{
			HX_STACK_LINE(231)
			bool tmp4 = (x > a);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(231)
			if ((tmp4)){
				HX_STACK_LINE(231)
				tmp = a;
			}
			else{
				HX_STACK_LINE(231)
				tmp = x;
			}
		}
	}
	HX_STACK_LINE(231)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Math_obj,clamp2,return )

Float ZPP_Math_obj::clamp( Float x,Float a,Float b){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Math","clamp",0x5d56f805,"zpp_nape.util.ZPP_Math.clamp","zpp_nape/util/Math.hx",234,0x3133988b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(243)
	bool tmp = (x < a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	if ((tmp)){
		HX_STACK_LINE(243)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(243)
		bool tmp2 = (x > b);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		if ((tmp2)){
			HX_STACK_LINE(243)
			tmp1 = b;
		}
		else{
			HX_STACK_LINE(243)
			tmp1 = x;
		}
	}
	HX_STACK_LINE(243)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Math_obj,clamp,return )


ZPP_Math_obj::ZPP_Math_obj()
{
}

bool ZPP_Math_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sqr") ) { outValue = sqr_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sqrt") ) { outValue = sqrt_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clamp2") ) { outValue = clamp2_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invsqrt") ) { outValue = invsqrt_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Math_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Math_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Math_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sqrt","\xe0","\xab","\x59","\x4c"),
	HX_HCSTRING("invsqrt","\x51","\x85","\x31","\x47"),
	HX_HCSTRING("sqr","\x14","\xa6","\x57","\x00"),
	HX_HCSTRING("clamp2","\xd7","\x28","\x0c","\x05"),
	HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"),
	::String(null()) };

void ZPP_Math_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Math","\xf8","\x21","\xfa","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Math_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Math_obj >;
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
} // end namespace util
