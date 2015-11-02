#ifndef INCLUDED_nape_callbacks_ListenerIterator
#define INCLUDED_nape_callbacks_ListenerIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,ListenerIterator)
HX_DECLARE_CLASS2(nape,callbacks,ListenerList)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  ListenerIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ListenerIterator_obj OBJ_;
		ListenerIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.callbacks.ListenerIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ListenerIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListenerIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ListenerIterator","\xa2","\x76","\xdc","\xd6"); }

		static void __boot();
		static ::nape::callbacks::ListenerIterator zpp_pool;
		static ::nape::callbacks::ListenerIterator get( ::nape::callbacks::ListenerList list);
		static Dynamic get_dyn();

		::nape::callbacks::ListenerList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::callbacks::ListenerIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::callbacks::Listener next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_ListenerIterator */ 
