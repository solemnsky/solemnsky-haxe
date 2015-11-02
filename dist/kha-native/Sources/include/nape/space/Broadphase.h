#ifndef INCLUDED_nape_space_Broadphase
#define INCLUDED_nape_space_Broadphase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,space,Broadphase)
namespace nape{
namespace space{


class HXCPP_CLASS_ATTRIBUTES  Broadphase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Broadphase_obj OBJ_;
		Broadphase_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nape.space.Broadphase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Broadphase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Broadphase_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Broadphase","\xd9","\x61","\xce","\xce"); }

		static ::nape::space::Broadphase get_DYNAMIC_AABB_TREE( );
		static Dynamic get_DYNAMIC_AABB_TREE_dyn();

		static ::nape::space::Broadphase get_SWEEP_AND_PRUNE( );
		static Dynamic get_SWEEP_AND_PRUNE_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nape
} // end namespace space

#endif /* INCLUDED_nape_space_Broadphase */ 
