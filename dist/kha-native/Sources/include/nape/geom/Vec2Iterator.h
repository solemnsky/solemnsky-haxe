#ifndef INCLUDED_nape_geom_Vec2Iterator
#define INCLUDED_nape_geom_Vec2Iterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec2Iterator)
HX_DECLARE_CLASS2(nape,geom,Vec2List)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Vec2Iterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vec2Iterator_obj OBJ_;
		Vec2Iterator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.geom.Vec2Iterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vec2Iterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vec2Iterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Vec2Iterator","\x8c","\x07","\x4e","\xeb"); }

		static void __boot();
		static ::nape::geom::Vec2Iterator zpp_pool;
		static ::nape::geom::Vec2Iterator get( ::nape::geom::Vec2List list);
		static Dynamic get_dyn();

		::nape::geom::Vec2List zpp_inner;
		int zpp_i;
		bool zpp_critical;
		::nape::geom::Vec2Iterator zpp_next;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::nape::geom::Vec2 next( );
		Dynamic next_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_Vec2Iterator */ 
