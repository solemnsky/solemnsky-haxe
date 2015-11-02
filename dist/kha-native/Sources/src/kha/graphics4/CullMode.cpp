#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_CullMode
#include <kha/graphics4/CullMode.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::CullMode CullMode_obj::Clockwise;

::kha::graphics4::CullMode CullMode_obj::CounterClockwise;

::kha::graphics4::CullMode CullMode_obj::None;

HX_DEFINE_CREATE_ENUM(CullMode_obj)

int CullMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Clockwise","\xd2","\x5d","\x72","\xde")) return 0;
	if (inName==HX_HCSTRING("CounterClockwise","\x76","\xcb","\xbb","\xce")) return 1;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 2;
	return super::__FindIndex(inName);
}

int CullMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Clockwise","\xd2","\x5d","\x72","\xde")) return 0;
	if (inName==HX_HCSTRING("CounterClockwise","\x76","\xcb","\xbb","\xce")) return 0;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CullMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Clockwise","\xd2","\x5d","\x72","\xde")) return Clockwise;
	if (inName==HX_HCSTRING("CounterClockwise","\x76","\xcb","\xbb","\xce")) return CounterClockwise;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return None;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Clockwise","\xd2","\x5d","\x72","\xde"),
	HX_HCSTRING("CounterClockwise","\x76","\xcb","\xbb","\xce"),
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CullMode_obj::Clockwise,"Clockwise");
	HX_MARK_MEMBER_NAME(CullMode_obj::CounterClockwise,"CounterClockwise");
	HX_MARK_MEMBER_NAME(CullMode_obj::None,"None");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CullMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CullMode_obj::Clockwise,"Clockwise");
	HX_VISIT_MEMBER_NAME(CullMode_obj::CounterClockwise,"CounterClockwise");
	HX_VISIT_MEMBER_NAME(CullMode_obj::None,"None");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CullMode_obj::__mClass;

Dynamic __Create_CullMode_obj() { return new CullMode_obj; }

void CullMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.CullMode","\x64","\xbc","\x53","\x51"), hx::TCanCast< CullMode_obj >,sStaticFields,sMemberFields,
	&__Create_CullMode_obj, &__Create,
	&super::__SGetClass(), &CreateCullMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CullMode_obj::__boot()
{
hx::Static(Clockwise) = hx::CreateEnum< CullMode_obj >(HX_HCSTRING("Clockwise","\xd2","\x5d","\x72","\xde"),0);
hx::Static(CounterClockwise) = hx::CreateEnum< CullMode_obj >(HX_HCSTRING("CounterClockwise","\x76","\xcb","\xbb","\xce"),1);
hx::Static(None) = hx::CreateEnum< CullMode_obj >(HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),2);
}


} // end namespace kha
} // end namespace graphics4
