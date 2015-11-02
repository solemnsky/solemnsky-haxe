#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","new",0xb4ffb787,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.new","zpp_nape/util/RBTree.hx",3731,0x3f078845)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(3772)
	this->colour = (int)0;
	HX_STACK_LINE(3771)
	this->parent = null();
	HX_STACK_LINE(3770)
	this->next = null();
	HX_STACK_LINE(3769)
	this->prev = null();
	HX_STACK_LINE(3768)
	this->data = null();
	HX_STACK_LINE(3767)
	this->swapped = null();
	HX_STACK_LINE(3766)
	this->lt = null();
}
;
	return null();
}

//ZPP_Set_ZPP_SimpleVert_obj::~ZPP_Set_ZPP_SimpleVert_obj() { }

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > ZPP_Set_ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > _result_ = new ZPP_Set_ZPP_SimpleVert_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > _result_ = new ZPP_Set_ZPP_SimpleVert_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Set_ZPP_SimpleVert_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","free",0xa580f7a5,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.free","zpp_nape/util/RBTree.hx",3758,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3759)
		this->data = null();
		HX_STACK_LINE(3760)
		this->lt = null();
		HX_STACK_LINE(3761)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,free,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","alloc",0x4664e35c,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.alloc","zpp_nape/util/RBTree.hx",3765,0x3f078845)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,alloc,(void))

bool ZPP_Set_ZPP_SimpleVert_obj::verify( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","verify",0xb3854eb2,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.verify","zpp_nape/util/RBTree.hx",3774,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3775)
	{
		HX_STACK_LINE(3784)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3784)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3784)
		if ((tmp1)){
			HX_STACK_LINE(3785)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3785)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(3786)
			while((true)){
				HX_STACK_LINE(3786)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3786)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3786)
				if ((tmp4)){
					HX_STACK_LINE(3786)
					break;
				}
				HX_STACK_LINE(3786)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(3787)
			while((true)){
				HX_STACK_LINE(3787)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3787)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3787)
				if ((tmp4)){
					HX_STACK_LINE(3787)
					break;
				}
				HX_STACK_LINE(3788)
				::zpp_nape::geom::ZPP_SimpleVert i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3789)
				{
					HX_STACK_LINE(3790)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(3791)
					{
						HX_STACK_LINE(3800)
						bool tmp5 = this->empty();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(3800)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3800)
						if ((tmp6)){
							HX_STACK_LINE(3801)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(3801)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite1 = tmp7;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(3802)
							while((true)){
								HX_STACK_LINE(3802)
								bool tmp8 = (set_ite1->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(3802)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(3802)
								if ((tmp9)){
									HX_STACK_LINE(3802)
									break;
								}
								HX_STACK_LINE(3802)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(3803)
							while((true)){
								HX_STACK_LINE(3803)
								bool tmp8 = (set_ite1 != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(3803)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(3803)
								if ((tmp9)){
									HX_STACK_LINE(3803)
									break;
								}
								HX_STACK_LINE(3804)
								::zpp_nape::geom::ZPP_SimpleVert j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(3805)
								{
									HX_STACK_LINE(3806)
									bool tmp10 = prei;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(3806)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(3806)
									if ((tmp11)){
										HX_STACK_LINE(3807)
										::zpp_nape::geom::ZPP_SimpleVert tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(3807)
										::zpp_nape::geom::ZPP_SimpleVert tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(3807)
										bool tmp14 = this->lt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(3807)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(3807)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(3807)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(3807)
										if ((tmp16)){
											HX_STACK_LINE(3807)
											::zpp_nape::geom::ZPP_SimpleVert tmp18 = j;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(3807)
											::zpp_nape::geom::ZPP_SimpleVert tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(3807)
											::zpp_nape::geom::ZPP_SimpleVert tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(3807)
											::zpp_nape::geom::ZPP_SimpleVert tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(3807)
											tmp17 = this->lt(tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(3807)
											tmp17 = false;
										}
										HX_STACK_LINE(3807)
										if ((tmp17)){
											HX_STACK_LINE(3807)
											return false;
										}
									}
									else{
										HX_STACK_LINE(3809)
										bool tmp12 = (i == j);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(3809)
										if ((tmp12)){
											HX_STACK_LINE(3809)
											prei = false;
										}
										else{
											HX_STACK_LINE(3811)
											::zpp_nape::geom::ZPP_SimpleVert tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3811)
											::zpp_nape::geom::ZPP_SimpleVert tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(3811)
											bool tmp15 = this->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(3811)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(3811)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(3811)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(3811)
											if ((tmp17)){
												HX_STACK_LINE(3811)
												::zpp_nape::geom::ZPP_SimpleVert tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(3811)
												::zpp_nape::geom::ZPP_SimpleVert tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(3811)
												::zpp_nape::geom::ZPP_SimpleVert tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(3811)
												::zpp_nape::geom::ZPP_SimpleVert tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(3811)
												tmp18 = this->lt(tmp21,tmp22);
											}
											else{
												HX_STACK_LINE(3811)
												tmp18 = false;
											}
											HX_STACK_LINE(3811)
											if ((tmp18)){
												HX_STACK_LINE(3811)
												return false;
											}
										}
									}
								}
								HX_STACK_LINE(3814)
								bool tmp10 = (set_ite1->next != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(3814)
								if ((tmp10)){
									HX_STACK_LINE(3815)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(3816)
									while((true)){
										HX_STACK_LINE(3816)
										bool tmp11 = (set_ite1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(3816)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(3816)
										if ((tmp12)){
											HX_STACK_LINE(3816)
											break;
										}
										HX_STACK_LINE(3816)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(3819)
									while((true)){
										HX_STACK_LINE(3819)
										bool tmp11 = (set_ite1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(3819)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(3819)
										if ((tmp11)){
											HX_STACK_LINE(3819)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp13 = set_ite1;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(3819)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp14 = set_ite1->parent->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(3819)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(3819)
											tmp12 = (tmp13 == tmp15);
										}
										else{
											HX_STACK_LINE(3819)
											tmp12 = false;
										}
										HX_STACK_LINE(3819)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(3819)
										if ((tmp13)){
											HX_STACK_LINE(3819)
											break;
										}
										HX_STACK_LINE(3819)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(3820)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(3826)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3826)
				if ((tmp5)){
					HX_STACK_LINE(3827)
					set_ite = set_ite->next;
					HX_STACK_LINE(3828)
					while((true)){
						HX_STACK_LINE(3828)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3828)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3828)
						if ((tmp7)){
							HX_STACK_LINE(3828)
							break;
						}
						HX_STACK_LINE(3828)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(3831)
					while((true)){
						HX_STACK_LINE(3831)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3831)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3831)
						if ((tmp6)){
							HX_STACK_LINE(3831)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(3831)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3831)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3831)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(3831)
							tmp7 = false;
						}
						HX_STACK_LINE(3831)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(3831)
						if ((tmp8)){
							HX_STACK_LINE(3831)
							break;
						}
						HX_STACK_LINE(3831)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(3832)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(3837)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,verify,return )

bool ZPP_Set_ZPP_SimpleVert_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","empty",0x94ab7974,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.empty","zpp_nape/util/RBTree.hx",3839,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3840)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3840)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3840)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,empty,return )

bool ZPP_Set_ZPP_SimpleVert_obj::singular( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","singular",0xdee07450,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.singular","zpp_nape/util/RBTree.hx",3842,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3843)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3843)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3843)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3843)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(3843)
	if ((tmp2)){
		HX_STACK_LINE(3843)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3843)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(3843)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(3843)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp7 = tmp6->prev;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(3843)
		tmp3 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(3843)
		tmp3 = false;
	}
	HX_STACK_LINE(3843)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(3843)
	if ((tmp3)){
		HX_STACK_LINE(3843)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(3843)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(3843)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp7 = tmp6->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(3843)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(3843)
		tmp4 = false;
	}
	HX_STACK_LINE(3843)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,singular,return )

