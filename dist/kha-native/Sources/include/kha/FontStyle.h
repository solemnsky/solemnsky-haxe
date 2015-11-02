#ifndef INCLUDED_kha_FontStyle
#define INCLUDED_kha_FontStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,FontStyle)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  FontStyle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FontStyle_obj OBJ_;
		FontStyle_obj();
		Void __construct(bool bold,bool italic,bool underlined);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.FontStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FontStyle_obj > __new(bool bold,bool italic,bool underlined);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontStyle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FontStyle","\xc2","\x28","\xcc","\xd1"); }

		static void __boot();
		static ::kha::FontStyle Default;
		bool bold;
		bool italic;
		bool underlined;
		virtual bool getBold( );
		Dynamic getBold_dyn();

		virtual bool getItalic( );
		Dynamic getItalic_dyn();

		virtual bool getUnderlined( );
		Dynamic getUnderlined_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_FontStyle */ 
