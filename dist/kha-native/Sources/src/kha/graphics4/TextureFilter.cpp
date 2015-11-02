#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureFilter
#include <kha/graphics4/TextureFilter.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TextureFilter TextureFilter_obj::AnisotropicFilter;

::kha::graphics4::TextureFilter TextureFilter_obj::LinearFilter;

::kha::graphics4::TextureFilter TextureFilter_obj::PointFilter;

HX_DEFINE_CREATE_ENUM(TextureFilter_obj)

int TextureFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AnisotropicFilter","\xa9","\x0a","\x1a","\xc0")) return 2;
	if (inName==HX_HCSTRING("LinearFilter","\x9d","\x2b","\xc2","\x23")) return 1;
	if (inName==HX_HCSTRING("PointFilter","\x08","\xfc","\xff","\x4f")) return 0;
	return super::__FindIndex(inName);
}

int TextureFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AnisotropicFilter","\xa9","\x0a","\x1a","\xc0")) return 0;
	if (inName==HX_HCSTRING("LinearFilter","\x9d","\x2b","\xc2","\x23")) return 0;
	if (inName==HX_HCSTRING("PointFilter","\x08","\xfc","\xff","\x4f")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextureFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AnisotropicFilter","\xa9","\x0a","\x1a","\xc0")) return AnisotropicFilter;
	if (inName==HX_HCSTRING("LinearFilter","\x9d","\x2b","\xc2","\x23")) return LinearFilter;
	if (inName==HX_HCSTRING("PointFilter","\x08","\xfc","\xff","\x4f")) return PointFilter;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("PointFilter","\x08","\xfc","\xff","\x4f"),
	HX_HCSTRING("LinearFilter","\x9d","\x2b","\xc2","\x23"),
	HX_HCSTRING("AnisotropicFilter","\xa9","\x0a","\x1a","\xc0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureFilter_obj::AnisotropicFilter,"AnisotropicFilter");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::LinearFilter,"LinearFilter");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::PointFilter,"PointFilter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::AnisotropicFilter,"AnisotropicFilter");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::LinearFilter,"LinearFilter");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::PointFilter,"PointFilter");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TextureFilter_obj::__mClass;

Dynamic __Create_TextureFilter_obj() { return new TextureFilter_obj; }

void TextureFilter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.TextureFilter","\x64","\x72","\x88","\xca"), hx::TCanCast< TextureFilter_obj >,sStaticFields,sMemberFields,
	&__Create_TextureFilter_obj, &__Create,
	&super::__SGetClass(), &CreateTextureFilter_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextureFilter_obj::__boot()
{
hx::Static(AnisotropicFilter) = hx::CreateEnum< TextureFilter_obj >(HX_HCSTRING("AnisotropicFilter","\xa9","\x0a","\x1a","\xc0"),2);
hx::Static(LinearFilter) = hx::CreateEnum< TextureFilter_obj >(HX_HCSTRING("LinearFilter","\x9d","\x2b","\xc2","\x23"),1);
hx::Static(PointFilter) = hx::CreateEnum< TextureFilter_obj >(HX_HCSTRING("PointFilter","\x08","\xfc","\xff","\x4f"),0);
}


} // end namespace kha
} // end namespace graphics4