int ZPP_Set_ZPP_SimpleVert_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","size",0xae11fbba,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.size","zpp_nape/util/RBTree.hx",3845,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3846)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3847)
	{
		HX_STACK_LINE(3856)
		bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3856)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3856)
		if ((tmp1)){
			HX_STACK_LINE(3857)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3857)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = tmp2;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(3858)
			while((true)){
				HX_STACK_LINE(3858)
				bool tmp3 = (set_ite->prev != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3858)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3858)
				if ((tmp4)){
					HX_STACK_LINE(3858)
					break;
				}
				HX_STACK_LINE(3858)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(3859)
			while((true)){
				HX_STACK_LINE(3859)
				bool tmp3 = (set_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3859)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3859)
				if ((tmp4)){
					HX_STACK_LINE(3859)
					break;
				}
				HX_STACK_LINE(3860)
				::zpp_nape::geom::ZPP_SimpleVert i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3861)
				(ret)++;
				HX_STACK_LINE(3862)
				bool tmp5 = (set_ite->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3862)
				if ((tmp5)){
					HX_STACK_LINE(3863)
					set_ite = set_ite->next;
					HX_STACK_LINE(3864)
					while((true)){
						HX_STACK_LINE(3864)
						bool tmp6 = (set_ite->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3864)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3864)
						if ((tmp7)){
							HX_STACK_LINE(3864)
							break;
						}
						HX_STACK_LINE(3864)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(3867)
					while((true)){
						HX_STACK_LINE(3867)
						bool tmp6 = (set_ite->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3867)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3867)
						if ((tmp6)){
							HX_STACK_LINE(3867)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp8 = set_ite;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(3867)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = set_ite->parent->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3867)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(3867)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(3867)
							tmp7 = false;
						}
						HX_STACK_LINE(3867)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(3867)
						if ((tmp8)){
							HX_STACK_LINE(3867)
							break;
						}
						HX_STACK_LINE(3867)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(3868)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(3873)
	int tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3873)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,size,return )

bool ZPP_Set_ZPP_SimpleVert_obj::has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","has",0xb4fb2681,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.has","zpp_nape/util/RBTree.hx",3875,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3876)
	::zpp_nape::geom::ZPP_SimpleVert tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3876)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3876)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3876)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,has,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::find( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","find",0xa57a2b32,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.find","zpp_nape/util/RBTree.hx",3878,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3879)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3879)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3880)
	while((true)){
		HX_STACK_LINE(3880)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3880)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3880)
		if ((tmp1)){
			HX_STACK_LINE(3880)
			tmp2 = (cur->data != obj);
		}
		else{
			HX_STACK_LINE(3880)
			tmp2 = false;
		}
		HX_STACK_LINE(3880)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3880)
		if ((tmp3)){
			HX_STACK_LINE(3880)
			break;
		}
		HX_STACK_LINE(3881)
		::zpp_nape::geom::ZPP_SimpleVert tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3881)
		::zpp_nape::geom::ZPP_SimpleVert tmp5 = cur->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(3881)
		bool tmp6 = this->lt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(3881)
		if ((tmp6)){
			HX_STACK_LINE(3881)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(3882)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(3884)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3884)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,find,return )

