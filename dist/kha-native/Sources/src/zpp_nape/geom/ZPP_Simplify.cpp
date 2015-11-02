#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simplify
#include <zpp_nape/geom/ZPP_Simplify.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Simplify_obj::__construct()
{
	return null();
}

//ZPP_Simplify_obj::~ZPP_Simplify_obj() { }

Dynamic ZPP_Simplify_obj::__CreateEmpty() { return  new ZPP_Simplify_obj; }
hx::ObjectPtr< ZPP_Simplify_obj > ZPP_Simplify_obj::__new()
{  hx::ObjectPtr< ZPP_Simplify_obj > _result_ = new ZPP_Simplify_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Simplify_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Simplify_obj > _result_ = new ZPP_Simplify_obj();
	_result_->__construct();
	return _result_;}

Float ZPP_Simplify_obj::lessval( ::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simplify","lessval",0xdccd3df9,"zpp_nape.geom.ZPP_Simplify.lessval","zpp_nape/geom/Simplify.hx",322,0xe5fbc624)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(323)
	Float tmp = (a->x - b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	Float tmp1 = (a->y - b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,lessval,return )

bool ZPP_Simplify_obj::less( ::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simplify","less",0xc394c1e8,"zpp_nape.geom.ZPP_Simplify.less","zpp_nape/geom/Simplify.hx",326,0xe5fbc624)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(327)
	Float tmp = (a->x - b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	Float tmp1 = (a->y - b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	bool tmp3 = (tmp2 < ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,less,return )

Float ZPP_Simplify_obj::distance( ::zpp_nape::geom::ZPP_SimplifyV v,::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simplify","distance",0xb91a3544,"zpp_nape.geom.ZPP_Simplify.distance","zpp_nape/geom/Simplify.hx",329,0xe5fbc624)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(330)
	Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(331)
	Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(332)
	{
		HX_STACK_LINE(333)
		Float tmp = (b->x - a->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		nx = tmp;
		HX_STACK_LINE(334)
		Float tmp1 = (b->y - a->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		ny = tmp1;
	}
	HX_STACK_LINE(336)
	Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(337)
	Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(339)
		Float tmp = (v->x - a->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		cx = tmp;
		HX_STACK_LINE(340)
		Float tmp1 = (v->y - a->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		cy = tmp1;
	}
	HX_STACK_LINE(342)
	Float tmp = (nx * nx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	Float tmp1 = (ny * ny);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	Float den = tmp2;		HX_STACK_VAR(den,"den");
	HX_STACK_LINE(343)
	bool tmp3 = (den == ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(343)
	if ((tmp3)){
		HX_STACK_LINE(343)
		Float tmp4 = (cx * cx);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(343)
		Float tmp5 = (cy * cy);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(343)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(343)
		return tmp6;
	}
	else{
		HX_STACK_LINE(345)
		Float tmp4 = (cx * nx);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(345)
		Float tmp5 = (cy * ny);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(345)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		Float tmp7 = (nx * nx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(345)
		Float tmp8 = (ny * ny);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(345)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		Float tmp10 = (Float(tmp6) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(345)
		Float t = tmp10;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(346)
		bool tmp11 = (t <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(346)
		if ((tmp11)){
			HX_STACK_LINE(346)
			Float tmp12 = (cx * cx);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(346)
			Float tmp13 = (cy * cy);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(346)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(346)
			return tmp14;
		}
		else{
			HX_STACK_LINE(347)
			bool tmp12 = (t >= (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(347)
			if ((tmp12)){
				HX_STACK_LINE(347)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(347)
					Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(347)
					{
						HX_STACK_LINE(347)
						Float tmp14 = (v->x - b->x);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(347)
						dx = tmp14;
						HX_STACK_LINE(347)
						Float tmp15 = (v->y - b->y);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(347)
						dy = tmp15;
					}
					HX_STACK_LINE(347)
					Float tmp14 = (dx * dx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(347)
					Float tmp15 = (dy * dy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(347)
					tmp13 = (tmp14 + tmp15);
				}
				HX_STACK_LINE(347)
				return tmp13;
			}
			else{
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(350)
					Float t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(359)
					Float tmp13 = (nx * t1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(359)
					hx::SubEq(cx,tmp13);
					HX_STACK_LINE(360)
					Float tmp14 = (ny * t1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(360)
					hx::SubEq(cy,tmp14);
				}
				HX_STACK_LINE(362)
				Float tmp13 = (cx * cx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(362)
				Float tmp14 = (cy * cy);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(362)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(362)
				return tmp15;
			}
		}
	}
	HX_STACK_LINE(343)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Simplify_obj,distance,return )

::zpp_nape::util::ZNPList_ZPP_SimplifyP ZPP_Simplify_obj::stack;

::zpp_nape::geom::ZPP_GeomVert ZPP_Simplify_obj::simplify( ::zpp_nape::geom::ZPP_GeomVert P,Float epsilon){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simplify","simplify",0x6691f918,"zpp_nape.geom.ZPP_Simplify.simplify","zpp_nape/geom/Simplify.hx",367,0xe5fbc624)
	HX_STACK_ARG(P,"P")
	HX_STACK_ARG(epsilon,"epsilon")
	HX_STACK_LINE(368)
	::zpp_nape::geom::ZPP_SimplifyV ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(369)
	::zpp_nape::geom::ZPP_SimplifyV min = null();		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(370)
	::zpp_nape::geom::ZPP_SimplifyV max = null();		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(371)
	hx::MultEq(epsilon,epsilon);
	HX_STACK_LINE(372)
	::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	if ((tmp1)){
		HX_STACK_LINE(373)
		::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp2 = ::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		::zpp_nape::geom::ZPP_Simplify_obj::stack = tmp2;
	}
	HX_STACK_LINE(375)
	::zpp_nape::geom::ZPP_SimplifyV pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(376)
	::zpp_nape::geom::ZPP_SimplifyV fst = null();		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(377)
	::zpp_nape::geom::ZPP_GeomVert cur = P;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(378)
	while((true)){
		HX_STACK_LINE(379)
		::zpp_nape::geom::ZPP_SimplifyV tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::zpp_nape::geom::ZPP_SimplifyV ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				::zpp_nape::geom::ZPP_SimplifyV tmp3 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(379)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(379)
				if ((tmp4)){
					HX_STACK_LINE(379)
					::zpp_nape::geom::ZPP_SimplifyV tmp5 = ::zpp_nape::geom::ZPP_SimplifyV_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(379)
					ret1 = tmp5;
				}
				else{
					HX_STACK_LINE(379)
					::zpp_nape::geom::ZPP_SimplifyV tmp5 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(379)
					ret1 = tmp5;
					HX_STACK_LINE(379)
					::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(379)
					ret1->next = null();
				}
				HX_STACK_LINE(379)
				Dynamic();
			}
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				ret1->x = cur->x;
				HX_STACK_LINE(379)
				ret1->y = cur->y;
				HX_STACK_LINE(379)
				{
				}
			}
			HX_STACK_LINE(379)
			ret1->flag = false;
			HX_STACK_LINE(379)
			tmp2 = ret1;
		}
		HX_STACK_LINE(379)
		::zpp_nape::geom::ZPP_SimplifyV v = tmp2;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(380)
		v->forced = cur->forced;
		HX_STACK_LINE(381)
		bool tmp3 = v->forced;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		if ((tmp3)){
			HX_STACK_LINE(382)
			v->flag = true;
			HX_STACK_LINE(383)
			bool tmp4 = (pre != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			if ((tmp4)){
				HX_STACK_LINE(383)
				::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp5 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				::zpp_nape::geom::ZPP_SimplifyP tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(383)
					{
						HX_STACK_LINE(383)
						::zpp_nape::geom::ZPP_SimplifyP tmp7 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(383)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(383)
						if ((tmp8)){
							HX_STACK_LINE(383)
							::zpp_nape::geom::ZPP_SimplifyP tmp9 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(383)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(383)
							::zpp_nape::geom::ZPP_SimplifyP tmp9 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(383)
							ret1 = tmp9;
							HX_STACK_LINE(383)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(383)
							ret1->next = null();
						}
						HX_STACK_LINE(383)
						Dynamic();
					}
					HX_STACK_LINE(383)
					ret1->min = pre;
					HX_STACK_LINE(383)
					ret1->max = v;
					HX_STACK_LINE(383)
					tmp6 = ret1;
				}
				HX_STACK_LINE(383)
				tmp5->add(tmp6);
			}
			else{
				HX_STACK_LINE(384)
				fst = v;
			}
			HX_STACK_LINE(385)
			pre = v;
		}
		HX_STACK_LINE(387)
		::zpp_nape::geom::ZPP_SimplifyV tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(388)
			::zpp_nape::geom::ZPP_SimplifyV obj = v;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(389)
			bool tmp5 = (ret == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			if ((tmp5)){
				HX_STACK_LINE(389)
				::zpp_nape::geom::ZPP_SimplifyV tmp6 = obj->next = obj;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(389)
				::zpp_nape::geom::ZPP_SimplifyV tmp7 = obj->prev = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(389)
				ret = tmp7;
			}
			else{
				HX_STACK_LINE(391)
				obj->prev = ret;
				HX_STACK_LINE(392)
				obj->next = ret->next;
				HX_STACK_LINE(393)
				ret->next->prev = obj;
				HX_STACK_LINE(394)
				ret->next = obj;
			}
			HX_STACK_LINE(396)
			tmp4 = obj;
		}
		HX_STACK_LINE(387)
		ret = tmp4;
		HX_STACK_LINE(398)
		bool tmp5 = (min == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(398)
		if ((tmp5)){
			HX_STACK_LINE(399)
			min = ret;
			HX_STACK_LINE(400)
			max = ret;
		}
		else{
			HX_STACK_LINE(403)
			Float tmp6 = (ret->x - min->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(403)
			Float tmp7 = (ret->y - min->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(403)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(403)
			bool tmp9 = (tmp8 < ((Float)0.0));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(403)
			if ((tmp9)){
				HX_STACK_LINE(403)
				min = ret;
			}
			HX_STACK_LINE(404)
			Float tmp10 = (max->x - ret->x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(404)
			Float tmp11 = (max->y - ret->y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(404)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(404)
			bool tmp13 = (tmp12 < ((Float)0.0));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(404)
			if ((tmp13)){
				HX_STACK_LINE(404)
				max = ret;
			}
		}
		HX_STACK_LINE(406)
		cur = cur->next;
		HX_STACK_LINE(408)
		bool tmp6 = (cur != P);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(408)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(378)
		if ((tmp7)){
			HX_STACK_LINE(378)
			break;
		}
	}
	HX_STACK_LINE(409)
	::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp2 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(409)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = tmp2->head;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(409)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(409)
	if ((tmp4)){
		HX_STACK_LINE(410)
		bool tmp5 = (fst == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(410)
		if ((tmp5)){
			HX_STACK_LINE(411)
			bool tmp6 = max->flag = true;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(411)
			min->flag = tmp6;
			HX_STACK_LINE(412)
			::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp7 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(412)
			::zpp_nape::geom::ZPP_SimplifyP tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(412)
				::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					::zpp_nape::geom::ZPP_SimplifyP tmp9 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(412)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(412)
					if ((tmp10)){
						HX_STACK_LINE(412)
						::zpp_nape::geom::ZPP_SimplifyP tmp11 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(412)
						ret1 = tmp11;
					}
					else{
						HX_STACK_LINE(412)
						::zpp_nape::geom::ZPP_SimplifyP tmp11 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(412)
						ret1 = tmp11;
						HX_STACK_LINE(412)
						::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(412)
						ret1->next = null();
					}
					HX_STACK_LINE(412)
					Dynamic();
				}
				HX_STACK_LINE(412)
				ret1->min = min;
				HX_STACK_LINE(412)
				ret1->max = max;
				HX_STACK_LINE(412)
				tmp8 = ret1;
			}
			HX_STACK_LINE(412)
			tmp7->add(tmp8);
			HX_STACK_LINE(413)
			::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp9 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(413)
			::zpp_nape::geom::ZPP_SimplifyP tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(413)
				{
					HX_STACK_LINE(413)
					::zpp_nape::geom::ZPP_SimplifyP tmp11 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(413)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(413)
					if ((tmp12)){
						HX_STACK_LINE(413)
						::zpp_nape::geom::ZPP_SimplifyP tmp13 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(413)
						ret1 = tmp13;
					}
					else{
						HX_STACK_LINE(413)
						::zpp_nape::geom::ZPP_SimplifyP tmp13 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(413)
						ret1 = tmp13;
						HX_STACK_LINE(413)
						::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(413)
						ret1->next = null();
					}
					HX_STACK_LINE(413)
					Dynamic();
				}
				HX_STACK_LINE(413)
				ret1->min = max;
				HX_STACK_LINE(413)
				ret1->max = min;
				HX_STACK_LINE(413)
				tmp10 = ret1;
			}
			HX_STACK_LINE(413)
			tmp9->add(tmp10);
		}
		else{
			HX_STACK_LINE(416)
			Float tmp6 = (min->x - fst->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			Float tmp7 = (min->y - fst->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			Float d1 = tmp8;		HX_STACK_VAR(d1,"d1");
			HX_STACK_LINE(417)
			bool tmp9 = (d1 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(417)
			if ((tmp9)){
				HX_STACK_LINE(417)
				Float tmp10 = d1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(417)
				Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(417)
				d1 = tmp11;
			}
			HX_STACK_LINE(418)
			Float tmp10 = (max->x - fst->x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(418)
			Float tmp11 = (max->y - fst->y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(418)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(418)
			Float d2 = tmp12;		HX_STACK_VAR(d2,"d2");
			HX_STACK_LINE(419)
			bool tmp13 = (d2 < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(419)
			if ((tmp13)){
				HX_STACK_LINE(419)
				Float tmp14 = d2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(419)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(419)
				d2 = tmp15;
			}
			HX_STACK_LINE(420)
			bool tmp14 = (d1 > d2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(420)
			if ((tmp14)){
				HX_STACK_LINE(421)
				bool tmp15 = fst->flag = true;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(421)
				min->flag = tmp15;
				HX_STACK_LINE(422)
				::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp16 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(422)
				::zpp_nape::geom::ZPP_SimplifyP tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_SimplifyP tmp18 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(422)
						bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(422)
						if ((tmp19)){
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_SimplifyP tmp20 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(422)
							ret1 = tmp20;
						}
						else{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_SimplifyP tmp20 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(422)
							ret1 = tmp20;
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(422)
							ret1->next = null();
						}
						HX_STACK_LINE(422)
						Dynamic();
					}
					HX_STACK_LINE(422)
					ret1->min = min;
					HX_STACK_LINE(422)
					ret1->max = fst;
					HX_STACK_LINE(422)
					tmp17 = ret1;
				}
				HX_STACK_LINE(422)
				tmp16->add(tmp17);
				HX_STACK_LINE(423)
				::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp18 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(423)
				::zpp_nape::geom::ZPP_SimplifyP tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(423)
				{
					HX_STACK_LINE(423)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(423)
					{
						HX_STACK_LINE(423)
						::zpp_nape::geom::ZPP_SimplifyP tmp20 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(423)
						bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(423)
						if ((tmp21)){
							HX_STACK_LINE(423)
							::zpp_nape::geom::ZPP_SimplifyP tmp22 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(423)
							ret1 = tmp22;
						}
						else{
							HX_STACK_LINE(423)
							::zpp_nape::geom::ZPP_SimplifyP tmp22 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(423)
							ret1 = tmp22;
							HX_STACK_LINE(423)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(423)
							ret1->next = null();
						}
						HX_STACK_LINE(423)
						Dynamic();
					}
					HX_STACK_LINE(423)
					ret1->min = fst;
					HX_STACK_LINE(423)
					ret1->max = min;
					HX_STACK_LINE(423)
					tmp19 = ret1;
				}
				HX_STACK_LINE(423)
				tmp18->add(tmp19);
			}
			else{
				HX_STACK_LINE(426)
				bool tmp15 = fst->flag = true;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(426)
				max->flag = tmp15;
				HX_STACK_LINE(427)
				::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp16 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(427)
				::zpp_nape::geom::ZPP_SimplifyP tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(427)
					{
						HX_STACK_LINE(427)
						::zpp_nape::geom::ZPP_SimplifyP tmp18 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(427)
						bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(427)
						if ((tmp19)){
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_SimplifyP tmp20 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(427)
							ret1 = tmp20;
						}
						else{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_SimplifyP tmp20 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(427)
							ret1 = tmp20;
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(427)
							ret1->next = null();
						}
						HX_STACK_LINE(427)
						Dynamic();
					}
					HX_STACK_LINE(427)
					ret1->min = max;
					HX_STACK_LINE(427)
					ret1->max = fst;
					HX_STACK_LINE(427)
					tmp17 = ret1;
				}
				HX_STACK_LINE(427)
				tmp16->add(tmp17);
				HX_STACK_LINE(428)
				::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp18 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(428)
				::zpp_nape::geom::ZPP_SimplifyP tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::zpp_nape::geom::ZPP_SimplifyP tmp20 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(428)
						bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(428)
						if ((tmp21)){
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_SimplifyP tmp22 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(428)
							ret1 = tmp22;
						}
						else{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_SimplifyP tmp22 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(428)
							ret1 = tmp22;
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(428)
							ret1->next = null();
						}
						HX_STACK_LINE(428)
						Dynamic();
					}
					HX_STACK_LINE(428)
					ret1->min = fst;
					HX_STACK_LINE(428)
					ret1->max = max;
					HX_STACK_LINE(428)
					tmp19 = ret1;
				}
				HX_STACK_LINE(428)
				tmp18->add(tmp19);
			}
		}
	}
	else{
		HX_STACK_LINE(432)
		::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp5 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_SimplifyP tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(432)
		{
			HX_STACK_LINE(432)
			::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				::zpp_nape::geom::ZPP_SimplifyP tmp7 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(432)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(432)
				if ((tmp8)){
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_SimplifyP tmp9 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(432)
					ret1 = tmp9;
				}
				else{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_SimplifyP tmp9 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(432)
					ret1 = tmp9;
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(432)
					ret1->next = null();
				}
				HX_STACK_LINE(432)
				Dynamic();
			}
			HX_STACK_LINE(432)
			ret1->min = pre;
			HX_STACK_LINE(432)
			ret1->max = fst;
			HX_STACK_LINE(432)
			tmp6 = ret1;
		}
		HX_STACK_LINE(432)
		tmp5->add(tmp6);
	}
	HX_STACK_LINE(433)
	while((true)){
		HX_STACK_LINE(433)
		::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp5 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(433)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp6 = tmp5->head;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(433)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(433)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(433)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(433)
		if ((tmp9)){
			HX_STACK_LINE(433)
			break;
		}
		HX_STACK_LINE(434)
		::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp10 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(434)
		::zpp_nape::geom::ZPP_SimplifyP tmp11 = tmp10->pop_unsafe();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(434)
		::zpp_nape::geom::ZPP_SimplifyP cur1 = tmp11;		HX_STACK_VAR(cur1,"cur1");
		HX_STACK_LINE(435)
		::zpp_nape::geom::ZPP_SimplifyV min1 = cur1->min;		HX_STACK_VAR(min1,"min1");
		HX_STACK_LINE(436)
		::zpp_nape::geom::ZPP_SimplifyV max1 = cur1->max;		HX_STACK_VAR(max1,"max1");
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(438)
			::zpp_nape::geom::ZPP_SimplifyP o = cur1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				::zpp_nape::geom::ZPP_SimplifyV tmp12 = o->max = null();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(447)
				o->min = tmp12;
			}
			HX_STACK_LINE(448)
			::zpp_nape::geom::ZPP_SimplifyP tmp12 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(448)
			o->next = tmp12;
			HX_STACK_LINE(449)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(454)
		Float dmax = epsilon;		HX_STACK_VAR(dmax,"dmax");
		HX_STACK_LINE(455)
		::zpp_nape::geom::ZPP_SimplifyV dv = null();		HX_STACK_VAR(dv,"dv");
		HX_STACK_LINE(456)
		::zpp_nape::geom::ZPP_SimplifyV ite = min1->next;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(457)
		while((true)){
			HX_STACK_LINE(457)
			bool tmp12 = (ite != max1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(457)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(457)
			if ((tmp13)){
				HX_STACK_LINE(457)
				break;
			}
			HX_STACK_LINE(458)
			::zpp_nape::geom::ZPP_SimplifyV tmp14 = ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(458)
			::zpp_nape::geom::ZPP_SimplifyV tmp15 = min1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(458)
			::zpp_nape::geom::ZPP_SimplifyV tmp16 = max1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(458)
			Float tmp17 = ::zpp_nape::geom::ZPP_Simplify_obj::distance(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(458)
			Float dist = tmp17;		HX_STACK_VAR(dist,"dist");
			HX_STACK_LINE(459)
			bool tmp18 = (dist > dmax);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(459)
			if ((tmp18)){
				HX_STACK_LINE(460)
				dmax = dist;
				HX_STACK_LINE(461)
				dv = ite;
			}
			HX_STACK_LINE(463)
			ite = ite->next;
		}
		HX_STACK_LINE(465)
		bool tmp12 = (dv != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(465)
		if ((tmp12)){
			HX_STACK_LINE(466)
			dv->flag = true;
			HX_STACK_LINE(467)
			::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp13 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(467)
			::zpp_nape::geom::ZPP_SimplifyP tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(467)
				{
					HX_STACK_LINE(467)
					::zpp_nape::geom::ZPP_SimplifyP tmp15 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(467)
					bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(467)
					if ((tmp16)){
						HX_STACK_LINE(467)
						::zpp_nape::geom::ZPP_SimplifyP tmp17 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(467)
						ret1 = tmp17;
					}
					else{
						HX_STACK_LINE(467)
						::zpp_nape::geom::ZPP_SimplifyP tmp17 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(467)
						ret1 = tmp17;
						HX_STACK_LINE(467)
						::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(467)
						ret1->next = null();
					}
					HX_STACK_LINE(467)
					Dynamic();
				}
				HX_STACK_LINE(467)
				ret1->min = min1;
				HX_STACK_LINE(467)
				ret1->max = dv;
				HX_STACK_LINE(467)
				tmp14 = ret1;
			}
			HX_STACK_LINE(467)
			tmp13->add(tmp14);
			HX_STACK_LINE(468)
			::zpp_nape::util::ZNPList_ZPP_SimplifyP tmp15 = ::zpp_nape::geom::ZPP_Simplify_obj::stack;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(468)
			::zpp_nape::geom::ZPP_SimplifyP tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					::zpp_nape::geom::ZPP_SimplifyP tmp17 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(468)
					bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(468)
					if ((tmp18)){
						HX_STACK_LINE(468)
						::zpp_nape::geom::ZPP_SimplifyP tmp19 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(468)
						ret1 = tmp19;
					}
					else{
						HX_STACK_LINE(468)
						::zpp_nape::geom::ZPP_SimplifyP tmp19 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(468)
						ret1 = tmp19;
						HX_STACK_LINE(468)
						::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(468)
						ret1->next = null();
					}
					HX_STACK_LINE(468)
					Dynamic();
				}
				HX_STACK_LINE(468)
				ret1->min = dv;
				HX_STACK_LINE(468)
				ret1->max = max1;
				HX_STACK_LINE(468)
				tmp16 = ret1;
			}
			HX_STACK_LINE(468)
			tmp15->add(tmp16);
		}
	}
	HX_STACK_LINE(471)
	::zpp_nape::geom::ZPP_GeomVert retp = null();		HX_STACK_VAR(retp,"retp");
	HX_STACK_LINE(472)
	while((true)){
		HX_STACK_LINE(472)
		bool tmp5 = (ret != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(472)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(472)
		if ((tmp6)){
			HX_STACK_LINE(472)
			break;
		}
		HX_STACK_LINE(473)
		bool tmp7 = ret->flag;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(473)
		if ((tmp7)){
			HX_STACK_LINE(474)
			::zpp_nape::geom::ZPP_GeomVert tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_GeomVert tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(475)
				{
					HX_STACK_LINE(475)
					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						::zpp_nape::geom::ZPP_GeomVert tmp10 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(475)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(475)
						if ((tmp11)){
							HX_STACK_LINE(475)
							::zpp_nape::geom::ZPP_GeomVert tmp12 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(475)
							ret1 = tmp12;
						}
						else{
							HX_STACK_LINE(475)
							::zpp_nape::geom::ZPP_GeomVert tmp12 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(475)
							ret1 = tmp12;
							HX_STACK_LINE(475)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(475)
							ret1->next = null();
						}
						HX_STACK_LINE(475)
						ret1->forced = false;
					}
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						ret1->x = ret->x;
						HX_STACK_LINE(475)
						ret1->y = ret->y;
						HX_STACK_LINE(475)
						{
						}
					}
					HX_STACK_LINE(475)
					tmp9 = ret1;
				}
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_GeomVert obj = tmp9;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(476)
				bool tmp10 = (retp == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(476)
				if ((tmp10)){
					HX_STACK_LINE(476)
					::zpp_nape::geom::ZPP_GeomVert tmp11 = obj->next = obj;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(476)
					::zpp_nape::geom::ZPP_GeomVert tmp12 = obj->prev = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(476)
					retp = tmp12;
				}
				else{
					HX_STACK_LINE(478)
					obj->prev = retp;
					HX_STACK_LINE(479)
					obj->next = retp->next;
					HX_STACK_LINE(480)
					retp->next->prev = obj;
					HX_STACK_LINE(481)
					retp->next = obj;
				}
				HX_STACK_LINE(483)
				tmp8 = obj;
			}
			HX_STACK_LINE(474)
			retp = tmp8;
			HX_STACK_LINE(485)
			retp->forced = ret->forced;
		}
		HX_STACK_LINE(487)
		::zpp_nape::geom::ZPP_SimplifyV tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(496)
			bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(496)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(496)
			if ((tmp9)){
				HX_STACK_LINE(496)
				tmp10 = (ret->prev == ret);
			}
			else{
				HX_STACK_LINE(496)
				tmp10 = false;
			}
			HX_STACK_LINE(496)
			if ((tmp10)){
				HX_STACK_LINE(497)
				::zpp_nape::geom::ZPP_SimplifyV tmp11 = ret->prev = null();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(497)
				ret->next = tmp11;
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(499)
					::zpp_nape::geom::ZPP_SimplifyV o = ret;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(509)
					::zpp_nape::geom::ZPP_SimplifyV tmp12 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(509)
					o->next = tmp12;
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = o;
				}
				HX_STACK_LINE(515)
				tmp8 = ret = null();
			}
			else{
				HX_STACK_LINE(518)
				::zpp_nape::geom::ZPP_SimplifyV retnodes = ret->next;		HX_STACK_VAR(retnodes,"retnodes");
				HX_STACK_LINE(519)
				ret->prev->next = ret->next;
				HX_STACK_LINE(520)
				ret->next->prev = ret->prev;
				HX_STACK_LINE(521)
				::zpp_nape::geom::ZPP_SimplifyV tmp11 = ret->prev = null();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(521)
				ret->next = tmp11;
				HX_STACK_LINE(522)
				{
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_SimplifyV o = ret;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(533)
					::zpp_nape::geom::ZPP_SimplifyV tmp12 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(533)
					o->next = tmp12;
					HX_STACK_LINE(534)
					::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = o;
				}
				HX_STACK_LINE(539)
				ret = null();
				HX_STACK_LINE(540)
				tmp8 = retnodes;
			}
		}
		HX_STACK_LINE(487)
		ret = tmp8;
	}
	HX_STACK_LINE(544)
	::zpp_nape::geom::ZPP_GeomVert tmp5 = retp;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(544)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,simplify,return )


ZPP_Simplify_obj::ZPP_Simplify_obj()
{
}

bool ZPP_Simplify_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"less") ) { outValue = less_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { outValue = stack; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lessval") ) { outValue = lessval_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"simplify") ) { outValue = simplify_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_SimplifyP*/ ,(void *) &ZPP_Simplify_obj::stack,HX_HCSTRING("stack","\x48","\x67","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Simplify_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Simplify_obj::stack,"stack");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Simplify_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Simplify_obj::stack,"stack");
};

#endif

hx::Class ZPP_Simplify_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lessval","\x28","\xa9","\x8b","\x70"),
	HX_HCSTRING("less","\x59","\x13","\xb0","\x47"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"),
	HX_HCSTRING("simplify","\x09","\x57","\x71","\x19"),
	::String(null()) };

void ZPP_Simplify_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Simplify","\x3f","\x3c","\x2c","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Simplify_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Simplify_obj >;
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

void ZPP_Simplify_obj::__boot()
{
	stack= null();
}

} // end namespace zpp_nape
} // end namespace geom
