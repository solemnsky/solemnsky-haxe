#ifndef INCLUDED_nape_geom_ConvexResultIterator
#define INCLUDED_nape_geom_ConvexResultIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(nape,geom,ConvexResultIterator)
HX_DECLARE_CLASS2(nape,geom,ConvexResultList)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ConvexResultIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConvexResultIterator_obj OBJ_;
		ConvexResultIterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.geom.ConvexResultIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConvexResultIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConvexResultIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ConvexResultIterator","\xd2","\x11","\x7f","\x1d"); }

		static void __boot();
		static ::nape::geom::ConvexResultIterator zpp_pool;
		static ::nape::geom::ConvexResultIterator get( ::nape::geom::ConvexResultList list);
		static Dynamic get_dyn();

		::nape::geom::ConvexResultList zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::geom::ConvexResultIterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::geom::ConvexResult next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_ConvexResultIterator */ 
