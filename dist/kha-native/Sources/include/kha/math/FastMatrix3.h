#ifndef INCLUDED_kha_math_FastMatrix3
#define INCLUDED_kha_math_FastMatrix3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,FastMatrix3)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FastMatrix3_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FastMatrix3_obj OBJ_;
		FastMatrix3_obj();
		Void __construct(::cpp::Float32 _00,::cpp::Float32 _10,::cpp::Float32 _20,::cpp::Float32 _01,::cpp::Float32 _11,::cpp::Float32 _21,::cpp::Float32 _02,::cpp::Float32 _12,::cpp::Float32 _22);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.math.FastMatrix3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FastMatrix3_obj > __new(::cpp::Float32 _00,::cpp::Float32 _10,::cpp::Float32 _20,::cpp::Float32 _01,::cpp::Float32 _11,::cpp::Float32 _21,::cpp::Float32 _02,::cpp::Float32 _12,::cpp::Float32 _22);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FastMatrix3_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FastMatrix3","\x76","\x0b","\x0f","\x27"); }

		static void __boot();
		static int width;
		static int height;
		::cpp::Float32 _00;
		::cpp::Float32 _10;
		::cpp::Float32 _20;
		::cpp::Float32 _01;
		::cpp::Float32 _11;
		::cpp::Float32 _21;
		::cpp::Float32 _02;
		::cpp::Float32 _12;
		::cpp::Float32 _22;
};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_FastMatrix3 */ 
