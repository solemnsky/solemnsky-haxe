#ifndef INCLUDED_nape_phys_CompoundIterator
#define INCLUDED_nape_phys_CompoundIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,CompoundIterator)
HX_DECLARE_CLASS2(nape,phys,CompoundList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES  CompoundIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CompoundIterator_obj OBJ_;
		CompoundIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.phys.CompoundIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CompoundIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompoundIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CompoundIterator","\x99","\x88","\xf8","\xfd"); }

		static void __boot();
		static ::nape::phys::CompoundIterator zpp_pool;
		static ::nape::phys::CompoundIterator get( ::nape::phys::CompoundList list);
		static Dynamic get_dyn();

		::nape::phys::CompoundList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::phys::CompoundIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::phys::Compound next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_CompoundIterator */ 
