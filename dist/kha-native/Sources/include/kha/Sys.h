#ifndef INCLUDED_kha_Sys
#define INCLUDED_kha_Sys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Mouse)
HX_DECLARE_CLASS1(kha,ScreenRotation)
HX_DECLARE_CLASS1(kha,Sys)

#include <Kore/pch.h>
#include <Kore/Application.h>
#include <Kore/System.h>

namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Sys_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sys_obj OBJ_;
		Sys_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.Sys")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sys_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sys_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00"); }

		static void __boot();
		static bool needs3d;
		static ::kha::Mouse mouse;
		static ::kha::ScreenRotation screenRotation;
		static cpp::ArrayBase fullscreenListeners;
		static int previousWidth;
		static int previousHeight;
		static Void init( );
		static Dynamic init_dyn();

		static Float getTime( );
		static Dynamic getTime_dyn();

		static int pixelWidth;
		static int pixelHeight;
		static int get_pixelWidth( );
		static Dynamic get_pixelWidth_dyn();

		static int get_pixelHeight( );
		static Dynamic get_pixelHeight_dyn();

		static bool vsynced( );
		static Dynamic vsynced_dyn();

		static int refreshRate( );
		static Dynamic refreshRate_dyn();

		static ::String systemId( );
		static Dynamic systemId_dyn();

		static Void requestShutdown( );
		static Dynamic requestShutdown_dyn();

		static bool canSwitchFullscreen( );
		static Dynamic canSwitchFullscreen_dyn();

		static bool isFullscreen( );
		static Dynamic isFullscreen_dyn();

		static Void requestFullscreen( );
		static Dynamic requestFullscreen_dyn();

		static Void exitFullscreen( );
		static Dynamic exitFullscreen_dyn();

		virtual Void notifyOfFullscreenChange( Dynamic func,Dynamic error);
		Dynamic notifyOfFullscreenChange_dyn();

		virtual Void removeFromFullscreenChange( Dynamic func,Dynamic error);
		Dynamic removeFromFullscreenChange_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Sys */ 
