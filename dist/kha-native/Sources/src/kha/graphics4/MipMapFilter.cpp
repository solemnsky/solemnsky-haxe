#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_MipMapFilter
#include <kha/graphics4/MipMapFilter.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::MipMapFilter MipMapFilter_obj::LinearMipFilter;

::kha::graphics4::MipMapFilter MipMapFilter_obj::NoMipFilter;

::kha::graphics4::MipMapFilter MipMapFilter_obj::PointMipFilter;

HX_DEFINE_CREATE_ENUM(MipMapFilter_obj)

int MipMapFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("LinearMipFilter","\xa7","\xbd","\xf1","\x45")) return 2;
	if (inName==HX_HCSTRING("NoMipFilter","\xcb","\x93","\x89","\x77")) return 0;
	if (inName==HX_HCSTRING("PointMipFilter","\x1c","\xc2","\xef","\x60")) return 1;
	return super::__FindIndex(inName);
}

int MipMapFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("LinearMipFilter","\xa7","\xbd","\xf1","\x45")) return 0;
	if (inName==HX_HCSTRING("NoMipFilter","\xcb","\x93","\x89","\x77")) return 0;
	if (inName==HX_HCSTRING("PointMipFilter","\x1c","\xc2","\xef","\x60")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MipMapFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("LinearMipFilter","\xa7","\xbd","\xf1","\x45")) return LinearMipFilter;
	if (inName==HX_HCSTRING("NoMipFilter","\xcb","\x93","\x89","\x77")) return NoMipFilter;
	if (inName==HX_HCSTRING("PointMipFilter","\x1c","\xc2","\xef","\x60")) return PointMipFilter;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NoMipFilter","\xcb","\x93","\x89","\x77"),
	HX_HCSTRING("PointMipFilter","\x1c","\xc2","\xef","\x60"),
	HX_HCSTRING("LinearMipFilter","\xa7","\xbd","\xf1","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MipMapFilter_obj::LinearMipFilter,"LinearMipFilter");
	HX_MARK_MEMBER_NAME(MipMapFilter_obj::NoMipFilter,"NoMipFilter");
	HX_MARK_MEMBER_NAME(MipMapFilter_obj::PointMipFilter,"PointMipFilter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MipMapFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MipMapFilter_obj::LinearMipFilter,"LinearMipFilter");
	HX_VISIT_MEMBER_NAME(MipMapFilter_obj::NoMipFilter,"NoMipFilter");
	HX_VISIT_MEMBER_NAME(MipMapFilter_obj::PointMipFilter,"PointMipFilter");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class MipMapFilter_obj::__mClass;

Dynamic __Create_MipMapFilter_obj() { return new MipMapFilter_obj; }

void MipMapFilter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.MipMapFilter","\xef","\x70","\x16","\x15"), hx::TCanCast< MipMapFilter_obj >,sStaticFields,sMemberFields,
	&__Create_MipMapFilter_obj, &__Create,
	&super::__SGetClass(), &CreateMipMapFilter_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MipMapFilter_obj::__boot()
{
hx::Static(LinearMipFilter) = hx::CreateEnum< MipMapFilter_obj >(HX_HCSTRING("LinearMipFilter","\xa7","\xbd","\xf1","\x45"),2);
hx::Static(NoMipFilter) = hx::CreateEnum< MipMapFilter_obj >(HX_HCSTRING("NoMipFilter","\xcb","\x93","\x89","\x77"),0);
hx::Static(PointMipFilter) = hx::CreateEnum< MipMapFilter_obj >(HX_HCSTRING("PointMipFilter","\x1c","\xc2","\xef","\x60"),1);
}


} // end namespace kha
} // end namespace graphics4
