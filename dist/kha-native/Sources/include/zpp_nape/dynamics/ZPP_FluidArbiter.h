#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#define INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,FluidArbiter)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_FluidArbiter)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
namespace zpp_nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  ZPP_FluidArbiter_obj : public ::zpp_nape::dynamics::ZPP_Arbiter_obj{
	public:
		typedef ::zpp_nape::dynamics::ZPP_Arbiter_obj super;
		typedef ZPP_FluidArbiter_obj OBJ_;
		ZPP_FluidArbiter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.dynamics.ZPP_FluidArbiter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_FluidArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_FluidArbiter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_FluidArbiter","\xe4","\x90","\xbe","\x3b"); }

		static void __boot();
		static ::zpp_nape::dynamics::ZPP_FluidArbiter zpp_pool;
		::nape::dynamics::FluidArbiter outer_zn;
		::zpp_nape::dynamics::ZPP_FluidArbiter next;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		Float centroidx;
		Float centroidy;
		Float overlap;
		Float r1x;
		Float r1y;
		Float r2x;
		Float r2y;
		bool nodrag;
		Float wMass;
		Float adamp;
		Float agamma;
		Float vMassa;
		Float vMassb;
		Float vMassc;
		Float dampx;
		Float dampy;
		Float lgamma;
		Float nx;
		Float ny;
		Float buoyx;
		Float buoyy;
		virtual Void position_validate( );
		Dynamic position_validate_dyn();

		virtual Void position_invalidate( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic position_invalidate_dyn();

		::nape::geom::Vec2 wrap_position;
		virtual Void getposition( );
		Dynamic getposition_dyn();

		virtual Void assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di);
		Dynamic assign_dyn();

		virtual Void retire( );
		Dynamic retire_dyn();

		bool _mutable;
		virtual Void makemutable( );
		Dynamic makemutable_dyn();

		virtual Void makeimmutable( );
		Dynamic makeimmutable_dyn();

		virtual Void inject( Float area,Float cx,Float cy);
		Dynamic inject_dyn();

		Float pre_dt;
		virtual Void preStep( ::zpp_nape::space::ZPP_Space s,Float dt);
		Dynamic preStep_dyn();

		virtual Void warmStart( );
		Dynamic warmStart_dyn();

		virtual Void applyImpulseVel( );
		Dynamic applyImpulseVel_dyn();

};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter */ 
