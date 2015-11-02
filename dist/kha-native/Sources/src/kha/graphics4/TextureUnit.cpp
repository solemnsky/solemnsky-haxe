#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
namespace kha{
namespace graphics4{


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureUnit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureUnit_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureUnit_obj::__mClass;

void TextureUnit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.TextureUnit","\x30","\xda","\x58","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextureUnit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
