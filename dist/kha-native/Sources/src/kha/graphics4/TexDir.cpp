#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TexDir
#include <kha/graphics4/TexDir.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TexDir TexDir_obj::U;

::kha::graphics4::TexDir TexDir_obj::V;

HX_DEFINE_CREATE_ENUM(TexDir_obj)

int TexDir_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("U","\x55","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("V","\x56","\x00","\x00","\x00")) return 1;
	return super::__FindIndex(inName);
}

int TexDir_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("U","\x55","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("V","\x56","\x00","\x00","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TexDir_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("U","\x55","\x00","\x00","\x00")) return U;
	if (inName==HX_HCSTRING("V","\x56","\x00","\x00","\x00")) return V;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("V","\x56","\x00","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TexDir_obj::U,"U");
	HX_MARK_MEMBER_NAME(TexDir_obj::V,"V");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TexDir_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TexDir_obj::U,"U");
	HX_VISIT_MEMBER_NAME(TexDir_obj::V,"V");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TexDir_obj::__mClass;

Dynamic __Create_TexDir_obj() { return new TexDir_obj; }

void TexDir_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.TexDir","\x15","\x7e","\xaf","\xf1"), hx::TCanCast< TexDir_obj >,sStaticFields,sMemberFields,
	&__Create_TexDir_obj, &__Create,
	&super::__SGetClass(), &CreateTexDir_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TexDir_obj::__boot()
{
hx::Static(U) = hx::CreateEnum< TexDir_obj >(HX_HCSTRING("U","\x55","\x00","\x00","\x00"),0);
hx::Static(V) = hx::CreateEnum< TexDir_obj >(HX_HCSTRING("V","\x56","\x00","\x00","\x00"),1);
}


} // end namespace kha
} // end namespace graphics4
