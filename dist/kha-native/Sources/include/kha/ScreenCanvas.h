#ifndef INCLUDED_kha_ScreenCanvas
#define INCLUDED_kha_ScreenCanvas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,ScreenCanvas)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  ScreenCanvas_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScreenCanvas_obj OBJ_;
		ScreenCanvas_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.ScreenCanvas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ScreenCanvas_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenCanvas_obj();

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
		operator ::kha::Canvas_obj *();
		::String __ToString() const { return HX_HCSTRING("ScreenCanvas","\x84","\xa9","\x72","\x5d"); }

		static void __boot();
		static ::kha::ScreenCanvas instance;
		static ::kha::ScreenCanvas the;
		static ::kha::ScreenCanvas get_the( );
		static Dynamic get_the_dyn();

		int width;
		virtual int get_width( );
		Dynamic get_width_dyn();

		int height;
		virtual int get_height( );
		Dynamic get_height_dyn();

		::kha::graphics1::Graphics g1;
		virtual ::kha::graphics1::Graphics get_g1( );
		Dynamic get_g1_dyn();

		::kha::graphics2::Graphics g2;
		virtual ::kha::graphics2::Graphics get_g2( );
		Dynamic get_g2_dyn();

		::kha::graphics4::Graphics g4;
		virtual ::kha::graphics4::Graphics get_g4( );
		Dynamic get_g4_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_ScreenCanvas */ 
