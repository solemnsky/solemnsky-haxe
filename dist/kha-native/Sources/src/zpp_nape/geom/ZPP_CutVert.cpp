#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_CutVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_CutVert","new",0xba53d64f,"zpp_nape.geom.ZPP_CutVert.new","zpp_nape/geom/Cutter.hx",174,0x9f85878e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(208)
	this->used = false;
	HX_STACK_LINE(207)
	this->rank = (int)0;
	HX_STACK_LINE(206)
	this->parent = null();
	HX_STACK_LINE(205)
	this->positive = false;
	HX_STACK_LINE(204)
	this->value = ((Float)0.0);
	HX_STACK_LINE(203)
	this->vert = null();
	HX_STACK_LINE(202)
	this->posy = ((Float)0.0);
	HX_STACK_LINE(201)
	this->posx = ((Float)0.0);
	HX_STACK_LINE(200)
	this->next = null();
	HX_STACK_LINE(199)
	this->prev = null();
}
;
	return null();
}

//ZPP_CutVert_obj::~ZPP_CutVert_obj() { }

Dynamic ZPP_CutVert_obj::__CreateEmpty() { return  new ZPP_CutVert_obj; }
hx::ObjectPtr< ZPP_CutVert_obj > ZPP_CutVert_obj::__new()
{  hx::ObjectPtr< ZPP_CutVert_obj > _result_ = new ZPP_CutVert_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_CutVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CutVert_obj > _result_ = new ZPP_CutVert_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_CutVert_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_CutVert","alloc",0x60144424,"zpp_nape.geom.ZPP_CutVert.alloc","zpp_nape/geom/Cutter.hx",212,0x9f85878e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CutVert_obj,alloc,(void))

Void ZPP_CutVert_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_CutVert","free",0x49c7c7dd,"zpp_nape.geom.ZPP_CutVert.free","zpp_nape/geom/Cutter.hx",215,0x9f85878e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		this->vert = null();
		HX_STACK_LINE(217)
		this->parent = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CutVert_obj,free,(void))

::zpp_nape::geom::ZPP_CutVert ZPP_CutVert_obj::zpp_pool;

::zpp_nape::geom::ZPP_CutVert ZPP_CutVert_obj::path( ::zpp_nape::geom::ZPP_GeomVert poly){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_CutVert","path",0x505710d6,"zpp_nape.geom.ZPP_CutVert.path","zpp_nape/geom/Cutter.hx",220,0x9f85878e)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_LINE(221)
	::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(223)
		::zpp_nape::geom::ZPP_CutVert tmp = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		if ((tmp1)){
			HX_STACK_LINE(224)
			::zpp_nape::geom::ZPP_CutVert tmp2 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(230)
			::zpp_nape::geom::ZPP_CutVert tmp2 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			ret = tmp2;
			HX_STACK_LINE(231)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
			HX_STACK_LINE(232)
			ret->next = null();
		}
		HX_STACK_LINE(237)
		Dynamic();
	}
	HX_STACK_LINE(239)
	ret->vert = poly;
	HX_STACK_LINE(240)
	ret->parent = ret;
	HX_STACK_LINE(241)
	ret->rank = (int)0;
	HX_STACK_LINE(242)
	ret->used = false;
	HX_STACK_LINE(243)
	::zpp_nape::geom::ZPP_CutVert tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_CutVert_obj,path,return )


ZPP_CutVert_obj::ZPP_CutVert_obj()
{
}

void ZPP_CutVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CutVert);
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(posx,"posx");
	HX_MARK_MEMBER_NAME(posy,"posy");
	HX_MARK_MEMBER_NAME(vert,"vert");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(positive,"positive");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(rank,"rank");
	HX_MARK_MEMBER_NAME(used,"used");
	HX_MARK_END_CLASS();
}

void ZPP_CutVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(posx,"posx");
	HX_VISIT_MEMBER_NAME(posy,"posy");
	HX_VISIT_MEMBER_NAME(vert,"vert");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(positive,"positive");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(rank,"rank");
	HX_VISIT_MEMBER_NAME(used,"used");
}

Dynamic ZPP_CutVert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"posx") ) { return posx; }
		if (HX_FIELD_EQ(inName,"posy") ) { return posy; }
		if (HX_FIELD_EQ(inName,"vert") ) { return vert; }
		if (HX_FIELD_EQ(inName,"rank") ) { return rank; }
		if (HX_FIELD_EQ(inName,"used") ) { return used; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"positive") ) { return positive; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_CutVert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { outValue = path_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_CutVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posx") ) { posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posy") ) { posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert") ) { vert=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rank") ) { rank=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"used") ) { used=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"positive") ) { positive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_CutVert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return true; }
	}
	return false;
}

void ZPP_CutVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("posx","\x64","\x84","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("posy","\x65","\x84","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("positive","\xb9","\xa6","\xfa","\xca"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("rank","\xac","\x4d","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("used","\x3d","\x92","\xad","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutVert*/ ,(int)offsetof(ZPP_CutVert_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutVert*/ ,(int)offsetof(ZPP_CutVert_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(ZPP_CutVert_obj,posx),HX_HCSTRING("posx","\x64","\x84","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(ZPP_CutVert_obj,posy),HX_HCSTRING("posy","\x65","\x84","\x5c","\x4a")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_CutVert_obj,vert),HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e")},
	{hx::fsFloat,(int)offsetof(ZPP_CutVert_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(ZPP_CutVert_obj,positive),HX_HCSTRING("positive","\xb9","\xa6","\xfa","\xca")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutVert*/ ,(int)offsetof(ZPP_CutVert_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_CutVert_obj,rank),HX_HCSTRING("rank","\xac","\x4d","\xa4","\x4b")},
	{hx::fsBool,(int)offsetof(ZPP_CutVert_obj,used),HX_HCSTRING("used","\x3d","\x92","\xad","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutVert*/ ,(void *) &ZPP_CutVert_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("posx","\x64","\x84","\x5c","\x4a"),
	HX_HCSTRING("posy","\x65","\x84","\x5c","\x4a"),
	HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("positive","\xb9","\xa6","\xfa","\xca"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("rank","\xac","\x4d","\xa4","\x4b"),
	HX_HCSTRING("used","\x3d","\x92","\xad","\x4d"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CutVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CutVert_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CutVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CutVert_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_CutVert_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	::String(null()) };

void ZPP_CutVert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_CutVert","\xdd","\x02","\x61","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_CutVert_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_CutVert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_CutVert_obj >;
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

void ZPP_CutVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
