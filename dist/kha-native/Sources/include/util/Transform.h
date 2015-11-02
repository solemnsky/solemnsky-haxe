#ifndef INCLUDED_util_Transform
#define INCLUDED_util_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(util,Transform)
HX_DECLARE_CLASS1(util,Vector)
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Transform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Transform_obj OBJ_;
		Transform_obj();
		Void __construct(Float _00,Float _10,Float _20,Float _01,Float _11,Float _21,Float _02,Float _12,Float _22);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="util.Transform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Transform_obj > __new(Float _00,Float _10,Float _20,Float _01,Float _11,Float _21,Float _02,Float _12,Float _22);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Transform","\x4c","\x0d","\x66","\xe7"); }

		static ::util::Transform translation( Float x,Float y);
		static Dynamic translation_dyn();

		static ::util::Transform empty( );
		static Dynamic empty_dyn();

		static ::util::Transform identity( );
		static Dynamic identity_dyn();

		static ::util::Transform scale( Float x,Float y);
		static Dynamic scale_dyn();

		static ::util::Transform rotation( Float alpha);
		static Dynamic rotation_dyn();

		Float _00;
		Float _10;
		Float _20;
		Float _01;
		Float _11;
		Float _21;
		Float _02;
		Float _12;
		Float _22;
		virtual ::util::Transform add( ::util::Transform m);
		Dynamic add_dyn();

		virtual ::util::Transform sub( ::util::Transform m);
		Dynamic sub_dyn();

		virtual ::util::Transform mult( Float value);
		Dynamic mult_dyn();

		virtual ::util::Transform transpose( );
		Dynamic transpose_dyn();

		virtual ::util::Transform multmat( ::util::Transform m);
		Dynamic multmat_dyn();

		virtual ::util::Vector multvec( ::util::Vector value);
		Dynamic multvec_dyn();

		virtual Float cofactor( Float m0,Float m1,Float m2,Float m3);
		Dynamic cofactor_dyn();

		virtual Float determinant( );
		Dynamic determinant_dyn();

		virtual ::util::Transform inverse( );
		Dynamic inverse_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_Transform */ 
