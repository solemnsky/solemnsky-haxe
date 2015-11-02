#include <hxcpp.h>

#ifndef INCLUDED_control_demo_Direction
#include <control/demo/Direction.h>
#endif
namespace control{
namespace demo{

::control::demo::Direction Direction_obj::DownDir;

::control::demo::Direction Direction_obj::LeftDir;

::control::demo::Direction Direction_obj::RightDir;

::control::demo::Direction Direction_obj::UpDir;

HX_DEFINE_CREATE_ENUM(Direction_obj)

int Direction_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DownDir","\xeb","\x0d","\xe9","\x3a")) return 1;
	if (inName==HX_HCSTRING("LeftDir","\x66","\x93","\x2a","\xc2")) return 2;
	if (inName==HX_HCSTRING("RightDir","\xf1","\x76","\xc5","\xbd")) return 3;
	if (inName==HX_HCSTRING("UpDir","\x92","\x29","\x4b","\x3b")) return 0;
	return super::__FindIndex(inName);
}

int Direction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DownDir","\xeb","\x0d","\xe9","\x3a")) return 0;
	if (inName==HX_HCSTRING("LeftDir","\x66","\x93","\x2a","\xc2")) return 0;
	if (inName==HX_HCSTRING("RightDir","\xf1","\x76","\xc5","\xbd")) return 0;
	if (inName==HX_HCSTRING("UpDir","\x92","\x29","\x4b","\x3b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Direction_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DownDir","\xeb","\x0d","\xe9","\x3a")) return DownDir;
	if (inName==HX_HCSTRING("LeftDir","\x66","\x93","\x2a","\xc2")) return LeftDir;
	if (inName==HX_HCSTRING("RightDir","\xf1","\x76","\xc5","\xbd")) return RightDir;
	if (inName==HX_HCSTRING("UpDir","\x92","\x29","\x4b","\x3b")) return UpDir;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("UpDir","\x92","\x29","\x4b","\x3b"),
	HX_HCSTRING("DownDir","\xeb","\x0d","\xe9","\x3a"),
	HX_HCSTRING("LeftDir","\x66","\x93","\x2a","\xc2"),
	HX_HCSTRING("RightDir","\xf1","\x76","\xc5","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Direction_obj::DownDir,"DownDir");
	HX_MARK_MEMBER_NAME(Direction_obj::LeftDir,"LeftDir");
	HX_MARK_MEMBER_NAME(Direction_obj::RightDir,"RightDir");
	HX_MARK_MEMBER_NAME(Direction_obj::UpDir,"UpDir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Direction_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Direction_obj::DownDir,"DownDir");
	HX_VISIT_MEMBER_NAME(Direction_obj::LeftDir,"LeftDir");
	HX_VISIT_MEMBER_NAME(Direction_obj::RightDir,"RightDir");
	HX_VISIT_MEMBER_NAME(Direction_obj::UpDir,"UpDir");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Direction_obj::__mClass;

Dynamic __Create_Direction_obj() { return new Direction_obj; }

void Direction_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("control.demo.Direction","\x05","\xa9","\x91","\xb1"), hx::TCanCast< Direction_obj >,sStaticFields,sMemberFields,
	&__Create_Direction_obj, &__Create,
	&super::__SGetClass(), &CreateDirection_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Direction_obj::__boot()
{
hx::Static(DownDir) = hx::CreateEnum< Direction_obj >(HX_HCSTRING("DownDir","\xeb","\x0d","\xe9","\x3a"),1);
hx::Static(LeftDir) = hx::CreateEnum< Direction_obj >(HX_HCSTRING("LeftDir","\x66","\x93","\x2a","\xc2"),2);
hx::Static(RightDir) = hx::CreateEnum< Direction_obj >(HX_HCSTRING("RightDir","\xf1","\x76","\xc5","\xbd"),3);
hx::Static(UpDir) = hx::CreateEnum< Direction_obj >(HX_HCSTRING("UpDir","\x92","\x29","\x4b","\x3b"),0);
}


} // end namespace control
} // end namespace demo
