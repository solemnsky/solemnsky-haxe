#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
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

Void ZPP_PartitionVertex_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","new",0x2a87476a,"zpp_nape.geom.ZPP_PartitionVertex.new","zpp_nape/geom/PartitionedPoly.hx",174,0x0d312f3a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(517)
	this->node = null();
	HX_STACK_LINE(210)
	this->prev = null();
	HX_STACK_LINE(209)
	this->next = null();
	HX_STACK_LINE(184)
	this->rightchain = false;
	HX_STACK_LINE(183)
	this->helper = null();
	HX_STACK_LINE(182)
	this->type = (int)0;
	HX_STACK_LINE(181)
	this->diagonals = null();
	HX_STACK_LINE(180)
	this->forced = false;
	HX_STACK_LINE(179)
	this->y = ((Float)0.0);
	HX_STACK_LINE(178)
	this->x = ((Float)0.0);
	HX_STACK_LINE(177)
	this->mag = ((Float)0);
	HX_STACK_LINE(175)
	this->id = (int)0;
	HX_STACK_LINE(212)
	int tmp = (::zpp_nape::geom::ZPP_PartitionVertex_obj::nextId)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	this->id = tmp;
	HX_STACK_LINE(213)
	::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp1 = ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	this->diagonals = tmp1;
}
;
	return null();
}

//ZPP_PartitionVertex_obj::~ZPP_PartitionVertex_obj() { }

Dynamic ZPP_PartitionVertex_obj::__CreateEmpty() { return  new ZPP_PartitionVertex_obj; }
hx::ObjectPtr< ZPP_PartitionVertex_obj > ZPP_PartitionVertex_obj::__new()
{  hx::ObjectPtr< ZPP_PartitionVertex_obj > _result_ = new ZPP_PartitionVertex_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_PartitionVertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PartitionVertex_obj > _result_ = new ZPP_PartitionVertex_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_PartitionVertex_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","alloc",0xd8da71ff,"zpp_nape.geom.ZPP_PartitionVertex.alloc","zpp_nape/geom/PartitionedPoly.hx",216,0x0d312f3a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionVertex_obj,alloc,(void))

Void ZPP_PartitionVertex_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","free",0x06974e62,"zpp_nape.geom.ZPP_PartitionVertex.free","zpp_nape/geom/PartitionedPoly.hx",218,0x0d312f3a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		this->helper = null();
		HX_STACK_LINE(220)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionVertex_obj,free,(void))

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionVertex_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","copy",0x04996d6b,"zpp_nape.geom.ZPP_PartitionVertex.copy","zpp_nape/geom/PartitionedPoly.hx",272,0x0d312f3a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(275)
		::zpp_nape::geom::ZPP_PartitionVertex tmp = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(276)
			::zpp_nape::geom::ZPP_PartitionVertex tmp2 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(282)
			::zpp_nape::geom::ZPP_PartitionVertex tmp2 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(282)
			ret = tmp2;
			HX_STACK_LINE(283)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
			HX_STACK_LINE(284)
			ret->next = null();
		}
		HX_STACK_LINE(289)
		Dynamic();
	}
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(292)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		ret->x = tmp;
		HX_STACK_LINE(293)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		ret->y = tmp1;
		HX_STACK_LINE(302)
		{
		}
	}
	HX_STACK_LINE(311)
	bool tmp = this->forced;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	ret->forced = tmp;
	HX_STACK_LINE(312)
	::zpp_nape::geom::ZPP_PartitionVertex tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionVertex_obj,copy,return )

