#ifndef INCLUDED_kha_Starter
#define INCLUDED_kha_Starter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,Game)
HX_DECLARE_CLASS1(kha,Starter)
HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)
HX_DECLARE_CLASS2(kha,input,Gamepad)
HX_DECLARE_CLASS2(kha,input,Keyboard)
HX_DECLARE_CLASS2(kha,input,Mouse)
HX_DECLARE_CLASS2(kha,input,Surface)
HX_DECLARE_CLASS2(kha,network,Controller)
#include <Kore/Input/Mouse.h>
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Starter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Starter_obj OBJ_;
		Starter_obj();
		Void __construct(::kha::graphics4::TextureFormat backbufferFormat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Starter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Starter_obj > __new(::kha::graphics4::TextureFormat backbufferFormat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Starter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Starter","\x2f","\x51","\x6c","\x02"); }

		static ::kha::Framebuffer framebuffer;
		static ::kha::input::Keyboard keyboard;
		static ::kha::input::Mouse mouse;
		static ::kha::input::Gamepad gamepad;
		static ::kha::input::Surface surface;
		static cpp::ArrayBase mouseLockListeners;
		static Void lockMouse( );
		static Dynamic lockMouse_dyn();

		static Void unlockMouse( );
		static Dynamic unlockMouse_dyn();

		static bool canLockMouse( );
		static Dynamic canLockMouse_dyn();

		static bool isMouseLocked( );
		static Dynamic isMouseLocked_dyn();

		static Void notifyOfMouseLockChange( Dynamic func,Dynamic error);
		static Dynamic notifyOfMouseLockChange_dyn();

		static Void removeFromMouseLockChange( Dynamic func,Dynamic error);
		static Dynamic removeFromMouseLockChange_dyn();

		static Void frame( );
		static Dynamic frame_dyn();

		static Void pushUp( );
		static Dynamic pushUp_dyn();

		static Void pushDown( );
		static Dynamic pushDown_dyn();

		static Void pushLeft( );
		static Dynamic pushLeft_dyn();

		static Void pushRight( );
		static Dynamic pushRight_dyn();

		static Void pushButton1( );
		static Dynamic pushButton1_dyn();

		static Void releaseUp( );
		static Dynamic releaseUp_dyn();

		static Void releaseDown( );
		static Dynamic releaseDown_dyn();

		static Void releaseLeft( );
		static Dynamic releaseLeft_dyn();

		static Void releaseRight( );
		static Dynamic releaseRight_dyn();

		static Void releaseButton1( );
		static Dynamic releaseButton1_dyn();

		static Void pushChar( int charCode);
		static Dynamic pushChar_dyn();

		static Void releaseChar( int charCode);
		static Dynamic releaseChar_dyn();

		static Void pushShift( );
		static Dynamic pushShift_dyn();

		static Void releaseShift( );
		static Dynamic releaseShift_dyn();

		static Void pushBackspace( );
		static Dynamic pushBackspace_dyn();

		static Void releaseBackspace( );
		static Dynamic releaseBackspace_dyn();

		static Void pushTab( );
		static Dynamic pushTab_dyn();

		static Void releaseTab( );
		static Dynamic releaseTab_dyn();

		static Void pushEnter( );
		static Dynamic pushEnter_dyn();

		static Void releaseEnter( );
		static Dynamic releaseEnter_dyn();

		static Void pushControl( );
		static Dynamic pushControl_dyn();

		static Void releaseControl( );
		static Dynamic releaseControl_dyn();

		static Void pushAlt( );
		static Dynamic pushAlt_dyn();

		static Void releaseAlt( );
		static Dynamic releaseAlt_dyn();

		static Void pushEscape( );
		static Dynamic pushEscape_dyn();

		static Void releaseEscape( );
		static Dynamic releaseEscape_dyn();

		static Void pushDelete( );
		static Dynamic pushDelete_dyn();

		static Void releaseDelete( );
		static Dynamic releaseDelete_dyn();

		static Void pushBack( );
		static Dynamic pushBack_dyn();

		static Void releaseBack( );
		static Dynamic releaseBack_dyn();

		static int mouseX;
		static int mouseY;
		static Void mouseDown( int button,int x,int y);
		static Dynamic mouseDown_dyn();

		static Void mouseUp( int button,int x,int y);
		static Dynamic mouseUp_dyn();

		static Void mouseMove( int x,int y,int movementX,int movementY);
		static Dynamic mouseMove_dyn();

		static Void mouseWheel( int delta);
		static Dynamic mouseWheel_dyn();

		static Void gamepadAxis( int axis,Float value);
		static Dynamic gamepadAxis_dyn();

		static Void gamepadButton( int button,Float value);
		static Dynamic gamepadButton_dyn();

		static Void touchStart( int index,int x,int y);
		static Dynamic touchStart_dyn();

		static Void touchEnd( int index,int x,int y);
		static Dynamic touchEnd_dyn();

		static Void touchMove( int index,int x,int y);
		static Dynamic touchMove_dyn();

		static Void foreground( );
		static Dynamic foreground_dyn();

		static Void resume( );
		static Dynamic resume_dyn();

		static Void pause( );
		static Dynamic pause_dyn();

		static Void background( );
		static Dynamic background_dyn();

		static Void shutdown( );
		static Dynamic shutdown_dyn();

		::kha::Game gameToStart;
		virtual Void start( ::kha::Game game);
		Dynamic start_dyn();

		virtual Void loadFinished( );
		Dynamic loadFinished_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Starter */ 
