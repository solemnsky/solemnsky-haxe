#ifndef INCLUDED_nape_shape_Circle
#define INCLUDED_nape_shape_Circle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
HX_DECLARE_CLASS2(nape,dynamics,InteractionFilter)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
HX_DECLARE_CLASS2(nape,shape,Circle)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Circle)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace nape{
namespace shape{


class HXCPP_CLASS_ATTRIBUTES  Circle_obj : public ::nape::shape::Shape_obj{
	public:
		typedef ::nape::shape::Shape_obj super;
		typedef Circle_obj OBJ_;
		Circle_obj();
		Void __construct(Float radius,::nape::geom::Vec2 localCOM,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.shape.Circle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Circle_obj > __new(Float radius,::nape::geom::Vec2 localCOM,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Circle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a"); }

		::zpp_nape::shape::ZPP_Circle zpp_inner_zn;
		virtual Float get_radius( );
		Dynamic get_radius_dyn();

		virtual Float set_radius( Float radius);
		Dynamic set_radius_dyn();

};

} // end namespace nape
} // end namespace shape

#endif /* INCLUDED_nape_shape_Circle */ 
