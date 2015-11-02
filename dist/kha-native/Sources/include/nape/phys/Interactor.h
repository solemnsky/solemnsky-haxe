#ifndef INCLUDED_nape_phys_Interactor
#define INCLUDED_nape_phys_Interactor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroup)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES  Interactor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Interactor_obj OBJ_;
		Interactor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.phys.Interactor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Interactor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Interactor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Interactor","\x79","\xca","\x20","\x7c"); }

		static void __boot();
		static bool zpp_internalAlloc;
		::zpp_nape::phys::ZPP_Interactor zpp_inner_i;
		virtual int get_id( );
		Dynamic get_id_dyn();

		virtual Dynamic get_userData( );
		Dynamic get_userData_dyn();

		virtual bool isShape( );
		Dynamic isShape_dyn();

		virtual bool isBody( );
		Dynamic isBody_dyn();

		virtual bool isCompound( );
		Dynamic isCompound_dyn();

		virtual ::nape::shape::Shape get_castShape( );
		Dynamic get_castShape_dyn();

		virtual ::nape::phys::Body get_castBody( );
		Dynamic get_castBody_dyn();

		virtual ::nape::phys::Compound get_castCompound( );
		Dynamic get_castCompound_dyn();

		virtual ::nape::dynamics::InteractionGroup get_group( );
		Dynamic get_group_dyn();

		virtual ::nape::dynamics::InteractionGroup set_group( ::nape::dynamics::InteractionGroup group);
		Dynamic set_group_dyn();

		virtual ::nape::callbacks::CbTypeList get_cbTypes( );
		Dynamic get_cbTypes_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_Interactor */ 
