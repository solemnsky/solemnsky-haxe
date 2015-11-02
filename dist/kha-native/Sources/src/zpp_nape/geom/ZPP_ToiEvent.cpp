#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_ToiEvent_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_ToiEvent","new",0xcfb06dd4,"zpp_nape.geom.ZPP_ToiEvent.new","zpp_nape/geom/SweepDistance.hx",174,0x2645f2ee)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(221)
	this->kinematic = false;
	HX_STACK_LINE(220)
	this->failed = false;
	HX_STACK_LINE(219)
	this->slipped = false;
	HX_STACK_LINE(218)
	this->axis = null();
	HX_STACK_LINE(217)
	this->c2 = null();
	HX_STACK_LINE(216)
	this->c1 = null();
	HX_STACK_LINE(215)
	this->frozen2 = false;
	HX_STACK_LINE(214)
	this->frozen1 = false;
	HX_STACK_LINE(213)
	this->arbiter = null();
	HX_STACK_LINE(212)
	this->s2 = null();
	HX_STACK_LINE(211)
	this->s1 = null();
	HX_STACK_LINE(210)
	this->toi = ((Float)0.0);
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(223)
	::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	this->c1 = tmp;
	HX_STACK_LINE(224)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	this->c2 = tmp1;
	HX_STACK_LINE(225)
	::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	this->axis = tmp2;
}
;
	return null();
}

//ZPP_ToiEvent_obj::~ZPP_ToiEvent_obj() { }

Dynamic ZPP_ToiEvent_obj::__CreateEmpty() { return  new ZPP_ToiEvent_obj; }
hx::ObjectPtr< ZPP_ToiEvent_obj > ZPP_ToiEvent_obj::__new()
{  hx::ObjectPtr< ZPP_ToiEvent_obj > _result_ = new ZPP_ToiEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_ToiEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ToiEvent_obj > _result_ = new ZPP_ToiEvent_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_ToiEvent_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_ToiEvent","alloc",0xf76986e9,"zpp_nape.geom.ZPP_ToiEvent.alloc","zpp_nape/geom/SweepDistance.hx",202,0x2645f2ee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		this->failed = false;
		HX_STACK_LINE(204)
		::zpp_nape::shape::ZPP_Shape tmp = this->s2 = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		this->s1 = tmp;
		HX_STACK_LINE(205)
		this->arbiter = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ToiEvent_obj,alloc,(void))

Void ZPP_ToiEvent_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_ToiEvent","free",0xe56fc4b8,"zpp_nape.geom.ZPP_ToiEvent.free","zpp_nape/geom/SweepDistance.hx",209,0x2645f2ee)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ToiEvent_obj,free,(void))

::zpp_nape::geom::ZPP_ToiEvent ZPP_ToiEvent_obj::zpp_pool;


ZPP_ToiEvent_obj::ZPP_ToiEvent_obj()
{
}

void ZPP_ToiEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ToiEvent);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(toi,"toi");
	HX_MARK_MEMBER_NAME(s1,"s1");
	HX_MARK_MEMBER_NAME(s2,"s2");
	HX_MARK_MEMBER_NAME(arbiter,"arbiter");
	HX_MARK_MEMBER_NAME(frozen1,"frozen1");
	HX_MARK_MEMBER_NAME(frozen2,"frozen2");
	HX_MARK_MEMBER_NAME(c1,"c1");
	HX_MARK_MEMBER_NAME(c2,"c2");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(slipped,"slipped");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(kinematic,"kinematic");
	HX_MARK_END_CLASS();
}

void ZPP_ToiEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(toi,"toi");
	HX_VISIT_MEMBER_NAME(s1,"s1");
	HX_VISIT_MEMBER_NAME(s2,"s2");
	HX_VISIT_MEMBER_NAME(arbiter,"arbiter");
	HX_VISIT_MEMBER_NAME(frozen1,"frozen1");
	HX_VISIT_MEMBER_NAME(frozen2,"frozen2");
	HX_VISIT_MEMBER_NAME(c1,"c1");
	HX_VISIT_MEMBER_NAME(c2,"c2");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(slipped,"slipped");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(kinematic,"kinematic");
}