Void ZPP_PartitionVertex_obj::sort( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","sort",0x0f2cd914,"zpp_nape.geom.ZPP_PartitionVertex.sort","zpp_nape/geom/PartitionedPoly.hx",314,0x0d312f3a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
		HX_STACK_LINE(316)
		Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
		HX_STACK_LINE(317)
		Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(318)
		Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(319)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(321)
				::zpp_nape::geom::ZPP_PartitionVertex tmp1 = this->prev;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(321)
				Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(321)
				Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(321)
				Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(321)
				ux = tmp4;
				HX_STACK_LINE(322)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = this->prev;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(322)
				Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(322)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(322)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(322)
				uy = tmp8;
			}
			HX_STACK_LINE(324)
			{
				HX_STACK_LINE(325)
				::zpp_nape::geom::ZPP_PartitionVertex tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(325)
				Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(325)
				Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(325)
				Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(325)
				vx = tmp4;
				HX_STACK_LINE(326)
				::zpp_nape::geom::ZPP_PartitionVertex tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(326)
				Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(326)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(326)
				vy = tmp8;
			}
			HX_STACK_LINE(328)
			Float tmp1 = (vy * ux);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(328)
			Float tmp2 = (vx * uy);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(328)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			Float ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(329)
			bool tmp4 = (ret > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(329)
			if ((tmp4)){
				HX_STACK_LINE(329)
				tmp = (int)-1;
			}
			else{
				HX_STACK_LINE(329)
				bool tmp5 = (ret == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(329)
				if ((tmp5)){
					HX_STACK_LINE(329)
					tmp = (int)0;
				}
				else{
					HX_STACK_LINE(329)
					tmp = (int)1;
				}
			}
		}
		HX_STACK_LINE(319)
		int vorient = tmp;		HX_STACK_VAR(vorient,"vorient");
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(340)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex tmp1 = this->diagonals;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(340)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex xxlist = tmp1;		HX_STACK_VAR(xxlist,"xxlist");
			HX_STACK_LINE(341)
			bool tmp2 = (xxlist->head == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(341)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(341)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(341)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(341)
			if ((tmp4)){
				HX_STACK_LINE(341)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp6 = xxlist->head->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(341)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(341)
				tmp5 = (tmp7 != null());
			}
			else{
				HX_STACK_LINE(341)
				tmp5 = false;
			}
			HX_STACK_LINE(341)
			if ((tmp5)){
				HX_STACK_LINE(342)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex head = xxlist->head;		HX_STACK_VAR(head,"head");
				HX_STACK_LINE(343)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tail = null();		HX_STACK_VAR(tail,"tail");
				HX_STACK_LINE(344)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex left = null();		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(345)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex right = null();		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(346)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nxt = null();		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(347)
				int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
				HX_STACK_LINE(348)
				int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
				HX_STACK_LINE(348)
				int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
				HX_STACK_LINE(348)
				int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
				HX_STACK_LINE(349)
				while((true)){
					HX_STACK_LINE(350)
					numMerges = (int)0;
					HX_STACK_LINE(351)
					left = head;
					HX_STACK_LINE(352)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp6 = head = null();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(352)
					tail = tmp6;
					HX_STACK_LINE(353)
					while((true)){
						HX_STACK_LINE(353)
						bool tmp7 = (left != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(353)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(353)
						if ((tmp8)){
							HX_STACK_LINE(353)
							break;
						}
						HX_STACK_LINE(354)
						(numMerges)++;
						HX_STACK_LINE(355)
						right = left;
						HX_STACK_LINE(356)
						leftSize = (int)0;
						HX_STACK_LINE(357)
						rightSize = listSize;
						HX_STACK_LINE(358)
						while((true)){
							HX_STACK_LINE(358)
							bool tmp9 = (right != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(358)
							bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(358)
							if ((tmp9)){
								HX_STACK_LINE(358)
								tmp10 = (leftSize < listSize);
							}
							else{
								HX_STACK_LINE(358)
								tmp10 = false;
							}
							HX_STACK_LINE(358)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(358)
							if ((tmp11)){
								HX_STACK_LINE(358)
								break;
							}
							HX_STACK_LINE(359)
							(leftSize)++;
							HX_STACK_LINE(360)
							right = right->next;
						}
						HX_STACK_LINE(362)
						while((true)){
							HX_STACK_LINE(362)
							bool tmp9 = (leftSize > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(362)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(362)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(362)
							if ((tmp10)){
								HX_STACK_LINE(362)
								bool tmp12 = (rightSize > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(362)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(362)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(362)
								if ((tmp14)){
									HX_STACK_LINE(362)
									tmp11 = (right != null());
								}
								else{
									HX_STACK_LINE(362)
									tmp11 = false;
								}
							}
							else{
								HX_STACK_LINE(362)
								tmp11 = true;
							}
							HX_STACK_LINE(362)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(362)
							if ((tmp12)){
								HX_STACK_LINE(362)
								break;
							}
							HX_STACK_LINE(363)
							bool tmp13 = (leftSize == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(363)
							if ((tmp13)){
								HX_STACK_LINE(364)
								nxt = right;
								HX_STACK_LINE(365)
								right = right->next;
								HX_STACK_LINE(366)
								(rightSize)--;
							}
							else{
								HX_STACK_LINE(368)
								bool tmp14 = (rightSize == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(368)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(368)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(368)
								if ((tmp15)){
									HX_STACK_LINE(368)
									tmp16 = (right == null());
								}
								else{
									HX_STACK_LINE(368)
									tmp16 = true;
								}
								HX_STACK_LINE(368)
								if ((tmp16)){
									HX_STACK_LINE(369)
									nxt = left;
									HX_STACK_LINE(370)
									left = left->next;
									HX_STACK_LINE(371)
									(leftSize)--;
								}
								else{
									HX_STACK_LINE(373)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(373)
									{
										HX_STACK_LINE(374)
										bool tmp18 = (vorient == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(374)
										if ((tmp18)){
											HX_STACK_LINE(375)
											int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(375)
											{
												HX_STACK_LINE(376)
												{
													HX_STACK_LINE(377)
													Float tmp20 = left->elt->x;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(377)
													Float tmp21 = this->x;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(377)
													Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(377)
													ux = tmp22;
													HX_STACK_LINE(378)
													Float tmp23 = left->elt->y;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(378)
													Float tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(378)
													Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(378)
													uy = tmp25;
												}
												HX_STACK_LINE(380)
												{
													HX_STACK_LINE(381)
													Float tmp20 = right->elt->x;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(381)
													Float tmp21 = this->x;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(381)
													Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(381)
													vx = tmp22;
													HX_STACK_LINE(382)
													Float tmp23 = right->elt->y;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(382)
													Float tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(382)
													Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(382)
													vy = tmp25;
												}
												HX_STACK_LINE(384)
												Float tmp20 = (vy * ux);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(384)
												Float tmp21 = (vx * uy);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(384)
												Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(384)
												Float ret = tmp22;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(385)
												bool tmp23 = (ret > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(385)
												if ((tmp23)){
													HX_STACK_LINE(385)
													tmp19 = (int)-1;
												}
												else{
													HX_STACK_LINE(385)
													bool tmp24 = (ret == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(385)
													if ((tmp24)){
														HX_STACK_LINE(385)
														tmp19 = (int)0;
													}
													else{
														HX_STACK_LINE(385)
														tmp19 = (int)1;
													}
												}
											}
											HX_STACK_LINE(375)
											tmp17 = (tmp19 == (int)1);
										}
										else{
											HX_STACK_LINE(389)
											int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(390)
												{
													HX_STACK_LINE(391)
													::zpp_nape::geom::ZPP_PartitionVertex tmp20 = this->prev;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(391)
													Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(391)
													Float tmp22 = this->x;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(391)
													Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(391)
													ux = tmp23;
													HX_STACK_LINE(392)
													::zpp_nape::geom::ZPP_PartitionVertex tmp24 = this->prev;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(392)
													Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(392)
													Float tmp26 = this->y;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(392)
													Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(392)
													uy = tmp27;
												}
												HX_STACK_LINE(394)
												{
													HX_STACK_LINE(395)
													Float tmp20 = left->elt->x;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(395)
													Float tmp21 = this->x;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(395)
													Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(395)
													vx = tmp22;
													HX_STACK_LINE(396)
													Float tmp23 = left->elt->y;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(396)
													Float tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(396)
													Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(396)
													vy = tmp25;
												}
												HX_STACK_LINE(398)
												Float tmp20 = (vy * ux);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(398)
												Float tmp21 = (vx * uy);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(398)
												Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(398)
												Float ret = tmp22;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(399)
												bool tmp23 = (ret > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(399)
												if ((tmp23)){
													HX_STACK_LINE(399)
													tmp19 = (int)-1;
												}
												else{
													HX_STACK_LINE(399)
													bool tmp24 = (ret == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(399)
													if ((tmp24)){
														HX_STACK_LINE(399)
														tmp19 = (int)0;
													}
													else{
														HX_STACK_LINE(399)
														tmp19 = (int)1;
													}
												}
											}
											HX_STACK_LINE(389)
											int d1 = tmp19;		HX_STACK_VAR(d1,"d1");
											HX_STACK_LINE(401)
											int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(401)
											{
												HX_STACK_LINE(402)
												{
													HX_STACK_LINE(403)
													::zpp_nape::geom::ZPP_PartitionVertex tmp21 = this->prev;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(403)
													Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(403)
													Float tmp23 = this->x;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(403)
													Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(403)
													ux = tmp24;
													HX_STACK_LINE(404)
													::zpp_nape::geom::ZPP_PartitionVertex tmp25 = this->prev;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(404)
													Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(404)
													Float tmp27 = this->y;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(404)
													Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(404)
													uy = tmp28;
												}
												HX_STACK_LINE(406)
												{
													HX_STACK_LINE(407)
													Float tmp21 = right->elt->x;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(407)
													Float tmp22 = this->x;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(407)
													Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(407)
													vx = tmp23;
													HX_STACK_LINE(408)
													Float tmp24 = right->elt->y;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(408)
													Float tmp25 = this->y;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(408)
													Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(408)
													vy = tmp26;
												}
												HX_STACK_LINE(410)
												Float tmp21 = (vy * ux);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(410)
												Float tmp22 = (vx * uy);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(410)
												Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(410)
												Float ret = tmp23;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(411)
												bool tmp24 = (ret > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(411)
												if ((tmp24)){
													HX_STACK_LINE(411)
													tmp20 = (int)-1;
												}
												else{
													HX_STACK_LINE(411)
													bool tmp25 = (ret == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(411)
													if ((tmp25)){
														HX_STACK_LINE(411)
														tmp20 = (int)0;
													}
													else{
														HX_STACK_LINE(411)
														tmp20 = (int)1;
													}
												}
											}
											HX_STACK_LINE(401)
											int d2 = tmp20;		HX_STACK_VAR(d2,"d2");
											HX_STACK_LINE(413)
											int tmp21 = (d1 * d2);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(413)
											bool tmp22 = (tmp21 == (int)1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(413)
											bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(413)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(413)
											if ((tmp23)){
												HX_STACK_LINE(413)
												int tmp25 = (d1 * d2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(413)
												int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(413)
												bool tmp27 = (tmp26 == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(413)
												bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(413)
												bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(413)
												if ((tmp29)){
													HX_STACK_LINE(413)
													bool tmp30 = (d1 == (int)1);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(413)
													bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(413)
													bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(413)
													bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(413)
													bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(413)
													bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(413)
													bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(413)
													bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(413)
													bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(413)
													bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(413)
													if ((tmp39)){
														HX_STACK_LINE(413)
														tmp24 = (d2 == (int)1);
													}
													else{
														HX_STACK_LINE(413)
														tmp24 = true;
													}
												}
												else{
													HX_STACK_LINE(413)
													tmp24 = false;
												}
											}
											else{
												HX_STACK_LINE(413)
												tmp24 = true;
											}
											HX_STACK_LINE(413)
											if ((tmp24)){
												HX_STACK_LINE(414)
												int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(414)
												{
													HX_STACK_LINE(415)
													{
														HX_STACK_LINE(416)
														Float tmp26 = left->elt->x;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(416)
														Float tmp27 = this->x;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(416)
														Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(416)
														ux = tmp28;
														HX_STACK_LINE(417)
														Float tmp29 = left->elt->y;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(417)
														Float tmp30 = this->y;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(417)
														Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(417)
														uy = tmp31;
													}
													HX_STACK_LINE(419)
													{
														HX_STACK_LINE(420)
														Float tmp26 = right->elt->x;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(420)
														Float tmp27 = this->x;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(420)
														Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(420)
														vx = tmp28;
														HX_STACK_LINE(421)
														Float tmp29 = right->elt->y;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(421)
														Float tmp30 = this->y;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(421)
														Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(421)
														vy = tmp31;
													}
													HX_STACK_LINE(423)
													Float tmp26 = (vy * ux);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(423)
													Float tmp27 = (vx * uy);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(423)
													Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(423)
													Float ret = tmp28;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(424)
													bool tmp29 = (ret > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(424)
													if ((tmp29)){
														HX_STACK_LINE(424)
														tmp25 = (int)-1;
													}
													else{
														HX_STACK_LINE(424)
														bool tmp30 = (ret == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(424)
														if ((tmp30)){
															HX_STACK_LINE(424)
															tmp25 = (int)0;
														}
														else{
															HX_STACK_LINE(424)
															tmp25 = (int)1;
														}
													}
												}
												HX_STACK_LINE(414)
												tmp17 = (tmp25 == (int)1);
											}
											else{
												HX_STACK_LINE(427)
												int tmp25 = d1;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(427)
												int tmp26 = (int)-1;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(427)
												bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(427)
												bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(427)
												bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(427)
												if ((tmp28)){
													HX_STACK_LINE(427)
													tmp29 = (d2 == (int)-1);
												}
												else{
													HX_STACK_LINE(427)
													tmp29 = true;
												}
												HX_STACK_LINE(427)
												if ((tmp29)){
													HX_STACK_LINE(428)
													tmp17 = (d2 == (int)-1);
												}
												else{
													HX_STACK_LINE(430)
													bool tmp30 = (d1 == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(430)
													bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(430)
													if ((tmp30)){
														HX_STACK_LINE(430)
														tmp31 = (d2 == (int)0);
													}
													else{
														HX_STACK_LINE(430)
														tmp31 = false;
													}
													HX_STACK_LINE(430)
													if ((tmp31)){
														HX_STACK_LINE(431)
														{
															HX_STACK_LINE(432)
															Float tmp32 = this->x;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(432)
															::zpp_nape::geom::ZPP_PartitionVertex tmp33 = this->prev;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(432)
															Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(432)
															Float tmp35 = (tmp32 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(432)
															ux = tmp35;
															HX_STACK_LINE(433)
															Float tmp36 = this->y;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(433)
															::zpp_nape::geom::ZPP_PartitionVertex tmp37 = this->prev;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(433)
															Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(433)
															Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(433)
															uy = tmp39;
														}
														HX_STACK_LINE(435)
														{
															HX_STACK_LINE(436)
															Float tmp32 = left->elt->x;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(436)
															Float tmp33 = this->x;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(436)
															Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(436)
															vx = tmp34;
															HX_STACK_LINE(437)
															Float tmp35 = left->elt->y;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(437)
															Float tmp36 = this->y;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(437)
															Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(437)
															vy = tmp37;
														}
														HX_STACK_LINE(439)
														Float tmp32 = (ux * vx);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(439)
														Float tmp33 = (uy * vy);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(439)
														Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(439)
														Float d11 = tmp34;		HX_STACK_VAR(d11,"d11");
														HX_STACK_LINE(440)
														{
															HX_STACK_LINE(441)
															Float tmp35 = right->elt->x;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(441)
															Float tmp36 = this->x;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(441)
															Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(441)
															vx = tmp37;
															HX_STACK_LINE(442)
															Float tmp38 = right->elt->y;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(442)
															Float tmp39 = this->y;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(442)
															Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(442)
															vy = tmp40;
														}
														HX_STACK_LINE(444)
														Float tmp35 = (ux * vx);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(444)
														Float tmp36 = (uy * vy);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(444)
														Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(444)
														Float d21 = tmp37;		HX_STACK_VAR(d21,"d21");
														HX_STACK_LINE(445)
														bool tmp38 = (d11 < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(445)
														bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(445)
														if ((tmp38)){
															HX_STACK_LINE(445)
															tmp39 = (d21 > (int)0);
														}
														else{
															HX_STACK_LINE(445)
															tmp39 = false;
														}
														HX_STACK_LINE(445)
														if ((tmp39)){
															HX_STACK_LINE(445)
															tmp17 = true;
														}
														else{
															HX_STACK_LINE(445)
															bool tmp40 = (d21 < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(445)
															bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(445)
															if ((tmp40)){
																HX_STACK_LINE(445)
																tmp41 = (d11 > (int)0);
															}
															else{
																HX_STACK_LINE(445)
																tmp41 = false;
															}
															HX_STACK_LINE(445)
															if ((tmp41)){
																HX_STACK_LINE(445)
																tmp17 = false;
															}
															else{
																HX_STACK_LINE(454)
																tmp17 = true;
															}
														}
													}
													else{
														HX_STACK_LINE(466)
														tmp17 = true;
													}
												}
											}
										}
									}
									HX_STACK_LINE(373)
									if ((tmp17)){
										HX_STACK_LINE(470)
										nxt = left;
										HX_STACK_LINE(471)
										left = left->next;
										HX_STACK_LINE(472)
										(leftSize)--;
									}
									else{
										HX_STACK_LINE(475)
										nxt = right;
										HX_STACK_LINE(476)
										right = right->next;
										HX_STACK_LINE(477)
										(rightSize)--;
									}
								}
							}
							HX_STACK_LINE(479)
							bool tmp14 = (tail != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(479)
							if ((tmp14)){
								HX_STACK_LINE(479)
								tail->next = nxt;
							}
							else{
								HX_STACK_LINE(480)
								head = nxt;
							}
							HX_STACK_LINE(481)
							tail = nxt;
						}
						HX_STACK_LINE(483)
						left = right;
					}
					HX_STACK_LINE(485)
					tail->next = null();
					HX_STACK_LINE(486)
					hx::ShlEq(listSize,(int)1);
					HX_STACK_LINE(488)
					bool tmp7 = (numMerges > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(488)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(349)
					if ((tmp8)){
						HX_STACK_LINE(349)
						break;
					}
				}
				HX_STACK_LINE(489)
				{
					HX_STACK_LINE(489)
					xxlist->head = head;
					HX_STACK_LINE(489)
					xxlist->modified = true;
					HX_STACK_LINE(489)
					xxlist->pushmod = true;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionVertex_obj,sort,(void))

int ZPP_PartitionVertex_obj::nextId;

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionVertex_obj::zpp_pool;

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionVertex_obj::get( ::zpp_nape::geom::ZPP_GeomVert x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","get",0x2a81f7a0,"zpp_nape.geom.ZPP_PartitionVertex.get","zpp_nape/geom/PartitionedPoly.hx",230,0x0d312f3a)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(231)
	::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(233)
		::zpp_nape::geom::ZPP_PartitionVertex tmp = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		if ((tmp1)){
			HX_STACK_LINE(234)
			::zpp_nape::geom::ZPP_PartitionVertex tmp2 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(240)
			::zpp_nape::geom::ZPP_PartitionVertex tmp2 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(240)
			ret = tmp2;
			HX_STACK_LINE(241)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
			HX_STACK_LINE(242)
			ret->next = null();
		}
		HX_STACK_LINE(247)
		Dynamic();
	}
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(250)
		ret->x = x->x;
		HX_STACK_LINE(251)
		ret->y = x->y;
		HX_STACK_LINE(260)
		{
		}
	}
	HX_STACK_LINE(269)
	::zpp_nape::geom::ZPP_PartitionVertex tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionVertex_obj,get,return )

Float ZPP_PartitionVertex_obj::rightdistance( ::zpp_nape::geom::ZPP_PartitionVertex edge,::zpp_nape::geom::ZPP_PartitionVertex vert){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","rightdistance",0x74d5429b,"zpp_nape.geom.ZPP_PartitionVertex.rightdistance","zpp_nape/geom/PartitionedPoly.hx",493,0x0d312f3a)
	HX_STACK_ARG(edge,"edge")
	HX_STACK_ARG(vert,"vert")
	HX_STACK_LINE(494)
	Float tmp = edge->next->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(494)
	Float tmp1 = edge->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(494)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(494)
	bool flip = tmp2;		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(495)
	Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(496)
	Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(497)
	{
		HX_STACK_LINE(498)
		Float tmp3 = edge->next->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(498)
		Float tmp4 = edge->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		ux = tmp5;
		HX_STACK_LINE(499)
		Float tmp6 = edge->next->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(499)
		Float tmp7 = edge->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(499)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(499)
		uy = tmp8;
	}
	HX_STACK_LINE(501)
	Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(502)
	Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(503)
	{
		HX_STACK_LINE(504)
		Float tmp3 = (vert->x - edge->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(504)
		vx = tmp3;
		HX_STACK_LINE(505)
		Float tmp4 = (vert->y - edge->y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(505)
		vy = tmp4;
	}
	HX_STACK_LINE(507)
	bool tmp3 = flip;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(507)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(507)
	if ((tmp3)){
		HX_STACK_LINE(507)
		tmp4 = ((Float)-1.0);
	}
	else{
		HX_STACK_LINE(507)
		tmp4 = ((Float)1.0);
	}
	HX_STACK_LINE(507)
	Float tmp5 = (vy * ux);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(507)
	Float tmp6 = (vx * uy);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(507)
	Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(507)
	Float tmp8 = (tmp4 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(507)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionVertex_obj,rightdistance,return )

bool ZPP_PartitionVertex_obj::vert_lt( ::zpp_nape::geom::ZPP_PartitionVertex edge,::zpp_nape::geom::ZPP_PartitionVertex vert){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","vert_lt",0xae5048a0,"zpp_nape.geom.ZPP_PartitionVertex.vert_lt","zpp_nape/geom/PartitionedPoly.hx",509,0x0d312f3a)
	HX_STACK_ARG(edge,"edge")
	HX_STACK_ARG(vert,"vert")
	HX_STACK_LINE(510)
	bool tmp = (vert == edge);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(510)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(510)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(510)
	if ((tmp1)){
		HX_STACK_LINE(510)
		tmp2 = (vert == edge->next);
	}
	else{
		HX_STACK_LINE(510)
		tmp2 = true;
	}
	HX_STACK_LINE(510)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(510)
	if ((tmp2)){
		HX_STACK_LINE(510)
		tmp3 = true;
	}
	else{
		HX_STACK_LINE(510)
		Float tmp4 = edge->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(510)
		Float tmp5 = edge->next->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(510)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(510)
		if ((tmp6)){
			HX_STACK_LINE(510)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(511)
				Float x = edge->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(512)
				Float tmp8 = edge->next->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(512)
				Float y = tmp8;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(513)
				bool tmp9 = (x < y);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(513)
				if ((tmp9)){
					HX_STACK_LINE(513)
					tmp7 = x;
				}
				else{
					HX_STACK_LINE(513)
					tmp7 = y;
				}
			}
			HX_STACK_LINE(514)
			Float tmp8 = vert->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(510)
			tmp3 = (tmp7 <= tmp8);
		}
		else{
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_PartitionVertex tmp7 = edge;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_PartitionVertex tmp8 = vert;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(515)
			Float tmp9 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(515)
			tmp3 = (tmp9 <= ((Float)0.0));
		}
	}
	HX_STACK_LINE(510)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionVertex_obj,vert_lt,return )

Void ZPP_PartitionVertex_obj::edge_swap( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","edge_swap",0x1a0ddb9f,"zpp_nape.geom.ZPP_PartitionVertex.edge_swap","zpp_nape/geom/PartitionedPoly.hx",518,0x0d312f3a)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(519)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t = p->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(520)
		p->node = q->node;
		HX_STACK_LINE(521)
		q->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionVertex_obj,edge_swap,(void))

bool ZPP_PartitionVertex_obj::edge_lt( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionVertex","edge_lt",0x25b57494,"zpp_nape.geom.ZPP_PartitionVertex.edge_lt","zpp_nape/geom/PartitionedPoly.hx",523,0x0d312f3a)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(524)
	bool tmp = (p == q);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(524)
	if ((tmp)){
		HX_STACK_LINE(524)
		tmp1 = (p->next == q->next);
	}
	else{
		HX_STACK_LINE(524)
		tmp1 = false;
	}
	HX_STACK_LINE(524)
	if ((tmp1)){
		HX_STACK_LINE(533)
		return false;
	}
	HX_STACK_LINE(535)
	bool tmp2 = (p == q->next);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(535)
	if ((tmp2)){
		HX_STACK_LINE(535)
		::zpp_nape::geom::ZPP_PartitionVertex tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(535)
		::zpp_nape::geom::ZPP_PartitionVertex tmp4 = q;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(535)
		bool tmp5 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(535)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(535)
		return tmp6;
	}
	else{
		HX_STACK_LINE(536)
		bool tmp3 = (q == p->next);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(536)
		if ((tmp3)){
			HX_STACK_LINE(536)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = q;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(536)
			::zpp_nape::geom::ZPP_PartitionVertex tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(536)
			bool tmp6 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			return tmp6;
		}
		else{
			HX_STACK_LINE(537)
			Float tmp4 = p->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(537)
			Float tmp5 = p->next->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(537)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(537)
			if ((tmp6)){
				HX_STACK_LINE(538)
				Float tmp7 = q->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(538)
				Float tmp8 = q->next->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(538)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(538)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(538)
				if ((tmp9)){
					HX_STACK_LINE(538)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(538)
					{
						HX_STACK_LINE(539)
						Float x = p->x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(540)
						Float tmp12 = p->next->x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(540)
						Float y = tmp12;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(541)
						bool tmp13 = (x > y);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(541)
						if ((tmp13)){
							HX_STACK_LINE(541)
							tmp11 = x;
						}
						else{
							HX_STACK_LINE(541)
							tmp11 = y;
						}
					}
					HX_STACK_LINE(542)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(543)
						Float x = q->x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(544)
						Float tmp13 = q->next->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(544)
						Float y = tmp13;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(545)
						bool tmp14 = (x > y);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(545)
						if ((tmp14)){
							HX_STACK_LINE(545)
							tmp12 = x;
						}
						else{
							HX_STACK_LINE(545)
							tmp12 = y;
						}
					}
					HX_STACK_LINE(538)
					tmp10 = (tmp11 > tmp12);
				}
				else{
					HX_STACK_LINE(546)
					::zpp_nape::geom::ZPP_PartitionVertex tmp11 = q;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(546)
					::zpp_nape::geom::ZPP_PartitionVertex tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(546)
					Float tmp13 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(546)
					bool tmp14 = (tmp13 > ((Float)0.0));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(546)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(546)
					if ((tmp15)){
						HX_STACK_LINE(546)
						::zpp_nape::geom::ZPP_PartitionVertex tmp16 = q;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(546)
						::zpp_nape::geom::ZPP_PartitionVertex tmp17 = p->next;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(546)
						::zpp_nape::geom::ZPP_PartitionVertex tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(546)
						::zpp_nape::geom::ZPP_PartitionVertex tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(546)
						Float tmp20 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(546)
						Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(546)
						tmp10 = (tmp21 > ((Float)0.0));
					}
					else{
						HX_STACK_LINE(546)
						tmp10 = true;
					}
				}
				HX_STACK_LINE(538)
				return tmp10;
			}
			else{
				HX_STACK_LINE(549)
				::zpp_nape::geom::ZPP_PartitionVertex tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(549)
				::zpp_nape::geom::ZPP_PartitionVertex tmp8 = q;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(549)
				Float tmp9 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(549)
				Float qRight = tmp9;		HX_STACK_VAR(qRight,"qRight");
				HX_STACK_LINE(550)
				::zpp_nape::geom::ZPP_PartitionVertex tmp10 = p;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(550)
				::zpp_nape::geom::ZPP_PartitionVertex tmp11 = q->next;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(550)
				Float tmp12 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(550)
				Float qNextRight = tmp12;		HX_STACK_VAR(qNextRight,"qNextRight");
				HX_STACK_LINE(551)
				bool tmp13 = (qRight == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(551)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(551)
				if ((tmp13)){
					HX_STACK_LINE(551)
					tmp14 = (qNextRight == (int)0);
				}
				else{
					HX_STACK_LINE(551)
					tmp14 = false;
				}
				HX_STACK_LINE(551)
				if ((tmp14)){
					HX_STACK_LINE(552)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(552)
					{
						HX_STACK_LINE(553)
						Float x = p->x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(554)
						Float tmp16 = p->next->x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(554)
						Float y = tmp16;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(555)
						bool tmp17 = (x > y);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(555)
						if ((tmp17)){
							HX_STACK_LINE(555)
							tmp15 = x;
						}
						else{
							HX_STACK_LINE(555)
							tmp15 = y;
						}
					}
					HX_STACK_LINE(556)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(556)
					{
						HX_STACK_LINE(557)
						Float x = q->x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(558)
						Float tmp17 = q->next->x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(558)
						Float y = tmp17;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(559)
						bool tmp18 = (x > y);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(559)
						if ((tmp18)){
							HX_STACK_LINE(559)
							tmp16 = x;
						}
						else{
							HX_STACK_LINE(559)
							tmp16 = y;
						}
					}
					HX_STACK_LINE(552)
					bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(552)
					return tmp17;
				}
				HX_STACK_LINE(562)
				Float tmp15 = (qRight * qNextRight);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(562)
				bool tmp16 = (tmp15 >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(562)
				if ((tmp16)){
					HX_STACK_LINE(562)
					bool tmp17 = (qRight < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(562)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(562)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(562)
					if ((tmp18)){
						HX_STACK_LINE(562)
						tmp19 = (qNextRight < (int)0);
					}
					else{
						HX_STACK_LINE(562)
						tmp19 = true;
					}
					HX_STACK_LINE(562)
					return tmp19;
				}
				HX_STACK_LINE(563)
				::zpp_nape::geom::ZPP_PartitionVertex tmp17 = q;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(563)
				::zpp_nape::geom::ZPP_PartitionVertex tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(563)
				Float tmp19 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(563)
				Float pRight = tmp19;		HX_STACK_VAR(pRight,"pRight");
				HX_STACK_LINE(564)
				::zpp_nape::geom::ZPP_PartitionVertex tmp20 = q;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(564)
				::zpp_nape::geom::ZPP_PartitionVertex tmp21 = p->next;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(564)
				Float tmp22 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(564)
				Float pNextRight = tmp22;		HX_STACK_VAR(pNextRight,"pNextRight");
				HX_STACK_LINE(573)
				Float tmp23 = (pRight * pNextRight);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(573)
				bool tmp24 = (tmp23 >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(573)
				if ((tmp24)){
					HX_STACK_LINE(573)
					bool tmp25 = (pRight > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(573)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(573)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(573)
					if ((tmp26)){
						HX_STACK_LINE(573)
						tmp27 = (pNextRight > (int)0);
					}
					else{
						HX_STACK_LINE(573)
						tmp27 = true;
					}
					HX_STACK_LINE(573)
					return tmp27;
				}
				HX_STACK_LINE(582)
				return false;
			}
		}
	}
	HX_STACK_LINE(535)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionVertex_obj,edge_lt,return )


ZPP_PartitionVertex_obj::ZPP_PartitionVertex_obj()
{
}

void ZPP_PartitionVertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PartitionVertex);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(mag,"mag");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_MEMBER_NAME(diagonals,"diagonals");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(helper,"helper");
	HX_MARK_MEMBER_NAME(rightchain,"rightchain");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_END_CLASS();
}

void ZPP_PartitionVertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(mag,"mag");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(forced,"forced");
	HX_VISIT_MEMBER_NAME(diagonals,"diagonals");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(helper,"helper");
	HX_VISIT_MEMBER_NAME(rightchain,"rightchain");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(node,"node");
}

Dynamic ZPP_PartitionVertex_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mag") ) { return mag; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
		if (HX_FIELD_EQ(inName,"helper") ) { return helper; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"diagonals") ) { return diagonals; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightchain") ) { return rightchain; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_PartitionVertex_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { outValue = nextId; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vert_lt") ) { outValue = vert_lt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"edge_lt") ) { outValue = edge_lt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"edge_swap") ) { outValue = edge_swap_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rightdistance") ) { outValue = rightdistance_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_PartitionVertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mag") ) { mag=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"helper") ) { helper=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"diagonals") ) { diagonals=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_PartitionVertex >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightchain") ) { rightchain=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_PartitionVertex_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { nextId=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return true; }
	}
	return false;
}

void ZPP_PartitionVertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("mag","\x93","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd"));
	outFields->push(HX_HCSTRING("diagonals","\xde","\xd1","\xdb","\xfe"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("helper","\x6e","\x7d","\x4e","\x04"));
	outFields->push(HX_HCSTRING("rightchain","\xa5","\x0b","\x4b","\xb5"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ZPP_PartitionVertex_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PartitionVertex_obj,mag),HX_HCSTRING("mag","\x93","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PartitionVertex_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PartitionVertex_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_PartitionVertex_obj,forced),HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionVertex_obj,diagonals),HX_HCSTRING("diagonals","\xde","\xd1","\xdb","\xfe")},
	{hx::fsInt,(int)offsetof(ZPP_PartitionVertex_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionVertex_obj,helper),HX_HCSTRING("helper","\x6e","\x7d","\x4e","\x04")},
	{hx::fsBool,(int)offsetof(ZPP_PartitionVertex_obj,rightchain),HX_HCSTRING("rightchain","\xa5","\x0b","\x4b","\xb5")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionVertex_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionVertex_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionVertex_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ZPP_PartitionVertex_obj::nextId,HX_HCSTRING("nextId","\xae","\x27","\x64","\x72")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(void *) &ZPP_PartitionVertex_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("mag","\x93","\x0a","\x53","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd"),
	HX_HCSTRING("diagonals","\xde","\xd1","\xdb","\xfe"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("helper","\x6e","\x7d","\x4e","\x04"),
	HX_HCSTRING("rightchain","\xa5","\x0b","\x4b","\xb5"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PartitionVertex_obj::nextId,"nextId");
	HX_MARK_MEMBER_NAME(ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionVertex_obj::nextId,"nextId");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_PartitionVertex_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nextId","\xae","\x27","\x64","\x72"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("rightdistance","\x11","\xdb","\x56","\x00"),
	HX_HCSTRING("vert_lt","\x96","\x84","\x93","\x7d"),
	HX_HCSTRING("edge_swap","\x15","\x81","\x90","\xad"),
	HX_HCSTRING("edge_lt","\x8a","\xb0","\xf8","\xf4"),
	::String(null()) };

void ZPP_PartitionVertex_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_PartitionVertex","\x78","\x0a","\x69","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_PartitionVertex_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_PartitionVertex_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_PartitionVertex_obj >;
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

void ZPP_PartitionVertex_obj::__boot()
{
	nextId= (int)0;
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
