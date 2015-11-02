#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Monotone
#include <zpp_nape/geom/ZPP_Monotone.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Monotone_obj::__construct()
{
	return null();
}

//ZPP_Monotone_obj::~ZPP_Monotone_obj() { }

Dynamic ZPP_Monotone_obj::__CreateEmpty() { return  new ZPP_Monotone_obj; }
hx::ObjectPtr< ZPP_Monotone_obj > ZPP_Monotone_obj::__new()
{  hx::ObjectPtr< ZPP_Monotone_obj > _result_ = new ZPP_Monotone_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Monotone_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Monotone_obj > _result_ = new ZPP_Monotone_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::geom::ZPP_Vec2 ZPP_Monotone_obj::bisector( ::zpp_nape::geom::ZPP_PartitionVertex b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Monotone","bisector",0xca647430,"zpp_nape.geom.ZPP_Monotone.bisector","zpp_nape/geom/Monotone.hx",175,0x3d0f4898)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(176)
	::zpp_nape::geom::ZPP_PartitionVertex a = b->prev;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(177)
	::zpp_nape::geom::ZPP_PartitionVertex c = b->next;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(178)
	Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(179)
	Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(181)
		Float tmp = (b->x - a->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		ux = tmp;
		HX_STACK_LINE(182)
		Float tmp1 = (b->y - a->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		uy = tmp1;
	}
	HX_STACK_LINE(184)
	Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(185)
	Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(187)
		Float tmp = (c->x - b->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		vx = tmp;
		HX_STACK_LINE(188)
		Float tmp1 = (c->y - b->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		vy = tmp1;
	}
	HX_STACK_LINE(190)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(190)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(190)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			if ((tmp2)){
				HX_STACK_LINE(190)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(190)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(190)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(190)
				ret = tmp3;
				HX_STACK_LINE(190)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(190)
				ret->next = null();
			}
			HX_STACK_LINE(190)
			ret->weak = false;
		}
		HX_STACK_LINE(190)
		ret->_immutable = immutable;
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			Float tmp1 = uy;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(190)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			Float tmp3 = vy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			ret->x = tmp4;
			HX_STACK_LINE(190)
			Float tmp5 = (ux + vx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			ret->y = tmp5;
			HX_STACK_LINE(190)
			{
			}
		}
		HX_STACK_LINE(190)
		tmp = ret;
	}
	HX_STACK_LINE(190)
	::zpp_nape::geom::ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(192)
		Float tmp1 = (ret->x * ret->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		Float tmp2 = (ret->y * ret->y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		Float d = tmp3;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(201)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				Float tmp6 = d;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				tmp5 = ::Math_obj::sqrt(tmp6);
			}
			HX_STACK_LINE(201)
			tmp4 = (Float(((Float)1.0)) / Float(tmp5));
		}
		HX_STACK_LINE(201)
		Float imag = tmp4;		HX_STACK_VAR(imag,"imag");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(203)
			Float t = imag;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(212)
			hx::MultEq(ret->x,t);
			HX_STACK_LINE(213)
			hx::MultEq(ret->y,t);
		}
	}
	HX_STACK_LINE(216)
	Float tmp1 = (vy * ux);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	Float tmp2 = (vx * uy);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(216)
	bool tmp4 = (tmp3 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(216)
	if ((tmp4)){
		HX_STACK_LINE(217)
		Float tmp5 = ret->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		ret->x = tmp6;
		HX_STACK_LINE(218)
		Float tmp7 = ret->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(218)
		Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(218)
		ret->y = tmp8;
	}
	HX_STACK_LINE(220)
	::zpp_nape::geom::ZPP_Vec2 tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(220)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Monotone_obj,bisector,return )

