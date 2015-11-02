#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSweep
#include <zpp_nape/geom/ZPP_SimpleSweep.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleSweep_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","new",0x92a3afd6,"zpp_nape.geom.ZPP_SimpleSweep.new","zpp_nape/geom/Simple.hx",464,0x62f156db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(466)
	this->tree = null();
	HX_STACK_LINE(465)
	this->sweepx = ((Float)0.0);
	HX_STACK_LINE(468)
	{
		HX_STACK_LINE(469)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(469)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(469)
		if ((tmp1)){
			HX_STACK_LINE(470)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(470)
			this->tree = tmp2;
		}
		else{
			HX_STACK_LINE(476)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(476)
			this->tree = tmp2;
			HX_STACK_LINE(477)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = this->tree;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(477)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = tmp3->next;
			HX_STACK_LINE(478)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = this->tree;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(478)
			tmp4->next = null();
		}
		HX_STACK_LINE(483)
		Dynamic();
	}
	HX_STACK_LINE(485)
	Dynamic tmp = this->edge_lt_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(485)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = this->tree;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(485)
	tmp1->lt = tmp;
	HX_STACK_LINE(486)
	Dynamic tmp2 = this->swap_nodes_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = this->tree;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(486)
	tmp3->swapped = tmp2;
}
;
	return null();
}

//ZPP_SimpleSweep_obj::~ZPP_SimpleSweep_obj() { }

Dynamic ZPP_SimpleSweep_obj::__CreateEmpty() { return  new ZPP_SimpleSweep_obj; }
hx::ObjectPtr< ZPP_SimpleSweep_obj > ZPP_SimpleSweep_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleSweep_obj > _result_ = new ZPP_SimpleSweep_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SimpleSweep_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleSweep_obj > _result_ = new ZPP_SimpleSweep_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SimpleSweep_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","swap_nodes",0x1d0d758f,"zpp_nape.geom.ZPP_SimpleSweep.swap_nodes","zpp_nape/geom/Simple.hx",488,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(q,"q")
		HX_STACK_LINE(489)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t = p->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(490)
		p->node = q->node;
		HX_STACK_LINE(491)
		q->node = t;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,swap_nodes,(void))

