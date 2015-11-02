#ifndef INCLUDED_zpp_nape_geom_ZPP_Simple
#define INCLUDED_zpp_nape_geom_ZPP_Simple

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Simple)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleSweep)
HX_DECLARE_CLASS2(zpp_nape,util,FastHash2_Hashable2_Boolfalse)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_SimpleEvent)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_SimpleEvent)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_SimpleVert)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Simple_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Simple_obj OBJ_;
		ZPP_Simple_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="zpp_nape.geom.ZPP_Simple")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_Simple_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Simple_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZPP_Simple","\x57","\x28","\xed","\xc0"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_SimpleSweep sweep;
		static ::zpp_nape::util::FastHash2_Hashable2_Boolfalse inthash;
		static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert vertices;
		static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent queue;
		static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ints;
		static ::zpp_nape::util::ZNPList_ZPP_GeomVert decompose( ::zpp_nape::geom::ZPP_GeomVert poly,::zpp_nape::util::ZNPList_ZPP_GeomVert rets);
		static Dynamic decompose_dyn();

		static Void clip_polygon( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert vertices,::zpp_nape::util::ZNPList_ZPP_GeomVert rets);
		static Dynamic clip_polygon_dyn();

		static ::zpp_nape::util::ZNPList_ZPP_SimpleVert list_vertices;
		static ::zpp_nape::util::ZNPList_ZPP_SimpleEvent list_queue;
		static bool isSimple( ::zpp_nape::geom::ZPP_GeomVert poly);
		static Dynamic isSimple_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Simple */ 