bool ZPP_Monotone_obj::below( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Monotone","below",0xedc4474e,"zpp_nape.geom.ZPP_Monotone.below","zpp_nape/geom/Monotone.hx",222,0x3d0f4898)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(223)
	bool tmp = (p->y < q->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	if ((tmp)){
		HX_STACK_LINE(223)
		return true;
	}
	else{
		HX_STACK_LINE(224)
		bool tmp1 = (p->y > q->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		if ((tmp1)){
			HX_STACK_LINE(224)
			return false;
		}
		else{
			HX_STACK_LINE(226)
			bool tmp2 = (p->x < q->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			if ((tmp2)){
				HX_STACK_LINE(226)
				return true;
			}
			else{
				HX_STACK_LINE(227)
				bool tmp3 = (p->x > q->x);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(227)
				if ((tmp3)){
					HX_STACK_LINE(227)
					return false;
				}
				else{
					HX_STACK_LINE(229)
					::zpp_nape::geom::ZPP_PartitionVertex tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(229)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Monotone_obj::bisector(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(229)
					::zpp_nape::geom::ZPP_Vec2 po = tmp5;		HX_STACK_VAR(po,"po");
					HX_STACK_LINE(230)
					::zpp_nape::geom::ZPP_PartitionVertex tmp6 = q;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(230)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Monotone_obj::bisector(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(230)
					::zpp_nape::geom::ZPP_Vec2 qo = tmp7;		HX_STACK_VAR(qo,"qo");
					HX_STACK_LINE(231)
					{
						HX_STACK_LINE(232)
						Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(241)
						Float tmp8 = (p->x * t);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(241)
						hx::AddEq(po->x,tmp8);
						HX_STACK_LINE(242)
						Float tmp9 = (p->y * t);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(242)
						hx::AddEq(po->y,tmp9);
					}
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(245)
						Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(254)
						Float tmp8 = (q->x * t);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(254)
						hx::AddEq(qo->x,tmp8);
						HX_STACK_LINE(255)
						Float tmp9 = (q->y * t);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(255)
						hx::AddEq(qo->y,tmp9);
					}
					HX_STACK_LINE(257)
					bool tmp8 = (po->x < qo->x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(257)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(257)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(257)
					if ((tmp9)){
						HX_STACK_LINE(257)
						bool tmp11 = (po->x == qo->x);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(257)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(257)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(257)
						if ((tmp13)){
							HX_STACK_LINE(257)
							tmp10 = (po->y < qo->y);
						}
						else{
							HX_STACK_LINE(257)
							tmp10 = false;
						}
					}
					else{
						HX_STACK_LINE(257)
						tmp10 = true;
					}
					HX_STACK_LINE(257)
					bool ret = tmp10;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(259)
						::zpp_nape::geom::ZPP_Vec2 o = po;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(268)
							if ((tmp11)){
								HX_STACK_LINE(268)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(268)
								o->outer = null();
							}
							HX_STACK_LINE(268)
							o->_isimmutable = null();
							HX_STACK_LINE(268)
							o->_validate = null();
							HX_STACK_LINE(268)
							o->_invalidate = null();
						}
						HX_STACK_LINE(269)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(269)
						o->next = tmp11;
						HX_STACK_LINE(270)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(276)
						::zpp_nape::geom::ZPP_Vec2 o = qo;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(285)
							bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(285)
							if ((tmp11)){
								HX_STACK_LINE(285)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(285)
								o->outer = null();
							}
							HX_STACK_LINE(285)
							o->_isimmutable = null();
							HX_STACK_LINE(285)
							o->_validate = null();
							HX_STACK_LINE(285)
							o->_invalidate = null();
						}
						HX_STACK_LINE(286)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(286)
						o->next = tmp11;
						HX_STACK_LINE(287)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(292)
					bool tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(292)
					return tmp11;
				}
			}
		}
	}
	HX_STACK_LINE(223)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Monotone_obj,below,return )

bool ZPP_Monotone_obj::above( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Monotone","above",0x58645bba,"zpp_nape.geom.ZPP_Monotone.above","zpp_nape/geom/Monotone.hx",296,0x3d0f4898)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(297)
	::zpp_nape::geom::ZPP_PartitionVertex tmp = q;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	::zpp_nape::geom::ZPP_PartitionVertex tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	bool tmp2 = ::zpp_nape::geom::ZPP_Monotone_obj::below(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Monotone_obj,above,return )

bool ZPP_Monotone_obj::left_vertex( ::zpp_nape::geom::ZPP_PartitionVertex p){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Monotone","left_vertex",0xa8866439,"zpp_nape.geom.ZPP_Monotone.left_vertex","zpp_nape/geom/Monotone.hx",299,0x3d0f4898)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(300)
	::zpp_nape::geom::ZPP_PartitionVertex pre = p->prev;		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(301)
	bool tmp = (pre->y > p->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	if ((tmp1)){
		HX_STACK_LINE(301)
		bool tmp3 = (pre->y == p->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		if ((tmp5)){
			HX_STACK_LINE(301)
			Float tmp6 = p->next->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(301)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			Float tmp9 = p->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(301)
			tmp2 = (tmp8 < tmp9);
		}
		else{
			HX_STACK_LINE(301)
			tmp2 = false;
		}
	}
	else{
		HX_STACK_LINE(301)
		tmp2 = true;
	}
	HX_STACK_LINE(301)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Monotone_obj,left_vertex,return )

bool ZPP_Monotone_obj::isMonotone( ::zpp_nape::geom::ZPP_GeomVert P){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Monotone","isMonotone",0xad973062,"zpp_nape.geom.ZPP_Monotone.isMonotone","zpp_nape/geom/Monotone.hx",303,0x3d0f4898)
	HX_STACK_ARG(P,"P")
	HX_STACK_LINE(304)
	::zpp_nape::geom::ZPP_GeomVert min = P;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(305)
	::zpp_nape::geom::ZPP_GeomVert max = P;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(306)
	{
		HX_STACK_LINE(307)
		::zpp_nape::geom::ZPP_GeomVert F = P->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(308)
		::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(309)
		bool tmp = (F != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		if ((tmp)){
			HX_STACK_LINE(310)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(311)
			while((true)){
				HX_STACK_LINE(312)
				::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(315)
					bool tmp1 = (p->y < min->y);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(315)
					if ((tmp1)){
						HX_STACK_LINE(315)
						min = p;
					}
					HX_STACK_LINE(316)
					bool tmp2 = (p->y > max->y);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(316)
					if ((tmp2)){
						HX_STACK_LINE(316)
						max = p;
					}
				}
				HX_STACK_LINE(319)
				nite = nite->next;
				HX_STACK_LINE(321)
				bool tmp1 = (nite != L);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(321)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				if ((tmp2)){
					HX_STACK_LINE(311)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(324)
	bool ret = true;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(325)
	::zpp_nape::geom::ZPP_GeomVert pre = min;		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(326)
	bool tmp = (max != min->next);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	if ((tmp)){
		HX_STACK_LINE(328)
		::zpp_nape::geom::ZPP_GeomVert F = min->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(329)
		::zpp_nape::geom::ZPP_GeomVert L = max;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(330)
		bool tmp1 = (F != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		if ((tmp1)){
			HX_STACK_LINE(331)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(332)
			while((true)){
				HX_STACK_LINE(333)
				::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(336)
					bool tmp2 = (p->y < pre->y);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(336)
					if ((tmp2)){
						HX_STACK_LINE(337)
						ret = false;
						HX_STACK_LINE(338)
						break;
					}
					HX_STACK_LINE(340)
					pre = p;
				}
				HX_STACK_LINE(343)
				nite = nite->next;
				HX_STACK_LINE(345)
				bool tmp2 = (nite != L);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(345)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(332)
				if ((tmp3)){
					HX_STACK_LINE(332)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(349)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(349)
	if ((tmp2)){
		HX_STACK_LINE(349)
		return false;
	}
	HX_STACK_LINE(350)
	pre = min;
	HX_STACK_LINE(351)
	bool tmp3 = (max != min->prev);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(351)
	if ((tmp3)){
		HX_STACK_LINE(353)
		::zpp_nape::geom::ZPP_GeomVert F = min->prev;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(354)
		::zpp_nape::geom::ZPP_GeomVert L = max;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(355)
		bool tmp4 = (F != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		if ((tmp4)){
			HX_STACK_LINE(356)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(357)
			while((true)){
				HX_STACK_LINE(358)
				::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(360)
				{
					HX_STACK_LINE(361)
					bool tmp5 = (p->y < pre->y);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(361)
					if ((tmp5)){
						HX_STACK_LINE(362)
						ret = false;
						HX_STACK_LINE(363)
						break;
					}
					HX_STACK_LINE(365)
					pre = p;
				}
				HX_STACK_LINE(368)
				nite = nite->prev;
				HX_STACK_LINE(370)
				bool tmp5 = (nite != L);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(370)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(357)
				if ((tmp6)){
					HX_STACK_LINE(357)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(374)
	bool tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(374)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Monotone_obj,isMonotone,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_Monotone_obj::sharedPPoly;

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_Monotone_obj::getShared( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Monotone","getShared",0x530b86f8,"zpp_nape.geom.ZPP_Monotone.getShared","zpp_nape/geom/Monotone.hx",378,0x3d0f4898)
	HX_STACK_LINE(379)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(379)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(379)
	if ((tmp1)){
		HX_STACK_LINE(379)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp2 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly = tmp2;
	}
	HX_STACK_LINE(380)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp2 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(380)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Monotone_obj,getShared,return )

::zpp_nape::util::ZNPList_ZPP_PartitionVertex ZPP_Monotone_obj::queue;

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Monotone_obj::edges;

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_Monotone_obj::decompose( ::zpp_nape::geom::ZPP_GeomVert P,::zpp_nape::geom::ZPP_PartitionedPoly poly){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Monotone","decompose",0x343162ce,"zpp_nape.geom.ZPP_Monotone.decompose","zpp_nape/geom/Monotone.hx",384,0x3d0f4898)
	HX_STACK_ARG(P,"P")
	HX_STACK_ARG(poly,"poly")
	HX_STACK_LINE(385)
	bool tmp = (poly == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(385)
	if ((tmp)){
		HX_STACK_LINE(386)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp1 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(P);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		poly = tmp1;
	}
	else{
		HX_STACK_LINE(389)
		::zpp_nape::geom::ZPP_GeomVert tmp1 = P;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		poly->init(tmp1);
	}
	HX_STACK_LINE(391)
	bool tmp1 = (poly->vertices == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	if ((tmp1)){
		HX_STACK_LINE(391)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp2 = poly;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		return tmp2;
	}
	HX_STACK_LINE(392)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp2 = ::zpp_nape::geom::ZPP_Monotone_obj::queue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(392)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(392)
	if ((tmp3)){
		HX_STACK_LINE(392)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		::zpp_nape::geom::ZPP_Monotone_obj::queue = tmp4;
	}
	HX_STACK_LINE(393)
	{
		HX_STACK_LINE(394)
		::zpp_nape::geom::ZPP_PartitionVertex F = poly->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(395)
		::zpp_nape::geom::ZPP_PartitionVertex L = poly->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(396)
		bool tmp4 = (F != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		if ((tmp4)){
			HX_STACK_LINE(397)
			::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(398)
			while((true)){
				HX_STACK_LINE(399)
				::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(402)
					::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp5 = ::zpp_nape::geom::ZPP_Monotone_obj::queue;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(402)
					::zpp_nape::geom::ZPP_PartitionVertex tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(402)
					tmp5->add(tmp6);
					HX_STACK_LINE(403)
					Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
					HX_STACK_LINE(404)
					Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(406)
						Float tmp7 = p->next->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(406)
						Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(406)
						Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(406)
						ux = tmp9;
						HX_STACK_LINE(407)
						Float tmp10 = p->next->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(407)
						Float tmp11 = p->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(407)
						Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(407)
						uy = tmp12;
					}
					HX_STACK_LINE(409)
					Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
					HX_STACK_LINE(410)
					Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
					HX_STACK_LINE(411)
					{
						HX_STACK_LINE(412)
						Float tmp7 = p->prev->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(412)
						Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(412)
						Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(412)
						vx = tmp9;
						HX_STACK_LINE(413)
						Float tmp10 = p->prev->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(413)
						Float tmp11 = p->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(413)
						Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(413)
						vy = tmp12;
					}
					HX_STACK_LINE(415)
					Float tmp7 = (vy * ux);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(415)
					Float tmp8 = (vx * uy);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(415)
					Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(415)
					bool tmp10 = (tmp9 > ((Float)0.0));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(415)
					bool cx = tmp10;		HX_STACK_VAR(cx,"cx");
					HX_STACK_LINE(416)
					::zpp_nape::geom::ZPP_PartitionVertex tmp11 = p->prev;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(416)
					::zpp_nape::geom::ZPP_PartitionVertex tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(416)
					bool tmp13 = ::zpp_nape::geom::ZPP_Monotone_obj::below(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(416)
					int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(416)
					if ((tmp13)){
						HX_STACK_LINE(417)
						::zpp_nape::geom::ZPP_PartitionVertex tmp15 = p->next;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(417)
						::zpp_nape::geom::ZPP_PartitionVertex tmp16 = p;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(417)
						bool tmp17 = ::zpp_nape::geom::ZPP_Monotone_obj::below(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(417)
						if ((tmp17)){
							HX_STACK_LINE(417)
							bool tmp18 = cx;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(417)
							if ((tmp18)){
								HX_STACK_LINE(417)
								tmp14 = (int)0;
							}
							else{
								HX_STACK_LINE(417)
								tmp14 = (int)3;
							}
						}
						else{
							HX_STACK_LINE(417)
							tmp14 = (int)4;
						}
					}
					else{
						HX_STACK_LINE(420)
						::zpp_nape::geom::ZPP_PartitionVertex tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(420)
						::zpp_nape::geom::ZPP_PartitionVertex tmp16 = p->next;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(420)
						bool tmp17 = ::zpp_nape::geom::ZPP_Monotone_obj::below(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(420)
						if ((tmp17)){
							HX_STACK_LINE(420)
							bool tmp18 = cx;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(420)
							if ((tmp18)){
								HX_STACK_LINE(420)
								tmp14 = (int)1;
							}
							else{
								HX_STACK_LINE(420)
								tmp14 = (int)2;
							}
						}
						else{
							HX_STACK_LINE(420)
							tmp14 = (int)4;
						}
					}
					HX_STACK_LINE(416)
					p->type = tmp14;
				}
				HX_STACK_LINE(424)
				nite = nite->next;
				HX_STACK_LINE(426)
				bool tmp5 = (nite != L);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(426)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(398)
				if ((tmp6)){
					HX_STACK_LINE(398)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(429)
	{
		HX_STACK_LINE(430)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp4 = ::zpp_nape::geom::ZPP_Monotone_obj::queue;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(430)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex xxlist = tmp4;		HX_STACK_VAR(xxlist,"xxlist");
		HX_STACK_LINE(431)
		bool tmp5 = (xxlist->head == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(431)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(431)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(431)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(431)
		if ((tmp7)){
			HX_STACK_LINE(431)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp9 = xxlist->head->next;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(431)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(431)
			tmp8 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(431)
			tmp8 = false;
		}
		HX_STACK_LINE(431)
		if ((tmp8)){
			HX_STACK_LINE(432)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex head = xxlist->head;		HX_STACK_VAR(head,"head");
			HX_STACK_LINE(433)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tail = null();		HX_STACK_VAR(tail,"tail");
			HX_STACK_LINE(434)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex left = null();		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(435)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex right = null();		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(436)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nxt = null();		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(437)
			int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
			HX_STACK_LINE(438)
			int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
			HX_STACK_LINE(438)
			int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
			HX_STACK_LINE(438)
			int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
			HX_STACK_LINE(439)
			while((true)){
				HX_STACK_LINE(440)
				numMerges = (int)0;
				HX_STACK_LINE(441)
				left = head;
				HX_STACK_LINE(442)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp9 = head = null();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(442)
				tail = tmp9;
				HX_STACK_LINE(443)
				while((true)){
					HX_STACK_LINE(443)
					bool tmp10 = (left != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(443)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(443)
					if ((tmp11)){
						HX_STACK_LINE(443)
						break;
					}
					HX_STACK_LINE(444)
					(numMerges)++;
					HX_STACK_LINE(445)
					right = left;
					HX_STACK_LINE(446)
					leftSize = (int)0;
					HX_STACK_LINE(447)
					rightSize = listSize;
					HX_STACK_LINE(448)
					while((true)){
						HX_STACK_LINE(448)
						bool tmp12 = (right != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(448)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(448)
						if ((tmp12)){
							HX_STACK_LINE(448)
							tmp13 = (leftSize < listSize);
						}
						else{
							HX_STACK_LINE(448)
							tmp13 = false;
						}
						HX_STACK_LINE(448)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(448)
						if ((tmp14)){
							HX_STACK_LINE(448)
							break;
						}
						HX_STACK_LINE(449)
						(leftSize)++;
						HX_STACK_LINE(450)
						right = right->next;
					}
					HX_STACK_LINE(452)
					while((true)){
						HX_STACK_LINE(452)
						bool tmp12 = (leftSize > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(452)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(452)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(452)
						if ((tmp13)){
							HX_STACK_LINE(452)
							bool tmp15 = (rightSize > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(452)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(452)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(452)
							if ((tmp17)){
								HX_STACK_LINE(452)
								tmp14 = (right != null());
							}
							else{
								HX_STACK_LINE(452)
								tmp14 = false;
							}
						}
						else{
							HX_STACK_LINE(452)
							tmp14 = true;
						}
						HX_STACK_LINE(452)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(452)
						if ((tmp15)){
							HX_STACK_LINE(452)
							break;
						}
						HX_STACK_LINE(453)
						bool tmp16 = (leftSize == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(453)
						if ((tmp16)){
							HX_STACK_LINE(454)
							nxt = right;
							HX_STACK_LINE(455)
							right = right->next;
							HX_STACK_LINE(456)
							(rightSize)--;
						}
						else{
							HX_STACK_LINE(458)
							bool tmp17 = (rightSize == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(458)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(458)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(458)
							if ((tmp18)){
								HX_STACK_LINE(458)
								tmp19 = (right == null());
							}
							else{
								HX_STACK_LINE(458)
								tmp19 = true;
							}
							HX_STACK_LINE(458)
							if ((tmp19)){
								HX_STACK_LINE(459)
								nxt = left;
								HX_STACK_LINE(460)
								left = left->next;
								HX_STACK_LINE(461)
								(leftSize)--;
							}
							else{
								HX_STACK_LINE(463)
								::zpp_nape::geom::ZPP_PartitionVertex tmp20 = left->elt;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(463)
								::zpp_nape::geom::ZPP_PartitionVertex tmp21 = right->elt;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(463)
								bool tmp22 = ::zpp_nape::geom::ZPP_Monotone_obj::above(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(463)
								if ((tmp22)){
									HX_STACK_LINE(464)
									nxt = left;
									HX_STACK_LINE(465)
									left = left->next;
									HX_STACK_LINE(466)
									(leftSize)--;
								}
								else{
									HX_STACK_LINE(469)
									nxt = right;
									HX_STACK_LINE(470)
									right = right->next;
									HX_STACK_LINE(471)
									(rightSize)--;
								}
							}
						}
						HX_STACK_LINE(473)
						bool tmp17 = (tail != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(473)
						if ((tmp17)){
							HX_STACK_LINE(473)
							tail->next = nxt;
						}
						else{
							HX_STACK_LINE(474)
							head = nxt;
						}
						HX_STACK_LINE(475)
						tail = nxt;
					}
					HX_STACK_LINE(477)
					left = right;
				}
				HX_STACK_LINE(479)
				tail->next = null();
				HX_STACK_LINE(480)
				hx::ShlEq(listSize,(int)1);
				HX_STACK_LINE(482)
				bool tmp10 = (numMerges > (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(482)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(439)
				if ((tmp11)){
					HX_STACK_LINE(439)
					break;
				}
			}
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				xxlist->head = head;
				HX_STACK_LINE(483)
				xxlist->modified = true;
				HX_STACK_LINE(483)
				xxlist->pushmod = true;
			}
		}
	}
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(486)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(486)
	if ((tmp5)){
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(488)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp6 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(488)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(488)
			if ((tmp7)){
				HX_STACK_LINE(489)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp8 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(489)
				::zpp_nape::geom::ZPP_Monotone_obj::edges = tmp8;
			}
			else{
				HX_STACK_LINE(495)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp8 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(495)
				::zpp_nape::geom::ZPP_Monotone_obj::edges = tmp8;
				HX_STACK_LINE(496)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(496)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = tmp9->next;
				HX_STACK_LINE(497)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp10 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(497)
				tmp10->next = null();
			}
			HX_STACK_LINE(502)
			Dynamic();
		}
		HX_STACK_LINE(504)
		Dynamic tmp6 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::edge_lt_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(504)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp7 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(504)
		tmp7->lt = tmp6;
		HX_STACK_LINE(505)
		Dynamic tmp8 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::edge_swap_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(505)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp9 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(505)
		tmp9->swapped = tmp8;
	}
	HX_STACK_LINE(507)
	while((true)){
		HX_STACK_LINE(507)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp6 = ::zpp_nape::geom::ZPP_Monotone_obj::queue;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(507)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp7 = tmp6->head;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(507)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(507)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(507)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(507)
		if ((tmp10)){
			HX_STACK_LINE(507)
			break;
		}
		HX_STACK_LINE(508)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp11 = ::zpp_nape::geom::ZPP_Monotone_obj::queue;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(508)
		::zpp_nape::geom::ZPP_PartitionVertex tmp12 = tmp11->pop_unsafe();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(508)
		::zpp_nape::geom::ZPP_PartitionVertex v = tmp12;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			int _g = v->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(509)
			int tmp13 = _g;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(509)
			switch( (int)(tmp13)){
				case (int)0: {
					HX_STACK_LINE(510)
					v->helper = v;
					HX_STACK_LINE(511)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp14 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(511)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = v;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(511)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp16 = tmp14->insert(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(511)
					v->node = tmp16;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(512)
					::zpp_nape::geom::ZPP_PartitionVertex e = v->prev;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(514)
					bool tmp14 = (e->helper == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(514)
					if ((tmp14)){
						HX_STACK_LINE(514)
						HX_STACK_DO_THROW(HX_HCSTRING("Fatal error (1): Polygon is not weakly-simple and clockwise","\x58","\xc9","\x87","\xa3"));
					}
					HX_STACK_LINE(516)
					int tmp15 = e->helper->type;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(516)
					bool tmp16 = (tmp15 == (int)2);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(516)
					if ((tmp16)){
						HX_STACK_LINE(517)
						::zpp_nape::geom::ZPP_PartitionVertex tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(517)
						::zpp_nape::geom::ZPP_PartitionVertex tmp18 = e->helper;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(517)
						poly->add_diagonal(tmp17,tmp18);
					}
					HX_STACK_LINE(519)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp17 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(519)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp18 = e->node;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(519)
					tmp17->remove_node(tmp18);
					HX_STACK_LINE(521)
					e->helper = null();
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_PartitionVertex tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(523)
					{
						HX_STACK_LINE(524)
						::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(525)
						{
							HX_STACK_LINE(534)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp15 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(534)
							bool tmp16 = tmp15->empty();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(534)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(534)
							if ((tmp17)){
								HX_STACK_LINE(535)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp18 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(535)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = tmp18->parent;		HX_STACK_VAR(set_ite,"set_ite");
								HX_STACK_LINE(536)
								while((true)){
									HX_STACK_LINE(536)
									bool tmp19 = (set_ite->prev != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(536)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(536)
									if ((tmp20)){
										HX_STACK_LINE(536)
										break;
									}
									HX_STACK_LINE(536)
									set_ite = set_ite->prev;
								}
								HX_STACK_LINE(537)
								while((true)){
									HX_STACK_LINE(537)
									bool tmp19 = (set_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(537)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(537)
									if ((tmp20)){
										HX_STACK_LINE(537)
										break;
									}
									HX_STACK_LINE(538)
									::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
									HX_STACK_LINE(539)
									{
										HX_STACK_LINE(540)
										::zpp_nape::geom::ZPP_PartitionVertex tmp21 = elt;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(540)
										::zpp_nape::geom::ZPP_PartitionVertex tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(540)
										bool tmp23 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(540)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(540)
										if ((tmp24)){
											HX_STACK_LINE(541)
											ret = elt;
											HX_STACK_LINE(542)
											break;
										}
									}
									HX_STACK_LINE(545)
									bool tmp21 = (set_ite->next != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(545)
									if ((tmp21)){
										HX_STACK_LINE(546)
										set_ite = set_ite->next;
										HX_STACK_LINE(547)
										while((true)){
											HX_STACK_LINE(547)
											bool tmp22 = (set_ite->prev != null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(547)
											bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(547)
											if ((tmp23)){
												HX_STACK_LINE(547)
												break;
											}
											HX_STACK_LINE(547)
											set_ite = set_ite->prev;
										}
									}
									else{
										HX_STACK_LINE(550)
										while((true)){
											HX_STACK_LINE(550)
											bool tmp22 = (set_ite->parent != null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(550)
											bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(550)
											if ((tmp22)){
												HX_STACK_LINE(550)
												::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp24 = set_ite;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(550)
												::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp25 = set_ite->parent->next;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(550)
												::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(550)
												tmp23 = (tmp24 == tmp26);
											}
											else{
												HX_STACK_LINE(550)
												tmp23 = false;
											}
											HX_STACK_LINE(550)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(550)
											if ((tmp24)){
												HX_STACK_LINE(550)
												break;
											}
											HX_STACK_LINE(550)
											set_ite = set_ite->parent;
										}
										HX_STACK_LINE(551)
										set_ite = set_ite->parent;
									}
								}
							}
						}
						HX_STACK_LINE(556)
						tmp14 = ret;
					}
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_PartitionVertex e = tmp14;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(558)
					bool tmp15 = (e != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(558)
					if ((tmp15)){
						HX_STACK_LINE(560)
						bool tmp16 = (e->helper == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(560)
						if ((tmp16)){
							HX_STACK_LINE(560)
							HX_STACK_DO_THROW(HX_HCSTRING("Fatal error (2): Polygon is not weakly-simple and clockwise","\xb7","\xf8","\x92","\x52"));
						}
						HX_STACK_LINE(562)
						::zpp_nape::geom::ZPP_PartitionVertex tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(562)
						::zpp_nape::geom::ZPP_PartitionVertex tmp18 = e->helper;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(562)
						poly->add_diagonal(tmp17,tmp18);
						HX_STACK_LINE(563)
						e->helper = v;
					}
					HX_STACK_LINE(565)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp16 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(565)
					::zpp_nape::geom::ZPP_PartitionVertex tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(565)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp18 = tmp16->insert(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(565)
					v->node = tmp18;
					HX_STACK_LINE(566)
					v->helper = v;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(567)
					::zpp_nape::geom::ZPP_PartitionVertex e = v->prev;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(569)
					bool tmp14 = (e->helper == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(569)
					if ((tmp14)){
						HX_STACK_LINE(569)
						HX_STACK_DO_THROW(HX_HCSTRING("Fatal error (3): Polygon is not weakly-simple and clockwise","\x16","\x28","\x9e","\x01"));
					}
					HX_STACK_LINE(571)
					int tmp15 = e->helper->type;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(571)
					bool tmp16 = (tmp15 == (int)2);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(571)
					if ((tmp16)){
						HX_STACK_LINE(572)
						::zpp_nape::geom::ZPP_PartitionVertex tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(572)
						::zpp_nape::geom::ZPP_PartitionVertex tmp18 = e->helper;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(572)
						poly->add_diagonal(tmp17,tmp18);
					}
					HX_STACK_LINE(574)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp17 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(574)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp18 = e->node;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(574)
					tmp17->remove_node(tmp18);
					HX_STACK_LINE(576)
					e->helper = null();
					HX_STACK_LINE(578)
					::zpp_nape::geom::ZPP_PartitionVertex tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(579)
						::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(589)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp20 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(589)
							bool tmp21 = tmp20->empty();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(589)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(589)
							if ((tmp22)){
								HX_STACK_LINE(590)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp23 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(590)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = tmp23->parent;		HX_STACK_VAR(set_ite,"set_ite");
								HX_STACK_LINE(591)
								while((true)){
									HX_STACK_LINE(591)
									bool tmp24 = (set_ite->prev != null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(591)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(591)
									if ((tmp25)){
										HX_STACK_LINE(591)
										break;
									}
									HX_STACK_LINE(591)
									set_ite = set_ite->prev;
								}
								HX_STACK_LINE(592)
								while((true)){
									HX_STACK_LINE(592)
									bool tmp24 = (set_ite != null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(592)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(592)
									if ((tmp25)){
										HX_STACK_LINE(592)
										break;
									}
									HX_STACK_LINE(593)
									::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
									HX_STACK_LINE(594)
									{
										HX_STACK_LINE(595)
										::zpp_nape::geom::ZPP_PartitionVertex tmp26 = elt;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(595)
										::zpp_nape::geom::ZPP_PartitionVertex tmp27 = v;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(595)
										bool tmp28 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(595)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(595)
										if ((tmp29)){
											HX_STACK_LINE(596)
											ret = elt;
											HX_STACK_LINE(597)
											break;
										}
									}
									HX_STACK_LINE(600)
									bool tmp26 = (set_ite->next != null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(600)
									if ((tmp26)){
										HX_STACK_LINE(601)
										set_ite = set_ite->next;
										HX_STACK_LINE(602)
										while((true)){
											HX_STACK_LINE(602)
											bool tmp27 = (set_ite->prev != null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(602)
											bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(602)
											if ((tmp28)){
												HX_STACK_LINE(602)
												break;
											}
											HX_STACK_LINE(602)
											set_ite = set_ite->prev;
										}
									}
									else{
										HX_STACK_LINE(605)
										while((true)){
											HX_STACK_LINE(605)
											bool tmp27 = (set_ite->parent != null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(605)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(605)
											if ((tmp27)){
												HX_STACK_LINE(605)
												::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp29 = set_ite;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(605)
												::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp30 = set_ite->parent->next;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(605)
												::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(605)
												tmp28 = (tmp29 == tmp31);
											}
											else{
												HX_STACK_LINE(605)
												tmp28 = false;
											}
											HX_STACK_LINE(605)
											bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(605)
											if ((tmp29)){
												HX_STACK_LINE(605)
												break;
											}
											HX_STACK_LINE(605)
											set_ite = set_ite->parent;
										}
										HX_STACK_LINE(606)
										set_ite = set_ite->parent;
									}
								}
							}
						}
						HX_STACK_LINE(611)
						tmp19 = ret;
					}
					HX_STACK_LINE(578)
					::zpp_nape::geom::ZPP_PartitionVertex e1 = tmp19;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(613)
					bool tmp20 = (e1 != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(613)
					if ((tmp20)){
						HX_STACK_LINE(615)
						bool tmp21 = (e1->helper == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(615)
						if ((tmp21)){
							HX_STACK_LINE(615)
							HX_STACK_DO_THROW(HX_HCSTRING("Fatal error (4): Polygon is not weakly-simple and clockwise","\x75","\x57","\xa9","\xb0"));
						}
						HX_STACK_LINE(617)
						int tmp22 = e1->helper->type;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(617)
						bool tmp23 = (tmp22 == (int)2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(617)
						if ((tmp23)){
							HX_STACK_LINE(618)
							::zpp_nape::geom::ZPP_PartitionVertex tmp24 = v;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(618)
							::zpp_nape::geom::ZPP_PartitionVertex tmp25 = e1->helper;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(618)
							poly->add_diagonal(tmp24,tmp25);
						}
						HX_STACK_LINE(620)
						e1->helper = v;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(622)
					::zpp_nape::geom::ZPP_PartitionVertex pre = v->prev;		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(623)
					::zpp_nape::geom::ZPP_PartitionVertex tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(623)
					bool tmp15 = ::zpp_nape::geom::ZPP_Monotone_obj::left_vertex(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(623)
					if ((tmp15)){
						HX_STACK_LINE(625)
						bool tmp16 = (pre->helper == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(625)
						if ((tmp16)){
							HX_STACK_LINE(625)
							HX_STACK_DO_THROW(HX_HCSTRING("Fatal error (5): Polygon is not weakly-simple and clockwise","\xd4","\x86","\xb4","\x5f"));
						}
						HX_STACK_LINE(627)
						int tmp17 = pre->helper->type;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(627)
						bool tmp18 = (tmp17 == (int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(627)
						if ((tmp18)){
							HX_STACK_LINE(627)
							::zpp_nape::geom::ZPP_PartitionVertex tmp19 = v;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(627)
							::zpp_nape::geom::ZPP_PartitionVertex tmp20 = pre->helper;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(627)
							poly->add_diagonal(tmp19,tmp20);
						}
						HX_STACK_LINE(628)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp19 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(628)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp20 = pre->node;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(628)
						tmp19->remove_node(tmp20);
						HX_STACK_LINE(630)
						pre->helper = null();
						HX_STACK_LINE(632)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp21 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(632)
						::zpp_nape::geom::ZPP_PartitionVertex tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(632)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp23 = tmp21->insert(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(632)
						v->node = tmp23;
						HX_STACK_LINE(633)
						v->helper = v;
					}
					else{
						HX_STACK_LINE(636)
						::zpp_nape::geom::ZPP_PartitionVertex tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(636)
						{
							HX_STACK_LINE(637)
							::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(638)
							{
								HX_STACK_LINE(647)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp17 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(647)
								bool tmp18 = tmp17->empty();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(647)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(647)
								if ((tmp19)){
									HX_STACK_LINE(648)
									::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp20 = ::zpp_nape::geom::ZPP_Monotone_obj::edges;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(648)
									::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = tmp20->parent;		HX_STACK_VAR(set_ite,"set_ite");
									HX_STACK_LINE(649)
									while((true)){
										HX_STACK_LINE(649)
										bool tmp21 = (set_ite->prev != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(649)
										bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(649)
										if ((tmp22)){
											HX_STACK_LINE(649)
											break;
										}
										HX_STACK_LINE(649)
										set_ite = set_ite->prev;
									}
									HX_STACK_LINE(650)
									while((true)){
										HX_STACK_LINE(650)
										bool tmp21 = (set_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(650)
										bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(650)
										if ((tmp22)){
											HX_STACK_LINE(650)
											break;
										}
										HX_STACK_LINE(651)
										::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
										HX_STACK_LINE(652)
										{
											HX_STACK_LINE(653)
											::zpp_nape::geom::ZPP_PartitionVertex tmp23 = elt;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(653)
											::zpp_nape::geom::ZPP_PartitionVertex tmp24 = v;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(653)
											bool tmp25 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(653)
											bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(653)
											if ((tmp26)){
												HX_STACK_LINE(654)
												ret = elt;
												HX_STACK_LINE(655)
												break;
											}
										}
										HX_STACK_LINE(658)
										bool tmp23 = (set_ite->next != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(658)
										if ((tmp23)){
											HX_STACK_LINE(659)
											set_ite = set_ite->next;
											HX_STACK_LINE(660)
											while((true)){
												HX_STACK_LINE(660)
												bool tmp24 = (set_ite->prev != null());		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(660)
												bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(660)
												if ((tmp25)){
													HX_STACK_LINE(660)
													break;
												}
												HX_STACK_LINE(660)
												set_ite = set_ite->prev;
											}
										}
										else{
											HX_STACK_LINE(663)
											while((true)){
												HX_STACK_LINE(663)
												bool tmp24 = (set_ite->parent != null());		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(663)
												bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(663)
												if ((tmp24)){
													HX_STACK_LINE(663)
													::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp26 = set_ite;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(663)
													::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp27 = set_ite->parent->next;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(663)
													::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(663)
													tmp25 = (tmp26 == tmp28);
												}
												else{
													HX_STACK_LINE(663)
													tmp25 = false;
												}
												HX_STACK_LINE(663)
												bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(663)
												if ((tmp26)){
													HX_STACK_LINE(663)
													break;
												}
												HX_STACK_LINE(663)
												set_ite = set_ite->parent;
											}
											HX_STACK_LINE(664)
											set_ite = set_ite->parent;
										}
									}
								}
							}
							HX_STACK_LINE(669)
							tmp16 = ret;
						}
						HX_STACK_LINE(636)
						::zpp_nape::geom::ZPP_PartitionVertex e = tmp16;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(672)
						bool tmp17 = (e == null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(672)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(672)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(672)
						if ((tmp18)){
							HX_STACK_LINE(672)
							tmp19 = (e->helper == null());
						}
						else{
							HX_STACK_LINE(672)
							tmp19 = true;
						}
						HX_STACK_LINE(672)
						if ((tmp19)){
							HX_STACK_LINE(672)
							HX_STACK_DO_THROW(HX_HCSTRING("Fatal error (6): Polygon is not weakly-simple and clockwise","\x33","\xb6","\xbf","\x0e"));
						}
						HX_STACK_LINE(674)
						int tmp20 = e->helper->type;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(674)
						bool tmp21 = (tmp20 == (int)2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(674)
						if ((tmp21)){
							HX_STACK_LINE(675)
							::zpp_nape::geom::ZPP_PartitionVertex tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(675)
							::zpp_nape::geom::ZPP_PartitionVertex tmp23 = e->helper;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(675)
							poly->add_diagonal(tmp22,tmp23);
						}
						HX_STACK_LINE(677)
						e->helper = v;
					}
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(689)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp6 = poly;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(689)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Monotone_obj,decompose,return )


ZPP_Monotone_obj::ZPP_Monotone_obj()
{
}

bool ZPP_Monotone_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"below") ) { outValue = below_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"above") ) { outValue = above_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue; return true;  }
		if (HX_FIELD_EQ(inName,"edges") ) { outValue = edges; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bisector") ) { outValue = bisector_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getShared") ) { outValue = getShared_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"decompose") ) { outValue = decompose_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMonotone") ) { outValue = isMonotone_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"left_vertex") ) { outValue = left_vertex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sharedPPoly") ) { outValue = sharedPPoly; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionedPoly*/ ,(void *) &ZPP_Monotone_obj::sharedPPoly,HX_HCSTRING("sharedPPoly","\xf7","\x7d","\x06","\x11")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_PartitionVertex*/ ,(void *) &ZPP_Monotone_obj::queue,HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(void *) &ZPP_Monotone_obj::edges,HX_HCSTRING("edges","\x96","\x6d","\xe0","\x69")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Monotone_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Monotone_obj::sharedPPoly,"sharedPPoly");
	HX_MARK_MEMBER_NAME(ZPP_Monotone_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(ZPP_Monotone_obj::edges,"edges");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Monotone_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Monotone_obj::sharedPPoly,"sharedPPoly");
	HX_VISIT_MEMBER_NAME(ZPP_Monotone_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(ZPP_Monotone_obj::edges,"edges");
};

#endif

hx::Class ZPP_Monotone_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bisector","\xad","\x00","\xe9","\x57"),
	HX_HCSTRING("below","\xb1","\xba","\x59","\xb0"),
	HX_HCSTRING("above","\x1d","\xcf","\xf9","\x1a"),
	HX_HCSTRING("left_vertex","\xdc","\x03","\x01","\x42"),
	HX_HCSTRING("isMonotone","\x1f","\x96","\xb5","\x0e"),
	HX_HCSTRING("sharedPPoly","\xf7","\x7d","\x06","\x11"),
	HX_HCSTRING("getShared","\xdb","\xe7","\x81","\x99"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("edges","\x96","\x6d","\xe0","\x69"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	::String(null()) };

void ZPP_Monotone_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Monotone","\x4b","\x69","\xc1","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Monotone_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Monotone_obj >;
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

void ZPP_Monotone_obj::__boot()
{
	queue= null();
	edges= null();
}

} // end namespace zpp_nape
} // end namespace geom
