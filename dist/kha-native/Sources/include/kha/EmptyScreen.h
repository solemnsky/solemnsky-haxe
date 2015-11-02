#ifndef INCLUDED_kha_EmptyScreen
#define INCLUDED_kha_EmptyScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,EmptyScreen)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,Game)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  EmptyScreen_obj : public ::kha::Game_obj{
	public:
		typedef ::kha::Game_obj super;
		typedef EmptyScreen_obj OBJ_;
		EmptyScreen_obj();
		Void __construct(int color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.EmptyScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EmptyScreen_obj > __new(int color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EmptyScreen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EmptyScreen","\xb9","\x69","\xb8","\xf3"); }

		int color;
		virtual Void render( ::kha::Framebuffer frame);

		virtual Void update( );

};

} // end namespace kha

#endif /* INCLUDED_kha_EmptyScreen */ 
