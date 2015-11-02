#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#define INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ConvexRayResult)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_ConvexRayResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_ConvexRayResult_obj OBJ_;
		ZPP_ConvexRayResult_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_ConvexRayResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_ConvexRayResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_ConvexRayResult_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_ConvexRayResult","\x3b","\x71","\xb0","\x27"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_ConvexRayResult convexPool;
		static ::zpp_nape::geom::ZPP_ConvexRayResult rayPool;
		static bool internal;
		static ::nape::geom::RayResult getRay( ::nape::geom::Vec2 normal,Float time,bool inner,::nape::shape::Shape shape);
		static Dynamic getRay_dyn();

		static ::nape::geom::ConvexResult getConvex( ::nape::geom::Vec2 normal,::nape::geom::Vec2 position,Float toiDistance,::nape::shape::Shape shape);
		static Dynamic getConvex_dyn();

		::nape::geom::Vec2 normal;
		::nape::shape::Shape shape;
		::nape::geom::ConvexResult convex;
		::nape::geom::Vec2 position;
		::nape::geom::RayResult ray;
		bool inner;
		::zpp_nape::geom::ZPP_ConvexRayResult next;
		Float toiDistance;
		virtual Void disposed( );
		Dynamic disposed_dyn();

		virtual Void free( );
		Dynamic free_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult */ 
