#include <hxcpp.h>

#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_control_Event
#include <control/Event.h>
#endif
#ifndef INCLUDED_control_Network
#include <control/Network.h>
#endif
#ifndef INCLUDED_control_Profile
#include <control/Profile.h>
#endif
#ifndef INCLUDED_control_Scene
#include <control/Scene.h>
#endif
namespace control{


static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("conclude","\xab","\xe8","\xf9","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Control_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Control_obj::__mClass,"__mClass");
};

#endif

hx::Class Control_obj::__mClass;

void Control_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.Control","\x2c","\xa5","\xfa","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Control_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace control
