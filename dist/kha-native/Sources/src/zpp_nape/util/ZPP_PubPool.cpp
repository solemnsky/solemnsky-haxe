#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_PubPool_obj::__construct()
{
	return null();
}

//ZPP_PubPool_obj::~ZPP_PubPool_obj() { }

Dynamic ZPP_PubPool_obj::__CreateEmpty() { return  new ZPP_PubPool_obj; }
hx::ObjectPtr< ZPP_PubPool_obj > ZPP_PubPool_obj::__new()
{  hx::ObjectPtr< ZPP_PubPool_obj > _result_ = new ZPP_PubPool_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_PubPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PubPool_obj > _result_ = new ZPP_PubPool_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::GeomPoly ZPP_PubPool_obj::poolGeomPoly;

::nape::geom::GeomPoly ZPP_PubPool_obj::nextGeomPoly;

::nape::geom::Vec2 ZPP_PubPool_obj::poolVec2;

::nape::geom::Vec2 ZPP_PubPool_obj::nextVec2;

::nape::geom::Vec3 ZPP_PubPool_obj::poolVec3;

::nape::geom::Vec3 ZPP_PubPool_obj::nextVec3;


ZPP_PubPool_obj::ZPP_PubPool_obj()
{
}

bool ZPP_PubPool_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"poolVec2") ) { outValue = poolVec2; return true;  }
		if (HX_FIELD_EQ(inName,"nextVec2") ) { outValue = nextVec2; return true;  }
		if (HX_FIELD_EQ(inName,"poolVec3") ) { outValue = poolVec3; return true;  }
		if (HX_FIELD_EQ(inName,"nextVec3") ) { outValue = nextVec3; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"poolGeomPoly") ) { outValue = poolGeomPoly; return true;  }
		if (HX_FIELD_EQ(inName,"nextGeomPoly") ) { outValue = nextGeomPoly; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nape::geom::GeomPoly*/ ,(void *) &ZPP_PubPool_obj::poolGeomPoly,HX_HCSTRING("poolGeomPoly","\x24","\x30","\xc8","\xa0")},
	{hx::fsObject /*::nape::geom::GeomPoly*/ ,(void *) &ZPP_PubPool_obj::nextGeomPoly,HX_HCSTRING("nextGeomPoly","\x3b","\xa3","\xc2","\x6e")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(void *) &ZPP_PubPool_obj::poolVec2,HX_HCSTRING("poolVec2","\x5a","\x72","\xe9","\xd7")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(void *) &ZPP_PubPool_obj::nextVec2,HX_HCSTRING("nextVec2","\xf1","\xcd","\x18","\xfa")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(void *) &ZPP_PubPool_obj::poolVec3,HX_HCSTRING("poolVec3","\x5b","\x72","\xe9","\xd7")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(void *) &ZPP_PubPool_obj::nextVec3,HX_HCSTRING("nextVec3","\xf2","\xcd","\x18","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::poolGeomPoly,"poolGeomPoly");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::nextGeomPoly,"nextGeomPoly");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::poolVec2,"poolVec2");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::nextVec2,"nextVec2");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::poolVec3,"poolVec3");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::nextVec3,"nextVec3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::poolGeomPoly,"poolGeomPoly");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::nextGeomPoly,"nextGeomPoly");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::poolVec2,"poolVec2");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::nextVec2,"nextVec2");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::poolVec3,"poolVec3");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::nextVec3,"nextVec3");
};

#endif

hx::Class ZPP_PubPool_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("poolGeomPoly","\x24","\x30","\xc8","\xa0"),
	HX_HCSTRING("nextGeomPoly","\x3b","\xa3","\xc2","\x6e"),
	HX_HCSTRING("poolVec2","\x5a","\x72","\xe9","\xd7"),
	HX_HCSTRING("nextVec2","\xf1","\xcd","\x18","\xfa"),
	HX_HCSTRING("poolVec3","\x5b","\x72","\xe9","\xd7"),
	HX_HCSTRING("nextVec3","\xf2","\xcd","\x18","\xfa"),
	::String(null()) };

void ZPP_PubPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_PubPool","\x09","\x10","\x62","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_PubPool_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_PubPool_obj >;
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

void ZPP_PubPool_obj::__boot()
{
	poolGeomPoly= null();
	nextGeomPoly= null();
	poolVec2= null();
	nextVec2= null();
	poolVec3= null();
	nextVec3= null();
}

} // end namespace zpp_nape
} // end namespace util
