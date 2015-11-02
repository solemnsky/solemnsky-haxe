#ifndef INCLUDED_kha_network_ControllerBuilder
#define INCLUDED_kha_network_ControllerBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,network,ControllerBuilder)
namespace kha{
namespace network{


class HXCPP_CLASS_ATTRIBUTES  ControllerBuilder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ControllerBuilder_obj OBJ_;
		ControllerBuilder_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.network.ControllerBuilder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ControllerBuilder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ControllerBuilder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ControllerBuilder","\xbf","\xb5","\x13","\xdc"); }

		static void __boot();
		static int nextId;
};

} // end namespace kha
} // end namespace network

#endif /* INCLUDED_kha_network_ControllerBuilder */ 
