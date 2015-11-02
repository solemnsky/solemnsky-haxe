#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_Body_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","new",0x374d8e26,"zpp_nape.util.ZPP_Set_ZPP_Body.new","zpp_nape/util/RBTree.hx",175,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(216)
	this->colour = (int)0;
	HX_STACK_LINE(215)
	this->parent = null();
	HX_STACK_LINE(214)
	this->next = null();
	HX_STACK_LINE(213)
	this->prev = null();
	HX_STACK_LINE(212)
	this->data = null();
	HX_STACK_LINE(211)
	this->swapped = null();
	HX_STACK_LINE(210)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_Body_obj::~ZPP_Set_ZPP_Body_obj() { }

Dynamic ZPP_Set_ZPP_Body_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_Body_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > ZPP_Set_ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > _result_ = new ZPP_Set_ZPP_Body_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Set_ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > _result_ = new ZPP_Set_ZPP_Body_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Set_ZPP_Body_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","free",0x274eec26,"zpp_nape.util.ZPP_Set_ZPP_Body.free","zpp_nape/util/RBTree.hx",202,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		this->data = null();
		HX_STACK_LINE(204)
		this->lt = null();
		HX_STACK_LINE(205)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,free,(void))

Void ZPP_Set_ZPP_Body_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","alloc",0x58ccdfbb,"zpp_nape.util.ZPP_Set_ZPP_Body.alloc","zpp_nape/util/RBTree.hx",209,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,alloc,(void))

