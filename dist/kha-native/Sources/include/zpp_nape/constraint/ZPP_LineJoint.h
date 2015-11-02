#ifndef INCLUDED_zpp_nape_constraint_ZPP_LineJoint
#define INCLUDED_zpp_nape_constraint_ZPP_LineJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,LineJoint)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_LineJoint)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ZPP_LineJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_LineJoint_obj OBJ_;
		ZPP_LineJoint_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.constraint.ZPP_LineJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_LineJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_LineJoint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_LineJoint","\xb1","\x7d","\x98","\xed"); }

		::nape::constraint::LineJoint outer_zn;
		Float scale;
		Float jointMin;
		Float jointMax;
		bool equal;
		Float dot1;
		Float dot2;
		Float cx1;
		Float cx2;
		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		virtual Void activeBodies( );

		virtual Void inactiveBodies( );

		::zpp_nape::phys::ZPP_Body b1;
		Float a1localx;
		Float a1localy;
		Float a1relx;
		Float a1rely;
		virtual Void validate_a1( );
		Dynamic validate_a1_dyn();

		virtual Void invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a1_dyn();

		virtual Void setup_a1( );
		Dynamic setup_a1_dyn();

		::nape::geom::Vec2 wrap_a1;
		::zpp_nape::phys::ZPP_Body b2;
		Float a2localx;
		Float a2localy;
		Float a2relx;
		Float a2rely;
		virtual Void validate_a2( );
		Dynamic validate_a2_dyn();

		virtual Void invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a2_dyn();

		virtual Void setup_a2( );
		Dynamic setup_a2_dyn();

		::nape::geom::Vec2 wrap_a2;
		bool zip_n;
		Float nlocalx;
		Float nlocaly;
		Float nrelx;
		Float nrely;
		virtual Void validate_n( );
		Dynamic validate_n_dyn();

		virtual Void invalidate_n( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_n_dyn();

		virtual Void setup_n( );
		Dynamic setup_n_dyn();

		::nape::geom::Vec2 wrap_n;
		virtual Void validate_norm( );
		Dynamic validate_norm_dyn();

		Float kMassa;
		Float kMassb;
		Float kMassc;
		Float jAccx;
		Float jAccy;
		Float jMax;
		Float gamma;
		Float biasx;
		Float biasy;
		bool stepped;
		virtual ::nape::constraint::Constraint copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo);

		virtual Void validate( );

		virtual Void wake_connected( );

		virtual Void forest( );

		virtual bool pair_exists( int id,int di);

		virtual Void clearcache( );

		virtual bool preStep( Float dt);

		virtual Void warmStart( );

		virtual bool applyImpulseVel( );

		virtual bool applyImpulsePos( );

		virtual Void draw( ::nape::util::Debug g);

};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_LineJoint */ 
