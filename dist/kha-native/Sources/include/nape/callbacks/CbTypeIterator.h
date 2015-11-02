#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#define INCLUDED_nape_callbacks_CbTypeIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,callbacks,CbTypeIterator)
HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  CbTypeIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CbTypeIterator_obj OBJ_;
		CbTypeIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.callbacks.CbTypeIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CbTypeIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CbTypeIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CbTypeIterator","\x27","\x6c","\x1c","\xea"); }

		static void __boot();
		static ::nape::callbacks::CbTypeIterator zpp_pool;
		static ::nape::callbacks::CbTypeIterator get( ::nape::callbacks::CbTypeList list);
		static Dynamic get_dyn();

		::nape::callbacks::CbTypeList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::callbacks::CbTypeIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::callbacks::CbType next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_CbTypeIterator */ 
