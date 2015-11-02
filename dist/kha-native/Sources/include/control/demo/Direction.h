#ifndef INCLUDED_control_demo_Direction
#define INCLUDED_control_demo_Direction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(control,demo,Direction)
namespace control{
namespace demo{


class Direction_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Direction_obj OBJ_;

	public:
		Direction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("control.demo.Direction","\x05","\xa9","\x91","\xb1"); }
		::String __ToString() const { return HX_HCSTRING("Direction.","\x2f","\x99","\xc6","\x1e") + tag; }

		static ::control::demo::Direction DownDir;
		static inline ::control::demo::Direction DownDir_dyn() { return DownDir; }
		static ::control::demo::Direction LeftDir;
		static inline ::control::demo::Direction LeftDir_dyn() { return LeftDir; }
		static ::control::demo::Direction RightDir;
		static inline ::control::demo::Direction RightDir_dyn() { return RightDir; }
		static ::control::demo::Direction UpDir;
		static inline ::control::demo::Direction UpDir_dyn() { return UpDir; }
};

} // end namespace control
} // end namespace demo

#endif /* INCLUDED_control_demo_Direction */ 
