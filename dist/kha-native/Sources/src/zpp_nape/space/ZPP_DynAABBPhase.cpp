#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBTree
#include <zpp_nape/space/ZPP_AABBTree.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_DynAABBPhase
#include <zpp_nape/space/ZPP_DynAABBPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_DynAABBPhase_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","new",0x58f75962,"zpp_nape.space.ZPP_DynAABBPhase.new","zpp_nape/space/DynAABBPhase.hx",694,0x55500cf1)
HX_STACK_THIS(this)
HX_STACK_ARG(space,"space")
{
	HX_STACK_LINE(2820)
	this->openlist = null();
	HX_STACK_LINE(2276)
	this->failed = null();
	HX_STACK_LINE(2132)
	this->treeStack2 = null();
	HX_STACK_LINE(1931)
	this->treeStack = null();
	HX_STACK_LINE(703)
	this->moves = null();
	HX_STACK_LINE(702)
	this->syncs = null();
	HX_STACK_LINE(701)
	this->pairs = null();
	HX_STACK_LINE(700)
	this->dtree = null();
	HX_STACK_LINE(699)
	this->stree = null();
	HX_STACK_LINE(704)
	super::__construct();
	HX_STACK_LINE(705)
	this->space = space;
	HX_STACK_LINE(706)
	this->is_sweep = false;
	HX_STACK_LINE(707)
	this->dynab = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(708)
	::zpp_nape::space::ZPP_AABBTree tmp = ::zpp_nape::space::ZPP_AABBTree_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(708)
	this->stree = tmp;
	HX_STACK_LINE(709)
	::zpp_nape::space::ZPP_AABBTree tmp1 = ::zpp_nape::space::ZPP_AABBTree_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(709)
	this->dtree = tmp1;
}
;
	return null();
}

//ZPP_DynAABBPhase_obj::~ZPP_DynAABBPhase_obj() { }

Dynamic ZPP_DynAABBPhase_obj::__CreateEmpty() { return  new ZPP_DynAABBPhase_obj; }
hx::ObjectPtr< ZPP_DynAABBPhase_obj > ZPP_DynAABBPhase_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_DynAABBPhase_obj > _result_ = new ZPP_DynAABBPhase_obj();
	_result_->__construct(space);
	return _result_;}

Dynamic ZPP_DynAABBPhase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_DynAABBPhase_obj > _result_ = new ZPP_DynAABBPhase_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool ZPP_DynAABBPhase_obj::dyn( ::zpp_nape::shape::ZPP_Shape shape){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","dyn",0x58efd43b,"zpp_nape.space.ZPP_DynAABBPhase.dyn","zpp_nape/space/DynAABBPhase.hx",713,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_LINE(714)
	int tmp = shape->body->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(714)
	int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(714)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(714)
	if ((tmp2)){
		HX_STACK_LINE(714)
		return false;
	}
	else{
		HX_STACK_LINE(715)
		::zpp_nape::space::ZPP_Component tmp3 = shape->body->component;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(715)
		bool tmp4 = tmp3->sleeping;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(715)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(715)
		return tmp5;
	}
	HX_STACK_LINE(714)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,dyn,return )

Void ZPP_DynAABBPhase_obj::__insert( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","__insert",0x6faf3e17,"zpp_nape.space.ZPP_DynAABBPhase.__insert","zpp_nape/space/DynAABBPhase.hx",717,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(734)
		::zpp_nape::space::ZPP_AABBNode node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(735)
		{
			HX_STACK_LINE(736)
			::zpp_nape::space::ZPP_AABBNode tmp = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(736)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(736)
			if ((tmp1)){
				HX_STACK_LINE(737)
				::zpp_nape::space::ZPP_AABBNode tmp2 = ::zpp_nape::space::ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(737)
				node = tmp2;
			}
			else{
				HX_STACK_LINE(743)
				::zpp_nape::space::ZPP_AABBNode tmp2 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(743)
				node = tmp2;
				HX_STACK_LINE(744)
				::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = node->next;
				HX_STACK_LINE(745)
				node->next = null();
			}
			HX_STACK_LINE(750)
			{
				HX_STACK_LINE(750)
				{
					HX_STACK_LINE(750)
					::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(750)
					bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(750)
					if ((tmp3)){
						HX_STACK_LINE(750)
						::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(750)
						node->aabb = tmp4;
					}
					else{
						HX_STACK_LINE(750)
						::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(750)
						node->aabb = tmp4;
						HX_STACK_LINE(750)
						::zpp_nape::geom::ZPP_AABB tmp5 = node->aabb->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(750)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = tmp5;
						HX_STACK_LINE(750)
						node->aabb->next = null();
					}
					HX_STACK_LINE(750)
					Dynamic();
				}
				HX_STACK_LINE(750)
				node->moved = false;
				HX_STACK_LINE(750)
				node->synced = false;
				HX_STACK_LINE(750)
				node->first_sync = false;
			}
		}
		HX_STACK_LINE(752)
		node->shape = shape;
		HX_STACK_LINE(753)
		shape->node = node;
		HX_STACK_LINE(762)
		node->synced = true;
		HX_STACK_LINE(763)
		node->first_sync = true;
		HX_STACK_LINE(764)
		{
			HX_STACK_LINE(773)
			::zpp_nape::space::ZPP_AABBNode tmp = this->syncs;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(773)
			node->snext = tmp;
			HX_STACK_LINE(774)
			this->syncs = node;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__insert,(void))

Void ZPP_DynAABBPhase_obj::__remove( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","__remove",0xd65a9722,"zpp_nape.space.ZPP_DynAABBPhase.__remove","zpp_nape/space/DynAABBPhase.hx",777,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(794)
		::zpp_nape::space::ZPP_AABBNode node = shape->node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(795)
		bool tmp = node->first_sync;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(795)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(795)
		if ((tmp1)){
			HX_STACK_LINE(796)
			bool tmp2 = node->dyn;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(796)
			if ((tmp2)){
				HX_STACK_LINE(796)
				::zpp_nape::space::ZPP_AABBTree tmp3 = this->dtree;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(796)
				::zpp_nape::space::ZPP_AABBNode tmp4 = node;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(796)
				tmp3->removeLeaf(tmp4);
			}
			else{
				HX_STACK_LINE(797)
				::zpp_nape::space::ZPP_AABBTree tmp3 = this->stree;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(797)
				::zpp_nape::space::ZPP_AABBNode tmp4 = node;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(797)
				tmp3->removeLeaf(tmp4);
			}
		}
		HX_STACK_LINE(799)
		shape->node = null();
		HX_STACK_LINE(800)
		bool tmp2 = node->synced;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(800)
		if ((tmp2)){
			HX_STACK_LINE(801)
			{
				HX_STACK_LINE(802)
				::zpp_nape::space::ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(803)
				::zpp_nape::space::ZPP_AABBNode tmp3 = this->syncs;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(803)
				::zpp_nape::space::ZPP_AABBNode cur = tmp3;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(804)
				while((true)){
					HX_STACK_LINE(804)
					bool tmp4 = (cur != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(804)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(804)
					if ((tmp5)){
						HX_STACK_LINE(804)
						break;
					}
					HX_STACK_LINE(805)
					bool tmp6 = (cur == node);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(805)
					if ((tmp6)){
						HX_STACK_LINE(805)
						break;
					}
					HX_STACK_LINE(806)
					pre = cur;
					HX_STACK_LINE(807)
					cur = cur->snext;
				}
				HX_STACK_LINE(809)
				{
					HX_STACK_LINE(818)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(818)
					if ((tmp4)){
						HX_STACK_LINE(818)
						this->syncs = cur->snext;
					}
					else{
						HX_STACK_LINE(819)
						pre->snext = cur->snext;
					}
					HX_STACK_LINE(820)
					cur->snext = null();
				}
			}
			HX_STACK_LINE(823)
			node->synced = false;
		}
		HX_STACK_LINE(825)
		bool tmp3 = node->moved;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(825)
		if ((tmp3)){
			HX_STACK_LINE(826)
			{
				HX_STACK_LINE(827)
				::zpp_nape::space::ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(828)
				::zpp_nape::space::ZPP_AABBNode tmp4 = this->moves;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(828)
				::zpp_nape::space::ZPP_AABBNode cur = tmp4;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(829)
				while((true)){
					HX_STACK_LINE(829)
					bool tmp5 = (cur != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(829)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(829)
					if ((tmp6)){
						HX_STACK_LINE(829)
						break;
					}
					HX_STACK_LINE(830)
					bool tmp7 = (cur == node);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(830)
					if ((tmp7)){
						HX_STACK_LINE(830)
						break;
					}
					HX_STACK_LINE(831)
					pre = cur;
					HX_STACK_LINE(832)
					cur = cur->mnext;
				}
				HX_STACK_LINE(834)
				{
					HX_STACK_LINE(843)
					bool tmp5 = (pre == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(843)
					if ((tmp5)){
						HX_STACK_LINE(843)
						this->moves = cur->mnext;
					}
					else{
						HX_STACK_LINE(844)
						pre->mnext = cur->mnext;
					}
					HX_STACK_LINE(845)
					cur->mnext = null();
				}
			}
			HX_STACK_LINE(848)
			node->moved = false;
		}
		HX_STACK_LINE(850)
		Dynamic pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(851)
		::zpp_nape::space::ZPP_AABBPair tmp4 = this->pairs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(851)
		::zpp_nape::space::ZPP_AABBPair cur = tmp4;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(852)
		while((true)){
			HX_STACK_LINE(852)
			bool tmp5 = (cur != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(852)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(852)
			if ((tmp6)){
				HX_STACK_LINE(852)
				break;
			}
			HX_STACK_LINE(861)
			::zpp_nape::space::ZPP_AABBPair nxt = cur->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(862)
			bool tmp7 = (cur->n1 == node);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(862)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(862)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(862)
			if ((tmp8)){
				HX_STACK_LINE(862)
				tmp9 = (cur->n2 == node);
			}
			else{
				HX_STACK_LINE(862)
				tmp9 = true;
			}
			HX_STACK_LINE(862)
			if ((tmp9)){
				HX_STACK_LINE(863)
				bool tmp10 = (pre == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(863)
				if ((tmp10)){
					HX_STACK_LINE(863)
					this->pairs = nxt;
				}
				else{
					HX_STACK_LINE(864)
					pre->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = nxt;
				}
				HX_STACK_LINE(865)
				bool tmp11 = (cur->arb != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(865)
				if ((tmp11)){
					HX_STACK_LINE(865)
					cur->arb->pair = null();
				}
				HX_STACK_LINE(866)
				cur->arb = null();
				HX_STACK_LINE(867)
				::zpp_nape::shape::ZPP_Shape tmp12 = cur->n1->shape;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(867)
				::zpp_nape::space::ZPP_AABBPair tmp13 = cur;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(867)
				tmp12->pairs->remove(tmp13);
				HX_STACK_LINE(868)
				::zpp_nape::shape::ZPP_Shape tmp14 = cur->n2->shape;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(868)
				::zpp_nape::space::ZPP_AABBPair tmp15 = cur;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(868)
				tmp14->pairs->remove(tmp15);
				HX_STACK_LINE(869)
				{
					HX_STACK_LINE(870)
					::zpp_nape::space::ZPP_AABBPair o = cur;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(879)
					{
						HX_STACK_LINE(879)
						::zpp_nape::space::ZPP_AABBNode tmp16 = o->n2 = null();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(879)
						o->n1 = tmp16;
						HX_STACK_LINE(879)
						o->sleeping = false;
					}
					HX_STACK_LINE(880)
					::zpp_nape::space::ZPP_AABBPair tmp16 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(880)
					o->next = tmp16;
					HX_STACK_LINE(881)
					::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(886)
				cur = nxt;
				HX_STACK_LINE(887)
				continue;
			}
			HX_STACK_LINE(889)
			pre = cur;
			HX_STACK_LINE(890)
			cur = nxt;
		}
		HX_STACK_LINE(892)
		while((true)){
			HX_STACK_LINE(892)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = shape->pairs->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(892)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(892)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(892)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(892)
			if ((tmp8)){
				HX_STACK_LINE(892)
				break;
			}
			HX_STACK_LINE(893)
			::zpp_nape::space::ZPP_AABBPair tmp9 = shape->pairs->pop_unsafe();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(893)
			::zpp_nape::space::ZPP_AABBPair cur1 = tmp9;		HX_STACK_VAR(cur1,"cur1");
			HX_STACK_LINE(902)
			bool tmp10 = (cur1->n1 == node);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(902)
			if ((tmp10)){
				HX_STACK_LINE(902)
				::zpp_nape::shape::ZPP_Shape tmp11 = cur1->n2->shape;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(902)
				::zpp_nape::space::ZPP_AABBPair tmp12 = cur1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(902)
				tmp11->pairs->remove(tmp12);
			}
			else{
				HX_STACK_LINE(903)
				::zpp_nape::shape::ZPP_Shape tmp11 = cur1->n1->shape;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(903)
				::zpp_nape::space::ZPP_AABBPair tmp12 = cur1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(903)
				tmp11->pairs->remove(tmp12);
			}
			HX_STACK_LINE(904)
			bool tmp11 = (cur1->arb != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(904)
			if ((tmp11)){
				HX_STACK_LINE(904)
				cur1->arb->pair = null();
			}
			HX_STACK_LINE(905)
			cur1->arb = null();
			HX_STACK_LINE(906)
			{
				HX_STACK_LINE(907)
				::zpp_nape::space::ZPP_AABBPair o = cur1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(916)
				{
					HX_STACK_LINE(916)
					::zpp_nape::space::ZPP_AABBNode tmp12 = o->n2 = null();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(916)
					o->n1 = tmp12;
					HX_STACK_LINE(916)
					o->sleeping = false;
				}
				HX_STACK_LINE(917)
				::zpp_nape::space::ZPP_AABBPair tmp12 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(917)
				o->next = tmp12;
				HX_STACK_LINE(918)
				::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(924)
		{
			HX_STACK_LINE(925)
			::zpp_nape::space::ZPP_AABBNode o = node;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(934)
			{
				HX_STACK_LINE(934)
				o->height = (int)-1;
				HX_STACK_LINE(934)
				{
					HX_STACK_LINE(934)
					::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
					HX_STACK_LINE(934)
					{
						HX_STACK_LINE(934)
						bool tmp5 = (o1->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(934)
						if ((tmp5)){
							HX_STACK_LINE(934)
							o1->outer->zpp_inner = null();
							HX_STACK_LINE(934)
							o1->outer = null();
						}
						HX_STACK_LINE(934)
						::nape::geom::Vec2 tmp6 = o1->wrap_max = null();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(934)
						o1->wrap_min = tmp6;
						HX_STACK_LINE(934)
						o1->_invalidate = null();
						HX_STACK_LINE(934)
						o1->_validate = null();
					}
					HX_STACK_LINE(934)
					::zpp_nape::geom::ZPP_AABB tmp5 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(934)
					o1->next = tmp5;
					HX_STACK_LINE(934)
					::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
				}
				HX_STACK_LINE(934)
				::zpp_nape::space::ZPP_AABBNode tmp5 = o->parent = null();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(934)
				::zpp_nape::space::ZPP_AABBNode tmp6 = o->child2 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(934)
				o->child1 = tmp6;
				HX_STACK_LINE(934)
				o->next = null();
				HX_STACK_LINE(934)
				o->snext = null();
				HX_STACK_LINE(934)
				o->mnext = null();
			}
			HX_STACK_LINE(935)
			::zpp_nape::space::ZPP_AABBNode tmp5 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(935)
			o->next = tmp5;
			HX_STACK_LINE(936)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__remove,(void))

Void ZPP_DynAABBPhase_obj::__sync( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","__sync",0xfa22a1b9,"zpp_nape.space.ZPP_DynAABBPhase.__sync","zpp_nape/space/DynAABBPhase.hx",944,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(953)
		::zpp_nape::space::ZPP_AABBNode node = shape->node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(962)
		bool tmp = node->synced;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(962)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(962)
		if ((tmp1)){
			HX_STACK_LINE(963)
			::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(963)
			bool tmp3 = tmp2->continuous;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(963)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(963)
			if ((tmp4)){
				HX_STACK_LINE(963)
				bool tmp5 = shape->zip_aabb;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(963)
				if ((tmp5)){
					HX_STACK_LINE(963)
					bool tmp6 = (shape->body != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(963)
					if ((tmp6)){
						HX_STACK_LINE(963)
						shape->zip_aabb = false;
						HX_STACK_LINE(963)
						int tmp7 = shape->type;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(963)
						int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(963)
						bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(963)
						if ((tmp9)){
							HX_STACK_LINE(963)
							::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								bool tmp10 = _this->zip_worldCOM;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(963)
								if ((tmp10)){
									HX_STACK_LINE(963)
									bool tmp11 = (_this->body != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(963)
									if ((tmp11)){
										HX_STACK_LINE(963)
										_this->zip_worldCOM = false;
										HX_STACK_LINE(963)
										{
											HX_STACK_LINE(963)
											bool tmp12 = _this->zip_localCOM;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(963)
											if ((tmp12)){
												HX_STACK_LINE(963)
												_this->zip_localCOM = false;
												HX_STACK_LINE(963)
												int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(963)
												int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(963)
												bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(963)
												if ((tmp15)){
													HX_STACK_LINE(963)
													::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(963)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(963)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(963)
													if ((tmp17)){
														HX_STACK_LINE(963)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
													}
													HX_STACK_LINE(963)
													::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(963)
													::zpp_nape::geom::ZPP_Vec2 tmp19 = tmp18->next;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(963)
													bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(963)
													if ((tmp20)){
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(963)
														_this1->localCOMx = tmp21->x;
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(963)
														_this1->localCOMy = tmp22->y;
														HX_STACK_LINE(963)
														Dynamic();
													}
													else{
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 tmp22 = tmp21->next->next;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(963)
														bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(963)
														if ((tmp23)){
															HX_STACK_LINE(963)
															{
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(963)
																_this1->localCOMx = tmp24->x;
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 tmp25 = _this1->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(963)
																_this1->localCOMy = tmp25->y;
																HX_STACK_LINE(963)
																{
																}
															}
															HX_STACK_LINE(963)
															{
																HX_STACK_LINE(963)
																Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(963)
																Float tmp25 = tmp24->next->x;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(963)
																Float tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(963)
																Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(963)
																hx::AddEq(_this1->localCOMx,tmp27);
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 tmp28 = _this1->lverts->next;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(963)
																Float tmp29 = tmp28->next->y;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(963)
																Float tmp30 = t;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(963)
																Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(963)
																hx::AddEq(_this1->localCOMy,tmp31);
															}
															HX_STACK_LINE(963)
															{
																HX_STACK_LINE(963)
																Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(963)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(963)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
														else{
															HX_STACK_LINE(963)
															{
																HX_STACK_LINE(963)
																_this1->localCOMx = (int)0;
																HX_STACK_LINE(963)
																_this1->localCOMy = (int)0;
																HX_STACK_LINE(963)
																{
																}
															}
															HX_STACK_LINE(963)
															Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
															HX_STACK_LINE(963)
															{
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(963)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(963)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(963)
																while((true)){
																	HX_STACK_LINE(963)
																	bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(963)
																	bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(963)
																	if ((tmp26)){
																		HX_STACK_LINE(963)
																		break;
																	}
																	HX_STACK_LINE(963)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(963)
																	{
																		HX_STACK_LINE(963)
																		Float tmp27 = v->x;		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(963)
																		Float tmp28 = (w->y - u->y);		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(963)
																		Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(963)
																		hx::AddEq(area,tmp29);
																		HX_STACK_LINE(963)
																		Float tmp30 = (w->y * v->x);		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(963)
																		Float tmp31 = (w->x * v->y);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(963)
																		Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(963)
																		Float cf = tmp32;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(963)
																		Float tmp33 = (v->x + w->x);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(963)
																		Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(963)
																		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(963)
																		hx::AddEq(_this1->localCOMx,tmp35);
																		HX_STACK_LINE(963)
																		Float tmp36 = (v->y + w->y);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(963)
																		Float tmp37 = cf;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(963)
																		Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(963)
																		hx::AddEq(_this1->localCOMy,tmp38);
																	}
																	HX_STACK_LINE(963)
																	u = v;
																	HX_STACK_LINE(963)
																	v = w;
																	HX_STACK_LINE(963)
																	cx_ite = cx_ite->next;
																}
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 tmp25 = _this1->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(963)
																cx_ite = tmp25;
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(963)
																{
																	HX_STACK_LINE(963)
																	Float tmp26 = v->x;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(963)
																	Float tmp27 = (w->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(963)
																	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(963)
																	hx::AddEq(area,tmp28);
																	HX_STACK_LINE(963)
																	Float tmp29 = (w->y * v->x);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(963)
																	Float tmp30 = (w->x * v->y);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(963)
																	Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(963)
																	Float cf = tmp31;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(963)
																	Float tmp32 = (v->x + w->x);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(963)
																	Float tmp33 = cf;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(963)
																	Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(963)
																	hx::AddEq(_this1->localCOMx,tmp34);
																	HX_STACK_LINE(963)
																	Float tmp35 = (v->y + w->y);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(963)
																	Float tmp36 = cf;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(963)
																	Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(963)
																	hx::AddEq(_this1->localCOMy,tmp37);
																}
																HX_STACK_LINE(963)
																u = v;
																HX_STACK_LINE(963)
																v = w;
																HX_STACK_LINE(963)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(963)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(963)
																{
																	HX_STACK_LINE(963)
																	Float tmp26 = v->x;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(963)
																	Float tmp27 = (w1->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(963)
																	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(963)
																	hx::AddEq(area,tmp28);
																	HX_STACK_LINE(963)
																	Float tmp29 = (w1->y * v->x);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(963)
																	Float tmp30 = (w1->x * v->y);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(963)
																	Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(963)
																	Float cf = tmp31;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(963)
																	Float tmp32 = (v->x + w1->x);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(963)
																	Float tmp33 = cf;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(963)
																	Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(963)
																	hx::AddEq(_this1->localCOMx,tmp34);
																	HX_STACK_LINE(963)
																	Float tmp35 = (v->y + w1->y);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(963)
																	Float tmp36 = cf;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(963)
																	Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(963)
																	hx::AddEq(_this1->localCOMy,tmp37);
																}
															}
															HX_STACK_LINE(963)
															Float tmp24 = ((int)3 * area);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(963)
															Float tmp25 = (Float((int)1) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(963)
															area = tmp25;
															HX_STACK_LINE(963)
															{
																HX_STACK_LINE(963)
																Float t = area;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(963)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(963)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
													}
												}
												HX_STACK_LINE(963)
												bool tmp16 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(963)
												if ((tmp16)){
													HX_STACK_LINE(963)
													::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(963)
													tmp17->x = _this->localCOMx;
													HX_STACK_LINE(963)
													::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(963)
													tmp18->y = _this->localCOMy;
													HX_STACK_LINE(963)
													{
													}
												}
											}
										}
										HX_STACK_LINE(963)
										{
											HX_STACK_LINE(963)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(963)
											bool tmp12 = _this1->zip_axis;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(963)
											if ((tmp12)){
												HX_STACK_LINE(963)
												_this1->zip_axis = false;
												HX_STACK_LINE(963)
												{
													HX_STACK_LINE(963)
													Float tmp13 = _this1->rot;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(963)
													Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(963)
													_this1->axisx = tmp14;
													HX_STACK_LINE(963)
													Float tmp15 = _this1->rot;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(963)
													Float tmp16 = ::Math_obj::cos(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(963)
													_this1->axisy = tmp16;
													HX_STACK_LINE(963)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(963)
										{
											HX_STACK_LINE(963)
											Float tmp12 = _this->body->posx;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(963)
											Float tmp13 = _this->body->axisy;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(963)
											Float tmp14 = _this->localCOMx;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(963)
											Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(963)
											Float tmp16 = _this->body->axisx;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(963)
											Float tmp17 = _this->localCOMy;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(963)
											Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(963)
											Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(963)
											Float tmp20 = (tmp12 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(963)
											_this->worldCOMx = tmp20;
											HX_STACK_LINE(963)
											Float tmp21 = _this->body->posy;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(963)
											Float tmp22 = _this->localCOMx;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(963)
											Float tmp23 = _this->body->axisx;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(963)
											Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(963)
											Float tmp25 = _this->localCOMy;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(963)
											Float tmp26 = _this->body->axisy;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(963)
											Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(963)
											Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(963)
											Float tmp29 = (tmp21 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(963)
											_this->worldCOMy = tmp29;
										}
									}
								}
							}
							HX_STACK_LINE(963)
							Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(963)
							Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								Float tmp10 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(963)
								_this->aabb->minx = tmp10;
								HX_STACK_LINE(963)
								Float tmp11 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(963)
								_this->aabb->miny = tmp11;
							}
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								Float tmp10 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(963)
								_this->aabb->maxx = tmp10;
								HX_STACK_LINE(963)
								Float tmp11 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(963)
								_this->aabb->maxy = tmp11;
							}
						}
						else{
							HX_STACK_LINE(963)
							::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								bool tmp10 = _this->zip_gverts;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(963)
								if ((tmp10)){
									HX_STACK_LINE(963)
									bool tmp11 = (_this->body != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(963)
									if ((tmp11)){
										HX_STACK_LINE(963)
										_this->zip_gverts = false;
										HX_STACK_LINE(963)
										_this->validate_lverts();
										HX_STACK_LINE(963)
										{
											HX_STACK_LINE(963)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(963)
											bool tmp12 = _this1->zip_axis;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(963)
											if ((tmp12)){
												HX_STACK_LINE(963)
												_this1->zip_axis = false;
												HX_STACK_LINE(963)
												{
													HX_STACK_LINE(963)
													Float tmp13 = _this1->rot;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(963)
													Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(963)
													_this1->axisx = tmp14;
													HX_STACK_LINE(963)
													Float tmp15 = _this1->rot;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(963)
													Float tmp16 = ::Math_obj::cos(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(963)
													_this1->axisy = tmp16;
													HX_STACK_LINE(963)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(963)
										::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(963)
										::zpp_nape::geom::ZPP_Vec2 li = tmp12;		HX_STACK_VAR(li,"li");
										HX_STACK_LINE(963)
										{
											HX_STACK_LINE(963)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->gverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(963)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(963)
											while((true)){
												HX_STACK_LINE(963)
												bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(963)
												bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(963)
												if ((tmp15)){
													HX_STACK_LINE(963)
													break;
												}
												HX_STACK_LINE(963)
												::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(963)
												{
													HX_STACK_LINE(963)
													::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
													HX_STACK_LINE(963)
													li = li->next;
													HX_STACK_LINE(963)
													{
														HX_STACK_LINE(963)
														Float tmp16 = _this->body->posx;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(963)
														Float tmp17 = _this->body->axisy;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(963)
														Float tmp18 = l->x;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(963)
														Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(963)
														Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(963)
														Float tmp21 = l->y;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(963)
														Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(963)
														Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(963)
														Float tmp24 = (tmp16 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(963)
														g->x = tmp24;
														HX_STACK_LINE(963)
														Float tmp25 = _this->body->posy;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(963)
														Float tmp26 = l->x;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(963)
														Float tmp27 = _this->body->axisx;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(963)
														Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(963)
														Float tmp29 = l->y;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(963)
														Float tmp30 = _this->body->axisy;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(963)
														Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(963)
														Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(963)
														Float tmp33 = (tmp25 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(963)
														g->y = tmp33;
													}
												}
												HX_STACK_LINE(963)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
							}
							HX_STACK_LINE(963)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(963)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(963)
							if ((tmp11)){
								HX_STACK_LINE(963)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
							}
							HX_STACK_LINE(963)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->gverts->next;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(963)
							::zpp_nape::geom::ZPP_Vec2 p0 = tmp12;		HX_STACK_VAR(p0,"p0");
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								_this->aabb->minx = p0->x;
								HX_STACK_LINE(963)
								_this->aabb->miny = p0->y;
								HX_STACK_LINE(963)
								{
								}
							}
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								_this->aabb->maxx = p0->x;
								HX_STACK_LINE(963)
								_this->aabb->maxy = p0->y;
								HX_STACK_LINE(963)
								{
								}
							}
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->gverts->next;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(963)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp13->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(963)
								while((true)){
									HX_STACK_LINE(963)
									bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(963)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(963)
									if ((tmp15)){
										HX_STACK_LINE(963)
										break;
									}
									HX_STACK_LINE(963)
									::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(963)
									{
										HX_STACK_LINE(963)
										Float tmp16 = p->x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(963)
										Float tmp17 = _this->aabb->minx;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(963)
										bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(963)
										if ((tmp18)){
											HX_STACK_LINE(963)
											_this->aabb->minx = p->x;
										}
										HX_STACK_LINE(963)
										Float tmp19 = p->x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(963)
										Float tmp20 = _this->aabb->maxx;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(963)
										bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(963)
										if ((tmp21)){
											HX_STACK_LINE(963)
											_this->aabb->maxx = p->x;
										}
										HX_STACK_LINE(963)
										Float tmp22 = p->y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(963)
										Float tmp23 = _this->aabb->miny;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(963)
										bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(963)
										if ((tmp24)){
											HX_STACK_LINE(963)
											_this->aabb->miny = p->y;
										}
										HX_STACK_LINE(963)
										Float tmp25 = p->y;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(963)
										Float tmp26 = _this->aabb->maxy;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(963)
										bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(963)
										if ((tmp27)){
											HX_STACK_LINE(963)
											_this->aabb->maxy = p->y;
										}
									}
									HX_STACK_LINE(963)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(964)
			bool tmp5 = node->dyn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(964)
			int tmp6 = shape->body->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(964)
			int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(964)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(964)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(964)
			if ((tmp8)){
				HX_STACK_LINE(964)
				tmp9 = false;
			}
			else{
				HX_STACK_LINE(964)
				::zpp_nape::space::ZPP_Component tmp10 = shape->body->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(964)
				bool tmp11 = tmp10->sleeping;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(964)
				tmp9 = !(tmp11);
			}
			HX_STACK_LINE(964)
			bool tmp10 = (tmp5 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(964)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(964)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(964)
			if ((tmp11)){
				HX_STACK_LINE(964)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(964)
					bool tmp14 = (x->minx >= _this->minx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(964)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(964)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(964)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(964)
					bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(964)
					if ((tmp18)){
						HX_STACK_LINE(964)
						bool tmp19 = (x->miny >= _this->miny);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(964)
						tmp17 = tmp19;
					}
					else{
						HX_STACK_LINE(964)
						tmp17 = false;
					}
					HX_STACK_LINE(964)
					bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(964)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(964)
					bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(964)
					if ((tmp21)){
						HX_STACK_LINE(964)
						bool tmp22 = (x->maxx <= _this->maxx);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(964)
						tmp20 = tmp22;
					}
					else{
						HX_STACK_LINE(964)
						tmp20 = false;
					}
					HX_STACK_LINE(964)
					bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(964)
					if ((tmp22)){
						HX_STACK_LINE(964)
						bool tmp23 = (x->maxy <= _this->maxy);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(964)
						tmp13 = tmp23;
					}
					else{
						HX_STACK_LINE(964)
						tmp13 = false;
					}
				}
				HX_STACK_LINE(964)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(964)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(964)
				tmp12 = true;
			}
			HX_STACK_LINE(964)
			bool sync = tmp12;		HX_STACK_VAR(sync,"sync");
			HX_STACK_LINE(965)
			bool tmp13 = sync;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(965)
			if ((tmp13)){
				HX_STACK_LINE(968)
				node->synced = true;
				HX_STACK_LINE(969)
				{
					HX_STACK_LINE(978)
					::zpp_nape::space::ZPP_AABBNode tmp14 = this->syncs;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(978)
					node->snext = tmp14;
					HX_STACK_LINE(979)
					this->syncs = node;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__sync,(void))

Void ZPP_DynAABBPhase_obj::sync_broadphase( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","sync_broadphase",0xd127ac5f,"zpp_nape.space.ZPP_DynAABBPhase.sync_broadphase","zpp_nape/space/DynAABBPhase.hx",986,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(987)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(987)
		tmp->validation();
		HX_STACK_LINE(988)
		::zpp_nape::space::ZPP_AABBNode tmp1 = this->syncs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(988)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(988)
		if ((tmp2)){
			HX_STACK_LINE(989)
			::zpp_nape::space::ZPP_AABBNode tmp3 = this->moves;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(989)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(989)
			if ((tmp4)){
				HX_STACK_LINE(990)
				::zpp_nape::space::ZPP_AABBNode tmp5 = this->syncs;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(990)
				::zpp_nape::space::ZPP_AABBNode node = tmp5;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(991)
				while((true)){
					HX_STACK_LINE(991)
					bool tmp6 = (node != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(991)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(991)
					if ((tmp7)){
						HX_STACK_LINE(991)
						break;
					}
					HX_STACK_LINE(992)
					{
						HX_STACK_LINE(993)
						::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1010)
						bool tmp8 = node->first_sync;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1010)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1010)
						if ((tmp9)){
							HX_STACK_LINE(1011)
							bool tmp10 = node->dyn;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1011)
							::zpp_nape::space::ZPP_AABBTree tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1011)
							if ((tmp10)){
								HX_STACK_LINE(1011)
								tmp11 = this->dtree;
							}
							else{
								HX_STACK_LINE(1011)
								tmp11 = this->stree;
							}
							HX_STACK_LINE(1011)
							::zpp_nape::space::ZPP_AABBTree tree = tmp11;		HX_STACK_VAR(tree,"tree");
							HX_STACK_LINE(1012)
							{
								HX_STACK_LINE(1012)
								bool tmp12 = (node == tree->root);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1012)
								if ((tmp12)){
									HX_STACK_LINE(1012)
									tree->root = null();
									HX_STACK_LINE(1012)
									Dynamic();
								}
								else{
									HX_STACK_LINE(1012)
									::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
									HX_STACK_LINE(1012)
									::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
									HX_STACK_LINE(1012)
									bool tmp13 = (parent->child1 == node);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1012)
									::zpp_nape::space::ZPP_AABBNode tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1012)
									if ((tmp13)){
										HX_STACK_LINE(1012)
										tmp14 = parent->child2;
									}
									else{
										HX_STACK_LINE(1012)
										tmp14 = parent->child1;
									}
									HX_STACK_LINE(1012)
									::zpp_nape::space::ZPP_AABBNode sibling = tmp14;		HX_STACK_VAR(sibling,"sibling");
									HX_STACK_LINE(1012)
									bool tmp15 = (gparent != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1012)
									if ((tmp15)){
										HX_STACK_LINE(1012)
										bool tmp16 = (gparent->child1 == parent);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1012)
										if ((tmp16)){
											HX_STACK_LINE(1012)
											gparent->child1 = sibling;
										}
										else{
											HX_STACK_LINE(1012)
											gparent->child2 = sibling;
										}
										HX_STACK_LINE(1012)
										sibling->parent = gparent;
										HX_STACK_LINE(1012)
										{
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1012)
											{
												HX_STACK_LINE(1012)
												o->height = (int)-1;
												HX_STACK_LINE(1012)
												{
													HX_STACK_LINE(1012)
													::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1012)
													{
														HX_STACK_LINE(1012)
														bool tmp17 = (o1->outer != null());		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1012)
														if ((tmp17)){
															HX_STACK_LINE(1012)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1012)
															o1->outer = null();
														}
														HX_STACK_LINE(1012)
														::nape::geom::Vec2 tmp18 = o1->wrap_max = null();		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1012)
														o1->wrap_min = tmp18;
														HX_STACK_LINE(1012)
														o1->_invalidate = null();
														HX_STACK_LINE(1012)
														o1->_validate = null();
													}
													HX_STACK_LINE(1012)
													::zpp_nape::geom::ZPP_AABB tmp17 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1012)
													o1->next = tmp17;
													HX_STACK_LINE(1012)
													::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
												}
												HX_STACK_LINE(1012)
												::zpp_nape::space::ZPP_AABBNode tmp17 = o->parent = null();		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1012)
												::zpp_nape::space::ZPP_AABBNode tmp18 = o->child2 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1012)
												o->child1 = tmp18;
												HX_STACK_LINE(1012)
												o->next = null();
												HX_STACK_LINE(1012)
												o->snext = null();
												HX_STACK_LINE(1012)
												o->mnext = null();
											}
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode tmp17 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1012)
											o->next = tmp17;
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
										}
										HX_STACK_LINE(1012)
										::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
										HX_STACK_LINE(1012)
										while((true)){
											HX_STACK_LINE(1012)
											bool tmp17 = (node1 != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1012)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1012)
											if ((tmp18)){
												HX_STACK_LINE(1012)
												break;
											}
											HX_STACK_LINE(1012)
											bool tmp19 = (node1->child1 == null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1012)
											bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1012)
											bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1012)
											if ((tmp20)){
												HX_STACK_LINE(1012)
												tmp21 = (node1->height < (int)2);
											}
											else{
												HX_STACK_LINE(1012)
												tmp21 = true;
											}
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1012)
											if ((tmp21)){
												HX_STACK_LINE(1012)
												tmp22 = node1;
											}
											else{
												HX_STACK_LINE(1012)
												::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1012)
												::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(1012)
												int tmp23 = (c->height - b->height);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1012)
												int balance = tmp23;		HX_STACK_VAR(balance,"balance");
												HX_STACK_LINE(1012)
												bool tmp24 = (balance > (int)1);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1012)
												if ((tmp24)){
													HX_STACK_LINE(1012)
													::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
													HX_STACK_LINE(1012)
													::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(1012)
													c->child1 = node1;
													HX_STACK_LINE(1012)
													c->parent = node1->parent;
													HX_STACK_LINE(1012)
													node1->parent = c;
													HX_STACK_LINE(1012)
													bool tmp25 = (c->parent != null());		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1012)
													if ((tmp25)){
														HX_STACK_LINE(1012)
														::zpp_nape::space::ZPP_AABBNode tmp26 = c->parent->child1;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1012)
														::zpp_nape::space::ZPP_AABBNode tmp27 = node1;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1012)
														bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1012)
														if ((tmp28)){
															HX_STACK_LINE(1012)
															c->parent->child1 = c;
														}
														else{
															HX_STACK_LINE(1012)
															c->parent->child2 = c;
														}
													}
													else{
														HX_STACK_LINE(1012)
														tree->root = c;
													}
													HX_STACK_LINE(1012)
													bool tmp26 = (f->height > g->height);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1012)
													if ((tmp26)){
														HX_STACK_LINE(1012)
														c->child2 = f;
														HX_STACK_LINE(1012)
														node1->child2 = g;
														HX_STACK_LINE(1012)
														g->parent = node1;
														HX_STACK_LINE(1012)
														{
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
															HX_STACK_LINE(1012)
															bool tmp27 = (a->minx < b1->minx);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1012)
															Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															if ((tmp27)){
																HX_STACK_LINE(1012)
																tmp28 = a->minx;
															}
															else{
																HX_STACK_LINE(1012)
																tmp28 = b1->minx;
															}
															HX_STACK_LINE(1012)
															_this->minx = tmp28;
															HX_STACK_LINE(1012)
															bool tmp29 = (a->miny < b1->miny);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1012)
															Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1012)
															if ((tmp29)){
																HX_STACK_LINE(1012)
																tmp30 = a->miny;
															}
															else{
																HX_STACK_LINE(1012)
																tmp30 = b1->miny;
															}
															HX_STACK_LINE(1012)
															_this->miny = tmp30;
															HX_STACK_LINE(1012)
															bool tmp31 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1012)
															Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1012)
															if ((tmp31)){
																HX_STACK_LINE(1012)
																tmp32 = a->maxx;
															}
															else{
																HX_STACK_LINE(1012)
																tmp32 = b1->maxx;
															}
															HX_STACK_LINE(1012)
															_this->maxx = tmp32;
															HX_STACK_LINE(1012)
															bool tmp33 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1012)
															Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1012)
															if ((tmp33)){
																HX_STACK_LINE(1012)
																tmp34 = a->maxy;
															}
															else{
																HX_STACK_LINE(1012)
																tmp34 = b1->maxy;
															}
															HX_STACK_LINE(1012)
															_this->maxy = tmp34;
														}
														HX_STACK_LINE(1012)
														{
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
															HX_STACK_LINE(1012)
															bool tmp27 = (a->minx < b1->minx);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1012)
															Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															if ((tmp27)){
																HX_STACK_LINE(1012)
																tmp28 = a->minx;
															}
															else{
																HX_STACK_LINE(1012)
																tmp28 = b1->minx;
															}
															HX_STACK_LINE(1012)
															_this->minx = tmp28;
															HX_STACK_LINE(1012)
															bool tmp29 = (a->miny < b1->miny);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1012)
															Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1012)
															if ((tmp29)){
																HX_STACK_LINE(1012)
																tmp30 = a->miny;
															}
															else{
																HX_STACK_LINE(1012)
																tmp30 = b1->miny;
															}
															HX_STACK_LINE(1012)
															_this->miny = tmp30;
															HX_STACK_LINE(1012)
															bool tmp31 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1012)
															Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1012)
															if ((tmp31)){
																HX_STACK_LINE(1012)
																tmp32 = a->maxx;
															}
															else{
																HX_STACK_LINE(1012)
																tmp32 = b1->maxx;
															}
															HX_STACK_LINE(1012)
															_this->maxx = tmp32;
															HX_STACK_LINE(1012)
															bool tmp33 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1012)
															Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1012)
															if ((tmp33)){
																HX_STACK_LINE(1012)
																tmp34 = a->maxy;
															}
															else{
																HX_STACK_LINE(1012)
																tmp34 = b1->maxy;
															}
															HX_STACK_LINE(1012)
															_this->maxy = tmp34;
														}
														HX_STACK_LINE(1012)
														int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1012)
														{
															HX_STACK_LINE(1012)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1012)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(1012)
															bool tmp28 = (x > y);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															if ((tmp28)){
																HX_STACK_LINE(1012)
																tmp27 = x;
															}
															else{
																HX_STACK_LINE(1012)
																tmp27 = y;
															}
														}
														HX_STACK_LINE(1012)
														int tmp28 = ((int)1 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1012)
														node1->height = tmp28;
														HX_STACK_LINE(1012)
														int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1012)
														{
															HX_STACK_LINE(1012)
															int x = node1->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1012)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(1012)
															bool tmp30 = (x > y);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1012)
															if ((tmp30)){
																HX_STACK_LINE(1012)
																tmp29 = x;
															}
															else{
																HX_STACK_LINE(1012)
																tmp29 = y;
															}
														}
														HX_STACK_LINE(1012)
														int tmp30 = ((int)1 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1012)
														c->height = tmp30;
													}
													else{
														HX_STACK_LINE(1012)
														c->child2 = g;
														HX_STACK_LINE(1012)
														node1->child2 = f;
														HX_STACK_LINE(1012)
														f->parent = node1;
														HX_STACK_LINE(1012)
														{
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
															HX_STACK_LINE(1012)
															bool tmp27 = (a->minx < b1->minx);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1012)
															Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															if ((tmp27)){
																HX_STACK_LINE(1012)
																tmp28 = a->minx;
															}
															else{
																HX_STACK_LINE(1012)
																tmp28 = b1->minx;
															}
															HX_STACK_LINE(1012)
															_this->minx = tmp28;
															HX_STACK_LINE(1012)
															bool tmp29 = (a->miny < b1->miny);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1012)
															Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1012)
															if ((tmp29)){
																HX_STACK_LINE(1012)
																tmp30 = a->miny;
															}
															else{
																HX_STACK_LINE(1012)
																tmp30 = b1->miny;
															}
															HX_STACK_LINE(1012)
															_this->miny = tmp30;
															HX_STACK_LINE(1012)
															bool tmp31 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1012)
															Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1012)
															if ((tmp31)){
																HX_STACK_LINE(1012)
																tmp32 = a->maxx;
															}
															else{
																HX_STACK_LINE(1012)
																tmp32 = b1->maxx;
															}
															HX_STACK_LINE(1012)
															_this->maxx = tmp32;
															HX_STACK_LINE(1012)
															bool tmp33 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1012)
															Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1012)
															if ((tmp33)){
																HX_STACK_LINE(1012)
																tmp34 = a->maxy;
															}
															else{
																HX_STACK_LINE(1012)
																tmp34 = b1->maxy;
															}
															HX_STACK_LINE(1012)
															_this->maxy = tmp34;
														}
														HX_STACK_LINE(1012)
														{
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(1012)
															::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
															HX_STACK_LINE(1012)
															bool tmp27 = (a->minx < b1->minx);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1012)
															Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															if ((tmp27)){
																HX_STACK_LINE(1012)
																tmp28 = a->minx;
															}
															else{
																HX_STACK_LINE(1012)
																tmp28 = b1->minx;
															}
															HX_STACK_LINE(1012)
															_this->minx = tmp28;
															HX_STACK_LINE(1012)
															bool tmp29 = (a->miny < b1->miny);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1012)
															Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1012)
															if ((tmp29)){
																HX_STACK_LINE(1012)
																tmp30 = a->miny;
															}
															else{
																HX_STACK_LINE(1012)
																tmp30 = b1->miny;
															}
															HX_STACK_LINE(1012)
															_this->miny = tmp30;
															HX_STACK_LINE(1012)
															bool tmp31 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1012)
															Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1012)
															if ((tmp31)){
																HX_STACK_LINE(1012)
																tmp32 = a->maxx;
															}
															else{
																HX_STACK_LINE(1012)
																tmp32 = b1->maxx;
															}
															HX_STACK_LINE(1012)
															_this->maxx = tmp32;
															HX_STACK_LINE(1012)
															bool tmp33 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1012)
															Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1012)
															if ((tmp33)){
																HX_STACK_LINE(1012)
																tmp34 = a->maxy;
															}
															else{
																HX_STACK_LINE(1012)
																tmp34 = b1->maxy;
															}
															HX_STACK_LINE(1012)
															_this->maxy = tmp34;
														}
														HX_STACK_LINE(1012)
														int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1012)
														{
															HX_STACK_LINE(1012)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1012)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(1012)
															bool tmp28 = (x > y);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															if ((tmp28)){
																HX_STACK_LINE(1012)
																tmp27 = x;
															}
															else{
																HX_STACK_LINE(1012)
																tmp27 = y;
															}
														}
														HX_STACK_LINE(1012)
														int tmp28 = ((int)1 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1012)
														node1->height = tmp28;
														HX_STACK_LINE(1012)
														int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1012)
														{
															HX_STACK_LINE(1012)
															int x = node1->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1012)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(1012)
															bool tmp30 = (x > y);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1012)
															if ((tmp30)){
																HX_STACK_LINE(1012)
																tmp29 = x;
															}
															else{
																HX_STACK_LINE(1012)
																tmp29 = y;
															}
														}
														HX_STACK_LINE(1012)
														int tmp30 = ((int)1 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1012)
														c->height = tmp30;
													}
													HX_STACK_LINE(1012)
													tmp22 = c;
												}
												else{
													HX_STACK_LINE(1012)
													bool tmp25 = (balance < (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1012)
													if ((tmp25)){
														HX_STACK_LINE(1012)
														::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1012)
														::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1012)
														b->child1 = node1;
														HX_STACK_LINE(1012)
														b->parent = node1->parent;
														HX_STACK_LINE(1012)
														node1->parent = b;
														HX_STACK_LINE(1012)
														bool tmp26 = (b->parent != null());		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1012)
														if ((tmp26)){
															HX_STACK_LINE(1012)
															::zpp_nape::space::ZPP_AABBNode tmp27 = b->parent->child1;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1012)
															::zpp_nape::space::ZPP_AABBNode tmp28 = node1;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1012)
															if ((tmp29)){
																HX_STACK_LINE(1012)
																b->parent->child1 = b;
															}
															else{
																HX_STACK_LINE(1012)
																b->parent->child2 = b;
															}
														}
														else{
															HX_STACK_LINE(1012)
															tree->root = b;
														}
														HX_STACK_LINE(1012)
														bool tmp27 = (f->height > g->height);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1012)
														if ((tmp27)){
															HX_STACK_LINE(1012)
															b->child2 = f;
															HX_STACK_LINE(1012)
															node1->child1 = g;
															HX_STACK_LINE(1012)
															g->parent = node1;
															HX_STACK_LINE(1012)
															{
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1012)
																bool tmp28 = (a->minx < b1->minx);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1012)
																Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1012)
																if ((tmp28)){
																	HX_STACK_LINE(1012)
																	tmp29 = a->minx;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp29 = b1->minx;
																}
																HX_STACK_LINE(1012)
																_this->minx = tmp29;
																HX_STACK_LINE(1012)
																bool tmp30 = (a->miny < b1->miny);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1012)
																Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1012)
																if ((tmp30)){
																	HX_STACK_LINE(1012)
																	tmp31 = a->miny;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp31 = b1->miny;
																}
																HX_STACK_LINE(1012)
																_this->miny = tmp31;
																HX_STACK_LINE(1012)
																bool tmp32 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1012)
																Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1012)
																if ((tmp32)){
																	HX_STACK_LINE(1012)
																	tmp33 = a->maxx;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp33 = b1->maxx;
																}
																HX_STACK_LINE(1012)
																_this->maxx = tmp33;
																HX_STACK_LINE(1012)
																bool tmp34 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1012)
																Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1012)
																if ((tmp34)){
																	HX_STACK_LINE(1012)
																	tmp35 = a->maxy;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp35 = b1->maxy;
																}
																HX_STACK_LINE(1012)
																_this->maxy = tmp35;
															}
															HX_STACK_LINE(1012)
															{
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1012)
																bool tmp28 = (a->minx < b1->minx);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1012)
																Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1012)
																if ((tmp28)){
																	HX_STACK_LINE(1012)
																	tmp29 = a->minx;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp29 = b1->minx;
																}
																HX_STACK_LINE(1012)
																_this->minx = tmp29;
																HX_STACK_LINE(1012)
																bool tmp30 = (a->miny < b1->miny);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1012)
																Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1012)
																if ((tmp30)){
																	HX_STACK_LINE(1012)
																	tmp31 = a->miny;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp31 = b1->miny;
																}
																HX_STACK_LINE(1012)
																_this->miny = tmp31;
																HX_STACK_LINE(1012)
																bool tmp32 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1012)
																Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1012)
																if ((tmp32)){
																	HX_STACK_LINE(1012)
																	tmp33 = a->maxx;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp33 = b1->maxx;
																}
																HX_STACK_LINE(1012)
																_this->maxx = tmp33;
																HX_STACK_LINE(1012)
																bool tmp34 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1012)
																Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1012)
																if ((tmp34)){
																	HX_STACK_LINE(1012)
																	tmp35 = a->maxy;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp35 = b1->maxy;
																}
																HX_STACK_LINE(1012)
																_this->maxy = tmp35;
															}
															HX_STACK_LINE(1012)
															int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															{
																HX_STACK_LINE(1012)
																int x = c->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1012)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1012)
																bool tmp29 = (x > y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1012)
																if ((tmp29)){
																	HX_STACK_LINE(1012)
																	tmp28 = x;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp28 = y;
																}
															}
															HX_STACK_LINE(1012)
															int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1012)
															node1->height = tmp29;
															HX_STACK_LINE(1012)
															int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1012)
															{
																HX_STACK_LINE(1012)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1012)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1012)
																bool tmp31 = (x > y);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1012)
																if ((tmp31)){
																	HX_STACK_LINE(1012)
																	tmp30 = x;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp30 = y;
																}
															}
															HX_STACK_LINE(1012)
															int tmp31 = ((int)1 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1012)
															b->height = tmp31;
														}
														else{
															HX_STACK_LINE(1012)
															b->child2 = g;
															HX_STACK_LINE(1012)
															node1->child1 = f;
															HX_STACK_LINE(1012)
															f->parent = node1;
															HX_STACK_LINE(1012)
															{
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1012)
																bool tmp28 = (a->minx < b1->minx);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1012)
																Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1012)
																if ((tmp28)){
																	HX_STACK_LINE(1012)
																	tmp29 = a->minx;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp29 = b1->minx;
																}
																HX_STACK_LINE(1012)
																_this->minx = tmp29;
																HX_STACK_LINE(1012)
																bool tmp30 = (a->miny < b1->miny);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1012)
																Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1012)
																if ((tmp30)){
																	HX_STACK_LINE(1012)
																	tmp31 = a->miny;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp31 = b1->miny;
																}
																HX_STACK_LINE(1012)
																_this->miny = tmp31;
																HX_STACK_LINE(1012)
																bool tmp32 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1012)
																Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1012)
																if ((tmp32)){
																	HX_STACK_LINE(1012)
																	tmp33 = a->maxx;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp33 = b1->maxx;
																}
																HX_STACK_LINE(1012)
																_this->maxx = tmp33;
																HX_STACK_LINE(1012)
																bool tmp34 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1012)
																Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1012)
																if ((tmp34)){
																	HX_STACK_LINE(1012)
																	tmp35 = a->maxy;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp35 = b1->maxy;
																}
																HX_STACK_LINE(1012)
																_this->maxy = tmp35;
															}
															HX_STACK_LINE(1012)
															{
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1012)
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1012)
																bool tmp28 = (a->minx < b1->minx);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1012)
																Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1012)
																if ((tmp28)){
																	HX_STACK_LINE(1012)
																	tmp29 = a->minx;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp29 = b1->minx;
																}
																HX_STACK_LINE(1012)
																_this->minx = tmp29;
																HX_STACK_LINE(1012)
																bool tmp30 = (a->miny < b1->miny);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1012)
																Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1012)
																if ((tmp30)){
																	HX_STACK_LINE(1012)
																	tmp31 = a->miny;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp31 = b1->miny;
																}
																HX_STACK_LINE(1012)
																_this->miny = tmp31;
																HX_STACK_LINE(1012)
																bool tmp32 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1012)
																Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1012)
																if ((tmp32)){
																	HX_STACK_LINE(1012)
																	tmp33 = a->maxx;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp33 = b1->maxx;
																}
																HX_STACK_LINE(1012)
																_this->maxx = tmp33;
																HX_STACK_LINE(1012)
																bool tmp34 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1012)
																Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1012)
																if ((tmp34)){
																	HX_STACK_LINE(1012)
																	tmp35 = a->maxy;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp35 = b1->maxy;
																}
																HX_STACK_LINE(1012)
																_this->maxy = tmp35;
															}
															HX_STACK_LINE(1012)
															int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1012)
															{
																HX_STACK_LINE(1012)
																int x = c->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1012)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1012)
																bool tmp29 = (x > y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1012)
																if ((tmp29)){
																	HX_STACK_LINE(1012)
																	tmp28 = x;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp28 = y;
																}
															}
															HX_STACK_LINE(1012)
															int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1012)
															node1->height = tmp29;
															HX_STACK_LINE(1012)
															int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1012)
															{
																HX_STACK_LINE(1012)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1012)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1012)
																bool tmp31 = (x > y);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1012)
																if ((tmp31)){
																	HX_STACK_LINE(1012)
																	tmp30 = x;
																}
																else{
																	HX_STACK_LINE(1012)
																	tmp30 = y;
																}
															}
															HX_STACK_LINE(1012)
															int tmp31 = ((int)1 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1012)
															b->height = tmp31;
														}
														HX_STACK_LINE(1012)
														tmp22 = b;
													}
													else{
														HX_STACK_LINE(1012)
														tmp22 = node1;
													}
												}
											}
											HX_STACK_LINE(1012)
											node1 = tmp22;
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
											HX_STACK_LINE(1012)
											{
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1012)
												bool tmp23 = (a->minx < b->minx);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1012)
												Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1012)
												if ((tmp23)){
													HX_STACK_LINE(1012)
													tmp24 = a->minx;
												}
												else{
													HX_STACK_LINE(1012)
													tmp24 = b->minx;
												}
												HX_STACK_LINE(1012)
												_this->minx = tmp24;
												HX_STACK_LINE(1012)
												bool tmp25 = (a->miny < b->miny);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1012)
												Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1012)
												if ((tmp25)){
													HX_STACK_LINE(1012)
													tmp26 = a->miny;
												}
												else{
													HX_STACK_LINE(1012)
													tmp26 = b->miny;
												}
												HX_STACK_LINE(1012)
												_this->miny = tmp26;
												HX_STACK_LINE(1012)
												bool tmp27 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1012)
												Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1012)
												if ((tmp27)){
													HX_STACK_LINE(1012)
													tmp28 = a->maxx;
												}
												else{
													HX_STACK_LINE(1012)
													tmp28 = b->maxx;
												}
												HX_STACK_LINE(1012)
												_this->maxx = tmp28;
												HX_STACK_LINE(1012)
												bool tmp29 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1012)
												Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1012)
												if ((tmp29)){
													HX_STACK_LINE(1012)
													tmp30 = a->maxy;
												}
												else{
													HX_STACK_LINE(1012)
													tmp30 = b->maxy;
												}
												HX_STACK_LINE(1012)
												_this->maxy = tmp30;
											}
											HX_STACK_LINE(1012)
											int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1012)
											{
												HX_STACK_LINE(1012)
												int x = child1->height;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(1012)
												int y = child2->height;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(1012)
												bool tmp24 = (x > y);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1012)
												if ((tmp24)){
													HX_STACK_LINE(1012)
													tmp23 = x;
												}
												else{
													HX_STACK_LINE(1012)
													tmp23 = y;
												}
											}
											HX_STACK_LINE(1012)
											int tmp24 = ((int)1 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1012)
											node1->height = tmp24;
											HX_STACK_LINE(1012)
											node1 = node1->parent;
										}
									}
									else{
										HX_STACK_LINE(1012)
										tree->root = sibling;
										HX_STACK_LINE(1012)
										sibling->parent = null();
										HX_STACK_LINE(1012)
										{
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1012)
											{
												HX_STACK_LINE(1012)
												o->height = (int)-1;
												HX_STACK_LINE(1012)
												{
													HX_STACK_LINE(1012)
													::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1012)
													{
														HX_STACK_LINE(1012)
														bool tmp16 = (o1->outer != null());		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(1012)
														if ((tmp16)){
															HX_STACK_LINE(1012)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1012)
															o1->outer = null();
														}
														HX_STACK_LINE(1012)
														::nape::geom::Vec2 tmp17 = o1->wrap_max = null();		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1012)
														o1->wrap_min = tmp17;
														HX_STACK_LINE(1012)
														o1->_invalidate = null();
														HX_STACK_LINE(1012)
														o1->_validate = null();
													}
													HX_STACK_LINE(1012)
													::zpp_nape::geom::ZPP_AABB tmp16 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1012)
													o1->next = tmp16;
													HX_STACK_LINE(1012)
													::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
												}
												HX_STACK_LINE(1012)
												::zpp_nape::space::ZPP_AABBNode tmp16 = o->parent = null();		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1012)
												::zpp_nape::space::ZPP_AABBNode tmp17 = o->child2 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1012)
												o->child1 = tmp17;
												HX_STACK_LINE(1012)
												o->next = null();
												HX_STACK_LINE(1012)
												o->snext = null();
												HX_STACK_LINE(1012)
												o->mnext = null();
											}
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode tmp16 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1012)
											o->next = tmp16;
											HX_STACK_LINE(1012)
											::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
										}
									}
								}
							}
						}
						else{
							HX_STACK_LINE(1014)
							node->first_sync = false;
						}
						HX_STACK_LINE(1015)
						::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
						HX_STACK_LINE(1016)
						::zpp_nape::space::ZPP_Space tmp10 = this->space;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1016)
						bool tmp11 = tmp10->continuous;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1016)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1016)
						if ((tmp12)){
							HX_STACK_LINE(1016)
							bool tmp13 = shape->zip_aabb;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1016)
							if ((tmp13)){
								HX_STACK_LINE(1016)
								bool tmp14 = (shape->body != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1016)
								if ((tmp14)){
									HX_STACK_LINE(1016)
									shape->zip_aabb = false;
									HX_STACK_LINE(1016)
									int tmp15 = shape->type;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1016)
									int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1016)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1016)
									if ((tmp17)){
										HX_STACK_LINE(1016)
										::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											bool tmp18 = _this->zip_worldCOM;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1016)
											if ((tmp18)){
												HX_STACK_LINE(1016)
												bool tmp19 = (_this->body != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1016)
												if ((tmp19)){
													HX_STACK_LINE(1016)
													_this->zip_worldCOM = false;
													HX_STACK_LINE(1016)
													{
														HX_STACK_LINE(1016)
														bool tmp20 = _this->zip_localCOM;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1016)
														if ((tmp20)){
															HX_STACK_LINE(1016)
															_this->zip_localCOM = false;
															HX_STACK_LINE(1016)
															int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1016)
															int tmp22 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1016)
															bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1016)
															if ((tmp23)){
																HX_STACK_LINE(1016)
																::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1016)
																bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1016)
																if ((tmp25)){
																	HX_STACK_LINE(1016)
																	HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
																}
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 tmp27 = tmp26->next;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(1016)
																bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1016)
																if ((tmp28)){
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 tmp29 = _this1->lverts->next;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1016)
																	_this1->localCOMx = tmp29->x;
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 tmp30 = _this1->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1016)
																	_this1->localCOMy = tmp30->y;
																	HX_STACK_LINE(1016)
																	Dynamic();
																}
																else{
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 tmp29 = _this1->lverts->next;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 tmp30 = tmp29->next->next;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1016)
																	bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1016)
																	if ((tmp31)){
																		HX_STACK_LINE(1016)
																		{
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(1016)
																			_this1->localCOMx = tmp32->x;
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 tmp33 = _this1->lverts->next;		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(1016)
																			_this1->localCOMy = tmp33->y;
																			HX_STACK_LINE(1016)
																			{
																			}
																		}
																		HX_STACK_LINE(1016)
																		{
																			HX_STACK_LINE(1016)
																			Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(1016)
																			Float tmp33 = tmp32->next->x;		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(1016)
																			Float tmp34 = t;		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(1016)
																			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(1016)
																			hx::AddEq(_this1->localCOMx,tmp35);
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 tmp36 = _this1->lverts->next;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1016)
																			Float tmp37 = tmp36->next->y;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1016)
																			Float tmp38 = t;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1016)
																			Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1016)
																			hx::AddEq(_this1->localCOMy,tmp39);
																		}
																		HX_STACK_LINE(1016)
																		{
																			HX_STACK_LINE(1016)
																			Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1016)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(1016)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																	else{
																		HX_STACK_LINE(1016)
																		{
																			HX_STACK_LINE(1016)
																			_this1->localCOMx = (int)0;
																			HX_STACK_LINE(1016)
																			_this1->localCOMy = (int)0;
																			HX_STACK_LINE(1016)
																			{
																			}
																		}
																		HX_STACK_LINE(1016)
																		Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
																		HX_STACK_LINE(1016)
																		{
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp32;		HX_STACK_VAR(cx_ite,"cx_ite");
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																			HX_STACK_LINE(1016)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																			HX_STACK_LINE(1016)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1016)
																			while((true)){
																				HX_STACK_LINE(1016)
																				bool tmp33 = (cx_ite != null());		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(1016)
																				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(1016)
																				if ((tmp34)){
																					HX_STACK_LINE(1016)
																					break;
																				}
																				HX_STACK_LINE(1016)
																				::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																				HX_STACK_LINE(1016)
																				{
																					HX_STACK_LINE(1016)
																					Float tmp35 = v->x;		HX_STACK_VAR(tmp35,"tmp35");
																					HX_STACK_LINE(1016)
																					Float tmp36 = (w->y - u->y);		HX_STACK_VAR(tmp36,"tmp36");
																					HX_STACK_LINE(1016)
																					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																					HX_STACK_LINE(1016)
																					hx::AddEq(area,tmp37);
																					HX_STACK_LINE(1016)
																					Float tmp38 = (w->y * v->x);		HX_STACK_VAR(tmp38,"tmp38");
																					HX_STACK_LINE(1016)
																					Float tmp39 = (w->x * v->y);		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1016)
																					Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(1016)
																					Float cf = tmp40;		HX_STACK_VAR(cf,"cf");
																					HX_STACK_LINE(1016)
																					Float tmp41 = (v->x + w->x);		HX_STACK_VAR(tmp41,"tmp41");
																					HX_STACK_LINE(1016)
																					Float tmp42 = cf;		HX_STACK_VAR(tmp42,"tmp42");
																					HX_STACK_LINE(1016)
																					Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																					HX_STACK_LINE(1016)
																					hx::AddEq(_this1->localCOMx,tmp43);
																					HX_STACK_LINE(1016)
																					Float tmp44 = (v->y + w->y);		HX_STACK_VAR(tmp44,"tmp44");
																					HX_STACK_LINE(1016)
																					Float tmp45 = cf;		HX_STACK_VAR(tmp45,"tmp45");
																					HX_STACK_LINE(1016)
																					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																					HX_STACK_LINE(1016)
																					hx::AddEq(_this1->localCOMy,tmp46);
																				}
																				HX_STACK_LINE(1016)
																				u = v;
																				HX_STACK_LINE(1016)
																				v = w;
																				HX_STACK_LINE(1016)
																				cx_ite = cx_ite->next;
																			}
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 tmp33 = _this1->lverts->next;		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(1016)
																			cx_ite = tmp33;
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																			HX_STACK_LINE(1016)
																			{
																				HX_STACK_LINE(1016)
																				Float tmp34 = v->x;		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(1016)
																				Float tmp35 = (w->y - u->y);		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(1016)
																				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(1016)
																				hx::AddEq(area,tmp36);
																				HX_STACK_LINE(1016)
																				Float tmp37 = (w->y * v->x);		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1016)
																				Float tmp38 = (w->x * v->y);		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1016)
																				Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(1016)
																				Float cf = tmp39;		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(1016)
																				Float tmp40 = (v->x + w->x);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(1016)
																				Float tmp41 = cf;		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(1016)
																				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(1016)
																				hx::AddEq(_this1->localCOMx,tmp42);
																				HX_STACK_LINE(1016)
																				Float tmp43 = (v->y + w->y);		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(1016)
																				Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(1016)
																				Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1016)
																				hx::AddEq(_this1->localCOMy,tmp45);
																			}
																			HX_STACK_LINE(1016)
																			u = v;
																			HX_STACK_LINE(1016)
																			v = w;
																			HX_STACK_LINE(1016)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1016)
																			::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																			HX_STACK_LINE(1016)
																			{
																				HX_STACK_LINE(1016)
																				Float tmp34 = v->x;		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(1016)
																				Float tmp35 = (w1->y - u->y);		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(1016)
																				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(1016)
																				hx::AddEq(area,tmp36);
																				HX_STACK_LINE(1016)
																				Float tmp37 = (w1->y * v->x);		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1016)
																				Float tmp38 = (w1->x * v->y);		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1016)
																				Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(1016)
																				Float cf = tmp39;		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(1016)
																				Float tmp40 = (v->x + w1->x);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(1016)
																				Float tmp41 = cf;		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(1016)
																				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(1016)
																				hx::AddEq(_this1->localCOMx,tmp42);
																				HX_STACK_LINE(1016)
																				Float tmp43 = (v->y + w1->y);		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(1016)
																				Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(1016)
																				Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1016)
																				hx::AddEq(_this1->localCOMy,tmp45);
																			}
																		}
																		HX_STACK_LINE(1016)
																		Float tmp32 = ((int)3 * area);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(1016)
																		Float tmp33 = (Float((int)1) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1016)
																		area = tmp33;
																		HX_STACK_LINE(1016)
																		{
																			HX_STACK_LINE(1016)
																			Float t = area;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1016)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(1016)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																}
															}
															HX_STACK_LINE(1016)
															bool tmp24 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1016)
															if ((tmp24)){
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 tmp25 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1016)
																tmp25->x = _this->localCOMx;
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 tmp26 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1016)
																tmp26->y = _this->localCOMy;
																HX_STACK_LINE(1016)
																{
																}
															}
														}
													}
													HX_STACK_LINE(1016)
													{
														HX_STACK_LINE(1016)
														::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1016)
														bool tmp20 = _this1->zip_axis;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1016)
														if ((tmp20)){
															HX_STACK_LINE(1016)
															_this1->zip_axis = false;
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																Float tmp21 = _this1->rot;		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1016)
																Float tmp22 = ::Math_obj::sin(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1016)
																_this1->axisx = tmp22;
																HX_STACK_LINE(1016)
																Float tmp23 = _this1->rot;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(1016)
																Float tmp24 = ::Math_obj::cos(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1016)
																_this1->axisy = tmp24;
																HX_STACK_LINE(1016)
																Dynamic();
															}
														}
													}
													HX_STACK_LINE(1016)
													{
														HX_STACK_LINE(1016)
														Float tmp20 = _this->body->posx;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1016)
														Float tmp21 = _this->body->axisy;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1016)
														Float tmp22 = _this->localCOMx;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1016)
														Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1016)
														Float tmp24 = _this->body->axisx;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1016)
														Float tmp25 = _this->localCOMy;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1016)
														Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1016)
														Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1016)
														Float tmp28 = (tmp20 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1016)
														_this->worldCOMx = tmp28;
														HX_STACK_LINE(1016)
														Float tmp29 = _this->body->posy;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1016)
														Float tmp30 = _this->localCOMx;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1016)
														Float tmp31 = _this->body->axisx;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1016)
														Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1016)
														Float tmp33 = _this->localCOMy;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1016)
														Float tmp34 = _this->body->axisy;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1016)
														Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1016)
														Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1016)
														Float tmp37 = (tmp29 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1016)
														_this->worldCOMy = tmp37;
													}
												}
											}
										}
										HX_STACK_LINE(1016)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1016)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											Float tmp18 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1016)
											_this->aabb->minx = tmp18;
											HX_STACK_LINE(1016)
											Float tmp19 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1016)
											_this->aabb->miny = tmp19;
										}
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											Float tmp18 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1016)
											_this->aabb->maxx = tmp18;
											HX_STACK_LINE(1016)
											Float tmp19 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1016)
											_this->aabb->maxy = tmp19;
										}
									}
									else{
										HX_STACK_LINE(1016)
										::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											bool tmp18 = _this->zip_gverts;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1016)
											if ((tmp18)){
												HX_STACK_LINE(1016)
												bool tmp19 = (_this->body != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1016)
												if ((tmp19)){
													HX_STACK_LINE(1016)
													_this->zip_gverts = false;
													HX_STACK_LINE(1016)
													_this->validate_lverts();
													HX_STACK_LINE(1016)
													{
														HX_STACK_LINE(1016)
														::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1016)
														bool tmp20 = _this1->zip_axis;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1016)
														if ((tmp20)){
															HX_STACK_LINE(1016)
															_this1->zip_axis = false;
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																Float tmp21 = _this1->rot;		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1016)
																Float tmp22 = ::Math_obj::sin(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1016)
																_this1->axisx = tmp22;
																HX_STACK_LINE(1016)
																Float tmp23 = _this1->rot;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(1016)
																Float tmp24 = ::Math_obj::cos(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1016)
																_this1->axisy = tmp24;
																HX_STACK_LINE(1016)
																Dynamic();
															}
														}
													}
													HX_STACK_LINE(1016)
													::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1016)
													::zpp_nape::geom::ZPP_Vec2 li = tmp20;		HX_STACK_VAR(li,"li");
													HX_STACK_LINE(1016)
													{
														HX_STACK_LINE(1016)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = _this->gverts->next;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1016)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp21;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(1016)
														while((true)){
															HX_STACK_LINE(1016)
															bool tmp22 = (cx_ite != null());		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1016)
															bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1016)
															if ((tmp23)){
																HX_STACK_LINE(1016)
																break;
															}
															HX_STACK_LINE(1016)
															::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
																HX_STACK_LINE(1016)
																li = li->next;
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	Float tmp24 = _this->body->posx;		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(1016)
																	Float tmp25 = _this->body->axisy;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(1016)
																	Float tmp26 = l->x;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(1016)
																	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(1016)
																	Float tmp28 = _this->body->axisx;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(1016)
																	Float tmp29 = l->y;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1016)
																	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1016)
																	Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1016)
																	Float tmp32 = (tmp24 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1016)
																	g->x = tmp32;
																	HX_STACK_LINE(1016)
																	Float tmp33 = _this->body->posy;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(1016)
																	Float tmp34 = l->x;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1016)
																	Float tmp35 = _this->body->axisx;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1016)
																	Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1016)
																	Float tmp37 = l->y;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1016)
																	Float tmp38 = _this->body->axisy;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1016)
																	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1016)
																	Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1016)
																	Float tmp41 = (tmp33 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1016)
																	g->y = tmp41;
																}
															}
															HX_STACK_LINE(1016)
															cx_ite = cx_ite->next;
														}
													}
												}
											}
										}
										HX_STACK_LINE(1016)
										::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1016)
										bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1016)
										if ((tmp19)){
											HX_STACK_LINE(1016)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
										}
										HX_STACK_LINE(1016)
										::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->gverts->next;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1016)
										::zpp_nape::geom::ZPP_Vec2 p0 = tmp20;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1016)
											_this->aabb->miny = p0->y;
											HX_STACK_LINE(1016)
											{
											}
										}
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1016)
											_this->aabb->maxy = p0->y;
											HX_STACK_LINE(1016)
											{
											}
										}
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											::zpp_nape::geom::ZPP_Vec2 tmp21 = _this->gverts->next;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1016)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp21->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1016)
											while((true)){
												HX_STACK_LINE(1016)
												bool tmp22 = (cx_ite != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1016)
												bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1016)
												if ((tmp23)){
													HX_STACK_LINE(1016)
													break;
												}
												HX_STACK_LINE(1016)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1016)
												{
													HX_STACK_LINE(1016)
													Float tmp24 = p->x;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1016)
													Float tmp25 = _this->aabb->minx;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1016)
													bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1016)
													if ((tmp26)){
														HX_STACK_LINE(1016)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1016)
													Float tmp27 = p->x;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1016)
													Float tmp28 = _this->aabb->maxx;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1016)
													bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1016)
													if ((tmp29)){
														HX_STACK_LINE(1016)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1016)
													Float tmp30 = p->y;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1016)
													Float tmp31 = _this->aabb->miny;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1016)
													bool tmp32 = (tmp30 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1016)
													if ((tmp32)){
														HX_STACK_LINE(1016)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1016)
													Float tmp33 = p->y;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1016)
													Float tmp34 = _this->aabb->maxy;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1016)
													bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1016)
													if ((tmp35)){
														HX_STACK_LINE(1016)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1016)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1017)
							Float tmp13 = (a->minx - ((Float)3.0));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1017)
							aabb->minx = tmp13;
							HX_STACK_LINE(1017)
							Float tmp14 = (a->miny - ((Float)3.0));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1017)
							aabb->miny = tmp14;
							HX_STACK_LINE(1017)
							Float tmp15 = (a->maxx + ((Float)3.0));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1017)
							aabb->maxx = tmp15;
							HX_STACK_LINE(1017)
							Float tmp16 = (a->maxy + ((Float)3.0));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1017)
							aabb->maxy = tmp16;
						}
						HX_STACK_LINE(1018)
						int tmp13 = shape->body->type;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1018)
						int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1018)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1018)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1018)
						if ((tmp15)){
							HX_STACK_LINE(1018)
							tmp16 = false;
						}
						else{
							HX_STACK_LINE(1018)
							::zpp_nape::space::ZPP_Component tmp17 = shape->body->component;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1018)
							bool tmp18 = tmp17->sleeping;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1018)
							tmp16 = !(tmp18);
						}
						HX_STACK_LINE(1018)
						bool tmp17 = node->dyn = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1018)
						::zpp_nape::space::ZPP_AABBTree tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1018)
						if ((tmp17)){
							HX_STACK_LINE(1018)
							tmp18 = this->dtree;
						}
						else{
							HX_STACK_LINE(1018)
							tmp18 = this->stree;
						}
						HX_STACK_LINE(1018)
						::zpp_nape::space::ZPP_AABBTree tree = tmp18;		HX_STACK_VAR(tree,"tree");
						HX_STACK_LINE(1019)
						{
							HX_STACK_LINE(1019)
							bool tmp19 = (tree->root == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1019)
							if ((tmp19)){
								HX_STACK_LINE(1019)
								tree->root = node;
								HX_STACK_LINE(1019)
								tree->root->parent = null();
							}
							else{
								HX_STACK_LINE(1019)
								::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
								HX_STACK_LINE(1019)
								::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
								HX_STACK_LINE(1019)
								while((true)){
									HX_STACK_LINE(1019)
									bool tmp20 = (node1->child1 == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1019)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1019)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1019)
									if ((tmp22)){
										HX_STACK_LINE(1019)
										break;
									}
									HX_STACK_LINE(1019)
									::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
									HX_STACK_LINE(1019)
									::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
									HX_STACK_LINE(1019)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1019)
										Float tmp24 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1019)
										Float tmp25 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1019)
										Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1019)
										tmp23 = (tmp26 * (int)2);
									}
									HX_STACK_LINE(1019)
									Float area = tmp23;		HX_STACK_VAR(area,"area");
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB tmp24 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB _this = tmp24;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1019)
										bool tmp25 = (a->minx < leafaabb->minx);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1019)
										Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1019)
										if ((tmp25)){
											HX_STACK_LINE(1019)
											tmp26 = a->minx;
										}
										else{
											HX_STACK_LINE(1019)
											tmp26 = leafaabb->minx;
										}
										HX_STACK_LINE(1019)
										_this->minx = tmp26;
										HX_STACK_LINE(1019)
										bool tmp27 = (a->miny < leafaabb->miny);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1019)
										Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1019)
										if ((tmp27)){
											HX_STACK_LINE(1019)
											tmp28 = a->miny;
										}
										else{
											HX_STACK_LINE(1019)
											tmp28 = leafaabb->miny;
										}
										HX_STACK_LINE(1019)
										_this->miny = tmp28;
										HX_STACK_LINE(1019)
										bool tmp29 = (a->maxx > leafaabb->maxx);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1019)
										Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1019)
										if ((tmp29)){
											HX_STACK_LINE(1019)
											tmp30 = a->maxx;
										}
										else{
											HX_STACK_LINE(1019)
											tmp30 = leafaabb->maxx;
										}
										HX_STACK_LINE(1019)
										_this->maxx = tmp30;
										HX_STACK_LINE(1019)
										bool tmp31 = (a->maxy > leafaabb->maxy);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1019)
										Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1019)
										if ((tmp31)){
											HX_STACK_LINE(1019)
											tmp32 = a->maxy;
										}
										else{
											HX_STACK_LINE(1019)
											tmp32 = leafaabb->maxy;
										}
										HX_STACK_LINE(1019)
										_this->maxy = tmp32;
									}
									HX_STACK_LINE(1019)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB tmp25 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB _this = tmp25;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1019)
										Float tmp26 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1019)
										Float tmp27 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1019)
										Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1019)
										tmp24 = (tmp28 * (int)2);
									}
									HX_STACK_LINE(1019)
									Float carea = tmp24;		HX_STACK_VAR(carea,"carea");
									HX_STACK_LINE(1019)
									Float tmp25 = ((int)2 * carea);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1019)
									Float cost = tmp25;		HX_STACK_VAR(cost,"cost");
									HX_STACK_LINE(1019)
									Float tmp26 = (carea - area);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1019)
									Float tmp27 = ((int)2 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1019)
									Float icost = tmp27;		HX_STACK_VAR(icost,"icost");
									HX_STACK_LINE(1019)
									Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										{
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB tmp29 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB _this = tmp29;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1019)
											bool tmp30 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1019)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1019)
											if ((tmp30)){
												HX_STACK_LINE(1019)
												tmp31 = leafaabb->minx;
											}
											else{
												HX_STACK_LINE(1019)
												tmp31 = b->minx;
											}
											HX_STACK_LINE(1019)
											_this->minx = tmp31;
											HX_STACK_LINE(1019)
											bool tmp32 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1019)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1019)
											if ((tmp32)){
												HX_STACK_LINE(1019)
												tmp33 = leafaabb->miny;
											}
											else{
												HX_STACK_LINE(1019)
												tmp33 = b->miny;
											}
											HX_STACK_LINE(1019)
											_this->miny = tmp33;
											HX_STACK_LINE(1019)
											bool tmp34 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1019)
											Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1019)
											if ((tmp34)){
												HX_STACK_LINE(1019)
												tmp35 = leafaabb->maxx;
											}
											else{
												HX_STACK_LINE(1019)
												tmp35 = b->maxx;
											}
											HX_STACK_LINE(1019)
											_this->maxx = tmp35;
											HX_STACK_LINE(1019)
											bool tmp36 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1019)
											Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1019)
											if ((tmp36)){
												HX_STACK_LINE(1019)
												tmp37 = leafaabb->maxy;
											}
											else{
												HX_STACK_LINE(1019)
												tmp37 = b->maxy;
											}
											HX_STACK_LINE(1019)
											_this->maxy = tmp37;
										}
										HX_STACK_LINE(1019)
										bool tmp29 = (child1->child1 == null());		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1019)
										if ((tmp29)){
											HX_STACK_LINE(1019)
											Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1019)
											{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB tmp31 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB _this = tmp31;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1019)
												Float tmp32 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												Float tmp33 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1019)
												tmp30 = (tmp34 * (int)2);
											}
											HX_STACK_LINE(1019)
											Float tmp31 = icost;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1019)
											tmp28 = (tmp30 + tmp31);
										}
										else{
											HX_STACK_LINE(1019)
											Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1019)
											{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1019)
												Float tmp31 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1019)
												Float tmp32 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												tmp30 = (tmp33 * (int)2);
											}
											HX_STACK_LINE(1019)
											Float oarea = tmp30;		HX_STACK_VAR(oarea,"oarea");
											HX_STACK_LINE(1019)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1019)
											{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB tmp32 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB _this = tmp32;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1019)
												Float tmp33 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												Float tmp34 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1019)
												Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1019)
												tmp31 = (tmp35 * (int)2);
											}
											HX_STACK_LINE(1019)
											Float narea = tmp31;		HX_STACK_VAR(narea,"narea");
											HX_STACK_LINE(1019)
											Float tmp32 = (narea - oarea);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1019)
											Float tmp33 = icost;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1019)
											tmp28 = (tmp32 + tmp33);
										}
									}
									HX_STACK_LINE(1019)
									Float cost1 = tmp28;		HX_STACK_VAR(cost1,"cost1");
									HX_STACK_LINE(1019)
									Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										{
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB tmp30 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB _this = tmp30;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1019)
											bool tmp31 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1019)
											Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1019)
											if ((tmp31)){
												HX_STACK_LINE(1019)
												tmp32 = leafaabb->minx;
											}
											else{
												HX_STACK_LINE(1019)
												tmp32 = b->minx;
											}
											HX_STACK_LINE(1019)
											_this->minx = tmp32;
											HX_STACK_LINE(1019)
											bool tmp33 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1019)
											Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1019)
											if ((tmp33)){
												HX_STACK_LINE(1019)
												tmp34 = leafaabb->miny;
											}
											else{
												HX_STACK_LINE(1019)
												tmp34 = b->miny;
											}
											HX_STACK_LINE(1019)
											_this->miny = tmp34;
											HX_STACK_LINE(1019)
											bool tmp35 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1019)
											Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1019)
											if ((tmp35)){
												HX_STACK_LINE(1019)
												tmp36 = leafaabb->maxx;
											}
											else{
												HX_STACK_LINE(1019)
												tmp36 = b->maxx;
											}
											HX_STACK_LINE(1019)
											_this->maxx = tmp36;
											HX_STACK_LINE(1019)
											bool tmp37 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1019)
											Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1019)
											if ((tmp37)){
												HX_STACK_LINE(1019)
												tmp38 = leafaabb->maxy;
											}
											else{
												HX_STACK_LINE(1019)
												tmp38 = b->maxy;
											}
											HX_STACK_LINE(1019)
											_this->maxy = tmp38;
										}
										HX_STACK_LINE(1019)
										bool tmp30 = (child2->child1 == null());		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1019)
										if ((tmp30)){
											HX_STACK_LINE(1019)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1019)
											{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB tmp32 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB _this = tmp32;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1019)
												Float tmp33 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												Float tmp34 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1019)
												Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1019)
												tmp31 = (tmp35 * (int)2);
											}
											HX_STACK_LINE(1019)
											Float tmp32 = icost;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1019)
											tmp29 = (tmp31 + tmp32);
										}
										else{
											HX_STACK_LINE(1019)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1019)
											{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1019)
												Float tmp32 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												Float tmp33 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1019)
												tmp31 = (tmp34 * (int)2);
											}
											HX_STACK_LINE(1019)
											Float oarea = tmp31;		HX_STACK_VAR(oarea,"oarea");
											HX_STACK_LINE(1019)
											Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1019)
											{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB tmp33 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB _this = tmp33;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1019)
												Float tmp34 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1019)
												Float tmp35 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1019)
												Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1019)
												tmp32 = (tmp36 * (int)2);
											}
											HX_STACK_LINE(1019)
											Float narea = tmp32;		HX_STACK_VAR(narea,"narea");
											HX_STACK_LINE(1019)
											Float tmp33 = (narea - oarea);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1019)
											Float tmp34 = icost;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1019)
											tmp29 = (tmp33 + tmp34);
										}
									}
									HX_STACK_LINE(1019)
									Float cost2 = tmp29;		HX_STACK_VAR(cost2,"cost2");
									HX_STACK_LINE(1019)
									bool tmp30 = (cost < cost1);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1019)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1019)
									if ((tmp30)){
										HX_STACK_LINE(1019)
										tmp31 = (cost < cost2);
									}
									else{
										HX_STACK_LINE(1019)
										tmp31 = false;
									}
									HX_STACK_LINE(1019)
									if ((tmp31)){
										HX_STACK_LINE(1019)
										break;
									}
									else{
										HX_STACK_LINE(1019)
										bool tmp32 = (cost1 < cost2);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1019)
										::zpp_nape::space::ZPP_AABBNode tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1019)
										if ((tmp32)){
											HX_STACK_LINE(1019)
											tmp33 = child1;
										}
										else{
											HX_STACK_LINE(1019)
											tmp33 = child2;
										}
										HX_STACK_LINE(1019)
										node1 = tmp33;
									}
								}
								HX_STACK_LINE(1019)
								::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
								HX_STACK_LINE(1019)
								::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
								HX_STACK_LINE(1019)
								::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
								HX_STACK_LINE(1019)
								{
									HX_STACK_LINE(1019)
									::zpp_nape::space::ZPP_AABBNode tmp20 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1019)
									bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1019)
									if ((tmp21)){
										HX_STACK_LINE(1019)
										::zpp_nape::space::ZPP_AABBNode tmp22 = ::zpp_nape::space::ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1019)
										nparent = tmp22;
									}
									else{
										HX_STACK_LINE(1019)
										::zpp_nape::space::ZPP_AABBNode tmp22 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1019)
										nparent = tmp22;
										HX_STACK_LINE(1019)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
										HX_STACK_LINE(1019)
										nparent->next = null();
									}
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										{
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB tmp22 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1019)
											bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1019)
											if ((tmp23)){
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB tmp24 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1019)
												nparent->aabb = tmp24;
											}
											else{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB tmp24 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1019)
												nparent->aabb = tmp24;
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB tmp25 = nparent->aabb->next;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = tmp25;
												HX_STACK_LINE(1019)
												nparent->aabb->next = null();
											}
											HX_STACK_LINE(1019)
											Dynamic();
										}
										HX_STACK_LINE(1019)
										nparent->moved = false;
										HX_STACK_LINE(1019)
										nparent->synced = false;
										HX_STACK_LINE(1019)
										nparent->first_sync = false;
									}
								}
								HX_STACK_LINE(1019)
								nparent->parent = oparent;
								HX_STACK_LINE(1019)
								{
									HX_STACK_LINE(1019)
									::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1019)
									::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1019)
									bool tmp20 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1019)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1019)
									if ((tmp20)){
										HX_STACK_LINE(1019)
										tmp21 = leafaabb->minx;
									}
									else{
										HX_STACK_LINE(1019)
										tmp21 = b->minx;
									}
									HX_STACK_LINE(1019)
									_this->minx = tmp21;
									HX_STACK_LINE(1019)
									bool tmp22 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1019)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1019)
									if ((tmp22)){
										HX_STACK_LINE(1019)
										tmp23 = leafaabb->miny;
									}
									else{
										HX_STACK_LINE(1019)
										tmp23 = b->miny;
									}
									HX_STACK_LINE(1019)
									_this->miny = tmp23;
									HX_STACK_LINE(1019)
									bool tmp24 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1019)
									Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1019)
									if ((tmp24)){
										HX_STACK_LINE(1019)
										tmp25 = leafaabb->maxx;
									}
									else{
										HX_STACK_LINE(1019)
										tmp25 = b->maxx;
									}
									HX_STACK_LINE(1019)
									_this->maxx = tmp25;
									HX_STACK_LINE(1019)
									bool tmp26 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1019)
									Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1019)
									if ((tmp26)){
										HX_STACK_LINE(1019)
										tmp27 = leafaabb->maxy;
									}
									else{
										HX_STACK_LINE(1019)
										tmp27 = b->maxy;
									}
									HX_STACK_LINE(1019)
									_this->maxy = tmp27;
								}
								HX_STACK_LINE(1019)
								int tmp20 = (sibling->height + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1019)
								nparent->height = tmp20;
								HX_STACK_LINE(1019)
								bool tmp21 = (oparent != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1019)
								if ((tmp21)){
									HX_STACK_LINE(1019)
									bool tmp22 = (oparent->child1 == sibling);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1019)
									if ((tmp22)){
										HX_STACK_LINE(1019)
										oparent->child1 = nparent;
									}
									else{
										HX_STACK_LINE(1019)
										oparent->child2 = nparent;
									}
									HX_STACK_LINE(1019)
									nparent->child1 = sibling;
									HX_STACK_LINE(1019)
									nparent->child2 = node;
									HX_STACK_LINE(1019)
									sibling->parent = nparent;
									HX_STACK_LINE(1019)
									node->parent = nparent;
								}
								else{
									HX_STACK_LINE(1019)
									nparent->child1 = sibling;
									HX_STACK_LINE(1019)
									nparent->child2 = node;
									HX_STACK_LINE(1019)
									sibling->parent = nparent;
									HX_STACK_LINE(1019)
									node->parent = nparent;
									HX_STACK_LINE(1019)
									tree->root = nparent;
								}
								HX_STACK_LINE(1019)
								node1 = node->parent;
								HX_STACK_LINE(1019)
								while((true)){
									HX_STACK_LINE(1019)
									bool tmp22 = (node1 != null());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1019)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1019)
									if ((tmp23)){
										HX_STACK_LINE(1019)
										break;
									}
									HX_STACK_LINE(1019)
									bool tmp24 = (node1->child1 == null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1019)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1019)
									bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1019)
									if ((tmp25)){
										HX_STACK_LINE(1019)
										tmp26 = (node1->height < (int)2);
									}
									else{
										HX_STACK_LINE(1019)
										tmp26 = true;
									}
									HX_STACK_LINE(1019)
									::zpp_nape::space::ZPP_AABBNode tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1019)
									if ((tmp26)){
										HX_STACK_LINE(1019)
										tmp27 = node1;
									}
									else{
										HX_STACK_LINE(1019)
										::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1019)
										::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(1019)
										int tmp28 = (c->height - b->height);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1019)
										int balance = tmp28;		HX_STACK_VAR(balance,"balance");
										HX_STACK_LINE(1019)
										bool tmp29 = (balance > (int)1);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1019)
										if ((tmp29)){
											HX_STACK_LINE(1019)
											::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(1019)
											::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(1019)
											c->child1 = node1;
											HX_STACK_LINE(1019)
											c->parent = node1->parent;
											HX_STACK_LINE(1019)
											node1->parent = c;
											HX_STACK_LINE(1019)
											bool tmp30 = (c->parent != null());		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1019)
											if ((tmp30)){
												HX_STACK_LINE(1019)
												::zpp_nape::space::ZPP_AABBNode tmp31 = c->parent->child1;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1019)
												::zpp_nape::space::ZPP_AABBNode tmp32 = node1;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												bool tmp33 = (tmp31 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												if ((tmp33)){
													HX_STACK_LINE(1019)
													c->parent->child1 = c;
												}
												else{
													HX_STACK_LINE(1019)
													c->parent->child2 = c;
												}
											}
											else{
												HX_STACK_LINE(1019)
												tree->root = c;
											}
											HX_STACK_LINE(1019)
											bool tmp31 = (f->height > g->height);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1019)
											if ((tmp31)){
												HX_STACK_LINE(1019)
												c->child2 = f;
												HX_STACK_LINE(1019)
												node1->child2 = g;
												HX_STACK_LINE(1019)
												g->parent = node1;
												HX_STACK_LINE(1019)
												{
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1019)
													bool tmp32 = (a->minx < b1->minx);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1019)
													Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													if ((tmp32)){
														HX_STACK_LINE(1019)
														tmp33 = a->minx;
													}
													else{
														HX_STACK_LINE(1019)
														tmp33 = b1->minx;
													}
													HX_STACK_LINE(1019)
													_this->minx = tmp33;
													HX_STACK_LINE(1019)
													bool tmp34 = (a->miny < b1->miny);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1019)
													Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1019)
													if ((tmp34)){
														HX_STACK_LINE(1019)
														tmp35 = a->miny;
													}
													else{
														HX_STACK_LINE(1019)
														tmp35 = b1->miny;
													}
													HX_STACK_LINE(1019)
													_this->miny = tmp35;
													HX_STACK_LINE(1019)
													bool tmp36 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1019)
													Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1019)
													if ((tmp36)){
														HX_STACK_LINE(1019)
														tmp37 = a->maxx;
													}
													else{
														HX_STACK_LINE(1019)
														tmp37 = b1->maxx;
													}
													HX_STACK_LINE(1019)
													_this->maxx = tmp37;
													HX_STACK_LINE(1019)
													bool tmp38 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1019)
													Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1019)
													if ((tmp38)){
														HX_STACK_LINE(1019)
														tmp39 = a->maxy;
													}
													else{
														HX_STACK_LINE(1019)
														tmp39 = b1->maxy;
													}
													HX_STACK_LINE(1019)
													_this->maxy = tmp39;
												}
												HX_STACK_LINE(1019)
												{
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1019)
													bool tmp32 = (a->minx < b1->minx);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1019)
													Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													if ((tmp32)){
														HX_STACK_LINE(1019)
														tmp33 = a->minx;
													}
													else{
														HX_STACK_LINE(1019)
														tmp33 = b1->minx;
													}
													HX_STACK_LINE(1019)
													_this->minx = tmp33;
													HX_STACK_LINE(1019)
													bool tmp34 = (a->miny < b1->miny);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1019)
													Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1019)
													if ((tmp34)){
														HX_STACK_LINE(1019)
														tmp35 = a->miny;
													}
													else{
														HX_STACK_LINE(1019)
														tmp35 = b1->miny;
													}
													HX_STACK_LINE(1019)
													_this->miny = tmp35;
													HX_STACK_LINE(1019)
													bool tmp36 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1019)
													Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1019)
													if ((tmp36)){
														HX_STACK_LINE(1019)
														tmp37 = a->maxx;
													}
													else{
														HX_STACK_LINE(1019)
														tmp37 = b1->maxx;
													}
													HX_STACK_LINE(1019)
													_this->maxx = tmp37;
													HX_STACK_LINE(1019)
													bool tmp38 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1019)
													Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1019)
													if ((tmp38)){
														HX_STACK_LINE(1019)
														tmp39 = a->maxy;
													}
													else{
														HX_STACK_LINE(1019)
														tmp39 = b1->maxy;
													}
													HX_STACK_LINE(1019)
													_this->maxy = tmp39;
												}
												HX_STACK_LINE(1019)
												int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												{
													HX_STACK_LINE(1019)
													int x = b->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1019)
													int y = g->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1019)
													bool tmp33 = (x > y);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													if ((tmp33)){
														HX_STACK_LINE(1019)
														tmp32 = x;
													}
													else{
														HX_STACK_LINE(1019)
														tmp32 = y;
													}
												}
												HX_STACK_LINE(1019)
												int tmp33 = ((int)1 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												node1->height = tmp33;
												HX_STACK_LINE(1019)
												int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1019)
												{
													HX_STACK_LINE(1019)
													int x = node1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1019)
													int y = f->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1019)
													bool tmp35 = (x > y);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1019)
													if ((tmp35)){
														HX_STACK_LINE(1019)
														tmp34 = x;
													}
													else{
														HX_STACK_LINE(1019)
														tmp34 = y;
													}
												}
												HX_STACK_LINE(1019)
												int tmp35 = ((int)1 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1019)
												c->height = tmp35;
											}
											else{
												HX_STACK_LINE(1019)
												c->child2 = g;
												HX_STACK_LINE(1019)
												node1->child2 = f;
												HX_STACK_LINE(1019)
												f->parent = node1;
												HX_STACK_LINE(1019)
												{
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1019)
													bool tmp32 = (a->minx < b1->minx);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1019)
													Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													if ((tmp32)){
														HX_STACK_LINE(1019)
														tmp33 = a->minx;
													}
													else{
														HX_STACK_LINE(1019)
														tmp33 = b1->minx;
													}
													HX_STACK_LINE(1019)
													_this->minx = tmp33;
													HX_STACK_LINE(1019)
													bool tmp34 = (a->miny < b1->miny);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1019)
													Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1019)
													if ((tmp34)){
														HX_STACK_LINE(1019)
														tmp35 = a->miny;
													}
													else{
														HX_STACK_LINE(1019)
														tmp35 = b1->miny;
													}
													HX_STACK_LINE(1019)
													_this->miny = tmp35;
													HX_STACK_LINE(1019)
													bool tmp36 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1019)
													Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1019)
													if ((tmp36)){
														HX_STACK_LINE(1019)
														tmp37 = a->maxx;
													}
													else{
														HX_STACK_LINE(1019)
														tmp37 = b1->maxx;
													}
													HX_STACK_LINE(1019)
													_this->maxx = tmp37;
													HX_STACK_LINE(1019)
													bool tmp38 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1019)
													Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1019)
													if ((tmp38)){
														HX_STACK_LINE(1019)
														tmp39 = a->maxy;
													}
													else{
														HX_STACK_LINE(1019)
														tmp39 = b1->maxy;
													}
													HX_STACK_LINE(1019)
													_this->maxy = tmp39;
												}
												HX_STACK_LINE(1019)
												{
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1019)
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1019)
													bool tmp32 = (a->minx < b1->minx);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1019)
													Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													if ((tmp32)){
														HX_STACK_LINE(1019)
														tmp33 = a->minx;
													}
													else{
														HX_STACK_LINE(1019)
														tmp33 = b1->minx;
													}
													HX_STACK_LINE(1019)
													_this->minx = tmp33;
													HX_STACK_LINE(1019)
													bool tmp34 = (a->miny < b1->miny);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1019)
													Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1019)
													if ((tmp34)){
														HX_STACK_LINE(1019)
														tmp35 = a->miny;
													}
													else{
														HX_STACK_LINE(1019)
														tmp35 = b1->miny;
													}
													HX_STACK_LINE(1019)
													_this->miny = tmp35;
													HX_STACK_LINE(1019)
													bool tmp36 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1019)
													Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1019)
													if ((tmp36)){
														HX_STACK_LINE(1019)
														tmp37 = a->maxx;
													}
													else{
														HX_STACK_LINE(1019)
														tmp37 = b1->maxx;
													}
													HX_STACK_LINE(1019)
													_this->maxx = tmp37;
													HX_STACK_LINE(1019)
													bool tmp38 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1019)
													Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1019)
													if ((tmp38)){
														HX_STACK_LINE(1019)
														tmp39 = a->maxy;
													}
													else{
														HX_STACK_LINE(1019)
														tmp39 = b1->maxy;
													}
													HX_STACK_LINE(1019)
													_this->maxy = tmp39;
												}
												HX_STACK_LINE(1019)
												int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												{
													HX_STACK_LINE(1019)
													int x = b->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1019)
													int y = f->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1019)
													bool tmp33 = (x > y);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													if ((tmp33)){
														HX_STACK_LINE(1019)
														tmp32 = x;
													}
													else{
														HX_STACK_LINE(1019)
														tmp32 = y;
													}
												}
												HX_STACK_LINE(1019)
												int tmp33 = ((int)1 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1019)
												node1->height = tmp33;
												HX_STACK_LINE(1019)
												int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1019)
												{
													HX_STACK_LINE(1019)
													int x = node1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1019)
													int y = g->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1019)
													bool tmp35 = (x > y);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1019)
													if ((tmp35)){
														HX_STACK_LINE(1019)
														tmp34 = x;
													}
													else{
														HX_STACK_LINE(1019)
														tmp34 = y;
													}
												}
												HX_STACK_LINE(1019)
												int tmp35 = ((int)1 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1019)
												c->height = tmp35;
											}
											HX_STACK_LINE(1019)
											tmp27 = c;
										}
										else{
											HX_STACK_LINE(1019)
											bool tmp30 = (balance < (int)-1);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1019)
											if ((tmp30)){
												HX_STACK_LINE(1019)
												::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(1019)
												::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1019)
												b->child1 = node1;
												HX_STACK_LINE(1019)
												b->parent = node1->parent;
												HX_STACK_LINE(1019)
												node1->parent = b;
												HX_STACK_LINE(1019)
												bool tmp31 = (b->parent != null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1019)
												if ((tmp31)){
													HX_STACK_LINE(1019)
													::zpp_nape::space::ZPP_AABBNode tmp32 = b->parent->child1;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1019)
													::zpp_nape::space::ZPP_AABBNode tmp33 = node1;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1019)
													if ((tmp34)){
														HX_STACK_LINE(1019)
														b->parent->child1 = b;
													}
													else{
														HX_STACK_LINE(1019)
														b->parent->child2 = b;
													}
												}
												else{
													HX_STACK_LINE(1019)
													tree->root = b;
												}
												HX_STACK_LINE(1019)
												bool tmp32 = (f->height > g->height);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1019)
												if ((tmp32)){
													HX_STACK_LINE(1019)
													b->child2 = f;
													HX_STACK_LINE(1019)
													node1->child1 = g;
													HX_STACK_LINE(1019)
													g->parent = node1;
													HX_STACK_LINE(1019)
													{
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1019)
														bool tmp33 = (a->minx < b1->minx);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1019)
														Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1019)
														if ((tmp33)){
															HX_STACK_LINE(1019)
															tmp34 = a->minx;
														}
														else{
															HX_STACK_LINE(1019)
															tmp34 = b1->minx;
														}
														HX_STACK_LINE(1019)
														_this->minx = tmp34;
														HX_STACK_LINE(1019)
														bool tmp35 = (a->miny < b1->miny);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1019)
														Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1019)
														if ((tmp35)){
															HX_STACK_LINE(1019)
															tmp36 = a->miny;
														}
														else{
															HX_STACK_LINE(1019)
															tmp36 = b1->miny;
														}
														HX_STACK_LINE(1019)
														_this->miny = tmp36;
														HX_STACK_LINE(1019)
														bool tmp37 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1019)
														Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1019)
														if ((tmp37)){
															HX_STACK_LINE(1019)
															tmp38 = a->maxx;
														}
														else{
															HX_STACK_LINE(1019)
															tmp38 = b1->maxx;
														}
														HX_STACK_LINE(1019)
														_this->maxx = tmp38;
														HX_STACK_LINE(1019)
														bool tmp39 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1019)
														Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1019)
														if ((tmp39)){
															HX_STACK_LINE(1019)
															tmp40 = a->maxy;
														}
														else{
															HX_STACK_LINE(1019)
															tmp40 = b1->maxy;
														}
														HX_STACK_LINE(1019)
														_this->maxy = tmp40;
													}
													HX_STACK_LINE(1019)
													{
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1019)
														bool tmp33 = (a->minx < b1->minx);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1019)
														Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1019)
														if ((tmp33)){
															HX_STACK_LINE(1019)
															tmp34 = a->minx;
														}
														else{
															HX_STACK_LINE(1019)
															tmp34 = b1->minx;
														}
														HX_STACK_LINE(1019)
														_this->minx = tmp34;
														HX_STACK_LINE(1019)
														bool tmp35 = (a->miny < b1->miny);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1019)
														Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1019)
														if ((tmp35)){
															HX_STACK_LINE(1019)
															tmp36 = a->miny;
														}
														else{
															HX_STACK_LINE(1019)
															tmp36 = b1->miny;
														}
														HX_STACK_LINE(1019)
														_this->miny = tmp36;
														HX_STACK_LINE(1019)
														bool tmp37 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1019)
														Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1019)
														if ((tmp37)){
															HX_STACK_LINE(1019)
															tmp38 = a->maxx;
														}
														else{
															HX_STACK_LINE(1019)
															tmp38 = b1->maxx;
														}
														HX_STACK_LINE(1019)
														_this->maxx = tmp38;
														HX_STACK_LINE(1019)
														bool tmp39 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1019)
														Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1019)
														if ((tmp39)){
															HX_STACK_LINE(1019)
															tmp40 = a->maxy;
														}
														else{
															HX_STACK_LINE(1019)
															tmp40 = b1->maxy;
														}
														HX_STACK_LINE(1019)
														_this->maxy = tmp40;
													}
													HX_STACK_LINE(1019)
													int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													{
														HX_STACK_LINE(1019)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1019)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1019)
														bool tmp34 = (x > y);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1019)
														if ((tmp34)){
															HX_STACK_LINE(1019)
															tmp33 = x;
														}
														else{
															HX_STACK_LINE(1019)
															tmp33 = y;
														}
													}
													HX_STACK_LINE(1019)
													int tmp34 = ((int)1 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1019)
													node1->height = tmp34;
													HX_STACK_LINE(1019)
													int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1019)
													{
														HX_STACK_LINE(1019)
														int x = node1->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1019)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1019)
														bool tmp36 = (x > y);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1019)
														if ((tmp36)){
															HX_STACK_LINE(1019)
															tmp35 = x;
														}
														else{
															HX_STACK_LINE(1019)
															tmp35 = y;
														}
													}
													HX_STACK_LINE(1019)
													int tmp36 = ((int)1 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1019)
													b->height = tmp36;
												}
												else{
													HX_STACK_LINE(1019)
													b->child2 = g;
													HX_STACK_LINE(1019)
													node1->child1 = f;
													HX_STACK_LINE(1019)
													f->parent = node1;
													HX_STACK_LINE(1019)
													{
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1019)
														bool tmp33 = (a->minx < b1->minx);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1019)
														Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1019)
														if ((tmp33)){
															HX_STACK_LINE(1019)
															tmp34 = a->minx;
														}
														else{
															HX_STACK_LINE(1019)
															tmp34 = b1->minx;
														}
														HX_STACK_LINE(1019)
														_this->minx = tmp34;
														HX_STACK_LINE(1019)
														bool tmp35 = (a->miny < b1->miny);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1019)
														Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1019)
														if ((tmp35)){
															HX_STACK_LINE(1019)
															tmp36 = a->miny;
														}
														else{
															HX_STACK_LINE(1019)
															tmp36 = b1->miny;
														}
														HX_STACK_LINE(1019)
														_this->miny = tmp36;
														HX_STACK_LINE(1019)
														bool tmp37 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1019)
														Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1019)
														if ((tmp37)){
															HX_STACK_LINE(1019)
															tmp38 = a->maxx;
														}
														else{
															HX_STACK_LINE(1019)
															tmp38 = b1->maxx;
														}
														HX_STACK_LINE(1019)
														_this->maxx = tmp38;
														HX_STACK_LINE(1019)
														bool tmp39 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1019)
														Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1019)
														if ((tmp39)){
															HX_STACK_LINE(1019)
															tmp40 = a->maxy;
														}
														else{
															HX_STACK_LINE(1019)
															tmp40 = b1->maxy;
														}
														HX_STACK_LINE(1019)
														_this->maxy = tmp40;
													}
													HX_STACK_LINE(1019)
													{
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1019)
														bool tmp33 = (a->minx < b1->minx);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1019)
														Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1019)
														if ((tmp33)){
															HX_STACK_LINE(1019)
															tmp34 = a->minx;
														}
														else{
															HX_STACK_LINE(1019)
															tmp34 = b1->minx;
														}
														HX_STACK_LINE(1019)
														_this->minx = tmp34;
														HX_STACK_LINE(1019)
														bool tmp35 = (a->miny < b1->miny);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1019)
														Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1019)
														if ((tmp35)){
															HX_STACK_LINE(1019)
															tmp36 = a->miny;
														}
														else{
															HX_STACK_LINE(1019)
															tmp36 = b1->miny;
														}
														HX_STACK_LINE(1019)
														_this->miny = tmp36;
														HX_STACK_LINE(1019)
														bool tmp37 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1019)
														Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1019)
														if ((tmp37)){
															HX_STACK_LINE(1019)
															tmp38 = a->maxx;
														}
														else{
															HX_STACK_LINE(1019)
															tmp38 = b1->maxx;
														}
														HX_STACK_LINE(1019)
														_this->maxx = tmp38;
														HX_STACK_LINE(1019)
														bool tmp39 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1019)
														Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1019)
														if ((tmp39)){
															HX_STACK_LINE(1019)
															tmp40 = a->maxy;
														}
														else{
															HX_STACK_LINE(1019)
															tmp40 = b1->maxy;
														}
														HX_STACK_LINE(1019)
														_this->maxy = tmp40;
													}
													HX_STACK_LINE(1019)
													int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1019)
													{
														HX_STACK_LINE(1019)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1019)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1019)
														bool tmp34 = (x > y);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1019)
														if ((tmp34)){
															HX_STACK_LINE(1019)
															tmp33 = x;
														}
														else{
															HX_STACK_LINE(1019)
															tmp33 = y;
														}
													}
													HX_STACK_LINE(1019)
													int tmp34 = ((int)1 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1019)
													node1->height = tmp34;
													HX_STACK_LINE(1019)
													int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1019)
													{
														HX_STACK_LINE(1019)
														int x = node1->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1019)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1019)
														bool tmp36 = (x > y);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1019)
														if ((tmp36)){
															HX_STACK_LINE(1019)
															tmp35 = x;
														}
														else{
															HX_STACK_LINE(1019)
															tmp35 = y;
														}
													}
													HX_STACK_LINE(1019)
													int tmp36 = ((int)1 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1019)
													b->height = tmp36;
												}
												HX_STACK_LINE(1019)
												tmp27 = b;
											}
											else{
												HX_STACK_LINE(1019)
												tmp27 = node1;
											}
										}
									}
									HX_STACK_LINE(1019)
									node1 = tmp27;
									HX_STACK_LINE(1019)
									::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
									HX_STACK_LINE(1019)
									::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
									HX_STACK_LINE(1019)
									int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										int x = child1->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1019)
										int y = child2->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(1019)
										bool tmp29 = (x > y);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1019)
										if ((tmp29)){
											HX_STACK_LINE(1019)
											tmp28 = x;
										}
										else{
											HX_STACK_LINE(1019)
											tmp28 = y;
										}
									}
									HX_STACK_LINE(1019)
									int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1019)
									node1->height = tmp29;
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1019)
										::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1019)
										bool tmp30 = (a->minx < b->minx);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1019)
										Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1019)
										if ((tmp30)){
											HX_STACK_LINE(1019)
											tmp31 = a->minx;
										}
										else{
											HX_STACK_LINE(1019)
											tmp31 = b->minx;
										}
										HX_STACK_LINE(1019)
										_this->minx = tmp31;
										HX_STACK_LINE(1019)
										bool tmp32 = (a->miny < b->miny);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1019)
										Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1019)
										if ((tmp32)){
											HX_STACK_LINE(1019)
											tmp33 = a->miny;
										}
										else{
											HX_STACK_LINE(1019)
											tmp33 = b->miny;
										}
										HX_STACK_LINE(1019)
										_this->miny = tmp33;
										HX_STACK_LINE(1019)
										bool tmp34 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1019)
										Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1019)
										if ((tmp34)){
											HX_STACK_LINE(1019)
											tmp35 = a->maxx;
										}
										else{
											HX_STACK_LINE(1019)
											tmp35 = b->maxx;
										}
										HX_STACK_LINE(1019)
										_this->maxx = tmp35;
										HX_STACK_LINE(1019)
										bool tmp36 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1019)
										Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1019)
										if ((tmp36)){
											HX_STACK_LINE(1019)
											tmp37 = a->maxy;
										}
										else{
											HX_STACK_LINE(1019)
											tmp37 = b->maxy;
										}
										HX_STACK_LINE(1019)
										_this->maxy = tmp37;
									}
									HX_STACK_LINE(1019)
									node1 = node1->parent;
								}
							}
						}
						HX_STACK_LINE(1020)
						node->synced = false;
					}
					HX_STACK_LINE(1030)
					node->moved = true;
					HX_STACK_LINE(1031)
					node->mnext = node->snext;
					HX_STACK_LINE(1032)
					node->snext = null();
					HX_STACK_LINE(1033)
					node = node->mnext;
				}
				HX_STACK_LINE(1035)
				{
					HX_STACK_LINE(1036)
					::zpp_nape::space::ZPP_AABBNode tmp6 = this->syncs;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1036)
					::zpp_nape::space::ZPP_AABBNode t = tmp6;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1037)
					::zpp_nape::space::ZPP_AABBNode tmp7 = this->moves;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1037)
					this->syncs = tmp7;
					HX_STACK_LINE(1038)
					this->moves = t;
				}
			}
			else{
				HX_STACK_LINE(1042)
				while((true)){
					HX_STACK_LINE(1042)
					::zpp_nape::space::ZPP_AABBNode tmp5 = this->syncs;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1042)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1042)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1042)
					if ((tmp7)){
						HX_STACK_LINE(1042)
						break;
					}
					HX_STACK_LINE(1043)
					::zpp_nape::space::ZPP_AABBNode tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1043)
					{
						HX_STACK_LINE(1052)
						::zpp_nape::space::ZPP_AABBNode tmp9 = this->syncs;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1052)
						::zpp_nape::space::ZPP_AABBNode ret = tmp9;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1053)
						this->syncs = ret->snext;
						HX_STACK_LINE(1054)
						ret->snext = null();
						HX_STACK_LINE(1055)
						tmp8 = ret;
					}
					HX_STACK_LINE(1043)
					::zpp_nape::space::ZPP_AABBNode node = tmp8;		HX_STACK_VAR(node,"node");
					HX_STACK_LINE(1057)
					{
						HX_STACK_LINE(1058)
						::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1075)
						bool tmp9 = node->first_sync;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1075)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1075)
						if ((tmp10)){
							HX_STACK_LINE(1076)
							bool tmp11 = node->dyn;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1076)
							::zpp_nape::space::ZPP_AABBTree tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1076)
							if ((tmp11)){
								HX_STACK_LINE(1076)
								tmp12 = this->dtree;
							}
							else{
								HX_STACK_LINE(1076)
								tmp12 = this->stree;
							}
							HX_STACK_LINE(1076)
							::zpp_nape::space::ZPP_AABBTree tree = tmp12;		HX_STACK_VAR(tree,"tree");
							HX_STACK_LINE(1077)
							{
								HX_STACK_LINE(1077)
								bool tmp13 = (node == tree->root);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1077)
								if ((tmp13)){
									HX_STACK_LINE(1077)
									tree->root = null();
									HX_STACK_LINE(1077)
									Dynamic();
								}
								else{
									HX_STACK_LINE(1077)
									::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
									HX_STACK_LINE(1077)
									::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
									HX_STACK_LINE(1077)
									bool tmp14 = (parent->child1 == node);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1077)
									::zpp_nape::space::ZPP_AABBNode tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1077)
									if ((tmp14)){
										HX_STACK_LINE(1077)
										tmp15 = parent->child2;
									}
									else{
										HX_STACK_LINE(1077)
										tmp15 = parent->child1;
									}
									HX_STACK_LINE(1077)
									::zpp_nape::space::ZPP_AABBNode sibling = tmp15;		HX_STACK_VAR(sibling,"sibling");
									HX_STACK_LINE(1077)
									bool tmp16 = (gparent != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1077)
									if ((tmp16)){
										HX_STACK_LINE(1077)
										bool tmp17 = (gparent->child1 == parent);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1077)
										if ((tmp17)){
											HX_STACK_LINE(1077)
											gparent->child1 = sibling;
										}
										else{
											HX_STACK_LINE(1077)
											gparent->child2 = sibling;
										}
										HX_STACK_LINE(1077)
										sibling->parent = gparent;
										HX_STACK_LINE(1077)
										{
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1077)
											{
												HX_STACK_LINE(1077)
												o->height = (int)-1;
												HX_STACK_LINE(1077)
												{
													HX_STACK_LINE(1077)
													::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1077)
													{
														HX_STACK_LINE(1077)
														bool tmp18 = (o1->outer != null());		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1077)
														if ((tmp18)){
															HX_STACK_LINE(1077)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1077)
															o1->outer = null();
														}
														HX_STACK_LINE(1077)
														::nape::geom::Vec2 tmp19 = o1->wrap_max = null();		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1077)
														o1->wrap_min = tmp19;
														HX_STACK_LINE(1077)
														o1->_invalidate = null();
														HX_STACK_LINE(1077)
														o1->_validate = null();
													}
													HX_STACK_LINE(1077)
													::zpp_nape::geom::ZPP_AABB tmp18 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1077)
													o1->next = tmp18;
													HX_STACK_LINE(1077)
													::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
												}
												HX_STACK_LINE(1077)
												::zpp_nape::space::ZPP_AABBNode tmp18 = o->parent = null();		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1077)
												::zpp_nape::space::ZPP_AABBNode tmp19 = o->child2 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1077)
												o->child1 = tmp19;
												HX_STACK_LINE(1077)
												o->next = null();
												HX_STACK_LINE(1077)
												o->snext = null();
												HX_STACK_LINE(1077)
												o->mnext = null();
											}
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode tmp18 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1077)
											o->next = tmp18;
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
										}
										HX_STACK_LINE(1077)
										::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
										HX_STACK_LINE(1077)
										while((true)){
											HX_STACK_LINE(1077)
											bool tmp18 = (node1 != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1077)
											bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1077)
											if ((tmp19)){
												HX_STACK_LINE(1077)
												break;
											}
											HX_STACK_LINE(1077)
											bool tmp20 = (node1->child1 == null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1077)
											bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1077)
											bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1077)
											if ((tmp21)){
												HX_STACK_LINE(1077)
												tmp22 = (node1->height < (int)2);
											}
											else{
												HX_STACK_LINE(1077)
												tmp22 = true;
											}
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1077)
											if ((tmp22)){
												HX_STACK_LINE(1077)
												tmp23 = node1;
											}
											else{
												HX_STACK_LINE(1077)
												::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1077)
												::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(1077)
												int tmp24 = (c->height - b->height);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1077)
												int balance = tmp24;		HX_STACK_VAR(balance,"balance");
												HX_STACK_LINE(1077)
												bool tmp25 = (balance > (int)1);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1077)
												if ((tmp25)){
													HX_STACK_LINE(1077)
													::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
													HX_STACK_LINE(1077)
													::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(1077)
													c->child1 = node1;
													HX_STACK_LINE(1077)
													c->parent = node1->parent;
													HX_STACK_LINE(1077)
													node1->parent = c;
													HX_STACK_LINE(1077)
													bool tmp26 = (c->parent != null());		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1077)
													if ((tmp26)){
														HX_STACK_LINE(1077)
														::zpp_nape::space::ZPP_AABBNode tmp27 = c->parent->child1;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1077)
														::zpp_nape::space::ZPP_AABBNode tmp28 = node1;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1077)
														bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1077)
														if ((tmp29)){
															HX_STACK_LINE(1077)
															c->parent->child1 = c;
														}
														else{
															HX_STACK_LINE(1077)
															c->parent->child2 = c;
														}
													}
													else{
														HX_STACK_LINE(1077)
														tree->root = c;
													}
													HX_STACK_LINE(1077)
													bool tmp27 = (f->height > g->height);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1077)
													if ((tmp27)){
														HX_STACK_LINE(1077)
														c->child2 = f;
														HX_STACK_LINE(1077)
														node1->child2 = g;
														HX_STACK_LINE(1077)
														g->parent = node1;
														HX_STACK_LINE(1077)
														{
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
															HX_STACK_LINE(1077)
															bool tmp28 = (a->minx < b1->minx);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1077)
															Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															if ((tmp28)){
																HX_STACK_LINE(1077)
																tmp29 = a->minx;
															}
															else{
																HX_STACK_LINE(1077)
																tmp29 = b1->minx;
															}
															HX_STACK_LINE(1077)
															_this->minx = tmp29;
															HX_STACK_LINE(1077)
															bool tmp30 = (a->miny < b1->miny);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1077)
															Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1077)
															if ((tmp30)){
																HX_STACK_LINE(1077)
																tmp31 = a->miny;
															}
															else{
																HX_STACK_LINE(1077)
																tmp31 = b1->miny;
															}
															HX_STACK_LINE(1077)
															_this->miny = tmp31;
															HX_STACK_LINE(1077)
															bool tmp32 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1077)
															Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1077)
															if ((tmp32)){
																HX_STACK_LINE(1077)
																tmp33 = a->maxx;
															}
															else{
																HX_STACK_LINE(1077)
																tmp33 = b1->maxx;
															}
															HX_STACK_LINE(1077)
															_this->maxx = tmp33;
															HX_STACK_LINE(1077)
															bool tmp34 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1077)
															Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1077)
															if ((tmp34)){
																HX_STACK_LINE(1077)
																tmp35 = a->maxy;
															}
															else{
																HX_STACK_LINE(1077)
																tmp35 = b1->maxy;
															}
															HX_STACK_LINE(1077)
															_this->maxy = tmp35;
														}
														HX_STACK_LINE(1077)
														{
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
															HX_STACK_LINE(1077)
															bool tmp28 = (a->minx < b1->minx);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1077)
															Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															if ((tmp28)){
																HX_STACK_LINE(1077)
																tmp29 = a->minx;
															}
															else{
																HX_STACK_LINE(1077)
																tmp29 = b1->minx;
															}
															HX_STACK_LINE(1077)
															_this->minx = tmp29;
															HX_STACK_LINE(1077)
															bool tmp30 = (a->miny < b1->miny);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1077)
															Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1077)
															if ((tmp30)){
																HX_STACK_LINE(1077)
																tmp31 = a->miny;
															}
															else{
																HX_STACK_LINE(1077)
																tmp31 = b1->miny;
															}
															HX_STACK_LINE(1077)
															_this->miny = tmp31;
															HX_STACK_LINE(1077)
															bool tmp32 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1077)
															Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1077)
															if ((tmp32)){
																HX_STACK_LINE(1077)
																tmp33 = a->maxx;
															}
															else{
																HX_STACK_LINE(1077)
																tmp33 = b1->maxx;
															}
															HX_STACK_LINE(1077)
															_this->maxx = tmp33;
															HX_STACK_LINE(1077)
															bool tmp34 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1077)
															Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1077)
															if ((tmp34)){
																HX_STACK_LINE(1077)
																tmp35 = a->maxy;
															}
															else{
																HX_STACK_LINE(1077)
																tmp35 = b1->maxy;
															}
															HX_STACK_LINE(1077)
															_this->maxy = tmp35;
														}
														HX_STACK_LINE(1077)
														int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1077)
														{
															HX_STACK_LINE(1077)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1077)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(1077)
															bool tmp29 = (x > y);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															if ((tmp29)){
																HX_STACK_LINE(1077)
																tmp28 = x;
															}
															else{
																HX_STACK_LINE(1077)
																tmp28 = y;
															}
														}
														HX_STACK_LINE(1077)
														int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1077)
														node1->height = tmp29;
														HX_STACK_LINE(1077)
														int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1077)
														{
															HX_STACK_LINE(1077)
															int x = node1->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1077)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(1077)
															bool tmp31 = (x > y);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1077)
															if ((tmp31)){
																HX_STACK_LINE(1077)
																tmp30 = x;
															}
															else{
																HX_STACK_LINE(1077)
																tmp30 = y;
															}
														}
														HX_STACK_LINE(1077)
														int tmp31 = ((int)1 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1077)
														c->height = tmp31;
													}
													else{
														HX_STACK_LINE(1077)
														c->child2 = g;
														HX_STACK_LINE(1077)
														node1->child2 = f;
														HX_STACK_LINE(1077)
														f->parent = node1;
														HX_STACK_LINE(1077)
														{
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
															HX_STACK_LINE(1077)
															bool tmp28 = (a->minx < b1->minx);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1077)
															Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															if ((tmp28)){
																HX_STACK_LINE(1077)
																tmp29 = a->minx;
															}
															else{
																HX_STACK_LINE(1077)
																tmp29 = b1->minx;
															}
															HX_STACK_LINE(1077)
															_this->minx = tmp29;
															HX_STACK_LINE(1077)
															bool tmp30 = (a->miny < b1->miny);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1077)
															Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1077)
															if ((tmp30)){
																HX_STACK_LINE(1077)
																tmp31 = a->miny;
															}
															else{
																HX_STACK_LINE(1077)
																tmp31 = b1->miny;
															}
															HX_STACK_LINE(1077)
															_this->miny = tmp31;
															HX_STACK_LINE(1077)
															bool tmp32 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1077)
															Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1077)
															if ((tmp32)){
																HX_STACK_LINE(1077)
																tmp33 = a->maxx;
															}
															else{
																HX_STACK_LINE(1077)
																tmp33 = b1->maxx;
															}
															HX_STACK_LINE(1077)
															_this->maxx = tmp33;
															HX_STACK_LINE(1077)
															bool tmp34 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1077)
															Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1077)
															if ((tmp34)){
																HX_STACK_LINE(1077)
																tmp35 = a->maxy;
															}
															else{
																HX_STACK_LINE(1077)
																tmp35 = b1->maxy;
															}
															HX_STACK_LINE(1077)
															_this->maxy = tmp35;
														}
														HX_STACK_LINE(1077)
														{
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
															HX_STACK_LINE(1077)
															bool tmp28 = (a->minx < b1->minx);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1077)
															Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															if ((tmp28)){
																HX_STACK_LINE(1077)
																tmp29 = a->minx;
															}
															else{
																HX_STACK_LINE(1077)
																tmp29 = b1->minx;
															}
															HX_STACK_LINE(1077)
															_this->minx = tmp29;
															HX_STACK_LINE(1077)
															bool tmp30 = (a->miny < b1->miny);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1077)
															Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1077)
															if ((tmp30)){
																HX_STACK_LINE(1077)
																tmp31 = a->miny;
															}
															else{
																HX_STACK_LINE(1077)
																tmp31 = b1->miny;
															}
															HX_STACK_LINE(1077)
															_this->miny = tmp31;
															HX_STACK_LINE(1077)
															bool tmp32 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1077)
															Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1077)
															if ((tmp32)){
																HX_STACK_LINE(1077)
																tmp33 = a->maxx;
															}
															else{
																HX_STACK_LINE(1077)
																tmp33 = b1->maxx;
															}
															HX_STACK_LINE(1077)
															_this->maxx = tmp33;
															HX_STACK_LINE(1077)
															bool tmp34 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1077)
															Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1077)
															if ((tmp34)){
																HX_STACK_LINE(1077)
																tmp35 = a->maxy;
															}
															else{
																HX_STACK_LINE(1077)
																tmp35 = b1->maxy;
															}
															HX_STACK_LINE(1077)
															_this->maxy = tmp35;
														}
														HX_STACK_LINE(1077)
														int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1077)
														{
															HX_STACK_LINE(1077)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1077)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(1077)
															bool tmp29 = (x > y);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															if ((tmp29)){
																HX_STACK_LINE(1077)
																tmp28 = x;
															}
															else{
																HX_STACK_LINE(1077)
																tmp28 = y;
															}
														}
														HX_STACK_LINE(1077)
														int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1077)
														node1->height = tmp29;
														HX_STACK_LINE(1077)
														int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1077)
														{
															HX_STACK_LINE(1077)
															int x = node1->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(1077)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(1077)
															bool tmp31 = (x > y);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1077)
															if ((tmp31)){
																HX_STACK_LINE(1077)
																tmp30 = x;
															}
															else{
																HX_STACK_LINE(1077)
																tmp30 = y;
															}
														}
														HX_STACK_LINE(1077)
														int tmp31 = ((int)1 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1077)
														c->height = tmp31;
													}
													HX_STACK_LINE(1077)
													tmp23 = c;
												}
												else{
													HX_STACK_LINE(1077)
													bool tmp26 = (balance < (int)-1);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1077)
													if ((tmp26)){
														HX_STACK_LINE(1077)
														::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1077)
														::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1077)
														b->child1 = node1;
														HX_STACK_LINE(1077)
														b->parent = node1->parent;
														HX_STACK_LINE(1077)
														node1->parent = b;
														HX_STACK_LINE(1077)
														bool tmp27 = (b->parent != null());		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1077)
														if ((tmp27)){
															HX_STACK_LINE(1077)
															::zpp_nape::space::ZPP_AABBNode tmp28 = b->parent->child1;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1077)
															::zpp_nape::space::ZPP_AABBNode tmp29 = node1;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1077)
															if ((tmp30)){
																HX_STACK_LINE(1077)
																b->parent->child1 = b;
															}
															else{
																HX_STACK_LINE(1077)
																b->parent->child2 = b;
															}
														}
														else{
															HX_STACK_LINE(1077)
															tree->root = b;
														}
														HX_STACK_LINE(1077)
														bool tmp28 = (f->height > g->height);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1077)
														if ((tmp28)){
															HX_STACK_LINE(1077)
															b->child2 = f;
															HX_STACK_LINE(1077)
															node1->child1 = g;
															HX_STACK_LINE(1077)
															g->parent = node1;
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1077)
																bool tmp29 = (a->minx < b1->minx);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1077)
																Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1077)
																if ((tmp29)){
																	HX_STACK_LINE(1077)
																	tmp30 = a->minx;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp30 = b1->minx;
																}
																HX_STACK_LINE(1077)
																_this->minx = tmp30;
																HX_STACK_LINE(1077)
																bool tmp31 = (a->miny < b1->miny);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1077)
																Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1077)
																if ((tmp31)){
																	HX_STACK_LINE(1077)
																	tmp32 = a->miny;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp32 = b1->miny;
																}
																HX_STACK_LINE(1077)
																_this->miny = tmp32;
																HX_STACK_LINE(1077)
																bool tmp33 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1077)
																Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1077)
																if ((tmp33)){
																	HX_STACK_LINE(1077)
																	tmp34 = a->maxx;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp34 = b1->maxx;
																}
																HX_STACK_LINE(1077)
																_this->maxx = tmp34;
																HX_STACK_LINE(1077)
																bool tmp35 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1077)
																Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1077)
																if ((tmp35)){
																	HX_STACK_LINE(1077)
																	tmp36 = a->maxy;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp36 = b1->maxy;
																}
																HX_STACK_LINE(1077)
																_this->maxy = tmp36;
															}
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1077)
																bool tmp29 = (a->minx < b1->minx);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1077)
																Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1077)
																if ((tmp29)){
																	HX_STACK_LINE(1077)
																	tmp30 = a->minx;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp30 = b1->minx;
																}
																HX_STACK_LINE(1077)
																_this->minx = tmp30;
																HX_STACK_LINE(1077)
																bool tmp31 = (a->miny < b1->miny);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1077)
																Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1077)
																if ((tmp31)){
																	HX_STACK_LINE(1077)
																	tmp32 = a->miny;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp32 = b1->miny;
																}
																HX_STACK_LINE(1077)
																_this->miny = tmp32;
																HX_STACK_LINE(1077)
																bool tmp33 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1077)
																Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1077)
																if ((tmp33)){
																	HX_STACK_LINE(1077)
																	tmp34 = a->maxx;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp34 = b1->maxx;
																}
																HX_STACK_LINE(1077)
																_this->maxx = tmp34;
																HX_STACK_LINE(1077)
																bool tmp35 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1077)
																Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1077)
																if ((tmp35)){
																	HX_STACK_LINE(1077)
																	tmp36 = a->maxy;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp36 = b1->maxy;
																}
																HX_STACK_LINE(1077)
																_this->maxy = tmp36;
															}
															HX_STACK_LINE(1077)
															int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																int x = c->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1077)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1077)
																bool tmp30 = (x > y);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1077)
																if ((tmp30)){
																	HX_STACK_LINE(1077)
																	tmp29 = x;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp29 = y;
																}
															}
															HX_STACK_LINE(1077)
															int tmp30 = ((int)1 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1077)
															node1->height = tmp30;
															HX_STACK_LINE(1077)
															int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1077)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1077)
																bool tmp32 = (x > y);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1077)
																if ((tmp32)){
																	HX_STACK_LINE(1077)
																	tmp31 = x;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp31 = y;
																}
															}
															HX_STACK_LINE(1077)
															int tmp32 = ((int)1 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1077)
															b->height = tmp32;
														}
														else{
															HX_STACK_LINE(1077)
															b->child2 = g;
															HX_STACK_LINE(1077)
															node1->child1 = f;
															HX_STACK_LINE(1077)
															f->parent = node1;
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1077)
																bool tmp29 = (a->minx < b1->minx);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1077)
																Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1077)
																if ((tmp29)){
																	HX_STACK_LINE(1077)
																	tmp30 = a->minx;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp30 = b1->minx;
																}
																HX_STACK_LINE(1077)
																_this->minx = tmp30;
																HX_STACK_LINE(1077)
																bool tmp31 = (a->miny < b1->miny);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1077)
																Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1077)
																if ((tmp31)){
																	HX_STACK_LINE(1077)
																	tmp32 = a->miny;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp32 = b1->miny;
																}
																HX_STACK_LINE(1077)
																_this->miny = tmp32;
																HX_STACK_LINE(1077)
																bool tmp33 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1077)
																Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1077)
																if ((tmp33)){
																	HX_STACK_LINE(1077)
																	tmp34 = a->maxx;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp34 = b1->maxx;
																}
																HX_STACK_LINE(1077)
																_this->maxx = tmp34;
																HX_STACK_LINE(1077)
																bool tmp35 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1077)
																Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1077)
																if ((tmp35)){
																	HX_STACK_LINE(1077)
																	tmp36 = a->maxy;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp36 = b1->maxy;
																}
																HX_STACK_LINE(1077)
																_this->maxy = tmp36;
															}
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1077)
																bool tmp29 = (a->minx < b1->minx);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1077)
																Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1077)
																if ((tmp29)){
																	HX_STACK_LINE(1077)
																	tmp30 = a->minx;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp30 = b1->minx;
																}
																HX_STACK_LINE(1077)
																_this->minx = tmp30;
																HX_STACK_LINE(1077)
																bool tmp31 = (a->miny < b1->miny);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(1077)
																Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1077)
																if ((tmp31)){
																	HX_STACK_LINE(1077)
																	tmp32 = a->miny;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp32 = b1->miny;
																}
																HX_STACK_LINE(1077)
																_this->miny = tmp32;
																HX_STACK_LINE(1077)
																bool tmp33 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1077)
																Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1077)
																if ((tmp33)){
																	HX_STACK_LINE(1077)
																	tmp34 = a->maxx;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp34 = b1->maxx;
																}
																HX_STACK_LINE(1077)
																_this->maxx = tmp34;
																HX_STACK_LINE(1077)
																bool tmp35 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1077)
																Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1077)
																if ((tmp35)){
																	HX_STACK_LINE(1077)
																	tmp36 = a->maxy;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp36 = b1->maxy;
																}
																HX_STACK_LINE(1077)
																_this->maxy = tmp36;
															}
															HX_STACK_LINE(1077)
															int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																int x = c->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1077)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1077)
																bool tmp30 = (x > y);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(1077)
																if ((tmp30)){
																	HX_STACK_LINE(1077)
																	tmp29 = x;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp29 = y;
																}
															}
															HX_STACK_LINE(1077)
															int tmp30 = ((int)1 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1077)
															node1->height = tmp30;
															HX_STACK_LINE(1077)
															int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1077)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1077)
																bool tmp32 = (x > y);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(1077)
																if ((tmp32)){
																	HX_STACK_LINE(1077)
																	tmp31 = x;
																}
																else{
																	HX_STACK_LINE(1077)
																	tmp31 = y;
																}
															}
															HX_STACK_LINE(1077)
															int tmp32 = ((int)1 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1077)
															b->height = tmp32;
														}
														HX_STACK_LINE(1077)
														tmp23 = b;
													}
													else{
														HX_STACK_LINE(1077)
														tmp23 = node1;
													}
												}
											}
											HX_STACK_LINE(1077)
											node1 = tmp23;
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
											HX_STACK_LINE(1077)
											{
												HX_STACK_LINE(1077)
												::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1077)
												::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1077)
												::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1077)
												bool tmp24 = (a->minx < b->minx);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1077)
												Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1077)
												if ((tmp24)){
													HX_STACK_LINE(1077)
													tmp25 = a->minx;
												}
												else{
													HX_STACK_LINE(1077)
													tmp25 = b->minx;
												}
												HX_STACK_LINE(1077)
												_this->minx = tmp25;
												HX_STACK_LINE(1077)
												bool tmp26 = (a->miny < b->miny);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1077)
												Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1077)
												if ((tmp26)){
													HX_STACK_LINE(1077)
													tmp27 = a->miny;
												}
												else{
													HX_STACK_LINE(1077)
													tmp27 = b->miny;
												}
												HX_STACK_LINE(1077)
												_this->miny = tmp27;
												HX_STACK_LINE(1077)
												bool tmp28 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1077)
												Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1077)
												if ((tmp28)){
													HX_STACK_LINE(1077)
													tmp29 = a->maxx;
												}
												else{
													HX_STACK_LINE(1077)
													tmp29 = b->maxx;
												}
												HX_STACK_LINE(1077)
												_this->maxx = tmp29;
												HX_STACK_LINE(1077)
												bool tmp30 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1077)
												Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1077)
												if ((tmp30)){
													HX_STACK_LINE(1077)
													tmp31 = a->maxy;
												}
												else{
													HX_STACK_LINE(1077)
													tmp31 = b->maxy;
												}
												HX_STACK_LINE(1077)
												_this->maxy = tmp31;
											}
											HX_STACK_LINE(1077)
											int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1077)
											{
												HX_STACK_LINE(1077)
												int x = child1->height;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(1077)
												int y = child2->height;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(1077)
												bool tmp25 = (x > y);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1077)
												if ((tmp25)){
													HX_STACK_LINE(1077)
													tmp24 = x;
												}
												else{
													HX_STACK_LINE(1077)
													tmp24 = y;
												}
											}
											HX_STACK_LINE(1077)
											int tmp25 = ((int)1 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1077)
											node1->height = tmp25;
											HX_STACK_LINE(1077)
											node1 = node1->parent;
										}
									}
									else{
										HX_STACK_LINE(1077)
										tree->root = sibling;
										HX_STACK_LINE(1077)
										sibling->parent = null();
										HX_STACK_LINE(1077)
										{
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1077)
											{
												HX_STACK_LINE(1077)
												o->height = (int)-1;
												HX_STACK_LINE(1077)
												{
													HX_STACK_LINE(1077)
													::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1077)
													{
														HX_STACK_LINE(1077)
														bool tmp17 = (o1->outer != null());		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1077)
														if ((tmp17)){
															HX_STACK_LINE(1077)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1077)
															o1->outer = null();
														}
														HX_STACK_LINE(1077)
														::nape::geom::Vec2 tmp18 = o1->wrap_max = null();		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1077)
														o1->wrap_min = tmp18;
														HX_STACK_LINE(1077)
														o1->_invalidate = null();
														HX_STACK_LINE(1077)
														o1->_validate = null();
													}
													HX_STACK_LINE(1077)
													::zpp_nape::geom::ZPP_AABB tmp17 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1077)
													o1->next = tmp17;
													HX_STACK_LINE(1077)
													::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
												}
												HX_STACK_LINE(1077)
												::zpp_nape::space::ZPP_AABBNode tmp17 = o->parent = null();		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1077)
												::zpp_nape::space::ZPP_AABBNode tmp18 = o->child2 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1077)
												o->child1 = tmp18;
												HX_STACK_LINE(1077)
												o->next = null();
												HX_STACK_LINE(1077)
												o->snext = null();
												HX_STACK_LINE(1077)
												o->mnext = null();
											}
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode tmp17 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1077)
											o->next = tmp17;
											HX_STACK_LINE(1077)
											::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
										}
									}
								}
							}
						}
						else{
							HX_STACK_LINE(1079)
							node->first_sync = false;
						}
						HX_STACK_LINE(1080)
						::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
						HX_STACK_LINE(1081)
						::zpp_nape::space::ZPP_Space tmp11 = this->space;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1081)
						bool tmp12 = tmp11->continuous;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1081)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1081)
						if ((tmp13)){
							HX_STACK_LINE(1081)
							bool tmp14 = shape->zip_aabb;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1081)
							if ((tmp14)){
								HX_STACK_LINE(1081)
								bool tmp15 = (shape->body != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1081)
								if ((tmp15)){
									HX_STACK_LINE(1081)
									shape->zip_aabb = false;
									HX_STACK_LINE(1081)
									int tmp16 = shape->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1081)
									int tmp17 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1081)
									bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1081)
									if ((tmp18)){
										HX_STACK_LINE(1081)
										::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											bool tmp19 = _this->zip_worldCOM;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1081)
											if ((tmp19)){
												HX_STACK_LINE(1081)
												bool tmp20 = (_this->body != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1081)
												if ((tmp20)){
													HX_STACK_LINE(1081)
													_this->zip_worldCOM = false;
													HX_STACK_LINE(1081)
													{
														HX_STACK_LINE(1081)
														bool tmp21 = _this->zip_localCOM;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1081)
														if ((tmp21)){
															HX_STACK_LINE(1081)
															_this->zip_localCOM = false;
															HX_STACK_LINE(1081)
															int tmp22 = _this->type;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1081)
															int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1081)
															bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1081)
															if ((tmp24)){
																HX_STACK_LINE(1081)
																::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
																HX_STACK_LINE(1081)
																::zpp_nape::geom::ZPP_Vec2 tmp25 = _this1->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1081)
																bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1081)
																if ((tmp26)){
																	HX_STACK_LINE(1081)
																	HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
																}
																HX_STACK_LINE(1081)
																::zpp_nape::geom::ZPP_Vec2 tmp27 = _this1->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(1081)
																::zpp_nape::geom::ZPP_Vec2 tmp28 = tmp27->next;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(1081)
																bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(1081)
																if ((tmp29)){
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 tmp30 = _this1->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1081)
																	_this1->localCOMx = tmp30->x;
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 tmp31 = _this1->lverts->next;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1081)
																	_this1->localCOMy = tmp31->y;
																	HX_STACK_LINE(1081)
																	Dynamic();
																}
																else{
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 tmp30 = _this1->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 tmp31 = tmp30->next->next;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1081)
																	bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1081)
																	if ((tmp32)){
																		HX_STACK_LINE(1081)
																		{
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 tmp33 = _this1->lverts->next;		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(1081)
																			_this1->localCOMx = tmp33->x;
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 tmp34 = _this1->lverts->next;		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(1081)
																			_this1->localCOMy = tmp34->y;
																			HX_STACK_LINE(1081)
																			{
																			}
																		}
																		HX_STACK_LINE(1081)
																		{
																			HX_STACK_LINE(1081)
																			Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 tmp33 = _this1->lverts->next;		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(1081)
																			Float tmp34 = tmp33->next->x;		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(1081)
																			Float tmp35 = t;		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(1081)
																			Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1081)
																			hx::AddEq(_this1->localCOMx,tmp36);
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 tmp37 = _this1->lverts->next;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1081)
																			Float tmp38 = tmp37->next->y;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1081)
																			Float tmp39 = t;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1081)
																			Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1081)
																			hx::AddEq(_this1->localCOMy,tmp40);
																		}
																		HX_STACK_LINE(1081)
																		{
																			HX_STACK_LINE(1081)
																			Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1081)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(1081)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																	else{
																		HX_STACK_LINE(1081)
																		{
																			HX_STACK_LINE(1081)
																			_this1->localCOMx = (int)0;
																			HX_STACK_LINE(1081)
																			_this1->localCOMy = (int)0;
																			HX_STACK_LINE(1081)
																			{
																			}
																		}
																		HX_STACK_LINE(1081)
																		Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
																		HX_STACK_LINE(1081)
																		{
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 tmp33 = _this1->lverts->next;		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp33;		HX_STACK_VAR(cx_ite,"cx_ite");
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																			HX_STACK_LINE(1081)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																			HX_STACK_LINE(1081)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1081)
																			while((true)){
																				HX_STACK_LINE(1081)
																				bool tmp34 = (cx_ite != null());		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(1081)
																				bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(1081)
																				if ((tmp35)){
																					HX_STACK_LINE(1081)
																					break;
																				}
																				HX_STACK_LINE(1081)
																				::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																				HX_STACK_LINE(1081)
																				{
																					HX_STACK_LINE(1081)
																					Float tmp36 = v->x;		HX_STACK_VAR(tmp36,"tmp36");
																					HX_STACK_LINE(1081)
																					Float tmp37 = (w->y - u->y);		HX_STACK_VAR(tmp37,"tmp37");
																					HX_STACK_LINE(1081)
																					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																					HX_STACK_LINE(1081)
																					hx::AddEq(area,tmp38);
																					HX_STACK_LINE(1081)
																					Float tmp39 = (w->y * v->x);		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1081)
																					Float tmp40 = (w->x * v->y);		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(1081)
																					Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																					HX_STACK_LINE(1081)
																					Float cf = tmp41;		HX_STACK_VAR(cf,"cf");
																					HX_STACK_LINE(1081)
																					Float tmp42 = (v->x + w->x);		HX_STACK_VAR(tmp42,"tmp42");
																					HX_STACK_LINE(1081)
																					Float tmp43 = cf;		HX_STACK_VAR(tmp43,"tmp43");
																					HX_STACK_LINE(1081)
																					Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																					HX_STACK_LINE(1081)
																					hx::AddEq(_this1->localCOMx,tmp44);
																					HX_STACK_LINE(1081)
																					Float tmp45 = (v->y + w->y);		HX_STACK_VAR(tmp45,"tmp45");
																					HX_STACK_LINE(1081)
																					Float tmp46 = cf;		HX_STACK_VAR(tmp46,"tmp46");
																					HX_STACK_LINE(1081)
																					Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
																					HX_STACK_LINE(1081)
																					hx::AddEq(_this1->localCOMy,tmp47);
																				}
																				HX_STACK_LINE(1081)
																				u = v;
																				HX_STACK_LINE(1081)
																				v = w;
																				HX_STACK_LINE(1081)
																				cx_ite = cx_ite->next;
																			}
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 tmp34 = _this1->lverts->next;		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(1081)
																			cx_ite = tmp34;
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																			HX_STACK_LINE(1081)
																			{
																				HX_STACK_LINE(1081)
																				Float tmp35 = v->x;		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(1081)
																				Float tmp36 = (w->y - u->y);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(1081)
																				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1081)
																				hx::AddEq(area,tmp37);
																				HX_STACK_LINE(1081)
																				Float tmp38 = (w->y * v->x);		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1081)
																				Float tmp39 = (w->x * v->y);		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(1081)
																				Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(1081)
																				Float cf = tmp40;		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(1081)
																				Float tmp41 = (v->x + w->x);		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(1081)
																				Float tmp42 = cf;		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(1081)
																				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(1081)
																				hx::AddEq(_this1->localCOMx,tmp43);
																				HX_STACK_LINE(1081)
																				Float tmp44 = (v->y + w->y);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(1081)
																				Float tmp45 = cf;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1081)
																				Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1081)
																				hx::AddEq(_this1->localCOMy,tmp46);
																			}
																			HX_STACK_LINE(1081)
																			u = v;
																			HX_STACK_LINE(1081)
																			v = w;
																			HX_STACK_LINE(1081)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1081)
																			::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																			HX_STACK_LINE(1081)
																			{
																				HX_STACK_LINE(1081)
																				Float tmp35 = v->x;		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(1081)
																				Float tmp36 = (w1->y - u->y);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(1081)
																				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1081)
																				hx::AddEq(area,tmp37);
																				HX_STACK_LINE(1081)
																				Float tmp38 = (w1->y * v->x);		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1081)
																				Float tmp39 = (w1->x * v->y);		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(1081)
																				Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(1081)
																				Float cf = tmp40;		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(1081)
																				Float tmp41 = (v->x + w1->x);		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(1081)
																				Float tmp42 = cf;		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(1081)
																				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(1081)
																				hx::AddEq(_this1->localCOMx,tmp43);
																				HX_STACK_LINE(1081)
																				Float tmp44 = (v->y + w1->y);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(1081)
																				Float tmp45 = cf;		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(1081)
																				Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(1081)
																				hx::AddEq(_this1->localCOMy,tmp46);
																			}
																		}
																		HX_STACK_LINE(1081)
																		Float tmp33 = ((int)3 * area);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1081)
																		Float tmp34 = (Float((int)1) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(1081)
																		area = tmp34;
																		HX_STACK_LINE(1081)
																		{
																			HX_STACK_LINE(1081)
																			Float t = area;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1081)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(1081)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																}
															}
															HX_STACK_LINE(1081)
															bool tmp25 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1081)
															if ((tmp25)){
																HX_STACK_LINE(1081)
																::zpp_nape::geom::ZPP_Vec2 tmp26 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1081)
																tmp26->x = _this->localCOMx;
																HX_STACK_LINE(1081)
																::zpp_nape::geom::ZPP_Vec2 tmp27 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(1081)
																tmp27->y = _this->localCOMy;
																HX_STACK_LINE(1081)
																{
																}
															}
														}
													}
													HX_STACK_LINE(1081)
													{
														HX_STACK_LINE(1081)
														::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1081)
														bool tmp21 = _this1->zip_axis;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1081)
														if ((tmp21)){
															HX_STACK_LINE(1081)
															_this1->zip_axis = false;
															HX_STACK_LINE(1081)
															{
																HX_STACK_LINE(1081)
																Float tmp22 = _this1->rot;		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1081)
																Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(1081)
																_this1->axisx = tmp23;
																HX_STACK_LINE(1081)
																Float tmp24 = _this1->rot;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1081)
																Float tmp25 = ::Math_obj::cos(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1081)
																_this1->axisy = tmp25;
																HX_STACK_LINE(1081)
																Dynamic();
															}
														}
													}
													HX_STACK_LINE(1081)
													{
														HX_STACK_LINE(1081)
														Float tmp21 = _this->body->posx;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1081)
														Float tmp22 = _this->body->axisy;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1081)
														Float tmp23 = _this->localCOMx;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1081)
														Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1081)
														Float tmp25 = _this->body->axisx;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1081)
														Float tmp26 = _this->localCOMy;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1081)
														Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1081)
														Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1081)
														Float tmp29 = (tmp21 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1081)
														_this->worldCOMx = tmp29;
														HX_STACK_LINE(1081)
														Float tmp30 = _this->body->posy;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1081)
														Float tmp31 = _this->localCOMx;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1081)
														Float tmp32 = _this->body->axisx;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1081)
														Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(1081)
														Float tmp34 = _this->localCOMy;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1081)
														Float tmp35 = _this->body->axisy;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1081)
														Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1081)
														Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1081)
														Float tmp38 = (tmp30 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1081)
														_this->worldCOMy = tmp38;
													}
												}
											}
										}
										HX_STACK_LINE(1081)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1081)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											Float tmp19 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1081)
											_this->aabb->minx = tmp19;
											HX_STACK_LINE(1081)
											Float tmp20 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1081)
											_this->aabb->miny = tmp20;
										}
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											Float tmp19 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1081)
											_this->aabb->maxx = tmp19;
											HX_STACK_LINE(1081)
											Float tmp20 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1081)
											_this->aabb->maxy = tmp20;
										}
									}
									else{
										HX_STACK_LINE(1081)
										::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											bool tmp19 = _this->zip_gverts;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1081)
											if ((tmp19)){
												HX_STACK_LINE(1081)
												bool tmp20 = (_this->body != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1081)
												if ((tmp20)){
													HX_STACK_LINE(1081)
													_this->zip_gverts = false;
													HX_STACK_LINE(1081)
													_this->validate_lverts();
													HX_STACK_LINE(1081)
													{
														HX_STACK_LINE(1081)
														::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1081)
														bool tmp21 = _this1->zip_axis;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1081)
														if ((tmp21)){
															HX_STACK_LINE(1081)
															_this1->zip_axis = false;
															HX_STACK_LINE(1081)
															{
																HX_STACK_LINE(1081)
																Float tmp22 = _this1->rot;		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1081)
																Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(1081)
																_this1->axisx = tmp23;
																HX_STACK_LINE(1081)
																Float tmp24 = _this1->rot;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(1081)
																Float tmp25 = ::Math_obj::cos(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(1081)
																_this1->axisy = tmp25;
																HX_STACK_LINE(1081)
																Dynamic();
															}
														}
													}
													HX_STACK_LINE(1081)
													::zpp_nape::geom::ZPP_Vec2 tmp21 = _this->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1081)
													::zpp_nape::geom::ZPP_Vec2 li = tmp21;		HX_STACK_VAR(li,"li");
													HX_STACK_LINE(1081)
													{
														HX_STACK_LINE(1081)
														::zpp_nape::geom::ZPP_Vec2 tmp22 = _this->gverts->next;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1081)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(1081)
														while((true)){
															HX_STACK_LINE(1081)
															bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1081)
															bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1081)
															if ((tmp24)){
																HX_STACK_LINE(1081)
																break;
															}
															HX_STACK_LINE(1081)
															::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
															HX_STACK_LINE(1081)
															{
																HX_STACK_LINE(1081)
																::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
																HX_STACK_LINE(1081)
																li = li->next;
																HX_STACK_LINE(1081)
																{
																	HX_STACK_LINE(1081)
																	Float tmp25 = _this->body->posx;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(1081)
																	Float tmp26 = _this->body->axisy;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(1081)
																	Float tmp27 = l->x;		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(1081)
																	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(1081)
																	Float tmp29 = _this->body->axisx;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1081)
																	Float tmp30 = l->y;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1081)
																	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1081)
																	Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1081)
																	Float tmp33 = (tmp25 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(1081)
																	g->x = tmp33;
																	HX_STACK_LINE(1081)
																	Float tmp34 = _this->body->posy;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1081)
																	Float tmp35 = l->x;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1081)
																	Float tmp36 = _this->body->axisx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(1081)
																	Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(1081)
																	Float tmp38 = l->y;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1081)
																	Float tmp39 = _this->body->axisy;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1081)
																	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(1081)
																	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(1081)
																	Float tmp42 = (tmp34 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(1081)
																	g->y = tmp42;
																}
															}
															HX_STACK_LINE(1081)
															cx_ite = cx_ite->next;
														}
													}
												}
											}
										}
										HX_STACK_LINE(1081)
										::zpp_nape::geom::ZPP_Vec2 tmp19 = _this->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1081)
										bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1081)
										if ((tmp20)){
											HX_STACK_LINE(1081)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
										}
										HX_STACK_LINE(1081)
										::zpp_nape::geom::ZPP_Vec2 tmp21 = _this->gverts->next;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1081)
										::zpp_nape::geom::ZPP_Vec2 p0 = tmp21;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1081)
											_this->aabb->miny = p0->y;
											HX_STACK_LINE(1081)
											{
											}
										}
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1081)
											_this->aabb->maxy = p0->y;
											HX_STACK_LINE(1081)
											{
											}
										}
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											::zpp_nape::geom::ZPP_Vec2 tmp22 = _this->gverts->next;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1081)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp22->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1081)
											while((true)){
												HX_STACK_LINE(1081)
												bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1081)
												bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1081)
												if ((tmp24)){
													HX_STACK_LINE(1081)
													break;
												}
												HX_STACK_LINE(1081)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1081)
												{
													HX_STACK_LINE(1081)
													Float tmp25 = p->x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1081)
													Float tmp26 = _this->aabb->minx;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1081)
													bool tmp27 = (tmp25 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1081)
													if ((tmp27)){
														HX_STACK_LINE(1081)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1081)
													Float tmp28 = p->x;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1081)
													Float tmp29 = _this->aabb->maxx;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1081)
													bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1081)
													if ((tmp30)){
														HX_STACK_LINE(1081)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1081)
													Float tmp31 = p->y;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1081)
													Float tmp32 = _this->aabb->miny;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1081)
													bool tmp33 = (tmp31 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1081)
													if ((tmp33)){
														HX_STACK_LINE(1081)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1081)
													Float tmp34 = p->y;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1081)
													Float tmp35 = _this->aabb->maxy;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1081)
													bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1081)
													if ((tmp36)){
														HX_STACK_LINE(1081)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1081)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(1082)
						{
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1082)
							Float tmp14 = (a->minx - ((Float)3.0));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1082)
							aabb->minx = tmp14;
							HX_STACK_LINE(1082)
							Float tmp15 = (a->miny - ((Float)3.0));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1082)
							aabb->miny = tmp15;
							HX_STACK_LINE(1082)
							Float tmp16 = (a->maxx + ((Float)3.0));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1082)
							aabb->maxx = tmp16;
							HX_STACK_LINE(1082)
							Float tmp17 = (a->maxy + ((Float)3.0));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1082)
							aabb->maxy = tmp17;
						}
						HX_STACK_LINE(1083)
						int tmp14 = shape->body->type;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1083)
						int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1083)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1083)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1083)
						if ((tmp16)){
							HX_STACK_LINE(1083)
							tmp17 = false;
						}
						else{
							HX_STACK_LINE(1083)
							::zpp_nape::space::ZPP_Component tmp18 = shape->body->component;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1083)
							bool tmp19 = tmp18->sleeping;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1083)
							tmp17 = !(tmp19);
						}
						HX_STACK_LINE(1083)
						bool tmp18 = node->dyn = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1083)
						::zpp_nape::space::ZPP_AABBTree tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1083)
						if ((tmp18)){
							HX_STACK_LINE(1083)
							tmp19 = this->dtree;
						}
						else{
							HX_STACK_LINE(1083)
							tmp19 = this->stree;
						}
						HX_STACK_LINE(1083)
						::zpp_nape::space::ZPP_AABBTree tree = tmp19;		HX_STACK_VAR(tree,"tree");
						HX_STACK_LINE(1084)
						{
							HX_STACK_LINE(1084)
							bool tmp20 = (tree->root == null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1084)
							if ((tmp20)){
								HX_STACK_LINE(1084)
								tree->root = node;
								HX_STACK_LINE(1084)
								tree->root->parent = null();
							}
							else{
								HX_STACK_LINE(1084)
								::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
								HX_STACK_LINE(1084)
								::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
								HX_STACK_LINE(1084)
								while((true)){
									HX_STACK_LINE(1084)
									bool tmp21 = (node1->child1 == null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1084)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1084)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1084)
									if ((tmp23)){
										HX_STACK_LINE(1084)
										break;
									}
									HX_STACK_LINE(1084)
									::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
									HX_STACK_LINE(1084)
									::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
									HX_STACK_LINE(1084)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1084)
										Float tmp25 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1084)
										Float tmp26 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1084)
										Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1084)
										tmp24 = (tmp27 * (int)2);
									}
									HX_STACK_LINE(1084)
									Float area = tmp24;		HX_STACK_VAR(area,"area");
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB tmp25 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB _this = tmp25;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1084)
										bool tmp26 = (a->minx < leafaabb->minx);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1084)
										Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1084)
										if ((tmp26)){
											HX_STACK_LINE(1084)
											tmp27 = a->minx;
										}
										else{
											HX_STACK_LINE(1084)
											tmp27 = leafaabb->minx;
										}
										HX_STACK_LINE(1084)
										_this->minx = tmp27;
										HX_STACK_LINE(1084)
										bool tmp28 = (a->miny < leafaabb->miny);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1084)
										Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1084)
										if ((tmp28)){
											HX_STACK_LINE(1084)
											tmp29 = a->miny;
										}
										else{
											HX_STACK_LINE(1084)
											tmp29 = leafaabb->miny;
										}
										HX_STACK_LINE(1084)
										_this->miny = tmp29;
										HX_STACK_LINE(1084)
										bool tmp30 = (a->maxx > leafaabb->maxx);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1084)
										Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1084)
										if ((tmp30)){
											HX_STACK_LINE(1084)
											tmp31 = a->maxx;
										}
										else{
											HX_STACK_LINE(1084)
											tmp31 = leafaabb->maxx;
										}
										HX_STACK_LINE(1084)
										_this->maxx = tmp31;
										HX_STACK_LINE(1084)
										bool tmp32 = (a->maxy > leafaabb->maxy);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1084)
										Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1084)
										if ((tmp32)){
											HX_STACK_LINE(1084)
											tmp33 = a->maxy;
										}
										else{
											HX_STACK_LINE(1084)
											tmp33 = leafaabb->maxy;
										}
										HX_STACK_LINE(1084)
										_this->maxy = tmp33;
									}
									HX_STACK_LINE(1084)
									Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB tmp26 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB _this = tmp26;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1084)
										Float tmp27 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1084)
										Float tmp28 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1084)
										Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1084)
										tmp25 = (tmp29 * (int)2);
									}
									HX_STACK_LINE(1084)
									Float carea = tmp25;		HX_STACK_VAR(carea,"carea");
									HX_STACK_LINE(1084)
									Float tmp26 = ((int)2 * carea);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1084)
									Float cost = tmp26;		HX_STACK_VAR(cost,"cost");
									HX_STACK_LINE(1084)
									Float tmp27 = (carea - area);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1084)
									Float tmp28 = ((int)2 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1084)
									Float icost = tmp28;		HX_STACK_VAR(icost,"icost");
									HX_STACK_LINE(1084)
									Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										{
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB tmp30 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB _this = tmp30;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1084)
											bool tmp31 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1084)
											Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1084)
											if ((tmp31)){
												HX_STACK_LINE(1084)
												tmp32 = leafaabb->minx;
											}
											else{
												HX_STACK_LINE(1084)
												tmp32 = b->minx;
											}
											HX_STACK_LINE(1084)
											_this->minx = tmp32;
											HX_STACK_LINE(1084)
											bool tmp33 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1084)
											Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1084)
											if ((tmp33)){
												HX_STACK_LINE(1084)
												tmp34 = leafaabb->miny;
											}
											else{
												HX_STACK_LINE(1084)
												tmp34 = b->miny;
											}
											HX_STACK_LINE(1084)
											_this->miny = tmp34;
											HX_STACK_LINE(1084)
											bool tmp35 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1084)
											Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1084)
											if ((tmp35)){
												HX_STACK_LINE(1084)
												tmp36 = leafaabb->maxx;
											}
											else{
												HX_STACK_LINE(1084)
												tmp36 = b->maxx;
											}
											HX_STACK_LINE(1084)
											_this->maxx = tmp36;
											HX_STACK_LINE(1084)
											bool tmp37 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1084)
											Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1084)
											if ((tmp37)){
												HX_STACK_LINE(1084)
												tmp38 = leafaabb->maxy;
											}
											else{
												HX_STACK_LINE(1084)
												tmp38 = b->maxy;
											}
											HX_STACK_LINE(1084)
											_this->maxy = tmp38;
										}
										HX_STACK_LINE(1084)
										bool tmp30 = (child1->child1 == null());		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1084)
										if ((tmp30)){
											HX_STACK_LINE(1084)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1084)
											{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB tmp32 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB _this = tmp32;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1084)
												Float tmp33 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												Float tmp34 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1084)
												tmp31 = (tmp35 * (int)2);
											}
											HX_STACK_LINE(1084)
											Float tmp32 = icost;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1084)
											tmp29 = (tmp31 + tmp32);
										}
										else{
											HX_STACK_LINE(1084)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1084)
											{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1084)
												Float tmp32 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1084)
												Float tmp33 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												tmp31 = (tmp34 * (int)2);
											}
											HX_STACK_LINE(1084)
											Float oarea = tmp31;		HX_STACK_VAR(oarea,"oarea");
											HX_STACK_LINE(1084)
											Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1084)
											{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB tmp33 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB _this = tmp33;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1084)
												Float tmp34 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												Float tmp35 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1084)
												Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1084)
												tmp32 = (tmp36 * (int)2);
											}
											HX_STACK_LINE(1084)
											Float narea = tmp32;		HX_STACK_VAR(narea,"narea");
											HX_STACK_LINE(1084)
											Float tmp33 = (narea - oarea);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1084)
											Float tmp34 = icost;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1084)
											tmp29 = (tmp33 + tmp34);
										}
									}
									HX_STACK_LINE(1084)
									Float cost1 = tmp29;		HX_STACK_VAR(cost1,"cost1");
									HX_STACK_LINE(1084)
									Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										{
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB tmp31 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB _this = tmp31;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1084)
											bool tmp32 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1084)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1084)
											if ((tmp32)){
												HX_STACK_LINE(1084)
												tmp33 = leafaabb->minx;
											}
											else{
												HX_STACK_LINE(1084)
												tmp33 = b->minx;
											}
											HX_STACK_LINE(1084)
											_this->minx = tmp33;
											HX_STACK_LINE(1084)
											bool tmp34 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1084)
											Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1084)
											if ((tmp34)){
												HX_STACK_LINE(1084)
												tmp35 = leafaabb->miny;
											}
											else{
												HX_STACK_LINE(1084)
												tmp35 = b->miny;
											}
											HX_STACK_LINE(1084)
											_this->miny = tmp35;
											HX_STACK_LINE(1084)
											bool tmp36 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1084)
											Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1084)
											if ((tmp36)){
												HX_STACK_LINE(1084)
												tmp37 = leafaabb->maxx;
											}
											else{
												HX_STACK_LINE(1084)
												tmp37 = b->maxx;
											}
											HX_STACK_LINE(1084)
											_this->maxx = tmp37;
											HX_STACK_LINE(1084)
											bool tmp38 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1084)
											Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1084)
											if ((tmp38)){
												HX_STACK_LINE(1084)
												tmp39 = leafaabb->maxy;
											}
											else{
												HX_STACK_LINE(1084)
												tmp39 = b->maxy;
											}
											HX_STACK_LINE(1084)
											_this->maxy = tmp39;
										}
										HX_STACK_LINE(1084)
										bool tmp31 = (child2->child1 == null());		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1084)
										if ((tmp31)){
											HX_STACK_LINE(1084)
											Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1084)
											{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB tmp33 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB _this = tmp33;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1084)
												Float tmp34 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												Float tmp35 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1084)
												Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1084)
												tmp32 = (tmp36 * (int)2);
											}
											HX_STACK_LINE(1084)
											Float tmp33 = icost;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1084)
											tmp30 = (tmp32 + tmp33);
										}
										else{
											HX_STACK_LINE(1084)
											Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1084)
											{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1084)
												Float tmp33 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												Float tmp34 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1084)
												tmp32 = (tmp35 * (int)2);
											}
											HX_STACK_LINE(1084)
											Float oarea = tmp32;		HX_STACK_VAR(oarea,"oarea");
											HX_STACK_LINE(1084)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1084)
											{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB tmp34 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB _this = tmp34;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1084)
												Float tmp35 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1084)
												Float tmp36 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1084)
												Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1084)
												tmp33 = (tmp37 * (int)2);
											}
											HX_STACK_LINE(1084)
											Float narea = tmp33;		HX_STACK_VAR(narea,"narea");
											HX_STACK_LINE(1084)
											Float tmp34 = (narea - oarea);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1084)
											Float tmp35 = icost;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1084)
											tmp30 = (tmp34 + tmp35);
										}
									}
									HX_STACK_LINE(1084)
									Float cost2 = tmp30;		HX_STACK_VAR(cost2,"cost2");
									HX_STACK_LINE(1084)
									bool tmp31 = (cost < cost1);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1084)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1084)
									if ((tmp31)){
										HX_STACK_LINE(1084)
										tmp32 = (cost < cost2);
									}
									else{
										HX_STACK_LINE(1084)
										tmp32 = false;
									}
									HX_STACK_LINE(1084)
									if ((tmp32)){
										HX_STACK_LINE(1084)
										break;
									}
									else{
										HX_STACK_LINE(1084)
										bool tmp33 = (cost1 < cost2);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1084)
										::zpp_nape::space::ZPP_AABBNode tmp34;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1084)
										if ((tmp33)){
											HX_STACK_LINE(1084)
											tmp34 = child1;
										}
										else{
											HX_STACK_LINE(1084)
											tmp34 = child2;
										}
										HX_STACK_LINE(1084)
										node1 = tmp34;
									}
								}
								HX_STACK_LINE(1084)
								::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
								HX_STACK_LINE(1084)
								::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
								HX_STACK_LINE(1084)
								::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
								HX_STACK_LINE(1084)
								{
									HX_STACK_LINE(1084)
									::zpp_nape::space::ZPP_AABBNode tmp21 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1084)
									bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1084)
									if ((tmp22)){
										HX_STACK_LINE(1084)
										::zpp_nape::space::ZPP_AABBNode tmp23 = ::zpp_nape::space::ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1084)
										nparent = tmp23;
									}
									else{
										HX_STACK_LINE(1084)
										::zpp_nape::space::ZPP_AABBNode tmp23 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1084)
										nparent = tmp23;
										HX_STACK_LINE(1084)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
										HX_STACK_LINE(1084)
										nparent->next = null();
									}
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										{
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB tmp23 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1084)
											bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1084)
											if ((tmp24)){
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB tmp25 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1084)
												nparent->aabb = tmp25;
											}
											else{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB tmp25 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1084)
												nparent->aabb = tmp25;
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB tmp26 = nparent->aabb->next;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = tmp26;
												HX_STACK_LINE(1084)
												nparent->aabb->next = null();
											}
											HX_STACK_LINE(1084)
											Dynamic();
										}
										HX_STACK_LINE(1084)
										nparent->moved = false;
										HX_STACK_LINE(1084)
										nparent->synced = false;
										HX_STACK_LINE(1084)
										nparent->first_sync = false;
									}
								}
								HX_STACK_LINE(1084)
								nparent->parent = oparent;
								HX_STACK_LINE(1084)
								{
									HX_STACK_LINE(1084)
									::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1084)
									::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1084)
									bool tmp21 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1084)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1084)
									if ((tmp21)){
										HX_STACK_LINE(1084)
										tmp22 = leafaabb->minx;
									}
									else{
										HX_STACK_LINE(1084)
										tmp22 = b->minx;
									}
									HX_STACK_LINE(1084)
									_this->minx = tmp22;
									HX_STACK_LINE(1084)
									bool tmp23 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1084)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1084)
									if ((tmp23)){
										HX_STACK_LINE(1084)
										tmp24 = leafaabb->miny;
									}
									else{
										HX_STACK_LINE(1084)
										tmp24 = b->miny;
									}
									HX_STACK_LINE(1084)
									_this->miny = tmp24;
									HX_STACK_LINE(1084)
									bool tmp25 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1084)
									Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1084)
									if ((tmp25)){
										HX_STACK_LINE(1084)
										tmp26 = leafaabb->maxx;
									}
									else{
										HX_STACK_LINE(1084)
										tmp26 = b->maxx;
									}
									HX_STACK_LINE(1084)
									_this->maxx = tmp26;
									HX_STACK_LINE(1084)
									bool tmp27 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1084)
									Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1084)
									if ((tmp27)){
										HX_STACK_LINE(1084)
										tmp28 = leafaabb->maxy;
									}
									else{
										HX_STACK_LINE(1084)
										tmp28 = b->maxy;
									}
									HX_STACK_LINE(1084)
									_this->maxy = tmp28;
								}
								HX_STACK_LINE(1084)
								int tmp21 = (sibling->height + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1084)
								nparent->height = tmp21;
								HX_STACK_LINE(1084)
								bool tmp22 = (oparent != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1084)
								if ((tmp22)){
									HX_STACK_LINE(1084)
									bool tmp23 = (oparent->child1 == sibling);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1084)
									if ((tmp23)){
										HX_STACK_LINE(1084)
										oparent->child1 = nparent;
									}
									else{
										HX_STACK_LINE(1084)
										oparent->child2 = nparent;
									}
									HX_STACK_LINE(1084)
									nparent->child1 = sibling;
									HX_STACK_LINE(1084)
									nparent->child2 = node;
									HX_STACK_LINE(1084)
									sibling->parent = nparent;
									HX_STACK_LINE(1084)
									node->parent = nparent;
								}
								else{
									HX_STACK_LINE(1084)
									nparent->child1 = sibling;
									HX_STACK_LINE(1084)
									nparent->child2 = node;
									HX_STACK_LINE(1084)
									sibling->parent = nparent;
									HX_STACK_LINE(1084)
									node->parent = nparent;
									HX_STACK_LINE(1084)
									tree->root = nparent;
								}
								HX_STACK_LINE(1084)
								node1 = node->parent;
								HX_STACK_LINE(1084)
								while((true)){
									HX_STACK_LINE(1084)
									bool tmp23 = (node1 != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1084)
									bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1084)
									if ((tmp24)){
										HX_STACK_LINE(1084)
										break;
									}
									HX_STACK_LINE(1084)
									bool tmp25 = (node1->child1 == null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1084)
									bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1084)
									bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1084)
									if ((tmp26)){
										HX_STACK_LINE(1084)
										tmp27 = (node1->height < (int)2);
									}
									else{
										HX_STACK_LINE(1084)
										tmp27 = true;
									}
									HX_STACK_LINE(1084)
									::zpp_nape::space::ZPP_AABBNode tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1084)
									if ((tmp27)){
										HX_STACK_LINE(1084)
										tmp28 = node1;
									}
									else{
										HX_STACK_LINE(1084)
										::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1084)
										::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(1084)
										int tmp29 = (c->height - b->height);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1084)
										int balance = tmp29;		HX_STACK_VAR(balance,"balance");
										HX_STACK_LINE(1084)
										bool tmp30 = (balance > (int)1);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1084)
										if ((tmp30)){
											HX_STACK_LINE(1084)
											::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(1084)
											::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(1084)
											c->child1 = node1;
											HX_STACK_LINE(1084)
											c->parent = node1->parent;
											HX_STACK_LINE(1084)
											node1->parent = c;
											HX_STACK_LINE(1084)
											bool tmp31 = (c->parent != null());		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1084)
											if ((tmp31)){
												HX_STACK_LINE(1084)
												::zpp_nape::space::ZPP_AABBNode tmp32 = c->parent->child1;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1084)
												::zpp_nape::space::ZPP_AABBNode tmp33 = node1;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												if ((tmp34)){
													HX_STACK_LINE(1084)
													c->parent->child1 = c;
												}
												else{
													HX_STACK_LINE(1084)
													c->parent->child2 = c;
												}
											}
											else{
												HX_STACK_LINE(1084)
												tree->root = c;
											}
											HX_STACK_LINE(1084)
											bool tmp32 = (f->height > g->height);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1084)
											if ((tmp32)){
												HX_STACK_LINE(1084)
												c->child2 = f;
												HX_STACK_LINE(1084)
												node1->child2 = g;
												HX_STACK_LINE(1084)
												g->parent = node1;
												HX_STACK_LINE(1084)
												{
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1084)
													bool tmp33 = (a->minx < b1->minx);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1084)
													Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													if ((tmp33)){
														HX_STACK_LINE(1084)
														tmp34 = a->minx;
													}
													else{
														HX_STACK_LINE(1084)
														tmp34 = b1->minx;
													}
													HX_STACK_LINE(1084)
													_this->minx = tmp34;
													HX_STACK_LINE(1084)
													bool tmp35 = (a->miny < b1->miny);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1084)
													Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1084)
													if ((tmp35)){
														HX_STACK_LINE(1084)
														tmp36 = a->miny;
													}
													else{
														HX_STACK_LINE(1084)
														tmp36 = b1->miny;
													}
													HX_STACK_LINE(1084)
													_this->miny = tmp36;
													HX_STACK_LINE(1084)
													bool tmp37 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1084)
													Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1084)
													if ((tmp37)){
														HX_STACK_LINE(1084)
														tmp38 = a->maxx;
													}
													else{
														HX_STACK_LINE(1084)
														tmp38 = b1->maxx;
													}
													HX_STACK_LINE(1084)
													_this->maxx = tmp38;
													HX_STACK_LINE(1084)
													bool tmp39 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1084)
													Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1084)
													if ((tmp39)){
														HX_STACK_LINE(1084)
														tmp40 = a->maxy;
													}
													else{
														HX_STACK_LINE(1084)
														tmp40 = b1->maxy;
													}
													HX_STACK_LINE(1084)
													_this->maxy = tmp40;
												}
												HX_STACK_LINE(1084)
												{
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1084)
													bool tmp33 = (a->minx < b1->minx);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1084)
													Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													if ((tmp33)){
														HX_STACK_LINE(1084)
														tmp34 = a->minx;
													}
													else{
														HX_STACK_LINE(1084)
														tmp34 = b1->minx;
													}
													HX_STACK_LINE(1084)
													_this->minx = tmp34;
													HX_STACK_LINE(1084)
													bool tmp35 = (a->miny < b1->miny);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1084)
													Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1084)
													if ((tmp35)){
														HX_STACK_LINE(1084)
														tmp36 = a->miny;
													}
													else{
														HX_STACK_LINE(1084)
														tmp36 = b1->miny;
													}
													HX_STACK_LINE(1084)
													_this->miny = tmp36;
													HX_STACK_LINE(1084)
													bool tmp37 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1084)
													Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1084)
													if ((tmp37)){
														HX_STACK_LINE(1084)
														tmp38 = a->maxx;
													}
													else{
														HX_STACK_LINE(1084)
														tmp38 = b1->maxx;
													}
													HX_STACK_LINE(1084)
													_this->maxx = tmp38;
													HX_STACK_LINE(1084)
													bool tmp39 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1084)
													Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1084)
													if ((tmp39)){
														HX_STACK_LINE(1084)
														tmp40 = a->maxy;
													}
													else{
														HX_STACK_LINE(1084)
														tmp40 = b1->maxy;
													}
													HX_STACK_LINE(1084)
													_this->maxy = tmp40;
												}
												HX_STACK_LINE(1084)
												int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												{
													HX_STACK_LINE(1084)
													int x = b->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1084)
													int y = g->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1084)
													bool tmp34 = (x > y);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													if ((tmp34)){
														HX_STACK_LINE(1084)
														tmp33 = x;
													}
													else{
														HX_STACK_LINE(1084)
														tmp33 = y;
													}
												}
												HX_STACK_LINE(1084)
												int tmp34 = ((int)1 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												node1->height = tmp34;
												HX_STACK_LINE(1084)
												int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1084)
												{
													HX_STACK_LINE(1084)
													int x = node1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1084)
													int y = f->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1084)
													bool tmp36 = (x > y);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1084)
													if ((tmp36)){
														HX_STACK_LINE(1084)
														tmp35 = x;
													}
													else{
														HX_STACK_LINE(1084)
														tmp35 = y;
													}
												}
												HX_STACK_LINE(1084)
												int tmp36 = ((int)1 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1084)
												c->height = tmp36;
											}
											else{
												HX_STACK_LINE(1084)
												c->child2 = g;
												HX_STACK_LINE(1084)
												node1->child2 = f;
												HX_STACK_LINE(1084)
												f->parent = node1;
												HX_STACK_LINE(1084)
												{
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1084)
													bool tmp33 = (a->minx < b1->minx);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1084)
													Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													if ((tmp33)){
														HX_STACK_LINE(1084)
														tmp34 = a->minx;
													}
													else{
														HX_STACK_LINE(1084)
														tmp34 = b1->minx;
													}
													HX_STACK_LINE(1084)
													_this->minx = tmp34;
													HX_STACK_LINE(1084)
													bool tmp35 = (a->miny < b1->miny);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1084)
													Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1084)
													if ((tmp35)){
														HX_STACK_LINE(1084)
														tmp36 = a->miny;
													}
													else{
														HX_STACK_LINE(1084)
														tmp36 = b1->miny;
													}
													HX_STACK_LINE(1084)
													_this->miny = tmp36;
													HX_STACK_LINE(1084)
													bool tmp37 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1084)
													Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1084)
													if ((tmp37)){
														HX_STACK_LINE(1084)
														tmp38 = a->maxx;
													}
													else{
														HX_STACK_LINE(1084)
														tmp38 = b1->maxx;
													}
													HX_STACK_LINE(1084)
													_this->maxx = tmp38;
													HX_STACK_LINE(1084)
													bool tmp39 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1084)
													Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1084)
													if ((tmp39)){
														HX_STACK_LINE(1084)
														tmp40 = a->maxy;
													}
													else{
														HX_STACK_LINE(1084)
														tmp40 = b1->maxy;
													}
													HX_STACK_LINE(1084)
													_this->maxy = tmp40;
												}
												HX_STACK_LINE(1084)
												{
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1084)
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1084)
													bool tmp33 = (a->minx < b1->minx);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1084)
													Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													if ((tmp33)){
														HX_STACK_LINE(1084)
														tmp34 = a->minx;
													}
													else{
														HX_STACK_LINE(1084)
														tmp34 = b1->minx;
													}
													HX_STACK_LINE(1084)
													_this->minx = tmp34;
													HX_STACK_LINE(1084)
													bool tmp35 = (a->miny < b1->miny);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1084)
													Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1084)
													if ((tmp35)){
														HX_STACK_LINE(1084)
														tmp36 = a->miny;
													}
													else{
														HX_STACK_LINE(1084)
														tmp36 = b1->miny;
													}
													HX_STACK_LINE(1084)
													_this->miny = tmp36;
													HX_STACK_LINE(1084)
													bool tmp37 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1084)
													Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1084)
													if ((tmp37)){
														HX_STACK_LINE(1084)
														tmp38 = a->maxx;
													}
													else{
														HX_STACK_LINE(1084)
														tmp38 = b1->maxx;
													}
													HX_STACK_LINE(1084)
													_this->maxx = tmp38;
													HX_STACK_LINE(1084)
													bool tmp39 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1084)
													Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1084)
													if ((tmp39)){
														HX_STACK_LINE(1084)
														tmp40 = a->maxy;
													}
													else{
														HX_STACK_LINE(1084)
														tmp40 = b1->maxy;
													}
													HX_STACK_LINE(1084)
													_this->maxy = tmp40;
												}
												HX_STACK_LINE(1084)
												int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												{
													HX_STACK_LINE(1084)
													int x = b->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1084)
													int y = f->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1084)
													bool tmp34 = (x > y);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													if ((tmp34)){
														HX_STACK_LINE(1084)
														tmp33 = x;
													}
													else{
														HX_STACK_LINE(1084)
														tmp33 = y;
													}
												}
												HX_STACK_LINE(1084)
												int tmp34 = ((int)1 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1084)
												node1->height = tmp34;
												HX_STACK_LINE(1084)
												int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1084)
												{
													HX_STACK_LINE(1084)
													int x = node1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1084)
													int y = g->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1084)
													bool tmp36 = (x > y);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1084)
													if ((tmp36)){
														HX_STACK_LINE(1084)
														tmp35 = x;
													}
													else{
														HX_STACK_LINE(1084)
														tmp35 = y;
													}
												}
												HX_STACK_LINE(1084)
												int tmp36 = ((int)1 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1084)
												c->height = tmp36;
											}
											HX_STACK_LINE(1084)
											tmp28 = c;
										}
										else{
											HX_STACK_LINE(1084)
											bool tmp31 = (balance < (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1084)
											if ((tmp31)){
												HX_STACK_LINE(1084)
												::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(1084)
												::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1084)
												b->child1 = node1;
												HX_STACK_LINE(1084)
												b->parent = node1->parent;
												HX_STACK_LINE(1084)
												node1->parent = b;
												HX_STACK_LINE(1084)
												bool tmp32 = (b->parent != null());		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1084)
												if ((tmp32)){
													HX_STACK_LINE(1084)
													::zpp_nape::space::ZPP_AABBNode tmp33 = b->parent->child1;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1084)
													::zpp_nape::space::ZPP_AABBNode tmp34 = node1;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1084)
													if ((tmp35)){
														HX_STACK_LINE(1084)
														b->parent->child1 = b;
													}
													else{
														HX_STACK_LINE(1084)
														b->parent->child2 = b;
													}
												}
												else{
													HX_STACK_LINE(1084)
													tree->root = b;
												}
												HX_STACK_LINE(1084)
												bool tmp33 = (f->height > g->height);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1084)
												if ((tmp33)){
													HX_STACK_LINE(1084)
													b->child2 = f;
													HX_STACK_LINE(1084)
													node1->child1 = g;
													HX_STACK_LINE(1084)
													g->parent = node1;
													HX_STACK_LINE(1084)
													{
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1084)
														bool tmp34 = (a->minx < b1->minx);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1084)
														Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1084)
														if ((tmp34)){
															HX_STACK_LINE(1084)
															tmp35 = a->minx;
														}
														else{
															HX_STACK_LINE(1084)
															tmp35 = b1->minx;
														}
														HX_STACK_LINE(1084)
														_this->minx = tmp35;
														HX_STACK_LINE(1084)
														bool tmp36 = (a->miny < b1->miny);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1084)
														Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1084)
														if ((tmp36)){
															HX_STACK_LINE(1084)
															tmp37 = a->miny;
														}
														else{
															HX_STACK_LINE(1084)
															tmp37 = b1->miny;
														}
														HX_STACK_LINE(1084)
														_this->miny = tmp37;
														HX_STACK_LINE(1084)
														bool tmp38 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1084)
														Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1084)
														if ((tmp38)){
															HX_STACK_LINE(1084)
															tmp39 = a->maxx;
														}
														else{
															HX_STACK_LINE(1084)
															tmp39 = b1->maxx;
														}
														HX_STACK_LINE(1084)
														_this->maxx = tmp39;
														HX_STACK_LINE(1084)
														bool tmp40 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1084)
														Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1084)
														if ((tmp40)){
															HX_STACK_LINE(1084)
															tmp41 = a->maxy;
														}
														else{
															HX_STACK_LINE(1084)
															tmp41 = b1->maxy;
														}
														HX_STACK_LINE(1084)
														_this->maxy = tmp41;
													}
													HX_STACK_LINE(1084)
													{
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1084)
														bool tmp34 = (a->minx < b1->minx);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1084)
														Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1084)
														if ((tmp34)){
															HX_STACK_LINE(1084)
															tmp35 = a->minx;
														}
														else{
															HX_STACK_LINE(1084)
															tmp35 = b1->minx;
														}
														HX_STACK_LINE(1084)
														_this->minx = tmp35;
														HX_STACK_LINE(1084)
														bool tmp36 = (a->miny < b1->miny);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1084)
														Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1084)
														if ((tmp36)){
															HX_STACK_LINE(1084)
															tmp37 = a->miny;
														}
														else{
															HX_STACK_LINE(1084)
															tmp37 = b1->miny;
														}
														HX_STACK_LINE(1084)
														_this->miny = tmp37;
														HX_STACK_LINE(1084)
														bool tmp38 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1084)
														Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1084)
														if ((tmp38)){
															HX_STACK_LINE(1084)
															tmp39 = a->maxx;
														}
														else{
															HX_STACK_LINE(1084)
															tmp39 = b1->maxx;
														}
														HX_STACK_LINE(1084)
														_this->maxx = tmp39;
														HX_STACK_LINE(1084)
														bool tmp40 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1084)
														Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1084)
														if ((tmp40)){
															HX_STACK_LINE(1084)
															tmp41 = a->maxy;
														}
														else{
															HX_STACK_LINE(1084)
															tmp41 = b1->maxy;
														}
														HX_STACK_LINE(1084)
														_this->maxy = tmp41;
													}
													HX_STACK_LINE(1084)
													int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													{
														HX_STACK_LINE(1084)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1084)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1084)
														bool tmp35 = (x > y);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1084)
														if ((tmp35)){
															HX_STACK_LINE(1084)
															tmp34 = x;
														}
														else{
															HX_STACK_LINE(1084)
															tmp34 = y;
														}
													}
													HX_STACK_LINE(1084)
													int tmp35 = ((int)1 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1084)
													node1->height = tmp35;
													HX_STACK_LINE(1084)
													int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1084)
													{
														HX_STACK_LINE(1084)
														int x = node1->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1084)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1084)
														bool tmp37 = (x > y);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1084)
														if ((tmp37)){
															HX_STACK_LINE(1084)
															tmp36 = x;
														}
														else{
															HX_STACK_LINE(1084)
															tmp36 = y;
														}
													}
													HX_STACK_LINE(1084)
													int tmp37 = ((int)1 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1084)
													b->height = tmp37;
												}
												else{
													HX_STACK_LINE(1084)
													b->child2 = g;
													HX_STACK_LINE(1084)
													node1->child1 = f;
													HX_STACK_LINE(1084)
													f->parent = node1;
													HX_STACK_LINE(1084)
													{
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1084)
														bool tmp34 = (a->minx < b1->minx);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1084)
														Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1084)
														if ((tmp34)){
															HX_STACK_LINE(1084)
															tmp35 = a->minx;
														}
														else{
															HX_STACK_LINE(1084)
															tmp35 = b1->minx;
														}
														HX_STACK_LINE(1084)
														_this->minx = tmp35;
														HX_STACK_LINE(1084)
														bool tmp36 = (a->miny < b1->miny);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1084)
														Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1084)
														if ((tmp36)){
															HX_STACK_LINE(1084)
															tmp37 = a->miny;
														}
														else{
															HX_STACK_LINE(1084)
															tmp37 = b1->miny;
														}
														HX_STACK_LINE(1084)
														_this->miny = tmp37;
														HX_STACK_LINE(1084)
														bool tmp38 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1084)
														Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1084)
														if ((tmp38)){
															HX_STACK_LINE(1084)
															tmp39 = a->maxx;
														}
														else{
															HX_STACK_LINE(1084)
															tmp39 = b1->maxx;
														}
														HX_STACK_LINE(1084)
														_this->maxx = tmp39;
														HX_STACK_LINE(1084)
														bool tmp40 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1084)
														Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1084)
														if ((tmp40)){
															HX_STACK_LINE(1084)
															tmp41 = a->maxy;
														}
														else{
															HX_STACK_LINE(1084)
															tmp41 = b1->maxy;
														}
														HX_STACK_LINE(1084)
														_this->maxy = tmp41;
													}
													HX_STACK_LINE(1084)
													{
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1084)
														bool tmp34 = (a->minx < b1->minx);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(1084)
														Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1084)
														if ((tmp34)){
															HX_STACK_LINE(1084)
															tmp35 = a->minx;
														}
														else{
															HX_STACK_LINE(1084)
															tmp35 = b1->minx;
														}
														HX_STACK_LINE(1084)
														_this->minx = tmp35;
														HX_STACK_LINE(1084)
														bool tmp36 = (a->miny < b1->miny);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(1084)
														Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1084)
														if ((tmp36)){
															HX_STACK_LINE(1084)
															tmp37 = a->miny;
														}
														else{
															HX_STACK_LINE(1084)
															tmp37 = b1->miny;
														}
														HX_STACK_LINE(1084)
														_this->miny = tmp37;
														HX_STACK_LINE(1084)
														bool tmp38 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1084)
														Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1084)
														if ((tmp38)){
															HX_STACK_LINE(1084)
															tmp39 = a->maxx;
														}
														else{
															HX_STACK_LINE(1084)
															tmp39 = b1->maxx;
														}
														HX_STACK_LINE(1084)
														_this->maxx = tmp39;
														HX_STACK_LINE(1084)
														bool tmp40 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1084)
														Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1084)
														if ((tmp40)){
															HX_STACK_LINE(1084)
															tmp41 = a->maxy;
														}
														else{
															HX_STACK_LINE(1084)
															tmp41 = b1->maxy;
														}
														HX_STACK_LINE(1084)
														_this->maxy = tmp41;
													}
													HX_STACK_LINE(1084)
													int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1084)
													{
														HX_STACK_LINE(1084)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1084)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1084)
														bool tmp35 = (x > y);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(1084)
														if ((tmp35)){
															HX_STACK_LINE(1084)
															tmp34 = x;
														}
														else{
															HX_STACK_LINE(1084)
															tmp34 = y;
														}
													}
													HX_STACK_LINE(1084)
													int tmp35 = ((int)1 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1084)
													node1->height = tmp35;
													HX_STACK_LINE(1084)
													int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1084)
													{
														HX_STACK_LINE(1084)
														int x = node1->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1084)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1084)
														bool tmp37 = (x > y);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1084)
														if ((tmp37)){
															HX_STACK_LINE(1084)
															tmp36 = x;
														}
														else{
															HX_STACK_LINE(1084)
															tmp36 = y;
														}
													}
													HX_STACK_LINE(1084)
													int tmp37 = ((int)1 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1084)
													b->height = tmp37;
												}
												HX_STACK_LINE(1084)
												tmp28 = b;
											}
											else{
												HX_STACK_LINE(1084)
												tmp28 = node1;
											}
										}
									}
									HX_STACK_LINE(1084)
									node1 = tmp28;
									HX_STACK_LINE(1084)
									::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
									HX_STACK_LINE(1084)
									::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
									HX_STACK_LINE(1084)
									int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										int x = child1->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1084)
										int y = child2->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(1084)
										bool tmp30 = (x > y);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1084)
										if ((tmp30)){
											HX_STACK_LINE(1084)
											tmp29 = x;
										}
										else{
											HX_STACK_LINE(1084)
											tmp29 = y;
										}
									}
									HX_STACK_LINE(1084)
									int tmp30 = ((int)1 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1084)
									node1->height = tmp30;
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1084)
										::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1084)
										bool tmp31 = (a->minx < b->minx);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1084)
										Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1084)
										if ((tmp31)){
											HX_STACK_LINE(1084)
											tmp32 = a->minx;
										}
										else{
											HX_STACK_LINE(1084)
											tmp32 = b->minx;
										}
										HX_STACK_LINE(1084)
										_this->minx = tmp32;
										HX_STACK_LINE(1084)
										bool tmp33 = (a->miny < b->miny);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1084)
										Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1084)
										if ((tmp33)){
											HX_STACK_LINE(1084)
											tmp34 = a->miny;
										}
										else{
											HX_STACK_LINE(1084)
											tmp34 = b->miny;
										}
										HX_STACK_LINE(1084)
										_this->miny = tmp34;
										HX_STACK_LINE(1084)
										bool tmp35 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1084)
										Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1084)
										if ((tmp35)){
											HX_STACK_LINE(1084)
											tmp36 = a->maxx;
										}
										else{
											HX_STACK_LINE(1084)
											tmp36 = b->maxx;
										}
										HX_STACK_LINE(1084)
										_this->maxx = tmp36;
										HX_STACK_LINE(1084)
										bool tmp37 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1084)
										Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1084)
										if ((tmp37)){
											HX_STACK_LINE(1084)
											tmp38 = a->maxy;
										}
										else{
											HX_STACK_LINE(1084)
											tmp38 = b->maxy;
										}
										HX_STACK_LINE(1084)
										_this->maxy = tmp38;
									}
									HX_STACK_LINE(1084)
									node1 = node1->parent;
								}
							}
						}
						HX_STACK_LINE(1085)
						node->synced = false;
					}
					HX_STACK_LINE(1087)
					bool tmp9 = node->moved;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1087)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1087)
					if ((tmp10)){
						HX_STACK_LINE(1088)
						node->moved = true;
						HX_STACK_LINE(1089)
						{
							HX_STACK_LINE(1098)
							::zpp_nape::space::ZPP_AABBNode tmp11 = this->moves;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1098)
							node->mnext = tmp11;
							HX_STACK_LINE(1099)
							this->moves = node;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DynAABBPhase_obj,sync_broadphase,(void))

Void ZPP_DynAABBPhase_obj::broadphase( ::zpp_nape::space::ZPP_Space space,bool discrete){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","broadphase",0x9b51d8f7,"zpp_nape.space.ZPP_DynAABBPhase.broadphase","zpp_nape/space/DynAABBPhase.hx",1106,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(space,"space")
		HX_STACK_ARG(discrete,"discrete")
		HX_STACK_LINE(1107)
		::zpp_nape::space::ZPP_AABBNode tmp = this->syncs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1107)
		::zpp_nape::space::ZPP_AABBNode node = tmp;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1108)
		while((true)){
			HX_STACK_LINE(1108)
			bool tmp1 = (node != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1108)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1108)
			if ((tmp2)){
				HX_STACK_LINE(1108)
				break;
			}
			HX_STACK_LINE(1109)
			{
				HX_STACK_LINE(1110)
				::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
				HX_STACK_LINE(1127)
				bool tmp3 = node->first_sync;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1127)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1127)
				if ((tmp4)){
					HX_STACK_LINE(1128)
					bool tmp5 = node->dyn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1128)
					::zpp_nape::space::ZPP_AABBTree tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1128)
					if ((tmp5)){
						HX_STACK_LINE(1128)
						tmp6 = this->dtree;
					}
					else{
						HX_STACK_LINE(1128)
						tmp6 = this->stree;
					}
					HX_STACK_LINE(1128)
					::zpp_nape::space::ZPP_AABBTree tree = tmp6;		HX_STACK_VAR(tree,"tree");
					HX_STACK_LINE(1129)
					{
						HX_STACK_LINE(1129)
						bool tmp7 = (node == tree->root);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1129)
						if ((tmp7)){
							HX_STACK_LINE(1129)
							tree->root = null();
							HX_STACK_LINE(1129)
							Dynamic();
						}
						else{
							HX_STACK_LINE(1129)
							::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
							HX_STACK_LINE(1129)
							::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
							HX_STACK_LINE(1129)
							bool tmp8 = (parent->child1 == node);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1129)
							::zpp_nape::space::ZPP_AABBNode tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1129)
							if ((tmp8)){
								HX_STACK_LINE(1129)
								tmp9 = parent->child2;
							}
							else{
								HX_STACK_LINE(1129)
								tmp9 = parent->child1;
							}
							HX_STACK_LINE(1129)
							::zpp_nape::space::ZPP_AABBNode sibling = tmp9;		HX_STACK_VAR(sibling,"sibling");
							HX_STACK_LINE(1129)
							bool tmp10 = (gparent != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1129)
							if ((tmp10)){
								HX_STACK_LINE(1129)
								bool tmp11 = (gparent->child1 == parent);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1129)
								if ((tmp11)){
									HX_STACK_LINE(1129)
									gparent->child1 = sibling;
								}
								else{
									HX_STACK_LINE(1129)
									gparent->child2 = sibling;
								}
								HX_STACK_LINE(1129)
								sibling->parent = gparent;
								HX_STACK_LINE(1129)
								{
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1129)
									{
										HX_STACK_LINE(1129)
										o->height = (int)-1;
										HX_STACK_LINE(1129)
										{
											HX_STACK_LINE(1129)
											::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1129)
											{
												HX_STACK_LINE(1129)
												bool tmp12 = (o1->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(1129)
												if ((tmp12)){
													HX_STACK_LINE(1129)
													o1->outer->zpp_inner = null();
													HX_STACK_LINE(1129)
													o1->outer = null();
												}
												HX_STACK_LINE(1129)
												::nape::geom::Vec2 tmp13 = o1->wrap_max = null();		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(1129)
												o1->wrap_min = tmp13;
												HX_STACK_LINE(1129)
												o1->_invalidate = null();
												HX_STACK_LINE(1129)
												o1->_validate = null();
											}
											HX_STACK_LINE(1129)
											::zpp_nape::geom::ZPP_AABB tmp12 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1129)
											o1->next = tmp12;
											HX_STACK_LINE(1129)
											::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
										}
										HX_STACK_LINE(1129)
										::zpp_nape::space::ZPP_AABBNode tmp12 = o->parent = null();		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1129)
										::zpp_nape::space::ZPP_AABBNode tmp13 = o->child2 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1129)
										o->child1 = tmp13;
										HX_STACK_LINE(1129)
										o->next = null();
										HX_STACK_LINE(1129)
										o->snext = null();
										HX_STACK_LINE(1129)
										o->mnext = null();
									}
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode tmp12 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1129)
									o->next = tmp12;
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1129)
								::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
								HX_STACK_LINE(1129)
								while((true)){
									HX_STACK_LINE(1129)
									bool tmp12 = (node1 != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1129)
									bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1129)
									if ((tmp13)){
										HX_STACK_LINE(1129)
										break;
									}
									HX_STACK_LINE(1129)
									bool tmp14 = (node1->child1 == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1129)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1129)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1129)
									if ((tmp15)){
										HX_STACK_LINE(1129)
										tmp16 = (node1->height < (int)2);
									}
									else{
										HX_STACK_LINE(1129)
										tmp16 = true;
									}
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1129)
									if ((tmp16)){
										HX_STACK_LINE(1129)
										tmp17 = node1;
									}
									else{
										HX_STACK_LINE(1129)
										::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1129)
										::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(1129)
										int tmp18 = (c->height - b->height);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1129)
										int balance = tmp18;		HX_STACK_VAR(balance,"balance");
										HX_STACK_LINE(1129)
										bool tmp19 = (balance > (int)1);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1129)
										if ((tmp19)){
											HX_STACK_LINE(1129)
											::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(1129)
											::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(1129)
											c->child1 = node1;
											HX_STACK_LINE(1129)
											c->parent = node1->parent;
											HX_STACK_LINE(1129)
											node1->parent = c;
											HX_STACK_LINE(1129)
											bool tmp20 = (c->parent != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1129)
											if ((tmp20)){
												HX_STACK_LINE(1129)
												::zpp_nape::space::ZPP_AABBNode tmp21 = c->parent->child1;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1129)
												::zpp_nape::space::ZPP_AABBNode tmp22 = node1;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1129)
												bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1129)
												if ((tmp23)){
													HX_STACK_LINE(1129)
													c->parent->child1 = c;
												}
												else{
													HX_STACK_LINE(1129)
													c->parent->child2 = c;
												}
											}
											else{
												HX_STACK_LINE(1129)
												tree->root = c;
											}
											HX_STACK_LINE(1129)
											bool tmp21 = (f->height > g->height);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1129)
											if ((tmp21)){
												HX_STACK_LINE(1129)
												c->child2 = f;
												HX_STACK_LINE(1129)
												node1->child2 = g;
												HX_STACK_LINE(1129)
												g->parent = node1;
												HX_STACK_LINE(1129)
												{
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1129)
													bool tmp22 = (a->minx < b1->minx);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1129)
													Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													if ((tmp22)){
														HX_STACK_LINE(1129)
														tmp23 = a->minx;
													}
													else{
														HX_STACK_LINE(1129)
														tmp23 = b1->minx;
													}
													HX_STACK_LINE(1129)
													_this->minx = tmp23;
													HX_STACK_LINE(1129)
													bool tmp24 = (a->miny < b1->miny);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1129)
													Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1129)
													if ((tmp24)){
														HX_STACK_LINE(1129)
														tmp25 = a->miny;
													}
													else{
														HX_STACK_LINE(1129)
														tmp25 = b1->miny;
													}
													HX_STACK_LINE(1129)
													_this->miny = tmp25;
													HX_STACK_LINE(1129)
													bool tmp26 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1129)
													Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1129)
													if ((tmp26)){
														HX_STACK_LINE(1129)
														tmp27 = a->maxx;
													}
													else{
														HX_STACK_LINE(1129)
														tmp27 = b1->maxx;
													}
													HX_STACK_LINE(1129)
													_this->maxx = tmp27;
													HX_STACK_LINE(1129)
													bool tmp28 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1129)
													Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1129)
													if ((tmp28)){
														HX_STACK_LINE(1129)
														tmp29 = a->maxy;
													}
													else{
														HX_STACK_LINE(1129)
														tmp29 = b1->maxy;
													}
													HX_STACK_LINE(1129)
													_this->maxy = tmp29;
												}
												HX_STACK_LINE(1129)
												{
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1129)
													bool tmp22 = (a->minx < b1->minx);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1129)
													Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													if ((tmp22)){
														HX_STACK_LINE(1129)
														tmp23 = a->minx;
													}
													else{
														HX_STACK_LINE(1129)
														tmp23 = b1->minx;
													}
													HX_STACK_LINE(1129)
													_this->minx = tmp23;
													HX_STACK_LINE(1129)
													bool tmp24 = (a->miny < b1->miny);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1129)
													Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1129)
													if ((tmp24)){
														HX_STACK_LINE(1129)
														tmp25 = a->miny;
													}
													else{
														HX_STACK_LINE(1129)
														tmp25 = b1->miny;
													}
													HX_STACK_LINE(1129)
													_this->miny = tmp25;
													HX_STACK_LINE(1129)
													bool tmp26 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1129)
													Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1129)
													if ((tmp26)){
														HX_STACK_LINE(1129)
														tmp27 = a->maxx;
													}
													else{
														HX_STACK_LINE(1129)
														tmp27 = b1->maxx;
													}
													HX_STACK_LINE(1129)
													_this->maxx = tmp27;
													HX_STACK_LINE(1129)
													bool tmp28 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1129)
													Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1129)
													if ((tmp28)){
														HX_STACK_LINE(1129)
														tmp29 = a->maxy;
													}
													else{
														HX_STACK_LINE(1129)
														tmp29 = b1->maxy;
													}
													HX_STACK_LINE(1129)
													_this->maxy = tmp29;
												}
												HX_STACK_LINE(1129)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1129)
												{
													HX_STACK_LINE(1129)
													int x = b->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1129)
													int y = g->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1129)
													bool tmp23 = (x > y);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													if ((tmp23)){
														HX_STACK_LINE(1129)
														tmp22 = x;
													}
													else{
														HX_STACK_LINE(1129)
														tmp22 = y;
													}
												}
												HX_STACK_LINE(1129)
												int tmp23 = ((int)1 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1129)
												node1->height = tmp23;
												HX_STACK_LINE(1129)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1129)
												{
													HX_STACK_LINE(1129)
													int x = node1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1129)
													int y = f->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1129)
													bool tmp25 = (x > y);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1129)
													if ((tmp25)){
														HX_STACK_LINE(1129)
														tmp24 = x;
													}
													else{
														HX_STACK_LINE(1129)
														tmp24 = y;
													}
												}
												HX_STACK_LINE(1129)
												int tmp25 = ((int)1 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1129)
												c->height = tmp25;
											}
											else{
												HX_STACK_LINE(1129)
												c->child2 = g;
												HX_STACK_LINE(1129)
												node1->child2 = f;
												HX_STACK_LINE(1129)
												f->parent = node1;
												HX_STACK_LINE(1129)
												{
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1129)
													bool tmp22 = (a->minx < b1->minx);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1129)
													Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													if ((tmp22)){
														HX_STACK_LINE(1129)
														tmp23 = a->minx;
													}
													else{
														HX_STACK_LINE(1129)
														tmp23 = b1->minx;
													}
													HX_STACK_LINE(1129)
													_this->minx = tmp23;
													HX_STACK_LINE(1129)
													bool tmp24 = (a->miny < b1->miny);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1129)
													Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1129)
													if ((tmp24)){
														HX_STACK_LINE(1129)
														tmp25 = a->miny;
													}
													else{
														HX_STACK_LINE(1129)
														tmp25 = b1->miny;
													}
													HX_STACK_LINE(1129)
													_this->miny = tmp25;
													HX_STACK_LINE(1129)
													bool tmp26 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1129)
													Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1129)
													if ((tmp26)){
														HX_STACK_LINE(1129)
														tmp27 = a->maxx;
													}
													else{
														HX_STACK_LINE(1129)
														tmp27 = b1->maxx;
													}
													HX_STACK_LINE(1129)
													_this->maxx = tmp27;
													HX_STACK_LINE(1129)
													bool tmp28 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1129)
													Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1129)
													if ((tmp28)){
														HX_STACK_LINE(1129)
														tmp29 = a->maxy;
													}
													else{
														HX_STACK_LINE(1129)
														tmp29 = b1->maxy;
													}
													HX_STACK_LINE(1129)
													_this->maxy = tmp29;
												}
												HX_STACK_LINE(1129)
												{
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(1129)
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1129)
													bool tmp22 = (a->minx < b1->minx);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1129)
													Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													if ((tmp22)){
														HX_STACK_LINE(1129)
														tmp23 = a->minx;
													}
													else{
														HX_STACK_LINE(1129)
														tmp23 = b1->minx;
													}
													HX_STACK_LINE(1129)
													_this->minx = tmp23;
													HX_STACK_LINE(1129)
													bool tmp24 = (a->miny < b1->miny);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1129)
													Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1129)
													if ((tmp24)){
														HX_STACK_LINE(1129)
														tmp25 = a->miny;
													}
													else{
														HX_STACK_LINE(1129)
														tmp25 = b1->miny;
													}
													HX_STACK_LINE(1129)
													_this->miny = tmp25;
													HX_STACK_LINE(1129)
													bool tmp26 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1129)
													Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1129)
													if ((tmp26)){
														HX_STACK_LINE(1129)
														tmp27 = a->maxx;
													}
													else{
														HX_STACK_LINE(1129)
														tmp27 = b1->maxx;
													}
													HX_STACK_LINE(1129)
													_this->maxx = tmp27;
													HX_STACK_LINE(1129)
													bool tmp28 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1129)
													Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1129)
													if ((tmp28)){
														HX_STACK_LINE(1129)
														tmp29 = a->maxy;
													}
													else{
														HX_STACK_LINE(1129)
														tmp29 = b1->maxy;
													}
													HX_STACK_LINE(1129)
													_this->maxy = tmp29;
												}
												HX_STACK_LINE(1129)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1129)
												{
													HX_STACK_LINE(1129)
													int x = b->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1129)
													int y = f->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1129)
													bool tmp23 = (x > y);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													if ((tmp23)){
														HX_STACK_LINE(1129)
														tmp22 = x;
													}
													else{
														HX_STACK_LINE(1129)
														tmp22 = y;
													}
												}
												HX_STACK_LINE(1129)
												int tmp23 = ((int)1 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1129)
												node1->height = tmp23;
												HX_STACK_LINE(1129)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1129)
												{
													HX_STACK_LINE(1129)
													int x = node1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1129)
													int y = g->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1129)
													bool tmp25 = (x > y);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1129)
													if ((tmp25)){
														HX_STACK_LINE(1129)
														tmp24 = x;
													}
													else{
														HX_STACK_LINE(1129)
														tmp24 = y;
													}
												}
												HX_STACK_LINE(1129)
												int tmp25 = ((int)1 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1129)
												c->height = tmp25;
											}
											HX_STACK_LINE(1129)
											tmp17 = c;
										}
										else{
											HX_STACK_LINE(1129)
											bool tmp20 = (balance < (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1129)
											if ((tmp20)){
												HX_STACK_LINE(1129)
												::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(1129)
												::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1129)
												b->child1 = node1;
												HX_STACK_LINE(1129)
												b->parent = node1->parent;
												HX_STACK_LINE(1129)
												node1->parent = b;
												HX_STACK_LINE(1129)
												bool tmp21 = (b->parent != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1129)
												if ((tmp21)){
													HX_STACK_LINE(1129)
													::zpp_nape::space::ZPP_AABBNode tmp22 = b->parent->child1;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1129)
													::zpp_nape::space::ZPP_AABBNode tmp23 = node1;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1129)
													if ((tmp24)){
														HX_STACK_LINE(1129)
														b->parent->child1 = b;
													}
													else{
														HX_STACK_LINE(1129)
														b->parent->child2 = b;
													}
												}
												else{
													HX_STACK_LINE(1129)
													tree->root = b;
												}
												HX_STACK_LINE(1129)
												bool tmp22 = (f->height > g->height);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1129)
												if ((tmp22)){
													HX_STACK_LINE(1129)
													b->child2 = f;
													HX_STACK_LINE(1129)
													node1->child1 = g;
													HX_STACK_LINE(1129)
													g->parent = node1;
													HX_STACK_LINE(1129)
													{
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1129)
														bool tmp23 = (a->minx < b1->minx);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1129)
														Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1129)
														if ((tmp23)){
															HX_STACK_LINE(1129)
															tmp24 = a->minx;
														}
														else{
															HX_STACK_LINE(1129)
															tmp24 = b1->minx;
														}
														HX_STACK_LINE(1129)
														_this->minx = tmp24;
														HX_STACK_LINE(1129)
														bool tmp25 = (a->miny < b1->miny);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1129)
														Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1129)
														if ((tmp25)){
															HX_STACK_LINE(1129)
															tmp26 = a->miny;
														}
														else{
															HX_STACK_LINE(1129)
															tmp26 = b1->miny;
														}
														HX_STACK_LINE(1129)
														_this->miny = tmp26;
														HX_STACK_LINE(1129)
														bool tmp27 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1129)
														Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1129)
														if ((tmp27)){
															HX_STACK_LINE(1129)
															tmp28 = a->maxx;
														}
														else{
															HX_STACK_LINE(1129)
															tmp28 = b1->maxx;
														}
														HX_STACK_LINE(1129)
														_this->maxx = tmp28;
														HX_STACK_LINE(1129)
														bool tmp29 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1129)
														Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1129)
														if ((tmp29)){
															HX_STACK_LINE(1129)
															tmp30 = a->maxy;
														}
														else{
															HX_STACK_LINE(1129)
															tmp30 = b1->maxy;
														}
														HX_STACK_LINE(1129)
														_this->maxy = tmp30;
													}
													HX_STACK_LINE(1129)
													{
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1129)
														bool tmp23 = (a->minx < b1->minx);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1129)
														Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1129)
														if ((tmp23)){
															HX_STACK_LINE(1129)
															tmp24 = a->minx;
														}
														else{
															HX_STACK_LINE(1129)
															tmp24 = b1->minx;
														}
														HX_STACK_LINE(1129)
														_this->minx = tmp24;
														HX_STACK_LINE(1129)
														bool tmp25 = (a->miny < b1->miny);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1129)
														Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1129)
														if ((tmp25)){
															HX_STACK_LINE(1129)
															tmp26 = a->miny;
														}
														else{
															HX_STACK_LINE(1129)
															tmp26 = b1->miny;
														}
														HX_STACK_LINE(1129)
														_this->miny = tmp26;
														HX_STACK_LINE(1129)
														bool tmp27 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1129)
														Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1129)
														if ((tmp27)){
															HX_STACK_LINE(1129)
															tmp28 = a->maxx;
														}
														else{
															HX_STACK_LINE(1129)
															tmp28 = b1->maxx;
														}
														HX_STACK_LINE(1129)
														_this->maxx = tmp28;
														HX_STACK_LINE(1129)
														bool tmp29 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1129)
														Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1129)
														if ((tmp29)){
															HX_STACK_LINE(1129)
															tmp30 = a->maxy;
														}
														else{
															HX_STACK_LINE(1129)
															tmp30 = b1->maxy;
														}
														HX_STACK_LINE(1129)
														_this->maxy = tmp30;
													}
													HX_STACK_LINE(1129)
													int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													{
														HX_STACK_LINE(1129)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1129)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1129)
														bool tmp24 = (x > y);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1129)
														if ((tmp24)){
															HX_STACK_LINE(1129)
															tmp23 = x;
														}
														else{
															HX_STACK_LINE(1129)
															tmp23 = y;
														}
													}
													HX_STACK_LINE(1129)
													int tmp24 = ((int)1 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1129)
													node1->height = tmp24;
													HX_STACK_LINE(1129)
													int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1129)
													{
														HX_STACK_LINE(1129)
														int x = node1->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1129)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1129)
														bool tmp26 = (x > y);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1129)
														if ((tmp26)){
															HX_STACK_LINE(1129)
															tmp25 = x;
														}
														else{
															HX_STACK_LINE(1129)
															tmp25 = y;
														}
													}
													HX_STACK_LINE(1129)
													int tmp26 = ((int)1 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1129)
													b->height = tmp26;
												}
												else{
													HX_STACK_LINE(1129)
													b->child2 = g;
													HX_STACK_LINE(1129)
													node1->child1 = f;
													HX_STACK_LINE(1129)
													f->parent = node1;
													HX_STACK_LINE(1129)
													{
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1129)
														bool tmp23 = (a->minx < b1->minx);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1129)
														Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1129)
														if ((tmp23)){
															HX_STACK_LINE(1129)
															tmp24 = a->minx;
														}
														else{
															HX_STACK_LINE(1129)
															tmp24 = b1->minx;
														}
														HX_STACK_LINE(1129)
														_this->minx = tmp24;
														HX_STACK_LINE(1129)
														bool tmp25 = (a->miny < b1->miny);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1129)
														Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1129)
														if ((tmp25)){
															HX_STACK_LINE(1129)
															tmp26 = a->miny;
														}
														else{
															HX_STACK_LINE(1129)
															tmp26 = b1->miny;
														}
														HX_STACK_LINE(1129)
														_this->miny = tmp26;
														HX_STACK_LINE(1129)
														bool tmp27 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1129)
														Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1129)
														if ((tmp27)){
															HX_STACK_LINE(1129)
															tmp28 = a->maxx;
														}
														else{
															HX_STACK_LINE(1129)
															tmp28 = b1->maxx;
														}
														HX_STACK_LINE(1129)
														_this->maxx = tmp28;
														HX_STACK_LINE(1129)
														bool tmp29 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1129)
														Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1129)
														if ((tmp29)){
															HX_STACK_LINE(1129)
															tmp30 = a->maxy;
														}
														else{
															HX_STACK_LINE(1129)
															tmp30 = b1->maxy;
														}
														HX_STACK_LINE(1129)
														_this->maxy = tmp30;
													}
													HX_STACK_LINE(1129)
													{
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1129)
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1129)
														bool tmp23 = (a->minx < b1->minx);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1129)
														Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1129)
														if ((tmp23)){
															HX_STACK_LINE(1129)
															tmp24 = a->minx;
														}
														else{
															HX_STACK_LINE(1129)
															tmp24 = b1->minx;
														}
														HX_STACK_LINE(1129)
														_this->minx = tmp24;
														HX_STACK_LINE(1129)
														bool tmp25 = (a->miny < b1->miny);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1129)
														Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1129)
														if ((tmp25)){
															HX_STACK_LINE(1129)
															tmp26 = a->miny;
														}
														else{
															HX_STACK_LINE(1129)
															tmp26 = b1->miny;
														}
														HX_STACK_LINE(1129)
														_this->miny = tmp26;
														HX_STACK_LINE(1129)
														bool tmp27 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1129)
														Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1129)
														if ((tmp27)){
															HX_STACK_LINE(1129)
															tmp28 = a->maxx;
														}
														else{
															HX_STACK_LINE(1129)
															tmp28 = b1->maxx;
														}
														HX_STACK_LINE(1129)
														_this->maxx = tmp28;
														HX_STACK_LINE(1129)
														bool tmp29 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1129)
														Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1129)
														if ((tmp29)){
															HX_STACK_LINE(1129)
															tmp30 = a->maxy;
														}
														else{
															HX_STACK_LINE(1129)
															tmp30 = b1->maxy;
														}
														HX_STACK_LINE(1129)
														_this->maxy = tmp30;
													}
													HX_STACK_LINE(1129)
													int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1129)
													{
														HX_STACK_LINE(1129)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1129)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1129)
														bool tmp24 = (x > y);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1129)
														if ((tmp24)){
															HX_STACK_LINE(1129)
															tmp23 = x;
														}
														else{
															HX_STACK_LINE(1129)
															tmp23 = y;
														}
													}
													HX_STACK_LINE(1129)
													int tmp24 = ((int)1 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1129)
													node1->height = tmp24;
													HX_STACK_LINE(1129)
													int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1129)
													{
														HX_STACK_LINE(1129)
														int x = node1->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(1129)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(1129)
														bool tmp26 = (x > y);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1129)
														if ((tmp26)){
															HX_STACK_LINE(1129)
															tmp25 = x;
														}
														else{
															HX_STACK_LINE(1129)
															tmp25 = y;
														}
													}
													HX_STACK_LINE(1129)
													int tmp26 = ((int)1 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1129)
													b->height = tmp26;
												}
												HX_STACK_LINE(1129)
												tmp17 = b;
											}
											else{
												HX_STACK_LINE(1129)
												tmp17 = node1;
											}
										}
									}
									HX_STACK_LINE(1129)
									node1 = tmp17;
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
									HX_STACK_LINE(1129)
									{
										HX_STACK_LINE(1129)
										::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1129)
										::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1129)
										::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1129)
										bool tmp18 = (a->minx < b->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1129)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1129)
										if ((tmp18)){
											HX_STACK_LINE(1129)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(1129)
											tmp19 = b->minx;
										}
										HX_STACK_LINE(1129)
										_this->minx = tmp19;
										HX_STACK_LINE(1129)
										bool tmp20 = (a->miny < b->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1129)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1129)
										if ((tmp20)){
											HX_STACK_LINE(1129)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(1129)
											tmp21 = b->miny;
										}
										HX_STACK_LINE(1129)
										_this->miny = tmp21;
										HX_STACK_LINE(1129)
										bool tmp22 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1129)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1129)
										if ((tmp22)){
											HX_STACK_LINE(1129)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(1129)
											tmp23 = b->maxx;
										}
										HX_STACK_LINE(1129)
										_this->maxx = tmp23;
										HX_STACK_LINE(1129)
										bool tmp24 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1129)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1129)
										if ((tmp24)){
											HX_STACK_LINE(1129)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(1129)
											tmp25 = b->maxy;
										}
										HX_STACK_LINE(1129)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(1129)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1129)
									{
										HX_STACK_LINE(1129)
										int x = child1->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1129)
										int y = child2->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(1129)
										bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1129)
										if ((tmp19)){
											HX_STACK_LINE(1129)
											tmp18 = x;
										}
										else{
											HX_STACK_LINE(1129)
											tmp18 = y;
										}
									}
									HX_STACK_LINE(1129)
									int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1129)
									node1->height = tmp19;
									HX_STACK_LINE(1129)
									node1 = node1->parent;
								}
							}
							else{
								HX_STACK_LINE(1129)
								tree->root = sibling;
								HX_STACK_LINE(1129)
								sibling->parent = null();
								HX_STACK_LINE(1129)
								{
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1129)
									{
										HX_STACK_LINE(1129)
										o->height = (int)-1;
										HX_STACK_LINE(1129)
										{
											HX_STACK_LINE(1129)
											::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1129)
											{
												HX_STACK_LINE(1129)
												bool tmp11 = (o1->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(1129)
												if ((tmp11)){
													HX_STACK_LINE(1129)
													o1->outer->zpp_inner = null();
													HX_STACK_LINE(1129)
													o1->outer = null();
												}
												HX_STACK_LINE(1129)
												::nape::geom::Vec2 tmp12 = o1->wrap_max = null();		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(1129)
												o1->wrap_min = tmp12;
												HX_STACK_LINE(1129)
												o1->_invalidate = null();
												HX_STACK_LINE(1129)
												o1->_validate = null();
											}
											HX_STACK_LINE(1129)
											::zpp_nape::geom::ZPP_AABB tmp11 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(1129)
											o1->next = tmp11;
											HX_STACK_LINE(1129)
											::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
										}
										HX_STACK_LINE(1129)
										::zpp_nape::space::ZPP_AABBNode tmp11 = o->parent = null();		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1129)
										::zpp_nape::space::ZPP_AABBNode tmp12 = o->child2 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1129)
										o->child1 = tmp12;
										HX_STACK_LINE(1129)
										o->next = null();
										HX_STACK_LINE(1129)
										o->snext = null();
										HX_STACK_LINE(1129)
										o->mnext = null();
									}
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode tmp11 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1129)
									o->next = tmp11;
									HX_STACK_LINE(1129)
									::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1131)
					node->first_sync = false;
				}
				HX_STACK_LINE(1132)
				::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
				HX_STACK_LINE(1133)
				bool tmp5 = space->continuous;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1133)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1133)
				if ((tmp6)){
					HX_STACK_LINE(1133)
					bool tmp7 = shape->zip_aabb;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1133)
					if ((tmp7)){
						HX_STACK_LINE(1133)
						bool tmp8 = (shape->body != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1133)
						if ((tmp8)){
							HX_STACK_LINE(1133)
							shape->zip_aabb = false;
							HX_STACK_LINE(1133)
							int tmp9 = shape->type;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1133)
							int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1133)
							bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1133)
							if ((tmp11)){
								HX_STACK_LINE(1133)
								::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									bool tmp12 = _this->zip_worldCOM;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1133)
									if ((tmp12)){
										HX_STACK_LINE(1133)
										bool tmp13 = (_this->body != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1133)
										if ((tmp13)){
											HX_STACK_LINE(1133)
											_this->zip_worldCOM = false;
											HX_STACK_LINE(1133)
											{
												HX_STACK_LINE(1133)
												bool tmp14 = _this->zip_localCOM;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1133)
												if ((tmp14)){
													HX_STACK_LINE(1133)
													_this->zip_localCOM = false;
													HX_STACK_LINE(1133)
													int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(1133)
													int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1133)
													bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1133)
													if ((tmp17)){
														HX_STACK_LINE(1133)
														::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1133)
														::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1133)
														bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1133)
														if ((tmp19)){
															HX_STACK_LINE(1133)
															HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
														}
														HX_STACK_LINE(1133)
														::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1133)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = tmp20->next;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1133)
														bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1133)
														if ((tmp22)){
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1133)
															_this1->localCOMx = tmp23->x;
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1133)
															_this1->localCOMy = tmp24->y;
															HX_STACK_LINE(1133)
															Dynamic();
														}
														else{
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 tmp24 = tmp23->next->next;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1133)
															bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1133)
															if ((tmp25)){
																HX_STACK_LINE(1133)
																{
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(1133)
																	_this1->localCOMx = tmp26->x;
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 tmp27 = _this1->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(1133)
																	_this1->localCOMy = tmp27->y;
																	HX_STACK_LINE(1133)
																	{
																	}
																}
																HX_STACK_LINE(1133)
																{
																	HX_STACK_LINE(1133)
																	Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(1133)
																	Float tmp27 = tmp26->next->x;		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(1133)
																	Float tmp28 = t;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(1133)
																	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1133)
																	hx::AddEq(_this1->localCOMx,tmp29);
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 tmp30 = _this1->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1133)
																	Float tmp31 = tmp30->next->y;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1133)
																	Float tmp32 = t;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1133)
																	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(1133)
																	hx::AddEq(_this1->localCOMy,tmp33);
																}
																HX_STACK_LINE(1133)
																{
																	HX_STACK_LINE(1133)
																	Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1133)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1133)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(1133)
																{
																	HX_STACK_LINE(1133)
																	_this1->localCOMx = (int)0;
																	HX_STACK_LINE(1133)
																	_this1->localCOMy = (int)0;
																	HX_STACK_LINE(1133)
																	{
																	}
																}
																HX_STACK_LINE(1133)
																Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(1133)
																{
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp26;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(1133)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(1133)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1133)
																	while((true)){
																		HX_STACK_LINE(1133)
																		bool tmp27 = (cx_ite != null());		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(1133)
																		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(1133)
																		if ((tmp28)){
																			HX_STACK_LINE(1133)
																			break;
																		}
																		HX_STACK_LINE(1133)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(1133)
																		{
																			HX_STACK_LINE(1133)
																			Float tmp29 = v->x;		HX_STACK_VAR(tmp29,"tmp29");
																			HX_STACK_LINE(1133)
																			Float tmp30 = (w->y - u->y);		HX_STACK_VAR(tmp30,"tmp30");
																			HX_STACK_LINE(1133)
																			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																			HX_STACK_LINE(1133)
																			hx::AddEq(area,tmp31);
																			HX_STACK_LINE(1133)
																			Float tmp32 = (w->y * v->x);		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(1133)
																			Float tmp33 = (w->x * v->y);		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(1133)
																			Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(1133)
																			Float cf = tmp34;		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(1133)
																			Float tmp35 = (v->x + w->x);		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(1133)
																			Float tmp36 = cf;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(1133)
																			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(1133)
																			hx::AddEq(_this1->localCOMx,tmp37);
																			HX_STACK_LINE(1133)
																			Float tmp38 = (v->y + w->y);		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(1133)
																			Float tmp39 = cf;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(1133)
																			Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(1133)
																			hx::AddEq(_this1->localCOMy,tmp40);
																		}
																		HX_STACK_LINE(1133)
																		u = v;
																		HX_STACK_LINE(1133)
																		v = w;
																		HX_STACK_LINE(1133)
																		cx_ite = cx_ite->next;
																	}
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 tmp27 = _this1->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(1133)
																	cx_ite = tmp27;
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1133)
																	{
																		HX_STACK_LINE(1133)
																		Float tmp28 = v->x;		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(1133)
																		Float tmp29 = (w->y - u->y);		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(1133)
																		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(1133)
																		hx::AddEq(area,tmp30);
																		HX_STACK_LINE(1133)
																		Float tmp31 = (w->y * v->x);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(1133)
																		Float tmp32 = (w->x * v->y);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(1133)
																		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1133)
																		Float cf = tmp33;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1133)
																		Float tmp34 = (v->x + w->x);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(1133)
																		Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1133)
																		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1133)
																		hx::AddEq(_this1->localCOMx,tmp36);
																		HX_STACK_LINE(1133)
																		Float tmp37 = (v->y + w->y);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1133)
																		Float tmp38 = cf;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1133)
																		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1133)
																		hx::AddEq(_this1->localCOMy,tmp39);
																	}
																	HX_STACK_LINE(1133)
																	u = v;
																	HX_STACK_LINE(1133)
																	v = w;
																	HX_STACK_LINE(1133)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1133)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(1133)
																	{
																		HX_STACK_LINE(1133)
																		Float tmp28 = v->x;		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(1133)
																		Float tmp29 = (w1->y - u->y);		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(1133)
																		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(1133)
																		hx::AddEq(area,tmp30);
																		HX_STACK_LINE(1133)
																		Float tmp31 = (w1->y * v->x);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(1133)
																		Float tmp32 = (w1->x * v->y);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(1133)
																		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1133)
																		Float cf = tmp33;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1133)
																		Float tmp34 = (v->x + w1->x);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(1133)
																		Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1133)
																		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1133)
																		hx::AddEq(_this1->localCOMx,tmp36);
																		HX_STACK_LINE(1133)
																		Float tmp37 = (v->y + w1->y);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1133)
																		Float tmp38 = cf;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1133)
																		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1133)
																		hx::AddEq(_this1->localCOMy,tmp39);
																	}
																}
																HX_STACK_LINE(1133)
																Float tmp26 = ((int)3 * area);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(1133)
																Float tmp27 = (Float((int)1) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(1133)
																area = tmp27;
																HX_STACK_LINE(1133)
																{
																	HX_STACK_LINE(1133)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1133)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1133)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
														}
													}
													HX_STACK_LINE(1133)
													bool tmp18 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1133)
													if ((tmp18)){
														HX_STACK_LINE(1133)
														::zpp_nape::geom::ZPP_Vec2 tmp19 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1133)
														tmp19->x = _this->localCOMx;
														HX_STACK_LINE(1133)
														::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1133)
														tmp20->y = _this->localCOMy;
														HX_STACK_LINE(1133)
														{
														}
													}
												}
											}
											HX_STACK_LINE(1133)
											{
												HX_STACK_LINE(1133)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1133)
												bool tmp14 = _this1->zip_axis;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1133)
												if ((tmp14)){
													HX_STACK_LINE(1133)
													_this1->zip_axis = false;
													HX_STACK_LINE(1133)
													{
														HX_STACK_LINE(1133)
														Float tmp15 = _this1->rot;		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(1133)
														Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(1133)
														_this1->axisx = tmp16;
														HX_STACK_LINE(1133)
														Float tmp17 = _this1->rot;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1133)
														Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1133)
														_this1->axisy = tmp18;
														HX_STACK_LINE(1133)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1133)
											{
												HX_STACK_LINE(1133)
												Float tmp14 = _this->body->posx;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1133)
												Float tmp15 = _this->body->axisy;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1133)
												Float tmp16 = _this->localCOMx;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1133)
												Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1133)
												Float tmp18 = _this->body->axisx;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1133)
												Float tmp19 = _this->localCOMy;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1133)
												Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1133)
												Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1133)
												Float tmp22 = (tmp14 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1133)
												_this->worldCOMx = tmp22;
												HX_STACK_LINE(1133)
												Float tmp23 = _this->body->posy;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1133)
												Float tmp24 = _this->localCOMx;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1133)
												Float tmp25 = _this->body->axisx;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1133)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1133)
												Float tmp27 = _this->localCOMy;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1133)
												Float tmp28 = _this->body->axisy;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1133)
												Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1133)
												Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1133)
												Float tmp31 = (tmp23 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1133)
												_this->worldCOMy = tmp31;
											}
										}
									}
								}
								HX_STACK_LINE(1133)
								Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
								HX_STACK_LINE(1133)
								Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									Float tmp12 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1133)
									_this->aabb->minx = tmp12;
									HX_STACK_LINE(1133)
									Float tmp13 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1133)
									_this->aabb->miny = tmp13;
								}
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									Float tmp12 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1133)
									_this->aabb->maxx = tmp12;
									HX_STACK_LINE(1133)
									Float tmp13 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1133)
									_this->aabb->maxy = tmp13;
								}
							}
							else{
								HX_STACK_LINE(1133)
								::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									bool tmp12 = _this->zip_gverts;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1133)
									if ((tmp12)){
										HX_STACK_LINE(1133)
										bool tmp13 = (_this->body != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1133)
										if ((tmp13)){
											HX_STACK_LINE(1133)
											_this->zip_gverts = false;
											HX_STACK_LINE(1133)
											_this->validate_lverts();
											HX_STACK_LINE(1133)
											{
												HX_STACK_LINE(1133)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1133)
												bool tmp14 = _this1->zip_axis;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1133)
												if ((tmp14)){
													HX_STACK_LINE(1133)
													_this1->zip_axis = false;
													HX_STACK_LINE(1133)
													{
														HX_STACK_LINE(1133)
														Float tmp15 = _this1->rot;		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(1133)
														Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(1133)
														_this1->axisx = tmp16;
														HX_STACK_LINE(1133)
														Float tmp17 = _this1->rot;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1133)
														Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1133)
														_this1->axisy = tmp18;
														HX_STACK_LINE(1133)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1133)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1133)
											::zpp_nape::geom::ZPP_Vec2 li = tmp14;		HX_STACK_VAR(li,"li");
											HX_STACK_LINE(1133)
											{
												HX_STACK_LINE(1133)
												::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->gverts->next;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1133)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(1133)
												while((true)){
													HX_STACK_LINE(1133)
													bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1133)
													bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1133)
													if ((tmp17)){
														HX_STACK_LINE(1133)
														break;
													}
													HX_STACK_LINE(1133)
													::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(1133)
													{
														HX_STACK_LINE(1133)
														::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
														HX_STACK_LINE(1133)
														li = li->next;
														HX_STACK_LINE(1133)
														{
															HX_STACK_LINE(1133)
															Float tmp18 = _this->body->posx;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1133)
															Float tmp19 = _this->body->axisy;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1133)
															Float tmp20 = l->x;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(1133)
															Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1133)
															Float tmp22 = _this->body->axisx;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1133)
															Float tmp23 = l->y;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1133)
															Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1133)
															Float tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1133)
															Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(1133)
															g->x = tmp26;
															HX_STACK_LINE(1133)
															Float tmp27 = _this->body->posy;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1133)
															Float tmp28 = l->x;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1133)
															Float tmp29 = _this->body->axisx;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1133)
															Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1133)
															Float tmp31 = l->y;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1133)
															Float tmp32 = _this->body->axisy;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1133)
															Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1133)
															Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1133)
															Float tmp35 = (tmp27 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(1133)
															g->y = tmp35;
														}
													}
													HX_STACK_LINE(1133)
													cx_ite = cx_ite->next;
												}
											}
										}
									}
								}
								HX_STACK_LINE(1133)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1133)
								bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1133)
								if ((tmp13)){
									HX_STACK_LINE(1133)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
								}
								HX_STACK_LINE(1133)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->gverts->next;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1133)
								::zpp_nape::geom::ZPP_Vec2 p0 = tmp14;		HX_STACK_VAR(p0,"p0");
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									_this->aabb->minx = p0->x;
									HX_STACK_LINE(1133)
									_this->aabb->miny = p0->y;
									HX_STACK_LINE(1133)
									{
									}
								}
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									_this->aabb->maxx = p0->x;
									HX_STACK_LINE(1133)
									_this->aabb->maxy = p0->y;
									HX_STACK_LINE(1133)
									{
									}
								}
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->gverts->next;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1133)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp15->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1133)
									while((true)){
										HX_STACK_LINE(1133)
										bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1133)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1133)
										if ((tmp17)){
											HX_STACK_LINE(1133)
											break;
										}
										HX_STACK_LINE(1133)
										::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1133)
										{
											HX_STACK_LINE(1133)
											Float tmp18 = p->x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1133)
											Float tmp19 = _this->aabb->minx;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1133)
											bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1133)
											if ((tmp20)){
												HX_STACK_LINE(1133)
												_this->aabb->minx = p->x;
											}
											HX_STACK_LINE(1133)
											Float tmp21 = p->x;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1133)
											Float tmp22 = _this->aabb->maxx;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1133)
											bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1133)
											if ((tmp23)){
												HX_STACK_LINE(1133)
												_this->aabb->maxx = p->x;
											}
											HX_STACK_LINE(1133)
											Float tmp24 = p->y;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1133)
											Float tmp25 = _this->aabb->miny;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1133)
											bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1133)
											if ((tmp26)){
												HX_STACK_LINE(1133)
												_this->aabb->miny = p->y;
											}
											HX_STACK_LINE(1133)
											Float tmp27 = p->y;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1133)
											Float tmp28 = _this->aabb->maxy;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1133)
											bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1133)
											if ((tmp29)){
												HX_STACK_LINE(1133)
												_this->aabb->maxy = p->y;
											}
										}
										HX_STACK_LINE(1133)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(1134)
				{
					HX_STACK_LINE(1134)
					::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1134)
					Float tmp7 = (a->minx - ((Float)3.0));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1134)
					aabb->minx = tmp7;
					HX_STACK_LINE(1134)
					Float tmp8 = (a->miny - ((Float)3.0));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1134)
					aabb->miny = tmp8;
					HX_STACK_LINE(1134)
					Float tmp9 = (a->maxx + ((Float)3.0));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1134)
					aabb->maxx = tmp9;
					HX_STACK_LINE(1134)
					Float tmp10 = (a->maxy + ((Float)3.0));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1134)
					aabb->maxy = tmp10;
				}
				HX_STACK_LINE(1135)
				int tmp7 = shape->body->type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1135)
				int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1135)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1135)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1135)
				if ((tmp9)){
					HX_STACK_LINE(1135)
					tmp10 = false;
				}
				else{
					HX_STACK_LINE(1135)
					::zpp_nape::space::ZPP_Component tmp11 = shape->body->component;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1135)
					bool tmp12 = tmp11->sleeping;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1135)
					tmp10 = !(tmp12);
				}
				HX_STACK_LINE(1135)
				bool tmp11 = node->dyn = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1135)
				::zpp_nape::space::ZPP_AABBTree tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1135)
				if ((tmp11)){
					HX_STACK_LINE(1135)
					tmp12 = this->dtree;
				}
				else{
					HX_STACK_LINE(1135)
					tmp12 = this->stree;
				}
				HX_STACK_LINE(1135)
				::zpp_nape::space::ZPP_AABBTree tree = tmp12;		HX_STACK_VAR(tree,"tree");
				HX_STACK_LINE(1136)
				{
					HX_STACK_LINE(1136)
					bool tmp13 = (tree->root == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1136)
					if ((tmp13)){
						HX_STACK_LINE(1136)
						tree->root = node;
						HX_STACK_LINE(1136)
						tree->root->parent = null();
					}
					else{
						HX_STACK_LINE(1136)
						::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
						HX_STACK_LINE(1136)
						::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(1136)
						while((true)){
							HX_STACK_LINE(1136)
							bool tmp14 = (node1->child1 == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1136)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1136)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1136)
							if ((tmp16)){
								HX_STACK_LINE(1136)
								break;
							}
							HX_STACK_LINE(1136)
							::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(1136)
							::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
							HX_STACK_LINE(1136)
							Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1136)
								Float tmp18 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1136)
								Float tmp19 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1136)
								Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1136)
								tmp17 = (tmp20 * (int)2);
							}
							HX_STACK_LINE(1136)
							Float area = tmp17;		HX_STACK_VAR(area,"area");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB tmp18 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB _this = tmp18;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1136)
								bool tmp19 = (a->minx < leafaabb->minx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1136)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1136)
								if ((tmp19)){
									HX_STACK_LINE(1136)
									tmp20 = a->minx;
								}
								else{
									HX_STACK_LINE(1136)
									tmp20 = leafaabb->minx;
								}
								HX_STACK_LINE(1136)
								_this->minx = tmp20;
								HX_STACK_LINE(1136)
								bool tmp21 = (a->miny < leafaabb->miny);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1136)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1136)
								if ((tmp21)){
									HX_STACK_LINE(1136)
									tmp22 = a->miny;
								}
								else{
									HX_STACK_LINE(1136)
									tmp22 = leafaabb->miny;
								}
								HX_STACK_LINE(1136)
								_this->miny = tmp22;
								HX_STACK_LINE(1136)
								bool tmp23 = (a->maxx > leafaabb->maxx);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1136)
								Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1136)
								if ((tmp23)){
									HX_STACK_LINE(1136)
									tmp24 = a->maxx;
								}
								else{
									HX_STACK_LINE(1136)
									tmp24 = leafaabb->maxx;
								}
								HX_STACK_LINE(1136)
								_this->maxx = tmp24;
								HX_STACK_LINE(1136)
								bool tmp25 = (a->maxy > leafaabb->maxy);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1136)
								Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1136)
								if ((tmp25)){
									HX_STACK_LINE(1136)
									tmp26 = a->maxy;
								}
								else{
									HX_STACK_LINE(1136)
									tmp26 = leafaabb->maxy;
								}
								HX_STACK_LINE(1136)
								_this->maxy = tmp26;
							}
							HX_STACK_LINE(1136)
							Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB tmp19 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1136)
								Float tmp20 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1136)
								Float tmp21 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1136)
								Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1136)
								tmp18 = (tmp22 * (int)2);
							}
							HX_STACK_LINE(1136)
							Float carea = tmp18;		HX_STACK_VAR(carea,"carea");
							HX_STACK_LINE(1136)
							Float tmp19 = ((int)2 * carea);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1136)
							Float cost = tmp19;		HX_STACK_VAR(cost,"cost");
							HX_STACK_LINE(1136)
							Float tmp20 = (carea - area);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1136)
							Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1136)
							Float icost = tmp21;		HX_STACK_VAR(icost,"icost");
							HX_STACK_LINE(1136)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								{
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB tmp23 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB _this = tmp23;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1136)
									bool tmp24 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1136)
									Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1136)
									if ((tmp24)){
										HX_STACK_LINE(1136)
										tmp25 = leafaabb->minx;
									}
									else{
										HX_STACK_LINE(1136)
										tmp25 = b->minx;
									}
									HX_STACK_LINE(1136)
									_this->minx = tmp25;
									HX_STACK_LINE(1136)
									bool tmp26 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1136)
									Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1136)
									if ((tmp26)){
										HX_STACK_LINE(1136)
										tmp27 = leafaabb->miny;
									}
									else{
										HX_STACK_LINE(1136)
										tmp27 = b->miny;
									}
									HX_STACK_LINE(1136)
									_this->miny = tmp27;
									HX_STACK_LINE(1136)
									bool tmp28 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1136)
									Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1136)
									if ((tmp28)){
										HX_STACK_LINE(1136)
										tmp29 = leafaabb->maxx;
									}
									else{
										HX_STACK_LINE(1136)
										tmp29 = b->maxx;
									}
									HX_STACK_LINE(1136)
									_this->maxx = tmp29;
									HX_STACK_LINE(1136)
									bool tmp30 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1136)
									Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1136)
									if ((tmp30)){
										HX_STACK_LINE(1136)
										tmp31 = leafaabb->maxy;
									}
									else{
										HX_STACK_LINE(1136)
										tmp31 = b->maxy;
									}
									HX_STACK_LINE(1136)
									_this->maxy = tmp31;
								}
								HX_STACK_LINE(1136)
								bool tmp23 = (child1->child1 == null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1136)
								if ((tmp23)){
									HX_STACK_LINE(1136)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1136)
									{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB tmp25 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB _this = tmp25;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1136)
										Float tmp26 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										Float tmp27 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1136)
										tmp24 = (tmp28 * (int)2);
									}
									HX_STACK_LINE(1136)
									Float tmp25 = icost;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1136)
									tmp22 = (tmp24 + tmp25);
								}
								else{
									HX_STACK_LINE(1136)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1136)
									{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1136)
										Float tmp25 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1136)
										Float tmp26 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										tmp24 = (tmp27 * (int)2);
									}
									HX_STACK_LINE(1136)
									Float oarea = tmp24;		HX_STACK_VAR(oarea,"oarea");
									HX_STACK_LINE(1136)
									Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1136)
									{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB tmp26 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB _this = tmp26;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1136)
										Float tmp27 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										Float tmp28 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1136)
										Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1136)
										tmp25 = (tmp29 * (int)2);
									}
									HX_STACK_LINE(1136)
									Float narea = tmp25;		HX_STACK_VAR(narea,"narea");
									HX_STACK_LINE(1136)
									Float tmp26 = (narea - oarea);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1136)
									Float tmp27 = icost;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1136)
									tmp22 = (tmp26 + tmp27);
								}
							}
							HX_STACK_LINE(1136)
							Float cost1 = tmp22;		HX_STACK_VAR(cost1,"cost1");
							HX_STACK_LINE(1136)
							Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								{
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB tmp24 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB _this = tmp24;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1136)
									bool tmp25 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1136)
									Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1136)
									if ((tmp25)){
										HX_STACK_LINE(1136)
										tmp26 = leafaabb->minx;
									}
									else{
										HX_STACK_LINE(1136)
										tmp26 = b->minx;
									}
									HX_STACK_LINE(1136)
									_this->minx = tmp26;
									HX_STACK_LINE(1136)
									bool tmp27 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1136)
									Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1136)
									if ((tmp27)){
										HX_STACK_LINE(1136)
										tmp28 = leafaabb->miny;
									}
									else{
										HX_STACK_LINE(1136)
										tmp28 = b->miny;
									}
									HX_STACK_LINE(1136)
									_this->miny = tmp28;
									HX_STACK_LINE(1136)
									bool tmp29 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1136)
									Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1136)
									if ((tmp29)){
										HX_STACK_LINE(1136)
										tmp30 = leafaabb->maxx;
									}
									else{
										HX_STACK_LINE(1136)
										tmp30 = b->maxx;
									}
									HX_STACK_LINE(1136)
									_this->maxx = tmp30;
									HX_STACK_LINE(1136)
									bool tmp31 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1136)
									Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1136)
									if ((tmp31)){
										HX_STACK_LINE(1136)
										tmp32 = leafaabb->maxy;
									}
									else{
										HX_STACK_LINE(1136)
										tmp32 = b->maxy;
									}
									HX_STACK_LINE(1136)
									_this->maxy = tmp32;
								}
								HX_STACK_LINE(1136)
								bool tmp24 = (child2->child1 == null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1136)
								if ((tmp24)){
									HX_STACK_LINE(1136)
									Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1136)
									{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB tmp26 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB _this = tmp26;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1136)
										Float tmp27 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										Float tmp28 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1136)
										Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1136)
										tmp25 = (tmp29 * (int)2);
									}
									HX_STACK_LINE(1136)
									Float tmp26 = icost;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1136)
									tmp23 = (tmp25 + tmp26);
								}
								else{
									HX_STACK_LINE(1136)
									Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1136)
									{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1136)
										Float tmp26 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										Float tmp27 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1136)
										tmp25 = (tmp28 * (int)2);
									}
									HX_STACK_LINE(1136)
									Float oarea = tmp25;		HX_STACK_VAR(oarea,"oarea");
									HX_STACK_LINE(1136)
									Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1136)
									{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB tmp27 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB _this = tmp27;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1136)
										Float tmp28 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1136)
										Float tmp29 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1136)
										Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1136)
										tmp26 = (tmp30 * (int)2);
									}
									HX_STACK_LINE(1136)
									Float narea = tmp26;		HX_STACK_VAR(narea,"narea");
									HX_STACK_LINE(1136)
									Float tmp27 = (narea - oarea);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1136)
									Float tmp28 = icost;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1136)
									tmp23 = (tmp27 + tmp28);
								}
							}
							HX_STACK_LINE(1136)
							Float cost2 = tmp23;		HX_STACK_VAR(cost2,"cost2");
							HX_STACK_LINE(1136)
							bool tmp24 = (cost < cost1);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1136)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1136)
							if ((tmp24)){
								HX_STACK_LINE(1136)
								tmp25 = (cost < cost2);
							}
							else{
								HX_STACK_LINE(1136)
								tmp25 = false;
							}
							HX_STACK_LINE(1136)
							if ((tmp25)){
								HX_STACK_LINE(1136)
								break;
							}
							else{
								HX_STACK_LINE(1136)
								bool tmp26 = (cost1 < cost2);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1136)
								::zpp_nape::space::ZPP_AABBNode tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1136)
								if ((tmp26)){
									HX_STACK_LINE(1136)
									tmp27 = child1;
								}
								else{
									HX_STACK_LINE(1136)
									tmp27 = child2;
								}
								HX_STACK_LINE(1136)
								node1 = tmp27;
							}
						}
						HX_STACK_LINE(1136)
						::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
						HX_STACK_LINE(1136)
						::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
						HX_STACK_LINE(1136)
						::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							::zpp_nape::space::ZPP_AABBNode tmp14 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1136)
							bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1136)
							if ((tmp15)){
								HX_STACK_LINE(1136)
								::zpp_nape::space::ZPP_AABBNode tmp16 = ::zpp_nape::space::ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1136)
								nparent = tmp16;
							}
							else{
								HX_STACK_LINE(1136)
								::zpp_nape::space::ZPP_AABBNode tmp16 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1136)
								nparent = tmp16;
								HX_STACK_LINE(1136)
								::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
								HX_STACK_LINE(1136)
								nparent->next = null();
							}
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								{
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB tmp16 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1136)
									bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1136)
									if ((tmp17)){
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB tmp18 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1136)
										nparent->aabb = tmp18;
									}
									else{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB tmp18 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1136)
										nparent->aabb = tmp18;
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB tmp19 = nparent->aabb->next;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = tmp19;
										HX_STACK_LINE(1136)
										nparent->aabb->next = null();
									}
									HX_STACK_LINE(1136)
									Dynamic();
								}
								HX_STACK_LINE(1136)
								nparent->moved = false;
								HX_STACK_LINE(1136)
								nparent->synced = false;
								HX_STACK_LINE(1136)
								nparent->first_sync = false;
							}
						}
						HX_STACK_LINE(1136)
						nparent->parent = oparent;
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1136)
							::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1136)
							bool tmp14 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1136)
							Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1136)
							if ((tmp14)){
								HX_STACK_LINE(1136)
								tmp15 = leafaabb->minx;
							}
							else{
								HX_STACK_LINE(1136)
								tmp15 = b->minx;
							}
							HX_STACK_LINE(1136)
							_this->minx = tmp15;
							HX_STACK_LINE(1136)
							bool tmp16 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1136)
							Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1136)
							if ((tmp16)){
								HX_STACK_LINE(1136)
								tmp17 = leafaabb->miny;
							}
							else{
								HX_STACK_LINE(1136)
								tmp17 = b->miny;
							}
							HX_STACK_LINE(1136)
							_this->miny = tmp17;
							HX_STACK_LINE(1136)
							bool tmp18 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1136)
							Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1136)
							if ((tmp18)){
								HX_STACK_LINE(1136)
								tmp19 = leafaabb->maxx;
							}
							else{
								HX_STACK_LINE(1136)
								tmp19 = b->maxx;
							}
							HX_STACK_LINE(1136)
							_this->maxx = tmp19;
							HX_STACK_LINE(1136)
							bool tmp20 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1136)
							Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1136)
							if ((tmp20)){
								HX_STACK_LINE(1136)
								tmp21 = leafaabb->maxy;
							}
							else{
								HX_STACK_LINE(1136)
								tmp21 = b->maxy;
							}
							HX_STACK_LINE(1136)
							_this->maxy = tmp21;
						}
						HX_STACK_LINE(1136)
						int tmp14 = (sibling->height + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1136)
						nparent->height = tmp14;
						HX_STACK_LINE(1136)
						bool tmp15 = (oparent != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1136)
						if ((tmp15)){
							HX_STACK_LINE(1136)
							bool tmp16 = (oparent->child1 == sibling);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1136)
							if ((tmp16)){
								HX_STACK_LINE(1136)
								oparent->child1 = nparent;
							}
							else{
								HX_STACK_LINE(1136)
								oparent->child2 = nparent;
							}
							HX_STACK_LINE(1136)
							nparent->child1 = sibling;
							HX_STACK_LINE(1136)
							nparent->child2 = node;
							HX_STACK_LINE(1136)
							sibling->parent = nparent;
							HX_STACK_LINE(1136)
							node->parent = nparent;
						}
						else{
							HX_STACK_LINE(1136)
							nparent->child1 = sibling;
							HX_STACK_LINE(1136)
							nparent->child2 = node;
							HX_STACK_LINE(1136)
							sibling->parent = nparent;
							HX_STACK_LINE(1136)
							node->parent = nparent;
							HX_STACK_LINE(1136)
							tree->root = nparent;
						}
						HX_STACK_LINE(1136)
						node1 = node->parent;
						HX_STACK_LINE(1136)
						while((true)){
							HX_STACK_LINE(1136)
							bool tmp16 = (node1 != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1136)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1136)
							if ((tmp17)){
								HX_STACK_LINE(1136)
								break;
							}
							HX_STACK_LINE(1136)
							bool tmp18 = (node1->child1 == null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1136)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1136)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1136)
							if ((tmp19)){
								HX_STACK_LINE(1136)
								tmp20 = (node1->height < (int)2);
							}
							else{
								HX_STACK_LINE(1136)
								tmp20 = true;
							}
							HX_STACK_LINE(1136)
							::zpp_nape::space::ZPP_AABBNode tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1136)
							if ((tmp20)){
								HX_STACK_LINE(1136)
								tmp21 = node1;
							}
							else{
								HX_STACK_LINE(1136)
								::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1136)
								::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(1136)
								int tmp22 = (c->height - b->height);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1136)
								int balance = tmp22;		HX_STACK_VAR(balance,"balance");
								HX_STACK_LINE(1136)
								bool tmp23 = (balance > (int)1);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1136)
								if ((tmp23)){
									HX_STACK_LINE(1136)
									::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(1136)
									::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1136)
									c->child1 = node1;
									HX_STACK_LINE(1136)
									c->parent = node1->parent;
									HX_STACK_LINE(1136)
									node1->parent = c;
									HX_STACK_LINE(1136)
									bool tmp24 = (c->parent != null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1136)
									if ((tmp24)){
										HX_STACK_LINE(1136)
										::zpp_nape::space::ZPP_AABBNode tmp25 = c->parent->child1;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1136)
										::zpp_nape::space::ZPP_AABBNode tmp26 = node1;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										if ((tmp27)){
											HX_STACK_LINE(1136)
											c->parent->child1 = c;
										}
										else{
											HX_STACK_LINE(1136)
											c->parent->child2 = c;
										}
									}
									else{
										HX_STACK_LINE(1136)
										tree->root = c;
									}
									HX_STACK_LINE(1136)
									bool tmp25 = (f->height > g->height);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1136)
									if ((tmp25)){
										HX_STACK_LINE(1136)
										c->child2 = f;
										HX_STACK_LINE(1136)
										node1->child2 = g;
										HX_STACK_LINE(1136)
										g->parent = node1;
										HX_STACK_LINE(1136)
										{
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
											HX_STACK_LINE(1136)
											bool tmp26 = (a->minx < b1->minx);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1136)
											Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											if ((tmp26)){
												HX_STACK_LINE(1136)
												tmp27 = a->minx;
											}
											else{
												HX_STACK_LINE(1136)
												tmp27 = b1->minx;
											}
											HX_STACK_LINE(1136)
											_this->minx = tmp27;
											HX_STACK_LINE(1136)
											bool tmp28 = (a->miny < b1->miny);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1136)
											Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1136)
											if ((tmp28)){
												HX_STACK_LINE(1136)
												tmp29 = a->miny;
											}
											else{
												HX_STACK_LINE(1136)
												tmp29 = b1->miny;
											}
											HX_STACK_LINE(1136)
											_this->miny = tmp29;
											HX_STACK_LINE(1136)
											bool tmp30 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1136)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1136)
											if ((tmp30)){
												HX_STACK_LINE(1136)
												tmp31 = a->maxx;
											}
											else{
												HX_STACK_LINE(1136)
												tmp31 = b1->maxx;
											}
											HX_STACK_LINE(1136)
											_this->maxx = tmp31;
											HX_STACK_LINE(1136)
											bool tmp32 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1136)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1136)
											if ((tmp32)){
												HX_STACK_LINE(1136)
												tmp33 = a->maxy;
											}
											else{
												HX_STACK_LINE(1136)
												tmp33 = b1->maxy;
											}
											HX_STACK_LINE(1136)
											_this->maxy = tmp33;
										}
										HX_STACK_LINE(1136)
										{
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
											HX_STACK_LINE(1136)
											bool tmp26 = (a->minx < b1->minx);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1136)
											Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											if ((tmp26)){
												HX_STACK_LINE(1136)
												tmp27 = a->minx;
											}
											else{
												HX_STACK_LINE(1136)
												tmp27 = b1->minx;
											}
											HX_STACK_LINE(1136)
											_this->minx = tmp27;
											HX_STACK_LINE(1136)
											bool tmp28 = (a->miny < b1->miny);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1136)
											Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1136)
											if ((tmp28)){
												HX_STACK_LINE(1136)
												tmp29 = a->miny;
											}
											else{
												HX_STACK_LINE(1136)
												tmp29 = b1->miny;
											}
											HX_STACK_LINE(1136)
											_this->miny = tmp29;
											HX_STACK_LINE(1136)
											bool tmp30 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1136)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1136)
											if ((tmp30)){
												HX_STACK_LINE(1136)
												tmp31 = a->maxx;
											}
											else{
												HX_STACK_LINE(1136)
												tmp31 = b1->maxx;
											}
											HX_STACK_LINE(1136)
											_this->maxx = tmp31;
											HX_STACK_LINE(1136)
											bool tmp32 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1136)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1136)
											if ((tmp32)){
												HX_STACK_LINE(1136)
												tmp33 = a->maxy;
											}
											else{
												HX_STACK_LINE(1136)
												tmp33 = b1->maxy;
											}
											HX_STACK_LINE(1136)
											_this->maxy = tmp33;
										}
										HX_STACK_LINE(1136)
										int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										{
											HX_STACK_LINE(1136)
											int x = b->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1136)
											int y = g->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1136)
											bool tmp27 = (x > y);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											if ((tmp27)){
												HX_STACK_LINE(1136)
												tmp26 = x;
											}
											else{
												HX_STACK_LINE(1136)
												tmp26 = y;
											}
										}
										HX_STACK_LINE(1136)
										int tmp27 = ((int)1 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										node1->height = tmp27;
										HX_STACK_LINE(1136)
										int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1136)
										{
											HX_STACK_LINE(1136)
											int x = node1->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1136)
											int y = f->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1136)
											bool tmp29 = (x > y);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1136)
											if ((tmp29)){
												HX_STACK_LINE(1136)
												tmp28 = x;
											}
											else{
												HX_STACK_LINE(1136)
												tmp28 = y;
											}
										}
										HX_STACK_LINE(1136)
										int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1136)
										c->height = tmp29;
									}
									else{
										HX_STACK_LINE(1136)
										c->child2 = g;
										HX_STACK_LINE(1136)
										node1->child2 = f;
										HX_STACK_LINE(1136)
										f->parent = node1;
										HX_STACK_LINE(1136)
										{
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
											HX_STACK_LINE(1136)
											bool tmp26 = (a->minx < b1->minx);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1136)
											Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											if ((tmp26)){
												HX_STACK_LINE(1136)
												tmp27 = a->minx;
											}
											else{
												HX_STACK_LINE(1136)
												tmp27 = b1->minx;
											}
											HX_STACK_LINE(1136)
											_this->minx = tmp27;
											HX_STACK_LINE(1136)
											bool tmp28 = (a->miny < b1->miny);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1136)
											Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1136)
											if ((tmp28)){
												HX_STACK_LINE(1136)
												tmp29 = a->miny;
											}
											else{
												HX_STACK_LINE(1136)
												tmp29 = b1->miny;
											}
											HX_STACK_LINE(1136)
											_this->miny = tmp29;
											HX_STACK_LINE(1136)
											bool tmp30 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1136)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1136)
											if ((tmp30)){
												HX_STACK_LINE(1136)
												tmp31 = a->maxx;
											}
											else{
												HX_STACK_LINE(1136)
												tmp31 = b1->maxx;
											}
											HX_STACK_LINE(1136)
											_this->maxx = tmp31;
											HX_STACK_LINE(1136)
											bool tmp32 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1136)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1136)
											if ((tmp32)){
												HX_STACK_LINE(1136)
												tmp33 = a->maxy;
											}
											else{
												HX_STACK_LINE(1136)
												tmp33 = b1->maxy;
											}
											HX_STACK_LINE(1136)
											_this->maxy = tmp33;
										}
										HX_STACK_LINE(1136)
										{
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1136)
											::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
											HX_STACK_LINE(1136)
											bool tmp26 = (a->minx < b1->minx);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1136)
											Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											if ((tmp26)){
												HX_STACK_LINE(1136)
												tmp27 = a->minx;
											}
											else{
												HX_STACK_LINE(1136)
												tmp27 = b1->minx;
											}
											HX_STACK_LINE(1136)
											_this->minx = tmp27;
											HX_STACK_LINE(1136)
											bool tmp28 = (a->miny < b1->miny);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1136)
											Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1136)
											if ((tmp28)){
												HX_STACK_LINE(1136)
												tmp29 = a->miny;
											}
											else{
												HX_STACK_LINE(1136)
												tmp29 = b1->miny;
											}
											HX_STACK_LINE(1136)
											_this->miny = tmp29;
											HX_STACK_LINE(1136)
											bool tmp30 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1136)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1136)
											if ((tmp30)){
												HX_STACK_LINE(1136)
												tmp31 = a->maxx;
											}
											else{
												HX_STACK_LINE(1136)
												tmp31 = b1->maxx;
											}
											HX_STACK_LINE(1136)
											_this->maxx = tmp31;
											HX_STACK_LINE(1136)
											bool tmp32 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1136)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1136)
											if ((tmp32)){
												HX_STACK_LINE(1136)
												tmp33 = a->maxy;
											}
											else{
												HX_STACK_LINE(1136)
												tmp33 = b1->maxy;
											}
											HX_STACK_LINE(1136)
											_this->maxy = tmp33;
										}
										HX_STACK_LINE(1136)
										int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										{
											HX_STACK_LINE(1136)
											int x = b->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1136)
											int y = f->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1136)
											bool tmp27 = (x > y);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											if ((tmp27)){
												HX_STACK_LINE(1136)
												tmp26 = x;
											}
											else{
												HX_STACK_LINE(1136)
												tmp26 = y;
											}
										}
										HX_STACK_LINE(1136)
										int tmp27 = ((int)1 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1136)
										node1->height = tmp27;
										HX_STACK_LINE(1136)
										int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1136)
										{
											HX_STACK_LINE(1136)
											int x = node1->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1136)
											int y = g->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1136)
											bool tmp29 = (x > y);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1136)
											if ((tmp29)){
												HX_STACK_LINE(1136)
												tmp28 = x;
											}
											else{
												HX_STACK_LINE(1136)
												tmp28 = y;
											}
										}
										HX_STACK_LINE(1136)
										int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1136)
										c->height = tmp29;
									}
									HX_STACK_LINE(1136)
									tmp21 = c;
								}
								else{
									HX_STACK_LINE(1136)
									bool tmp24 = (balance < (int)-1);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1136)
									if ((tmp24)){
										HX_STACK_LINE(1136)
										::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(1136)
										::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(1136)
										b->child1 = node1;
										HX_STACK_LINE(1136)
										b->parent = node1->parent;
										HX_STACK_LINE(1136)
										node1->parent = b;
										HX_STACK_LINE(1136)
										bool tmp25 = (b->parent != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1136)
										if ((tmp25)){
											HX_STACK_LINE(1136)
											::zpp_nape::space::ZPP_AABBNode tmp26 = b->parent->child1;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1136)
											::zpp_nape::space::ZPP_AABBNode tmp27 = node1;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1136)
											if ((tmp28)){
												HX_STACK_LINE(1136)
												b->parent->child1 = b;
											}
											else{
												HX_STACK_LINE(1136)
												b->parent->child2 = b;
											}
										}
										else{
											HX_STACK_LINE(1136)
											tree->root = b;
										}
										HX_STACK_LINE(1136)
										bool tmp26 = (f->height > g->height);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1136)
										if ((tmp26)){
											HX_STACK_LINE(1136)
											b->child2 = f;
											HX_STACK_LINE(1136)
											node1->child1 = g;
											HX_STACK_LINE(1136)
											g->parent = node1;
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1136)
												bool tmp27 = (a->minx < b1->minx);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1136)
												Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1136)
												if ((tmp27)){
													HX_STACK_LINE(1136)
													tmp28 = a->minx;
												}
												else{
													HX_STACK_LINE(1136)
													tmp28 = b1->minx;
												}
												HX_STACK_LINE(1136)
												_this->minx = tmp28;
												HX_STACK_LINE(1136)
												bool tmp29 = (a->miny < b1->miny);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1136)
												Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1136)
												if ((tmp29)){
													HX_STACK_LINE(1136)
													tmp30 = a->miny;
												}
												else{
													HX_STACK_LINE(1136)
													tmp30 = b1->miny;
												}
												HX_STACK_LINE(1136)
												_this->miny = tmp30;
												HX_STACK_LINE(1136)
												bool tmp31 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1136)
												Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1136)
												if ((tmp31)){
													HX_STACK_LINE(1136)
													tmp32 = a->maxx;
												}
												else{
													HX_STACK_LINE(1136)
													tmp32 = b1->maxx;
												}
												HX_STACK_LINE(1136)
												_this->maxx = tmp32;
												HX_STACK_LINE(1136)
												bool tmp33 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1136)
												Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1136)
												if ((tmp33)){
													HX_STACK_LINE(1136)
													tmp34 = a->maxy;
												}
												else{
													HX_STACK_LINE(1136)
													tmp34 = b1->maxy;
												}
												HX_STACK_LINE(1136)
												_this->maxy = tmp34;
											}
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1136)
												bool tmp27 = (a->minx < b1->minx);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1136)
												Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1136)
												if ((tmp27)){
													HX_STACK_LINE(1136)
													tmp28 = a->minx;
												}
												else{
													HX_STACK_LINE(1136)
													tmp28 = b1->minx;
												}
												HX_STACK_LINE(1136)
												_this->minx = tmp28;
												HX_STACK_LINE(1136)
												bool tmp29 = (a->miny < b1->miny);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1136)
												Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1136)
												if ((tmp29)){
													HX_STACK_LINE(1136)
													tmp30 = a->miny;
												}
												else{
													HX_STACK_LINE(1136)
													tmp30 = b1->miny;
												}
												HX_STACK_LINE(1136)
												_this->miny = tmp30;
												HX_STACK_LINE(1136)
												bool tmp31 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1136)
												Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1136)
												if ((tmp31)){
													HX_STACK_LINE(1136)
													tmp32 = a->maxx;
												}
												else{
													HX_STACK_LINE(1136)
													tmp32 = b1->maxx;
												}
												HX_STACK_LINE(1136)
												_this->maxx = tmp32;
												HX_STACK_LINE(1136)
												bool tmp33 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1136)
												Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1136)
												if ((tmp33)){
													HX_STACK_LINE(1136)
													tmp34 = a->maxy;
												}
												else{
													HX_STACK_LINE(1136)
													tmp34 = b1->maxy;
												}
												HX_STACK_LINE(1136)
												_this->maxy = tmp34;
											}
											HX_STACK_LINE(1136)
											int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1136)
												int x = c->height;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(1136)
												int y = g->height;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(1136)
												bool tmp28 = (x > y);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1136)
												if ((tmp28)){
													HX_STACK_LINE(1136)
													tmp27 = x;
												}
												else{
													HX_STACK_LINE(1136)
													tmp27 = y;
												}
											}
											HX_STACK_LINE(1136)
											int tmp28 = ((int)1 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1136)
											node1->height = tmp28;
											HX_STACK_LINE(1136)
											int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1136)
												int x = node1->height;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(1136)
												int y = f->height;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(1136)
												bool tmp30 = (x > y);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1136)
												if ((tmp30)){
													HX_STACK_LINE(1136)
													tmp29 = x;
												}
												else{
													HX_STACK_LINE(1136)
													tmp29 = y;
												}
											}
											HX_STACK_LINE(1136)
											int tmp30 = ((int)1 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1136)
											b->height = tmp30;
										}
										else{
											HX_STACK_LINE(1136)
											b->child2 = g;
											HX_STACK_LINE(1136)
											node1->child1 = f;
											HX_STACK_LINE(1136)
											f->parent = node1;
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1136)
												bool tmp27 = (a->minx < b1->minx);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1136)
												Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1136)
												if ((tmp27)){
													HX_STACK_LINE(1136)
													tmp28 = a->minx;
												}
												else{
													HX_STACK_LINE(1136)
													tmp28 = b1->minx;
												}
												HX_STACK_LINE(1136)
												_this->minx = tmp28;
												HX_STACK_LINE(1136)
												bool tmp29 = (a->miny < b1->miny);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1136)
												Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1136)
												if ((tmp29)){
													HX_STACK_LINE(1136)
													tmp30 = a->miny;
												}
												else{
													HX_STACK_LINE(1136)
													tmp30 = b1->miny;
												}
												HX_STACK_LINE(1136)
												_this->miny = tmp30;
												HX_STACK_LINE(1136)
												bool tmp31 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1136)
												Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1136)
												if ((tmp31)){
													HX_STACK_LINE(1136)
													tmp32 = a->maxx;
												}
												else{
													HX_STACK_LINE(1136)
													tmp32 = b1->maxx;
												}
												HX_STACK_LINE(1136)
												_this->maxx = tmp32;
												HX_STACK_LINE(1136)
												bool tmp33 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1136)
												Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1136)
												if ((tmp33)){
													HX_STACK_LINE(1136)
													tmp34 = a->maxy;
												}
												else{
													HX_STACK_LINE(1136)
													tmp34 = b1->maxy;
												}
												HX_STACK_LINE(1136)
												_this->maxy = tmp34;
											}
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1136)
												bool tmp27 = (a->minx < b1->minx);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1136)
												Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1136)
												if ((tmp27)){
													HX_STACK_LINE(1136)
													tmp28 = a->minx;
												}
												else{
													HX_STACK_LINE(1136)
													tmp28 = b1->minx;
												}
												HX_STACK_LINE(1136)
												_this->minx = tmp28;
												HX_STACK_LINE(1136)
												bool tmp29 = (a->miny < b1->miny);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1136)
												Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1136)
												if ((tmp29)){
													HX_STACK_LINE(1136)
													tmp30 = a->miny;
												}
												else{
													HX_STACK_LINE(1136)
													tmp30 = b1->miny;
												}
												HX_STACK_LINE(1136)
												_this->miny = tmp30;
												HX_STACK_LINE(1136)
												bool tmp31 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1136)
												Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1136)
												if ((tmp31)){
													HX_STACK_LINE(1136)
													tmp32 = a->maxx;
												}
												else{
													HX_STACK_LINE(1136)
													tmp32 = b1->maxx;
												}
												HX_STACK_LINE(1136)
												_this->maxx = tmp32;
												HX_STACK_LINE(1136)
												bool tmp33 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1136)
												Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1136)
												if ((tmp33)){
													HX_STACK_LINE(1136)
													tmp34 = a->maxy;
												}
												else{
													HX_STACK_LINE(1136)
													tmp34 = b1->maxy;
												}
												HX_STACK_LINE(1136)
												_this->maxy = tmp34;
											}
											HX_STACK_LINE(1136)
											int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1136)
												int x = c->height;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(1136)
												int y = f->height;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(1136)
												bool tmp28 = (x > y);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1136)
												if ((tmp28)){
													HX_STACK_LINE(1136)
													tmp27 = x;
												}
												else{
													HX_STACK_LINE(1136)
													tmp27 = y;
												}
											}
											HX_STACK_LINE(1136)
											int tmp28 = ((int)1 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1136)
											node1->height = tmp28;
											HX_STACK_LINE(1136)
											int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1136)
												int x = node1->height;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(1136)
												int y = g->height;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(1136)
												bool tmp30 = (x > y);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1136)
												if ((tmp30)){
													HX_STACK_LINE(1136)
													tmp29 = x;
												}
												else{
													HX_STACK_LINE(1136)
													tmp29 = y;
												}
											}
											HX_STACK_LINE(1136)
											int tmp30 = ((int)1 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1136)
											b->height = tmp30;
										}
										HX_STACK_LINE(1136)
										tmp21 = b;
									}
									else{
										HX_STACK_LINE(1136)
										tmp21 = node1;
									}
								}
							}
							HX_STACK_LINE(1136)
							node1 = tmp21;
							HX_STACK_LINE(1136)
							::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(1136)
							::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
							HX_STACK_LINE(1136)
							int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								int x = child1->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1136)
								int y = child2->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(1136)
								bool tmp23 = (x > y);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1136)
								if ((tmp23)){
									HX_STACK_LINE(1136)
									tmp22 = x;
								}
								else{
									HX_STACK_LINE(1136)
									tmp22 = y;
								}
							}
							HX_STACK_LINE(1136)
							int tmp23 = ((int)1 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1136)
							node1->height = tmp23;
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1136)
								bool tmp24 = (a->minx < b->minx);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1136)
								Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1136)
								if ((tmp24)){
									HX_STACK_LINE(1136)
									tmp25 = a->minx;
								}
								else{
									HX_STACK_LINE(1136)
									tmp25 = b->minx;
								}
								HX_STACK_LINE(1136)
								_this->minx = tmp25;
								HX_STACK_LINE(1136)
								bool tmp26 = (a->miny < b->miny);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1136)
								Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1136)
								if ((tmp26)){
									HX_STACK_LINE(1136)
									tmp27 = a->miny;
								}
								else{
									HX_STACK_LINE(1136)
									tmp27 = b->miny;
								}
								HX_STACK_LINE(1136)
								_this->miny = tmp27;
								HX_STACK_LINE(1136)
								bool tmp28 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1136)
								Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1136)
								if ((tmp28)){
									HX_STACK_LINE(1136)
									tmp29 = a->maxx;
								}
								else{
									HX_STACK_LINE(1136)
									tmp29 = b->maxx;
								}
								HX_STACK_LINE(1136)
								_this->maxx = tmp29;
								HX_STACK_LINE(1136)
								bool tmp30 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1136)
								Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1136)
								if ((tmp30)){
									HX_STACK_LINE(1136)
									tmp31 = a->maxy;
								}
								else{
									HX_STACK_LINE(1136)
									tmp31 = b->maxy;
								}
								HX_STACK_LINE(1136)
								_this->maxy = tmp31;
							}
							HX_STACK_LINE(1136)
							node1 = node1->parent;
						}
					}
				}
				HX_STACK_LINE(1137)
				node->synced = false;
			}
			HX_STACK_LINE(1139)
			node = node->snext;
		}
		HX_STACK_LINE(1142)
		while((true)){
			HX_STACK_LINE(1142)
			::zpp_nape::space::ZPP_AABBNode tmp1 = this->syncs;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1142)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1142)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1142)
			if ((tmp3)){
				HX_STACK_LINE(1142)
				break;
			}
			HX_STACK_LINE(1143)
			::zpp_nape::space::ZPP_AABBNode tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1143)
			{
				HX_STACK_LINE(1152)
				::zpp_nape::space::ZPP_AABBNode tmp5 = this->syncs;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1152)
				::zpp_nape::space::ZPP_AABBNode ret = tmp5;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1153)
				this->syncs = ret->snext;
				HX_STACK_LINE(1154)
				ret->snext = null();
				HX_STACK_LINE(1155)
				tmp4 = ret;
			}
			HX_STACK_LINE(1143)
			::zpp_nape::space::ZPP_AABBNode leaf = tmp4;		HX_STACK_VAR(leaf,"leaf");
			HX_STACK_LINE(1157)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1157)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1157)
			if ((tmp5)){
				HX_STACK_LINE(1157)
				tmp6 = leaf->moved;
			}
			else{
				HX_STACK_LINE(1157)
				tmp6 = false;
			}
			HX_STACK_LINE(1157)
			if ((tmp6)){
				HX_STACK_LINE(1157)
				continue;
			}
			HX_STACK_LINE(1158)
			leaf->moved = false;
			HX_STACK_LINE(1159)
			::zpp_nape::shape::ZPP_Shape lshape = leaf->shape;		HX_STACK_VAR(lshape,"lshape");
			HX_STACK_LINE(1160)
			::zpp_nape::phys::ZPP_Body lbody = lshape->body;		HX_STACK_VAR(lbody,"lbody");
			HX_STACK_LINE(1169)
			bool tmp7 = lbody->component->sleeping;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1169)
			if ((tmp7)){
				HX_STACK_LINE(1169)
				continue;
			}
			HX_STACK_LINE(1170)
			::zpp_nape::geom::ZPP_AABB ab = leaf->aabb;		HX_STACK_VAR(ab,"ab");
			HX_STACK_LINE(1171)
			::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(1172)
			{
				HX_STACK_LINE(1173)
				::zpp_nape::space::ZPP_AABBTree tmp8 = this->dtree;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1173)
				::zpp_nape::space::ZPP_AABBNode tmp9 = tmp8->root;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1173)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1173)
				if ((tmp10)){
					HX_STACK_LINE(1182)
					::zpp_nape::space::ZPP_AABBTree tmp11 = this->dtree;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1182)
					tmp11->root->next = stack;
					HX_STACK_LINE(1183)
					::zpp_nape::space::ZPP_AABBTree tmp12 = this->dtree;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1183)
					stack = tmp12->root;
				}
				HX_STACK_LINE(1185)
				while((true)){
					HX_STACK_LINE(1185)
					bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1185)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1185)
					if ((tmp12)){
						HX_STACK_LINE(1185)
						break;
					}
					HX_STACK_LINE(1186)
					::zpp_nape::space::ZPP_AABBNode tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1195)
						::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1196)
						stack = ret->next;
						HX_STACK_LINE(1197)
						ret->next = null();
						HX_STACK_LINE(1198)
						tmp13 = ret;
					}
					HX_STACK_LINE(1186)
					::zpp_nape::space::ZPP_AABBNode node1 = tmp13;		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1200)
					bool tmp14 = (node1 == leaf);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1200)
					if ((tmp14)){
						HX_STACK_LINE(1200)
						continue;
					}
					HX_STACK_LINE(1201)
					bool tmp15 = (node1->child1 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1201)
					if ((tmp15)){
						HX_STACK_LINE(1202)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1203)
						bool tmp16 = (shape->body != lshape->body);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1203)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1203)
						if ((tmp16)){
							HX_STACK_LINE(1203)
							int tmp18 = shape->body->type;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1203)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1203)
							int tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1203)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1203)
							bool tmp22 = (tmp19 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1203)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1203)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1203)
							bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1203)
							if ((tmp25)){
								HX_STACK_LINE(1203)
								int tmp26 = lshape->body->type;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1203)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1203)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1203)
								int tmp29 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1203)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1203)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1203)
								bool tmp32 = (tmp28 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1203)
								tmp24 = tmp32;
							}
							else{
								HX_STACK_LINE(1203)
								tmp24 = false;
							}
							HX_STACK_LINE(1203)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1203)
							tmp17 = !(tmp26);
						}
						else{
							HX_STACK_LINE(1203)
							tmp17 = false;
						}
						HX_STACK_LINE(1203)
						if ((tmp17)){
							HX_STACK_LINE(1204)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1204)
							{
								HX_STACK_LINE(1204)
								::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1204)
								bool tmp19 = (x->miny <= ab->maxy);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1204)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1204)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1204)
								if ((tmp20)){
									HX_STACK_LINE(1204)
									tmp21 = (ab->miny <= x->maxy);
								}
								else{
									HX_STACK_LINE(1204)
									tmp21 = false;
								}
								HX_STACK_LINE(1204)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1204)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1204)
								if ((tmp22)){
									HX_STACK_LINE(1204)
									tmp23 = (x->minx <= ab->maxx);
								}
								else{
									HX_STACK_LINE(1204)
									tmp23 = false;
								}
								HX_STACK_LINE(1204)
								if ((tmp23)){
									HX_STACK_LINE(1204)
									tmp18 = (ab->minx <= x->maxx);
								}
								else{
									HX_STACK_LINE(1204)
									tmp18 = false;
								}
							}
							HX_STACK_LINE(1204)
							if ((tmp18)){
								HX_STACK_LINE(1205)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1206)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1215)
								bool tmp19 = (lshape->id < shape->id);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1215)
								if ((tmp19)){
									HX_STACK_LINE(1216)
									id = lshape->id;
									HX_STACK_LINE(1217)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1220)
									id = shape->id;
									HX_STACK_LINE(1221)
									di = lshape->id;
								}
								HX_STACK_LINE(1231)
								int tmp20 = lshape->pairs->length;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1231)
								int tmp21 = shape->pairs->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1231)
								bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1231)
								::zpp_nape::shape::ZPP_Shape tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1231)
								if ((tmp22)){
									HX_STACK_LINE(1231)
									tmp23 = lshape;
								}
								else{
									HX_STACK_LINE(1231)
									tmp23 = shape;
								}
								HX_STACK_LINE(1231)
								::zpp_nape::shape::ZPP_Shape s = tmp23;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1232)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1233)
								{
									HX_STACK_LINE(1234)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp24 = s->pairs->head;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1234)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1235)
									while((true)){
										HX_STACK_LINE(1235)
										bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1235)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1235)
										if ((tmp26)){
											HX_STACK_LINE(1235)
											break;
										}
										HX_STACK_LINE(1236)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1237)
										{
											HX_STACK_LINE(1246)
											bool tmp27 = (px->id == id);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1246)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1246)
											if ((tmp27)){
												HX_STACK_LINE(1246)
												tmp28 = (px->di == di);
											}
											else{
												HX_STACK_LINE(1246)
												tmp28 = false;
											}
											HX_STACK_LINE(1246)
											if ((tmp28)){
												HX_STACK_LINE(1247)
												p = px;
												HX_STACK_LINE(1248)
												break;
											}
										}
										HX_STACK_LINE(1251)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1254)
								bool tmp24 = (p != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1254)
								if ((tmp24)){
									HX_STACK_LINE(1255)
									bool tmp25 = p->sleeping;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1255)
									if ((tmp25)){
										HX_STACK_LINE(1256)
										p->sleeping = false;
										HX_STACK_LINE(1257)
										::zpp_nape::space::ZPP_AABBPair tmp26 = this->pairs;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1257)
										p->next = tmp26;
										HX_STACK_LINE(1258)
										this->pairs = p;
										HX_STACK_LINE(1259)
										p->first = true;
									}
									HX_STACK_LINE(1261)
									continue;
								}
								HX_STACK_LINE(1263)
								{
									HX_STACK_LINE(1264)
									::zpp_nape::space::ZPP_AABBPair tmp25 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1264)
									bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1264)
									if ((tmp26)){
										HX_STACK_LINE(1265)
										::zpp_nape::space::ZPP_AABBPair tmp27 = ::zpp_nape::space::ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1265)
										p = tmp27;
									}
									else{
										HX_STACK_LINE(1271)
										::zpp_nape::space::ZPP_AABBPair tmp27 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1271)
										p = tmp27;
										HX_STACK_LINE(1272)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1273)
										p->next = null();
									}
									HX_STACK_LINE(1278)
									Dynamic();
								}
								HX_STACK_LINE(1280)
								p->n1 = leaf;
								HX_STACK_LINE(1281)
								p->n2 = node1;
								HX_STACK_LINE(1282)
								p->id = id;
								HX_STACK_LINE(1283)
								p->di = di;
								HX_STACK_LINE(1284)
								::zpp_nape::space::ZPP_AABBPair tmp25 = this->pairs;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1284)
								p->next = tmp25;
								HX_STACK_LINE(1285)
								this->pairs = p;
								HX_STACK_LINE(1286)
								p->first = true;
								HX_STACK_LINE(1287)
								{
									HX_STACK_LINE(1287)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1287)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1287)
									{
										HX_STACK_LINE(1287)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1287)
										{
											HX_STACK_LINE(1287)
											::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp27 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1287)
											bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1287)
											if ((tmp28)){
												HX_STACK_LINE(1287)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1287)
												ret = tmp29;
											}
											else{
												HX_STACK_LINE(1287)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1287)
												ret = tmp29;
												HX_STACK_LINE(1287)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1287)
												ret->next = null();
											}
											HX_STACK_LINE(1287)
											Dynamic();
										}
										HX_STACK_LINE(1287)
										ret->elt = p;
										HX_STACK_LINE(1287)
										tmp26 = ret;
									}
									HX_STACK_LINE(1287)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp26;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1287)
									temp->next = _this->head;
									HX_STACK_LINE(1287)
									_this->head = temp;
									HX_STACK_LINE(1287)
									_this->modified = true;
									HX_STACK_LINE(1287)
									(_this->length)++;
									HX_STACK_LINE(1287)
									p;
								}
								HX_STACK_LINE(1288)
								{
									HX_STACK_LINE(1288)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1288)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1288)
									{
										HX_STACK_LINE(1288)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1288)
										{
											HX_STACK_LINE(1288)
											::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp27 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1288)
											bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1288)
											if ((tmp28)){
												HX_STACK_LINE(1288)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1288)
												ret = tmp29;
											}
											else{
												HX_STACK_LINE(1288)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1288)
												ret = tmp29;
												HX_STACK_LINE(1288)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1288)
												ret->next = null();
											}
											HX_STACK_LINE(1288)
											Dynamic();
										}
										HX_STACK_LINE(1288)
										ret->elt = p;
										HX_STACK_LINE(1288)
										tmp26 = ret;
									}
									HX_STACK_LINE(1288)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp26;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1288)
									temp->next = _this->head;
									HX_STACK_LINE(1288)
									_this->head = temp;
									HX_STACK_LINE(1288)
									_this->modified = true;
									HX_STACK_LINE(1288)
									(_this->length)++;
									HX_STACK_LINE(1288)
									p;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1292)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1292)
						{
							HX_STACK_LINE(1292)
							::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1292)
							bool tmp17 = (x->miny <= ab->maxy);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1292)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1292)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1292)
							if ((tmp18)){
								HX_STACK_LINE(1292)
								tmp19 = (ab->miny <= x->maxy);
							}
							else{
								HX_STACK_LINE(1292)
								tmp19 = false;
							}
							HX_STACK_LINE(1292)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1292)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1292)
							if ((tmp20)){
								HX_STACK_LINE(1292)
								tmp21 = (x->minx <= ab->maxx);
							}
							else{
								HX_STACK_LINE(1292)
								tmp21 = false;
							}
							HX_STACK_LINE(1292)
							if ((tmp21)){
								HX_STACK_LINE(1292)
								tmp16 = (ab->minx <= x->maxx);
							}
							else{
								HX_STACK_LINE(1292)
								tmp16 = false;
							}
						}
						HX_STACK_LINE(1292)
						if ((tmp16)){
							HX_STACK_LINE(1293)
							bool tmp17 = (node1->child1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1293)
							if ((tmp17)){
								HX_STACK_LINE(1302)
								node1->child1->next = stack;
								HX_STACK_LINE(1303)
								stack = node1->child1;
							}
							HX_STACK_LINE(1305)
							bool tmp18 = (node1->child2 != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1305)
							if ((tmp18)){
								HX_STACK_LINE(1314)
								node1->child2->next = stack;
								HX_STACK_LINE(1315)
								stack = node1->child2;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1320)
			{
				HX_STACK_LINE(1321)
				::zpp_nape::space::ZPP_AABBTree tmp8 = this->stree;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1321)
				::zpp_nape::space::ZPP_AABBNode tmp9 = tmp8->root;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1321)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1321)
				if ((tmp10)){
					HX_STACK_LINE(1330)
					::zpp_nape::space::ZPP_AABBTree tmp11 = this->stree;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1330)
					tmp11->root->next = stack;
					HX_STACK_LINE(1331)
					::zpp_nape::space::ZPP_AABBTree tmp12 = this->stree;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1331)
					stack = tmp12->root;
				}
				HX_STACK_LINE(1333)
				while((true)){
					HX_STACK_LINE(1333)
					bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1333)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1333)
					if ((tmp12)){
						HX_STACK_LINE(1333)
						break;
					}
					HX_STACK_LINE(1334)
					::zpp_nape::space::ZPP_AABBNode tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1334)
					{
						HX_STACK_LINE(1343)
						::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1344)
						stack = ret->next;
						HX_STACK_LINE(1345)
						ret->next = null();
						HX_STACK_LINE(1346)
						tmp13 = ret;
					}
					HX_STACK_LINE(1334)
					::zpp_nape::space::ZPP_AABBNode node1 = tmp13;		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1348)
					bool tmp14 = (node1 == leaf);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1348)
					if ((tmp14)){
						HX_STACK_LINE(1348)
						continue;
					}
					HX_STACK_LINE(1349)
					bool tmp15 = (node1->child1 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1349)
					if ((tmp15)){
						HX_STACK_LINE(1350)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1351)
						bool tmp16 = (shape->body != lshape->body);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1351)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1351)
						if ((tmp16)){
							HX_STACK_LINE(1351)
							int tmp18 = shape->body->type;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1351)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1351)
							int tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1351)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1351)
							bool tmp22 = (tmp19 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1351)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1351)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1351)
							bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1351)
							if ((tmp25)){
								HX_STACK_LINE(1351)
								int tmp26 = lshape->body->type;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1351)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1351)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1351)
								int tmp29 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1351)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1351)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1351)
								bool tmp32 = (tmp28 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1351)
								tmp24 = tmp32;
							}
							else{
								HX_STACK_LINE(1351)
								tmp24 = false;
							}
							HX_STACK_LINE(1351)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1351)
							tmp17 = !(tmp26);
						}
						else{
							HX_STACK_LINE(1351)
							tmp17 = false;
						}
						HX_STACK_LINE(1351)
						if ((tmp17)){
							HX_STACK_LINE(1352)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1352)
							{
								HX_STACK_LINE(1352)
								::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1352)
								bool tmp19 = (x->miny <= ab->maxy);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1352)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1352)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1352)
								if ((tmp20)){
									HX_STACK_LINE(1352)
									tmp21 = (ab->miny <= x->maxy);
								}
								else{
									HX_STACK_LINE(1352)
									tmp21 = false;
								}
								HX_STACK_LINE(1352)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1352)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1352)
								if ((tmp22)){
									HX_STACK_LINE(1352)
									tmp23 = (x->minx <= ab->maxx);
								}
								else{
									HX_STACK_LINE(1352)
									tmp23 = false;
								}
								HX_STACK_LINE(1352)
								if ((tmp23)){
									HX_STACK_LINE(1352)
									tmp18 = (ab->minx <= x->maxx);
								}
								else{
									HX_STACK_LINE(1352)
									tmp18 = false;
								}
							}
							HX_STACK_LINE(1352)
							if ((tmp18)){
								HX_STACK_LINE(1353)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1354)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1363)
								bool tmp19 = (lshape->id < shape->id);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1363)
								if ((tmp19)){
									HX_STACK_LINE(1364)
									id = lshape->id;
									HX_STACK_LINE(1365)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1368)
									id = shape->id;
									HX_STACK_LINE(1369)
									di = lshape->id;
								}
								HX_STACK_LINE(1379)
								int tmp20 = lshape->pairs->length;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1379)
								int tmp21 = shape->pairs->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1379)
								bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1379)
								::zpp_nape::shape::ZPP_Shape tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1379)
								if ((tmp22)){
									HX_STACK_LINE(1379)
									tmp23 = lshape;
								}
								else{
									HX_STACK_LINE(1379)
									tmp23 = shape;
								}
								HX_STACK_LINE(1379)
								::zpp_nape::shape::ZPP_Shape s = tmp23;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1380)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1381)
								{
									HX_STACK_LINE(1382)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp24 = s->pairs->head;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1382)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1383)
									while((true)){
										HX_STACK_LINE(1383)
										bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1383)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1383)
										if ((tmp26)){
											HX_STACK_LINE(1383)
											break;
										}
										HX_STACK_LINE(1384)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1385)
										{
											HX_STACK_LINE(1394)
											bool tmp27 = (px->id == id);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1394)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1394)
											if ((tmp27)){
												HX_STACK_LINE(1394)
												tmp28 = (px->di == di);
											}
											else{
												HX_STACK_LINE(1394)
												tmp28 = false;
											}
											HX_STACK_LINE(1394)
											if ((tmp28)){
												HX_STACK_LINE(1395)
												p = px;
												HX_STACK_LINE(1396)
												break;
											}
										}
										HX_STACK_LINE(1399)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1402)
								bool tmp24 = (p != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1402)
								if ((tmp24)){
									HX_STACK_LINE(1403)
									bool tmp25 = p->sleeping;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1403)
									if ((tmp25)){
										HX_STACK_LINE(1404)
										p->sleeping = false;
										HX_STACK_LINE(1405)
										::zpp_nape::space::ZPP_AABBPair tmp26 = this->pairs;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1405)
										p->next = tmp26;
										HX_STACK_LINE(1406)
										this->pairs = p;
										HX_STACK_LINE(1407)
										p->first = true;
									}
									HX_STACK_LINE(1409)
									continue;
								}
								HX_STACK_LINE(1411)
								{
									HX_STACK_LINE(1412)
									::zpp_nape::space::ZPP_AABBPair tmp25 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1412)
									bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1412)
									if ((tmp26)){
										HX_STACK_LINE(1413)
										::zpp_nape::space::ZPP_AABBPair tmp27 = ::zpp_nape::space::ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1413)
										p = tmp27;
									}
									else{
										HX_STACK_LINE(1419)
										::zpp_nape::space::ZPP_AABBPair tmp27 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1419)
										p = tmp27;
										HX_STACK_LINE(1420)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1421)
										p->next = null();
									}
									HX_STACK_LINE(1426)
									Dynamic();
								}
								HX_STACK_LINE(1428)
								p->n1 = leaf;
								HX_STACK_LINE(1429)
								p->n2 = node1;
								HX_STACK_LINE(1430)
								p->id = id;
								HX_STACK_LINE(1431)
								p->di = di;
								HX_STACK_LINE(1432)
								::zpp_nape::space::ZPP_AABBPair tmp25 = this->pairs;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1432)
								p->next = tmp25;
								HX_STACK_LINE(1433)
								this->pairs = p;
								HX_STACK_LINE(1434)
								p->first = true;
								HX_STACK_LINE(1435)
								{
									HX_STACK_LINE(1435)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1435)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1435)
									{
										HX_STACK_LINE(1435)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1435)
										{
											HX_STACK_LINE(1435)
											::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp27 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1435)
											bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1435)
											if ((tmp28)){
												HX_STACK_LINE(1435)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1435)
												ret = tmp29;
											}
											else{
												HX_STACK_LINE(1435)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1435)
												ret = tmp29;
												HX_STACK_LINE(1435)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1435)
												ret->next = null();
											}
											HX_STACK_LINE(1435)
											Dynamic();
										}
										HX_STACK_LINE(1435)
										ret->elt = p;
										HX_STACK_LINE(1435)
										tmp26 = ret;
									}
									HX_STACK_LINE(1435)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp26;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1435)
									temp->next = _this->head;
									HX_STACK_LINE(1435)
									_this->head = temp;
									HX_STACK_LINE(1435)
									_this->modified = true;
									HX_STACK_LINE(1435)
									(_this->length)++;
									HX_STACK_LINE(1435)
									p;
								}
								HX_STACK_LINE(1436)
								{
									HX_STACK_LINE(1436)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1436)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1436)
									{
										HX_STACK_LINE(1436)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1436)
										{
											HX_STACK_LINE(1436)
											::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp27 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1436)
											bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1436)
											if ((tmp28)){
												HX_STACK_LINE(1436)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1436)
												ret = tmp29;
											}
											else{
												HX_STACK_LINE(1436)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1436)
												ret = tmp29;
												HX_STACK_LINE(1436)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1436)
												ret->next = null();
											}
											HX_STACK_LINE(1436)
											Dynamic();
										}
										HX_STACK_LINE(1436)
										ret->elt = p;
										HX_STACK_LINE(1436)
										tmp26 = ret;
									}
									HX_STACK_LINE(1436)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp26;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1436)
									temp->next = _this->head;
									HX_STACK_LINE(1436)
									_this->head = temp;
									HX_STACK_LINE(1436)
									_this->modified = true;
									HX_STACK_LINE(1436)
									(_this->length)++;
									HX_STACK_LINE(1436)
									p;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1440)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1440)
						{
							HX_STACK_LINE(1440)
							::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1440)
							bool tmp17 = (x->miny <= ab->maxy);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1440)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1440)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1440)
							if ((tmp18)){
								HX_STACK_LINE(1440)
								tmp19 = (ab->miny <= x->maxy);
							}
							else{
								HX_STACK_LINE(1440)
								tmp19 = false;
							}
							HX_STACK_LINE(1440)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1440)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1440)
							if ((tmp20)){
								HX_STACK_LINE(1440)
								tmp21 = (x->minx <= ab->maxx);
							}
							else{
								HX_STACK_LINE(1440)
								tmp21 = false;
							}
							HX_STACK_LINE(1440)
							if ((tmp21)){
								HX_STACK_LINE(1440)
								tmp16 = (ab->minx <= x->maxx);
							}
							else{
								HX_STACK_LINE(1440)
								tmp16 = false;
							}
						}
						HX_STACK_LINE(1440)
						if ((tmp16)){
							HX_STACK_LINE(1441)
							bool tmp17 = (node1->child1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1441)
							if ((tmp17)){
								HX_STACK_LINE(1450)
								node1->child1->next = stack;
								HX_STACK_LINE(1451)
								stack = node1->child1;
							}
							HX_STACK_LINE(1453)
							bool tmp18 = (node1->child2 != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1453)
							if ((tmp18)){
								HX_STACK_LINE(1462)
								node1->child2->next = stack;
								HX_STACK_LINE(1463)
								stack = node1->child2;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1471)
		while((true)){
			HX_STACK_LINE(1471)
			::zpp_nape::space::ZPP_AABBNode tmp1 = this->moves;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1471)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1471)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1471)
			if ((tmp3)){
				HX_STACK_LINE(1471)
				break;
			}
			HX_STACK_LINE(1472)
			::zpp_nape::space::ZPP_AABBNode tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1472)
			{
				HX_STACK_LINE(1481)
				::zpp_nape::space::ZPP_AABBNode tmp5 = this->moves;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1481)
				::zpp_nape::space::ZPP_AABBNode ret = tmp5;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1482)
				this->moves = ret->mnext;
				HX_STACK_LINE(1483)
				ret->mnext = null();
				HX_STACK_LINE(1484)
				tmp4 = ret;
			}
			HX_STACK_LINE(1472)
			::zpp_nape::space::ZPP_AABBNode leaf = tmp4;		HX_STACK_VAR(leaf,"leaf");
			HX_STACK_LINE(1486)
			bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1486)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1486)
			if ((tmp5)){
				HX_STACK_LINE(1486)
				tmp6 = leaf->moved;
			}
			else{
				HX_STACK_LINE(1486)
				tmp6 = false;
			}
			HX_STACK_LINE(1486)
			if ((tmp6)){
				HX_STACK_LINE(1486)
				continue;
			}
			HX_STACK_LINE(1487)
			leaf->moved = false;
			HX_STACK_LINE(1488)
			::zpp_nape::shape::ZPP_Shape lshape = leaf->shape;		HX_STACK_VAR(lshape,"lshape");
			HX_STACK_LINE(1489)
			::zpp_nape::phys::ZPP_Body lbody = lshape->body;		HX_STACK_VAR(lbody,"lbody");
			HX_STACK_LINE(1498)
			bool tmp7 = lbody->component->sleeping;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1498)
			if ((tmp7)){
				HX_STACK_LINE(1498)
				continue;
			}
			HX_STACK_LINE(1499)
			::zpp_nape::geom::ZPP_AABB ab = leaf->aabb;		HX_STACK_VAR(ab,"ab");
			HX_STACK_LINE(1500)
			::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(1501)
			{
				HX_STACK_LINE(1502)
				::zpp_nape::space::ZPP_AABBTree tmp8 = this->dtree;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1502)
				::zpp_nape::space::ZPP_AABBNode tmp9 = tmp8->root;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1502)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1502)
				if ((tmp10)){
					HX_STACK_LINE(1511)
					::zpp_nape::space::ZPP_AABBTree tmp11 = this->dtree;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1511)
					tmp11->root->next = stack;
					HX_STACK_LINE(1512)
					::zpp_nape::space::ZPP_AABBTree tmp12 = this->dtree;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1512)
					stack = tmp12->root;
				}
				HX_STACK_LINE(1514)
				while((true)){
					HX_STACK_LINE(1514)
					bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1514)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1514)
					if ((tmp12)){
						HX_STACK_LINE(1514)
						break;
					}
					HX_STACK_LINE(1515)
					::zpp_nape::space::ZPP_AABBNode tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1515)
					{
						HX_STACK_LINE(1524)
						::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1525)
						stack = ret->next;
						HX_STACK_LINE(1526)
						ret->next = null();
						HX_STACK_LINE(1527)
						tmp13 = ret;
					}
					HX_STACK_LINE(1515)
					::zpp_nape::space::ZPP_AABBNode node1 = tmp13;		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1529)
					bool tmp14 = (node1 == leaf);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1529)
					if ((tmp14)){
						HX_STACK_LINE(1529)
						continue;
					}
					HX_STACK_LINE(1530)
					bool tmp15 = (node1->child1 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1530)
					if ((tmp15)){
						HX_STACK_LINE(1531)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1532)
						bool tmp16 = (shape->body != lshape->body);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1532)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1532)
						if ((tmp16)){
							HX_STACK_LINE(1532)
							int tmp18 = shape->body->type;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1532)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1532)
							int tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1532)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1532)
							bool tmp22 = (tmp19 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1532)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1532)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1532)
							bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1532)
							if ((tmp25)){
								HX_STACK_LINE(1532)
								int tmp26 = lshape->body->type;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1532)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1532)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1532)
								int tmp29 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1532)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1532)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1532)
								bool tmp32 = (tmp28 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1532)
								tmp24 = tmp32;
							}
							else{
								HX_STACK_LINE(1532)
								tmp24 = false;
							}
							HX_STACK_LINE(1532)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1532)
							tmp17 = !(tmp26);
						}
						else{
							HX_STACK_LINE(1532)
							tmp17 = false;
						}
						HX_STACK_LINE(1532)
						if ((tmp17)){
							HX_STACK_LINE(1533)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1533)
							{
								HX_STACK_LINE(1533)
								::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1533)
								bool tmp19 = (x->miny <= ab->maxy);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1533)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1533)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1533)
								if ((tmp20)){
									HX_STACK_LINE(1533)
									tmp21 = (ab->miny <= x->maxy);
								}
								else{
									HX_STACK_LINE(1533)
									tmp21 = false;
								}
								HX_STACK_LINE(1533)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1533)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1533)
								if ((tmp22)){
									HX_STACK_LINE(1533)
									tmp23 = (x->minx <= ab->maxx);
								}
								else{
									HX_STACK_LINE(1533)
									tmp23 = false;
								}
								HX_STACK_LINE(1533)
								if ((tmp23)){
									HX_STACK_LINE(1533)
									tmp18 = (ab->minx <= x->maxx);
								}
								else{
									HX_STACK_LINE(1533)
									tmp18 = false;
								}
							}
							HX_STACK_LINE(1533)
							if ((tmp18)){
								HX_STACK_LINE(1534)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1535)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1544)
								bool tmp19 = (lshape->id < shape->id);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1544)
								if ((tmp19)){
									HX_STACK_LINE(1545)
									id = lshape->id;
									HX_STACK_LINE(1546)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1549)
									id = shape->id;
									HX_STACK_LINE(1550)
									di = lshape->id;
								}
								HX_STACK_LINE(1560)
								int tmp20 = lshape->pairs->length;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1560)
								int tmp21 = shape->pairs->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1560)
								bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1560)
								::zpp_nape::shape::ZPP_Shape tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1560)
								if ((tmp22)){
									HX_STACK_LINE(1560)
									tmp23 = lshape;
								}
								else{
									HX_STACK_LINE(1560)
									tmp23 = shape;
								}
								HX_STACK_LINE(1560)
								::zpp_nape::shape::ZPP_Shape s = tmp23;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1561)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1562)
								{
									HX_STACK_LINE(1563)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp24 = s->pairs->head;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1563)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1564)
									while((true)){
										HX_STACK_LINE(1564)
										bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1564)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1564)
										if ((tmp26)){
											HX_STACK_LINE(1564)
											break;
										}
										HX_STACK_LINE(1565)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1566)
										{
											HX_STACK_LINE(1575)
											bool tmp27 = (px->id == id);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1575)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1575)
											if ((tmp27)){
												HX_STACK_LINE(1575)
												tmp28 = (px->di == di);
											}
											else{
												HX_STACK_LINE(1575)
												tmp28 = false;
											}
											HX_STACK_LINE(1575)
											if ((tmp28)){
												HX_STACK_LINE(1576)
												p = px;
												HX_STACK_LINE(1577)
												break;
											}
										}
										HX_STACK_LINE(1580)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1583)
								bool tmp24 = (p != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1583)
								if ((tmp24)){
									HX_STACK_LINE(1584)
									bool tmp25 = p->sleeping;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1584)
									if ((tmp25)){
										HX_STACK_LINE(1585)
										p->sleeping = false;
										HX_STACK_LINE(1586)
										::zpp_nape::space::ZPP_AABBPair tmp26 = this->pairs;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1586)
										p->next = tmp26;
										HX_STACK_LINE(1587)
										this->pairs = p;
										HX_STACK_LINE(1588)
										p->first = true;
									}
									HX_STACK_LINE(1590)
									continue;
								}
								HX_STACK_LINE(1592)
								{
									HX_STACK_LINE(1593)
									::zpp_nape::space::ZPP_AABBPair tmp25 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1593)
									bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1593)
									if ((tmp26)){
										HX_STACK_LINE(1594)
										::zpp_nape::space::ZPP_AABBPair tmp27 = ::zpp_nape::space::ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1594)
										p = tmp27;
									}
									else{
										HX_STACK_LINE(1600)
										::zpp_nape::space::ZPP_AABBPair tmp27 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1600)
										p = tmp27;
										HX_STACK_LINE(1601)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1602)
										p->next = null();
									}
									HX_STACK_LINE(1607)
									Dynamic();
								}
								HX_STACK_LINE(1609)
								p->n1 = leaf;
								HX_STACK_LINE(1610)
								p->n2 = node1;
								HX_STACK_LINE(1611)
								p->id = id;
								HX_STACK_LINE(1612)
								p->di = di;
								HX_STACK_LINE(1613)
								::zpp_nape::space::ZPP_AABBPair tmp25 = this->pairs;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1613)
								p->next = tmp25;
								HX_STACK_LINE(1614)
								this->pairs = p;
								HX_STACK_LINE(1615)
								p->first = true;
								HX_STACK_LINE(1616)
								{
									HX_STACK_LINE(1616)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1616)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1616)
									{
										HX_STACK_LINE(1616)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1616)
										{
											HX_STACK_LINE(1616)
											::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp27 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1616)
											bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1616)
											if ((tmp28)){
												HX_STACK_LINE(1616)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1616)
												ret = tmp29;
											}
											else{
												HX_STACK_LINE(1616)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1616)
												ret = tmp29;
												HX_STACK_LINE(1616)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1616)
												ret->next = null();
											}
											HX_STACK_LINE(1616)
											Dynamic();
										}
										HX_STACK_LINE(1616)
										ret->elt = p;
										HX_STACK_LINE(1616)
										tmp26 = ret;
									}
									HX_STACK_LINE(1616)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp26;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1616)
									temp->next = _this->head;
									HX_STACK_LINE(1616)
									_this->head = temp;
									HX_STACK_LINE(1616)
									_this->modified = true;
									HX_STACK_LINE(1616)
									(_this->length)++;
									HX_STACK_LINE(1616)
									p;
								}
								HX_STACK_LINE(1617)
								{
									HX_STACK_LINE(1617)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1617)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1617)
									{
										HX_STACK_LINE(1617)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1617)
										{
											HX_STACK_LINE(1617)
											::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp27 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1617)
											bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1617)
											if ((tmp28)){
												HX_STACK_LINE(1617)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1617)
												ret = tmp29;
											}
											else{
												HX_STACK_LINE(1617)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1617)
												ret = tmp29;
												HX_STACK_LINE(1617)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1617)
												ret->next = null();
											}
											HX_STACK_LINE(1617)
											Dynamic();
										}
										HX_STACK_LINE(1617)
										ret->elt = p;
										HX_STACK_LINE(1617)
										tmp26 = ret;
									}
									HX_STACK_LINE(1617)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp26;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1617)
									temp->next = _this->head;
									HX_STACK_LINE(1617)
									_this->head = temp;
									HX_STACK_LINE(1617)
									_this->modified = true;
									HX_STACK_LINE(1617)
									(_this->length)++;
									HX_STACK_LINE(1617)
									p;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1621)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1621)
						{
							HX_STACK_LINE(1621)
							::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1621)
							bool tmp17 = (x->miny <= ab->maxy);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1621)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1621)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1621)
							if ((tmp18)){
								HX_STACK_LINE(1621)
								tmp19 = (ab->miny <= x->maxy);
							}
							else{
								HX_STACK_LINE(1621)
								tmp19 = false;
							}
							HX_STACK_LINE(1621)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1621)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1621)
							if ((tmp20)){
								HX_STACK_LINE(1621)
								tmp21 = (x->minx <= ab->maxx);
							}
							else{
								HX_STACK_LINE(1621)
								tmp21 = false;
							}
							HX_STACK_LINE(1621)
							if ((tmp21)){
								HX_STACK_LINE(1621)
								tmp16 = (ab->minx <= x->maxx);
							}
							else{
								HX_STACK_LINE(1621)
								tmp16 = false;
							}
						}
						HX_STACK_LINE(1621)
						if ((tmp16)){
							HX_STACK_LINE(1622)
							bool tmp17 = (node1->child1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1622)
							if ((tmp17)){
								HX_STACK_LINE(1631)
								node1->child1->next = stack;
								HX_STACK_LINE(1632)
								stack = node1->child1;
							}
							HX_STACK_LINE(1634)
							bool tmp18 = (node1->child2 != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1634)
							if ((tmp18)){
								HX_STACK_LINE(1643)
								node1->child2->next = stack;
								HX_STACK_LINE(1644)
								stack = node1->child2;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1649)
			{
				HX_STACK_LINE(1650)
				::zpp_nape::space::ZPP_AABBTree tmp8 = this->stree;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1650)
				::zpp_nape::space::ZPP_AABBNode tmp9 = tmp8->root;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1650)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1650)
				if ((tmp10)){
					HX_STACK_LINE(1659)
					::zpp_nape::space::ZPP_AABBTree tmp11 = this->stree;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1659)
					tmp11->root->next = stack;
					HX_STACK_LINE(1660)
					::zpp_nape::space::ZPP_AABBTree tmp12 = this->stree;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1660)
					stack = tmp12->root;
				}
				HX_STACK_LINE(1662)
				while((true)){
					HX_STACK_LINE(1662)
					bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1662)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1662)
					if ((tmp12)){
						HX_STACK_LINE(1662)
						break;
					}
					HX_STACK_LINE(1663)
					::zpp_nape::space::ZPP_AABBNode tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1663)
					{
						HX_STACK_LINE(1672)
						::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1673)
						stack = ret->next;
						HX_STACK_LINE(1674)
						ret->next = null();
						HX_STACK_LINE(1675)
						tmp13 = ret;
					}
					HX_STACK_LINE(1663)
					::zpp_nape::space::ZPP_AABBNode node1 = tmp13;		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1677)
					bool tmp14 = (node1 == leaf);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1677)
					if ((tmp14)){
						HX_STACK_LINE(1677)
						continue;
					}
					HX_STACK_LINE(1678)
					bool tmp15 = (node1->child1 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1678)
					if ((tmp15)){
						HX_STACK_LINE(1679)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1680)
						bool tmp16 = (shape->body != lshape->body);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1680)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1680)
						if ((tmp16)){
							HX_STACK_LINE(1680)
							int tmp18 = shape->body->type;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1680)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1680)
							int tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1680)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1680)
							bool tmp22 = (tmp19 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1680)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1680)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1680)
							bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1680)
							if ((tmp25)){
								HX_STACK_LINE(1680)
								int tmp26 = lshape->body->type;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1680)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1680)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1680)
								int tmp29 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1680)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1680)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1680)
								bool tmp32 = (tmp28 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1680)
								tmp24 = tmp32;
							}
							else{
								HX_STACK_LINE(1680)
								tmp24 = false;
							}
							HX_STACK_LINE(1680)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1680)
							tmp17 = !(tmp26);
						}
						else{
							HX_STACK_LINE(1680)
							tmp17 = false;
						}
						HX_STACK_LINE(1680)
						if ((tmp17)){
							HX_STACK_LINE(1681)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1681)
							{
								HX_STACK_LINE(1681)
								::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1681)
								bool tmp19 = (x->miny <= ab->maxy);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1681)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1681)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1681)
								if ((tmp20)){
									HX_STACK_LINE(1681)
									tmp21 = (ab->miny <= x->maxy);
								}
								else{
									HX_STACK_LINE(1681)
									tmp21 = false;
								}
								HX_STACK_LINE(1681)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1681)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1681)
								if ((tmp22)){
									HX_STACK_LINE(1681)
									tmp23 = (x->minx <= ab->maxx);
								}
								else{
									HX_STACK_LINE(1681)
									tmp23 = false;
								}
								HX_STACK_LINE(1681)
								if ((tmp23)){
									HX_STACK_LINE(1681)
									tmp18 = (ab->minx <= x->maxx);
								}
								else{
									HX_STACK_LINE(1681)
									tmp18 = false;
								}
							}
							HX_STACK_LINE(1681)
							if ((tmp18)){
								HX_STACK_LINE(1682)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1683)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1692)
								bool tmp19 = (lshape->id < shape->id);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1692)
								if ((tmp19)){
									HX_STACK_LINE(1693)
									id = lshape->id;
									HX_STACK_LINE(1694)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1697)
									id = shape->id;
									HX_STACK_LINE(1698)
									di = lshape->id;
								}
								HX_STACK_LINE(1708)
								int tmp20 = lshape->pairs->length;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1708)
								int tmp21 = shape->pairs->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1708)
								bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1708)
								::zpp_nape::shape::ZPP_Shape tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1708)
								if ((tmp22)){
									HX_STACK_LINE(1708)
									tmp23 = lshape;
								}
								else{
									HX_STACK_LINE(1708)
									tmp23 = shape;
								}
								HX_STACK_LINE(1708)
								::zpp_nape::shape::ZPP_Shape s = tmp23;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1709)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1710)
								{
									HX_STACK_LINE(1711)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp24 = s->pairs->head;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1711)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1712)
									while((true)){
										HX_STACK_LINE(1712)
										bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1712)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1712)
										if ((tmp26)){
											HX_STACK_LINE(1712)
											break;
										}
										HX_STACK_LINE(1713)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1714)
										{
											HX_STACK_LINE(1723)
											bool tmp27 = (px->id == id);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1723)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1723)
											if ((tmp27)){
												HX_STACK_LINE(1723)
												tmp28 = (px->di == di);
											}
											else{
												HX_STACK_LINE(1723)
												tmp28 = false;
											}
											HX_STACK_LINE(1723)
											if ((tmp28)){
												HX_STACK_LINE(1724)
												p = px;
												HX_STACK_LINE(1725)
												break;
											}
										}
										HX_STACK_LINE(1728)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1731)
								bool tmp24 = (p != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1731)
								if ((tmp24)){
									HX_STACK_LINE(1732)
									bool tmp25 = p->sleeping;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1732)
									if ((tmp25)){
										HX_STACK_LINE(1733)
										p->sleeping = false;
										HX_STACK_LINE(1734)
										::zpp_nape::space::ZPP_AABBPair tmp26 = this->pairs;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1734)
										p->next = tmp26;
										HX_STACK_LINE(1735)
										this->pairs = p;
										HX_STACK_LINE(1736)
										p->first = true;
									}
									HX_STACK_LINE(1738)
									continue;
								}
								HX_STACK_LINE(1740)
								{
									HX_STACK_LINE(1741)
									::zpp_nape::space::ZPP_AABBPair tmp25 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1741)
									bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1741)
									if ((tmp26)){
										HX_STACK_LINE(1742)
										::zpp_nape::space::ZPP_AABBPair tmp27 = ::zpp_nape::space::ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1742)
										p = tmp27;
									}
									else{
										HX_STACK_LINE(1748)
										::zpp_nape::space::ZPP_AABBPair tmp27 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1748)
										p = tmp27;
										HX_STACK_LINE(1749)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1750)
										p->next = null();
									}
									HX_STACK_LINE(1755)
									Dynamic();
								}
								HX_STACK_LINE(1757)
								p->n1 = leaf;
								HX_STACK_LINE(1758)
								p->n2 = node1;
								HX_STACK_LINE(1759)
								p->id = id;
								HX_STACK_LINE(1760)
								p->di = di;
								HX_STACK_LINE(1761)
								::zpp_nape::space::ZPP_AABBPair tmp25 = this->pairs;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1761)
								p->next = tmp25;
								HX_STACK_LINE(1762)
								this->pairs = p;
								HX_STACK_LINE(1763)
								p->first = true;
								HX_STACK_LINE(1764)
								{
									HX_STACK_LINE(1764)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1764)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1764)
									{
										HX_STACK_LINE(1764)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1764)
										{
											HX_STACK_LINE(1764)
											::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp27 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1764)
											bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1764)
											if ((tmp28)){
												HX_STACK_LINE(1764)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1764)
												ret = tmp29;
											}
											else{
												HX_STACK_LINE(1764)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1764)
												ret = tmp29;
												HX_STACK_LINE(1764)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1764)
												ret->next = null();
											}
											HX_STACK_LINE(1764)
											Dynamic();
										}
										HX_STACK_LINE(1764)
										ret->elt = p;
										HX_STACK_LINE(1764)
										tmp26 = ret;
									}
									HX_STACK_LINE(1764)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp26;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1764)
									temp->next = _this->head;
									HX_STACK_LINE(1764)
									_this->head = temp;
									HX_STACK_LINE(1764)
									_this->modified = true;
									HX_STACK_LINE(1764)
									(_this->length)++;
									HX_STACK_LINE(1764)
									p;
								}
								HX_STACK_LINE(1765)
								{
									HX_STACK_LINE(1765)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1765)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1765)
									{
										HX_STACK_LINE(1765)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1765)
										{
											HX_STACK_LINE(1765)
											::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp27 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1765)
											bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1765)
											if ((tmp28)){
												HX_STACK_LINE(1765)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1765)
												ret = tmp29;
											}
											else{
												HX_STACK_LINE(1765)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp29 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1765)
												ret = tmp29;
												HX_STACK_LINE(1765)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1765)
												ret->next = null();
											}
											HX_STACK_LINE(1765)
											Dynamic();
										}
										HX_STACK_LINE(1765)
										ret->elt = p;
										HX_STACK_LINE(1765)
										tmp26 = ret;
									}
									HX_STACK_LINE(1765)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp26;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1765)
									temp->next = _this->head;
									HX_STACK_LINE(1765)
									_this->head = temp;
									HX_STACK_LINE(1765)
									_this->modified = true;
									HX_STACK_LINE(1765)
									(_this->length)++;
									HX_STACK_LINE(1765)
									p;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1769)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1769)
						{
							HX_STACK_LINE(1769)
							::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1769)
							bool tmp17 = (x->miny <= ab->maxy);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1769)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1769)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1769)
							if ((tmp18)){
								HX_STACK_LINE(1769)
								tmp19 = (ab->miny <= x->maxy);
							}
							else{
								HX_STACK_LINE(1769)
								tmp19 = false;
							}
							HX_STACK_LINE(1769)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1769)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1769)
							if ((tmp20)){
								HX_STACK_LINE(1769)
								tmp21 = (x->minx <= ab->maxx);
							}
							else{
								HX_STACK_LINE(1769)
								tmp21 = false;
							}
							HX_STACK_LINE(1769)
							if ((tmp21)){
								HX_STACK_LINE(1769)
								tmp16 = (ab->minx <= x->maxx);
							}
							else{
								HX_STACK_LINE(1769)
								tmp16 = false;
							}
						}
						HX_STACK_LINE(1769)
						if ((tmp16)){
							HX_STACK_LINE(1770)
							bool tmp17 = (node1->child1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1770)
							if ((tmp17)){
								HX_STACK_LINE(1779)
								node1->child1->next = stack;
								HX_STACK_LINE(1780)
								stack = node1->child1;
							}
							HX_STACK_LINE(1782)
							bool tmp18 = (node1->child2 != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1782)
							if ((tmp18)){
								HX_STACK_LINE(1791)
								node1->child2->next = stack;
								HX_STACK_LINE(1792)
								stack = node1->child2;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1799)
		::zpp_nape::space::ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1800)
		::zpp_nape::space::ZPP_AABBPair tmp1 = this->pairs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1800)
		::zpp_nape::space::ZPP_AABBPair cur = tmp1;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1801)
		while((true)){
			HX_STACK_LINE(1801)
			bool tmp2 = (cur != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1801)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1801)
			if ((tmp3)){
				HX_STACK_LINE(1801)
				break;
			}
			HX_STACK_LINE(1810)
			bool tmp4 = cur->first;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1810)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1810)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1810)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1810)
			if ((tmp6)){
				HX_STACK_LINE(1810)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1810)
				{
					HX_STACK_LINE(1810)
					::zpp_nape::geom::ZPP_AABB tmp9 = cur->n1->aabb;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1810)
					::zpp_nape::geom::ZPP_AABB tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1810)
					::zpp_nape::geom::ZPP_AABB _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1810)
					::zpp_nape::geom::ZPP_AABB tmp11 = cur->n2->aabb;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1810)
					::zpp_nape::geom::ZPP_AABB tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1810)
					::zpp_nape::geom::ZPP_AABB x = tmp12;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1810)
					bool tmp13 = (x->miny <= _this->maxy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1810)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1810)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1810)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1810)
					bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1810)
					if ((tmp17)){
						HX_STACK_LINE(1810)
						bool tmp18 = (_this->miny <= x->maxy);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1810)
						tmp16 = tmp18;
					}
					else{
						HX_STACK_LINE(1810)
						tmp16 = false;
					}
					HX_STACK_LINE(1810)
					bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1810)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1810)
					bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1810)
					if ((tmp20)){
						HX_STACK_LINE(1810)
						bool tmp21 = (x->minx <= _this->maxx);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1810)
						tmp19 = tmp21;
					}
					else{
						HX_STACK_LINE(1810)
						tmp19 = false;
					}
					HX_STACK_LINE(1810)
					bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1810)
					if ((tmp21)){
						HX_STACK_LINE(1810)
						bool tmp22 = (_this->minx <= x->maxx);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1810)
						tmp8 = tmp22;
					}
					else{
						HX_STACK_LINE(1810)
						tmp8 = false;
					}
				}
				HX_STACK_LINE(1810)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1810)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(1810)
				tmp7 = false;
			}
			HX_STACK_LINE(1810)
			if ((tmp7)){
				HX_STACK_LINE(1811)
				bool tmp8 = (pre == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1811)
				if ((tmp8)){
					HX_STACK_LINE(1811)
					this->pairs = cur->next;
				}
				else{
					HX_STACK_LINE(1812)
					pre->next = cur->next;
				}
				HX_STACK_LINE(1813)
				{
					HX_STACK_LINE(1813)
					::zpp_nape::shape::ZPP_Shape tmp9 = cur->n1->shape;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1813)
					::zpp_nape::util::ZNPList_ZPP_AABBPair _this = tmp9->pairs;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1813)
					{
						HX_STACK_LINE(1813)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair pre1 = null();		HX_STACK_VAR(pre1,"pre1");
						HX_STACK_LINE(1813)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair cur1 = _this->head;		HX_STACK_VAR(cur1,"cur1");
						HX_STACK_LINE(1813)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1813)
						while((true)){
							HX_STACK_LINE(1813)
							bool tmp10 = (cur1 != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1813)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1813)
							if ((tmp11)){
								HX_STACK_LINE(1813)
								break;
							}
							HX_STACK_LINE(1813)
							bool tmp12 = (cur1->elt == cur);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1813)
							if ((tmp12)){
								HX_STACK_LINE(1813)
								{
									HX_STACK_LINE(1813)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1813)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1813)
									bool tmp13 = (pre1 == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1813)
									if ((tmp13)){
										HX_STACK_LINE(1813)
										old = _this->head;
										HX_STACK_LINE(1813)
										ret1 = old->next;
										HX_STACK_LINE(1813)
										_this->head = ret1;
										HX_STACK_LINE(1813)
										bool tmp14 = (_this->head == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1813)
										if ((tmp14)){
											HX_STACK_LINE(1813)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1813)
										old = pre1->next;
										HX_STACK_LINE(1813)
										ret1 = old->next;
										HX_STACK_LINE(1813)
										pre1->next = ret1;
										HX_STACK_LINE(1813)
										bool tmp14 = (ret1 == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1813)
										if ((tmp14)){
											HX_STACK_LINE(1813)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1813)
									{
										HX_STACK_LINE(1813)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1813)
										o->elt = null();
										HX_STACK_LINE(1813)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp14 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1813)
										o->next = tmp14;
										HX_STACK_LINE(1813)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1813)
									_this->modified = true;
									HX_STACK_LINE(1813)
									(_this->length)--;
									HX_STACK_LINE(1813)
									_this->pushmod = true;
									HX_STACK_LINE(1813)
									ret1;
								}
								HX_STACK_LINE(1813)
								ret = true;
								HX_STACK_LINE(1813)
								break;
							}
							HX_STACK_LINE(1813)
							pre1 = cur1;
							HX_STACK_LINE(1813)
							cur1 = cur1->next;
						}
						HX_STACK_LINE(1813)
						ret;
					}
				}
				HX_STACK_LINE(1814)
				{
					HX_STACK_LINE(1814)
					::zpp_nape::shape::ZPP_Shape tmp9 = cur->n2->shape;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1814)
					::zpp_nape::util::ZNPList_ZPP_AABBPair _this = tmp9->pairs;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1814)
					{
						HX_STACK_LINE(1814)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair pre1 = null();		HX_STACK_VAR(pre1,"pre1");
						HX_STACK_LINE(1814)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair cur1 = _this->head;		HX_STACK_VAR(cur1,"cur1");
						HX_STACK_LINE(1814)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1814)
						while((true)){
							HX_STACK_LINE(1814)
							bool tmp10 = (cur1 != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1814)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1814)
							if ((tmp11)){
								HX_STACK_LINE(1814)
								break;
							}
							HX_STACK_LINE(1814)
							bool tmp12 = (cur1->elt == cur);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1814)
							if ((tmp12)){
								HX_STACK_LINE(1814)
								{
									HX_STACK_LINE(1814)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1814)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1814)
									bool tmp13 = (pre1 == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1814)
									if ((tmp13)){
										HX_STACK_LINE(1814)
										old = _this->head;
										HX_STACK_LINE(1814)
										ret1 = old->next;
										HX_STACK_LINE(1814)
										_this->head = ret1;
										HX_STACK_LINE(1814)
										bool tmp14 = (_this->head == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1814)
										if ((tmp14)){
											HX_STACK_LINE(1814)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1814)
										old = pre1->next;
										HX_STACK_LINE(1814)
										ret1 = old->next;
										HX_STACK_LINE(1814)
										pre1->next = ret1;
										HX_STACK_LINE(1814)
										bool tmp14 = (ret1 == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1814)
										if ((tmp14)){
											HX_STACK_LINE(1814)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1814)
									{
										HX_STACK_LINE(1814)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1814)
										o->elt = null();
										HX_STACK_LINE(1814)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp14 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1814)
										o->next = tmp14;
										HX_STACK_LINE(1814)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1814)
									_this->modified = true;
									HX_STACK_LINE(1814)
									(_this->length)--;
									HX_STACK_LINE(1814)
									_this->pushmod = true;
									HX_STACK_LINE(1814)
									ret1;
								}
								HX_STACK_LINE(1814)
								ret = true;
								HX_STACK_LINE(1814)
								break;
							}
							HX_STACK_LINE(1814)
							pre1 = cur1;
							HX_STACK_LINE(1814)
							cur1 = cur1->next;
						}
						HX_STACK_LINE(1814)
						ret;
					}
				}
				HX_STACK_LINE(1815)
				::zpp_nape::space::ZPP_AABBPair nxt = cur->next;		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(1816)
				bool tmp9 = (cur->arb != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1816)
				if ((tmp9)){
					HX_STACK_LINE(1816)
					cur->arb->pair = null();
				}
				HX_STACK_LINE(1817)
				cur->arb = null();
				HX_STACK_LINE(1818)
				{
					HX_STACK_LINE(1819)
					::zpp_nape::space::ZPP_AABBPair o = cur;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1828)
					{
						HX_STACK_LINE(1828)
						::zpp_nape::space::ZPP_AABBNode tmp10 = o->n2 = null();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1828)
						o->n1 = tmp10;
						HX_STACK_LINE(1828)
						o->sleeping = false;
					}
					HX_STACK_LINE(1829)
					::zpp_nape::space::ZPP_AABBPair tmp10 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1829)
					o->next = tmp10;
					HX_STACK_LINE(1830)
					::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1835)
				cur = nxt;
				HX_STACK_LINE(1836)
				continue;
			}
			HX_STACK_LINE(1838)
			::zpp_nape::shape::ZPP_Shape tmp8 = cur->n1->shape;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1838)
			::zpp_nape::shape::ZPP_Shape s1 = tmp8;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(1839)
			::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(1840)
			::zpp_nape::shape::ZPP_Shape tmp9 = cur->n2->shape;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1840)
			::zpp_nape::shape::ZPP_Shape s2 = tmp9;		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(1841)
			::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(1842)
			bool tmp10 = cur->first;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1842)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1842)
			if ((tmp11)){
				HX_STACK_LINE(1843)
				bool tmp12 = b1->component->sleeping;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1843)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1843)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1843)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1843)
				if ((tmp14)){
					HX_STACK_LINE(1843)
					int tmp16 = b1->type;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1843)
					int tmp17 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1843)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1843)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1843)
					tmp15 = (tmp16 == tmp19);
				}
				else{
					HX_STACK_LINE(1843)
					tmp15 = true;
				}
				HX_STACK_LINE(1843)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1843)
				if ((tmp15)){
					HX_STACK_LINE(1843)
					bool tmp17 = b2->component->sleeping;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1843)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1843)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1843)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1843)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1843)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1843)
					if ((tmp22)){
						HX_STACK_LINE(1843)
						int tmp23 = b2->type;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1843)
						int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1843)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1843)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1843)
						tmp16 = (tmp23 == tmp26);
					}
					else{
						HX_STACK_LINE(1843)
						tmp16 = true;
					}
				}
				else{
					HX_STACK_LINE(1843)
					tmp16 = false;
				}
				HX_STACK_LINE(1843)
				if ((tmp16)){
					HX_STACK_LINE(1844)
					cur->sleeping = true;
					HX_STACK_LINE(1845)
					bool tmp17 = (pre == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1845)
					if ((tmp17)){
						HX_STACK_LINE(1845)
						this->pairs = cur->next;
					}
					else{
						HX_STACK_LINE(1846)
						pre->next = cur->next;
					}
					HX_STACK_LINE(1847)
					cur = cur->next;
					HX_STACK_LINE(1848)
					continue;
				}
			}
			HX_STACK_LINE(1851)
			cur->first = false;
			HX_STACK_LINE(1852)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1852)
			{
				HX_STACK_LINE(1852)
				::zpp_nape::geom::ZPP_AABB _this = s1->aabb;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1852)
				::zpp_nape::geom::ZPP_AABB x = s2->aabb;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1852)
				bool tmp13 = (x->miny <= _this->maxy);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1852)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1852)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1852)
				if ((tmp14)){
					HX_STACK_LINE(1852)
					tmp15 = (_this->miny <= x->maxy);
				}
				else{
					HX_STACK_LINE(1852)
					tmp15 = false;
				}
				HX_STACK_LINE(1852)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1852)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1852)
				if ((tmp16)){
					HX_STACK_LINE(1852)
					tmp17 = (x->minx <= _this->maxx);
				}
				else{
					HX_STACK_LINE(1852)
					tmp17 = false;
				}
				HX_STACK_LINE(1852)
				if ((tmp17)){
					HX_STACK_LINE(1852)
					tmp12 = (_this->minx <= x->maxx);
				}
				else{
					HX_STACK_LINE(1852)
					tmp12 = false;
				}
			}
			HX_STACK_LINE(1852)
			if ((tmp12)){
				HX_STACK_LINE(1861)
				::zpp_nape::dynamics::ZPP_Arbiter oarb = cur->arb;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(1862)
				bool tmp13 = discrete;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1862)
				if ((tmp13)){
					HX_STACK_LINE(1862)
					::zpp_nape::shape::ZPP_Shape tmp14 = s1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1862)
					::zpp_nape::shape::ZPP_Shape tmp15 = s2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1862)
					int tmp16 = b1->type;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1862)
					int tmp17 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1862)
					bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1862)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1862)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1862)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1862)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1862)
					if ((tmp21)){
						HX_STACK_LINE(1862)
						int tmp23 = b2->type;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1862)
						int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1862)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1862)
						bool tmp26 = (tmp23 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1862)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1862)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1862)
						tmp22 = !(tmp28);
					}
					else{
						HX_STACK_LINE(1862)
						tmp22 = true;
					}
					HX_STACK_LINE(1862)
					::zpp_nape::dynamics::ZPP_Arbiter tmp23 = cur->arb;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1862)
					::zpp_nape::dynamics::ZPP_Arbiter tmp24 = space->narrowPhase(tmp14,tmp15,tmp22,tmp23,false);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1862)
					cur->arb = tmp24;
				}
				else{
					HX_STACK_LINE(1863)
					::zpp_nape::shape::ZPP_Shape tmp14 = s1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1863)
					::zpp_nape::shape::ZPP_Shape tmp15 = s2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1863)
					int tmp16 = b1->type;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1863)
					int tmp17 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1863)
					bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1863)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1863)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1863)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1863)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1863)
					if ((tmp21)){
						HX_STACK_LINE(1863)
						int tmp23 = b2->type;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1863)
						int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1863)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1863)
						bool tmp26 = (tmp23 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1863)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1863)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1863)
						tmp22 = !(tmp28);
					}
					else{
						HX_STACK_LINE(1863)
						tmp22 = true;
					}
					HX_STACK_LINE(1863)
					::zpp_nape::dynamics::ZPP_Arbiter tmp23 = cur->arb;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1863)
					::zpp_nape::dynamics::ZPP_Arbiter tmp24 = space->continuousEvent(tmp14,tmp15,tmp22,tmp23,false);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1863)
					cur->arb = tmp24;
				}
				HX_STACK_LINE(1864)
				bool tmp14 = (cur->arb == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1864)
				if ((tmp14)){
					HX_STACK_LINE(1865)
					bool tmp15 = (oarb != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1865)
					if ((tmp15)){
						HX_STACK_LINE(1865)
						oarb->pair = null();
					}
				}
				else{
					HX_STACK_LINE(1867)
					cur->arb->pair = cur;
				}
			}
			HX_STACK_LINE(1878)
			pre = cur;
			HX_STACK_LINE(1879)
			cur = cur->next;
		}
	}
return null();
}


Void ZPP_DynAABBPhase_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","clear",0xb7b4bf0f,"zpp_nape.space.ZPP_DynAABBPhase.clear","zpp_nape/space/DynAABBPhase.hx",1882,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1883)
		while((true)){
			HX_STACK_LINE(1883)
			::zpp_nape::space::ZPP_AABBNode tmp = this->syncs;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1883)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1883)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1883)
			if ((tmp2)){
				HX_STACK_LINE(1883)
				break;
			}
			HX_STACK_LINE(1884)
			::zpp_nape::space::ZPP_AABBNode tmp3 = this->syncs;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1884)
			::zpp_nape::space::ZPP_AABBNode next = tmp3->snext;		HX_STACK_VAR(next,"next");
			HX_STACK_LINE(1885)
			::zpp_nape::space::ZPP_AABBNode tmp4 = this->syncs;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1885)
			tmp4->snext = null();
			HX_STACK_LINE(1886)
			::zpp_nape::space::ZPP_AABBNode tmp5 = this->syncs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1886)
			bool tmp6 = tmp5->first_sync;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1886)
			if ((tmp6)){
				HX_STACK_LINE(1887)
				::zpp_nape::space::ZPP_AABBNode tmp7 = this->syncs;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1887)
				tmp7->shape->node = null();
				HX_STACK_LINE(1888)
				::zpp_nape::space::ZPP_AABBNode tmp8 = this->syncs;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1888)
				tmp8->shape->removedFromSpace();
				HX_STACK_LINE(1889)
				::zpp_nape::space::ZPP_AABBNode tmp9 = this->syncs;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1889)
				tmp9->shape = null();
			}
			HX_STACK_LINE(1891)
			this->syncs = next;
		}
		HX_STACK_LINE(1893)
		while((true)){
			HX_STACK_LINE(1893)
			::zpp_nape::space::ZPP_AABBNode tmp = this->moves;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1893)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1893)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1893)
			if ((tmp2)){
				HX_STACK_LINE(1893)
				break;
			}
			HX_STACK_LINE(1894)
			::zpp_nape::space::ZPP_AABBNode tmp3 = this->moves;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1894)
			::zpp_nape::space::ZPP_AABBNode next = tmp3->mnext;		HX_STACK_VAR(next,"next");
			HX_STACK_LINE(1895)
			::zpp_nape::space::ZPP_AABBNode tmp4 = this->moves;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1895)
			tmp4->mnext = null();
			HX_STACK_LINE(1896)
			::zpp_nape::space::ZPP_AABBNode tmp5 = this->moves;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1896)
			bool tmp6 = tmp5->first_sync;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1896)
			if ((tmp6)){
				HX_STACK_LINE(1897)
				::zpp_nape::space::ZPP_AABBNode tmp7 = this->moves;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1897)
				tmp7->shape->node = null();
				HX_STACK_LINE(1898)
				::zpp_nape::space::ZPP_AABBNode tmp8 = this->moves;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1898)
				tmp8->shape->removedFromSpace();
				HX_STACK_LINE(1899)
				::zpp_nape::space::ZPP_AABBNode tmp9 = this->moves;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1899)
				tmp9->shape = null();
			}
			HX_STACK_LINE(1901)
			this->moves = next;
		}
		HX_STACK_LINE(1903)
		while((true)){
			HX_STACK_LINE(1903)
			::zpp_nape::space::ZPP_AABBPair tmp = this->pairs;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1903)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1903)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1903)
			if ((tmp2)){
				HX_STACK_LINE(1903)
				break;
			}
			HX_STACK_LINE(1904)
			::zpp_nape::space::ZPP_AABBPair tmp3 = this->pairs;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1904)
			::zpp_nape::space::ZPP_AABBPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1905)
			::zpp_nape::space::ZPP_AABBPair tmp4 = this->pairs;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1905)
			::zpp_nape::dynamics::ZPP_Arbiter tmp5 = tmp4->arb;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1905)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1905)
			if ((tmp6)){
				HX_STACK_LINE(1905)
				::zpp_nape::space::ZPP_AABBPair tmp7 = this->pairs;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1905)
				tmp7->arb->pair = null();
			}
			HX_STACK_LINE(1906)
			::zpp_nape::space::ZPP_AABBPair tmp7 = this->pairs;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1906)
			tmp7->arb = null();
			HX_STACK_LINE(1907)
			{
				HX_STACK_LINE(1907)
				::zpp_nape::space::ZPP_AABBPair tmp8 = this->pairs;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1907)
				::zpp_nape::shape::ZPP_Shape tmp9 = tmp8->n1->shape;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1907)
				::zpp_nape::util::ZNPList_ZPP_AABBPair _this = tmp9->pairs;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1907)
				::zpp_nape::space::ZPP_AABBPair tmp10 = this->pairs;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1907)
				::zpp_nape::space::ZPP_AABBPair obj = tmp10;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1907)
				{
					HX_STACK_LINE(1907)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1907)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1907)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1907)
					while((true)){
						HX_STACK_LINE(1907)
						bool tmp11 = (cur != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1907)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1907)
						if ((tmp12)){
							HX_STACK_LINE(1907)
							break;
						}
						HX_STACK_LINE(1907)
						bool tmp13 = (cur->elt == obj);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1907)
						if ((tmp13)){
							HX_STACK_LINE(1907)
							{
								HX_STACK_LINE(1907)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1907)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1907)
								bool tmp14 = (pre == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1907)
								if ((tmp14)){
									HX_STACK_LINE(1907)
									old = _this->head;
									HX_STACK_LINE(1907)
									ret1 = old->next;
									HX_STACK_LINE(1907)
									_this->head = ret1;
									HX_STACK_LINE(1907)
									bool tmp15 = (_this->head == null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1907)
									if ((tmp15)){
										HX_STACK_LINE(1907)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1907)
									old = pre->next;
									HX_STACK_LINE(1907)
									ret1 = old->next;
									HX_STACK_LINE(1907)
									pre->next = ret1;
									HX_STACK_LINE(1907)
									bool tmp15 = (ret1 == null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1907)
									if ((tmp15)){
										HX_STACK_LINE(1907)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1907)
								{
									HX_STACK_LINE(1907)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1907)
									o->elt = null();
									HX_STACK_LINE(1907)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp15 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1907)
									o->next = tmp15;
									HX_STACK_LINE(1907)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1907)
								_this->modified = true;
								HX_STACK_LINE(1907)
								(_this->length)--;
								HX_STACK_LINE(1907)
								_this->pushmod = true;
								HX_STACK_LINE(1907)
								ret1;
							}
							HX_STACK_LINE(1907)
							ret = true;
							HX_STACK_LINE(1907)
							break;
						}
						HX_STACK_LINE(1907)
						pre = cur;
						HX_STACK_LINE(1907)
						cur = cur->next;
					}
					HX_STACK_LINE(1907)
					ret;
				}
			}
			HX_STACK_LINE(1908)
			{
				HX_STACK_LINE(1908)
				::zpp_nape::space::ZPP_AABBPair tmp8 = this->pairs;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1908)
				::zpp_nape::shape::ZPP_Shape tmp9 = tmp8->n2->shape;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1908)
				::zpp_nape::util::ZNPList_ZPP_AABBPair _this = tmp9->pairs;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1908)
				::zpp_nape::space::ZPP_AABBPair tmp10 = this->pairs;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1908)
				::zpp_nape::space::ZPP_AABBPair obj = tmp10;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1908)
				{
					HX_STACK_LINE(1908)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1908)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1908)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1908)
					while((true)){
						HX_STACK_LINE(1908)
						bool tmp11 = (cur != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1908)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1908)
						if ((tmp12)){
							HX_STACK_LINE(1908)
							break;
						}
						HX_STACK_LINE(1908)
						bool tmp13 = (cur->elt == obj);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1908)
						if ((tmp13)){
							HX_STACK_LINE(1908)
							{
								HX_STACK_LINE(1908)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1908)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1908)
								bool tmp14 = (pre == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1908)
								if ((tmp14)){
									HX_STACK_LINE(1908)
									old = _this->head;
									HX_STACK_LINE(1908)
									ret1 = old->next;
									HX_STACK_LINE(1908)
									_this->head = ret1;
									HX_STACK_LINE(1908)
									bool tmp15 = (_this->head == null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1908)
									if ((tmp15)){
										HX_STACK_LINE(1908)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1908)
									old = pre->next;
									HX_STACK_LINE(1908)
									ret1 = old->next;
									HX_STACK_LINE(1908)
									pre->next = ret1;
									HX_STACK_LINE(1908)
									bool tmp15 = (ret1 == null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1908)
									if ((tmp15)){
										HX_STACK_LINE(1908)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1908)
								{
									HX_STACK_LINE(1908)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1908)
									o->elt = null();
									HX_STACK_LINE(1908)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp15 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1908)
									o->next = tmp15;
									HX_STACK_LINE(1908)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1908)
								_this->modified = true;
								HX_STACK_LINE(1908)
								(_this->length)--;
								HX_STACK_LINE(1908)
								_this->pushmod = true;
								HX_STACK_LINE(1908)
								ret1;
							}
							HX_STACK_LINE(1908)
							ret = true;
							HX_STACK_LINE(1908)
							break;
						}
						HX_STACK_LINE(1908)
						pre = cur;
						HX_STACK_LINE(1908)
						cur = cur->next;
					}
					HX_STACK_LINE(1908)
					ret;
				}
			}
			HX_STACK_LINE(1909)
			{
				HX_STACK_LINE(1910)
				::zpp_nape::space::ZPP_AABBPair tmp8 = this->pairs;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1910)
				::zpp_nape::space::ZPP_AABBPair o = tmp8;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1919)
				{
					HX_STACK_LINE(1919)
					::zpp_nape::space::ZPP_AABBNode tmp9 = o->n2 = null();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1919)
					o->n1 = tmp9;
					HX_STACK_LINE(1919)
					o->sleeping = false;
				}
				HX_STACK_LINE(1920)
				::zpp_nape::space::ZPP_AABBPair tmp9 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1920)
				o->next = tmp9;
				HX_STACK_LINE(1921)
				::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1926)
			this->pairs = nxt;
		}
		HX_STACK_LINE(1928)
		::zpp_nape::space::ZPP_AABBTree tmp = this->dtree;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1928)
		tmp->clear();
		HX_STACK_LINE(1929)
		::zpp_nape::space::ZPP_AABBTree tmp1 = this->stree;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1929)
		tmp1->clear();
	}
return null();
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","shapesUnderPoint",0x4c326aa8,"zpp_nape.space.ZPP_DynAABBPhase.shapesUnderPoint","zpp_nape/space/DynAABBPhase.hx",1932,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(1933)
	this->sync_broadphase();
	HX_STACK_LINE(1934)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1934)
	{
		HX_STACK_LINE(1934)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(1934)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1934)
		{
			HX_STACK_LINE(1934)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1934)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1934)
			if ((tmp2)){
				HX_STACK_LINE(1934)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1934)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(1934)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1934)
				ret = tmp3;
				HX_STACK_LINE(1934)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1934)
				ret->next = null();
			}
			HX_STACK_LINE(1934)
			ret->weak = false;
		}
		HX_STACK_LINE(1934)
		ret->_immutable = immutable;
		HX_STACK_LINE(1934)
		{
			HX_STACK_LINE(1934)
			ret->x = x;
			HX_STACK_LINE(1934)
			ret->y = y;
			HX_STACK_LINE(1934)
			{
			}
		}
		HX_STACK_LINE(1934)
		tmp = ret;
	}
	HX_STACK_LINE(1934)
	::zpp_nape::geom::ZPP_Vec2 v = tmp;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(1935)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1935)
	::nape::shape::ShapeList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1935)
	if ((tmp1)){
		HX_STACK_LINE(1935)
		tmp2 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(1935)
		tmp2 = output;
	}
	HX_STACK_LINE(1935)
	::nape::shape::ShapeList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1937)
	{
		HX_STACK_LINE(1938)
		::zpp_nape::space::ZPP_AABBTree tmp3 = this->stree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1938)
		::zpp_nape::space::ZPP_AABBNode tmp4 = tmp3->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1938)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1938)
		if ((tmp5)){
			HX_STACK_LINE(1939)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp6 = this->treeStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1939)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1939)
			if ((tmp7)){
				HX_STACK_LINE(1939)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1939)
				this->treeStack = tmp8;
			}
			HX_STACK_LINE(1940)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1940)
			::zpp_nape::space::ZPP_AABBTree tmp9 = this->stree;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1940)
			::zpp_nape::space::ZPP_AABBNode tmp10 = tmp9->root;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1940)
			tmp8->add(tmp10);
			HX_STACK_LINE(1941)
			while((true)){
				HX_STACK_LINE(1941)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp11 = this->treeStack;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1941)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1941)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1941)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1941)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1941)
				if ((tmp15)){
					HX_STACK_LINE(1941)
					break;
				}
				HX_STACK_LINE(1942)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp16 = this->treeStack;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1942)
				::zpp_nape::space::ZPP_AABBNode tmp17 = tmp16->pop_unsafe();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1942)
				::zpp_nape::space::ZPP_AABBNode node = tmp17;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(1951)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1951)
				{
					HX_STACK_LINE(1951)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1951)
					bool tmp19 = (v->x >= _this->minx);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1951)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1951)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1951)
					if ((tmp20)){
						HX_STACK_LINE(1951)
						tmp21 = (v->x <= _this->maxx);
					}
					else{
						HX_STACK_LINE(1951)
						tmp21 = false;
					}
					HX_STACK_LINE(1951)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1951)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1951)
					if ((tmp22)){
						HX_STACK_LINE(1951)
						tmp23 = (v->y >= _this->miny);
					}
					else{
						HX_STACK_LINE(1951)
						tmp23 = false;
					}
					HX_STACK_LINE(1951)
					if ((tmp23)){
						HX_STACK_LINE(1951)
						tmp18 = (v->y <= _this->maxy);
					}
					else{
						HX_STACK_LINE(1951)
						tmp18 = false;
					}
				}
				HX_STACK_LINE(1951)
				if ((tmp18)){
					HX_STACK_LINE(1952)
					bool tmp19 = (node->child1 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1952)
					if ((tmp19)){
						HX_STACK_LINE(1954)
						bool tmp20 = (filter == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1954)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1954)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1954)
						if ((tmp21)){
							HX_STACK_LINE(1954)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp23 = node->shape->filter;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1954)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1954)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp24;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1954)
							int tmp25 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1954)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1954)
							bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1954)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1954)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1954)
							if ((tmp29)){
								HX_STACK_LINE(1954)
								int tmp30 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1954)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1954)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1954)
								tmp22 = (tmp32 != (int)0);
							}
							else{
								HX_STACK_LINE(1954)
								tmp22 = false;
							}
						}
						else{
							HX_STACK_LINE(1954)
							tmp22 = true;
						}
						HX_STACK_LINE(1954)
						if ((tmp22)){
							HX_STACK_LINE(1955)
							int tmp23 = node->shape->type;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1955)
							int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1955)
							bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1955)
							if ((tmp25)){
								HX_STACK_LINE(1956)
								::zpp_nape::shape::ZPP_Circle tmp26 = node->shape->circle;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1956)
								::zpp_nape::geom::ZPP_Vec2 tmp27 = v;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1956)
								bool tmp28 = ::zpp_nape::geom::ZPP_Collide_obj::circleContains(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1956)
								if ((tmp28)){
									HX_STACK_LINE(1956)
									::nape::shape::Shape tmp29 = node->shape->outer;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1956)
									ret->push(tmp29);
								}
							}
							else{
								HX_STACK_LINE(1959)
								::zpp_nape::shape::ZPP_Polygon tmp26 = node->shape->polygon;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1959)
								::zpp_nape::geom::ZPP_Vec2 tmp27 = v;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1959)
								bool tmp28 = ::zpp_nape::geom::ZPP_Collide_obj::polyContains(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1959)
								if ((tmp28)){
									HX_STACK_LINE(1959)
									::nape::shape::Shape tmp29 = node->shape->outer;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1959)
									ret->push(tmp29);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1965)
						bool tmp20 = (node->child1 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1965)
						if ((tmp20)){
							HX_STACK_LINE(1965)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp21 = this->treeStack;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1965)
							::zpp_nape::space::ZPP_AABBNode tmp22 = node->child1;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1965)
							tmp21->add(tmp22);
						}
						HX_STACK_LINE(1966)
						bool tmp21 = (node->child2 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1966)
						if ((tmp21)){
							HX_STACK_LINE(1966)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1966)
							::zpp_nape::space::ZPP_AABBNode tmp23 = node->child2;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1966)
							tmp22->add(tmp23);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(1974)
	{
		HX_STACK_LINE(1975)
		::zpp_nape::space::ZPP_AABBTree tmp3 = this->dtree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1975)
		::zpp_nape::space::ZPP_AABBNode tmp4 = tmp3->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1975)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1975)
		if ((tmp5)){
			HX_STACK_LINE(1976)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp6 = this->treeStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1976)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1976)
			if ((tmp7)){
				HX_STACK_LINE(1976)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1976)
				this->treeStack = tmp8;
			}
			HX_STACK_LINE(1977)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1977)
			::zpp_nape::space::ZPP_AABBTree tmp9 = this->dtree;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1977)
			::zpp_nape::space::ZPP_AABBNode tmp10 = tmp9->root;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1977)
			tmp8->add(tmp10);
			HX_STACK_LINE(1978)
			while((true)){
				HX_STACK_LINE(1978)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp11 = this->treeStack;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1978)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1978)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1978)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1978)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1978)
				if ((tmp15)){
					HX_STACK_LINE(1978)
					break;
				}
				HX_STACK_LINE(1979)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp16 = this->treeStack;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1979)
				::zpp_nape::space::ZPP_AABBNode tmp17 = tmp16->pop_unsafe();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1979)
				::zpp_nape::space::ZPP_AABBNode node = tmp17;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(1988)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1988)
				{
					HX_STACK_LINE(1988)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1988)
					bool tmp19 = (v->x >= _this->minx);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1988)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1988)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1988)
					if ((tmp20)){
						HX_STACK_LINE(1988)
						tmp21 = (v->x <= _this->maxx);
					}
					else{
						HX_STACK_LINE(1988)
						tmp21 = false;
					}
					HX_STACK_LINE(1988)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1988)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1988)
					if ((tmp22)){
						HX_STACK_LINE(1988)
						tmp23 = (v->y >= _this->miny);
					}
					else{
						HX_STACK_LINE(1988)
						tmp23 = false;
					}
					HX_STACK_LINE(1988)
					if ((tmp23)){
						HX_STACK_LINE(1988)
						tmp18 = (v->y <= _this->maxy);
					}
					else{
						HX_STACK_LINE(1988)
						tmp18 = false;
					}
				}
				HX_STACK_LINE(1988)
				if ((tmp18)){
					HX_STACK_LINE(1989)
					bool tmp19 = (node->child1 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1989)
					if ((tmp19)){
						HX_STACK_LINE(1991)
						bool tmp20 = (filter == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1991)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1991)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1991)
						if ((tmp21)){
							HX_STACK_LINE(1991)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp23 = node->shape->filter;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1991)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1991)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp24;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1991)
							int tmp25 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1991)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1991)
							bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1991)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1991)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1991)
							if ((tmp29)){
								HX_STACK_LINE(1991)
								int tmp30 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1991)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1991)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1991)
								tmp22 = (tmp32 != (int)0);
							}
							else{
								HX_STACK_LINE(1991)
								tmp22 = false;
							}
						}
						else{
							HX_STACK_LINE(1991)
							tmp22 = true;
						}
						HX_STACK_LINE(1991)
						if ((tmp22)){
							HX_STACK_LINE(1992)
							int tmp23 = node->shape->type;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1992)
							int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1992)
							bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1992)
							if ((tmp25)){
								HX_STACK_LINE(1993)
								::zpp_nape::shape::ZPP_Circle tmp26 = node->shape->circle;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1993)
								::zpp_nape::geom::ZPP_Vec2 tmp27 = v;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1993)
								bool tmp28 = ::zpp_nape::geom::ZPP_Collide_obj::circleContains(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1993)
								if ((tmp28)){
									HX_STACK_LINE(1993)
									::nape::shape::Shape tmp29 = node->shape->outer;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1993)
									ret->push(tmp29);
								}
							}
							else{
								HX_STACK_LINE(1996)
								::zpp_nape::shape::ZPP_Polygon tmp26 = node->shape->polygon;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1996)
								::zpp_nape::geom::ZPP_Vec2 tmp27 = v;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1996)
								bool tmp28 = ::zpp_nape::geom::ZPP_Collide_obj::polyContains(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1996)
								if ((tmp28)){
									HX_STACK_LINE(1996)
									::nape::shape::Shape tmp29 = node->shape->outer;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1996)
									ret->push(tmp29);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2002)
						bool tmp20 = (node->child1 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2002)
						if ((tmp20)){
							HX_STACK_LINE(2002)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp21 = this->treeStack;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2002)
							::zpp_nape::space::ZPP_AABBNode tmp22 = node->child1;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2002)
							tmp21->add(tmp22);
						}
						HX_STACK_LINE(2003)
						bool tmp21 = (node->child2 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2003)
						if ((tmp21)){
							HX_STACK_LINE(2003)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2003)
							::zpp_nape::space::ZPP_AABBNode tmp23 = node->child2;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2003)
							tmp22->add(tmp23);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2010)
	{
		HX_STACK_LINE(2011)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2020)
		{
			HX_STACK_LINE(2020)
			bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2020)
			if ((tmp3)){
				HX_STACK_LINE(2020)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(2020)
				o->outer = null();
			}
			HX_STACK_LINE(2020)
			o->_isimmutable = null();
			HX_STACK_LINE(2020)
			o->_validate = null();
			HX_STACK_LINE(2020)
			o->_invalidate = null();
		}
		HX_STACK_LINE(2021)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2021)
		o->next = tmp3;
		HX_STACK_LINE(2022)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2027)
	::nape::shape::ShapeList tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2027)
	return tmp3;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","bodiesUnderPoint",0x84a59976,"zpp_nape.space.ZPP_DynAABBPhase.bodiesUnderPoint","zpp_nape/space/DynAABBPhase.hx",2029,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2030)
	this->sync_broadphase();
	HX_STACK_LINE(2031)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2031)
	{
		HX_STACK_LINE(2031)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(2031)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2031)
		{
			HX_STACK_LINE(2031)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2031)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2031)
			if ((tmp2)){
				HX_STACK_LINE(2031)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2031)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(2031)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2031)
				ret = tmp3;
				HX_STACK_LINE(2031)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2031)
				ret->next = null();
			}
			HX_STACK_LINE(2031)
			ret->weak = false;
		}
		HX_STACK_LINE(2031)
		ret->_immutable = immutable;
		HX_STACK_LINE(2031)
		{
			HX_STACK_LINE(2031)
			ret->x = x;
			HX_STACK_LINE(2031)
			ret->y = y;
			HX_STACK_LINE(2031)
			{
			}
		}
		HX_STACK_LINE(2031)
		tmp = ret;
	}
	HX_STACK_LINE(2031)
	::zpp_nape::geom::ZPP_Vec2 v = tmp;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(2032)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2032)
	::nape::phys::BodyList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2032)
	if ((tmp1)){
		HX_STACK_LINE(2032)
		tmp2 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(2032)
		tmp2 = output;
	}
	HX_STACK_LINE(2032)
	::nape::phys::BodyList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2034)
	{
		HX_STACK_LINE(2035)
		::zpp_nape::space::ZPP_AABBTree tmp3 = this->stree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2035)
		::zpp_nape::space::ZPP_AABBNode tmp4 = tmp3->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2035)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2035)
		if ((tmp5)){
			HX_STACK_LINE(2036)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp6 = this->treeStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2036)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2036)
			if ((tmp7)){
				HX_STACK_LINE(2036)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2036)
				this->treeStack = tmp8;
			}
			HX_STACK_LINE(2037)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2037)
			::zpp_nape::space::ZPP_AABBTree tmp9 = this->stree;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2037)
			::zpp_nape::space::ZPP_AABBNode tmp10 = tmp9->root;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2037)
			tmp8->add(tmp10);
			HX_STACK_LINE(2038)
			while((true)){
				HX_STACK_LINE(2038)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp11 = this->treeStack;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2038)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2038)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2038)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2038)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2038)
				if ((tmp15)){
					HX_STACK_LINE(2038)
					break;
				}
				HX_STACK_LINE(2039)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp16 = this->treeStack;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2039)
				::zpp_nape::space::ZPP_AABBNode tmp17 = tmp16->pop_unsafe();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2039)
				::zpp_nape::space::ZPP_AABBNode node = tmp17;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2048)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2048)
				{
					HX_STACK_LINE(2048)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2048)
					bool tmp19 = (v->x >= _this->minx);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2048)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2048)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2048)
					if ((tmp20)){
						HX_STACK_LINE(2048)
						tmp21 = (v->x <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2048)
						tmp21 = false;
					}
					HX_STACK_LINE(2048)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2048)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2048)
					if ((tmp22)){
						HX_STACK_LINE(2048)
						tmp23 = (v->y >= _this->miny);
					}
					else{
						HX_STACK_LINE(2048)
						tmp23 = false;
					}
					HX_STACK_LINE(2048)
					if ((tmp23)){
						HX_STACK_LINE(2048)
						tmp18 = (v->y <= _this->maxy);
					}
					else{
						HX_STACK_LINE(2048)
						tmp18 = false;
					}
				}
				HX_STACK_LINE(2048)
				if ((tmp18)){
					HX_STACK_LINE(2049)
					bool tmp19 = (node->child1 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2049)
					if ((tmp19)){
						HX_STACK_LINE(2051)
						::zpp_nape::phys::ZPP_Body tmp20 = node->shape->body;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2051)
						::nape::phys::Body body = tmp20->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2052)
						::nape::phys::Body tmp21 = body;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2052)
						bool tmp22 = ret->has(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2052)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2052)
						if ((tmp23)){
							HX_STACK_LINE(2053)
							bool tmp24 = (filter == null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2053)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2053)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2053)
							if ((tmp25)){
								HX_STACK_LINE(2053)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = node->shape->filter;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2053)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2053)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp28;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2053)
								int tmp29 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2053)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2053)
								bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2053)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2053)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2053)
								if ((tmp33)){
									HX_STACK_LINE(2053)
									int tmp34 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2053)
									int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2053)
									int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2053)
									tmp26 = (tmp36 != (int)0);
								}
								else{
									HX_STACK_LINE(2053)
									tmp26 = false;
								}
							}
							else{
								HX_STACK_LINE(2053)
								tmp26 = true;
							}
							HX_STACK_LINE(2053)
							if ((tmp26)){
								HX_STACK_LINE(2054)
								int tmp27 = node->shape->type;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2054)
								int tmp28 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2054)
								bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2054)
								if ((tmp29)){
									HX_STACK_LINE(2055)
									::zpp_nape::shape::ZPP_Circle tmp30 = node->shape->circle;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2055)
									::zpp_nape::geom::ZPP_Vec2 tmp31 = v;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2055)
									bool tmp32 = ::zpp_nape::geom::ZPP_Collide_obj::circleContains(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2055)
									if ((tmp32)){
										HX_STACK_LINE(2055)
										::nape::phys::Body tmp33 = body;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2055)
										ret->push(tmp33);
									}
								}
								else{
									HX_STACK_LINE(2058)
									::zpp_nape::shape::ZPP_Polygon tmp30 = node->shape->polygon;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2058)
									::zpp_nape::geom::ZPP_Vec2 tmp31 = v;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2058)
									bool tmp32 = ::zpp_nape::geom::ZPP_Collide_obj::polyContains(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2058)
									if ((tmp32)){
										HX_STACK_LINE(2058)
										::nape::phys::Body tmp33 = body;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2058)
										ret->push(tmp33);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2065)
						bool tmp20 = (node->child1 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2065)
						if ((tmp20)){
							HX_STACK_LINE(2065)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp21 = this->treeStack;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2065)
							::zpp_nape::space::ZPP_AABBNode tmp22 = node->child1;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2065)
							tmp21->add(tmp22);
						}
						HX_STACK_LINE(2066)
						bool tmp21 = (node->child2 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2066)
						if ((tmp21)){
							HX_STACK_LINE(2066)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2066)
							::zpp_nape::space::ZPP_AABBNode tmp23 = node->child2;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2066)
							tmp22->add(tmp23);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2074)
	{
		HX_STACK_LINE(2075)
		::zpp_nape::space::ZPP_AABBTree tmp3 = this->dtree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2075)
		::zpp_nape::space::ZPP_AABBNode tmp4 = tmp3->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2075)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2075)
		if ((tmp5)){
			HX_STACK_LINE(2076)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp6 = this->treeStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2076)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2076)
			if ((tmp7)){
				HX_STACK_LINE(2076)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2076)
				this->treeStack = tmp8;
			}
			HX_STACK_LINE(2077)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2077)
			::zpp_nape::space::ZPP_AABBTree tmp9 = this->dtree;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2077)
			::zpp_nape::space::ZPP_AABBNode tmp10 = tmp9->root;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2077)
			tmp8->add(tmp10);
			HX_STACK_LINE(2078)
			while((true)){
				HX_STACK_LINE(2078)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp11 = this->treeStack;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2078)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2078)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2078)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2078)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2078)
				if ((tmp15)){
					HX_STACK_LINE(2078)
					break;
				}
				HX_STACK_LINE(2079)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp16 = this->treeStack;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2079)
				::zpp_nape::space::ZPP_AABBNode tmp17 = tmp16->pop_unsafe();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2079)
				::zpp_nape::space::ZPP_AABBNode node = tmp17;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2088)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2088)
				{
					HX_STACK_LINE(2088)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2088)
					bool tmp19 = (v->x >= _this->minx);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2088)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2088)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2088)
					if ((tmp20)){
						HX_STACK_LINE(2088)
						tmp21 = (v->x <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2088)
						tmp21 = false;
					}
					HX_STACK_LINE(2088)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2088)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2088)
					if ((tmp22)){
						HX_STACK_LINE(2088)
						tmp23 = (v->y >= _this->miny);
					}
					else{
						HX_STACK_LINE(2088)
						tmp23 = false;
					}
					HX_STACK_LINE(2088)
					if ((tmp23)){
						HX_STACK_LINE(2088)
						tmp18 = (v->y <= _this->maxy);
					}
					else{
						HX_STACK_LINE(2088)
						tmp18 = false;
					}
				}
				HX_STACK_LINE(2088)
				if ((tmp18)){
					HX_STACK_LINE(2089)
					bool tmp19 = (node->child1 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2089)
					if ((tmp19)){
						HX_STACK_LINE(2091)
						::zpp_nape::phys::ZPP_Body tmp20 = node->shape->body;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2091)
						::nape::phys::Body body = tmp20->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2092)
						::nape::phys::Body tmp21 = body;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2092)
						bool tmp22 = ret->has(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2092)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2092)
						if ((tmp23)){
							HX_STACK_LINE(2093)
							bool tmp24 = (filter == null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2093)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2093)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2093)
							if ((tmp25)){
								HX_STACK_LINE(2093)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = node->shape->filter;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2093)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2093)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp28;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2093)
								int tmp29 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2093)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2093)
								bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2093)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2093)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2093)
								if ((tmp33)){
									HX_STACK_LINE(2093)
									int tmp34 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2093)
									int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2093)
									int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2093)
									tmp26 = (tmp36 != (int)0);
								}
								else{
									HX_STACK_LINE(2093)
									tmp26 = false;
								}
							}
							else{
								HX_STACK_LINE(2093)
								tmp26 = true;
							}
							HX_STACK_LINE(2093)
							if ((tmp26)){
								HX_STACK_LINE(2094)
								int tmp27 = node->shape->type;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2094)
								int tmp28 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2094)
								bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2094)
								if ((tmp29)){
									HX_STACK_LINE(2095)
									::zpp_nape::shape::ZPP_Circle tmp30 = node->shape->circle;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2095)
									::zpp_nape::geom::ZPP_Vec2 tmp31 = v;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2095)
									bool tmp32 = ::zpp_nape::geom::ZPP_Collide_obj::circleContains(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2095)
									if ((tmp32)){
										HX_STACK_LINE(2095)
										::nape::phys::Body tmp33 = body;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2095)
										ret->push(tmp33);
									}
								}
								else{
									HX_STACK_LINE(2098)
									::zpp_nape::shape::ZPP_Polygon tmp30 = node->shape->polygon;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2098)
									::zpp_nape::geom::ZPP_Vec2 tmp31 = v;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2098)
									bool tmp32 = ::zpp_nape::geom::ZPP_Collide_obj::polyContains(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2098)
									if ((tmp32)){
										HX_STACK_LINE(2098)
										::nape::phys::Body tmp33 = body;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2098)
										ret->push(tmp33);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2105)
						bool tmp20 = (node->child1 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2105)
						if ((tmp20)){
							HX_STACK_LINE(2105)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp21 = this->treeStack;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2105)
							::zpp_nape::space::ZPP_AABBNode tmp22 = node->child1;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2105)
							tmp21->add(tmp22);
						}
						HX_STACK_LINE(2106)
						bool tmp21 = (node->child2 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2106)
						if ((tmp21)){
							HX_STACK_LINE(2106)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2106)
							::zpp_nape::space::ZPP_AABBNode tmp23 = node->child2;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2106)
							tmp22->add(tmp23);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2113)
	{
		HX_STACK_LINE(2114)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2123)
		{
			HX_STACK_LINE(2123)
			bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2123)
			if ((tmp3)){
				HX_STACK_LINE(2123)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(2123)
				o->outer = null();
			}
			HX_STACK_LINE(2123)
			o->_isimmutable = null();
			HX_STACK_LINE(2123)
			o->_validate = null();
			HX_STACK_LINE(2123)
			o->_invalidate = null();
		}
		HX_STACK_LINE(2124)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2124)
		o->next = tmp3;
		HX_STACK_LINE(2125)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2130)
	::nape::phys::BodyList tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2130)
	return tmp3;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","shapesInAABB",0x4f3c6395,"zpp_nape.space.ZPP_DynAABBPhase.shapesInAABB","zpp_nape/space/DynAABBPhase.hx",2133,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2134)
	this->sync_broadphase();
	HX_STACK_LINE(2135)
	::zpp_nape::geom::ZPP_AABB tmp = aabb;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2135)
	this->updateAABBShape(tmp);
	HX_STACK_LINE(2136)
	::nape::shape::Shape tmp1 = this->aabbShape;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2136)
	::zpp_nape::geom::ZPP_AABB tmp2 = tmp1->zpp_inner->aabb;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2136)
	::zpp_nape::geom::ZPP_AABB ab = tmp2;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2137)
	bool tmp3 = (output == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2137)
	::nape::shape::ShapeList tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2137)
	if ((tmp3)){
		HX_STACK_LINE(2137)
		tmp4 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(2137)
		tmp4 = output;
	}
	HX_STACK_LINE(2137)
	::nape::shape::ShapeList ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2139)
	{
		HX_STACK_LINE(2140)
		::zpp_nape::space::ZPP_AABBTree tmp5 = this->stree;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2140)
		::zpp_nape::space::ZPP_AABBNode tmp6 = tmp5->root;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2140)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2140)
		if ((tmp7)){
			HX_STACK_LINE(2141)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2141)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2141)
			if ((tmp9)){
				HX_STACK_LINE(2141)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2141)
				this->treeStack = tmp10;
			}
			HX_STACK_LINE(2142)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = this->treeStack;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2142)
			::zpp_nape::space::ZPP_AABBTree tmp11 = this->stree;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2142)
			::zpp_nape::space::ZPP_AABBNode tmp12 = tmp11->root;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2142)
			tmp10->add(tmp12);
			HX_STACK_LINE(2143)
			while((true)){
				HX_STACK_LINE(2143)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp13 = this->treeStack;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2143)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp14 = tmp13->head;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2143)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2143)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2143)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2143)
				if ((tmp17)){
					HX_STACK_LINE(2143)
					break;
				}
				HX_STACK_LINE(2144)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp18 = this->treeStack;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2144)
				::zpp_nape::space::ZPP_AABBNode tmp19 = tmp18->pop_unsafe();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2144)
				::zpp_nape::space::ZPP_AABBNode node = tmp19;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2153)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2153)
				{
					HX_STACK_LINE(2153)
					::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(2153)
					bool tmp21 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2153)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2153)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2153)
					if ((tmp22)){
						HX_STACK_LINE(2153)
						tmp23 = (x->miny >= ab->miny);
					}
					else{
						HX_STACK_LINE(2153)
						tmp23 = false;
					}
					HX_STACK_LINE(2153)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2153)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2153)
					if ((tmp24)){
						HX_STACK_LINE(2153)
						tmp25 = (x->maxx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2153)
						tmp25 = false;
					}
					HX_STACK_LINE(2153)
					if ((tmp25)){
						HX_STACK_LINE(2153)
						tmp20 = (x->maxy <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2153)
						tmp20 = false;
					}
				}
				HX_STACK_LINE(2153)
				if ((tmp20)){
					HX_STACK_LINE(2154)
					bool tmp21 = (node->child1 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2154)
					if ((tmp21)){
						HX_STACK_LINE(2156)
						bool tmp22 = (filter == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2156)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2156)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2156)
						if ((tmp23)){
							HX_STACK_LINE(2156)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp25 = node->shape->filter;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2156)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2156)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp26;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2156)
							int tmp27 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2156)
							int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2156)
							bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2156)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2156)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2156)
							if ((tmp31)){
								HX_STACK_LINE(2156)
								int tmp32 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2156)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2156)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2156)
								tmp24 = (tmp34 != (int)0);
							}
							else{
								HX_STACK_LINE(2156)
								tmp24 = false;
							}
						}
						else{
							HX_STACK_LINE(2156)
							tmp24 = true;
						}
						HX_STACK_LINE(2156)
						if ((tmp24)){
							HX_STACK_LINE(2157)
							::nape::shape::Shape tmp25 = node->shape->outer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2157)
							ret->push(tmp25);
						}
					}
					else{
						HX_STACK_LINE(2162)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2162)
						bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2162)
						if ((tmp23)){
							HX_STACK_LINE(2163)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2163)
							this->treeStack2 = tmp24;
						}
						HX_STACK_LINE(2165)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = this->treeStack2;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2165)
						::zpp_nape::space::ZPP_AABBNode tmp25 = node;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2165)
						tmp24->add(tmp25);
						HX_STACK_LINE(2166)
						while((true)){
							HX_STACK_LINE(2166)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = this->treeStack2;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2166)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp27 = tmp26->head;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2166)
							bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2166)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2166)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2166)
							if ((tmp30)){
								HX_STACK_LINE(2166)
								break;
							}
							HX_STACK_LINE(2167)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp31 = this->treeStack2;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2167)
							::zpp_nape::space::ZPP_AABBNode tmp32 = tmp31->pop_unsafe();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2167)
							::zpp_nape::space::ZPP_AABBNode node1 = tmp32;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(2168)
							bool tmp33 = (node1->child1 == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2168)
							if ((tmp33)){
								HX_STACK_LINE(2169)
								bool tmp34 = (filter == null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2169)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2169)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2169)
								if ((tmp35)){
									HX_STACK_LINE(2169)
									::zpp_nape::dynamics::ZPP_InteractionFilter tmp37 = node1->shape->filter;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2169)
									::zpp_nape::dynamics::ZPP_InteractionFilter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2169)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp38;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2169)
									int tmp39 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2169)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2169)
									bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2169)
									bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(2169)
									bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(2169)
									if ((tmp43)){
										HX_STACK_LINE(2169)
										int tmp44 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(2169)
										int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(2169)
										int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(2169)
										tmp36 = (tmp46 != (int)0);
									}
									else{
										HX_STACK_LINE(2169)
										tmp36 = false;
									}
								}
								else{
									HX_STACK_LINE(2169)
									tmp36 = true;
								}
								HX_STACK_LINE(2169)
								if ((tmp36)){
									HX_STACK_LINE(2170)
									::nape::shape::Shape tmp37 = node1->shape->outer;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2170)
									ret->push(tmp37);
								}
							}
							else{
								HX_STACK_LINE(2174)
								bool tmp34 = (node1->child1 != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2174)
								if ((tmp34)){
									HX_STACK_LINE(2174)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp35 = this->treeStack2;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2174)
									::zpp_nape::space::ZPP_AABBNode tmp36 = node1->child1;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2174)
									tmp35->add(tmp36);
								}
								HX_STACK_LINE(2175)
								bool tmp35 = (node1->child2 != null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2175)
								if ((tmp35)){
									HX_STACK_LINE(2175)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp36 = this->treeStack2;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2175)
									::zpp_nape::space::ZPP_AABBNode tmp37 = node1->child2;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2175)
									tmp36->add(tmp37);
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2180)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2180)
					{
						HX_STACK_LINE(2180)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2180)
						bool tmp22 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2180)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2180)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2180)
						if ((tmp23)){
							HX_STACK_LINE(2180)
							tmp24 = (_this->miny <= ab->maxy);
						}
						else{
							HX_STACK_LINE(2180)
							tmp24 = false;
						}
						HX_STACK_LINE(2180)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2180)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2180)
						if ((tmp25)){
							HX_STACK_LINE(2180)
							tmp26 = (ab->minx <= _this->maxx);
						}
						else{
							HX_STACK_LINE(2180)
							tmp26 = false;
						}
						HX_STACK_LINE(2180)
						if ((tmp26)){
							HX_STACK_LINE(2180)
							tmp21 = (_this->minx <= ab->maxx);
						}
						else{
							HX_STACK_LINE(2180)
							tmp21 = false;
						}
					}
					HX_STACK_LINE(2180)
					if ((tmp21)){
						HX_STACK_LINE(2181)
						bool tmp22 = (node->child1 == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2181)
						if ((tmp22)){
							HX_STACK_LINE(2183)
							bool tmp23 = (filter == null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2183)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2183)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2183)
							if ((tmp24)){
								HX_STACK_LINE(2183)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp26 = node->shape->filter;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2183)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2183)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp27;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2183)
								int tmp28 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2183)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2183)
								bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2183)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2183)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2183)
								if ((tmp32)){
									HX_STACK_LINE(2183)
									int tmp33 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2183)
									int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2183)
									int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2183)
									tmp25 = (tmp35 != (int)0);
								}
								else{
									HX_STACK_LINE(2183)
									tmp25 = false;
								}
							}
							else{
								HX_STACK_LINE(2183)
								tmp25 = true;
							}
							HX_STACK_LINE(2183)
							if ((tmp25)){
								HX_STACK_LINE(2184)
								bool tmp26 = strict;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2184)
								if ((tmp26)){
									HX_STACK_LINE(2185)
									bool tmp27 = containment;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2185)
									if ((tmp27)){
										HX_STACK_LINE(2186)
										::nape::shape::Shape tmp28 = this->aabbShape;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(2186)
										::zpp_nape::shape::ZPP_Shape tmp29 = tmp28->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(2186)
										::zpp_nape::shape::ZPP_Shape tmp30 = node->shape;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(2186)
										bool tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2186)
										if ((tmp31)){
											HX_STACK_LINE(2186)
											::nape::shape::Shape tmp32 = node->shape->outer;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2186)
											ret->push(tmp32);
										}
									}
									else{
										HX_STACK_LINE(2189)
										bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(2189)
										{
											HX_STACK_LINE(2189)
											::zpp_nape::geom::ZPP_AABB tmp29 = node->shape->aabb;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2189)
											::zpp_nape::geom::ZPP_AABB x = tmp29;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(2189)
											bool tmp30 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2189)
											bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2189)
											bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2189)
											if ((tmp31)){
												HX_STACK_LINE(2189)
												tmp32 = (x->miny >= ab->miny);
											}
											else{
												HX_STACK_LINE(2189)
												tmp32 = false;
											}
											HX_STACK_LINE(2189)
											bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(2189)
											bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(2189)
											if ((tmp33)){
												HX_STACK_LINE(2189)
												tmp34 = (x->maxx <= ab->maxx);
											}
											else{
												HX_STACK_LINE(2189)
												tmp34 = false;
											}
											HX_STACK_LINE(2189)
											if ((tmp34)){
												HX_STACK_LINE(2189)
												tmp28 = (x->maxy <= ab->maxy);
											}
											else{
												HX_STACK_LINE(2189)
												tmp28 = false;
											}
										}
										HX_STACK_LINE(2189)
										if ((tmp28)){
											HX_STACK_LINE(2189)
											::nape::shape::Shape tmp29 = node->shape->outer;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2189)
											ret->push(tmp29);
										}
										else{
											HX_STACK_LINE(2190)
											::zpp_nape::shape::ZPP_Shape tmp29 = node->shape;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2190)
											::nape::shape::Shape tmp30 = this->aabbShape;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2190)
											::zpp_nape::shape::ZPP_Shape tmp31 = tmp30->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2190)
											bool tmp32 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp29,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2190)
											if ((tmp32)){
												HX_STACK_LINE(2190)
												::nape::shape::Shape tmp33 = node->shape->outer;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(2190)
												ret->push(tmp33);
											}
										}
									}
								}
								else{
									HX_STACK_LINE(2193)
									bool tmp27 = containment;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2193)
									bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(2193)
									bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(2193)
									bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2193)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2193)
									if ((tmp30)){
										HX_STACK_LINE(2193)
										::zpp_nape::geom::ZPP_AABB tmp32 = node->shape->aabb;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2193)
										::zpp_nape::geom::ZPP_AABB tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2193)
										::zpp_nape::geom::ZPP_AABB x = tmp33;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(2193)
										bool tmp34 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2193)
										bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2193)
										bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(2193)
										bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(2193)
										bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(2193)
										if ((tmp38)){
											HX_STACK_LINE(2193)
											bool tmp39 = (x->miny >= ab->miny);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2193)
											tmp37 = tmp39;
										}
										else{
											HX_STACK_LINE(2193)
											tmp37 = false;
										}
										HX_STACK_LINE(2193)
										bool tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2193)
										bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(2193)
										bool tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(2193)
										if ((tmp41)){
											HX_STACK_LINE(2193)
											bool tmp42 = (x->maxx <= ab->maxx);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2193)
											tmp40 = tmp42;
										}
										else{
											HX_STACK_LINE(2193)
											tmp40 = false;
										}
										HX_STACK_LINE(2193)
										bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(2193)
										if ((tmp42)){
											HX_STACK_LINE(2193)
											tmp31 = (x->maxy <= ab->maxy);
										}
										else{
											HX_STACK_LINE(2193)
											tmp31 = false;
										}
									}
									else{
										HX_STACK_LINE(2193)
										tmp31 = true;
									}
									HX_STACK_LINE(2193)
									if ((tmp31)){
										HX_STACK_LINE(2193)
										::nape::shape::Shape tmp32 = node->shape->outer;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2193)
										ret->push(tmp32);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2198)
							bool tmp23 = (node->child1 != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2198)
							if ((tmp23)){
								HX_STACK_LINE(2198)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = this->treeStack;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2198)
								::zpp_nape::space::ZPP_AABBNode tmp25 = node->child1;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2198)
								tmp24->add(tmp25);
							}
							HX_STACK_LINE(2199)
							bool tmp24 = (node->child2 != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2199)
							if ((tmp24)){
								HX_STACK_LINE(2199)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp25 = this->treeStack;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2199)
								::zpp_nape::space::ZPP_AABBNode tmp26 = node->child2;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2199)
								tmp25->add(tmp26);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2207)
	{
		HX_STACK_LINE(2208)
		::zpp_nape::space::ZPP_AABBTree tmp5 = this->dtree;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2208)
		::zpp_nape::space::ZPP_AABBNode tmp6 = tmp5->root;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2208)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2208)
		if ((tmp7)){
			HX_STACK_LINE(2209)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2209)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2209)
			if ((tmp9)){
				HX_STACK_LINE(2209)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2209)
				this->treeStack = tmp10;
			}
			HX_STACK_LINE(2210)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = this->treeStack;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2210)
			::zpp_nape::space::ZPP_AABBTree tmp11 = this->dtree;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2210)
			::zpp_nape::space::ZPP_AABBNode tmp12 = tmp11->root;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2210)
			tmp10->add(tmp12);
			HX_STACK_LINE(2211)
			while((true)){
				HX_STACK_LINE(2211)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp13 = this->treeStack;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2211)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp14 = tmp13->head;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2211)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2211)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2211)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2211)
				if ((tmp17)){
					HX_STACK_LINE(2211)
					break;
				}
				HX_STACK_LINE(2212)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp18 = this->treeStack;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2212)
				::zpp_nape::space::ZPP_AABBNode tmp19 = tmp18->pop_unsafe();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2212)
				::zpp_nape::space::ZPP_AABBNode node = tmp19;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2221)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2221)
				{
					HX_STACK_LINE(2221)
					::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(2221)
					bool tmp21 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2221)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2221)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2221)
					if ((tmp22)){
						HX_STACK_LINE(2221)
						tmp23 = (x->miny >= ab->miny);
					}
					else{
						HX_STACK_LINE(2221)
						tmp23 = false;
					}
					HX_STACK_LINE(2221)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2221)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2221)
					if ((tmp24)){
						HX_STACK_LINE(2221)
						tmp25 = (x->maxx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2221)
						tmp25 = false;
					}
					HX_STACK_LINE(2221)
					if ((tmp25)){
						HX_STACK_LINE(2221)
						tmp20 = (x->maxy <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2221)
						tmp20 = false;
					}
				}
				HX_STACK_LINE(2221)
				if ((tmp20)){
					HX_STACK_LINE(2222)
					bool tmp21 = (node->child1 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2222)
					if ((tmp21)){
						HX_STACK_LINE(2224)
						bool tmp22 = (filter == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2224)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2224)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2224)
						if ((tmp23)){
							HX_STACK_LINE(2224)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp25 = node->shape->filter;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2224)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2224)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp26;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2224)
							int tmp27 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2224)
							int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2224)
							bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2224)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2224)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2224)
							if ((tmp31)){
								HX_STACK_LINE(2224)
								int tmp32 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2224)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2224)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2224)
								tmp24 = (tmp34 != (int)0);
							}
							else{
								HX_STACK_LINE(2224)
								tmp24 = false;
							}
						}
						else{
							HX_STACK_LINE(2224)
							tmp24 = true;
						}
						HX_STACK_LINE(2224)
						if ((tmp24)){
							HX_STACK_LINE(2225)
							::nape::shape::Shape tmp25 = node->shape->outer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2225)
							ret->push(tmp25);
						}
					}
					else{
						HX_STACK_LINE(2230)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2230)
						bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2230)
						if ((tmp23)){
							HX_STACK_LINE(2231)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2231)
							this->treeStack2 = tmp24;
						}
						HX_STACK_LINE(2233)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = this->treeStack2;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2233)
						::zpp_nape::space::ZPP_AABBNode tmp25 = node;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2233)
						tmp24->add(tmp25);
						HX_STACK_LINE(2234)
						while((true)){
							HX_STACK_LINE(2234)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = this->treeStack2;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2234)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp27 = tmp26->head;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2234)
							bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2234)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2234)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2234)
							if ((tmp30)){
								HX_STACK_LINE(2234)
								break;
							}
							HX_STACK_LINE(2235)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp31 = this->treeStack2;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2235)
							::zpp_nape::space::ZPP_AABBNode tmp32 = tmp31->pop_unsafe();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2235)
							::zpp_nape::space::ZPP_AABBNode node1 = tmp32;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(2236)
							bool tmp33 = (node1->child1 == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2236)
							if ((tmp33)){
								HX_STACK_LINE(2237)
								bool tmp34 = (filter == null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2237)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2237)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2237)
								if ((tmp35)){
									HX_STACK_LINE(2237)
									::zpp_nape::dynamics::ZPP_InteractionFilter tmp37 = node1->shape->filter;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2237)
									::zpp_nape::dynamics::ZPP_InteractionFilter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2237)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp38;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2237)
									int tmp39 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2237)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2237)
									bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2237)
									bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(2237)
									bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(2237)
									if ((tmp43)){
										HX_STACK_LINE(2237)
										int tmp44 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(2237)
										int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(2237)
										int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(2237)
										tmp36 = (tmp46 != (int)0);
									}
									else{
										HX_STACK_LINE(2237)
										tmp36 = false;
									}
								}
								else{
									HX_STACK_LINE(2237)
									tmp36 = true;
								}
								HX_STACK_LINE(2237)
								if ((tmp36)){
									HX_STACK_LINE(2238)
									::nape::shape::Shape tmp37 = node1->shape->outer;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2238)
									ret->push(tmp37);
								}
							}
							else{
								HX_STACK_LINE(2242)
								bool tmp34 = (node1->child1 != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2242)
								if ((tmp34)){
									HX_STACK_LINE(2242)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp35 = this->treeStack2;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2242)
									::zpp_nape::space::ZPP_AABBNode tmp36 = node1->child1;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2242)
									tmp35->add(tmp36);
								}
								HX_STACK_LINE(2243)
								bool tmp35 = (node1->child2 != null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2243)
								if ((tmp35)){
									HX_STACK_LINE(2243)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp36 = this->treeStack2;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2243)
									::zpp_nape::space::ZPP_AABBNode tmp37 = node1->child2;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2243)
									tmp36->add(tmp37);
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2248)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2248)
					{
						HX_STACK_LINE(2248)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2248)
						bool tmp22 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2248)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2248)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2248)
						if ((tmp23)){
							HX_STACK_LINE(2248)
							tmp24 = (_this->miny <= ab->maxy);
						}
						else{
							HX_STACK_LINE(2248)
							tmp24 = false;
						}
						HX_STACK_LINE(2248)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2248)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2248)
						if ((tmp25)){
							HX_STACK_LINE(2248)
							tmp26 = (ab->minx <= _this->maxx);
						}
						else{
							HX_STACK_LINE(2248)
							tmp26 = false;
						}
						HX_STACK_LINE(2248)
						if ((tmp26)){
							HX_STACK_LINE(2248)
							tmp21 = (_this->minx <= ab->maxx);
						}
						else{
							HX_STACK_LINE(2248)
							tmp21 = false;
						}
					}
					HX_STACK_LINE(2248)
					if ((tmp21)){
						HX_STACK_LINE(2249)
						bool tmp22 = (node->child1 == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2249)
						if ((tmp22)){
							HX_STACK_LINE(2251)
							bool tmp23 = (filter == null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2251)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2251)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2251)
							if ((tmp24)){
								HX_STACK_LINE(2251)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp26 = node->shape->filter;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2251)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2251)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp27;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2251)
								int tmp28 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2251)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2251)
								bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2251)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2251)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2251)
								if ((tmp32)){
									HX_STACK_LINE(2251)
									int tmp33 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2251)
									int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2251)
									int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2251)
									tmp25 = (tmp35 != (int)0);
								}
								else{
									HX_STACK_LINE(2251)
									tmp25 = false;
								}
							}
							else{
								HX_STACK_LINE(2251)
								tmp25 = true;
							}
							HX_STACK_LINE(2251)
							if ((tmp25)){
								HX_STACK_LINE(2252)
								bool tmp26 = strict;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2252)
								if ((tmp26)){
									HX_STACK_LINE(2253)
									bool tmp27 = containment;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2253)
									if ((tmp27)){
										HX_STACK_LINE(2254)
										::nape::shape::Shape tmp28 = this->aabbShape;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(2254)
										::zpp_nape::shape::ZPP_Shape tmp29 = tmp28->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(2254)
										::zpp_nape::shape::ZPP_Shape tmp30 = node->shape;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(2254)
										bool tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2254)
										if ((tmp31)){
											HX_STACK_LINE(2254)
											::nape::shape::Shape tmp32 = node->shape->outer;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2254)
											ret->push(tmp32);
										}
									}
									else{
										HX_STACK_LINE(2257)
										bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(2257)
										{
											HX_STACK_LINE(2257)
											::zpp_nape::geom::ZPP_AABB tmp29 = node->shape->aabb;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2257)
											::zpp_nape::geom::ZPP_AABB x = tmp29;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(2257)
											bool tmp30 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2257)
											bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2257)
											bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2257)
											if ((tmp31)){
												HX_STACK_LINE(2257)
												tmp32 = (x->miny >= ab->miny);
											}
											else{
												HX_STACK_LINE(2257)
												tmp32 = false;
											}
											HX_STACK_LINE(2257)
											bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(2257)
											bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(2257)
											if ((tmp33)){
												HX_STACK_LINE(2257)
												tmp34 = (x->maxx <= ab->maxx);
											}
											else{
												HX_STACK_LINE(2257)
												tmp34 = false;
											}
											HX_STACK_LINE(2257)
											if ((tmp34)){
												HX_STACK_LINE(2257)
												tmp28 = (x->maxy <= ab->maxy);
											}
											else{
												HX_STACK_LINE(2257)
												tmp28 = false;
											}
										}
										HX_STACK_LINE(2257)
										if ((tmp28)){
											HX_STACK_LINE(2257)
											::nape::shape::Shape tmp29 = node->shape->outer;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2257)
											ret->push(tmp29);
										}
										else{
											HX_STACK_LINE(2258)
											::zpp_nape::shape::ZPP_Shape tmp29 = node->shape;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(2258)
											::nape::shape::Shape tmp30 = this->aabbShape;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2258)
											::zpp_nape::shape::ZPP_Shape tmp31 = tmp30->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2258)
											bool tmp32 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp29,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2258)
											if ((tmp32)){
												HX_STACK_LINE(2258)
												::nape::shape::Shape tmp33 = node->shape->outer;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(2258)
												ret->push(tmp33);
											}
										}
									}
								}
								else{
									HX_STACK_LINE(2261)
									bool tmp27 = containment;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2261)
									bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(2261)
									bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(2261)
									bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2261)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2261)
									if ((tmp30)){
										HX_STACK_LINE(2261)
										::zpp_nape::geom::ZPP_AABB tmp32 = node->shape->aabb;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2261)
										::zpp_nape::geom::ZPP_AABB tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2261)
										::zpp_nape::geom::ZPP_AABB x = tmp33;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(2261)
										bool tmp34 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2261)
										bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2261)
										bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(2261)
										bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(2261)
										bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(2261)
										if ((tmp38)){
											HX_STACK_LINE(2261)
											bool tmp39 = (x->miny >= ab->miny);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2261)
											tmp37 = tmp39;
										}
										else{
											HX_STACK_LINE(2261)
											tmp37 = false;
										}
										HX_STACK_LINE(2261)
										bool tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2261)
										bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(2261)
										bool tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(2261)
										if ((tmp41)){
											HX_STACK_LINE(2261)
											bool tmp42 = (x->maxx <= ab->maxx);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2261)
											tmp40 = tmp42;
										}
										else{
											HX_STACK_LINE(2261)
											tmp40 = false;
										}
										HX_STACK_LINE(2261)
										bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(2261)
										if ((tmp42)){
											HX_STACK_LINE(2261)
											tmp31 = (x->maxy <= ab->maxy);
										}
										else{
											HX_STACK_LINE(2261)
											tmp31 = false;
										}
									}
									else{
										HX_STACK_LINE(2261)
										tmp31 = true;
									}
									HX_STACK_LINE(2261)
									if ((tmp31)){
										HX_STACK_LINE(2261)
										::nape::shape::Shape tmp32 = node->shape->outer;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2261)
										ret->push(tmp32);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2266)
							bool tmp23 = (node->child1 != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2266)
							if ((tmp23)){
								HX_STACK_LINE(2266)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = this->treeStack;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2266)
								::zpp_nape::space::ZPP_AABBNode tmp25 = node->child1;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2266)
								tmp24->add(tmp25);
							}
							HX_STACK_LINE(2267)
							bool tmp24 = (node->child2 != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2267)
							if ((tmp24)){
								HX_STACK_LINE(2267)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp25 = this->treeStack;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2267)
								::zpp_nape::space::ZPP_AABBNode tmp26 = node->child2;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2267)
								tmp25->add(tmp26);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2274)
	::nape::shape::ShapeList tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2274)
	return tmp5;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","bodiesInAABB",0xf3e09363,"zpp_nape.space.ZPP_DynAABBPhase.bodiesInAABB","zpp_nape/space/DynAABBPhase.hx",2277,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2278)
	this->sync_broadphase();
	HX_STACK_LINE(2279)
	::zpp_nape::geom::ZPP_AABB tmp = aabb;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2279)
	this->updateAABBShape(tmp);
	HX_STACK_LINE(2280)
	::nape::shape::Shape tmp1 = this->aabbShape;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2280)
	::zpp_nape::geom::ZPP_AABB tmp2 = tmp1->zpp_inner->aabb;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2280)
	::zpp_nape::geom::ZPP_AABB ab = tmp2;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2281)
	bool tmp3 = (output == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2281)
	::nape::phys::BodyList tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2281)
	if ((tmp3)){
		HX_STACK_LINE(2281)
		tmp4 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(2281)
		tmp4 = output;
	}
	HX_STACK_LINE(2281)
	::nape::phys::BodyList ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2282)
	::nape::phys::BodyList tmp5 = this->failed;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2282)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2282)
	if ((tmp6)){
		HX_STACK_LINE(2282)
		::nape::phys::BodyList tmp7 = ::nape::phys::BodyList_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2282)
		this->failed = tmp7;
	}
	HX_STACK_LINE(2284)
	{
		HX_STACK_LINE(2285)
		::zpp_nape::space::ZPP_AABBTree tmp7 = this->stree;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2285)
		::zpp_nape::space::ZPP_AABBNode tmp8 = tmp7->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2285)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2285)
		if ((tmp9)){
			HX_STACK_LINE(2286)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = this->treeStack;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2286)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2286)
			if ((tmp11)){
				HX_STACK_LINE(2286)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2286)
				this->treeStack = tmp12;
			}
			HX_STACK_LINE(2287)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = this->treeStack;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2287)
			::zpp_nape::space::ZPP_AABBTree tmp13 = this->stree;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2287)
			::zpp_nape::space::ZPP_AABBNode tmp14 = tmp13->root;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2287)
			tmp12->add(tmp14);
			HX_STACK_LINE(2288)
			while((true)){
				HX_STACK_LINE(2288)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp15 = this->treeStack;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2288)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp16 = tmp15->head;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2288)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2288)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2288)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2288)
				if ((tmp19)){
					HX_STACK_LINE(2288)
					break;
				}
				HX_STACK_LINE(2289)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp20 = this->treeStack;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2289)
				::zpp_nape::space::ZPP_AABBNode tmp21 = tmp20->pop_unsafe();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2289)
				::zpp_nape::space::ZPP_AABBNode node = tmp21;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2298)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2298)
				{
					HX_STACK_LINE(2298)
					::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(2298)
					bool tmp23 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2298)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2298)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2298)
					if ((tmp24)){
						HX_STACK_LINE(2298)
						tmp25 = (x->miny >= ab->miny);
					}
					else{
						HX_STACK_LINE(2298)
						tmp25 = false;
					}
					HX_STACK_LINE(2298)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2298)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2298)
					if ((tmp26)){
						HX_STACK_LINE(2298)
						tmp27 = (x->maxx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2298)
						tmp27 = false;
					}
					HX_STACK_LINE(2298)
					if ((tmp27)){
						HX_STACK_LINE(2298)
						tmp22 = (x->maxy <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2298)
						tmp22 = false;
					}
				}
				HX_STACK_LINE(2298)
				if ((tmp22)){
					HX_STACK_LINE(2299)
					bool tmp23 = (node->child1 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2299)
					if ((tmp23)){
						HX_STACK_LINE(2301)
						bool tmp24 = (filter == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2301)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2301)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2301)
						if ((tmp25)){
							HX_STACK_LINE(2301)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = node->shape->filter;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2301)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2301)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2301)
							int tmp29 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2301)
							int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2301)
							bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2301)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2301)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2301)
							if ((tmp33)){
								HX_STACK_LINE(2301)
								int tmp34 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2301)
								int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2301)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2301)
								tmp26 = (tmp36 != (int)0);
							}
							else{
								HX_STACK_LINE(2301)
								tmp26 = false;
							}
						}
						else{
							HX_STACK_LINE(2301)
							tmp26 = true;
						}
						HX_STACK_LINE(2301)
						if ((tmp26)){
							HX_STACK_LINE(2302)
							::zpp_nape::phys::ZPP_Body tmp27 = node->shape->body;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2302)
							::nape::phys::Body body = tmp27->outer;		HX_STACK_VAR(body,"body");
							HX_STACK_LINE(2303)
							::nape::phys::Body tmp28 = body;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2303)
							bool tmp29 = ret->has(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2303)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2303)
							if ((tmp30)){
								HX_STACK_LINE(2303)
								::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2303)
								ret->push(tmp31);
							}
						}
					}
					else{
						HX_STACK_LINE(2308)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = this->treeStack2;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2308)
						bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2308)
						if ((tmp25)){
							HX_STACK_LINE(2309)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2309)
							this->treeStack2 = tmp26;
						}
						HX_STACK_LINE(2311)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = this->treeStack2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2311)
						::zpp_nape::space::ZPP_AABBNode tmp27 = node;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2311)
						tmp26->add(tmp27);
						HX_STACK_LINE(2312)
						while((true)){
							HX_STACK_LINE(2312)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp28 = this->treeStack2;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2312)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp29 = tmp28->head;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2312)
							bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2312)
							bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2312)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2312)
							if ((tmp32)){
								HX_STACK_LINE(2312)
								break;
							}
							HX_STACK_LINE(2313)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp33 = this->treeStack2;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2313)
							::zpp_nape::space::ZPP_AABBNode tmp34 = tmp33->pop_unsafe();		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(2313)
							::zpp_nape::space::ZPP_AABBNode node1 = tmp34;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(2314)
							bool tmp35 = (node1->child1 == null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(2314)
							if ((tmp35)){
								HX_STACK_LINE(2315)
								bool tmp36 = (filter == null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2315)
								bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2315)
								bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(2315)
								if ((tmp37)){
									HX_STACK_LINE(2315)
									::zpp_nape::dynamics::ZPP_InteractionFilter tmp39 = node1->shape->filter;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2315)
									::zpp_nape::dynamics::ZPP_InteractionFilter tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2315)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp40;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2315)
									int tmp41 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2315)
									int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(2315)
									bool tmp43 = (tmp42 != (int)0);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(2315)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(2315)
									bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(2315)
									if ((tmp45)){
										HX_STACK_LINE(2315)
										int tmp46 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(2315)
										int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(2315)
										int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(2315)
										tmp38 = (tmp48 != (int)0);
									}
									else{
										HX_STACK_LINE(2315)
										tmp38 = false;
									}
								}
								else{
									HX_STACK_LINE(2315)
									tmp38 = true;
								}
								HX_STACK_LINE(2315)
								if ((tmp38)){
									HX_STACK_LINE(2316)
									::zpp_nape::phys::ZPP_Body tmp39 = node1->shape->body;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2316)
									::nape::phys::Body body = tmp39->outer;		HX_STACK_VAR(body,"body");
									HX_STACK_LINE(2317)
									::nape::phys::Body tmp40 = body;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2317)
									bool tmp41 = ret->has(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2317)
									bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(2317)
									if ((tmp42)){
										HX_STACK_LINE(2317)
										::nape::phys::Body tmp43 = body;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(2317)
										ret->push(tmp43);
									}
								}
							}
							else{
								HX_STACK_LINE(2321)
								bool tmp36 = (node1->child1 != null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2321)
								if ((tmp36)){
									HX_STACK_LINE(2321)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp37 = this->treeStack2;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2321)
									::zpp_nape::space::ZPP_AABBNode tmp38 = node1->child1;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2321)
									tmp37->add(tmp38);
								}
								HX_STACK_LINE(2322)
								bool tmp37 = (node1->child2 != null());		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2322)
								if ((tmp37)){
									HX_STACK_LINE(2322)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp38 = this->treeStack2;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2322)
									::zpp_nape::space::ZPP_AABBNode tmp39 = node1->child2;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2322)
									tmp38->add(tmp39);
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2327)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2327)
					{
						HX_STACK_LINE(2327)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2327)
						bool tmp24 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2327)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2327)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2327)
						if ((tmp25)){
							HX_STACK_LINE(2327)
							tmp26 = (_this->miny <= ab->maxy);
						}
						else{
							HX_STACK_LINE(2327)
							tmp26 = false;
						}
						HX_STACK_LINE(2327)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2327)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2327)
						if ((tmp27)){
							HX_STACK_LINE(2327)
							tmp28 = (ab->minx <= _this->maxx);
						}
						else{
							HX_STACK_LINE(2327)
							tmp28 = false;
						}
						HX_STACK_LINE(2327)
						if ((tmp28)){
							HX_STACK_LINE(2327)
							tmp23 = (_this->minx <= ab->maxx);
						}
						else{
							HX_STACK_LINE(2327)
							tmp23 = false;
						}
					}
					HX_STACK_LINE(2327)
					if ((tmp23)){
						HX_STACK_LINE(2328)
						bool tmp24 = (node->child1 == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2328)
						if ((tmp24)){
							HX_STACK_LINE(2330)
							::zpp_nape::phys::ZPP_Body tmp25 = node->shape->body;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2330)
							::nape::phys::Body body = tmp25->outer;		HX_STACK_VAR(body,"body");
							HX_STACK_LINE(2331)
							bool tmp26 = (filter == null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2331)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2331)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2331)
							if ((tmp27)){
								HX_STACK_LINE(2331)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp29 = node->shape->filter;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2331)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2331)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp30;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2331)
								int tmp31 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2331)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2331)
								bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2331)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2331)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2331)
								if ((tmp35)){
									HX_STACK_LINE(2331)
									int tmp36 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2331)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2331)
									int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2331)
									tmp28 = (tmp38 != (int)0);
								}
								else{
									HX_STACK_LINE(2331)
									tmp28 = false;
								}
							}
							else{
								HX_STACK_LINE(2331)
								tmp28 = true;
							}
							HX_STACK_LINE(2331)
							if ((tmp28)){
								HX_STACK_LINE(2332)
								bool tmp29 = strict;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2332)
								if ((tmp29)){
									HX_STACK_LINE(2333)
									bool tmp30 = containment;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2333)
									if ((tmp30)){
										HX_STACK_LINE(2334)
										::nape::phys::BodyList tmp31 = this->failed;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2334)
										::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2334)
										bool tmp33 = tmp31->has(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2334)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2334)
										if ((tmp34)){
											HX_STACK_LINE(2335)
											::nape::shape::Shape tmp35 = this->aabbShape;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(2335)
											::zpp_nape::shape::ZPP_Shape tmp36 = tmp35->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2335)
											::zpp_nape::shape::ZPP_Shape tmp37 = node->shape;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2335)
											bool tmp38 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2335)
											bool col = tmp38;		HX_STACK_VAR(col,"col");
											HX_STACK_LINE(2336)
											::nape::phys::Body tmp39 = body;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2336)
											bool tmp40 = ret->has(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2336)
											bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2336)
											bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2336)
											bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(2336)
											if ((tmp42)){
												HX_STACK_LINE(2336)
												tmp43 = col;
											}
											else{
												HX_STACK_LINE(2336)
												tmp43 = false;
											}
											HX_STACK_LINE(2336)
											if ((tmp43)){
												HX_STACK_LINE(2336)
												::nape::phys::Body tmp44 = body;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(2336)
												ret->push(tmp44);
											}
											else{
												HX_STACK_LINE(2337)
												bool tmp44 = col;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(2337)
												bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(2337)
												if ((tmp45)){
													HX_STACK_LINE(2338)
													::nape::phys::Body tmp46 = body;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(2338)
													ret->remove(tmp46);
													HX_STACK_LINE(2339)
													::nape::phys::BodyList tmp47 = this->failed;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(2339)
													::nape::phys::Body tmp48 = body;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(2339)
													tmp47->push(tmp48);
												}
											}
										}
									}
									else{
										HX_STACK_LINE(2343)
										::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2343)
										bool tmp32 = ret->has(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2343)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2343)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2343)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2343)
										if ((tmp34)){
											HX_STACK_LINE(2343)
											::zpp_nape::shape::ZPP_Shape tmp36 = node->shape;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2343)
											::nape::shape::Shape tmp37 = this->aabbShape;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2343)
											::nape::shape::Shape tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2343)
											::zpp_nape::shape::ZPP_Shape tmp39 = tmp38->zpp_inner;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2343)
											::zpp_nape::shape::ZPP_Shape tmp40 = tmp36;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2343)
											::zpp_nape::shape::ZPP_Shape tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2343)
											tmp35 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp40,tmp41);
										}
										else{
											HX_STACK_LINE(2343)
											tmp35 = false;
										}
										HX_STACK_LINE(2343)
										if ((tmp35)){
											HX_STACK_LINE(2344)
											::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2344)
											ret->push(tmp36);
										}
									}
								}
								else{
									HX_STACK_LINE(2348)
									bool tmp30 = containment;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2348)
									if ((tmp30)){
										HX_STACK_LINE(2349)
										::nape::phys::BodyList tmp31 = this->failed;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2349)
										::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2349)
										bool tmp33 = tmp31->has(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2349)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2349)
										if ((tmp34)){
											HX_STACK_LINE(2350)
											bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(2350)
											{
												HX_STACK_LINE(2350)
												::zpp_nape::geom::ZPP_AABB tmp36 = node->shape->aabb;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(2350)
												::zpp_nape::geom::ZPP_AABB x = tmp36;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2350)
												bool tmp37 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(2350)
												bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(2350)
												bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(2350)
												if ((tmp38)){
													HX_STACK_LINE(2350)
													tmp39 = (x->miny >= ab->miny);
												}
												else{
													HX_STACK_LINE(2350)
													tmp39 = false;
												}
												HX_STACK_LINE(2350)
												bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(2350)
												bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2350)
												if ((tmp40)){
													HX_STACK_LINE(2350)
													tmp41 = (x->maxx <= ab->maxx);
												}
												else{
													HX_STACK_LINE(2350)
													tmp41 = false;
												}
												HX_STACK_LINE(2350)
												if ((tmp41)){
													HX_STACK_LINE(2350)
													tmp35 = (x->maxy <= ab->maxy);
												}
												else{
													HX_STACK_LINE(2350)
													tmp35 = false;
												}
											}
											HX_STACK_LINE(2350)
											bool col = tmp35;		HX_STACK_VAR(col,"col");
											HX_STACK_LINE(2351)
											::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2351)
											bool tmp37 = ret->has(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2351)
											bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2351)
											bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2351)
											bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2351)
											if ((tmp39)){
												HX_STACK_LINE(2351)
												tmp40 = col;
											}
											else{
												HX_STACK_LINE(2351)
												tmp40 = false;
											}
											HX_STACK_LINE(2351)
											if ((tmp40)){
												HX_STACK_LINE(2351)
												::nape::phys::Body tmp41 = body;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2351)
												ret->push(tmp41);
											}
											else{
												HX_STACK_LINE(2352)
												bool tmp41 = col;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2352)
												bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(2352)
												if ((tmp42)){
													HX_STACK_LINE(2353)
													::nape::phys::Body tmp43 = body;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(2353)
													ret->remove(tmp43);
													HX_STACK_LINE(2354)
													::nape::phys::BodyList tmp44 = this->failed;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(2354)
													::nape::phys::Body tmp45 = body;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(2354)
													tmp44->push(tmp45);
												}
											}
										}
									}
									else{
										HX_STACK_LINE(2358)
										::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2358)
										bool tmp32 = ret->has(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2358)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2358)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2358)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2358)
										if ((tmp34)){
											HX_STACK_LINE(2358)
											::zpp_nape::geom::ZPP_AABB tmp36 = node->shape->aabb;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2358)
											::zpp_nape::geom::ZPP_AABB tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2358)
											::zpp_nape::geom::ZPP_AABB x = tmp37;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(2358)
											bool tmp38 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2358)
											bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2358)
											bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2358)
											bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2358)
											bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2358)
											if ((tmp42)){
												HX_STACK_LINE(2358)
												bool tmp43 = (x->miny >= ab->miny);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(2358)
												tmp41 = tmp43;
											}
											else{
												HX_STACK_LINE(2358)
												tmp41 = false;
											}
											HX_STACK_LINE(2358)
											bool tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(2358)
											bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(2358)
											bool tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(2358)
											if ((tmp45)){
												HX_STACK_LINE(2358)
												bool tmp46 = (x->maxx <= ab->maxx);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(2358)
												tmp44 = tmp46;
											}
											else{
												HX_STACK_LINE(2358)
												tmp44 = false;
											}
											HX_STACK_LINE(2358)
											bool tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(2358)
											if ((tmp46)){
												HX_STACK_LINE(2358)
												tmp35 = (x->maxy <= ab->maxy);
											}
											else{
												HX_STACK_LINE(2358)
												tmp35 = false;
											}
										}
										else{
											HX_STACK_LINE(2358)
											tmp35 = false;
										}
										HX_STACK_LINE(2358)
										if ((tmp35)){
											HX_STACK_LINE(2359)
											::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2359)
											ret->push(tmp36);
										}
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2366)
							bool tmp25 = (node->child1 != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2366)
							if ((tmp25)){
								HX_STACK_LINE(2366)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = this->treeStack;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2366)
								::zpp_nape::space::ZPP_AABBNode tmp27 = node->child1;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2366)
								tmp26->add(tmp27);
							}
							HX_STACK_LINE(2367)
							bool tmp26 = (node->child2 != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2367)
							if ((tmp26)){
								HX_STACK_LINE(2367)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp27 = this->treeStack;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2367)
								::zpp_nape::space::ZPP_AABBNode tmp28 = node->child2;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2367)
								tmp27->add(tmp28);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2375)
	{
		HX_STACK_LINE(2376)
		::zpp_nape::space::ZPP_AABBTree tmp7 = this->dtree;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2376)
		::zpp_nape::space::ZPP_AABBNode tmp8 = tmp7->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2376)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2376)
		if ((tmp9)){
			HX_STACK_LINE(2377)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = this->treeStack;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2377)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2377)
			if ((tmp11)){
				HX_STACK_LINE(2377)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2377)
				this->treeStack = tmp12;
			}
			HX_STACK_LINE(2378)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = this->treeStack;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2378)
			::zpp_nape::space::ZPP_AABBTree tmp13 = this->dtree;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2378)
			::zpp_nape::space::ZPP_AABBNode tmp14 = tmp13->root;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2378)
			tmp12->add(tmp14);
			HX_STACK_LINE(2379)
			while((true)){
				HX_STACK_LINE(2379)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp15 = this->treeStack;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2379)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp16 = tmp15->head;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2379)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2379)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2379)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2379)
				if ((tmp19)){
					HX_STACK_LINE(2379)
					break;
				}
				HX_STACK_LINE(2380)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp20 = this->treeStack;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2380)
				::zpp_nape::space::ZPP_AABBNode tmp21 = tmp20->pop_unsafe();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2380)
				::zpp_nape::space::ZPP_AABBNode node = tmp21;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2389)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2389)
				{
					HX_STACK_LINE(2389)
					::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(2389)
					bool tmp23 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2389)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2389)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2389)
					if ((tmp24)){
						HX_STACK_LINE(2389)
						tmp25 = (x->miny >= ab->miny);
					}
					else{
						HX_STACK_LINE(2389)
						tmp25 = false;
					}
					HX_STACK_LINE(2389)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2389)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2389)
					if ((tmp26)){
						HX_STACK_LINE(2389)
						tmp27 = (x->maxx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2389)
						tmp27 = false;
					}
					HX_STACK_LINE(2389)
					if ((tmp27)){
						HX_STACK_LINE(2389)
						tmp22 = (x->maxy <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2389)
						tmp22 = false;
					}
				}
				HX_STACK_LINE(2389)
				if ((tmp22)){
					HX_STACK_LINE(2390)
					bool tmp23 = (node->child1 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2390)
					if ((tmp23)){
						HX_STACK_LINE(2392)
						bool tmp24 = (filter == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2392)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2392)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2392)
						if ((tmp25)){
							HX_STACK_LINE(2392)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = node->shape->filter;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2392)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2392)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2392)
							int tmp29 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2392)
							int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2392)
							bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2392)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2392)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2392)
							if ((tmp33)){
								HX_STACK_LINE(2392)
								int tmp34 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2392)
								int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2392)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2392)
								tmp26 = (tmp36 != (int)0);
							}
							else{
								HX_STACK_LINE(2392)
								tmp26 = false;
							}
						}
						else{
							HX_STACK_LINE(2392)
							tmp26 = true;
						}
						HX_STACK_LINE(2392)
						if ((tmp26)){
							HX_STACK_LINE(2393)
							::zpp_nape::phys::ZPP_Body tmp27 = node->shape->body;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2393)
							::nape::phys::Body body = tmp27->outer;		HX_STACK_VAR(body,"body");
							HX_STACK_LINE(2394)
							::nape::phys::Body tmp28 = body;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2394)
							bool tmp29 = ret->has(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2394)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2394)
							if ((tmp30)){
								HX_STACK_LINE(2394)
								::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2394)
								ret->push(tmp31);
							}
						}
					}
					else{
						HX_STACK_LINE(2399)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = this->treeStack2;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2399)
						bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2399)
						if ((tmp25)){
							HX_STACK_LINE(2400)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2400)
							this->treeStack2 = tmp26;
						}
						HX_STACK_LINE(2402)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = this->treeStack2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2402)
						::zpp_nape::space::ZPP_AABBNode tmp27 = node;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2402)
						tmp26->add(tmp27);
						HX_STACK_LINE(2403)
						while((true)){
							HX_STACK_LINE(2403)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp28 = this->treeStack2;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2403)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp29 = tmp28->head;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2403)
							bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2403)
							bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2403)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2403)
							if ((tmp32)){
								HX_STACK_LINE(2403)
								break;
							}
							HX_STACK_LINE(2404)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp33 = this->treeStack2;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2404)
							::zpp_nape::space::ZPP_AABBNode tmp34 = tmp33->pop_unsafe();		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(2404)
							::zpp_nape::space::ZPP_AABBNode node1 = tmp34;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(2405)
							bool tmp35 = (node1->child1 == null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(2405)
							if ((tmp35)){
								HX_STACK_LINE(2406)
								bool tmp36 = (filter == null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2406)
								bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2406)
								bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(2406)
								if ((tmp37)){
									HX_STACK_LINE(2406)
									::zpp_nape::dynamics::ZPP_InteractionFilter tmp39 = node1->shape->filter;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2406)
									::zpp_nape::dynamics::ZPP_InteractionFilter tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2406)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp40;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2406)
									int tmp41 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2406)
									int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(2406)
									bool tmp43 = (tmp42 != (int)0);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(2406)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(2406)
									bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(2406)
									if ((tmp45)){
										HX_STACK_LINE(2406)
										int tmp46 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(2406)
										int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(2406)
										int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(2406)
										tmp38 = (tmp48 != (int)0);
									}
									else{
										HX_STACK_LINE(2406)
										tmp38 = false;
									}
								}
								else{
									HX_STACK_LINE(2406)
									tmp38 = true;
								}
								HX_STACK_LINE(2406)
								if ((tmp38)){
									HX_STACK_LINE(2407)
									::zpp_nape::phys::ZPP_Body tmp39 = node1->shape->body;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2407)
									::nape::phys::Body body = tmp39->outer;		HX_STACK_VAR(body,"body");
									HX_STACK_LINE(2408)
									::nape::phys::Body tmp40 = body;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2408)
									bool tmp41 = ret->has(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2408)
									bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(2408)
									if ((tmp42)){
										HX_STACK_LINE(2408)
										::nape::phys::Body tmp43 = body;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(2408)
										ret->push(tmp43);
									}
								}
							}
							else{
								HX_STACK_LINE(2412)
								bool tmp36 = (node1->child1 != null());		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2412)
								if ((tmp36)){
									HX_STACK_LINE(2412)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp37 = this->treeStack2;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2412)
									::zpp_nape::space::ZPP_AABBNode tmp38 = node1->child1;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2412)
									tmp37->add(tmp38);
								}
								HX_STACK_LINE(2413)
								bool tmp37 = (node1->child2 != null());		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2413)
								if ((tmp37)){
									HX_STACK_LINE(2413)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp38 = this->treeStack2;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2413)
									::zpp_nape::space::ZPP_AABBNode tmp39 = node1->child2;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2413)
									tmp38->add(tmp39);
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2418)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2418)
					{
						HX_STACK_LINE(2418)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2418)
						bool tmp24 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2418)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2418)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2418)
						if ((tmp25)){
							HX_STACK_LINE(2418)
							tmp26 = (_this->miny <= ab->maxy);
						}
						else{
							HX_STACK_LINE(2418)
							tmp26 = false;
						}
						HX_STACK_LINE(2418)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2418)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2418)
						if ((tmp27)){
							HX_STACK_LINE(2418)
							tmp28 = (ab->minx <= _this->maxx);
						}
						else{
							HX_STACK_LINE(2418)
							tmp28 = false;
						}
						HX_STACK_LINE(2418)
						if ((tmp28)){
							HX_STACK_LINE(2418)
							tmp23 = (_this->minx <= ab->maxx);
						}
						else{
							HX_STACK_LINE(2418)
							tmp23 = false;
						}
					}
					HX_STACK_LINE(2418)
					if ((tmp23)){
						HX_STACK_LINE(2419)
						bool tmp24 = (node->child1 == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2419)
						if ((tmp24)){
							HX_STACK_LINE(2421)
							::zpp_nape::phys::ZPP_Body tmp25 = node->shape->body;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2421)
							::nape::phys::Body body = tmp25->outer;		HX_STACK_VAR(body,"body");
							HX_STACK_LINE(2422)
							bool tmp26 = (filter == null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2422)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2422)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2422)
							if ((tmp27)){
								HX_STACK_LINE(2422)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp29 = node->shape->filter;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2422)
								::zpp_nape::dynamics::ZPP_InteractionFilter tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2422)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp30;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2422)
								int tmp31 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2422)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2422)
								bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2422)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2422)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2422)
								if ((tmp35)){
									HX_STACK_LINE(2422)
									int tmp36 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2422)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2422)
									int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2422)
									tmp28 = (tmp38 != (int)0);
								}
								else{
									HX_STACK_LINE(2422)
									tmp28 = false;
								}
							}
							else{
								HX_STACK_LINE(2422)
								tmp28 = true;
							}
							HX_STACK_LINE(2422)
							if ((tmp28)){
								HX_STACK_LINE(2423)
								bool tmp29 = strict;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2423)
								if ((tmp29)){
									HX_STACK_LINE(2424)
									bool tmp30 = containment;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2424)
									if ((tmp30)){
										HX_STACK_LINE(2425)
										::nape::phys::BodyList tmp31 = this->failed;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2425)
										::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2425)
										bool tmp33 = tmp31->has(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2425)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2425)
										if ((tmp34)){
											HX_STACK_LINE(2426)
											::nape::shape::Shape tmp35 = this->aabbShape;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(2426)
											::zpp_nape::shape::ZPP_Shape tmp36 = tmp35->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2426)
											::zpp_nape::shape::ZPP_Shape tmp37 = node->shape;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2426)
											bool tmp38 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2426)
											bool col = tmp38;		HX_STACK_VAR(col,"col");
											HX_STACK_LINE(2427)
											::nape::phys::Body tmp39 = body;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2427)
											bool tmp40 = ret->has(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2427)
											bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2427)
											bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2427)
											bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(2427)
											if ((tmp42)){
												HX_STACK_LINE(2427)
												tmp43 = col;
											}
											else{
												HX_STACK_LINE(2427)
												tmp43 = false;
											}
											HX_STACK_LINE(2427)
											if ((tmp43)){
												HX_STACK_LINE(2427)
												::nape::phys::Body tmp44 = body;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(2427)
												ret->push(tmp44);
											}
											else{
												HX_STACK_LINE(2428)
												bool tmp44 = col;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(2428)
												bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(2428)
												if ((tmp45)){
													HX_STACK_LINE(2429)
													::nape::phys::Body tmp46 = body;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(2429)
													ret->remove(tmp46);
													HX_STACK_LINE(2430)
													::nape::phys::BodyList tmp47 = this->failed;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(2430)
													::nape::phys::Body tmp48 = body;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(2430)
													tmp47->push(tmp48);
												}
											}
										}
									}
									else{
										HX_STACK_LINE(2434)
										::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2434)
										bool tmp32 = ret->has(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2434)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2434)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2434)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2434)
										if ((tmp34)){
											HX_STACK_LINE(2434)
											::zpp_nape::shape::ZPP_Shape tmp36 = node->shape;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2434)
											::nape::shape::Shape tmp37 = this->aabbShape;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2434)
											::nape::shape::Shape tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2434)
											::zpp_nape::shape::ZPP_Shape tmp39 = tmp38->zpp_inner;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2434)
											::zpp_nape::shape::ZPP_Shape tmp40 = tmp36;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2434)
											::zpp_nape::shape::ZPP_Shape tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2434)
											tmp35 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp40,tmp41);
										}
										else{
											HX_STACK_LINE(2434)
											tmp35 = false;
										}
										HX_STACK_LINE(2434)
										if ((tmp35)){
											HX_STACK_LINE(2435)
											::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2435)
											ret->push(tmp36);
										}
									}
								}
								else{
									HX_STACK_LINE(2439)
									bool tmp30 = containment;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2439)
									if ((tmp30)){
										HX_STACK_LINE(2440)
										::nape::phys::BodyList tmp31 = this->failed;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2440)
										::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2440)
										bool tmp33 = tmp31->has(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2440)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2440)
										if ((tmp34)){
											HX_STACK_LINE(2441)
											bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(2441)
											{
												HX_STACK_LINE(2441)
												::zpp_nape::geom::ZPP_AABB tmp36 = node->shape->aabb;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(2441)
												::zpp_nape::geom::ZPP_AABB x = tmp36;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2441)
												bool tmp37 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(2441)
												bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(2441)
												bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(2441)
												if ((tmp38)){
													HX_STACK_LINE(2441)
													tmp39 = (x->miny >= ab->miny);
												}
												else{
													HX_STACK_LINE(2441)
													tmp39 = false;
												}
												HX_STACK_LINE(2441)
												bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(2441)
												bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2441)
												if ((tmp40)){
													HX_STACK_LINE(2441)
													tmp41 = (x->maxx <= ab->maxx);
												}
												else{
													HX_STACK_LINE(2441)
													tmp41 = false;
												}
												HX_STACK_LINE(2441)
												if ((tmp41)){
													HX_STACK_LINE(2441)
													tmp35 = (x->maxy <= ab->maxy);
												}
												else{
													HX_STACK_LINE(2441)
													tmp35 = false;
												}
											}
											HX_STACK_LINE(2441)
											bool col = tmp35;		HX_STACK_VAR(col,"col");
											HX_STACK_LINE(2442)
											::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2442)
											bool tmp37 = ret->has(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2442)
											bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2442)
											bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2442)
											bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2442)
											if ((tmp39)){
												HX_STACK_LINE(2442)
												tmp40 = col;
											}
											else{
												HX_STACK_LINE(2442)
												tmp40 = false;
											}
											HX_STACK_LINE(2442)
											if ((tmp40)){
												HX_STACK_LINE(2442)
												::nape::phys::Body tmp41 = body;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2442)
												ret->push(tmp41);
											}
											else{
												HX_STACK_LINE(2443)
												bool tmp41 = col;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(2443)
												bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(2443)
												if ((tmp42)){
													HX_STACK_LINE(2444)
													::nape::phys::Body tmp43 = body;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(2444)
													ret->remove(tmp43);
													HX_STACK_LINE(2445)
													::nape::phys::BodyList tmp44 = this->failed;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(2445)
													::nape::phys::Body tmp45 = body;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(2445)
													tmp44->push(tmp45);
												}
											}
										}
									}
									else{
										HX_STACK_LINE(2449)
										::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(2449)
										bool tmp32 = ret->has(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(2449)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2449)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2449)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2449)
										if ((tmp34)){
											HX_STACK_LINE(2449)
											::zpp_nape::geom::ZPP_AABB tmp36 = node->shape->aabb;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2449)
											::zpp_nape::geom::ZPP_AABB tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2449)
											::zpp_nape::geom::ZPP_AABB x = tmp37;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(2449)
											bool tmp38 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2449)
											bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(2449)
											bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(2449)
											bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2449)
											bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2449)
											if ((tmp42)){
												HX_STACK_LINE(2449)
												bool tmp43 = (x->miny >= ab->miny);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(2449)
												tmp41 = tmp43;
											}
											else{
												HX_STACK_LINE(2449)
												tmp41 = false;
											}
											HX_STACK_LINE(2449)
											bool tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(2449)
											bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(2449)
											bool tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(2449)
											if ((tmp45)){
												HX_STACK_LINE(2449)
												bool tmp46 = (x->maxx <= ab->maxx);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(2449)
												tmp44 = tmp46;
											}
											else{
												HX_STACK_LINE(2449)
												tmp44 = false;
											}
											HX_STACK_LINE(2449)
											bool tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(2449)
											if ((tmp46)){
												HX_STACK_LINE(2449)
												tmp35 = (x->maxy <= ab->maxy);
											}
											else{
												HX_STACK_LINE(2449)
												tmp35 = false;
											}
										}
										else{
											HX_STACK_LINE(2449)
											tmp35 = false;
										}
										HX_STACK_LINE(2449)
										if ((tmp35)){
											HX_STACK_LINE(2450)
											::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2450)
											ret->push(tmp36);
										}
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2457)
							bool tmp25 = (node->child1 != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2457)
							if ((tmp25)){
								HX_STACK_LINE(2457)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = this->treeStack;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2457)
								::zpp_nape::space::ZPP_AABBNode tmp27 = node->child1;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2457)
								tmp26->add(tmp27);
							}
							HX_STACK_LINE(2458)
							bool tmp26 = (node->child2 != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2458)
							if ((tmp26)){
								HX_STACK_LINE(2458)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp27 = this->treeStack;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2458)
								::zpp_nape::space::ZPP_AABBNode tmp28 = node->child2;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2458)
								tmp27->add(tmp28);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2465)
	::nape::phys::BodyList tmp7 = this->failed;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2465)
	tmp7->clear();
	HX_STACK_LINE(2466)
	::nape::phys::BodyList tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2466)
	return tmp8;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","shapesInCircle",0xd65dc665,"zpp_nape.space.ZPP_DynAABBPhase.shapesInCircle","zpp_nape/space/DynAABBPhase.hx",2468,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2469)
	this->sync_broadphase();
	HX_STACK_LINE(2470)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2470)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2470)
	Float tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2470)
	this->updateCircShape(tmp,tmp1,tmp2);
	HX_STACK_LINE(2471)
	::nape::shape::Shape tmp3 = this->circShape;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2471)
	::zpp_nape::geom::ZPP_AABB tmp4 = tmp3->zpp_inner->aabb;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2471)
	::zpp_nape::geom::ZPP_AABB ab = tmp4;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2472)
	bool tmp5 = (output == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2472)
	::nape::shape::ShapeList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2472)
	if ((tmp5)){
		HX_STACK_LINE(2472)
		tmp6 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(2472)
		tmp6 = output;
	}
	HX_STACK_LINE(2472)
	::nape::shape::ShapeList ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2474)
	{
		HX_STACK_LINE(2475)
		::zpp_nape::space::ZPP_AABBTree tmp7 = this->stree;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2475)
		::zpp_nape::space::ZPP_AABBNode tmp8 = tmp7->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2475)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2475)
		if ((tmp9)){
			HX_STACK_LINE(2476)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = this->treeStack;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2476)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2476)
			if ((tmp11)){
				HX_STACK_LINE(2476)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2476)
				this->treeStack = tmp12;
			}
			HX_STACK_LINE(2477)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = this->treeStack;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2477)
			::zpp_nape::space::ZPP_AABBTree tmp13 = this->stree;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2477)
			::zpp_nape::space::ZPP_AABBNode tmp14 = tmp13->root;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2477)
			tmp12->add(tmp14);
			HX_STACK_LINE(2478)
			while((true)){
				HX_STACK_LINE(2478)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp15 = this->treeStack;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2478)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp16 = tmp15->head;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2478)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2478)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2478)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2478)
				if ((tmp19)){
					HX_STACK_LINE(2478)
					break;
				}
				HX_STACK_LINE(2479)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp20 = this->treeStack;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2479)
				::zpp_nape::space::ZPP_AABBNode tmp21 = tmp20->pop_unsafe();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2479)
				::zpp_nape::space::ZPP_AABBNode node = tmp21;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2488)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2488)
				{
					HX_STACK_LINE(2488)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2488)
					bool tmp23 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2488)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2488)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2488)
					if ((tmp24)){
						HX_STACK_LINE(2488)
						tmp25 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2488)
						tmp25 = false;
					}
					HX_STACK_LINE(2488)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2488)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2488)
					if ((tmp26)){
						HX_STACK_LINE(2488)
						tmp27 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2488)
						tmp27 = false;
					}
					HX_STACK_LINE(2488)
					if ((tmp27)){
						HX_STACK_LINE(2488)
						tmp22 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2488)
						tmp22 = false;
					}
				}
				HX_STACK_LINE(2488)
				if ((tmp22)){
					HX_STACK_LINE(2489)
					bool tmp23 = (node->child1 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2489)
					if ((tmp23)){
						HX_STACK_LINE(2491)
						bool tmp24 = (filter == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2491)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2491)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2491)
						if ((tmp25)){
							HX_STACK_LINE(2491)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = node->shape->filter;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2491)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2491)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2491)
							int tmp29 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2491)
							int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2491)
							bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2491)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2491)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2491)
							if ((tmp33)){
								HX_STACK_LINE(2491)
								int tmp34 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2491)
								int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2491)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2491)
								tmp26 = (tmp36 != (int)0);
							}
							else{
								HX_STACK_LINE(2491)
								tmp26 = false;
							}
						}
						else{
							HX_STACK_LINE(2491)
							tmp26 = true;
						}
						HX_STACK_LINE(2491)
						if ((tmp26)){
							HX_STACK_LINE(2492)
							bool tmp27 = containment;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2492)
							if ((tmp27)){
								HX_STACK_LINE(2493)
								::nape::shape::Shape tmp28 = this->circShape;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2493)
								::zpp_nape::shape::ZPP_Shape tmp29 = tmp28->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2493)
								::zpp_nape::shape::ZPP_Shape tmp30 = node->shape;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2493)
								bool tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2493)
								if ((tmp31)){
									HX_STACK_LINE(2493)
									::nape::shape::Shape tmp32 = node->shape->outer;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2493)
									ret->push(tmp32);
								}
							}
							else{
								HX_STACK_LINE(2495)
								::zpp_nape::shape::ZPP_Shape tmp28 = node->shape;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2495)
								::nape::shape::Shape tmp29 = this->circShape;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2495)
								::zpp_nape::shape::ZPP_Shape tmp30 = tmp29->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2495)
								bool tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp28,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2495)
								if ((tmp31)){
									HX_STACK_LINE(2495)
									::nape::shape::Shape tmp32 = node->shape->outer;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2495)
									ret->push(tmp32);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2500)
						bool tmp24 = (node->child1 != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2500)
						if ((tmp24)){
							HX_STACK_LINE(2500)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp25 = this->treeStack;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2500)
							::zpp_nape::space::ZPP_AABBNode tmp26 = node->child1;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2500)
							tmp25->add(tmp26);
						}
						HX_STACK_LINE(2501)
						bool tmp25 = (node->child2 != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2501)
						if ((tmp25)){
							HX_STACK_LINE(2501)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = this->treeStack;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2501)
							::zpp_nape::space::ZPP_AABBNode tmp27 = node->child2;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2501)
							tmp26->add(tmp27);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2509)
	{
		HX_STACK_LINE(2510)
		::zpp_nape::space::ZPP_AABBTree tmp7 = this->dtree;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2510)
		::zpp_nape::space::ZPP_AABBNode tmp8 = tmp7->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2510)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2510)
		if ((tmp9)){
			HX_STACK_LINE(2511)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = this->treeStack;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2511)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2511)
			if ((tmp11)){
				HX_STACK_LINE(2511)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2511)
				this->treeStack = tmp12;
			}
			HX_STACK_LINE(2512)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = this->treeStack;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2512)
			::zpp_nape::space::ZPP_AABBTree tmp13 = this->dtree;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2512)
			::zpp_nape::space::ZPP_AABBNode tmp14 = tmp13->root;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2512)
			tmp12->add(tmp14);
			HX_STACK_LINE(2513)
			while((true)){
				HX_STACK_LINE(2513)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp15 = this->treeStack;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2513)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp16 = tmp15->head;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2513)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2513)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2513)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2513)
				if ((tmp19)){
					HX_STACK_LINE(2513)
					break;
				}
				HX_STACK_LINE(2514)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp20 = this->treeStack;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2514)
				::zpp_nape::space::ZPP_AABBNode tmp21 = tmp20->pop_unsafe();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2514)
				::zpp_nape::space::ZPP_AABBNode node = tmp21;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2523)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2523)
				{
					HX_STACK_LINE(2523)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2523)
					bool tmp23 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2523)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2523)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2523)
					if ((tmp24)){
						HX_STACK_LINE(2523)
						tmp25 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2523)
						tmp25 = false;
					}
					HX_STACK_LINE(2523)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2523)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2523)
					if ((tmp26)){
						HX_STACK_LINE(2523)
						tmp27 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2523)
						tmp27 = false;
					}
					HX_STACK_LINE(2523)
					if ((tmp27)){
						HX_STACK_LINE(2523)
						tmp22 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2523)
						tmp22 = false;
					}
				}
				HX_STACK_LINE(2523)
				if ((tmp22)){
					HX_STACK_LINE(2524)
					bool tmp23 = (node->child1 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2524)
					if ((tmp23)){
						HX_STACK_LINE(2526)
						bool tmp24 = (filter == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2526)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2526)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2526)
						if ((tmp25)){
							HX_STACK_LINE(2526)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = node->shape->filter;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2526)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2526)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2526)
							int tmp29 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2526)
							int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2526)
							bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2526)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2526)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2526)
							if ((tmp33)){
								HX_STACK_LINE(2526)
								int tmp34 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2526)
								int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2526)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2526)
								tmp26 = (tmp36 != (int)0);
							}
							else{
								HX_STACK_LINE(2526)
								tmp26 = false;
							}
						}
						else{
							HX_STACK_LINE(2526)
							tmp26 = true;
						}
						HX_STACK_LINE(2526)
						if ((tmp26)){
							HX_STACK_LINE(2527)
							bool tmp27 = containment;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2527)
							if ((tmp27)){
								HX_STACK_LINE(2528)
								::nape::shape::Shape tmp28 = this->circShape;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2528)
								::zpp_nape::shape::ZPP_Shape tmp29 = tmp28->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2528)
								::zpp_nape::shape::ZPP_Shape tmp30 = node->shape;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2528)
								bool tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2528)
								if ((tmp31)){
									HX_STACK_LINE(2528)
									::nape::shape::Shape tmp32 = node->shape->outer;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2528)
									ret->push(tmp32);
								}
							}
							else{
								HX_STACK_LINE(2530)
								::zpp_nape::shape::ZPP_Shape tmp28 = node->shape;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2530)
								::nape::shape::Shape tmp29 = this->circShape;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2530)
								::zpp_nape::shape::ZPP_Shape tmp30 = tmp29->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2530)
								bool tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp28,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2530)
								if ((tmp31)){
									HX_STACK_LINE(2530)
									::nape::shape::Shape tmp32 = node->shape->outer;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2530)
									ret->push(tmp32);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2535)
						bool tmp24 = (node->child1 != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2535)
						if ((tmp24)){
							HX_STACK_LINE(2535)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp25 = this->treeStack;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2535)
							::zpp_nape::space::ZPP_AABBNode tmp26 = node->child1;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2535)
							tmp25->add(tmp26);
						}
						HX_STACK_LINE(2536)
						bool tmp25 = (node->child2 != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2536)
						if ((tmp25)){
							HX_STACK_LINE(2536)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp26 = this->treeStack;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2536)
							::zpp_nape::space::ZPP_AABBNode tmp27 = node->child2;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2536)
							tmp26->add(tmp27);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2543)
	::nape::shape::ShapeList tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2543)
	return tmp7;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","bodiesInCircle",0x104805b3,"zpp_nape.space.ZPP_DynAABBPhase.bodiesInCircle","zpp_nape/space/DynAABBPhase.hx",2545,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2546)
	this->sync_broadphase();
	HX_STACK_LINE(2547)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2547)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2547)
	Float tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2547)
	this->updateCircShape(tmp,tmp1,tmp2);
	HX_STACK_LINE(2548)
	::nape::shape::Shape tmp3 = this->circShape;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2548)
	::zpp_nape::geom::ZPP_AABB tmp4 = tmp3->zpp_inner->aabb;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2548)
	::zpp_nape::geom::ZPP_AABB ab = tmp4;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2549)
	bool tmp5 = (output == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2549)
	::nape::phys::BodyList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2549)
	if ((tmp5)){
		HX_STACK_LINE(2549)
		tmp6 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(2549)
		tmp6 = output;
	}
	HX_STACK_LINE(2549)
	::nape::phys::BodyList ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2550)
	::nape::phys::BodyList tmp7 = this->failed;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2550)
	bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2550)
	if ((tmp8)){
		HX_STACK_LINE(2550)
		::nape::phys::BodyList tmp9 = ::nape::phys::BodyList_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2550)
		this->failed = tmp9;
	}
	HX_STACK_LINE(2552)
	{
		HX_STACK_LINE(2553)
		::zpp_nape::space::ZPP_AABBTree tmp9 = this->stree;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2553)
		::zpp_nape::space::ZPP_AABBNode tmp10 = tmp9->root;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2553)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2553)
		if ((tmp11)){
			HX_STACK_LINE(2554)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = this->treeStack;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2554)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2554)
			if ((tmp13)){
				HX_STACK_LINE(2554)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2554)
				this->treeStack = tmp14;
			}
			HX_STACK_LINE(2555)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = this->treeStack;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2555)
			::zpp_nape::space::ZPP_AABBTree tmp15 = this->stree;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2555)
			::zpp_nape::space::ZPP_AABBNode tmp16 = tmp15->root;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2555)
			tmp14->add(tmp16);
			HX_STACK_LINE(2556)
			while((true)){
				HX_STACK_LINE(2556)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp17 = this->treeStack;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2556)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp18 = tmp17->head;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2556)
				bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2556)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2556)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2556)
				if ((tmp21)){
					HX_STACK_LINE(2556)
					break;
				}
				HX_STACK_LINE(2557)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2557)
				::zpp_nape::space::ZPP_AABBNode tmp23 = tmp22->pop_unsafe();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2557)
				::zpp_nape::space::ZPP_AABBNode node = tmp23;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2566)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2566)
				{
					HX_STACK_LINE(2566)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2566)
					bool tmp25 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2566)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2566)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2566)
					if ((tmp26)){
						HX_STACK_LINE(2566)
						tmp27 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2566)
						tmp27 = false;
					}
					HX_STACK_LINE(2566)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2566)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2566)
					if ((tmp28)){
						HX_STACK_LINE(2566)
						tmp29 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2566)
						tmp29 = false;
					}
					HX_STACK_LINE(2566)
					if ((tmp29)){
						HX_STACK_LINE(2566)
						tmp24 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2566)
						tmp24 = false;
					}
				}
				HX_STACK_LINE(2566)
				if ((tmp24)){
					HX_STACK_LINE(2567)
					bool tmp25 = (node->child1 == null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2567)
					if ((tmp25)){
						HX_STACK_LINE(2569)
						::zpp_nape::phys::ZPP_Body tmp26 = node->shape->body;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2569)
						::nape::phys::Body body = tmp26->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2570)
						bool tmp27 = (filter == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2570)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2570)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2570)
						if ((tmp28)){
							HX_STACK_LINE(2570)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp30 = node->shape->filter;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2570)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2570)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp31;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2570)
							int tmp32 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2570)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2570)
							bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(2570)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(2570)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(2570)
							if ((tmp36)){
								HX_STACK_LINE(2570)
								int tmp37 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2570)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(2570)
								int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(2570)
								tmp29 = (tmp39 != (int)0);
							}
							else{
								HX_STACK_LINE(2570)
								tmp29 = false;
							}
						}
						else{
							HX_STACK_LINE(2570)
							tmp29 = true;
						}
						HX_STACK_LINE(2570)
						if ((tmp29)){
							HX_STACK_LINE(2571)
							bool tmp30 = containment;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2571)
							if ((tmp30)){
								HX_STACK_LINE(2572)
								::nape::phys::BodyList tmp31 = this->failed;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2572)
								::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2572)
								bool tmp33 = tmp31->has(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2572)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2572)
								if ((tmp34)){
									HX_STACK_LINE(2573)
									::nape::shape::Shape tmp35 = this->circShape;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2573)
									::zpp_nape::shape::ZPP_Shape tmp36 = tmp35->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2573)
									::zpp_nape::shape::ZPP_Shape tmp37 = node->shape;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2573)
									bool tmp38 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2573)
									bool col = tmp38;		HX_STACK_VAR(col,"col");
									HX_STACK_LINE(2574)
									::nape::phys::Body tmp39 = body;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2574)
									bool tmp40 = ret->has(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2574)
									bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2574)
									bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(2574)
									bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(2574)
									if ((tmp42)){
										HX_STACK_LINE(2574)
										tmp43 = col;
									}
									else{
										HX_STACK_LINE(2574)
										tmp43 = false;
									}
									HX_STACK_LINE(2574)
									if ((tmp43)){
										HX_STACK_LINE(2574)
										::nape::phys::Body tmp44 = body;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(2574)
										ret->push(tmp44);
									}
									else{
										HX_STACK_LINE(2575)
										bool tmp44 = col;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(2575)
										bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(2575)
										if ((tmp45)){
											HX_STACK_LINE(2576)
											::nape::phys::Body tmp46 = body;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(2576)
											ret->remove(tmp46);
											HX_STACK_LINE(2577)
											::nape::phys::BodyList tmp47 = this->failed;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(2577)
											::nape::phys::Body tmp48 = body;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(2577)
											tmp47->push(tmp48);
										}
									}
								}
							}
							else{
								HX_STACK_LINE(2581)
								::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2581)
								bool tmp32 = ret->has(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2581)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2581)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2581)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2581)
								if ((tmp34)){
									HX_STACK_LINE(2581)
									::zpp_nape::shape::ZPP_Shape tmp36 = node->shape;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2581)
									::nape::shape::Shape tmp37 = this->circShape;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2581)
									::nape::shape::Shape tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2581)
									::zpp_nape::shape::ZPP_Shape tmp39 = tmp38->zpp_inner;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2581)
									::zpp_nape::shape::ZPP_Shape tmp40 = tmp36;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2581)
									::zpp_nape::shape::ZPP_Shape tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2581)
									tmp35 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp40,tmp41);
								}
								else{
									HX_STACK_LINE(2581)
									tmp35 = false;
								}
								HX_STACK_LINE(2581)
								if ((tmp35)){
									HX_STACK_LINE(2582)
									::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2582)
									ret->push(tmp36);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2588)
						bool tmp26 = (node->child1 != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2588)
						if ((tmp26)){
							HX_STACK_LINE(2588)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp27 = this->treeStack;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2588)
							::zpp_nape::space::ZPP_AABBNode tmp28 = node->child1;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2588)
							tmp27->add(tmp28);
						}
						HX_STACK_LINE(2589)
						bool tmp27 = (node->child2 != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2589)
						if ((tmp27)){
							HX_STACK_LINE(2589)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp28 = this->treeStack;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2589)
							::zpp_nape::space::ZPP_AABBNode tmp29 = node->child2;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2589)
							tmp28->add(tmp29);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2597)
	{
		HX_STACK_LINE(2598)
		::zpp_nape::space::ZPP_AABBTree tmp9 = this->dtree;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2598)
		::zpp_nape::space::ZPP_AABBNode tmp10 = tmp9->root;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2598)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2598)
		if ((tmp11)){
			HX_STACK_LINE(2599)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = this->treeStack;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2599)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2599)
			if ((tmp13)){
				HX_STACK_LINE(2599)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2599)
				this->treeStack = tmp14;
			}
			HX_STACK_LINE(2600)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = this->treeStack;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2600)
			::zpp_nape::space::ZPP_AABBTree tmp15 = this->dtree;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2600)
			::zpp_nape::space::ZPP_AABBNode tmp16 = tmp15->root;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2600)
			tmp14->add(tmp16);
			HX_STACK_LINE(2601)
			while((true)){
				HX_STACK_LINE(2601)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp17 = this->treeStack;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2601)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp18 = tmp17->head;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2601)
				bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2601)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2601)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2601)
				if ((tmp21)){
					HX_STACK_LINE(2601)
					break;
				}
				HX_STACK_LINE(2602)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2602)
				::zpp_nape::space::ZPP_AABBNode tmp23 = tmp22->pop_unsafe();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2602)
				::zpp_nape::space::ZPP_AABBNode node = tmp23;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2611)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2611)
				{
					HX_STACK_LINE(2611)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2611)
					bool tmp25 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2611)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2611)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2611)
					if ((tmp26)){
						HX_STACK_LINE(2611)
						tmp27 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2611)
						tmp27 = false;
					}
					HX_STACK_LINE(2611)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2611)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2611)
					if ((tmp28)){
						HX_STACK_LINE(2611)
						tmp29 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2611)
						tmp29 = false;
					}
					HX_STACK_LINE(2611)
					if ((tmp29)){
						HX_STACK_LINE(2611)
						tmp24 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2611)
						tmp24 = false;
					}
				}
				HX_STACK_LINE(2611)
				if ((tmp24)){
					HX_STACK_LINE(2612)
					bool tmp25 = (node->child1 == null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2612)
					if ((tmp25)){
						HX_STACK_LINE(2614)
						::zpp_nape::phys::ZPP_Body tmp26 = node->shape->body;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2614)
						::nape::phys::Body body = tmp26->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2615)
						bool tmp27 = (filter == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2615)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2615)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2615)
						if ((tmp28)){
							HX_STACK_LINE(2615)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp30 = node->shape->filter;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2615)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2615)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp31;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2615)
							int tmp32 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2615)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(2615)
							bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(2615)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(2615)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(2615)
							if ((tmp36)){
								HX_STACK_LINE(2615)
								int tmp37 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2615)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(2615)
								int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(2615)
								tmp29 = (tmp39 != (int)0);
							}
							else{
								HX_STACK_LINE(2615)
								tmp29 = false;
							}
						}
						else{
							HX_STACK_LINE(2615)
							tmp29 = true;
						}
						HX_STACK_LINE(2615)
						if ((tmp29)){
							HX_STACK_LINE(2616)
							bool tmp30 = containment;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2616)
							if ((tmp30)){
								HX_STACK_LINE(2617)
								::nape::phys::BodyList tmp31 = this->failed;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2617)
								::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2617)
								bool tmp33 = tmp31->has(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2617)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2617)
								if ((tmp34)){
									HX_STACK_LINE(2618)
									::nape::shape::Shape tmp35 = this->circShape;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2618)
									::zpp_nape::shape::ZPP_Shape tmp36 = tmp35->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2618)
									::zpp_nape::shape::ZPP_Shape tmp37 = node->shape;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2618)
									bool tmp38 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2618)
									bool col = tmp38;		HX_STACK_VAR(col,"col");
									HX_STACK_LINE(2619)
									::nape::phys::Body tmp39 = body;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2619)
									bool tmp40 = ret->has(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2619)
									bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2619)
									bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(2619)
									bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(2619)
									if ((tmp42)){
										HX_STACK_LINE(2619)
										tmp43 = col;
									}
									else{
										HX_STACK_LINE(2619)
										tmp43 = false;
									}
									HX_STACK_LINE(2619)
									if ((tmp43)){
										HX_STACK_LINE(2619)
										::nape::phys::Body tmp44 = body;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(2619)
										ret->push(tmp44);
									}
									else{
										HX_STACK_LINE(2620)
										bool tmp44 = col;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(2620)
										bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(2620)
										if ((tmp45)){
											HX_STACK_LINE(2621)
											::nape::phys::Body tmp46 = body;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(2621)
											ret->remove(tmp46);
											HX_STACK_LINE(2622)
											::nape::phys::BodyList tmp47 = this->failed;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(2622)
											::nape::phys::Body tmp48 = body;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(2622)
											tmp47->push(tmp48);
										}
									}
								}
							}
							else{
								HX_STACK_LINE(2626)
								::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2626)
								bool tmp32 = ret->has(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2626)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2626)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2626)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2626)
								if ((tmp34)){
									HX_STACK_LINE(2626)
									::zpp_nape::shape::ZPP_Shape tmp36 = node->shape;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2626)
									::nape::shape::Shape tmp37 = this->circShape;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2626)
									::nape::shape::Shape tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2626)
									::zpp_nape::shape::ZPP_Shape tmp39 = tmp38->zpp_inner;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(2626)
									::zpp_nape::shape::ZPP_Shape tmp40 = tmp36;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(2626)
									::zpp_nape::shape::ZPP_Shape tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(2626)
									tmp35 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp40,tmp41);
								}
								else{
									HX_STACK_LINE(2626)
									tmp35 = false;
								}
								HX_STACK_LINE(2626)
								if ((tmp35)){
									HX_STACK_LINE(2627)
									::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2627)
									ret->push(tmp36);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2633)
						bool tmp26 = (node->child1 != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2633)
						if ((tmp26)){
							HX_STACK_LINE(2633)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp27 = this->treeStack;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2633)
							::zpp_nape::space::ZPP_AABBNode tmp28 = node->child1;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2633)
							tmp27->add(tmp28);
						}
						HX_STACK_LINE(2634)
						bool tmp27 = (node->child2 != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2634)
						if ((tmp27)){
							HX_STACK_LINE(2634)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp28 = this->treeStack;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2634)
							::zpp_nape::space::ZPP_AABBNode tmp29 = node->child2;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2634)
							tmp28->add(tmp29);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2641)
	::nape::phys::BodyList tmp9 = this->failed;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2641)
	tmp9->clear();
	HX_STACK_LINE(2642)
	::nape::phys::BodyList tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2642)
	return tmp10;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInShape( ::zpp_nape::shape::ZPP_Shape shp,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","shapesInShape",0x7cb0306c,"zpp_nape.space.ZPP_DynAABBPhase.shapesInShape","zpp_nape/space/DynAABBPhase.hx",2644,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shp,"shp")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2645)
	this->sync_broadphase();
	HX_STACK_LINE(2646)
	::zpp_nape::shape::ZPP_Shape tmp = shp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2646)
	this->validateShape(tmp);
	HX_STACK_LINE(2647)
	::zpp_nape::geom::ZPP_AABB ab = shp->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2648)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2648)
	::nape::shape::ShapeList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2648)
	if ((tmp1)){
		HX_STACK_LINE(2648)
		tmp2 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(2648)
		tmp2 = output;
	}
	HX_STACK_LINE(2648)
	::nape::shape::ShapeList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2650)
	{
		HX_STACK_LINE(2651)
		::zpp_nape::space::ZPP_AABBTree tmp3 = this->stree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2651)
		::zpp_nape::space::ZPP_AABBNode tmp4 = tmp3->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2651)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2651)
		if ((tmp5)){
			HX_STACK_LINE(2652)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp6 = this->treeStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2652)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2652)
			if ((tmp7)){
				HX_STACK_LINE(2652)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2652)
				this->treeStack = tmp8;
			}
			HX_STACK_LINE(2653)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2653)
			::zpp_nape::space::ZPP_AABBTree tmp9 = this->stree;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2653)
			::zpp_nape::space::ZPP_AABBNode tmp10 = tmp9->root;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2653)
			tmp8->add(tmp10);
			HX_STACK_LINE(2654)
			while((true)){
				HX_STACK_LINE(2654)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp11 = this->treeStack;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2654)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2654)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2654)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2654)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2654)
				if ((tmp15)){
					HX_STACK_LINE(2654)
					break;
				}
				HX_STACK_LINE(2655)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp16 = this->treeStack;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2655)
				::zpp_nape::space::ZPP_AABBNode tmp17 = tmp16->pop_unsafe();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2655)
				::zpp_nape::space::ZPP_AABBNode node = tmp17;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2664)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2664)
				{
					HX_STACK_LINE(2664)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2664)
					bool tmp19 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2664)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2664)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2664)
					if ((tmp20)){
						HX_STACK_LINE(2664)
						tmp21 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2664)
						tmp21 = false;
					}
					HX_STACK_LINE(2664)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2664)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2664)
					if ((tmp22)){
						HX_STACK_LINE(2664)
						tmp23 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2664)
						tmp23 = false;
					}
					HX_STACK_LINE(2664)
					if ((tmp23)){
						HX_STACK_LINE(2664)
						tmp18 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2664)
						tmp18 = false;
					}
				}
				HX_STACK_LINE(2664)
				if ((tmp18)){
					HX_STACK_LINE(2665)
					bool tmp19 = (node->child1 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2665)
					if ((tmp19)){
						HX_STACK_LINE(2667)
						bool tmp20 = (filter == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2667)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2667)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2667)
						if ((tmp21)){
							HX_STACK_LINE(2667)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp23 = node->shape->filter;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2667)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2667)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp24;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2667)
							int tmp25 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2667)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2667)
							bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2667)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2667)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2667)
							if ((tmp29)){
								HX_STACK_LINE(2667)
								int tmp30 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2667)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2667)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2667)
								tmp22 = (tmp32 != (int)0);
							}
							else{
								HX_STACK_LINE(2667)
								tmp22 = false;
							}
						}
						else{
							HX_STACK_LINE(2667)
							tmp22 = true;
						}
						HX_STACK_LINE(2667)
						if ((tmp22)){
							HX_STACK_LINE(2668)
							bool tmp23 = containment;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2668)
							if ((tmp23)){
								HX_STACK_LINE(2669)
								::zpp_nape::shape::ZPP_Shape tmp24 = shp;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2669)
								::zpp_nape::shape::ZPP_Shape tmp25 = node->shape;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2669)
								bool tmp26 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2669)
								if ((tmp26)){
									HX_STACK_LINE(2669)
									::nape::shape::Shape tmp27 = node->shape->outer;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2669)
									ret->push(tmp27);
								}
							}
							else{
								HX_STACK_LINE(2671)
								::zpp_nape::shape::ZPP_Shape tmp24 = node->shape;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2671)
								::zpp_nape::shape::ZPP_Shape tmp25 = shp;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2671)
								bool tmp26 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2671)
								if ((tmp26)){
									HX_STACK_LINE(2671)
									::nape::shape::Shape tmp27 = node->shape->outer;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2671)
									ret->push(tmp27);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2676)
						bool tmp20 = (node->child1 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2676)
						if ((tmp20)){
							HX_STACK_LINE(2676)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp21 = this->treeStack;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2676)
							::zpp_nape::space::ZPP_AABBNode tmp22 = node->child1;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2676)
							tmp21->add(tmp22);
						}
						HX_STACK_LINE(2677)
						bool tmp21 = (node->child2 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2677)
						if ((tmp21)){
							HX_STACK_LINE(2677)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2677)
							::zpp_nape::space::ZPP_AABBNode tmp23 = node->child2;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2677)
							tmp22->add(tmp23);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2685)
	{
		HX_STACK_LINE(2686)
		::zpp_nape::space::ZPP_AABBTree tmp3 = this->dtree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2686)
		::zpp_nape::space::ZPP_AABBNode tmp4 = tmp3->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2686)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2686)
		if ((tmp5)){
			HX_STACK_LINE(2687)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp6 = this->treeStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2687)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2687)
			if ((tmp7)){
				HX_STACK_LINE(2687)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2687)
				this->treeStack = tmp8;
			}
			HX_STACK_LINE(2688)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2688)
			::zpp_nape::space::ZPP_AABBTree tmp9 = this->dtree;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2688)
			::zpp_nape::space::ZPP_AABBNode tmp10 = tmp9->root;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2688)
			tmp8->add(tmp10);
			HX_STACK_LINE(2689)
			while((true)){
				HX_STACK_LINE(2689)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp11 = this->treeStack;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2689)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2689)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2689)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2689)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2689)
				if ((tmp15)){
					HX_STACK_LINE(2689)
					break;
				}
				HX_STACK_LINE(2690)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp16 = this->treeStack;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2690)
				::zpp_nape::space::ZPP_AABBNode tmp17 = tmp16->pop_unsafe();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2690)
				::zpp_nape::space::ZPP_AABBNode node = tmp17;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2699)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2699)
				{
					HX_STACK_LINE(2699)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2699)
					bool tmp19 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2699)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2699)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2699)
					if ((tmp20)){
						HX_STACK_LINE(2699)
						tmp21 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2699)
						tmp21 = false;
					}
					HX_STACK_LINE(2699)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2699)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2699)
					if ((tmp22)){
						HX_STACK_LINE(2699)
						tmp23 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2699)
						tmp23 = false;
					}
					HX_STACK_LINE(2699)
					if ((tmp23)){
						HX_STACK_LINE(2699)
						tmp18 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2699)
						tmp18 = false;
					}
				}
				HX_STACK_LINE(2699)
				if ((tmp18)){
					HX_STACK_LINE(2700)
					bool tmp19 = (node->child1 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2700)
					if ((tmp19)){
						HX_STACK_LINE(2702)
						bool tmp20 = (filter == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2702)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2702)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2702)
						if ((tmp21)){
							HX_STACK_LINE(2702)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp23 = node->shape->filter;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2702)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2702)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp24;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2702)
							int tmp25 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2702)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2702)
							bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2702)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2702)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2702)
							if ((tmp29)){
								HX_STACK_LINE(2702)
								int tmp30 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2702)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2702)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2702)
								tmp22 = (tmp32 != (int)0);
							}
							else{
								HX_STACK_LINE(2702)
								tmp22 = false;
							}
						}
						else{
							HX_STACK_LINE(2702)
							tmp22 = true;
						}
						HX_STACK_LINE(2702)
						if ((tmp22)){
							HX_STACK_LINE(2703)
							bool tmp23 = containment;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2703)
							if ((tmp23)){
								HX_STACK_LINE(2704)
								::zpp_nape::shape::ZPP_Shape tmp24 = shp;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2704)
								::zpp_nape::shape::ZPP_Shape tmp25 = node->shape;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2704)
								bool tmp26 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2704)
								if ((tmp26)){
									HX_STACK_LINE(2704)
									::nape::shape::Shape tmp27 = node->shape->outer;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2704)
									ret->push(tmp27);
								}
							}
							else{
								HX_STACK_LINE(2706)
								::zpp_nape::shape::ZPP_Shape tmp24 = node->shape;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2706)
								::zpp_nape::shape::ZPP_Shape tmp25 = shp;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2706)
								bool tmp26 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2706)
								if ((tmp26)){
									HX_STACK_LINE(2706)
									::nape::shape::Shape tmp27 = node->shape->outer;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(2706)
									ret->push(tmp27);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2711)
						bool tmp20 = (node->child1 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2711)
						if ((tmp20)){
							HX_STACK_LINE(2711)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp21 = this->treeStack;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2711)
							::zpp_nape::space::ZPP_AABBNode tmp22 = node->child1;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2711)
							tmp21->add(tmp22);
						}
						HX_STACK_LINE(2712)
						bool tmp21 = (node->child2 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2712)
						if ((tmp21)){
							HX_STACK_LINE(2712)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp22 = this->treeStack;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2712)
							::zpp_nape::space::ZPP_AABBNode tmp23 = node->child2;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2712)
							tmp22->add(tmp23);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2719)
	::nape::shape::ShapeList tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2719)
	return tmp3;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInShape( ::zpp_nape::shape::ZPP_Shape shp,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","bodiesInShape",0xe7b5d4de,"zpp_nape.space.ZPP_DynAABBPhase.bodiesInShape","zpp_nape/space/DynAABBPhase.hx",2721,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shp,"shp")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2722)
	this->sync_broadphase();
	HX_STACK_LINE(2723)
	::zpp_nape::shape::ZPP_Shape tmp = shp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2723)
	this->validateShape(tmp);
	HX_STACK_LINE(2724)
	::zpp_nape::geom::ZPP_AABB ab = shp->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2725)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2725)
	::nape::phys::BodyList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2725)
	if ((tmp1)){
		HX_STACK_LINE(2725)
		tmp2 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(2725)
		tmp2 = output;
	}
	HX_STACK_LINE(2725)
	::nape::phys::BodyList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2726)
	::nape::phys::BodyList tmp3 = this->failed;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2726)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2726)
	if ((tmp4)){
		HX_STACK_LINE(2726)
		::nape::phys::BodyList tmp5 = ::nape::phys::BodyList_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2726)
		this->failed = tmp5;
	}
	HX_STACK_LINE(2728)
	{
		HX_STACK_LINE(2729)
		::zpp_nape::space::ZPP_AABBTree tmp5 = this->stree;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2729)
		::zpp_nape::space::ZPP_AABBNode tmp6 = tmp5->root;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2729)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2729)
		if ((tmp7)){
			HX_STACK_LINE(2730)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2730)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2730)
			if ((tmp9)){
				HX_STACK_LINE(2730)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2730)
				this->treeStack = tmp10;
			}
			HX_STACK_LINE(2731)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = this->treeStack;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2731)
			::zpp_nape::space::ZPP_AABBTree tmp11 = this->stree;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2731)
			::zpp_nape::space::ZPP_AABBNode tmp12 = tmp11->root;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2731)
			tmp10->add(tmp12);
			HX_STACK_LINE(2732)
			while((true)){
				HX_STACK_LINE(2732)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp13 = this->treeStack;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2732)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp14 = tmp13->head;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2732)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2732)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2732)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2732)
				if ((tmp17)){
					HX_STACK_LINE(2732)
					break;
				}
				HX_STACK_LINE(2733)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp18 = this->treeStack;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2733)
				::zpp_nape::space::ZPP_AABBNode tmp19 = tmp18->pop_unsafe();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2733)
				::zpp_nape::space::ZPP_AABBNode node = tmp19;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2742)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2742)
				{
					HX_STACK_LINE(2742)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2742)
					bool tmp21 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2742)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2742)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2742)
					if ((tmp22)){
						HX_STACK_LINE(2742)
						tmp23 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2742)
						tmp23 = false;
					}
					HX_STACK_LINE(2742)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2742)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2742)
					if ((tmp24)){
						HX_STACK_LINE(2742)
						tmp25 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2742)
						tmp25 = false;
					}
					HX_STACK_LINE(2742)
					if ((tmp25)){
						HX_STACK_LINE(2742)
						tmp20 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2742)
						tmp20 = false;
					}
				}
				HX_STACK_LINE(2742)
				if ((tmp20)){
					HX_STACK_LINE(2743)
					bool tmp21 = (node->child1 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2743)
					if ((tmp21)){
						HX_STACK_LINE(2745)
						::zpp_nape::phys::ZPP_Body tmp22 = node->shape->body;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2745)
						::nape::phys::Body body = tmp22->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2746)
						bool tmp23 = (filter == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2746)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2746)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2746)
						if ((tmp24)){
							HX_STACK_LINE(2746)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp26 = node->shape->filter;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2746)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2746)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp27;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2746)
							int tmp28 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2746)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2746)
							bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2746)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2746)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2746)
							if ((tmp32)){
								HX_STACK_LINE(2746)
								int tmp33 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2746)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2746)
								int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2746)
								tmp25 = (tmp35 != (int)0);
							}
							else{
								HX_STACK_LINE(2746)
								tmp25 = false;
							}
						}
						else{
							HX_STACK_LINE(2746)
							tmp25 = true;
						}
						HX_STACK_LINE(2746)
						if ((tmp25)){
							HX_STACK_LINE(2747)
							bool tmp26 = containment;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2747)
							if ((tmp26)){
								HX_STACK_LINE(2748)
								::nape::phys::BodyList tmp27 = this->failed;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2748)
								::nape::phys::Body tmp28 = body;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2748)
								bool tmp29 = tmp27->has(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2748)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2748)
								if ((tmp30)){
									HX_STACK_LINE(2749)
									::zpp_nape::shape::ZPP_Shape tmp31 = shp;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2749)
									::zpp_nape::shape::ZPP_Shape tmp32 = node->shape;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2749)
									bool tmp33 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2749)
									bool col = tmp33;		HX_STACK_VAR(col,"col");
									HX_STACK_LINE(2750)
									::nape::phys::Body tmp34 = body;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2750)
									bool tmp35 = ret->has(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2750)
									bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2750)
									bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2750)
									bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2750)
									if ((tmp37)){
										HX_STACK_LINE(2750)
										tmp38 = col;
									}
									else{
										HX_STACK_LINE(2750)
										tmp38 = false;
									}
									HX_STACK_LINE(2750)
									if ((tmp38)){
										HX_STACK_LINE(2750)
										::nape::phys::Body tmp39 = body;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2750)
										ret->push(tmp39);
									}
									else{
										HX_STACK_LINE(2751)
										bool tmp39 = col;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2751)
										bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(2751)
										if ((tmp40)){
											HX_STACK_LINE(2752)
											::nape::phys::Body tmp41 = body;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2752)
											ret->remove(tmp41);
											HX_STACK_LINE(2753)
											::nape::phys::BodyList tmp42 = this->failed;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2753)
											::nape::phys::Body tmp43 = body;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(2753)
											tmp42->push(tmp43);
										}
									}
								}
							}
							else{
								HX_STACK_LINE(2757)
								::nape::phys::Body tmp27 = body;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2757)
								bool tmp28 = ret->has(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2757)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2757)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2757)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2757)
								if ((tmp30)){
									HX_STACK_LINE(2757)
									::zpp_nape::shape::ZPP_Shape tmp32 = node->shape;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2757)
									::zpp_nape::shape::ZPP_Shape tmp33 = shp;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2757)
									::zpp_nape::shape::ZPP_Shape tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2757)
									::zpp_nape::shape::ZPP_Shape tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2757)
									tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp34,tmp35);
								}
								else{
									HX_STACK_LINE(2757)
									tmp31 = false;
								}
								HX_STACK_LINE(2757)
								if ((tmp31)){
									HX_STACK_LINE(2758)
									::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2758)
									ret->push(tmp32);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2764)
						bool tmp22 = (node->child1 != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2764)
						if ((tmp22)){
							HX_STACK_LINE(2764)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp23 = this->treeStack;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2764)
							::zpp_nape::space::ZPP_AABBNode tmp24 = node->child1;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2764)
							tmp23->add(tmp24);
						}
						HX_STACK_LINE(2765)
						bool tmp23 = (node->child2 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2765)
						if ((tmp23)){
							HX_STACK_LINE(2765)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = this->treeStack;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2765)
							::zpp_nape::space::ZPP_AABBNode tmp25 = node->child2;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2765)
							tmp24->add(tmp25);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2773)
	{
		HX_STACK_LINE(2774)
		::zpp_nape::space::ZPP_AABBTree tmp5 = this->dtree;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2774)
		::zpp_nape::space::ZPP_AABBNode tmp6 = tmp5->root;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2774)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2774)
		if ((tmp7)){
			HX_STACK_LINE(2775)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp8 = this->treeStack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2775)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2775)
			if ((tmp9)){
				HX_STACK_LINE(2775)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2775)
				this->treeStack = tmp10;
			}
			HX_STACK_LINE(2776)
			::zpp_nape::util::ZNPList_ZPP_AABBNode tmp10 = this->treeStack;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2776)
			::zpp_nape::space::ZPP_AABBTree tmp11 = this->dtree;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2776)
			::zpp_nape::space::ZPP_AABBNode tmp12 = tmp11->root;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2776)
			tmp10->add(tmp12);
			HX_STACK_LINE(2777)
			while((true)){
				HX_STACK_LINE(2777)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp13 = this->treeStack;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2777)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp14 = tmp13->head;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2777)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2777)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2777)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2777)
				if ((tmp17)){
					HX_STACK_LINE(2777)
					break;
				}
				HX_STACK_LINE(2778)
				::zpp_nape::util::ZNPList_ZPP_AABBNode tmp18 = this->treeStack;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2778)
				::zpp_nape::space::ZPP_AABBNode tmp19 = tmp18->pop_unsafe();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2778)
				::zpp_nape::space::ZPP_AABBNode node = tmp19;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(2787)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2787)
				{
					HX_STACK_LINE(2787)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2787)
					bool tmp21 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2787)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2787)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2787)
					if ((tmp22)){
						HX_STACK_LINE(2787)
						tmp23 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(2787)
						tmp23 = false;
					}
					HX_STACK_LINE(2787)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2787)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2787)
					if ((tmp24)){
						HX_STACK_LINE(2787)
						tmp25 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(2787)
						tmp25 = false;
					}
					HX_STACK_LINE(2787)
					if ((tmp25)){
						HX_STACK_LINE(2787)
						tmp20 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(2787)
						tmp20 = false;
					}
				}
				HX_STACK_LINE(2787)
				if ((tmp20)){
					HX_STACK_LINE(2788)
					bool tmp21 = (node->child1 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2788)
					if ((tmp21)){
						HX_STACK_LINE(2790)
						::zpp_nape::phys::ZPP_Body tmp22 = node->shape->body;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2790)
						::nape::phys::Body body = tmp22->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2791)
						bool tmp23 = (filter == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2791)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2791)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2791)
						if ((tmp24)){
							HX_STACK_LINE(2791)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp26 = node->shape->filter;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2791)
							::zpp_nape::dynamics::ZPP_InteractionFilter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2791)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp27;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2791)
							int tmp28 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2791)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2791)
							bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2791)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(2791)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(2791)
							if ((tmp32)){
								HX_STACK_LINE(2791)
								int tmp33 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(2791)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(2791)
								int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2791)
								tmp25 = (tmp35 != (int)0);
							}
							else{
								HX_STACK_LINE(2791)
								tmp25 = false;
							}
						}
						else{
							HX_STACK_LINE(2791)
							tmp25 = true;
						}
						HX_STACK_LINE(2791)
						if ((tmp25)){
							HX_STACK_LINE(2792)
							bool tmp26 = containment;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2792)
							if ((tmp26)){
								HX_STACK_LINE(2793)
								::nape::phys::BodyList tmp27 = this->failed;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2793)
								::nape::phys::Body tmp28 = body;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2793)
								bool tmp29 = tmp27->has(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2793)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2793)
								if ((tmp30)){
									HX_STACK_LINE(2794)
									::zpp_nape::shape::ZPP_Shape tmp31 = shp;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2794)
									::zpp_nape::shape::ZPP_Shape tmp32 = node->shape;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2794)
									bool tmp33 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2794)
									bool col = tmp33;		HX_STACK_VAR(col,"col");
									HX_STACK_LINE(2795)
									::nape::phys::Body tmp34 = body;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2795)
									bool tmp35 = ret->has(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2795)
									bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(2795)
									bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(2795)
									bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(2795)
									if ((tmp37)){
										HX_STACK_LINE(2795)
										tmp38 = col;
									}
									else{
										HX_STACK_LINE(2795)
										tmp38 = false;
									}
									HX_STACK_LINE(2795)
									if ((tmp38)){
										HX_STACK_LINE(2795)
										::nape::phys::Body tmp39 = body;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2795)
										ret->push(tmp39);
									}
									else{
										HX_STACK_LINE(2796)
										bool tmp39 = col;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2796)
										bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(2796)
										if ((tmp40)){
											HX_STACK_LINE(2797)
											::nape::phys::Body tmp41 = body;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(2797)
											ret->remove(tmp41);
											HX_STACK_LINE(2798)
											::nape::phys::BodyList tmp42 = this->failed;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(2798)
											::nape::phys::Body tmp43 = body;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(2798)
											tmp42->push(tmp43);
										}
									}
								}
							}
							else{
								HX_STACK_LINE(2802)
								::nape::phys::Body tmp27 = body;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2802)
								bool tmp28 = ret->has(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2802)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2802)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2802)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2802)
								if ((tmp30)){
									HX_STACK_LINE(2802)
									::zpp_nape::shape::ZPP_Shape tmp32 = node->shape;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2802)
									::zpp_nape::shape::ZPP_Shape tmp33 = shp;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2802)
									::zpp_nape::shape::ZPP_Shape tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2802)
									::zpp_nape::shape::ZPP_Shape tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2802)
									tmp31 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp34,tmp35);
								}
								else{
									HX_STACK_LINE(2802)
									tmp31 = false;
								}
								HX_STACK_LINE(2802)
								if ((tmp31)){
									HX_STACK_LINE(2803)
									::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2803)
									ret->push(tmp32);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2809)
						bool tmp22 = (node->child1 != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2809)
						if ((tmp22)){
							HX_STACK_LINE(2809)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp23 = this->treeStack;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2809)
							::zpp_nape::space::ZPP_AABBNode tmp24 = node->child1;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2809)
							tmp23->add(tmp24);
						}
						HX_STACK_LINE(2810)
						bool tmp23 = (node->child2 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2810)
						if ((tmp23)){
							HX_STACK_LINE(2810)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp24 = this->treeStack;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2810)
							::zpp_nape::space::ZPP_AABBNode tmp25 = node->child2;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2810)
							tmp24->add(tmp25);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2817)
	::nape::phys::BodyList tmp5 = this->failed;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2817)
	tmp5->clear();
	HX_STACK_LINE(2818)
	::nape::phys::BodyList tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2818)
	return tmp6;
}


::nape::geom::RayResult ZPP_DynAABBPhase_obj::rayCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","rayCast",0x17a58fcb,"zpp_nape.space.ZPP_DynAABBPhase.rayCast","zpp_nape/space/DynAABBPhase.hx",2821,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(2822)
	::zpp_nape::util::ZNPList_ZPP_AABBNode tmp = this->openlist;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2822)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2822)
	if ((tmp1)){
		HX_STACK_LINE(2822)
		::zpp_nape::util::ZNPList_ZPP_AABBNode tmp2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2822)
		this->openlist = tmp2;
	}
	HX_STACK_LINE(2823)
	this->sync_broadphase();
	HX_STACK_LINE(2824)
	ray->validate_dir();
	HX_STACK_LINE(2825)
	Float mint = ray->maxdist;		HX_STACK_VAR(mint,"mint");
	HX_STACK_LINE(2826)
	{
		HX_STACK_LINE(2827)
		::zpp_nape::space::ZPP_AABBTree tmp2 = this->dtree;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2827)
		::zpp_nape::space::ZPP_AABBNode tmp3 = tmp2->root;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2827)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2827)
		if ((tmp4)){
			HX_STACK_LINE(2828)
			::zpp_nape::space::ZPP_AABBTree tmp5 = this->dtree;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2828)
			::zpp_nape::geom::ZPP_AABB tmp6 = tmp5->root->aabb;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2828)
			bool tmp7 = ray->aabbtest(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2828)
			if ((tmp7)){
				HX_STACK_LINE(2829)
				::zpp_nape::space::ZPP_AABBTree tmp8 = this->dtree;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2829)
				::zpp_nape::geom::ZPP_AABB tmp9 = tmp8->root->aabb;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2829)
				Float tmp10 = ray->aabbsect(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2829)
				Float t = tmp10;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2830)
				bool tmp11 = (t >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2830)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2830)
				if ((tmp11)){
					HX_STACK_LINE(2830)
					tmp12 = (t < mint);
				}
				else{
					HX_STACK_LINE(2830)
					tmp12 = false;
				}
				HX_STACK_LINE(2830)
				if ((tmp12)){
					HX_STACK_LINE(2831)
					::zpp_nape::space::ZPP_AABBTree tmp13 = this->dtree;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2831)
					tmp13->root->rayt = t;
					HX_STACK_LINE(2832)
					{
						HX_STACK_LINE(2833)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(2834)
						{
							HX_STACK_LINE(2835)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = this->openlist;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2835)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = tmp14->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(2836)
							while((true)){
								HX_STACK_LINE(2836)
								bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(2836)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2836)
								if ((tmp16)){
									HX_STACK_LINE(2836)
									break;
								}
								HX_STACK_LINE(2837)
								::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2838)
								{
									HX_STACK_LINE(2839)
									::zpp_nape::space::ZPP_AABBTree tmp17 = this->dtree;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2839)
									Float tmp18 = tmp17->root->rayt;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2839)
									Float tmp19 = j->rayt;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2839)
									bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2839)
									if ((tmp20)){
										HX_STACK_LINE(2839)
										break;
									}
									HX_STACK_LINE(2840)
									pre = cx_ite;
								}
								HX_STACK_LINE(2842)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(2845)
						{
							HX_STACK_LINE(2845)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = this->openlist;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2845)
							::zpp_nape::util::ZNPList_ZPP_AABBNode _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2845)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2845)
							{
								HX_STACK_LINE(2845)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(2845)
								{
									HX_STACK_LINE(2845)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp16 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2845)
									bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2845)
									if ((tmp17)){
										HX_STACK_LINE(2845)
										::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp18 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2845)
										ret = tmp18;
									}
									else{
										HX_STACK_LINE(2845)
										::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp18 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2845)
										ret = tmp18;
										HX_STACK_LINE(2845)
										::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
										HX_STACK_LINE(2845)
										ret->next = null();
									}
									HX_STACK_LINE(2845)
									Dynamic();
								}
								HX_STACK_LINE(2845)
								::zpp_nape::space::ZPP_AABBTree tmp16 = this->dtree;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2845)
								ret->elt = tmp16->root;
								HX_STACK_LINE(2845)
								tmp15 = ret;
							}
							HX_STACK_LINE(2845)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = tmp15;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(2845)
							bool tmp16 = (pre == null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2845)
							if ((tmp16)){
								HX_STACK_LINE(2845)
								temp->next = _this->head;
								HX_STACK_LINE(2845)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(2845)
								temp->next = pre->next;
								HX_STACK_LINE(2845)
								pre->next = temp;
							}
							HX_STACK_LINE(2845)
							bool tmp17 = _this->modified = true;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2845)
							_this->pushmod = tmp17;
							HX_STACK_LINE(2845)
							(_this->length)++;
							HX_STACK_LINE(2845)
							temp;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2851)
	{
		HX_STACK_LINE(2852)
		::zpp_nape::space::ZPP_AABBTree tmp2 = this->stree;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2852)
		::zpp_nape::space::ZPP_AABBNode tmp3 = tmp2->root;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2852)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2852)
		if ((tmp4)){
			HX_STACK_LINE(2853)
			::zpp_nape::space::ZPP_AABBTree tmp5 = this->stree;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2853)
			::zpp_nape::geom::ZPP_AABB tmp6 = tmp5->root->aabb;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2853)
			bool tmp7 = ray->aabbtest(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2853)
			if ((tmp7)){
				HX_STACK_LINE(2854)
				::zpp_nape::space::ZPP_AABBTree tmp8 = this->stree;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2854)
				::zpp_nape::geom::ZPP_AABB tmp9 = tmp8->root->aabb;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2854)
				Float tmp10 = ray->aabbsect(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2854)
				Float t = tmp10;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2855)
				bool tmp11 = (t >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2855)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2855)
				if ((tmp11)){
					HX_STACK_LINE(2855)
					tmp12 = (t < mint);
				}
				else{
					HX_STACK_LINE(2855)
					tmp12 = false;
				}
				HX_STACK_LINE(2855)
				if ((tmp12)){
					HX_STACK_LINE(2856)
					::zpp_nape::space::ZPP_AABBTree tmp13 = this->stree;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2856)
					tmp13->root->rayt = t;
					HX_STACK_LINE(2857)
					{
						HX_STACK_LINE(2858)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(2859)
						{
							HX_STACK_LINE(2860)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = this->openlist;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2860)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = tmp14->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(2861)
							while((true)){
								HX_STACK_LINE(2861)
								bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(2861)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2861)
								if ((tmp16)){
									HX_STACK_LINE(2861)
									break;
								}
								HX_STACK_LINE(2862)
								::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2863)
								{
									HX_STACK_LINE(2864)
									::zpp_nape::space::ZPP_AABBTree tmp17 = this->stree;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2864)
									Float tmp18 = tmp17->root->rayt;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2864)
									Float tmp19 = j->rayt;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2864)
									bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2864)
									if ((tmp20)){
										HX_STACK_LINE(2864)
										break;
									}
									HX_STACK_LINE(2865)
									pre = cx_ite;
								}
								HX_STACK_LINE(2867)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(2870)
						{
							HX_STACK_LINE(2870)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = this->openlist;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2870)
							::zpp_nape::util::ZNPList_ZPP_AABBNode _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2870)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2870)
							{
								HX_STACK_LINE(2870)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(2870)
								{
									HX_STACK_LINE(2870)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp16 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2870)
									bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2870)
									if ((tmp17)){
										HX_STACK_LINE(2870)
										::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp18 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2870)
										ret = tmp18;
									}
									else{
										HX_STACK_LINE(2870)
										::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp18 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2870)
										ret = tmp18;
										HX_STACK_LINE(2870)
										::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
										HX_STACK_LINE(2870)
										ret->next = null();
									}
									HX_STACK_LINE(2870)
									Dynamic();
								}
								HX_STACK_LINE(2870)
								::zpp_nape::space::ZPP_AABBTree tmp16 = this->stree;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2870)
								ret->elt = tmp16->root;
								HX_STACK_LINE(2870)
								tmp15 = ret;
							}
							HX_STACK_LINE(2870)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = tmp15;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(2870)
							bool tmp16 = (pre == null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2870)
							if ((tmp16)){
								HX_STACK_LINE(2870)
								temp->next = _this->head;
								HX_STACK_LINE(2870)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(2870)
								temp->next = pre->next;
								HX_STACK_LINE(2870)
								pre->next = temp;
							}
							HX_STACK_LINE(2870)
							bool tmp17 = _this->modified = true;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2870)
							_this->pushmod = tmp17;
							HX_STACK_LINE(2870)
							(_this->length)++;
							HX_STACK_LINE(2870)
							temp;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2876)
	::nape::geom::RayResult minres = null();		HX_STACK_VAR(minres,"minres");
	HX_STACK_LINE(2877)
	while((true)){
		HX_STACK_LINE(2877)
		::zpp_nape::util::ZNPList_ZPP_AABBNode tmp2 = this->openlist;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2877)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = tmp2->head;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2877)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2877)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2877)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2877)
		if ((tmp6)){
			HX_STACK_LINE(2877)
			break;
		}
		HX_STACK_LINE(2878)
		::zpp_nape::util::ZNPList_ZPP_AABBNode tmp7 = this->openlist;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2878)
		::zpp_nape::space::ZPP_AABBNode tmp8 = tmp7->pop_unsafe();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2878)
		::zpp_nape::space::ZPP_AABBNode cnode = tmp8;		HX_STACK_VAR(cnode,"cnode");
		HX_STACK_LINE(2879)
		bool tmp9 = (cnode->rayt >= mint);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2879)
		if ((tmp9)){
			HX_STACK_LINE(2879)
			break;
		}
		HX_STACK_LINE(2880)
		bool tmp10 = (cnode->child1 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2880)
		if ((tmp10)){
			HX_STACK_LINE(2881)
			::zpp_nape::shape::ZPP_Shape shape = cnode->shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(2882)
			bool tmp11 = (filter == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2882)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2882)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2882)
			if ((tmp12)){
				HX_STACK_LINE(2882)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2882)
				int tmp14 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2882)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2882)
				bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2882)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2882)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2882)
				if ((tmp18)){
					HX_STACK_LINE(2882)
					int tmp19 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2882)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2882)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2882)
					tmp13 = (tmp21 != (int)0);
				}
				else{
					HX_STACK_LINE(2882)
					tmp13 = false;
				}
			}
			else{
				HX_STACK_LINE(2882)
				tmp13 = true;
			}
			HX_STACK_LINE(2882)
			if ((tmp13)){
				HX_STACK_LINE(2883)
				int tmp14 = shape->type;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2883)
				int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2883)
				bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2883)
				::nape::geom::RayResult tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2883)
				if ((tmp16)){
					HX_STACK_LINE(2883)
					::zpp_nape::shape::ZPP_Circle tmp18 = shape->circle;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2883)
					bool tmp19 = inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2883)
					Float tmp20 = mint;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2883)
					tmp17 = ray->circlesect(tmp18,tmp19,tmp20);
				}
				else{
					HX_STACK_LINE(2883)
					::zpp_nape::geom::ZPP_AABB tmp18 = shape->aabb;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2883)
					bool tmp19 = ray->aabbtest(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2883)
					if ((tmp19)){
						HX_STACK_LINE(2883)
						::zpp_nape::shape::ZPP_Polygon tmp20 = shape->polygon;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2883)
						bool tmp21 = inner;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2883)
						Float tmp22 = mint;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2883)
						tmp17 = ray->polysect(tmp20,tmp21,tmp22);
					}
					else{
						HX_STACK_LINE(2884)
						tmp17 = null();
					}
				}
				HX_STACK_LINE(2883)
				::nape::geom::RayResult result = tmp17;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(2885)
				bool tmp18 = (result != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2885)
				if ((tmp18)){
					HX_STACK_LINE(2886)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2886)
					{
						HX_STACK_LINE(2886)
						{
							HX_STACK_LINE(2886)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp20 = result->zpp_inner->next;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2886)
							bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2886)
							if ((tmp21)){
								HX_STACK_LINE(2886)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
						}
						HX_STACK_LINE(2886)
						tmp19 = result->zpp_inner->toiDistance;
					}
					HX_STACK_LINE(2886)
					mint = tmp19;
					HX_STACK_LINE(2887)
					bool tmp20 = (minres != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2887)
					if ((tmp20)){
						HX_STACK_LINE(2888)
						{
							HX_STACK_LINE(2888)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp21 = minres->zpp_inner->next;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2888)
							bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2888)
							if ((tmp22)){
								HX_STACK_LINE(2888)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
						}
						HX_STACK_LINE(2888)
						minres->zpp_inner->free();
					}
					HX_STACK_LINE(2890)
					minres = result;
				}
			}
		}
		else{
			HX_STACK_LINE(2895)
			{
				HX_STACK_LINE(2896)
				bool tmp11 = (cnode->child1 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2896)
				if ((tmp11)){
					HX_STACK_LINE(2897)
					::zpp_nape::geom::ZPP_AABB tmp12 = cnode->child1->aabb;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2897)
					bool tmp13 = ray->aabbtest(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2897)
					if ((tmp13)){
						HX_STACK_LINE(2898)
						::zpp_nape::geom::ZPP_AABB tmp14 = cnode->child1->aabb;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2898)
						Float tmp15 = ray->aabbsect(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2898)
						Float t = tmp15;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2899)
						bool tmp16 = (t >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2899)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2899)
						if ((tmp16)){
							HX_STACK_LINE(2899)
							tmp17 = (t < mint);
						}
						else{
							HX_STACK_LINE(2899)
							tmp17 = false;
						}
						HX_STACK_LINE(2899)
						if ((tmp17)){
							HX_STACK_LINE(2900)
							cnode->child1->rayt = t;
							HX_STACK_LINE(2901)
							{
								HX_STACK_LINE(2902)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
								HX_STACK_LINE(2903)
								{
									HX_STACK_LINE(2904)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp18 = this->openlist;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2904)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = tmp18->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(2905)
									while((true)){
										HX_STACK_LINE(2905)
										bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(2905)
										bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2905)
										if ((tmp20)){
											HX_STACK_LINE(2905)
											break;
										}
										HX_STACK_LINE(2906)
										::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(2907)
										{
											HX_STACK_LINE(2908)
											Float tmp21 = cnode->child1->rayt;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(2908)
											Float tmp22 = j->rayt;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(2908)
											bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(2908)
											if ((tmp23)){
												HX_STACK_LINE(2908)
												break;
											}
											HX_STACK_LINE(2909)
											pre = cx_ite;
										}
										HX_STACK_LINE(2911)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(2914)
								{
									HX_STACK_LINE(2914)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp18 = this->openlist;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2914)
									::zpp_nape::util::ZNPList_ZPP_AABBNode _this = tmp18;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2914)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2914)
									{
										HX_STACK_LINE(2914)
										::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(2914)
										{
											HX_STACK_LINE(2914)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp20 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(2914)
											bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(2914)
											if ((tmp21)){
												HX_STACK_LINE(2914)
												::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp22 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(2914)
												ret = tmp22;
											}
											else{
												HX_STACK_LINE(2914)
												::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp22 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(2914)
												ret = tmp22;
												HX_STACK_LINE(2914)
												::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
												HX_STACK_LINE(2914)
												ret->next = null();
											}
											HX_STACK_LINE(2914)
											Dynamic();
										}
										HX_STACK_LINE(2914)
										ret->elt = cnode->child1;
										HX_STACK_LINE(2914)
										tmp19 = ret;
									}
									HX_STACK_LINE(2914)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = tmp19;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(2914)
									bool tmp20 = (pre == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2914)
									if ((tmp20)){
										HX_STACK_LINE(2914)
										temp->next = _this->head;
										HX_STACK_LINE(2914)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(2914)
										temp->next = pre->next;
										HX_STACK_LINE(2914)
										pre->next = temp;
									}
									HX_STACK_LINE(2914)
									bool tmp21 = _this->modified = true;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(2914)
									_this->pushmod = tmp21;
									HX_STACK_LINE(2914)
									(_this->length)++;
									HX_STACK_LINE(2914)
									temp;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(2920)
			{
				HX_STACK_LINE(2921)
				bool tmp11 = (cnode->child2 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2921)
				if ((tmp11)){
					HX_STACK_LINE(2922)
					::zpp_nape::geom::ZPP_AABB tmp12 = cnode->child2->aabb;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2922)
					bool tmp13 = ray->aabbtest(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2922)
					if ((tmp13)){
						HX_STACK_LINE(2923)
						::zpp_nape::geom::ZPP_AABB tmp14 = cnode->child2->aabb;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2923)
						Float tmp15 = ray->aabbsect(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2923)
						Float t = tmp15;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2924)
						bool tmp16 = (t >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2924)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2924)
						if ((tmp16)){
							HX_STACK_LINE(2924)
							tmp17 = (t < mint);
						}
						else{
							HX_STACK_LINE(2924)
							tmp17 = false;
						}
						HX_STACK_LINE(2924)
						if ((tmp17)){
							HX_STACK_LINE(2925)
							cnode->child2->rayt = t;
							HX_STACK_LINE(2926)
							{
								HX_STACK_LINE(2927)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
								HX_STACK_LINE(2928)
								{
									HX_STACK_LINE(2929)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp18 = this->openlist;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2929)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = tmp18->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(2930)
									while((true)){
										HX_STACK_LINE(2930)
										bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(2930)
										bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2930)
										if ((tmp20)){
											HX_STACK_LINE(2930)
											break;
										}
										HX_STACK_LINE(2931)
										::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(2932)
										{
											HX_STACK_LINE(2933)
											Float tmp21 = cnode->child2->rayt;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(2933)
											Float tmp22 = j->rayt;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(2933)
											bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(2933)
											if ((tmp23)){
												HX_STACK_LINE(2933)
												break;
											}
											HX_STACK_LINE(2934)
											pre = cx_ite;
										}
										HX_STACK_LINE(2936)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(2939)
								{
									HX_STACK_LINE(2939)
									::zpp_nape::util::ZNPList_ZPP_AABBNode tmp18 = this->openlist;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2939)
									::zpp_nape::util::ZNPList_ZPP_AABBNode _this = tmp18;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2939)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2939)
									{
										HX_STACK_LINE(2939)
										::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(2939)
										{
											HX_STACK_LINE(2939)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp20 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(2939)
											bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(2939)
											if ((tmp21)){
												HX_STACK_LINE(2939)
												::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp22 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(2939)
												ret = tmp22;
											}
											else{
												HX_STACK_LINE(2939)
												::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp22 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(2939)
												ret = tmp22;
												HX_STACK_LINE(2939)
												::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
												HX_STACK_LINE(2939)
												ret->next = null();
											}
											HX_STACK_LINE(2939)
											Dynamic();
										}
										HX_STACK_LINE(2939)
										ret->elt = cnode->child2;
										HX_STACK_LINE(2939)
										tmp19 = ret;
									}
									HX_STACK_LINE(2939)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = tmp19;		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(2939)
									bool tmp20 = (pre == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2939)
									if ((tmp20)){
										HX_STACK_LINE(2939)
										temp->next = _this->head;
										HX_STACK_LINE(2939)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(2939)
										temp->next = pre->next;
										HX_STACK_LINE(2939)
										pre->next = temp;
									}
									HX_STACK_LINE(2939)
									bool tmp21 = _this->modified = true;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(2939)
									_this->pushmod = tmp21;
									HX_STACK_LINE(2939)
									(_this->length)++;
									HX_STACK_LINE(2939)
									temp;
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2947)
	::zpp_nape::util::ZNPList_ZPP_AABBNode tmp2 = this->openlist;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2947)
	tmp2->clear();
	HX_STACK_LINE(2948)
	::nape::geom::RayResult tmp3 = minres;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2948)
	return tmp3;
}


::nape::geom::RayResultList ZPP_DynAABBPhase_obj::rayMultiCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::geom::RayResultList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_DynAABBPhase","rayMultiCast",0x7935494c,"zpp_nape.space.ZPP_DynAABBPhase.rayMultiCast","zpp_nape/space/DynAABBPhase.hx",2950,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2951)
	::zpp_nape::util::ZNPList_ZPP_AABBNode tmp = this->openlist;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2951)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2951)
	if ((tmp1)){
		HX_STACK_LINE(2951)
		::zpp_nape::util::ZNPList_ZPP_AABBNode tmp2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2951)
		this->openlist = tmp2;
	}
	HX_STACK_LINE(2952)
	this->sync_broadphase();
	HX_STACK_LINE(2953)
	ray->validate_dir();
	HX_STACK_LINE(2954)
	Float tmp2 = ray->maxdist;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2954)
	Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2954)
	bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2954)
	bool inf = tmp4;		HX_STACK_VAR(inf,"inf");
	HX_STACK_LINE(2955)
	bool tmp5 = (output == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2955)
	::nape::geom::RayResultList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2955)
	if ((tmp5)){
		HX_STACK_LINE(2955)
		tmp6 = ::nape::geom::RayResultList_obj::__new();
	}
	else{
		HX_STACK_LINE(2955)
		tmp6 = output;
	}
	HX_STACK_LINE(2955)
	::nape::geom::RayResultList ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2956)
	{
		HX_STACK_LINE(2957)
		::zpp_nape::space::ZPP_AABBTree tmp7 = this->dtree;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2957)
		::zpp_nape::space::ZPP_AABBNode tmp8 = tmp7->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2957)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2957)
		if ((tmp9)){
			HX_STACK_LINE(2958)
			::zpp_nape::space::ZPP_AABBTree tmp10 = this->dtree;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2958)
			::zpp_nape::geom::ZPP_AABB tmp11 = tmp10->root->aabb;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2958)
			bool tmp12 = ray->aabbtest(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2958)
			if ((tmp12)){
				HX_STACK_LINE(2959)
				bool tmp13 = inf;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2959)
				if ((tmp13)){
					HX_STACK_LINE(2959)
					::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = this->openlist;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2959)
					::zpp_nape::space::ZPP_AABBTree tmp15 = this->dtree;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2959)
					::zpp_nape::space::ZPP_AABBNode tmp16 = tmp15->root;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2959)
					tmp14->add(tmp16);
				}
				else{
					HX_STACK_LINE(2961)
					::zpp_nape::space::ZPP_AABBTree tmp14 = this->dtree;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2961)
					::zpp_nape::geom::ZPP_AABB tmp15 = tmp14->root->aabb;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2961)
					Float tmp16 = ray->aabbsect(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2961)
					Float t = tmp16;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2962)
					bool tmp17 = (t >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2962)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2962)
					if ((tmp17)){
						HX_STACK_LINE(2962)
						tmp18 = (t < ray->maxdist);
					}
					else{
						HX_STACK_LINE(2962)
						tmp18 = false;
					}
					HX_STACK_LINE(2962)
					if ((tmp18)){
						HX_STACK_LINE(2962)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp19 = this->openlist;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2962)
						::zpp_nape::space::ZPP_AABBTree tmp20 = this->dtree;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2962)
						::zpp_nape::space::ZPP_AABBNode tmp21 = tmp20->root;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2962)
						tmp19->add(tmp21);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2967)
	{
		HX_STACK_LINE(2968)
		::zpp_nape::space::ZPP_AABBTree tmp7 = this->stree;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2968)
		::zpp_nape::space::ZPP_AABBNode tmp8 = tmp7->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2968)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2968)
		if ((tmp9)){
			HX_STACK_LINE(2969)
			::zpp_nape::space::ZPP_AABBTree tmp10 = this->stree;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2969)
			::zpp_nape::geom::ZPP_AABB tmp11 = tmp10->root->aabb;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2969)
			bool tmp12 = ray->aabbtest(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2969)
			if ((tmp12)){
				HX_STACK_LINE(2970)
				bool tmp13 = inf;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2970)
				if ((tmp13)){
					HX_STACK_LINE(2970)
					::zpp_nape::util::ZNPList_ZPP_AABBNode tmp14 = this->openlist;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2970)
					::zpp_nape::space::ZPP_AABBTree tmp15 = this->stree;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2970)
					::zpp_nape::space::ZPP_AABBNode tmp16 = tmp15->root;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2970)
					tmp14->add(tmp16);
				}
				else{
					HX_STACK_LINE(2972)
					::zpp_nape::space::ZPP_AABBTree tmp14 = this->stree;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2972)
					::zpp_nape::geom::ZPP_AABB tmp15 = tmp14->root->aabb;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2972)
					Float tmp16 = ray->aabbsect(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2972)
					Float t = tmp16;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2973)
					bool tmp17 = (t >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2973)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2973)
					if ((tmp17)){
						HX_STACK_LINE(2973)
						tmp18 = (t < ray->maxdist);
					}
					else{
						HX_STACK_LINE(2973)
						tmp18 = false;
					}
					HX_STACK_LINE(2973)
					if ((tmp18)){
						HX_STACK_LINE(2973)
						::zpp_nape::util::ZNPList_ZPP_AABBNode tmp19 = this->openlist;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2973)
						::zpp_nape::space::ZPP_AABBTree tmp20 = this->stree;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2973)
						::zpp_nape::space::ZPP_AABBNode tmp21 = tmp20->root;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2973)
						tmp19->add(tmp21);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2978)
	while((true)){
		HX_STACK_LINE(2978)
		::zpp_nape::util::ZNPList_ZPP_AABBNode tmp7 = this->openlist;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2978)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp8 = tmp7->head;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2978)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2978)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2978)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2978)
		if ((tmp11)){
			HX_STACK_LINE(2978)
			break;
		}
		HX_STACK_LINE(2979)
		::zpp_nape::util::ZNPList_ZPP_AABBNode tmp12 = this->openlist;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2979)
		::zpp_nape::space::ZPP_AABBNode tmp13 = tmp12->pop_unsafe();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2979)
		::zpp_nape::space::ZPP_AABBNode cnode = tmp13;		HX_STACK_VAR(cnode,"cnode");
		HX_STACK_LINE(2980)
		bool tmp14 = (cnode->child1 == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2980)
		if ((tmp14)){
			HX_STACK_LINE(2981)
			::zpp_nape::shape::ZPP_Shape shape = cnode->shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(2982)
			bool tmp15 = (filter == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2982)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2982)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2982)
			if ((tmp16)){
				HX_STACK_LINE(2982)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2982)
				int tmp18 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2982)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2982)
				bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2982)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2982)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2982)
				if ((tmp22)){
					HX_STACK_LINE(2982)
					int tmp23 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2982)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2982)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2982)
					tmp17 = (tmp25 != (int)0);
				}
				else{
					HX_STACK_LINE(2982)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(2982)
				tmp17 = true;
			}
			HX_STACK_LINE(2982)
			if ((tmp17)){
				HX_STACK_LINE(2983)
				int tmp18 = shape->type;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2983)
				int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2983)
				bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2983)
				if ((tmp20)){
					HX_STACK_LINE(2983)
					::zpp_nape::shape::ZPP_Circle tmp21 = shape->circle;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2983)
					bool tmp22 = inner;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2983)
					::nape::geom::RayResultList tmp23 = ret;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2983)
					ray->circlesect2(tmp21,tmp22,tmp23);
				}
				else{
					HX_STACK_LINE(2984)
					::zpp_nape::geom::ZPP_AABB tmp21 = shape->aabb;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2984)
					bool tmp22 = ray->aabbtest(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2984)
					if ((tmp22)){
						HX_STACK_LINE(2984)
						::zpp_nape::shape::ZPP_Polygon tmp23 = shape->polygon;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2984)
						bool tmp24 = inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2984)
						::nape::geom::RayResultList tmp25 = ret;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2984)
						ray->polysect2(tmp23,tmp24,tmp25);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2988)
			{
				HX_STACK_LINE(2989)
				bool tmp15 = (cnode->child1 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2989)
				if ((tmp15)){
					HX_STACK_LINE(2990)
					::zpp_nape::geom::ZPP_AABB tmp16 = cnode->child1->aabb;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2990)
					bool tmp17 = ray->aabbtest(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2990)
					if ((tmp17)){
						HX_STACK_LINE(2991)
						bool tmp18 = inf;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2991)
						if ((tmp18)){
							HX_STACK_LINE(2991)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp19 = this->openlist;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(2991)
							::zpp_nape::space::ZPP_AABBNode tmp20 = cnode->child1;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2991)
							tmp19->add(tmp20);
						}
						else{
							HX_STACK_LINE(2993)
							::zpp_nape::geom::ZPP_AABB tmp19 = cnode->child1->aabb;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(2993)
							Float tmp20 = ray->aabbsect(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2993)
							Float t = tmp20;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2994)
							bool tmp21 = (t >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2994)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2994)
							if ((tmp21)){
								HX_STACK_LINE(2994)
								tmp22 = (t < ray->maxdist);
							}
							else{
								HX_STACK_LINE(2994)
								tmp22 = false;
							}
							HX_STACK_LINE(2994)
							if ((tmp22)){
								HX_STACK_LINE(2994)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp23 = this->openlist;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(2994)
								::zpp_nape::space::ZPP_AABBNode tmp24 = cnode->child1;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2994)
								tmp23->add(tmp24);
							}
						}
					}
				}
			}
			HX_STACK_LINE(2999)
			{
				HX_STACK_LINE(3000)
				bool tmp15 = (cnode->child2 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(3000)
				if ((tmp15)){
					HX_STACK_LINE(3001)
					::zpp_nape::geom::ZPP_AABB tmp16 = cnode->child2->aabb;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(3001)
					bool tmp17 = ray->aabbtest(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(3001)
					if ((tmp17)){
						HX_STACK_LINE(3002)
						bool tmp18 = inf;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(3002)
						if ((tmp18)){
							HX_STACK_LINE(3002)
							::zpp_nape::util::ZNPList_ZPP_AABBNode tmp19 = this->openlist;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(3002)
							::zpp_nape::space::ZPP_AABBNode tmp20 = cnode->child2;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(3002)
							tmp19->add(tmp20);
						}
						else{
							HX_STACK_LINE(3004)
							::zpp_nape::geom::ZPP_AABB tmp19 = cnode->child2->aabb;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(3004)
							Float tmp20 = ray->aabbsect(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(3004)
							Float t = tmp20;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(3005)
							bool tmp21 = (t >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(3005)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(3005)
							if ((tmp21)){
								HX_STACK_LINE(3005)
								tmp22 = (t < ray->maxdist);
							}
							else{
								HX_STACK_LINE(3005)
								tmp22 = false;
							}
							HX_STACK_LINE(3005)
							if ((tmp22)){
								HX_STACK_LINE(3005)
								::zpp_nape::util::ZNPList_ZPP_AABBNode tmp23 = this->openlist;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(3005)
								::zpp_nape::space::ZPP_AABBNode tmp24 = cnode->child2;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(3005)
								tmp23->add(tmp24);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(3012)
	::zpp_nape::util::ZNPList_ZPP_AABBNode tmp7 = this->openlist;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(3012)
	tmp7->clear();
	HX_STACK_LINE(3013)
	::nape::geom::RayResultList tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(3013)
	return tmp8;
}


Float ZPP_DynAABBPhase_obj::FATTEN;

Float ZPP_DynAABBPhase_obj::VEL_STEPS;


ZPP_DynAABBPhase_obj::ZPP_DynAABBPhase_obj()
{
}

void ZPP_DynAABBPhase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_DynAABBPhase);
	HX_MARK_MEMBER_NAME(stree,"stree");
	HX_MARK_MEMBER_NAME(dtree,"dtree");
	HX_MARK_MEMBER_NAME(pairs,"pairs");
	HX_MARK_MEMBER_NAME(syncs,"syncs");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(treeStack,"treeStack");
	HX_MARK_MEMBER_NAME(treeStack2,"treeStack2");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(openlist,"openlist");
	::zpp_nape::space::ZPP_Broadphase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_DynAABBPhase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stree,"stree");
	HX_VISIT_MEMBER_NAME(dtree,"dtree");
	HX_VISIT_MEMBER_NAME(pairs,"pairs");
	HX_VISIT_MEMBER_NAME(syncs,"syncs");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(treeStack,"treeStack");
	HX_VISIT_MEMBER_NAME(treeStack2,"treeStack2");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(openlist,"openlist");
	::zpp_nape::space::ZPP_Broadphase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_DynAABBPhase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { return dyn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stree") ) { return stree; }
		if (HX_FIELD_EQ(inName,"dtree") ) { return dtree; }
		if (HX_FIELD_EQ(inName,"pairs") ) { return pairs; }
		if (HX_FIELD_EQ(inName,"syncs") ) { return syncs; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__insert") ) { return __insert_dyn(); }
		if (HX_FIELD_EQ(inName,"__remove") ) { return __remove_dyn(); }
		if (HX_FIELD_EQ(inName,"openlist") ) { return openlist; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"treeStack") ) { return treeStack; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { return broadphase_dyn(); }
		if (HX_FIELD_EQ(inName,"treeStack2") ) { return treeStack2; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sync_broadphase") ) { return sync_broadphase_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_DynAABBPhase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stree") ) { stree=inValue.Cast< ::zpp_nape::space::ZPP_AABBTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dtree") ) { dtree=inValue.Cast< ::zpp_nape::space::ZPP_AABBTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pairs") ) { pairs=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"syncs") ) { syncs=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { moves=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"openlist") ) { openlist=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"treeStack") ) { treeStack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"treeStack2") ) { treeStack2=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_DynAABBPhase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_DynAABBPhase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stree","\x51","\x4f","\x18","\x84"));
	outFields->push(HX_HCSTRING("dtree","\xc2","\x9b","\x15","\xe1"));
	outFields->push(HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd"));
	outFields->push(HX_HCSTRING("syncs","\xb8","\x55","\x63","\x87"));
	outFields->push(HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"));
	outFields->push(HX_HCSTRING("treeStack","\x0a","\x89","\x16","\xef"));
	outFields->push(HX_HCSTRING("treeStack2","\xe8","\x5f","\xa1","\x44"));
	outFields->push(HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"));
	outFields->push(HX_HCSTRING("openlist","\x28","\xcd","\x15","\xfe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBTree*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,stree),HX_HCSTRING("stree","\x51","\x4f","\x18","\x84")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBTree*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,dtree),HX_HCSTRING("dtree","\xc2","\x9b","\x15","\xe1")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBPair*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,pairs),HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,syncs),HX_HCSTRING("syncs","\xb8","\x55","\x63","\x87")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,moves),HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_AABBNode*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,treeStack),HX_HCSTRING("treeStack","\x0a","\x89","\x16","\xef")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_AABBNode*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,treeStack2),HX_HCSTRING("treeStack2","\xe8","\x5f","\xa1","\x44")},
	{hx::fsObject /*::nape::phys::BodyList*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,failed),HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_AABBNode*/ ,(int)offsetof(ZPP_DynAABBPhase_obj,openlist),HX_HCSTRING("openlist","\x28","\xcd","\x15","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &ZPP_DynAABBPhase_obj::FATTEN,HX_HCSTRING("FATTEN","\xa4","\xdc","\xcc","\xa1")},
	{hx::fsFloat,(void *) &ZPP_DynAABBPhase_obj::VEL_STEPS,HX_HCSTRING("VEL_STEPS","\xc5","\x44","\xf5","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("stree","\x51","\x4f","\x18","\x84"),
	HX_HCSTRING("dtree","\xc2","\x9b","\x15","\xe1"),
	HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd"),
	HX_HCSTRING("syncs","\xb8","\x55","\x63","\x87"),
	HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"),
	HX_HCSTRING("dyn","\x39","\x4b","\x4c","\x00"),
	HX_HCSTRING("__insert","\x59","\xae","\x0c","\x46"),
	HX_HCSTRING("__remove","\x64","\x07","\xb8","\xac"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("sync_broadphase","\x5d","\xa8","\x59","\x01"),
	HX_HCSTRING("broadphase","\xb9","\x5d","\x1d","\xd8"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("treeStack","\x0a","\x89","\x16","\xef"),
	HX_HCSTRING("shapesUnderPoint","\xea","\xec","\xbc","\x47"),
	HX_HCSTRING("bodiesUnderPoint","\xb8","\x1b","\x30","\x80"),
	HX_HCSTRING("treeStack2","\xe8","\x5f","\xa1","\x44"),
	HX_HCSTRING("shapesInAABB","\xd7","\x1c","\x84","\xf9"),
	HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"),
	HX_HCSTRING("bodiesInAABB","\xa5","\x4c","\x28","\x9e"),
	HX_HCSTRING("shapesInCircle","\x27","\xd4","\xf7","\x6c"),
	HX_HCSTRING("bodiesInCircle","\x75","\x13","\xe2","\xa6"),
	HX_HCSTRING("shapesInShape","\xea","\x90","\x2a","\xd1"),
	HX_HCSTRING("bodiesInShape","\x5c","\x35","\x30","\x3c"),
	HX_HCSTRING("openlist","\x28","\xcd","\x15","\xfe"),
	HX_HCSTRING("rayCast","\xc9","\x5d","\x3c","\x25"),
	HX_HCSTRING("rayMultiCast","\x8e","\x02","\x7d","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::FATTEN,"FATTEN");
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::VEL_STEPS,"VEL_STEPS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::FATTEN,"FATTEN");
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::VEL_STEPS,"VEL_STEPS");
};

#endif

hx::Class ZPP_DynAABBPhase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FATTEN","\xa4","\xdc","\xcc","\xa1"),
	HX_HCSTRING("VEL_STEPS","\xc5","\x44","\xf5","\x9d"),
	::String(null()) };

void ZPP_DynAABBPhase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_DynAABBPhase","\x70","\xc0","\xfa","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_DynAABBPhase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_DynAABBPhase_obj >;
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

void ZPP_DynAABBPhase_obj::__boot()
{
	FATTEN= ((Float)3.0);
	VEL_STEPS= ((Float)2.0);
}

} // end namespace zpp_nape
} // end namespace space
