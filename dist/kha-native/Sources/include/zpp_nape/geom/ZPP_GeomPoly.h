#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#define INCLUDED_zpp_nape_geom_ZPP_GeomPoly

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,GeomPoly)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomPoly)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_GeomPoly_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_GeomPoly_obj OBJ_;
		ZPP_GeomPoly_obj();
		Void __construct(::nape::geom::GeomPoly outer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_GeomPoly")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_GeomPoly_obj > __new(::nape::geom::GeomPoly outer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_GeomPoly_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_GeomPoly","\x8d","\xee","\x1e","\x60"); }

		::nape::geom::GeomPoly outer;
		::zpp_nape::geom::ZPP_GeomVert vertices;
};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_GeomPoly */ 
