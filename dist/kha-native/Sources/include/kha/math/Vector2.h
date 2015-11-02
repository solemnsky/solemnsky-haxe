#ifndef INCLUDED_kha_math_Vector2
#define INCLUDED_kha_math_Vector2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Vector2)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vector2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector2_obj OBJ_;
		Vector2_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.math.Vector2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector2_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector2_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector2","\xef","\x21","\xee","\xa7"); }

		Float x;
		Float y;
		virtual Float get_length( );
		Dynamic get_length_dyn();

		virtual Float set_length( Float length);
		Dynamic set_length_dyn();

};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_Vector2 */ 
