#ifndef INCLUDED_control_ControlNetwork
#define INCLUDED_control_ControlNetwork

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
HX_DECLARE_CLASS1(control,Control)
HX_DECLARE_CLASS1(control,ControlNetwork)
HX_DECLARE_CLASS1(control,Event)
HX_DECLARE_CLASS1(control,Network)
HX_DECLARE_CLASS1(control,Noise)
HX_DECLARE_CLASS1(control,Profile)
HX_DECLARE_CLASS1(control,Scene)
namespace control{


class HXCPP_CLASS_ATTRIBUTES  ControlNetwork_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ControlNetwork_obj OBJ_;
		ControlNetwork_obj();
		Void __construct(Dynamic moveThrough,::control::Control initialCtrl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="control.ControlNetwork")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ControlNetwork_obj > __new(Dynamic moveThrough,::control::Control initialCtrl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ControlNetwork_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::control::Control_obj *();
		::String __ToString() const { return HX_HCSTRING("ControlNetwork","\xf1","\xea","\x08","\x37"); }

		Dynamic moveThrough;
		Dynamic &moveThrough_dyn() { return moveThrough;}
		::control::Control ctrl;
		virtual Void init( ::control::Network n);
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

#endif /* INCLUDED_control_ControlNetwork */ 
