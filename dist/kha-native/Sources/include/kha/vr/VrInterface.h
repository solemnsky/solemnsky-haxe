#ifndef INCLUDED_kha_vr_VrInterface
#define INCLUDED_kha_vr_VrInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,vr,SensorState)
HX_DECLARE_CLASS2(kha,vr,TimeWarpParms)
HX_DECLARE_CLASS2(kha,vr,VrInterface)
namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES  VrInterface_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VrInterface_obj OBJ_;
		VrInterface_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.vr.VrInterface")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VrInterface_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VrInterface_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VrInterface","\xbd","\x7a","\x8e","\xc7"); }

		static ::kha::vr::VrInterface instance;
		virtual ::kha::vr::SensorState GetSensorState( );
		Dynamic GetSensorState_dyn();

		virtual ::kha::vr::SensorState GetPredictedSensorState( Float time);
		Dynamic GetPredictedSensorState_dyn();

		virtual Void WarpSwapBlack( );
		Dynamic WarpSwapBlack_dyn();

		virtual Void WarpSwapLoadingIcon( );
		Dynamic WarpSwapLoadingIcon_dyn();

		virtual Void WarpSwap( ::kha::vr::TimeWarpParms parms);
		Dynamic WarpSwap_dyn();

		virtual Float GetTimeInSeconds( );
		Dynamic GetTimeInSeconds_dyn();

};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_VrInterface */ 
