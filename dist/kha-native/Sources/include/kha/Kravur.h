#ifndef INCLUDED_kha_Kravur
#define INCLUDED_kha_Kravur

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(kha,AlignedQuad)
HX_DECLARE_CLASS1(kha,BakedChar)
HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,FontStyle)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,Resource)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Kravur_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Kravur_obj OBJ_;
		Kravur_obj();
		Void __construct(::kha::Blob blob);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Kravur")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Kravur_obj > __new(::kha::Blob blob);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Kravur_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::Font_obj *();
		::String __ToString() const { return HX_HCSTRING("Kravur","\xd9","\xd3","\xe9","\xe0"); }

		static void __boot();
		static ::haxe::ds::StringMap fontCache;
		static ::kha::Kravur get( ::String name,::kha::FontStyle style,Float size);
		static Dynamic get_dyn();

		::String myName;
		::kha::FontStyle myStyle;
		Float mySize;
		Array< ::Dynamic > chars;
		::kha::Image texture;
		int width;
		int height;
		Float baseline;
		virtual ::kha::Image getTexture( );
		Dynamic getTexture_dyn();

		virtual ::kha::AlignedQuad getBakedQuad( int char_index,Float xpos,Float ypos);
		Dynamic getBakedQuad_dyn();

		virtual Float getCharWidth( int charIndex);
		Dynamic getCharWidth_dyn();

		::String name;
		::kha::FontStyle style;
		Float size;
		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::kha::FontStyle get_style( );
		Dynamic get_style_dyn();

		virtual Float get_size( );
		Dynamic get_size_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Float charWidth( ::String ch);
		Dynamic charWidth_dyn();

		virtual Float charsWidth( ::String ch,int offset,int length);
		Dynamic charsWidth_dyn();

		virtual Float stringWidth( ::String string);
		Dynamic stringWidth_dyn();

		virtual Float getBaselinePosition( );
		Dynamic getBaselinePosition_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Kravur */ 
