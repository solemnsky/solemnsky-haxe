#ifndef INCLUDED_Manager
#define INCLUDED_Manager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
HX_DECLARE_CLASS0(Manager)
HX_DECLARE_CLASS1(control,Control)
HX_DECLARE_CLASS1(control,Key)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,Game)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Key)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)


class HXCPP_CLASS_ATTRIBUTES  Manager_obj : public ::kha::Game_obj{
	public:
		typedef ::kha::Game_obj super;
		typedef Manager_obj OBJ_;
		Manager_obj();
		Void __construct(::control::Control ctrl,hx::Null< int >  __o_tps);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Manager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Manager_obj > __new(::control::Control ctrl,hx::Null< int >  __o_tps);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Manager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Manager","\x4d","\xba","\x12","\xe1"); }

		static void __boot();
		static int profileWindow;
		static int profileUpdate;
		static ::control::Key keyFromKha( ::kha::Key key,::String _char);
		static Dynamic keyFromKha_dyn();

		Float tps;
		Float tickLength;
		::control::Control ctrl;
		::kha::Image backbuffer;
		::kha::graphics2::Graphics g;
		Float realHeight;
		Float realWidth;
		Float lastTick;
		Float tickAccum;
		Float lastRender;
		int profileTicker;
		Float bufferStart;
		Float renderStart;
		Float renderSleepStart;
		Float tickStart;
		Float tickSleepStart;
		Array< int > bufferOn;
		Array< int > renderOn;
		Array< int > renderOff;
		Array< int > primCount;
		Array< int > tickOn;
		Array< int > tickOff;
		virtual Void init( );

		virtual Void render( ::kha::Framebuffer frame);

		virtual Void update( );

		virtual Void mouseMove( int x,int y);

		virtual Void keyDown( ::kha::Key key,::String _char);

		virtual Void keyUp( ::kha::Key key,::String _char);

		virtual Void pushProfile( Float point,Array< int > profile);
		Dynamic pushProfile_dyn();

		virtual Void pushProfileValue( int point,Array< int > profile);
		Dynamic pushProfileValue_dyn();

		virtual Void controlTick( Float deltaRaw);
		Dynamic controlTick_dyn();

		virtual Void controlRender( ::kha::Framebuffer frame,Float deltaRaw);
		Dynamic controlRender_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

};


#endif /* INCLUDED_Manager */ 
