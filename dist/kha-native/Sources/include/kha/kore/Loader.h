#ifndef INCLUDED_kha_kore_Loader
#define INCLUDED_kha_kore_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,FontStyle)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Loader)
HX_DECLARE_CLASS1(kha,Music)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,kore,Loader)

#include <Kore/pch.h>
#include <Kore/System.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES  Loader_obj : public ::kha::Loader_obj{
	public:
		typedef ::kha::Loader_obj super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.kore.Loader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Loader","\x33","\xbc","\x03","\x8d"); }

		virtual Void loadMusic( Dynamic desc,Dynamic done);

		virtual Void loadSound( Dynamic desc,Dynamic done);

		virtual Void loadImage( Dynamic desc,Dynamic done);

		virtual Void loadBlob( Dynamic desc,Dynamic done);

		virtual ::kha::Font loadFont( ::String name,::kha::FontStyle style,Float size);

		virtual Void loadVideo( Dynamic desc,Dynamic _tmp_done);

		virtual Void showKeyboard( );

		virtual Void hideKeyboard( );

		virtual Void loadURL( ::String url);

};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Loader */ 
