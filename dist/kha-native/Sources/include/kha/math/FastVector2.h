#ifndef INCLUDED_kha_math_FastVector2
#define INCLUDED_kha_math_FastVector2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,FastVector2)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FastVector2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FastVector2_obj OBJ_;
		FastVector2_obj();
		Void __construct(hx::Null< ::cpp::Float32 >  __o_x,hx::Null< ::cpp::Float32 >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.math.FastVector2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FastVector2_obj > __new(hx::Null< ::cpp::Float32 >  __o_x,hx::Null< ::cpp::Float32 >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FastVector2_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FastVector2","\xb3","\xc2","\x44","\x6e"); }

		::cpp::Float32 x;
		::cpp::Float32 y;
		virtual ::cpp::Float32 get_length( );
		Dynamic get_length_dyn();

		virtual ::cpp::Float32 set_length( ::cpp::Float32 length);
		Dynamic set_length_dyn();

};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_FastVector2 */ 
