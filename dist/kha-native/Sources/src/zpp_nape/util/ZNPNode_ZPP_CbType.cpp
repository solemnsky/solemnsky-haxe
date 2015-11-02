#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_CbType_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_CbType","new",0x72cf04bc,"zpp_nape.util.ZNPNode_ZPP_CbType.new","zpp_nape/util/Lists.hx",14771,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14805)
	this->elt = null();
	HX_STACK_LINE(14796)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_CbType_obj::~ZNPNode_ZPP_CbType_obj() { }

Dynamic ZNPNode_ZPP_CbType_obj::__CreateEmpty() { return  new ZNPNode_ZPP_CbType_obj; }
hx::ObjectPtr< ZNPNode_ZPP_CbType_obj > ZNPNode_ZPP_CbType_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_CbType_obj > _result_ = new ZNPNode_ZPP_CbType_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPNode_ZPP_CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_CbType_obj > _result_ = new ZNPNode_ZPP_CbType_obj();
	_result_->__construct();
	return _result_;}

Void ZNPNode_ZPP_CbType_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_CbType","alloc",0x9089a7d1,"zpp_nape.util.ZNPNode_ZPP_CbType.alloc","zpp_nape/util/Lists.hx",14799,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_CbType_obj,alloc,(void))

Void ZNPNode_ZPP_CbType_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_CbType","free",0xfd1538d0,"zpp_nape.util.ZNPNode_ZPP_CbType.free","zpp_nape/util/Lists.hx",14803,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14803)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_CbType_obj,free,(void))

::zpp_nape::callbacks::ZPP_CbType ZNPNode_ZPP_CbType_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_CbType","elem",0xfc6774b3,"zpp_nape.util.ZNPNode_ZPP_CbType.elem","zpp_nape/util/Lists.hx",14809,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14810)
	::zpp_nape::callbacks::ZPP_CbType tmp = this->elt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14810)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_CbType_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPNode_ZPP_CbType_obj::zpp_pool;


ZNPNode_ZPP_CbType_obj::ZNPNode_ZPP_CbType_obj()
{
}

void ZNPNode_ZPP_CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_CbType);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_CbType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZNPNode_ZPP_CbType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZNPNode_ZPP_CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbType >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPNode_ZPP_CbType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbType >(); return true; }
	}
	return false;
}

void ZNPNode_ZPP_CbType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CbType*/ ,(int)offsetof(ZNPNode_ZPP_CbType_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbType*/ ,(int)offsetof(ZNPNode_ZPP_CbType_obj,elt),HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CbType*/ ,(void *) &ZNPNode_ZPP_CbType_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_CbType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_CbType_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_CbType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_CbType_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZNPNode_ZPP_CbType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZNPNode_ZPP_CbType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPNode_ZPP_CbType","\xca","\x36","\x4f","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZNPNode_ZPP_CbType_obj::__GetStatic;
	__mClass->mSetStaticField = &ZNPNode_ZPP_CbType_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPNode_ZPP_CbType_obj >;
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

void ZNPNode_ZPP_CbType_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
