#ifndef INCLUDED_kha__SuperString_SuperString_Impl_
#define INCLUDED_kha__SuperString_SuperString_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,_SuperString,SuperString_Impl_)
namespace kha{
namespace _SuperString{


class HXCPP_CLASS_ATTRIBUTES  SuperString_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SuperString_Impl__obj OBJ_;
		SuperString_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha._SuperString.SuperString_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SuperString_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SuperString_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SuperString_Impl_","\x2c","\x32","\x9f","\x01"); }

		static ::String _new( ::String value);
		static Dynamic _new_dyn();

		static int get_length( ::String this1);
		static Dynamic get_length_dyn();

		static ::String charAt( ::String this1,int index);
		static Dynamic charAt_dyn();

		static int charCodeAt( ::String this1,int index);
		static Dynamic charCodeAt_dyn();

		static ::String toUpperCase( ::String this1);
		static Dynamic toUpperCase_dyn();

		static ::String toLowerCase( ::String this1);
		static Dynamic toLowerCase_dyn();

		static ::String trim( ::String this1);
		static Dynamic trim_dyn();

		static ::String substr( ::String this1,int pos,Dynamic len);
		static Dynamic substr_dyn();

		static ::String substring( ::String this1,int start,int end);
		static Dynamic substring_dyn();

		static Array< ::String > split( ::String this1,::String splitter);
		static Dynamic split_dyn();

		static int indexOf( ::String this1,::String str,Dynamic startIndex);
		static Dynamic indexOf_dyn();

		static ::String toString( ::String this1);
		static Dynamic toString_dyn();

};

} // end namespace kha
} // end namespace _SuperString

#endif /* INCLUDED_kha__SuperString_SuperString_Impl_ */ 
