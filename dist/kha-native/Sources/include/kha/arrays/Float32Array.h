#ifndef INCLUDED_kha_arrays_Float32Array
#define INCLUDED_kha_arrays_Float32Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <float32array.h>
HX_DECLARE_CLASS2(kha,arrays,Float32Array)
namespace kha{
namespace arrays{


class HXCPP_CLASS_ATTRIBUTES  Float32Array_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Float32Array_obj OBJ_;
		Float32Array_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.arrays.Float32Array")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Float32Array_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Float32Array_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Float32Array","\x7e","\x42","\x27","\x90"); }

		float32array data;
		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual ::cpp::Float32 set( int index,::cpp::Float32 value);
		Dynamic set_dyn();

		virtual ::cpp::Float32 get( int index);
		Dynamic get_dyn();

};

} // end namespace kha
} // end namespace arrays

#endif /* INCLUDED_kha_arrays_Float32Array */ 
