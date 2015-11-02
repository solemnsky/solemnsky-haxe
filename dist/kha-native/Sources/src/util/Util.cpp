#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_util_Util
#include <util/Util.h>
#endif
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
namespace util{

Void Util_obj::__construct()
{
	return null();
}

//Util_obj::~Util_obj() { }

Dynamic Util_obj::__CreateEmpty() { return  new Util_obj; }
hx::ObjectPtr< Util_obj > Util_obj::__new()
{  hx::ObjectPtr< Util_obj > _result_ = new Util_obj();
	_result_->__construct();
	return _result_;}

Dynamic Util_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Util_obj > _result_ = new Util_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec2 Util_obj::napeFromVector( ::util::Vector vec){
	HX_STACK_FRAME("util.Util","napeFromVector",0x34bc4135,"util.Util.napeFromVector","util/Util.hx",12,0xba8b9d8f)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(13)
	::nape::geom::Vec2 tmp = ::nape::geom::Vec2_obj::__new(vec->x,vec->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,napeFromVector,return )

::util::Vector Util_obj::vectorFromNape( ::nape::geom::Vec2 vec){
	HX_STACK_FRAME("util.Util","vectorFromNape",0x966d8bb5,"util.Util.vectorFromNape","util/Util.hx",16,0xba8b9d8f)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(17)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			bool tmp1 = (vec != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(17)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17)
			if ((tmp1)){
				HX_STACK_LINE(17)
				tmp2 = vec->zpp_disp;
			}
			else{
				HX_STACK_LINE(17)
				tmp2 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp2)){
				HX_STACK_LINE(17)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(17)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			::zpp_nape::geom::ZPP_Vec2 _this = vec->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(17)
			bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(17)
			if ((tmp1)){
				HX_STACK_LINE(17)
				_this->_validate();
			}
		}
		HX_STACK_LINE(17)
		tmp = vec->zpp_inner->x;
	}
	HX_STACK_LINE(17)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			bool tmp2 = (vec != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			if ((tmp2)){
				HX_STACK_LINE(17)
				tmp3 = vec->zpp_disp;
			}
			else{
				HX_STACK_LINE(17)
				tmp3 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp3)){
				HX_STACK_LINE(17)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(17)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			::zpp_nape::geom::ZPP_Vec2 _this = vec->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(17)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17)
			if ((tmp2)){
				HX_STACK_LINE(17)
				_this->_validate();
			}
		}
		HX_STACK_LINE(17)
		tmp1 = vec->zpp_inner->y;
	}
	HX_STACK_LINE(17)
	::util::Vector tmp2 = ::util::Vector_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,vectorFromNape,return )


Util_obj::Util_obj()
{
}

bool Util_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"napeFromVector") ) { outValue = napeFromVector_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vectorFromNape") ) { outValue = vectorFromNape_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Util_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Util_obj::__mClass,"__mClass");
};

#endif

hx::Class Util_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("napeFromVector","\xd5","\x60","\x3c","\x81"),
	HX_HCSTRING("vectorFromNape","\x55","\xab","\xed","\xe2"),
	::String(null()) };

void Util_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.Util","\x0e","\x94","\xff","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Util_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Util_obj >;
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

} // end namespace util