bool ZPP_SimpleSweep_obj::edge_lt( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","edge_lt",0xa76c8300,"zpp_nape.geom.ZPP_SimpleSweep.edge_lt","zpp_nape/geom/Simple.hx",493,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(494)
	Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(495)
	Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(496)
	Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(497)
	Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(498)
	bool flip;		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(499)
	bool tmp = (p->left == q->left);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	if ((tmp)){
		HX_STACK_LINE(499)
		tmp1 = (p->right == q->right);
	}
	else{
		HX_STACK_LINE(499)
		tmp1 = false;
	}
	HX_STACK_LINE(499)
	if ((tmp1)){
		HX_STACK_LINE(499)
		return false;
	}
	else{
		HX_STACK_LINE(500)
		bool tmp2 = (p->left == q->right);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(500)
		if ((tmp2)){
			HX_STACK_LINE(500)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(500)
			{
				HX_STACK_LINE(501)
				Float tmp4 = p->left->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(501)
				Float tmp5 = p->right->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(501)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(501)
				if ((tmp6)){
					HX_STACK_LINE(502)
					Float tmp7 = p->left->y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(502)
					Float tmp8 = p->right->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(502)
					bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(502)
					if ((tmp9)){
						HX_STACK_LINE(502)
						Float tmp10 = p->left->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(502)
						Float tmp11 = q->left->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(502)
						tmp3 = (tmp10 > tmp11);
					}
					else{
						HX_STACK_LINE(503)
						Float tmp10 = p->right->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(503)
						Float tmp11 = q->left->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(503)
						tmp3 = (tmp10 > tmp11);
					}
				}
				else{
					HX_STACK_LINE(505)
					Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(505)
					{
						HX_STACK_LINE(506)
						Float tmp8 = p->right->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(506)
						Float tmp9 = p->left->x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(506)
						bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(506)
						flip = tmp10;
						HX_STACK_LINE(507)
						{
							HX_STACK_LINE(508)
							Float tmp11 = p->right->x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(508)
							Float tmp12 = p->left->x;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(508)
							Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(508)
							ux = tmp13;
							HX_STACK_LINE(509)
							Float tmp14 = p->right->y;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(509)
							Float tmp15 = p->left->y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(509)
							Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(509)
							uy = tmp16;
						}
						HX_STACK_LINE(511)
						{
							HX_STACK_LINE(512)
							Float tmp11 = q->left->x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(512)
							Float tmp12 = p->left->x;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(512)
							Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(512)
							vx = tmp13;
							HX_STACK_LINE(513)
							Float tmp14 = q->left->y;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(513)
							Float tmp15 = p->left->y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(513)
							Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(513)
							vy = tmp16;
						}
						HX_STACK_LINE(515)
						bool tmp11 = flip;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(515)
						if ((tmp11)){
							HX_STACK_LINE(515)
							Float tmp12 = (uy * vx);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(515)
							Float tmp13 = (ux * vy);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(515)
							tmp7 = (tmp12 - tmp13);
						}
						else{
							HX_STACK_LINE(515)
							Float tmp12 = (vy * ux);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(515)
							Float tmp13 = (vx * uy);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(515)
							tmp7 = (tmp12 - tmp13);
						}
					}
					HX_STACK_LINE(505)
					tmp3 = (tmp7 < (int)0);
				}
			}
			HX_STACK_LINE(500)
			return tmp3;
		}
		else{
			HX_STACK_LINE(518)
			bool tmp3 = (p->right == q->left);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(518)
			if ((tmp3)){
				HX_STACK_LINE(518)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(519)
					Float tmp5 = q->left->x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(519)
					Float tmp6 = q->right->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(519)
					bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(519)
					if ((tmp7)){
						HX_STACK_LINE(520)
						Float tmp8 = q->left->y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(520)
						Float tmp9 = q->right->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(520)
						bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(520)
						if ((tmp10)){
							HX_STACK_LINE(520)
							Float tmp11 = q->left->y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(520)
							Float tmp12 = p->left->y;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(520)
							tmp4 = (tmp11 > tmp12);
						}
						else{
							HX_STACK_LINE(521)
							Float tmp11 = q->right->y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(521)
							Float tmp12 = p->left->y;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(521)
							tmp4 = (tmp11 > tmp12);
						}
					}
					else{
						HX_STACK_LINE(523)
						Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(523)
						{
							HX_STACK_LINE(524)
							Float tmp9 = q->right->x;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(524)
							Float tmp10 = q->left->x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(524)
							bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(524)
							flip = tmp11;
							HX_STACK_LINE(525)
							{
								HX_STACK_LINE(526)
								Float tmp12 = q->right->x;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(526)
								Float tmp13 = q->left->x;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(526)
								Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(526)
								ux = tmp14;
								HX_STACK_LINE(527)
								Float tmp15 = q->right->y;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(527)
								Float tmp16 = q->left->y;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(527)
								Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(527)
								uy = tmp17;
							}
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(530)
								Float tmp12 = p->left->x;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(530)
								Float tmp13 = q->left->x;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(530)
								Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(530)
								vx = tmp14;
								HX_STACK_LINE(531)
								Float tmp15 = p->left->y;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(531)
								Float tmp16 = q->left->y;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(531)
								Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(531)
								vy = tmp17;
							}
							HX_STACK_LINE(533)
							bool tmp12 = flip;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(533)
							if ((tmp12)){
								HX_STACK_LINE(533)
								Float tmp13 = (uy * vx);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(533)
								Float tmp14 = (ux * vy);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(533)
								tmp8 = (tmp13 - tmp14);
							}
							else{
								HX_STACK_LINE(533)
								Float tmp13 = (vy * ux);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(533)
								Float tmp14 = (vx * uy);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(533)
								tmp8 = (tmp13 - tmp14);
							}
						}
						HX_STACK_LINE(523)
						tmp4 = (tmp8 < (int)0);
					}
				}
				HX_STACK_LINE(518)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(518)
				return tmp5;
			}
			else{
				HX_STACK_LINE(536)
				bool tmp4 = (p->left == q->left);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(536)
				if ((tmp4)){
					HX_STACK_LINE(536)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(536)
					{
						HX_STACK_LINE(537)
						Float tmp6 = p->left->x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(537)
						Float tmp7 = p->right->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(537)
						bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(537)
						if ((tmp8)){
							HX_STACK_LINE(538)
							Float tmp9 = p->left->y;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(538)
							Float tmp10 = p->right->y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(538)
							bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(538)
							if ((tmp11)){
								HX_STACK_LINE(538)
								Float tmp12 = p->left->y;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(538)
								Float tmp13 = q->right->y;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(538)
								tmp5 = (tmp12 > tmp13);
							}
							else{
								HX_STACK_LINE(539)
								Float tmp12 = p->right->y;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(539)
								Float tmp13 = q->right->y;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(539)
								tmp5 = (tmp12 > tmp13);
							}
						}
						else{
							HX_STACK_LINE(541)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(541)
							{
								HX_STACK_LINE(542)
								Float tmp10 = p->right->x;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(542)
								Float tmp11 = p->left->x;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(542)
								bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(542)
								flip = tmp12;
								HX_STACK_LINE(543)
								{
									HX_STACK_LINE(544)
									Float tmp13 = p->right->x;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(544)
									Float tmp14 = p->left->x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(544)
									Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(544)
									ux = tmp15;
									HX_STACK_LINE(545)
									Float tmp16 = p->right->y;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(545)
									Float tmp17 = p->left->y;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(545)
									Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(545)
									uy = tmp18;
								}
								HX_STACK_LINE(547)
								{
									HX_STACK_LINE(548)
									Float tmp13 = q->right->x;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(548)
									Float tmp14 = p->left->x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(548)
									Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(548)
									vx = tmp15;
									HX_STACK_LINE(549)
									Float tmp16 = q->right->y;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(549)
									Float tmp17 = p->left->y;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(549)
									Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(549)
									vy = tmp18;
								}
								HX_STACK_LINE(551)
								bool tmp13 = flip;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(551)
								if ((tmp13)){
									HX_STACK_LINE(551)
									Float tmp14 = (uy * vx);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(551)
									Float tmp15 = (ux * vy);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(551)
									tmp9 = (tmp14 - tmp15);
								}
								else{
									HX_STACK_LINE(551)
									Float tmp14 = (vy * ux);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(551)
									Float tmp15 = (vx * uy);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(551)
									tmp9 = (tmp14 - tmp15);
								}
							}
							HX_STACK_LINE(541)
							tmp5 = (tmp9 < (int)0);
						}
					}
					HX_STACK_LINE(536)
					return tmp5;
				}
				else{
					HX_STACK_LINE(554)
					bool tmp5 = (p->right == q->right);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(554)
					if ((tmp5)){
						HX_STACK_LINE(554)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(554)
						{
							HX_STACK_LINE(555)
							Float tmp7 = p->left->x;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(555)
							Float tmp8 = p->right->x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(555)
							bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(555)
							if ((tmp9)){
								HX_STACK_LINE(556)
								Float tmp10 = p->left->y;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(556)
								Float tmp11 = p->right->y;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(556)
								bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(556)
								if ((tmp12)){
									HX_STACK_LINE(556)
									Float tmp13 = p->left->y;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(556)
									Float tmp14 = q->left->y;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(556)
									tmp6 = (tmp13 > tmp14);
								}
								else{
									HX_STACK_LINE(557)
									Float tmp13 = p->right->y;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(557)
									Float tmp14 = q->left->y;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(557)
									tmp6 = (tmp13 > tmp14);
								}
							}
							else{
								HX_STACK_LINE(559)
								Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(559)
								{
									HX_STACK_LINE(560)
									Float tmp11 = p->right->x;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(560)
									Float tmp12 = p->left->x;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(560)
									bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(560)
									flip = tmp13;
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(562)
										Float tmp14 = p->right->x;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(562)
										Float tmp15 = p->left->x;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(562)
										Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(562)
										ux = tmp16;
										HX_STACK_LINE(563)
										Float tmp17 = p->right->y;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(563)
										Float tmp18 = p->left->y;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(563)
										Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(563)
										uy = tmp19;
									}
									HX_STACK_LINE(565)
									{
										HX_STACK_LINE(566)
										Float tmp14 = q->left->x;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(566)
										Float tmp15 = p->left->x;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(566)
										Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(566)
										vx = tmp16;
										HX_STACK_LINE(567)
										Float tmp17 = q->left->y;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(567)
										Float tmp18 = p->left->y;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(567)
										Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(567)
										vy = tmp19;
									}
									HX_STACK_LINE(569)
									bool tmp14 = flip;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(569)
									if ((tmp14)){
										HX_STACK_LINE(569)
										Float tmp15 = (uy * vx);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(569)
										Float tmp16 = (ux * vy);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(569)
										tmp10 = (tmp15 - tmp16);
									}
									else{
										HX_STACK_LINE(569)
										Float tmp15 = (vy * ux);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(569)
										Float tmp16 = (vx * uy);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(569)
										tmp10 = (tmp15 - tmp16);
									}
								}
								HX_STACK_LINE(559)
								tmp6 = (tmp10 < (int)0);
							}
						}
						HX_STACK_LINE(554)
						return tmp6;
					}
				}
			}
		}
	}
	HX_STACK_LINE(572)
	Float tmp2 = p->left->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(572)
	Float tmp3 = p->right->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(572)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(572)
	if ((tmp4)){
		HX_STACK_LINE(573)
		Float tmp5 = q->left->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(573)
		Float tmp6 = q->right->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(573)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(573)
		if ((tmp7)){
			HX_STACK_LINE(574)
			Float tmp8 = p->left->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(574)
			Float tmp9 = p->right->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(574)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(574)
			::zpp_nape::geom::ZPP_SimpleVert tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(574)
			if ((tmp10)){
				HX_STACK_LINE(574)
				tmp11 = p->right;
			}
			else{
				HX_STACK_LINE(574)
				tmp11 = p->left;
			}
			HX_STACK_LINE(574)
			::zpp_nape::geom::ZPP_SimpleVert pmax = tmp11;		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(575)
			Float tmp12 = q->left->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(575)
			Float tmp13 = q->right->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(575)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(575)
			::zpp_nape::geom::ZPP_SimpleVert tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(575)
			if ((tmp14)){
				HX_STACK_LINE(575)
				tmp15 = q->right;
			}
			else{
				HX_STACK_LINE(575)
				tmp15 = q->left;
			}
			HX_STACK_LINE(575)
			::zpp_nape::geom::ZPP_SimpleVert qmax = tmp15;		HX_STACK_VAR(qmax,"qmax");
			HX_STACK_LINE(576)
			bool tmp16 = (pmax->y > qmax->y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(576)
			return tmp16;
		}
		else{
			HX_STACK_LINE(579)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(580)
				Float tmp9 = q->right->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(580)
				Float tmp10 = q->left->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(580)
				bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(580)
				flip = tmp11;
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(582)
					Float tmp12 = q->right->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(582)
					Float tmp13 = q->left->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(582)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(582)
					ux = tmp14;
					HX_STACK_LINE(583)
					Float tmp15 = q->right->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(583)
					Float tmp16 = q->left->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(583)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(583)
					uy = tmp17;
				}
				HX_STACK_LINE(585)
				{
					HX_STACK_LINE(586)
					Float tmp12 = p->left->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(586)
					Float tmp13 = q->left->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(586)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(586)
					vx = tmp14;
					HX_STACK_LINE(587)
					Float tmp15 = p->left->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(587)
					Float tmp16 = q->left->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(587)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(587)
					vy = tmp17;
				}
				HX_STACK_LINE(589)
				bool tmp12 = flip;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(589)
				if ((tmp12)){
					HX_STACK_LINE(589)
					Float tmp13 = (uy * vx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(589)
					Float tmp14 = (ux * vy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(589)
					tmp8 = (tmp13 - tmp14);
				}
				else{
					HX_STACK_LINE(589)
					Float tmp13 = (vy * ux);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(589)
					Float tmp14 = (vx * uy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(589)
					tmp8 = (tmp13 - tmp14);
				}
			}
			HX_STACK_LINE(579)
			Float plrg = tmp8;		HX_STACK_VAR(plrg,"plrg");
			HX_STACK_LINE(591)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(591)
			{
				HX_STACK_LINE(592)
				Float tmp10 = q->right->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(592)
				Float tmp11 = q->left->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(592)
				bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(592)
				flip = tmp12;
				HX_STACK_LINE(593)
				{
					HX_STACK_LINE(594)
					Float tmp13 = q->right->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(594)
					Float tmp14 = q->left->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(594)
					Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(594)
					ux = tmp15;
					HX_STACK_LINE(595)
					Float tmp16 = q->right->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(595)
					Float tmp17 = q->left->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(595)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(595)
					uy = tmp18;
				}
				HX_STACK_LINE(597)
				{
					HX_STACK_LINE(598)
					Float tmp13 = p->right->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(598)
					Float tmp14 = q->left->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(598)
					Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(598)
					vx = tmp15;
					HX_STACK_LINE(599)
					Float tmp16 = p->right->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(599)
					Float tmp17 = q->left->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(599)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(599)
					vy = tmp18;
				}
				HX_STACK_LINE(601)
				bool tmp13 = flip;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(601)
				if ((tmp13)){
					HX_STACK_LINE(601)
					Float tmp14 = (uy * vx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(601)
					Float tmp15 = (ux * vy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(601)
					tmp9 = (tmp14 - tmp15);
				}
				else{
					HX_STACK_LINE(601)
					Float tmp14 = (vy * ux);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(601)
					Float tmp15 = (vx * uy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(601)
					tmp9 = (tmp14 - tmp15);
				}
			}
			HX_STACK_LINE(591)
			Float aplrg = tmp9;		HX_STACK_VAR(aplrg,"aplrg");
			HX_STACK_LINE(603)
			Float tmp10 = (plrg * aplrg);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			bool tmp11 = (tmp10 >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(603)
			if ((tmp11)){
				HX_STACK_LINE(603)
				bool tmp12 = (plrg >= ((Float)0.0));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(603)
				return tmp12;
			}
			else{
				HX_STACK_LINE(604)
				Float tmp12 = this->sweepx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(604)
				Float tmp13 = p->left->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(604)
				bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(604)
				return tmp14;
			}
		}
	}
	else{
		HX_STACK_LINE(607)
		Float tmp5 = q->left->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(607)
		Float tmp6 = q->right->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(607)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(607)
		if ((tmp7)){
			HX_STACK_LINE(608)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(609)
				Float tmp9 = p->right->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(609)
				Float tmp10 = p->left->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(609)
				bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(609)
				flip = tmp11;
				HX_STACK_LINE(610)
				{
					HX_STACK_LINE(611)
					Float tmp12 = p->right->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(611)
					Float tmp13 = p->left->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(611)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(611)
					ux = tmp14;
					HX_STACK_LINE(612)
					Float tmp15 = p->right->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(612)
					Float tmp16 = p->left->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(612)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(612)
					uy = tmp17;
				}
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(615)
					Float tmp12 = q->left->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(615)
					Float tmp13 = p->left->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(615)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(615)
					vx = tmp14;
					HX_STACK_LINE(616)
					Float tmp15 = q->left->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(616)
					Float tmp16 = p->left->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(616)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(616)
					vy = tmp17;
				}
				HX_STACK_LINE(618)
				bool tmp12 = flip;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(618)
				if ((tmp12)){
					HX_STACK_LINE(618)
					Float tmp13 = (uy * vx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(618)
					Float tmp14 = (ux * vy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(618)
					tmp8 = (tmp13 - tmp14);
				}
				else{
					HX_STACK_LINE(618)
					Float tmp13 = (vy * ux);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(618)
					Float tmp14 = (vx * uy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(618)
					tmp8 = (tmp13 - tmp14);
				}
			}
			HX_STACK_LINE(608)
			Float qlrg = tmp8;		HX_STACK_VAR(qlrg,"qlrg");
			HX_STACK_LINE(620)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(620)
			{
				HX_STACK_LINE(621)
				Float tmp10 = p->right->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(621)
				Float tmp11 = p->left->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(621)
				bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(621)
				flip = tmp12;
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(623)
					Float tmp13 = p->right->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(623)
					Float tmp14 = p->left->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(623)
					Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(623)
					ux = tmp15;
					HX_STACK_LINE(624)
					Float tmp16 = p->right->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(624)
					Float tmp17 = p->left->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(624)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(624)
					uy = tmp18;
				}
				HX_STACK_LINE(626)
				{
					HX_STACK_LINE(627)
					Float tmp13 = q->right->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(627)
					Float tmp14 = p->left->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(627)
					Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(627)
					vx = tmp15;
					HX_STACK_LINE(628)
					Float tmp16 = q->right->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(628)
					Float tmp17 = p->left->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(628)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(628)
					vy = tmp18;
				}
				HX_STACK_LINE(630)
				bool tmp13 = flip;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(630)
				if ((tmp13)){
					HX_STACK_LINE(630)
					Float tmp14 = (uy * vx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(630)
					Float tmp15 = (ux * vy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(630)
					tmp9 = (tmp14 - tmp15);
				}
				else{
					HX_STACK_LINE(630)
					Float tmp14 = (vy * ux);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(630)
					Float tmp15 = (vx * uy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(630)
					tmp9 = (tmp14 - tmp15);
				}
			}
			HX_STACK_LINE(620)
			Float aqlrg = tmp9;		HX_STACK_VAR(aqlrg,"aqlrg");
			HX_STACK_LINE(632)
			Float tmp10 = (qlrg * aqlrg);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(632)
			bool tmp11 = (tmp10 >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(632)
			if ((tmp11)){
				HX_STACK_LINE(632)
				bool tmp12 = (qlrg < ((Float)0.0));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(632)
				return tmp12;
			}
			else{
				HX_STACK_LINE(633)
				Float tmp12 = this->sweepx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(633)
				Float tmp13 = q->left->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(633)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(633)
				return tmp14;
			}
		}
		else{
			HX_STACK_LINE(636)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(636)
			{
				HX_STACK_LINE(637)
				Float tmp9 = p->right->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(637)
				Float tmp10 = p->left->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(637)
				bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(637)
				flip = tmp11;
				HX_STACK_LINE(638)
				{
					HX_STACK_LINE(639)
					Float tmp12 = p->right->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(639)
					Float tmp13 = p->left->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(639)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(639)
					ux = tmp14;
					HX_STACK_LINE(640)
					Float tmp15 = p->right->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(640)
					Float tmp16 = p->left->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(640)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(640)
					uy = tmp17;
				}
				HX_STACK_LINE(642)
				{
					HX_STACK_LINE(643)
					Float tmp12 = q->left->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(643)
					Float tmp13 = p->left->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(643)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(643)
					vx = tmp14;
					HX_STACK_LINE(644)
					Float tmp15 = q->left->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(644)
					Float tmp16 = p->left->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(644)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(644)
					vy = tmp17;
				}
				HX_STACK_LINE(646)
				bool tmp12 = flip;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(646)
				if ((tmp12)){
					HX_STACK_LINE(646)
					Float tmp13 = (uy * vx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(646)
					Float tmp14 = (ux * vy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(646)
					tmp8 = (tmp13 - tmp14);
				}
				else{
					HX_STACK_LINE(646)
					Float tmp13 = (vy * ux);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(646)
					Float tmp14 = (vx * uy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(646)
					tmp8 = (tmp13 - tmp14);
				}
			}
			HX_STACK_LINE(636)
			bool tmp9 = (tmp8 < ((Float)0.0));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(636)
			bool qlrg = tmp9;		HX_STACK_VAR(qlrg,"qlrg");
			HX_STACK_LINE(648)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(648)
			{
				HX_STACK_LINE(649)
				Float tmp11 = p->right->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(649)
				Float tmp12 = p->left->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(649)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(649)
				flip = tmp13;
				HX_STACK_LINE(650)
				{
					HX_STACK_LINE(651)
					Float tmp14 = p->right->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(651)
					Float tmp15 = p->left->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(651)
					Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(651)
					ux = tmp16;
					HX_STACK_LINE(652)
					Float tmp17 = p->right->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(652)
					Float tmp18 = p->left->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(652)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(652)
					uy = tmp19;
				}
				HX_STACK_LINE(654)
				{
					HX_STACK_LINE(655)
					Float tmp14 = q->right->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(655)
					Float tmp15 = p->left->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(655)
					Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(655)
					vx = tmp16;
					HX_STACK_LINE(656)
					Float tmp17 = q->right->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(656)
					Float tmp18 = p->left->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(656)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(656)
					vy = tmp19;
				}
				HX_STACK_LINE(658)
				bool tmp14 = flip;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(658)
				if ((tmp14)){
					HX_STACK_LINE(658)
					Float tmp15 = (uy * vx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(658)
					Float tmp16 = (ux * vy);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(658)
					tmp10 = (tmp15 - tmp16);
				}
				else{
					HX_STACK_LINE(658)
					Float tmp15 = (vy * ux);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(658)
					Float tmp16 = (vx * uy);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(658)
					tmp10 = (tmp15 - tmp16);
				}
			}
			HX_STACK_LINE(648)
			bool tmp11 = (tmp10 < ((Float)0.0));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(648)
			bool aqlrg = tmp11;		HX_STACK_VAR(aqlrg,"aqlrg");
			HX_STACK_LINE(660)
			bool tmp12 = (qlrg == aqlrg);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(660)
			if ((tmp12)){
				HX_STACK_LINE(660)
				bool tmp13 = qlrg;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(660)
				return tmp13;
			}
			else{
				HX_STACK_LINE(662)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(662)
				{
					HX_STACK_LINE(663)
					Float tmp14 = q->right->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(663)
					Float tmp15 = q->left->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(663)
					bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(663)
					flip = tmp16;
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(665)
						Float tmp17 = q->right->x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(665)
						Float tmp18 = q->left->x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(665)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(665)
						ux = tmp19;
						HX_STACK_LINE(666)
						Float tmp20 = q->right->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(666)
						Float tmp21 = q->left->y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(666)
						Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(666)
						uy = tmp22;
					}
					HX_STACK_LINE(668)
					{
						HX_STACK_LINE(669)
						Float tmp17 = p->left->x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(669)
						Float tmp18 = q->left->x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(669)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(669)
						vx = tmp19;
						HX_STACK_LINE(670)
						Float tmp20 = p->left->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(670)
						Float tmp21 = q->left->y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(670)
						Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(670)
						vy = tmp22;
					}
					HX_STACK_LINE(672)
					bool tmp17 = flip;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(672)
					if ((tmp17)){
						HX_STACK_LINE(672)
						Float tmp18 = (uy * vx);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(672)
						Float tmp19 = (ux * vy);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(672)
						tmp13 = (tmp18 - tmp19);
					}
					else{
						HX_STACK_LINE(672)
						Float tmp18 = (vy * ux);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(672)
						Float tmp19 = (vx * uy);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(672)
						tmp13 = (tmp18 - tmp19);
					}
				}
				HX_STACK_LINE(662)
				bool tmp14 = (tmp13 >= ((Float)0.0));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(662)
				bool plrg = tmp14;		HX_STACK_VAR(plrg,"plrg");
				HX_STACK_LINE(674)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(674)
				{
					HX_STACK_LINE(675)
					Float tmp16 = q->right->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(675)
					Float tmp17 = q->left->x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(675)
					bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(675)
					flip = tmp18;
					HX_STACK_LINE(676)
					{
						HX_STACK_LINE(677)
						Float tmp19 = q->right->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(677)
						Float tmp20 = q->left->x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(677)
						Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(677)
						ux = tmp21;
						HX_STACK_LINE(678)
						Float tmp22 = q->right->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(678)
						Float tmp23 = q->left->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(678)
						Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(678)
						uy = tmp24;
					}
					HX_STACK_LINE(680)
					{
						HX_STACK_LINE(681)
						Float tmp19 = p->right->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(681)
						Float tmp20 = q->left->x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(681)
						Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(681)
						vx = tmp21;
						HX_STACK_LINE(682)
						Float tmp22 = p->right->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(682)
						Float tmp23 = q->left->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(682)
						Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(682)
						vy = tmp24;
					}
					HX_STACK_LINE(684)
					bool tmp19 = flip;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(684)
					if ((tmp19)){
						HX_STACK_LINE(684)
						Float tmp20 = (uy * vx);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(684)
						Float tmp21 = (ux * vy);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(684)
						tmp15 = (tmp20 - tmp21);
					}
					else{
						HX_STACK_LINE(684)
						Float tmp20 = (vy * ux);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(684)
						Float tmp21 = (vx * uy);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(684)
						tmp15 = (tmp20 - tmp21);
					}
				}
				HX_STACK_LINE(674)
				bool tmp16 = (tmp15 >= ((Float)0.0));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(674)
				bool aplrg = tmp16;		HX_STACK_VAR(aplrg,"aplrg");
				HX_STACK_LINE(686)
				bool tmp17 = (plrg == aplrg);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(686)
				if ((tmp17)){
					HX_STACK_LINE(686)
					bool tmp18 = plrg;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(686)
					return tmp18;
				}
				HX_STACK_LINE(687)
				Float tmp18 = this->sweepx;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(687)
				Float tmp19 = p->left->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(687)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(687)
				Float tmp21 = p->right->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(687)
				Float tmp22 = p->left->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(687)
				Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(687)
				Float tmp24 = (Float(tmp20) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(687)
				Float tmp25 = p->right->y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(687)
				Float tmp26 = p->left->y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(687)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(687)
				Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(687)
				Float tmp29 = p->left->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(687)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(687)
				Float py = tmp30;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(688)
				Float tmp31 = this->sweepx;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(688)
				Float tmp32 = q->left->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(688)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(688)
				Float tmp34 = q->right->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(688)
				Float tmp35 = q->left->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(688)
				Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(688)
				Float tmp37 = (Float(tmp33) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(688)
				Float tmp38 = q->right->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(688)
				Float tmp39 = q->left->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(688)
				Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(688)
				Float tmp41 = (tmp37 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(688)
				Float tmp42 = q->left->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(688)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(688)
				Float qy = tmp43;		HX_STACK_VAR(qy,"qy");
				HX_STACK_LINE(689)
				bool tmp44 = (py > qy);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(689)
				return tmp44;
			}
		}
	}
	HX_STACK_LINE(572)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,edge_lt,return )

Void ZPP_SimpleSweep_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","clear",0xf5fa9a83,"zpp_nape.geom.ZPP_SimpleSweep.clear","zpp_nape/geom/Simple.hx",693,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(694)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->tree;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(694)
		tmp->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleSweep_obj,clear,(void))

::zpp_nape::geom::ZPP_SimpleSeg ZPP_SimpleSweep_obj::add( ::zpp_nape::geom::ZPP_SimpleSeg e){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","add",0x9299d197,"zpp_nape.geom.ZPP_SimpleSweep.add","zpp_nape/geom/Simple.hx",696,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(697)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->tree;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(697)
	::zpp_nape::geom::ZPP_SimpleSeg tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = tmp->insert(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(697)
	e->node = tmp2;
	HX_STACK_LINE(698)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = this->tree;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(698)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = e->node;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(698)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp5 = tmp3->successor_node(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(698)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = tmp5;		HX_STACK_VAR(nxt,"nxt");
	HX_STACK_LINE(699)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp6 = this->tree;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(699)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp7 = e->node;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(699)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp8 = tmp6->predecessor_node(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(699)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = tmp8;		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(700)
	bool tmp9 = (nxt != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(700)
	if ((tmp9)){
		HX_STACK_LINE(701)
		e->next = nxt->data;
		HX_STACK_LINE(702)
		nxt->data->prev = e;
	}
	HX_STACK_LINE(704)
	bool tmp10 = (pre != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(704)
	if ((tmp10)){
		HX_STACK_LINE(705)
		e->prev = pre->data;
		HX_STACK_LINE(706)
		pre->data->next = e;
	}
	HX_STACK_LINE(708)
	::zpp_nape::geom::ZPP_SimpleSeg tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(708)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleSweep_obj,add,return )

Void ZPP_SimpleSweep_obj::remove( ::zpp_nape::geom::ZPP_SimpleSeg e){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","remove",0x422d4a8e,"zpp_nape.geom.ZPP_SimpleSweep.remove","zpp_nape/geom/Simple.hx",710,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(711)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = this->tree;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(711)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp1 = e->node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(711)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp2 = tmp->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(711)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = tmp2;		HX_STACK_VAR(nxt,"nxt");
		HX_STACK_LINE(712)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = this->tree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(712)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = e->node;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(712)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp5 = tmp3->predecessor_node(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(712)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = tmp5;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(713)
		bool tmp6 = (nxt != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(713)
		if ((tmp6)){
			HX_STACK_LINE(713)
			nxt->data->prev = e->prev;
		}
		HX_STACK_LINE(714)
		bool tmp7 = (pre != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(714)
		if ((tmp7)){
			HX_STACK_LINE(714)
			pre->data->next = e->next;
		}
		HX_STACK_LINE(715)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp8 = this->tree;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(715)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp9 = e->node;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(715)
		tmp8->remove_node(tmp9);
		HX_STACK_LINE(716)
		e->node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleSweep_obj,remove,(void))

bool ZPP_SimpleSweep_obj::intersect( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","intersect",0x575adcd5,"zpp_nape.geom.ZPP_SimpleSweep.intersect","zpp_nape/geom/Simple.hx",718,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(719)
	bool tmp = (p == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	if ((tmp1)){
		HX_STACK_LINE(719)
		tmp2 = (q == null());
	}
	else{
		HX_STACK_LINE(719)
		tmp2 = true;
	}
	HX_STACK_LINE(719)
	if ((tmp2)){
		HX_STACK_LINE(719)
		return false;
	}
	else{
		HX_STACK_LINE(720)
		bool tmp3 = (p->left == q->left);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(720)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(720)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(720)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(720)
		if ((tmp5)){
			HX_STACK_LINE(720)
			tmp6 = (p->left == q->right);
		}
		else{
			HX_STACK_LINE(720)
			tmp6 = true;
		}
		HX_STACK_LINE(720)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(720)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(720)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(720)
		if ((tmp8)){
			HX_STACK_LINE(720)
			tmp9 = (p->right == q->left);
		}
		else{
			HX_STACK_LINE(720)
			tmp9 = true;
		}
		HX_STACK_LINE(720)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(720)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(720)
		if ((tmp10)){
			HX_STACK_LINE(720)
			tmp11 = (p->right == q->right);
		}
		else{
			HX_STACK_LINE(720)
			tmp11 = true;
		}
		HX_STACK_LINE(720)
		if ((tmp11)){
			HX_STACK_LINE(720)
			return false;
		}
		else{
			HX_STACK_LINE(722)
			Float tmp12 = q->left->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(722)
			Float tmp13 = p->left->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(722)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(722)
			Float tmp15 = p->right->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(722)
			Float tmp16 = p->left->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(722)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(722)
			Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(722)
			Float tmp19 = p->right->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(722)
			Float tmp20 = p->left->x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(722)
			Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(722)
			Float tmp22 = q->left->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(722)
			Float tmp23 = p->left->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(722)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(722)
			Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(722)
			Float tmp26 = (tmp18 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(722)
			Float lsign = tmp26;		HX_STACK_VAR(lsign,"lsign");
			HX_STACK_LINE(723)
			Float tmp27 = q->right->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(723)
			Float tmp28 = p->left->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(723)
			Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(723)
			Float tmp30 = p->right->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(723)
			Float tmp31 = p->left->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(723)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(723)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(723)
			Float tmp34 = p->right->x;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(723)
			Float tmp35 = p->left->x;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(723)
			Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(723)
			Float tmp37 = q->right->y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(723)
			Float tmp38 = p->left->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(723)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(723)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(723)
			Float tmp41 = (tmp33 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(723)
			Float rsign = tmp41;		HX_STACK_VAR(rsign,"rsign");
			HX_STACK_LINE(724)
			Float tmp42 = (lsign * rsign);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(724)
			bool tmp43 = (tmp42 > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(724)
			if ((tmp43)){
				HX_STACK_LINE(724)
				return false;
			}
			else{
				HX_STACK_LINE(726)
				Float tmp44 = p->left->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(726)
				Float tmp45 = q->left->x;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(726)
				Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(726)
				Float tmp47 = q->right->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(726)
				Float tmp48 = q->left->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(726)
				Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(726)
				Float tmp50 = (tmp46 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(726)
				Float tmp51 = q->right->x;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(726)
				Float tmp52 = q->left->x;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(726)
				Float tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(726)
				Float tmp54 = p->left->y;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(726)
				Float tmp55 = q->left->y;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(726)
				Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(726)
				Float tmp57 = (tmp53 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(726)
				Float tmp58 = (tmp50 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(726)
				Float lsign2 = tmp58;		HX_STACK_VAR(lsign2,"lsign2");
				HX_STACK_LINE(727)
				Float tmp59 = p->right->x;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(727)
				Float tmp60 = q->left->x;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(727)
				Float tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(727)
				Float tmp62 = q->right->y;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(727)
				Float tmp63 = q->left->y;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(727)
				Float tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(727)
				Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(727)
				Float tmp66 = q->right->x;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(727)
				Float tmp67 = q->left->x;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(727)
				Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(727)
				Float tmp69 = p->right->y;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(727)
				Float tmp70 = q->left->y;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(727)
				Float tmp71 = (tmp69 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(727)
				Float tmp72 = (tmp68 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(727)
				Float tmp73 = (tmp65 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(727)
				Float rsign2 = tmp73;		HX_STACK_VAR(rsign2,"rsign2");
				HX_STACK_LINE(728)
				Float tmp74 = (lsign2 * rsign2);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(728)
				bool tmp75 = (tmp74 > (int)0);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(728)
				if ((tmp75)){
					HX_STACK_LINE(728)
					return false;
				}
				else{
					HX_STACK_LINE(729)
					Float tmp76 = (lsign * rsign);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(729)
					bool tmp77 = (tmp76 >= (int)0);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(729)
					bool tmp78;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(729)
					if ((tmp77)){
						HX_STACK_LINE(729)
						Float tmp79 = (lsign2 * rsign2);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(729)
						Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(729)
						tmp78 = (tmp80 >= (int)0);
					}
					else{
						HX_STACK_LINE(729)
						tmp78 = false;
					}
					HX_STACK_LINE(729)
					if ((tmp78)){
						HX_STACK_LINE(730)
						return true;
					}
					else{
						HX_STACK_LINE(732)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(719)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,intersect,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_SimpleSweep_obj::intersection( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSweep","intersection",0x34f12413,"zpp_nape.geom.ZPP_SimpleSweep.intersection","zpp_nape/geom/Simple.hx",736,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(737)
	bool tmp = (p == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(737)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(737)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(737)
	if ((tmp1)){
		HX_STACK_LINE(737)
		tmp2 = (q == null());
	}
	else{
		HX_STACK_LINE(737)
		tmp2 = true;
	}
	HX_STACK_LINE(737)
	if ((tmp2)){
		HX_STACK_LINE(737)
		return null();
	}
	else{
		HX_STACK_LINE(738)
		bool tmp3 = (p->left == q->left);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(738)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(738)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(738)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(738)
		if ((tmp5)){
			HX_STACK_LINE(738)
			tmp6 = (p->left == q->right);
		}
		else{
			HX_STACK_LINE(738)
			tmp6 = true;
		}
		HX_STACK_LINE(738)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(738)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(738)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(738)
		if ((tmp8)){
			HX_STACK_LINE(738)
			tmp9 = (p->right == q->left);
		}
		else{
			HX_STACK_LINE(738)
			tmp9 = true;
		}
		HX_STACK_LINE(738)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(738)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(738)
		if ((tmp10)){
			HX_STACK_LINE(738)
			tmp11 = (p->right == q->right);
		}
		else{
			HX_STACK_LINE(738)
			tmp11 = true;
		}
		HX_STACK_LINE(738)
		if ((tmp11)){
			HX_STACK_LINE(738)
			return null();
		}
		else{
			HX_STACK_LINE(740)
			Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(741)
			Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(742)
			{
				HX_STACK_LINE(743)
				Float tmp12 = p->right->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(743)
				Float tmp13 = p->left->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(743)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(743)
				ux = tmp14;
				HX_STACK_LINE(744)
				Float tmp15 = p->right->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(744)
				Float tmp16 = p->left->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(744)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(744)
				uy = tmp17;
			}
			HX_STACK_LINE(746)
			Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(747)
			Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(749)
				Float tmp12 = q->right->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(749)
				Float tmp13 = q->left->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(749)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(749)
				vx = tmp14;
				HX_STACK_LINE(750)
				Float tmp15 = q->right->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(750)
				Float tmp16 = q->left->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(750)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(750)
				vy = tmp17;
			}
			HX_STACK_LINE(752)
			Float tmp12 = (vy * ux);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(752)
			Float tmp13 = (vx * uy);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(752)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(752)
			Float denom = tmp14;		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(753)
			bool tmp15 = (denom == ((Float)0.0));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(753)
			if ((tmp15)){
				HX_STACK_LINE(753)
				return null();
			}
			HX_STACK_LINE(754)
			Float tmp16 = (Float((int)1) / Float(denom));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(754)
			denom = tmp16;
			HX_STACK_LINE(755)
			Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(756)
			Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(758)
				Float tmp17 = q->left->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(758)
				Float tmp18 = p->left->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(758)
				Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(758)
				cx = tmp19;
				HX_STACK_LINE(759)
				Float tmp20 = q->left->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(759)
				Float tmp21 = p->left->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(759)
				Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(759)
				cy = tmp22;
			}
			HX_STACK_LINE(761)
			Float tmp17 = (vy * cx);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(761)
			Float tmp18 = (vx * cy);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(761)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(761)
			Float tmp20 = denom;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(761)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(761)
			Float t = tmp21;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(762)
			bool tmp22 = (t < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(762)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(762)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(762)
			if ((tmp23)){
				HX_STACK_LINE(762)
				tmp24 = (t > (int)1);
			}
			else{
				HX_STACK_LINE(762)
				tmp24 = true;
			}
			HX_STACK_LINE(762)
			if ((tmp24)){
				HX_STACK_LINE(762)
				return null();
			}
			HX_STACK_LINE(763)
			Float tmp25 = (uy * cx);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(763)
			Float tmp26 = (ux * cy);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(763)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(763)
			Float tmp28 = denom;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(763)
			Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(763)
			Float s = tmp29;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(764)
			bool tmp30 = (s < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(764)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(764)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(764)
			if ((tmp31)){
				HX_STACK_LINE(764)
				tmp32 = (s > (int)1);
			}
			else{
				HX_STACK_LINE(764)
				tmp32 = true;
			}
			HX_STACK_LINE(764)
			if ((tmp32)){
				HX_STACK_LINE(764)
				return null();
			}
			HX_STACK_LINE(765)
			::zpp_nape::geom::ZPP_SimpleVert vet;		HX_STACK_VAR(vet,"vet");
			HX_STACK_LINE(766)
			bool tmp33 = (s == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(766)
			bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(766)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(766)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(766)
			if ((tmp35)){
				HX_STACK_LINE(766)
				tmp36 = (s == (int)1);
			}
			else{
				HX_STACK_LINE(766)
				tmp36 = true;
			}
			HX_STACK_LINE(766)
			bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(766)
			bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(766)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(766)
			if ((tmp38)){
				HX_STACK_LINE(766)
				tmp39 = (t == (int)0);
			}
			else{
				HX_STACK_LINE(766)
				tmp39 = true;
			}
			HX_STACK_LINE(766)
			bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(766)
			bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(766)
			if ((tmp40)){
				HX_STACK_LINE(766)
				tmp41 = (t == (int)1);
			}
			else{
				HX_STACK_LINE(766)
				tmp41 = true;
			}
			HX_STACK_LINE(766)
			if ((tmp41)){
				HX_STACK_LINE(768)
				bool tmp42 = (s == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(768)
				bool cases = tmp42;		HX_STACK_VAR(cases,"cases");
				HX_STACK_LINE(769)
				bool tmp43 = (s == (int)1);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(769)
				bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(769)
				if ((tmp43)){
					HX_STACK_LINE(769)
					tmp44 = cases;
				}
				else{
					HX_STACK_LINE(769)
					tmp44 = false;
				}
				HX_STACK_LINE(769)
				if ((tmp44)){
					HX_STACK_LINE(769)
					HX_STACK_DO_THROW(HX_HCSTRING("corner case 1a","\x35","\x83","\xd9","\x78"));
				}
				else{
					HX_STACK_LINE(770)
					bool tmp45 = (s == (int)1);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(770)
					if ((tmp45)){
						HX_STACK_LINE(770)
						cases = true;
					}
				}
				HX_STACK_LINE(771)
				bool tmp45 = (t == (int)0);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(771)
				bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(771)
				if ((tmp45)){
					HX_STACK_LINE(771)
					tmp46 = cases;
				}
				else{
					HX_STACK_LINE(771)
					tmp46 = false;
				}
				HX_STACK_LINE(771)
				if ((tmp46)){
					HX_STACK_LINE(771)
					HX_STACK_DO_THROW(HX_HCSTRING("corner case 1b","\x36","\x83","\xd9","\x78"));
				}
				else{
					HX_STACK_LINE(772)
					bool tmp47 = (t == (int)0);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(772)
					if ((tmp47)){
						HX_STACK_LINE(772)
						cases = true;
					}
				}
				HX_STACK_LINE(773)
				bool tmp47 = (t == (int)1);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(773)
				bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(773)
				if ((tmp47)){
					HX_STACK_LINE(773)
					tmp48 = cases;
				}
				else{
					HX_STACK_LINE(773)
					tmp48 = false;
				}
				HX_STACK_LINE(773)
				if ((tmp48)){
					HX_STACK_LINE(773)
					HX_STACK_DO_THROW(HX_HCSTRING("corner case 1c","\x37","\x83","\xd9","\x78"));
				}
				HX_STACK_LINE(775)
				bool tmp49 = (s == (int)0);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(775)
				::zpp_nape::geom::ZPP_SimpleVert tmp50;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(775)
				if ((tmp49)){
					HX_STACK_LINE(775)
					tmp50 = q->left;
				}
				else{
					HX_STACK_LINE(775)
					bool tmp51 = (s == (int)1);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(775)
					if ((tmp51)){
						HX_STACK_LINE(775)
						tmp50 = q->right;
					}
					else{
						HX_STACK_LINE(775)
						bool tmp52 = (t == (int)0);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(775)
						if ((tmp52)){
							HX_STACK_LINE(775)
							tmp50 = p->left;
						}
						else{
							HX_STACK_LINE(775)
							tmp50 = p->right;
						}
					}
				}
				HX_STACK_LINE(775)
				vet = tmp50;
			}
			else{
				HX_STACK_LINE(777)
				::zpp_nape::geom::ZPP_SimpleVert tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(777)
				{
					HX_STACK_LINE(777)
					::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(777)
					{
						HX_STACK_LINE(777)
						::zpp_nape::geom::ZPP_SimpleVert tmp43 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(777)
						bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(777)
						if ((tmp44)){
							HX_STACK_LINE(777)
							::zpp_nape::geom::ZPP_SimpleVert tmp45 = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(777)
							ret = tmp45;
						}
						else{
							HX_STACK_LINE(777)
							::zpp_nape::geom::ZPP_SimpleVert tmp45 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(777)
							ret = tmp45;
							HX_STACK_LINE(777)
							::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
							HX_STACK_LINE(777)
							ret->next = null();
						}
						HX_STACK_LINE(777)
						Dynamic();
					}
					HX_STACK_LINE(777)
					{
						HX_STACK_LINE(777)
						Float tmp43 = p->left->x;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(777)
						Float tmp44 = (ux * t);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(777)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(777)
						Float tmp46 = q->left->x;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(777)
						Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(777)
						Float tmp48 = (vx * s);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(777)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(777)
						Float tmp50 = (((Float)0.5) * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(777)
						ret->x = tmp50;
						HX_STACK_LINE(777)
						Float tmp51 = p->left->y;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(777)
						Float tmp52 = (uy * t);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(777)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(777)
						Float tmp54 = q->left->y;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(777)
						Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(777)
						Float tmp56 = (vy * s);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(777)
						Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(777)
						Float tmp58 = (((Float)0.5) * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(777)
						ret->y = tmp58;
						HX_STACK_LINE(777)
						{
						}
					}
					HX_STACK_LINE(777)
					tmp42 = ret;
				}
				HX_STACK_LINE(777)
				vet = tmp42;
			}
			HX_STACK_LINE(778)
			::zpp_nape::geom::ZPP_SimpleEvent tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					::zpp_nape::geom::ZPP_SimpleEvent tmp43 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(778)
					bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(778)
					if ((tmp44)){
						HX_STACK_LINE(778)
						::zpp_nape::geom::ZPP_SimpleEvent tmp45 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(778)
						ret = tmp45;
					}
					else{
						HX_STACK_LINE(778)
						::zpp_nape::geom::ZPP_SimpleEvent tmp45 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(778)
						ret = tmp45;
						HX_STACK_LINE(778)
						::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(778)
						ret->next = null();
					}
					HX_STACK_LINE(778)
					Dynamic();
				}
				HX_STACK_LINE(778)
				ret->vertex = vet;
				HX_STACK_LINE(778)
				tmp42 = ret;
			}
			HX_STACK_LINE(778)
			::zpp_nape::geom::ZPP_SimpleEvent ret = tmp42;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(779)
			ret->type = (int)0;
			HX_STACK_LINE(780)
			ret->segment = p;
			HX_STACK_LINE(781)
			ret->segment2 = q;
			HX_STACK_LINE(782)
			::zpp_nape::geom::ZPP_SimpleEvent tmp43 = ret;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(782)
			return tmp43;
		}
	}
	HX_STACK_LINE(737)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,intersection,return )


ZPP_SimpleSweep_obj::ZPP_SimpleSweep_obj()
{
}

void ZPP_SimpleSweep_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleSweep);
	HX_MARK_MEMBER_NAME(sweepx,"sweepx");
	HX_MARK_MEMBER_NAME(tree,"tree");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleSweep_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sweepx,"sweepx");
	HX_VISIT_MEMBER_NAME(tree,"tree");
}

Dynamic ZPP_SimpleSweep_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return tree; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sweepx") ) { return sweepx; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edge_lt") ) { return edge_lt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { return intersect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_nodes") ) { return swap_nodes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimpleSweep_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sweepx") ) { sweepx=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SimpleSweep_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_SimpleSweep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sweepx","\x0c","\x19","\xc9","\xc2"));
	outFields->push(HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ZPP_SimpleSweep_obj,sweepx),HX_HCSTRING("sweepx","\x0c","\x19","\xc9","\xc2")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleSweep_obj,tree),HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sweepx","\x0c","\x19","\xc9","\xc2"),
	HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"),
	HX_HCSTRING("swap_nodes","\x45","\xda","\xd2","\xe8"),
	HX_HCSTRING("edge_lt","\x8a","\xb0","\xf8","\xf4"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("intersect","\xdf","\x00","\x75","\x42"),
	HX_HCSTRING("intersection","\x49","\xa2","\x61","\x88"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleSweep_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleSweep_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_SimpleSweep_obj::__mClass;

void ZPP_SimpleSweep_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_SimpleSweep","\xe4","\xcc","\xb5","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_SimpleSweep_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SimpleSweep_obj >;
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

} // end namespace zpp_nape
} // end namespace geom
