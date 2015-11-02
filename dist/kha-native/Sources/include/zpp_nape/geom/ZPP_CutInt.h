#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#define INCLUDED_zpp_nape_geom_ZPP_CutInt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_CutInt)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_CutVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_CutInt_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_CutInt_obj OBJ_;
		ZPP_CutInt_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_CutInt")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_CutInt_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_CutInt_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_CutInt","\xb2","\x40","\x89","\x48"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_CutInt zpp_pool;
		static ::zpp_nape::geom::ZPP_CutInt get( Float time,::zpp_nape::geom::ZPP_GeomVert end,::zpp_nape::geom::ZPP_GeomVert start,::zpp_nape::geom::ZPP_CutVert path0,::zpp_nape::geom::ZPP_CutVert path1,hx::Null< bool >  virtualint,hx::Null< bool >  vertex);
		static Dynamic get_dyn();

		::zpp_nape::geom::ZPP_CutInt next;
		Float time;
		bool virtualint;
		bool vertex;
		::zpp_nape::geom::ZPP_CutVert path0;
		::zpp_nape::geom::ZPP_GeomVert end;
		::zpp_nape::geom::ZPP_GeomVert start;
		::zpp_nape::geom::ZPP_CutVert path1;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_CutInt */ 
