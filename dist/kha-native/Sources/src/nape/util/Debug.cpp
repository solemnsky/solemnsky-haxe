#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerIterator
#include <nape/callbacks/ListenerIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroupIterator
#include <nape/dynamics/InteractionGroupIterator.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultIterator
#include <nape/geom/ConvexResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyIterator
#include <nape/geom/GeomPolyIterator.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultIterator
#include <nape/geom/RayResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorIterator
#include <nape/phys/InteractorIterator.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeIterator
#include <nape/shape/EdgeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Component
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace nape{
namespace util{

Void Debug_obj::__construct()
{
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

::String Debug_obj::version( ){
	HX_STACK_FRAME("nape.util.Debug","version",0x98b58837,"nape.util.Debug.version","nape/util/Debug.hx",184,0xfa9d0ab1)
	HX_STACK_LINE(184)
	return HX_HCSTRING("Nape 2.0.19","\x3a","\xf2","\x53","\xc7");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,version,return )

Void Debug_obj::clearObjectPools( ){
{
		HX_STACK_FRAME("nape.util.Debug","clearObjectPools",0x7192474c,"nape.util.Debug.clearObjectPools","nape/util/Debug.hx",189,0xfa9d0ab1)
		HX_STACK_LINE(192)
		while((true)){
			HX_STACK_LINE(192)
			::nape::constraint::ConstraintIterator tmp = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(192)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(192)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			if ((tmp2)){
				HX_STACK_LINE(192)
				break;
			}
			HX_STACK_LINE(193)
			::nape::constraint::ConstraintIterator tmp3 = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			::nape::constraint::ConstraintIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(194)
			::nape::constraint::ConstraintIterator tmp4 = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			tmp4->zpp_next = null();
			HX_STACK_LINE(195)
			::nape::constraint::ConstraintIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(199)
		while((true)){
			HX_STACK_LINE(199)
			::nape::phys::InteractorIterator tmp = ::nape::phys::InteractorIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(199)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			if ((tmp2)){
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(200)
			::nape::phys::InteractorIterator tmp3 = ::nape::phys::InteractorIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			::nape::phys::InteractorIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(201)
			::nape::phys::InteractorIterator tmp4 = ::nape::phys::InteractorIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			tmp4->zpp_next = null();
			HX_STACK_LINE(202)
			::nape::phys::InteractorIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(206)
		while((true)){
			HX_STACK_LINE(206)
			::nape::phys::BodyIterator tmp = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(206)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(206)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			if ((tmp2)){
				HX_STACK_LINE(206)
				break;
			}
			HX_STACK_LINE(207)
			::nape::phys::BodyIterator tmp3 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			::nape::phys::BodyIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(208)
			::nape::phys::BodyIterator tmp4 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			tmp4->zpp_next = null();
			HX_STACK_LINE(209)
			::nape::phys::BodyIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			::nape::phys::CompoundIterator tmp = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(213)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(213)
			if ((tmp2)){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(214)
			::nape::phys::CompoundIterator tmp3 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::nape::phys::CompoundIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(215)
			::nape::phys::CompoundIterator tmp4 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			tmp4->zpp_next = null();
			HX_STACK_LINE(216)
			::nape::phys::CompoundIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(220)
		while((true)){
			HX_STACK_LINE(220)
			::nape::callbacks::ListenerIterator tmp = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(220)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(220)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(220)
			if ((tmp2)){
				HX_STACK_LINE(220)
				break;
			}
			HX_STACK_LINE(221)
			::nape::callbacks::ListenerIterator tmp3 = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			::nape::callbacks::ListenerIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(222)
			::nape::callbacks::ListenerIterator tmp4 = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			tmp4->zpp_next = null();
			HX_STACK_LINE(223)
			::nape::callbacks::ListenerIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			::nape::callbacks::CbTypeIterator tmp = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(227)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			if ((tmp2)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(228)
			::nape::callbacks::CbTypeIterator tmp3 = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			::nape::callbacks::CbTypeIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(229)
			::nape::callbacks::CbTypeIterator tmp4 = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			tmp4->zpp_next = null();
			HX_STACK_LINE(230)
			::nape::callbacks::CbTypeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			::nape::geom::ConvexResultIterator tmp = ::nape::geom::ConvexResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(234)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(234)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			if ((tmp2)){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(235)
			::nape::geom::ConvexResultIterator tmp3 = ::nape::geom::ConvexResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			::nape::geom::ConvexResultIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(236)
			::nape::geom::ConvexResultIterator tmp4 = ::nape::geom::ConvexResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			tmp4->zpp_next = null();
			HX_STACK_LINE(237)
			::nape::geom::ConvexResultIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(241)
		while((true)){
			HX_STACK_LINE(241)
			::nape::geom::GeomPolyIterator tmp = ::nape::geom::GeomPolyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(241)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(241)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			if ((tmp2)){
				HX_STACK_LINE(241)
				break;
			}
			HX_STACK_LINE(242)
			::nape::geom::GeomPolyIterator tmp3 = ::nape::geom::GeomPolyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(242)
			::nape::geom::GeomPolyIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(243)
			::nape::geom::GeomPolyIterator tmp4 = ::nape::geom::GeomPolyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(243)
			tmp4->zpp_next = null();
			HX_STACK_LINE(244)
			::nape::geom::GeomPolyIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(248)
		while((true)){
			HX_STACK_LINE(248)
			::nape::geom::Vec2Iterator tmp = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(248)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			if ((tmp2)){
				HX_STACK_LINE(248)
				break;
			}
			HX_STACK_LINE(249)
			::nape::geom::Vec2Iterator tmp3 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			::nape::geom::Vec2Iterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(250)
			::nape::geom::Vec2Iterator tmp4 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			tmp4->zpp_next = null();
			HX_STACK_LINE(251)
			::nape::geom::Vec2Iterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(255)
		while((true)){
			HX_STACK_LINE(255)
			::nape::geom::RayResultIterator tmp = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(255)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(255)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			if ((tmp2)){
				HX_STACK_LINE(255)
				break;
			}
			HX_STACK_LINE(256)
			::nape::geom::RayResultIterator tmp3 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			::nape::geom::RayResultIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(257)
			::nape::geom::RayResultIterator tmp4 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			tmp4->zpp_next = null();
			HX_STACK_LINE(258)
			::nape::geom::RayResultIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(262)
		while((true)){
			HX_STACK_LINE(262)
			::nape::shape::ShapeIterator tmp = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(262)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(262)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			if ((tmp2)){
				HX_STACK_LINE(262)
				break;
			}
			HX_STACK_LINE(263)
			::nape::shape::ShapeIterator tmp3 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			::nape::shape::ShapeIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(264)
			::nape::shape::ShapeIterator tmp4 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(264)
			tmp4->zpp_next = null();
			HX_STACK_LINE(265)
			::nape::shape::ShapeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(269)
		while((true)){
			HX_STACK_LINE(269)
			::nape::shape::EdgeIterator tmp = ::nape::shape::EdgeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(269)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(269)
			if ((tmp2)){
				HX_STACK_LINE(269)
				break;
			}
			HX_STACK_LINE(270)
			::nape::shape::EdgeIterator tmp3 = ::nape::shape::EdgeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(270)
			::nape::shape::EdgeIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(271)
			::nape::shape::EdgeIterator tmp4 = ::nape::shape::EdgeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			tmp4->zpp_next = null();
			HX_STACK_LINE(272)
			::nape::shape::EdgeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			::nape::dynamics::ContactIterator tmp = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(276)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(276)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			if ((tmp2)){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(277)
			::nape::dynamics::ContactIterator tmp3 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			::nape::dynamics::ContactIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(278)
			::nape::dynamics::ContactIterator tmp4 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			tmp4->zpp_next = null();
			HX_STACK_LINE(279)
			::nape::dynamics::ContactIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(283)
		while((true)){
			HX_STACK_LINE(283)
			::nape::dynamics::ArbiterIterator tmp = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(283)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			if ((tmp2)){
				HX_STACK_LINE(283)
				break;
			}
			HX_STACK_LINE(284)
			::nape::dynamics::ArbiterIterator tmp3 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			::nape::dynamics::ArbiterIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(285)
			::nape::dynamics::ArbiterIterator tmp4 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(285)
			tmp4->zpp_next = null();
			HX_STACK_LINE(286)
			::nape::dynamics::ArbiterIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(290)
		while((true)){
			HX_STACK_LINE(290)
			::nape::dynamics::InteractionGroupIterator tmp = ::nape::dynamics::InteractionGroupIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(290)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			if ((tmp2)){
				HX_STACK_LINE(290)
				break;
			}
			HX_STACK_LINE(291)
			::nape::dynamics::InteractionGroupIterator tmp3 = ::nape::dynamics::InteractionGroupIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			::nape::dynamics::InteractionGroupIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(292)
			::nape::dynamics::InteractionGroupIterator tmp4 = ::nape::dynamics::InteractionGroupIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(292)
			tmp4->zpp_next = null();
			HX_STACK_LINE(293)
			::nape::dynamics::InteractionGroupIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(298)
		while((true)){
			HX_STACK_LINE(298)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(298)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(298)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			if ((tmp2)){
				HX_STACK_LINE(298)
				break;
			}
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPNode_ZPP_CbType nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(300)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			tmp4->next = null();
			HX_STACK_LINE(301)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(307)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(307)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			if ((tmp2)){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			tmp4->next = null();
			HX_STACK_LINE(310)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(316)
		while((true)){
			HX_STACK_LINE(316)
			::zpp_nape::phys::ZPP_Material tmp = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(316)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(316)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(316)
			if ((tmp2)){
				HX_STACK_LINE(316)
				break;
			}
			HX_STACK_LINE(317)
			::zpp_nape::phys::ZPP_Material tmp3 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(317)
			::zpp_nape::phys::ZPP_Material nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(318)
			::zpp_nape::phys::ZPP_Material tmp4 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			tmp4->next = null();
			HX_STACK_LINE(319)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(325)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(325)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(325)
			if ((tmp2)){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(326)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(326)
			::zpp_nape::util::ZNPNode_ZPP_Shape nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(327)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(327)
			tmp4->next = null();
			HX_STACK_LINE(328)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			::zpp_nape::phys::ZPP_FluidProperties tmp = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(334)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(334)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			if ((tmp2)){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_FluidProperties tmp3 = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_FluidProperties nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(336)
			::zpp_nape::phys::ZPP_FluidProperties tmp4 = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(336)
			tmp4->next = null();
			HX_STACK_LINE(337)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(343)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(343)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(343)
			if ((tmp2)){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(344)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			::zpp_nape::util::ZNPNode_ZPP_Body nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(345)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			tmp4->next = null();
			HX_STACK_LINE(346)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(352)
		while((true)){
			HX_STACK_LINE(352)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(352)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(352)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(352)
			if ((tmp2)){
				HX_STACK_LINE(352)
				break;
			}
			HX_STACK_LINE(353)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(353)
			::zpp_nape::util::ZNPNode_ZPP_Constraint nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(354)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(354)
			tmp4->next = null();
			HX_STACK_LINE(355)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(361)
		while((true)){
			HX_STACK_LINE(361)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(361)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(361)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(361)
			if ((tmp2)){
				HX_STACK_LINE(361)
				break;
			}
			HX_STACK_LINE(362)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(362)
			::zpp_nape::util::ZNPNode_ZPP_Compound nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(363)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(363)
			tmp4->next = null();
			HX_STACK_LINE(364)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(370)
		while((true)){
			HX_STACK_LINE(370)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(370)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(370)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			if ((tmp2)){
				HX_STACK_LINE(370)
				break;
			}
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp3 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbSetPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(372)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp4 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(372)
			tmp4->next = null();
			HX_STACK_LINE(373)
			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(379)
		while((true)){
			HX_STACK_LINE(379)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(379)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(379)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(379)
			if ((tmp2)){
				HX_STACK_LINE(379)
				break;
			}
			HX_STACK_LINE(380)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(380)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(381)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			tmp4->next = null();
			HX_STACK_LINE(382)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(388)
		while((true)){
			HX_STACK_LINE(388)
			::zpp_nape::util::ZNPNode_ZPP_CbSet tmp = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(388)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(388)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(388)
			if ((tmp2)){
				HX_STACK_LINE(388)
				break;
			}
			HX_STACK_LINE(389)
			::zpp_nape::util::ZNPNode_ZPP_CbSet tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			::zpp_nape::util::ZNPNode_ZPP_CbSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(390)
			::zpp_nape::util::ZNPNode_ZPP_CbSet tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			tmp4->next = null();
			HX_STACK_LINE(391)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(397)
		while((true)){
			HX_STACK_LINE(397)
			::zpp_nape::util::ZNPNode_ZPP_Interactor tmp = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(397)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(397)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(397)
			if ((tmp2)){
				HX_STACK_LINE(397)
				break;
			}
			HX_STACK_LINE(398)
			::zpp_nape::util::ZNPNode_ZPP_Interactor tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(398)
			::zpp_nape::util::ZNPNode_ZPP_Interactor nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(399)
			::zpp_nape::util::ZNPNode_ZPP_Interactor tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(399)
			tmp4->next = null();
			HX_STACK_LINE(400)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(406)
		while((true)){
			HX_STACK_LINE(406)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(406)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(406)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(406)
			if ((tmp2)){
				HX_STACK_LINE(406)
				break;
			}
			HX_STACK_LINE(407)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(408)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(408)
			tmp4->next = null();
			HX_STACK_LINE(409)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(415)
		while((true)){
			HX_STACK_LINE(415)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(415)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(415)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			if ((tmp2)){
				HX_STACK_LINE(415)
				break;
			}
			HX_STACK_LINE(416)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(417)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			tmp4->next = null();
			HX_STACK_LINE(418)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(424)
		while((true)){
			HX_STACK_LINE(424)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(424)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(424)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(424)
			if ((tmp2)){
				HX_STACK_LINE(424)
				break;
			}
			HX_STACK_LINE(425)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(425)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(426)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(426)
			tmp4->next = null();
			HX_STACK_LINE(427)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(433)
		while((true)){
			HX_STACK_LINE(433)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(433)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(433)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(433)
			if ((tmp2)){
				HX_STACK_LINE(433)
				break;
			}
			HX_STACK_LINE(434)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(434)
			::zpp_nape::util::ZPP_Set_ZPP_Body nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(435)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(435)
			tmp4->next = null();
			HX_STACK_LINE(436)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(442)
		while((true)){
			HX_STACK_LINE(442)
			::zpp_nape::callbacks::ZPP_CbSet tmp = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(442)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(442)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(442)
			if ((tmp2)){
				HX_STACK_LINE(442)
				break;
			}
			HX_STACK_LINE(443)
			::zpp_nape::callbacks::ZPP_CbSet tmp3 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(443)
			::zpp_nape::callbacks::ZPP_CbSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(444)
			::zpp_nape::callbacks::ZPP_CbSet tmp4 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			tmp4->next = null();
			HX_STACK_LINE(445)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(451)
		while((true)){
			HX_STACK_LINE(451)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair tmp = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(451)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(451)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(451)
			if ((tmp2)){
				HX_STACK_LINE(451)
				break;
			}
			HX_STACK_LINE(452)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(452)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(453)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(453)
			tmp4->next = null();
			HX_STACK_LINE(454)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(460)
		while((true)){
			HX_STACK_LINE(460)
			::zpp_nape::callbacks::ZPP_Callback tmp = ::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(460)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(460)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(460)
			if ((tmp2)){
				HX_STACK_LINE(460)
				break;
			}
			HX_STACK_LINE(461)
			::zpp_nape::callbacks::ZPP_Callback tmp3 = ::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(461)
			::zpp_nape::callbacks::ZPP_Callback nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(462)
			::zpp_nape::callbacks::ZPP_Callback tmp4 = ::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			tmp4->next = null();
			HX_STACK_LINE(463)
			::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(469)
		while((true)){
			HX_STACK_LINE(469)
			::zpp_nape::geom::ZPP_GeomVert tmp = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(469)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(469)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(469)
			if ((tmp2)){
				HX_STACK_LINE(469)
				break;
			}
			HX_STACK_LINE(470)
			::zpp_nape::geom::ZPP_GeomVert tmp3 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(470)
			::zpp_nape::geom::ZPP_GeomVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(471)
			::zpp_nape::geom::ZPP_GeomVert tmp4 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(471)
			tmp4->next = null();
			HX_STACK_LINE(472)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			::zpp_nape::geom::ZPP_GeomVertexIterator tmp = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(478)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(478)
			if ((tmp2)){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(479)
			::zpp_nape::geom::ZPP_GeomVertexIterator tmp3 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(479)
			::zpp_nape::geom::ZPP_GeomVertexIterator nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(480)
			::zpp_nape::geom::ZPP_GeomVertexIterator tmp4 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(480)
			tmp4->next = null();
			HX_STACK_LINE(481)
			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(487)
		while((true)){
			HX_STACK_LINE(487)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(487)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(487)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(487)
			if ((tmp2)){
				HX_STACK_LINE(487)
				break;
			}
			HX_STACK_LINE(488)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(488)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(489)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(489)
			tmp4->next = null();
			HX_STACK_LINE(490)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(496)
		while((true)){
			HX_STACK_LINE(496)
			::zpp_nape::geom::ZPP_Mat23 tmp = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(496)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(496)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(496)
			if ((tmp2)){
				HX_STACK_LINE(496)
				break;
			}
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_Mat23 tmp3 = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_Mat23 nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Mat23 tmp4 = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(498)
			tmp4->next = null();
			HX_STACK_LINE(499)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(505)
		while((true)){
			HX_STACK_LINE(505)
			::zpp_nape::geom::ZPP_CutVert tmp = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(505)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(505)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(505)
			if ((tmp2)){
				HX_STACK_LINE(505)
				break;
			}
			HX_STACK_LINE(506)
			::zpp_nape::geom::ZPP_CutVert tmp3 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(506)
			::zpp_nape::geom::ZPP_CutVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(507)
			::zpp_nape::geom::ZPP_CutVert tmp4 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			tmp4->next = null();
			HX_STACK_LINE(508)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			::zpp_nape::geom::ZPP_CutInt tmp = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(514)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(514)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(514)
			if ((tmp2)){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_CutInt tmp3 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_CutInt nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(516)
			::zpp_nape::geom::ZPP_CutInt tmp4 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(516)
			tmp4->next = null();
			HX_STACK_LINE(517)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(523)
		while((true)){
			HX_STACK_LINE(523)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(523)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(523)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(523)
			if ((tmp2)){
				HX_STACK_LINE(523)
				break;
			}
			HX_STACK_LINE(524)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(524)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(525)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(525)
			tmp4->next = null();
			HX_STACK_LINE(526)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(532)
		while((true)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(532)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(532)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(532)
			if ((tmp2)){
				HX_STACK_LINE(532)
				break;
			}
			HX_STACK_LINE(533)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(533)
			::zpp_nape::util::ZNPNode_ZPP_CutVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(534)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(534)
			tmp4->next = null();
			HX_STACK_LINE(535)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(541)
		while((true)){
			HX_STACK_LINE(541)
			::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(541)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(541)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(541)
			if ((tmp2)){
				HX_STACK_LINE(541)
				break;
			}
			HX_STACK_LINE(542)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(542)
			::zpp_nape::geom::ZPP_Vec2 nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(543)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(543)
			tmp4->next = null();
			HX_STACK_LINE(544)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(550)
		while((true)){
			HX_STACK_LINE(550)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(550)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(550)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(550)
			if ((tmp2)){
				HX_STACK_LINE(550)
				break;
			}
			HX_STACK_LINE(551)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp3 = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(551)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(552)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(552)
			tmp4->next = null();
			HX_STACK_LINE(553)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(559)
		while((true)){
			HX_STACK_LINE(559)
			::zpp_nape::geom::ZPP_PartitionVertex tmp = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(559)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(559)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(559)
			if ((tmp2)){
				HX_STACK_LINE(559)
				break;
			}
			HX_STACK_LINE(560)
			::zpp_nape::geom::ZPP_PartitionVertex tmp3 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(560)
			::zpp_nape::geom::ZPP_PartitionVertex nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(561)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(561)
			tmp4->next = null();
			HX_STACK_LINE(562)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(568)
		while((true)){
			HX_STACK_LINE(568)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(568)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(568)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(568)
			if ((tmp2)){
				HX_STACK_LINE(568)
				break;
			}
			HX_STACK_LINE(569)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(569)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(570)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(570)
			tmp4->next = null();
			HX_STACK_LINE(571)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(577)
		while((true)){
			HX_STACK_LINE(577)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(577)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(577)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(577)
			if ((tmp2)){
				HX_STACK_LINE(577)
				break;
			}
			HX_STACK_LINE(578)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp3 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(578)
			::zpp_nape::geom::ZPP_PartitionedPoly nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(579)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp4 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			tmp4->next = null();
			HX_STACK_LINE(580)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(586)
		while((true)){
			HX_STACK_LINE(586)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(586)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(586)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(586)
			if ((tmp2)){
				HX_STACK_LINE(586)
				break;
			}
			HX_STACK_LINE(587)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(587)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(588)
			tmp4->next = null();
			HX_STACK_LINE(589)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(595)
		while((true)){
			HX_STACK_LINE(595)
			::zpp_nape::geom::ZPP_PartitionPair tmp = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(595)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(595)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(595)
			if ((tmp2)){
				HX_STACK_LINE(595)
				break;
			}
			HX_STACK_LINE(596)
			::zpp_nape::geom::ZPP_PartitionPair tmp3 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(596)
			::zpp_nape::geom::ZPP_PartitionPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_PartitionPair tmp4 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(597)
			tmp4->next = null();
			HX_STACK_LINE(598)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(604)
		while((true)){
			HX_STACK_LINE(604)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(604)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(604)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(604)
			if ((tmp2)){
				HX_STACK_LINE(604)
				break;
			}
			HX_STACK_LINE(605)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(605)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(606)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(606)
			tmp4->next = null();
			HX_STACK_LINE(607)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(613)
		while((true)){
			HX_STACK_LINE(613)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(613)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(613)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(613)
			if ((tmp2)){
				HX_STACK_LINE(613)
				break;
			}
			HX_STACK_LINE(614)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(614)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(615)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(615)
			tmp4->next = null();
			HX_STACK_LINE(616)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(622)
		while((true)){
			HX_STACK_LINE(622)
			::zpp_nape::geom::ZPP_SimplifyV tmp = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(622)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(622)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(622)
			if ((tmp2)){
				HX_STACK_LINE(622)
				break;
			}
			HX_STACK_LINE(623)
			::zpp_nape::geom::ZPP_SimplifyV tmp3 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(623)
			::zpp_nape::geom::ZPP_SimplifyV nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(624)
			::zpp_nape::geom::ZPP_SimplifyV tmp4 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(624)
			tmp4->next = null();
			HX_STACK_LINE(625)
			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(631)
		while((true)){
			HX_STACK_LINE(631)
			::zpp_nape::geom::ZPP_SimplifyP tmp = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(631)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(631)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(631)
			if ((tmp2)){
				HX_STACK_LINE(631)
				break;
			}
			HX_STACK_LINE(632)
			::zpp_nape::geom::ZPP_SimplifyP tmp3 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(632)
			::zpp_nape::geom::ZPP_SimplifyP nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(633)
			::zpp_nape::geom::ZPP_SimplifyP tmp4 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(633)
			tmp4->next = null();
			HX_STACK_LINE(634)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(640)
		while((true)){
			HX_STACK_LINE(640)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(640)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(640)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(640)
			if ((tmp2)){
				HX_STACK_LINE(640)
				break;
			}
			HX_STACK_LINE(641)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(641)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(642)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(642)
			tmp4->next = null();
			HX_STACK_LINE(643)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(649)
		while((true)){
			HX_STACK_LINE(649)
			::zpp_nape::geom::ZPP_AABB tmp = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(649)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(649)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(649)
			if ((tmp2)){
				HX_STACK_LINE(649)
				break;
			}
			HX_STACK_LINE(650)
			::zpp_nape::geom::ZPP_AABB tmp3 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(650)
			::zpp_nape::geom::ZPP_AABB nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(651)
			::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(651)
			tmp4->next = null();
			HX_STACK_LINE(652)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(658)
		while((true)){
			HX_STACK_LINE(658)
			::zpp_nape::geom::ZPP_ToiEvent tmp = ::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(658)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(658)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(658)
			if ((tmp2)){
				HX_STACK_LINE(658)
				break;
			}
			HX_STACK_LINE(659)
			::zpp_nape::geom::ZPP_ToiEvent tmp3 = ::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(659)
			::zpp_nape::geom::ZPP_ToiEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(660)
			::zpp_nape::geom::ZPP_ToiEvent tmp4 = ::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(660)
			tmp4->next = null();
			HX_STACK_LINE(661)
			::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(667)
		while((true)){
			HX_STACK_LINE(667)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(667)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(667)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(667)
			if ((tmp2)){
				HX_STACK_LINE(667)
				break;
			}
			HX_STACK_LINE(668)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(668)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(669)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(669)
			tmp4->next = null();
			HX_STACK_LINE(670)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(676)
		while((true)){
			HX_STACK_LINE(676)
			::zpp_nape::geom::ZPP_SimpleVert tmp = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(676)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(676)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(676)
			if ((tmp2)){
				HX_STACK_LINE(676)
				break;
			}
			HX_STACK_LINE(677)
			::zpp_nape::geom::ZPP_SimpleVert tmp3 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(677)
			::zpp_nape::geom::ZPP_SimpleVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(678)
			::zpp_nape::geom::ZPP_SimpleVert tmp4 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(678)
			tmp4->next = null();
			HX_STACK_LINE(679)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(685)
		while((true)){
			HX_STACK_LINE(685)
			::zpp_nape::geom::ZPP_SimpleSeg tmp = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(685)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(685)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(685)
			if ((tmp2)){
				HX_STACK_LINE(685)
				break;
			}
			HX_STACK_LINE(686)
			::zpp_nape::geom::ZPP_SimpleSeg tmp3 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(686)
			::zpp_nape::geom::ZPP_SimpleSeg nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(687)
			::zpp_nape::geom::ZPP_SimpleSeg tmp4 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(687)
			tmp4->next = null();
			HX_STACK_LINE(688)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(694)
		while((true)){
			HX_STACK_LINE(694)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(694)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(694)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(694)
			if ((tmp2)){
				HX_STACK_LINE(694)
				break;
			}
			HX_STACK_LINE(695)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(695)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(696)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(696)
			tmp4->next = null();
			HX_STACK_LINE(697)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(703)
		while((true)){
			HX_STACK_LINE(703)
			::zpp_nape::geom::ZPP_MarchSpan tmp = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(703)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(703)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(703)
			if ((tmp2)){
				HX_STACK_LINE(703)
				break;
			}
			HX_STACK_LINE(704)
			::zpp_nape::geom::ZPP_MarchSpan tmp3 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			::zpp_nape::geom::ZPP_MarchSpan nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(705)
			::zpp_nape::geom::ZPP_MarchSpan tmp4 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(705)
			tmp4->next = null();
			HX_STACK_LINE(706)
			::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(712)
		while((true)){
			HX_STACK_LINE(712)
			::zpp_nape::geom::ZPP_MarchPair tmp = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(712)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(712)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(712)
			if ((tmp2)){
				HX_STACK_LINE(712)
				break;
			}
			HX_STACK_LINE(713)
			::zpp_nape::geom::ZPP_MarchPair tmp3 = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(713)
			::zpp_nape::geom::ZPP_MarchPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(714)
			::zpp_nape::geom::ZPP_MarchPair tmp4 = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(714)
			tmp4->next = null();
			HX_STACK_LINE(715)
			::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(721)
		while((true)){
			HX_STACK_LINE(721)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(721)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(721)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(721)
			if ((tmp2)){
				HX_STACK_LINE(721)
				break;
			}
			HX_STACK_LINE(722)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(722)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(723)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			tmp4->next = null();
			HX_STACK_LINE(724)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(730)
		while((true)){
			HX_STACK_LINE(730)
			::zpp_nape::geom::ZPP_SimpleEvent tmp = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(730)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(730)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(730)
			if ((tmp2)){
				HX_STACK_LINE(730)
				break;
			}
			HX_STACK_LINE(731)
			::zpp_nape::geom::ZPP_SimpleEvent tmp3 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(731)
			::zpp_nape::geom::ZPP_SimpleEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(732)
			::zpp_nape::geom::ZPP_SimpleEvent tmp4 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(732)
			tmp4->next = null();
			HX_STACK_LINE(733)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(739)
		while((true)){
			HX_STACK_LINE(739)
			::zpp_nape::util::Hashable2_Boolfalse tmp = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(739)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(739)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(739)
			if ((tmp2)){
				HX_STACK_LINE(739)
				break;
			}
			HX_STACK_LINE(740)
			::zpp_nape::util::Hashable2_Boolfalse tmp3 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(740)
			::zpp_nape::util::Hashable2_Boolfalse nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(741)
			::zpp_nape::util::Hashable2_Boolfalse tmp4 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(741)
			tmp4->next = null();
			HX_STACK_LINE(742)
			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(748)
		while((true)){
			HX_STACK_LINE(748)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(748)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(748)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(748)
			if ((tmp2)){
				HX_STACK_LINE(748)
				break;
			}
			HX_STACK_LINE(749)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(749)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(750)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(750)
			tmp4->next = null();
			HX_STACK_LINE(751)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(757)
		while((true)){
			HX_STACK_LINE(757)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(757)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(757)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(757)
			if ((tmp2)){
				HX_STACK_LINE(757)
				break;
			}
			HX_STACK_LINE(758)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(758)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(759)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(759)
			tmp4->next = null();
			HX_STACK_LINE(760)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(766)
		while((true)){
			HX_STACK_LINE(766)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(766)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(766)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(766)
			if ((tmp2)){
				HX_STACK_LINE(766)
				break;
			}
			HX_STACK_LINE(767)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(767)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(768)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(768)
			tmp4->next = null();
			HX_STACK_LINE(769)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(775)
		while((true)){
			HX_STACK_LINE(775)
			::zpp_nape::shape::ZPP_Edge tmp = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(775)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(775)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(775)
			if ((tmp2)){
				HX_STACK_LINE(775)
				break;
			}
			HX_STACK_LINE(776)
			::zpp_nape::shape::ZPP_Edge tmp3 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(776)
			::zpp_nape::shape::ZPP_Edge nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(777)
			::zpp_nape::shape::ZPP_Edge tmp4 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(777)
			tmp4->next = null();
			HX_STACK_LINE(778)
			::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(784)
		while((true)){
			HX_STACK_LINE(784)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(784)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(784)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(784)
			if ((tmp2)){
				HX_STACK_LINE(784)
				break;
			}
			HX_STACK_LINE(785)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(785)
			::zpp_nape::util::ZNPNode_ZPP_Edge nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(786)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(786)
			tmp4->next = null();
			HX_STACK_LINE(787)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(793)
		while((true)){
			HX_STACK_LINE(793)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(793)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(793)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(793)
			if ((tmp2)){
				HX_STACK_LINE(793)
				break;
			}
			HX_STACK_LINE(794)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(794)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(795)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(795)
			tmp4->next = null();
			HX_STACK_LINE(796)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(802)
		while((true)){
			HX_STACK_LINE(802)
			::zpp_nape::space::ZPP_SweepData tmp = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(802)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(802)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(802)
			if ((tmp2)){
				HX_STACK_LINE(802)
				break;
			}
			HX_STACK_LINE(803)
			::zpp_nape::space::ZPP_SweepData tmp3 = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(803)
			::zpp_nape::space::ZPP_SweepData nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(804)
			::zpp_nape::space::ZPP_SweepData tmp4 = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(804)
			tmp4->next = null();
			HX_STACK_LINE(805)
			::zpp_nape::space::ZPP_SweepData_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(811)
		while((true)){
			HX_STACK_LINE(811)
			::zpp_nape::space::ZPP_AABBNode tmp = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(811)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(811)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(811)
			if ((tmp2)){
				HX_STACK_LINE(811)
				break;
			}
			HX_STACK_LINE(812)
			::zpp_nape::space::ZPP_AABBNode tmp3 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(812)
			::zpp_nape::space::ZPP_AABBNode nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(813)
			::zpp_nape::space::ZPP_AABBNode tmp4 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(813)
			tmp4->next = null();
			HX_STACK_LINE(814)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(820)
		while((true)){
			HX_STACK_LINE(820)
			::zpp_nape::space::ZPP_AABBPair tmp = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(820)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(820)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(820)
			if ((tmp2)){
				HX_STACK_LINE(820)
				break;
			}
			HX_STACK_LINE(821)
			::zpp_nape::space::ZPP_AABBPair tmp3 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(821)
			::zpp_nape::space::ZPP_AABBPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(822)
			::zpp_nape::space::ZPP_AABBPair tmp4 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(822)
			tmp4->next = null();
			HX_STACK_LINE(823)
			::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(829)
		while((true)){
			HX_STACK_LINE(829)
			::zpp_nape::dynamics::ZPP_Contact tmp = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(829)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(829)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(829)
			if ((tmp2)){
				HX_STACK_LINE(829)
				break;
			}
			HX_STACK_LINE(830)
			::zpp_nape::dynamics::ZPP_Contact tmp3 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(830)
			::zpp_nape::dynamics::ZPP_Contact nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(831)
			::zpp_nape::dynamics::ZPP_Contact tmp4 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(831)
			tmp4->next = null();
			HX_STACK_LINE(832)
			::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(838)
		while((true)){
			HX_STACK_LINE(838)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(838)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(838)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(838)
			if ((tmp2)){
				HX_STACK_LINE(838)
				break;
			}
			HX_STACK_LINE(839)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(839)
			::zpp_nape::util::ZNPNode_ZPP_Component nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(840)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(840)
			tmp4->next = null();
			HX_STACK_LINE(841)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(847)
		while((true)){
			HX_STACK_LINE(847)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(847)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(847)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(847)
			if ((tmp2)){
				HX_STACK_LINE(847)
				break;
			}
			HX_STACK_LINE(848)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(848)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(849)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(849)
			tmp4->next = null();
			HX_STACK_LINE(850)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(856)
		while((true)){
			HX_STACK_LINE(856)
			::zpp_nape::space::ZPP_Island tmp = ::zpp_nape::space::ZPP_Island_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(856)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(856)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(856)
			if ((tmp2)){
				HX_STACK_LINE(856)
				break;
			}
			HX_STACK_LINE(857)
			::zpp_nape::space::ZPP_Island tmp3 = ::zpp_nape::space::ZPP_Island_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(857)
			::zpp_nape::space::ZPP_Island nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(858)
			::zpp_nape::space::ZPP_Island tmp4 = ::zpp_nape::space::ZPP_Island_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(858)
			tmp4->next = null();
			HX_STACK_LINE(859)
			::zpp_nape::space::ZPP_Island_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(865)
		while((true)){
			HX_STACK_LINE(865)
			::zpp_nape::space::ZPP_Component tmp = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(865)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(865)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(865)
			if ((tmp2)){
				HX_STACK_LINE(865)
				break;
			}
			HX_STACK_LINE(866)
			::zpp_nape::space::ZPP_Component tmp3 = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(866)
			::zpp_nape::space::ZPP_Component nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(867)
			::zpp_nape::space::ZPP_Component tmp4 = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(867)
			tmp4->next = null();
			HX_STACK_LINE(868)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(874)
		while((true)){
			HX_STACK_LINE(874)
			::zpp_nape::space::ZPP_CallbackSet tmp = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(874)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(874)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(874)
			if ((tmp2)){
				HX_STACK_LINE(874)
				break;
			}
			HX_STACK_LINE(875)
			::zpp_nape::space::ZPP_CallbackSet tmp3 = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(875)
			::zpp_nape::space::ZPP_CallbackSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(876)
			::zpp_nape::space::ZPP_CallbackSet tmp4 = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(876)
			tmp4->next = null();
			HX_STACK_LINE(877)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(883)
		while((true)){
			HX_STACK_LINE(883)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(883)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(883)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(883)
			if ((tmp2)){
				HX_STACK_LINE(883)
				break;
			}
			HX_STACK_LINE(884)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(884)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(885)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(885)
			tmp4->next = null();
			HX_STACK_LINE(886)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(892)
		while((true)){
			HX_STACK_LINE(892)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(892)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(892)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(892)
			if ((tmp2)){
				HX_STACK_LINE(892)
				break;
			}
			HX_STACK_LINE(893)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(893)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(894)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(894)
			tmp4->next = null();
			HX_STACK_LINE(895)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(901)
		while((true)){
			HX_STACK_LINE(901)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(901)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(901)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(901)
			if ((tmp2)){
				HX_STACK_LINE(901)
				break;
			}
			HX_STACK_LINE(902)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(902)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(903)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(903)
			tmp4->next = null();
			HX_STACK_LINE(904)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(910)
		while((true)){
			HX_STACK_LINE(910)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(910)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(910)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(910)
			if ((tmp2)){
				HX_STACK_LINE(910)
				break;
			}
			HX_STACK_LINE(911)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp3 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(911)
			::zpp_nape::dynamics::ZPP_InteractionFilter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(912)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(912)
			tmp4->next = null();
			HX_STACK_LINE(913)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(919)
		while((true)){
			HX_STACK_LINE(919)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(919)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(919)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(919)
			if ((tmp2)){
				HX_STACK_LINE(919)
				break;
			}
			HX_STACK_LINE(920)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(920)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(921)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(921)
			tmp4->next = null();
			HX_STACK_LINE(922)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(928)
		while((true)){
			HX_STACK_LINE(928)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(928)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(928)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(928)
			if ((tmp2)){
				HX_STACK_LINE(928)
				break;
			}
			HX_STACK_LINE(929)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(929)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(930)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(930)
			tmp4->next = null();
			HX_STACK_LINE(931)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(937)
		while((true)){
			HX_STACK_LINE(937)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(937)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(937)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(937)
			if ((tmp2)){
				HX_STACK_LINE(937)
				break;
			}
			HX_STACK_LINE(938)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(938)
			::zpp_nape::util::ZNPNode_ZPP_Listener nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(939)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(939)
			tmp4->next = null();
			HX_STACK_LINE(940)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(946)
		while((true)){
			HX_STACK_LINE(946)
			::zpp_nape::dynamics::ZPP_SensorArbiter tmp = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(946)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(946)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(946)
			if ((tmp2)){
				HX_STACK_LINE(946)
				break;
			}
			HX_STACK_LINE(947)
			::zpp_nape::dynamics::ZPP_SensorArbiter tmp3 = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(947)
			::zpp_nape::dynamics::ZPP_SensorArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(948)
			::zpp_nape::dynamics::ZPP_SensorArbiter tmp4 = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(948)
			tmp4->next = null();
			HX_STACK_LINE(949)
			::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(955)
		while((true)){
			HX_STACK_LINE(955)
			::zpp_nape::dynamics::ZPP_FluidArbiter tmp = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(955)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(955)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(955)
			if ((tmp2)){
				HX_STACK_LINE(955)
				break;
			}
			HX_STACK_LINE(956)
			::zpp_nape::dynamics::ZPP_FluidArbiter tmp3 = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(956)
			::zpp_nape::dynamics::ZPP_FluidArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(957)
			::zpp_nape::dynamics::ZPP_FluidArbiter tmp4 = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(957)
			tmp4->next = null();
			HX_STACK_LINE(958)
			::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(964)
		while((true)){
			HX_STACK_LINE(964)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(964)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(964)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(964)
			if ((tmp2)){
				HX_STACK_LINE(964)
				break;
			}
			HX_STACK_LINE(965)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(965)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(966)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(966)
			tmp4->next = null();
			HX_STACK_LINE(967)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(973)
		while((true)){
			HX_STACK_LINE(973)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(973)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(973)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(973)
			if ((tmp2)){
				HX_STACK_LINE(973)
				break;
			}
			HX_STACK_LINE(974)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp3 = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(974)
			::zpp_nape::dynamics::ZPP_ColArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(975)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp4 = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(975)
			tmp4->next = null();
			HX_STACK_LINE(976)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(982)
		while((true)){
			HX_STACK_LINE(982)
			::zpp_nape::util::ZNPNode_ConvexResult tmp = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(982)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(982)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(982)
			if ((tmp2)){
				HX_STACK_LINE(982)
				break;
			}
			HX_STACK_LINE(983)
			::zpp_nape::util::ZNPNode_ConvexResult tmp3 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(983)
			::zpp_nape::util::ZNPNode_ConvexResult nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(984)
			::zpp_nape::util::ZNPNode_ConvexResult tmp4 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(984)
			tmp4->next = null();
			HX_STACK_LINE(985)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(991)
		while((true)){
			HX_STACK_LINE(991)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(991)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(991)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(991)
			if ((tmp2)){
				HX_STACK_LINE(991)
				break;
			}
			HX_STACK_LINE(992)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(992)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(993)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(993)
			tmp4->next = null();
			HX_STACK_LINE(994)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(1000)
		while((true)){
			HX_STACK_LINE(1000)
			::zpp_nape::util::ZNPNode_RayResult tmp = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1000)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1000)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1000)
			if ((tmp2)){
				HX_STACK_LINE(1000)
				break;
			}
			HX_STACK_LINE(1001)
			::zpp_nape::util::ZNPNode_RayResult tmp3 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1001)
			::zpp_nape::util::ZNPNode_RayResult nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1002)
			::zpp_nape::util::ZNPNode_RayResult tmp4 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1002)
			tmp4->next = null();
			HX_STACK_LINE(1003)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(1010)
		while((true)){
			HX_STACK_LINE(1010)
			::nape::geom::GeomPoly tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1010)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1010)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1010)
			if ((tmp2)){
				HX_STACK_LINE(1010)
				break;
			}
			HX_STACK_LINE(1011)
			::nape::geom::GeomPoly tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1011)
			::nape::geom::GeomPoly nxt = tmp3->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1012)
			::nape::geom::GeomPoly tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1012)
			tmp4->zpp_pool = null();
			HX_STACK_LINE(1013)
			::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly = nxt;
		}
		HX_STACK_LINE(1019)
		while((true)){
			HX_STACK_LINE(1019)
			::nape::geom::Vec2 tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1019)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1019)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1019)
			if ((tmp2)){
				HX_STACK_LINE(1019)
				break;
			}
			HX_STACK_LINE(1020)
			::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1020)
			::nape::geom::Vec2 nxt = tmp3->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1021)
			::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1021)
			tmp4->zpp_pool = null();
			HX_STACK_LINE(1022)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = nxt;
		}
		HX_STACK_LINE(1028)
		while((true)){
			HX_STACK_LINE(1028)
			::nape::geom::Vec3 tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1028)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1028)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1028)
			if ((tmp2)){
				HX_STACK_LINE(1028)
				break;
			}
			HX_STACK_LINE(1029)
			::nape::geom::Vec3 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1029)
			::nape::geom::Vec3 nxt = tmp3->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1030)
			::nape::geom::Vec3 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1030)
			tmp4->zpp_pool = null();
			HX_STACK_LINE(1031)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = nxt;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clearObjectPools,(void))


Debug_obj::Debug_obj()
{
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearObjectPools") ) { outValue = clearObjectPools_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("clearObjectPools","\x4b","\x84","\x4d","\x7f"),
	::String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.util.Debug","\x8d","\x4a","\x62","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace util
