#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#define INCLUDED_zpp_nape_shape_ZPP_Edge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,shape,Edge)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Edge)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Polygon)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace zpp_nape{
namespace shape{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Edge_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Edge_obj OBJ_;
		ZPP_Edge_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.shape.ZPP_Edge")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_Edge_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Edge_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_Edge","\x22","\x29","\xf7","\xf7"); }

		static void __boot();
		static ::zpp_nape::shape::ZPP_Edge zpp_pool;
		static bool internal;
		::zpp_nape::shape::ZPP_Edge next;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::shape::ZPP_Polygon polygon;
		::nape::shape::Edge outer;
		virtual ::nape::shape::Edge wrapper( );
		Dynamic wrapper_dyn();

		Float lnormx;
		Float lnormy;
		::nape::geom::Vec2 wrap_lnorm;
		Float gnormx;
		Float gnormy;
		::nape::geom::Vec2 wrap_gnorm;
		Float length;
		Float lprojection;
		Float gprojection;
		::zpp_nape::geom::ZPP_Vec2 lp0;
		::zpp_nape::geom::ZPP_Vec2 gp0;
		::zpp_nape::geom::ZPP_Vec2 lp1;
		::zpp_nape::geom::ZPP_Vec2 gp1;
		Float tp0;
		Float tp1;
		virtual Void lnorm_validate( );
		Dynamic lnorm_validate_dyn();

		virtual Void gnorm_validate( );
		Dynamic gnorm_validate_dyn();

		virtual Void getlnorm( );
		Dynamic getlnorm_dyn();

		virtual Void getgnorm( );
		Dynamic getgnorm_dyn();

};

} // end namespace zpp_nape
} // end namespace shape

#endif /* INCLUDED_zpp_nape_shape_ZPP_Edge */ 
