#ifndef INCLUDED_nape_geom_RayResultList
#define INCLUDED_nape_geom_RayResultList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,RayResultIterator)
HX_DECLARE_CLASS2(nape,geom,RayResultList)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_RayResultList)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  RayResultList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RayResultList_obj OBJ_;
		RayResultList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.geom.RayResultList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RayResultList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayResultList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RayResultList","\x45","\x56","\xf5","\xd9"); }

		static ::nape::geom::RayResultList fromArray( Array< ::Dynamic > array);
		static Dynamic fromArray_dyn();

		::zpp_nape::util::ZPP_RayResultList zpp_inner;
		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual bool has( ::nape::geom::RayResult obj);
		Dynamic has_dyn();

		virtual ::nape::geom::RayResult at( int index);
		Dynamic at_dyn();

		virtual bool push( ::nape::geom::RayResult obj);
		Dynamic push_dyn();

		virtual bool unshift( ::nape::geom::RayResult obj);
		Dynamic unshift_dyn();

		virtual ::nape::geom::RayResult pop( );
		Dynamic pop_dyn();

		virtual ::nape::geom::RayResult shift( );
		Dynamic shift_dyn();

		virtual bool add( ::nape::geom::RayResult obj);
		Dynamic add_dyn();

		virtual bool remove( ::nape::geom::RayResult obj);
		Dynamic remove_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual ::nape::geom::RayResultIterator iterator( );
		Dynamic iterator_dyn();

		virtual ::nape::geom::RayResultList copy( hx::Null< bool >  deep);
		Dynamic copy_dyn();

		virtual Void merge( ::nape::geom::RayResultList xs);
		Dynamic merge_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::geom::RayResultList foreach( Dynamic lambda);
		Dynamic foreach_dyn();

		virtual ::nape::geom::RayResultList filter( Dynamic lambda);
		Dynamic filter_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_RayResultList */ 
