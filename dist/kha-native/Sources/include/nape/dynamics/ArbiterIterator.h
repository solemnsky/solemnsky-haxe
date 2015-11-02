#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#define INCLUDED_nape_dynamics_ArbiterIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterIterator)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterList)
namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  ArbiterIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArbiterIterator_obj OBJ_;
		ArbiterIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.ArbiterIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArbiterIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArbiterIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ArbiterIterator","\xd7","\x5e","\x3d","\xcf"); }

		static void __boot();
		static ::nape::dynamics::ArbiterIterator zpp_pool;
		static ::nape::dynamics::ArbiterIterator get( ::nape::dynamics::ArbiterList list);
		static Dynamic get_dyn();

		::nape::dynamics::ArbiterList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::dynamics::ArbiterIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::dynamics::Arbiter next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_ArbiterIterator */ 
