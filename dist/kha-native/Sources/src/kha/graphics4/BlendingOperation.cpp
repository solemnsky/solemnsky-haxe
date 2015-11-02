#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <kha/graphics4/BlendingOperation.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::BlendingOperation BlendingOperation_obj::BlendOne;

::kha::graphics4::BlendingOperation BlendingOperation_obj::BlendZero;

::kha::graphics4::BlendingOperation BlendingOperation_obj::DestinationAlpha;

::kha::graphics4::BlendingOperation BlendingOperation_obj::InverseDestinationAlpha;

::kha::graphics4::BlendingOperation BlendingOperation_obj::InverseSourceAlpha;

::kha::graphics4::BlendingOperation BlendingOperation_obj::SourceAlpha;

::kha::graphics4::BlendingOperation BlendingOperation_obj::Undefined;

HX_DEFINE_CREATE_ENUM(BlendingOperation_obj)

int BlendingOperation_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BlendOne","\xb5","\x6e","\x84","\x44")) return 1;
	if (inName==HX_HCSTRING("BlendZero","\xf9","\xff","\x9a","\xb6")) return 2;
	if (inName==HX_HCSTRING("DestinationAlpha","\x10","\x66","\x5c","\xb5")) return 4;
	if (inName==HX_HCSTRING("InverseDestinationAlpha","\xa0","\xf9","\x1a","\x15")) return 6;
	if (inName==HX_HCSTRING("InverseSourceAlpha","\xd3","\x1a","\xb9","\x46")) return 5;
	if (inName==HX_HCSTRING("SourceAlpha","\x63","\x04","\xcf","\x34")) return 3;
	if (inName==HX_HCSTRING("Undefined","\x70","\x1e","\xdd","\x3e")) return 0;
	return super::__FindIndex(inName);
}

int BlendingOperation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BlendOne","\xb5","\x6e","\x84","\x44")) return 0;
	if (inName==HX_HCSTRING("BlendZero","\xf9","\xff","\x9a","\xb6")) return 0;
	if (inName==HX_HCSTRING("DestinationAlpha","\x10","\x66","\x5c","\xb5")) return 0;
	if (inName==HX_HCSTRING("InverseDestinationAlpha","\xa0","\xf9","\x1a","\x15")) return 0;
	if (inName==HX_HCSTRING("InverseSourceAlpha","\xd3","\x1a","\xb9","\x46")) return 0;
	if (inName==HX_HCSTRING("SourceAlpha","\x63","\x04","\xcf","\x34")) return 0;
	if (inName==HX_HCSTRING("Undefined","\x70","\x1e","\xdd","\x3e")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BlendingOperation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BlendOne","\xb5","\x6e","\x84","\x44")) return BlendOne;
	if (inName==HX_HCSTRING("BlendZero","\xf9","\xff","\x9a","\xb6")) return BlendZero;
	if (inName==HX_HCSTRING("DestinationAlpha","\x10","\x66","\x5c","\xb5")) return DestinationAlpha;
	if (inName==HX_HCSTRING("InverseDestinationAlpha","\xa0","\xf9","\x1a","\x15")) return InverseDestinationAlpha;
	if (inName==HX_HCSTRING("InverseSourceAlpha","\xd3","\x1a","\xb9","\x46")) return InverseSourceAlpha;
	if (inName==HX_HCSTRING("SourceAlpha","\x63","\x04","\xcf","\x34")) return SourceAlpha;
	if (inName==HX_HCSTRING("Undefined","\x70","\x1e","\xdd","\x3e")) return Undefined;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Undefined","\x70","\x1e","\xdd","\x3e"),
	HX_HCSTRING("BlendOne","\xb5","\x6e","\x84","\x44"),
	HX_HCSTRING("BlendZero","\xf9","\xff","\x9a","\xb6"),
	HX_HCSTRING("SourceAlpha","\x63","\x04","\xcf","\x34"),
	HX_HCSTRING("DestinationAlpha","\x10","\x66","\x5c","\xb5"),
	HX_HCSTRING("InverseSourceAlpha","\xd3","\x1a","\xb9","\x46"),
	HX_HCSTRING("InverseDestinationAlpha","\xa0","\xf9","\x1a","\x15"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendingOperation_obj::BlendOne,"BlendOne");
	HX_MARK_MEMBER_NAME(BlendingOperation_obj::BlendZero,"BlendZero");
	HX_MARK_MEMBER_NAME(BlendingOperation_obj::DestinationAlpha,"DestinationAlpha");
	HX_MARK_MEMBER_NAME(BlendingOperation_obj::InverseDestinationAlpha,"InverseDestinationAlpha");
	HX_MARK_MEMBER_NAME(BlendingOperation_obj::InverseSourceAlpha,"InverseSourceAlpha");
	HX_MARK_MEMBER_NAME(BlendingOperation_obj::SourceAlpha,"SourceAlpha");
	HX_MARK_MEMBER_NAME(BlendingOperation_obj::Undefined,"Undefined");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendingOperation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendingOperation_obj::BlendOne,"BlendOne");
	HX_VISIT_MEMBER_NAME(BlendingOperation_obj::BlendZero,"BlendZero");
	HX_VISIT_MEMBER_NAME(BlendingOperation_obj::DestinationAlpha,"DestinationAlpha");
	HX_VISIT_MEMBER_NAME(BlendingOperation_obj::InverseDestinationAlpha,"InverseDestinationAlpha");
	HX_VISIT_MEMBER_NAME(BlendingOperation_obj::InverseSourceAlpha,"InverseSourceAlpha");
	HX_VISIT_MEMBER_NAME(BlendingOperation_obj::SourceAlpha,"SourceAlpha");
	HX_VISIT_MEMBER_NAME(BlendingOperation_obj::Undefined,"Undefined");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class BlendingOperation_obj::__mClass;

Dynamic __Create_BlendingOperation_obj() { return new BlendingOperation_obj; }

void BlendingOperation_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics4.BlendingOperation","\xa7","\xd4","\x66","\xad"), hx::TCanCast< BlendingOperation_obj >,sStaticFields,sMemberFields,
	&__Create_BlendingOperation_obj, &__Create,
	&super::__SGetClass(), &CreateBlendingOperation_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BlendingOperation_obj::__boot()
{
hx::Static(BlendOne) = hx::CreateEnum< BlendingOperation_obj >(HX_HCSTRING("BlendOne","\xb5","\x6e","\x84","\x44"),1);
hx::Static(BlendZero) = hx::CreateEnum< BlendingOperation_obj >(HX_HCSTRING("BlendZero","\xf9","\xff","\x9a","\xb6"),2);
hx::Static(DestinationAlpha) = hx::CreateEnum< BlendingOperation_obj >(HX_HCSTRING("DestinationAlpha","\x10","\x66","\x5c","\xb5"),4);
hx::Static(InverseDestinationAlpha) = hx::CreateEnum< BlendingOperation_obj >(HX_HCSTRING("InverseDestinationAlpha","\xa0","\xf9","\x1a","\x15"),6);
hx::Static(InverseSourceAlpha) = hx::CreateEnum< BlendingOperation_obj >(HX_HCSTRING("InverseSourceAlpha","\xd3","\x1a","\xb9","\x46"),5);
hx::Static(SourceAlpha) = hx::CreateEnum< BlendingOperation_obj >(HX_HCSTRING("SourceAlpha","\x63","\x04","\xcf","\x34"),3);
hx::Static(Undefined) = hx::CreateEnum< BlendingOperation_obj >(HX_HCSTRING("Undefined","\x70","\x1e","\xdd","\x3e"),0);
}


} // end namespace kha
} // end namespace graphics4
