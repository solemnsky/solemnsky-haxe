#ifndef INCLUDED_nape_geom_ConvexResult
#define INCLUDED_nape_geom_ConvexResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ConvexRayResult)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ConvexResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConvexResult_obj OBJ_;
		ConvexResult_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.geom.ConvexResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConvexResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConvexResult_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ConvexResult","\xc4","\xa7","\xdf","\x3c"); }

		::zpp_nape::geom::ZPP_ConvexRayResult zpp_inner;
		virtual ::nape::geom::Vec2 get_normal( );
		Dynamic get_normal_dyn();

		virtual ::nape::geom::Vec2 get_position( );
		Dynamic get_position_dyn();

		virtual Float get_toi( );
		Dynamic get_toi_dyn();

		virtual ::nape::shape::Shape get_shape( );
		Dynamic get_shape_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_ConvexResult */ 
