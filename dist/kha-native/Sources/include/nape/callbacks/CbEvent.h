#ifndef INCLUDED_nape_callbacks_CbEvent
#define INCLUDED_nape_callbacks_CbEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  CbEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CbEvent_obj OBJ_;
		CbEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nape.callbacks.CbEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CbEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CbEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CbEvent","\xdb","\xa8","\x09","\x1a"); }

		static ::nape::callbacks::CbEvent get_BEGIN( );
		static Dynamic get_BEGIN_dyn();

		static ::nape::callbacks::CbEvent get_ONGOING( );
		static Dynamic get_ONGOING_dyn();

		static ::nape::callbacks::CbEvent get_END( );
		static Dynamic get_END_dyn();

		static ::nape::callbacks::CbEvent get_WAKE( );
		static Dynamic get_WAKE_dyn();

		static ::nape::callbacks::CbEvent get_SLEEP( );
		static Dynamic get_SLEEP_dyn();

		static ::nape::callbacks::CbEvent get_BREAK( );
		static Dynamic get_BREAK_dyn();

		static ::nape::callbacks::CbEvent get_PRE( );
		static Dynamic get_PRE_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_CbEvent */ 
