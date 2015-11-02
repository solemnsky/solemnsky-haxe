#ifndef INCLUDED_nape_phys_GravMassMode
#define INCLUDED_nape_phys_GravMassMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,GravMassMode)
namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES  GravMassMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GravMassMode_obj OBJ_;
		GravMassMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nape.phys.GravMassMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GravMassMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GravMassMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GravMassMode","\x97","\x82","\xc8","\x11"); }

		static ::nape::phys::GravMassMode get_DEFAULT( );
		static Dynamic get_DEFAULT_dyn();

		static ::nape::phys::GravMassMode get_FIXED( );
		static Dynamic get_FIXED_dyn();

		static ::nape::phys::GravMassMode get_SCALED( );
		static Dynamic get_SCALED_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_GravMassMode */ 
