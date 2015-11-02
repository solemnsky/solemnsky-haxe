#include <hxcpp.h>

#ifndef INCLUDED_control_TextAlign
#include <control/TextAlign.h>
#endif
namespace control{

::control::TextAlign TextAlign_obj::CenterText;

::control::TextAlign TextAlign_obj::LeftText;

::control::TextAlign TextAlign_obj::RightText;

HX_DEFINE_CREATE_ENUM(TextAlign_obj)

int TextAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CenterText","\x42","\x31","\xaf","\x35")) return 0;
	if (inName==HX_HCSTRING("LeftText","\x74","\xcc","\xa6","\x2d")) return 1;
	if (inName==HX_HCSTRING("RightText","\x89","\x02","\x93","\x59")) return 2;
	return super::__FindIndex(inName);
}

int TextAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CenterText","\x42","\x31","\xaf","\x35")) return 0;
	if (inName==HX_HCSTRING("LeftText","\x74","\xcc","\xa6","\x2d")) return 0;
	if (inName==HX_HCSTRING("RightText","\x89","\x02","\x93","\x59")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextAlign_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CenterText","\x42","\x31","\xaf","\x35")) return CenterText;
	if (inName==HX_HCSTRING("LeftText","\x74","\xcc","\xa6","\x2d")) return LeftText;
	if (inName==HX_HCSTRING("RightText","\x89","\x02","\x93","\x59")) return RightText;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CenterText","\x42","\x31","\xaf","\x35"),
	HX_HCSTRING("LeftText","\x74","\xcc","\xa6","\x2d"),
	HX_HCSTRING("RightText","\x89","\x02","\x93","\x59"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextAlign_obj::CenterText,"CenterText");
	HX_MARK_MEMBER_NAME(TextAlign_obj::LeftText,"LeftText");
	HX_MARK_MEMBER_NAME(TextAlign_obj::RightText,"RightText");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::CenterText,"CenterText");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::LeftText,"LeftText");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::RightText,"RightText");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TextAlign_obj::__mClass;

Dynamic __Create_TextAlign_obj() { return new TextAlign_obj; }

void TextAlign_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("control.TextAlign","\x67","\x72","\x15","\x16"), hx::TCanCast< TextAlign_obj >,sStaticFields,sMemberFields,
	&__Create_TextAlign_obj, &__Create,
	&super::__SGetClass(), &CreateTextAlign_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextAlign_obj::__boot()
{
hx::Static(CenterText) = hx::CreateEnum< TextAlign_obj >(HX_HCSTRING("CenterText","\x42","\x31","\xaf","\x35"),0);
hx::Static(LeftText) = hx::CreateEnum< TextAlign_obj >(HX_HCSTRING("LeftText","\x74","\xcc","\xa6","\x2d"),1);
hx::Static(RightText) = hx::CreateEnum< TextAlign_obj >(HX_HCSTRING("RightText","\x89","\x02","\x93","\x59"),2);
}


} // end namespace control
