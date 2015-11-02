#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MarchPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchPair","new",0xba9d84f9,"zpp_nape.geom.ZPP_MarchPair.new","zpp_nape/geom/MarchingSquares.hx",219,0xc3305538)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(233)
	this->next = null();
	HX_STACK_LINE(232)
	this->spanr = null();
	HX_STACK_LINE(231)
	this->span2 = null();
	HX_STACK_LINE(230)
	this->span1 = null();
	HX_STACK_LINE(229)
	this->pd = null();
	HX_STACK_LINE(228)
	this->okeyr = (int)0;
	HX_STACK_LINE(227)
	this->keyr = (int)0;
	HX_STACK_LINE(226)
	this->pr = null();
	HX_STACK_LINE(225)
	this->okey2 = (int)0;
	HX_STACK_LINE(224)
	this->key2 = (int)0;
	HX_STACK_LINE(223)
	this->p2 = null();
	HX_STACK_LINE(222)
	this->okey1 = (int)0;
	HX_STACK_LINE(221)
	this->key1 = (int)0;
	HX_STACK_LINE(220)
	this->p1 = null();
}
;
	return null();
}

//ZPP_MarchPair_obj::~ZPP_MarchPair_obj() { }

Dynamic ZPP_MarchPair_obj::__CreateEmpty() { return  new ZPP_MarchPair_obj; }
hx::ObjectPtr< ZPP_MarchPair_obj > ZPP_MarchPair_obj::__new()
{  hx::ObjectPtr< ZPP_MarchPair_obj > _result_ = new ZPP_MarchPair_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_MarchPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MarchPair_obj > _result_ = new ZPP_MarchPair_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_MarchPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchPair","free",0x89f6edf3,"zpp_nape.geom.ZPP_MarchPair.free","zpp_nape/geom/MarchingSquares.hx",260,0xc3305538)
		HX_STACK_THIS(this)
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_GeomVert tmp = this->pd = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_GeomVert tmp1 = this->pr = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = this->p2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		this->p1 = tmp2;
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_MarchSpan tmp3 = this->spanr = null();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_MarchSpan tmp4 = this->span2 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		this->span1 = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchPair_obj,free,(void))

Void ZPP_MarchPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_MarchPair","alloc",0x4926714e,"zpp_nape.geom.ZPP_MarchPair.alloc","zpp_nape/geom/MarchingSquares.hx",266,0xc3305538)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_MarchPair_obj,alloc,(void))

::zpp_nape::geom::ZPP_MarchPair ZPP_MarchPair_obj::zpp_pool;


ZPP_MarchPair_obj::ZPP_MarchPair_obj()
{
}

void ZPP_MarchPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MarchPair);
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(key1,"key1");
	HX_MARK_MEMBER_NAME(okey1,"okey1");
	HX_MARK_MEMBER_NAME(p2,"p2");
	HX_MARK_MEMBER_NAME(key2,"key2");
	HX_MARK_MEMBER_NAME(okey2,"okey2");
	HX_MARK_MEMBER_NAME(pr,"pr");
	HX_MARK_MEMBER_NAME(keyr,"keyr");
	HX_MARK_MEMBER_NAME(okeyr,"okeyr");
	HX_MARK_MEMBER_NAME(pd,"pd");
	HX_MARK_MEMBER_NAME(span1,"span1");
	HX_MARK_MEMBER_NAME(span2,"span2");
	HX_MARK_MEMBER_NAME(spanr,"spanr");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_MarchPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(key1,"key1");
	HX_VISIT_MEMBER_NAME(okey1,"okey1");
	HX_VISIT_MEMBER_NAME(p2,"p2");
	HX_VISIT_MEMBER_NAME(key2,"key2");
	HX_VISIT_MEMBER_NAME(okey2,"okey2");
	HX_VISIT_MEMBER_NAME(pr,"pr");
	HX_VISIT_MEMBER_NAME(keyr,"keyr");
	HX_VISIT_MEMBER_NAME(okeyr,"okeyr");
	HX_VISIT_MEMBER_NAME(pd,"pd");
	HX_VISIT_MEMBER_NAME(span1,"span1");
	HX_VISIT_MEMBER_NAME(span2,"span2");
	HX_VISIT_MEMBER_NAME(spanr,"spanr");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_MarchPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		if (HX_FIELD_EQ(inName,"p2") ) { return p2; }
		if (HX_FIELD_EQ(inName,"pr") ) { return pr; }
		if (HX_FIELD_EQ(inName,"pd") ) { return pd; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"key1") ) { return key1; }
		if (HX_FIELD_EQ(inName,"key2") ) { return key2; }
		if (HX_FIELD_EQ(inName,"keyr") ) { return keyr; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"okey1") ) { return okey1; }
		if (HX_FIELD_EQ(inName,"okey2") ) { return okey2; }
		if (HX_FIELD_EQ(inName,"okeyr") ) { return okeyr; }
		if (HX_FIELD_EQ(inName,"span1") ) { return span1; }
		if (HX_FIELD_EQ(inName,"span2") ) { return span2; }
		if (HX_FIELD_EQ(inName,"spanr") ) { return spanr; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_MarchPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_MarchPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { p1=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2") ) { p2=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pr") ) { pr=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pd") ) { pd=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"key1") ) { key1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key2") ) { key2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyr") ) { keyr=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_MarchPair >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"okey1") ) { okey1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"okey2") ) { okey2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"okeyr") ) { okeyr=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"span1") ) { span1=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		if (HX_FIELD_EQ(inName,"span2") ) { span2=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spanr") ) { spanr=inValue.Cast< ::zpp_nape::geom::ZPP_MarchSpan >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_MarchPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_MarchPair >(); return true; }
	}
	return false;
}

