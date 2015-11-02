#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_SweepData_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_SweepData","new",0x98ff051a,"zpp_nape.space.ZPP_SweepData.new","zpp_nape/space/SweepPhase.hx",174,0x6f338844)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(202)
	this->aabb = null();
	HX_STACK_LINE(201)
	this->shape = null();
	HX_STACK_LINE(200)
	this->prev = null();
	HX_STACK_LINE(175)
	this->next = null();
}
;
	return null();
}

//ZPP_SweepData_obj::~ZPP_SweepData_obj() { }

Dynamic ZPP_SweepData_obj::__CreateEmpty() { return  new ZPP_SweepData_obj; }
hx::ObjectPtr< ZPP_SweepData_obj > ZPP_SweepData_obj::__new()
{  hx::ObjectPtr< ZPP_SweepData_obj > _result_ = new ZPP_SweepData_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SweepData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SweepData_obj > _result_ = new ZPP_SweepData_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SweepData_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepData","free",0x40e58ab2,"zpp_nape.space.ZPP_SweepData.free","zpp_nape/space/SweepPhase.hx",205,0x6f338844)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		this->prev = null();
		HX_STACK_LINE(207)
		this->shape = null();
		HX_STACK_LINE(208)
		this->aabb = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SweepData_obj,free,(void))

Void ZPP_SweepData_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepData","alloc",0xa300fbaf,"zpp_nape.space.ZPP_SweepData.alloc","zpp_nape/space/SweepPhase.hx",212,0x6f338844)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SweepData_obj,alloc,(void))

bool ZPP_SweepData_obj::gt( ::zpp_nape::space::ZPP_SweepData x){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepData","gt",0x76ed9ab3,"zpp_nape.space.ZPP_SweepData.gt","zpp_nape/space/SweepPhase.hx",216,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(217)
	::zpp_nape::geom::ZPP_AABB tmp = this->aabb;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	Float tmp1 = tmp->minx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	Float tmp2 = x->aabb->minx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SweepData_obj,gt,return )

::zpp_nape::space::ZPP_SweepData ZPP_SweepData_obj::zpp_pool;


ZPP_SweepData_obj::ZPP_SweepData_obj()
{
}

void ZPP_SweepData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SweepData);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_END_CLASS();
}

void ZPP_SweepData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
}

Dynamic ZPP_SweepData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gt") ) { return gt_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_SweepData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_SweepData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SweepData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return true; }
	}
	return false;
}

void ZPP_SweepData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_SweepData*/ ,(int)offsetof(ZPP_SweepData_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::space::ZPP_SweepData*/ ,(int)offsetof(ZPP_SweepData_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_SweepData_obj,shape),HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_SweepData_obj,aabb),HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_SweepData*/ ,(void *) &ZPP_SweepData_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"),
	HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("gt","\x2d","\x5a","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SweepData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SweepData_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SweepData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SweepData_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_SweepData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_SweepData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_SweepData","\x28","\x30","\x64","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SweepData_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_SweepData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SweepData_obj >;
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

void ZPP_SweepData_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
