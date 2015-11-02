#ifndef INCLUDED_control_demo_AllDemo
#define INCLUDED_control_demo_AllDemo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,Control)
HX_DECLARE_CLASS2(control,demo,AllDemo)
HX_DECLARE_CLASS2(control,demo,DemoSelect)
namespace control{
namespace demo{


class HXCPP_CLASS_ATTRIBUTES  AllDemo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AllDemo_obj OBJ_;
		AllDemo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="control.demo.AllDemo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AllDemo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AllDemo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AllDemo","\xc4","\x4a","\x04","\x1a"); }

		static ::control::Control run( );
		static Dynamic run_dyn();

		static ::control::Control moveThrough( ::control::demo::DemoSelect r);
		static Dynamic moveThrough_dyn();

};

} // end namespace control
} // end namespace demo

#endif /* INCLUDED_control_demo_AllDemo */ 
