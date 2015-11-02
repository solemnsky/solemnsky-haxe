#ifndef INCLUDED_nape_phys_BodyIterator
#define INCLUDED_nape_phys_BodyIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyIterator)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES  BodyIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BodyIterator_obj OBJ_;
		BodyIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.phys.BodyIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BodyIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BodyIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BodyIterator","\xd0","\x3e","\x48","\x12"); }

		static void __boot();
		static ::nape::phys::BodyIterator zpp_pool;
		static ::nape::phys::BodyIterator get( ::nape::phys::BodyList list);
		static Dynamic get_dyn();

		::nape::phys::BodyList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::phys::BodyIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::phys::Body next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_BodyIterator */ 
