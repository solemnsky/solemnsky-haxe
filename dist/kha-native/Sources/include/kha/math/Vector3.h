#ifndef INCLUDED_kha_math_Vector3
#define INCLUDED_kha_math_Vector3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Vector3)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vector3_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector3_obj OBJ_;
		Vector3_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.math.Vector3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector3_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector3_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector3","\xf0","\x21","\xee","\xa7"); }

		Float x;
		Float y;
		Float z;
		virtual Float get_length( );
		Dynamic get_length_dyn();

		virtual Float set_length( Float length);
		Dynamic set_length_dyn();

};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_Vector3 */ 
