#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBTree
#include <zpp_nape/space/ZPP_AABBTree.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_AABBTree_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_AABBTree","new",0x9399cd3e,"zpp_nape.space.ZPP_AABBTree.new","zpp_nape/space/DynAABBPhase.hx",335,0x55500cf1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(336)
	this->root = null();
}
;
	return null();
}

//ZPP_AABBTree_obj::~ZPP_AABBTree_obj() { }

Dynamic ZPP_AABBTree_obj::__CreateEmpty() { return  new ZPP_AABBTree_obj; }
hx::ObjectPtr< ZPP_AABBTree_obj > ZPP_AABBTree_obj::__new()
{  hx::ObjectPtr< ZPP_AABBTree_obj > _result_ = new ZPP_AABBTree_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_AABBTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABBTree_obj > _result_ = new ZPP_AABBTree_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_AABBTree_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBTree","clear",0xb6c0e1eb,"zpp_nape.space.ZPP_AABBTree.clear","zpp_nape/space/DynAABBPhase.hx",338,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(339)
		::zpp_nape::space::ZPP_AABBNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(339)
		if ((tmp1)){
			HX_STACK_LINE(339)
			return null();
		}
		HX_STACK_LINE(340)
		::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(350)
			::zpp_nape::space::ZPP_AABBNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			tmp2->next = stack;
			HX_STACK_LINE(351)
			::zpp_nape::space::ZPP_AABBNode tmp3 = this->root;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			stack = tmp3;
		}
		HX_STACK_LINE(353)
		while((true)){
			HX_STACK_LINE(353)
			bool tmp2 = (stack != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(353)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(353)
			if ((tmp3)){
				HX_STACK_LINE(353)
				break;
			}
			HX_STACK_LINE(354)
			::zpp_nape::space::ZPP_AABBNode tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(363)
				::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(364)
				stack = ret->next;
				HX_STACK_LINE(365)
				ret->next = null();
				HX_STACK_LINE(366)
				tmp4 = ret;
			}
			HX_STACK_LINE(354)
			::zpp_nape::space::ZPP_AABBNode node = tmp4;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(368)
			bool tmp5 = (node->child1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(368)
			if ((tmp5)){
				HX_STACK_LINE(369)
				node->shape->node = null();
				HX_STACK_LINE(370)
				node->shape->removedFromSpace();
				HX_STACK_LINE(371)
				node->shape = null();
			}
			else{
				HX_STACK_LINE(374)
				bool tmp6 = (node->child1 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(374)
				if ((tmp6)){
					HX_STACK_LINE(383)
					node->child1->next = stack;
					HX_STACK_LINE(384)
					stack = node->child1;
				}
				HX_STACK_LINE(386)
				bool tmp7 = (node->child2 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(386)
				if ((tmp7)){
					HX_STACK_LINE(395)
					node->child2->next = stack;
					HX_STACK_LINE(396)
					stack = node->child2;
				}
			}
			HX_STACK_LINE(399)
			{
				HX_STACK_LINE(400)
				::zpp_nape::space::ZPP_AABBNode o = node;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					o->height = (int)-1;
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(409)
						{
							HX_STACK_LINE(409)
							bool tmp6 = (o1->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(409)
							if ((tmp6)){
								HX_STACK_LINE(409)
								o1->outer->zpp_inner = null();
								HX_STACK_LINE(409)
								o1->outer = null();
							}
							HX_STACK_LINE(409)
							::nape::geom::Vec2 tmp7 = o1->wrap_max = null();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(409)
							o1->wrap_min = tmp7;
							HX_STACK_LINE(409)
							o1->_invalidate = null();
							HX_STACK_LINE(409)
							o1->_validate = null();
						}
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_AABB tmp6 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(409)
						o1->next = tmp6;
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
					}
					HX_STACK_LINE(409)
					::zpp_nape::space::ZPP_AABBNode tmp6 = o->parent = null();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(409)
					::zpp_nape::space::ZPP_AABBNode tmp7 = o->child2 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(409)
					o->child1 = tmp7;
					HX_STACK_LINE(409)
					o->next = null();
					HX_STACK_LINE(409)
					o->snext = null();
					HX_STACK_LINE(409)
					o->mnext = null();
				}
				HX_STACK_LINE(410)
				::zpp_nape::space::ZPP_AABBNode tmp6 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(410)
				o->next = tmp6;
				HX_STACK_LINE(411)
				::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(417)
		this->root = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBTree_obj,clear,(void))

Void ZPP_AABBTree_obj::insertLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBTree","insertLeaf",0xff0b7e59,"zpp_nape.space.ZPP_AABBTree.insertLeaf","zpp_nape/space/DynAABBPhase.hx",421,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(leaf,"leaf")
		HX_STACK_LINE(421)
		::zpp_nape::space::ZPP_AABBNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		if ((tmp1)){
			HX_STACK_LINE(421)
			this->root = leaf;
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(421)
			tmp2->parent = null();
		}
		else{
			HX_STACK_LINE(421)
			::zpp_nape::geom::ZPP_AABB leafaabb = leaf->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode node = tmp2;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(421)
			while((true)){
				HX_STACK_LINE(421)
				bool tmp3 = (node->child1 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(421)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(421)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(421)
				if ((tmp5)){
					HX_STACK_LINE(421)
					break;
				}
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				HX_STACK_LINE(421)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(421)
					Float tmp7 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(421)
					Float tmp8 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(421)
					Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(421)
					tmp6 = (tmp9 * (int)2);
				}
				HX_STACK_LINE(421)
				Float area = tmp6;		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(421)
					bool tmp8 = (a->minx < leafaabb->minx);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(421)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(421)
					if ((tmp8)){
						HX_STACK_LINE(421)
						tmp9 = a->minx;
					}
					else{
						HX_STACK_LINE(421)
						tmp9 = leafaabb->minx;
					}
					HX_STACK_LINE(421)
					_this->minx = tmp9;
					HX_STACK_LINE(421)
					bool tmp10 = (a->miny < leafaabb->miny);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(421)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(421)
					if ((tmp10)){
						HX_STACK_LINE(421)
						tmp11 = a->miny;
					}
					else{
						HX_STACK_LINE(421)
						tmp11 = leafaabb->miny;
					}
					HX_STACK_LINE(421)
					_this->miny = tmp11;
					HX_STACK_LINE(421)
					bool tmp12 = (a->maxx > leafaabb->maxx);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(421)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(421)
					if ((tmp12)){
						HX_STACK_LINE(421)
						tmp13 = a->maxx;
					}
					else{
						HX_STACK_LINE(421)
						tmp13 = leafaabb->maxx;
					}
					HX_STACK_LINE(421)
					_this->maxx = tmp13;
					HX_STACK_LINE(421)
					bool tmp14 = (a->maxy > leafaabb->maxy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(421)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(421)
					if ((tmp14)){
						HX_STACK_LINE(421)
						tmp15 = a->maxy;
					}
					else{
						HX_STACK_LINE(421)
						tmp15 = leafaabb->maxy;
					}
					HX_STACK_LINE(421)
					_this->maxy = tmp15;
				}
				HX_STACK_LINE(421)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB tmp8 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(421)
					Float tmp9 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(421)
					Float tmp10 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(421)
					Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(421)
					tmp7 = (tmp11 * (int)2);
				}
				HX_STACK_LINE(421)
				Float carea = tmp7;		HX_STACK_VAR(carea,"carea");
				HX_STACK_LINE(421)
				Float tmp8 = ((int)2 * carea);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(421)
				Float cost = tmp8;		HX_STACK_VAR(cost,"cost");
				HX_STACK_LINE(421)
				Float tmp9 = (carea - area);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(421)
				Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(421)
				Float icost = tmp10;		HX_STACK_VAR(icost,"icost");
				HX_STACK_LINE(421)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_AABB tmp12 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(421)
						bool tmp13 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(421)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						if ((tmp13)){
							HX_STACK_LINE(421)
							tmp14 = leafaabb->minx;
						}
						else{
							HX_STACK_LINE(421)
							tmp14 = b->minx;
						}
						HX_STACK_LINE(421)
						_this->minx = tmp14;
						HX_STACK_LINE(421)
						bool tmp15 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(421)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(421)
						if ((tmp15)){
							HX_STACK_LINE(421)
							tmp16 = leafaabb->miny;
						}
						else{
							HX_STACK_LINE(421)
							tmp16 = b->miny;
						}
						HX_STACK_LINE(421)
						_this->miny = tmp16;
						HX_STACK_LINE(421)
						bool tmp17 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(421)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(421)
						if ((tmp17)){
							HX_STACK_LINE(421)
							tmp18 = leafaabb->maxx;
						}
						else{
							HX_STACK_LINE(421)
							tmp18 = b->maxx;
						}
						HX_STACK_LINE(421)
						_this->maxx = tmp18;
						HX_STACK_LINE(421)
						bool tmp19 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(421)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(421)
						if ((tmp19)){
							HX_STACK_LINE(421)
							tmp20 = leafaabb->maxy;
						}
						else{
							HX_STACK_LINE(421)
							tmp20 = b->maxy;
						}
						HX_STACK_LINE(421)
						_this->maxy = tmp20;
					}
					HX_STACK_LINE(421)
					bool tmp12 = (child1->child1 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(421)
					if ((tmp12)){
						HX_STACK_LINE(421)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB tmp14 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							Float tmp15 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							Float tmp16 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							tmp13 = (tmp17 * (int)2);
						}
						HX_STACK_LINE(421)
						Float tmp14 = icost;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						tmp11 = (tmp13 + tmp14);
					}
					else{
						HX_STACK_LINE(421)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							Float tmp14 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(421)
							Float tmp15 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							tmp13 = (tmp16 * (int)2);
						}
						HX_STACK_LINE(421)
						Float oarea = tmp13;		HX_STACK_VAR(oarea,"oarea");
						HX_STACK_LINE(421)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB tmp15 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							Float tmp16 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							Float tmp17 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(421)
							tmp14 = (tmp18 * (int)2);
						}
						HX_STACK_LINE(421)
						Float narea = tmp14;		HX_STACK_VAR(narea,"narea");
						HX_STACK_LINE(421)
						Float tmp15 = (narea - oarea);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(421)
						Float tmp16 = icost;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(421)
						tmp11 = (tmp15 + tmp16);
					}
				}
				HX_STACK_LINE(421)
				Float cost1 = tmp11;		HX_STACK_VAR(cost1,"cost1");
				HX_STACK_LINE(421)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_AABB tmp13 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_AABB _this = tmp13;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(421)
						bool tmp14 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(421)
						if ((tmp14)){
							HX_STACK_LINE(421)
							tmp15 = leafaabb->minx;
						}
						else{
							HX_STACK_LINE(421)
							tmp15 = b->minx;
						}
						HX_STACK_LINE(421)
						_this->minx = tmp15;
						HX_STACK_LINE(421)
						bool tmp16 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(421)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(421)
						if ((tmp16)){
							HX_STACK_LINE(421)
							tmp17 = leafaabb->miny;
						}
						else{
							HX_STACK_LINE(421)
							tmp17 = b->miny;
						}
						HX_STACK_LINE(421)
						_this->miny = tmp17;
						HX_STACK_LINE(421)
						bool tmp18 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(421)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(421)
						if ((tmp18)){
							HX_STACK_LINE(421)
							tmp19 = leafaabb->maxx;
						}
						else{
							HX_STACK_LINE(421)
							tmp19 = b->maxx;
						}
						HX_STACK_LINE(421)
						_this->maxx = tmp19;
						HX_STACK_LINE(421)
						bool tmp20 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(421)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(421)
						if ((tmp20)){
							HX_STACK_LINE(421)
							tmp21 = leafaabb->maxy;
						}
						else{
							HX_STACK_LINE(421)
							tmp21 = b->maxy;
						}
						HX_STACK_LINE(421)
						_this->maxy = tmp21;
					}
					HX_STACK_LINE(421)
					bool tmp13 = (child2->child1 == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(421)
					if ((tmp13)){
						HX_STACK_LINE(421)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB tmp15 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							Float tmp16 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							Float tmp17 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(421)
							tmp14 = (tmp18 * (int)2);
						}
						HX_STACK_LINE(421)
						Float tmp15 = icost;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(421)
						tmp12 = (tmp14 + tmp15);
					}
					else{
						HX_STACK_LINE(421)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							Float tmp15 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							Float tmp16 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							tmp14 = (tmp17 * (int)2);
						}
						HX_STACK_LINE(421)
						Float oarea = tmp14;		HX_STACK_VAR(oarea,"oarea");
						HX_STACK_LINE(421)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB tmp16 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							Float tmp17 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							Float tmp18 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(421)
							Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(421)
							tmp15 = (tmp19 * (int)2);
						}
						HX_STACK_LINE(421)
						Float narea = tmp15;		HX_STACK_VAR(narea,"narea");
						HX_STACK_LINE(421)
						Float tmp16 = (narea - oarea);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(421)
						Float tmp17 = icost;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(421)
						tmp12 = (tmp16 + tmp17);
					}
				}
				HX_STACK_LINE(421)
				Float cost2 = tmp12;		HX_STACK_VAR(cost2,"cost2");
				HX_STACK_LINE(421)
				bool tmp13 = (cost < cost1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(421)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(421)
				if ((tmp13)){
					HX_STACK_LINE(421)
					tmp14 = (cost < cost2);
				}
				else{
					HX_STACK_LINE(421)
					tmp14 = false;
				}
				HX_STACK_LINE(421)
				if ((tmp14)){
					HX_STACK_LINE(421)
					break;
				}
				else{
					HX_STACK_LINE(421)
					bool tmp15 = (cost1 < cost2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(421)
					::zpp_nape::space::ZPP_AABBNode tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(421)
					if ((tmp15)){
						HX_STACK_LINE(421)
						tmp16 = child1;
					}
					else{
						HX_STACK_LINE(421)
						tmp16 = child2;
					}
					HX_STACK_LINE(421)
					node = tmp16;
				}
			}
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode sibling = node;		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode tmp3 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(421)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(421)
				if ((tmp4)){
					HX_STACK_LINE(421)
					::zpp_nape::space::ZPP_AABBNode tmp5 = ::zpp_nape::space::ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(421)
					nparent = tmp5;
				}
				else{
					HX_STACK_LINE(421)
					::zpp_nape::space::ZPP_AABBNode tmp5 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(421)
					nparent = tmp5;
					HX_STACK_LINE(421)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
					HX_STACK_LINE(421)
					nparent->next = null();
				}
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_AABB tmp5 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(421)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(421)
						if ((tmp6)){
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(421)
							nparent->aabb = tmp7;
						}
						else{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(421)
							nparent->aabb = tmp7;
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB tmp8 = nparent->aabb->next;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = tmp8;
							HX_STACK_LINE(421)
							nparent->aabb->next = null();
						}
						HX_STACK_LINE(421)
						Dynamic();
					}
					HX_STACK_LINE(421)
					nparent->moved = false;
					HX_STACK_LINE(421)
					nparent->synced = false;
					HX_STACK_LINE(421)
					nparent->first_sync = false;
				}
			}
			HX_STACK_LINE(421)
			nparent->parent = oparent;
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(421)
				::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(421)
				bool tmp3 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(421)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(421)
				if ((tmp3)){
					HX_STACK_LINE(421)
					tmp4 = leafaabb->minx;
				}
				else{
					HX_STACK_LINE(421)
					tmp4 = b->minx;
				}
				HX_STACK_LINE(421)
				_this->minx = tmp4;
				HX_STACK_LINE(421)
				bool tmp5 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(421)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(421)
				if ((tmp5)){
					HX_STACK_LINE(421)
					tmp6 = leafaabb->miny;
				}
				else{
					HX_STACK_LINE(421)
					tmp6 = b->miny;
				}
				HX_STACK_LINE(421)
				_this->miny = tmp6;
				HX_STACK_LINE(421)
				bool tmp7 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(421)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(421)
				if ((tmp7)){
					HX_STACK_LINE(421)
					tmp8 = leafaabb->maxx;
				}
				else{
					HX_STACK_LINE(421)
					tmp8 = b->maxx;
				}
				HX_STACK_LINE(421)
				_this->maxx = tmp8;
				HX_STACK_LINE(421)
				bool tmp9 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(421)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(421)
				if ((tmp9)){
					HX_STACK_LINE(421)
					tmp10 = leafaabb->maxy;
				}
				else{
					HX_STACK_LINE(421)
					tmp10 = b->maxy;
				}
				HX_STACK_LINE(421)
				_this->maxy = tmp10;
			}
			HX_STACK_LINE(421)
			int tmp3 = (sibling->height + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(421)
			nparent->height = tmp3;
			HX_STACK_LINE(421)
			bool tmp4 = (oparent != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(421)
			if ((tmp4)){
				HX_STACK_LINE(421)
				bool tmp5 = (oparent->child1 == sibling);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(421)
				if ((tmp5)){
					HX_STACK_LINE(421)
					oparent->child1 = nparent;
				}
				else{
					HX_STACK_LINE(421)
					oparent->child2 = nparent;
				}
				HX_STACK_LINE(421)
				nparent->child1 = sibling;
				HX_STACK_LINE(421)
				nparent->child2 = leaf;
				HX_STACK_LINE(421)
				sibling->parent = nparent;
				HX_STACK_LINE(421)
				leaf->parent = nparent;
			}
			else{
				HX_STACK_LINE(421)
				nparent->child1 = sibling;
				HX_STACK_LINE(421)
				nparent->child2 = leaf;
				HX_STACK_LINE(421)
				sibling->parent = nparent;
				HX_STACK_LINE(421)
				leaf->parent = nparent;
				HX_STACK_LINE(421)
				this->root = nparent;
			}
			HX_STACK_LINE(421)
			node = leaf->parent;
			HX_STACK_LINE(421)
			while((true)){
				HX_STACK_LINE(421)
				bool tmp5 = (node != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(421)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(421)
				if ((tmp6)){
					HX_STACK_LINE(421)
					break;
				}
				HX_STACK_LINE(421)
				bool tmp7 = (node->child1 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(421)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(421)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(421)
				if ((tmp8)){
					HX_STACK_LINE(421)
					tmp9 = (node->height < (int)2);
				}
				else{
					HX_STACK_LINE(421)
					tmp9 = true;
				}
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(421)
				if ((tmp9)){
					HX_STACK_LINE(421)
					tmp10 = node;
				}
				else{
					HX_STACK_LINE(421)
					::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(421)
					::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(421)
					int tmp11 = (c->height - b->height);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(421)
					int balance = tmp11;		HX_STACK_VAR(balance,"balance");
					HX_STACK_LINE(421)
					bool tmp12 = (balance > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(421)
					if ((tmp12)){
						HX_STACK_LINE(421)
						::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(421)
						::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(421)
						c->child1 = node;
						HX_STACK_LINE(421)
						c->parent = node->parent;
						HX_STACK_LINE(421)
						node->parent = c;
						HX_STACK_LINE(421)
						bool tmp13 = (c->parent != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(421)
						if ((tmp13)){
							HX_STACK_LINE(421)
							::zpp_nape::space::ZPP_AABBNode tmp14 = c->parent->child1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(421)
							::zpp_nape::space::ZPP_AABBNode tmp15 = node;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							if ((tmp16)){
								HX_STACK_LINE(421)
								c->parent->child1 = c;
							}
							else{
								HX_STACK_LINE(421)
								c->parent->child2 = c;
							}
						}
						else{
							HX_STACK_LINE(421)
							this->root = c;
						}
						HX_STACK_LINE(421)
						bool tmp14 = (f->height > g->height);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						if ((tmp14)){
							HX_STACK_LINE(421)
							c->child2 = f;
							HX_STACK_LINE(421)
							node->child2 = g;
							HX_STACK_LINE(421)
							g->parent = node;
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(421)
								bool tmp15 = (a->minx < b1->minx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(421)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								if ((tmp15)){
									HX_STACK_LINE(421)
									tmp16 = a->minx;
								}
								else{
									HX_STACK_LINE(421)
									tmp16 = b1->minx;
								}
								HX_STACK_LINE(421)
								_this->minx = tmp16;
								HX_STACK_LINE(421)
								bool tmp17 = (a->miny < b1->miny);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(421)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(421)
								if ((tmp17)){
									HX_STACK_LINE(421)
									tmp18 = a->miny;
								}
								else{
									HX_STACK_LINE(421)
									tmp18 = b1->miny;
								}
								HX_STACK_LINE(421)
								_this->miny = tmp18;
								HX_STACK_LINE(421)
								bool tmp19 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(421)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(421)
								if ((tmp19)){
									HX_STACK_LINE(421)
									tmp20 = a->maxx;
								}
								else{
									HX_STACK_LINE(421)
									tmp20 = b1->maxx;
								}
								HX_STACK_LINE(421)
								_this->maxx = tmp20;
								HX_STACK_LINE(421)
								bool tmp21 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(421)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(421)
								if ((tmp21)){
									HX_STACK_LINE(421)
									tmp22 = a->maxy;
								}
								else{
									HX_STACK_LINE(421)
									tmp22 = b1->maxy;
								}
								HX_STACK_LINE(421)
								_this->maxy = tmp22;
							}
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(421)
								bool tmp15 = (a->minx < b1->minx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(421)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								if ((tmp15)){
									HX_STACK_LINE(421)
									tmp16 = a->minx;
								}
								else{
									HX_STACK_LINE(421)
									tmp16 = b1->minx;
								}
								HX_STACK_LINE(421)
								_this->minx = tmp16;
								HX_STACK_LINE(421)
								bool tmp17 = (a->miny < b1->miny);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(421)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(421)
								if ((tmp17)){
									HX_STACK_LINE(421)
									tmp18 = a->miny;
								}
								else{
									HX_STACK_LINE(421)
									tmp18 = b1->miny;
								}
								HX_STACK_LINE(421)
								_this->miny = tmp18;
								HX_STACK_LINE(421)
								bool tmp19 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(421)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(421)
								if ((tmp19)){
									HX_STACK_LINE(421)
									tmp20 = a->maxx;
								}
								else{
									HX_STACK_LINE(421)
									tmp20 = b1->maxx;
								}
								HX_STACK_LINE(421)
								_this->maxx = tmp20;
								HX_STACK_LINE(421)
								bool tmp21 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(421)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(421)
								if ((tmp21)){
									HX_STACK_LINE(421)
									tmp22 = a->maxy;
								}
								else{
									HX_STACK_LINE(421)
									tmp22 = b1->maxy;
								}
								HX_STACK_LINE(421)
								_this->maxy = tmp22;
							}
							HX_STACK_LINE(421)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								int x = b->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(421)
								int y = g->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(421)
								bool tmp16 = (x > y);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								if ((tmp16)){
									HX_STACK_LINE(421)
									tmp15 = x;
								}
								else{
									HX_STACK_LINE(421)
									tmp15 = y;
								}
							}
							HX_STACK_LINE(421)
							int tmp16 = ((int)1 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							node->height = tmp16;
							HX_STACK_LINE(421)
							int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								int x = node->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(421)
								int y = f->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(421)
								bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(421)
								if ((tmp18)){
									HX_STACK_LINE(421)
									tmp17 = x;
								}
								else{
									HX_STACK_LINE(421)
									tmp17 = y;
								}
							}
							HX_STACK_LINE(421)
							int tmp18 = ((int)1 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(421)
							c->height = tmp18;
						}
						else{
							HX_STACK_LINE(421)
							c->child2 = g;
							HX_STACK_LINE(421)
							node->child2 = f;
							HX_STACK_LINE(421)
							f->parent = node;
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(421)
								bool tmp15 = (a->minx < b1->minx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(421)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								if ((tmp15)){
									HX_STACK_LINE(421)
									tmp16 = a->minx;
								}
								else{
									HX_STACK_LINE(421)
									tmp16 = b1->minx;
								}
								HX_STACK_LINE(421)
								_this->minx = tmp16;
								HX_STACK_LINE(421)
								bool tmp17 = (a->miny < b1->miny);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(421)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(421)
								if ((tmp17)){
									HX_STACK_LINE(421)
									tmp18 = a->miny;
								}
								else{
									HX_STACK_LINE(421)
									tmp18 = b1->miny;
								}
								HX_STACK_LINE(421)
								_this->miny = tmp18;
								HX_STACK_LINE(421)
								bool tmp19 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(421)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(421)
								if ((tmp19)){
									HX_STACK_LINE(421)
									tmp20 = a->maxx;
								}
								else{
									HX_STACK_LINE(421)
									tmp20 = b1->maxx;
								}
								HX_STACK_LINE(421)
								_this->maxx = tmp20;
								HX_STACK_LINE(421)
								bool tmp21 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(421)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(421)
								if ((tmp21)){
									HX_STACK_LINE(421)
									tmp22 = a->maxy;
								}
								else{
									HX_STACK_LINE(421)
									tmp22 = b1->maxy;
								}
								HX_STACK_LINE(421)
								_this->maxy = tmp22;
							}
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(421)
								bool tmp15 = (a->minx < b1->minx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(421)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								if ((tmp15)){
									HX_STACK_LINE(421)
									tmp16 = a->minx;
								}
								else{
									HX_STACK_LINE(421)
									tmp16 = b1->minx;
								}
								HX_STACK_LINE(421)
								_this->minx = tmp16;
								HX_STACK_LINE(421)
								bool tmp17 = (a->miny < b1->miny);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(421)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(421)
								if ((tmp17)){
									HX_STACK_LINE(421)
									tmp18 = a->miny;
								}
								else{
									HX_STACK_LINE(421)
									tmp18 = b1->miny;
								}
								HX_STACK_LINE(421)
								_this->miny = tmp18;
								HX_STACK_LINE(421)
								bool tmp19 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(421)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(421)
								if ((tmp19)){
									HX_STACK_LINE(421)
									tmp20 = a->maxx;
								}
								else{
									HX_STACK_LINE(421)
									tmp20 = b1->maxx;
								}
								HX_STACK_LINE(421)
								_this->maxx = tmp20;
								HX_STACK_LINE(421)
								bool tmp21 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(421)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(421)
								if ((tmp21)){
									HX_STACK_LINE(421)
									tmp22 = a->maxy;
								}
								else{
									HX_STACK_LINE(421)
									tmp22 = b1->maxy;
								}
								HX_STACK_LINE(421)
								_this->maxy = tmp22;
							}
							HX_STACK_LINE(421)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								int x = b->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(421)
								int y = f->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(421)
								bool tmp16 = (x > y);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								if ((tmp16)){
									HX_STACK_LINE(421)
									tmp15 = x;
								}
								else{
									HX_STACK_LINE(421)
									tmp15 = y;
								}
							}
							HX_STACK_LINE(421)
							int tmp16 = ((int)1 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							node->height = tmp16;
							HX_STACK_LINE(421)
							int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								int x = node->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(421)
								int y = g->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(421)
								bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(421)
								if ((tmp18)){
									HX_STACK_LINE(421)
									tmp17 = x;
								}
								else{
									HX_STACK_LINE(421)
									tmp17 = y;
								}
							}
							HX_STACK_LINE(421)
							int tmp18 = ((int)1 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(421)
							c->height = tmp18;
						}
						HX_STACK_LINE(421)
						tmp10 = c;
					}
					else{
						HX_STACK_LINE(421)
						bool tmp13 = (balance < (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(421)
						if ((tmp13)){
							HX_STACK_LINE(421)
							::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(421)
							::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(421)
							b->child1 = node;
							HX_STACK_LINE(421)
							b->parent = node->parent;
							HX_STACK_LINE(421)
							node->parent = b;
							HX_STACK_LINE(421)
							bool tmp14 = (b->parent != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(421)
							if ((tmp14)){
								HX_STACK_LINE(421)
								::zpp_nape::space::ZPP_AABBNode tmp15 = b->parent->child1;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(421)
								::zpp_nape::space::ZPP_AABBNode tmp16 = node;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(421)
								if ((tmp17)){
									HX_STACK_LINE(421)
									b->parent->child1 = b;
								}
								else{
									HX_STACK_LINE(421)
									b->parent->child2 = b;
								}
							}
							else{
								HX_STACK_LINE(421)
								this->root = b;
							}
							HX_STACK_LINE(421)
							bool tmp15 = (f->height > g->height);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							if ((tmp15)){
								HX_STACK_LINE(421)
								b->child2 = f;
								HX_STACK_LINE(421)
								node->child1 = g;
								HX_STACK_LINE(421)
								g->parent = node;
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(421)
									bool tmp16 = (a->minx < b1->minx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(421)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(421)
									if ((tmp16)){
										HX_STACK_LINE(421)
										tmp17 = a->minx;
									}
									else{
										HX_STACK_LINE(421)
										tmp17 = b1->minx;
									}
									HX_STACK_LINE(421)
									_this->minx = tmp17;
									HX_STACK_LINE(421)
									bool tmp18 = (a->miny < b1->miny);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(421)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(421)
									if ((tmp18)){
										HX_STACK_LINE(421)
										tmp19 = a->miny;
									}
									else{
										HX_STACK_LINE(421)
										tmp19 = b1->miny;
									}
									HX_STACK_LINE(421)
									_this->miny = tmp19;
									HX_STACK_LINE(421)
									bool tmp20 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(421)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(421)
									if ((tmp20)){
										HX_STACK_LINE(421)
										tmp21 = a->maxx;
									}
									else{
										HX_STACK_LINE(421)
										tmp21 = b1->maxx;
									}
									HX_STACK_LINE(421)
									_this->maxx = tmp21;
									HX_STACK_LINE(421)
									bool tmp22 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(421)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(421)
									if ((tmp22)){
										HX_STACK_LINE(421)
										tmp23 = a->maxy;
									}
									else{
										HX_STACK_LINE(421)
										tmp23 = b1->maxy;
									}
									HX_STACK_LINE(421)
									_this->maxy = tmp23;
								}
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(421)
									bool tmp16 = (a->minx < b1->minx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(421)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(421)
									if ((tmp16)){
										HX_STACK_LINE(421)
										tmp17 = a->minx;
									}
									else{
										HX_STACK_LINE(421)
										tmp17 = b1->minx;
									}
									HX_STACK_LINE(421)
									_this->minx = tmp17;
									HX_STACK_LINE(421)
									bool tmp18 = (a->miny < b1->miny);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(421)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(421)
									if ((tmp18)){
										HX_STACK_LINE(421)
										tmp19 = a->miny;
									}
									else{
										HX_STACK_LINE(421)
										tmp19 = b1->miny;
									}
									HX_STACK_LINE(421)
									_this->miny = tmp19;
									HX_STACK_LINE(421)
									bool tmp20 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(421)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(421)
									if ((tmp20)){
										HX_STACK_LINE(421)
										tmp21 = a->maxx;
									}
									else{
										HX_STACK_LINE(421)
										tmp21 = b1->maxx;
									}
									HX_STACK_LINE(421)
									_this->maxx = tmp21;
									HX_STACK_LINE(421)
									bool tmp22 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(421)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(421)
									if ((tmp22)){
										HX_STACK_LINE(421)
										tmp23 = a->maxy;
									}
									else{
										HX_STACK_LINE(421)
										tmp23 = b1->maxy;
									}
									HX_STACK_LINE(421)
									_this->maxy = tmp23;
								}
								HX_STACK_LINE(421)
								int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									int x = c->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(421)
									int y = g->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(421)
									bool tmp17 = (x > y);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(421)
									if ((tmp17)){
										HX_STACK_LINE(421)
										tmp16 = x;
									}
									else{
										HX_STACK_LINE(421)
										tmp16 = y;
									}
								}
								HX_STACK_LINE(421)
								int tmp17 = ((int)1 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(421)
								node->height = tmp17;
								HX_STACK_LINE(421)
								int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									int x = node->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(421)
									int y = f->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(421)
									bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(421)
									if ((tmp19)){
										HX_STACK_LINE(421)
										tmp18 = x;
									}
									else{
										HX_STACK_LINE(421)
										tmp18 = y;
									}
								}
								HX_STACK_LINE(421)
								int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(421)
								b->height = tmp19;
							}
							else{
								HX_STACK_LINE(421)
								b->child2 = g;
								HX_STACK_LINE(421)
								node->child1 = f;
								HX_STACK_LINE(421)
								f->parent = node;
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(421)
									bool tmp16 = (a->minx < b1->minx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(421)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(421)
									if ((tmp16)){
										HX_STACK_LINE(421)
										tmp17 = a->minx;
									}
									else{
										HX_STACK_LINE(421)
										tmp17 = b1->minx;
									}
									HX_STACK_LINE(421)
									_this->minx = tmp17;
									HX_STACK_LINE(421)
									bool tmp18 = (a->miny < b1->miny);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(421)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(421)
									if ((tmp18)){
										HX_STACK_LINE(421)
										tmp19 = a->miny;
									}
									else{
										HX_STACK_LINE(421)
										tmp19 = b1->miny;
									}
									HX_STACK_LINE(421)
									_this->miny = tmp19;
									HX_STACK_LINE(421)
									bool tmp20 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(421)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(421)
									if ((tmp20)){
										HX_STACK_LINE(421)
										tmp21 = a->maxx;
									}
									else{
										HX_STACK_LINE(421)
										tmp21 = b1->maxx;
									}
									HX_STACK_LINE(421)
									_this->maxx = tmp21;
									HX_STACK_LINE(421)
									bool tmp22 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(421)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(421)
									if ((tmp22)){
										HX_STACK_LINE(421)
										tmp23 = a->maxy;
									}
									else{
										HX_STACK_LINE(421)
										tmp23 = b1->maxy;
									}
									HX_STACK_LINE(421)
									_this->maxy = tmp23;
								}
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(421)
									bool tmp16 = (a->minx < b1->minx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(421)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(421)
									if ((tmp16)){
										HX_STACK_LINE(421)
										tmp17 = a->minx;
									}
									else{
										HX_STACK_LINE(421)
										tmp17 = b1->minx;
									}
									HX_STACK_LINE(421)
									_this->minx = tmp17;
									HX_STACK_LINE(421)
									bool tmp18 = (a->miny < b1->miny);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(421)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(421)
									if ((tmp18)){
										HX_STACK_LINE(421)
										tmp19 = a->miny;
									}
									else{
										HX_STACK_LINE(421)
										tmp19 = b1->miny;
									}
									HX_STACK_LINE(421)
									_this->miny = tmp19;
									HX_STACK_LINE(421)
									bool tmp20 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(421)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(421)
									if ((tmp20)){
										HX_STACK_LINE(421)
										tmp21 = a->maxx;
									}
									else{
										HX_STACK_LINE(421)
										tmp21 = b1->maxx;
									}
									HX_STACK_LINE(421)
									_this->maxx = tmp21;
									HX_STACK_LINE(421)
									bool tmp22 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(421)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(421)
									if ((tmp22)){
										HX_STACK_LINE(421)
										tmp23 = a->maxy;
									}
									else{
										HX_STACK_LINE(421)
										tmp23 = b1->maxy;
									}
									HX_STACK_LINE(421)
									_this->maxy = tmp23;
								}
								HX_STACK_LINE(421)
								int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									int x = c->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(421)
									int y = f->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(421)
									bool tmp17 = (x > y);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(421)
									if ((tmp17)){
										HX_STACK_LINE(421)
										tmp16 = x;
									}
									else{
										HX_STACK_LINE(421)
										tmp16 = y;
									}
								}
								HX_STACK_LINE(421)
								int tmp17 = ((int)1 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(421)
								node->height = tmp17;
								HX_STACK_LINE(421)
								int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									int x = node->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(421)
									int y = g->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(421)
									bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(421)
									if ((tmp19)){
										HX_STACK_LINE(421)
										tmp18 = x;
									}
									else{
										HX_STACK_LINE(421)
										tmp18 = y;
									}
								}
								HX_STACK_LINE(421)
								int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(421)
								b->height = tmp19;
							}
							HX_STACK_LINE(421)
							tmp10 = b;
						}
						else{
							HX_STACK_LINE(421)
							tmp10 = node;
						}
					}
				}
				HX_STACK_LINE(421)
				node = tmp10;
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				HX_STACK_LINE(421)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					int x = child1->height;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(421)
					int y = child2->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(421)
					bool tmp12 = (x > y);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(421)
					if ((tmp12)){
						HX_STACK_LINE(421)
						tmp11 = x;
					}
					else{
						HX_STACK_LINE(421)
						tmp11 = y;
					}
				}
				HX_STACK_LINE(421)
				int tmp12 = ((int)1 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(421)
				node->height = tmp12;
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(421)
					bool tmp13 = (a->minx < b->minx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(421)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(421)
					if ((tmp13)){
						HX_STACK_LINE(421)
						tmp14 = a->minx;
					}
					else{
						HX_STACK_LINE(421)
						tmp14 = b->minx;
					}
					HX_STACK_LINE(421)
					_this->minx = tmp14;
					HX_STACK_LINE(421)
					bool tmp15 = (a->miny < b->miny);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(421)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(421)
					if ((tmp15)){
						HX_STACK_LINE(421)
						tmp16 = a->miny;
					}
					else{
						HX_STACK_LINE(421)
						tmp16 = b->miny;
					}
					HX_STACK_LINE(421)
					_this->miny = tmp16;
					HX_STACK_LINE(421)
					bool tmp17 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(421)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(421)
					if ((tmp17)){
						HX_STACK_LINE(421)
						tmp18 = a->maxx;
					}
					else{
						HX_STACK_LINE(421)
						tmp18 = b->maxx;
					}
					HX_STACK_LINE(421)
					_this->maxx = tmp18;
					HX_STACK_LINE(421)
					bool tmp19 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(421)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(421)
					if ((tmp19)){
						HX_STACK_LINE(421)
						tmp20 = a->maxy;
					}
					else{
						HX_STACK_LINE(421)
						tmp20 = b->maxy;
					}
					HX_STACK_LINE(421)
					_this->maxy = tmp20;
				}
				HX_STACK_LINE(421)
				node = node->parent;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,insertLeaf,(void))

Void ZPP_AABBTree_obj::inlined_insertLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBTree","inlined_insertLeaf",0xd4373b6d,"zpp_nape.space.ZPP_AABBTree.inlined_insertLeaf","zpp_nape/space/DynAABBPhase.hx",425,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(leaf,"leaf")
		HX_STACK_LINE(426)
		::zpp_nape::space::ZPP_AABBNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		if ((tmp1)){
			HX_STACK_LINE(427)
			this->root = leaf;
			HX_STACK_LINE(428)
			::zpp_nape::space::ZPP_AABBNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			tmp2->parent = null();
		}
		else{
			HX_STACK_LINE(431)
			::zpp_nape::geom::ZPP_AABB leafaabb = leaf->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
			HX_STACK_LINE(432)
			::zpp_nape::space::ZPP_AABBNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(432)
			::zpp_nape::space::ZPP_AABBNode node = tmp2;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(433)
			while((true)){
				HX_STACK_LINE(433)
				bool tmp3 = (node->child1 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(433)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(433)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(433)
				if ((tmp5)){
					HX_STACK_LINE(433)
					break;
				}
				HX_STACK_LINE(434)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(435)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				HX_STACK_LINE(436)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(436)
					Float tmp7 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(436)
					Float tmp8 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(436)
					Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(436)
					tmp6 = (tmp9 * (int)2);
				}
				HX_STACK_LINE(436)
				Float area = tmp6;		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(437)
					::zpp_nape::geom::ZPP_AABB _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(437)
					::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(437)
					bool tmp8 = (a->minx < leafaabb->minx);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(437)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(437)
					if ((tmp8)){
						HX_STACK_LINE(437)
						tmp9 = a->minx;
					}
					else{
						HX_STACK_LINE(437)
						tmp9 = leafaabb->minx;
					}
					HX_STACK_LINE(437)
					_this->minx = tmp9;
					HX_STACK_LINE(437)
					bool tmp10 = (a->miny < leafaabb->miny);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(437)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(437)
					if ((tmp10)){
						HX_STACK_LINE(437)
						tmp11 = a->miny;
					}
					else{
						HX_STACK_LINE(437)
						tmp11 = leafaabb->miny;
					}
					HX_STACK_LINE(437)
					_this->miny = tmp11;
					HX_STACK_LINE(437)
					bool tmp12 = (a->maxx > leafaabb->maxx);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(437)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(437)
					if ((tmp12)){
						HX_STACK_LINE(437)
						tmp13 = a->maxx;
					}
					else{
						HX_STACK_LINE(437)
						tmp13 = leafaabb->maxx;
					}
					HX_STACK_LINE(437)
					_this->maxx = tmp13;
					HX_STACK_LINE(437)
					bool tmp14 = (a->maxy > leafaabb->maxy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(437)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(437)
					if ((tmp14)){
						HX_STACK_LINE(437)
						tmp15 = a->maxy;
					}
					else{
						HX_STACK_LINE(437)
						tmp15 = leafaabb->maxy;
					}
					HX_STACK_LINE(437)
					_this->maxy = tmp15;
				}
				HX_STACK_LINE(438)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(438)
				{
					HX_STACK_LINE(438)
					::zpp_nape::geom::ZPP_AABB tmp8 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(438)
					::zpp_nape::geom::ZPP_AABB _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(438)
					Float tmp9 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(438)
					Float tmp10 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(438)
					Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(438)
					tmp7 = (tmp11 * (int)2);
				}
				HX_STACK_LINE(438)
				Float carea = tmp7;		HX_STACK_VAR(carea,"carea");
				HX_STACK_LINE(439)
				Float tmp8 = ((int)2 * carea);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(439)
				Float cost = tmp8;		HX_STACK_VAR(cost,"cost");
				HX_STACK_LINE(440)
				Float tmp9 = (carea - area);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(440)
				Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(440)
				Float icost = tmp10;		HX_STACK_VAR(icost,"icost");
				HX_STACK_LINE(441)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(441)
				{
					HX_STACK_LINE(442)
					{
						HX_STACK_LINE(442)
						::zpp_nape::geom::ZPP_AABB tmp12 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(442)
						::zpp_nape::geom::ZPP_AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(442)
						::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(442)
						bool tmp13 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(442)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(442)
						if ((tmp13)){
							HX_STACK_LINE(442)
							tmp14 = leafaabb->minx;
						}
						else{
							HX_STACK_LINE(442)
							tmp14 = b->minx;
						}
						HX_STACK_LINE(442)
						_this->minx = tmp14;
						HX_STACK_LINE(442)
						bool tmp15 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(442)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(442)
						if ((tmp15)){
							HX_STACK_LINE(442)
							tmp16 = leafaabb->miny;
						}
						else{
							HX_STACK_LINE(442)
							tmp16 = b->miny;
						}
						HX_STACK_LINE(442)
						_this->miny = tmp16;
						HX_STACK_LINE(442)
						bool tmp17 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(442)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(442)
						if ((tmp17)){
							HX_STACK_LINE(442)
							tmp18 = leafaabb->maxx;
						}
						else{
							HX_STACK_LINE(442)
							tmp18 = b->maxx;
						}
						HX_STACK_LINE(442)
						_this->maxx = tmp18;
						HX_STACK_LINE(442)
						bool tmp19 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(442)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(442)
						if ((tmp19)){
							HX_STACK_LINE(442)
							tmp20 = leafaabb->maxy;
						}
						else{
							HX_STACK_LINE(442)
							tmp20 = b->maxy;
						}
						HX_STACK_LINE(442)
						_this->maxy = tmp20;
					}
					HX_STACK_LINE(443)
					bool tmp12 = (child1->child1 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(443)
					if ((tmp12)){
						HX_STACK_LINE(443)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(443)
						{
							HX_STACK_LINE(443)
							::zpp_nape::geom::ZPP_AABB tmp14 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(443)
							::zpp_nape::geom::ZPP_AABB _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(443)
							Float tmp15 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(443)
							Float tmp16 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(443)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(443)
							tmp13 = (tmp17 * (int)2);
						}
						HX_STACK_LINE(443)
						Float tmp14 = icost;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(443)
						tmp11 = (tmp13 + tmp14);
					}
					else{
						HX_STACK_LINE(445)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(445)
							Float tmp14 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(445)
							Float tmp15 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(445)
							Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(445)
							tmp13 = (tmp16 * (int)2);
						}
						HX_STACK_LINE(445)
						Float oarea = tmp13;		HX_STACK_VAR(oarea,"oarea");
						HX_STACK_LINE(446)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_AABB tmp15 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_AABB _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(446)
							Float tmp16 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(446)
							Float tmp17 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(446)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(446)
							tmp14 = (tmp18 * (int)2);
						}
						HX_STACK_LINE(446)
						Float narea = tmp14;		HX_STACK_VAR(narea,"narea");
						HX_STACK_LINE(447)
						Float tmp15 = (narea - oarea);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(447)
						Float tmp16 = icost;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(447)
						tmp11 = (tmp15 + tmp16);
					}
				}
				HX_STACK_LINE(441)
				Float cost1 = tmp11;		HX_STACK_VAR(cost1,"cost1");
				HX_STACK_LINE(450)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(451)
						::zpp_nape::geom::ZPP_AABB tmp13 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(451)
						::zpp_nape::geom::ZPP_AABB _this = tmp13;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(451)
						::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(451)
						bool tmp14 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(451)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(451)
						if ((tmp14)){
							HX_STACK_LINE(451)
							tmp15 = leafaabb->minx;
						}
						else{
							HX_STACK_LINE(451)
							tmp15 = b->minx;
						}
						HX_STACK_LINE(451)
						_this->minx = tmp15;
						HX_STACK_LINE(451)
						bool tmp16 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(451)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(451)
						if ((tmp16)){
							HX_STACK_LINE(451)
							tmp17 = leafaabb->miny;
						}
						else{
							HX_STACK_LINE(451)
							tmp17 = b->miny;
						}
						HX_STACK_LINE(451)
						_this->miny = tmp17;
						HX_STACK_LINE(451)
						bool tmp18 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(451)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(451)
						if ((tmp18)){
							HX_STACK_LINE(451)
							tmp19 = leafaabb->maxx;
						}
						else{
							HX_STACK_LINE(451)
							tmp19 = b->maxx;
						}
						HX_STACK_LINE(451)
						_this->maxx = tmp19;
						HX_STACK_LINE(451)
						bool tmp20 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(451)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(451)
						if ((tmp20)){
							HX_STACK_LINE(451)
							tmp21 = leafaabb->maxy;
						}
						else{
							HX_STACK_LINE(451)
							tmp21 = b->maxy;
						}
						HX_STACK_LINE(451)
						_this->maxy = tmp21;
					}
					HX_STACK_LINE(452)
					bool tmp13 = (child2->child1 == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(452)
					if ((tmp13)){
						HX_STACK_LINE(452)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(452)
						{
							HX_STACK_LINE(452)
							::zpp_nape::geom::ZPP_AABB tmp15 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(452)
							::zpp_nape::geom::ZPP_AABB _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(452)
							Float tmp16 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(452)
							Float tmp17 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(452)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(452)
							tmp14 = (tmp18 * (int)2);
						}
						HX_STACK_LINE(452)
						Float tmp15 = icost;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(452)
						tmp12 = (tmp14 + tmp15);
					}
					else{
						HX_STACK_LINE(454)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(454)
						{
							HX_STACK_LINE(454)
							::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(454)
							Float tmp15 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(454)
							Float tmp16 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(454)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(454)
							tmp14 = (tmp17 * (int)2);
						}
						HX_STACK_LINE(454)
						Float oarea = tmp14;		HX_STACK_VAR(oarea,"oarea");
						HX_STACK_LINE(455)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(455)
						{
							HX_STACK_LINE(455)
							::zpp_nape::geom::ZPP_AABB tmp16 = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(455)
							::zpp_nape::geom::ZPP_AABB _this = tmp16;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(455)
							Float tmp17 = (_this->maxx - _this->minx);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(455)
							Float tmp18 = (_this->maxy - _this->miny);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(455)
							Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(455)
							tmp15 = (tmp19 * (int)2);
						}
						HX_STACK_LINE(455)
						Float narea = tmp15;		HX_STACK_VAR(narea,"narea");
						HX_STACK_LINE(456)
						Float tmp16 = (narea - oarea);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(456)
						Float tmp17 = icost;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(456)
						tmp12 = (tmp16 + tmp17);
					}
				}
				HX_STACK_LINE(450)
				Float cost2 = tmp12;		HX_STACK_VAR(cost2,"cost2");
				HX_STACK_LINE(459)
				bool tmp13 = (cost < cost1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(459)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(459)
				if ((tmp13)){
					HX_STACK_LINE(459)
					tmp14 = (cost < cost2);
				}
				else{
					HX_STACK_LINE(459)
					tmp14 = false;
				}
				HX_STACK_LINE(459)
				if ((tmp14)){
					HX_STACK_LINE(459)
					break;
				}
				else{
					HX_STACK_LINE(460)
					bool tmp15 = (cost1 < cost2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(460)
					::zpp_nape::space::ZPP_AABBNode tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(460)
					if ((tmp15)){
						HX_STACK_LINE(460)
						tmp16 = child1;
					}
					else{
						HX_STACK_LINE(460)
						tmp16 = child2;
					}
					HX_STACK_LINE(460)
					node = tmp16;
				}
			}
			HX_STACK_LINE(462)
			::zpp_nape::space::ZPP_AABBNode sibling = node;		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(463)
			::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
			HX_STACK_LINE(464)
			::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
			HX_STACK_LINE(465)
			{
				HX_STACK_LINE(466)
				::zpp_nape::space::ZPP_AABBNode tmp3 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(466)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(466)
				if ((tmp4)){
					HX_STACK_LINE(467)
					::zpp_nape::space::ZPP_AABBNode tmp5 = ::zpp_nape::space::ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(467)
					nparent = tmp5;
				}
				else{
					HX_STACK_LINE(473)
					::zpp_nape::space::ZPP_AABBNode tmp5 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(473)
					nparent = tmp5;
					HX_STACK_LINE(474)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
					HX_STACK_LINE(475)
					nparent->next = null();
				}
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					{
						HX_STACK_LINE(480)
						::zpp_nape::geom::ZPP_AABB tmp5 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(480)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(480)
						if ((tmp6)){
							HX_STACK_LINE(480)
							::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(480)
							nparent->aabb = tmp7;
						}
						else{
							HX_STACK_LINE(480)
							::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(480)
							nparent->aabb = tmp7;
							HX_STACK_LINE(480)
							::zpp_nape::geom::ZPP_AABB tmp8 = nparent->aabb->next;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(480)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = tmp8;
							HX_STACK_LINE(480)
							nparent->aabb->next = null();
						}
						HX_STACK_LINE(480)
						Dynamic();
					}
					HX_STACK_LINE(480)
					nparent->moved = false;
					HX_STACK_LINE(480)
					nparent->synced = false;
					HX_STACK_LINE(480)
					nparent->first_sync = false;
				}
			}
			HX_STACK_LINE(482)
			nparent->parent = oparent;
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(483)
				::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(483)
				bool tmp3 = (leafaabb->minx < b->minx);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(483)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(483)
				if ((tmp3)){
					HX_STACK_LINE(483)
					tmp4 = leafaabb->minx;
				}
				else{
					HX_STACK_LINE(483)
					tmp4 = b->minx;
				}
				HX_STACK_LINE(483)
				_this->minx = tmp4;
				HX_STACK_LINE(483)
				bool tmp5 = (leafaabb->miny < b->miny);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(483)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(483)
				if ((tmp5)){
					HX_STACK_LINE(483)
					tmp6 = leafaabb->miny;
				}
				else{
					HX_STACK_LINE(483)
					tmp6 = b->miny;
				}
				HX_STACK_LINE(483)
				_this->miny = tmp6;
				HX_STACK_LINE(483)
				bool tmp7 = (leafaabb->maxx > b->maxx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(483)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(483)
				if ((tmp7)){
					HX_STACK_LINE(483)
					tmp8 = leafaabb->maxx;
				}
				else{
					HX_STACK_LINE(483)
					tmp8 = b->maxx;
				}
				HX_STACK_LINE(483)
				_this->maxx = tmp8;
				HX_STACK_LINE(483)
				bool tmp9 = (leafaabb->maxy > b->maxy);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(483)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(483)
				if ((tmp9)){
					HX_STACK_LINE(483)
					tmp10 = leafaabb->maxy;
				}
				else{
					HX_STACK_LINE(483)
					tmp10 = b->maxy;
				}
				HX_STACK_LINE(483)
				_this->maxy = tmp10;
			}
			HX_STACK_LINE(484)
			int tmp3 = (sibling->height + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(484)
			nparent->height = tmp3;
			HX_STACK_LINE(485)
			bool tmp4 = (oparent != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(485)
			if ((tmp4)){
				HX_STACK_LINE(486)
				bool tmp5 = (oparent->child1 == sibling);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(486)
				if ((tmp5)){
					HX_STACK_LINE(486)
					oparent->child1 = nparent;
				}
				else{
					HX_STACK_LINE(487)
					oparent->child2 = nparent;
				}
				HX_STACK_LINE(488)
				nparent->child1 = sibling;
				HX_STACK_LINE(489)
				nparent->child2 = leaf;
				HX_STACK_LINE(490)
				sibling->parent = nparent;
				HX_STACK_LINE(491)
				leaf->parent = nparent;
			}
			else{
				HX_STACK_LINE(494)
				nparent->child1 = sibling;
				HX_STACK_LINE(495)
				nparent->child2 = leaf;
				HX_STACK_LINE(496)
				sibling->parent = nparent;
				HX_STACK_LINE(497)
				leaf->parent = nparent;
				HX_STACK_LINE(498)
				this->root = nparent;
			}
			HX_STACK_LINE(500)
			node = leaf->parent;
			HX_STACK_LINE(501)
			while((true)){
				HX_STACK_LINE(501)
				bool tmp5 = (node != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(501)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(501)
				if ((tmp6)){
					HX_STACK_LINE(501)
					break;
				}
				HX_STACK_LINE(502)
				bool tmp7 = (node->child1 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(502)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(502)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(502)
				if ((tmp8)){
					HX_STACK_LINE(502)
					tmp9 = (node->height < (int)2);
				}
				else{
					HX_STACK_LINE(502)
					tmp9 = true;
				}
				HX_STACK_LINE(502)
				::zpp_nape::space::ZPP_AABBNode tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(502)
				if ((tmp9)){
					HX_STACK_LINE(502)
					tmp10 = node;
				}
				else{
					HX_STACK_LINE(502)
					::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(502)
					::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(502)
					int tmp11 = (c->height - b->height);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(502)
					int balance = tmp11;		HX_STACK_VAR(balance,"balance");
					HX_STACK_LINE(502)
					bool tmp12 = (balance > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(502)
					if ((tmp12)){
						HX_STACK_LINE(502)
						::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(502)
						::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(502)
						c->child1 = node;
						HX_STACK_LINE(502)
						c->parent = node->parent;
						HX_STACK_LINE(502)
						node->parent = c;
						HX_STACK_LINE(502)
						bool tmp13 = (c->parent != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(502)
						if ((tmp13)){
							HX_STACK_LINE(502)
							::zpp_nape::space::ZPP_AABBNode tmp14 = c->parent->child1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(502)
							::zpp_nape::space::ZPP_AABBNode tmp15 = node;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(502)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(502)
							if ((tmp16)){
								HX_STACK_LINE(502)
								c->parent->child1 = c;
							}
							else{
								HX_STACK_LINE(502)
								c->parent->child2 = c;
							}
						}
						else{
							HX_STACK_LINE(502)
							this->root = c;
						}
						HX_STACK_LINE(502)
						bool tmp14 = (f->height > g->height);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(502)
						if ((tmp14)){
							HX_STACK_LINE(502)
							c->child2 = f;
							HX_STACK_LINE(502)
							node->child2 = g;
							HX_STACK_LINE(502)
							g->parent = node;
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(502)
								bool tmp15 = (a->minx < b1->minx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(502)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								if ((tmp15)){
									HX_STACK_LINE(502)
									tmp16 = a->minx;
								}
								else{
									HX_STACK_LINE(502)
									tmp16 = b1->minx;
								}
								HX_STACK_LINE(502)
								_this->minx = tmp16;
								HX_STACK_LINE(502)
								bool tmp17 = (a->miny < b1->miny);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(502)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(502)
								if ((tmp17)){
									HX_STACK_LINE(502)
									tmp18 = a->miny;
								}
								else{
									HX_STACK_LINE(502)
									tmp18 = b1->miny;
								}
								HX_STACK_LINE(502)
								_this->miny = tmp18;
								HX_STACK_LINE(502)
								bool tmp19 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(502)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(502)
								if ((tmp19)){
									HX_STACK_LINE(502)
									tmp20 = a->maxx;
								}
								else{
									HX_STACK_LINE(502)
									tmp20 = b1->maxx;
								}
								HX_STACK_LINE(502)
								_this->maxx = tmp20;
								HX_STACK_LINE(502)
								bool tmp21 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(502)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(502)
								if ((tmp21)){
									HX_STACK_LINE(502)
									tmp22 = a->maxy;
								}
								else{
									HX_STACK_LINE(502)
									tmp22 = b1->maxy;
								}
								HX_STACK_LINE(502)
								_this->maxy = tmp22;
							}
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(502)
								bool tmp15 = (a->minx < b1->minx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(502)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								if ((tmp15)){
									HX_STACK_LINE(502)
									tmp16 = a->minx;
								}
								else{
									HX_STACK_LINE(502)
									tmp16 = b1->minx;
								}
								HX_STACK_LINE(502)
								_this->minx = tmp16;
								HX_STACK_LINE(502)
								bool tmp17 = (a->miny < b1->miny);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(502)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(502)
								if ((tmp17)){
									HX_STACK_LINE(502)
									tmp18 = a->miny;
								}
								else{
									HX_STACK_LINE(502)
									tmp18 = b1->miny;
								}
								HX_STACK_LINE(502)
								_this->miny = tmp18;
								HX_STACK_LINE(502)
								bool tmp19 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(502)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(502)
								if ((tmp19)){
									HX_STACK_LINE(502)
									tmp20 = a->maxx;
								}
								else{
									HX_STACK_LINE(502)
									tmp20 = b1->maxx;
								}
								HX_STACK_LINE(502)
								_this->maxx = tmp20;
								HX_STACK_LINE(502)
								bool tmp21 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(502)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(502)
								if ((tmp21)){
									HX_STACK_LINE(502)
									tmp22 = a->maxy;
								}
								else{
									HX_STACK_LINE(502)
									tmp22 = b1->maxy;
								}
								HX_STACK_LINE(502)
								_this->maxy = tmp22;
							}
							HX_STACK_LINE(502)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(502)
								int x = b->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(502)
								int y = g->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(502)
								bool tmp16 = (x > y);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								if ((tmp16)){
									HX_STACK_LINE(502)
									tmp15 = x;
								}
								else{
									HX_STACK_LINE(502)
									tmp15 = y;
								}
							}
							HX_STACK_LINE(502)
							int tmp16 = ((int)1 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(502)
							node->height = tmp16;
							HX_STACK_LINE(502)
							int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(502)
								int x = node->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(502)
								int y = f->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(502)
								bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(502)
								if ((tmp18)){
									HX_STACK_LINE(502)
									tmp17 = x;
								}
								else{
									HX_STACK_LINE(502)
									tmp17 = y;
								}
							}
							HX_STACK_LINE(502)
							int tmp18 = ((int)1 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(502)
							c->height = tmp18;
						}
						else{
							HX_STACK_LINE(502)
							c->child2 = g;
							HX_STACK_LINE(502)
							node->child2 = f;
							HX_STACK_LINE(502)
							f->parent = node;
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(502)
								bool tmp15 = (a->minx < b1->minx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(502)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								if ((tmp15)){
									HX_STACK_LINE(502)
									tmp16 = a->minx;
								}
								else{
									HX_STACK_LINE(502)
									tmp16 = b1->minx;
								}
								HX_STACK_LINE(502)
								_this->minx = tmp16;
								HX_STACK_LINE(502)
								bool tmp17 = (a->miny < b1->miny);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(502)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(502)
								if ((tmp17)){
									HX_STACK_LINE(502)
									tmp18 = a->miny;
								}
								else{
									HX_STACK_LINE(502)
									tmp18 = b1->miny;
								}
								HX_STACK_LINE(502)
								_this->miny = tmp18;
								HX_STACK_LINE(502)
								bool tmp19 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(502)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(502)
								if ((tmp19)){
									HX_STACK_LINE(502)
									tmp20 = a->maxx;
								}
								else{
									HX_STACK_LINE(502)
									tmp20 = b1->maxx;
								}
								HX_STACK_LINE(502)
								_this->maxx = tmp20;
								HX_STACK_LINE(502)
								bool tmp21 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(502)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(502)
								if ((tmp21)){
									HX_STACK_LINE(502)
									tmp22 = a->maxy;
								}
								else{
									HX_STACK_LINE(502)
									tmp22 = b1->maxy;
								}
								HX_STACK_LINE(502)
								_this->maxy = tmp22;
							}
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(502)
								::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(502)
								bool tmp15 = (a->minx < b1->minx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(502)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								if ((tmp15)){
									HX_STACK_LINE(502)
									tmp16 = a->minx;
								}
								else{
									HX_STACK_LINE(502)
									tmp16 = b1->minx;
								}
								HX_STACK_LINE(502)
								_this->minx = tmp16;
								HX_STACK_LINE(502)
								bool tmp17 = (a->miny < b1->miny);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(502)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(502)
								if ((tmp17)){
									HX_STACK_LINE(502)
									tmp18 = a->miny;
								}
								else{
									HX_STACK_LINE(502)
									tmp18 = b1->miny;
								}
								HX_STACK_LINE(502)
								_this->miny = tmp18;
								HX_STACK_LINE(502)
								bool tmp19 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(502)
								Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(502)
								if ((tmp19)){
									HX_STACK_LINE(502)
									tmp20 = a->maxx;
								}
								else{
									HX_STACK_LINE(502)
									tmp20 = b1->maxx;
								}
								HX_STACK_LINE(502)
								_this->maxx = tmp20;
								HX_STACK_LINE(502)
								bool tmp21 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(502)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(502)
								if ((tmp21)){
									HX_STACK_LINE(502)
									tmp22 = a->maxy;
								}
								else{
									HX_STACK_LINE(502)
									tmp22 = b1->maxy;
								}
								HX_STACK_LINE(502)
								_this->maxy = tmp22;
							}
							HX_STACK_LINE(502)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(502)
								int x = b->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(502)
								int y = f->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(502)
								bool tmp16 = (x > y);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								if ((tmp16)){
									HX_STACK_LINE(502)
									tmp15 = x;
								}
								else{
									HX_STACK_LINE(502)
									tmp15 = y;
								}
							}
							HX_STACK_LINE(502)
							int tmp16 = ((int)1 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(502)
							node->height = tmp16;
							HX_STACK_LINE(502)
							int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(502)
								int x = node->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(502)
								int y = g->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(502)
								bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(502)
								if ((tmp18)){
									HX_STACK_LINE(502)
									tmp17 = x;
								}
								else{
									HX_STACK_LINE(502)
									tmp17 = y;
								}
							}
							HX_STACK_LINE(502)
							int tmp18 = ((int)1 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(502)
							c->height = tmp18;
						}
						HX_STACK_LINE(502)
						tmp10 = c;
					}
					else{
						HX_STACK_LINE(502)
						bool tmp13 = (balance < (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(502)
						if ((tmp13)){
							HX_STACK_LINE(502)
							::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(502)
							::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(502)
							b->child1 = node;
							HX_STACK_LINE(502)
							b->parent = node->parent;
							HX_STACK_LINE(502)
							node->parent = b;
							HX_STACK_LINE(502)
							bool tmp14 = (b->parent != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(502)
							if ((tmp14)){
								HX_STACK_LINE(502)
								::zpp_nape::space::ZPP_AABBNode tmp15 = b->parent->child1;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(502)
								::zpp_nape::space::ZPP_AABBNode tmp16 = node;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(502)
								if ((tmp17)){
									HX_STACK_LINE(502)
									b->parent->child1 = b;
								}
								else{
									HX_STACK_LINE(502)
									b->parent->child2 = b;
								}
							}
							else{
								HX_STACK_LINE(502)
								this->root = b;
							}
							HX_STACK_LINE(502)
							bool tmp15 = (f->height > g->height);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(502)
							if ((tmp15)){
								HX_STACK_LINE(502)
								b->child2 = f;
								HX_STACK_LINE(502)
								node->child1 = g;
								HX_STACK_LINE(502)
								g->parent = node;
								HX_STACK_LINE(502)
								{
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(502)
									bool tmp16 = (a->minx < b1->minx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(502)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(502)
									if ((tmp16)){
										HX_STACK_LINE(502)
										tmp17 = a->minx;
									}
									else{
										HX_STACK_LINE(502)
										tmp17 = b1->minx;
									}
									HX_STACK_LINE(502)
									_this->minx = tmp17;
									HX_STACK_LINE(502)
									bool tmp18 = (a->miny < b1->miny);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(502)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(502)
									if ((tmp18)){
										HX_STACK_LINE(502)
										tmp19 = a->miny;
									}
									else{
										HX_STACK_LINE(502)
										tmp19 = b1->miny;
									}
									HX_STACK_LINE(502)
									_this->miny = tmp19;
									HX_STACK_LINE(502)
									bool tmp20 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(502)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(502)
									if ((tmp20)){
										HX_STACK_LINE(502)
										tmp21 = a->maxx;
									}
									else{
										HX_STACK_LINE(502)
										tmp21 = b1->maxx;
									}
									HX_STACK_LINE(502)
									_this->maxx = tmp21;
									HX_STACK_LINE(502)
									bool tmp22 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(502)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(502)
									if ((tmp22)){
										HX_STACK_LINE(502)
										tmp23 = a->maxy;
									}
									else{
										HX_STACK_LINE(502)
										tmp23 = b1->maxy;
									}
									HX_STACK_LINE(502)
									_this->maxy = tmp23;
								}
								HX_STACK_LINE(502)
								{
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(502)
									bool tmp16 = (a->minx < b1->minx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(502)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(502)
									if ((tmp16)){
										HX_STACK_LINE(502)
										tmp17 = a->minx;
									}
									else{
										HX_STACK_LINE(502)
										tmp17 = b1->minx;
									}
									HX_STACK_LINE(502)
									_this->minx = tmp17;
									HX_STACK_LINE(502)
									bool tmp18 = (a->miny < b1->miny);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(502)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(502)
									if ((tmp18)){
										HX_STACK_LINE(502)
										tmp19 = a->miny;
									}
									else{
										HX_STACK_LINE(502)
										tmp19 = b1->miny;
									}
									HX_STACK_LINE(502)
									_this->miny = tmp19;
									HX_STACK_LINE(502)
									bool tmp20 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(502)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(502)
									if ((tmp20)){
										HX_STACK_LINE(502)
										tmp21 = a->maxx;
									}
									else{
										HX_STACK_LINE(502)
										tmp21 = b1->maxx;
									}
									HX_STACK_LINE(502)
									_this->maxx = tmp21;
									HX_STACK_LINE(502)
									bool tmp22 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(502)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(502)
									if ((tmp22)){
										HX_STACK_LINE(502)
										tmp23 = a->maxy;
									}
									else{
										HX_STACK_LINE(502)
										tmp23 = b1->maxy;
									}
									HX_STACK_LINE(502)
									_this->maxy = tmp23;
								}
								HX_STACK_LINE(502)
								int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								{
									HX_STACK_LINE(502)
									int x = c->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(502)
									int y = g->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(502)
									bool tmp17 = (x > y);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(502)
									if ((tmp17)){
										HX_STACK_LINE(502)
										tmp16 = x;
									}
									else{
										HX_STACK_LINE(502)
										tmp16 = y;
									}
								}
								HX_STACK_LINE(502)
								int tmp17 = ((int)1 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(502)
								node->height = tmp17;
								HX_STACK_LINE(502)
								int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(502)
								{
									HX_STACK_LINE(502)
									int x = node->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(502)
									int y = f->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(502)
									bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(502)
									if ((tmp19)){
										HX_STACK_LINE(502)
										tmp18 = x;
									}
									else{
										HX_STACK_LINE(502)
										tmp18 = y;
									}
								}
								HX_STACK_LINE(502)
								int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(502)
								b->height = tmp19;
							}
							else{
								HX_STACK_LINE(502)
								b->child2 = g;
								HX_STACK_LINE(502)
								node->child1 = f;
								HX_STACK_LINE(502)
								f->parent = node;
								HX_STACK_LINE(502)
								{
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(502)
									bool tmp16 = (a->minx < b1->minx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(502)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(502)
									if ((tmp16)){
										HX_STACK_LINE(502)
										tmp17 = a->minx;
									}
									else{
										HX_STACK_LINE(502)
										tmp17 = b1->minx;
									}
									HX_STACK_LINE(502)
									_this->minx = tmp17;
									HX_STACK_LINE(502)
									bool tmp18 = (a->miny < b1->miny);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(502)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(502)
									if ((tmp18)){
										HX_STACK_LINE(502)
										tmp19 = a->miny;
									}
									else{
										HX_STACK_LINE(502)
										tmp19 = b1->miny;
									}
									HX_STACK_LINE(502)
									_this->miny = tmp19;
									HX_STACK_LINE(502)
									bool tmp20 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(502)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(502)
									if ((tmp20)){
										HX_STACK_LINE(502)
										tmp21 = a->maxx;
									}
									else{
										HX_STACK_LINE(502)
										tmp21 = b1->maxx;
									}
									HX_STACK_LINE(502)
									_this->maxx = tmp21;
									HX_STACK_LINE(502)
									bool tmp22 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(502)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(502)
									if ((tmp22)){
										HX_STACK_LINE(502)
										tmp23 = a->maxy;
									}
									else{
										HX_STACK_LINE(502)
										tmp23 = b1->maxy;
									}
									HX_STACK_LINE(502)
									_this->maxy = tmp23;
								}
								HX_STACK_LINE(502)
								{
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(502)
									::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(502)
									bool tmp16 = (a->minx < b1->minx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(502)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(502)
									if ((tmp16)){
										HX_STACK_LINE(502)
										tmp17 = a->minx;
									}
									else{
										HX_STACK_LINE(502)
										tmp17 = b1->minx;
									}
									HX_STACK_LINE(502)
									_this->minx = tmp17;
									HX_STACK_LINE(502)
									bool tmp18 = (a->miny < b1->miny);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(502)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(502)
									if ((tmp18)){
										HX_STACK_LINE(502)
										tmp19 = a->miny;
									}
									else{
										HX_STACK_LINE(502)
										tmp19 = b1->miny;
									}
									HX_STACK_LINE(502)
									_this->miny = tmp19;
									HX_STACK_LINE(502)
									bool tmp20 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(502)
									Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(502)
									if ((tmp20)){
										HX_STACK_LINE(502)
										tmp21 = a->maxx;
									}
									else{
										HX_STACK_LINE(502)
										tmp21 = b1->maxx;
									}
									HX_STACK_LINE(502)
									_this->maxx = tmp21;
									HX_STACK_LINE(502)
									bool tmp22 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(502)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(502)
									if ((tmp22)){
										HX_STACK_LINE(502)
										tmp23 = a->maxy;
									}
									else{
										HX_STACK_LINE(502)
										tmp23 = b1->maxy;
									}
									HX_STACK_LINE(502)
									_this->maxy = tmp23;
								}
								HX_STACK_LINE(502)
								int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(502)
								{
									HX_STACK_LINE(502)
									int x = c->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(502)
									int y = f->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(502)
									bool tmp17 = (x > y);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(502)
									if ((tmp17)){
										HX_STACK_LINE(502)
										tmp16 = x;
									}
									else{
										HX_STACK_LINE(502)
										tmp16 = y;
									}
								}
								HX_STACK_LINE(502)
								int tmp17 = ((int)1 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(502)
								node->height = tmp17;
								HX_STACK_LINE(502)
								int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(502)
								{
									HX_STACK_LINE(502)
									int x = node->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(502)
									int y = g->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(502)
									bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(502)
									if ((tmp19)){
										HX_STACK_LINE(502)
										tmp18 = x;
									}
									else{
										HX_STACK_LINE(502)
										tmp18 = y;
									}
								}
								HX_STACK_LINE(502)
								int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(502)
								b->height = tmp19;
							}
							HX_STACK_LINE(502)
							tmp10 = b;
						}
						else{
							HX_STACK_LINE(502)
							tmp10 = node;
						}
					}
				}
				HX_STACK_LINE(502)
				node = tmp10;
				HX_STACK_LINE(503)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(504)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				HX_STACK_LINE(505)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(505)
				{
					HX_STACK_LINE(506)
					int x = child1->height;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(507)
					int y = child2->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(508)
					bool tmp12 = (x > y);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(508)
					if ((tmp12)){
						HX_STACK_LINE(508)
						tmp11 = x;
					}
					else{
						HX_STACK_LINE(508)
						tmp11 = y;
					}
				}
				HX_STACK_LINE(505)
				int tmp12 = ((int)1 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(505)
				node->height = tmp12;
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(510)
					bool tmp13 = (a->minx < b->minx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(510)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(510)
					if ((tmp13)){
						HX_STACK_LINE(510)
						tmp14 = a->minx;
					}
					else{
						HX_STACK_LINE(510)
						tmp14 = b->minx;
					}
					HX_STACK_LINE(510)
					_this->minx = tmp14;
					HX_STACK_LINE(510)
					bool tmp15 = (a->miny < b->miny);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(510)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(510)
					if ((tmp15)){
						HX_STACK_LINE(510)
						tmp16 = a->miny;
					}
					else{
						HX_STACK_LINE(510)
						tmp16 = b->miny;
					}
					HX_STACK_LINE(510)
					_this->miny = tmp16;
					HX_STACK_LINE(510)
					bool tmp17 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(510)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(510)
					if ((tmp17)){
						HX_STACK_LINE(510)
						tmp18 = a->maxx;
					}
					else{
						HX_STACK_LINE(510)
						tmp18 = b->maxx;
					}
					HX_STACK_LINE(510)
					_this->maxx = tmp18;
					HX_STACK_LINE(510)
					bool tmp19 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(510)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(510)
					if ((tmp19)){
						HX_STACK_LINE(510)
						tmp20 = a->maxy;
					}
					else{
						HX_STACK_LINE(510)
						tmp20 = b->maxy;
					}
					HX_STACK_LINE(510)
					_this->maxy = tmp20;
				}
				HX_STACK_LINE(511)
				node = node->parent;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,inlined_insertLeaf,(void))

Void ZPP_AABBTree_obj::removeLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBTree","removeLeaf",0x963fb8e4,"zpp_nape.space.ZPP_AABBTree.removeLeaf","zpp_nape/space/DynAABBPhase.hx",516,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(leaf,"leaf")
		HX_STACK_LINE(516)
		::zpp_nape::space::ZPP_AABBNode tmp = leaf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(516)
		::zpp_nape::space::ZPP_AABBNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(516)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(516)
		if ((tmp2)){
			HX_STACK_LINE(516)
			this->root = null();
			HX_STACK_LINE(516)
			Dynamic();
		}
		else{
			HX_STACK_LINE(516)
			::zpp_nape::space::ZPP_AABBNode parent = leaf->parent;		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(516)
			::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
			HX_STACK_LINE(516)
			bool tmp3 = (parent->child1 == leaf);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(516)
			::zpp_nape::space::ZPP_AABBNode tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(516)
			if ((tmp3)){
				HX_STACK_LINE(516)
				tmp4 = parent->child2;
			}
			else{
				HX_STACK_LINE(516)
				tmp4 = parent->child1;
			}
			HX_STACK_LINE(516)
			::zpp_nape::space::ZPP_AABBNode sibling = tmp4;		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(516)
			bool tmp5 = (gparent != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(516)
			if ((tmp5)){
				HX_STACK_LINE(516)
				bool tmp6 = (gparent->child1 == parent);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(516)
				if ((tmp6)){
					HX_STACK_LINE(516)
					gparent->child1 = sibling;
				}
				else{
					HX_STACK_LINE(516)
					gparent->child2 = sibling;
				}
				HX_STACK_LINE(516)
				sibling->parent = gparent;
				HX_STACK_LINE(516)
				{
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						o->height = (int)-1;
						HX_STACK_LINE(516)
						{
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(516)
							{
								HX_STACK_LINE(516)
								bool tmp7 = (o1->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(516)
								if ((tmp7)){
									HX_STACK_LINE(516)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(516)
									o1->outer = null();
								}
								HX_STACK_LINE(516)
								::nape::geom::Vec2 tmp8 = o1->wrap_max = null();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(516)
								o1->wrap_min = tmp8;
								HX_STACK_LINE(516)
								o1->_invalidate = null();
								HX_STACK_LINE(516)
								o1->_validate = null();
							}
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(516)
							o1->next = tmp7;
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(516)
						::zpp_nape::space::ZPP_AABBNode tmp7 = o->parent = null();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(516)
						::zpp_nape::space::ZPP_AABBNode tmp8 = o->child2 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(516)
						o->child1 = tmp8;
						HX_STACK_LINE(516)
						o->next = null();
						HX_STACK_LINE(516)
						o->snext = null();
						HX_STACK_LINE(516)
						o->mnext = null();
					}
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode tmp7 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(516)
					o->next = tmp7;
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(516)
				::zpp_nape::space::ZPP_AABBNode node = gparent;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(516)
				while((true)){
					HX_STACK_LINE(516)
					bool tmp7 = (node != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(516)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(516)
					if ((tmp8)){
						HX_STACK_LINE(516)
						break;
					}
					HX_STACK_LINE(516)
					bool tmp9 = (node->child1 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(516)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(516)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(516)
					if ((tmp10)){
						HX_STACK_LINE(516)
						tmp11 = (node->height < (int)2);
					}
					else{
						HX_STACK_LINE(516)
						tmp11 = true;
					}
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(516)
					if ((tmp11)){
						HX_STACK_LINE(516)
						tmp12 = node;
					}
					else{
						HX_STACK_LINE(516)
						::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(516)
						::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(516)
						int tmp13 = (c->height - b->height);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(516)
						int balance = tmp13;		HX_STACK_VAR(balance,"balance");
						HX_STACK_LINE(516)
						bool tmp14 = (balance > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(516)
						if ((tmp14)){
							HX_STACK_LINE(516)
							::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(516)
							::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(516)
							c->child1 = node;
							HX_STACK_LINE(516)
							c->parent = node->parent;
							HX_STACK_LINE(516)
							node->parent = c;
							HX_STACK_LINE(516)
							bool tmp15 = (c->parent != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(516)
							if ((tmp15)){
								HX_STACK_LINE(516)
								::zpp_nape::space::ZPP_AABBNode tmp16 = c->parent->child1;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(516)
								::zpp_nape::space::ZPP_AABBNode tmp17 = node;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(516)
								bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(516)
								if ((tmp18)){
									HX_STACK_LINE(516)
									c->parent->child1 = c;
								}
								else{
									HX_STACK_LINE(516)
									c->parent->child2 = c;
								}
							}
							else{
								HX_STACK_LINE(516)
								this->root = c;
							}
							HX_STACK_LINE(516)
							bool tmp16 = (f->height > g->height);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(516)
							if ((tmp16)){
								HX_STACK_LINE(516)
								c->child2 = f;
								HX_STACK_LINE(516)
								node->child2 = g;
								HX_STACK_LINE(516)
								g->parent = node;
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(516)
									bool tmp17 = (a->minx < b1->minx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(516)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									if ((tmp17)){
										HX_STACK_LINE(516)
										tmp18 = a->minx;
									}
									else{
										HX_STACK_LINE(516)
										tmp18 = b1->minx;
									}
									HX_STACK_LINE(516)
									_this->minx = tmp18;
									HX_STACK_LINE(516)
									bool tmp19 = (a->miny < b1->miny);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(516)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									if ((tmp19)){
										HX_STACK_LINE(516)
										tmp20 = a->miny;
									}
									else{
										HX_STACK_LINE(516)
										tmp20 = b1->miny;
									}
									HX_STACK_LINE(516)
									_this->miny = tmp20;
									HX_STACK_LINE(516)
									bool tmp21 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(516)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(516)
									if ((tmp21)){
										HX_STACK_LINE(516)
										tmp22 = a->maxx;
									}
									else{
										HX_STACK_LINE(516)
										tmp22 = b1->maxx;
									}
									HX_STACK_LINE(516)
									_this->maxx = tmp22;
									HX_STACK_LINE(516)
									bool tmp23 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(516)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(516)
									if ((tmp23)){
										HX_STACK_LINE(516)
										tmp24 = a->maxy;
									}
									else{
										HX_STACK_LINE(516)
										tmp24 = b1->maxy;
									}
									HX_STACK_LINE(516)
									_this->maxy = tmp24;
								}
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(516)
									bool tmp17 = (a->minx < b1->minx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(516)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									if ((tmp17)){
										HX_STACK_LINE(516)
										tmp18 = a->minx;
									}
									else{
										HX_STACK_LINE(516)
										tmp18 = b1->minx;
									}
									HX_STACK_LINE(516)
									_this->minx = tmp18;
									HX_STACK_LINE(516)
									bool tmp19 = (a->miny < b1->miny);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(516)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									if ((tmp19)){
										HX_STACK_LINE(516)
										tmp20 = a->miny;
									}
									else{
										HX_STACK_LINE(516)
										tmp20 = b1->miny;
									}
									HX_STACK_LINE(516)
									_this->miny = tmp20;
									HX_STACK_LINE(516)
									bool tmp21 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(516)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(516)
									if ((tmp21)){
										HX_STACK_LINE(516)
										tmp22 = a->maxx;
									}
									else{
										HX_STACK_LINE(516)
										tmp22 = b1->maxx;
									}
									HX_STACK_LINE(516)
									_this->maxx = tmp22;
									HX_STACK_LINE(516)
									bool tmp23 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(516)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(516)
									if ((tmp23)){
										HX_STACK_LINE(516)
										tmp24 = a->maxy;
									}
									else{
										HX_STACK_LINE(516)
										tmp24 = b1->maxy;
									}
									HX_STACK_LINE(516)
									_this->maxy = tmp24;
								}
								HX_STACK_LINE(516)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									int x = b->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(516)
									int y = g->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(516)
									bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									if ((tmp18)){
										HX_STACK_LINE(516)
										tmp17 = x;
									}
									else{
										HX_STACK_LINE(516)
										tmp17 = y;
									}
								}
								HX_STACK_LINE(516)
								int tmp18 = ((int)1 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(516)
								node->height = tmp18;
								HX_STACK_LINE(516)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									int x = node->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(516)
									int y = f->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(516)
									bool tmp20 = (x > y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									if ((tmp20)){
										HX_STACK_LINE(516)
										tmp19 = x;
									}
									else{
										HX_STACK_LINE(516)
										tmp19 = y;
									}
								}
								HX_STACK_LINE(516)
								int tmp20 = ((int)1 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(516)
								c->height = tmp20;
							}
							else{
								HX_STACK_LINE(516)
								c->child2 = g;
								HX_STACK_LINE(516)
								node->child2 = f;
								HX_STACK_LINE(516)
								f->parent = node;
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(516)
									bool tmp17 = (a->minx < b1->minx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(516)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									if ((tmp17)){
										HX_STACK_LINE(516)
										tmp18 = a->minx;
									}
									else{
										HX_STACK_LINE(516)
										tmp18 = b1->minx;
									}
									HX_STACK_LINE(516)
									_this->minx = tmp18;
									HX_STACK_LINE(516)
									bool tmp19 = (a->miny < b1->miny);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(516)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									if ((tmp19)){
										HX_STACK_LINE(516)
										tmp20 = a->miny;
									}
									else{
										HX_STACK_LINE(516)
										tmp20 = b1->miny;
									}
									HX_STACK_LINE(516)
									_this->miny = tmp20;
									HX_STACK_LINE(516)
									bool tmp21 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(516)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(516)
									if ((tmp21)){
										HX_STACK_LINE(516)
										tmp22 = a->maxx;
									}
									else{
										HX_STACK_LINE(516)
										tmp22 = b1->maxx;
									}
									HX_STACK_LINE(516)
									_this->maxx = tmp22;
									HX_STACK_LINE(516)
									bool tmp23 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(516)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(516)
									if ((tmp23)){
										HX_STACK_LINE(516)
										tmp24 = a->maxy;
									}
									else{
										HX_STACK_LINE(516)
										tmp24 = b1->maxy;
									}
									HX_STACK_LINE(516)
									_this->maxy = tmp24;
								}
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(516)
									::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(516)
									bool tmp17 = (a->minx < b1->minx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(516)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									if ((tmp17)){
										HX_STACK_LINE(516)
										tmp18 = a->minx;
									}
									else{
										HX_STACK_LINE(516)
										tmp18 = b1->minx;
									}
									HX_STACK_LINE(516)
									_this->minx = tmp18;
									HX_STACK_LINE(516)
									bool tmp19 = (a->miny < b1->miny);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(516)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									if ((tmp19)){
										HX_STACK_LINE(516)
										tmp20 = a->miny;
									}
									else{
										HX_STACK_LINE(516)
										tmp20 = b1->miny;
									}
									HX_STACK_LINE(516)
									_this->miny = tmp20;
									HX_STACK_LINE(516)
									bool tmp21 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(516)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(516)
									if ((tmp21)){
										HX_STACK_LINE(516)
										tmp22 = a->maxx;
									}
									else{
										HX_STACK_LINE(516)
										tmp22 = b1->maxx;
									}
									HX_STACK_LINE(516)
									_this->maxx = tmp22;
									HX_STACK_LINE(516)
									bool tmp23 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(516)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(516)
									if ((tmp23)){
										HX_STACK_LINE(516)
										tmp24 = a->maxy;
									}
									else{
										HX_STACK_LINE(516)
										tmp24 = b1->maxy;
									}
									HX_STACK_LINE(516)
									_this->maxy = tmp24;
								}
								HX_STACK_LINE(516)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									int x = b->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(516)
									int y = f->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(516)
									bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									if ((tmp18)){
										HX_STACK_LINE(516)
										tmp17 = x;
									}
									else{
										HX_STACK_LINE(516)
										tmp17 = y;
									}
								}
								HX_STACK_LINE(516)
								int tmp18 = ((int)1 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(516)
								node->height = tmp18;
								HX_STACK_LINE(516)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									int x = node->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(516)
									int y = g->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(516)
									bool tmp20 = (x > y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									if ((tmp20)){
										HX_STACK_LINE(516)
										tmp19 = x;
									}
									else{
										HX_STACK_LINE(516)
										tmp19 = y;
									}
								}
								HX_STACK_LINE(516)
								int tmp20 = ((int)1 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(516)
								c->height = tmp20;
							}
							HX_STACK_LINE(516)
							tmp12 = c;
						}
						else{
							HX_STACK_LINE(516)
							bool tmp15 = (balance < (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(516)
							if ((tmp15)){
								HX_STACK_LINE(516)
								::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(516)
								::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(516)
								b->child1 = node;
								HX_STACK_LINE(516)
								b->parent = node->parent;
								HX_STACK_LINE(516)
								node->parent = b;
								HX_STACK_LINE(516)
								bool tmp16 = (b->parent != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(516)
								if ((tmp16)){
									HX_STACK_LINE(516)
									::zpp_nape::space::ZPP_AABBNode tmp17 = b->parent->child1;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(516)
									::zpp_nape::space::ZPP_AABBNode tmp18 = node;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(516)
									if ((tmp19)){
										HX_STACK_LINE(516)
										b->parent->child1 = b;
									}
									else{
										HX_STACK_LINE(516)
										b->parent->child2 = b;
									}
								}
								else{
									HX_STACK_LINE(516)
									this->root = b;
								}
								HX_STACK_LINE(516)
								bool tmp17 = (f->height > g->height);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(516)
								if ((tmp17)){
									HX_STACK_LINE(516)
									b->child2 = f;
									HX_STACK_LINE(516)
									node->child1 = g;
									HX_STACK_LINE(516)
									g->parent = node;
									HX_STACK_LINE(516)
									{
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
										HX_STACK_LINE(516)
										bool tmp18 = (a->minx < b1->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(516)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(516)
										if ((tmp18)){
											HX_STACK_LINE(516)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(516)
											tmp19 = b1->minx;
										}
										HX_STACK_LINE(516)
										_this->minx = tmp19;
										HX_STACK_LINE(516)
										bool tmp20 = (a->miny < b1->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(516)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(516)
										if ((tmp20)){
											HX_STACK_LINE(516)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(516)
											tmp21 = b1->miny;
										}
										HX_STACK_LINE(516)
										_this->miny = tmp21;
										HX_STACK_LINE(516)
										bool tmp22 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(516)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(516)
										if ((tmp22)){
											HX_STACK_LINE(516)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(516)
											tmp23 = b1->maxx;
										}
										HX_STACK_LINE(516)
										_this->maxx = tmp23;
										HX_STACK_LINE(516)
										bool tmp24 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(516)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(516)
										if ((tmp24)){
											HX_STACK_LINE(516)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(516)
											tmp25 = b1->maxy;
										}
										HX_STACK_LINE(516)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(516)
									{
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
										HX_STACK_LINE(516)
										bool tmp18 = (a->minx < b1->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(516)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(516)
										if ((tmp18)){
											HX_STACK_LINE(516)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(516)
											tmp19 = b1->minx;
										}
										HX_STACK_LINE(516)
										_this->minx = tmp19;
										HX_STACK_LINE(516)
										bool tmp20 = (a->miny < b1->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(516)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(516)
										if ((tmp20)){
											HX_STACK_LINE(516)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(516)
											tmp21 = b1->miny;
										}
										HX_STACK_LINE(516)
										_this->miny = tmp21;
										HX_STACK_LINE(516)
										bool tmp22 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(516)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(516)
										if ((tmp22)){
											HX_STACK_LINE(516)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(516)
											tmp23 = b1->maxx;
										}
										HX_STACK_LINE(516)
										_this->maxx = tmp23;
										HX_STACK_LINE(516)
										bool tmp24 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(516)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(516)
										if ((tmp24)){
											HX_STACK_LINE(516)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(516)
											tmp25 = b1->maxy;
										}
										HX_STACK_LINE(516)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(516)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									{
										HX_STACK_LINE(516)
										int x = c->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(516)
										int y = g->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(516)
										bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(516)
										if ((tmp19)){
											HX_STACK_LINE(516)
											tmp18 = x;
										}
										else{
											HX_STACK_LINE(516)
											tmp18 = y;
										}
									}
									HX_STACK_LINE(516)
									int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(516)
									node->height = tmp19;
									HX_STACK_LINE(516)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									{
										HX_STACK_LINE(516)
										int x = node->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(516)
										int y = f->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(516)
										bool tmp21 = (x > y);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(516)
										if ((tmp21)){
											HX_STACK_LINE(516)
											tmp20 = x;
										}
										else{
											HX_STACK_LINE(516)
											tmp20 = y;
										}
									}
									HX_STACK_LINE(516)
									int tmp21 = ((int)1 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(516)
									b->height = tmp21;
								}
								else{
									HX_STACK_LINE(516)
									b->child2 = g;
									HX_STACK_LINE(516)
									node->child1 = f;
									HX_STACK_LINE(516)
									f->parent = node;
									HX_STACK_LINE(516)
									{
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
										HX_STACK_LINE(516)
										bool tmp18 = (a->minx < b1->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(516)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(516)
										if ((tmp18)){
											HX_STACK_LINE(516)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(516)
											tmp19 = b1->minx;
										}
										HX_STACK_LINE(516)
										_this->minx = tmp19;
										HX_STACK_LINE(516)
										bool tmp20 = (a->miny < b1->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(516)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(516)
										if ((tmp20)){
											HX_STACK_LINE(516)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(516)
											tmp21 = b1->miny;
										}
										HX_STACK_LINE(516)
										_this->miny = tmp21;
										HX_STACK_LINE(516)
										bool tmp22 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(516)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(516)
										if ((tmp22)){
											HX_STACK_LINE(516)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(516)
											tmp23 = b1->maxx;
										}
										HX_STACK_LINE(516)
										_this->maxx = tmp23;
										HX_STACK_LINE(516)
										bool tmp24 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(516)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(516)
										if ((tmp24)){
											HX_STACK_LINE(516)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(516)
											tmp25 = b1->maxy;
										}
										HX_STACK_LINE(516)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(516)
									{
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(516)
										::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
										HX_STACK_LINE(516)
										bool tmp18 = (a->minx < b1->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(516)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(516)
										if ((tmp18)){
											HX_STACK_LINE(516)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(516)
											tmp19 = b1->minx;
										}
										HX_STACK_LINE(516)
										_this->minx = tmp19;
										HX_STACK_LINE(516)
										bool tmp20 = (a->miny < b1->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(516)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(516)
										if ((tmp20)){
											HX_STACK_LINE(516)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(516)
											tmp21 = b1->miny;
										}
										HX_STACK_LINE(516)
										_this->miny = tmp21;
										HX_STACK_LINE(516)
										bool tmp22 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(516)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(516)
										if ((tmp22)){
											HX_STACK_LINE(516)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(516)
											tmp23 = b1->maxx;
										}
										HX_STACK_LINE(516)
										_this->maxx = tmp23;
										HX_STACK_LINE(516)
										bool tmp24 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(516)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(516)
										if ((tmp24)){
											HX_STACK_LINE(516)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(516)
											tmp25 = b1->maxy;
										}
										HX_STACK_LINE(516)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(516)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(516)
									{
										HX_STACK_LINE(516)
										int x = c->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(516)
										int y = f->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(516)
										bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(516)
										if ((tmp19)){
											HX_STACK_LINE(516)
											tmp18 = x;
										}
										else{
											HX_STACK_LINE(516)
											tmp18 = y;
										}
									}
									HX_STACK_LINE(516)
									int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(516)
									node->height = tmp19;
									HX_STACK_LINE(516)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									{
										HX_STACK_LINE(516)
										int x = node->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(516)
										int y = g->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(516)
										bool tmp21 = (x > y);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(516)
										if ((tmp21)){
											HX_STACK_LINE(516)
											tmp20 = x;
										}
										else{
											HX_STACK_LINE(516)
											tmp20 = y;
										}
									}
									HX_STACK_LINE(516)
									int tmp21 = ((int)1 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(516)
									b->height = tmp21;
								}
								HX_STACK_LINE(516)
								tmp12 = b;
							}
							else{
								HX_STACK_LINE(516)
								tmp12 = node;
							}
						}
					}
					HX_STACK_LINE(516)
					node = tmp12;
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(516)
						::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(516)
						::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(516)
						bool tmp13 = (a->minx < b->minx);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(516)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(516)
						if ((tmp13)){
							HX_STACK_LINE(516)
							tmp14 = a->minx;
						}
						else{
							HX_STACK_LINE(516)
							tmp14 = b->minx;
						}
						HX_STACK_LINE(516)
						_this->minx = tmp14;
						HX_STACK_LINE(516)
						bool tmp15 = (a->miny < b->miny);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(516)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(516)
						if ((tmp15)){
							HX_STACK_LINE(516)
							tmp16 = a->miny;
						}
						else{
							HX_STACK_LINE(516)
							tmp16 = b->miny;
						}
						HX_STACK_LINE(516)
						_this->miny = tmp16;
						HX_STACK_LINE(516)
						bool tmp17 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(516)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(516)
						if ((tmp17)){
							HX_STACK_LINE(516)
							tmp18 = a->maxx;
						}
						else{
							HX_STACK_LINE(516)
							tmp18 = b->maxx;
						}
						HX_STACK_LINE(516)
						_this->maxx = tmp18;
						HX_STACK_LINE(516)
						bool tmp19 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(516)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(516)
						if ((tmp19)){
							HX_STACK_LINE(516)
							tmp20 = a->maxy;
						}
						else{
							HX_STACK_LINE(516)
							tmp20 = b->maxy;
						}
						HX_STACK_LINE(516)
						_this->maxy = tmp20;
					}
					HX_STACK_LINE(516)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						int x = child1->height;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(516)
						int y = child2->height;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(516)
						bool tmp14 = (x > y);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(516)
						if ((tmp14)){
							HX_STACK_LINE(516)
							tmp13 = x;
						}
						else{
							HX_STACK_LINE(516)
							tmp13 = y;
						}
					}
					HX_STACK_LINE(516)
					int tmp14 = ((int)1 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(516)
					node->height = tmp14;
					HX_STACK_LINE(516)
					node = node->parent;
				}
			}
			else{
				HX_STACK_LINE(516)
				this->root = sibling;
				HX_STACK_LINE(516)
				sibling->parent = null();
				HX_STACK_LINE(516)
				{
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						o->height = (int)-1;
						HX_STACK_LINE(516)
						{
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(516)
							{
								HX_STACK_LINE(516)
								bool tmp6 = (o1->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(516)
								if ((tmp6)){
									HX_STACK_LINE(516)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(516)
									o1->outer = null();
								}
								HX_STACK_LINE(516)
								::nape::geom::Vec2 tmp7 = o1->wrap_max = null();		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(516)
								o1->wrap_min = tmp7;
								HX_STACK_LINE(516)
								o1->_invalidate = null();
								HX_STACK_LINE(516)
								o1->_validate = null();
							}
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB tmp6 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(516)
							o1->next = tmp6;
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(516)
						::zpp_nape::space::ZPP_AABBNode tmp6 = o->parent = null();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(516)
						::zpp_nape::space::ZPP_AABBNode tmp7 = o->child2 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(516)
						o->child1 = tmp7;
						HX_STACK_LINE(516)
						o->next = null();
						HX_STACK_LINE(516)
						o->snext = null();
						HX_STACK_LINE(516)
						o->mnext = null();
					}
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode tmp6 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(516)
					o->next = tmp6;
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,removeLeaf,(void))

Void ZPP_AABBTree_obj::inlined_removeLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBTree","inlined_removeLeaf",0x6b6b75f8,"zpp_nape.space.ZPP_AABBTree.inlined_removeLeaf","zpp_nape/space/DynAABBPhase.hx",520,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(leaf,"leaf")
		HX_STACK_LINE(521)
		::zpp_nape::space::ZPP_AABBNode tmp = leaf;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		::zpp_nape::space::ZPP_AABBNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(521)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		if ((tmp2)){
			HX_STACK_LINE(522)
			this->root = null();
			HX_STACK_LINE(523)
			return null();
		}
		else{
			HX_STACK_LINE(526)
			::zpp_nape::space::ZPP_AABBNode parent = leaf->parent;		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(527)
			::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
			HX_STACK_LINE(528)
			bool tmp3 = (parent->child1 == leaf);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(528)
			::zpp_nape::space::ZPP_AABBNode tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(528)
			if ((tmp3)){
				HX_STACK_LINE(528)
				tmp4 = parent->child2;
			}
			else{
				HX_STACK_LINE(528)
				tmp4 = parent->child1;
			}
			HX_STACK_LINE(528)
			::zpp_nape::space::ZPP_AABBNode sibling = tmp4;		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(529)
			bool tmp5 = (gparent != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(529)
			if ((tmp5)){
				HX_STACK_LINE(530)
				bool tmp6 = (gparent->child1 == parent);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(530)
				if ((tmp6)){
					HX_STACK_LINE(530)
					gparent->child1 = sibling;
				}
				else{
					HX_STACK_LINE(531)
					gparent->child2 = sibling;
				}
				HX_STACK_LINE(532)
				sibling->parent = gparent;
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(534)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(543)
					{
						HX_STACK_LINE(543)
						o->height = (int)-1;
						HX_STACK_LINE(543)
						{
							HX_STACK_LINE(543)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(543)
							{
								HX_STACK_LINE(543)
								bool tmp7 = (o1->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(543)
								if ((tmp7)){
									HX_STACK_LINE(543)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(543)
									o1->outer = null();
								}
								HX_STACK_LINE(543)
								::nape::geom::Vec2 tmp8 = o1->wrap_max = null();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(543)
								o1->wrap_min = tmp8;
								HX_STACK_LINE(543)
								o1->_invalidate = null();
								HX_STACK_LINE(543)
								o1->_validate = null();
							}
							HX_STACK_LINE(543)
							::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(543)
							o1->next = tmp7;
							HX_STACK_LINE(543)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(543)
						::zpp_nape::space::ZPP_AABBNode tmp7 = o->parent = null();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(543)
						::zpp_nape::space::ZPP_AABBNode tmp8 = o->child2 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(543)
						o->child1 = tmp8;
						HX_STACK_LINE(543)
						o->next = null();
						HX_STACK_LINE(543)
						o->snext = null();
						HX_STACK_LINE(543)
						o->mnext = null();
					}
					HX_STACK_LINE(544)
					::zpp_nape::space::ZPP_AABBNode tmp7 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(544)
					o->next = tmp7;
					HX_STACK_LINE(545)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(550)
				::zpp_nape::space::ZPP_AABBNode node = gparent;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(551)
				while((true)){
					HX_STACK_LINE(551)
					bool tmp7 = (node != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(551)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(551)
					if ((tmp8)){
						HX_STACK_LINE(551)
						break;
					}
					HX_STACK_LINE(552)
					bool tmp9 = (node->child1 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(552)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(552)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(552)
					if ((tmp10)){
						HX_STACK_LINE(552)
						tmp11 = (node->height < (int)2);
					}
					else{
						HX_STACK_LINE(552)
						tmp11 = true;
					}
					HX_STACK_LINE(552)
					::zpp_nape::space::ZPP_AABBNode tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(552)
					if ((tmp11)){
						HX_STACK_LINE(552)
						tmp12 = node;
					}
					else{
						HX_STACK_LINE(552)
						::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(552)
						::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(552)
						int tmp13 = (c->height - b->height);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(552)
						int balance = tmp13;		HX_STACK_VAR(balance,"balance");
						HX_STACK_LINE(552)
						bool tmp14 = (balance > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(552)
						if ((tmp14)){
							HX_STACK_LINE(552)
							::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(552)
							::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(552)
							c->child1 = node;
							HX_STACK_LINE(552)
							c->parent = node->parent;
							HX_STACK_LINE(552)
							node->parent = c;
							HX_STACK_LINE(552)
							bool tmp15 = (c->parent != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(552)
							if ((tmp15)){
								HX_STACK_LINE(552)
								::zpp_nape::space::ZPP_AABBNode tmp16 = c->parent->child1;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(552)
								::zpp_nape::space::ZPP_AABBNode tmp17 = node;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(552)
								bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(552)
								if ((tmp18)){
									HX_STACK_LINE(552)
									c->parent->child1 = c;
								}
								else{
									HX_STACK_LINE(552)
									c->parent->child2 = c;
								}
							}
							else{
								HX_STACK_LINE(552)
								this->root = c;
							}
							HX_STACK_LINE(552)
							bool tmp16 = (f->height > g->height);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(552)
							if ((tmp16)){
								HX_STACK_LINE(552)
								c->child2 = f;
								HX_STACK_LINE(552)
								node->child2 = g;
								HX_STACK_LINE(552)
								g->parent = node;
								HX_STACK_LINE(552)
								{
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(552)
									bool tmp17 = (a->minx < b1->minx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(552)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									if ((tmp17)){
										HX_STACK_LINE(552)
										tmp18 = a->minx;
									}
									else{
										HX_STACK_LINE(552)
										tmp18 = b1->minx;
									}
									HX_STACK_LINE(552)
									_this->minx = tmp18;
									HX_STACK_LINE(552)
									bool tmp19 = (a->miny < b1->miny);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(552)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(552)
									if ((tmp19)){
										HX_STACK_LINE(552)
										tmp20 = a->miny;
									}
									else{
										HX_STACK_LINE(552)
										tmp20 = b1->miny;
									}
									HX_STACK_LINE(552)
									_this->miny = tmp20;
									HX_STACK_LINE(552)
									bool tmp21 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(552)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(552)
									if ((tmp21)){
										HX_STACK_LINE(552)
										tmp22 = a->maxx;
									}
									else{
										HX_STACK_LINE(552)
										tmp22 = b1->maxx;
									}
									HX_STACK_LINE(552)
									_this->maxx = tmp22;
									HX_STACK_LINE(552)
									bool tmp23 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(552)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(552)
									if ((tmp23)){
										HX_STACK_LINE(552)
										tmp24 = a->maxy;
									}
									else{
										HX_STACK_LINE(552)
										tmp24 = b1->maxy;
									}
									HX_STACK_LINE(552)
									_this->maxy = tmp24;
								}
								HX_STACK_LINE(552)
								{
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(552)
									bool tmp17 = (a->minx < b1->minx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(552)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									if ((tmp17)){
										HX_STACK_LINE(552)
										tmp18 = a->minx;
									}
									else{
										HX_STACK_LINE(552)
										tmp18 = b1->minx;
									}
									HX_STACK_LINE(552)
									_this->minx = tmp18;
									HX_STACK_LINE(552)
									bool tmp19 = (a->miny < b1->miny);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(552)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(552)
									if ((tmp19)){
										HX_STACK_LINE(552)
										tmp20 = a->miny;
									}
									else{
										HX_STACK_LINE(552)
										tmp20 = b1->miny;
									}
									HX_STACK_LINE(552)
									_this->miny = tmp20;
									HX_STACK_LINE(552)
									bool tmp21 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(552)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(552)
									if ((tmp21)){
										HX_STACK_LINE(552)
										tmp22 = a->maxx;
									}
									else{
										HX_STACK_LINE(552)
										tmp22 = b1->maxx;
									}
									HX_STACK_LINE(552)
									_this->maxx = tmp22;
									HX_STACK_LINE(552)
									bool tmp23 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(552)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(552)
									if ((tmp23)){
										HX_STACK_LINE(552)
										tmp24 = a->maxy;
									}
									else{
										HX_STACK_LINE(552)
										tmp24 = b1->maxy;
									}
									HX_STACK_LINE(552)
									_this->maxy = tmp24;
								}
								HX_STACK_LINE(552)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(552)
								{
									HX_STACK_LINE(552)
									int x = b->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(552)
									int y = g->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(552)
									bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									if ((tmp18)){
										HX_STACK_LINE(552)
										tmp17 = x;
									}
									else{
										HX_STACK_LINE(552)
										tmp17 = y;
									}
								}
								HX_STACK_LINE(552)
								int tmp18 = ((int)1 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(552)
								node->height = tmp18;
								HX_STACK_LINE(552)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(552)
								{
									HX_STACK_LINE(552)
									int x = node->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(552)
									int y = f->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(552)
									bool tmp20 = (x > y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(552)
									if ((tmp20)){
										HX_STACK_LINE(552)
										tmp19 = x;
									}
									else{
										HX_STACK_LINE(552)
										tmp19 = y;
									}
								}
								HX_STACK_LINE(552)
								int tmp20 = ((int)1 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(552)
								c->height = tmp20;
							}
							else{
								HX_STACK_LINE(552)
								c->child2 = g;
								HX_STACK_LINE(552)
								node->child2 = f;
								HX_STACK_LINE(552)
								f->parent = node;
								HX_STACK_LINE(552)
								{
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(552)
									bool tmp17 = (a->minx < b1->minx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(552)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									if ((tmp17)){
										HX_STACK_LINE(552)
										tmp18 = a->minx;
									}
									else{
										HX_STACK_LINE(552)
										tmp18 = b1->minx;
									}
									HX_STACK_LINE(552)
									_this->minx = tmp18;
									HX_STACK_LINE(552)
									bool tmp19 = (a->miny < b1->miny);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(552)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(552)
									if ((tmp19)){
										HX_STACK_LINE(552)
										tmp20 = a->miny;
									}
									else{
										HX_STACK_LINE(552)
										tmp20 = b1->miny;
									}
									HX_STACK_LINE(552)
									_this->miny = tmp20;
									HX_STACK_LINE(552)
									bool tmp21 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(552)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(552)
									if ((tmp21)){
										HX_STACK_LINE(552)
										tmp22 = a->maxx;
									}
									else{
										HX_STACK_LINE(552)
										tmp22 = b1->maxx;
									}
									HX_STACK_LINE(552)
									_this->maxx = tmp22;
									HX_STACK_LINE(552)
									bool tmp23 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(552)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(552)
									if ((tmp23)){
										HX_STACK_LINE(552)
										tmp24 = a->maxy;
									}
									else{
										HX_STACK_LINE(552)
										tmp24 = b1->maxy;
									}
									HX_STACK_LINE(552)
									_this->maxy = tmp24;
								}
								HX_STACK_LINE(552)
								{
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(552)
									::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(552)
									bool tmp17 = (a->minx < b1->minx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(552)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									if ((tmp17)){
										HX_STACK_LINE(552)
										tmp18 = a->minx;
									}
									else{
										HX_STACK_LINE(552)
										tmp18 = b1->minx;
									}
									HX_STACK_LINE(552)
									_this->minx = tmp18;
									HX_STACK_LINE(552)
									bool tmp19 = (a->miny < b1->miny);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(552)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(552)
									if ((tmp19)){
										HX_STACK_LINE(552)
										tmp20 = a->miny;
									}
									else{
										HX_STACK_LINE(552)
										tmp20 = b1->miny;
									}
									HX_STACK_LINE(552)
									_this->miny = tmp20;
									HX_STACK_LINE(552)
									bool tmp21 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(552)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(552)
									if ((tmp21)){
										HX_STACK_LINE(552)
										tmp22 = a->maxx;
									}
									else{
										HX_STACK_LINE(552)
										tmp22 = b1->maxx;
									}
									HX_STACK_LINE(552)
									_this->maxx = tmp22;
									HX_STACK_LINE(552)
									bool tmp23 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(552)
									Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(552)
									if ((tmp23)){
										HX_STACK_LINE(552)
										tmp24 = a->maxy;
									}
									else{
										HX_STACK_LINE(552)
										tmp24 = b1->maxy;
									}
									HX_STACK_LINE(552)
									_this->maxy = tmp24;
								}
								HX_STACK_LINE(552)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(552)
								{
									HX_STACK_LINE(552)
									int x = b->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(552)
									int y = f->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(552)
									bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									if ((tmp18)){
										HX_STACK_LINE(552)
										tmp17 = x;
									}
									else{
										HX_STACK_LINE(552)
										tmp17 = y;
									}
								}
								HX_STACK_LINE(552)
								int tmp18 = ((int)1 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(552)
								node->height = tmp18;
								HX_STACK_LINE(552)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(552)
								{
									HX_STACK_LINE(552)
									int x = node->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(552)
									int y = g->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(552)
									bool tmp20 = (x > y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(552)
									if ((tmp20)){
										HX_STACK_LINE(552)
										tmp19 = x;
									}
									else{
										HX_STACK_LINE(552)
										tmp19 = y;
									}
								}
								HX_STACK_LINE(552)
								int tmp20 = ((int)1 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(552)
								c->height = tmp20;
							}
							HX_STACK_LINE(552)
							tmp12 = c;
						}
						else{
							HX_STACK_LINE(552)
							bool tmp15 = (balance < (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(552)
							if ((tmp15)){
								HX_STACK_LINE(552)
								::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(552)
								::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(552)
								b->child1 = node;
								HX_STACK_LINE(552)
								b->parent = node->parent;
								HX_STACK_LINE(552)
								node->parent = b;
								HX_STACK_LINE(552)
								bool tmp16 = (b->parent != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(552)
								if ((tmp16)){
									HX_STACK_LINE(552)
									::zpp_nape::space::ZPP_AABBNode tmp17 = b->parent->child1;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(552)
									::zpp_nape::space::ZPP_AABBNode tmp18 = node;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(552)
									if ((tmp19)){
										HX_STACK_LINE(552)
										b->parent->child1 = b;
									}
									else{
										HX_STACK_LINE(552)
										b->parent->child2 = b;
									}
								}
								else{
									HX_STACK_LINE(552)
									this->root = b;
								}
								HX_STACK_LINE(552)
								bool tmp17 = (f->height > g->height);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(552)
								if ((tmp17)){
									HX_STACK_LINE(552)
									b->child2 = f;
									HX_STACK_LINE(552)
									node->child1 = g;
									HX_STACK_LINE(552)
									g->parent = node;
									HX_STACK_LINE(552)
									{
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
										HX_STACK_LINE(552)
										bool tmp18 = (a->minx < b1->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(552)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(552)
										if ((tmp18)){
											HX_STACK_LINE(552)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(552)
											tmp19 = b1->minx;
										}
										HX_STACK_LINE(552)
										_this->minx = tmp19;
										HX_STACK_LINE(552)
										bool tmp20 = (a->miny < b1->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(552)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(552)
										if ((tmp20)){
											HX_STACK_LINE(552)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(552)
											tmp21 = b1->miny;
										}
										HX_STACK_LINE(552)
										_this->miny = tmp21;
										HX_STACK_LINE(552)
										bool tmp22 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(552)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(552)
										if ((tmp22)){
											HX_STACK_LINE(552)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(552)
											tmp23 = b1->maxx;
										}
										HX_STACK_LINE(552)
										_this->maxx = tmp23;
										HX_STACK_LINE(552)
										bool tmp24 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(552)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(552)
										if ((tmp24)){
											HX_STACK_LINE(552)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(552)
											tmp25 = b1->maxy;
										}
										HX_STACK_LINE(552)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(552)
									{
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
										HX_STACK_LINE(552)
										bool tmp18 = (a->minx < b1->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(552)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(552)
										if ((tmp18)){
											HX_STACK_LINE(552)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(552)
											tmp19 = b1->minx;
										}
										HX_STACK_LINE(552)
										_this->minx = tmp19;
										HX_STACK_LINE(552)
										bool tmp20 = (a->miny < b1->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(552)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(552)
										if ((tmp20)){
											HX_STACK_LINE(552)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(552)
											tmp21 = b1->miny;
										}
										HX_STACK_LINE(552)
										_this->miny = tmp21;
										HX_STACK_LINE(552)
										bool tmp22 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(552)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(552)
										if ((tmp22)){
											HX_STACK_LINE(552)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(552)
											tmp23 = b1->maxx;
										}
										HX_STACK_LINE(552)
										_this->maxx = tmp23;
										HX_STACK_LINE(552)
										bool tmp24 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(552)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(552)
										if ((tmp24)){
											HX_STACK_LINE(552)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(552)
											tmp25 = b1->maxy;
										}
										HX_STACK_LINE(552)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(552)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									{
										HX_STACK_LINE(552)
										int x = c->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(552)
										int y = g->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(552)
										bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(552)
										if ((tmp19)){
											HX_STACK_LINE(552)
											tmp18 = x;
										}
										else{
											HX_STACK_LINE(552)
											tmp18 = y;
										}
									}
									HX_STACK_LINE(552)
									int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(552)
									node->height = tmp19;
									HX_STACK_LINE(552)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(552)
									{
										HX_STACK_LINE(552)
										int x = node->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(552)
										int y = f->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(552)
										bool tmp21 = (x > y);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(552)
										if ((tmp21)){
											HX_STACK_LINE(552)
											tmp20 = x;
										}
										else{
											HX_STACK_LINE(552)
											tmp20 = y;
										}
									}
									HX_STACK_LINE(552)
									int tmp21 = ((int)1 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(552)
									b->height = tmp21;
								}
								else{
									HX_STACK_LINE(552)
									b->child2 = g;
									HX_STACK_LINE(552)
									node->child1 = f;
									HX_STACK_LINE(552)
									f->parent = node;
									HX_STACK_LINE(552)
									{
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
										HX_STACK_LINE(552)
										bool tmp18 = (a->minx < b1->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(552)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(552)
										if ((tmp18)){
											HX_STACK_LINE(552)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(552)
											tmp19 = b1->minx;
										}
										HX_STACK_LINE(552)
										_this->minx = tmp19;
										HX_STACK_LINE(552)
										bool tmp20 = (a->miny < b1->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(552)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(552)
										if ((tmp20)){
											HX_STACK_LINE(552)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(552)
											tmp21 = b1->miny;
										}
										HX_STACK_LINE(552)
										_this->miny = tmp21;
										HX_STACK_LINE(552)
										bool tmp22 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(552)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(552)
										if ((tmp22)){
											HX_STACK_LINE(552)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(552)
											tmp23 = b1->maxx;
										}
										HX_STACK_LINE(552)
										_this->maxx = tmp23;
										HX_STACK_LINE(552)
										bool tmp24 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(552)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(552)
										if ((tmp24)){
											HX_STACK_LINE(552)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(552)
											tmp25 = b1->maxy;
										}
										HX_STACK_LINE(552)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(552)
									{
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(552)
										::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
										HX_STACK_LINE(552)
										bool tmp18 = (a->minx < b1->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(552)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(552)
										if ((tmp18)){
											HX_STACK_LINE(552)
											tmp19 = a->minx;
										}
										else{
											HX_STACK_LINE(552)
											tmp19 = b1->minx;
										}
										HX_STACK_LINE(552)
										_this->minx = tmp19;
										HX_STACK_LINE(552)
										bool tmp20 = (a->miny < b1->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(552)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(552)
										if ((tmp20)){
											HX_STACK_LINE(552)
											tmp21 = a->miny;
										}
										else{
											HX_STACK_LINE(552)
											tmp21 = b1->miny;
										}
										HX_STACK_LINE(552)
										_this->miny = tmp21;
										HX_STACK_LINE(552)
										bool tmp22 = (a->maxx > b1->maxx);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(552)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(552)
										if ((tmp22)){
											HX_STACK_LINE(552)
											tmp23 = a->maxx;
										}
										else{
											HX_STACK_LINE(552)
											tmp23 = b1->maxx;
										}
										HX_STACK_LINE(552)
										_this->maxx = tmp23;
										HX_STACK_LINE(552)
										bool tmp24 = (a->maxy > b1->maxy);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(552)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(552)
										if ((tmp24)){
											HX_STACK_LINE(552)
											tmp25 = a->maxy;
										}
										else{
											HX_STACK_LINE(552)
											tmp25 = b1->maxy;
										}
										HX_STACK_LINE(552)
										_this->maxy = tmp25;
									}
									HX_STACK_LINE(552)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(552)
									{
										HX_STACK_LINE(552)
										int x = c->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(552)
										int y = f->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(552)
										bool tmp19 = (x > y);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(552)
										if ((tmp19)){
											HX_STACK_LINE(552)
											tmp18 = x;
										}
										else{
											HX_STACK_LINE(552)
											tmp18 = y;
										}
									}
									HX_STACK_LINE(552)
									int tmp19 = ((int)1 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(552)
									node->height = tmp19;
									HX_STACK_LINE(552)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(552)
									{
										HX_STACK_LINE(552)
										int x = node->height;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(552)
										int y = g->height;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(552)
										bool tmp21 = (x > y);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(552)
										if ((tmp21)){
											HX_STACK_LINE(552)
											tmp20 = x;
										}
										else{
											HX_STACK_LINE(552)
											tmp20 = y;
										}
									}
									HX_STACK_LINE(552)
									int tmp21 = ((int)1 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(552)
									b->height = tmp21;
								}
								HX_STACK_LINE(552)
								tmp12 = b;
							}
							else{
								HX_STACK_LINE(552)
								tmp12 = node;
							}
						}
					}
					HX_STACK_LINE(552)
					node = tmp12;
					HX_STACK_LINE(553)
					::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
					HX_STACK_LINE(554)
					::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
					HX_STACK_LINE(555)
					{
						HX_STACK_LINE(555)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(555)
						::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(555)
						::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(555)
						bool tmp13 = (a->minx < b->minx);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(555)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(555)
						if ((tmp13)){
							HX_STACK_LINE(555)
							tmp14 = a->minx;
						}
						else{
							HX_STACK_LINE(555)
							tmp14 = b->minx;
						}
						HX_STACK_LINE(555)
						_this->minx = tmp14;
						HX_STACK_LINE(555)
						bool tmp15 = (a->miny < b->miny);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(555)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(555)
						if ((tmp15)){
							HX_STACK_LINE(555)
							tmp16 = a->miny;
						}
						else{
							HX_STACK_LINE(555)
							tmp16 = b->miny;
						}
						HX_STACK_LINE(555)
						_this->miny = tmp16;
						HX_STACK_LINE(555)
						bool tmp17 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(555)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(555)
						if ((tmp17)){
							HX_STACK_LINE(555)
							tmp18 = a->maxx;
						}
						else{
							HX_STACK_LINE(555)
							tmp18 = b->maxx;
						}
						HX_STACK_LINE(555)
						_this->maxx = tmp18;
						HX_STACK_LINE(555)
						bool tmp19 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(555)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(555)
						if ((tmp19)){
							HX_STACK_LINE(555)
							tmp20 = a->maxy;
						}
						else{
							HX_STACK_LINE(555)
							tmp20 = b->maxy;
						}
						HX_STACK_LINE(555)
						_this->maxy = tmp20;
					}
					HX_STACK_LINE(556)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(556)
					{
						HX_STACK_LINE(557)
						int x = child1->height;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(558)
						int y = child2->height;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(559)
						bool tmp14 = (x > y);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(559)
						if ((tmp14)){
							HX_STACK_LINE(559)
							tmp13 = x;
						}
						else{
							HX_STACK_LINE(559)
							tmp13 = y;
						}
					}
					HX_STACK_LINE(556)
					int tmp14 = ((int)1 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(556)
					node->height = tmp14;
					HX_STACK_LINE(561)
					node = node->parent;
				}
			}
			else{
				HX_STACK_LINE(565)
				this->root = sibling;
				HX_STACK_LINE(566)
				sibling->parent = null();
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(568)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(577)
					{
						HX_STACK_LINE(577)
						o->height = (int)-1;
						HX_STACK_LINE(577)
						{
							HX_STACK_LINE(577)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(577)
							{
								HX_STACK_LINE(577)
								bool tmp6 = (o1->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(577)
								if ((tmp6)){
									HX_STACK_LINE(577)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(577)
									o1->outer = null();
								}
								HX_STACK_LINE(577)
								::nape::geom::Vec2 tmp7 = o1->wrap_max = null();		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(577)
								o1->wrap_min = tmp7;
								HX_STACK_LINE(577)
								o1->_invalidate = null();
								HX_STACK_LINE(577)
								o1->_validate = null();
							}
							HX_STACK_LINE(577)
							::zpp_nape::geom::ZPP_AABB tmp6 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(577)
							o1->next = tmp6;
							HX_STACK_LINE(577)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(577)
						::zpp_nape::space::ZPP_AABBNode tmp6 = o->parent = null();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(577)
						::zpp_nape::space::ZPP_AABBNode tmp7 = o->child2 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(577)
						o->child1 = tmp7;
						HX_STACK_LINE(577)
						o->next = null();
						HX_STACK_LINE(577)
						o->snext = null();
						HX_STACK_LINE(577)
						o->mnext = null();
					}
					HX_STACK_LINE(578)
					::zpp_nape::space::ZPP_AABBNode tmp6 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(578)
					o->next = tmp6;
					HX_STACK_LINE(579)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,inlined_removeLeaf,(void))

::zpp_nape::space::ZPP_AABBNode ZPP_AABBTree_obj::balance( ::zpp_nape::space::ZPP_AABBNode a){
	HX_STACK_FRAME("zpp_nape.space.ZPP_AABBTree","balance",0x0a7660fa,"zpp_nape.space.ZPP_AABBTree.balance","zpp_nape/space/DynAABBPhase.hx",589,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(590)
	bool tmp = (a->child1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(590)
	if ((tmp1)){
		HX_STACK_LINE(590)
		tmp2 = (a->height < (int)2);
	}
	else{
		HX_STACK_LINE(590)
		tmp2 = true;
	}
	HX_STACK_LINE(590)
	if ((tmp2)){
		HX_STACK_LINE(590)
		::zpp_nape::space::ZPP_AABBNode tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(590)
		return tmp3;
	}
	else{
		HX_STACK_LINE(592)
		::zpp_nape::space::ZPP_AABBNode b = a->child1;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(593)
		::zpp_nape::space::ZPP_AABBNode c = a->child2;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(594)
		int tmp3 = (c->height - b->height);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		int balance = tmp3;		HX_STACK_VAR(balance,"balance");
		HX_STACK_LINE(595)
		bool tmp4 = (balance > (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(595)
		if ((tmp4)){
			HX_STACK_LINE(596)
			::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(597)
			::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(598)
			c->child1 = a;
			HX_STACK_LINE(599)
			c->parent = a->parent;
			HX_STACK_LINE(600)
			a->parent = c;
			HX_STACK_LINE(601)
			bool tmp5 = (c->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(601)
			if ((tmp5)){
				HX_STACK_LINE(602)
				::zpp_nape::space::ZPP_AABBNode tmp6 = c->parent->child1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(602)
				::zpp_nape::space::ZPP_AABBNode tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(602)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(602)
				if ((tmp8)){
					HX_STACK_LINE(602)
					c->parent->child1 = c;
				}
				else{
					HX_STACK_LINE(603)
					c->parent->child2 = c;
				}
			}
			else{
				HX_STACK_LINE(605)
				this->root = c;
			}
			HX_STACK_LINE(606)
			bool tmp6 = (f->height > g->height);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(606)
			if ((tmp6)){
				HX_STACK_LINE(607)
				c->child2 = f;
				HX_STACK_LINE(608)
				a->child2 = g;
				HX_STACK_LINE(609)
				g->parent = a;
				HX_STACK_LINE(610)
				{
					HX_STACK_LINE(610)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(610)
					::zpp_nape::geom::ZPP_AABB a1 = b->aabb;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(610)
					::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(610)
					bool tmp7 = (a1->minx < b1->minx);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(610)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(610)
					if ((tmp7)){
						HX_STACK_LINE(610)
						tmp8 = a1->minx;
					}
					else{
						HX_STACK_LINE(610)
						tmp8 = b1->minx;
					}
					HX_STACK_LINE(610)
					_this->minx = tmp8;
					HX_STACK_LINE(610)
					bool tmp9 = (a1->miny < b1->miny);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(610)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(610)
					if ((tmp9)){
						HX_STACK_LINE(610)
						tmp10 = a1->miny;
					}
					else{
						HX_STACK_LINE(610)
						tmp10 = b1->miny;
					}
					HX_STACK_LINE(610)
					_this->miny = tmp10;
					HX_STACK_LINE(610)
					bool tmp11 = (a1->maxx > b1->maxx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(610)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(610)
					if ((tmp11)){
						HX_STACK_LINE(610)
						tmp12 = a1->maxx;
					}
					else{
						HX_STACK_LINE(610)
						tmp12 = b1->maxx;
					}
					HX_STACK_LINE(610)
					_this->maxx = tmp12;
					HX_STACK_LINE(610)
					bool tmp13 = (a1->maxy > b1->maxy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(610)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(610)
					if ((tmp13)){
						HX_STACK_LINE(610)
						tmp14 = a1->maxy;
					}
					else{
						HX_STACK_LINE(610)
						tmp14 = b1->maxy;
					}
					HX_STACK_LINE(610)
					_this->maxy = tmp14;
				}
				HX_STACK_LINE(611)
				{
					HX_STACK_LINE(611)
					::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(611)
					::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(611)
					::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(611)
					bool tmp7 = (a1->minx < b1->minx);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(611)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(611)
					if ((tmp7)){
						HX_STACK_LINE(611)
						tmp8 = a1->minx;
					}
					else{
						HX_STACK_LINE(611)
						tmp8 = b1->minx;
					}
					HX_STACK_LINE(611)
					_this->minx = tmp8;
					HX_STACK_LINE(611)
					bool tmp9 = (a1->miny < b1->miny);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(611)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(611)
					if ((tmp9)){
						HX_STACK_LINE(611)
						tmp10 = a1->miny;
					}
					else{
						HX_STACK_LINE(611)
						tmp10 = b1->miny;
					}
					HX_STACK_LINE(611)
					_this->miny = tmp10;
					HX_STACK_LINE(611)
					bool tmp11 = (a1->maxx > b1->maxx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(611)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(611)
					if ((tmp11)){
						HX_STACK_LINE(611)
						tmp12 = a1->maxx;
					}
					else{
						HX_STACK_LINE(611)
						tmp12 = b1->maxx;
					}
					HX_STACK_LINE(611)
					_this->maxx = tmp12;
					HX_STACK_LINE(611)
					bool tmp13 = (a1->maxy > b1->maxy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(611)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(611)
					if ((tmp13)){
						HX_STACK_LINE(611)
						tmp14 = a1->maxy;
					}
					else{
						HX_STACK_LINE(611)
						tmp14 = b1->maxy;
					}
					HX_STACK_LINE(611)
					_this->maxy = tmp14;
				}
				HX_STACK_LINE(612)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(612)
				{
					HX_STACK_LINE(613)
					int x = b->height;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(614)
					int y = g->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(615)
					bool tmp8 = (x > y);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(615)
					if ((tmp8)){
						HX_STACK_LINE(615)
						tmp7 = x;
					}
					else{
						HX_STACK_LINE(615)
						tmp7 = y;
					}
				}
				HX_STACK_LINE(612)
				int tmp8 = ((int)1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(612)
				a->height = tmp8;
				HX_STACK_LINE(617)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(617)
				{
					HX_STACK_LINE(618)
					int x = a->height;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(619)
					int y = f->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(620)
					bool tmp10 = (x > y);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(620)
					if ((tmp10)){
						HX_STACK_LINE(620)
						tmp9 = x;
					}
					else{
						HX_STACK_LINE(620)
						tmp9 = y;
					}
				}
				HX_STACK_LINE(617)
				int tmp10 = ((int)1 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(617)
				c->height = tmp10;
			}
			else{
				HX_STACK_LINE(624)
				c->child2 = g;
				HX_STACK_LINE(625)
				a->child2 = f;
				HX_STACK_LINE(626)
				f->parent = a;
				HX_STACK_LINE(627)
				{
					HX_STACK_LINE(627)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(627)
					::zpp_nape::geom::ZPP_AABB a1 = b->aabb;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(627)
					::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(627)
					bool tmp7 = (a1->minx < b1->minx);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(627)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(627)
					if ((tmp7)){
						HX_STACK_LINE(627)
						tmp8 = a1->minx;
					}
					else{
						HX_STACK_LINE(627)
						tmp8 = b1->minx;
					}
					HX_STACK_LINE(627)
					_this->minx = tmp8;
					HX_STACK_LINE(627)
					bool tmp9 = (a1->miny < b1->miny);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(627)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(627)
					if ((tmp9)){
						HX_STACK_LINE(627)
						tmp10 = a1->miny;
					}
					else{
						HX_STACK_LINE(627)
						tmp10 = b1->miny;
					}
					HX_STACK_LINE(627)
					_this->miny = tmp10;
					HX_STACK_LINE(627)
					bool tmp11 = (a1->maxx > b1->maxx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(627)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(627)
					if ((tmp11)){
						HX_STACK_LINE(627)
						tmp12 = a1->maxx;
					}
					else{
						HX_STACK_LINE(627)
						tmp12 = b1->maxx;
					}
					HX_STACK_LINE(627)
					_this->maxx = tmp12;
					HX_STACK_LINE(627)
					bool tmp13 = (a1->maxy > b1->maxy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(627)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(627)
					if ((tmp13)){
						HX_STACK_LINE(627)
						tmp14 = a1->maxy;
					}
					else{
						HX_STACK_LINE(627)
						tmp14 = b1->maxy;
					}
					HX_STACK_LINE(627)
					_this->maxy = tmp14;
				}
				HX_STACK_LINE(628)
				{
					HX_STACK_LINE(628)
					::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(628)
					::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(628)
					::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(628)
					bool tmp7 = (a1->minx < b1->minx);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(628)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(628)
					if ((tmp7)){
						HX_STACK_LINE(628)
						tmp8 = a1->minx;
					}
					else{
						HX_STACK_LINE(628)
						tmp8 = b1->minx;
					}
					HX_STACK_LINE(628)
					_this->minx = tmp8;
					HX_STACK_LINE(628)
					bool tmp9 = (a1->miny < b1->miny);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(628)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(628)
					if ((tmp9)){
						HX_STACK_LINE(628)
						tmp10 = a1->miny;
					}
					else{
						HX_STACK_LINE(628)
						tmp10 = b1->miny;
					}
					HX_STACK_LINE(628)
					_this->miny = tmp10;
					HX_STACK_LINE(628)
					bool tmp11 = (a1->maxx > b1->maxx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(628)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(628)
					if ((tmp11)){
						HX_STACK_LINE(628)
						tmp12 = a1->maxx;
					}
					else{
						HX_STACK_LINE(628)
						tmp12 = b1->maxx;
					}
					HX_STACK_LINE(628)
					_this->maxx = tmp12;
					HX_STACK_LINE(628)
					bool tmp13 = (a1->maxy > b1->maxy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(628)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(628)
					if ((tmp13)){
						HX_STACK_LINE(628)
						tmp14 = a1->maxy;
					}
					else{
						HX_STACK_LINE(628)
						tmp14 = b1->maxy;
					}
					HX_STACK_LINE(628)
					_this->maxy = tmp14;
				}
				HX_STACK_LINE(629)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(629)
				{
					HX_STACK_LINE(630)
					int x = b->height;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(631)
					int y = f->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(632)
					bool tmp8 = (x > y);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(632)
					if ((tmp8)){
						HX_STACK_LINE(632)
						tmp7 = x;
					}
					else{
						HX_STACK_LINE(632)
						tmp7 = y;
					}
				}
				HX_STACK_LINE(629)
				int tmp8 = ((int)1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(629)
				a->height = tmp8;
				HX_STACK_LINE(634)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(635)
					int x = a->height;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(636)
					int y = g->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(637)
					bool tmp10 = (x > y);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(637)
					if ((tmp10)){
						HX_STACK_LINE(637)
						tmp9 = x;
					}
					else{
						HX_STACK_LINE(637)
						tmp9 = y;
					}
				}
				HX_STACK_LINE(634)
				int tmp10 = ((int)1 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(634)
				c->height = tmp10;
			}
			HX_STACK_LINE(640)
			::zpp_nape::space::ZPP_AABBNode tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(640)
			return tmp7;
		}
		else{
			HX_STACK_LINE(642)
			bool tmp5 = (balance < (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(642)
			if ((tmp5)){
				HX_STACK_LINE(643)
				::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(644)
				::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(645)
				b->child1 = a;
				HX_STACK_LINE(646)
				b->parent = a->parent;
				HX_STACK_LINE(647)
				a->parent = b;
				HX_STACK_LINE(648)
				bool tmp6 = (b->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(648)
				if ((tmp6)){
					HX_STACK_LINE(649)
					::zpp_nape::space::ZPP_AABBNode tmp7 = b->parent->child1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(649)
					::zpp_nape::space::ZPP_AABBNode tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(649)
					bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(649)
					if ((tmp9)){
						HX_STACK_LINE(649)
						b->parent->child1 = b;
					}
					else{
						HX_STACK_LINE(650)
						b->parent->child2 = b;
					}
				}
				else{
					HX_STACK_LINE(652)
					this->root = b;
				}
				HX_STACK_LINE(653)
				bool tmp7 = (f->height > g->height);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(653)
				if ((tmp7)){
					HX_STACK_LINE(654)
					b->child2 = f;
					HX_STACK_LINE(655)
					a->child1 = g;
					HX_STACK_LINE(656)
					g->parent = a;
					HX_STACK_LINE(657)
					{
						HX_STACK_LINE(657)
						::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(657)
						::zpp_nape::geom::ZPP_AABB a1 = c->aabb;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(657)
						::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(657)
						bool tmp8 = (a1->minx < b1->minx);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(657)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(657)
						if ((tmp8)){
							HX_STACK_LINE(657)
							tmp9 = a1->minx;
						}
						else{
							HX_STACK_LINE(657)
							tmp9 = b1->minx;
						}
						HX_STACK_LINE(657)
						_this->minx = tmp9;
						HX_STACK_LINE(657)
						bool tmp10 = (a1->miny < b1->miny);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(657)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(657)
						if ((tmp10)){
							HX_STACK_LINE(657)
							tmp11 = a1->miny;
						}
						else{
							HX_STACK_LINE(657)
							tmp11 = b1->miny;
						}
						HX_STACK_LINE(657)
						_this->miny = tmp11;
						HX_STACK_LINE(657)
						bool tmp12 = (a1->maxx > b1->maxx);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(657)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(657)
						if ((tmp12)){
							HX_STACK_LINE(657)
							tmp13 = a1->maxx;
						}
						else{
							HX_STACK_LINE(657)
							tmp13 = b1->maxx;
						}
						HX_STACK_LINE(657)
						_this->maxx = tmp13;
						HX_STACK_LINE(657)
						bool tmp14 = (a1->maxy > b1->maxy);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(657)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(657)
						if ((tmp14)){
							HX_STACK_LINE(657)
							tmp15 = a1->maxy;
						}
						else{
							HX_STACK_LINE(657)
							tmp15 = b1->maxy;
						}
						HX_STACK_LINE(657)
						_this->maxy = tmp15;
					}
					HX_STACK_LINE(658)
					{
						HX_STACK_LINE(658)
						::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(658)
						::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(658)
						::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(658)
						bool tmp8 = (a1->minx < b1->minx);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(658)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(658)
						if ((tmp8)){
							HX_STACK_LINE(658)
							tmp9 = a1->minx;
						}
						else{
							HX_STACK_LINE(658)
							tmp9 = b1->minx;
						}
						HX_STACK_LINE(658)
						_this->minx = tmp9;
						HX_STACK_LINE(658)
						bool tmp10 = (a1->miny < b1->miny);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(658)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(658)
						if ((tmp10)){
							HX_STACK_LINE(658)
							tmp11 = a1->miny;
						}
						else{
							HX_STACK_LINE(658)
							tmp11 = b1->miny;
						}
						HX_STACK_LINE(658)
						_this->miny = tmp11;
						HX_STACK_LINE(658)
						bool tmp12 = (a1->maxx > b1->maxx);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(658)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(658)
						if ((tmp12)){
							HX_STACK_LINE(658)
							tmp13 = a1->maxx;
						}
						else{
							HX_STACK_LINE(658)
							tmp13 = b1->maxx;
						}
						HX_STACK_LINE(658)
						_this->maxx = tmp13;
						HX_STACK_LINE(658)
						bool tmp14 = (a1->maxy > b1->maxy);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(658)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(658)
						if ((tmp14)){
							HX_STACK_LINE(658)
							tmp15 = a1->maxy;
						}
						else{
							HX_STACK_LINE(658)
							tmp15 = b1->maxy;
						}
						HX_STACK_LINE(658)
						_this->maxy = tmp15;
					}
					HX_STACK_LINE(659)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(659)
					{
						HX_STACK_LINE(660)
						int x = c->height;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(661)
						int y = g->height;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(662)
						bool tmp9 = (x > y);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(662)
						if ((tmp9)){
							HX_STACK_LINE(662)
							tmp8 = x;
						}
						else{
							HX_STACK_LINE(662)
							tmp8 = y;
						}
					}
					HX_STACK_LINE(659)
					int tmp9 = ((int)1 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(659)
					a->height = tmp9;
					HX_STACK_LINE(664)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(665)
						int x = a->height;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(666)
						int y = f->height;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(667)
						bool tmp11 = (x > y);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(667)
						if ((tmp11)){
							HX_STACK_LINE(667)
							tmp10 = x;
						}
						else{
							HX_STACK_LINE(667)
							tmp10 = y;
						}
					}
					HX_STACK_LINE(664)
					int tmp11 = ((int)1 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(664)
					b->height = tmp11;
				}
				else{
					HX_STACK_LINE(671)
					b->child2 = g;
					HX_STACK_LINE(672)
					a->child1 = f;
					HX_STACK_LINE(673)
					f->parent = a;
					HX_STACK_LINE(674)
					{
						HX_STACK_LINE(674)
						::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(674)
						::zpp_nape::geom::ZPP_AABB a1 = c->aabb;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(674)
						::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(674)
						bool tmp8 = (a1->minx < b1->minx);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(674)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(674)
						if ((tmp8)){
							HX_STACK_LINE(674)
							tmp9 = a1->minx;
						}
						else{
							HX_STACK_LINE(674)
							tmp9 = b1->minx;
						}
						HX_STACK_LINE(674)
						_this->minx = tmp9;
						HX_STACK_LINE(674)
						bool tmp10 = (a1->miny < b1->miny);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(674)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(674)
						if ((tmp10)){
							HX_STACK_LINE(674)
							tmp11 = a1->miny;
						}
						else{
							HX_STACK_LINE(674)
							tmp11 = b1->miny;
						}
						HX_STACK_LINE(674)
						_this->miny = tmp11;
						HX_STACK_LINE(674)
						bool tmp12 = (a1->maxx > b1->maxx);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(674)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(674)
						if ((tmp12)){
							HX_STACK_LINE(674)
							tmp13 = a1->maxx;
						}
						else{
							HX_STACK_LINE(674)
							tmp13 = b1->maxx;
						}
						HX_STACK_LINE(674)
						_this->maxx = tmp13;
						HX_STACK_LINE(674)
						bool tmp14 = (a1->maxy > b1->maxy);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(674)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(674)
						if ((tmp14)){
							HX_STACK_LINE(674)
							tmp15 = a1->maxy;
						}
						else{
							HX_STACK_LINE(674)
							tmp15 = b1->maxy;
						}
						HX_STACK_LINE(674)
						_this->maxy = tmp15;
					}
					HX_STACK_LINE(675)
					{
						HX_STACK_LINE(675)
						::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(675)
						::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(675)
						::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(675)
						bool tmp8 = (a1->minx < b1->minx);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(675)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(675)
						if ((tmp8)){
							HX_STACK_LINE(675)
							tmp9 = a1->minx;
						}
						else{
							HX_STACK_LINE(675)
							tmp9 = b1->minx;
						}
						HX_STACK_LINE(675)
						_this->minx = tmp9;
						HX_STACK_LINE(675)
						bool tmp10 = (a1->miny < b1->miny);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(675)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(675)
						if ((tmp10)){
							HX_STACK_LINE(675)
							tmp11 = a1->miny;
						}
						else{
							HX_STACK_LINE(675)
							tmp11 = b1->miny;
						}
						HX_STACK_LINE(675)
						_this->miny = tmp11;
						HX_STACK_LINE(675)
						bool tmp12 = (a1->maxx > b1->maxx);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(675)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(675)
						if ((tmp12)){
							HX_STACK_LINE(675)
							tmp13 = a1->maxx;
						}
						else{
							HX_STACK_LINE(675)
							tmp13 = b1->maxx;
						}
						HX_STACK_LINE(675)
						_this->maxx = tmp13;
						HX_STACK_LINE(675)
						bool tmp14 = (a1->maxy > b1->maxy);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(675)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(675)
						if ((tmp14)){
							HX_STACK_LINE(675)
							tmp15 = a1->maxy;
						}
						else{
							HX_STACK_LINE(675)
							tmp15 = b1->maxy;
						}
						HX_STACK_LINE(675)
						_this->maxy = tmp15;
					}
					HX_STACK_LINE(676)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(676)
					{
						HX_STACK_LINE(677)
						int x = c->height;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(678)
						int y = f->height;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(679)
						bool tmp9 = (x > y);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(679)
						if ((tmp9)){
							HX_STACK_LINE(679)
							tmp8 = x;
						}
						else{
							HX_STACK_LINE(679)
							tmp8 = y;
						}
					}
					HX_STACK_LINE(676)
					int tmp9 = ((int)1 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(676)
					a->height = tmp9;
					HX_STACK_LINE(681)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(681)
					{
						HX_STACK_LINE(682)
						int x = a->height;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(683)
						int y = g->height;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(684)
						bool tmp11 = (x > y);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(684)
						if ((tmp11)){
							HX_STACK_LINE(684)
							tmp10 = x;
						}
						else{
							HX_STACK_LINE(684)
							tmp10 = y;
						}
					}
					HX_STACK_LINE(681)
					int tmp11 = ((int)1 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(681)
					b->height = tmp11;
				}
				HX_STACK_LINE(687)
				::zpp_nape::space::ZPP_AABBNode tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(687)
				return tmp8;
			}
			else{
				HX_STACK_LINE(689)
				::zpp_nape::space::ZPP_AABBNode tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(689)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(590)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,balance,return )

::zpp_nape::geom::ZPP_AABB ZPP_AABBTree_obj::tmpaabb;


ZPP_AABBTree_obj::ZPP_AABBTree_obj()
{
}

void ZPP_AABBTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBTree);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void ZPP_AABBTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
}

Dynamic ZPP_AABBTree_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"balance") ) { return balance_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"insertLeaf") ) { return insertLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"removeLeaf") ) { return removeLeaf_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_insertLeaf") ) { return inlined_insertLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_removeLeaf") ) { return inlined_removeLeaf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_AABBTree_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tmpaabb") ) { outValue = tmpaabb; return true;  }
	}
	return false;
}

Dynamic ZPP_AABBTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_AABBTree_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tmpaabb") ) { tmpaabb=ioValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return true; }
	}
	return false;
}

void ZPP_AABBTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBTree_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(void *) &ZPP_AABBTree_obj::tmpaabb,HX_HCSTRING("tmpaabb","\xf7","\xbe","\xe8","\x29")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("insertLeaf","\x77","\x03","\x9b","\x2d"),
	HX_HCSTRING("inlined_insertLeaf","\x8b","\x0e","\x9e","\xcd"),
	HX_HCSTRING("removeLeaf","\x02","\x3e","\xcf","\xc4"),
	HX_HCSTRING("inlined_removeLeaf","\x16","\x49","\xd2","\x64"),
	HX_HCSTRING("balance","\x1c","\x9d","\x8d","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBTree_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABBTree_obj::tmpaabb,"tmpaabb");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBTree_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABBTree_obj::tmpaabb,"tmpaabb");
};

#endif

hx::Class ZPP_AABBTree_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tmpaabb","\xf7","\xbe","\xe8","\x29"),
	::String(null()) };

void ZPP_AABBTree_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_AABBTree","\x4c","\x16","\x27","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_AABBTree_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_AABBTree_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_AABBTree_obj >;
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

void ZPP_AABBTree_obj::__boot()
{
	tmpaabb= ::zpp_nape::geom::ZPP_AABB_obj::__new();
}

} // end namespace zpp_nape
} // end namespace space
