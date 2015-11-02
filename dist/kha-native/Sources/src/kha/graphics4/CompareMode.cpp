#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_CompareMode
#include <kha/graphics4/CompareMode.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::CompareMode CompareMode_obj::Always;

::kha::graphics4::CompareMode CompareMode_obj::Equal;

::kha::graphics4::CompareMode CompareMode_obj::Greater;

::kha::graphics4::CompareMode CompareMode_obj::GreaterEqual;

::kha::graphics4::CompareMode CompareMode_obj::Less;

::kha::graphics4::CompareMode CompareMode_obj::LessEqual;

::kha::graphics4::CompareMode CompareMode_obj::Never;

::kha::graphics4::CompareMode CompareMode_obj::NotEqual;

HX_DEFINE_CREATE_ENUM(CompareMode_obj)

int CompareMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Always","\xef","\x82","\x6b","\x7b")) return 0;
	if (inName==HX_HCSTRING("Equal","\x94","\x3f","\xb0","\x05")) return 2;
	if (inName==HX_HCSTRING("Greater","\xda","\xb8","\x11","\x85")) return 6;
	if (inName==HX_HCSTRING("GreaterEqual","\x7a","\x30","\x30","\x57")) return 7;
	if (inName==HX_HCSTRING("Less","\x79","\x3f","\x89","\x32")) return 4;
	if (inName==HX_HCSTRING("LessEqual","\x7b","\x49","\x71","\xdf")) return 5;
	if (inName==HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c")) return 1;
	if (inName==HX_HCSTRING("NotEqual","\xc1","\x5d","\x43","\xdc")) return 3;
	return super::__FindIndex(inName);
}

int CompareMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Always","\xef","\x82","\x6b","\x7b")) return 0;
	if (inName==HX_HCSTRING("Equal","\x94","\x3f","\xb0","\x05")) return 0;
	if (inName==HX_HCSTRING("Greater","\xda","\xb8","\x11","\x85")) return 0;
	if (inName==HX_HCSTRING("GreaterEqual","\x7a","\x30","\x30","\x57")) return 0;
	if (inName==HX_HCSTRING("Less","\x79","\x3f","\x89","\x32")) return 0;
	if (inName==HX_HCSTRING("LessEqual","\x7b","\x49","\x71","\xdf")) return 0;
	if (inName==HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c")) return 0;
	if (inName==HX_HCSTRING("NotEqual","\xc1","\x5d","\x43","\xdc")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CompareMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Always","\xef","\x82","\x6b","\x7b")) return Always;
	if (inName==HX_HCSTRING("Equal","\x94","\x3f","\xb0","\x05")) return Equal;
	if (inName==HX_HCSTRING("Greater","\xda","\xb8","\x11","\x85")) return Greater;
	if (inName==HX_HCSTRING("GreaterEqual","\x7a","\x30","\x30","\x57")) return GreaterEqual;
	if (inName==HX_HCSTRING("Less","\x79","\x3f","\x89","\x32")) return Less;
	if (inName==HX_HCSTRING("LessEqual","\x7b","\x49","\x71","\xdf")) return LessEqual;
	if (inName==HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c")) return Never;
	if (inName==HX_HCSTRING("NotEqual","\xc1","\x5d","\x43","\xdc")) return NotEqual;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Always","\xef","\x82","\x6b","\x7b"),
	HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c"),
	HX_HCSTRING("Equal","\x94","\x3f","\xb0","\x05"),
	HX_HCSTRING("NotEqual","\xc1","\x5d","\x43","\xdc"),
	HX_HCSTRING("Less","\x79","\x3f","\x89","\x32"),
	HX_HCSTRING("LessEqual","\x7b","\x49","\x71","\xdf"),
	HX_HCSTRING("Greater","\xda","\xb8","\x11","\x85"),
	HX_HCSTRING("GreaterEqual","\x7a","\x30","\x30","\x57"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompareMode_obj::Always,"Always");
	HX_MARK_MEMBER_NAME(CompareMode_obj::Equal,"Equal");
	HX_MARK_MEMBER_NAME(CompareMode_obj::Greater,"Greater");
	HX_MARK_MEMBER_NAME(CompareMode_obj::GreaterEqual,"GreaterEqual");
	HX_MARK_MEMBER_NAME(CompareMode_obj::Less,"Less");
	HX_MARK_MEMBER_NAME(CompareMode_obj::LessEqual,"LessEqual");
	HX_MARK_MEMBER_NAME(CompareMode_obj::Never,"Never");
	HX_MARK_MEMBER_NAME(CompareMode_obj::NotEqual,"NotEqual");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompareMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Always,"Always");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Equal,"Equal");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Greater,"Greater");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::GreaterEqual,"GreaterEqual");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Less,"Less");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::LessEqual,"LessEqual");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Never,"Never");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::NotEqual,"NotEqual");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CompareMode_obj::__mClass;

Dynamic __Create_CompareMode_obj() { return new CompareMode_obj; }

void CompareMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.CompareMode","\xd9","\xdf","\x5c","\xb7"), hx::TCanCast< CompareMode_obj >,sStaticFields,sMemberFields,
	&__Create_CompareMode_obj, &__Create,
	&super::__SGetClass(), &CreateCompareMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CompareMode_obj::__boot()
{
hx::Static(Always) = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Always","\xef","\x82","\x6b","\x7b"),0);
hx::Static(Equal) = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Equal","\x94","\x3f","\xb0","\x05"),2);
hx::Static(Greater) = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Greater","\xda","\xb8","\x11","\x85"),6);
hx::Static(GreaterEqual) = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("GreaterEqual","\x7a","\x30","\x30","\x57"),7);
hx::Static(Less) = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Less","\x79","\x3f","\x89","\x32"),4);
hx::Static(LessEqual) = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("LessEqual","\x7b","\x49","\x71","\xdf"),5);
hx::Static(Never) = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c"),1);
hx::Static(NotEqual) = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("NotEqual","\xc1","\x5d","\x43","\xdc"),3);
}


} // end namespace kha
} // end namespace graphics4
