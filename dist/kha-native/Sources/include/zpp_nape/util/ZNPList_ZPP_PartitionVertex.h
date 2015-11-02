#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_PartitionVertex)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_PartitionVertex)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_PartitionVertex)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPList_ZPP_PartitionVertex_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_PartitionVertex_obj OBJ_;
		ZNPList_ZPP_PartitionVertex_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_ZPP_PartitionVertex")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZNPList_ZPP_PartitionVertex_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ZPP_PartitionVertex_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZNPList_ZPP_PartitionVertex","\xc4","\xc1","\xb3","\x26"); }

		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex head;
		virtual ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex begin( );
		Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		virtual Void setbegin( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex i);
		Dynamic setbegin_dyn();

		virtual ::zpp_nape::geom::ZPP_PartitionVertex add( ::zpp_nape::geom::ZPP_PartitionVertex o);
		Dynamic add_dyn();

		virtual ::zpp_nape::geom::ZPP_PartitionVertex inlined_add( ::zpp_nape::geom::ZPP_PartitionVertex o);
		Dynamic inlined_add_dyn();

		virtual Void addAll( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex x);
		Dynamic addAll_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur,::zpp_nape::geom::ZPP_PartitionVertex o);
		Dynamic insert_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur,::zpp_nape::geom::ZPP_PartitionVertex o);
		Dynamic inlined_insert_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual ::zpp_nape::geom::ZPP_PartitionVertex pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual ::zpp_nape::geom::ZPP_PartitionVertex inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual Void remove( ::zpp_nape::geom::ZPP_PartitionVertex obj);
		Dynamic remove_dyn();

		virtual bool try_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj);
		Dynamic try_remove_dyn();

		virtual Void inlined_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj);
		Dynamic inlined_remove_dyn();

		virtual bool inlined_try_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj);
		Dynamic inlined_try_remove_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre);
		Dynamic erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex splice( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre,int n);
		Dynamic splice_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void inlined_clear( );
		Dynamic inlined_clear_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool has( ::zpp_nape::geom::ZPP_PartitionVertex obj);
		Dynamic has_dyn();

		virtual bool inlined_has( ::zpp_nape::geom::ZPP_PartitionVertex obj);
		Dynamic inlined_has_dyn();

		virtual ::zpp_nape::geom::ZPP_PartitionVertex front( );
		Dynamic front_dyn();

		virtual ::zpp_nape::geom::ZPP_PartitionVertex back( );
		Dynamic back_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::zpp_nape::geom::ZPP_PartitionVertex at( int ind);
		Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex */ 
