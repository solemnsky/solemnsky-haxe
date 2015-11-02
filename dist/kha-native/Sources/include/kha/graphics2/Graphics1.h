#ifndef INCLUDED_kha_graphics2_Graphics1
#define INCLUDED_kha_graphics2_Graphics1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics1)
namespace kha{
namespace graphics2{


class HXCPP_CLASS_ATTRIBUTES  Graphics1_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphics1_obj OBJ_;
		Graphics1_obj();
		Void __construct(::kha::Canvas canvas);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.Graphics1")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Graphics1_obj > __new(::kha::Canvas canvas);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics1_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::graphics1::Graphics_obj *();
		::String __ToString() const { return HX_HCSTRING("Graphics1","\xe6","\x98","\x64","\xaa"); }

		::kha::Canvas canvas;
		::kha::Image texture;
		::haxe::io::Bytes pixels;
		virtual Void begin( );
		Dynamic begin_dyn();

		virtual Void end( );
		Dynamic end_dyn();

		virtual Void setPixel( int x,int y,int color);
		Dynamic setPixel_dyn();

};

} // end namespace kha
} // end namespace graphics2

#endif /* INCLUDED_kha_graphics2_Graphics1 */ 
