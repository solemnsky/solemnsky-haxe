#ifndef INCLUDED_kha_input_Keyboard
#define INCLUDED_kha_input_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Key)
HX_DECLARE_CLASS2(kha,input,Keyboard)
HX_DECLARE_CLASS2(kha,network,Controller)
namespace kha{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  Keyboard_obj : public ::kha::network::Controller_obj{
	public:
		typedef ::kha::network::Controller_obj super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.input.Keyboard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Keyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Keyboard_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Keyboard","\xc7","\x78","\xdb","\x41"); }

		static void __boot();
		static Dynamic __meta__;
		static ::kha::input::Keyboard get( hx::Null< int >  num);
		static Dynamic get_dyn();

		static ::kha::input::Keyboard instance;
		virtual Void notify( Dynamic downListener,Dynamic upListener);
		Dynamic notify_dyn();

		virtual Void remove( Dynamic downListener,Dynamic upListener);
		Dynamic remove_dyn();

		cpp::ArrayBase downListeners;
		cpp::ArrayBase upListeners;
		virtual Void sendDownEvent( ::kha::Key key,::String _char);
		Dynamic sendDownEvent_dyn();

		virtual Void sendUpEvent( ::kha::Key key,::String _char);
		Dynamic sendUpEvent_dyn();

		virtual Void _receive( int offset,::haxe::io::Bytes bytes);

};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_Keyboard */ 
