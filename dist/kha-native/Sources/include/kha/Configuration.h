#ifndef INCLUDED_kha_Configuration
#define INCLUDED_kha_Configuration

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Configuration)
HX_DECLARE_CLASS1(kha,Game)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Configuration_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Configuration_obj OBJ_;
		Configuration_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.Configuration")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Configuration_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Configuration_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Configuration","\x96","\xb0","\xc8","\x05"); }

		static void __boot();
		static ::kha::Game theScreen;
		static int id;
		static ::kha::Game screen( );
		static Dynamic screen_dyn();

		static Void schedulerInitialized( );
		static Dynamic schedulerInitialized_dyn();

		static Void setScreen( ::kha::Game screen);
		static Dynamic setScreen_dyn();

		static Void update( );
		static Dynamic update_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Configuration */ 
