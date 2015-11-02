#ifndef INCLUDED_kha__Color_Color_Impl_
#define INCLUDED_kha__Color_Color_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,_Color,Color_Impl_)
namespace kha{
namespace _Color{


class HXCPP_CLASS_ATTRIBUTES  Color_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Color_Impl__obj OBJ_;
		Color_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha._Color.Color_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Color_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Color_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Color_Impl_","\x23","\xf2","\x4f","\xb6"); }

		static void __boot();
		static int Black;
		static int White;
		static int Red;
		static int Blue;
		static int Green;
		static int Magenta;
		static int Yellow;
		static int Cyan;
		static int Purple;
		static int Pink;
		static int Orange;
		static ::cpp::Float32 invMaxChannelValue;
		static int fromValue( int value);
		static Dynamic fromValue_dyn();

		static int fromBytes( int r,int g,int b,hx::Null< int >  a);
		static Dynamic fromBytes_dyn();

		static int fromFloats( ::cpp::Float32 r,::cpp::Float32 g,::cpp::Float32 b,hx::Null< ::cpp::Float32 >  a);
		static Dynamic fromFloats_dyn();

		static int fromString( ::String value);
		static Dynamic fromString_dyn();

		static int _new( int value);
		static Dynamic _new_dyn();

		static int get_value( int this1);
		static Dynamic get_value_dyn();

		static int set_value( int this1,int value);
		static Dynamic set_value_dyn();

		static int get_Rb( int this1);
		static Dynamic get_Rb_dyn();

		static int get_Gb( int this1);
		static Dynamic get_Gb_dyn();

		static int get_Bb( int this1);
		static Dynamic get_Bb_dyn();

		static int get_Ab( int this1);
		static Dynamic get_Ab_dyn();

		static int set_Rb( int this1,int i);
		static Dynamic set_Rb_dyn();

		static int set_Gb( int this1,int i);
		static Dynamic set_Gb_dyn();

		static int set_Bb( int this1,int i);
		static Dynamic set_Bb_dyn();

		static int set_Ab( int this1,int i);
		static Dynamic set_Ab_dyn();

		static ::cpp::Float32 get_R( int this1);
		static Dynamic get_R_dyn();

		static ::cpp::Float32 get_G( int this1);
		static Dynamic get_G_dyn();

		static ::cpp::Float32 get_B( int this1);
		static Dynamic get_B_dyn();

		static ::cpp::Float32 get_A( int this1);
		static Dynamic get_A_dyn();

		static ::cpp::Float32 set_R( int this1,::cpp::Float32 f);
		static Dynamic set_R_dyn();

		static ::cpp::Float32 set_G( int this1,::cpp::Float32 f);
		static Dynamic set_G_dyn();

		static ::cpp::Float32 set_B( int this1,::cpp::Float32 f);
		static Dynamic set_B_dyn();

		static ::cpp::Float32 set_A( int this1,::cpp::Float32 f);
		static Dynamic set_A_dyn();

};

} // end namespace kha
} // end namespace _Color

#endif /* INCLUDED_kha__Color_Color_Impl_ */ 
