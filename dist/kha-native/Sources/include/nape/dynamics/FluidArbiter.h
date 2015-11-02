#ifndef INCLUDED_nape_dynamics_FluidArbiter
#define INCLUDED_nape_dynamics_FluidArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,FluidArbiter)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  FluidArbiter_obj : public ::nape::dynamics::Arbiter_obj{
	public:
		typedef ::nape::dynamics::Arbiter_obj super;
		typedef FluidArbiter_obj OBJ_;
		FluidArbiter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.FluidArbiter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FluidArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FluidArbiter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FluidArbiter","\x1f","\x8f","\x95","\xed"); }

		virtual ::nape::geom::Vec2 get_position( );
		Dynamic get_position_dyn();

		virtual ::nape::geom::Vec2 set_position( ::nape::geom::Vec2 position);
		Dynamic set_position_dyn();

		virtual Float get_overlap( );
		Dynamic get_overlap_dyn();

		virtual Float set_overlap( Float overlap);
		Dynamic set_overlap_dyn();

		virtual ::nape::geom::Vec3 buoyancyImpulse( ::nape::phys::Body body);
		Dynamic buoyancyImpulse_dyn();

		virtual ::nape::geom::Vec3 dragImpulse( ::nape::phys::Body body);
		Dynamic dragImpulse_dyn();

		virtual ::nape::geom::Vec3 totalImpulse( ::nape::phys::Body body,hx::Null< bool >  freshOnly);

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_FluidArbiter */ 
