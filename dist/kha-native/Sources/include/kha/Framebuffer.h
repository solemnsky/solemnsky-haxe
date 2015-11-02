#ifndef INCLUDED_kha_Framebuffer
#define INCLUDED_kha_Framebuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Framebuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Framebuffer_obj OBJ_;
		Framebuffer_obj();
		Void __construct(::kha::graphics1::Graphics g1,::kha::graphics2::Graphics g2,::kha::graphics4::Graphics g4);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Framebuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Framebuffer_obj > __new(::kha::graphics1::Graphics g1,::kha::graphics2::Graphics g2,::kha::graphics4::Graphics g4);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Framebuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::Canvas_obj *();
		::String __ToString() const { return HX_HCSTRING("Framebuffer","\xcd","\xac","\x7a","\x5e"); }

		::kha::graphics1::Graphics graphics1;
		::kha::graphics2::Graphics graphics2;
		::kha::graphics4::Graphics graphics4;
		virtual Void init( ::kha::graphics1::Graphics g1,::kha::graphics2::Graphics g2,::kha::graphics4::Graphics g4);
		Dynamic init_dyn();

		::kha::graphics1::Graphics g1;
		virtual ::kha::graphics1::Graphics get_g1( );
		Dynamic get_g1_dyn();

		::kha::graphics2::Graphics g2;
		virtual ::kha::graphics2::Graphics get_g2( );
		Dynamic get_g2_dyn();

		::kha::graphics4::Graphics g4;
		virtual ::kha::graphics4::Graphics get_g4( );
		Dynamic get_g4_dyn();

		int width;
		virtual int get_width( );
		Dynamic get_width_dyn();

		int height;
		virtual int get_height( );
		Dynamic get_height_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Framebuffer */ 
