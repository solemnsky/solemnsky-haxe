#ifndef INCLUDED_nape_Config
#define INCLUDED_nape_Config

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nape,Config)
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  Config_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Config_obj OBJ_;
		Config_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nape.Config")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Config_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Config_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Config","\xe2","\xca","\x66","\xfc"); }

		static void __boot();
		static Float epsilon;
		static Float fluidAngularDragFriction;
		static Float fluidAngularDrag;
		static Float fluidVacuumDrag;
		static Float fluidLinearDrag;
		static Float collisionSlop;
		static Float collisionSlopCCD;
		static Float distanceThresholdCCD;
		static Float staticCCDLinearThreshold;
		static Float staticCCDAngularThreshold;
		static Float bulletCCDLinearThreshold;
		static Float bulletCCDAngularThreshold;
		static Float dynamicSweepLinearThreshold;
		static Float dynamicSweepAngularThreshold;
		static Float angularCCDSlipScale;
		static int arbiterExpirationDelay;
		static Float staticFrictionThreshold;
		static Float elasticThreshold;
		static int sleepDelay;
		static Float linearSleepThreshold;
		static Float angularSleepThreshold;
		static Float contactBiasCoef;
		static Float contactStaticBiasCoef;
		static Float contactContinuousBiasCoef;
		static Float contactContinuousStaticBiasCoef;
		static Float constraintLinearSlop;
		static Float constraintAngularSlop;
		static Float illConditionedThreshold;
};

} // end namespace nape

#endif /* INCLUDED_nape_Config */ 
