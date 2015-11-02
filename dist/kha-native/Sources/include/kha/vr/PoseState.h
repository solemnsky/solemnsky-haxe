#ifndef INCLUDED_kha_vr_PoseState
#define INCLUDED_kha_vr_PoseState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Vector3)
HX_DECLARE_CLASS2(kha,vr,Pose)
HX_DECLARE_CLASS2(kha,vr,PoseState)
namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES  PoseState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PoseState_obj OBJ_;
		PoseState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.vr.PoseState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PoseState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PoseState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PoseState","\xe0","\xfb","\xb8","\xdf"); }

		::kha::vr::Pose Pose;
		::kha::math::Vector3 AngularVelocity;
		::kha::math::Vector3 LinearVelocity;
		::kha::math::Vector3 AngularAcceleration;
		::kha::math::Vector3 LinearAcceleration;
		Float TimeInSeconds;
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_PoseState */ 
