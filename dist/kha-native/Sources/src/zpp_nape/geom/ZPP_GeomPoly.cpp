#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_GeomPoly_obj::__construct(::nape::geom::GeomPoly outer)
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomPoly","new",0x1e62c450,"zpp_nape.geom.ZPP_GeomPoly.new","zpp_nape/geom/GeomPoly.hx",319,0x22e30365)
HX_STACK_THIS(this)
HX_STACK_ARG(outer,"outer")
{
	HX_STACK_LINE(321)
	this->vertices = null();
	HX_STACK_LINE(320)
	this->outer = null();
	HX_STACK_LINE(323)
	this->outer = outer;
}
;
	return null();
}

//ZPP_GeomPoly_obj::~ZPP_GeomPoly_obj() { }

Dynamic ZPP_GeomPoly_obj::__CreateEmpty() { return  new ZPP_GeomPoly_obj; }
hx::ObjectPtr< ZPP_GeomPoly_obj > ZPP_GeomPoly_obj::__new(::nape::geom::GeomPoly outer)
{  hx::ObjectPtr< ZPP_GeomPoly_obj > _result_ = new ZPP_GeomPoly_obj();
	_result_->__construct(outer);
	return _result_;}

Dynamic ZPP_GeomPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_GeomPoly_obj > _result_ = new ZPP_GeomPoly_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


ZPP_GeomPoly_obj::ZPP_GeomPoly_obj()
{
}

void ZPP_GeomPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_GeomPoly);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_END_CLASS();
}

void ZPP_GeomPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
}

Dynamic ZPP_GeomPoly_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_GeomPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::GeomPoly >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_GeomPoly_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_GeomPoly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::GeomPoly*/ ,(int)offsetof(ZPP_GeomPoly_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_GeomPoly_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_GeomPoly_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_GeomPoly_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_GeomPoly_obj::__mClass;

void ZPP_GeomPoly_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_GeomPoly","\x5e","\x9c","\x7e","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_GeomPoly_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_GeomPoly_obj >;
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

} // end namespace zpp_nape
} // end namespace geom
