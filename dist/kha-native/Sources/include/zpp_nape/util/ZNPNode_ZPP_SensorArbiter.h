#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_SensorArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_SensorArbiter)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPNode_ZPP_SensorArbiter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_SensorArbiter_obj OBJ_;
		ZNPNode_ZPP_SensorArbiter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPNode_ZPP_SensorArbiter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZNPNode_ZPP_SensorArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPNode_ZPP_SensorArbiter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZNPNode_ZPP_SensorArbiter","\xc9","\x7a","\x28","\x0b"); }

		static void __boot();
		static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter zpp_pool;
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter next;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::dynamics::ZPP_SensorArbiter elt;
		virtual ::zpp_nape::dynamics::ZPP_SensorArbiter elem( );
		Dynamic elem_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter */ 
