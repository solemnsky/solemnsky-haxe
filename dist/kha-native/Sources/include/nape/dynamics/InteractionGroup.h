#ifndef INCLUDED_nape_dynamics_InteractionGroup
#define INCLUDED_nape_dynamics_InteractionGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,InteractionGroup)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupList)
HX_DECLARE_CLASS2(nape,phys,InteractorList)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_InteractionGroup)
namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  InteractionGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InteractionGroup_obj OBJ_;
		InteractionGroup_obj();
		Void __construct(hx::Null< bool >  __o_ignore);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.InteractionGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InteractionGroup_obj > __new(hx::Null< bool >  __o_ignore);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractionGroup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InteractionGroup","\x2d","\x2e","\xee","\x3f"); }

		::zpp_nape::dynamics::ZPP_InteractionGroup zpp_inner;
		virtual ::nape::dynamics::InteractionGroup get_group( );
		Dynamic get_group_dyn();

		virtual ::nape::dynamics::InteractionGroup set_group( ::nape::dynamics::InteractionGroup group);
		Dynamic set_group_dyn();

		virtual bool get_ignore( );
		Dynamic get_ignore_dyn();

		virtual bool set_ignore( bool ignore);
		Dynamic set_ignore_dyn();

		virtual ::nape::phys::InteractorList get_interactors( );
		Dynamic get_interactors_dyn();

		virtual ::nape::dynamics::InteractionGroupList get_groups( );
		Dynamic get_groups_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_InteractionGroup */ 