bool ZPP_Set_ZPP_SimpleVert_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","has_weak",0x82eb1e36,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.has_weak","zpp_nape/util/RBTree.hx",3886,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3887)
	::zpp_nape::geom::ZPP_SimpleVert tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3887)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = this->find_weak(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3887)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3887)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","find_weak",0x98a877e5,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.find_weak","zpp_nape/util/RBTree.hx",3889,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3890)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3890)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3891)
	while((true)){
		HX_STACK_LINE(3891)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3891)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3891)
		if ((tmp2)){
			HX_STACK_LINE(3891)
			break;
		}
		HX_STACK_LINE(3892)
		::zpp_nape::geom::ZPP_SimpleVert tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3892)
		::zpp_nape::geom::ZPP_SimpleVert tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3892)
		bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(3892)
		if ((tmp5)){
			HX_STACK_LINE(3892)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(3893)
			::zpp_nape::geom::ZPP_SimpleVert tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(3893)
			::zpp_nape::geom::ZPP_SimpleVert tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(3893)
			bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(3893)
			if ((tmp8)){
				HX_STACK_LINE(3893)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(3894)
				break;
			}
		}
	}
	HX_STACK_LINE(3896)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3896)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,find_weak,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","lower_bound",0x64e2ce67,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.lower_bound","zpp_nape/util/RBTree.hx",3898,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3899)
	::zpp_nape::geom::ZPP_SimpleVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3899)
	{
		HX_STACK_LINE(3900)
		::zpp_nape::geom::ZPP_SimpleVert ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3901)
		{
			HX_STACK_LINE(3910)
			bool tmp1 = this->empty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3910)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3910)
			if ((tmp2)){
				HX_STACK_LINE(3911)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3911)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = tmp3;		HX_STACK_VAR(set_ite,"set_ite");
				HX_STACK_LINE(3912)
				while((true)){
					HX_STACK_LINE(3912)
					bool tmp4 = (set_ite->prev != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3912)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(3912)
					if ((tmp5)){
						HX_STACK_LINE(3912)
						break;
					}
					HX_STACK_LINE(3912)
					set_ite = set_ite->prev;
				}
				HX_STACK_LINE(3913)
				while((true)){
					HX_STACK_LINE(3913)
					bool tmp4 = (set_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3913)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(3913)
					if ((tmp5)){
						HX_STACK_LINE(3913)
						break;
					}
					HX_STACK_LINE(3914)
					::zpp_nape::geom::ZPP_SimpleVert elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
					HX_STACK_LINE(3915)
					{
						HX_STACK_LINE(3916)
						::zpp_nape::geom::ZPP_SimpleVert tmp6 = elt;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3916)
						::zpp_nape::geom::ZPP_SimpleVert tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3916)
						bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(3916)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(3916)
						if ((tmp9)){
							HX_STACK_LINE(3917)
							ret = elt;
							HX_STACK_LINE(3918)
							break;
						}
					}
					HX_STACK_LINE(3921)
					bool tmp6 = (set_ite->next != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(3921)
					if ((tmp6)){
						HX_STACK_LINE(3922)
						set_ite = set_ite->next;
						HX_STACK_LINE(3923)
						while((true)){
							HX_STACK_LINE(3923)
							bool tmp7 = (set_ite->prev != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(3923)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(3923)
							if ((tmp8)){
								HX_STACK_LINE(3923)
								break;
							}
							HX_STACK_LINE(3923)
							set_ite = set_ite->prev;
						}
					}
					else{
						HX_STACK_LINE(3926)
						while((true)){
							HX_STACK_LINE(3926)
							bool tmp7 = (set_ite->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(3926)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(3926)
							if ((tmp7)){
								HX_STACK_LINE(3926)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = set_ite;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(3926)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = set_ite->parent->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(3926)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(3926)
								tmp8 = (tmp9 == tmp11);
							}
							else{
								HX_STACK_LINE(3926)
								tmp8 = false;
							}
							HX_STACK_LINE(3926)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(3926)
							if ((tmp9)){
								HX_STACK_LINE(3926)
								break;
							}
							HX_STACK_LINE(3926)
							set_ite = set_ite->parent;
						}
						HX_STACK_LINE(3927)
						set_ite = set_ite->parent;
					}
				}
			}
		}
		HX_STACK_LINE(3932)
		tmp = ret;
	}
	HX_STACK_LINE(3899)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,lower_bound,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::first( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","first",0x256eb717,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.first","zpp_nape/util/RBTree.hx",3935,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3944)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3944)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3945)
	while((true)){
		HX_STACK_LINE(3945)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3945)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3945)
		if ((tmp2)){
			HX_STACK_LINE(3945)
			break;
		}
		HX_STACK_LINE(3945)
		cur = cur->prev;
	}
	HX_STACK_LINE(3946)
	::zpp_nape::geom::ZPP_SimpleVert tmp1 = cur->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3946)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,first,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::pop_front( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","pop_front",0x852efea2,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.pop_front","zpp_nape/util/RBTree.hx",3948,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3957)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3957)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3958)
	while((true)){
		HX_STACK_LINE(3958)
		bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3958)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3958)
		if ((tmp2)){
			HX_STACK_LINE(3958)
			break;
		}
		HX_STACK_LINE(3958)
		cur = cur->prev;
	}
	HX_STACK_LINE(3959)
	::zpp_nape::geom::ZPP_SimpleVert ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3960)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3960)
	this->remove_node(tmp1);
	HX_STACK_LINE(3961)
	::zpp_nape::geom::ZPP_SimpleVert tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3961)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,pop_front,return )

Void ZPP_Set_ZPP_SimpleVert_obj::remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","remove",0x16ce677d,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.remove","zpp_nape/util/RBTree.hx",3963,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(3964)
		::zpp_nape::geom::ZPP_SimpleVert tmp = obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3964)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3964)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = tmp1;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(3973)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3973)
		this->remove_node(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,remove,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","successor_node",0x473f5ab4,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.successor_node","zpp_nape/util/RBTree.hx",3975,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(3984)
	bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3984)
	if ((tmp)){
		HX_STACK_LINE(3985)
		cur = cur->next;
		HX_STACK_LINE(3986)
		while((true)){
			HX_STACK_LINE(3986)
			bool tmp1 = (cur->prev != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3986)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3986)
			if ((tmp2)){
				HX_STACK_LINE(3986)
				break;
			}
			HX_STACK_LINE(3986)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(3989)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3990)
		cur = cur->parent;
		HX_STACK_LINE(3991)
		while((true)){
			HX_STACK_LINE(3991)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3991)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3991)
			if ((tmp1)){
				HX_STACK_LINE(3991)
				tmp2 = (cur->prev != pre);
			}
			else{
				HX_STACK_LINE(3991)
				tmp2 = false;
			}
			HX_STACK_LINE(3991)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3991)
			if ((tmp3)){
				HX_STACK_LINE(3991)
				break;
			}
			HX_STACK_LINE(3992)
			pre = cur;
			HX_STACK_LINE(3993)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3996)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3996)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,successor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","predecessor_node",0xc668b2f1,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.predecessor_node","zpp_nape/util/RBTree.hx",3998,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_LINE(4007)
	bool tmp = (cur->prev != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4007)
	if ((tmp)){
		HX_STACK_LINE(4008)
		cur = cur->prev;
		HX_STACK_LINE(4009)
		while((true)){
			HX_STACK_LINE(4009)
			bool tmp1 = (cur->next != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4009)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4009)
			if ((tmp2)){
				HX_STACK_LINE(4009)
				break;
			}
			HX_STACK_LINE(4009)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(4012)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4013)
		cur = cur->parent;
		HX_STACK_LINE(4014)
		while((true)){
			HX_STACK_LINE(4014)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4014)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4014)
			if ((tmp1)){
				HX_STACK_LINE(4014)
				tmp2 = (cur->next != pre);
			}
			else{
				HX_STACK_LINE(4014)
				tmp2 = false;
			}
			HX_STACK_LINE(4014)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4014)
			if ((tmp3)){
				HX_STACK_LINE(4014)
				break;
			}
			HX_STACK_LINE(4015)
			pre = cur;
			HX_STACK_LINE(4016)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(4019)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = cur;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4019)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,predecessor_node,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::successor( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","successor",0x3f4dfc0d,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.successor","zpp_nape/util/RBTree.hx",4021,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4030)
	::zpp_nape::geom::ZPP_SimpleVert tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4030)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4030)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->successor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4030)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4031)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4031)
	::zpp_nape::geom::ZPP_SimpleVert tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(4031)
	if ((tmp3)){
		HX_STACK_LINE(4031)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(4031)
		tmp4 = node->data;
	}
	HX_STACK_LINE(4031)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,successor,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","predecessor",0xd4bd8cf0,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.predecessor","zpp_nape/util/RBTree.hx",4033,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4042)
	::zpp_nape::geom::ZPP_SimpleVert tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4042)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4042)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->predecessor_node(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4042)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = tmp2;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4043)
	bool tmp3 = (node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4043)
	::zpp_nape::geom::ZPP_SimpleVert tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(4043)
	if ((tmp3)){
		HX_STACK_LINE(4043)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(4043)
		tmp4 = node->data;
	}
	HX_STACK_LINE(4043)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,predecessor,return )

