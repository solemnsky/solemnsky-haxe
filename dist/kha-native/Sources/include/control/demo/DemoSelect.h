#ifndef INCLUDED_control_demo_DemoSelect
#define INCLUDED_control_demo_DemoSelect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(control,demo,DemoSelect)
namespace control{
namespace demo{


class DemoSelect_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DemoSelect_obj OBJ_;

	public:
		DemoSelect_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("control.demo.DemoSelect","\xf9","\x8a","\x32","\xdd"); }
		::String __ToString() const { return HX_HCSTRING("DemoSelect.","\xaf","\xa2","\xf4","\x05") + tag; }

		static ::control::demo::DemoSelect GraphicsSelect;
		static inline ::control::demo::DemoSelect GraphicsSelect_dyn() { return GraphicsSelect; }
		static ::control::demo::DemoSelect HomeSelect;
		static inline ::control::demo::DemoSelect HomeSelect_dyn() { return HomeSelect; }
		static ::control::demo::DemoSelect InputSelect;
		static inline ::control::demo::DemoSelect InputSelect_dyn() { return InputSelect; }
		static ::control::demo::DemoSelect PhysSelect;
		static inline ::control::demo::DemoSelect PhysSelect_dyn() { return PhysSelect; }
};

} // end namespace control
} // end namespace demo

#endif /* INCLUDED_control_demo_DemoSelect */ 
