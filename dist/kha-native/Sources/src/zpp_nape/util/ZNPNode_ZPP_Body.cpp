#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_Body_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Body","new",0x472370a5,"zpp_nape.util.ZNPNode_ZPP_Body.new","zpp_nape/util/Lists.hx",14900,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14934)
	this->elt = null();
	HX_STACK_LINE(14925)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_Body_obj::~ZNPNode_ZPP_Body_obj() { }

Dynamic ZNPNode_ZPP_Body_obj::__CreateEmpty() { return  new ZNPNode_ZPP_Body_obj; }
hx::ObjectPtr< ZNPNode_ZPP_Body_obj > ZNPNode_ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_Body_obj > _result_ = new ZNPNode_ZPP_Body_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPNode_ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_Body_obj > _result_ = new ZNPNode_ZPP_Body_obj();
	_result_->__construct();
	return _result_;}

Void ZNPNode_ZPP_Body_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Body","alloc",0x73bf9ffa,"zpp_nape.util.ZNPNode_ZPP_Body.alloc","zpp_nape/util/Lists.hx",14928,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Body_obj,alloc,(void))

Void ZNPNode_ZPP_Body_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Body","free",0xf29f38c7,"zpp_nape.util.ZNPNode_ZPP_Body.free","zpp_nape/util/Lists.hx",14932,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14932)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Body_obj,free,(void))

::zpp_nape::phys::ZPP_Body ZNPNode_ZPP_Body_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Body","elem",0xf1f174aa,"zpp_nape.util.ZNPNode_ZPP_Body.elem","zpp_nape/util/Lists.hx",14938,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14939)
	::zpp_nape::phys::ZPP_Body tmp = this->elt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14939)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Body_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPNode_ZPP_Body_obj::zpp_pool;


ZNPNode_ZPP_Body_obj::ZNPNode_ZPP_Body_obj()
{
}

void ZNPNode_ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Body);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_Body_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZNPNode_ZPP_Body_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZNPNode_ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPNode_ZPP_Body_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return true; }
	}
	return false;
}

void ZNPNode_ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Body*/ ,(int)offsetof(ZNPNode_ZPP_Body_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZNPNode_ZPP_Body_obj,elt),HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Body*/ ,(void *) &ZNPNode_ZPP_Body_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZNPNode_ZPP_Body_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZNPNode_ZPP_Body_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPNode_ZPP_Body","\x33","\x3a","\xd3","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZNPNode_ZPP_Body_obj::__GetStatic;
	__mClass->mSetStaticField = &ZNPNode_ZPP_Body_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPNode_ZPP_Body_obj >;
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

void ZNPNode_ZPP_Body_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
