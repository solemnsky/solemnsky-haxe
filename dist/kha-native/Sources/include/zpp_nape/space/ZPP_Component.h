#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#define INCLUDED_zpp_nape_space_ZPP_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Component)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Island)
namespace zpp_nape{
namespace space{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Component_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Component_obj OBJ_;
		ZPP_Component_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.space.ZPP_Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_Component_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_Component_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_Component","\xb8","\x31","\xc9","\x63"); }

		static void __boot();
		static ::zpp_nape::space::ZPP_Component zpp_pool;
		::zpp_nape::space::ZPP_Component next;
		::zpp_nape::space::ZPP_Component parent;
		int rank;
		bool isBody;
		::zpp_nape::phys::ZPP_Body body;
		::zpp_nape::constraint::ZPP_Constraint constraint;
		::zpp_nape::space::ZPP_Island island;
		bool sleeping;
		int waket;
		bool woken;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_Component */ 
