#ifndef INCLUDED_zpp_nape_space_ZPP_DynAABBPhase
#define INCLUDED_zpp_nape_space_ZPP_DynAABBPhase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,RayResultList)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_InteractionFilter)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_AABB)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Ray)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBNode)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBPair)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBTree)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Broadphase)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_DynAABBPhase)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_AABBNode)
namespace zpp_nape{
namespace space{


class HXCPP_CLASS_ATTRIBUTES  ZPP_DynAABBPhase_obj : public ::zpp_nape::space::ZPP_Broadphase_obj{
	public:
		typedef ::zpp_nape::space::ZPP_Broadphase_obj super;
		typedef ZPP_DynAABBPhase_obj OBJ_;
		ZPP_DynAABBPhase_obj();
		Void __construct(::zpp_nape::space::ZPP_Space space);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.space.ZPP_DynAABBPhase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_DynAABBPhase_obj > __new(::zpp_nape::space::ZPP_Space space);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_DynAABBPhase_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_DynAABBPhase","\x07","\xfd","\x69","\xd4"); }

		static void __boot();
		static Float FATTEN;
		static Float VEL_STEPS;
		::zpp_nape::space::ZPP_AABBTree stree;
		::zpp_nape::space::ZPP_AABBTree dtree;
		::zpp_nape::space::ZPP_AABBPair pairs;
		::zpp_nape::space::ZPP_AABBNode syncs;
		::zpp_nape::space::ZPP_AABBNode moves;
		virtual bool dyn( ::zpp_nape::shape::ZPP_Shape shape);
		Dynamic dyn_dyn();

		virtual Void __insert( ::zpp_nape::shape::ZPP_Shape shape);
		Dynamic __insert_dyn();

		virtual Void __remove( ::zpp_nape::shape::ZPP_Shape shape);
		Dynamic __remove_dyn();

		virtual Void __sync( ::zpp_nape::shape::ZPP_Shape shape);
		Dynamic __sync_dyn();

		virtual Void sync_broadphase( );
		Dynamic sync_broadphase_dyn();

		virtual Void broadphase( ::zpp_nape::space::ZPP_Space space,bool discrete);

		virtual Void clear( );

		::zpp_nape::util::ZNPList_ZPP_AABBNode treeStack;
		virtual ::nape::shape::ShapeList shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output);

		virtual ::nape::phys::BodyList bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output);

		::zpp_nape::util::ZNPList_ZPP_AABBNode treeStack2;
		virtual ::nape::shape::ShapeList shapesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output);

		::nape::phys::BodyList failed;
		virtual ::nape::phys::BodyList bodiesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output);

		virtual ::nape::shape::ShapeList shapesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output);

		virtual ::nape::phys::BodyList bodiesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output);

		virtual ::nape::shape::ShapeList shapesInShape( ::zpp_nape::shape::ZPP_Shape shp,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output);

		virtual ::nape::phys::BodyList bodiesInShape( ::zpp_nape::shape::ZPP_Shape shp,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output);

		::zpp_nape::util::ZNPList_ZPP_AABBNode openlist;
		virtual ::nape::geom::RayResult rayCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter);

		virtual ::nape::geom::RayResultList rayMultiCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::geom::RayResultList output);

};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_DynAABBPhase */ 