void ZPP_MarchPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("key1","\xb2","\xe1","\x06","\x47"));
	outFields->push(HX_HCSTRING("okey1","\xa1","\x45","\x81","\x30"));
	outFields->push(HX_HCSTRING("p2","\xc2","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("key2","\xb3","\xe1","\x06","\x47"));
	outFields->push(HX_HCSTRING("okey2","\xa2","\x45","\x81","\x30"));
	outFields->push(HX_HCSTRING("pr","\x02","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("keyr","\xf3","\xe1","\x06","\x47"));
	outFields->push(HX_HCSTRING("okeyr","\xe2","\x45","\x81","\x30"));
	outFields->push(HX_HCSTRING("pd","\xf4","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("span1","\x27","\x96","\x66","\x81"));
	outFields->push(HX_HCSTRING("span2","\x28","\x96","\x66","\x81"));
	outFields->push(HX_HCSTRING("spanr","\x68","\x96","\x66","\x81"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_MarchPair_obj,p1),HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,key1),HX_HCSTRING("key1","\xb2","\xe1","\x06","\x47")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,okey1),HX_HCSTRING("okey1","\xa1","\x45","\x81","\x30")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_MarchPair_obj,p2),HX_HCSTRING("p2","\xc2","\x61","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,key2),HX_HCSTRING("key2","\xb3","\xe1","\x06","\x47")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,okey2),HX_HCSTRING("okey2","\xa2","\x45","\x81","\x30")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_MarchPair_obj,pr),HX_HCSTRING("pr","\x02","\x62","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,keyr),HX_HCSTRING("keyr","\xf3","\xe1","\x06","\x47")},
	{hx::fsInt,(int)offsetof(ZPP_MarchPair_obj,okeyr),HX_HCSTRING("okeyr","\xe2","\x45","\x81","\x30")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_MarchPair_obj,pd),HX_HCSTRING("pd","\xf4","\x61","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchPair_obj,span1),HX_HCSTRING("span1","\x27","\x96","\x66","\x81")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchPair_obj,span2),HX_HCSTRING("span2","\x28","\x96","\x66","\x81")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchSpan*/ ,(int)offsetof(ZPP_MarchPair_obj,spanr),HX_HCSTRING("spanr","\x68","\x96","\x66","\x81")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchPair*/ ,(int)offsetof(ZPP_MarchPair_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_MarchPair*/ ,(void *) &ZPP_MarchPair_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"),
	HX_HCSTRING("key1","\xb2","\xe1","\x06","\x47"),
	HX_HCSTRING("okey1","\xa1","\x45","\x81","\x30"),
	HX_HCSTRING("p2","\xc2","\x61","\x00","\x00"),
	HX_HCSTRING("key2","\xb3","\xe1","\x06","\x47"),
	HX_HCSTRING("okey2","\xa2","\x45","\x81","\x30"),
	HX_HCSTRING("pr","\x02","\x62","\x00","\x00"),
	HX_HCSTRING("keyr","\xf3","\xe1","\x06","\x47"),
	HX_HCSTRING("okeyr","\xe2","\x45","\x81","\x30"),
	HX_HCSTRING("pd","\xf4","\x61","\x00","\x00"),
	HX_HCSTRING("span1","\x27","\x96","\x66","\x81"),
	HX_HCSTRING("span2","\x28","\x96","\x66","\x81"),
	HX_HCSTRING("spanr","\x68","\x96","\x66","\x81"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_MarchPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_MarchPair_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_MarchPair_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_MarchPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_MarchPair","\x87","\x94","\x6f","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_MarchPair_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_MarchPair_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_MarchPair_obj >;
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

void ZPP_MarchPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
