#include <hxcpp.h>

#ifndef INCLUDED_control_Event
#include <control/Event.h>
#endif
#ifndef INCLUDED_control_Key
#include <control/Key.h>
#endif
namespace control{

::control::Event  Event_obj::KbEvent(::control::Key key,bool state)
	{ return hx::CreateEnum< Event_obj >(HX_HCSTRING("KbEvent","\xe3","\x5e","\xb5","\x66"),1,hx::DynamicArray(0,2).Add(key).Add(state)); }

::control::Event  Event_obj::MouseEvent(Float x,Float y)
	{ return hx::CreateEnum< Event_obj >(HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a"),0,hx::DynamicArray(0,2).Add(x).Add(y)); }

HX_DEFINE_CREATE_ENUM(Event_obj)

int Event_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("KbEvent","\xe3","\x5e","\xb5","\x66")) return 1;
	if (inName==HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Event_obj,KbEvent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Event_obj,MouseEvent,return)

int Event_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("KbEvent","\xe3","\x5e","\xb5","\x66")) return 2;
	if (inName==HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic Event_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("KbEvent","\xe3","\x5e","\xb5","\x66")) return KbEvent_dyn();
	if (inName==HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a")) return MouseEvent_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a"),
	HX_HCSTRING("KbEvent","\xe3","\x5e","\xb5","\x66"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Event_obj::__mClass;

Dynamic __Create_Event_obj() { return new Event_obj; }

void Event_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("control.Event","\x29","\xa0","\x8c","\xb1"), hx::TCanCast< Event_obj >,sStaticFields,sMemberFields,
	&__Create_Event_obj, &__Create,
	&super::__SGetClass(), &CreateEvent_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Event_obj::__boot()
{
}


} // end namespace control