bool ZPP_Set_ZPP_Body_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","verify",0xbc1a2573,"zpp_nape.util.ZPP_Set_ZPP_Body.verify","zpp_nape/util/RBTree.hx",218,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(228)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		if ((tmp1)){
			HX_STACK_LINE(229)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(230)
			while((true)){
				HX_STACK_LINE(230)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(230)
				if ((tmp4)){
					HX_STACK_LINE(230)
					break;
				}
				HX_STACK_LINE(230)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(231)
			while((true)){
				HX_STACK_LINE(231)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(231)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(231)
				if ((tmp4)){
					HX_STACK_LINE(231)
					break;
				}
				HX_STACK_LINE(232)
				::zpp_nape::phys::ZPP_Body i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(234)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(244)
						bool tmp5 = this->empty();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(244)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(244)
						if ((tmp6)){
							HX_STACK_LINE(245)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(245)
							::zpp_nape::util::ZPP_Set_ZPP_Body set_ite1 = tmp7;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(246)
							while((true)){
								HX_STACK_LINE(246)
								bool tmp8 = (set_ite1->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(246)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(246)
								if ((tmp9)){
									HX_STACK_LINE(246)
									break;
								}
								HX_STACK_LINE(246)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(247)
							while((true)){
								HX_STACK_LINE(247)
								bool tmp8 = (set_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(247)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(247)
								if ((tmp9)){
									HX_STACK_LINE(247)
									break;
								}
								HX_STACK_LINE(248)
								::zpp_nape::phys::ZPP_Body j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(249)
								{
									HX_STACK_LINE(250)
									bool tmp10 = prei;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(250)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(250)
									if ((tmp11)){
										HX_STACK_LINE(251)
										::zpp_nape::phys::ZPP_Body tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(251)
										::zpp_nape::phys::ZPP_Body tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(251)
										bool tmp14 = this->lt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(251)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(251)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(251)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(251)
										if ((tmp16)){
											HX_STACK_LINE(251)
											::zpp_nape::phys::ZPP_Body tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(251)
											::zpp_nape::phys::ZPP_Body tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(251)
											::zpp_nape::phys::ZPP_Body tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(251)
											::zpp_nape::phys::ZPP_Body tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(251)
											tmp17 = this->lt(tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(251)
											tmp17 = false;
										}
										HX_STACK_LINE(251)
										if ((tmp17)){
											HX_STACK_LINE(251)
											return false;
										}
									}
									else{
										HX_STACK_LINE(253)
										bool tmp12 = (i == j);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(253)
										if ((tmp12)){
											HX_STACK_LINE(253)
											prei = false;
										}
										else{
											HX_STACK_LINE(255)
											::zpp_nape::phys::ZPP_Body tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(255)
											::zpp_nape::phys::ZPP_Body tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(255)
											bool tmp15 = this->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(255)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(255)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(255)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(255)
											if ((tmp17)){
												HX_STACK_LINE(255)
												::zpp_nape::phys::ZPP_Body tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(255)
												::zpp_nape::phys::ZPP_Body tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(255)
												::zpp_nape::phys::ZPP_Body tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(255)
												::zpp_nape::phys::ZPP_Body tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(255)
												tmp18 = this->lt(tmp21,tmp22);
											}
											else{
												HX_STACK_LINE(255)
												tmp18 = false;
											}
											HX_STACK_LINE(255)
											if ((tmp18)){
												HX_STACK_LINE(255)
												return false;
											}
										}
									}
								}
								HX_STACK_LINE(258)
								bool tmp10 = (set_ite1->next != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(258)
								if ((tmp10)){
									HX_STACK_LINE(259)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(260)
									while((true)){
										HX_STACK_LINE(260)
										bool tmp11 = (set_ite1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(260)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(260)
										if ((tmp12)){
											HX_STACK_LINE(260)
											break;
										}
										HX_STACK_LINE(260)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(263)
									while((true)){
										HX_STACK_LINE(263)
										bool tmp11 = (set_ite1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(263)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(263)
										if ((tmp11)){
											HX_STACK_LINE(263)
											::zpp_nape::util::ZPP_Set_ZPP_Body tmp13 = set_ite1;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(263)
											::zpp_nape::util::ZPP_Set_ZPP_Body tmp14 = set_ite1->parent->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(263)
											::zpp_nape::util::ZPP_Set_ZPP_Body tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(263)
											tmp12 = (tmp13 == tmp15);
										}
										else{
											HX_STACK_LINE(263)
											tmp12 = false;
										}
										HX_STACK_LINE(263)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(263)
										if ((tmp13)){
											HX_STACK_LINE(263)
											break;
										}
										HX_STACK_LINE(263)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(264)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(270)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(270)
				if ((tmp5)){
					HX_STACK_LINE(271)
					set_ite = set_ite->next;
					HX_STACK_LINE(272)
					while((true)){
						HX_STACK_LINE(272)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(272)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(272)
						if ((tmp7)){
							HX_STACK_LINE(272)
							break;
						}
						HX_STACK_LINE(272)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(275)
					while((true)){
						HX_STACK_LINE(275)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(275)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(275)
						if ((tmp6)){
							HX_STACK_LINE(275)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(275)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(275)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(275)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(275)
							tmp7 = false;
						}
						HX_STACK_LINE(275)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(275)
						if ((tmp8)){
							HX_STACK_LINE(275)
							break;
						}
						HX_STACK_LINE(275)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(276)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(281)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,verify,return )

bool ZPP_Set_ZPP_Body_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","empty",0xa71375d3,"zpp_nape.util.ZPP_Set_ZPP_Body.empty","zpp_nape/util/RBTree.hx",283,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,empty,return )

bool ZPP_Set_ZPP_Body_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","singular",0xd7693d51,"zpp_nape.util.ZPP_Set_ZPP_Body.singular","zpp_nape/util/RBTree.hx",286,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(287)
	if ((tmp2)){
		HX_STACK_LINE(287)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp7 = tmp6->prev;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		tmp3 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(287)
		tmp3 = false;
	}
	HX_STACK_LINE(287)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(287)
	if ((tmp3)){
		HX_STACK_LINE(287)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp7 = tmp6->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(287)
		tmp4 = false;
	}
	HX_STACK_LINE(287)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,singular,return )

int ZPP_Set_ZPP_Body_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","size",0x2fdff03b,"zpp_nape.util.ZPP_Set_ZPP_Body.size","zpp_nape/util/RBTree.hx",289,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(300)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		if ((tmp1)){
			HX_STACK_LINE(301)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(301)
			::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(302)
			while((true)){
				HX_STACK_LINE(302)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(302)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(302)
				if ((tmp4)){
					HX_STACK_LINE(302)
					break;
				}
				HX_STACK_LINE(302)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(303)
			while((true)){
				HX_STACK_LINE(303)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(303)
				if ((tmp4)){
					HX_STACK_LINE(303)
					break;
				}
				HX_STACK_LINE(304)
				::zpp_nape::phys::ZPP_Body i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(305)
				(ret)++;
				HX_STACK_LINE(306)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(306)
				if ((tmp5)){
					HX_STACK_LINE(307)
					set_ite = set_ite->next;
					HX_STACK_LINE(308)
					while((true)){
						HX_STACK_LINE(308)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(308)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(308)
						if ((tmp7)){
							HX_STACK_LINE(308)
							break;
						}
						HX_STACK_LINE(308)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(311)
					while((true)){
						HX_STACK_LINE(311)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(311)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(311)
						if ((tmp6)){
							HX_STACK_LINE(311)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(311)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(311)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(311)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(311)
							tmp7 = false;
						}
						HX_STACK_LINE(311)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(311)
						if ((tmp8)){
							HX_STACK_LINE(311)
							break;
						}
						HX_STACK_LINE(311)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(312)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(317)
	int tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,size,return )

bool ZPP_Set_ZPP_Body_obj::has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","has",0x3748fd20,"zpp_nape.util.ZPP_Set_ZPP_Body.has","zpp_nape/util/RBTree.hx",319,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(320)
	::zpp_nape::phys::ZPP_Body tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::find( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","find",0x27481fb3,"zpp_nape.util.ZPP_Set_ZPP_Body.find","zpp_nape/util/RBTree.hx",322,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(323)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(324)
	while((true)){
		HX_STACK_LINE(324)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		if ((tmp1)){
			HX_STACK_LINE(324)
			tmp2 = (cur->data != obj);
		}
		else{
			HX_STACK_LINE(324)
			tmp2 = false;
		}
		HX_STACK_LINE(324)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		if ((tmp3)){
			HX_STACK_LINE(324)
			break;
		}
		HX_STACK_LINE(325)
		::zpp_nape::phys::ZPP_Body tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(325)
		::zpp_nape::phys::ZPP_Body tmp5 = cur->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(325)
		bool tmp6 = this->lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(325)
		if ((tmp6)){
			HX_STACK_LINE(325)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(326)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(328)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,find,return )

bool ZPP_Set_ZPP_Body_obj::has_weak( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","has_weak",0x7b73e737,"zpp_nape.util.ZPP_Set_ZPP_Body.has_weak","zpp_nape/util/RBTree.hx",330,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(331)
	::zpp_nape::phys::ZPP_Body tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = this->find_weak(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(331)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::find_weak( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","find_weak",0x17cf8fc4,"zpp_nape.util.ZPP_Set_ZPP_Body.find_weak","zpp_nape/util/RBTree.hx",333,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(334)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(335)
	while((true)){
		HX_STACK_LINE(335)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		if ((tmp2)){
			HX_STACK_LINE(335)
			break;
		}
		HX_STACK_LINE(336)
		::zpp_nape::phys::ZPP_Body tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(336)
		::zpp_nape::phys::ZPP_Body tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(336)
		bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(336)
		if ((tmp5)){
			HX_STACK_LINE(336)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(337)
			::zpp_nape::phys::ZPP_Body tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			::zpp_nape::phys::ZPP_Body tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(337)
			if ((tmp8)){
				HX_STACK_LINE(337)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(338)
				break;
			}
		}
	}
	HX_STACK_LINE(340)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,find_weak,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::lower_bound( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","lower_bound",0x4de6dc06,"zpp_nape.util.ZPP_Set_ZPP_Body.lower_bound","zpp_nape/util/RBTree.hx",342,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(343)
	::zpp_nape::phys::ZPP_Body tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(344)
		::zpp_nape::phys::ZPP_Body ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(354)
			bool tmp1 = this->empty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(354)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(354)
			if ((tmp2)){
				HX_STACK_LINE(355)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(355)
				::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = tmp3;		HX_STACK_VAR(set_ite,"set_ite");
				HX_STACK_LINE(356)
				while((true)){
					HX_STACK_LINE(356)
					bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(356)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(356)
					if ((tmp5)){
						HX_STACK_LINE(356)
						break;
					}
					HX_STACK_LINE(356)
					set_ite = set_ite->prev;
				}
				HX_STACK_LINE(357)
				while((true)){
					HX_STACK_LINE(357)
					bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(357)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(357)
					if ((tmp5)){
						HX_STACK_LINE(357)
						break;
					}
					HX_STACK_LINE(358)
					::zpp_nape::phys::ZPP_Body elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(360)
						::zpp_nape::phys::ZPP_Body tmp6 = elt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(360)
						::zpp_nape::phys::ZPP_Body tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(360)
						bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(360)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(360)
						if ((tmp9)){
							HX_STACK_LINE(361)
							ret = elt;
							HX_STACK_LINE(362)
							break;
						}
					}
					HX_STACK_LINE(365)
					bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(365)
					if ((tmp6)){
						HX_STACK_LINE(366)
						set_ite = set_ite->next;
						HX_STACK_LINE(367)
						while((true)){
							HX_STACK_LINE(367)
							bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(367)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(367)
							if ((tmp8)){
								HX_STACK_LINE(367)
								break;
							}
							HX_STACK_LINE(367)
							set_ite = set_ite->prev;
						}
					}
					else{
						HX_STACK_LINE(370)
						while((true)){
							HX_STACK_LINE(370)
							bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(370)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(370)
							if ((tmp7)){
								HX_STACK_LINE(370)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(370)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(370)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(370)
								tmp8 = (tmp9 == tmp11);
							}
							else{
								HX_STACK_LINE(370)
								tmp8 = false;
							}
							HX_STACK_LINE(370)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(370)
							if ((tmp9)){
								HX_STACK_LINE(370)
								break;
							}
							HX_STACK_LINE(370)
							set_ite = set_ite->parent;
						}
						HX_STACK_LINE(371)
						set_ite = set_ite->parent;
					}
				}
			}
		}
		HX_STACK_LINE(376)
		tmp = ret;
	}
	HX_STACK_LINE(343)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,lower_bound,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","first",0x37d6b376,"zpp_nape.util.ZPP_Set_ZPP_Body.first","zpp_nape/util/RBTree.hx",379,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(388)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(389)
	while((true)){
		HX_STACK_LINE(389)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(389)
		if ((tmp2)){
			HX_STACK_LINE(389)
			break;
		}
		HX_STACK_LINE(389)
		cur = cur->prev;
	}
	HX_STACK_LINE(390)
	::zpp_nape::phys::ZPP_Body tmp1 = cur->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(390)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,first,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","pop_front",0x04561681,"zpp_nape.util.ZPP_Set_ZPP_Body.pop_front","zpp_nape/util/RBTree.hx",392,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(402)
	while((true)){
		HX_STACK_LINE(402)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(402)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		if ((tmp2)){
			HX_STACK_LINE(402)
			break;
		}
		HX_STACK_LINE(402)
		cur = cur->prev;
	}
	HX_STACK_LINE(403)
	::zpp_nape::phys::ZPP_Body ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(404)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	this->remove_node(tmp1);
	HX_STACK_LINE(405)
	::zpp_nape::phys::ZPP_Body tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,pop_front,return )

Void ZPP_Set_ZPP_Body_obj::remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","remove",0x1f633e3e,"zpp_nape.util.ZPP_Set_ZPP_Body.remove","zpp_nape/util/RBTree.hx",407,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(408)
		::zpp_nape::phys::ZPP_Body tmp = obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		::zpp_nape::util::ZPP_Set_ZPP_Body node = tmp1;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(417)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(417)
		this->remove_node(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","successor_node",0xd99a5a75,"zpp_nape.util.ZPP_Set_ZPP_Body.successor_node","zpp_nape/util/RBTree.hx",419,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(428)
	bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	if ((tmp)){
		HX_STACK_LINE(429)
		cur = cur->next;
		HX_STACK_LINE(430)
		while((true)){
			HX_STACK_LINE(430)
			bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(430)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(430)
			if ((tmp2)){
				HX_STACK_LINE(430)
				break;
			}
			HX_STACK_LINE(430)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(433)
		::zpp_nape::util::ZPP_Set_ZPP_Body pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(434)
		cur = cur->parent;
		HX_STACK_LINE(435)
		while((true)){
			HX_STACK_LINE(435)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(435)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(435)
			if ((tmp1)){
				HX_STACK_LINE(435)
				tmp2 = (cur->prev != pre);
			}
			else{
				HX_STACK_LINE(435)
				tmp2 = false;
			}
			HX_STACK_LINE(435)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(435)
			if ((tmp3)){
				HX_STACK_LINE(435)
				break;
			}
			HX_STACK_LINE(436)
			pre = cur;
			HX_STACK_LINE(437)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(440)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","predecessor_node",0xe553e4f2,"zpp_nape.util.ZPP_Set_ZPP_Body.predecessor_node","zpp_nape/util/RBTree.hx",442,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(451)
	bool tmp = (cur->prev != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(451)
	if ((tmp)){
		HX_STACK_LINE(452)
		cur = cur->prev;
		HX_STACK_LINE(453)
		while((true)){
			HX_STACK_LINE(453)
			bool tmp1 = (cur->next != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(453)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(453)
			if ((tmp2)){
				HX_STACK_LINE(453)
				break;
			}
			HX_STACK_LINE(453)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(456)
		::zpp_nape::util::ZPP_Set_ZPP_Body pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(457)
		cur = cur->parent;
		HX_STACK_LINE(458)
		while((true)){
			HX_STACK_LINE(458)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(458)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			if ((tmp1)){
				HX_STACK_LINE(458)
				tmp2 = (cur->next != pre);
			}
			else{
				HX_STACK_LINE(458)
				tmp2 = false;
			}
			HX_STACK_LINE(458)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			if ((tmp3)){
				HX_STACK_LINE(458)
				break;
			}
			HX_STACK_LINE(459)
			pre = cur;
			HX_STACK_LINE(460)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(463)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,predecessor_node,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::successor( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","successor",0xbe7513ec,"zpp_nape.util.ZPP_Set_ZPP_Body.successor","zpp_nape/util/RBTree.hx",465,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(474)
	::zpp_nape::phys::ZPP_Body tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(474)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(474)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(474)
	::zpp_nape::util::ZPP_Set_ZPP_Body node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(475)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(475)
	::zpp_nape::phys::ZPP_Body tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(475)
	if ((tmp3)){
		HX_STACK_LINE(475)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(475)
		tmp4 = node->data;
	}
	HX_STACK_LINE(475)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,successor,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::predecessor( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","predecessor",0xbdc19a8f,"zpp_nape.util.ZPP_Set_ZPP_Body.predecessor","zpp_nape/util/RBTree.hx",477,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(486)
	::zpp_nape::phys::ZPP_Body tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->predecessor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_Set_ZPP_Body node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(487)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(487)
	::zpp_nape::phys::ZPP_Body tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(487)
	if ((tmp3)){
		HX_STACK_LINE(487)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(487)
		tmp4 = node->data;
	}
	HX_STACK_LINE(487)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,predecessor,return )

Void ZPP_Set_ZPP_Body_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","remove_node",0x205786e3,"zpp_nape.util.ZPP_Set_ZPP_Body.remove_node","zpp_nape/util/RBTree.hx",489,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(498)
		bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(498)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(498)
		if ((tmp)){
			HX_STACK_LINE(498)
			tmp1 = (cur->prev != null());
		}
		else{
			HX_STACK_LINE(498)
			tmp1 = false;
		}
		HX_STACK_LINE(498)
		if ((tmp1)){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZPP_Set_ZPP_Body sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(500)
			while((true)){
				HX_STACK_LINE(500)
				bool tmp2 = (sm->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(500)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(500)
				if ((tmp3)){
					HX_STACK_LINE(500)
					break;
				}
				HX_STACK_LINE(500)
				sm = sm->prev;
			}
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(502)
				::zpp_nape::phys::ZPP_Body t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(503)
				cur->data = sm->data;
				HX_STACK_LINE(504)
				sm->data = t;
			}
			HX_STACK_LINE(506)
			Dynamic tmp2 = this->swapped_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(506)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(506)
			if ((tmp3)){
				HX_STACK_LINE(506)
				::zpp_nape::phys::ZPP_Body tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(506)
				::zpp_nape::phys::ZPP_Body tmp5 = sm->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(506)
				this->swapped(tmp4,tmp5);
			}
			HX_STACK_LINE(507)
			cur = sm;
		}
		HX_STACK_LINE(517)
		bool tmp2 = (cur->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(517)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(517)
		if ((tmp2)){
			HX_STACK_LINE(517)
			tmp3 = cur->next;
		}
		else{
			HX_STACK_LINE(517)
			tmp3 = cur->prev;
		}
		HX_STACK_LINE(517)
		::zpp_nape::util::ZPP_Set_ZPP_Body child = tmp3;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(518)
		bool tmp4 = (cur->colour == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(518)
		if ((tmp4)){
			HX_STACK_LINE(519)
			bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(519)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(519)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(519)
			if ((tmp6)){
				HX_STACK_LINE(519)
				tmp7 = (cur->next != null());
			}
			else{
				HX_STACK_LINE(519)
				tmp7 = true;
			}
			HX_STACK_LINE(519)
			if ((tmp7)){
				HX_STACK_LINE(519)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(520)
				bool tmp8 = (cur->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(520)
				if ((tmp8)){
					HX_STACK_LINE(521)
					::zpp_nape::util::ZPP_Set_ZPP_Body parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(522)
					while((true)){
						HX_STACK_LINE(523)
						(parent->colour)++;
						HX_STACK_LINE(524)
						(parent->prev->colour)--;
						HX_STACK_LINE(525)
						(parent->next->colour)--;
						HX_STACK_LINE(526)
						{
							HX_STACK_LINE(527)
							::zpp_nape::util::ZPP_Set_ZPP_Body child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(528)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(528)
							if ((tmp9)){
								HX_STACK_LINE(529)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(529)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(530)
								break;
							}
							else{
								HX_STACK_LINE(532)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(532)
								if ((tmp10)){
									HX_STACK_LINE(533)
									{
										HX_STACK_LINE(534)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(534)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(534)
										if ((tmp11)){
											HX_STACK_LINE(534)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(534)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(534)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(534)
											tmp12 = false;
										}
										HX_STACK_LINE(534)
										if ((tmp12)){
											HX_STACK_LINE(535)
											::zpp_nape::util::ZPP_Set_ZPP_Body tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(535)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(536)
											break;
										}
									}
									HX_STACK_LINE(539)
									{
										HX_STACK_LINE(540)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(540)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(540)
										if ((tmp11)){
											HX_STACK_LINE(540)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(540)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(540)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(540)
											tmp12 = false;
										}
										HX_STACK_LINE(540)
										if ((tmp12)){
											HX_STACK_LINE(541)
											::zpp_nape::util::ZPP_Set_ZPP_Body tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(541)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(542)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(548)
							::zpp_nape::util::ZPP_Set_ZPP_Body child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(549)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(549)
							if ((tmp9)){
								HX_STACK_LINE(550)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(550)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(551)
								break;
							}
							else{
								HX_STACK_LINE(553)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(553)
								if ((tmp10)){
									HX_STACK_LINE(554)
									{
										HX_STACK_LINE(555)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(555)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(555)
										if ((tmp11)){
											HX_STACK_LINE(555)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(555)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(555)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(555)
											tmp12 = false;
										}
										HX_STACK_LINE(555)
										if ((tmp12)){
											HX_STACK_LINE(556)
											::zpp_nape::util::ZPP_Set_ZPP_Body tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(556)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(557)
											break;
										}
									}
									HX_STACK_LINE(560)
									{
										HX_STACK_LINE(561)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(561)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(561)
										if ((tmp11)){
											HX_STACK_LINE(561)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(561)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(561)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(561)
											tmp12 = false;
										}
										HX_STACK_LINE(561)
										if ((tmp12)){
											HX_STACK_LINE(562)
											::zpp_nape::util::ZPP_Set_ZPP_Body tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(562)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(563)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(568)
						bool tmp9 = (parent->colour == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(568)
						if ((tmp9)){
							HX_STACK_LINE(569)
							bool tmp10 = (parent->parent == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(569)
							if ((tmp10)){
								HX_STACK_LINE(570)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(573)
								parent = parent->parent;
								HX_STACK_LINE(574)
								continue;
							}
						}
						HX_STACK_LINE(577)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(582)
			::zpp_nape::util::ZPP_Set_ZPP_Body par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(583)
			bool tmp5 = (par == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			if ((tmp5)){
				HX_STACK_LINE(584)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(586)
				bool tmp6 = (par->prev == cur);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(586)
				if ((tmp6)){
					HX_STACK_LINE(586)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(587)
					par->next = child;
				}
			}
			HX_STACK_LINE(588)
			bool tmp6 = (child != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(588)
			if ((tmp6)){
				HX_STACK_LINE(588)
				child->parent = par;
			}
		}
		HX_STACK_LINE(590)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp5 = cur->next = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(590)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp6 = cur->prev = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(590)
		cur->parent = tmp6;
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(592)
			::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				o->data = null();
				HX_STACK_LINE(601)
				o->lt = null();
				HX_STACK_LINE(601)
				o->swapped = null();
			}
			HX_STACK_LINE(602)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(602)
			o->next = tmp7;
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,remove_node,(void))

Void ZPP_Set_ZPP_Body_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","clear",0x7f94acd3,"zpp_nape.util.ZPP_Set_ZPP_Body.clear","zpp_nape/util/RBTree.hx",610,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(610)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(610)
		if ((tmp1)){
			HX_STACK_LINE(610)
			Dynamic();
		}
		else{
			HX_STACK_LINE(610)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(610)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(610)
			while((true)){
				HX_STACK_LINE(610)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(610)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(610)
				if ((tmp4)){
					HX_STACK_LINE(610)
					break;
				}
				HX_STACK_LINE(610)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(610)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(610)
				if ((tmp5)){
					HX_STACK_LINE(610)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(610)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(610)
					if ((tmp7)){
						HX_STACK_LINE(610)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(610)
						::zpp_nape::phys::ZPP_Body tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(610)
						::zpp_nape::util::ZPP_Set_ZPP_Body ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(610)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(610)
						if ((tmp9)){
							HX_STACK_LINE(610)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(610)
							if ((tmp10)){
								HX_STACK_LINE(610)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(610)
								ret->next = null();
							}
							HX_STACK_LINE(610)
							cur->parent = null();
						}
						HX_STACK_LINE(610)
						{
							HX_STACK_LINE(610)
							::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(610)
							{
								HX_STACK_LINE(610)
								o->data = null();
								HX_STACK_LINE(610)
								o->lt = null();
								HX_STACK_LINE(610)
								o->swapped = null();
							}
							HX_STACK_LINE(610)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(610)
							o->next = tmp10;
							HX_STACK_LINE(610)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(610)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(610)
				cur = tmp6;
			}
			HX_STACK_LINE(610)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,clear,(void))

Void ZPP_Set_ZPP_Body_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","clear_with",0x49528832,"zpp_nape.util.ZPP_Set_ZPP_Body.clear_with","zpp_nape/util/RBTree.hx",613,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(614)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		if ((tmp1)){
			HX_STACK_LINE(614)
			return null();
		}
		else{
			HX_STACK_LINE(616)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(617)
			while((true)){
				HX_STACK_LINE(617)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(617)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(617)
				if ((tmp4)){
					HX_STACK_LINE(617)
					break;
				}
				HX_STACK_LINE(617)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(617)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(617)
				if ((tmp5)){
					HX_STACK_LINE(617)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(617)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(617)
					if ((tmp7)){
						HX_STACK_LINE(617)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(617)
						::zpp_nape::phys::ZPP_Body tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(617)
						lambda(tmp8).Cast< Void >();
						HX_STACK_LINE(617)
						::zpp_nape::util::ZPP_Set_ZPP_Body ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(617)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(617)
						if ((tmp9)){
							HX_STACK_LINE(617)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(617)
							if ((tmp10)){
								HX_STACK_LINE(617)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(617)
								ret->next = null();
							}
							HX_STACK_LINE(617)
							cur->parent = null();
						}
						HX_STACK_LINE(617)
						{
							HX_STACK_LINE(617)
							::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(617)
							{
								HX_STACK_LINE(617)
								o->data = null();
								HX_STACK_LINE(617)
								o->lt = null();
								HX_STACK_LINE(617)
								o->swapped = null();
							}
							HX_STACK_LINE(617)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(617)
							o->next = tmp10;
							HX_STACK_LINE(617)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(617)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(617)
				cur = tmp6;
			}
			HX_STACK_LINE(618)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_Body node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","clear_node",0x43641c2e,"zpp_nape.util.ZPP_Set_ZPP_Body.clear_node","zpp_nape/util/RBTree.hx",622,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(631)
	::zpp_nape::phys::ZPP_Body tmp = node->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(631)
	lambda(tmp).Cast< Void >();
	HX_STACK_LINE(632)
	::zpp_nape::util::ZPP_Set_ZPP_Body ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(633)
	bool tmp1 = (ret != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	if ((tmp1)){
		HX_STACK_LINE(634)
		bool tmp2 = (node == ret->prev);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(634)
		if ((tmp2)){
			HX_STACK_LINE(634)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(635)
			ret->next = null();
		}
		HX_STACK_LINE(636)
		node->parent = null();
	}
	HX_STACK_LINE(638)
	{
		HX_STACK_LINE(639)
		::zpp_nape::util::ZPP_Set_ZPP_Body o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(648)
		{
			HX_STACK_LINE(648)
			o->data = null();
			HX_STACK_LINE(648)
			o->lt = null();
			HX_STACK_LINE(648)
			o->swapped = null();
		}
		HX_STACK_LINE(649)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		o->next = tmp2;
		HX_STACK_LINE(650)
		::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
	}
	HX_STACK_LINE(655)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(655)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_Body_obj,clear_node,return )

Void ZPP_Set_ZPP_Body_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_Body negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","__fix_neg_red",0x519f011e,"zpp_nape.util.ZPP_Set_ZPP_Body.__fix_neg_red","zpp_nape/util/RBTree.hx",657,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(658)
		::zpp_nape::util::ZPP_Set_ZPP_Body parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(659)
		bool tmp = (parent->prev == negred);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(659)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(659)
		if ((tmp)){
			HX_STACK_LINE(660)
			::zpp_nape::util::ZPP_Set_ZPP_Body nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(661)
			::zpp_nape::util::ZPP_Set_ZPP_Body nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(662)
			::zpp_nape::util::ZPP_Set_ZPP_Body trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(663)
			::zpp_nape::util::ZPP_Set_ZPP_Body trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(664)
			nl->colour = (int)0;
			HX_STACK_LINE(665)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(665)
			negred->colour = tmp2;
			HX_STACK_LINE(666)
			{
				HX_STACK_LINE(667)
				negred->next = trl;
				HX_STACK_LINE(668)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(668)
				if ((tmp3)){
					HX_STACK_LINE(668)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(670)
			{
				HX_STACK_LINE(671)
				::zpp_nape::phys::ZPP_Body t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(672)
				parent->data = nr->data;
				HX_STACK_LINE(673)
				nr->data = t;
			}
			HX_STACK_LINE(675)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(675)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(675)
			if ((tmp4)){
				HX_STACK_LINE(675)
				::zpp_nape::phys::ZPP_Body tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(675)
				::zpp_nape::phys::ZPP_Body tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(675)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(676)
			{
				HX_STACK_LINE(677)
				nr->prev = trr;
				HX_STACK_LINE(678)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(678)
				if ((tmp5)){
					HX_STACK_LINE(678)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(680)
			{
				HX_STACK_LINE(681)
				nr->next = parent->next;
				HX_STACK_LINE(682)
				bool tmp5 = (parent->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(682)
				if ((tmp5)){
					HX_STACK_LINE(682)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(684)
			{
				HX_STACK_LINE(685)
				parent->next = nr;
				HX_STACK_LINE(686)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(686)
				if ((tmp5)){
					HX_STACK_LINE(686)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(688)
			tmp1 = nl;
		}
		else{
			HX_STACK_LINE(691)
			::zpp_nape::util::ZPP_Set_ZPP_Body nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(692)
			::zpp_nape::util::ZPP_Set_ZPP_Body nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(693)
			::zpp_nape::util::ZPP_Set_ZPP_Body trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(694)
			::zpp_nape::util::ZPP_Set_ZPP_Body trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(695)
			nl->colour = (int)0;
			HX_STACK_LINE(696)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(696)
			negred->colour = tmp2;
			HX_STACK_LINE(697)
			{
				HX_STACK_LINE(698)
				negred->prev = trl;
				HX_STACK_LINE(699)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(699)
				if ((tmp3)){
					HX_STACK_LINE(699)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(701)
			{
				HX_STACK_LINE(702)
				::zpp_nape::phys::ZPP_Body t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(703)
				parent->data = nr->data;
				HX_STACK_LINE(704)
				nr->data = t;
			}
			HX_STACK_LINE(706)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(706)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(706)
			if ((tmp4)){
				HX_STACK_LINE(706)
				::zpp_nape::phys::ZPP_Body tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(706)
				::zpp_nape::phys::ZPP_Body tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(706)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(707)
			{
				HX_STACK_LINE(708)
				nr->next = trr;
				HX_STACK_LINE(709)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(709)
				if ((tmp5)){
					HX_STACK_LINE(709)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(711)
			{
				HX_STACK_LINE(712)
				nr->prev = parent->prev;
				HX_STACK_LINE(713)
				bool tmp5 = (parent->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(713)
				if ((tmp5)){
					HX_STACK_LINE(713)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(716)
				parent->prev = nr;
				HX_STACK_LINE(717)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(717)
				if ((tmp5)){
					HX_STACK_LINE(717)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(719)
			tmp1 = nl;
		}
		HX_STACK_LINE(659)
		::zpp_nape::util::ZPP_Set_ZPP_Body child = tmp1;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(721)
		bool tmp2 = (child->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(721)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(721)
		if ((tmp2)){
			HX_STACK_LINE(721)
			int tmp4 = child->prev->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(721)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(721)
			tmp3 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(721)
			tmp3 = false;
		}
		HX_STACK_LINE(721)
		if ((tmp3)){
			HX_STACK_LINE(721)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = child->prev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(721)
			this->__fix_dbl_red(tmp4);
		}
		else{
			HX_STACK_LINE(722)
			bool tmp4 = (child->next != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(722)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(722)
			if ((tmp4)){
				HX_STACK_LINE(722)
				int tmp6 = child->next->colour;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(722)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(722)
				tmp5 = (tmp7 == (int)0);
			}
			else{
				HX_STACK_LINE(722)
				tmp5 = false;
			}
			HX_STACK_LINE(722)
			if ((tmp5)){
				HX_STACK_LINE(722)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp6 = child->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(722)
				this->__fix_dbl_red(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_Body_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_Body x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","__fix_dbl_red",0x5fb72efc,"zpp_nape.util.ZPP_Set_ZPP_Body.__fix_dbl_red","zpp_nape/util/RBTree.hx",725,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(725)
		while((true)){
			HX_STACK_LINE(726)
			::zpp_nape::util::ZPP_Set_ZPP_Body par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(727)
			::zpp_nape::util::ZPP_Set_ZPP_Body g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(728)
			bool tmp = (g == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(728)
			if ((tmp)){
				HX_STACK_LINE(729)
				par->colour = (int)1;
				HX_STACK_LINE(730)
				break;
			}
			HX_STACK_LINE(732)
			::zpp_nape::util::ZPP_Set_ZPP_Body n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(732)
			::zpp_nape::util::ZPP_Set_ZPP_Body n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(732)
			::zpp_nape::util::ZPP_Set_ZPP_Body n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(732)
			::zpp_nape::util::ZPP_Set_ZPP_Body t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(732)
			::zpp_nape::util::ZPP_Set_ZPP_Body t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(732)
			::zpp_nape::util::ZPP_Set_ZPP_Body t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(732)
			::zpp_nape::util::ZPP_Set_ZPP_Body t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(733)
			bool tmp1 = (par == g->prev);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(733)
			if ((tmp1)){
				HX_STACK_LINE(734)
				n3 = g;
				HX_STACK_LINE(735)
				t4 = g->next;
				HX_STACK_LINE(736)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(736)
				if ((tmp2)){
					HX_STACK_LINE(737)
					n1 = x;
					HX_STACK_LINE(738)
					n2 = par;
					HX_STACK_LINE(739)
					t1 = x->prev;
					HX_STACK_LINE(740)
					t2 = x->next;
					HX_STACK_LINE(741)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(744)
					n1 = par;
					HX_STACK_LINE(745)
					n2 = x;
					HX_STACK_LINE(746)
					t1 = par->prev;
					HX_STACK_LINE(747)
					t2 = x->prev;
					HX_STACK_LINE(748)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(752)
				n1 = g;
				HX_STACK_LINE(753)
				t1 = g->prev;
				HX_STACK_LINE(754)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(754)
				if ((tmp2)){
					HX_STACK_LINE(755)
					n2 = x;
					HX_STACK_LINE(756)
					n3 = par;
					HX_STACK_LINE(757)
					t2 = x->prev;
					HX_STACK_LINE(758)
					t3 = x->next;
					HX_STACK_LINE(759)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(762)
					n2 = par;
					HX_STACK_LINE(763)
					n3 = x;
					HX_STACK_LINE(764)
					t2 = par->prev;
					HX_STACK_LINE(765)
					t3 = x->prev;
					HX_STACK_LINE(766)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(769)
			{
				HX_STACK_LINE(770)
				::zpp_nape::util::ZPP_Set_ZPP_Body par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(771)
				bool tmp2 = (par1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(771)
				if ((tmp2)){
					HX_STACK_LINE(772)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(774)
					bool tmp3 = (par1->prev == g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(774)
					if ((tmp3)){
						HX_STACK_LINE(774)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(775)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(776)
				bool tmp3 = (n2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(776)
				if ((tmp3)){
					HX_STACK_LINE(776)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(779)
				n1->prev = t1;
				HX_STACK_LINE(780)
				bool tmp2 = (t1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(780)
				if ((tmp2)){
					HX_STACK_LINE(780)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(782)
			{
				HX_STACK_LINE(783)
				n1->next = t2;
				HX_STACK_LINE(784)
				bool tmp2 = (t2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(784)
				if ((tmp2)){
					HX_STACK_LINE(784)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(787)
				n2->prev = n1;
				HX_STACK_LINE(788)
				bool tmp2 = (n1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(788)
				if ((tmp2)){
					HX_STACK_LINE(788)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(791)
				n2->next = n3;
				HX_STACK_LINE(792)
				bool tmp2 = (n3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(792)
				if ((tmp2)){
					HX_STACK_LINE(792)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(794)
			{
				HX_STACK_LINE(795)
				n3->prev = t3;
				HX_STACK_LINE(796)
				bool tmp2 = (t3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(796)
				if ((tmp2)){
					HX_STACK_LINE(796)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(798)
			{
				HX_STACK_LINE(799)
				n3->next = t4;
				HX_STACK_LINE(800)
				bool tmp2 = (t4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(800)
				if ((tmp2)){
					HX_STACK_LINE(800)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(802)
			int tmp2 = (g->colour - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(802)
			n2->colour = tmp2;
			HX_STACK_LINE(803)
			n1->colour = (int)1;
			HX_STACK_LINE(804)
			n3->colour = (int)1;
			HX_STACK_LINE(805)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(805)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(805)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(805)
			if ((tmp5)){
				HX_STACK_LINE(805)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(805)
				tmp6->colour = (int)1;
			}
			else{
				HX_STACK_LINE(806)
				bool tmp6 = (n2->colour == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(806)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(806)
				if ((tmp6)){
					HX_STACK_LINE(806)
					int tmp8 = n2->parent->colour;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(806)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(806)
					tmp7 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(806)
					tmp7 = false;
				}
				HX_STACK_LINE(806)
				if ((tmp7)){
					HX_STACK_LINE(807)
					x = n2;
					HX_STACK_LINE(808)
					continue;
				}
			}
			HX_STACK_LINE(810)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_Body_obj::try_insert_bool( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","try_insert_bool",0x91eee0b2,"zpp_nape.util.ZPP_Set_ZPP_Body.try_insert_bool","zpp_nape/util/RBTree.hx",813,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(814)
	::zpp_nape::util::ZPP_Set_ZPP_Body x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(815)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(816)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(816)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(816)
	if ((tmp1)){
		HX_STACK_LINE(817)
		{
			HX_STACK_LINE(818)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(818)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(818)
			if ((tmp3)){
				HX_STACK_LINE(819)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(819)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(825)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(825)
				x = tmp4;
				HX_STACK_LINE(826)
				::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
				HX_STACK_LINE(827)
				x->next = null();
			}
			HX_STACK_LINE(832)
			Dynamic();
		}
		HX_STACK_LINE(834)
		x->data = obj;
		HX_STACK_LINE(835)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(838)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(838)
		cur = tmp2;
		HX_STACK_LINE(839)
		while((true)){
			HX_STACK_LINE(840)
			::zpp_nape::phys::ZPP_Body tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(840)
			::zpp_nape::phys::ZPP_Body tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(840)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(840)
			if ((tmp5)){
				HX_STACK_LINE(841)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(841)
				if ((tmp6)){
					HX_STACK_LINE(842)
					{
						HX_STACK_LINE(843)
						::zpp_nape::util::ZPP_Set_ZPP_Body tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(843)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(843)
						if ((tmp8)){
							HX_STACK_LINE(844)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(844)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(850)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(850)
							x = tmp9;
							HX_STACK_LINE(851)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
							HX_STACK_LINE(852)
							x->next = null();
						}
						HX_STACK_LINE(857)
						Dynamic();
					}
					HX_STACK_LINE(859)
					x->data = obj;
					HX_STACK_LINE(860)
					cur->prev = x;
					HX_STACK_LINE(861)
					x->parent = cur;
					HX_STACK_LINE(862)
					break;
				}
				else{
					HX_STACK_LINE(864)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(866)
				::zpp_nape::phys::ZPP_Body tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(866)
				::zpp_nape::phys::ZPP_Body tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(866)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(866)
				if ((tmp8)){
					HX_STACK_LINE(867)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(867)
					if ((tmp9)){
						HX_STACK_LINE(868)
						{
							HX_STACK_LINE(869)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(869)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(869)
							if ((tmp11)){
								HX_STACK_LINE(870)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(870)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(876)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(876)
								x = tmp12;
								HX_STACK_LINE(877)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
								HX_STACK_LINE(878)
								x->next = null();
							}
							HX_STACK_LINE(883)
							Dynamic();
						}
						HX_STACK_LINE(885)
						x->data = obj;
						HX_STACK_LINE(886)
						cur->next = x;
						HX_STACK_LINE(887)
						x->parent = cur;
						HX_STACK_LINE(888)
						break;
					}
					else{
						HX_STACK_LINE(890)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(892)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(895)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(895)
	if ((tmp2)){
		HX_STACK_LINE(895)
		return false;
	}
	else{
		HX_STACK_LINE(897)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(897)
		if ((tmp3)){
			HX_STACK_LINE(897)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(899)
			x->colour = (int)0;
			HX_STACK_LINE(900)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(900)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(900)
			if ((tmp5)){
				HX_STACK_LINE(900)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(900)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(902)
		return true;
	}
	HX_STACK_LINE(895)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::try_insert( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","try_insert",0x2bd77ff7,"zpp_nape.util.ZPP_Set_ZPP_Body.try_insert","zpp_nape/util/RBTree.hx",905,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(906)
	::zpp_nape::util::ZPP_Set_ZPP_Body x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(907)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(908)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(908)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(908)
	if ((tmp1)){
		HX_STACK_LINE(909)
		{
			HX_STACK_LINE(910)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(910)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(910)
			if ((tmp3)){
				HX_STACK_LINE(911)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(911)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(917)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(917)
				x = tmp4;
				HX_STACK_LINE(918)
				::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
				HX_STACK_LINE(919)
				x->next = null();
			}
			HX_STACK_LINE(924)
			Dynamic();
		}
		HX_STACK_LINE(926)
		x->data = obj;
		HX_STACK_LINE(927)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(930)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(930)
		cur = tmp2;
		HX_STACK_LINE(931)
		while((true)){
			HX_STACK_LINE(932)
			::zpp_nape::phys::ZPP_Body tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(932)
			::zpp_nape::phys::ZPP_Body tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(932)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(932)
			if ((tmp5)){
				HX_STACK_LINE(933)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(933)
				if ((tmp6)){
					HX_STACK_LINE(934)
					{
						HX_STACK_LINE(935)
						::zpp_nape::util::ZPP_Set_ZPP_Body tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(935)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(935)
						if ((tmp8)){
							HX_STACK_LINE(936)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(936)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(942)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(942)
							x = tmp9;
							HX_STACK_LINE(943)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
							HX_STACK_LINE(944)
							x->next = null();
						}
						HX_STACK_LINE(949)
						Dynamic();
					}
					HX_STACK_LINE(951)
					x->data = obj;
					HX_STACK_LINE(952)
					cur->prev = x;
					HX_STACK_LINE(953)
					x->parent = cur;
					HX_STACK_LINE(954)
					break;
				}
				else{
					HX_STACK_LINE(956)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(958)
				::zpp_nape::phys::ZPP_Body tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(958)
				::zpp_nape::phys::ZPP_Body tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(958)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(958)
				if ((tmp8)){
					HX_STACK_LINE(959)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(959)
					if ((tmp9)){
						HX_STACK_LINE(960)
						{
							HX_STACK_LINE(961)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(961)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(961)
							if ((tmp11)){
								HX_STACK_LINE(962)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(962)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(968)
								::zpp_nape::util::ZPP_Set_ZPP_Body tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(968)
								x = tmp12;
								HX_STACK_LINE(969)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
								HX_STACK_LINE(970)
								x->next = null();
							}
							HX_STACK_LINE(975)
							Dynamic();
						}
						HX_STACK_LINE(977)
						x->data = obj;
						HX_STACK_LINE(978)
						cur->next = x;
						HX_STACK_LINE(979)
						x->parent = cur;
						HX_STACK_LINE(980)
						break;
					}
					else{
						HX_STACK_LINE(982)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(984)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(987)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(987)
	if ((tmp2)){
		HX_STACK_LINE(987)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp3 = cur;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(987)
		return tmp3;
	}
	else{
		HX_STACK_LINE(989)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(989)
		if ((tmp3)){
			HX_STACK_LINE(989)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(991)
			x->colour = (int)0;
			HX_STACK_LINE(992)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(992)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(992)
			if ((tmp5)){
				HX_STACK_LINE(992)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(992)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(994)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(994)
		return tmp4;
	}
	HX_STACK_LINE(987)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::insert( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_Body","insert",0xb8b7e533,"zpp_nape.util.ZPP_Set_ZPP_Body.insert","zpp_nape/util/RBTree.hx",997,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1006)
	::zpp_nape::util::ZPP_Set_ZPP_Body x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1007)
	{
		HX_STACK_LINE(1008)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1008)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1008)
		if ((tmp1)){
			HX_STACK_LINE(1009)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1009)
			x = tmp2;
		}
		else{
			HX_STACK_LINE(1015)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1015)
			x = tmp2;
			HX_STACK_LINE(1016)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
			HX_STACK_LINE(1017)
			x->next = null();
		}
		HX_STACK_LINE(1022)
		Dynamic();
	}
	HX_STACK_LINE(1024)
	x->data = obj;
	HX_STACK_LINE(1025)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1025)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1025)
	if ((tmp1)){
		HX_STACK_LINE(1025)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1027)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1027)
		::zpp_nape::util::ZPP_Set_ZPP_Body cur = tmp2;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1028)
		while((true)){
			HX_STACK_LINE(1029)
			::zpp_nape::phys::ZPP_Body tmp3 = x->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1029)
			::zpp_nape::phys::ZPP_Body tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1029)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1029)
			if ((tmp5)){
				HX_STACK_LINE(1030)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1030)
				if ((tmp6)){
					HX_STACK_LINE(1031)
					cur->prev = x;
					HX_STACK_LINE(1032)
					x->parent = cur;
					HX_STACK_LINE(1033)
					break;
				}
				else{
					HX_STACK_LINE(1035)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1038)
				bool tmp6 = (cur->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1038)
				if ((tmp6)){
					HX_STACK_LINE(1039)
					cur->next = x;
					HX_STACK_LINE(1040)
					x->parent = cur;
					HX_STACK_LINE(1041)
					break;
				}
				else{
					HX_STACK_LINE(1043)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(1047)
	bool tmp2 = (x->parent == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1047)
	if ((tmp2)){
		HX_STACK_LINE(1047)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(1049)
		x->colour = (int)0;
		HX_STACK_LINE(1050)
		int tmp3 = x->parent->colour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1050)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1050)
		if ((tmp4)){
			HX_STACK_LINE(1050)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1050)
			this->__fix_dbl_red(tmp5);
		}
	}
	HX_STACK_LINE(1060)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1060)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::zpp_pool;


ZPP_Set_ZPP_Body_obj::ZPP_Set_ZPP_Body_obj()
{
}

void ZPP_Set_ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_Body);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_Body_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { return lt; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
		if (HX_FIELD_EQ(inName,"verify") ) { return verify_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { return swapped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"singular") ) { return singular_dyn(); }
		if (HX_FIELD_EQ(inName,"has_weak") ) { return has_weak_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"find_weak") ) { return find_weak_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_front") ) { return pop_front_dyn(); }
		if (HX_FIELD_EQ(inName,"successor") ) { return successor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clear_with") ) { return clear_with_dyn(); }
		if (HX_FIELD_EQ(inName,"clear_node") ) { return clear_node_dyn(); }
		if (HX_FIELD_EQ(inName,"try_insert") ) { return try_insert_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lower_bound") ) { return lower_bound_dyn(); }
		if (HX_FIELD_EQ(inName,"predecessor") ) { return predecessor_dyn(); }
		if (HX_FIELD_EQ(inName,"remove_node") ) { return remove_node_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__fix_neg_red") ) { return __fix_neg_red_dyn(); }
		if (HX_FIELD_EQ(inName,"__fix_dbl_red") ) { return __fix_dbl_red_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"successor_node") ) { return successor_node_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"try_insert_bool") ) { return try_insert_bool_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"predecessor_node") ) { return predecessor_node_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Set_ZPP_Body_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Set_ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Set_ZPP_Body_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return true; }
	}
	return false;
}

void ZPP_Set_ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_Body_obj,lt),HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_Body_obj,swapped),HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Set_ZPP_Body_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_Body*/ ,(int)offsetof(ZPP_Set_ZPP_Body_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_Body*/ ,(int)offsetof(ZPP_Set_ZPP_Body_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_Body*/ ,(int)offsetof(ZPP_Set_ZPP_Body_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_Body_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_Body*/ ,(void *) &ZPP_Set_ZPP_Body_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("lt","\x88","\x5e","\x00","\x00"),
	HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"),
	HX_HCSTRING("verify","\x79","\x83","\x3f","\xa1"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("singular","\xd7","\xa8","\x26","\x57"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("find","\x39","\xd0","\xbb","\x43"),
	HX_HCSTRING("has_weak","\xbd","\x52","\x31","\xfb"),
	HX_HCSTRING("find_weak","\x7e","\x39","\xd0","\x5d"),
	HX_HCSTRING("lower_bound","\x40","\xe8","\xb0","\x94"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("pop_front","\x3b","\xc0","\x56","\x4a"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("successor_node","\x7b","\x2e","\xf6","\x81"),
	HX_HCSTRING("predecessor_node","\x78","\x46","\x51","\x3b"),
	HX_HCSTRING("successor","\xa6","\xbd","\x75","\x04"),
	HX_HCSTRING("predecessor","\xc9","\xa6","\x8b","\x04"),
	HX_HCSTRING("remove_node","\x1d","\x93","\x21","\x67"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clear_with","\x38","\x61","\xe6","\x43"),
	HX_HCSTRING("clear_node","\x34","\xf5","\xf7","\x3d"),
	HX_HCSTRING("__fix_neg_red","\xd8","\x0f","\x30","\x68"),
	HX_HCSTRING("__fix_dbl_red","\xb6","\x3d","\x48","\x76"),
	HX_HCSTRING("try_insert_bool","\xec","\x91","\xec","\x39"),
	HX_HCSTRING("try_insert","\xfd","\x58","\x6b","\x26"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Set_ZPP_Body_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Set_ZPP_Body_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Set_ZPP_Body","\x34","\x43","\xde","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Set_ZPP_Body_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Set_ZPP_Body_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Set_ZPP_Body_obj >;
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

void ZPP_Set_ZPP_Body_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
