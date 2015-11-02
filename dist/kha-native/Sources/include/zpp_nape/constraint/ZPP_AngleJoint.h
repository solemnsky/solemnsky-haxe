#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleJoint
#define INCLUDED_zpp_nape_constraint_ZPP_AngleJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,AngleJoint)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_AngleJoint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ZPP_AngleJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_AngleJoint_obj OBJ_;
		ZPP_AngleJoint_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.constraint.ZPP_AngleJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_AngleJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_AngleJoint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_AngleJoint","\x1c","\x43","\xd1","\xe7"); }

		::nape::constraint::AngleJoint outer_zn;
		Float ratio;
		Float jointMin;
		Float jointMax;
		bool slack;
		bool equal;
		Float scale;
		virtual bool is_slack( );
		Dynamic is_slack_dyn();

		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		virtual Void activeBodies( );

		virtual Void inactiveBodies( );

		::zpp_nape::phys::ZPP_Body b1;
		::zpp_nape::phys::ZPP_Body b2;
		Float kMass;
		Float jAcc;
		Float jMax;
		Float gamma;
		Float bias;
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

#endif /* INCLUDED_zpp_nape_constraint_ZPP_AngleJoint */ 