Dynamic ZPP_ToiEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s1") ) { return s1; }
		if (HX_FIELD_EQ(inName,"s2") ) { return s2; }
		if (HX_FIELD_EQ(inName,"c1") ) { return c1; }
		if (HX_FIELD_EQ(inName,"c2") ) { return c2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { return toi; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { return arbiter; }
		if (HX_FIELD_EQ(inName,"frozen1") ) { return frozen1; }
		if (HX_FIELD_EQ(inName,"frozen2") ) { return frozen2; }
		if (HX_FIELD_EQ(inName,"slipped") ) { return slipped; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { return kinematic; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_ToiEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_ToiEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2") ) { s2=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c1") ) { c1=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c2") ) { c2=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { toi=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_ToiEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { arbiter=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frozen1") ) { frozen1=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frozen2") ) { frozen2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slipped") ) { slipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { kinematic=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_ToiEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_ToiEvent >(); return true; }
	}
	return false;
}

void ZPP_ToiEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("toi","\x8e","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("s2","\x5f","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("arbiter","\xe9","\xbf","\x55","\x09"));
	outFields->push(HX_HCSTRING("frozen1","\x91","\xe2","\xa7","\x60"));
	outFields->push(HX_HCSTRING("frozen2","\x92","\xe2","\xa7","\x60"));
	outFields->push(HX_HCSTRING("c1","\x6e","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("c2","\x6f","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("slipped","\x0f","\x74","\x1f","\x9c"));
	outFields->push(HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"));
	outFields->push(HX_HCSTRING("kinematic","\x05","\x79","\xff","\xe3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_ToiEvent*/ ,(int)offsetof(ZPP_ToiEvent_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(ZPP_ToiEvent_obj,toi),HX_HCSTRING("toi","\x8e","\x66","\x58","\x00")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_ToiEvent_obj,s1),HX_HCSTRING("s1","\x5e","\x64","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_ToiEvent_obj,s2),HX_HCSTRING("s2","\x5f","\x64","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_ColArbiter*/ ,(int)offsetof(ZPP_ToiEvent_obj,arbiter),HX_HCSTRING("arbiter","\xe9","\xbf","\x55","\x09")},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,frozen1),HX_HCSTRING("frozen1","\x91","\xe2","\xa7","\x60")},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,frozen2),HX_HCSTRING("frozen2","\x92","\xe2","\xa7","\x60")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_ToiEvent_obj,c1),HX_HCSTRING("c1","\x6e","\x56","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_ToiEvent_obj,c2),HX_HCSTRING("c2","\x6f","\x56","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_ToiEvent_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,slipped),HX_HCSTRING("slipped","\x0f","\x74","\x1f","\x9c")},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,failed),HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7")},
	{hx::fsBool,(int)offsetof(ZPP_ToiEvent_obj,kinematic),HX_HCSTRING("kinematic","\x05","\x79","\xff","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_ToiEvent*/ ,(void *) &ZPP_ToiEvent_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("toi","\x8e","\x66","\x58","\x00"),
	HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"),
	HX_HCSTRING("s2","\x5f","\x64","\x00","\x00"),
	HX_HCSTRING("arbiter","\xe9","\xbf","\x55","\x09"),
	HX_HCSTRING("frozen1","\x91","\xe2","\xa7","\x60"),
	HX_HCSTRING("frozen2","\x92","\xe2","\xa7","\x60"),
	HX_HCSTRING("c1","\x6e","\x56","\x00","\x00"),
	HX_HCSTRING("c2","\x6f","\x56","\x00","\x00"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("slipped","\x0f","\x74","\x1f","\x9c"),
	HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"),
	HX_HCSTRING("kinematic","\x05","\x79","\xff","\xe3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ToiEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ToiEvent_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ToiEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ToiEvent_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_ToiEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_ToiEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_ToiEvent","\xe2","\x33","\xd0","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_ToiEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_ToiEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ToiEvent_obj >;
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

void ZPP_ToiEvent_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
