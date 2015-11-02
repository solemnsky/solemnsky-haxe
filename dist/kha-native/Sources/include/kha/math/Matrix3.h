#ifndef INCLUDED_kha_math_Matrix3
#define INCLUDED_kha_math_Matrix3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Matrix3)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Matrix3_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix3_obj OBJ_;
		Matrix3_obj();
		Void __construct(Float _00,Float _10,Float _20,Float _01,Float _11,Float _21,Float _02,Float _12,Float _22);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.math.Matrix3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Matrix3_obj > __new(Float _00,Float _10,Float _20,Float _01,Float _11,Float _21,Float _02,Float _12,Float _22);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix3_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Matrix3","\xb2","\x6a","\xb8","\x60"); }

		static void __boot();
		static int width;
		static int height;
		Float _00;
		Float _10;
		Float _20;
		Float _01;
		Float _11;
		Float _21;
		Float _02;
		Float _12;
		Float _22;
};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_Matrix3 */ 
