#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Triangular
#include <zpp_nape/geom/ZPP_Triangular.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Triangular_obj::__construct()
{
	return null();
}

//ZPP_Triangular_obj::~ZPP_Triangular_obj() { }

Dynamic ZPP_Triangular_obj::__CreateEmpty() { return  new ZPP_Triangular_obj; }
hx::ObjectPtr< ZPP_Triangular_obj > ZPP_Triangular_obj::__new()
{  hx::ObjectPtr< ZPP_Triangular_obj > _result_ = new ZPP_Triangular_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Triangular_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Triangular_obj > _result_ = new ZPP_Triangular_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_Triangular_obj::lt( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Triangular","lt",0xe312b489,"zpp_nape.geom.ZPP_Triangular.lt","zpp_nape/geom/Triangular.hx",615,0x53295a96)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(616)
	bool tmp = (p->y < q->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(616)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(616)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(616)
	if ((tmp1)){
		HX_STACK_LINE(616)
		bool tmp3 = (p->y == q->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(616)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(616)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(616)
		if ((tmp5)){
			HX_STACK_LINE(616)
			tmp2 = (p->x < q->x);
		}
		else{
			HX_STACK_LINE(616)
			tmp2 = false;
		}
	}
	else{
		HX_STACK_LINE(616)
		tmp2 = true;
	}
	HX_STACK_LINE(616)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Triangular_obj,lt,return )

Float ZPP_Triangular_obj::right_turn( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b,::zpp_nape::geom::ZPP_PartitionVertex c){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Triangular","right_turn",0xa0f83d01,"zpp_nape.geom.ZPP_Triangular.right_turn","zpp_nape/geom/Triangular.hx",619,0x53295a96)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(620)
	Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(621)
	Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(622)
	{
		HX_STACK_LINE(623)
		Float tmp = (c->x - b->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(623)
		ux = tmp;
		HX_STACK_LINE(624)
		Float tmp1 = (c->y - b->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(624)
		uy = tmp1;
	}
	HX_STACK_LINE(626)
	Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(627)
	Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(628)
	{
		HX_STACK_LINE(629)
		Float tmp = (b->x - a->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(629)
		vx = tmp;
		HX_STACK_LINE(630)
		Float tmp1 = (b->y - a->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(630)
		vy = tmp1;
	}
	HX_STACK_LINE(632)
	Float tmp = (vy * ux);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(632)
	Float tmp1 = (vx * uy);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(632)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Triangular_obj,right_turn,return )

::zpp_nape::util::ZNPList_ZPP_PartitionVertex ZPP_Triangular_obj::queue;

::zpp_nape::util::ZNPList_ZPP_PartitionVertex ZPP_Triangular_obj::stack;

bool ZPP_Triangular_obj::delaunay( ::zpp_nape::geom::ZPP_PartitionVertex A,::zpp_nape::geom::ZPP_PartitionVertex B,::zpp_nape::geom::ZPP_PartitionVertex C,::zpp_nape::geom::ZPP_PartitionVertex D){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Triangular","delaunay",0xf1cbbb88,"zpp_nape.geom.ZPP_Triangular.delaunay","zpp_nape/geom/Triangular.hx",636,0x53295a96)
	HX_STACK_ARG(A,"A")
	HX_STACK_ARG(B,"B")
	HX_STACK_ARG(C,"C")
	HX_STACK_ARG(D,"D")
	HX_STACK_LINE(637)
	Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(638)
	Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(639)
	Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(640)
	Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(641)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(642)
		{
			HX_STACK_LINE(643)
			Float tmp1 = (C->x - B->x);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(643)
			Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(643)
			ux = tmp2;
			HX_STACK_LINE(644)
			Float tmp3 = (C->y - B->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(644)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(644)
			uy = tmp4;
		}
		HX_STACK_LINE(646)
		{
			HX_STACK_LINE(647)
			Float tmp1 = (B->x - A->x);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(647)
			Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(647)
			vx = tmp2;
			HX_STACK_LINE(648)
			Float tmp3 = (B->y - A->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(648)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(648)
			vy = tmp4;
		}
		HX_STACK_LINE(650)
		Float tmp1 = (vy * ux);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(650)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(650)
		Float tmp3 = (vx * uy);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(650)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(650)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(650)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(650)
		tmp = (tmp6 >= (int)0);
	}
	HX_STACK_LINE(641)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(641)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(641)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(641)
	if ((tmp2)){
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(653)
			Float tmp4 = (D->x - C->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(653)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(653)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(653)
			ux = tmp6;
			HX_STACK_LINE(654)
			Float tmp7 = (D->y - C->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(654)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(654)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(654)
			uy = tmp9;
		}
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(657)
			Float tmp4 = (C->x - B->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(657)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(657)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(657)
			vx = tmp6;
			HX_STACK_LINE(658)
			Float tmp7 = (C->y - B->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(658)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(658)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(658)
			vy = tmp9;
		}
		HX_STACK_LINE(660)
		Float tmp4 = (vy * ux);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(660)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(660)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(660)
		Float tmp7 = (vx * uy);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(660)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(660)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(660)
		Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(660)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(660)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(660)
		tmp3 = (tmp12 >= (int)0);
	}
	else{
		HX_STACK_LINE(641)
		tmp3 = true;
	}
	HX_STACK_LINE(641)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(641)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(641)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(641)
	if ((tmp5)){
		HX_STACK_LINE(662)
		{
			HX_STACK_LINE(663)
			Float tmp7 = (A->x - D->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(663)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(663)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(663)
			ux = tmp9;
			HX_STACK_LINE(664)
			Float tmp10 = (A->y - D->y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(664)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(664)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(664)
			uy = tmp12;
		}
		HX_STACK_LINE(666)
		{
			HX_STACK_LINE(667)
			Float tmp7 = (D->x - C->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(667)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(667)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(667)
			vx = tmp9;
			HX_STACK_LINE(668)
			Float tmp10 = (D->y - C->y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(668)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(668)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(668)
			vy = tmp12;
		}
		HX_STACK_LINE(670)
		Float tmp7 = (vy * ux);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(670)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(670)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(670)
		Float tmp10 = (vx * uy);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(670)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(670)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(670)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(670)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(670)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(670)
		tmp6 = (tmp15 >= (int)0);
	}
	else{
		HX_STACK_LINE(641)
		tmp6 = true;
	}
	HX_STACK_LINE(641)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(641)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(641)
	if ((tmp7)){
		HX_STACK_LINE(672)
		{
			HX_STACK_LINE(673)
			Float tmp9 = (B->x - A->x);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(673)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(673)
			ux = tmp10;
			HX_STACK_LINE(674)
			Float tmp11 = (B->y - A->y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(674)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(674)
			uy = tmp12;
		}
		HX_STACK_LINE(676)
		{
			HX_STACK_LINE(677)
			Float tmp9 = (A->x - D->x);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(677)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(677)
			vx = tmp10;
			HX_STACK_LINE(678)
			Float tmp11 = (A->y - D->y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(678)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(678)
			vy = tmp12;
		}
		HX_STACK_LINE(680)
		Float tmp9 = (vy * ux);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(680)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(680)
		Float tmp11 = (vx * uy);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(680)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(680)
		Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(680)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(680)
		tmp8 = (tmp14 >= (int)0);
	}
	else{
		HX_STACK_LINE(641)
		tmp8 = true;
	}
	HX_STACK_LINE(641)
	if ((tmp8)){
		HX_STACK_LINE(682)
		return true;
	}
	HX_STACK_LINE(684)
	Float tmp9 = B->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(684)
	Float tmp10 = (C->y * D->mag);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(684)
	Float tmp11 = (C->mag * D->y);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(684)
	Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(684)
	Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(684)
	Float tmp14 = C->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(684)
	Float tmp15 = (B->y * D->mag);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(684)
	Float tmp16 = (B->mag * D->y);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(684)
	Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(684)
	Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(684)
	Float tmp19 = (tmp13 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(684)
	Float tmp20 = D->x;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(684)
	Float tmp21 = (B->y * C->mag);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(684)
	Float tmp22 = (B->mag * C->y);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(684)
	Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(684)
	Float tmp24 = (tmp20 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(684)
	Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(684)
	Float tmp26 = A->x;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(684)
	Float tmp27 = (C->y * D->mag);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(684)
	Float tmp28 = (C->mag * D->y);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(684)
	Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(684)
	Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(684)
	Float tmp31 = C->x;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(684)
	Float tmp32 = (A->y * D->mag);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(684)
	Float tmp33 = (A->mag * D->y);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(684)
	Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(684)
	Float tmp35 = (tmp31 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(684)
	Float tmp36 = (tmp30 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(684)
	Float tmp37 = D->x;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(684)
	Float tmp38 = (A->y * C->mag);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(684)
	Float tmp39 = (A->mag * C->y);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(684)
	Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(684)
	Float tmp41 = (tmp37 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(684)
	Float tmp42 = (tmp36 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(684)
	Float tmp43 = (tmp25 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(684)
	Float tmp44 = A->x;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(684)
	Float tmp45 = (B->y * D->mag);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(684)
	Float tmp46 = (B->mag * D->y);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(684)
	Float tmp47 = (tmp45 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(684)
	Float tmp48 = (tmp44 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(684)
	Float tmp49 = B->x;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(684)
	Float tmp50 = (A->y * D->mag);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(684)
	Float tmp51 = (A->mag * D->y);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(684)
	Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(684)
	Float tmp53 = (tmp49 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(684)
	Float tmp54 = (tmp48 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(684)
	Float tmp55 = D->x;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(684)
	Float tmp56 = (A->y * B->mag);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(684)
	Float tmp57 = (A->mag * B->y);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(684)
	Float tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(684)
	Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(684)
	Float tmp60 = (tmp54 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(684)
	Float tmp61 = (tmp43 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(684)
	Float tmp62 = A->x;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(684)
	Float tmp63 = (B->y * C->mag);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(684)
	Float tmp64 = (B->mag * C->y);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(684)
	Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(684)
	Float tmp66 = (tmp62 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(684)
	Float tmp67 = B->x;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(684)
	Float tmp68 = (A->y * C->mag);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(684)
	Float tmp69 = (A->mag * C->y);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(684)
	Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(684)
	Float tmp71 = (tmp67 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(684)
	Float tmp72 = (tmp66 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(684)
	Float tmp73 = C->x;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(684)
	Float tmp74 = (A->y * B->mag);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(684)
	Float tmp75 = (A->mag * B->y);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(684)
	Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(684)
	Float tmp77 = (tmp73 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(684)
	Float tmp78 = (tmp72 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(684)
	Float tmp79 = (tmp61 - tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(684)
	bool tmp80 = (tmp79 > (int)0);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(684)
	return tmp80;
	HX_STACK_LINE(685)
	Float tmp81 = B->x;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(685)
	Float tmp82 = (C->y * D->mag);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(685)
	Float tmp83 = (C->mag * D->y);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(685)
	Float tmp84 = (tmp82 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(685)
	Float tmp85 = (tmp81 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(685)
	Float tmp86 = B->y;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(685)
	Float tmp87 = (C->mag * D->x);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(685)
	Float tmp88 = (C->x * D->mag);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(685)
	Float tmp89 = (tmp87 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(685)
	Float tmp90 = (tmp86 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(685)
	Float tmp91 = (tmp85 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(685)
	Float tmp92 = B->mag;		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(685)
	Float tmp93 = (C->x * D->y);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(685)
	Float tmp94 = (C->y * D->x);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(685)
	Float tmp95 = (tmp93 - tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(685)
	Float tmp96 = (tmp92 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(685)
	Float tmp97 = (tmp91 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(685)
	Float tmp98 = A->x;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(685)
	Float tmp99 = (C->mag * D->y);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(685)
	Float tmp100 = (C->y * D->mag);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(685)
	Float tmp101 = (tmp99 - tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(685)
	Float tmp102 = B->mag;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(685)
	Float tmp103 = (C->y - D->y);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(685)
	Float tmp104 = (tmp102 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(685)
	Float tmp105 = (tmp101 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(685)
	Float tmp106 = B->y;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(685)
	Float tmp107 = (D->mag - C->mag);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(685)
	Float tmp108 = (tmp106 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(685)
	Float tmp109 = (tmp105 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(685)
	Float tmp110 = (tmp98 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(685)
	Float tmp111 = (tmp97 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(685)
	Float tmp112 = A->y;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(685)
	Float tmp113 = (C->x * D->mag);		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(685)
	Float tmp114 = (C->mag * D->x);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(685)
	Float tmp115 = (tmp113 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(685)
	Float tmp116 = B->mag;		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(685)
	Float tmp117 = (D->x - C->x);		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(685)
	Float tmp118 = (tmp116 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(685)
	Float tmp119 = (tmp115 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(685)
	Float tmp120 = B->x;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(685)
	Float tmp121 = (C->mag - D->mag);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(685)
	Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(685)
	Float tmp123 = (tmp119 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(685)
	Float tmp124 = (tmp112 * tmp123);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(685)
	Float tmp125 = (tmp111 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(685)
	Float tmp126 = A->mag;		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(685)
	Float tmp127 = (C->y * D->x);		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(685)
	Float tmp128 = (C->x * D->y);		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(685)
	Float tmp129 = (tmp127 - tmp128);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(685)
	Float tmp130 = B->x;		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(685)
	Float tmp131 = (D->y - C->y);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(685)
	Float tmp132 = (tmp130 * tmp131);		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(685)
	Float tmp133 = (tmp129 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(685)
	Float tmp134 = B->y;		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(685)
	Float tmp135 = (C->x - D->x);		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(685)
	Float tmp136 = (tmp134 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(685)
	Float tmp137 = (tmp133 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(685)
	Float tmp138 = (tmp126 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(685)
	Float tmp139 = (tmp125 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(685)
	bool tmp140 = (tmp139 > (int)0);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(685)
	return tmp140;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_Triangular_obj,delaunay,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Triangular_obj::edgeSet;

Void ZPP_Triangular_obj::optimise( ::zpp_nape::geom::ZPP_PartitionedPoly P){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Triangular","optimise",0xf924d385,"zpp_nape.geom.ZPP_Triangular.optimise","zpp_nape/geom/Triangular.hx",688,0x53295a96)
		HX_STACK_ARG(P,"P")
		HX_STACK_LINE(689)
		{
			HX_STACK_LINE(690)
			::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(691)
			::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(692)
			bool tmp = (F != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(692)
			if ((tmp)){
				HX_STACK_LINE(693)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(694)
				while((true)){
					HX_STACK_LINE(695)
					::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(697)
					{
						HX_STACK_LINE(698)
						p->sort();
						HX_STACK_LINE(699)
						Float tmp1 = (p->x * p->x);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(699)
						Float tmp2 = (p->y * p->y);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(699)
						Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(699)
						p->mag = tmp3;
					}
					HX_STACK_LINE(702)
					nite = nite->next;
					HX_STACK_LINE(704)
					bool tmp1 = (nite != L);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(704)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(694)
					if ((tmp2)){
						HX_STACK_LINE(694)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(707)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(707)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(707)
		if ((tmp1)){
			HX_STACK_LINE(708)
			{
				HX_STACK_LINE(709)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(709)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(709)
				if ((tmp3)){
					HX_STACK_LINE(710)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(710)
					::zpp_nape::geom::ZPP_Triangular_obj::edgeSet = tmp4;
				}
				else{
					HX_STACK_LINE(716)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(716)
					::zpp_nape::geom::ZPP_Triangular_obj::edgeSet = tmp4;
					HX_STACK_LINE(717)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp5 = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(717)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = tmp5->next;
					HX_STACK_LINE(718)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp6 = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(718)
					tmp6->next = null();
				}
				HX_STACK_LINE(723)
				Dynamic();
			}
			HX_STACK_LINE(725)
			Dynamic tmp2 = ::zpp_nape::geom::ZPP_PartitionPair_obj::edge_lt_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(725)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp3 = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(725)
			tmp3->lt = tmp2;
			HX_STACK_LINE(726)
			Dynamic tmp4 = ::zpp_nape::geom::ZPP_PartitionPair_obj::edge_swap_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(726)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp5 = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(726)
			tmp5->swapped = tmp4;
		}
		HX_STACK_LINE(728)
		::zpp_nape::geom::ZPP_PartitionPair edgeStack;		HX_STACK_VAR(edgeStack,"edgeStack");
		HX_STACK_LINE(729)
		{
			HX_STACK_LINE(730)
			::zpp_nape::geom::ZPP_PartitionPair tmp2 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(730)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(730)
			if ((tmp3)){
				HX_STACK_LINE(731)
				::zpp_nape::geom::ZPP_PartitionPair tmp4 = ::zpp_nape::geom::ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(731)
				edgeStack = tmp4;
			}
			else{
				HX_STACK_LINE(737)
				::zpp_nape::geom::ZPP_PartitionPair tmp4 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(737)
				edgeStack = tmp4;
				HX_STACK_LINE(738)
				::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = edgeStack->next;
				HX_STACK_LINE(739)
				edgeStack->next = null();
			}
			HX_STACK_LINE(744)
			Dynamic();
		}
		HX_STACK_LINE(746)
		{
			HX_STACK_LINE(747)
			::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(748)
			::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(749)
			bool tmp2 = (F != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(749)
			if ((tmp2)){
				HX_STACK_LINE(750)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(751)
				while((true)){
					HX_STACK_LINE(752)
					::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(754)
					{
						HX_STACK_LINE(755)
						::zpp_nape::geom::ZPP_PartitionVertex q0 = p->next;		HX_STACK_VAR(q0,"q0");
						HX_STACK_LINE(756)
						p->diagonals->reverse();
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(758)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp3 = p->diagonals->head;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(758)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = tmp3;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(759)
							while((true)){
								HX_STACK_LINE(759)
								bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(759)
								bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(759)
								if ((tmp5)){
									HX_STACK_LINE(759)
									break;
								}
								HX_STACK_LINE(760)
								::zpp_nape::geom::ZPP_PartitionVertex q = cx_ite->elt;		HX_STACK_VAR(q,"q");
								HX_STACK_LINE(761)
								{
									HX_STACK_LINE(762)
									bool tmp6 = (q->id < p->id);		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(762)
									if ((tmp6)){
										HX_STACK_LINE(763)
										q0 = q;
										HX_STACK_LINE(764)
										{
											HX_STACK_LINE(765)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(766)
											continue;
										}
									}
									HX_STACK_LINE(769)
									bool tmp7 = (cx_ite->next == null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(769)
									::zpp_nape::geom::ZPP_PartitionVertex tmp8;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(769)
									if ((tmp7)){
										HX_STACK_LINE(769)
										tmp8 = p->prev;
									}
									else{
										HX_STACK_LINE(769)
										tmp8 = cx_ite->next->elt;
									}
									HX_STACK_LINE(769)
									::zpp_nape::geom::ZPP_PartitionVertex q1 = tmp8;		HX_STACK_VAR(q1,"q1");
									HX_STACK_LINE(770)
									::zpp_nape::geom::ZPP_PartitionVertex tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(770)
									::zpp_nape::geom::ZPP_PartitionVertex tmp10 = q0;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(770)
									::zpp_nape::geom::ZPP_PartitionVertex tmp11 = q;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(770)
									::zpp_nape::geom::ZPP_PartitionVertex tmp12 = q1;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(770)
									bool tmp13 = ::zpp_nape::geom::ZPP_Triangular_obj::delaunay(tmp9,tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(770)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(770)
									if ((tmp14)){
										HX_STACK_LINE(771)
										::zpp_nape::geom::ZPP_PartitionPair tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(771)
										{
											HX_STACK_LINE(771)
											::zpp_nape::geom::ZPP_PartitionPair ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(771)
											{
												HX_STACK_LINE(771)
												::zpp_nape::geom::ZPP_PartitionPair tmp16 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(771)
												bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(771)
												if ((tmp17)){
													HX_STACK_LINE(771)
													::zpp_nape::geom::ZPP_PartitionPair tmp18 = ::zpp_nape::geom::ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(771)
													ret = tmp18;
												}
												else{
													HX_STACK_LINE(771)
													::zpp_nape::geom::ZPP_PartitionPair tmp18 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(771)
													ret = tmp18;
													HX_STACK_LINE(771)
													::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = ret->next;
													HX_STACK_LINE(771)
													ret->next = null();
												}
												HX_STACK_LINE(771)
												Dynamic();
											}
											HX_STACK_LINE(771)
											ret->a = p;
											HX_STACK_LINE(771)
											ret->b = q;
											HX_STACK_LINE(771)
											bool tmp16 = (p->id < q->id);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(771)
											if ((tmp16)){
												HX_STACK_LINE(771)
												ret->id = p->id;
												HX_STACK_LINE(771)
												ret->di = q->id;
											}
											else{
												HX_STACK_LINE(771)
												ret->id = q->id;
												HX_STACK_LINE(771)
												ret->di = p->id;
											}
											HX_STACK_LINE(771)
											tmp15 = ret;
										}
										HX_STACK_LINE(771)
										::zpp_nape::geom::ZPP_PartitionPair edge = tmp15;		HX_STACK_VAR(edge,"edge");
										HX_STACK_LINE(772)
										::zpp_nape::geom::ZPP_PartitionPair tmp16 = edge;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(772)
										edgeStack->add(tmp16);
										HX_STACK_LINE(773)
										::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp17 = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(773)
										::zpp_nape::geom::ZPP_PartitionPair tmp18 = edge;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(773)
										::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp19 = tmp17->insert(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(773)
										edge->node = tmp19;
									}
									HX_STACK_LINE(775)
									q0 = q;
								}
								HX_STACK_LINE(777)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(782)
					nite = nite->next;
					HX_STACK_LINE(784)
					bool tmp3 = (nite != L);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(784)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(751)
					if ((tmp4)){
						HX_STACK_LINE(751)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(787)
		while((true)){
			HX_STACK_LINE(787)
			bool tmp2 = (edgeStack->next == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(787)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(787)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(787)
			if ((tmp4)){
				HX_STACK_LINE(787)
				break;
			}
			HX_STACK_LINE(788)
			::zpp_nape::geom::ZPP_PartitionPair tmp5 = edgeStack->pop_unsafe();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(788)
			::zpp_nape::geom::ZPP_PartitionPair edge = tmp5;		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(789)
			::zpp_nape::geom::ZPP_PartitionVertex A = edge->a;		HX_STACK_VAR(A,"A");
			HX_STACK_LINE(790)
			::zpp_nape::geom::ZPP_PartitionVertex C = edge->b;		HX_STACK_VAR(C,"C");
			HX_STACK_LINE(791)
			::zpp_nape::geom::ZPP_PartitionVertex B = A->next;		HX_STACK_VAR(B,"B");
			HX_STACK_LINE(792)
			::zpp_nape::geom::ZPP_PartitionVertex D = null();		HX_STACK_VAR(D,"D");
			HX_STACK_LINE(793)
			{
				HX_STACK_LINE(794)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp6 = A->diagonals->head;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(794)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(795)
				while((true)){
					HX_STACK_LINE(795)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(795)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(795)
					if ((tmp8)){
						HX_STACK_LINE(795)
						break;
					}
					HX_STACK_LINE(796)
					::zpp_nape::geom::ZPP_PartitionVertex p = cx_ite->elt;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(797)
					{
						HX_STACK_LINE(798)
						bool tmp9 = (p == C);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(798)
						if ((tmp9)){
							HX_STACK_LINE(799)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(800)
							bool tmp10 = (cx_ite == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(800)
							::zpp_nape::geom::ZPP_PartitionVertex tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(800)
							if ((tmp10)){
								HX_STACK_LINE(800)
								tmp11 = A->prev;
							}
							else{
								HX_STACK_LINE(800)
								tmp11 = cx_ite->elt;
							}
							HX_STACK_LINE(800)
							D = tmp11;
							HX_STACK_LINE(801)
							break;
						}
						HX_STACK_LINE(803)
						B = p;
					}
					HX_STACK_LINE(805)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(808)
			::zpp_nape::geom::ZPP_PartitionVertex tmp6 = C;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(808)
			A->diagonals->remove(tmp6);
			HX_STACK_LINE(809)
			::zpp_nape::geom::ZPP_PartitionVertex tmp7 = A;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(809)
			C->diagonals->remove(tmp7);
			HX_STACK_LINE(810)
			{
				HX_STACK_LINE(811)
				bool tmp8 = (C == B->next);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(811)
				if ((tmp8)){
					HX_STACK_LINE(812)
					::zpp_nape::geom::ZPP_PartitionVertex tmp9 = D;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(812)
					B->diagonals->add(tmp9);
				}
				else{
					HX_STACK_LINE(816)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp9 = B->diagonals->head;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(816)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = tmp9;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(817)
					while((true)){
						HX_STACK_LINE(817)
						bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(817)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(817)
						if ((tmp11)){
							HX_STACK_LINE(817)
							break;
						}
						HX_STACK_LINE(818)
						::zpp_nape::geom::ZPP_PartitionVertex p = cx_ite->elt;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(819)
						{
							HX_STACK_LINE(820)
							bool tmp12 = (p == C);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(820)
							if ((tmp12)){
								HX_STACK_LINE(821)
								::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp13 = cx_ite;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(821)
								::zpp_nape::geom::ZPP_PartitionVertex tmp14 = D;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(821)
								B->diagonals->insert(tmp13,tmp14);
								HX_STACK_LINE(822)
								break;
							}
						}
						HX_STACK_LINE(825)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(830)
			{
				HX_STACK_LINE(831)
				bool tmp8 = (A == D->next);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(831)
				if ((tmp8)){
					HX_STACK_LINE(832)
					::zpp_nape::geom::ZPP_PartitionVertex tmp9 = B;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(832)
					D->diagonals->add(tmp9);
				}
				else{
					HX_STACK_LINE(836)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp9 = D->diagonals->head;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(836)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = tmp9;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(837)
					while((true)){
						HX_STACK_LINE(837)
						bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(837)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(837)
						if ((tmp11)){
							HX_STACK_LINE(837)
							break;
						}
						HX_STACK_LINE(838)
						::zpp_nape::geom::ZPP_PartitionVertex p = cx_ite->elt;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(839)
						{
							HX_STACK_LINE(840)
							bool tmp12 = (p == A);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(840)
							if ((tmp12)){
								HX_STACK_LINE(841)
								::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp13 = cx_ite;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(841)
								::zpp_nape::geom::ZPP_PartitionVertex tmp14 = B;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(841)
								D->diagonals->insert(tmp13,tmp14);
								HX_STACK_LINE(842)
								break;
							}
						}
						HX_STACK_LINE(845)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(850)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp8 = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(850)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp9 = edge->node;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(850)
			tmp8->remove_node(tmp9);
			HX_STACK_LINE(851)
			{
				HX_STACK_LINE(852)
				::zpp_nape::geom::ZPP_PartitionPair o = edge;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(861)
				{
					HX_STACK_LINE(861)
					::zpp_nape::geom::ZPP_PartitionVertex tmp10 = o->b = null();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(861)
					o->a = tmp10;
					HX_STACK_LINE(861)
					o->node = null();
				}
				HX_STACK_LINE(862)
				::zpp_nape::geom::ZPP_PartitionPair tmp10 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(862)
				o->next = tmp10;
				HX_STACK_LINE(863)
				::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(869)
		{
			HX_STACK_LINE(870)
			::zpp_nape::geom::ZPP_PartitionPair o = edgeStack;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(879)
			{
				HX_STACK_LINE(879)
				::zpp_nape::geom::ZPP_PartitionVertex tmp2 = o->b = null();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(879)
				o->a = tmp2;
				HX_STACK_LINE(879)
				o->node = null();
			}
			HX_STACK_LINE(880)
			::zpp_nape::geom::ZPP_PartitionPair tmp2 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(880)
			o->next = tmp2;
			HX_STACK_LINE(881)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = o;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Triangular_obj,optimise,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_Triangular_obj::triangulate( ::zpp_nape::geom::ZPP_PartitionedPoly P){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Triangular","triangulate",0xd8dac70b,"zpp_nape.geom.ZPP_Triangular.triangulate","zpp_nape/geom/Triangular.hx",887,0x53295a96)
	HX_STACK_ARG(P,"P")
	HX_STACK_LINE(888)
	::zpp_nape::geom::ZPP_PartitionVertex min = P->vertices;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(889)
	::zpp_nape::geom::ZPP_PartitionVertex max = P->vertices;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(890)
	{
		HX_STACK_LINE(891)
		::zpp_nape::geom::ZPP_PartitionVertex tmp = P->vertices->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(891)
		::zpp_nape::geom::ZPP_PartitionVertex F = tmp;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(892)
		::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(893)
		bool tmp1 = (F != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		if ((tmp1)){
			HX_STACK_LINE(894)
			::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(895)
			while((true)){
				HX_STACK_LINE(896)
				::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(898)
				{
					HX_STACK_LINE(899)
					bool tmp2 = (p->y < min->y);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(899)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(899)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(899)
					if ((tmp3)){
						HX_STACK_LINE(899)
						bool tmp5 = (p->y == min->y);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(899)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(899)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(899)
						if ((tmp7)){
							HX_STACK_LINE(899)
							tmp4 = (p->x < min->x);
						}
						else{
							HX_STACK_LINE(899)
							tmp4 = false;
						}
					}
					else{
						HX_STACK_LINE(899)
						tmp4 = true;
					}
					HX_STACK_LINE(899)
					if ((tmp4)){
						HX_STACK_LINE(899)
						min = p;
					}
					HX_STACK_LINE(900)
					bool tmp5 = (max->y < p->y);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(900)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(900)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(900)
					if ((tmp6)){
						HX_STACK_LINE(900)
						bool tmp8 = (max->y == p->y);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(900)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(900)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(900)
						if ((tmp10)){
							HX_STACK_LINE(900)
							tmp7 = (max->x < p->x);
						}
						else{
							HX_STACK_LINE(900)
							tmp7 = false;
						}
					}
					else{
						HX_STACK_LINE(900)
						tmp7 = true;
					}
					HX_STACK_LINE(900)
					if ((tmp7)){
						HX_STACK_LINE(900)
						max = p;
					}
				}
				HX_STACK_LINE(903)
				nite = nite->next;
				HX_STACK_LINE(905)
				bool tmp2 = (nite != L);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(905)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(895)
				if ((tmp3)){
					HX_STACK_LINE(895)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(908)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(908)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(908)
	if ((tmp1)){
		HX_STACK_LINE(908)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp2 = ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(908)
		::zpp_nape::geom::ZPP_Triangular_obj::queue = tmp2;
	}
	HX_STACK_LINE(909)
	::zpp_nape::geom::ZPP_PartitionVertex rp = max->prev;		HX_STACK_VAR(rp,"rp");
	HX_STACK_LINE(910)
	::zpp_nape::geom::ZPP_PartitionVertex lp = max->next;		HX_STACK_VAR(lp,"lp");
	HX_STACK_LINE(911)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp2 = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(911)
	::zpp_nape::geom::ZPP_PartitionVertex tmp3 = max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(911)
	tmp2->add(tmp3);
	HX_STACK_LINE(912)
	while((true)){
		HX_STACK_LINE(912)
		bool tmp4 = (rp != min);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(912)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(912)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(912)
		if ((tmp5)){
			HX_STACK_LINE(912)
			tmp6 = (lp != min);
		}
		else{
			HX_STACK_LINE(912)
			tmp6 = true;
		}
		HX_STACK_LINE(912)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(912)
		if ((tmp7)){
			HX_STACK_LINE(912)
			break;
		}
		HX_STACK_LINE(913)
		bool tmp8 = (rp == min);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(913)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(913)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(913)
		if ((tmp9)){
			HX_STACK_LINE(913)
			bool tmp11 = (lp != min);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(913)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(913)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(913)
			if ((tmp13)){
				HX_STACK_LINE(913)
				bool tmp14 = (rp->y < lp->y);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(913)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(913)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(913)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(913)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(913)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(913)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(913)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(913)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(913)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(913)
				if ((tmp23)){
					HX_STACK_LINE(913)
					bool tmp24 = (rp->y == lp->y);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(913)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(913)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(913)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(913)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(913)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(913)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(913)
					if ((tmp30)){
						HX_STACK_LINE(913)
						tmp10 = (rp->x < lp->x);
					}
					else{
						HX_STACK_LINE(913)
						tmp10 = false;
					}
				}
				else{
					HX_STACK_LINE(913)
					tmp10 = true;
				}
			}
			else{
				HX_STACK_LINE(913)
				tmp10 = false;
			}
		}
		else{
			HX_STACK_LINE(913)
			tmp10 = true;
		}
		HX_STACK_LINE(913)
		if ((tmp10)){
			HX_STACK_LINE(914)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp11 = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(914)
			::zpp_nape::geom::ZPP_PartitionVertex tmp12 = lp;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(914)
			tmp11->add(tmp12);
			HX_STACK_LINE(915)
			lp->rightchain = false;
			HX_STACK_LINE(916)
			lp = lp->next;
		}
		else{
			HX_STACK_LINE(919)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp11 = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(919)
			::zpp_nape::geom::ZPP_PartitionVertex tmp12 = rp;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(919)
			tmp11->add(tmp12);
			HX_STACK_LINE(920)
			rp->rightchain = true;
			HX_STACK_LINE(921)
			rp = rp->prev;
		}
	}
	HX_STACK_LINE(924)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp4 = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(924)
	::zpp_nape::geom::ZPP_PartitionVertex tmp5 = min;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(924)
	tmp4->add(tmp5);
	HX_STACK_LINE(925)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp6 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(925)
	bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(925)
	if ((tmp7)){
		HX_STACK_LINE(925)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp8 = ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(925)
		::zpp_nape::geom::ZPP_Triangular_obj::stack = tmp8;
	}
	HX_STACK_LINE(926)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp8 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(926)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp9 = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(926)
	::zpp_nape::geom::ZPP_PartitionVertex tmp10 = tmp9->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(926)
	tmp8->add(tmp10);
	HX_STACK_LINE(927)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp11 = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(927)
	::zpp_nape::geom::ZPP_PartitionVertex tmp12 = tmp11->pop_unsafe();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(927)
	::zpp_nape::geom::ZPP_PartitionVertex pre = tmp12;		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(928)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp13 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(928)
	::zpp_nape::geom::ZPP_PartitionVertex tmp14 = pre;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(928)
	tmp13->add(tmp14);
	HX_STACK_LINE(929)
	while((true)){
		HX_STACK_LINE(930)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp15 = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(930)
		::zpp_nape::geom::ZPP_PartitionVertex tmp16 = tmp15->pop_unsafe();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(930)
		::zpp_nape::geom::ZPP_PartitionVertex p = tmp16;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(931)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp17 = ::zpp_nape::geom::ZPP_Triangular_obj::queue;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(931)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp18 = tmp17->head;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(931)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(931)
		if ((tmp19)){
			HX_STACK_LINE(931)
			break;
		}
		HX_STACK_LINE(932)
		bool tmp20 = p->rightchain;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(932)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp21 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(932)
		::zpp_nape::geom::ZPP_PartitionVertex tmp22 = tmp21->head->elt;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(932)
		bool tmp23 = tmp22->rightchain;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(932)
		bool tmp24 = (tmp20 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(932)
		if ((tmp24)){
			HX_STACK_LINE(933)
			while((true)){
				HX_STACK_LINE(934)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp25 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(934)
				::zpp_nape::geom::ZPP_PartitionVertex tmp26 = tmp25->pop_unsafe();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(934)
				::zpp_nape::geom::ZPP_PartitionVertex s = tmp26;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(935)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp27 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(935)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp28 = tmp27->head;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(935)
				bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(935)
				if ((tmp29)){
					HX_STACK_LINE(935)
					break;
				}
				HX_STACK_LINE(936)
				::zpp_nape::geom::ZPP_PartitionVertex tmp30 = s;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(936)
				::zpp_nape::geom::ZPP_PartitionVertex tmp31 = p;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(936)
				P->add_diagonal(tmp30,tmp31);
			}
			HX_STACK_LINE(938)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp25 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(938)
			::zpp_nape::geom::ZPP_PartitionVertex tmp26 = pre;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(938)
			tmp25->add(tmp26);
		}
		else{
			HX_STACK_LINE(941)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp25 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(941)
			::zpp_nape::geom::ZPP_PartitionVertex tmp26 = tmp25->pop_unsafe();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(941)
			::zpp_nape::geom::ZPP_PartitionVertex q = tmp26;		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(942)
			while((true)){
				HX_STACK_LINE(942)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp27 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(942)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp28 = tmp27->head;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(942)
				bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(942)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(942)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(942)
				if ((tmp31)){
					HX_STACK_LINE(942)
					break;
				}
				HX_STACK_LINE(943)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp32 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(943)
				::zpp_nape::geom::ZPP_PartitionVertex tmp33 = tmp32->head->elt;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(943)
				::zpp_nape::geom::ZPP_PartitionVertex s = tmp33;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(944)
				Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(944)
				{
					HX_STACK_LINE(944)
					Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
					HX_STACK_LINE(944)
					Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
					HX_STACK_LINE(944)
					{
						HX_STACK_LINE(944)
						Float tmp35 = (p->x - q->x);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(944)
						ux = tmp35;
						HX_STACK_LINE(944)
						Float tmp36 = (p->y - q->y);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(944)
						uy = tmp36;
					}
					HX_STACK_LINE(944)
					Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
					HX_STACK_LINE(944)
					Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
					HX_STACK_LINE(944)
					{
						HX_STACK_LINE(944)
						Float tmp35 = (q->x - s->x);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(944)
						vx = tmp35;
						HX_STACK_LINE(944)
						Float tmp36 = (q->y - s->y);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(944)
						vy = tmp36;
					}
					HX_STACK_LINE(944)
					Float tmp35 = (vy * ux);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(944)
					Float tmp36 = (vx * uy);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(944)
					tmp34 = (tmp35 - tmp36);
				}
				HX_STACK_LINE(944)
				Float right = tmp34;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(945)
				bool tmp35 = p->rightchain;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(945)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(945)
				bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(945)
				if ((tmp36)){
					HX_STACK_LINE(945)
					tmp37 = (right >= (int)0);
				}
				else{
					HX_STACK_LINE(945)
					tmp37 = false;
				}
				HX_STACK_LINE(945)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(945)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(945)
				if ((tmp38)){
					HX_STACK_LINE(945)
					bool tmp40 = p->rightchain;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(945)
					bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(945)
					bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(945)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(945)
					bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(945)
					bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(945)
					if ((tmp45)){
						HX_STACK_LINE(945)
						tmp39 = (right <= (int)0);
					}
					else{
						HX_STACK_LINE(945)
						tmp39 = false;
					}
				}
				else{
					HX_STACK_LINE(945)
					tmp39 = true;
				}
				HX_STACK_LINE(945)
				if ((tmp39)){
					HX_STACK_LINE(945)
					break;
				}
				HX_STACK_LINE(946)
				::zpp_nape::geom::ZPP_PartitionVertex tmp40 = s;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(946)
				::zpp_nape::geom::ZPP_PartitionVertex tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(946)
				P->add_diagonal(tmp40,tmp41);
				HX_STACK_LINE(947)
				q = s;
				HX_STACK_LINE(948)
				::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp42 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(948)
				tmp42->pop();
			}
			HX_STACK_LINE(950)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp27 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(950)
			::zpp_nape::geom::ZPP_PartitionVertex tmp28 = q;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(950)
			tmp27->add(tmp28);
		}
		HX_STACK_LINE(952)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp25 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(952)
		::zpp_nape::geom::ZPP_PartitionVertex tmp26 = p;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(952)
		tmp25->add(tmp26);
		HX_STACK_LINE(953)
		pre = p;
	}
	HX_STACK_LINE(955)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp15 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(955)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp16 = tmp15->head;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(955)
	bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(955)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(955)
	if ((tmp18)){
		HX_STACK_LINE(956)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp19 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(956)
		tmp19->pop();
		HX_STACK_LINE(957)
		while((true)){
			HX_STACK_LINE(957)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp20 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(957)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp21 = tmp20->head;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(957)
			bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(957)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(957)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(957)
			if ((tmp24)){
				HX_STACK_LINE(957)
				break;
			}
			HX_STACK_LINE(958)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp25 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(958)
			::zpp_nape::geom::ZPP_PartitionVertex tmp26 = tmp25->pop_unsafe();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(958)
			::zpp_nape::geom::ZPP_PartitionVertex s = tmp26;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(959)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp27 = ::zpp_nape::geom::ZPP_Triangular_obj::stack;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(959)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp28 = tmp27->head;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(959)
			bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(959)
			if ((tmp29)){
				HX_STACK_LINE(959)
				break;
			}
			HX_STACK_LINE(960)
			::zpp_nape::geom::ZPP_PartitionVertex tmp30 = max;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(960)
			::zpp_nape::geom::ZPP_PartitionVertex tmp31 = s;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(960)
			P->add_diagonal(tmp30,tmp31);
		}
	}
	HX_STACK_LINE(963)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp19 = P;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(963)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Triangular_obj,triangulate,return )


ZPP_Triangular_obj::ZPP_Triangular_obj()
{
}

bool ZPP_Triangular_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { outValue = lt_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue; return true;  }
		if (HX_FIELD_EQ(inName,"stack") ) { outValue = stack; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edgeSet") ) { outValue = edgeSet; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"delaunay") ) { outValue = delaunay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"optimise") ) { outValue = optimise_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"right_turn") ) { outValue = right_turn_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"triangulate") ) { outValue = triangulate_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_PartitionVertex*/ ,(void *) &ZPP_Triangular_obj::queue,HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_PartitionVertex*/ ,(void *) &ZPP_Triangular_obj::stack,HX_HCSTRING("stack","\x48","\x67","\x0b","\x84")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionPair*/ ,(void *) &ZPP_Triangular_obj::edgeSet,HX_HCSTRING("edgeSet","\x65","\x8f","\xef","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Triangular_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Triangular_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(ZPP_Triangular_obj::stack,"stack");
	HX_MARK_MEMBER_NAME(ZPP_Triangular_obj::edgeSet,"edgeSet");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Triangular_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Triangular_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(ZPP_Triangular_obj::stack,"stack");
	HX_VISIT_MEMBER_NAME(ZPP_Triangular_obj::edgeSet,"edgeSet");
};

#endif

hx::Class ZPP_Triangular_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lt","\x88","\x5e","\x00","\x00"),
	HX_HCSTRING("right_turn","\x00","\x7e","\xae","\x6f"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"),
	HX_HCSTRING("delaunay","\xc7","\x6e","\xbf","\x15"),
	HX_HCSTRING("edgeSet","\x65","\x8f","\xef","\xf4"),
	HX_HCSTRING("optimise","\xc4","\x86","\x18","\x1d"),
	HX_HCSTRING("triangulate","\x2c","\x65","\x9d","\xe9"),
	::String(null()) };

void ZPP_Triangular_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Triangular","\xcd","\xaf","\xe8","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Triangular_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Triangular_obj >;
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

void ZPP_Triangular_obj::__boot()
{
	queue= null();
	stack= null();
	edgeSet= null();
}

} // end namespace zpp_nape
} // end namespace geom