Void ZPP_Set_ZPP_SimpleVert_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","remove_node",0x37537944,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.remove_node","zpp_nape/util/RBTree.hx",4045,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_LINE(4054)
		bool tmp = (cur->next != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4054)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4054)
		if ((tmp)){
			HX_STACK_LINE(4054)
			tmp1 = (cur->prev != null());
		}
		else{
			HX_STACK_LINE(4054)
			tmp1 = false;
		}
		HX_STACK_LINE(4054)
		if ((tmp1)){
			HX_STACK_LINE(4055)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(4056)
			while((true)){
				HX_STACK_LINE(4056)
				bool tmp2 = (sm->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4056)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4056)
				if ((tmp3)){
					HX_STACK_LINE(4056)
					break;
				}
				HX_STACK_LINE(4056)
				sm = sm->prev;
			}
			HX_STACK_LINE(4057)
			{
				HX_STACK_LINE(4058)
				::zpp_nape::geom::ZPP_SimpleVert t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(4059)
				cur->data = sm->data;
				HX_STACK_LINE(4060)
				sm->data = t;
			}
			HX_STACK_LINE(4062)
			Dynamic tmp2 = this->swapped_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4062)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4062)
			if ((tmp3)){
				HX_STACK_LINE(4062)
				::zpp_nape::geom::ZPP_SimpleVert tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4062)
				::zpp_nape::geom::ZPP_SimpleVert tmp5 = sm->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4062)
				this->swapped(tmp4,tmp5);
			}
			HX_STACK_LINE(4063)
			cur = sm;
		}
		HX_STACK_LINE(4073)
		bool tmp2 = (cur->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4073)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4073)
		if ((tmp2)){
			HX_STACK_LINE(4073)
			tmp3 = cur->next;
		}
		else{
			HX_STACK_LINE(4073)
			tmp3 = cur->prev;
		}
		HX_STACK_LINE(4073)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child = tmp3;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4074)
		bool tmp4 = (cur->colour == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4074)
		if ((tmp4)){
			HX_STACK_LINE(4075)
			bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4075)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(4075)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(4075)
			if ((tmp6)){
				HX_STACK_LINE(4075)
				tmp7 = (cur->next != null());
			}
			else{
				HX_STACK_LINE(4075)
				tmp7 = true;
			}
			HX_STACK_LINE(4075)
			if ((tmp7)){
				HX_STACK_LINE(4075)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4076)
				bool tmp8 = (cur->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(4076)
				if ((tmp8)){
					HX_STACK_LINE(4077)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(4078)
					while((true)){
						HX_STACK_LINE(4079)
						(parent->colour)++;
						HX_STACK_LINE(4080)
						(parent->prev->colour)--;
						HX_STACK_LINE(4081)
						(parent->next->colour)--;
						HX_STACK_LINE(4082)
						{
							HX_STACK_LINE(4083)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4084)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4084)
							if ((tmp9)){
								HX_STACK_LINE(4085)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4085)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(4086)
								break;
							}
							else{
								HX_STACK_LINE(4088)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4088)
								if ((tmp10)){
									HX_STACK_LINE(4089)
									{
										HX_STACK_LINE(4090)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(4090)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4090)
										if ((tmp11)){
											HX_STACK_LINE(4090)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4090)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(4090)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(4090)
											tmp12 = false;
										}
										HX_STACK_LINE(4090)
										if ((tmp12)){
											HX_STACK_LINE(4091)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4091)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(4092)
											break;
										}
									}
									HX_STACK_LINE(4095)
									{
										HX_STACK_LINE(4096)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(4096)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4096)
										if ((tmp11)){
											HX_STACK_LINE(4096)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4096)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(4096)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(4096)
											tmp12 = false;
										}
										HX_STACK_LINE(4096)
										if ((tmp12)){
											HX_STACK_LINE(4097)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4097)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(4098)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(4103)
						{
							HX_STACK_LINE(4104)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4105)
							bool tmp9 = (child1->colour == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4105)
							if ((tmp9)){
								HX_STACK_LINE(4106)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = child1;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4106)
								this->__fix_neg_red(tmp10);
								HX_STACK_LINE(4107)
								break;
							}
							else{
								HX_STACK_LINE(4109)
								bool tmp10 = (child1->colour == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(4109)
								if ((tmp10)){
									HX_STACK_LINE(4110)
									{
										HX_STACK_LINE(4111)
										bool tmp11 = (child1->prev != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(4111)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4111)
										if ((tmp11)){
											HX_STACK_LINE(4111)
											int tmp13 = child1->prev->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4111)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(4111)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(4111)
											tmp12 = false;
										}
										HX_STACK_LINE(4111)
										if ((tmp12)){
											HX_STACK_LINE(4112)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp13 = child1->prev;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4112)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(4113)
											break;
										}
									}
									HX_STACK_LINE(4116)
									{
										HX_STACK_LINE(4117)
										bool tmp11 = (child1->next != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(4117)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(4117)
										if ((tmp11)){
											HX_STACK_LINE(4117)
											int tmp13 = child1->next->colour;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4117)
											int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(4117)
											tmp12 = (tmp14 == (int)0);
										}
										else{
											HX_STACK_LINE(4117)
											tmp12 = false;
										}
										HX_STACK_LINE(4117)
										if ((tmp12)){
											HX_STACK_LINE(4118)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp13 = child1->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(4118)
											this->__fix_dbl_red(tmp13);
											HX_STACK_LINE(4119)
											break;
										}
									}
								}
							}
						}
						HX_STACK_LINE(4124)
						bool tmp9 = (parent->colour == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(4124)
						if ((tmp9)){
							HX_STACK_LINE(4125)
							bool tmp10 = (parent->parent == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4125)
							if ((tmp10)){
								HX_STACK_LINE(4126)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(4129)
								parent = parent->parent;
								HX_STACK_LINE(4130)
								continue;
							}
						}
						HX_STACK_LINE(4133)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(4137)
		{
			HX_STACK_LINE(4138)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(4139)
			bool tmp5 = (par == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4139)
			if ((tmp5)){
				HX_STACK_LINE(4140)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(4142)
				bool tmp6 = (par->prev == cur);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4142)
				if ((tmp6)){
					HX_STACK_LINE(4142)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(4143)
					par->next = child;
				}
			}
			HX_STACK_LINE(4144)
			bool tmp6 = (child != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(4144)
			if ((tmp6)){
				HX_STACK_LINE(4144)
				child->parent = par;
			}
		}
		HX_STACK_LINE(4146)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp5 = cur->next = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(4146)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = cur->prev = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(4146)
		cur->parent = tmp6;
		HX_STACK_LINE(4147)
		{
			HX_STACK_LINE(4148)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4157)
			{
				HX_STACK_LINE(4157)
				o->data = null();
				HX_STACK_LINE(4157)
				o->lt = null();
				HX_STACK_LINE(4157)
				o->swapped = null();
			}
			HX_STACK_LINE(4158)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(4158)
			o->next = tmp7;
			HX_STACK_LINE(4159)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,remove_node,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","clear",0x6d2cb074,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.clear","zpp_nape/util/RBTree.hx",4166,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4166)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4166)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4166)
		if ((tmp1)){
			HX_STACK_LINE(4166)
			Dynamic();
		}
		else{
			HX_STACK_LINE(4166)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4166)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4166)
			while((true)){
				HX_STACK_LINE(4166)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4166)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4166)
				if ((tmp4)){
					HX_STACK_LINE(4166)
					break;
				}
				HX_STACK_LINE(4166)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4166)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4166)
				if ((tmp5)){
					HX_STACK_LINE(4166)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(4166)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(4166)
					if ((tmp7)){
						HX_STACK_LINE(4166)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(4166)
						::zpp_nape::geom::ZPP_SimpleVert tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(4166)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(4166)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(4166)
						if ((tmp9)){
							HX_STACK_LINE(4166)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4166)
							if ((tmp10)){
								HX_STACK_LINE(4166)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(4166)
								ret->next = null();
							}
							HX_STACK_LINE(4166)
							cur->parent = null();
						}
						HX_STACK_LINE(4166)
						{
							HX_STACK_LINE(4166)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(4166)
							{
								HX_STACK_LINE(4166)
								o->data = null();
								HX_STACK_LINE(4166)
								o->lt = null();
								HX_STACK_LINE(4166)
								o->swapped = null();
							}
							HX_STACK_LINE(4166)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4166)
							o->next = tmp10;
							HX_STACK_LINE(4166)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(4166)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(4166)
				cur = tmp6;
			}
			HX_STACK_LINE(4166)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::clear_with( Dynamic lambda){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","clear_with",0x8644bcf1,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.clear_with","zpp_nape/util/RBTree.hx",4169,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(4170)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4170)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4170)
		if ((tmp1)){
			HX_STACK_LINE(4170)
			return null();
		}
		else{
			HX_STACK_LINE(4172)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4172)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4173)
			while((true)){
				HX_STACK_LINE(4173)
				bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4173)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4173)
				if ((tmp4)){
					HX_STACK_LINE(4173)
					break;
				}
				HX_STACK_LINE(4173)
				bool tmp5 = (cur->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4173)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4173)
				if ((tmp5)){
					HX_STACK_LINE(4173)
					tmp6 = cur->prev;
				}
				else{
					HX_STACK_LINE(4173)
					bool tmp7 = (cur->next != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(4173)
					if ((tmp7)){
						HX_STACK_LINE(4173)
						tmp6 = cur->next;
					}
					else{
						HX_STACK_LINE(4173)
						::zpp_nape::geom::ZPP_SimpleVert tmp8 = cur->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(4173)
						lambda(tmp8).Cast< Void >();
						HX_STACK_LINE(4173)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = cur->parent;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(4173)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(4173)
						if ((tmp9)){
							HX_STACK_LINE(4173)
							bool tmp10 = (cur == ret->prev);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4173)
							if ((tmp10)){
								HX_STACK_LINE(4173)
								ret->prev = null();
							}
							else{
								HX_STACK_LINE(4173)
								ret->next = null();
							}
							HX_STACK_LINE(4173)
							cur->parent = null();
						}
						HX_STACK_LINE(4173)
						{
							HX_STACK_LINE(4173)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(4173)
							{
								HX_STACK_LINE(4173)
								o->data = null();
								HX_STACK_LINE(4173)
								o->lt = null();
								HX_STACK_LINE(4173)
								o->swapped = null();
							}
							HX_STACK_LINE(4173)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4173)
							o->next = tmp10;
							HX_STACK_LINE(4173)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(4173)
						tmp6 = ret;
					}
				}
				HX_STACK_LINE(4173)
				cur = tmp6;
			}
			HX_STACK_LINE(4174)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,clear_with,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node,Dynamic lambda){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","clear_node",0x805650ed,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.clear_node","zpp_nape/util/RBTree.hx",4178,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(4187)
	::zpp_nape::geom::ZPP_SimpleVert tmp = node->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4187)
	lambda(tmp).Cast< Void >();
	HX_STACK_LINE(4188)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4189)
	bool tmp1 = (ret != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4189)
	if ((tmp1)){
		HX_STACK_LINE(4190)
		bool tmp2 = (node == ret->prev);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4190)
		if ((tmp2)){
			HX_STACK_LINE(4190)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(4191)
			ret->next = null();
		}
		HX_STACK_LINE(4192)
		node->parent = null();
	}
	HX_STACK_LINE(4194)
	{
		HX_STACK_LINE(4195)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4204)
		{
			HX_STACK_LINE(4204)
			o->data = null();
			HX_STACK_LINE(4204)
			o->lt = null();
			HX_STACK_LINE(4204)
			o->swapped = null();
		}
		HX_STACK_LINE(4205)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4205)
		o->next = tmp2;
		HX_STACK_LINE(4206)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4211)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4211)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleVert_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleVert_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert negred){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","__fix_neg_red",0x15450dbf,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.__fix_neg_red","zpp_nape/util/RBTree.hx",4213,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(negred,"negred")
		HX_STACK_LINE(4214)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(4215)
		bool tmp = (parent->prev == negred);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4215)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4215)
		if ((tmp)){
			HX_STACK_LINE(4216)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nl = negred->prev;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(4217)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nr = negred->next;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(4218)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trl = nr->prev;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(4219)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trr = nr->next;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(4220)
			nl->colour = (int)0;
			HX_STACK_LINE(4221)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4221)
			negred->colour = tmp2;
			HX_STACK_LINE(4222)
			{
				HX_STACK_LINE(4223)
				negred->next = trl;
				HX_STACK_LINE(4224)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4224)
				if ((tmp3)){
					HX_STACK_LINE(4224)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(4226)
			{
				HX_STACK_LINE(4227)
				::zpp_nape::geom::ZPP_SimpleVert t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(4228)
				parent->data = nr->data;
				HX_STACK_LINE(4229)
				nr->data = t;
			}
			HX_STACK_LINE(4231)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4231)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4231)
			if ((tmp4)){
				HX_STACK_LINE(4231)
				::zpp_nape::geom::ZPP_SimpleVert tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4231)
				::zpp_nape::geom::ZPP_SimpleVert tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4231)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(4232)
			{
				HX_STACK_LINE(4233)
				nr->prev = trr;
				HX_STACK_LINE(4234)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4234)
				if ((tmp5)){
					HX_STACK_LINE(4234)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(4236)
			{
				HX_STACK_LINE(4237)
				nr->next = parent->next;
				HX_STACK_LINE(4238)
				bool tmp5 = (parent->next != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4238)
				if ((tmp5)){
					HX_STACK_LINE(4238)
					parent->next->parent = nr;
				}
			}
			HX_STACK_LINE(4240)
			{
				HX_STACK_LINE(4241)
				parent->next = nr;
				HX_STACK_LINE(4242)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4242)
				if ((tmp5)){
					HX_STACK_LINE(4242)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(4244)
			tmp1 = nl;
		}
		else{
			HX_STACK_LINE(4247)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nl = negred->next;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(4248)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nr = negred->prev;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(4249)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trl = nr->next;		HX_STACK_VAR(trl,"trl");
			HX_STACK_LINE(4250)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trr = nr->prev;		HX_STACK_VAR(trr,"trr");
			HX_STACK_LINE(4251)
			nl->colour = (int)0;
			HX_STACK_LINE(4252)
			int tmp2 = parent->colour = (int)1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4252)
			negred->colour = tmp2;
			HX_STACK_LINE(4253)
			{
				HX_STACK_LINE(4254)
				negred->prev = trl;
				HX_STACK_LINE(4255)
				bool tmp3 = (trl != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4255)
				if ((tmp3)){
					HX_STACK_LINE(4255)
					trl->parent = negred;
				}
			}
			HX_STACK_LINE(4257)
			{
				HX_STACK_LINE(4258)
				::zpp_nape::geom::ZPP_SimpleVert t = parent->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(4259)
				parent->data = nr->data;
				HX_STACK_LINE(4260)
				nr->data = t;
			}
			HX_STACK_LINE(4262)
			Dynamic tmp3 = this->swapped_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4262)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4262)
			if ((tmp4)){
				HX_STACK_LINE(4262)
				::zpp_nape::geom::ZPP_SimpleVert tmp5 = parent->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4262)
				::zpp_nape::geom::ZPP_SimpleVert tmp6 = nr->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4262)
				this->swapped(tmp5,tmp6);
			}
			HX_STACK_LINE(4263)
			{
				HX_STACK_LINE(4264)
				nr->next = trr;
				HX_STACK_LINE(4265)
				bool tmp5 = (trr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4265)
				if ((tmp5)){
					HX_STACK_LINE(4265)
					trr->parent = nr;
				}
			}
			HX_STACK_LINE(4267)
			{
				HX_STACK_LINE(4268)
				nr->prev = parent->prev;
				HX_STACK_LINE(4269)
				bool tmp5 = (parent->prev != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4269)
				if ((tmp5)){
					HX_STACK_LINE(4269)
					parent->prev->parent = nr;
				}
			}
			HX_STACK_LINE(4271)
			{
				HX_STACK_LINE(4272)
				parent->prev = nr;
				HX_STACK_LINE(4273)
				bool tmp5 = (nr != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4273)
				if ((tmp5)){
					HX_STACK_LINE(4273)
					nr->parent = parent;
				}
			}
			HX_STACK_LINE(4275)
			tmp1 = nl;
		}
		HX_STACK_LINE(4215)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child = tmp1;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4277)
		bool tmp2 = (child->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4277)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4277)
		if ((tmp2)){
			HX_STACK_LINE(4277)
			int tmp4 = child->prev->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4277)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4277)
			tmp3 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(4277)
			tmp3 = false;
		}
		HX_STACK_LINE(4277)
		if ((tmp3)){
			HX_STACK_LINE(4277)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = child->prev;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4277)
			this->__fix_dbl_red(tmp4);
		}
		else{
			HX_STACK_LINE(4278)
			bool tmp4 = (child->next != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4278)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4278)
			if ((tmp4)){
				HX_STACK_LINE(4278)
				int tmp6 = child->next->colour;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4278)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(4278)
				tmp5 = (tmp7 == (int)0);
			}
			else{
				HX_STACK_LINE(4278)
				tmp5 = false;
			}
			HX_STACK_LINE(4278)
			if ((tmp5)){
				HX_STACK_LINE(4278)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = child->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4278)
				this->__fix_dbl_red(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,__fix_neg_red,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","__fix_dbl_red",0x235d3b9d,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.__fix_dbl_red","zpp_nape/util/RBTree.hx",4281,0x3f078845)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(4281)
		while((true)){
			HX_STACK_LINE(4282)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(4283)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(4284)
			bool tmp = (g == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4284)
			if ((tmp)){
				HX_STACK_LINE(4285)
				par->colour = (int)1;
				HX_STACK_LINE(4286)
				break;
			}
			HX_STACK_LINE(4288)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n1;		HX_STACK_VAR(n1,"n1");
			HX_STACK_LINE(4288)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n2;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(4288)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n3;		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(4288)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(4288)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t2;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(4288)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t3;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(4288)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(4289)
			bool tmp1 = (par == g->prev);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4289)
			if ((tmp1)){
				HX_STACK_LINE(4290)
				n3 = g;
				HX_STACK_LINE(4291)
				t4 = g->next;
				HX_STACK_LINE(4292)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4292)
				if ((tmp2)){
					HX_STACK_LINE(4293)
					n1 = x;
					HX_STACK_LINE(4294)
					n2 = par;
					HX_STACK_LINE(4295)
					t1 = x->prev;
					HX_STACK_LINE(4296)
					t2 = x->next;
					HX_STACK_LINE(4297)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(4300)
					n1 = par;
					HX_STACK_LINE(4301)
					n2 = x;
					HX_STACK_LINE(4302)
					t1 = par->prev;
					HX_STACK_LINE(4303)
					t2 = x->prev;
					HX_STACK_LINE(4304)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(4308)
				n1 = g;
				HX_STACK_LINE(4309)
				t1 = g->prev;
				HX_STACK_LINE(4310)
				bool tmp2 = (x == par->prev);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4310)
				if ((tmp2)){
					HX_STACK_LINE(4311)
					n2 = x;
					HX_STACK_LINE(4312)
					n3 = par;
					HX_STACK_LINE(4313)
					t2 = x->prev;
					HX_STACK_LINE(4314)
					t3 = x->next;
					HX_STACK_LINE(4315)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(4318)
					n2 = par;
					HX_STACK_LINE(4319)
					n3 = x;
					HX_STACK_LINE(4320)
					t2 = par->prev;
					HX_STACK_LINE(4321)
					t3 = x->prev;
					HX_STACK_LINE(4322)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(4325)
			{
				HX_STACK_LINE(4326)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(4327)
				bool tmp2 = (par1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4327)
				if ((tmp2)){
					HX_STACK_LINE(4328)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(4330)
					bool tmp3 = (par1->prev == g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(4330)
					if ((tmp3)){
						HX_STACK_LINE(4330)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(4331)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(4332)
				bool tmp3 = (n2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4332)
				if ((tmp3)){
					HX_STACK_LINE(4332)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(4334)
			{
				HX_STACK_LINE(4335)
				n1->prev = t1;
				HX_STACK_LINE(4336)
				bool tmp2 = (t1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4336)
				if ((tmp2)){
					HX_STACK_LINE(4336)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(4338)
			{
				HX_STACK_LINE(4339)
				n1->next = t2;
				HX_STACK_LINE(4340)
				bool tmp2 = (t2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4340)
				if ((tmp2)){
					HX_STACK_LINE(4340)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(4342)
			{
				HX_STACK_LINE(4343)
				n2->prev = n1;
				HX_STACK_LINE(4344)
				bool tmp2 = (n1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4344)
				if ((tmp2)){
					HX_STACK_LINE(4344)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(4346)
			{
				HX_STACK_LINE(4347)
				n2->next = n3;
				HX_STACK_LINE(4348)
				bool tmp2 = (n3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4348)
				if ((tmp2)){
					HX_STACK_LINE(4348)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(4350)
			{
				HX_STACK_LINE(4351)
				n3->prev = t3;
				HX_STACK_LINE(4352)
				bool tmp2 = (t3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4352)
				if ((tmp2)){
					HX_STACK_LINE(4352)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(4354)
			{
				HX_STACK_LINE(4355)
				n3->next = t4;
				HX_STACK_LINE(4356)
				bool tmp2 = (t4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4356)
				if ((tmp2)){
					HX_STACK_LINE(4356)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(4358)
			int tmp2 = (g->colour - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4358)
			n2->colour = tmp2;
			HX_STACK_LINE(4359)
			n1->colour = (int)1;
			HX_STACK_LINE(4360)
			n3->colour = (int)1;
			HX_STACK_LINE(4361)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4361)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4361)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4361)
			if ((tmp5)){
				HX_STACK_LINE(4361)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4361)
				tmp6->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4362)
				bool tmp6 = (n2->colour == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4362)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(4362)
				if ((tmp6)){
					HX_STACK_LINE(4362)
					int tmp8 = n2->parent->colour;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(4362)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(4362)
					tmp7 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(4362)
					tmp7 = false;
				}
				HX_STACK_LINE(4362)
				if ((tmp7)){
					HX_STACK_LINE(4363)
					x = n2;
					HX_STACK_LINE(4364)
					continue;
				}
			}
			HX_STACK_LINE(4366)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,__fix_dbl_red,(void))

bool ZPP_Set_ZPP_SimpleVert_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","try_insert_bool",0x14aa1793,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.try_insert_bool","zpp_nape/util/RBTree.hx",4369,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4370)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4371)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4372)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4372)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4372)
	if ((tmp1)){
		HX_STACK_LINE(4373)
		{
			HX_STACK_LINE(4374)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4374)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4374)
			if ((tmp3)){
				HX_STACK_LINE(4375)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4375)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(4381)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4381)
				x = tmp4;
				HX_STACK_LINE(4382)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
				HX_STACK_LINE(4383)
				x->next = null();
			}
			HX_STACK_LINE(4388)
			Dynamic();
		}
		HX_STACK_LINE(4390)
		x->data = obj;
		HX_STACK_LINE(4391)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4394)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4394)
		cur = tmp2;
		HX_STACK_LINE(4395)
		while((true)){
			HX_STACK_LINE(4396)
			::zpp_nape::geom::ZPP_SimpleVert tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4396)
			::zpp_nape::geom::ZPP_SimpleVert tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4396)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4396)
			if ((tmp5)){
				HX_STACK_LINE(4397)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4397)
				if ((tmp6)){
					HX_STACK_LINE(4398)
					{
						HX_STACK_LINE(4399)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4399)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(4399)
						if ((tmp8)){
							HX_STACK_LINE(4400)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4400)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(4406)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4406)
							x = tmp9;
							HX_STACK_LINE(4407)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
							HX_STACK_LINE(4408)
							x->next = null();
						}
						HX_STACK_LINE(4413)
						Dynamic();
					}
					HX_STACK_LINE(4415)
					x->data = obj;
					HX_STACK_LINE(4416)
					cur->prev = x;
					HX_STACK_LINE(4417)
					x->parent = cur;
					HX_STACK_LINE(4418)
					break;
				}
				else{
					HX_STACK_LINE(4420)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4422)
				::zpp_nape::geom::ZPP_SimpleVert tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4422)
				::zpp_nape::geom::ZPP_SimpleVert tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(4422)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(4422)
				if ((tmp8)){
					HX_STACK_LINE(4423)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(4423)
					if ((tmp9)){
						HX_STACK_LINE(4424)
						{
							HX_STACK_LINE(4425)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4425)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(4425)
							if ((tmp11)){
								HX_STACK_LINE(4426)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(4426)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(4432)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(4432)
								x = tmp12;
								HX_STACK_LINE(4433)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
								HX_STACK_LINE(4434)
								x->next = null();
							}
							HX_STACK_LINE(4439)
							Dynamic();
						}
						HX_STACK_LINE(4441)
						x->data = obj;
						HX_STACK_LINE(4442)
						cur->next = x;
						HX_STACK_LINE(4443)
						x->parent = cur;
						HX_STACK_LINE(4444)
						break;
					}
					else{
						HX_STACK_LINE(4446)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(4448)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(4451)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4451)
	if ((tmp2)){
		HX_STACK_LINE(4451)
		return false;
	}
	else{
		HX_STACK_LINE(4453)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4453)
		if ((tmp3)){
			HX_STACK_LINE(4453)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(4455)
			x->colour = (int)0;
			HX_STACK_LINE(4456)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4456)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4456)
			if ((tmp5)){
				HX_STACK_LINE(4456)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4456)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(4458)
		return true;
	}
	HX_STACK_LINE(4451)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,try_insert_bool,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","try_insert",0x68c9b4b6,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.try_insert","zpp_nape/util/RBTree.hx",4461,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4462)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4463)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4464)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4464)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4464)
	if ((tmp1)){
		HX_STACK_LINE(4465)
		{
			HX_STACK_LINE(4466)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4466)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4466)
			if ((tmp3)){
				HX_STACK_LINE(4467)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4467)
				x = tmp4;
			}
			else{
				HX_STACK_LINE(4473)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4473)
				x = tmp4;
				HX_STACK_LINE(4474)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
				HX_STACK_LINE(4475)
				x->next = null();
			}
			HX_STACK_LINE(4480)
			Dynamic();
		}
		HX_STACK_LINE(4482)
		x->data = obj;
		HX_STACK_LINE(4483)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4486)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4486)
		cur = tmp2;
		HX_STACK_LINE(4487)
		while((true)){
			HX_STACK_LINE(4488)
			::zpp_nape::geom::ZPP_SimpleVert tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4488)
			::zpp_nape::geom::ZPP_SimpleVert tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4488)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4488)
			if ((tmp5)){
				HX_STACK_LINE(4489)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4489)
				if ((tmp6)){
					HX_STACK_LINE(4490)
					{
						HX_STACK_LINE(4491)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp7 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4491)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(4491)
						if ((tmp8)){
							HX_STACK_LINE(4492)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4492)
							x = tmp9;
						}
						else{
							HX_STACK_LINE(4498)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(4498)
							x = tmp9;
							HX_STACK_LINE(4499)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
							HX_STACK_LINE(4500)
							x->next = null();
						}
						HX_STACK_LINE(4505)
						Dynamic();
					}
					HX_STACK_LINE(4507)
					x->data = obj;
					HX_STACK_LINE(4508)
					cur->prev = x;
					HX_STACK_LINE(4509)
					x->parent = cur;
					HX_STACK_LINE(4510)
					break;
				}
				else{
					HX_STACK_LINE(4512)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4514)
				::zpp_nape::geom::ZPP_SimpleVert tmp6 = cur->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4514)
				::zpp_nape::geom::ZPP_SimpleVert tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(4514)
				bool tmp8 = this->lt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(4514)
				if ((tmp8)){
					HX_STACK_LINE(4515)
					bool tmp9 = (cur->next == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(4515)
					if ((tmp9)){
						HX_STACK_LINE(4516)
						{
							HX_STACK_LINE(4517)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(4517)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(4517)
							if ((tmp11)){
								HX_STACK_LINE(4518)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(4518)
								x = tmp12;
							}
							else{
								HX_STACK_LINE(4524)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp12 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(4524)
								x = tmp12;
								HX_STACK_LINE(4525)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
								HX_STACK_LINE(4526)
								x->next = null();
							}
							HX_STACK_LINE(4531)
							Dynamic();
						}
						HX_STACK_LINE(4533)
						x->data = obj;
						HX_STACK_LINE(4534)
						cur->next = x;
						HX_STACK_LINE(4535)
						x->parent = cur;
						HX_STACK_LINE(4536)
						break;
					}
					else{
						HX_STACK_LINE(4538)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(4540)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(4543)
	bool tmp2 = (x == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4543)
	if ((tmp2)){
		HX_STACK_LINE(4543)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = cur;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4543)
		return tmp3;
	}
	else{
		HX_STACK_LINE(4545)
		bool tmp3 = (x->parent == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4545)
		if ((tmp3)){
			HX_STACK_LINE(4545)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(4547)
			x->colour = (int)0;
			HX_STACK_LINE(4548)
			int tmp4 = x->parent->colour;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4548)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4548)
			if ((tmp5)){
				HX_STACK_LINE(4548)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4548)
				this->__fix_dbl_red(tmp6);
			}
		}
		HX_STACK_LINE(4550)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4550)
		return tmp4;
	}
	HX_STACK_LINE(4543)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,try_insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::insert( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","insert",0xb0230e72,"zpp_nape.util.ZPP_Set_ZPP_SimpleVert.insert","zpp_nape/util/RBTree.hx",4553,0x3f078845)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4562)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4563)
	{
		HX_STACK_LINE(4564)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4564)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4564)
		if ((tmp1)){
			HX_STACK_LINE(4565)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4565)
			x = tmp2;
		}
		else{
			HX_STACK_LINE(4571)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4571)
			x = tmp2;
			HX_STACK_LINE(4572)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
			HX_STACK_LINE(4573)
			x->next = null();
		}
		HX_STACK_LINE(4578)
		Dynamic();
	}
	HX_STACK_LINE(4580)
	x->data = obj;
	HX_STACK_LINE(4581)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4581)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4581)
	if ((tmp1)){
		HX_STACK_LINE(4581)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4583)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4583)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp2;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4584)
		while((true)){
			HX_STACK_LINE(4585)
			::zpp_nape::geom::ZPP_SimpleVert tmp3 = x->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4585)
			::zpp_nape::geom::ZPP_SimpleVert tmp4 = cur->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4585)
			bool tmp5 = this->lt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4585)
			if ((tmp5)){
				HX_STACK_LINE(4586)
				bool tmp6 = (cur->prev == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4586)
				if ((tmp6)){
					HX_STACK_LINE(4587)
					cur->prev = x;
					HX_STACK_LINE(4588)
					x->parent = cur;
					HX_STACK_LINE(4589)
					break;
				}
				else{
					HX_STACK_LINE(4591)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4594)
				bool tmp6 = (cur->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(4594)
				if ((tmp6)){
					HX_STACK_LINE(4595)
					cur->next = x;
					HX_STACK_LINE(4596)
					x->parent = cur;
					HX_STACK_LINE(4597)
					break;
				}
				else{
					HX_STACK_LINE(4599)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(4603)
	bool tmp2 = (x->parent == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4603)
	if ((tmp2)){
		HX_STACK_LINE(4603)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(4605)
		x->colour = (int)0;
		HX_STACK_LINE(4606)
		int tmp3 = x->parent->colour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4606)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4606)
		if ((tmp4)){
			HX_STACK_LINE(4606)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4606)
			this->__fix_dbl_red(tmp5);
		}
	}
	HX_STACK_LINE(4616)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4616)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;


ZPP_Set_ZPP_SimpleVert_obj::ZPP_Set_ZPP_SimpleVert_obj()
{
}

void ZPP_Set_ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lt,"lt");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(colour,"colour");
}

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZPP_Set_ZPP_SimpleVert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Set_ZPP_SimpleVert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return true; }
	}
	return false;
}

void ZPP_Set_ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleVert_obj,lt),HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleVert_obj,swapped),HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleVert_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleVert_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleVert_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_Set_ZPP_SimpleVert_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(ZPP_Set_ZPP_SimpleVert_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(void *) &ZPP_Set_ZPP_SimpleVert_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Set_ZPP_SimpleVert_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Set_ZPP_SimpleVert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleVert","\x15","\xe8","\xc5","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Set_ZPP_SimpleVert_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Set_ZPP_SimpleVert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Set_ZPP_SimpleVert_obj >;
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

void ZPP_Set_ZPP_SimpleVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
