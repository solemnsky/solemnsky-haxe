#ifndef INCLUDED_kha_math_Quaternion
#define INCLUDED_kha_math_Quaternion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Matrix4)
HX_DECLARE_CLASS2(kha,math,Quaternion)
HX_DECLARE_CLASS2(kha,math,Vector3)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Quaternion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Quaternion_obj OBJ_;
		Quaternion_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.math.Quaternion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Quaternion_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Quaternion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Quaternion","\x3e","\x11","\x7b","\x12"); }

		static void __boot();
		static ::kha::math::Quaternion fromAxisAngle( ::kha::math::Vector3 axis,Float radians);
		static Dynamic fromAxisAngle_dyn();

		static int AXIS_X;
		static int AXIS_Y;
		static int AXIS_Z;
		Array< Float > values;
		virtual ::kha::math::Quaternion slerp( Float t,::kha::math::Quaternion q);
		Dynamic slerp_dyn();

		virtual ::kha::math::Quaternion rotated( ::kha::math::Quaternion b);
		Dynamic rotated_dyn();

		virtual ::kha::math::Quaternion scaled( Float scale);
		Dynamic scaled_dyn();

		virtual Void scale( Float scale);
		Dynamic scale_dyn();

		virtual ::kha::math::Matrix4 matrix( );
		Dynamic matrix_dyn();

		virtual Float get( int index);
		Dynamic get_dyn();

		virtual Void set( int index,Float value);
		Dynamic set_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		virtual Float get_z( );
		Dynamic get_z_dyn();

		virtual Float set_z( Float value);
		Dynamic set_z_dyn();

		virtual Float get_w( );
		Dynamic get_w_dyn();

		virtual Float set_w( Float value);
		Dynamic set_w_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

		virtual Float set_length( Float length);
		Dynamic set_length_dyn();

		virtual ::kha::math::Quaternion addVector( ::kha::math::Vector3 vec);
		Dynamic addVector_dyn();

		virtual ::kha::math::Quaternion add( ::kha::math::Quaternion q);
		Dynamic add_dyn();

		virtual ::kha::math::Quaternion sub( ::kha::math::Quaternion q);
		Dynamic sub_dyn();

		virtual ::kha::math::Quaternion mult( ::kha::math::Quaternion r);
		Dynamic mult_dyn();

		virtual Void normalize( );
		Dynamic normalize_dyn();

		virtual Float dot( ::kha::math::Quaternion q);
		Dynamic dot_dyn();

		virtual ::kha::math::Vector3 getEulerAngles( int A1,int A2,int A3,hx::Null< int >  S,hx::Null< int >  D);
		Dynamic getEulerAngles_dyn();

};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_Quaternion */ 
