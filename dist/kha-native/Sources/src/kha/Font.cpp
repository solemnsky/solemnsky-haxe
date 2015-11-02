#include <hxcpp.h>

#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_FontStyle
#include <kha/FontStyle.h>
#endif
namespace kha{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_style","\x88","\x01","\xc7","\xc7"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("charWidth","\x50","\x3f","\xbb","\x83"),
	HX_HCSTRING("charsWidth","\xe9","\xc7","\x25","\x98"),
	HX_HCSTRING("stringWidth","\x75","\x67","\x65","\xd5"),
	HX_HCSTRING("getBaselinePosition","\x04","\x2f","\xa2","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
};

#endif

hx::Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Font","\x79","\x2a","\x74","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
