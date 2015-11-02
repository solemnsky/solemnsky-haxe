#ifndef INCLUDED_kha_network_Controller
#define INCLUDED_kha_network_Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,network,Controller)
namespace kha{
namespace network{


class HXCPP_CLASS_ATTRIBUTES  Controller_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Controller_obj OBJ_;
		Controller_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.network.Controller")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Controller_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Controller_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Controller","\xbc","\x9c","\x6f","\xfb"); }

		int __id;
		virtual int _id( );
		Dynamic _id_dyn();

		virtual Void _receive( int offset,::haxe::io::Bytes bytes);
		Dynamic _receive_dyn();

};

} // end namespace kha
} // end namespace network

#endif /* INCLUDED_kha_network_Controller */ 
