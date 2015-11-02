#ifndef INCLUDED_nape_callbacks_ConstraintCallback
#define INCLUDED_nape_callbacks_ConstraintCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,ConstraintCallback)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  ConstraintCallback_obj : public ::nape::callbacks::Callback_obj{
	public:
		typedef ::nape::callbacks::Callback_obj super;
		typedef ConstraintCallback_obj OBJ_;
		ConstraintCallback_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.callbacks.ConstraintCallback")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConstraintCallback_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConstraintCallback_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConstraintCallback","\x62","\x9f","\xb9","\xb4"); }

		virtual ::nape::constraint::Constraint get_constraint( );
		Dynamic get_constraint_dyn();

		virtual ::String toString( );

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_ConstraintCallback */ 
