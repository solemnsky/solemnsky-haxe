#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#define INCLUDED_zpp_nape_geom_ZPP_GeomVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_GeomVert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_GeomVert_obj OBJ_;
		ZPP_GeomVert_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_GeomVert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_GeomVert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_GeomVert_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_GeomVert","\xf2","\xa4","\x0e","\x64"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_GeomVert zpp_pool;
		static ::zpp_nape::geom::ZPP_GeomVert get( Float x,Float y);
		static Dynamic get_dyn();

		Float x;
		Float y;
		::zpp_nape::geom::ZPP_GeomVert prev;
		::zpp_nape::geom::ZPP_GeomVert next;
		::nape::geom::Vec2 wrap;
		bool forced;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual ::nape::geom::Vec2 wrapper( );
		Dynamic wrapper_dyn();

		virtual Void modwrap( ::zpp_nape::geom::ZPP_Vec2 n);
		Dynamic modwrap_dyn();

		virtual Void getwrap( );
		Dynamic getwrap_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_GeomVert */ 
