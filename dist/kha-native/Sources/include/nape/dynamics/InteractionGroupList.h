#ifndef INCLUDED_nape_dynamics_InteractionGroupList
#define INCLUDED_nape_dynamics_InteractionGroupList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,InteractionGroup)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupIterator)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupList)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_InteractionGroupList)
namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  InteractionGroupList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InteractionGroupList_obj OBJ_;
		InteractionGroupList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.InteractionGroupList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InteractionGroupList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractionGroupList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InteractionGroupList","\x2b","\x91","\x31","\x59"); }

		static ::nape::dynamics::InteractionGroupList fromArray( Array< ::Dynamic > array);
		static Dynamic fromArray_dyn();

		::zpp_nape::util::ZPP_InteractionGroupList zpp_inner;
		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual bool has( ::nape::dynamics::InteractionGroup obj);
		Dynamic has_dyn();

		virtual ::nape::dynamics::InteractionGroup at( int index);
		Dynamic at_dyn();

		virtual bool push( ::nape::dynamics::InteractionGroup obj);
		Dynamic push_dyn();

		virtual bool unshift( ::nape::dynamics::InteractionGroup obj);
		Dynamic unshift_dyn();

		virtual ::nape::dynamics::InteractionGroup pop( );
		Dynamic pop_dyn();

		virtual ::nape::dynamics::InteractionGroup shift( );
		Dynamic shift_dyn();

		virtual bool add( ::nape::dynamics::InteractionGroup obj);
		Dynamic add_dyn();

		virtual bool remove( ::nape::dynamics::InteractionGroup obj);
		Dynamic remove_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual ::nape::dynamics::InteractionGroupIterator iterator( );
		Dynamic iterator_dyn();

		virtual ::nape::dynamics::InteractionGroupList copy( hx::Null< bool >  deep);
		Dynamic copy_dyn();

		virtual Void merge( ::nape::dynamics::InteractionGroupList xs);
		Dynamic merge_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::dynamics::InteractionGroupList foreach( Dynamic lambda);
		Dynamic foreach_dyn();

		virtual ::nape::dynamics::InteractionGroupList filter( Dynamic lambda);
		Dynamic filter_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_InteractionGroupList */ 
