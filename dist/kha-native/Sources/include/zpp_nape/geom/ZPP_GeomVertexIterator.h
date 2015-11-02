#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#define INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,GeomVertexIterator)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVertexIterator)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_GeomVertexIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_GeomVertexIterator_obj OBJ_;
		ZPP_GeomVertexIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_GeomVertexIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_GeomVertexIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_GeomVertexIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_GeomVertexIterator","\xf3","\x90","\x5b","\xbc"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_GeomVertexIterator zpp_pool;
		static bool internal;
		static ::nape::geom::GeomVertexIterator get( ::zpp_nape::geom::ZPP_GeomVert poly,bool forward);
		static Dynamic get_dyn();

		::zpp_nape::geom::ZPP_GeomVert ptr;
		::zpp_nape::geom::ZPP_GeomVert start;
		bool first;
		bool forward;
		::nape::geom::GeomVertexIterator outer;
		::zpp_nape::geom::ZPP_GeomVertexIterator next;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator */ 
