#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TextureFormat TextureFormat_obj::L8;

::kha::graphics4::TextureFormat TextureFormat_obj::RGBA128;

::kha::graphics4::TextureFormat TextureFormat_obj::RGBA32;

HX_DEFINE_CREATE_ENUM(TextureFormat_obj)

int TextureFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("L8","\x6c","\x42","\x00","\x00")) return 1;
	if (inName==HX_HCSTRING("RGBA128","\x03","\x2a","\xc5","\xe0")) return 2;
	if (inName==HX_HCSTRING("RGBA32","\x53","\x5a","\x88","\xd6")) return 0;
	return super::__FindIndex(inName);
}

int TextureFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("L8","\x6c","\x42","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("RGBA128","\x03","\x2a","\xc5","\xe0")) return 0;
	if (inName==HX_HCSTRING("RGBA32","\x53","\x5a","\x88","\xd6")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextureFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("L8","\x6c","\x42","\x00","\x00")) return L8;
	if (inName==HX_HCSTRING("RGBA128","\x03","\x2a","\xc5","\xe0")) return RGBA128;
	if (inName==HX_HCSTRING("RGBA32","\x53","\x5a","\x88","\xd6")) return RGBA32;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RGBA32","\x53","\x5a","\x88","\xd6"),
	HX_HCSTRING("L8","\x6c","\x42","\x00","\x00"),
	HX_HCSTRING("RGBA128","\x03","\x2a","\xc5","\xe0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureFormat_obj::L8,"L8");
	HX_MARK_MEMBER_NAME(TextureFormat_obj::RGBA128,"RGBA128");
	HX_MARK_MEMBER_NAME(TextureFormat_obj::RGBA32,"RGBA32");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::L8,"L8");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::RGBA128,"RGBA128");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::RGBA32,"RGBA32");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TextureFormat_obj::__mClass;

Dynamic __Create_TextureFormat_obj() { return new TextureFormat_obj; }

void TextureFormat_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.TextureFormat","\xe3","\xe1","\xe1","\x42"), hx::TCanCast< TextureFormat_obj >,sStaticFields,sMemberFields,
	&__Create_TextureFormat_obj, &__Create,
	&super::__SGetClass(), &CreateTextureFormat_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextureFormat_obj::__boot()
{
hx::Static(L8) = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("L8","\x6c","\x42","\x00","\x00"),1);
hx::Static(RGBA128) = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("RGBA128","\x03","\x2a","\xc5","\xe0"),2);
hx::Static(RGBA32) = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("RGBA32","\x53","\x5a","\x88","\xd6"),0);
}


} // end namespace kha
} // end namespace graphics4
