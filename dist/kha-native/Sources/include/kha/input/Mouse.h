#ifndef INCLUDED_kha_input_Mouse
#define INCLUDED_kha_input_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,input,Mouse)
HX_DECLARE_CLASS2(kha,network,Controller)
namespace kha{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  Mouse_obj : public ::kha::network::Controller_obj{
	public:
		typedef ::kha::network::Controller_obj super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.input.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static void __boot();
		static Dynamic __meta__;
		static ::kha::input::Mouse get( hx::Null< int >  num);
		static Dynamic get_dyn();

		static ::kha::input::Mouse instance;
		virtual Void notify( Dynamic downListener,Dynamic upListener,Dynamic moveListener,Dynamic wheelListener);
		Dynamic notify_dyn();

		virtual Void remove( Dynamic downListener,Dynamic upListener,Dynamic moveListener,Dynamic wheelListener);
		Dynamic remove_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

		virtual bool canLock( );
		Dynamic canLock_dyn();

		virtual bool isLocked( );
		Dynamic isLocked_dyn();

		virtual Void notifyOfLockChange( Dynamic func,Dynamic error);
		Dynamic notifyOfLockChange_dyn();

		virtual Void removeFromLockChange( Dynamic func,Dynamic error);
		Dynamic removeFromLockChange_dyn();

		cpp::ArrayBase downListeners;
		cpp::ArrayBase upListeners;
		cpp::ArrayBase moveListeners;
		cpp::ArrayBase wheelListeners;
		virtual Void sendDownEvent( int button,int x,int y);
		Dynamic sendDownEvent_dyn();

		virtual Void sendUpEvent( int button,int x,int y);
		Dynamic sendUpEvent_dyn();

		virtual Void sendMoveEvent( int x,int y,int movementX,int movementY);
		Dynamic sendMoveEvent_dyn();

		virtual Void sendWheelEvent( int delta);
		Dynamic sendWheelEvent_dyn();

		virtual Void _receive( int offset,::haxe::io::Bytes bytes);

};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_Mouse */ 
