#ifndef INCLUDED_nape_constraint_DistanceJoint
#define INCLUDED_nape_constraint_DistanceJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,DistanceJoint)
HX_DECLARE_CLASS2(nape,geom,MatMN)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_DistanceJoint)
namespace nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  DistanceJoint_obj : public ::nape::constraint::Constraint_obj{
	public:
		typedef ::nape::constraint::Constraint_obj super;
		typedef DistanceJoint_obj OBJ_;
		DistanceJoint_obj();
		Void __construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,Float jointMin,Float jointMax);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.constraint.DistanceJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DistanceJoint_obj > __new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,Float jointMin,Float jointMax);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DistanceJoint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DistanceJoint","\xb5","\xa5","\xa1","\x61"); }

		::zpp_nape::constraint::ZPP_DistanceJoint zpp_inner_zn;
		virtual ::nape::phys::Body get_body1( );
		Dynamic get_body1_dyn();

		virtual ::nape::phys::Body set_body1( ::nape::phys::Body body1);
		Dynamic set_body1_dyn();

		virtual ::nape::phys::Body get_body2( );
		Dynamic get_body2_dyn();

		virtual ::nape::phys::Body set_body2( ::nape::phys::Body body2);
		Dynamic set_body2_dyn();

		virtual ::nape::geom::Vec2 get_anchor1( );
		Dynamic get_anchor1_dyn();

		virtual ::nape::geom::Vec2 set_anchor1( ::nape::geom::Vec2 anchor1);
		Dynamic set_anchor1_dyn();

		virtual ::nape::geom::Vec2 get_anchor2( );
		Dynamic get_anchor2_dyn();

		virtual ::nape::geom::Vec2 set_anchor2( ::nape::geom::Vec2 anchor2);
		Dynamic set_anchor2_dyn();

		virtual Float get_jointMin( );
		Dynamic get_jointMin_dyn();

		virtual Float set_jointMin( Float jointMin);
		Dynamic set_jointMin_dyn();

		virtual Float get_jointMax( );
		Dynamic get_jointMax_dyn();

		virtual Float set_jointMax( Float jointMax);
		Dynamic set_jointMax_dyn();

		virtual bool isSlack( );
		Dynamic isSlack_dyn();

		virtual ::nape::geom::MatMN impulse( );

		virtual ::nape::geom::Vec3 bodyImpulse( ::nape::phys::Body body);

		virtual Void visitBodies( Dynamic lambda);

};

} // end namespace nape
} // end namespace constraint

#endif /* INCLUDED_nape_constraint_DistanceJoint */ 
