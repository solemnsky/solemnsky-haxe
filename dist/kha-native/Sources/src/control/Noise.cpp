#include <hxcpp.h>

#ifndef INCLUDED_control_Noise
#include <control/Noise.h>
#endif
namespace control{

::control::Noise Noise_obj::Noise;

HX_DEFINE_CREATE_ENUM(Noise_obj)

int Noise_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Noise","\x7a","\xff","\xef","\x32")) return 0;
	return super::__FindIndex(inName);
}

int Noise_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Noise","\x7a","\xff","\xef","\x32")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Noise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Noise","\x7a","\xff","\xef","\x32")) return Noise;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Noise","\x7a","\xff","\xef","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Noise_obj::Noise,"Noise");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Noise_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Noise_obj::Noise,"Noise");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Noise_obj::__mClass;

Dynamic __Create_Noise_obj() { return new Noise_obj; }

void Noise_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("control.Noise","\xa9","\x67","\x8a","\xdb"), hx::TCanCast< Noise_obj >,sStaticFields,sMemberFields,
	&__Create_Noise_obj, &__Create,
	&super::__SGetClass(), &CreateNoise_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Noise_obj::__boot()
{
hx::Static(Noise) = hx::CreateEnum< Noise_obj >(HX_HCSTRING("Noise","\x7a","\xff","\xef","\x32"),0);
}


} // end namespace control
