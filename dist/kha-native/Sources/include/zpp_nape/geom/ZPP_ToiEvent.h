#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#define INCLUDED_zpp_nape_geom_ZPP_ToiEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ToiEvent)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_ToiEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_ToiEvent_obj OBJ_;
		ZPP_ToiEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_ToiEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_ToiEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_ToiEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_ToiEvent","\x11","\x86","\x70","\x92"); }

		static void __boot();
		static ::zpp_nape::geom::ZPP_ToiEvent zpp_pool;
		::zpp_nape::geom::ZPP_ToiEvent next;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		Float toi;
		::zpp_nape::shape::ZPP_Shape s1;
		::zpp_nape::shape::ZPP_Shape s2;
		::zpp_nape::dynamics::ZPP_ColArbiter arbiter;
		bool frozen1;
		bool frozen2;
		::zpp_nape::geom::ZPP_Vec2 c1;
		::zpp_nape::geom::ZPP_Vec2 c2;
		::zpp_nape::geom::ZPP_Vec2 axis;
		bool slipped;
		bool failed;
		bool kinematic;
};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_ToiEvent */ 
