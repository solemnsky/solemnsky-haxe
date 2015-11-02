#ifndef INCLUDED_kha_input_SensorType
#define INCLUDED_kha_input_SensorType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,input,SensorType)
namespace kha{
namespace input{


class SensorType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SensorType_obj OBJ_;

	public:
		SensorType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.input.SensorType","\xa2","\x8b","\xd2","\x1f"); }
		::String __ToString() const { return HX_HCSTRING("SensorType.","\x7a","\xf3","\x58","\x45") + tag; }

		static ::kha::input::SensorType Accelerometer;
		static inline ::kha::input::SensorType Accelerometer_dyn() { return Accelerometer; }
		static ::kha::input::SensorType Gyroscope;
		static inline ::kha::input::SensorType Gyroscope_dyn() { return Gyroscope; }
};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_SensorType */ 
