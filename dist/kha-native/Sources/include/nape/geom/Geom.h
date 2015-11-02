#ifndef INCLUDED_nape_geom_Geom
#define INCLUDED_nape_geom_Geom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Geom)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Geom_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Geom_obj OBJ_;
		Geom_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nape.geom.Geom")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Geom_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Geom_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Geom","\xdc","\x2a","\x3b","\x2f"); }

		static Float distanceBody( ::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 out1,::nape::geom::Vec2 out2);
		static Dynamic distanceBody_dyn();

		static Float distance( ::nape::shape::Shape shape1,::nape::shape::Shape shape2,::nape::geom::Vec2 out1,::nape::geom::Vec2 out2);
		static Dynamic distance_dyn();

		static bool intersectsBody( ::nape::phys::Body body1,::nape::phys::Body body2);
		static Dynamic intersectsBody_dyn();

		static bool intersects( ::nape::shape::Shape shape1,::nape::shape::Shape shape2);
		static Dynamic intersects_dyn();

		static bool contains( ::nape::shape::Shape shape1,::nape::shape::Shape shape2);
		static Dynamic contains_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_Geom */ 
