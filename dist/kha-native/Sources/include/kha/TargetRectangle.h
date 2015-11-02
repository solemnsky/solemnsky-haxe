#ifndef INCLUDED_kha_TargetRectangle
#define INCLUDED_kha_TargetRectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,ScreenRotation)
HX_DECLARE_CLASS1(kha,TargetRectangle)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  TargetRectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TargetRectangle_obj OBJ_;
		TargetRectangle_obj();
		Void __construct(Float x,Float y,Float w,Float h,Float s,::kha::ScreenRotation r);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.TargetRectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TargetRectangle_obj > __new(Float x,Float y,Float w,Float h,Float s,::kha::ScreenRotation r);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TargetRectangle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TargetRectangle","\x7e","\x56","\xc8","\xde"); }

		Float x;
		Float y;
		Float width;
		Float height;
		Float scaleFactor;
		::kha::ScreenRotation rotation;
};

} // end namespace kha

#endif /* INCLUDED_kha_TargetRectangle */ 
