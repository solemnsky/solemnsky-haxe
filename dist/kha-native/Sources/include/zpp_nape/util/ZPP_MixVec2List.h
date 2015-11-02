#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#define INCLUDED_zpp_nape_util_ZPP_MixVec2List

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec2List)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_MixVec2List)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZPP_MixVec2List_obj : public ::nape::geom::Vec2List_obj{
	public:
		typedef ::nape::geom::Vec2List_obj super;
		typedef ZPP_MixVec2List_obj OBJ_;
		ZPP_MixVec2List_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZPP_MixVec2List")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_MixVec2List_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_MixVec2List_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_MixVec2List","\x53","\xf6","\x3f","\x1c"); }

		static ::zpp_nape::util::ZPP_MixVec2List get( ::zpp_nape::geom::ZPP_Vec2 list,hx::Null< bool >  immutable);
		static Dynamic get_dyn();

		::zpp_nape::geom::ZPP_Vec2 inner;
		int _length;
		bool zip_length;
		::zpp_nape::geom::ZPP_Vec2 at_ite;
		int at_index;
		virtual int zpp_gl( );

		virtual Void zpp_vm( );

		virtual ::nape::geom::Vec2 at( int index);

		virtual bool push( ::nape::geom::Vec2 obj);

		virtual bool unshift( ::nape::geom::Vec2 obj);

		virtual ::nape::geom::Vec2 pop( );

		virtual ::nape::geom::Vec2 shift( );

		virtual bool remove( ::nape::geom::Vec2 obj);

		virtual Void clear( );

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_MixVec2List */ 
