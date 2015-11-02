#include <hxcpp.h>

#ifndef INCLUDED_kha_Key
#include <kha/Key.h>
#endif
namespace kha{

::kha::Key Key_obj::ALT;

::kha::Key Key_obj::BACK;

::kha::Key Key_obj::BACKSPACE;

::kha::Key Key_obj::CHAR;

::kha::Key Key_obj::CTRL;

::kha::Key Key_obj::DEL;

::kha::Key Key_obj::DOWN;

::kha::Key Key_obj::ENTER;

::kha::Key Key_obj::ESC;

::kha::Key Key_obj::LEFT;

::kha::Key Key_obj::RIGHT;

::kha::Key Key_obj::SHIFT;

::kha::Key Key_obj::TAB;

::kha::Key Key_obj::UP;

HX_DEFINE_CREATE_ENUM(Key_obj)

int Key_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return 5;
	if (inName==HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")) return 13;
	if (inName==HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")) return 0;
	if (inName==HX_HCSTRING("CHAR","\xd6","\x26","\x80","\x2c")) return 6;
	if (inName==HX_HCSTRING("CTRL","\xab","\x50","\x89","\x2c")) return 4;
	if (inName==HX_HCSTRING("DEL","\xab","\xd5","\x33","\x00")) return 8;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return 10;
	if (inName==HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")) return 2;
	if (inName==HX_HCSTRING("ESC","\x15","\xa4","\x34","\x00")) return 7;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 11;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 12;
	if (inName==HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")) return 3;
	if (inName==HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")) return 1;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return 9;
	return super::__FindIndex(inName);
}

int Key_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")) return 0;
	if (inName==HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")) return 0;
	if (inName==HX_HCSTRING("CHAR","\xd6","\x26","\x80","\x2c")) return 0;
	if (inName==HX_HCSTRING("CTRL","\xab","\x50","\x89","\x2c")) return 0;
	if (inName==HX_HCSTRING("DEL","\xab","\xd5","\x33","\x00")) return 0;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return 0;
	if (inName==HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")) return 0;
	if (inName==HX_HCSTRING("ESC","\x15","\xa4","\x34","\x00")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	if (inName==HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")) return 0;
	if (inName==HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")) return 0;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Key_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return ALT;
	if (inName==HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")) return BACK;
	if (inName==HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")) return BACKSPACE;
	if (inName==HX_HCSTRING("CHAR","\xd6","\x26","\x80","\x2c")) return CHAR;
	if (inName==HX_HCSTRING("CTRL","\xab","\x50","\x89","\x2c")) return CTRL;
	if (inName==HX_HCSTRING("DEL","\xab","\xd5","\x33","\x00")) return DEL;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return DOWN;
	if (inName==HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")) return ENTER;
	if (inName==HX_HCSTRING("ESC","\x15","\xa4","\x34","\x00")) return ESC;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	if (inName==HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")) return SHIFT;
	if (inName==HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")) return TAB;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return UP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),
	HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),
	HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),
	HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),
	HX_HCSTRING("CTRL","\xab","\x50","\x89","\x2c"),
	HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),
	HX_HCSTRING("CHAR","\xd6","\x26","\x80","\x2c"),
	HX_HCSTRING("ESC","\x15","\xa4","\x34","\x00"),
	HX_HCSTRING("DEL","\xab","\xd5","\x33","\x00"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(Key_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Key_obj::CHAR,"CHAR");
	HX_MARK_MEMBER_NAME(Key_obj::CTRL,"CTRL");
	HX_MARK_MEMBER_NAME(Key_obj::DEL,"DEL");
	HX_MARK_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Key_obj::ESC,"ESC");
	HX_MARK_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Key_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(Key_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Key_obj::UP,"UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Key_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(Key_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Key_obj::CHAR,"CHAR");
	HX_VISIT_MEMBER_NAME(Key_obj::CTRL,"CTRL");
	HX_VISIT_MEMBER_NAME(Key_obj::DEL,"DEL");
	HX_VISIT_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Key_obj::ESC,"ESC");
	HX_VISIT_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Key_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(Key_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Key_obj::UP,"UP");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Key_obj::__mClass;

Dynamic __Create_Key_obj() { return new Key_obj; }

void Key_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.Key","\x35","\x80","\x15","\xef"), hx::TCanCast< Key_obj >,sStaticFields,sMemberFields,
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
hx::Static(ALT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),5);
hx::Static(BACK) = hx::CreateEnum< Key_obj >(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),13);
hx::Static(BACKSPACE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),0);
hx::Static(CHAR) = hx::CreateEnum< Key_obj >(HX_HCSTRING("CHAR","\xd6","\x26","\x80","\x2c"),6);
hx::Static(CTRL) = hx::CreateEnum< Key_obj >(HX_HCSTRING("CTRL","\xab","\x50","\x89","\x2c"),4);
hx::Static(DEL) = hx::CreateEnum< Key_obj >(HX_HCSTRING("DEL","\xab","\xd5","\x33","\x00"),8);
hx::Static(DOWN) = hx::CreateEnum< Key_obj >(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),10);
hx::Static(ENTER) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),2);
hx::Static(ESC) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ESC","\x15","\xa4","\x34","\x00"),7);
hx::Static(LEFT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),11);
hx::Static(RIGHT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),12);
hx::Static(SHIFT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),3);
hx::Static(TAB) = hx::CreateEnum< Key_obj >(HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),1);
hx::Static(UP) = hx::CreateEnum< Key_obj >(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),9);
}


} // end namespace kha
