#ifndef INCLUDED_control_demo_SelectionScreen
#define INCLUDED_control_demo_SelectionScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
HX_DECLARE_CLASS1(control,Control)
HX_DECLARE_CLASS1(control,Event)
HX_DECLARE_CLASS1(control,Network)
HX_DECLARE_CLASS1(control,Profile)
HX_DECLARE_CLASS1(control,Scene)
HX_DECLARE_CLASS2(control,demo,DemoSelect)
HX_DECLARE_CLASS2(control,demo,SelectionScreen)
namespace control{
namespace demo{


class HXCPP_CLASS_ATTRIBUTES  SelectionScreen_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SelectionScreen_obj OBJ_;
		SelectionScreen_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="control.demo.SelectionScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SelectionScreen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SelectionScreen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::control::Control_obj *();
		::String __ToString() const { return HX_HCSTRING("SelectionScreen","\xb8","\xf0","\x81","\x1d"); }

		static ::control::Scene renderText( );
		static Dynamic renderText_dyn();

		::control::demo::DemoSelect selection;
		virtual Void init( ::control::Network _);
		Dynamic init_dyn();

		virtual Void tick( Float _);
		Dynamic tick_dyn();

		virtual ::control::Scene render( Float delta);
		Dynamic render_dyn();

		virtual Void profiling( ::control::Profile data);
		Dynamic profiling_dyn();

		virtual Void handle( ::control::Event e);
		Dynamic handle_dyn();

		virtual ::control::demo::DemoSelect conclude( );
		Dynamic conclude_dyn();

};

} // end namespace control
} // end namespace demo

#endif /* INCLUDED_control_demo_SelectionScreen */ 
