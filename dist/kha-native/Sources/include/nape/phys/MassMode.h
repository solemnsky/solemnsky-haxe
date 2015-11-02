#ifndef INCLUDED_nape_phys_MassMode
#define INCLUDED_nape_phys_MassMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,MassMode)
namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES  MassMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MassMode_obj OBJ_;
		MassMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nape.phys.MassMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MassMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MassMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MassMode","\x97","\x86","\x27","\x5b"); }

		static ::nape::phys::MassMode get_DEFAULT( );
		static Dynamic get_DEFAULT_dyn();

		static ::nape::phys::MassMode get_FIXED( );
		static Dynamic get_FIXED_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_MassMode */ 
