#ifndef INCLUDED_kha_AlignedQuad
#define INCLUDED_kha_AlignedQuad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,AlignedQuad)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  AlignedQuad_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AlignedQuad_obj OBJ_;
		AlignedQuad_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.AlignedQuad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AlignedQuad_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AlignedQuad_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AlignedQuad","\x2b","\xa9","\x6d","\x6a"); }

		Float x0;
		Float y0;
		Float s0;
		Float t0;
		Float x1;
		Float y1;
		Float s1;
		Float t1;
		Float xadvance;
};

} // end namespace kha

#endif /* INCLUDED_kha_AlignedQuad */ 
