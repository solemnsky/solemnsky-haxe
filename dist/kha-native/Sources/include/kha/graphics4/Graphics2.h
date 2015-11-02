#ifndef INCLUDED_kha_graphics4_Graphics2
#define INCLUDED_kha_graphics4_Graphics2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
HX_DECLARE_CLASS2(kha,graphics4,ColoredShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics2)
HX_DECLARE_CLASS2(kha,graphics4,ImageShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,Program)
HX_DECLARE_CLASS2(kha,graphics4,TextShaderPainter)
HX_DECLARE_CLASS2(kha,math,Matrix4)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  Graphics2_obj : public ::kha::graphics2::Graphics_obj{
	public:
		typedef ::kha::graphics2::Graphics_obj super;
		typedef Graphics2_obj OBJ_;
		Graphics2_obj();
		Void __construct(::kha::Canvas canvas);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.Graphics2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Graphics2_obj > __new(::kha::Canvas canvas);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics2_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Graphics2","\xe7","\x98","\x64","\xaa"); }

		static int upperPowerOfTwo( int v);
		static Dynamic upperPowerOfTwo_dyn();

		int myColor;
		::kha::Font myFont;
		::kha::math::Matrix4 projectionMatrix;
		::kha::graphics4::ImageShaderPainter imagePainter;
		::kha::graphics4::ColoredShaderPainter coloredPainter;
		::kha::graphics4::TextShaderPainter textPainter;
		::kha::graphics4::Program videoProgram;
		::kha::Canvas canvas;
		::kha::graphics4::Graphics g;
		virtual Void setProjection( );
		Dynamic setProjection_dyn();

		virtual Void drawImage( ::kha::Image img,::cpp::Float32 x,::cpp::Float32 y);

		virtual Void drawScaledSubImage( ::kha::Image img,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh,::cpp::Float32 dx,::cpp::Float32 dy,::cpp::Float32 dw,::cpp::Float32 dh);

		virtual int get_color( );

		virtual int set_color( int color);

		virtual Void drawRect( Float x,Float y,Float width,Float height,hx::Null< Float >  strength);

		virtual Void fillRect( Float x,Float y,Float width,Float height);

		virtual Void drawString( ::String text,Float x,Float y);

		virtual ::kha::Font get_font( );

		virtual ::kha::Font set_font( ::kha::Font font);

		virtual Void drawLine( Float x1,Float y1,Float x2,Float y2,hx::Null< Float >  strength);

		virtual Void fillTriangle( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);

		virtual Void setBilinearFiltering( bool bilinear);
		Dynamic setBilinearFiltering_dyn();

		virtual Void setProgram( ::kha::graphics4::Program program);

		virtual Void setBlendingMode( ::kha::graphics4::BlendingOperation source,::kha::graphics4::BlendingOperation destination);

		virtual Void begin( hx::Null< bool >  clear,Dynamic clearColor);

		virtual Void clear( Dynamic color);

		virtual Void flush( );

		virtual Void end( );

		virtual Void drawVideoInternal( ::kha::Video video,Float x,Float y,Float width,Float height);
		Dynamic drawVideoInternal_dyn();

		virtual Void drawVideo( ::kha::Video video,Float x,Float y,Float width,Float height);

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_Graphics2 */ 
