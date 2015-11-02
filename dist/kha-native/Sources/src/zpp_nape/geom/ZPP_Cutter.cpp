#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Cutter
#include <zpp_nape/geom/ZPP_Cutter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutInt
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutVert
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Cutter_obj::__construct()
{
	return null();
}

//ZPP_Cutter_obj::~ZPP_Cutter_obj() { }

Dynamic ZPP_Cutter_obj::__CreateEmpty() { return  new ZPP_Cutter_obj; }
hx::ObjectPtr< ZPP_Cutter_obj > ZPP_Cutter_obj::__new()
{  hx::ObjectPtr< ZPP_Cutter_obj > _result_ = new ZPP_Cutter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Cutter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Cutter_obj > _result_ = new ZPP_Cutter_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPList_ZPP_CutInt ZPP_Cutter_obj::ints;

::zpp_nape::util::ZNPList_ZPP_CutVert ZPP_Cutter_obj::paths;

::nape::geom::GeomPolyList ZPP_Cutter_obj::run( ::zpp_nape::geom::ZPP_GeomVert P,::nape::geom::Vec2 _start,::nape::geom::Vec2 _end,bool bstart,bool bend,::nape::geom::GeomPolyList output){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Cutter","run",0x3e5647b2,"zpp_nape.geom.ZPP_Cutter.run","zpp_nape/geom/Cutter.hx",324,0x9f85878e)
	HX_STACK_ARG(P,"P")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_end,"_end")
	HX_STACK_ARG(bstart,"bstart")
	HX_STACK_ARG(bend,"bend")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(325)
	Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(326)
	Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(327)
	{
		HX_STACK_LINE(328)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				bool tmp1 = (_start != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(328)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(328)
				if ((tmp1)){
					HX_STACK_LINE(328)
					tmp2 = _start->zpp_disp;
				}
				else{
					HX_STACK_LINE(328)
					tmp2 = false;
				}
				HX_STACK_LINE(328)
				if ((tmp2)){
					HX_STACK_LINE(328)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(328)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(328)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				::zpp_nape::geom::ZPP_Vec2 _this = _start->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(328)
				bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(328)
				if ((tmp1)){
					HX_STACK_LINE(328)
					_this->_validate();
				}
			}
			HX_STACK_LINE(328)
			tmp = _start->zpp_inner->x;
		}
		HX_STACK_LINE(328)
		px = tmp;
		HX_STACK_LINE(329)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				bool tmp2 = (_start != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(329)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(329)
				if ((tmp2)){
					HX_STACK_LINE(329)
					tmp3 = _start->zpp_disp;
				}
				else{
					HX_STACK_LINE(329)
					tmp3 = false;
				}
				HX_STACK_LINE(329)
				if ((tmp3)){
					HX_STACK_LINE(329)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(329)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(329)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::zpp_nape::geom::ZPP_Vec2 _this = _start->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(329)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(329)
				if ((tmp2)){
					HX_STACK_LINE(329)
					_this->_validate();
				}
			}
			HX_STACK_LINE(329)
			tmp1 = _start->zpp_inner->y;
		}
		HX_STACK_LINE(329)
		py = tmp1;
		HX_STACK_LINE(338)
		{
		}
	}
	HX_STACK_LINE(347)
	Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(348)
	Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(350)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				bool tmp1 = (_end != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(350)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(350)
				if ((tmp1)){
					HX_STACK_LINE(350)
					tmp2 = _end->zpp_disp;
				}
				else{
					HX_STACK_LINE(350)
					tmp2 = false;
				}
				HX_STACK_LINE(350)
				if ((tmp2)){
					HX_STACK_LINE(350)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(350)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(350)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				::zpp_nape::geom::ZPP_Vec2 _this = _end->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(350)
				bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(350)
				if ((tmp1)){
					HX_STACK_LINE(350)
					_this->_validate();
				}
			}
			HX_STACK_LINE(350)
			tmp = _end->zpp_inner->x;
		}
		HX_STACK_LINE(350)
		Float tmp1 = px;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		dx = tmp2;
		HX_STACK_LINE(351)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				bool tmp4 = (_end != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(351)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(351)
				if ((tmp4)){
					HX_STACK_LINE(351)
					tmp5 = _end->zpp_disp;
				}
				else{
					HX_STACK_LINE(351)
					tmp5 = false;
				}
				HX_STACK_LINE(351)
				if ((tmp5)){
					HX_STACK_LINE(351)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(351)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(351)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				::zpp_nape::geom::ZPP_Vec2 _this = _end->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(351)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(351)
				if ((tmp4)){
					HX_STACK_LINE(351)
					_this->_validate();
				}
			}
			HX_STACK_LINE(351)
			tmp3 = _end->zpp_inner->y;
		}
		HX_STACK_LINE(351)
		Float tmp4 = py;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(351)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		dy = tmp5;
	}
	HX_STACK_LINE(353)
	bool tmp = bstart;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(353)
	if ((tmp)){
		HX_STACK_LINE(353)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(353)
		tmp1 = ::Math_obj::NEGATIVE_INFINITY;
	}
	HX_STACK_LINE(353)
	Float min = tmp1;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(354)
	bool tmp2 = bend;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(354)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(354)
	if ((tmp2)){
		HX_STACK_LINE(354)
		tmp3 = (int)1;
	}
	else{
		HX_STACK_LINE(354)
		tmp3 = ::Math_obj::POSITIVE_INFINITY;
	}
	HX_STACK_LINE(354)
	Float max = tmp3;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(355)
	Float tmp4 = (py * dx);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(355)
	Float tmp5 = (px * dy);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(355)
	Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(355)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(355)
	Float crx = tmp7;		HX_STACK_VAR(crx,"crx");
	HX_STACK_LINE(356)
	::zpp_nape::geom::ZPP_CutVert verts = null();		HX_STACK_VAR(verts,"verts");
	HX_STACK_LINE(357)
	bool clashes = false;		HX_STACK_VAR(clashes,"clashes");
	HX_STACK_LINE(358)
	::zpp_nape::geom::ZPP_GeomVert p = P;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(359)
	while((true)){
		HX_STACK_LINE(360)
		::zpp_nape::geom::ZPP_CutVert c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(362)
			::zpp_nape::geom::ZPP_CutVert tmp8 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(362)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(362)
			if ((tmp9)){
				HX_STACK_LINE(363)
				::zpp_nape::geom::ZPP_CutVert tmp10 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(363)
				c = tmp10;
			}
			else{
				HX_STACK_LINE(369)
				::zpp_nape::geom::ZPP_CutVert tmp10 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(369)
				c = tmp10;
				HX_STACK_LINE(370)
				::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = c->next;
				HX_STACK_LINE(371)
				c->next = null();
			}
			HX_STACK_LINE(376)
			Dynamic();
		}
		HX_STACK_LINE(378)
		c->vert = p;
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(380)
			Float tmp8 = c->vert->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(380)
			c->posx = tmp8;
			HX_STACK_LINE(381)
			Float tmp9 = c->vert->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(381)
			c->posy = tmp9;
			HX_STACK_LINE(390)
			{
			}
		}
		HX_STACK_LINE(399)
		Float tmp8 = (c->posy * dx);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(399)
		Float tmp9 = (c->posx * dy);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(399)
		Float tmp11 = crx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(399)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(399)
		c->value = tmp12;
		HX_STACK_LINE(400)
		bool tmp13 = (c->value > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(400)
		c->positive = tmp13;
		HX_STACK_LINE(401)
		bool tmp14 = (c->value == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(401)
		if ((tmp14)){
			HX_STACK_LINE(401)
			clashes = true;
		}
		HX_STACK_LINE(402)
		::zpp_nape::geom::ZPP_CutVert tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(403)
			::zpp_nape::geom::ZPP_CutVert obj = c;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(404)
			bool tmp16 = (verts == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(404)
			if ((tmp16)){
				HX_STACK_LINE(404)
				::zpp_nape::geom::ZPP_CutVert tmp17 = obj->next = obj;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(404)
				::zpp_nape::geom::ZPP_CutVert tmp18 = obj->prev = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(404)
				verts = tmp18;
			}
			else{
				HX_STACK_LINE(406)
				obj->prev = verts;
				HX_STACK_LINE(407)
				obj->next = verts->next;
				HX_STACK_LINE(408)
				verts->next->prev = obj;
				HX_STACK_LINE(409)
				verts->next = obj;
			}
			HX_STACK_LINE(411)
			tmp15 = obj;
		}
		HX_STACK_LINE(402)
		verts = tmp15;
		HX_STACK_LINE(413)
		p = p->next;
		HX_STACK_LINE(415)
		bool tmp16 = (p != P);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(415)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(359)
		if ((tmp17)){
			HX_STACK_LINE(359)
			break;
		}
	}
	HX_STACK_LINE(416)
	bool tmp8 = clashes;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(416)
	if ((tmp8)){
		HX_STACK_LINE(417)
		::zpp_nape::geom::ZPP_CutVert start = null();		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(419)
			::zpp_nape::geom::ZPP_CutVert F = verts;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(420)
			::zpp_nape::geom::ZPP_CutVert L = verts;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(421)
			bool tmp9 = (F != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(421)
			if ((tmp9)){
				HX_STACK_LINE(422)
				::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(423)
				while((true)){
					HX_STACK_LINE(424)
					::zpp_nape::geom::ZPP_CutVert p1 = nite;		HX_STACK_VAR(p1,"p1");
					HX_STACK_LINE(426)
					{
						HX_STACK_LINE(427)
						bool tmp10 = (p1->value != ((Float)0.0));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(427)
						if ((tmp10)){
							HX_STACK_LINE(428)
							start = p1;
							HX_STACK_LINE(429)
							break;
						}
					}
					HX_STACK_LINE(433)
					nite = nite->next;
					HX_STACK_LINE(435)
					bool tmp10 = (nite != L);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(435)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(423)
					if ((tmp11)){
						HX_STACK_LINE(423)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(446)
		Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
		HX_STACK_LINE(447)
		Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(449)
			nx = dx;
			HX_STACK_LINE(450)
			ny = dy;
			HX_STACK_LINE(459)
			{
			}
		}
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(470)
				Float tmp9 = (nx * nx);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(470)
				Float tmp10 = (ny * ny);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(470)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(470)
				Float d = tmp11;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(479)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(479)
				{
					HX_STACK_LINE(479)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(479)
					{
						HX_STACK_LINE(479)
						Float tmp14 = d;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(479)
						tmp13 = ::Math_obj::sqrt(tmp14);
					}
					HX_STACK_LINE(479)
					tmp12 = (Float(((Float)1.0)) / Float(tmp13));
				}
				HX_STACK_LINE(479)
				Float imag = tmp12;		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(481)
					Float t = imag;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(490)
					hx::MultEq(nx,t);
					HX_STACK_LINE(491)
					hx::MultEq(ny,t);
				}
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(495)
				Float t = nx;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(496)
				Float tmp9 = ny;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(496)
				Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(496)
				nx = tmp10;
				HX_STACK_LINE(497)
				ny = t;
			}
		}
		HX_STACK_LINE(500)
		::zpp_nape::geom::ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(501)
		::zpp_nape::geom::ZPP_CutVert p1 = start;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(502)
		while((true)){
			HX_STACK_LINE(503)
			bool tmp9 = (p1->value != ((Float)0.0));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(503)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(503)
			if ((tmp9)){
				HX_STACK_LINE(503)
				bool tmp11 = (pre == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(503)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(503)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(503)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(503)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(503)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(503)
				if ((tmp16)){
					HX_STACK_LINE(503)
					tmp10 = (p1 == pre->next);
				}
				else{
					HX_STACK_LINE(503)
					tmp10 = true;
				}
			}
			else{
				HX_STACK_LINE(503)
				tmp10 = false;
			}
			HX_STACK_LINE(503)
			if ((tmp10)){
				HX_STACK_LINE(504)
				pre = p1;
				HX_STACK_LINE(505)
				p1 = p1->next;
				HX_STACK_LINE(583)
				bool tmp11 = (p1 != start);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(583)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(502)
				if ((tmp12)){
					HX_STACK_LINE(502)
					break;
				}
				else{
					HX_STACK_LINE(506)
					continue;
				}
			}
			HX_STACK_LINE(508)
			Float tmp11 = (pre->value * p1->value);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(508)
			Float prod = tmp11;		HX_STACK_VAR(prod,"prod");
			HX_STACK_LINE(509)
			bool tmp12 = (prod == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(509)
			if ((tmp12)){
				HX_STACK_LINE(510)
				p1 = p1->next;
				HX_STACK_LINE(583)
				bool tmp13 = (p1 != start);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(583)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(502)
				if ((tmp14)){
					HX_STACK_LINE(502)
					break;
				}
				else{
					HX_STACK_LINE(511)
					continue;
				}
			}
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_CutVert a = pre->next;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(514)
			bool tmp13 = (prod > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(514)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(514)
			if ((tmp13)){
				HX_STACK_LINE(514)
				tmp14 = pre->positive;
			}
			else{
				HX_STACK_LINE(516)
				::zpp_nape::geom::ZPP_CutVert b = a->next;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(517)
				Float midx = ((Float)0.0);		HX_STACK_VAR(midx,"midx");
				HX_STACK_LINE(518)
				Float midy = ((Float)0.0);		HX_STACK_VAR(midy,"midy");
				HX_STACK_LINE(519)
				{
					HX_STACK_LINE(520)
					Float tmp15 = (a->posx + b->posx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(520)
					midx = tmp15;
					HX_STACK_LINE(521)
					Float tmp16 = (a->posy + b->posy);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(521)
					midy = tmp16;
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(524)
					Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(533)
					hx::MultEq(midx,t);
					HX_STACK_LINE(534)
					hx::MultEq(midy,t);
				}
				HX_STACK_LINE(536)
				{
					HX_STACK_LINE(537)
					Float tmp15 = midx;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(537)
					Float tmp16 = (nx * ((Float)1e-8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(537)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(537)
					Float x = tmp17;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(538)
					Float tmp18 = midy;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(538)
					Float tmp19 = (ny * ((Float)1e-8));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(538)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(538)
					Float y = tmp20;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(539)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
						HX_STACK_LINE(543)
						bool tmp21 = (F != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(543)
						if ((tmp21)){
							HX_STACK_LINE(544)
							::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
							HX_STACK_LINE(545)
							while((true)){
								HX_STACK_LINE(546)
								::zpp_nape::geom::ZPP_GeomVert p2 = nite;		HX_STACK_VAR(p2,"p2");
								HX_STACK_LINE(548)
								{
									HX_STACK_LINE(549)
									::zpp_nape::geom::ZPP_GeomVert q = p2->prev;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(550)
									bool tmp22 = (p2->y < y);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(550)
									bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(550)
									bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(550)
									if ((tmp23)){
										HX_STACK_LINE(550)
										tmp24 = (q->y >= y);
									}
									else{
										HX_STACK_LINE(550)
										tmp24 = false;
									}
									HX_STACK_LINE(550)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(550)
									bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(550)
									bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(550)
									if ((tmp26)){
										HX_STACK_LINE(550)
										bool tmp28 = (q->y < y);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(550)
										bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(550)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(550)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(550)
										bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(550)
										if ((tmp32)){
											HX_STACK_LINE(550)
											tmp27 = (p2->y >= y);
										}
										else{
											HX_STACK_LINE(550)
											tmp27 = false;
										}
									}
									else{
										HX_STACK_LINE(550)
										tmp27 = true;
									}
									HX_STACK_LINE(550)
									bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(550)
									if ((tmp27)){
										HX_STACK_LINE(550)
										bool tmp29 = (p2->x <= x);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(550)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(550)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(550)
										bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(550)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(550)
										bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(550)
										if ((tmp34)){
											HX_STACK_LINE(550)
											tmp28 = (q->x <= x);
										}
										else{
											HX_STACK_LINE(550)
											tmp28 = true;
										}
									}
									else{
										HX_STACK_LINE(550)
										tmp28 = false;
									}
									HX_STACK_LINE(550)
									if ((tmp28)){
										HX_STACK_LINE(551)
										Float tmp29 = p2->x;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(551)
										Float tmp30 = (y - p2->y);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(551)
										Float tmp31 = (q->y - p2->y);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(551)
										Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(551)
										Float tmp33 = (q->x - p2->x);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(551)
										Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(551)
										Float tmp35 = (tmp29 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(551)
										Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(551)
										bool tmp37 = (tmp35 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(551)
										if ((tmp37)){
											HX_STACK_LINE(552)
											bool tmp38 = ret;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(552)
											bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(552)
											ret = tmp39;
										}
									}
								}
								HX_STACK_LINE(557)
								nite = nite->next;
								HX_STACK_LINE(559)
								bool tmp22 = (nite != L);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(559)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(545)
								if ((tmp23)){
									HX_STACK_LINE(545)
									break;
								}
							}
						}
					}
					HX_STACK_LINE(562)
					tmp14 = ret;
				}
			}
			HX_STACK_LINE(514)
			bool positive = tmp14;		HX_STACK_VAR(positive,"positive");
			HX_STACK_LINE(565)
			{
				HX_STACK_LINE(566)
				::zpp_nape::geom::ZPP_CutVert F = a;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(567)
				::zpp_nape::geom::ZPP_CutVert L = p1;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(568)
				bool tmp15 = (F != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(568)
				if ((tmp15)){
					HX_STACK_LINE(569)
					::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(570)
					while((true)){
						HX_STACK_LINE(571)
						::zpp_nape::geom::ZPP_CutVert q = nite;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(573)
						q->positive = positive;
						HX_STACK_LINE(575)
						nite = nite->next;
						HX_STACK_LINE(577)
						bool tmp16 = (nite != L);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(577)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(570)
						if ((tmp17)){
							HX_STACK_LINE(570)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(580)
			pre = p1;
			HX_STACK_LINE(581)
			p1 = p1->next;
			HX_STACK_LINE(583)
			bool tmp15 = (p1 != start);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(583)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(502)
			if ((tmp16)){
				HX_STACK_LINE(502)
				break;
			}
		}
		HX_STACK_LINE(584)
		while((true)){
			HX_STACK_LINE(585)
			bool tmp9 = (p1->value != ((Float)0.0));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(585)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(585)
			if ((tmp9)){
				HX_STACK_LINE(585)
				bool tmp11 = (pre == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(585)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(585)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(585)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(585)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(585)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(585)
				if ((tmp16)){
					HX_STACK_LINE(585)
					tmp10 = (p1 == pre->next);
				}
				else{
					HX_STACK_LINE(585)
					tmp10 = true;
				}
			}
			else{
				HX_STACK_LINE(585)
				tmp10 = false;
			}
			HX_STACK_LINE(585)
			if ((tmp10)){
				HX_STACK_LINE(586)
				pre = p1;
				HX_STACK_LINE(587)
				p1 = p1->next;
				HX_STACK_LINE(665)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(584)
				if ((tmp11)){
					HX_STACK_LINE(584)
					break;
				}
				else{
					HX_STACK_LINE(588)
					continue;
				}
			}
			HX_STACK_LINE(590)
			Float tmp11 = (pre->value * p1->value);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(590)
			Float prod = tmp11;		HX_STACK_VAR(prod,"prod");
			HX_STACK_LINE(591)
			bool tmp12 = (prod == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(591)
			if ((tmp12)){
				HX_STACK_LINE(592)
				p1 = p1->next;
				HX_STACK_LINE(665)
				bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(584)
				if ((tmp13)){
					HX_STACK_LINE(584)
					break;
				}
				else{
					HX_STACK_LINE(593)
					continue;
				}
			}
			HX_STACK_LINE(595)
			::zpp_nape::geom::ZPP_CutVert a = pre->next;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(596)
			bool tmp13 = (prod > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(596)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(596)
			if ((tmp13)){
				HX_STACK_LINE(596)
				tmp14 = pre->positive;
			}
			else{
				HX_STACK_LINE(598)
				::zpp_nape::geom::ZPP_CutVert b = a->next;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(599)
				Float midx = ((Float)0.0);		HX_STACK_VAR(midx,"midx");
				HX_STACK_LINE(600)
				Float midy = ((Float)0.0);		HX_STACK_VAR(midy,"midy");
				HX_STACK_LINE(601)
				{
					HX_STACK_LINE(602)
					Float tmp15 = (a->posx + b->posx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(602)
					midx = tmp15;
					HX_STACK_LINE(603)
					Float tmp16 = (a->posy + b->posy);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(603)
					midy = tmp16;
				}
				HX_STACK_LINE(605)
				{
					HX_STACK_LINE(606)
					Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(615)
					hx::MultEq(midx,t);
					HX_STACK_LINE(616)
					hx::MultEq(midy,t);
				}
				HX_STACK_LINE(618)
				{
					HX_STACK_LINE(619)
					Float tmp15 = midx;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(619)
					Float tmp16 = (nx * ((Float)1e-8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(619)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(619)
					Float x = tmp17;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(620)
					Float tmp18 = midy;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(620)
					Float tmp19 = (ny * ((Float)1e-8));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(620)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(620)
					Float y = tmp20;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(621)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(623)
						::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
						HX_STACK_LINE(624)
						::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
						HX_STACK_LINE(625)
						bool tmp21 = (F != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(625)
						if ((tmp21)){
							HX_STACK_LINE(626)
							::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
							HX_STACK_LINE(627)
							while((true)){
								HX_STACK_LINE(628)
								::zpp_nape::geom::ZPP_GeomVert p2 = nite;		HX_STACK_VAR(p2,"p2");
								HX_STACK_LINE(630)
								{
									HX_STACK_LINE(631)
									::zpp_nape::geom::ZPP_GeomVert q = p2->prev;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(632)
									bool tmp22 = (p2->y < y);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(632)
									bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(632)
									bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(632)
									if ((tmp23)){
										HX_STACK_LINE(632)
										tmp24 = (q->y >= y);
									}
									else{
										HX_STACK_LINE(632)
										tmp24 = false;
									}
									HX_STACK_LINE(632)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(632)
									bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(632)
									bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(632)
									if ((tmp26)){
										HX_STACK_LINE(632)
										bool tmp28 = (q->y < y);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(632)
										bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(632)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(632)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(632)
										bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(632)
										if ((tmp32)){
											HX_STACK_LINE(632)
											tmp27 = (p2->y >= y);
										}
										else{
											HX_STACK_LINE(632)
											tmp27 = false;
										}
									}
									else{
										HX_STACK_LINE(632)
										tmp27 = true;
									}
									HX_STACK_LINE(632)
									bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(632)
									if ((tmp27)){
										HX_STACK_LINE(632)
										bool tmp29 = (p2->x <= x);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(632)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(632)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(632)
										bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(632)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(632)
										bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(632)
										if ((tmp34)){
											HX_STACK_LINE(632)
											tmp28 = (q->x <= x);
										}
										else{
											HX_STACK_LINE(632)
											tmp28 = true;
										}
									}
									else{
										HX_STACK_LINE(632)
										tmp28 = false;
									}
									HX_STACK_LINE(632)
									if ((tmp28)){
										HX_STACK_LINE(633)
										Float tmp29 = p2->x;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(633)
										Float tmp30 = (y - p2->y);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(633)
										Float tmp31 = (q->y - p2->y);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(633)
										Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(633)
										Float tmp33 = (q->x - p2->x);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(633)
										Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(633)
										Float tmp35 = (tmp29 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(633)
										Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(633)
										bool tmp37 = (tmp35 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(633)
										if ((tmp37)){
											HX_STACK_LINE(634)
											bool tmp38 = ret;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(634)
											bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(634)
											ret = tmp39;
										}
									}
								}
								HX_STACK_LINE(639)
								nite = nite->next;
								HX_STACK_LINE(641)
								bool tmp22 = (nite != L);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(641)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(627)
								if ((tmp23)){
									HX_STACK_LINE(627)
									break;
								}
							}
						}
					}
					HX_STACK_LINE(644)
					tmp14 = ret;
				}
			}
			HX_STACK_LINE(596)
			bool positive = tmp14;		HX_STACK_VAR(positive,"positive");
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(648)
				::zpp_nape::geom::ZPP_CutVert F = a;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(649)
				::zpp_nape::geom::ZPP_CutVert L = p1;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(650)
				bool tmp15 = (F != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(650)
				if ((tmp15)){
					HX_STACK_LINE(651)
					::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(652)
					while((true)){
						HX_STACK_LINE(653)
						::zpp_nape::geom::ZPP_CutVert q = nite;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(655)
						q->positive = positive;
						HX_STACK_LINE(657)
						nite = nite->next;
						HX_STACK_LINE(659)
						bool tmp16 = (nite != L);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(659)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(652)
						if ((tmp17)){
							HX_STACK_LINE(652)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(662)
			pre = p1;
			HX_STACK_LINE(663)
			p1 = p1->next;
			HX_STACK_LINE(665)
			bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(584)
			if ((tmp15)){
				HX_STACK_LINE(584)
				break;
			}
		}
	}
	HX_STACK_LINE(667)
	::zpp_nape::util::ZNPList_ZPP_CutInt tmp9 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(667)
	bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(667)
	if ((tmp10)){
		HX_STACK_LINE(668)
		::zpp_nape::util::ZNPList_ZPP_CutInt tmp11 = ::zpp_nape::util::ZNPList_ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(668)
		::zpp_nape::geom::ZPP_Cutter_obj::ints = tmp11;
	}
	HX_STACK_LINE(670)
	::zpp_nape::util::ZNPList_ZPP_CutVert tmp11 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(670)
	bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(670)
	if ((tmp12)){
		HX_STACK_LINE(671)
		::zpp_nape::util::ZNPList_ZPP_CutVert tmp13 = ::zpp_nape::util::ZNPList_ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(671)
		::zpp_nape::geom::ZPP_Cutter_obj::paths = tmp13;
	}
	HX_STACK_LINE(673)
	::zpp_nape::geom::ZPP_GeomVert start = null();		HX_STACK_VAR(start,"start");
	HX_STACK_LINE(674)
	{
		HX_STACK_LINE(675)
		::zpp_nape::geom::ZPP_GeomVert tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(675)
		{
			HX_STACK_LINE(675)
			::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				::zpp_nape::geom::ZPP_GeomVert tmp14 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(675)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(675)
				if ((tmp15)){
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(675)
					ret = tmp16;
				}
				else{
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(675)
					ret = tmp16;
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(675)
					ret->next = null();
				}
				HX_STACK_LINE(675)
				ret->forced = false;
			}
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				ret->x = verts->posx;
				HX_STACK_LINE(675)
				ret->y = verts->posy;
				HX_STACK_LINE(675)
				{
				}
			}
			HX_STACK_LINE(675)
			tmp13 = ret;
		}
		HX_STACK_LINE(675)
		::zpp_nape::geom::ZPP_GeomVert obj = tmp13;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(676)
		bool tmp14 = (start == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(676)
		if ((tmp14)){
			HX_STACK_LINE(676)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = obj->next = obj;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(676)
			::zpp_nape::geom::ZPP_GeomVert tmp16 = obj->prev = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(676)
			start = tmp16;
		}
		else{
			HX_STACK_LINE(678)
			obj->next = start;
			HX_STACK_LINE(679)
			obj->prev = start->prev;
			HX_STACK_LINE(680)
			start->prev->next = obj;
			HX_STACK_LINE(681)
			start->prev = obj;
		}
		HX_STACK_LINE(683)
		obj;
	}
	HX_STACK_LINE(685)
	::zpp_nape::geom::ZPP_GeomVert origin = start;		HX_STACK_VAR(origin,"origin");
	HX_STACK_LINE(686)
	::zpp_nape::geom::ZPP_CutVert tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(686)
	{
		HX_STACK_LINE(686)
		::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(686)
		{
			HX_STACK_LINE(686)
			::zpp_nape::geom::ZPP_CutVert tmp14 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(686)
			bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(686)
			if ((tmp15)){
				HX_STACK_LINE(686)
				::zpp_nape::geom::ZPP_CutVert tmp16 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(686)
				ret = tmp16;
			}
			else{
				HX_STACK_LINE(686)
				::zpp_nape::geom::ZPP_CutVert tmp16 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(686)
				ret = tmp16;
				HX_STACK_LINE(686)
				::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(686)
				ret->next = null();
			}
			HX_STACK_LINE(686)
			Dynamic();
		}
		HX_STACK_LINE(686)
		ret->vert = start;
		HX_STACK_LINE(686)
		ret->parent = ret;
		HX_STACK_LINE(686)
		ret->rank = (int)0;
		HX_STACK_LINE(686)
		ret->used = false;
		HX_STACK_LINE(686)
		tmp13 = ret;
	}
	HX_STACK_LINE(686)
	::zpp_nape::geom::ZPP_CutVert firstpath = tmp13;		HX_STACK_VAR(firstpath,"firstpath");
	HX_STACK_LINE(687)
	::zpp_nape::util::ZNPList_ZPP_CutVert tmp14 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(687)
	::zpp_nape::geom::ZPP_CutVert tmp15 = firstpath;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(687)
	tmp14->add(tmp15);
	HX_STACK_LINE(688)
	::zpp_nape::geom::ZPP_CutVert i = verts;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(689)
	while((true)){
		HX_STACK_LINE(690)
		::zpp_nape::geom::ZPP_CutVert j = i->next;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(691)
		::zpp_nape::geom::ZPP_GeomVert tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				::zpp_nape::geom::ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(691)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(691)
				if ((tmp18)){
					HX_STACK_LINE(691)
					::zpp_nape::geom::ZPP_GeomVert tmp19 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(691)
					ret = tmp19;
				}
				else{
					HX_STACK_LINE(691)
					::zpp_nape::geom::ZPP_GeomVert tmp19 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(691)
					ret = tmp19;
					HX_STACK_LINE(691)
					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(691)
					ret->next = null();
				}
				HX_STACK_LINE(691)
				ret->forced = false;
			}
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				ret->x = j->posx;
				HX_STACK_LINE(691)
				ret->y = j->posy;
				HX_STACK_LINE(691)
				{
				}
			}
			HX_STACK_LINE(691)
			tmp16 = ret;
		}
		HX_STACK_LINE(691)
		::zpp_nape::geom::ZPP_GeomVert pj = tmp16;		HX_STACK_VAR(pj,"pj");
		HX_STACK_LINE(692)
		bool tmp17 = (i->positive == j->positive);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(692)
		if ((tmp17)){
			HX_STACK_LINE(694)
			::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(695)
			bool tmp18 = (start == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(695)
			if ((tmp18)){
				HX_STACK_LINE(695)
				::zpp_nape::geom::ZPP_GeomVert tmp19 = obj->next = obj;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(695)
				::zpp_nape::geom::ZPP_GeomVert tmp20 = obj->prev = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(695)
				start = tmp20;
			}
			else{
				HX_STACK_LINE(697)
				obj->next = start;
				HX_STACK_LINE(698)
				obj->prev = start->prev;
				HX_STACK_LINE(699)
				start->prev->next = obj;
				HX_STACK_LINE(700)
				start->prev = obj;
			}
			HX_STACK_LINE(702)
			obj;
		}
		else{
			HX_STACK_LINE(706)
			Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(707)
			Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(708)
			{
				HX_STACK_LINE(709)
				Float tmp18 = (j->posx - i->posx);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(709)
				ux = tmp18;
				HX_STACK_LINE(710)
				Float tmp19 = (j->posy - i->posy);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(710)
				uy = tmp19;
			}
			HX_STACK_LINE(712)
			Float tmp18 = (dy * ux);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(712)
			Float tmp19 = (dx * uy);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(712)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(712)
			Float denom = tmp20;		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(721)
			Float tmp21 = (Float((int)1) / Float(denom));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(721)
			denom = tmp21;
			HX_STACK_LINE(722)
			Float pax = ((Float)0.0);		HX_STACK_VAR(pax,"pax");
			HX_STACK_LINE(723)
			Float pay = ((Float)0.0);		HX_STACK_VAR(pay,"pay");
			HX_STACK_LINE(724)
			{
				HX_STACK_LINE(725)
				Float tmp22 = (px - i->posx);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(725)
				pax = tmp22;
				HX_STACK_LINE(726)
				Float tmp23 = (py - i->posy);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(726)
				pay = tmp23;
			}
			HX_STACK_LINE(728)
			Float tmp22 = (uy * pax);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(728)
			Float tmp23 = (ux * pay);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(728)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(728)
			Float tmp25 = denom;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(728)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(728)
			Float s = tmp26;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(729)
			bool tmp27 = (s < min);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(729)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(729)
			bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(729)
			if ((tmp28)){
				HX_STACK_LINE(729)
				tmp29 = (s > max);
			}
			else{
				HX_STACK_LINE(729)
				tmp29 = true;
			}
			HX_STACK_LINE(729)
			if ((tmp29)){
				HX_STACK_LINE(730)
				::zpp_nape::util::ZNPList_ZPP_CutInt tmp30 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_CutInt tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						::zpp_nape::geom::ZPP_CutInt tmp32 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(730)
						bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(730)
						if ((tmp33)){
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_CutInt tmp34 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(730)
							ret = tmp34;
						}
						else{
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_CutInt tmp34 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(730)
							ret = tmp34;
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
							HX_STACK_LINE(730)
							ret->next = null();
						}
						HX_STACK_LINE(730)
						Dynamic();
					}
					HX_STACK_LINE(730)
					ret->virtualint = true;
					HX_STACK_LINE(730)
					ret->end = null();
					HX_STACK_LINE(730)
					ret->start = null();
					HX_STACK_LINE(730)
					ret->path0 = null();
					HX_STACK_LINE(730)
					ret->path1 = null();
					HX_STACK_LINE(730)
					ret->time = s;
					HX_STACK_LINE(730)
					ret->vertex = vertex;
					HX_STACK_LINE(730)
					tmp31 = ret;
				}
				HX_STACK_LINE(730)
				tmp30->add(tmp31);
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(732)
					::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(733)
					bool tmp32 = (start == null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(733)
					if ((tmp32)){
						HX_STACK_LINE(733)
						::zpp_nape::geom::ZPP_GeomVert tmp33 = obj->next = obj;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(733)
						::zpp_nape::geom::ZPP_GeomVert tmp34 = obj->prev = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(733)
						start = tmp34;
					}
					else{
						HX_STACK_LINE(735)
						obj->next = start;
						HX_STACK_LINE(736)
						obj->prev = start->prev;
						HX_STACK_LINE(737)
						start->prev->next = obj;
						HX_STACK_LINE(738)
						start->prev = obj;
					}
					HX_STACK_LINE(740)
					obj;
				}
			}
			else{
				HX_STACK_LINE(744)
				bool tmp30 = (i->value == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(744)
				if ((tmp30)){
					HX_STACK_LINE(745)
					::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
					HX_STACK_LINE(746)
					start = null();
					HX_STACK_LINE(747)
					{
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_GeomVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								::zpp_nape::geom::ZPP_GeomVert tmp32 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(748)
								bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(748)
								if ((tmp33)){
									HX_STACK_LINE(748)
									::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(748)
									ret = tmp34;
								}
								else{
									HX_STACK_LINE(748)
									::zpp_nape::geom::ZPP_GeomVert tmp34 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(748)
									ret = tmp34;
									HX_STACK_LINE(748)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(748)
									ret->next = null();
								}
								HX_STACK_LINE(748)
								ret->forced = false;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								ret->x = endof->x;
								HX_STACK_LINE(748)
								ret->y = endof->y;
								HX_STACK_LINE(748)
								{
								}
							}
							HX_STACK_LINE(748)
							tmp31 = ret;
						}
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_GeomVert obj = tmp31;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(749)
						bool tmp32 = (start == null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(749)
						if ((tmp32)){
							HX_STACK_LINE(749)
							::zpp_nape::geom::ZPP_GeomVert tmp33 = obj->next = obj;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(749)
							::zpp_nape::geom::ZPP_GeomVert tmp34 = obj->prev = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(749)
							start = tmp34;
						}
						else{
							HX_STACK_LINE(751)
							obj->next = start;
							HX_STACK_LINE(752)
							obj->prev = start->prev;
							HX_STACK_LINE(753)
							start->prev->next = obj;
							HX_STACK_LINE(754)
							start->prev = obj;
						}
						HX_STACK_LINE(756)
						obj;
					}
					HX_STACK_LINE(758)
					{
						HX_STACK_LINE(759)
						::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(760)
						bool tmp31 = (start == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(760)
						if ((tmp31)){
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_GeomVert tmp32 = obj->next = obj;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_GeomVert tmp33 = obj->prev = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(760)
							start = tmp33;
						}
						else{
							HX_STACK_LINE(762)
							obj->next = start;
							HX_STACK_LINE(763)
							obj->prev = start->prev;
							HX_STACK_LINE(764)
							start->prev->next = obj;
							HX_STACK_LINE(765)
							start->prev = obj;
						}
						HX_STACK_LINE(767)
						obj;
					}
					HX_STACK_LINE(769)
					::zpp_nape::util::ZNPList_ZPP_CutVert tmp31 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(769)
					::zpp_nape::geom::ZPP_CutVert tmp32 = tmp31->head->elt;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(769)
					::zpp_nape::geom::ZPP_CutVert prepath = tmp32;		HX_STACK_VAR(prepath,"prepath");
					HX_STACK_LINE(770)
					::zpp_nape::util::ZNPList_ZPP_CutVert tmp33 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(770)
					::zpp_nape::geom::ZPP_CutVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(770)
					{
						HX_STACK_LINE(770)
						::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(770)
						{
							HX_STACK_LINE(770)
							::zpp_nape::geom::ZPP_CutVert tmp35 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(770)
							bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(770)
							if ((tmp36)){
								HX_STACK_LINE(770)
								::zpp_nape::geom::ZPP_CutVert tmp37 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(770)
								ret = tmp37;
							}
							else{
								HX_STACK_LINE(770)
								::zpp_nape::geom::ZPP_CutVert tmp37 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(770)
								ret = tmp37;
								HX_STACK_LINE(770)
								::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
								HX_STACK_LINE(770)
								ret->next = null();
							}
							HX_STACK_LINE(770)
							Dynamic();
						}
						HX_STACK_LINE(770)
						ret->vert = start;
						HX_STACK_LINE(770)
						ret->parent = ret;
						HX_STACK_LINE(770)
						ret->rank = (int)0;
						HX_STACK_LINE(770)
						ret->used = false;
						HX_STACK_LINE(770)
						tmp34 = ret;
					}
					HX_STACK_LINE(770)
					tmp33->add(tmp34);
					HX_STACK_LINE(771)
					::zpp_nape::util::ZNPList_ZPP_CutVert tmp35 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(771)
					::zpp_nape::geom::ZPP_CutVert tmp36 = tmp35->head->elt;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(771)
					::zpp_nape::geom::ZPP_CutVert postpath = tmp36;		HX_STACK_VAR(postpath,"postpath");
					HX_STACK_LINE(772)
					::zpp_nape::util::ZNPList_ZPP_CutInt tmp37 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(772)
					::zpp_nape::geom::ZPP_CutInt tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(772)
					{
						HX_STACK_LINE(772)
						bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
						HX_STACK_LINE(772)
						::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(772)
						{
							HX_STACK_LINE(772)
							::zpp_nape::geom::ZPP_CutInt tmp39 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(772)
							bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(772)
							if ((tmp40)){
								HX_STACK_LINE(772)
								::zpp_nape::geom::ZPP_CutInt tmp41 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(772)
								ret = tmp41;
							}
							else{
								HX_STACK_LINE(772)
								::zpp_nape::geom::ZPP_CutInt tmp41 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(772)
								ret = tmp41;
								HX_STACK_LINE(772)
								::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
								HX_STACK_LINE(772)
								ret->next = null();
							}
							HX_STACK_LINE(772)
							Dynamic();
						}
						HX_STACK_LINE(772)
						ret->virtualint = true;
						HX_STACK_LINE(772)
						ret->end = endof;
						HX_STACK_LINE(772)
						ret->start = start;
						HX_STACK_LINE(772)
						ret->path0 = prepath;
						HX_STACK_LINE(772)
						ret->path1 = postpath;
						HX_STACK_LINE(772)
						ret->time = s;
						HX_STACK_LINE(772)
						ret->vertex = vertex;
						HX_STACK_LINE(772)
						tmp38 = ret;
					}
					HX_STACK_LINE(772)
					tmp37->add(tmp38);
				}
				else{
					HX_STACK_LINE(774)
					bool tmp31 = (j->value == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(774)
					if ((tmp31)){
						HX_STACK_LINE(775)
						{
							HX_STACK_LINE(776)
							::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(777)
							bool tmp32 = (start == null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(777)
							if ((tmp32)){
								HX_STACK_LINE(777)
								::zpp_nape::geom::ZPP_GeomVert tmp33 = obj->next = obj;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(777)
								::zpp_nape::geom::ZPP_GeomVert tmp34 = obj->prev = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(777)
								start = tmp34;
							}
							else{
								HX_STACK_LINE(779)
								obj->next = start;
								HX_STACK_LINE(780)
								obj->prev = start->prev;
								HX_STACK_LINE(781)
								start->prev->next = obj;
								HX_STACK_LINE(782)
								start->prev = obj;
							}
							HX_STACK_LINE(784)
							obj;
						}
						HX_STACK_LINE(786)
						::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
						HX_STACK_LINE(787)
						start = null();
						HX_STACK_LINE(788)
						{
							HX_STACK_LINE(789)
							::zpp_nape::geom::ZPP_GeomVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(789)
							{
								HX_STACK_LINE(789)
								::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(789)
								{
									HX_STACK_LINE(789)
									::zpp_nape::geom::ZPP_GeomVert tmp33 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(789)
									bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(789)
									if ((tmp34)){
										HX_STACK_LINE(789)
										::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(789)
										ret = tmp35;
									}
									else{
										HX_STACK_LINE(789)
										::zpp_nape::geom::ZPP_GeomVert tmp35 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(789)
										ret = tmp35;
										HX_STACK_LINE(789)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
										HX_STACK_LINE(789)
										ret->next = null();
									}
									HX_STACK_LINE(789)
									ret->forced = false;
								}
								HX_STACK_LINE(789)
								{
									HX_STACK_LINE(789)
									ret->x = j->posx;
									HX_STACK_LINE(789)
									ret->y = j->posy;
									HX_STACK_LINE(789)
									{
									}
								}
								HX_STACK_LINE(789)
								tmp32 = ret;
							}
							HX_STACK_LINE(789)
							::zpp_nape::geom::ZPP_GeomVert obj = tmp32;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(790)
							bool tmp33 = (start == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(790)
							if ((tmp33)){
								HX_STACK_LINE(790)
								::zpp_nape::geom::ZPP_GeomVert tmp34 = obj->next = obj;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(790)
								::zpp_nape::geom::ZPP_GeomVert tmp35 = obj->prev = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(790)
								start = tmp35;
							}
							else{
								HX_STACK_LINE(792)
								obj->next = start;
								HX_STACK_LINE(793)
								obj->prev = start->prev;
								HX_STACK_LINE(794)
								start->prev->next = obj;
								HX_STACK_LINE(795)
								start->prev = obj;
							}
							HX_STACK_LINE(797)
							obj;
						}
						HX_STACK_LINE(799)
						::zpp_nape::util::ZNPList_ZPP_CutVert tmp32 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(799)
						::zpp_nape::geom::ZPP_CutVert tmp33 = tmp32->head->elt;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(799)
						::zpp_nape::geom::ZPP_CutVert prepath = tmp33;		HX_STACK_VAR(prepath,"prepath");
						HX_STACK_LINE(800)
						::zpp_nape::util::ZNPList_ZPP_CutVert tmp34 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(800)
						::zpp_nape::geom::ZPP_CutVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(800)
						{
							HX_STACK_LINE(800)
							::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(800)
							{
								HX_STACK_LINE(800)
								::zpp_nape::geom::ZPP_CutVert tmp36 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(800)
								bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(800)
								if ((tmp37)){
									HX_STACK_LINE(800)
									::zpp_nape::geom::ZPP_CutVert tmp38 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(800)
									ret = tmp38;
								}
								else{
									HX_STACK_LINE(800)
									::zpp_nape::geom::ZPP_CutVert tmp38 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(800)
									ret = tmp38;
									HX_STACK_LINE(800)
									::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(800)
									ret->next = null();
								}
								HX_STACK_LINE(800)
								Dynamic();
							}
							HX_STACK_LINE(800)
							ret->vert = start;
							HX_STACK_LINE(800)
							ret->parent = ret;
							HX_STACK_LINE(800)
							ret->rank = (int)0;
							HX_STACK_LINE(800)
							ret->used = false;
							HX_STACK_LINE(800)
							tmp35 = ret;
						}
						HX_STACK_LINE(800)
						tmp34->add(tmp35);
						HX_STACK_LINE(801)
						::zpp_nape::util::ZNPList_ZPP_CutVert tmp36 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(801)
						::zpp_nape::geom::ZPP_CutVert tmp37 = tmp36->head->elt;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(801)
						::zpp_nape::geom::ZPP_CutVert postpath = tmp37;		HX_STACK_VAR(postpath,"postpath");
						HX_STACK_LINE(802)
						::zpp_nape::util::ZNPList_ZPP_CutInt tmp38 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(802)
						::zpp_nape::geom::ZPP_CutInt tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(802)
						{
							HX_STACK_LINE(802)
							bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
							HX_STACK_LINE(802)
							::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(802)
							{
								HX_STACK_LINE(802)
								::zpp_nape::geom::ZPP_CutInt tmp40 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(802)
								bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(802)
								if ((tmp41)){
									HX_STACK_LINE(802)
									::zpp_nape::geom::ZPP_CutInt tmp42 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(802)
									ret = tmp42;
								}
								else{
									HX_STACK_LINE(802)
									::zpp_nape::geom::ZPP_CutInt tmp42 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(802)
									ret = tmp42;
									HX_STACK_LINE(802)
									::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
									HX_STACK_LINE(802)
									ret->next = null();
								}
								HX_STACK_LINE(802)
								Dynamic();
							}
							HX_STACK_LINE(802)
							ret->virtualint = true;
							HX_STACK_LINE(802)
							ret->end = endof;
							HX_STACK_LINE(802)
							ret->start = start;
							HX_STACK_LINE(802)
							ret->path0 = prepath;
							HX_STACK_LINE(802)
							ret->path1 = postpath;
							HX_STACK_LINE(802)
							ret->time = s;
							HX_STACK_LINE(802)
							ret->vertex = vertex;
							HX_STACK_LINE(802)
							tmp39 = ret;
						}
						HX_STACK_LINE(802)
						tmp38->add(tmp39);
					}
					else{
						HX_STACK_LINE(805)
						Float tmp32 = (dy * pax);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(805)
						Float tmp33 = (dx * pay);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(805)
						Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(805)
						Float tmp35 = denom;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(805)
						Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(805)
						Float t = tmp36;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(806)
						Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
						HX_STACK_LINE(807)
						Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
						HX_STACK_LINE(808)
						{
							HX_STACK_LINE(809)
							qx = i->posx;
							HX_STACK_LINE(810)
							qy = i->posy;
							HX_STACK_LINE(819)
							{
							}
						}
						HX_STACK_LINE(828)
						{
							HX_STACK_LINE(829)
							Float t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(838)
							Float tmp37 = (ux * t1);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(838)
							hx::AddEq(qx,tmp37);
							HX_STACK_LINE(839)
							Float tmp38 = (uy * t1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(839)
							hx::AddEq(qy,tmp38);
						}
						HX_STACK_LINE(841)
						{
							HX_STACK_LINE(842)
							::zpp_nape::geom::ZPP_GeomVert tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(842)
							{
								HX_STACK_LINE(842)
								::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(842)
								{
									HX_STACK_LINE(842)
									::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(842)
									bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(842)
									if ((tmp39)){
										HX_STACK_LINE(842)
										::zpp_nape::geom::ZPP_GeomVert tmp40 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(842)
										ret = tmp40;
									}
									else{
										HX_STACK_LINE(842)
										::zpp_nape::geom::ZPP_GeomVert tmp40 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(842)
										ret = tmp40;
										HX_STACK_LINE(842)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
										HX_STACK_LINE(842)
										ret->next = null();
									}
									HX_STACK_LINE(842)
									ret->forced = false;
								}
								HX_STACK_LINE(842)
								{
									HX_STACK_LINE(842)
									ret->x = qx;
									HX_STACK_LINE(842)
									ret->y = qy;
									HX_STACK_LINE(842)
									{
									}
								}
								HX_STACK_LINE(842)
								tmp37 = ret;
							}
							HX_STACK_LINE(842)
							::zpp_nape::geom::ZPP_GeomVert obj = tmp37;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(843)
							bool tmp38 = (start == null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(843)
							if ((tmp38)){
								HX_STACK_LINE(843)
								::zpp_nape::geom::ZPP_GeomVert tmp39 = obj->next = obj;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(843)
								::zpp_nape::geom::ZPP_GeomVert tmp40 = obj->prev = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(843)
								start = tmp40;
							}
							else{
								HX_STACK_LINE(845)
								obj->next = start;
								HX_STACK_LINE(846)
								obj->prev = start->prev;
								HX_STACK_LINE(847)
								start->prev->next = obj;
								HX_STACK_LINE(848)
								start->prev = obj;
							}
							HX_STACK_LINE(850)
							obj;
						}
						HX_STACK_LINE(852)
						::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
						HX_STACK_LINE(853)
						start = null();
						HX_STACK_LINE(854)
						{
							HX_STACK_LINE(855)
							::zpp_nape::geom::ZPP_GeomVert tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(855)
							{
								HX_STACK_LINE(855)
								::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_GeomVert tmp38 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(855)
									bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(855)
									if ((tmp39)){
										HX_STACK_LINE(855)
										::zpp_nape::geom::ZPP_GeomVert tmp40 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(855)
										ret = tmp40;
									}
									else{
										HX_STACK_LINE(855)
										::zpp_nape::geom::ZPP_GeomVert tmp40 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(855)
										ret = tmp40;
										HX_STACK_LINE(855)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
										HX_STACK_LINE(855)
										ret->next = null();
									}
									HX_STACK_LINE(855)
									ret->forced = false;
								}
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									ret->x = qx;
									HX_STACK_LINE(855)
									ret->y = qy;
									HX_STACK_LINE(855)
									{
									}
								}
								HX_STACK_LINE(855)
								tmp37 = ret;
							}
							HX_STACK_LINE(855)
							::zpp_nape::geom::ZPP_GeomVert obj = tmp37;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(856)
							bool tmp38 = (start == null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(856)
							if ((tmp38)){
								HX_STACK_LINE(856)
								::zpp_nape::geom::ZPP_GeomVert tmp39 = obj->next = obj;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(856)
								::zpp_nape::geom::ZPP_GeomVert tmp40 = obj->prev = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(856)
								start = tmp40;
							}
							else{
								HX_STACK_LINE(858)
								obj->next = start;
								HX_STACK_LINE(859)
								obj->prev = start->prev;
								HX_STACK_LINE(860)
								start->prev->next = obj;
								HX_STACK_LINE(861)
								start->prev = obj;
							}
							HX_STACK_LINE(863)
							obj;
						}
						HX_STACK_LINE(865)
						{
							HX_STACK_LINE(866)
							::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(867)
							bool tmp37 = (start == null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(867)
							if ((tmp37)){
								HX_STACK_LINE(867)
								::zpp_nape::geom::ZPP_GeomVert tmp38 = obj->next = obj;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(867)
								::zpp_nape::geom::ZPP_GeomVert tmp39 = obj->prev = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(867)
								start = tmp39;
							}
							else{
								HX_STACK_LINE(869)
								obj->next = start;
								HX_STACK_LINE(870)
								obj->prev = start->prev;
								HX_STACK_LINE(871)
								start->prev->next = obj;
								HX_STACK_LINE(872)
								start->prev = obj;
							}
							HX_STACK_LINE(874)
							obj;
						}
						HX_STACK_LINE(876)
						::zpp_nape::util::ZNPList_ZPP_CutVert tmp37 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(876)
						::zpp_nape::geom::ZPP_CutVert tmp38 = tmp37->head->elt;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(876)
						::zpp_nape::geom::ZPP_CutVert prepath = tmp38;		HX_STACK_VAR(prepath,"prepath");
						HX_STACK_LINE(877)
						::zpp_nape::util::ZNPList_ZPP_CutVert tmp39 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(877)
						::zpp_nape::geom::ZPP_CutVert tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(877)
						{
							HX_STACK_LINE(877)
							::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(877)
							{
								HX_STACK_LINE(877)
								::zpp_nape::geom::ZPP_CutVert tmp41 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(877)
								bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(877)
								if ((tmp42)){
									HX_STACK_LINE(877)
									::zpp_nape::geom::ZPP_CutVert tmp43 = ::zpp_nape::geom::ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(877)
									ret = tmp43;
								}
								else{
									HX_STACK_LINE(877)
									::zpp_nape::geom::ZPP_CutVert tmp43 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(877)
									ret = tmp43;
									HX_STACK_LINE(877)
									::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(877)
									ret->next = null();
								}
								HX_STACK_LINE(877)
								Dynamic();
							}
							HX_STACK_LINE(877)
							ret->vert = start;
							HX_STACK_LINE(877)
							ret->parent = ret;
							HX_STACK_LINE(877)
							ret->rank = (int)0;
							HX_STACK_LINE(877)
							ret->used = false;
							HX_STACK_LINE(877)
							tmp40 = ret;
						}
						HX_STACK_LINE(877)
						tmp39->add(tmp40);
						HX_STACK_LINE(878)
						::zpp_nape::util::ZNPList_ZPP_CutVert tmp41 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(878)
						::zpp_nape::geom::ZPP_CutVert tmp42 = tmp41->head->elt;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(878)
						::zpp_nape::geom::ZPP_CutVert postpath = tmp42;		HX_STACK_VAR(postpath,"postpath");
						HX_STACK_LINE(879)
						::zpp_nape::util::ZNPList_ZPP_CutInt tmp43 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(879)
						::zpp_nape::geom::ZPP_CutInt tmp44;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(879)
						{
							HX_STACK_LINE(879)
							bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
							HX_STACK_LINE(879)
							::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(879)
							{
								HX_STACK_LINE(879)
								::zpp_nape::geom::ZPP_CutInt tmp45 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(879)
								bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(879)
								if ((tmp46)){
									HX_STACK_LINE(879)
									::zpp_nape::geom::ZPP_CutInt tmp47 = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(879)
									ret = tmp47;
								}
								else{
									HX_STACK_LINE(879)
									::zpp_nape::geom::ZPP_CutInt tmp47 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(879)
									ret = tmp47;
									HX_STACK_LINE(879)
									::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
									HX_STACK_LINE(879)
									ret->next = null();
								}
								HX_STACK_LINE(879)
								Dynamic();
							}
							HX_STACK_LINE(879)
							ret->virtualint = false;
							HX_STACK_LINE(879)
							ret->end = endof;
							HX_STACK_LINE(879)
							ret->start = start;
							HX_STACK_LINE(879)
							ret->path0 = prepath;
							HX_STACK_LINE(879)
							ret->path1 = postpath;
							HX_STACK_LINE(879)
							ret->time = s;
							HX_STACK_LINE(879)
							ret->vertex = vertex;
							HX_STACK_LINE(879)
							tmp44 = ret;
						}
						HX_STACK_LINE(879)
						tmp43->add(tmp44);
					}
				}
			}
		}
		HX_STACK_LINE(883)
		i = i->next;
		HX_STACK_LINE(885)
		bool tmp18 = (i != verts);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(885)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(689)
		if ((tmp19)){
			HX_STACK_LINE(689)
			break;
		}
	}
	HX_STACK_LINE(886)
	::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
	HX_STACK_LINE(887)
	{
		HX_STACK_LINE(888)
		endof->next->prev = origin->prev;
		HX_STACK_LINE(889)
		origin->prev->next = endof->next;
		HX_STACK_LINE(890)
		endof->next = origin;
		HX_STACK_LINE(891)
		origin->prev = endof;
	}
	HX_STACK_LINE(893)
	::zpp_nape::util::ZNPList_ZPP_CutVert tmp16 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(893)
	::zpp_nape::geom::ZPP_CutVert tmp17 = tmp16->head->elt;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(893)
	::zpp_nape::geom::ZPP_CutVert lastpath = tmp17;		HX_STACK_VAR(lastpath,"lastpath");
	HX_STACK_LINE(894)
	{
		HX_STACK_LINE(895)
		::zpp_nape::geom::ZPP_CutVert tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(895)
		{
			HX_STACK_LINE(896)
			bool tmp19 = (firstpath == firstpath->parent);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(896)
			if ((tmp19)){
				HX_STACK_LINE(896)
				tmp18 = firstpath;
			}
			else{
				HX_STACK_LINE(898)
				::zpp_nape::geom::ZPP_CutVert obj = firstpath;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(899)
				::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(900)
				while((true)){
					HX_STACK_LINE(900)
					bool tmp20 = (obj != obj->parent);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(900)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(900)
					if ((tmp21)){
						HX_STACK_LINE(900)
						break;
					}
					HX_STACK_LINE(901)
					::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(902)
					obj->parent = stack;
					HX_STACK_LINE(903)
					stack = obj;
					HX_STACK_LINE(904)
					obj = nxt;
				}
				HX_STACK_LINE(906)
				while((true)){
					HX_STACK_LINE(906)
					bool tmp20 = (stack != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(906)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(906)
					if ((tmp21)){
						HX_STACK_LINE(906)
						break;
					}
					HX_STACK_LINE(907)
					::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(908)
					stack->parent = obj;
					HX_STACK_LINE(909)
					stack = nxt;
				}
				HX_STACK_LINE(911)
				tmp18 = obj;
			}
		}
		HX_STACK_LINE(895)
		::zpp_nape::geom::ZPP_CutVert xr = tmp18;		HX_STACK_VAR(xr,"xr");
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_CutVert tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(914)
		{
			HX_STACK_LINE(915)
			bool tmp20 = (lastpath == lastpath->parent);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(915)
			if ((tmp20)){
				HX_STACK_LINE(915)
				tmp19 = lastpath;
			}
			else{
				HX_STACK_LINE(917)
				::zpp_nape::geom::ZPP_CutVert obj = lastpath;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(918)
				::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(919)
				while((true)){
					HX_STACK_LINE(919)
					bool tmp21 = (obj != obj->parent);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(919)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(919)
					if ((tmp22)){
						HX_STACK_LINE(919)
						break;
					}
					HX_STACK_LINE(920)
					::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(921)
					obj->parent = stack;
					HX_STACK_LINE(922)
					stack = obj;
					HX_STACK_LINE(923)
					obj = nxt;
				}
				HX_STACK_LINE(925)
				while((true)){
					HX_STACK_LINE(925)
					bool tmp21 = (stack != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(925)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(925)
					if ((tmp22)){
						HX_STACK_LINE(925)
						break;
					}
					HX_STACK_LINE(926)
					::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(927)
					stack->parent = obj;
					HX_STACK_LINE(928)
					stack = nxt;
				}
				HX_STACK_LINE(930)
				tmp19 = obj;
			}
		}
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_CutVert yr = tmp19;		HX_STACK_VAR(yr,"yr");
		HX_STACK_LINE(933)
		bool tmp20 = (xr != yr);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(933)
		if ((tmp20)){
			HX_STACK_LINE(934)
			bool tmp21 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(934)
			if ((tmp21)){
				HX_STACK_LINE(934)
				xr->parent = yr;
			}
			else{
				HX_STACK_LINE(935)
				bool tmp22 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(935)
				if ((tmp22)){
					HX_STACK_LINE(935)
					yr->parent = xr;
				}
				else{
					HX_STACK_LINE(937)
					yr->parent = xr;
					HX_STACK_LINE(938)
					(xr->rank)++;
				}
			}
		}
	}
	HX_STACK_LINE(950)
	{
		HX_STACK_LINE(951)
		::zpp_nape::util::ZNPList_ZPP_CutInt tmp18 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(951)
		::zpp_nape::util::ZNPList_ZPP_CutInt xxlist = tmp18;		HX_STACK_VAR(xxlist,"xxlist");
		HX_STACK_LINE(952)
		bool tmp19 = (xxlist->head == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(952)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(952)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(952)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(952)
		if ((tmp21)){
			HX_STACK_LINE(952)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp23 = xxlist->head->next;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(952)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(952)
			tmp22 = (tmp24 != null());
		}
		else{
			HX_STACK_LINE(952)
			tmp22 = false;
		}
		HX_STACK_LINE(952)
		if ((tmp22)){
			HX_STACK_LINE(953)
			::zpp_nape::util::ZNPNode_ZPP_CutInt head = xxlist->head;		HX_STACK_VAR(head,"head");
			HX_STACK_LINE(954)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tail = null();		HX_STACK_VAR(tail,"tail");
			HX_STACK_LINE(955)
			::zpp_nape::util::ZNPNode_ZPP_CutInt left = null();		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(956)
			::zpp_nape::util::ZNPNode_ZPP_CutInt right = null();		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(957)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nxt = null();		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(958)
			int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
			HX_STACK_LINE(959)
			int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
			HX_STACK_LINE(959)
			int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
			HX_STACK_LINE(959)
			int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
			HX_STACK_LINE(960)
			while((true)){
				HX_STACK_LINE(961)
				numMerges = (int)0;
				HX_STACK_LINE(962)
				left = head;
				HX_STACK_LINE(963)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp23 = head = null();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(963)
				tail = tmp23;
				HX_STACK_LINE(964)
				while((true)){
					HX_STACK_LINE(964)
					bool tmp24 = (left != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(964)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(964)
					if ((tmp25)){
						HX_STACK_LINE(964)
						break;
					}
					HX_STACK_LINE(965)
					(numMerges)++;
					HX_STACK_LINE(966)
					right = left;
					HX_STACK_LINE(967)
					leftSize = (int)0;
					HX_STACK_LINE(968)
					rightSize = listSize;
					HX_STACK_LINE(969)
					while((true)){
						HX_STACK_LINE(969)
						bool tmp26 = (right != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(969)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(969)
						if ((tmp26)){
							HX_STACK_LINE(969)
							tmp27 = (leftSize < listSize);
						}
						else{
							HX_STACK_LINE(969)
							tmp27 = false;
						}
						HX_STACK_LINE(969)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(969)
						if ((tmp28)){
							HX_STACK_LINE(969)
							break;
						}
						HX_STACK_LINE(970)
						(leftSize)++;
						HX_STACK_LINE(971)
						right = right->next;
					}
					HX_STACK_LINE(973)
					while((true)){
						HX_STACK_LINE(973)
						bool tmp26 = (leftSize > (int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(973)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(973)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(973)
						if ((tmp27)){
							HX_STACK_LINE(973)
							bool tmp29 = (rightSize > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(973)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(973)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(973)
							if ((tmp31)){
								HX_STACK_LINE(973)
								tmp28 = (right != null());
							}
							else{
								HX_STACK_LINE(973)
								tmp28 = false;
							}
						}
						else{
							HX_STACK_LINE(973)
							tmp28 = true;
						}
						HX_STACK_LINE(973)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(973)
						if ((tmp29)){
							HX_STACK_LINE(973)
							break;
						}
						HX_STACK_LINE(974)
						bool tmp30 = (leftSize == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(974)
						if ((tmp30)){
							HX_STACK_LINE(975)
							nxt = right;
							HX_STACK_LINE(976)
							right = right->next;
							HX_STACK_LINE(977)
							(rightSize)--;
						}
						else{
							HX_STACK_LINE(979)
							bool tmp31 = (rightSize == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(979)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(979)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(979)
							if ((tmp32)){
								HX_STACK_LINE(979)
								tmp33 = (right == null());
							}
							else{
								HX_STACK_LINE(979)
								tmp33 = true;
							}
							HX_STACK_LINE(979)
							if ((tmp33)){
								HX_STACK_LINE(980)
								nxt = left;
								HX_STACK_LINE(981)
								left = left->next;
								HX_STACK_LINE(982)
								(leftSize)--;
							}
							else{
								HX_STACK_LINE(984)
								Float tmp34 = left->elt->time;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(984)
								Float tmp35 = right->elt->time;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(984)
								bool tmp36 = (tmp34 < tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(984)
								if ((tmp36)){
									HX_STACK_LINE(985)
									nxt = left;
									HX_STACK_LINE(986)
									left = left->next;
									HX_STACK_LINE(987)
									(leftSize)--;
								}
								else{
									HX_STACK_LINE(990)
									nxt = right;
									HX_STACK_LINE(991)
									right = right->next;
									HX_STACK_LINE(992)
									(rightSize)--;
								}
							}
						}
						HX_STACK_LINE(994)
						bool tmp31 = (tail != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(994)
						if ((tmp31)){
							HX_STACK_LINE(994)
							tail->next = nxt;
						}
						else{
							HX_STACK_LINE(995)
							head = nxt;
						}
						HX_STACK_LINE(996)
						tail = nxt;
					}
					HX_STACK_LINE(998)
					left = right;
				}
				HX_STACK_LINE(1000)
				tail->next = null();
				HX_STACK_LINE(1001)
				hx::ShlEq(listSize,(int)1);
				HX_STACK_LINE(1003)
				bool tmp24 = (numMerges > (int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1003)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(960)
				if ((tmp25)){
					HX_STACK_LINE(960)
					break;
				}
			}
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1004)
				xxlist->head = head;
				HX_STACK_LINE(1004)
				xxlist->modified = true;
				HX_STACK_LINE(1004)
				xxlist->pushmod = true;
			}
		}
	}
	HX_STACK_LINE(1007)
	while((true)){
		HX_STACK_LINE(1007)
		::zpp_nape::util::ZNPList_ZPP_CutInt tmp18 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1007)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp19 = tmp18->head;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1007)
		bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1007)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1007)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1007)
		if ((tmp22)){
			HX_STACK_LINE(1007)
			break;
		}
		HX_STACK_LINE(1008)
		::zpp_nape::util::ZNPList_ZPP_CutInt tmp23 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1008)
		::zpp_nape::geom::ZPP_CutInt tmp24 = tmp23->pop_unsafe();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1008)
		::zpp_nape::geom::ZPP_CutInt i1 = tmp24;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(1009)
		::zpp_nape::util::ZNPList_ZPP_CutInt tmp25 = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1009)
		::zpp_nape::geom::ZPP_CutInt tmp26 = tmp25->pop_unsafe();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1009)
		::zpp_nape::geom::ZPP_CutInt j = tmp26;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1010)
		bool tmp27 = i1->virtualint;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1010)
		bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1010)
		bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1010)
		bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1010)
		if ((tmp29)){
			HX_STACK_LINE(1010)
			bool tmp31 = j->virtualint;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1010)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1010)
			tmp30 = !(tmp32);
		}
		else{
			HX_STACK_LINE(1010)
			tmp30 = false;
		}
		HX_STACK_LINE(1010)
		if ((tmp30)){
			HX_STACK_LINE(1011)
			{
				HX_STACK_LINE(1012)
				::zpp_nape::geom::ZPP_GeomVert tmp31 = j->start->prev;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1012)
				::zpp_nape::geom::ZPP_GeomVert tmp32 = i1->end->next;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1012)
				tmp32->prev = tmp31;
				HX_STACK_LINE(1013)
				::zpp_nape::geom::ZPP_GeomVert tmp33 = i1->end->next;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1013)
				::zpp_nape::geom::ZPP_GeomVert tmp34 = j->start->prev;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1013)
				tmp34->next = tmp33;
				HX_STACK_LINE(1014)
				i1->end->next = j->start;
				HX_STACK_LINE(1015)
				j->start->prev = i1->end;
			}
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1018)
				::zpp_nape::geom::ZPP_GeomVert tmp31 = i1->start->prev;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1018)
				::zpp_nape::geom::ZPP_GeomVert tmp32 = j->end->next;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1018)
				tmp32->prev = tmp31;
				HX_STACK_LINE(1019)
				::zpp_nape::geom::ZPP_GeomVert tmp33 = j->end->next;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1019)
				::zpp_nape::geom::ZPP_GeomVert tmp34 = i1->start->prev;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1019)
				tmp34->next = tmp33;
				HX_STACK_LINE(1020)
				j->end->next = i1->start;
				HX_STACK_LINE(1021)
				i1->start->prev = j->end;
			}
			HX_STACK_LINE(1023)
			{
				HX_STACK_LINE(1024)
				::zpp_nape::geom::ZPP_CutVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1024)
				{
					HX_STACK_LINE(1025)
					::zpp_nape::geom::ZPP_CutVert tmp32 = i1->path0;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1025)
					::zpp_nape::geom::ZPP_CutVert tmp33 = i1->path0->parent;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1025)
					bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1025)
					if ((tmp34)){
						HX_STACK_LINE(1025)
						tmp31 = i1->path0;
					}
					else{
						HX_STACK_LINE(1027)
						::zpp_nape::geom::ZPP_CutVert obj = i1->path0;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1028)
						::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1029)
						while((true)){
							HX_STACK_LINE(1029)
							bool tmp35 = (obj != obj->parent);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1029)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1029)
							if ((tmp36)){
								HX_STACK_LINE(1029)
								break;
							}
							HX_STACK_LINE(1030)
							::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1031)
							obj->parent = stack;
							HX_STACK_LINE(1032)
							stack = obj;
							HX_STACK_LINE(1033)
							obj = nxt;
						}
						HX_STACK_LINE(1035)
						while((true)){
							HX_STACK_LINE(1035)
							bool tmp35 = (stack != null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1035)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1035)
							if ((tmp36)){
								HX_STACK_LINE(1035)
								break;
							}
							HX_STACK_LINE(1036)
							::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1037)
							stack->parent = obj;
							HX_STACK_LINE(1038)
							stack = nxt;
						}
						HX_STACK_LINE(1040)
						tmp31 = obj;
					}
				}
				HX_STACK_LINE(1024)
				::zpp_nape::geom::ZPP_CutVert xr = tmp31;		HX_STACK_VAR(xr,"xr");
				HX_STACK_LINE(1043)
				::zpp_nape::geom::ZPP_CutVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1043)
				{
					HX_STACK_LINE(1044)
					::zpp_nape::geom::ZPP_CutVert tmp33 = j->path1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1044)
					::zpp_nape::geom::ZPP_CutVert tmp34 = j->path1->parent;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1044)
					bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1044)
					if ((tmp35)){
						HX_STACK_LINE(1044)
						tmp32 = j->path1;
					}
					else{
						HX_STACK_LINE(1046)
						::zpp_nape::geom::ZPP_CutVert obj = j->path1;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1048)
						while((true)){
							HX_STACK_LINE(1048)
							bool tmp36 = (obj != obj->parent);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1048)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1048)
							if ((tmp37)){
								HX_STACK_LINE(1048)
								break;
							}
							HX_STACK_LINE(1049)
							::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1050)
							obj->parent = stack;
							HX_STACK_LINE(1051)
							stack = obj;
							HX_STACK_LINE(1052)
							obj = nxt;
						}
						HX_STACK_LINE(1054)
						while((true)){
							HX_STACK_LINE(1054)
							bool tmp36 = (stack != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1054)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1054)
							if ((tmp37)){
								HX_STACK_LINE(1054)
								break;
							}
							HX_STACK_LINE(1055)
							::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1056)
							stack->parent = obj;
							HX_STACK_LINE(1057)
							stack = nxt;
						}
						HX_STACK_LINE(1059)
						tmp32 = obj;
					}
				}
				HX_STACK_LINE(1043)
				::zpp_nape::geom::ZPP_CutVert yr = tmp32;		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(1062)
				bool tmp33 = (xr != yr);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1062)
				if ((tmp33)){
					HX_STACK_LINE(1063)
					bool tmp34 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1063)
					if ((tmp34)){
						HX_STACK_LINE(1063)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(1064)
						bool tmp35 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1064)
						if ((tmp35)){
							HX_STACK_LINE(1064)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(1066)
							yr->parent = xr;
							HX_STACK_LINE(1067)
							(xr->rank)++;
						}
					}
				}
			}
			HX_STACK_LINE(1071)
			{
				HX_STACK_LINE(1072)
				::zpp_nape::geom::ZPP_CutVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1072)
				{
					HX_STACK_LINE(1073)
					::zpp_nape::geom::ZPP_CutVert tmp32 = i1->path1;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1073)
					::zpp_nape::geom::ZPP_CutVert tmp33 = i1->path1->parent;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1073)
					bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1073)
					if ((tmp34)){
						HX_STACK_LINE(1073)
						tmp31 = i1->path1;
					}
					else{
						HX_STACK_LINE(1075)
						::zpp_nape::geom::ZPP_CutVert obj = i1->path1;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1076)
						::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1077)
						while((true)){
							HX_STACK_LINE(1077)
							bool tmp35 = (obj != obj->parent);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1077)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1077)
							if ((tmp36)){
								HX_STACK_LINE(1077)
								break;
							}
							HX_STACK_LINE(1078)
							::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1079)
							obj->parent = stack;
							HX_STACK_LINE(1080)
							stack = obj;
							HX_STACK_LINE(1081)
							obj = nxt;
						}
						HX_STACK_LINE(1083)
						while((true)){
							HX_STACK_LINE(1083)
							bool tmp35 = (stack != null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1083)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1083)
							if ((tmp36)){
								HX_STACK_LINE(1083)
								break;
							}
							HX_STACK_LINE(1084)
							::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1085)
							stack->parent = obj;
							HX_STACK_LINE(1086)
							stack = nxt;
						}
						HX_STACK_LINE(1088)
						tmp31 = obj;
					}
				}
				HX_STACK_LINE(1072)
				::zpp_nape::geom::ZPP_CutVert xr = tmp31;		HX_STACK_VAR(xr,"xr");
				HX_STACK_LINE(1091)
				::zpp_nape::geom::ZPP_CutVert tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1091)
				{
					HX_STACK_LINE(1092)
					::zpp_nape::geom::ZPP_CutVert tmp33 = j->path0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1092)
					::zpp_nape::geom::ZPP_CutVert tmp34 = j->path0->parent;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1092)
					bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1092)
					if ((tmp35)){
						HX_STACK_LINE(1092)
						tmp32 = j->path0;
					}
					else{
						HX_STACK_LINE(1094)
						::zpp_nape::geom::ZPP_CutVert obj = j->path0;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1095)
						::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1096)
						while((true)){
							HX_STACK_LINE(1096)
							bool tmp36 = (obj != obj->parent);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1096)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1096)
							if ((tmp37)){
								HX_STACK_LINE(1096)
								break;
							}
							HX_STACK_LINE(1097)
							::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1098)
							obj->parent = stack;
							HX_STACK_LINE(1099)
							stack = obj;
							HX_STACK_LINE(1100)
							obj = nxt;
						}
						HX_STACK_LINE(1102)
						while((true)){
							HX_STACK_LINE(1102)
							bool tmp36 = (stack != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1102)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1102)
							if ((tmp37)){
								HX_STACK_LINE(1102)
								break;
							}
							HX_STACK_LINE(1103)
							::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1104)
							stack->parent = obj;
							HX_STACK_LINE(1105)
							stack = nxt;
						}
						HX_STACK_LINE(1107)
						tmp32 = obj;
					}
				}
				HX_STACK_LINE(1091)
				::zpp_nape::geom::ZPP_CutVert yr = tmp32;		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(1110)
				bool tmp33 = (xr != yr);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1110)
				if ((tmp33)){
					HX_STACK_LINE(1111)
					bool tmp34 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1111)
					if ((tmp34)){
						HX_STACK_LINE(1111)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(1112)
						bool tmp35 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1112)
						if ((tmp35)){
							HX_STACK_LINE(1112)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(1114)
							yr->parent = xr;
							HX_STACK_LINE(1115)
							(xr->rank)++;
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1120)
			bool tmp31 = i1->virtualint;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1120)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1120)
			if ((tmp31)){
				HX_STACK_LINE(1120)
				bool tmp33 = j->virtualint;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1120)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1120)
				tmp32 = !(tmp34);
			}
			else{
				HX_STACK_LINE(1120)
				tmp32 = false;
			}
			HX_STACK_LINE(1120)
			if ((tmp32)){
				HX_STACK_LINE(1121)
				::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1121)
				{
					HX_STACK_LINE(1130)
					bool tmp34 = (j->end != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1130)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1130)
					if ((tmp34)){
						HX_STACK_LINE(1130)
						::zpp_nape::geom::ZPP_GeomVert tmp36 = j->end->prev;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1130)
						::zpp_nape::geom::ZPP_GeomVert tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1130)
						::zpp_nape::geom::ZPP_GeomVert tmp38 = j->end;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1130)
						tmp35 = (tmp37 == tmp38);
					}
					else{
						HX_STACK_LINE(1130)
						tmp35 = false;
					}
					HX_STACK_LINE(1130)
					if ((tmp35)){
						HX_STACK_LINE(1131)
						::zpp_nape::geom::ZPP_GeomVert tmp36 = j->end->prev = null();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1131)
						j->end->next = tmp36;
						HX_STACK_LINE(1132)
						{
							HX_STACK_LINE(1133)
							::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1142)
							{
								HX_STACK_LINE(1142)
								bool tmp37 = (o->wrap != null());		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1142)
								if ((tmp37)){
									HX_STACK_LINE(1142)
									::zpp_nape::geom::ZPP_Vec2 tmp38 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1142)
									tmp38->_inuse = false;
									HX_STACK_LINE(1142)
									{
										HX_STACK_LINE(1142)
										::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1142)
										{
											HX_STACK_LINE(1142)
											bool tmp39 = (_this != null());		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1142)
											bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1142)
											if ((tmp39)){
												HX_STACK_LINE(1142)
												tmp40 = _this->zpp_disp;
											}
											else{
												HX_STACK_LINE(1142)
												tmp40 = false;
											}
											HX_STACK_LINE(1142)
											if ((tmp40)){
												HX_STACK_LINE(1142)
												::String tmp41 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1142)
												::String tmp42 = (tmp41 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1142)
												HX_STACK_DO_THROW(tmp42);
											}
										}
										HX_STACK_LINE(1142)
										{
											HX_STACK_LINE(1142)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1142)
											bool tmp39 = _this1->_immutable;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1142)
											if ((tmp39)){
												HX_STACK_LINE(1142)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
											}
											HX_STACK_LINE(1142)
											bool tmp40 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1142)
											if ((tmp40)){
												HX_STACK_LINE(1142)
												_this1->_isimmutable();
											}
										}
										HX_STACK_LINE(1142)
										bool tmp39 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1142)
										if ((tmp39)){
											HX_STACK_LINE(1142)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
										}
										HX_STACK_LINE(1142)
										::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1142)
										_this->zpp_inner->outer = null();
										HX_STACK_LINE(1142)
										_this->zpp_inner = null();
										HX_STACK_LINE(1142)
										{
											HX_STACK_LINE(1142)
											::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1142)
											o1->zpp_pool = null();
											HX_STACK_LINE(1142)
											::nape::geom::Vec2 tmp40 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1142)
											bool tmp41 = (tmp40 != null());		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1142)
											if ((tmp41)){
												HX_STACK_LINE(1142)
												::nape::geom::Vec2 tmp42 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1142)
												tmp42->zpp_pool = o1;
											}
											else{
												HX_STACK_LINE(1142)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
											}
											HX_STACK_LINE(1142)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
											HX_STACK_LINE(1142)
											o1->zpp_disp = true;
										}
										HX_STACK_LINE(1142)
										{
											HX_STACK_LINE(1142)
											::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1142)
											{
												HX_STACK_LINE(1142)
												bool tmp40 = (o1->outer != null());		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1142)
												if ((tmp40)){
													HX_STACK_LINE(1142)
													o1->outer->zpp_inner = null();
													HX_STACK_LINE(1142)
													o1->outer = null();
												}
												HX_STACK_LINE(1142)
												o1->_isimmutable = null();
												HX_STACK_LINE(1142)
												o1->_validate = null();
												HX_STACK_LINE(1142)
												o1->_invalidate = null();
											}
											HX_STACK_LINE(1142)
											::zpp_nape::geom::ZPP_Vec2 tmp40 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1142)
											o1->next = tmp40;
											HX_STACK_LINE(1142)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
										}
									}
									HX_STACK_LINE(1142)
									o->wrap = null();
								}
								HX_STACK_LINE(1142)
								::zpp_nape::geom::ZPP_GeomVert tmp38 = o->next = null();		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1142)
								o->prev = tmp38;
							}
							HX_STACK_LINE(1143)
							::zpp_nape::geom::ZPP_GeomVert tmp37 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1143)
							o->next = tmp37;
							HX_STACK_LINE(1144)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1149)
						tmp33 = null();
					}
					else{
						HX_STACK_LINE(1152)
						::zpp_nape::geom::ZPP_GeomVert tmp36 = j->end->prev;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1152)
						::zpp_nape::geom::ZPP_GeomVert retnodes = tmp36;		HX_STACK_VAR(retnodes,"retnodes");
						HX_STACK_LINE(1153)
						::zpp_nape::geom::ZPP_GeomVert tmp37 = j->end->next;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1153)
						::zpp_nape::geom::ZPP_GeomVert tmp38 = j->end->prev;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1153)
						tmp38->next = tmp37;
						HX_STACK_LINE(1154)
						::zpp_nape::geom::ZPP_GeomVert tmp39 = j->end->prev;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1154)
						::zpp_nape::geom::ZPP_GeomVert tmp40 = j->end->next;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1154)
						tmp40->prev = tmp39;
						HX_STACK_LINE(1155)
						::zpp_nape::geom::ZPP_GeomVert tmp41 = j->end->prev = null();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1155)
						j->end->next = tmp41;
						HX_STACK_LINE(1156)
						{
							HX_STACK_LINE(1157)
							::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1166)
							{
								HX_STACK_LINE(1166)
								bool tmp42 = (o->wrap != null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1166)
								if ((tmp42)){
									HX_STACK_LINE(1166)
									::zpp_nape::geom::ZPP_Vec2 tmp43 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1166)
									tmp43->_inuse = false;
									HX_STACK_LINE(1166)
									{
										HX_STACK_LINE(1166)
										::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1166)
										{
											HX_STACK_LINE(1166)
											bool tmp44 = (_this != null());		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1166)
											bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1166)
											if ((tmp44)){
												HX_STACK_LINE(1166)
												tmp45 = _this->zpp_disp;
											}
											else{
												HX_STACK_LINE(1166)
												tmp45 = false;
											}
											HX_STACK_LINE(1166)
											if ((tmp45)){
												HX_STACK_LINE(1166)
												::String tmp46 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1166)
												::String tmp47 = (tmp46 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1166)
												HX_STACK_DO_THROW(tmp47);
											}
										}
										HX_STACK_LINE(1166)
										{
											HX_STACK_LINE(1166)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1166)
											bool tmp44 = _this1->_immutable;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1166)
											if ((tmp44)){
												HX_STACK_LINE(1166)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
											}
											HX_STACK_LINE(1166)
											bool tmp45 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1166)
											if ((tmp45)){
												HX_STACK_LINE(1166)
												_this1->_isimmutable();
											}
										}
										HX_STACK_LINE(1166)
										bool tmp44 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1166)
										if ((tmp44)){
											HX_STACK_LINE(1166)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
										}
										HX_STACK_LINE(1166)
										::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1166)
										_this->zpp_inner->outer = null();
										HX_STACK_LINE(1166)
										_this->zpp_inner = null();
										HX_STACK_LINE(1166)
										{
											HX_STACK_LINE(1166)
											::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1166)
											o1->zpp_pool = null();
											HX_STACK_LINE(1166)
											::nape::geom::Vec2 tmp45 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1166)
											bool tmp46 = (tmp45 != null());		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1166)
											if ((tmp46)){
												HX_STACK_LINE(1166)
												::nape::geom::Vec2 tmp47 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1166)
												tmp47->zpp_pool = o1;
											}
											else{
												HX_STACK_LINE(1166)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
											}
											HX_STACK_LINE(1166)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
											HX_STACK_LINE(1166)
											o1->zpp_disp = true;
										}
										HX_STACK_LINE(1166)
										{
											HX_STACK_LINE(1166)
											::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
											HX_STACK_LINE(1166)
											{
												HX_STACK_LINE(1166)
												bool tmp45 = (o1->outer != null());		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1166)
												if ((tmp45)){
													HX_STACK_LINE(1166)
													o1->outer->zpp_inner = null();
													HX_STACK_LINE(1166)
													o1->outer = null();
												}
												HX_STACK_LINE(1166)
												o1->_isimmutable = null();
												HX_STACK_LINE(1166)
												o1->_validate = null();
												HX_STACK_LINE(1166)
												o1->_invalidate = null();
											}
											HX_STACK_LINE(1166)
											::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1166)
											o1->next = tmp45;
											HX_STACK_LINE(1166)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
										}
									}
									HX_STACK_LINE(1166)
									o->wrap = null();
								}
								HX_STACK_LINE(1166)
								::zpp_nape::geom::ZPP_GeomVert tmp43 = o->next = null();		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1166)
								o->prev = tmp43;
							}
							HX_STACK_LINE(1167)
							::zpp_nape::geom::ZPP_GeomVert tmp42 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1167)
							o->next = tmp42;
							HX_STACK_LINE(1168)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1173)
						j->end = null();
						HX_STACK_LINE(1174)
						tmp33 = retnodes;
					}
				}
				HX_STACK_LINE(1121)
				j->end = tmp33;
				HX_STACK_LINE(1177)
				bool tmp34 = j->vertex;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1177)
				bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1177)
				if ((tmp35)){
					HX_STACK_LINE(1178)
					::zpp_nape::geom::ZPP_GeomVert tmp36 = j->end;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1178)
					::zpp_nape::geom::ZPP_GeomVert tmp37 = j->path0->vert;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1178)
					bool tmp38 = (tmp36 != tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1178)
					if ((tmp38)){
						HX_STACK_LINE(1179)
						Float tmp39 = j->end->x;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1179)
						j->start->x = tmp39;
						HX_STACK_LINE(1180)
						Float tmp40 = j->end->y;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1180)
						j->start->y = tmp40;
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_GeomVert tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1181)
						{
							HX_STACK_LINE(1190)
							bool tmp42 = (j->end != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1190)
							bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1190)
							if ((tmp42)){
								HX_STACK_LINE(1190)
								::zpp_nape::geom::ZPP_GeomVert tmp44 = j->end->prev;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1190)
								::zpp_nape::geom::ZPP_GeomVert tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1190)
								::zpp_nape::geom::ZPP_GeomVert tmp46 = j->end;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1190)
								tmp43 = (tmp45 == tmp46);
							}
							else{
								HX_STACK_LINE(1190)
								tmp43 = false;
							}
							HX_STACK_LINE(1190)
							if ((tmp43)){
								HX_STACK_LINE(1191)
								::zpp_nape::geom::ZPP_GeomVert tmp44 = j->end->prev = null();		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1191)
								j->end->next = tmp44;
								HX_STACK_LINE(1192)
								{
									HX_STACK_LINE(1193)
									::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1202)
									{
										HX_STACK_LINE(1202)
										bool tmp45 = (o->wrap != null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1202)
										if ((tmp45)){
											HX_STACK_LINE(1202)
											::zpp_nape::geom::ZPP_Vec2 tmp46 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1202)
											tmp46->_inuse = false;
											HX_STACK_LINE(1202)
											{
												HX_STACK_LINE(1202)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1202)
												{
													HX_STACK_LINE(1202)
													bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1202)
													bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(1202)
													if ((tmp47)){
														HX_STACK_LINE(1202)
														tmp48 = _this->zpp_disp;
													}
													else{
														HX_STACK_LINE(1202)
														tmp48 = false;
													}
													HX_STACK_LINE(1202)
													if ((tmp48)){
														HX_STACK_LINE(1202)
														::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(1202)
														::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(1202)
														HX_STACK_DO_THROW(tmp50);
													}
												}
												HX_STACK_LINE(1202)
												{
													HX_STACK_LINE(1202)
													::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1202)
													bool tmp47 = _this1->_immutable;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1202)
													if ((tmp47)){
														HX_STACK_LINE(1202)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
													}
													HX_STACK_LINE(1202)
													bool tmp48 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(1202)
													if ((tmp48)){
														HX_STACK_LINE(1202)
														_this1->_isimmutable();
													}
												}
												HX_STACK_LINE(1202)
												bool tmp47 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1202)
												if ((tmp47)){
													HX_STACK_LINE(1202)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
												}
												HX_STACK_LINE(1202)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1202)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1202)
												_this->zpp_inner = null();
												HX_STACK_LINE(1202)
												{
													HX_STACK_LINE(1202)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1202)
													o1->zpp_pool = null();
													HX_STACK_LINE(1202)
													::nape::geom::Vec2 tmp48 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(1202)
													bool tmp49 = (tmp48 != null());		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(1202)
													if ((tmp49)){
														HX_STACK_LINE(1202)
														::nape::geom::Vec2 tmp50 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(1202)
														tmp50->zpp_pool = o1;
													}
													else{
														HX_STACK_LINE(1202)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
													}
													HX_STACK_LINE(1202)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
													HX_STACK_LINE(1202)
													o1->zpp_disp = true;
												}
												HX_STACK_LINE(1202)
												{
													HX_STACK_LINE(1202)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1202)
													{
														HX_STACK_LINE(1202)
														bool tmp48 = (o1->outer != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1202)
														if ((tmp48)){
															HX_STACK_LINE(1202)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1202)
															o1->outer = null();
														}
														HX_STACK_LINE(1202)
														o1->_isimmutable = null();
														HX_STACK_LINE(1202)
														o1->_validate = null();
														HX_STACK_LINE(1202)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1202)
													::zpp_nape::geom::ZPP_Vec2 tmp48 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(1202)
													o1->next = tmp48;
													HX_STACK_LINE(1202)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1202)
											o->wrap = null();
										}
										HX_STACK_LINE(1202)
										::zpp_nape::geom::ZPP_GeomVert tmp46 = o->next = null();		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1202)
										o->prev = tmp46;
									}
									HX_STACK_LINE(1203)
									::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1203)
									o->next = tmp45;
									HX_STACK_LINE(1204)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1209)
								tmp41 = null();
							}
							else{
								HX_STACK_LINE(1212)
								::zpp_nape::geom::ZPP_GeomVert tmp44 = j->end->prev;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1212)
								::zpp_nape::geom::ZPP_GeomVert retnodes = tmp44;		HX_STACK_VAR(retnodes,"retnodes");
								HX_STACK_LINE(1213)
								::zpp_nape::geom::ZPP_GeomVert tmp45 = j->end->next;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1213)
								::zpp_nape::geom::ZPP_GeomVert tmp46 = j->end->prev;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1213)
								tmp46->next = tmp45;
								HX_STACK_LINE(1214)
								::zpp_nape::geom::ZPP_GeomVert tmp47 = j->end->prev;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1214)
								::zpp_nape::geom::ZPP_GeomVert tmp48 = j->end->next;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1214)
								tmp48->prev = tmp47;
								HX_STACK_LINE(1215)
								::zpp_nape::geom::ZPP_GeomVert tmp49 = j->end->prev = null();		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1215)
								j->end->next = tmp49;
								HX_STACK_LINE(1216)
								{
									HX_STACK_LINE(1217)
									::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1226)
									{
										HX_STACK_LINE(1226)
										bool tmp50 = (o->wrap != null());		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1226)
										if ((tmp50)){
											HX_STACK_LINE(1226)
											::zpp_nape::geom::ZPP_Vec2 tmp51 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(1226)
											tmp51->_inuse = false;
											HX_STACK_LINE(1226)
											{
												HX_STACK_LINE(1226)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1226)
												{
													HX_STACK_LINE(1226)
													bool tmp52 = (_this != null());		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(1226)
													bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(1226)
													if ((tmp52)){
														HX_STACK_LINE(1226)
														tmp53 = _this->zpp_disp;
													}
													else{
														HX_STACK_LINE(1226)
														tmp53 = false;
													}
													HX_STACK_LINE(1226)
													if ((tmp53)){
														HX_STACK_LINE(1226)
														::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(1226)
														::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(1226)
														HX_STACK_DO_THROW(tmp55);
													}
												}
												HX_STACK_LINE(1226)
												{
													HX_STACK_LINE(1226)
													::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1226)
													bool tmp52 = _this1->_immutable;		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(1226)
													if ((tmp52)){
														HX_STACK_LINE(1226)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
													}
													HX_STACK_LINE(1226)
													bool tmp53 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(1226)
													if ((tmp53)){
														HX_STACK_LINE(1226)
														_this1->_isimmutable();
													}
												}
												HX_STACK_LINE(1226)
												bool tmp52 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1226)
												if ((tmp52)){
													HX_STACK_LINE(1226)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
												}
												HX_STACK_LINE(1226)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1226)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1226)
												_this->zpp_inner = null();
												HX_STACK_LINE(1226)
												{
													HX_STACK_LINE(1226)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1226)
													o1->zpp_pool = null();
													HX_STACK_LINE(1226)
													::nape::geom::Vec2 tmp53 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(1226)
													bool tmp54 = (tmp53 != null());		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(1226)
													if ((tmp54)){
														HX_STACK_LINE(1226)
														::nape::geom::Vec2 tmp55 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(1226)
														tmp55->zpp_pool = o1;
													}
													else{
														HX_STACK_LINE(1226)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
													}
													HX_STACK_LINE(1226)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
													HX_STACK_LINE(1226)
													o1->zpp_disp = true;
												}
												HX_STACK_LINE(1226)
												{
													HX_STACK_LINE(1226)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1226)
													{
														HX_STACK_LINE(1226)
														bool tmp53 = (o1->outer != null());		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1226)
														if ((tmp53)){
															HX_STACK_LINE(1226)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1226)
															o1->outer = null();
														}
														HX_STACK_LINE(1226)
														o1->_isimmutable = null();
														HX_STACK_LINE(1226)
														o1->_validate = null();
														HX_STACK_LINE(1226)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1226)
													::zpp_nape::geom::ZPP_Vec2 tmp53 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(1226)
													o1->next = tmp53;
													HX_STACK_LINE(1226)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1226)
											o->wrap = null();
										}
										HX_STACK_LINE(1226)
										::zpp_nape::geom::ZPP_GeomVert tmp51 = o->next = null();		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(1226)
										o->prev = tmp51;
									}
									HX_STACK_LINE(1227)
									::zpp_nape::geom::ZPP_GeomVert tmp50 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1227)
									o->next = tmp50;
									HX_STACK_LINE(1228)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1233)
								j->end = null();
								HX_STACK_LINE(1234)
								tmp41 = retnodes;
							}
						}
						HX_STACK_LINE(1181)
						j->end = tmp41;
					}
					else{
						HX_STACK_LINE(1239)
						::zpp_nape::geom::ZPP_GeomVert tmp39 = j->start->next;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1239)
						::zpp_nape::geom::ZPP_GeomVert n = tmp39;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(1240)
						j->start->x = n->x;
						HX_STACK_LINE(1241)
						j->start->y = n->y;
						HX_STACK_LINE(1242)
						{
							HX_STACK_LINE(1251)
							bool tmp40 = (n != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1251)
							bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1251)
							if ((tmp40)){
								HX_STACK_LINE(1251)
								tmp41 = (n->prev == n);
							}
							else{
								HX_STACK_LINE(1251)
								tmp41 = false;
							}
							HX_STACK_LINE(1251)
							if ((tmp41)){
								HX_STACK_LINE(1252)
								::zpp_nape::geom::ZPP_GeomVert tmp42 = n->prev = null();		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1252)
								n->next = tmp42;
								HX_STACK_LINE(1253)
								{
									HX_STACK_LINE(1254)
									::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1263)
									{
										HX_STACK_LINE(1263)
										bool tmp43 = (o->wrap != null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1263)
										if ((tmp43)){
											HX_STACK_LINE(1263)
											::zpp_nape::geom::ZPP_Vec2 tmp44 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1263)
											tmp44->_inuse = false;
											HX_STACK_LINE(1263)
											{
												HX_STACK_LINE(1263)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1263)
												{
													HX_STACK_LINE(1263)
													bool tmp45 = (_this != null());		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1263)
													bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1263)
													if ((tmp45)){
														HX_STACK_LINE(1263)
														tmp46 = _this->zpp_disp;
													}
													else{
														HX_STACK_LINE(1263)
														tmp46 = false;
													}
													HX_STACK_LINE(1263)
													if ((tmp46)){
														HX_STACK_LINE(1263)
														::String tmp47 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1263)
														::String tmp48 = (tmp47 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1263)
														HX_STACK_DO_THROW(tmp48);
													}
												}
												HX_STACK_LINE(1263)
												{
													HX_STACK_LINE(1263)
													::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1263)
													bool tmp45 = _this1->_immutable;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1263)
													if ((tmp45)){
														HX_STACK_LINE(1263)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
													}
													HX_STACK_LINE(1263)
													bool tmp46 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1263)
													if ((tmp46)){
														HX_STACK_LINE(1263)
														_this1->_isimmutable();
													}
												}
												HX_STACK_LINE(1263)
												bool tmp45 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1263)
												if ((tmp45)){
													HX_STACK_LINE(1263)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
												}
												HX_STACK_LINE(1263)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1263)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1263)
												_this->zpp_inner = null();
												HX_STACK_LINE(1263)
												{
													HX_STACK_LINE(1263)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1263)
													o1->zpp_pool = null();
													HX_STACK_LINE(1263)
													::nape::geom::Vec2 tmp46 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1263)
													bool tmp47 = (tmp46 != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1263)
													if ((tmp47)){
														HX_STACK_LINE(1263)
														::nape::geom::Vec2 tmp48 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1263)
														tmp48->zpp_pool = o1;
													}
													else{
														HX_STACK_LINE(1263)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
													}
													HX_STACK_LINE(1263)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
													HX_STACK_LINE(1263)
													o1->zpp_disp = true;
												}
												HX_STACK_LINE(1263)
												{
													HX_STACK_LINE(1263)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1263)
													{
														HX_STACK_LINE(1263)
														bool tmp46 = (o1->outer != null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1263)
														if ((tmp46)){
															HX_STACK_LINE(1263)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1263)
															o1->outer = null();
														}
														HX_STACK_LINE(1263)
														o1->_isimmutable = null();
														HX_STACK_LINE(1263)
														o1->_validate = null();
														HX_STACK_LINE(1263)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1263)
													::zpp_nape::geom::ZPP_Vec2 tmp46 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1263)
													o1->next = tmp46;
													HX_STACK_LINE(1263)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1263)
											o->wrap = null();
										}
										HX_STACK_LINE(1263)
										::zpp_nape::geom::ZPP_GeomVert tmp44 = o->next = null();		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1263)
										o->prev = tmp44;
									}
									HX_STACK_LINE(1264)
									::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1264)
									o->next = tmp43;
									HX_STACK_LINE(1265)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1270)
								n = null();
							}
							else{
								HX_STACK_LINE(1273)
								n->prev->next = n->next;
								HX_STACK_LINE(1274)
								n->next->prev = n->prev;
								HX_STACK_LINE(1275)
								::zpp_nape::geom::ZPP_GeomVert tmp42 = n->prev = null();		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1275)
								n->next = tmp42;
								HX_STACK_LINE(1276)
								{
									HX_STACK_LINE(1277)
									::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1286)
									{
										HX_STACK_LINE(1286)
										bool tmp43 = (o->wrap != null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1286)
										if ((tmp43)){
											HX_STACK_LINE(1286)
											::zpp_nape::geom::ZPP_Vec2 tmp44 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1286)
											tmp44->_inuse = false;
											HX_STACK_LINE(1286)
											{
												HX_STACK_LINE(1286)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1286)
												{
													HX_STACK_LINE(1286)
													bool tmp45 = (_this != null());		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1286)
													bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1286)
													if ((tmp45)){
														HX_STACK_LINE(1286)
														tmp46 = _this->zpp_disp;
													}
													else{
														HX_STACK_LINE(1286)
														tmp46 = false;
													}
													HX_STACK_LINE(1286)
													if ((tmp46)){
														HX_STACK_LINE(1286)
														::String tmp47 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1286)
														::String tmp48 = (tmp47 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1286)
														HX_STACK_DO_THROW(tmp48);
													}
												}
												HX_STACK_LINE(1286)
												{
													HX_STACK_LINE(1286)
													::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1286)
													bool tmp45 = _this1->_immutable;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1286)
													if ((tmp45)){
														HX_STACK_LINE(1286)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
													}
													HX_STACK_LINE(1286)
													bool tmp46 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1286)
													if ((tmp46)){
														HX_STACK_LINE(1286)
														_this1->_isimmutable();
													}
												}
												HX_STACK_LINE(1286)
												bool tmp45 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1286)
												if ((tmp45)){
													HX_STACK_LINE(1286)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
												}
												HX_STACK_LINE(1286)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1286)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1286)
												_this->zpp_inner = null();
												HX_STACK_LINE(1286)
												{
													HX_STACK_LINE(1286)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1286)
													o1->zpp_pool = null();
													HX_STACK_LINE(1286)
													::nape::geom::Vec2 tmp46 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1286)
													bool tmp47 = (tmp46 != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1286)
													if ((tmp47)){
														HX_STACK_LINE(1286)
														::nape::geom::Vec2 tmp48 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1286)
														tmp48->zpp_pool = o1;
													}
													else{
														HX_STACK_LINE(1286)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
													}
													HX_STACK_LINE(1286)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
													HX_STACK_LINE(1286)
													o1->zpp_disp = true;
												}
												HX_STACK_LINE(1286)
												{
													HX_STACK_LINE(1286)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1286)
													{
														HX_STACK_LINE(1286)
														bool tmp46 = (o1->outer != null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1286)
														if ((tmp46)){
															HX_STACK_LINE(1286)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1286)
															o1->outer = null();
														}
														HX_STACK_LINE(1286)
														o1->_isimmutable = null();
														HX_STACK_LINE(1286)
														o1->_validate = null();
														HX_STACK_LINE(1286)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1286)
													::zpp_nape::geom::ZPP_Vec2 tmp46 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1286)
													o1->next = tmp46;
													HX_STACK_LINE(1286)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1286)
											o->wrap = null();
										}
										HX_STACK_LINE(1286)
										::zpp_nape::geom::ZPP_GeomVert tmp44 = o->next = null();		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1286)
										o->prev = tmp44;
									}
									HX_STACK_LINE(1287)
									::zpp_nape::geom::ZPP_GeomVert tmp43 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1287)
									o->next = tmp43;
									HX_STACK_LINE(1288)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
							}
						}
					}
				}
				HX_STACK_LINE(1297)
				{
					HX_STACK_LINE(1298)
					::zpp_nape::geom::ZPP_GeomVert tmp36 = j->start->prev;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1298)
					::zpp_nape::geom::ZPP_GeomVert tmp37 = j->end->next;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1298)
					tmp37->prev = tmp36;
					HX_STACK_LINE(1299)
					::zpp_nape::geom::ZPP_GeomVert tmp38 = j->end->next;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1299)
					::zpp_nape::geom::ZPP_GeomVert tmp39 = j->start->prev;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1299)
					tmp39->next = tmp38;
					HX_STACK_LINE(1300)
					j->end->next = j->start;
					HX_STACK_LINE(1301)
					j->start->prev = j->end;
				}
				HX_STACK_LINE(1303)
				{
					HX_STACK_LINE(1304)
					::zpp_nape::geom::ZPP_CutVert tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1304)
					{
						HX_STACK_LINE(1305)
						::zpp_nape::geom::ZPP_CutVert tmp37 = j->path0;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1305)
						::zpp_nape::geom::ZPP_CutVert tmp38 = j->path0->parent;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1305)
						bool tmp39 = (tmp37 == tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1305)
						if ((tmp39)){
							HX_STACK_LINE(1305)
							tmp36 = j->path0;
						}
						else{
							HX_STACK_LINE(1307)
							::zpp_nape::geom::ZPP_CutVert obj = j->path0;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1308)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1309)
							while((true)){
								HX_STACK_LINE(1309)
								bool tmp40 = (obj != obj->parent);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1309)
								bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1309)
								if ((tmp41)){
									HX_STACK_LINE(1309)
									break;
								}
								HX_STACK_LINE(1310)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1311)
								obj->parent = stack;
								HX_STACK_LINE(1312)
								stack = obj;
								HX_STACK_LINE(1313)
								obj = nxt;
							}
							HX_STACK_LINE(1315)
							while((true)){
								HX_STACK_LINE(1315)
								bool tmp40 = (stack != null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1315)
								bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1315)
								if ((tmp41)){
									HX_STACK_LINE(1315)
									break;
								}
								HX_STACK_LINE(1316)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1317)
								stack->parent = obj;
								HX_STACK_LINE(1318)
								stack = nxt;
							}
							HX_STACK_LINE(1320)
							tmp36 = obj;
						}
					}
					HX_STACK_LINE(1304)
					::zpp_nape::geom::ZPP_CutVert xr = tmp36;		HX_STACK_VAR(xr,"xr");
					HX_STACK_LINE(1323)
					::zpp_nape::geom::ZPP_CutVert tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1323)
					{
						HX_STACK_LINE(1324)
						::zpp_nape::geom::ZPP_CutVert tmp38 = j->path1;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1324)
						::zpp_nape::geom::ZPP_CutVert tmp39 = j->path1->parent;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1324)
						bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1324)
						if ((tmp40)){
							HX_STACK_LINE(1324)
							tmp37 = j->path1;
						}
						else{
							HX_STACK_LINE(1326)
							::zpp_nape::geom::ZPP_CutVert obj = j->path1;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1327)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1328)
							while((true)){
								HX_STACK_LINE(1328)
								bool tmp41 = (obj != obj->parent);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1328)
								bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1328)
								if ((tmp42)){
									HX_STACK_LINE(1328)
									break;
								}
								HX_STACK_LINE(1329)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1330)
								obj->parent = stack;
								HX_STACK_LINE(1331)
								stack = obj;
								HX_STACK_LINE(1332)
								obj = nxt;
							}
							HX_STACK_LINE(1334)
							while((true)){
								HX_STACK_LINE(1334)
								bool tmp41 = (stack != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1334)
								bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1334)
								if ((tmp42)){
									HX_STACK_LINE(1334)
									break;
								}
								HX_STACK_LINE(1335)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1336)
								stack->parent = obj;
								HX_STACK_LINE(1337)
								stack = nxt;
							}
							HX_STACK_LINE(1339)
							tmp37 = obj;
						}
					}
					HX_STACK_LINE(1323)
					::zpp_nape::geom::ZPP_CutVert yr = tmp37;		HX_STACK_VAR(yr,"yr");
					HX_STACK_LINE(1342)
					bool tmp38 = (xr != yr);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1342)
					if ((tmp38)){
						HX_STACK_LINE(1343)
						bool tmp39 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1343)
						if ((tmp39)){
							HX_STACK_LINE(1343)
							xr->parent = yr;
						}
						else{
							HX_STACK_LINE(1344)
							bool tmp40 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1344)
							if ((tmp40)){
								HX_STACK_LINE(1344)
								yr->parent = xr;
							}
							else{
								HX_STACK_LINE(1346)
								yr->parent = xr;
								HX_STACK_LINE(1347)
								(xr->rank)++;
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1352)
				bool tmp33 = j->virtualint;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1352)
				bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1352)
				if ((tmp33)){
					HX_STACK_LINE(1352)
					bool tmp35 = i1->virtualint;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1352)
					bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1352)
					tmp34 = !(tmp36);
				}
				else{
					HX_STACK_LINE(1352)
					tmp34 = false;
				}
				HX_STACK_LINE(1352)
				if ((tmp34)){
					HX_STACK_LINE(1353)
					::zpp_nape::geom::ZPP_GeomVert tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1353)
					{
						HX_STACK_LINE(1362)
						bool tmp36 = (i1->end != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1362)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1362)
						if ((tmp36)){
							HX_STACK_LINE(1362)
							::zpp_nape::geom::ZPP_GeomVert tmp38 = i1->end->prev;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1362)
							::zpp_nape::geom::ZPP_GeomVert tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1362)
							::zpp_nape::geom::ZPP_GeomVert tmp40 = i1->end;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1362)
							tmp37 = (tmp39 == tmp40);
						}
						else{
							HX_STACK_LINE(1362)
							tmp37 = false;
						}
						HX_STACK_LINE(1362)
						if ((tmp37)){
							HX_STACK_LINE(1363)
							::zpp_nape::geom::ZPP_GeomVert tmp38 = i1->end->prev = null();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1363)
							i1->end->next = tmp38;
							HX_STACK_LINE(1364)
							{
								HX_STACK_LINE(1365)
								::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1374)
								{
									HX_STACK_LINE(1374)
									bool tmp39 = (o->wrap != null());		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1374)
									if ((tmp39)){
										HX_STACK_LINE(1374)
										::zpp_nape::geom::ZPP_Vec2 tmp40 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1374)
										tmp40->_inuse = false;
										HX_STACK_LINE(1374)
										{
											HX_STACK_LINE(1374)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1374)
											{
												HX_STACK_LINE(1374)
												bool tmp41 = (_this != null());		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1374)
												bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1374)
												if ((tmp41)){
													HX_STACK_LINE(1374)
													tmp42 = _this->zpp_disp;
												}
												else{
													HX_STACK_LINE(1374)
													tmp42 = false;
												}
												HX_STACK_LINE(1374)
												if ((tmp42)){
													HX_STACK_LINE(1374)
													::String tmp43 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1374)
													::String tmp44 = (tmp43 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1374)
													HX_STACK_DO_THROW(tmp44);
												}
											}
											HX_STACK_LINE(1374)
											{
												HX_STACK_LINE(1374)
												::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1374)
												bool tmp41 = _this1->_immutable;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1374)
												if ((tmp41)){
													HX_STACK_LINE(1374)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
												}
												HX_STACK_LINE(1374)
												bool tmp42 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1374)
												if ((tmp42)){
													HX_STACK_LINE(1374)
													_this1->_isimmutable();
												}
											}
											HX_STACK_LINE(1374)
											bool tmp41 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1374)
											if ((tmp41)){
												HX_STACK_LINE(1374)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
											}
											HX_STACK_LINE(1374)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1374)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1374)
											_this->zpp_inner = null();
											HX_STACK_LINE(1374)
											{
												HX_STACK_LINE(1374)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1374)
												o1->zpp_pool = null();
												HX_STACK_LINE(1374)
												::nape::geom::Vec2 tmp42 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1374)
												bool tmp43 = (tmp42 != null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1374)
												if ((tmp43)){
													HX_STACK_LINE(1374)
													::nape::geom::Vec2 tmp44 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1374)
													tmp44->zpp_pool = o1;
												}
												else{
													HX_STACK_LINE(1374)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1374)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
												HX_STACK_LINE(1374)
												o1->zpp_disp = true;
											}
											HX_STACK_LINE(1374)
											{
												HX_STACK_LINE(1374)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1374)
												{
													HX_STACK_LINE(1374)
													bool tmp42 = (o1->outer != null());		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1374)
													if ((tmp42)){
														HX_STACK_LINE(1374)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1374)
														o1->outer = null();
													}
													HX_STACK_LINE(1374)
													o1->_isimmutable = null();
													HX_STACK_LINE(1374)
													o1->_validate = null();
													HX_STACK_LINE(1374)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1374)
												::zpp_nape::geom::ZPP_Vec2 tmp42 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1374)
												o1->next = tmp42;
												HX_STACK_LINE(1374)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1374)
										o->wrap = null();
									}
									HX_STACK_LINE(1374)
									::zpp_nape::geom::ZPP_GeomVert tmp40 = o->next = null();		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1374)
									o->prev = tmp40;
								}
								HX_STACK_LINE(1375)
								::zpp_nape::geom::ZPP_GeomVert tmp39 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1375)
								o->next = tmp39;
								HX_STACK_LINE(1376)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1381)
							tmp35 = null();
						}
						else{
							HX_STACK_LINE(1384)
							::zpp_nape::geom::ZPP_GeomVert tmp38 = i1->end->prev;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1384)
							::zpp_nape::geom::ZPP_GeomVert retnodes = tmp38;		HX_STACK_VAR(retnodes,"retnodes");
							HX_STACK_LINE(1385)
							::zpp_nape::geom::ZPP_GeomVert tmp39 = i1->end->next;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1385)
							::zpp_nape::geom::ZPP_GeomVert tmp40 = i1->end->prev;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1385)
							tmp40->next = tmp39;
							HX_STACK_LINE(1386)
							::zpp_nape::geom::ZPP_GeomVert tmp41 = i1->end->prev;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1386)
							::zpp_nape::geom::ZPP_GeomVert tmp42 = i1->end->next;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1386)
							tmp42->prev = tmp41;
							HX_STACK_LINE(1387)
							::zpp_nape::geom::ZPP_GeomVert tmp43 = i1->end->prev = null();		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1387)
							i1->end->next = tmp43;
							HX_STACK_LINE(1388)
							{
								HX_STACK_LINE(1389)
								::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1398)
								{
									HX_STACK_LINE(1398)
									bool tmp44 = (o->wrap != null());		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1398)
									if ((tmp44)){
										HX_STACK_LINE(1398)
										::zpp_nape::geom::ZPP_Vec2 tmp45 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1398)
										tmp45->_inuse = false;
										HX_STACK_LINE(1398)
										{
											HX_STACK_LINE(1398)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1398)
											{
												HX_STACK_LINE(1398)
												bool tmp46 = (_this != null());		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1398)
												bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1398)
												if ((tmp46)){
													HX_STACK_LINE(1398)
													tmp47 = _this->zpp_disp;
												}
												else{
													HX_STACK_LINE(1398)
													tmp47 = false;
												}
												HX_STACK_LINE(1398)
												if ((tmp47)){
													HX_STACK_LINE(1398)
													::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(1398)
													::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(1398)
													HX_STACK_DO_THROW(tmp49);
												}
											}
											HX_STACK_LINE(1398)
											{
												HX_STACK_LINE(1398)
												::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1398)
												bool tmp46 = _this1->_immutable;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1398)
												if ((tmp46)){
													HX_STACK_LINE(1398)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
												}
												HX_STACK_LINE(1398)
												bool tmp47 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1398)
												if ((tmp47)){
													HX_STACK_LINE(1398)
													_this1->_isimmutable();
												}
											}
											HX_STACK_LINE(1398)
											bool tmp46 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1398)
											if ((tmp46)){
												HX_STACK_LINE(1398)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
											}
											HX_STACK_LINE(1398)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1398)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1398)
											_this->zpp_inner = null();
											HX_STACK_LINE(1398)
											{
												HX_STACK_LINE(1398)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1398)
												o1->zpp_pool = null();
												HX_STACK_LINE(1398)
												::nape::geom::Vec2 tmp47 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1398)
												bool tmp48 = (tmp47 != null());		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1398)
												if ((tmp48)){
													HX_STACK_LINE(1398)
													::nape::geom::Vec2 tmp49 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(1398)
													tmp49->zpp_pool = o1;
												}
												else{
													HX_STACK_LINE(1398)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1398)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
												HX_STACK_LINE(1398)
												o1->zpp_disp = true;
											}
											HX_STACK_LINE(1398)
											{
												HX_STACK_LINE(1398)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1398)
												{
													HX_STACK_LINE(1398)
													bool tmp47 = (o1->outer != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1398)
													if ((tmp47)){
														HX_STACK_LINE(1398)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1398)
														o1->outer = null();
													}
													HX_STACK_LINE(1398)
													o1->_isimmutable = null();
													HX_STACK_LINE(1398)
													o1->_validate = null();
													HX_STACK_LINE(1398)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1398)
												::zpp_nape::geom::ZPP_Vec2 tmp47 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1398)
												o1->next = tmp47;
												HX_STACK_LINE(1398)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1398)
										o->wrap = null();
									}
									HX_STACK_LINE(1398)
									::zpp_nape::geom::ZPP_GeomVert tmp45 = o->next = null();		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1398)
									o->prev = tmp45;
								}
								HX_STACK_LINE(1399)
								::zpp_nape::geom::ZPP_GeomVert tmp44 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1399)
								o->next = tmp44;
								HX_STACK_LINE(1400)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1405)
							i1->end = null();
							HX_STACK_LINE(1406)
							tmp35 = retnodes;
						}
					}
					HX_STACK_LINE(1353)
					i1->end = tmp35;
					HX_STACK_LINE(1409)
					bool tmp36 = i1->vertex;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1409)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1409)
					if ((tmp37)){
						HX_STACK_LINE(1410)
						::zpp_nape::geom::ZPP_GeomVert tmp38 = i1->end;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1410)
						::zpp_nape::geom::ZPP_GeomVert tmp39 = i1->path0->vert;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1410)
						bool tmp40 = (tmp38 != tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1410)
						if ((tmp40)){
							HX_STACK_LINE(1411)
							Float tmp41 = i1->end->x;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1411)
							i1->start->x = tmp41;
							HX_STACK_LINE(1412)
							Float tmp42 = i1->end->y;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1412)
							i1->start->y = tmp42;
							HX_STACK_LINE(1413)
							::zpp_nape::geom::ZPP_GeomVert tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1413)
							{
								HX_STACK_LINE(1422)
								bool tmp44 = (i1->end != null());		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1422)
								bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1422)
								if ((tmp44)){
									HX_STACK_LINE(1422)
									::zpp_nape::geom::ZPP_GeomVert tmp46 = i1->end->prev;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1422)
									::zpp_nape::geom::ZPP_GeomVert tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1422)
									::zpp_nape::geom::ZPP_GeomVert tmp48 = i1->end;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1422)
									tmp45 = (tmp47 == tmp48);
								}
								else{
									HX_STACK_LINE(1422)
									tmp45 = false;
								}
								HX_STACK_LINE(1422)
								if ((tmp45)){
									HX_STACK_LINE(1423)
									::zpp_nape::geom::ZPP_GeomVert tmp46 = i1->end->prev = null();		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1423)
									i1->end->next = tmp46;
									HX_STACK_LINE(1424)
									{
										HX_STACK_LINE(1425)
										::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1434)
										{
											HX_STACK_LINE(1434)
											bool tmp47 = (o->wrap != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(1434)
											if ((tmp47)){
												HX_STACK_LINE(1434)
												::zpp_nape::geom::ZPP_Vec2 tmp48 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1434)
												tmp48->_inuse = false;
												HX_STACK_LINE(1434)
												{
													HX_STACK_LINE(1434)
													::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1434)
													{
														HX_STACK_LINE(1434)
														bool tmp49 = (_this != null());		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(1434)
														bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(1434)
														if ((tmp49)){
															HX_STACK_LINE(1434)
															tmp50 = _this->zpp_disp;
														}
														else{
															HX_STACK_LINE(1434)
															tmp50 = false;
														}
														HX_STACK_LINE(1434)
														if ((tmp50)){
															HX_STACK_LINE(1434)
															::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(1434)
															::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(1434)
															HX_STACK_DO_THROW(tmp52);
														}
													}
													HX_STACK_LINE(1434)
													{
														HX_STACK_LINE(1434)
														::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1434)
														bool tmp49 = _this1->_immutable;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(1434)
														if ((tmp49)){
															HX_STACK_LINE(1434)
															HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
														}
														HX_STACK_LINE(1434)
														bool tmp50 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(1434)
														if ((tmp50)){
															HX_STACK_LINE(1434)
															_this1->_isimmutable();
														}
													}
													HX_STACK_LINE(1434)
													bool tmp49 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(1434)
													if ((tmp49)){
														HX_STACK_LINE(1434)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
													}
													HX_STACK_LINE(1434)
													::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
													HX_STACK_LINE(1434)
													_this->zpp_inner->outer = null();
													HX_STACK_LINE(1434)
													_this->zpp_inner = null();
													HX_STACK_LINE(1434)
													{
														HX_STACK_LINE(1434)
														::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1434)
														o1->zpp_pool = null();
														HX_STACK_LINE(1434)
														::nape::geom::Vec2 tmp50 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(1434)
														bool tmp51 = (tmp50 != null());		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(1434)
														if ((tmp51)){
															HX_STACK_LINE(1434)
															::nape::geom::Vec2 tmp52 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(1434)
															tmp52->zpp_pool = o1;
														}
														else{
															HX_STACK_LINE(1434)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
														}
														HX_STACK_LINE(1434)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
														HX_STACK_LINE(1434)
														o1->zpp_disp = true;
													}
													HX_STACK_LINE(1434)
													{
														HX_STACK_LINE(1434)
														::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1434)
														{
															HX_STACK_LINE(1434)
															bool tmp50 = (o1->outer != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(1434)
															if ((tmp50)){
																HX_STACK_LINE(1434)
																o1->outer->zpp_inner = null();
																HX_STACK_LINE(1434)
																o1->outer = null();
															}
															HX_STACK_LINE(1434)
															o1->_isimmutable = null();
															HX_STACK_LINE(1434)
															o1->_validate = null();
															HX_STACK_LINE(1434)
															o1->_invalidate = null();
														}
														HX_STACK_LINE(1434)
														::zpp_nape::geom::ZPP_Vec2 tmp50 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(1434)
														o1->next = tmp50;
														HX_STACK_LINE(1434)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
													}
												}
												HX_STACK_LINE(1434)
												o->wrap = null();
											}
											HX_STACK_LINE(1434)
											::zpp_nape::geom::ZPP_GeomVert tmp48 = o->next = null();		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(1434)
											o->prev = tmp48;
										}
										HX_STACK_LINE(1435)
										::zpp_nape::geom::ZPP_GeomVert tmp47 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1435)
										o->next = tmp47;
										HX_STACK_LINE(1436)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1441)
									tmp43 = null();
								}
								else{
									HX_STACK_LINE(1444)
									::zpp_nape::geom::ZPP_GeomVert tmp46 = i1->end->prev;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1444)
									::zpp_nape::geom::ZPP_GeomVert retnodes = tmp46;		HX_STACK_VAR(retnodes,"retnodes");
									HX_STACK_LINE(1445)
									::zpp_nape::geom::ZPP_GeomVert tmp47 = i1->end->next;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1445)
									::zpp_nape::geom::ZPP_GeomVert tmp48 = i1->end->prev;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1445)
									tmp48->next = tmp47;
									HX_STACK_LINE(1446)
									::zpp_nape::geom::ZPP_GeomVert tmp49 = i1->end->prev;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1446)
									::zpp_nape::geom::ZPP_GeomVert tmp50 = i1->end->next;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1446)
									tmp50->prev = tmp49;
									HX_STACK_LINE(1447)
									::zpp_nape::geom::ZPP_GeomVert tmp51 = i1->end->prev = null();		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1447)
									i1->end->next = tmp51;
									HX_STACK_LINE(1448)
									{
										HX_STACK_LINE(1449)
										::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1458)
										{
											HX_STACK_LINE(1458)
											bool tmp52 = (o->wrap != null());		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(1458)
											if ((tmp52)){
												HX_STACK_LINE(1458)
												::zpp_nape::geom::ZPP_Vec2 tmp53 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1458)
												tmp53->_inuse = false;
												HX_STACK_LINE(1458)
												{
													HX_STACK_LINE(1458)
													::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1458)
													{
														HX_STACK_LINE(1458)
														bool tmp54 = (_this != null());		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(1458)
														bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(1458)
														if ((tmp54)){
															HX_STACK_LINE(1458)
															tmp55 = _this->zpp_disp;
														}
														else{
															HX_STACK_LINE(1458)
															tmp55 = false;
														}
														HX_STACK_LINE(1458)
														if ((tmp55)){
															HX_STACK_LINE(1458)
															::String tmp56 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp56,"tmp56");
															HX_STACK_LINE(1458)
															::String tmp57 = (tmp56 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp57,"tmp57");
															HX_STACK_LINE(1458)
															HX_STACK_DO_THROW(tmp57);
														}
													}
													HX_STACK_LINE(1458)
													{
														HX_STACK_LINE(1458)
														::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1458)
														bool tmp54 = _this1->_immutable;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(1458)
														if ((tmp54)){
															HX_STACK_LINE(1458)
															HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
														}
														HX_STACK_LINE(1458)
														bool tmp55 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(1458)
														if ((tmp55)){
															HX_STACK_LINE(1458)
															_this1->_isimmutable();
														}
													}
													HX_STACK_LINE(1458)
													bool tmp54 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(1458)
													if ((tmp54)){
														HX_STACK_LINE(1458)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
													}
													HX_STACK_LINE(1458)
													::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
													HX_STACK_LINE(1458)
													_this->zpp_inner->outer = null();
													HX_STACK_LINE(1458)
													_this->zpp_inner = null();
													HX_STACK_LINE(1458)
													{
														HX_STACK_LINE(1458)
														::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1458)
														o1->zpp_pool = null();
														HX_STACK_LINE(1458)
														::nape::geom::Vec2 tmp55 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(1458)
														bool tmp56 = (tmp55 != null());		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1458)
														if ((tmp56)){
															HX_STACK_LINE(1458)
															::nape::geom::Vec2 tmp57 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp57,"tmp57");
															HX_STACK_LINE(1458)
															tmp57->zpp_pool = o1;
														}
														else{
															HX_STACK_LINE(1458)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
														}
														HX_STACK_LINE(1458)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
														HX_STACK_LINE(1458)
														o1->zpp_disp = true;
													}
													HX_STACK_LINE(1458)
													{
														HX_STACK_LINE(1458)
														::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1458)
														{
															HX_STACK_LINE(1458)
															bool tmp55 = (o1->outer != null());		HX_STACK_VAR(tmp55,"tmp55");
															HX_STACK_LINE(1458)
															if ((tmp55)){
																HX_STACK_LINE(1458)
																o1->outer->zpp_inner = null();
																HX_STACK_LINE(1458)
																o1->outer = null();
															}
															HX_STACK_LINE(1458)
															o1->_isimmutable = null();
															HX_STACK_LINE(1458)
															o1->_validate = null();
															HX_STACK_LINE(1458)
															o1->_invalidate = null();
														}
														HX_STACK_LINE(1458)
														::zpp_nape::geom::ZPP_Vec2 tmp55 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(1458)
														o1->next = tmp55;
														HX_STACK_LINE(1458)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
													}
												}
												HX_STACK_LINE(1458)
												o->wrap = null();
											}
											HX_STACK_LINE(1458)
											::zpp_nape::geom::ZPP_GeomVert tmp53 = o->next = null();		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(1458)
											o->prev = tmp53;
										}
										HX_STACK_LINE(1459)
										::zpp_nape::geom::ZPP_GeomVert tmp52 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(1459)
										o->next = tmp52;
										HX_STACK_LINE(1460)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1465)
									i1->end = null();
									HX_STACK_LINE(1466)
									tmp43 = retnodes;
								}
							}
							HX_STACK_LINE(1413)
							i1->end = tmp43;
						}
						else{
							HX_STACK_LINE(1471)
							::zpp_nape::geom::ZPP_GeomVert tmp41 = i1->start->next;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1471)
							::zpp_nape::geom::ZPP_GeomVert n = tmp41;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(1472)
							i1->start->x = n->x;
							HX_STACK_LINE(1473)
							i1->start->y = n->y;
							HX_STACK_LINE(1474)
							{
								HX_STACK_LINE(1483)
								bool tmp42 = (n != null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1483)
								bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1483)
								if ((tmp42)){
									HX_STACK_LINE(1483)
									tmp43 = (n->prev == n);
								}
								else{
									HX_STACK_LINE(1483)
									tmp43 = false;
								}
								HX_STACK_LINE(1483)
								if ((tmp43)){
									HX_STACK_LINE(1484)
									::zpp_nape::geom::ZPP_GeomVert tmp44 = n->prev = null();		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1484)
									n->next = tmp44;
									HX_STACK_LINE(1485)
									{
										HX_STACK_LINE(1486)
										::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1495)
										{
											HX_STACK_LINE(1495)
											bool tmp45 = (o->wrap != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1495)
											if ((tmp45)){
												HX_STACK_LINE(1495)
												::zpp_nape::geom::ZPP_Vec2 tmp46 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1495)
												tmp46->_inuse = false;
												HX_STACK_LINE(1495)
												{
													HX_STACK_LINE(1495)
													::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1495)
													{
														HX_STACK_LINE(1495)
														bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1495)
														bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1495)
														if ((tmp47)){
															HX_STACK_LINE(1495)
															tmp48 = _this->zpp_disp;
														}
														else{
															HX_STACK_LINE(1495)
															tmp48 = false;
														}
														HX_STACK_LINE(1495)
														if ((tmp48)){
															HX_STACK_LINE(1495)
															::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(1495)
															::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(1495)
															HX_STACK_DO_THROW(tmp50);
														}
													}
													HX_STACK_LINE(1495)
													{
														HX_STACK_LINE(1495)
														::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1495)
														bool tmp47 = _this1->_immutable;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1495)
														if ((tmp47)){
															HX_STACK_LINE(1495)
															HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
														}
														HX_STACK_LINE(1495)
														bool tmp48 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1495)
														if ((tmp48)){
															HX_STACK_LINE(1495)
															_this1->_isimmutable();
														}
													}
													HX_STACK_LINE(1495)
													bool tmp47 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1495)
													if ((tmp47)){
														HX_STACK_LINE(1495)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
													}
													HX_STACK_LINE(1495)
													::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
													HX_STACK_LINE(1495)
													_this->zpp_inner->outer = null();
													HX_STACK_LINE(1495)
													_this->zpp_inner = null();
													HX_STACK_LINE(1495)
													{
														HX_STACK_LINE(1495)
														::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1495)
														o1->zpp_pool = null();
														HX_STACK_LINE(1495)
														::nape::geom::Vec2 tmp48 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1495)
														bool tmp49 = (tmp48 != null());		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(1495)
														if ((tmp49)){
															HX_STACK_LINE(1495)
															::nape::geom::Vec2 tmp50 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(1495)
															tmp50->zpp_pool = o1;
														}
														else{
															HX_STACK_LINE(1495)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
														}
														HX_STACK_LINE(1495)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
														HX_STACK_LINE(1495)
														o1->zpp_disp = true;
													}
													HX_STACK_LINE(1495)
													{
														HX_STACK_LINE(1495)
														::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1495)
														{
															HX_STACK_LINE(1495)
															bool tmp48 = (o1->outer != null());		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(1495)
															if ((tmp48)){
																HX_STACK_LINE(1495)
																o1->outer->zpp_inner = null();
																HX_STACK_LINE(1495)
																o1->outer = null();
															}
															HX_STACK_LINE(1495)
															o1->_isimmutable = null();
															HX_STACK_LINE(1495)
															o1->_validate = null();
															HX_STACK_LINE(1495)
															o1->_invalidate = null();
														}
														HX_STACK_LINE(1495)
														::zpp_nape::geom::ZPP_Vec2 tmp48 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1495)
														o1->next = tmp48;
														HX_STACK_LINE(1495)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
													}
												}
												HX_STACK_LINE(1495)
												o->wrap = null();
											}
											HX_STACK_LINE(1495)
											::zpp_nape::geom::ZPP_GeomVert tmp46 = o->next = null();		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1495)
											o->prev = tmp46;
										}
										HX_STACK_LINE(1496)
										::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1496)
										o->next = tmp45;
										HX_STACK_LINE(1497)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1502)
									n = null();
								}
								else{
									HX_STACK_LINE(1505)
									n->prev->next = n->next;
									HX_STACK_LINE(1506)
									n->next->prev = n->prev;
									HX_STACK_LINE(1507)
									::zpp_nape::geom::ZPP_GeomVert tmp44 = n->prev = null();		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1507)
									n->next = tmp44;
									HX_STACK_LINE(1508)
									{
										HX_STACK_LINE(1509)
										::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1518)
										{
											HX_STACK_LINE(1518)
											bool tmp45 = (o->wrap != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1518)
											if ((tmp45)){
												HX_STACK_LINE(1518)
												::zpp_nape::geom::ZPP_Vec2 tmp46 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1518)
												tmp46->_inuse = false;
												HX_STACK_LINE(1518)
												{
													HX_STACK_LINE(1518)
													::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1518)
													{
														HX_STACK_LINE(1518)
														bool tmp47 = (_this != null());		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1518)
														bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1518)
														if ((tmp47)){
															HX_STACK_LINE(1518)
															tmp48 = _this->zpp_disp;
														}
														else{
															HX_STACK_LINE(1518)
															tmp48 = false;
														}
														HX_STACK_LINE(1518)
														if ((tmp48)){
															HX_STACK_LINE(1518)
															::String tmp49 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(1518)
															::String tmp50 = (tmp49 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(1518)
															HX_STACK_DO_THROW(tmp50);
														}
													}
													HX_STACK_LINE(1518)
													{
														HX_STACK_LINE(1518)
														::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1518)
														bool tmp47 = _this1->_immutable;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1518)
														if ((tmp47)){
															HX_STACK_LINE(1518)
															HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
														}
														HX_STACK_LINE(1518)
														bool tmp48 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1518)
														if ((tmp48)){
															HX_STACK_LINE(1518)
															_this1->_isimmutable();
														}
													}
													HX_STACK_LINE(1518)
													bool tmp47 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1518)
													if ((tmp47)){
														HX_STACK_LINE(1518)
														HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
													}
													HX_STACK_LINE(1518)
													::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
													HX_STACK_LINE(1518)
													_this->zpp_inner->outer = null();
													HX_STACK_LINE(1518)
													_this->zpp_inner = null();
													HX_STACK_LINE(1518)
													{
														HX_STACK_LINE(1518)
														::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1518)
														o1->zpp_pool = null();
														HX_STACK_LINE(1518)
														::nape::geom::Vec2 tmp48 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1518)
														bool tmp49 = (tmp48 != null());		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(1518)
														if ((tmp49)){
															HX_STACK_LINE(1518)
															::nape::geom::Vec2 tmp50 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(1518)
															tmp50->zpp_pool = o1;
														}
														else{
															HX_STACK_LINE(1518)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
														}
														HX_STACK_LINE(1518)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
														HX_STACK_LINE(1518)
														o1->zpp_disp = true;
													}
													HX_STACK_LINE(1518)
													{
														HX_STACK_LINE(1518)
														::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1518)
														{
															HX_STACK_LINE(1518)
															bool tmp48 = (o1->outer != null());		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(1518)
															if ((tmp48)){
																HX_STACK_LINE(1518)
																o1->outer->zpp_inner = null();
																HX_STACK_LINE(1518)
																o1->outer = null();
															}
															HX_STACK_LINE(1518)
															o1->_isimmutable = null();
															HX_STACK_LINE(1518)
															o1->_validate = null();
															HX_STACK_LINE(1518)
															o1->_invalidate = null();
														}
														HX_STACK_LINE(1518)
														::zpp_nape::geom::ZPP_Vec2 tmp48 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1518)
														o1->next = tmp48;
														HX_STACK_LINE(1518)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
													}
												}
												HX_STACK_LINE(1518)
												o->wrap = null();
											}
											HX_STACK_LINE(1518)
											::zpp_nape::geom::ZPP_GeomVert tmp46 = o->next = null();		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1518)
											o->prev = tmp46;
										}
										HX_STACK_LINE(1519)
										::zpp_nape::geom::ZPP_GeomVert tmp45 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1519)
										o->next = tmp45;
										HX_STACK_LINE(1520)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
									}
								}
							}
						}
					}
					HX_STACK_LINE(1529)
					{
						HX_STACK_LINE(1530)
						::zpp_nape::geom::ZPP_GeomVert tmp38 = i1->start->prev;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1530)
						::zpp_nape::geom::ZPP_GeomVert tmp39 = i1->end->next;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1530)
						tmp39->prev = tmp38;
						HX_STACK_LINE(1531)
						::zpp_nape::geom::ZPP_GeomVert tmp40 = i1->end->next;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1531)
						::zpp_nape::geom::ZPP_GeomVert tmp41 = i1->start->prev;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1531)
						tmp41->next = tmp40;
						HX_STACK_LINE(1532)
						i1->end->next = i1->start;
						HX_STACK_LINE(1533)
						i1->start->prev = i1->end;
					}
					HX_STACK_LINE(1535)
					{
						HX_STACK_LINE(1536)
						::zpp_nape::geom::ZPP_CutVert tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1536)
						{
							HX_STACK_LINE(1537)
							::zpp_nape::geom::ZPP_CutVert tmp39 = i1->path0;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1537)
							::zpp_nape::geom::ZPP_CutVert tmp40 = i1->path0->parent;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1537)
							bool tmp41 = (tmp39 == tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1537)
							if ((tmp41)){
								HX_STACK_LINE(1537)
								tmp38 = i1->path0;
							}
							else{
								HX_STACK_LINE(1539)
								::zpp_nape::geom::ZPP_CutVert obj = i1->path0;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1540)
								::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(1541)
								while((true)){
									HX_STACK_LINE(1541)
									bool tmp42 = (obj != obj->parent);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1541)
									bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1541)
									if ((tmp43)){
										HX_STACK_LINE(1541)
										break;
									}
									HX_STACK_LINE(1542)
									::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(1543)
									obj->parent = stack;
									HX_STACK_LINE(1544)
									stack = obj;
									HX_STACK_LINE(1545)
									obj = nxt;
								}
								HX_STACK_LINE(1547)
								while((true)){
									HX_STACK_LINE(1547)
									bool tmp42 = (stack != null());		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1547)
									bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1547)
									if ((tmp43)){
										HX_STACK_LINE(1547)
										break;
									}
									HX_STACK_LINE(1548)
									::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(1549)
									stack->parent = obj;
									HX_STACK_LINE(1550)
									stack = nxt;
								}
								HX_STACK_LINE(1552)
								tmp38 = obj;
							}
						}
						HX_STACK_LINE(1536)
						::zpp_nape::geom::ZPP_CutVert xr = tmp38;		HX_STACK_VAR(xr,"xr");
						HX_STACK_LINE(1555)
						::zpp_nape::geom::ZPP_CutVert tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1555)
						{
							HX_STACK_LINE(1556)
							::zpp_nape::geom::ZPP_CutVert tmp40 = i1->path1;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1556)
							::zpp_nape::geom::ZPP_CutVert tmp41 = i1->path1->parent;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1556)
							bool tmp42 = (tmp40 == tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1556)
							if ((tmp42)){
								HX_STACK_LINE(1556)
								tmp39 = i1->path1;
							}
							else{
								HX_STACK_LINE(1558)
								::zpp_nape::geom::ZPP_CutVert obj = i1->path1;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1559)
								::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(1560)
								while((true)){
									HX_STACK_LINE(1560)
									bool tmp43 = (obj != obj->parent);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1560)
									bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1560)
									if ((tmp44)){
										HX_STACK_LINE(1560)
										break;
									}
									HX_STACK_LINE(1561)
									::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(1562)
									obj->parent = stack;
									HX_STACK_LINE(1563)
									stack = obj;
									HX_STACK_LINE(1564)
									obj = nxt;
								}
								HX_STACK_LINE(1566)
								while((true)){
									HX_STACK_LINE(1566)
									bool tmp43 = (stack != null());		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1566)
									bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1566)
									if ((tmp44)){
										HX_STACK_LINE(1566)
										break;
									}
									HX_STACK_LINE(1567)
									::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(1568)
									stack->parent = obj;
									HX_STACK_LINE(1569)
									stack = nxt;
								}
								HX_STACK_LINE(1571)
								tmp39 = obj;
							}
						}
						HX_STACK_LINE(1555)
						::zpp_nape::geom::ZPP_CutVert yr = tmp39;		HX_STACK_VAR(yr,"yr");
						HX_STACK_LINE(1574)
						bool tmp40 = (xr != yr);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1574)
						if ((tmp40)){
							HX_STACK_LINE(1575)
							bool tmp41 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1575)
							if ((tmp41)){
								HX_STACK_LINE(1575)
								xr->parent = yr;
							}
							else{
								HX_STACK_LINE(1576)
								bool tmp42 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1576)
								if ((tmp42)){
									HX_STACK_LINE(1576)
									yr->parent = xr;
								}
								else{
									HX_STACK_LINE(1578)
									yr->parent = xr;
									HX_STACK_LINE(1579)
									(xr->rank)++;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1584)
		{
			HX_STACK_LINE(1585)
			::zpp_nape::geom::ZPP_CutInt o = i1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1594)
			{
				HX_STACK_LINE(1594)
				::zpp_nape::geom::ZPP_GeomVert tmp31 = o->start = null();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1594)
				o->end = tmp31;
				HX_STACK_LINE(1594)
				::zpp_nape::geom::ZPP_CutVert tmp32 = o->path1 = null();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1594)
				o->path0 = tmp32;
			}
			HX_STACK_LINE(1595)
			::zpp_nape::geom::ZPP_CutInt tmp31 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1595)
			o->next = tmp31;
			HX_STACK_LINE(1596)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1601)
		{
			HX_STACK_LINE(1602)
			::zpp_nape::geom::ZPP_CutInt o = j;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1611)
			{
				HX_STACK_LINE(1611)
				::zpp_nape::geom::ZPP_GeomVert tmp31 = o->start = null();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1611)
				o->end = tmp31;
				HX_STACK_LINE(1611)
				::zpp_nape::geom::ZPP_CutVert tmp32 = o->path1 = null();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1611)
				o->path0 = tmp32;
			}
			HX_STACK_LINE(1612)
			::zpp_nape::geom::ZPP_CutInt tmp31 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1612)
			o->next = tmp31;
			HX_STACK_LINE(1613)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1619)
	bool tmp18 = (output == null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1619)
	::nape::geom::GeomPolyList tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1619)
	if ((tmp18)){
		HX_STACK_LINE(1619)
		tmp19 = ::nape::geom::GeomPolyList_obj::__new();
	}
	else{
		HX_STACK_LINE(1619)
		tmp19 = output;
	}
	HX_STACK_LINE(1619)
	::nape::geom::GeomPolyList ret = tmp19;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1620)
	{
		HX_STACK_LINE(1621)
		::zpp_nape::util::ZNPList_ZPP_CutVert tmp20 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1621)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = tmp20->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1622)
		while((true)){
			HX_STACK_LINE(1622)
			bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1622)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1622)
			if ((tmp22)){
				HX_STACK_LINE(1622)
				break;
			}
			HX_STACK_LINE(1623)
			::zpp_nape::geom::ZPP_CutVert p1 = cx_ite->elt;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(1624)
			{
				HX_STACK_LINE(1625)
				::zpp_nape::geom::ZPP_CutVert tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1625)
				{
					HX_STACK_LINE(1626)
					bool tmp24 = (p1 == p1->parent);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1626)
					if ((tmp24)){
						HX_STACK_LINE(1626)
						tmp23 = p1;
					}
					else{
						HX_STACK_LINE(1628)
						::zpp_nape::geom::ZPP_CutVert obj = p1;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1629)
						::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1630)
						while((true)){
							HX_STACK_LINE(1630)
							bool tmp25 = (obj != obj->parent);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1630)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1630)
							if ((tmp26)){
								HX_STACK_LINE(1630)
								break;
							}
							HX_STACK_LINE(1631)
							::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1632)
							obj->parent = stack;
							HX_STACK_LINE(1633)
							stack = obj;
							HX_STACK_LINE(1634)
							obj = nxt;
						}
						HX_STACK_LINE(1636)
						while((true)){
							HX_STACK_LINE(1636)
							bool tmp25 = (stack != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1636)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1636)
							if ((tmp26)){
								HX_STACK_LINE(1636)
								break;
							}
							HX_STACK_LINE(1637)
							::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1638)
							stack->parent = obj;
							HX_STACK_LINE(1639)
							stack = nxt;
						}
						HX_STACK_LINE(1641)
						tmp23 = obj;
					}
				}
				HX_STACK_LINE(1625)
				::zpp_nape::geom::ZPP_CutVert poly = tmp23;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(1644)
				bool tmp24 = poly->used;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1644)
				if ((tmp24)){
					HX_STACK_LINE(1645)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1646)
					continue;
				}
				HX_STACK_LINE(1648)
				poly->used = true;
				HX_STACK_LINE(1649)
				{
					HX_STACK_LINE(1650)
					::zpp_nape::geom::ZPP_GeomVert p2 = poly->vert;		HX_STACK_VAR(p2,"p2");
					HX_STACK_LINE(1651)
					bool skip = true;		HX_STACK_VAR(skip,"skip");
					HX_STACK_LINE(1652)
					while((true)){
						HX_STACK_LINE(1652)
						bool tmp25 = (poly->vert != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1652)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1652)
						if ((tmp25)){
							HX_STACK_LINE(1652)
							bool tmp27 = skip;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1652)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1652)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1652)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1652)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1652)
							if ((tmp31)){
								HX_STACK_LINE(1652)
								tmp26 = (p2 != poly->vert);
							}
							else{
								HX_STACK_LINE(1652)
								tmp26 = true;
							}
						}
						else{
							HX_STACK_LINE(1652)
							tmp26 = false;
						}
						HX_STACK_LINE(1652)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1652)
						if ((tmp27)){
							HX_STACK_LINE(1652)
							break;
						}
						HX_STACK_LINE(1653)
						skip = false;
						HX_STACK_LINE(1654)
						Float tmp28 = p2->x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1654)
						Float tmp29 = p2->next->x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1654)
						bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1654)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1654)
						if ((tmp30)){
							HX_STACK_LINE(1654)
							Float tmp32 = p2->y;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1654)
							Float tmp33 = p2->next->y;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1654)
							Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1654)
							tmp31 = (tmp32 == tmp34);
						}
						else{
							HX_STACK_LINE(1654)
							tmp31 = false;
						}
						HX_STACK_LINE(1654)
						if ((tmp31)){
							HX_STACK_LINE(1655)
							bool tmp32 = (p2 == poly->vert);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1655)
							if ((tmp32)){
								HX_STACK_LINE(1656)
								bool tmp33 = (p2->next == p2);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1656)
								::zpp_nape::geom::ZPP_GeomVert tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1656)
								if ((tmp33)){
									HX_STACK_LINE(1656)
									tmp34 = null();
								}
								else{
									HX_STACK_LINE(1656)
									tmp34 = p2->next;
								}
								HX_STACK_LINE(1656)
								poly->vert = tmp34;
								HX_STACK_LINE(1657)
								skip = true;
							}
							HX_STACK_LINE(1659)
							::zpp_nape::geom::ZPP_GeomVert tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1659)
							{
								HX_STACK_LINE(1668)
								bool tmp34 = (p2 != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1668)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1668)
								if ((tmp34)){
									HX_STACK_LINE(1668)
									tmp35 = (p2->prev == p2);
								}
								else{
									HX_STACK_LINE(1668)
									tmp35 = false;
								}
								HX_STACK_LINE(1668)
								if ((tmp35)){
									HX_STACK_LINE(1669)
									::zpp_nape::geom::ZPP_GeomVert tmp36 = p2->prev = null();		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1669)
									p2->next = tmp36;
									HX_STACK_LINE(1671)
									tmp33 = p2 = null();
								}
								else{
									HX_STACK_LINE(1674)
									::zpp_nape::geom::ZPP_GeomVert retnodes = p2->next;		HX_STACK_VAR(retnodes,"retnodes");
									HX_STACK_LINE(1675)
									p2->prev->next = p2->next;
									HX_STACK_LINE(1676)
									p2->next->prev = p2->prev;
									HX_STACK_LINE(1677)
									::zpp_nape::geom::ZPP_GeomVert tmp36 = p2->prev = null();		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1677)
									p2->next = tmp36;
									HX_STACK_LINE(1679)
									p2 = null();
									HX_STACK_LINE(1680)
									tmp33 = retnodes;
								}
							}
							HX_STACK_LINE(1659)
							p2 = tmp33;
						}
						else{
							HX_STACK_LINE(1684)
							p2 = p2->next;
						}
					}
				}
				HX_STACK_LINE(1687)
				bool tmp25 = (poly->vert != null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1687)
				if ((tmp25)){
					HX_STACK_LINE(1688)
					::nape::geom::GeomPoly tmp26 = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1688)
					::nape::geom::GeomPoly gp = tmp26;		HX_STACK_VAR(gp,"gp");
					HX_STACK_LINE(1689)
					gp->zpp_inner->vertices = poly->vert;
					HX_STACK_LINE(1690)
					bool tmp27 = ret->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1690)
					if ((tmp27)){
						HX_STACK_LINE(1690)
						::nape::geom::GeomPoly tmp28 = gp;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1690)
						ret->push(tmp28);
					}
					else{
						HX_STACK_LINE(1690)
						::nape::geom::GeomPoly tmp28 = gp;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1690)
						ret->unshift(tmp28);
					}
				}
			}
			HX_STACK_LINE(1693)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1697)
	while((true)){
		HX_STACK_LINE(1697)
		::zpp_nape::util::ZNPList_ZPP_CutVert tmp20 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1697)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp21 = tmp20->head;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1697)
		bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1697)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1697)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1697)
		if ((tmp24)){
			HX_STACK_LINE(1697)
			break;
		}
		HX_STACK_LINE(1698)
		::zpp_nape::util::ZNPList_ZPP_CutVert tmp25 = ::zpp_nape::geom::ZPP_Cutter_obj::paths;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1698)
		::zpp_nape::geom::ZPP_CutVert tmp26 = tmp25->pop_unsafe();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1698)
		::zpp_nape::geom::ZPP_CutVert p1 = tmp26;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(1699)
		{
			HX_STACK_LINE(1700)
			::zpp_nape::geom::ZPP_CutVert o = p1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1709)
			{
				HX_STACK_LINE(1709)
				o->vert = null();
				HX_STACK_LINE(1709)
				o->parent = null();
			}
			HX_STACK_LINE(1710)
			::zpp_nape::geom::ZPP_CutVert tmp27 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1710)
			o->next = tmp27;
			HX_STACK_LINE(1711)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1719)
	while((true)){
		HX_STACK_LINE(1719)
		bool tmp20 = (verts == null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1719)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1719)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1719)
		if ((tmp22)){
			HX_STACK_LINE(1719)
			break;
		}
		HX_STACK_LINE(1719)
		::zpp_nape::geom::ZPP_CutVert tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1719)
		{
			HX_STACK_LINE(1728)
			bool tmp24 = (verts != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1728)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1728)
			if ((tmp24)){
				HX_STACK_LINE(1728)
				tmp25 = (verts->prev == verts);
			}
			else{
				HX_STACK_LINE(1728)
				tmp25 = false;
			}
			HX_STACK_LINE(1728)
			if ((tmp25)){
				HX_STACK_LINE(1729)
				::zpp_nape::geom::ZPP_CutVert tmp26 = verts->prev = null();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1729)
				verts->next = tmp26;
				HX_STACK_LINE(1730)
				{
					HX_STACK_LINE(1731)
					::zpp_nape::geom::ZPP_CutVert o = verts;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1740)
					{
						HX_STACK_LINE(1740)
						o->vert = null();
						HX_STACK_LINE(1740)
						o->parent = null();
					}
					HX_STACK_LINE(1741)
					::zpp_nape::geom::ZPP_CutVert tmp27 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1741)
					o->next = tmp27;
					HX_STACK_LINE(1742)
					::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1747)
				tmp23 = verts = null();
			}
			else{
				HX_STACK_LINE(1750)
				::zpp_nape::geom::ZPP_CutVert retnodes = verts->next;		HX_STACK_VAR(retnodes,"retnodes");
				HX_STACK_LINE(1751)
				verts->prev->next = verts->next;
				HX_STACK_LINE(1752)
				verts->next->prev = verts->prev;
				HX_STACK_LINE(1753)
				::zpp_nape::geom::ZPP_CutVert tmp26 = verts->prev = null();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1753)
				verts->next = tmp26;
				HX_STACK_LINE(1754)
				{
					HX_STACK_LINE(1755)
					::zpp_nape::geom::ZPP_CutVert o = verts;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1764)
					{
						HX_STACK_LINE(1764)
						o->vert = null();
						HX_STACK_LINE(1764)
						o->parent = null();
					}
					HX_STACK_LINE(1765)
					::zpp_nape::geom::ZPP_CutVert tmp27 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1765)
					o->next = tmp27;
					HX_STACK_LINE(1766)
					::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1771)
				verts = null();
				HX_STACK_LINE(1772)
				tmp23 = retnodes;
			}
		}
		HX_STACK_LINE(1719)
		verts = tmp23;
	}
	HX_STACK_LINE(1776)
	::nape::geom::GeomPolyList tmp20 = ret;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1776)
	return tmp20;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ZPP_Cutter_obj,run,return )


ZPP_Cutter_obj::ZPP_Cutter_obj()
{
}

bool ZPP_Cutter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { outValue = ints; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { outValue = paths; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CutInt*/ ,(void *) &ZPP_Cutter_obj::ints,HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CutVert*/ ,(void *) &ZPP_Cutter_obj::paths,HX_HCSTRING("paths","\x2e","\x0b","\x57","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::paths,"paths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::paths,"paths");
};

#endif

hx::Class ZPP_Cutter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45"),
	HX_HCSTRING("paths","\x2e","\x0b","\x57","\xbd"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

void ZPP_Cutter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Cutter","\x55","\xc1","\x13","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Cutter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Cutter_obj >;
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

void ZPP_Cutter_obj::__boot()
{
	ints= null();
	paths= null();
}

} // end namespace zpp_nape
} // end namespace geom
