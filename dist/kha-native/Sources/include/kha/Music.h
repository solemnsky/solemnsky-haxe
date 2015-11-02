#ifndef INCLUDED_kha_Music
#define INCLUDED_kha_Music

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Music)
HX_DECLARE_CLASS1(kha,Resource)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Music_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Music_obj OBJ_;
		Music_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Music")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Music_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Music_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::Resource_obj *();
		::String __ToString() const { return HX_HCSTRING("Music","\x85","\x40","\x88","\xa3"); }

		::haxe::io::Bytes data;
		Dynamic _nativemusic;
		virtual Void unload( );
		Dynamic unload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Music */ 
