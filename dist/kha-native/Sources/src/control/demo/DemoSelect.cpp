#include <hxcpp.h>

#ifndef INCLUDED_control_demo_DemoSelect
#include <control/demo/DemoSelect.h>
#endif
namespace control{
namespace demo{

::control::demo::DemoSelect DemoSelect_obj::GraphicsSelect;

::control::demo::DemoSelect DemoSelect_obj::HomeSelect;

::control::demo::DemoSelect DemoSelect_obj::InputSelect;

::control::demo::DemoSelect DemoSelect_obj::PhysSelect;

HX_DEFINE_CREATE_ENUM(DemoSelect_obj)

int DemoSelect_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("GraphicsSelect","\x47","\x46","\x54","\x67")) return 1;
	if (inName==HX_HCSTRING("HomeSelect","\x9b","\x3e","\xd8","\xec")) return 0;
	if (inName==HX_HCSTRING("InputSelect","\x86","\x8e","\x99","\x43")) return 2;
	if (inName==HX_HCSTRING("PhysSelect","\x8e","\xf6","\x1b","\x1f")) return 3;
	return super::__FindIndex(inName);
}

int DemoSelect_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("GraphicsSelect","\x47","\x46","\x54","\x67")) return 0;
	if (inName==HX_HCSTRING("HomeSelect","\x9b","\x3e","\xd8","\xec")) return 0;
	if (inName==HX_HCSTRING("InputSelect","\x86","\x8e","\x99","\x43")) return 0;
	if (inName==HX_HCSTRING("PhysSelect","\x8e","\xf6","\x1b","\x1f")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic DemoSelect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("GraphicsSelect","\x47","\x46","\x54","\x67")) return GraphicsSelect;
	if (inName==HX_HCSTRING("HomeSelect","\x9b","\x3e","\xd8","\xec")) return HomeSelect;
	if (inName==HX_HCSTRING("InputSelect","\x86","\x8e","\x99","\x43")) return InputSelect;
	if (inName==HX_HCSTRING("PhysSelect","\x8e","\xf6","\x1b","\x1f")) return PhysSelect;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("HomeSelect","\x9b","\x3e","\xd8","\xec"),
	HX_HCSTRING("GraphicsSelect","\x47","\x46","\x54","\x67"),
	HX_HCSTRING("InputSelect","\x86","\x8e","\x99","\x43"),
	HX_HCSTRING("PhysSelect","\x8e","\xf6","\x1b","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DemoSelect_obj::GraphicsSelect,"GraphicsSelect");
	HX_MARK_MEMBER_NAME(DemoSelect_obj::HomeSelect,"HomeSelect");
	HX_MARK_MEMBER_NAME(DemoSelect_obj::InputSelect,"InputSelect");
	HX_MARK_MEMBER_NAME(DemoSelect_obj::PhysSelect,"PhysSelect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DemoSelect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DemoSelect_obj::GraphicsSelect,"GraphicsSelect");
	HX_VISIT_MEMBER_NAME(DemoSelect_obj::HomeSelect,"HomeSelect");
	HX_VISIT_MEMBER_NAME(DemoSelect_obj::InputSelect,"InputSelect");
	HX_VISIT_MEMBER_NAME(DemoSelect_obj::PhysSelect,"PhysSelect");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class DemoSelect_obj::__mClass;

Dynamic __Create_DemoSelect_obj() { return new DemoSelect_obj; }

void DemoSelect_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("control.demo.DemoSelect","\xf9","\x8a","\x32","\xdd"), hx::TCanCast< DemoSelect_obj >,sStaticFields,sMemberFields,
	&__Create_DemoSelect_obj, &__Create,
	&super::__SGetClass(), &CreateDemoSelect_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DemoSelect_obj::__boot()
{
hx::Static(GraphicsSelect) = hx::CreateEnum< DemoSelect_obj >(HX_HCSTRING("GraphicsSelect","\x47","\x46","\x54","\x67"),1);
hx::Static(HomeSelect) = hx::CreateEnum< DemoSelect_obj >(HX_HCSTRING("HomeSelect","\x9b","\x3e","\xd8","\xec"),0);
hx::Static(InputSelect) = hx::CreateEnum< DemoSelect_obj >(HX_HCSTRING("InputSelect","\x86","\x8e","\x99","\x43"),2);
hx::Static(PhysSelect) = hx::CreateEnum< DemoSelect_obj >(HX_HCSTRING("PhysSelect","\x8e","\xf6","\x1b","\x1f"),3);
}


} // end namespace control
} // end namespace demo
