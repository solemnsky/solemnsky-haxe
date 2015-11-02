#ifndef INCLUDED_nape_dynamics_InteractionGroupIterator
#define INCLUDED_nape_dynamics_InteractionGroupIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,InteractionGroup)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupIterator)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupList)
namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  InteractionGroupIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InteractionGroupIterator_obj OBJ_;
		InteractionGroupIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.InteractionGroupIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InteractionGroupIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractionGroupIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InteractionGroupIterator","\x3b","\xa9","\x87","\xc0"); }

		static void __boot();
		static ::nape::dynamics::InteractionGroupIterator zpp_pool;
		static ::nape::dynamics::InteractionGroupIterator get( ::nape::dynamics::InteractionGroupList list);
		static Dynamic get_dyn();

		::nape::dynamics::InteractionGroupList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::dynamics::InteractionGroupIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::dynamics::InteractionGroup next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_InteractionGroupIterator */ 
