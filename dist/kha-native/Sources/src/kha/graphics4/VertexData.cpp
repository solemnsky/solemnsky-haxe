#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::VertexData VertexData_obj::Float1;

::kha::graphics4::VertexData VertexData_obj::Float2;

::kha::graphics4::VertexData VertexData_obj::Float3;

::kha::graphics4::VertexData VertexData_obj::Float4;

HX_DEFINE_CREATE_ENUM(VertexData_obj)

int VertexData_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Float1","\x35","\x97","\xea","\x75")) return 0;
	if (inName==HX_HCSTRING("Float2","\x36","\x97","\xea","\x75")) return 1;
	if (inName==HX_HCSTRING("Float3","\x37","\x97","\xea","\x75")) return 2;
	if (inName==HX_HCSTRING("Float4","\x38","\x97","\xea","\x75")) return 3;
	return super::__FindIndex(inName);
}

int VertexData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Float1","\x35","\x97","\xea","\x75")) return 0;
	if (inName==HX_HCSTRING("Float2","\x36","\x97","\xea","\x75")) return 0;
	if (inName==HX_HCSTRING("Float3","\x37","\x97","\xea","\x75")) return 0;
	if (inName==HX_HCSTRING("Float4","\x38","\x97","\xea","\x75")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic VertexData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Float1","\x35","\x97","\xea","\x75")) return Float1;
	if (inName==HX_HCSTRING("Float2","\x36","\x97","\xea","\x75")) return Float2;
	if (inName==HX_HCSTRING("Float3","\x37","\x97","\xea","\x75")) return Float3;
	if (inName==HX_HCSTRING("Float4","\x38","\x97","\xea","\x75")) return Float4;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Float1","\x35","\x97","\xea","\x75"),
	HX_HCSTRING("Float2","\x36","\x97","\xea","\x75"),
	HX_HCSTRING("Float3","\x37","\x97","\xea","\x75"),
	HX_HCSTRING("Float4","\x38","\x97","\xea","\x75"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexData_obj::Float1,"Float1");
	HX_MARK_MEMBER_NAME(VertexData_obj::Float2,"Float2");
	HX_MARK_MEMBER_NAME(VertexData_obj::Float3,"Float3");
	HX_MARK_MEMBER_NAME(VertexData_obj::Float4,"Float4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float1,"Float1");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float2,"Float2");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float3,"Float3");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float4,"Float4");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class VertexData_obj::__mClass;

Dynamic __Create_VertexData_obj() { return new VertexData_obj; }

void VertexData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.VertexData","\x9d","\xbf","\x53","\x87"), hx::TCanCast< VertexData_obj >,sStaticFields,sMemberFields,
	&__Create_VertexData_obj, &__Create,
	&super::__SGetClass(), &CreateVertexData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void VertexData_obj::__boot()
{
hx::Static(Float1) = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float1","\x35","\x97","\xea","\x75"),0);
hx::Static(Float2) = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float2","\x36","\x97","\xea","\x75"),1);
hx::Static(Float3) = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float3","\x37","\x97","\xea","\x75"),2);
hx::Static(Float4) = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float4","\x38","\x97","\xea","\x75"),3);
}


} // end namespace kha
} // end namespace graphics4
