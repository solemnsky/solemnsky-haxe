#ifndef INCLUDED_kha_ScreenRotation
#define INCLUDED_kha_ScreenRotation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,ScreenRotation)
namespace kha{


class ScreenRotation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ScreenRotation_obj OBJ_;

	public:
		ScreenRotation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.ScreenRotation","\xf4","\x85","\x3e","\xbb"); }
		::String __ToString() const { return HX_HCSTRING("ScreenRotation.","\x04","\x38","\x5c","\x1d") + tag; }

		static ::kha::ScreenRotation Rotation180;
		static inline ::kha::ScreenRotation Rotation180_dyn() { return Rotation180; }
		static ::kha::ScreenRotation Rotation270;
		static inline ::kha::ScreenRotation Rotation270_dyn() { return Rotation270; }
		static ::kha::ScreenRotation Rotation90;
		static inline ::kha::ScreenRotation Rotation90_dyn() { return Rotation90; }
		static ::kha::ScreenRotation RotationNone;
		static inline ::kha::ScreenRotation RotationNone_dyn() { return RotationNone; }
};

} // end namespace kha

#endif /* INCLUDED_kha_ScreenRotation */ 
