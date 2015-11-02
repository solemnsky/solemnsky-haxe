#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureAddressing
#include <kha/graphics4/TextureAddressing.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TextureAddressing TextureAddressing_obj::Clamp;

::kha::graphics4::TextureAddressing TextureAddressing_obj::Mirror;

::kha::graphics4::TextureAddressing TextureAddressing_obj::Repeat;

HX_DEFINE_CREATE_ENUM(TextureAddressing_obj)

int TextureAddressing_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Clamp","\xdb","\xe2","\x85","\xdb")) return 2;
	if (inName==HX_HCSTRING("Mirror","\x5f","\xe6","\x3e","\x8a")) return 1;
	if (inName==HX_HCSTRING("Repeat","\x7b","\x0b","\x11","\x3b")) return 0;
	return super::__FindIndex(inName);
}

int TextureAddressing_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Clamp","\xdb","\xe2","\x85","\xdb")) return 0;
	if (inName==HX_HCSTRING("Mirror","\x5f","\xe6","\x3e","\x8a")) return 0;
	if (inName==HX_HCSTRING("Repeat","\x7b","\x0b","\x11","\x3b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextureAddressing_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Clamp","\xdb","\xe2","\x85","\xdb")) return Clamp;
	if (inName==HX_HCSTRING("Mirror","\x5f","\xe6","\x3e","\x8a")) return Mirror;
	if (inName==HX_HCSTRING("Repeat","\x7b","\x0b","\x11","\x3b")) return Repeat;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Repeat","\x7b","\x0b","\x11","\x3b"),
	HX_HCSTRING("Mirror","\x5f","\xe6","\x3e","\x8a"),
	HX_HCSTRING("Clamp","\xdb","\xe2","\x85","\xdb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAddressing_obj::Clamp,"Clamp");
	HX_MARK_MEMBER_NAME(TextureAddressing_obj::Mirror,"Mirror");
	HX_MARK_MEMBER_NAME(TextureAddressing_obj::Repeat,"Repeat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAddressing_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureAddressing_obj::Clamp,"Clamp");
	HX_VISIT_MEMBER_NAME(TextureAddressing_obj::Mirror,"Mirror");
	HX_VISIT_MEMBER_NAME(TextureAddressing_obj::Repeat,"Repeat");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TextureAddressing_obj::__mClass;

Dynamic __Create_TextureAddressing_obj() { return new TextureAddressing_obj; }

void TextureAddressing_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.TextureAddressing","\x5a","\xbc","\x8b","\xd3"), hx::TCanCast< TextureAddressing_obj >,sStaticFields,sMemberFields,
	&__Create_TextureAddressing_obj, &__Create,
	&super::__SGetClass(), &CreateTextureAddressing_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextureAddressing_obj::__boot()
{
hx::Static(Clamp) = hx::CreateEnum< TextureAddressing_obj >(HX_HCSTRING("Clamp","\xdb","\xe2","\x85","\xdb"),2);
hx::Static(Mirror) = hx::CreateEnum< TextureAddressing_obj >(HX_HCSTRING("Mirror","\x5f","\xe6","\x3e","\x8a"),1);
hx::Static(Repeat) = hx::CreateEnum< TextureAddressing_obj >(HX_HCSTRING("Repeat","\x7b","\x0b","\x11","\x3b"),0);
}


} // end namespace kha
} // end namespace graphics4
