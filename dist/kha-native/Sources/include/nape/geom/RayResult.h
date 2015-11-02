#ifndef INCLUDED_nape_geom_RayResult
#define INCLUDED_nape_geom_RayResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ConvexRayResult)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  RayResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RayResult_obj OBJ_;
		RayResult_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.geom.RayResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RayResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayResult_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RayResult","\x47","\xde","\x2e","\x22"); }

		::zpp_nape::geom::ZPP_ConvexRayResult zpp_inner;
		virtual ::nape::geom::Vec2 get_normal( );
		Dynamic get_normal_dyn();

		virtual Float get_distance( );
		Dynamic get_distance_dyn();

		virtual bool get_inner( );
		Dynamic get_inner_dyn();

		virtual ::nape::shape::Shape get_shape( );
		Dynamic get_shape_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_RayResult */ 
