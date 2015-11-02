#ifndef INCLUDED_kha_BakedChar
#define INCLUDED_kha_BakedChar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,BakedChar)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  BakedChar_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BakedChar_obj OBJ_;
		BakedChar_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.BakedChar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BakedChar_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BakedChar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BakedChar","\x81","\xf1","\x88","\x92"); }

		int x0;
		int y0;
		int x1;
		int y1;
		Float xoff;
		Float yoff;
		Float xadvance;
};

} // end namespace kha

#endif /* INCLUDED_kha_BakedChar */ 
