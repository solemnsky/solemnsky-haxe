#ifndef INCLUDED_zpp_nape_geom_ZPP_Simplify
#define INCLUDED_zpp_nape_geom_ZPP_Simplify

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Simplify)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimplifyV)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_SimplifyP)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Simplify_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Simplify_obj OBJ_;
		ZPP_Simplify_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="zpp_nape.geom.ZPP_Simplify")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_Simplify_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Simplify_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZPP_Simplify","\x6e","\x8e","\xcc","\xb4"); }

		static void __boot();
		static Float lessval( ::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b);
		static Dynamic lessval_dyn();

		static bool less( ::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b);
		static Dynamic less_dyn();

		static Float distance( ::zpp_nape::geom::ZPP_SimplifyV v,::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b);
		static Dynamic distance_dyn();

		static ::zpp_nape::util::ZNPList_ZPP_SimplifyP stack;
		static ::zpp_nape::geom::ZPP_GeomVert simplify( ::zpp_nape::geom::ZPP_GeomVert P,Float epsilon);
		static Dynamic simplify_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Simplify */ 
