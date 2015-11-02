#ifndef INCLUDED_nape_geom_Vec2List
#define INCLUDED_nape_geom_Vec2List

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec2Iterator)
HX_DECLARE_CLASS2(nape,geom,Vec2List)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Vec2List)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Vec2List_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vec2List_obj OBJ_;
		Vec2List_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.geom.Vec2List")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vec2List_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vec2List_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Vec2List","\xfc","\x32","\xd4","\x30"); }

		static ::nape::geom::Vec2List fromArray( Array< ::Dynamic > array);
		static Dynamic fromArray_dyn();

		::zpp_nape::util::ZPP_Vec2List zpp_inner;
		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int zpp_gl( );
		Dynamic zpp_gl_dyn();

		virtual Void zpp_vm( );
		Dynamic zpp_vm_dyn();

		virtual bool has( ::nape::geom::Vec2 obj);
		Dynamic has_dyn();

		virtual ::nape::geom::Vec2 at( int index);
		Dynamic at_dyn();

		virtual bool push( ::nape::geom::Vec2 obj);
		Dynamic push_dyn();

		virtual bool unshift( ::nape::geom::Vec2 obj);
		Dynamic unshift_dyn();

		virtual ::nape::geom::Vec2 pop( );
		Dynamic pop_dyn();

		virtual ::nape::geom::Vec2 shift( );
		Dynamic shift_dyn();

		virtual bool add( ::nape::geom::Vec2 obj);
		Dynamic add_dyn();

		virtual bool remove( ::nape::geom::Vec2 obj);
		Dynamic remove_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual ::nape::geom::Vec2Iterator iterator( );
		Dynamic iterator_dyn();

		virtual ::nape::geom::Vec2List copy( hx::Null< bool >  deep);
		Dynamic copy_dyn();

		virtual Void merge( ::nape::geom::Vec2List xs);
		Dynamic merge_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::geom::Vec2List foreach( Dynamic lambda);
		Dynamic foreach_dyn();

		virtual ::nape::geom::Vec2List filter( Dynamic lambda);
		Dynamic filter_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_Vec2List */ 
