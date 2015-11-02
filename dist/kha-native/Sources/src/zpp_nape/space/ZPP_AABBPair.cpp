#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_AABBPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_AABBPair","new",0x01861dfa,"zpp_nape.space.ZPP_AABBPair.new","zpp_nape/space/DynAABBPhase.hx",273,0x55500cf1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(281)
	this->next = null();
	HX_STACK_LINE(280)
	this->arb = null();
	HX_STACK_LINE(279)
	this->di = (int)0;
	HX_STACK_LINE(278)
	this->id = (int)0;
	HX_STACK_LINE(277)
	this->sleeping = false;
	HX_STACK_LINE(276)
	this->first = false;
	HX_STACK_LINE(275)
	this->n2 = null();
	HX_STACK_LINE(274)
	this->n1 = null();
}
;
	return null();
}

//ZPP_AABBPair_obj::~ZPP_AABBPair_obj() { }

Dynamic ZPP_AABBPair_obj::__CreateEmpty() { return  new ZPP_AABBPair_obj; }
hx::ObjectPtr< ZPP_AABBPair_obj > ZPP_AABBPair_obj::__new()
{  hx::ObjectPtr< ZPP_AABBPair_obj > _result_ = new ZPP_AABBPair_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_AABBPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABBPair_obj > _result_ = new ZPP_AABBPair_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_AABBPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBPair","alloc",0x8e280c8f,"zpp_nape.space.ZPP_AABBPair.alloc","zpp_nape/space/DynAABBPhase.hx",310,0x55500cf1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBPair_obj,alloc,(void))

Void ZPP_AABBPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBPair","free",0x4e9435d2,"zpp_nape.space.ZPP_AABBPair.free","zpp_nape/space/DynAABBPhase.hx",321,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		::zpp_nape::space::ZPP_AABBNode tmp = this->n2 = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		this->n1 = tmp;
		HX_STACK_LINE(331)
		this->sleeping = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBPair_obj,free,(void))

::zpp_nape::space::ZPP_AABBPair ZPP_AABBPair_obj::zpp_pool;


ZPP_AABBPair_obj::ZPP_AABBPair_obj()
{
}

void ZPP_AABBPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBPair);
	HX_MARK_MEMBER_NAME(n1,"n1");
	HX_MARK_MEMBER_NAME(n2,"n2");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(sleeping,"sleeping");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(arb,"arb");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_AABBPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(n1,"n1");
	HX_VISIT_MEMBER_NAME(n2,"n2");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(sleeping,"sleeping");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(arb,"arb");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_AABBPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"n1") ) { return n1; }
		if (HX_FIELD_EQ(inName,"n2") ) { return n2; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"arb") ) { return arb; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_AABBPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_AABBPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"n1") ) { n1=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n2") ) { n2=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"arb") ) { arb=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sleeping") ) { sleeping=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_AABBPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return true; }
	}
	return false;
}

void ZPP_AABBPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("n1","\x03","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("n2","\x04","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("first","\x30","\x78","\x9d","\x00"));
	outFields->push(HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("di","\x85","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("arb","\x51","\xfe","\x49","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBPair_obj,n1),HX_HCSTRING("n1","\x03","\x60","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBPair_obj,n2),HX_HCSTRING("n2","\x04","\x60","\x00","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_AABBPair_obj,first),HX_HCSTRING("first","\x30","\x78","\x9d","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_AABBPair_obj,sleeping),HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10")},
	{hx::fsInt,(int)offsetof(ZPP_AABBPair_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_AABBPair_obj,di),HX_HCSTRING("di","\x85","\x57","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(ZPP_AABBPair_obj,arb),HX_HCSTRING("arb","\x51","\xfe","\x49","\x00")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBPair*/ ,(int)offsetof(ZPP_AABBPair_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBPair*/ ,(void *) &ZPP_AABBPair_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("n1","\x03","\x60","\x00","\x00"),
	HX_HCSTRING("n2","\x04","\x60","\x00","\x00"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("di","\x85","\x57","\x00","\x00"),
	HX_HCSTRING("arb","\x51","\xfe","\x49","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABBPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABBPair_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_AABBPair_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_AABBPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_AABBPair","\x08","\x59","\x75","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_AABBPair_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_AABBPair_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_AABBPair_obj >;
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

void ZPP_AABBPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
