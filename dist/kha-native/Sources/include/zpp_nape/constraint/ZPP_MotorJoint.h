#ifndef INCLUDED_zpp_nape_constraint_ZPP_MotorJoint
#define INCLUDED_zpp_nape_constraint_ZPP_MotorJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,MotorJoint)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_MotorJoint)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ZPP_MotorJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_MotorJoint_obj OBJ_;
		ZPP_MotorJoint_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.constraint.ZPP_MotorJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_MotorJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_MotorJoint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_MotorJoint","\x3a","\x2b","\x34","\x55"); }

		::nape::constraint::MotorJoint outer_zn;
		Float ratio;
		Float rate;
		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		virtual Void activeBodies( );

		virtual Void inactiveBodies( );

		::zpp_nape::phys::ZPP_Body b1;
		::zpp_nape::phys::ZPP_Body b2;
		Float kMass;
		Float jAcc;
		Float jMax;
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

};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_MotorJoint */ 
