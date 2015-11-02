#ifndef INCLUDED_kha_LoadingScreen
#define INCLUDED_kha_LoadingScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,Game)
HX_DECLARE_CLASS1(kha,LoadingScreen)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  LoadingScreen_obj : public ::kha::Game_obj{
	public:
		typedef ::kha::Game_obj super;
		typedef LoadingScreen_obj OBJ_;
		LoadingScreen_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.LoadingScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LoadingScreen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoadingScreen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LoadingScreen","\xe8","\xd2","\x48","\x78"); }

		virtual Void render( ::kha::Framebuffer frame);

		virtual Void update( );

};

} // end namespace kha

#endif /* INCLUDED_kha_LoadingScreen */ 
