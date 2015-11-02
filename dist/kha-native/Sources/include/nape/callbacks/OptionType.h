#ifndef INCLUDED_nape_callbacks_OptionType
#define INCLUDED_nape_callbacks_OptionType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
HX_DECLARE_CLASS2(nape,callbacks,OptionType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_OptionType)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  OptionType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OptionType_obj OBJ_;
		OptionType_obj();
		Void __construct(Dynamic includes,Dynamic excludes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.callbacks.OptionType")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OptionType_obj > __new(Dynamic includes,Dynamic excludes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OptionType_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("OptionType","\xef","\x54","\x55","\x89"); }

		::zpp_nape::callbacks::ZPP_OptionType zpp_inner;
		virtual ::nape::callbacks::CbTypeList get_includes( );
		Dynamic get_includes_dyn();

		virtual ::nape::callbacks::CbTypeList get_excludes( );
		Dynamic get_excludes_dyn();

		virtual ::nape::callbacks::OptionType including( Dynamic includes);
		Dynamic including_dyn();

		virtual ::nape::callbacks::OptionType excluding( Dynamic excludes);
		Dynamic excluding_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_OptionType */ 
