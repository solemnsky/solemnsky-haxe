#include <hxcpp.h>

#ifndef INCLUDED_kha_Button
#include <kha/Button.h>
#endif
namespace kha{

::kha::Button Button_obj::BUTTON_1;

::kha::Button Button_obj::BUTTON_2;

::kha::Button Button_obj::DOWN;

::kha::Button Button_obj::LEFT;

::kha::Button Button_obj::NONE;

::kha::Button Button_obj::RIGHT;

::kha::Button Button_obj::UP;

HX_DEFINE_CREATE_ENUM(Button_obj)

int Button_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BUTTON_1","\x64","\x41","\xb8","\xb5")) return 5;
	if (inName==HX_HCSTRING("BUTTON_2","\x65","\x41","\xb8","\xb5")) return 6;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return 3;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 4;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 2;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return 1;
	return super::__FindIndex(inName);
}

int Button_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BUTTON_1","\x64","\x41","\xb8","\xb5")) return 0;
	if (inName==HX_HCSTRING("BUTTON_2","\x65","\x41","\xb8","\xb5")) return 0;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BUTTON_1","\x64","\x41","\xb8","\xb5")) return BUTTON_1;
	if (inName==HX_HCSTRING("BUTTON_2","\x65","\x41","\xb8","\xb5")) return BUTTON_2;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return DOWN;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return UP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("BUTTON_1","\x64","\x41","\xb8","\xb5"),
	HX_HCSTRING("BUTTON_2","\x65","\x41","\xb8","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::BUTTON_1,"BUTTON_1");
	HX_MARK_MEMBER_NAME(Button_obj::BUTTON_2,"BUTTON_2");
	HX_MARK_MEMBER_NAME(Button_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Button_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Button_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(Button_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Button_obj::UP,"UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Button_obj::BUTTON_1,"BUTTON_1");
	HX_VISIT_MEMBER_NAME(Button_obj::BUTTON_2,"BUTTON_2");
	HX_VISIT_MEMBER_NAME(Button_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Button_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Button_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(Button_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Button_obj::UP,"UP");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Button_obj::__mClass;

Dynamic __Create_Button_obj() { return new Button_obj; }

void Button_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.Button","\x1c","\x2d","\xa0","\x44"), hx::TCanCast< Button_obj >,sStaticFields,sMemberFields,
	&__Create_Button_obj, &__Create,
	&super::__SGetClass(), &CreateButton_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Button_obj::__boot()
{
hx::Static(BUTTON_1) = hx::CreateEnum< Button_obj >(HX_HCSTRING("BUTTON_1","\x64","\x41","\xb8","\xb5"),5);
hx::Static(BUTTON_2) = hx::CreateEnum< Button_obj >(HX_HCSTRING("BUTTON_2","\x65","\x41","\xb8","\xb5"),6);
hx::Static(DOWN) = hx::CreateEnum< Button_obj >(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),3);
hx::Static(LEFT) = hx::CreateEnum< Button_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),4);
hx::Static(NONE) = hx::CreateEnum< Button_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),0);
hx::Static(RIGHT) = hx::CreateEnum< Button_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),2);
hx::Static(UP) = hx::CreateEnum< Button_obj >(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),1);
}


} // end namespace kha
