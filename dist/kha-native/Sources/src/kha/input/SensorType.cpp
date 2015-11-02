#include <hxcpp.h>

#ifndef INCLUDED_kha_input_SensorType
#include <kha/input/SensorType.h>
#endif
namespace kha{
namespace input{

::kha::input::SensorType SensorType_obj::Accelerometer;

::kha::input::SensorType SensorType_obj::Gyroscope;

HX_DEFINE_CREATE_ENUM(SensorType_obj)

int SensorType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Accelerometer","\xaf","\x6e","\xff","\x50")) return 0;
	if (inName==HX_HCSTRING("Gyroscope","\xa5","\x70","\xd1","\xe8")) return 1;
	return super::__FindIndex(inName);
}

int SensorType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Accelerometer","\xaf","\x6e","\xff","\x50")) return 0;
	if (inName==HX_HCSTRING("Gyroscope","\xa5","\x70","\xd1","\xe8")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SensorType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Accelerometer","\xaf","\x6e","\xff","\x50")) return Accelerometer;
	if (inName==HX_HCSTRING("Gyroscope","\xa5","\x70","\xd1","\xe8")) return Gyroscope;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Accelerometer","\xaf","\x6e","\xff","\x50"),
	HX_HCSTRING("Gyroscope","\xa5","\x70","\xd1","\xe8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SensorType_obj::Accelerometer,"Accelerometer");
	HX_MARK_MEMBER_NAME(SensorType_obj::Gyroscope,"Gyroscope");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SensorType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SensorType_obj::Accelerometer,"Accelerometer");
	HX_VISIT_MEMBER_NAME(SensorType_obj::Gyroscope,"Gyroscope");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class SensorType_obj::__mClass;

Dynamic __Create_SensorType_obj() { return new SensorType_obj; }

void SensorType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.input.SensorType","\xa2","\x8b","\xd2","\x1f"), hx::TCanCast< SensorType_obj >,sStaticFields,sMemberFields,
	&__Create_SensorType_obj, &__Create,
	&super::__SGetClass(), &CreateSensorType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SensorType_obj::__boot()
{
hx::Static(Accelerometer) = hx::CreateEnum< SensorType_obj >(HX_HCSTRING("Accelerometer","\xaf","\x6e","\xff","\x50"),0);
hx::Static(Gyroscope) = hx::CreateEnum< SensorType_obj >(HX_HCSTRING("Gyroscope","\xa5","\x70","\xd1","\xe8"),1);
}


} // end namespace kha
} // end namespace input
