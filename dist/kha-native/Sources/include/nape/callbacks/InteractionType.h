#ifndef INCLUDED_nape_callbacks_InteractionType
#define INCLUDED_nape_callbacks_InteractionType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,InteractionType)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  InteractionType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InteractionType_obj OBJ_;
		InteractionType_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nape.callbacks.InteractionType")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InteractionType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractionType_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("InteractionType","\x8c","\xaf","\x54","\x69"); }

		static ::nape::callbacks::InteractionType get_COLLISION( );
		static Dynamic get_COLLISION_dyn();

		static ::nape::callbacks::InteractionType get_SENSOR( );
		static Dynamic get_SENSOR_dyn();

		static ::nape::callbacks::InteractionType get_FLUID( );
		static Dynamic get_FLUID_dyn();

		static ::nape::callbacks::InteractionType get_ANY( );
		static Dynamic get_ANY_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_InteractionType */ 
