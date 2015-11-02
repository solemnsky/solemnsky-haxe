#include <hxcpp.h>

#ifndef INCLUDED_control_Key
#include <control/Key.h>
#endif
namespace control{

::control::Key Key_obj::ArrDownKey;

::control::Key Key_obj::ArrLeftKey;

::control::Key Key_obj::ArrRightKey;

::control::Key Key_obj::ArrUpKey;

::control::Key Key_obj::BadKey;

::control::Key  Key_obj::CharKey(::String _char)
	{ return hx::CreateEnum< Key_obj >(HX_HCSTRING("CharKey","\x49","\x74","\xad","\x9c"),0,hx::DynamicArray(0,1).Add(_char)); }

HX_DEFINE_CREATE_ENUM(Key_obj)

int Key_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ArrDownKey","\x1c","\x5e","\xce","\x75")) return 5;
	if (inName==HX_HCSTRING("ArrLeftKey","\x97","\xe3","\x0f","\xfd")) return 2;
	if (inName==HX_HCSTRING("ArrRightKey","\x84","\x22","\xee","\x06")) return 3;
	if (inName==HX_HCSTRING("ArrUpKey","\x03","\x74","\x5d","\xda")) return 4;
	if (inName==HX_HCSTRING("BadKey","\xfa","\xac","\xbe","\x7f")) return 1;
	if (inName==HX_HCSTRING("CharKey","\x49","\x74","\xad","\x9c")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Key_obj,CharKey,return)

int Key_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ArrDownKey","\x1c","\x5e","\xce","\x75")) return 0;
	if (inName==HX_HCSTRING("ArrLeftKey","\x97","\xe3","\x0f","\xfd")) return 0;
	if (inName==HX_HCSTRING("ArrRightKey","\x84","\x22","\xee","\x06")) return 0;
	if (inName==HX_HCSTRING("ArrUpKey","\x03","\x74","\x5d","\xda")) return 0;
	if (inName==HX_HCSTRING("BadKey","\xfa","\xac","\xbe","\x7f")) return 0;
	if (inName==HX_HCSTRING("CharKey","\x49","\x74","\xad","\x9c")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Key_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ArrDownKey","\x1c","\x5e","\xce","\x75")) return ArrDownKey;
	if (inName==HX_HCSTRING("ArrLeftKey","\x97","\xe3","\x0f","\xfd")) return ArrLeftKey;
	if (inName==HX_HCSTRING("ArrRightKey","\x84","\x22","\xee","\x06")) return ArrRightKey;
	if (inName==HX_HCSTRING("ArrUpKey","\x03","\x74","\x5d","\xda")) return ArrUpKey;
	if (inName==HX_HCSTRING("BadKey","\xfa","\xac","\xbe","\x7f")) return BadKey;
	if (inName==HX_HCSTRING("CharKey","\x49","\x74","\xad","\x9c")) return CharKey_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CharKey","\x49","\x74","\xad","\x9c"),
	HX_HCSTRING("BadKey","\xfa","\xac","\xbe","\x7f"),
	HX_HCSTRING("ArrLeftKey","\x97","\xe3","\x0f","\xfd"),
	HX_HCSTRING("ArrRightKey","\x84","\x22","\xee","\x06"),
	HX_HCSTRING("ArrUpKey","\x03","\x74","\x5d","\xda"),
	HX_HCSTRING("ArrDownKey","\x1c","\x5e","\xce","\x75"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::ArrDownKey,"ArrDownKey");
	HX_MARK_MEMBER_NAME(Key_obj::ArrLeftKey,"ArrLeftKey");
	HX_MARK_MEMBER_NAME(Key_obj::ArrRightKey,"ArrRightKey");
	HX_MARK_MEMBER_NAME(Key_obj::ArrUpKey,"ArrUpKey");
	HX_MARK_MEMBER_NAME(Key_obj::BadKey,"BadKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Key_obj::ArrDownKey,"ArrDownKey");
	HX_VISIT_MEMBER_NAME(Key_obj::ArrLeftKey,"ArrLeftKey");
	HX_VISIT_MEMBER_NAME(Key_obj::ArrRightKey,"ArrRightKey");
	HX_VISIT_MEMBER_NAME(Key_obj::ArrUpKey,"ArrUpKey");
	HX_VISIT_MEMBER_NAME(Key_obj::BadKey,"BadKey");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Key_obj::__mClass;

Dynamic __Create_Key_obj() { return new Key_obj; }

void Key_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("control.Key","\xee","\xef","\xf7","\xf8"), hx::TCanCast< Key_obj >,sStaticFields,sMemberFields,
	&__Create_Key_obj, &__Create,
	&super::__SGetClass(), &CreateKey_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Key_obj::__boot()
{
hx::Static(ArrDownKey) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ArrDownKey","\x1c","\x5e","\xce","\x75"),5);
hx::Static(ArrLeftKey) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ArrLeftKey","\x97","\xe3","\x0f","\xfd"),2);
hx::Static(ArrRightKey) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ArrRightKey","\x84","\x22","\xee","\x06"),3);
hx::Static(ArrUpKey) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ArrUpKey","\x03","\x74","\x5d","\xda"),4);
hx::Static(BadKey) = hx::CreateEnum< Key_obj >(HX_HCSTRING("BadKey","\xfa","\xac","\xbe","\x7f"),1);
}


} // end namespace control
