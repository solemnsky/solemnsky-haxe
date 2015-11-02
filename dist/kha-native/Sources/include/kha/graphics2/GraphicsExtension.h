#ifndef INCLUDED_kha_graphics2_GraphicsExtension
#define INCLUDED_kha_graphics2_GraphicsExtension

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,GraphicsExtension)
HX_DECLARE_CLASS2(kha,math,Vector2)
namespace kha{
namespace graphics2{


class HXCPP_CLASS_ATTRIBUTES  GraphicsExtension_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsExtension_obj OBJ_;
		GraphicsExtension_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.GraphicsExtension")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsExtension_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsExtension_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicsExtension","\x14","\x49","\x4f","\xb0"); }

		static Void drawCircle( ::kha::graphics2::Graphics g2,Float cx,Float cy,Float radius,hx::Null< Float >  strength,hx::Null< int >  segments);
		static Dynamic drawCircle_dyn();

		static Void fillCircle( ::kha::graphics2::Graphics g2,Float cx,Float cy,Float radius,hx::Null< int >  segments);
		static Dynamic fillCircle_dyn();

		static Void drawPolygon( ::kha::graphics2::Graphics g2,Float x,Float y,Array< ::Dynamic > vertices,hx::Null< Float >  strength);
		static Dynamic drawPolygon_dyn();

		static Void fillPolygon( ::kha::graphics2::Graphics g2,Float x,Float y,Array< ::Dynamic > vertices);
		static Dynamic fillPolygon_dyn();

};

} // end namespace kha
} // end namespace graphics2

#endif /* INCLUDED_kha_graphics2_GraphicsExtension */ 
