#ifndef INCLUDED_nape_phys_InteractorIterator
#define INCLUDED_nape_phys_InteractorIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,InteractorIterator)
HX_DECLARE_CLASS2(nape,phys,InteractorList)
namespace nape{
namespace phys{


class HXCPP_CLASS_ATTRIBUTES  InteractorIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InteractorIterator_obj OBJ_;
		InteractorIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.phys.InteractorIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InteractorIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractorIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InteractorIterator","\x87","\x71","\x61","\x3a"); }

		static void __boot();
		static ::nape::phys::InteractorIterator zpp_pool;
		static ::nape::phys::InteractorIterator get( ::nape::phys::InteractorList list);
		static Dynamic get_dyn();

		::nape::phys::InteractorList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::phys::InteractorIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::phys::Interactor next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_InteractorIterator */ 
