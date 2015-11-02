#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MarchSpan_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchSpan","new",0x55819ba9,"zpp_nape.geom.ZPP_MarchSpan.new","zpp_nape/geom/MarchingSquares.hx",174,0xc3305538)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(178)
	this->next = null();
	HX_STACK_LINE(177)
	this->out = false;
	HX_STACK_LINE(176)
	this->rank = (int)0;
	HX_STACK_LINE(175)
	this->parent = null();
	HX_STACK_LINE(215)
	this->parent = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ZPP_MarchSpan_obj::~ZPP_MarchSpan_obj() { }

Dynamic ZPP_MarchSpan_obj::__CreateEmpty() { return  new ZPP_MarchSpan_obj; }
hx::ObjectPtr< ZPP_MarchSpan_obj > ZPP_MarchSpan_obj::__new()
{  hx::ObjectPtr< ZPP_MarchSpan_obj > _result_ = new ZPP_MarchSpan_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_MarchSpan_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MarchSpan_obj > _result_ = new ZPP_MarchSpan_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_MarchSpan_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchSpan","free",0x76a6b143,"zpp_nape.geom.ZPP_MarchSpan.free","zpp_nape/geom/MarchingSquares.hx",206,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		this->parent = hx::ObjectPtr<OBJ_>(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchSpan_obj,free,(void))

Void ZPP_MarchSpan_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchSpan","alloc",0x764193fe,"zpp_nape.geom.ZPP_MarchSpan.alloc","zpp_nape/geom/MarchingSquares.hx",210,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		this->out = false;
		HX_STACK_LINE(212)
		this->rank = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchSpan_obj,alloc,(void))

::zpp_nape::geom::ZPP_MarchSpan ZPP_MarchSpan_obj::zpp_pool;


ZPP_MarchSpan_obj::ZPP_MarchSpan_obj()
{
}

void ZPP_MarchSpan_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MarchSpan);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(rank,"rank");
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_MarchSpan_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(rank,"rank");
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_MarchSpan_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return out; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rank") ) { return rank; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_MarchSpan_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_MarchSpan_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rank") ) { rank=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_MarchSpan_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return true; }
	}
	return false;
}

void ZPP_MarchSpan_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("rank","\xac","\x4d","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchSpan_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_MarchSpan_obj,rank),HX_HCSTRING("rank","\xac","\x4d","\xa4","\x4b")},
	{hx::fsBool,(int)offsetof(ZPP_MarchSpan_obj,out),HX_HCSTRING("out","\x8e","\xa0","\x54","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchSpan_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(void *) &ZPP_MarchSpan_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("rank","\xac","\x4d","\xa4","\x4b"),
	HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchSpan_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_MarchSpan_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchSpan_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_MarchSpan_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_MarchSpan_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_MarchSpan_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_MarchSpan","\x37","\x93","\x76","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_MarchSpan_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_MarchSpan_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_MarchSpan_obj >;
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

void ZPP_MarchSpan_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
