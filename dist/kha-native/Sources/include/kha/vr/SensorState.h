#ifndef INCLUDED_kha_vr_SensorState
#define INCLUDED_kha_vr_SensorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,vr,PoseState)
HX_DECLARE_CLASS2(kha,vr,SensorState)
namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES  SensorState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SensorState_obj OBJ_;
		SensorState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.vr.SensorState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SensorState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SensorState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SensorState","\x57","\xf9","\x98","\xae"); }

		::kha::vr::PoseState Predicted;
		::kha::vr::PoseState Recorded;
		Float Temperature;
		int Status;
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_SensorState */ 
