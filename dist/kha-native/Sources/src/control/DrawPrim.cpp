#include <hxcpp.h>

#ifndef INCLUDED_control_DrawPrim
#include <control/DrawPrim.h>
#endif
#ifndef INCLUDED_control_TextAlign
#include <control/TextAlign.h>
#endif
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif
namespace control{

::control::DrawPrim  DrawPrim_obj::DrawCircle(::util::Vector pos,Float radius)
	{ return hx::CreateEnum< DrawPrim_obj >(HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e"),2,hx::DynamicArray(0,2).Add(pos).Add(radius)); }

::control::DrawPrim  DrawPrim_obj::DrawImage(::util::Vector pos,::String image)
	{ return hx::CreateEnum< DrawPrim_obj >(HX_HCSTRING("DrawImage","\x97","\x34","\x47","\x27"),5,hx::DynamicArray(0,2).Add(pos).Add(image)); }

::control::DrawPrim  DrawPrim_obj::DrawRect(::util::Vector topLeft,::util::Vector bottomRight)
	{ return hx::CreateEnum< DrawPrim_obj >(HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39"),3,hx::DynamicArray(0,2).Add(topLeft).Add(bottomRight)); }

::control::DrawPrim  DrawPrim_obj::DrawText(::util::Vector pos,::control::TextAlign align,::String text)
	{ return hx::CreateEnum< DrawPrim_obj >(HX_HCSTRING("DrawText","\xf1","\x32","\x15","\x3b"),4,hx::DynamicArray(0,3).Add(pos).Add(align).Add(text)); }

::control::DrawPrim  DrawPrim_obj::SetColor(int r,int g,int b,int a)
	{ return hx::CreateEnum< DrawPrim_obj >(HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32"),0,hx::DynamicArray(0,4).Add(r).Add(g).Add(b).Add(a)); }

::control::DrawPrim  DrawPrim_obj::SetFont(::String name,int size)
	{ return hx::CreateEnum< DrawPrim_obj >(HX_HCSTRING("SetFont","\x71","\xc6","\x95","\xd6"),1,hx::DynamicArray(0,2).Add(name).Add(size)); }

HX_DEFINE_CREATE_ENUM(DrawPrim_obj)

int DrawPrim_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e")) return 2;
	if (inName==HX_HCSTRING("DrawImage","\x97","\x34","\x47","\x27")) return 5;
	if (inName==HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39")) return 3;
	if (inName==HX_HCSTRING("DrawText","\xf1","\x32","\x15","\x3b")) return 4;
	if (inName==HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32")) return 0;
	if (inName==HX_HCSTRING("SetFont","\x71","\xc6","\x95","\xd6")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawPrim_obj,DrawCircle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawPrim_obj,DrawImage,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawPrim_obj,DrawRect,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DrawPrim_obj,DrawText,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawPrim_obj,SetColor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawPrim_obj,SetFont,return)

int DrawPrim_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e")) return 2;
	if (inName==HX_HCSTRING("DrawImage","\x97","\x34","\x47","\x27")) return 2;
	if (inName==HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39")) return 2;
	if (inName==HX_HCSTRING("DrawText","\xf1","\x32","\x15","\x3b")) return 3;
	if (inName==HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32")) return 4;
	if (inName==HX_HCSTRING("SetFont","\x71","\xc6","\x95","\xd6")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic DrawPrim_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e")) return DrawCircle_dyn();
	if (inName==HX_HCSTRING("DrawImage","\x97","\x34","\x47","\x27")) return DrawImage_dyn();
	if (inName==HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39")) return DrawRect_dyn();
	if (inName==HX_HCSTRING("DrawText","\xf1","\x32","\x15","\x3b")) return DrawText_dyn();
	if (inName==HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32")) return SetColor_dyn();
	if (inName==HX_HCSTRING("SetFont","\x71","\xc6","\x95","\xd6")) return SetFont_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32"),
	HX_HCSTRING("SetFont","\x71","\xc6","\x95","\xd6"),
	HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e"),
	HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39"),
	HX_HCSTRING("DrawText","\xf1","\x32","\x15","\x3b"),
	HX_HCSTRING("DrawImage","\x97","\x34","\x47","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawPrim_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class DrawPrim_obj::__mClass;

Dynamic __Create_DrawPrim_obj() { return new DrawPrim_obj; }

void DrawPrim_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("control.DrawPrim","\xdb","\xc7","\x61","\x49"), hx::TCanCast< DrawPrim_obj >,sStaticFields,sMemberFields,
	&__Create_DrawPrim_obj, &__Create,
	&super::__SGetClass(), &CreateDrawPrim_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DrawPrim_obj::__boot()
{
}


} // end namespace control
