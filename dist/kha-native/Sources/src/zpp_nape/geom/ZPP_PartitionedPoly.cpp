#include <hxcpp.h>

#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_PartitionedPoly_obj::__construct(::zpp_nape::geom::ZPP_GeomVert P)
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","new",0x933a85b1,"zpp_nape.geom.ZPP_PartitionedPoly.new","zpp_nape/geom/PartitionedPoly.hx",587,0x0d312f3a)
HX_STACK_THIS(this)
HX_STACK_ARG(P,"P")
{
	HX_STACK_LINE(595)
	this->next = null();
	HX_STACK_LINE(588)
	this->vertices = null();
	HX_STACK_LINE(593)
	::zpp_nape::geom::ZPP_GeomVert tmp = P;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(593)
	this->init(tmp);
}
;
	return null();
}

//ZPP_PartitionedPoly_obj::~ZPP_PartitionedPoly_obj() { }

Dynamic ZPP_PartitionedPoly_obj::__CreateEmpty() { return  new ZPP_PartitionedPoly_obj; }
hx::ObjectPtr< ZPP_PartitionedPoly_obj > ZPP_PartitionedPoly_obj::__new(::zpp_nape::geom::ZPP_GeomVert P)
{  hx::ObjectPtr< ZPP_PartitionedPoly_obj > _result_ = new ZPP_PartitionedPoly_obj();
	_result_->__construct(P);
	return _result_;}

Dynamic ZPP_PartitionedPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PartitionedPoly_obj > _result_ = new ZPP_PartitionedPoly_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool ZPP_PartitionedPoly_obj::eq( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","eq",0x0f95783b,"zpp_nape.geom.ZPP_PartitionedPoly.eq","zpp_nape/geom/PartitionedPoly.hx",589,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(590)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	{
		HX_STACK_LINE(590)
		Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(590)
		Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(590)
		{
			HX_STACK_LINE(590)
			Float tmp1 = (a->x - b->x);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(590)
			dx = tmp1;
			HX_STACK_LINE(590)
			Float tmp2 = (a->y - b->y);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(590)
			dy = tmp2;
		}
		HX_STACK_LINE(590)
		Float tmp1 = (dx * dx);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(590)
		Float tmp2 = (dy * dy);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		tmp = (tmp1 + tmp2);
	}
	HX_STACK_LINE(590)
	Float tmp1 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	Float tmp2 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(590)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(590)
	bool tmp4 = (tmp < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(590)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,eq,return )

Void ZPP_PartitionedPoly_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","alloc",0x438f1006,"zpp_nape.geom.ZPP_PartitionedPoly.alloc","zpp_nape/geom/PartitionedPoly.hx",621,0x0d312f3a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,alloc,(void))

Void ZPP_PartitionedPoly_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","free",0x3aba8e3b,"zpp_nape.geom.ZPP_PartitionedPoly.free","zpp_nape/geom/PartitionedPoly.hx",624,0x0d312f3a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,free,(void))

