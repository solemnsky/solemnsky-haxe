#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::Usage Usage_obj::DynamicUsage;

::kha::graphics4::Usage Usage_obj::ReadableUsage;

::kha::graphics4::Usage Usage_obj::StaticUsage;

HX_DEFINE_CREATE_ENUM(Usage_obj)

int Usage_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DynamicUsage","\x42","\xed","\xeb","\x28")) return 1;
	if (inName==HX_HCSTRING("ReadableUsage","\xf1","\xba","\xca","\x36")) return 2;
	if (inName==HX_HCSTRING("StaticUsage","\x73","\xd1","\x2e","\xa3")) return 0;
	return super::__FindIndex(inName);
}

int Usage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DynamicUsage","\x42","\xed","\xeb","\x28")) return 0;
	if (inName==HX_HCSTRING("ReadableUsage","\xf1","\xba","\xca","\x36")) return 0;
	if (inName==HX_HCSTRING("StaticUsage","\x73","\xd1","\x2e","\xa3")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Usage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DynamicUsage","\x42","\xed","\xeb","\x28")) return DynamicUsage;
	if (inName==HX_HCSTRING("ReadableUsage","\xf1","\xba","\xca","\x36")) return ReadableUsage;
	if (inName==HX_HCSTRING("StaticUsage","\x73","\xd1","\x2e","\xa3")) return StaticUsage;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("StaticUsage","\x73","\xd1","\x2e","\xa3"),
	HX_HCSTRING("DynamicUsage","\x42","\xed","\xeb","\x28"),
	HX_HCSTRING("ReadableUsage","\xf1","\xba","\xca","\x36"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Usage_obj::DynamicUsage,"DynamicUsage");
	HX_MARK_MEMBER_NAME(Usage_obj::ReadableUsage,"ReadableUsage");
	HX_MARK_MEMBER_NAME(Usage_obj::StaticUsage,"StaticUsage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Usage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Usage_obj::DynamicUsage,"DynamicUsage");
	HX_VISIT_MEMBER_NAME(Usage_obj::ReadableUsage,"ReadableUsage");
	HX_VISIT_MEMBER_NAME(Usage_obj::StaticUsage,"StaticUsage");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Usage_obj::__mClass;

Dynamic __Create_Usage_obj() { return new Usage_obj; }

void Usage_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.Usage","\x92","\x83","\x45","\x64"), hx::TCanCast< Usage_obj >,sStaticFields,sMemberFields,
	&__Create_Usage_obj, &__Create,
	&super::__SGetClass(), &CreateUsage_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Usage_obj::__boot()
{
hx::Static(DynamicUsage) = hx::CreateEnum< Usage_obj >(HX_HCSTRING("DynamicUsage","\x42","\xed","\xeb","\x28"),1);
hx::Static(ReadableUsage) = hx::CreateEnum< Usage_obj >(HX_HCSTRING("ReadableUsage","\xf1","\xba","\xca","\x36"),2);
hx::Static(StaticUsage) = hx::CreateEnum< Usage_obj >(HX_HCSTRING("StaticUsage","\x73","\xd1","\x2e","\xa3"),0);
}


} // end namespace kha
} // end namespace graphics4
