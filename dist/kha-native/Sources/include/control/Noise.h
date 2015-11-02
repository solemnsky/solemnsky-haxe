#ifndef INCLUDED_control_Noise
#define INCLUDED_control_Noise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,Noise)
namespace control{


class Noise_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Noise_obj OBJ_;

	public:
		Noise_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("control.Noise","\xa9","\x67","\x8a","\xdb"); }
		::String __ToString() const { return HX_HCSTRING("Noise.","\x74","\x8b","\x0f","\x5f") + tag; }

		static ::control::Noise Noise;
		static inline ::control::Noise Noise_dyn() { return Noise; }
};

} // end namespace control

#endif /* INCLUDED_control_Noise */ 
