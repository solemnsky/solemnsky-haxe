#ifndef INCLUDED_zpp_nape_geom_ZPP_Convex
#define INCLUDED_zpp_nape_geom_ZPP_Convex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Convex)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_PartitionVertex)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_PartitionedPoly)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Convex_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Convex_obj OBJ_;
		ZPP_Convex_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="zpp_nape.geom.ZPP_Convex")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_Convex_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Convex_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZPP_Convex","\x8c","\x9b","\x4c","\xd0"); }

		static bool isinner( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b,::zpp_nape::geom::ZPP_PartitionVertex c);
		static Dynamic isinner_dyn();

		static Void optimise( ::zpp_nape::geom::ZPP_PartitionedPoly P);
		static Dynamic optimise_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Convex */ 
