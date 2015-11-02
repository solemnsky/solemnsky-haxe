#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSetPair)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_CbSetPair)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPNode_ZPP_CbSetPair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_CbSetPair_obj OBJ_;
		ZNPNode_ZPP_CbSetPair_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPNode_ZPP_CbSetPair")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZNPNode_ZPP_CbSetPair_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPNode_ZPP_CbSetPair_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZNPNode_ZPP_CbSetPair","\xf7","\x34","\xdd","\x1d"); }

		static void __boot();
		static ::zpp_nape::util::ZNPNode_ZPP_CbSetPair zpp_pool;
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair next;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::callbacks::ZPP_CbSetPair elt;
		virtual ::zpp_nape::callbacks::ZPP_CbSetPair elem( );
		Dynamic elem_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair */ 
