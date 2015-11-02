#ifndef INCLUDED_control_demo_GraphicsDemo
#define INCLUDED_control_demo_GraphicsDemo

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
HX_DECLARE_CLASS2(control,demo,GraphicsDemo)
HX_DECLARE_CLASS1(util,Vector)
namespace control{
namespace demo{


class HXCPP_CLASS_ATTRIBUTES  GraphicsDemo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsDemo_obj OBJ_;
		GraphicsDemo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="control.demo.GraphicsDemo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsDemo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsDemo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::control::Control_obj *();
		::String __ToString() const { return HX_HCSTRING("GraphicsDemo","\xae","\x8b","\x6d","\x09"); }

		Float time;
		Float x;
		Float y;
		bool exit;
		virtual Void init( ::control::Network _);
		Dynamic init_dyn();

		virtual Void tick( Float delta);
		Dynamic tick_dyn();

		virtual ::control::Scene renderElem( ::util::Vector centerPos);
		Dynamic renderElem_dyn();

		virtual ::control::Scene renderFront( Float delta);
		Dynamic renderFront_dyn();

		virtual ::control::Scene render( Float delta);
		Dynamic render_dyn();

		virtual Void handle( ::control::Event e);
		Dynamic handle_dyn();

		virtual Void profiling( ::control::Profile data);
		Dynamic profiling_dyn();

		virtual ::control::demo::DemoSelect conclude( );
		Dynamic conclude_dyn();

};

} // end namespace control
} // end namespace demo

#endif /* INCLUDED_control_demo_GraphicsDemo */ 
