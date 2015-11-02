#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
#ifndef INCLUDED_kha_vr_PoseState
#include <kha/vr/PoseState.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpImage
#include <kha/vr/TimeWarpImage.h>
#endif
namespace kha{
namespace vr{

Void TimeWarpImage_obj::__construct()
{
HX_STACK_FRAME("kha.vr.TimeWarpImage","new",0x6279a4d0,"kha.vr.TimeWarpImage.new","kha/vr/TimeWarpImage.hx",40,0xd76b5b40)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TimeWarpImage_obj::~TimeWarpImage_obj() { }

Dynamic TimeWarpImage_obj::__CreateEmpty() { return  new TimeWarpImage_obj; }
hx::ObjectPtr< TimeWarpImage_obj > TimeWarpImage_obj::__new()
{  hx::ObjectPtr< TimeWarpImage_obj > _result_ = new TimeWarpImage_obj();
	_result_->__construct();
	return _result_;}

Dynamic TimeWarpImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimeWarpImage_obj > _result_ = new TimeWarpImage_obj();
	_result_->__construct();
	return _result_;}


TimeWarpImage_obj::TimeWarpImage_obj()
{
}

void TimeWarpImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimeWarpImage);
	HX_MARK_MEMBER_NAME(Image,"Image");
	HX_MARK_MEMBER_NAME(TexCoordsFromTanAngles,"TexCoordsFromTanAngles");
	HX_MARK_MEMBER_NAME(Pose,"Pose");
	HX_MARK_END_CLASS();
}

void TimeWarpImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Image,"Image");
	HX_VISIT_MEMBER_NAME(TexCoordsFromTanAngles,"TexCoordsFromTanAngles");
	HX_VISIT_MEMBER_NAME(Pose,"Pose");
}

Dynamic TimeWarpImage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Pose") ) { return Pose; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Image") ) { return Image; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TexCoordsFromTanAngles") ) { return TexCoordsFromTanAngles; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimeWarpImage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Pose") ) { Pose=inValue.Cast< ::kha::vr::PoseState >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Image") ) { Image=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TexCoordsFromTanAngles") ) { TexCoordsFromTanAngles=inValue.Cast< ::kha::math::Matrix4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TimeWarpImage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TimeWarpImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50"));
	outFields->push(HX_HCSTRING("TexCoordsFromTanAngles","\x32","\x0b","\xd0","\xe1"));
	outFields->push(HX_HCSTRING("Pose","\x71","\xb0","\x35","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(TimeWarpImage_obj,Image),HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50")},
	{hx::fsObject /*::kha::math::Matrix4*/ ,(int)offsetof(TimeWarpImage_obj,TexCoordsFromTanAngles),HX_HCSTRING("TexCoordsFromTanAngles","\x32","\x0b","\xd0","\xe1")},
	{hx::fsObject /*::kha::vr::PoseState*/ ,(int)offsetof(TimeWarpImage_obj,Pose),HX_HCSTRING("Pose","\x71","\xb0","\x35","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50"),
	HX_HCSTRING("TexCoordsFromTanAngles","\x32","\x0b","\xd0","\xe1"),
	HX_HCSTRING("Pose","\x71","\xb0","\x35","\x35"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimeWarpImage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimeWarpImage_obj::__mClass,"__mClass");
};

#endif

hx::Class TimeWarpImage_obj::__mClass;

void TimeWarpImage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.TimeWarpImage","\xde","\x3c","\x7b","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TimeWarpImage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimeWarpImage_obj >;
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

} // end namespace kha
} // end namespace vr
