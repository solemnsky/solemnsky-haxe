#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#define INCLUDED_zpp_nape_space_ZPP_AABBNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_AABB)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBNode)
namespace zpp_nape{
namespace space{


class HXCPP_CLASS_ATTRIBUTES  ZPP_AABBNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_AABBNode_obj OBJ_;
		ZPP_AABBNode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.space.ZPP_AABBNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_AABBNode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_AABBNode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_AABBNode","\x07","\xec","\x4e","\x6e"); }

		static void __boot();
		static ::zpp_nape::space::ZPP_AABBNode zpp_pool;
		::zpp_nape::geom::ZPP_AABB aabb;
		::zpp_nape::shape::ZPP_Shape shape;
		bool dyn;
		::zpp_nape::space::ZPP_AABBNode parent;
		::zpp_nape::space::ZPP_AABBNode child1;
		::zpp_nape::space::ZPP_AABBNode child2;
		int height;
		Float rayt;
		::zpp_nape::space::ZPP_AABBNode next;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::space::ZPP_AABBNode mnext;
		bool moved;
		::zpp_nape::space::ZPP_AABBNode snext;
		bool synced;
		bool first_sync;
		virtual bool isLeaf( );
		Dynamic isLeaf_dyn();

};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_AABBNode */ 
