#include <hxcpp.h>

#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
namespace kha{

::kha::ScreenRotation ScreenRotation_obj::Rotation180;

::kha::ScreenRotation ScreenRotation_obj::Rotation270;

::kha::ScreenRotation ScreenRotation_obj::Rotation90;

::kha::ScreenRotation ScreenRotation_obj::RotationNone;

HX_DEFINE_CREATE_ENUM(ScreenRotation_obj)

int ScreenRotation_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Rotation180","\xcb","\x14","\x91","\xee")) return 2;
	if (inName==HX_HCSTRING("Rotation270","\x2d","\xd6","\x91","\xee")) return 3;
	if (inName==HX_HCSTRING("Rotation90","\xb5","\xbe","\x2f","\xdb")) return 1;
	if (inName==HX_HCSTRING("RotationNone","\x36","\x3f","\xb6","\xe3")) return 0;
	return super::__FindIndex(inName);
}

int ScreenRotation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Rotation180","\xcb","\x14","\x91","\xee")) return 0;
	if (inName==HX_HCSTRING("Rotation270","\x2d","\xd6","\x91","\xee")) return 0;
	if (inName==HX_HCSTRING("Rotation90","\xb5","\xbe","\x2f","\xdb")) return 0;
	if (inName==HX_HCSTRING("RotationNone","\x36","\x3f","\xb6","\xe3")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ScreenRotation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Rotation180","\xcb","\x14","\x91","\xee")) return Rotation180;
	if (inName==HX_HCSTRING("Rotation270","\x2d","\xd6","\x91","\xee")) return Rotation270;
	if (inName==HX_HCSTRING("Rotation90","\xb5","\xbe","\x2f","\xdb")) return Rotation90;
	if (inName==HX_HCSTRING("RotationNone","\x36","\x3f","\xb6","\xe3")) return RotationNone;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RotationNone","\x36","\x3f","\xb6","\xe3"),
	HX_HCSTRING("Rotation90","\xb5","\xbe","\x2f","\xdb"),
	HX_HCSTRING("Rotation180","\xcb","\x14","\x91","\xee"),
	HX_HCSTRING("Rotation270","\x2d","\xd6","\x91","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenRotation_obj::Rotation180,"Rotation180");
	HX_MARK_MEMBER_NAME(ScreenRotation_obj::Rotation270,"Rotation270");
	HX_MARK_MEMBER_NAME(ScreenRotation_obj::Rotation90,"Rotation90");
	HX_MARK_MEMBER_NAME(ScreenRotation_obj::RotationNone,"RotationNone");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::Rotation180,"Rotation180");
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::Rotation270,"Rotation270");
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::Rotation90,"Rotation90");
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::RotationNone,"RotationNone");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ScreenRotation_obj::__mClass;

Dynamic __Create_ScreenRotation_obj() { return new ScreenRotation_obj; }

void ScreenRotation_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.ScreenRotation","\xf4","\x85","\x3e","\xbb"), hx::TCanCast< ScreenRotation_obj >,sStaticFields,sMemberFields,
	&__Create_ScreenRotation_obj, &__Create,
	&super::__SGetClass(), &CreateScreenRotation_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ScreenRotation_obj::__boot()
{
hx::Static(Rotation180) = hx::CreateEnum< ScreenRotation_obj >(HX_HCSTRING("Rotation180","\xcb","\x14","\x91","\xee"),2);
hx::Static(Rotation270) = hx::CreateEnum< ScreenRotation_obj >(HX_HCSTRING("Rotation270","\x2d","\xd6","\x91","\xee"),3);
hx::Static(Rotation90) = hx::CreateEnum< ScreenRotation_obj >(HX_HCSTRING("Rotation90","\xb5","\xbe","\x2f","\xdb"),1);
hx::Static(RotationNone) = hx::CreateEnum< ScreenRotation_obj >(HX_HCSTRING("RotationNone","\x36","\x3f","\xb6","\xe3"),0);
}


} // end namespace kha