Void ZPP_PartitionedPoly_obj::init( ::zpp_nape::geom::ZPP_GeomVert P){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","init",0x3cb32c9f,"zpp_nape.geom.ZPP_PartitionedPoly.init","zpp_nape/geom/PartitionedPoly.hx",633,0x0d312f3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(P,"P")
		HX_STACK_LINE(634)
		bool tmp = (P == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(634)
		if ((tmp)){
			HX_STACK_LINE(634)
			return null();
		}
		HX_STACK_LINE(635)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(635)
		{
			HX_STACK_LINE(636)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(636)
			{
				HX_STACK_LINE(661)
				Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(662)
				{
					HX_STACK_LINE(663)
					::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
					HX_STACK_LINE(664)
					::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
					HX_STACK_LINE(665)
					bool tmp3 = (F != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(665)
					if ((tmp3)){
						HX_STACK_LINE(666)
						::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
						HX_STACK_LINE(667)
						while((true)){
							HX_STACK_LINE(668)
							::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(670)
							{
								HX_STACK_LINE(671)
								Float tmp4 = v->x;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(671)
								Float tmp5 = v->next->y;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(671)
								Float tmp6 = v->prev->y;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(671)
								Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(671)
								Float tmp8 = (tmp4 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(671)
								hx::AddEq(area,tmp8);
							}
							HX_STACK_LINE(674)
							nite = nite->next;
							HX_STACK_LINE(676)
							bool tmp4 = (nite != L);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(676)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(667)
							if ((tmp5)){
								HX_STACK_LINE(667)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(679)
				tmp2 = (area * ((Float)0.5));
			}
			HX_STACK_LINE(636)
			tmp1 = (tmp2 > ((Float)0.0));
		}
		HX_STACK_LINE(635)
		bool cw = tmp1;		HX_STACK_VAR(cw,"cw");
		HX_STACK_LINE(682)
		::zpp_nape::geom::ZPP_GeomVert p = P;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(683)
		while((true)){
			HX_STACK_LINE(684)
			bool tmp2 = cw;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(684)
			::zpp_nape::geom::ZPP_PartitionVertex tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(684)
			if ((tmp2)){
				HX_STACK_LINE(685)
				::zpp_nape::geom::ZPP_PartitionVertex tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(685)
				{
					HX_STACK_LINE(685)
					::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(685)
					{
						HX_STACK_LINE(685)
						::zpp_nape::geom::ZPP_PartitionVertex tmp5 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(685)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(685)
						if ((tmp6)){
							HX_STACK_LINE(685)
							::zpp_nape::geom::ZPP_PartitionVertex tmp7 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(685)
							ret = tmp7;
						}
						else{
							HX_STACK_LINE(685)
							::zpp_nape::geom::ZPP_PartitionVertex tmp7 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(685)
							ret = tmp7;
							HX_STACK_LINE(685)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
							HX_STACK_LINE(685)
							ret->next = null();
						}
						HX_STACK_LINE(685)
						Dynamic();
					}
					HX_STACK_LINE(685)
					{
						HX_STACK_LINE(685)
						ret->x = p->x;
						HX_STACK_LINE(685)
						ret->y = p->y;
						HX_STACK_LINE(685)
						{
						}
					}
					HX_STACK_LINE(685)
					tmp4 = ret;
				}
				HX_STACK_LINE(685)
				::zpp_nape::geom::ZPP_PartitionVertex obj = tmp4;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(686)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = this->vertices;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(686)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(686)
				if ((tmp6)){
					HX_STACK_LINE(686)
					::zpp_nape::geom::ZPP_PartitionVertex tmp7 = obj->next = obj;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(686)
					::zpp_nape::geom::ZPP_PartitionVertex tmp8 = obj->prev = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(686)
					this->vertices = tmp8;
				}
				else{
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_PartitionVertex tmp7 = this->vertices;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(688)
					obj->prev = tmp7;
					HX_STACK_LINE(689)
					::zpp_nape::geom::ZPP_PartitionVertex tmp8 = this->vertices;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(689)
					obj->next = tmp8->next;
					HX_STACK_LINE(690)
					::zpp_nape::geom::ZPP_PartitionVertex tmp9 = this->vertices;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(690)
					tmp9->next->prev = obj;
					HX_STACK_LINE(691)
					::zpp_nape::geom::ZPP_PartitionVertex tmp10 = this->vertices;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(691)
					tmp10->next = obj;
				}
				HX_STACK_LINE(693)
				tmp3 = obj;
			}
			else{
				HX_STACK_LINE(696)
				::zpp_nape::geom::ZPP_PartitionVertex tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(696)
				{
					HX_STACK_LINE(696)
					::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(696)
					{
						HX_STACK_LINE(696)
						::zpp_nape::geom::ZPP_PartitionVertex tmp5 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(696)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(696)
						if ((tmp6)){
							HX_STACK_LINE(696)
							::zpp_nape::geom::ZPP_PartitionVertex tmp7 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(696)
							ret = tmp7;
						}
						else{
							HX_STACK_LINE(696)
							::zpp_nape::geom::ZPP_PartitionVertex tmp7 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(696)
							ret = tmp7;
							HX_STACK_LINE(696)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
							HX_STACK_LINE(696)
							ret->next = null();
						}
						HX_STACK_LINE(696)
						Dynamic();
					}
					HX_STACK_LINE(696)
					{
						HX_STACK_LINE(696)
						ret->x = p->x;
						HX_STACK_LINE(696)
						ret->y = p->y;
						HX_STACK_LINE(696)
						{
						}
					}
					HX_STACK_LINE(696)
					tmp4 = ret;
				}
				HX_STACK_LINE(696)
				::zpp_nape::geom::ZPP_PartitionVertex obj = tmp4;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(697)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = this->vertices;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(697)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(697)
				if ((tmp6)){
					HX_STACK_LINE(697)
					::zpp_nape::geom::ZPP_PartitionVertex tmp7 = obj->next = obj;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(697)
					::zpp_nape::geom::ZPP_PartitionVertex tmp8 = obj->prev = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(697)
					this->vertices = tmp8;
				}
				else{
					HX_STACK_LINE(699)
					::zpp_nape::geom::ZPP_PartitionVertex tmp7 = this->vertices;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(699)
					obj->next = tmp7;
					HX_STACK_LINE(700)
					::zpp_nape::geom::ZPP_PartitionVertex tmp8 = this->vertices;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(700)
					obj->prev = tmp8->prev;
					HX_STACK_LINE(701)
					::zpp_nape::geom::ZPP_PartitionVertex tmp9 = this->vertices;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(701)
					tmp9->prev->next = obj;
					HX_STACK_LINE(702)
					::zpp_nape::geom::ZPP_PartitionVertex tmp10 = this->vertices;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(702)
					tmp10->prev = obj;
				}
				HX_STACK_LINE(704)
				tmp3 = obj;
			}
			HX_STACK_LINE(684)
			this->vertices = tmp3;
			HX_STACK_LINE(706)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = this->vertices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(706)
			tmp4->forced = p->forced;
			HX_STACK_LINE(707)
			p = p->next;
			HX_STACK_LINE(709)
			bool tmp5 = (p != P);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(709)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(683)
			if ((tmp6)){
				HX_STACK_LINE(683)
				break;
			}
		}
		HX_STACK_LINE(710)
		this->remove_collinear_vertices();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,init,(void))

bool ZPP_PartitionedPoly_obj::remove_collinear_vertices( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","remove_collinear_vertices",0xef0c64ff,"zpp_nape.geom.ZPP_PartitionedPoly.remove_collinear_vertices","zpp_nape/geom/PartitionedPoly.hx",712,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(713)
	::zpp_nape::geom::ZPP_PartitionVertex tmp = this->vertices;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(713)
	::zpp_nape::geom::ZPP_PartitionVertex p = tmp;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(714)
	bool skip = true;		HX_STACK_VAR(skip,"skip");
	HX_STACK_LINE(715)
	while((true)){
		HX_STACK_LINE(715)
		bool tmp1 = skip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(715)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(715)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(715)
		if ((tmp2)){
			HX_STACK_LINE(715)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(715)
			::zpp_nape::geom::ZPP_PartitionVertex tmp5 = this->vertices;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(715)
			::zpp_nape::geom::ZPP_PartitionVertex tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(715)
			tmp3 = (tmp4 != tmp6);
		}
		else{
			HX_STACK_LINE(715)
			tmp3 = true;
		}
		HX_STACK_LINE(715)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(715)
		if ((tmp4)){
			HX_STACK_LINE(715)
			break;
		}
		HX_STACK_LINE(716)
		skip = false;
		HX_STACK_LINE(717)
		::zpp_nape::geom::ZPP_PartitionVertex tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(717)
		::zpp_nape::geom::ZPP_PartitionVertex tmp6 = p->next;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(717)
		bool tmp7 = this->eq(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(717)
		if ((tmp7)){
			HX_STACK_LINE(718)
			::zpp_nape::geom::ZPP_PartitionVertex tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(718)
			::zpp_nape::geom::ZPP_PartitionVertex tmp9 = this->vertices;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(718)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(718)
			if ((tmp10)){
				HX_STACK_LINE(719)
				this->vertices = p->next;
				HX_STACK_LINE(720)
				skip = true;
			}
			HX_STACK_LINE(722)
			bool tmp11 = p->forced;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(722)
			if ((tmp11)){
				HX_STACK_LINE(722)
				p->next->forced = true;
			}
			HX_STACK_LINE(723)
			::zpp_nape::geom::ZPP_PartitionVertex tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(723)
			{
				HX_STACK_LINE(732)
				bool tmp13 = (p != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(732)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(732)
				if ((tmp13)){
					HX_STACK_LINE(732)
					tmp14 = (p->prev == p);
				}
				else{
					HX_STACK_LINE(732)
					tmp14 = false;
				}
				HX_STACK_LINE(732)
				if ((tmp14)){
					HX_STACK_LINE(733)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = p->prev = null();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(733)
					p->next = tmp15;
					HX_STACK_LINE(734)
					{
						HX_STACK_LINE(735)
						::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(744)
						{
							HX_STACK_LINE(744)
							o->helper = null();
							HX_STACK_LINE(744)
							Dynamic();
						}
						HX_STACK_LINE(745)
						::zpp_nape::geom::ZPP_PartitionVertex tmp16 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(745)
						o->next = tmp16;
						HX_STACK_LINE(746)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(751)
					tmp12 = p = null();
				}
				else{
					HX_STACK_LINE(754)
					::zpp_nape::geom::ZPP_PartitionVertex retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(755)
					p->prev->next = p->next;
					HX_STACK_LINE(756)
					p->next->prev = p->prev;
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = p->prev = null();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(757)
					p->next = tmp15;
					HX_STACK_LINE(758)
					{
						HX_STACK_LINE(759)
						::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(768)
						{
							HX_STACK_LINE(768)
							o->helper = null();
							HX_STACK_LINE(768)
							Dynamic();
						}
						HX_STACK_LINE(769)
						::zpp_nape::geom::ZPP_PartitionVertex tmp16 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(769)
						o->next = tmp16;
						HX_STACK_LINE(770)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(775)
					p = null();
					HX_STACK_LINE(776)
					tmp12 = retnodes;
				}
			}
			HX_STACK_LINE(723)
			p = tmp12;
			HX_STACK_LINE(779)
			bool tmp13 = (p == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(779)
			if ((tmp13)){
				HX_STACK_LINE(780)
				this->vertices = null();
				HX_STACK_LINE(781)
				break;
			}
		}
		else{
			HX_STACK_LINE(784)
			p = p->next;
		}
	}
	HX_STACK_LINE(786)
	::zpp_nape::geom::ZPP_PartitionVertex tmp1 = this->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(786)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(786)
	if ((tmp2)){
		HX_STACK_LINE(786)
		return true;
	}
	HX_STACK_LINE(787)
	bool removed;		HX_STACK_VAR(removed,"removed");
	HX_STACK_LINE(788)
	while((true)){
		HX_STACK_LINE(789)
		removed = false;
		HX_STACK_LINE(790)
		::zpp_nape::geom::ZPP_PartitionVertex tmp3 = this->vertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(790)
		p = tmp3;
		HX_STACK_LINE(791)
		skip = true;
		HX_STACK_LINE(792)
		while((true)){
			HX_STACK_LINE(792)
			bool tmp4 = skip;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(792)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(792)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(792)
			if ((tmp5)){
				HX_STACK_LINE(792)
				::zpp_nape::geom::ZPP_PartitionVertex tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(792)
				::zpp_nape::geom::ZPP_PartitionVertex tmp8 = this->vertices;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(792)
				::zpp_nape::geom::ZPP_PartitionVertex tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(792)
				tmp6 = (tmp7 != tmp9);
			}
			else{
				HX_STACK_LINE(792)
				tmp6 = true;
			}
			HX_STACK_LINE(792)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(792)
			if ((tmp7)){
				HX_STACK_LINE(792)
				break;
			}
			HX_STACK_LINE(793)
			skip = false;
			HX_STACK_LINE(794)
			::zpp_nape::geom::ZPP_PartitionVertex pre = p->prev;		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(795)
			Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(796)
			Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(797)
			{
				HX_STACK_LINE(798)
				Float tmp8 = (p->x - pre->x);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(798)
				ux = tmp8;
				HX_STACK_LINE(799)
				Float tmp9 = (p->y - pre->y);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(799)
				uy = tmp9;
			}
			HX_STACK_LINE(801)
			Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(802)
			Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(803)
			{
				HX_STACK_LINE(804)
				Float tmp8 = p->next->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(804)
				Float tmp9 = p->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(804)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(804)
				vx = tmp10;
				HX_STACK_LINE(805)
				Float tmp11 = p->next->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(805)
				Float tmp12 = p->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(805)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(805)
				vy = tmp13;
			}
			HX_STACK_LINE(807)
			Float tmp8 = (vy * ux);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(807)
			Float tmp9 = (vx * uy);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(807)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(807)
			Float crs = tmp10;		HX_STACK_VAR(crs,"crs");
			HX_STACK_LINE(808)
			Float tmp11 = (crs * crs);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(808)
			Float tmp12 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(808)
			Float tmp13 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(808)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(808)
			bool tmp15 = (tmp11 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(808)
			if ((tmp15)){
				HX_STACK_LINE(809)
				p = p->next;
			}
			else{
				HX_STACK_LINE(812)
				::zpp_nape::geom::ZPP_PartitionVertex tmp16 = p;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(812)
				::zpp_nape::geom::ZPP_PartitionVertex tmp17 = this->vertices;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(812)
				bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(812)
				if ((tmp18)){
					HX_STACK_LINE(813)
					this->vertices = p->next;
					HX_STACK_LINE(814)
					skip = true;
				}
				HX_STACK_LINE(816)
				::zpp_nape::geom::ZPP_PartitionVertex tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(816)
				{
					HX_STACK_LINE(825)
					bool tmp20 = (p != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(825)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(825)
					if ((tmp20)){
						HX_STACK_LINE(825)
						tmp21 = (p->prev == p);
					}
					else{
						HX_STACK_LINE(825)
						tmp21 = false;
					}
					HX_STACK_LINE(825)
					if ((tmp21)){
						HX_STACK_LINE(826)
						::zpp_nape::geom::ZPP_PartitionVertex tmp22 = p->prev = null();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(826)
						p->next = tmp22;
						HX_STACK_LINE(827)
						{
							HX_STACK_LINE(828)
							::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(837)
							{
								HX_STACK_LINE(837)
								o->helper = null();
								HX_STACK_LINE(837)
								Dynamic();
							}
							HX_STACK_LINE(838)
							::zpp_nape::geom::ZPP_PartitionVertex tmp23 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(838)
							o->next = tmp23;
							HX_STACK_LINE(839)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(844)
						tmp19 = p = null();
					}
					else{
						HX_STACK_LINE(847)
						::zpp_nape::geom::ZPP_PartitionVertex retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
						HX_STACK_LINE(848)
						p->prev->next = p->next;
						HX_STACK_LINE(849)
						p->next->prev = p->prev;
						HX_STACK_LINE(850)
						::zpp_nape::geom::ZPP_PartitionVertex tmp22 = p->prev = null();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(850)
						p->next = tmp22;
						HX_STACK_LINE(851)
						{
							HX_STACK_LINE(852)
							::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(861)
							{
								HX_STACK_LINE(861)
								o->helper = null();
								HX_STACK_LINE(861)
								Dynamic();
							}
							HX_STACK_LINE(862)
							::zpp_nape::geom::ZPP_PartitionVertex tmp23 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(862)
							o->next = tmp23;
							HX_STACK_LINE(863)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(868)
						p = null();
						HX_STACK_LINE(869)
						tmp19 = retnodes;
					}
				}
				HX_STACK_LINE(816)
				p = tmp19;
				HX_STACK_LINE(872)
				removed = true;
				HX_STACK_LINE(873)
				bool tmp20 = (p == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(873)
				if ((tmp20)){
					HX_STACK_LINE(874)
					removed = false;
					HX_STACK_LINE(875)
					this->vertices = null();
					HX_STACK_LINE(876)
					break;
				}
			}
		}
		HX_STACK_LINE(881)
		bool tmp4 = removed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(881)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(788)
		if ((tmp5)){
			HX_STACK_LINE(788)
			break;
		}
	}
	HX_STACK_LINE(882)
	::zpp_nape::geom::ZPP_PartitionVertex tmp3 = this->vertices;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(882)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(882)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,remove_collinear_vertices,return )

Void ZPP_PartitionedPoly_obj::add_diagonal( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","add_diagonal",0xca5a56a2,"zpp_nape.geom.ZPP_PartitionedPoly.add_diagonal","zpp_nape/geom/PartitionedPoly.hx",884,0x0d312f3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(885)
		::zpp_nape::geom::ZPP_PartitionVertex tmp = q;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(885)
		p->diagonals->add(tmp);
		HX_STACK_LINE(886)
		::zpp_nape::geom::ZPP_PartitionVertex tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(886)
		q->diagonals->add(tmp1);
		HX_STACK_LINE(887)
		bool tmp2 = q->forced = true;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(887)
		p->forced = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,add_diagonal,(void))

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::extract_partitions( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ret){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","extract_partitions",0xb5140696,"zpp_nape.geom.ZPP_PartitionedPoly.extract_partitions","zpp_nape/geom/PartitionedPoly.hx",895,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ret,"ret")
	HX_STACK_LINE(896)
	bool tmp = (ret == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(896)
	if ((tmp)){
		HX_STACK_LINE(896)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp1 = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(896)
		ret = tmp1;
	}
	HX_STACK_LINE(897)
	::zpp_nape::geom::ZPP_PartitionVertex tmp1 = this->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(897)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(897)
	if ((tmp2)){
		HX_STACK_LINE(898)
		{
			HX_STACK_LINE(899)
			::zpp_nape::geom::ZPP_PartitionVertex tmp3 = this->vertices;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(899)
			::zpp_nape::geom::ZPP_PartitionVertex F = tmp3;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(900)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = this->vertices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(900)
			::zpp_nape::geom::ZPP_PartitionVertex L = tmp4;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(901)
			bool tmp5 = (F != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(901)
			if ((tmp5)){
				HX_STACK_LINE(902)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(903)
				while((true)){
					HX_STACK_LINE(904)
					::zpp_nape::geom::ZPP_PartitionVertex c = nite;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(906)
					c->sort();
					HX_STACK_LINE(908)
					nite = nite->next;
					HX_STACK_LINE(910)
					bool tmp6 = (nite != L);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(910)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(903)
					if ((tmp7)){
						HX_STACK_LINE(903)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_PartitionVertex tmp3 = this->vertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(913)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(913)
		this->pull_partitions(tmp3,tmp4);
		HX_STACK_LINE(915)
		while((true)){
			HX_STACK_LINE(915)
			::zpp_nape::geom::ZPP_PartitionVertex tmp5 = this->vertices;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(915)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(915)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(915)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(915)
			if ((tmp8)){
				HX_STACK_LINE(915)
				break;
			}
			HX_STACK_LINE(915)
			::zpp_nape::geom::ZPP_PartitionVertex tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(915)
			{
				HX_STACK_LINE(924)
				::zpp_nape::geom::ZPP_PartitionVertex tmp10 = this->vertices;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(924)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(924)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(924)
				if ((tmp11)){
					HX_STACK_LINE(924)
					::zpp_nape::geom::ZPP_PartitionVertex tmp13 = this->vertices;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(924)
					::zpp_nape::geom::ZPP_PartitionVertex tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(924)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = tmp14->prev;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(924)
					::zpp_nape::geom::ZPP_PartitionVertex tmp16 = this->vertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(924)
					::zpp_nape::geom::ZPP_PartitionVertex tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(924)
					tmp12 = (tmp15 == tmp17);
				}
				else{
					HX_STACK_LINE(924)
					tmp12 = false;
				}
				HX_STACK_LINE(924)
				if ((tmp12)){
					HX_STACK_LINE(925)
					::zpp_nape::geom::ZPP_PartitionVertex tmp13 = this->vertices;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(925)
					::zpp_nape::geom::ZPP_PartitionVertex tmp14 = tmp13->prev = null();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(925)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = this->vertices;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(925)
					tmp15->next = tmp14;
					HX_STACK_LINE(926)
					{
						HX_STACK_LINE(927)
						::zpp_nape::geom::ZPP_PartitionVertex tmp16 = this->vertices;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(927)
						::zpp_nape::geom::ZPP_PartitionVertex o = tmp16;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(936)
						{
							HX_STACK_LINE(936)
							o->helper = null();
							HX_STACK_LINE(936)
							Dynamic();
						}
						HX_STACK_LINE(937)
						::zpp_nape::geom::ZPP_PartitionVertex tmp17 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(937)
						o->next = tmp17;
						HX_STACK_LINE(938)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(943)
					tmp9 = this->vertices = null();
				}
				else{
					HX_STACK_LINE(946)
					::zpp_nape::geom::ZPP_PartitionVertex tmp13 = this->vertices;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(946)
					::zpp_nape::geom::ZPP_PartitionVertex retnodes = tmp13->next;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(947)
					::zpp_nape::geom::ZPP_PartitionVertex tmp14 = this->vertices;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(947)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = this->vertices;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(947)
					tmp15->prev->next = tmp14->next;
					HX_STACK_LINE(948)
					::zpp_nape::geom::ZPP_PartitionVertex tmp16 = this->vertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(948)
					::zpp_nape::geom::ZPP_PartitionVertex tmp17 = this->vertices;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(948)
					tmp17->next->prev = tmp16->prev;
					HX_STACK_LINE(949)
					::zpp_nape::geom::ZPP_PartitionVertex tmp18 = this->vertices;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(949)
					::zpp_nape::geom::ZPP_PartitionVertex tmp19 = tmp18->prev = null();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(949)
					::zpp_nape::geom::ZPP_PartitionVertex tmp20 = this->vertices;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(949)
					tmp20->next = tmp19;
					HX_STACK_LINE(950)
					{
						HX_STACK_LINE(951)
						::zpp_nape::geom::ZPP_PartitionVertex tmp21 = this->vertices;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(951)
						::zpp_nape::geom::ZPP_PartitionVertex o = tmp21;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(960)
						{
							HX_STACK_LINE(960)
							o->helper = null();
							HX_STACK_LINE(960)
							Dynamic();
						}
						HX_STACK_LINE(961)
						::zpp_nape::geom::ZPP_PartitionVertex tmp22 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(961)
						o->next = tmp22;
						HX_STACK_LINE(962)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(967)
					this->vertices = null();
					HX_STACK_LINE(968)
					tmp9 = retnodes;
				}
			}
			HX_STACK_LINE(915)
			this->vertices = tmp9;
		}
		HX_STACK_LINE(972)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(973)
		{
			HX_STACK_LINE(974)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = ret->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(975)
			while((true)){
				HX_STACK_LINE(975)
				bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(975)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(975)
				if ((tmp6)){
					HX_STACK_LINE(975)
					break;
				}
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_PartitionedPoly p = cx_ite->elt;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(978)
					bool tmp7 = p->remove_collinear_vertices();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(978)
					if ((tmp7)){
						HX_STACK_LINE(979)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp8 = pre;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(979)
						ret->erase(tmp8);
						HX_STACK_LINE(980)
						continue;
					}
					HX_STACK_LINE(982)
					pre = cx_ite;
				}
				HX_STACK_LINE(984)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(988)
	::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(988)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,extract_partitions,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionedPoly_obj::pull_partitions( ::zpp_nape::geom::ZPP_PartitionVertex start,::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ret){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","pull_partitions",0x0c45f394,"zpp_nape.geom.ZPP_PartitionedPoly.pull_partitions","zpp_nape/geom/PartitionedPoly.hx",990,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(ret,"ret")
	HX_STACK_LINE(991)
	::zpp_nape::geom::ZPP_PartitionedPoly poly;		HX_STACK_VAR(poly,"poly");
	HX_STACK_LINE(992)
	{
		HX_STACK_LINE(993)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(993)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(993)
		if ((tmp1)){
			HX_STACK_LINE(994)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp2 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(994)
			poly = tmp2;
		}
		else{
			HX_STACK_LINE(1000)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp2 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1000)
			poly = tmp2;
			HX_STACK_LINE(1001)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = poly->next;
			HX_STACK_LINE(1002)
			poly->next = null();
		}
		HX_STACK_LINE(1007)
		Dynamic();
	}
	HX_STACK_LINE(1009)
	::zpp_nape::geom::ZPP_PartitionVertex next = start;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(1010)
	while((true)){
		HX_STACK_LINE(1011)
		::zpp_nape::geom::ZPP_PartitionVertex tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1011)
		{
			HX_STACK_LINE(1012)
			::zpp_nape::geom::ZPP_PartitionVertex tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1012)
			{
				HX_STACK_LINE(1012)
				::zpp_nape::geom::ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1012)
				{
					HX_STACK_LINE(1012)
					::zpp_nape::geom::ZPP_PartitionVertex tmp2 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1012)
					bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1012)
					if ((tmp3)){
						HX_STACK_LINE(1012)
						::zpp_nape::geom::ZPP_PartitionVertex tmp4 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1012)
						ret1 = tmp4;
					}
					else{
						HX_STACK_LINE(1012)
						::zpp_nape::geom::ZPP_PartitionVertex tmp4 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1012)
						ret1 = tmp4;
						HX_STACK_LINE(1012)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1012)
						ret1->next = null();
					}
					HX_STACK_LINE(1012)
					Dynamic();
				}
				HX_STACK_LINE(1012)
				{
					HX_STACK_LINE(1012)
					ret1->x = next->x;
					HX_STACK_LINE(1012)
					ret1->y = next->y;
					HX_STACK_LINE(1012)
					{
					}
				}
				HX_STACK_LINE(1012)
				ret1->forced = next->forced;
				HX_STACK_LINE(1012)
				tmp1 = ret1;
			}
			HX_STACK_LINE(1012)
			::zpp_nape::geom::ZPP_PartitionVertex obj = tmp1;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(1013)
			bool tmp2 = (poly->vertices == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1013)
			if ((tmp2)){
				HX_STACK_LINE(1013)
				::zpp_nape::geom::ZPP_PartitionVertex tmp3 = obj->next = obj;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1013)
				::zpp_nape::geom::ZPP_PartitionVertex tmp4 = obj->prev = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1013)
				poly->vertices = tmp4;
			}
			else{
				HX_STACK_LINE(1015)
				obj->prev = poly->vertices;
				HX_STACK_LINE(1016)
				::zpp_nape::geom::ZPP_PartitionVertex tmp3 = poly->vertices->next;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1016)
				obj->next = tmp3;
				HX_STACK_LINE(1017)
				::zpp_nape::geom::ZPP_PartitionVertex tmp4 = poly->vertices->next;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1017)
				tmp4->prev = obj;
				HX_STACK_LINE(1018)
				poly->vertices->next = obj;
			}
			HX_STACK_LINE(1020)
			tmp = obj;
		}
		HX_STACK_LINE(1011)
		poly->vertices = tmp;
		HX_STACK_LINE(1022)
		poly->vertices->forced = next->forced;
		HX_STACK_LINE(1023)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp1 = next->diagonals->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1023)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1023)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1023)
		if ((tmp3)){
			HX_STACK_LINE(1024)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1024)
			{
				HX_STACK_LINE(1024)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex _this = next->diagonals;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1024)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = _this->head->elt;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1024)
				::zpp_nape::geom::ZPP_PartitionVertex ret1 = tmp5;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1024)
				_this->pop();
				HX_STACK_LINE(1024)
				tmp4 = ret1;
			}
			HX_STACK_LINE(1024)
			::zpp_nape::geom::ZPP_PartitionVertex diag = tmp4;		HX_STACK_VAR(diag,"diag");
			HX_STACK_LINE(1025)
			bool tmp5 = (diag == start);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1025)
			if ((tmp5)){
				HX_STACK_LINE(1025)
				break;
			}
			else{
				HX_STACK_LINE(1026)
				::zpp_nape::geom::ZPP_PartitionVertex tmp6 = next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1026)
				::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1026)
				::zpp_nape::geom::ZPP_PartitionVertex tmp8 = this->pull_partitions(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1026)
				next = tmp8;
			}
		}
		else{
			HX_STACK_LINE(1028)
			next = next->next;
		}
		HX_STACK_LINE(1030)
		bool tmp4 = (next != start);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1030)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1010)
		if ((tmp5)){
			HX_STACK_LINE(1010)
			break;
		}
	}
	HX_STACK_LINE(1085)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1085)
	{
		HX_STACK_LINE(1110)
		Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
		HX_STACK_LINE(1111)
		{
			HX_STACK_LINE(1112)
			::zpp_nape::geom::ZPP_PartitionVertex F = poly->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1113)
			::zpp_nape::geom::ZPP_PartitionVertex L = poly->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1114)
			bool tmp1 = (F != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1114)
			if ((tmp1)){
				HX_STACK_LINE(1115)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1116)
				while((true)){
					HX_STACK_LINE(1117)
					::zpp_nape::geom::ZPP_PartitionVertex v = nite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1119)
					{
						HX_STACK_LINE(1120)
						Float tmp2 = v->x;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1120)
						Float tmp3 = v->next->y;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1120)
						Float tmp4 = v->prev->y;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1120)
						Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1120)
						Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1120)
						hx::AddEq(area,tmp6);
					}
					HX_STACK_LINE(1123)
					nite = nite->next;
					HX_STACK_LINE(1125)
					bool tmp2 = (nite != L);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1125)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1116)
					if ((tmp3)){
						HX_STACK_LINE(1116)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1128)
		tmp = (area * ((Float)0.5));
	}
	HX_STACK_LINE(1085)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1085)
	if ((tmp1)){
		HX_STACK_LINE(1129)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp2 = poly;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1129)
		ret->add(tmp2);
	}
	HX_STACK_LINE(1130)
	::zpp_nape::geom::ZPP_PartitionVertex tmp2 = next;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1130)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,pull_partitions,return )

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::extract( ::zpp_nape::util::ZNPList_ZPP_GeomVert ret){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","extract",0xa144e712,"zpp_nape.geom.ZPP_PartitionedPoly.extract","zpp_nape/geom/PartitionedPoly.hx",1138,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ret,"ret")
	HX_STACK_LINE(1139)
	bool tmp = (ret == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1139)
	if ((tmp)){
		HX_STACK_LINE(1139)
		::zpp_nape::util::ZNPList_ZPP_GeomVert tmp1 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1139)
		ret = tmp1;
	}
	HX_STACK_LINE(1140)
	::zpp_nape::geom::ZPP_PartitionVertex tmp1 = this->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1140)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1140)
	if ((tmp2)){
		HX_STACK_LINE(1141)
		{
			HX_STACK_LINE(1142)
			::zpp_nape::geom::ZPP_PartitionVertex tmp3 = this->vertices;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1142)
			::zpp_nape::geom::ZPP_PartitionVertex F = tmp3;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1143)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = this->vertices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1143)
			::zpp_nape::geom::ZPP_PartitionVertex L = tmp4;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1144)
			bool tmp5 = (F != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1144)
			if ((tmp5)){
				HX_STACK_LINE(1145)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1146)
				while((true)){
					HX_STACK_LINE(1147)
					::zpp_nape::geom::ZPP_PartitionVertex c = nite;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(1149)
					c->sort();
					HX_STACK_LINE(1151)
					nite = nite->next;
					HX_STACK_LINE(1153)
					bool tmp6 = (nite != L);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1153)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1146)
					if ((tmp7)){
						HX_STACK_LINE(1146)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1156)
		::zpp_nape::geom::ZPP_PartitionVertex tmp3 = this->vertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1156)
		::zpp_nape::util::ZNPList_ZPP_GeomVert tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1156)
		this->pull(tmp3,tmp4);
		HX_STACK_LINE(1158)
		while((true)){
			HX_STACK_LINE(1158)
			::zpp_nape::geom::ZPP_PartitionVertex tmp5 = this->vertices;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1158)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1158)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1158)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1158)
			if ((tmp8)){
				HX_STACK_LINE(1158)
				break;
			}
			HX_STACK_LINE(1158)
			::zpp_nape::geom::ZPP_PartitionVertex tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1158)
			{
				HX_STACK_LINE(1167)
				::zpp_nape::geom::ZPP_PartitionVertex tmp10 = this->vertices;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1167)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1167)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1167)
				if ((tmp11)){
					HX_STACK_LINE(1167)
					::zpp_nape::geom::ZPP_PartitionVertex tmp13 = this->vertices;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1167)
					::zpp_nape::geom::ZPP_PartitionVertex tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1167)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = tmp14->prev;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1167)
					::zpp_nape::geom::ZPP_PartitionVertex tmp16 = this->vertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1167)
					::zpp_nape::geom::ZPP_PartitionVertex tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1167)
					tmp12 = (tmp15 == tmp17);
				}
				else{
					HX_STACK_LINE(1167)
					tmp12 = false;
				}
				HX_STACK_LINE(1167)
				if ((tmp12)){
					HX_STACK_LINE(1168)
					::zpp_nape::geom::ZPP_PartitionVertex tmp13 = this->vertices;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1168)
					::zpp_nape::geom::ZPP_PartitionVertex tmp14 = tmp13->prev = null();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1168)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = this->vertices;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1168)
					tmp15->next = tmp14;
					HX_STACK_LINE(1169)
					{
						HX_STACK_LINE(1170)
						::zpp_nape::geom::ZPP_PartitionVertex tmp16 = this->vertices;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1170)
						::zpp_nape::geom::ZPP_PartitionVertex o = tmp16;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1179)
						{
							HX_STACK_LINE(1179)
							o->helper = null();
							HX_STACK_LINE(1179)
							Dynamic();
						}
						HX_STACK_LINE(1180)
						::zpp_nape::geom::ZPP_PartitionVertex tmp17 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1180)
						o->next = tmp17;
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1186)
					tmp9 = this->vertices = null();
				}
				else{
					HX_STACK_LINE(1189)
					::zpp_nape::geom::ZPP_PartitionVertex tmp13 = this->vertices;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1189)
					::zpp_nape::geom::ZPP_PartitionVertex retnodes = tmp13->next;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(1190)
					::zpp_nape::geom::ZPP_PartitionVertex tmp14 = this->vertices;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1190)
					::zpp_nape::geom::ZPP_PartitionVertex tmp15 = this->vertices;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1190)
					tmp15->prev->next = tmp14->next;
					HX_STACK_LINE(1191)
					::zpp_nape::geom::ZPP_PartitionVertex tmp16 = this->vertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1191)
					::zpp_nape::geom::ZPP_PartitionVertex tmp17 = this->vertices;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1191)
					tmp17->next->prev = tmp16->prev;
					HX_STACK_LINE(1192)
					::zpp_nape::geom::ZPP_PartitionVertex tmp18 = this->vertices;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1192)
					::zpp_nape::geom::ZPP_PartitionVertex tmp19 = tmp18->prev = null();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1192)
					::zpp_nape::geom::ZPP_PartitionVertex tmp20 = this->vertices;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1192)
					tmp20->next = tmp19;
					HX_STACK_LINE(1193)
					{
						HX_STACK_LINE(1194)
						::zpp_nape::geom::ZPP_PartitionVertex tmp21 = this->vertices;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1194)
						::zpp_nape::geom::ZPP_PartitionVertex o = tmp21;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1203)
						{
							HX_STACK_LINE(1203)
							o->helper = null();
							HX_STACK_LINE(1203)
							Dynamic();
						}
						HX_STACK_LINE(1204)
						::zpp_nape::geom::ZPP_PartitionVertex tmp22 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1204)
						o->next = tmp22;
						HX_STACK_LINE(1205)
						::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1210)
					this->vertices = null();
					HX_STACK_LINE(1211)
					tmp9 = retnodes;
				}
			}
			HX_STACK_LINE(1158)
			this->vertices = tmp9;
		}
	}
	HX_STACK_LINE(1216)
	::zpp_nape::util::ZNPList_ZPP_GeomVert tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1216)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,extract,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionedPoly_obj::pull( ::zpp_nape::geom::ZPP_PartitionVertex start,::zpp_nape::util::ZNPList_ZPP_GeomVert ret){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","pull",0x4158fd54,"zpp_nape.geom.ZPP_PartitionedPoly.pull","zpp_nape/geom/PartitionedPoly.hx",1218,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(ret,"ret")
	HX_STACK_LINE(1219)
	::zpp_nape::geom::ZPP_GeomVert poly = null();		HX_STACK_VAR(poly,"poly");
	HX_STACK_LINE(1220)
	::zpp_nape::geom::ZPP_PartitionVertex next = start;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(1221)
	while((true)){
		HX_STACK_LINE(1222)
		::zpp_nape::geom::ZPP_GeomVert tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1222)
		{
			HX_STACK_LINE(1223)
			::zpp_nape::geom::ZPP_GeomVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1223)
			{
				HX_STACK_LINE(1223)
				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1223)
				{
					HX_STACK_LINE(1223)
					::zpp_nape::geom::ZPP_GeomVert tmp2 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1223)
					bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1223)
					if ((tmp3)){
						HX_STACK_LINE(1223)
						::zpp_nape::geom::ZPP_GeomVert tmp4 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1223)
						ret1 = tmp4;
					}
					else{
						HX_STACK_LINE(1223)
						::zpp_nape::geom::ZPP_GeomVert tmp4 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1223)
						ret1 = tmp4;
						HX_STACK_LINE(1223)
						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1223)
						ret1->next = null();
					}
					HX_STACK_LINE(1223)
					ret1->forced = false;
				}
				HX_STACK_LINE(1223)
				{
					HX_STACK_LINE(1223)
					ret1->x = next->x;
					HX_STACK_LINE(1223)
					ret1->y = next->y;
					HX_STACK_LINE(1223)
					{
					}
				}
				HX_STACK_LINE(1223)
				tmp1 = ret1;
			}
			HX_STACK_LINE(1223)
			::zpp_nape::geom::ZPP_GeomVert obj = tmp1;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(1224)
			bool tmp2 = (poly == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1224)
			if ((tmp2)){
				HX_STACK_LINE(1224)
				::zpp_nape::geom::ZPP_GeomVert tmp3 = obj->next = obj;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1224)
				::zpp_nape::geom::ZPP_GeomVert tmp4 = obj->prev = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1224)
				poly = tmp4;
			}
			else{
				HX_STACK_LINE(1226)
				obj->prev = poly;
				HX_STACK_LINE(1227)
				obj->next = poly->next;
				HX_STACK_LINE(1228)
				poly->next->prev = obj;
				HX_STACK_LINE(1229)
				poly->next = obj;
			}
			HX_STACK_LINE(1231)
			tmp = obj;
		}
		HX_STACK_LINE(1222)
		poly = tmp;
		HX_STACK_LINE(1233)
		poly->forced = next->forced;
		HX_STACK_LINE(1234)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp1 = next->diagonals->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1234)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1234)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1234)
		if ((tmp3)){
			HX_STACK_LINE(1235)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1235)
			{
				HX_STACK_LINE(1235)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex _this = next->diagonals;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1235)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = _this->head->elt;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1235)
				::zpp_nape::geom::ZPP_PartitionVertex ret1 = tmp5;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1235)
				_this->pop();
				HX_STACK_LINE(1235)
				tmp4 = ret1;
			}
			HX_STACK_LINE(1235)
			::zpp_nape::geom::ZPP_PartitionVertex diag = tmp4;		HX_STACK_VAR(diag,"diag");
			HX_STACK_LINE(1236)
			bool tmp5 = (diag == start);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1236)
			if ((tmp5)){
				HX_STACK_LINE(1237)
				break;
			}
			else{
				HX_STACK_LINE(1239)
				::zpp_nape::geom::ZPP_PartitionVertex tmp6 = next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1239)
				::zpp_nape::util::ZNPList_ZPP_GeomVert tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1239)
				::zpp_nape::geom::ZPP_PartitionVertex tmp8 = this->pull(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1239)
				next = tmp8;
			}
		}
		else{
			HX_STACK_LINE(1241)
			next = next->next;
		}
		HX_STACK_LINE(1243)
		bool tmp4 = (next != start);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1243)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1221)
		if ((tmp5)){
			HX_STACK_LINE(1221)
			break;
		}
	}
	HX_STACK_LINE(1298)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1298)
	{
		HX_STACK_LINE(1323)
		Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
		HX_STACK_LINE(1324)
		{
			HX_STACK_LINE(1325)
			::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1326)
			::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1327)
			bool tmp1 = (F != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1327)
			if ((tmp1)){
				HX_STACK_LINE(1328)
				::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1329)
				while((true)){
					HX_STACK_LINE(1330)
					::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1332)
					{
						HX_STACK_LINE(1333)
						Float tmp2 = v->x;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1333)
						Float tmp3 = v->next->y;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1333)
						Float tmp4 = v->prev->y;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1333)
						Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1333)
						Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1333)
						hx::AddEq(area,tmp6);
					}
					HX_STACK_LINE(1336)
					nite = nite->next;
					HX_STACK_LINE(1338)
					bool tmp2 = (nite != L);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1338)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1329)
					if ((tmp3)){
						HX_STACK_LINE(1329)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1341)
		tmp = (area * ((Float)0.5));
	}
	HX_STACK_LINE(1298)
	Float area = tmp;		HX_STACK_VAR(area,"area");
	HX_STACK_LINE(1343)
	Float tmp1 = (area * area);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1343)
	Float tmp2 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1343)
	Float tmp3 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1343)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1343)
	bool tmp5 = (tmp1 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1343)
	if ((tmp5)){
		HX_STACK_LINE(1344)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1344)
		{
			HX_STACK_LINE(1345)
			::zpp_nape::geom::ZPP_GeomVert p = poly;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1346)
			bool skip = true;		HX_STACK_VAR(skip,"skip");
			HX_STACK_LINE(1347)
			while((true)){
				HX_STACK_LINE(1347)
				bool tmp7 = skip;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1347)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1347)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1347)
				if ((tmp8)){
					HX_STACK_LINE(1347)
					tmp9 = (p != poly);
				}
				else{
					HX_STACK_LINE(1347)
					tmp9 = true;
				}
				HX_STACK_LINE(1347)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1347)
				if ((tmp10)){
					HX_STACK_LINE(1347)
					break;
				}
				HX_STACK_LINE(1348)
				skip = false;
				HX_STACK_LINE(1349)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1349)
				{
					HX_STACK_LINE(1349)
					Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(1349)
					Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(1349)
					{
						HX_STACK_LINE(1349)
						Float tmp12 = p->x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1349)
						Float tmp13 = p->next->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1349)
						Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1349)
						dx = tmp14;
						HX_STACK_LINE(1349)
						Float tmp15 = p->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1349)
						Float tmp16 = p->next->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1349)
						Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1349)
						dy = tmp17;
					}
					HX_STACK_LINE(1349)
					Float tmp12 = (dx * dx);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1349)
					Float tmp13 = (dy * dy);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1349)
					tmp11 = (tmp12 + tmp13);
				}
				HX_STACK_LINE(1349)
				Float tmp12 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1349)
				Float tmp13 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1349)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1349)
				bool tmp15 = (tmp11 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1349)
				if ((tmp15)){
					HX_STACK_LINE(1350)
					bool tmp16 = (p == poly);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1350)
					if ((tmp16)){
						HX_STACK_LINE(1351)
						poly = p->next;
						HX_STACK_LINE(1352)
						skip = true;
					}
					HX_STACK_LINE(1354)
					bool tmp17 = p->forced;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1354)
					if ((tmp17)){
						HX_STACK_LINE(1354)
						p->next->forced = true;
					}
					HX_STACK_LINE(1355)
					::zpp_nape::geom::ZPP_GeomVert tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1355)
					{
						HX_STACK_LINE(1364)
						bool tmp19 = (p != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1364)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1364)
						if ((tmp19)){
							HX_STACK_LINE(1364)
							tmp20 = (p->prev == p);
						}
						else{
							HX_STACK_LINE(1364)
							tmp20 = false;
						}
						HX_STACK_LINE(1364)
						if ((tmp20)){
							HX_STACK_LINE(1365)
							::zpp_nape::geom::ZPP_GeomVert tmp21 = p->prev = null();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1365)
							p->next = tmp21;
							HX_STACK_LINE(1367)
							tmp18 = p = null();
						}
						else{
							HX_STACK_LINE(1370)
							::zpp_nape::geom::ZPP_GeomVert retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
							HX_STACK_LINE(1371)
							p->prev->next = p->next;
							HX_STACK_LINE(1372)
							p->next->prev = p->prev;
							HX_STACK_LINE(1373)
							::zpp_nape::geom::ZPP_GeomVert tmp21 = p->prev = null();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1373)
							p->next = tmp21;
							HX_STACK_LINE(1375)
							p = null();
							HX_STACK_LINE(1376)
							tmp18 = retnodes;
						}
					}
					HX_STACK_LINE(1355)
					p = tmp18;
					HX_STACK_LINE(1379)
					bool tmp19 = (p == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1379)
					if ((tmp19)){
						HX_STACK_LINE(1380)
						poly = null();
						HX_STACK_LINE(1381)
						break;
					}
				}
				else{
					HX_STACK_LINE(1384)
					p = p->next;
				}
			}
			HX_STACK_LINE(1386)
			bool tmp7 = (poly != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1386)
			if ((tmp7)){
				HX_STACK_LINE(1387)
				bool removed;		HX_STACK_VAR(removed,"removed");
				HX_STACK_LINE(1388)
				while((true)){
					HX_STACK_LINE(1389)
					removed = false;
					HX_STACK_LINE(1390)
					p = poly;
					HX_STACK_LINE(1391)
					skip = true;
					HX_STACK_LINE(1392)
					while((true)){
						HX_STACK_LINE(1392)
						bool tmp8 = skip;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1392)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1392)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1392)
						if ((tmp9)){
							HX_STACK_LINE(1392)
							tmp10 = (p != poly);
						}
						else{
							HX_STACK_LINE(1392)
							tmp10 = true;
						}
						HX_STACK_LINE(1392)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1392)
						if ((tmp11)){
							HX_STACK_LINE(1392)
							break;
						}
						HX_STACK_LINE(1393)
						skip = false;
						HX_STACK_LINE(1394)
						::zpp_nape::geom::ZPP_GeomVert pre = p->prev;		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1395)
						Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
						HX_STACK_LINE(1396)
						Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
						HX_STACK_LINE(1397)
						{
							HX_STACK_LINE(1398)
							Float tmp12 = (p->x - pre->x);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1398)
							ux = tmp12;
							HX_STACK_LINE(1399)
							Float tmp13 = (p->y - pre->y);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1399)
							uy = tmp13;
						}
						HX_STACK_LINE(1401)
						Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
						HX_STACK_LINE(1402)
						Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
						HX_STACK_LINE(1403)
						{
							HX_STACK_LINE(1404)
							Float tmp12 = p->next->x;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1404)
							Float tmp13 = p->x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1404)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1404)
							vx = tmp14;
							HX_STACK_LINE(1405)
							Float tmp15 = p->next->y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1405)
							Float tmp16 = p->y;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1405)
							Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1405)
							vy = tmp17;
						}
						HX_STACK_LINE(1407)
						Float tmp12 = (vy * ux);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1407)
						Float tmp13 = (vx * uy);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1407)
						Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1407)
						Float crs = tmp14;		HX_STACK_VAR(crs,"crs");
						HX_STACK_LINE(1408)
						Float tmp15 = (crs * crs);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1408)
						Float tmp16 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1408)
						Float tmp17 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1408)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1408)
						bool tmp19 = (tmp15 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1408)
						if ((tmp19)){
							HX_STACK_LINE(1409)
							p = p->next;
						}
						else{
							HX_STACK_LINE(1412)
							bool tmp20 = (p == poly);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1412)
							if ((tmp20)){
								HX_STACK_LINE(1413)
								poly = p->next;
								HX_STACK_LINE(1414)
								skip = true;
							}
							HX_STACK_LINE(1416)
							::zpp_nape::geom::ZPP_GeomVert tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1416)
							{
								HX_STACK_LINE(1425)
								bool tmp22 = (p != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1425)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1425)
								if ((tmp22)){
									HX_STACK_LINE(1425)
									tmp23 = (p->prev == p);
								}
								else{
									HX_STACK_LINE(1425)
									tmp23 = false;
								}
								HX_STACK_LINE(1425)
								if ((tmp23)){
									HX_STACK_LINE(1426)
									::zpp_nape::geom::ZPP_GeomVert tmp24 = p->prev = null();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1426)
									p->next = tmp24;
									HX_STACK_LINE(1428)
									tmp21 = p = null();
								}
								else{
									HX_STACK_LINE(1431)
									::zpp_nape::geom::ZPP_GeomVert retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
									HX_STACK_LINE(1432)
									p->prev->next = p->next;
									HX_STACK_LINE(1433)
									p->next->prev = p->prev;
									HX_STACK_LINE(1434)
									::zpp_nape::geom::ZPP_GeomVert tmp24 = p->prev = null();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1434)
									p->next = tmp24;
									HX_STACK_LINE(1436)
									p = null();
									HX_STACK_LINE(1437)
									tmp21 = retnodes;
								}
							}
							HX_STACK_LINE(1416)
							p = tmp21;
							HX_STACK_LINE(1440)
							removed = true;
							HX_STACK_LINE(1441)
							bool tmp22 = (p == null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1441)
							if ((tmp22)){
								HX_STACK_LINE(1442)
								removed = false;
								HX_STACK_LINE(1443)
								poly = null();
								HX_STACK_LINE(1444)
								break;
							}
						}
					}
					HX_STACK_LINE(1449)
					bool tmp8 = removed;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1449)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1388)
					if ((tmp9)){
						HX_STACK_LINE(1388)
						break;
					}
				}
			}
			HX_STACK_LINE(1451)
			tmp6 = (poly == null());
		}
		HX_STACK_LINE(1344)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1344)
		if ((tmp7)){
			HX_STACK_LINE(1453)
			::zpp_nape::geom::ZPP_GeomVert tmp8 = poly;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1453)
			ret->add(tmp8);
		}
	}
	HX_STACK_LINE(1456)
	::zpp_nape::geom::ZPP_PartitionVertex tmp6 = next;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1456)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,pull,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::zpp_pool;

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::sharedPPList;

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::getSharedPP( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","getSharedPP",0xc23608ec,"zpp_nape.geom.ZPP_PartitionedPoly.getSharedPP","zpp_nape/geom/PartitionedPoly.hx",891,0x0d312f3a)
	HX_STACK_LINE(892)
	::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(892)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(892)
	if ((tmp1)){
		HX_STACK_LINE(892)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp2 = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(892)
		::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList = tmp2;
	}
	HX_STACK_LINE(893)
	::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp2 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(893)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,getSharedPP,return )

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::sharedGVList;

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::getShared( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionedPoly","getShared",0x3228efec,"zpp_nape.geom.ZPP_PartitionedPoly.getShared","zpp_nape/geom/PartitionedPoly.hx",1134,0x0d312f3a)
	HX_STACK_LINE(1135)
	::zpp_nape::util::ZNPList_ZPP_GeomVert tmp = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1135)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1135)
	if ((tmp1)){
		HX_STACK_LINE(1135)
		::zpp_nape::util::ZNPList_ZPP_GeomVert tmp2 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1135)
		::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = tmp2;
	}
	HX_STACK_LINE(1136)
	::zpp_nape::util::ZNPList_ZPP_GeomVert tmp2 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1136)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,getShared,return )


