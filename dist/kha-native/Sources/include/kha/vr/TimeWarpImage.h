#ifndef INCLUDED_kha_vr_TimeWarpImage
#define INCLUDED_kha_vr_TimeWarpImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,math,Matrix4)
HX_DECLARE_CLASS2(kha,vr,PoseState)
HX_DECLARE_CLASS2(kha,vr,TimeWarpImage)
namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES  TimeWarpImage_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimeWarpImage_obj OBJ_;
		TimeWarpImage_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.vr.TimeWarpImage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TimeWarpImage_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimeWarpImage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TimeWarpImage","\x06","\xe2","\x07","\x90"); }

		::kha::Image Image;
		::kha::math::Matrix4 TexCoordsFromTanAngles;
		::kha::vr::PoseState Pose;
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_TimeWarpImage */ 
