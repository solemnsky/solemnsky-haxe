#ifndef INCLUDED_nape_callbacks_BodyCallback
#define INCLUDED_nape_callbacks_BodyCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
HX_DECLARE_CLASS2(nape,callbacks,BodyCallback)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  BodyCallback_obj : public ::nape::callbacks::Callback_obj{
	public:
		typedef ::nape::callbacks::Callback_obj super;
		typedef BodyCallback_obj OBJ_;
		BodyCallback_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.callbacks.BodyCallback")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BodyCallback_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BodyCallback_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BodyCallback","\xa7","\x8e","\xb4","\xfd"); }

		virtual ::nape::phys::Body get_body( );
		Dynamic get_body_dyn();

		virtual ::String toString( );

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_BodyCallback */ 