ZPP_PartitionedPoly_obj::ZPP_PartitionedPoly_obj()
{
}

void ZPP_PartitionedPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PartitionedPoly);
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_PartitionedPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_PartitionedPoly_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"eq") ) { return eq_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"pull") ) { return pull_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"add_diagonal") ) { return add_diagonal_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pull_partitions") ) { return pull_partitions_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"extract_partitions") ) { return extract_partitions_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"remove_collinear_vertices") ) { return remove_collinear_vertices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_PartitionedPoly_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getShared") ) { outValue = getShared_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSharedPP") ) { outValue = getSharedPP_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedPPList") ) { outValue = sharedPPList; return true;  }
		if (HX_FIELD_EQ(inName,"sharedGVList") ) { outValue = sharedGVList; return true;  }
	}
	return false;
}

Dynamic ZPP_PartitionedPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionedPoly >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_PartitionedPoly_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_PartitionedPoly >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedPPList") ) { sharedPPList=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly >(); return true; }
		if (HX_FIELD_EQ(inName,"sharedGVList") ) { sharedGVList=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_GeomVert >(); return true; }
	}
	return false;
}

void ZPP_PartitionedPoly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionedPoly_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionedPoly*/ ,(int)offsetof(ZPP_PartitionedPoly_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionedPoly*/ ,(void *) &ZPP_PartitionedPoly_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_PartitionedPoly*/ ,(void *) &ZPP_PartitionedPoly_obj::sharedPPList,HX_HCSTRING("sharedPPList","\xe3","\xf6","\x82","\xbd")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_GeomVert*/ ,(void *) &ZPP_PartitionedPoly_obj::sharedGVList,HX_HCSTRING("sharedGVList","\x92","\x32","\xb4","\x98")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("eq","\x6c","\x58","\x00","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("remove_collinear_vertices","\xee","\x6a","\xa4","\x07"),
	HX_HCSTRING("add_diagonal","\x13","\xbe","\xaf","\x6b"),
	HX_HCSTRING("extract_partitions","\xc7","\x18","\xea","\x01"),
	HX_HCSTRING("pull_partitions","\xc3","\x08","\xbc","\x8d"),
	HX_HCSTRING("extract","\x41","\xb5","\xea","\x78"),
	HX_HCSTRING("pull","\xc5","\x0b","\x61","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedPPList,"sharedPPList");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedGVList,"sharedGVList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedPPList,"sharedPPList");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedGVList,"sharedGVList");
};

#endif

hx::Class ZPP_PartitionedPoly_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("sharedPPList","\xe3","\xf6","\x82","\xbd"),
	HX_HCSTRING("getSharedPP","\x9b","\x1a","\xb0","\x6b"),
	HX_HCSTRING("sharedGVList","\x92","\x32","\xb4","\x98"),
	HX_HCSTRING("getShared","\xdb","\xe7","\x81","\x99"),
	::String(null()) };

void ZPP_PartitionedPoly_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_PartitionedPoly","\x3f","\xd9","\xdf","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_PartitionedPoly_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_PartitionedPoly_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_PartitionedPoly_obj >;
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

void ZPP_PartitionedPoly_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
