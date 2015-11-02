#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","new",0xfb6d9f10,"zpp_nape.util.ZNPNode_ZPP_SensorArbiter.new","zpp_nape/util/Lists.hx",15975,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16009)
	this->elt = null();
	HX_STACK_LINE(16000)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_SensorArbiter_obj::~ZNPNode_ZPP_SensorArbiter_obj() { }

Dynamic ZNPNode_ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZNPNode_ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZNPNode_ZPP_SensorArbiter_obj > ZNPNode_ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_SensorArbiter_obj > _result_ = new ZNPNode_ZPP_SensorArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPNode_ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_SensorArbiter_obj > _result_ = new ZNPNode_ZPP_SensorArbiter_obj();
	_result_->__construct();
	return _result_;}

Void ZNPNode_ZPP_SensorArbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","alloc",0x71c27f25,"zpp_nape.util.ZNPNode_ZPP_SensorArbiter.alloc","zpp_nape/util/Lists.hx",16003,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SensorArbiter_obj,alloc,(void))

Void ZNPNode_ZPP_SensorArbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","free",0xff3da7fc,"zpp_nape.util.ZNPNode_ZPP_SensorArbiter.free","zpp_nape/util/Lists.hx",16007,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16007)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SensorArbiter_obj,free,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPNode_ZPP_SensorArbiter_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","elem",0xfe8fe3df,"zpp_nape.util.ZNPNode_ZPP_SensorArbiter.elem","zpp_nape/util/Lists.hx",16013,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16014)
	::zpp_nape::dynamics::ZPP_SensorArbiter tmp = this->elt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16014)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SensorArbiter_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;


ZNPNode_ZPP_SensorArbiter_obj::ZNPNode_ZPP_SensorArbiter_obj()
{
}

void ZNPNode_ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_SensorArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZNPNode_ZPP_SensorArbiter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZNPNode_ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::dynamics::ZPP_SensorArbiter >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPNode_ZPP_SensorArbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return true; }
	}
	return false;
}

void ZNPNode_ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SensorArbiter*/ ,(int)offsetof(ZNPNode_ZPP_SensorArbiter_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_SensorArbiter*/ ,(int)offsetof(ZNPNode_ZPP_SensorArbiter_obj,elt),HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SensorArbiter*/ ,(void *) &ZNPNode_ZPP_SensorArbiter_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"),
	HX_HCSTRING("elem","\x8f","\xd8","\x14","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_SensorArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_SensorArbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_SensorArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_SensorArbiter_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZNPNode_ZPP_SensorArbiter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZNPNode_ZPP_SensorArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPNode_ZPP_SensorArbiter","\x1e","\x17","\xd5","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZNPNode_ZPP_SensorArbiter_obj::__GetStatic;
	__mClass->mSetStaticField = &ZNPNode_ZPP_SensorArbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPNode_ZPP_SensorArbiter_obj >;
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

void ZNPNode_ZPP_SensorArbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
