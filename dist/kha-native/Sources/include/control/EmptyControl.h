#ifndef INCLUDED_control_EmptyControl
#define INCLUDED_control_EmptyControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
HX_DECLARE_CLASS1(control,Control)
HX_DECLARE_CLASS1(control,EmptyControl)
HX_DECLARE_CLASS1(control,Event)
HX_DECLARE_CLASS1(control,Network)
HX_DECLARE_CLASS1(control,Noise)
HX_DECLARE_CLASS1(control,Profile)
HX_DECLARE_CLASS1(control,Scene)
namespace control{


class HXCPP_CLASS_ATTRIBUTES  EmptyControl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EmptyControl_obj OBJ_;
		EmptyControl_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="control.EmptyControl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EmptyControl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EmptyControl_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::control::Control_obj *();
		::String __ToString() const { return HX_HCSTRING("EmptyControl","\x70","\xc0","\xee","\x3c"); }

		virtual Void init( ::control::Network _);
		Dynamic init_dyn();

		virtual Void tick( Float delta);
		Dynamic tick_dyn();

		virtual ::control::Scene render( Float delta);
		Dynamic render_dyn();

		virtual Void profiling( ::control::Profile data);
		Dynamic profiling_dyn();

		virtual Void handle( ::control::Event e);
		Dynamic handle_dyn();

		virtual ::control::Noise conclude( );
		Dynamic conclude_dyn();

};

} // end namespace control

#endif /* INCLUDED_control_EmptyControl */ 
