#ifndef INCLUDED_kha_vr_TimeWarpParms
#define INCLUDED_kha_vr_TimeWarpParms

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,vr,TimeWarpImage)
HX_DECLARE_CLASS2(kha,vr,TimeWarpParms)
namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES  TimeWarpParms_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimeWarpParms_obj OBJ_;
		TimeWarpParms_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.vr.TimeWarpParms")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TimeWarpParms_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimeWarpParms_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TimeWarpParms","\xb2","\x4d","\xf4","\x8f"); }

		::kha::vr::TimeWarpImage LeftImage;
		::kha::vr::TimeWarpImage RightImage;
		::kha::vr::TimeWarpImage LeftOverlay;
		::kha::vr::TimeWarpImage RightOverlay;
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_TimeWarpParms */ 
