#ifndef INCLUDED_kha_vr_Pose
#define INCLUDED_kha_vr_Pose

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Quaternion)
HX_DECLARE_CLASS2(kha,math,Vector3)
HX_DECLARE_CLASS2(kha,vr,Pose)
namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES  Pose_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Pose_obj OBJ_;
		Pose_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.vr.Pose")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Pose_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pose_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Pose","\x71","\xb0","\x35","\x35"); }

		::kha::math::Quaternion Orientation;
		::kha::math::Vector3 Position;
};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_Pose */ 
