#ifndef INCLUDED_util_Vector
#define INCLUDED_util_Vector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(util,Vector)
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Vector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_obj OBJ_;
		Vector_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="util.Vector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector","\xe3","\x24","\xf2","\xcb"); }

		static void __boot();
		static ::util::Vector fromAngle( Float angle);
		static Dynamic fromAngle_dyn();

		static ::util::Vector zero;
		Float x;
		Float y;
		virtual ::util::Vector clone( );
		Dynamic clone_dyn();

		virtual Void set( Float x,Float y);
		Dynamic set_dyn();

		virtual Float dot( ::util::Vector v);
		Dynamic dot_dyn();

		virtual Float cross( ::util::Vector v);
		Dynamic cross_dyn();

		virtual ::util::Vector add( ::util::Vector v);
		Dynamic add_dyn();

		virtual ::util::Vector sub( ::util::Vector v);
		Dynamic sub_dyn();

		virtual ::util::Vector mult( Float s);
		Dynamic mult_dyn();

		virtual Float angle( );
		Dynamic angle_dyn();

		virtual Float length( );
		Dynamic length_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_Vector */ 
