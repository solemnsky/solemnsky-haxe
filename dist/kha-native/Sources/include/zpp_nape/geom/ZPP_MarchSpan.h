#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#define INCLUDED_zpp_nape_geom_ZPP_MarchSpan

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_MarchSpan)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_MarchSpan_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_MarchSpan_obj OBJ_;
		ZPP_MarchSpan_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_MarchSpan")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_MarchSpan_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_MarchSpan_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_MarchSpan","\x28","\x2a","\x1e","\x04"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_MarchSpan zpp_pool;
		::zpp_nape::geom::ZPP_MarchSpan parent;
		int rank;
		bool out;
		::zpp_nape::geom::ZPP_MarchSpan next;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_MarchSpan */ 
