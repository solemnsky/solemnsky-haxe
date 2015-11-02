#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#define INCLUDED_zpp_nape_geom_ZPP_SimpleVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_SimpleVert)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_SimpleVert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_SimpleVert_obj OBJ_;
		ZPP_SimpleVert_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_SimpleVert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_SimpleVert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_SimpleVert_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_SimpleVert","\xa8","\x00","\xa3","\x93"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_SimpleVert zpp_pool;
		static bool less_xy( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q);
		static Dynamic less_xy_dyn();

		static Void swap_nodes( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q);
		static Dynamic swap_nodes_dyn();

		static ::zpp_nape::geom::ZPP_SimpleVert get( Float x,Float y);
		static Dynamic get_dyn();

		bool forced;
		Float x;
		Float y;
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert links;
		int id;
		::zpp_nape::geom::ZPP_SimpleVert next;
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_SimpleVert */ 
