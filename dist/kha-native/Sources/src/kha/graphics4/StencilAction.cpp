#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_StencilAction
#include <kha/graphics4/StencilAction.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::StencilAction StencilAction_obj::Decrement;

::kha::graphics4::StencilAction StencilAction_obj::DecrementWrap;

::kha::graphics4::StencilAction StencilAction_obj::Increment;

::kha::graphics4::StencilAction StencilAction_obj::IncrementWrap;

::kha::graphics4::StencilAction StencilAction_obj::Invert;

::kha::graphics4::StencilAction StencilAction_obj::Keep;

::kha::graphics4::StencilAction StencilAction_obj::Replace;

::kha::graphics4::StencilAction StencilAction_obj::Zero;

HX_DEFINE_CREATE_ENUM(StencilAction_obj)

int StencilAction_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Decrement","\xf3","\xd5","\x54","\xb2")) return 5;
	if (inName==HX_HCSTRING("DecrementWrap","\x5d","\xb1","\x1a","\xea")) return 6;
	if (inName==HX_HCSTRING("Increment","\x0f","\xe6","\xd1","\xd3")) return 3;
	if (inName==HX_HCSTRING("IncrementWrap","\x79","\xff","\x97","\x96")) return 4;
	if (inName==HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4")) return 7;
	if (inName==HX_HCSTRING("Keep","\xa5","\xfc","\xdf","\x31")) return 0;
	if (inName==HX_HCSTRING("Replace","\x14","\x70","\x79","\x78")) return 2;
	if (inName==HX_HCSTRING("Zero","\x48","\x3b","\xca","\x3b")) return 1;
	return super::__FindIndex(inName);
}

int StencilAction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Decrement","\xf3","\xd5","\x54","\xb2")) return 0;
	if (inName==HX_HCSTRING("DecrementWrap","\x5d","\xb1","\x1a","\xea")) return 0;
	if (inName==HX_HCSTRING("Increment","\x0f","\xe6","\xd1","\xd3")) return 0;
	if (inName==HX_HCSTRING("IncrementWrap","\x79","\xff","\x97","\x96")) return 0;
	if (inName==HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4")) return 0;
	if (inName==HX_HCSTRING("Keep","\xa5","\xfc","\xdf","\x31")) return 0;
	if (inName==HX_HCSTRING("Replace","\x14","\x70","\x79","\x78")) return 0;
	if (inName==HX_HCSTRING("Zero","\x48","\x3b","\xca","\x3b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic StencilAction_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Decrement","\xf3","\xd5","\x54","\xb2")) return Decrement;
	if (inName==HX_HCSTRING("DecrementWrap","\x5d","\xb1","\x1a","\xea")) return DecrementWrap;
	if (inName==HX_HCSTRING("Increment","\x0f","\xe6","\xd1","\xd3")) return Increment;
	if (inName==HX_HCSTRING("IncrementWrap","\x79","\xff","\x97","\x96")) return IncrementWrap;
	if (inName==HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4")) return Invert;
	if (inName==HX_HCSTRING("Keep","\xa5","\xfc","\xdf","\x31")) return Keep;
	if (inName==HX_HCSTRING("Replace","\x14","\x70","\x79","\x78")) return Replace;
	if (inName==HX_HCSTRING("Zero","\x48","\x3b","\xca","\x3b")) return Zero;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Keep","\xa5","\xfc","\xdf","\x31"),
	HX_HCSTRING("Zero","\x48","\x3b","\xca","\x3b"),
	HX_HCSTRING("Replace","\x14","\x70","\x79","\x78"),
	HX_HCSTRING("Increment","\x0f","\xe6","\xd1","\xd3"),
	HX_HCSTRING("IncrementWrap","\x79","\xff","\x97","\x96"),
	HX_HCSTRING("Decrement","\xf3","\xd5","\x54","\xb2"),
	HX_HCSTRING("DecrementWrap","\x5d","\xb1","\x1a","\xea"),
	HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StencilAction_obj::Decrement,"Decrement");
	HX_MARK_MEMBER_NAME(StencilAction_obj::DecrementWrap,"DecrementWrap");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Increment,"Increment");
	HX_MARK_MEMBER_NAME(StencilAction_obj::IncrementWrap,"IncrementWrap");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Invert,"Invert");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Keep,"Keep");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Replace,"Replace");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Zero,"Zero");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StencilAction_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Decrement,"Decrement");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::DecrementWrap,"DecrementWrap");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Increment,"Increment");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::IncrementWrap,"IncrementWrap");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Invert,"Invert");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Keep,"Keep");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Replace,"Replace");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Zero,"Zero");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class StencilAction_obj::__mClass;

Dynamic __Create_StencilAction_obj() { return new StencilAction_obj; }

void StencilAction_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.StencilAction","\x43","\x92","\x26","\x29"), hx::TCanCast< StencilAction_obj >,sStaticFields,sMemberFields,
	&__Create_StencilAction_obj, &__Create,
	&super::__SGetClass(), &CreateStencilAction_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void StencilAction_obj::__boot()
{
hx::Static(Decrement) = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Decrement","\xf3","\xd5","\x54","\xb2"),5);
hx::Static(DecrementWrap) = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("DecrementWrap","\x5d","\xb1","\x1a","\xea"),6);
hx::Static(Increment) = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Increment","\x0f","\xe6","\xd1","\xd3"),3);
hx::Static(IncrementWrap) = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("IncrementWrap","\x79","\xff","\x97","\x96"),4);
hx::Static(Invert) = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4"),7);
hx::Static(Keep) = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Keep","\xa5","\xfc","\xdf","\x31"),0);
hx::Static(Replace) = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Replace","\x14","\x70","\x79","\x78"),2);
hx::Static(Zero) = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Zero","\x48","\x3b","\xca","\x3b"),1);
}


} // end namespace kha
} // end namespace graphics4
