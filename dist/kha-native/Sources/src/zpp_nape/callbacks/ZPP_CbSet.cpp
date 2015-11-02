#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_CbSet_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","new",0xbe716a6f,"zpp_nape.callbacks.ZPP_CbSet.new","zpp_nape/callbacks/CbSet.hx",174,0x58b6155e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(419)
	this->wrap_constraints = null();
	HX_STACK_LINE(418)
	this->constraints = null();
	HX_STACK_LINE(417)
	this->wrap_interactors = null();
	HX_STACK_LINE(416)
	this->interactors = null();
	HX_STACK_LINE(352)
	this->zip_conlisteners = false;
	HX_STACK_LINE(351)
	this->conlisteners = null();
	HX_STACK_LINE(293)
	this->zip_bodylisteners = false;
	HX_STACK_LINE(292)
	this->bodylisteners = null();
	HX_STACK_LINE(234)
	this->zip_listeners = false;
	HX_STACK_LINE(233)
	this->listeners = null();
	HX_STACK_LINE(204)
	this->cbpairs = null();
	HX_STACK_LINE(203)
	this->manager = null();
	HX_STACK_LINE(202)
	this->id = (int)0;
	HX_STACK_LINE(177)
	this->next = null();
	HX_STACK_LINE(176)
	this->count = (int)0;
	HX_STACK_LINE(175)
	this->cbTypes = null();
	HX_STACK_LINE(456)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(456)
	this->cbTypes = tmp;
	HX_STACK_LINE(458)
	::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(458)
	this->listeners = tmp1;
	HX_STACK_LINE(459)
	this->zip_listeners = true;
	HX_STACK_LINE(460)
	::zpp_nape::util::ZNPList_ZPP_BodyListener tmp2 = ::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(460)
	this->bodylisteners = tmp2;
	HX_STACK_LINE(461)
	this->zip_bodylisteners = true;
	HX_STACK_LINE(462)
	::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp3 = ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(462)
	this->conlisteners = tmp3;
	HX_STACK_LINE(463)
	this->zip_conlisteners = true;
	HX_STACK_LINE(464)
	::zpp_nape::util::ZNPList_ZPP_Constraint tmp4 = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(464)
	this->constraints = tmp4;
	HX_STACK_LINE(465)
	::zpp_nape::util::ZNPList_ZPP_Interactor tmp5 = ::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(465)
	this->interactors = tmp5;
	HX_STACK_LINE(466)
	int tmp6 = ::zpp_nape::ZPP_ID_obj::CbSet();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(466)
	this->id = tmp6;
	HX_STACK_LINE(467)
	::zpp_nape::util::ZNPList_ZPP_CbSetPair tmp7 = ::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(467)
	this->cbpairs = tmp7;
}
;
	return null();
}

//ZPP_CbSet_obj::~ZPP_CbSet_obj() { }

Dynamic ZPP_CbSet_obj::__CreateEmpty() { return  new ZPP_CbSet_obj; }
hx::ObjectPtr< ZPP_CbSet_obj > ZPP_CbSet_obj::__new()
{  hx::ObjectPtr< ZPP_CbSet_obj > _result_ = new ZPP_CbSet_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_CbSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbSet_obj > _result_ = new ZPP_CbSet_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_CbSet_obj::increment( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","increment",0x3d0e157e,"zpp_nape.callbacks.ZPP_CbSet.increment","zpp_nape/callbacks/CbSet.hx",208,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		(this->count)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,increment,(void))

bool ZPP_CbSet_obj::decrement( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","decrement",0x1b910562,"zpp_nape.callbacks.ZPP_CbSet.decrement","zpp_nape/callbacks/CbSet.hx",212,0x58b6155e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	int tmp = --(this->count);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,decrement,return )

Void ZPP_CbSet_obj::invalidate_pairs( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","invalidate_pairs",0x2f5af2a6,"zpp_nape.callbacks.ZPP_CbSet.invalidate_pairs","zpp_nape/callbacks/CbSet.hx",224,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		::zpp_nape::util::ZNPList_ZPP_CbSetPair tmp = this->cbpairs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(226)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			if ((tmp2)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(227)
			::zpp_nape::callbacks::ZPP_CbSetPair cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(228)
			cb->zip_listeners = true;
			HX_STACK_LINE(229)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,invalidate_pairs,(void))

Void ZPP_CbSet_obj::invalidate_listeners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","invalidate_listeners",0x9501e78c,"zpp_nape.callbacks.ZPP_CbSet.invalidate_listeners","zpp_nape/callbacks/CbSet.hx",237,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		this->zip_listeners = true;
		HX_STACK_LINE(239)
		this->invalidate_pairs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,invalidate_listeners,(void))

Void ZPP_CbSet_obj::validate_listeners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","validate_listeners",0xf65d9827,"zpp_nape.callbacks.ZPP_CbSet.validate_listeners","zpp_nape/callbacks/CbSet.hx",244,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		bool tmp = this->zip_listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		if ((tmp)){
			HX_STACK_LINE(246)
			this->zip_listeners = false;
			HX_STACK_LINE(247)
			this->realvalidate_listeners();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,validate_listeners,(void))

Void ZPP_CbSet_obj::realvalidate_listeners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","realvalidate_listeners",0xcb5f4f85,"zpp_nape.callbacks.ZPP_CbSet.realvalidate_listeners","zpp_nape/callbacks/CbSet.hx",250,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		tmp->clear();
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(253)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->cbTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(253)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(254)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(254)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				if ((tmp3)){
					HX_STACK_LINE(254)
					break;
				}
				HX_STACK_LINE(255)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(257)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener npre = null();		HX_STACK_VAR(npre,"npre");
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp4 = this->listeners;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener nite = tmp4->head;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(259)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = cb->listeners->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(259)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener cite = tmp5;		HX_STACK_VAR(cite,"cite");
					HX_STACK_LINE(260)
					while((true)){
						HX_STACK_LINE(260)
						bool tmp6 = (cite != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(260)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(260)
						if ((tmp7)){
							HX_STACK_LINE(260)
							break;
						}
						HX_STACK_LINE(261)
						::zpp_nape::callbacks::ZPP_InteractionListener cx = cite->elt;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(262)
						bool tmp8 = (nite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(262)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(262)
						if ((tmp8)){
							HX_STACK_LINE(262)
							tmp9 = (nite->elt == cx);
						}
						else{
							HX_STACK_LINE(262)
							tmp9 = false;
						}
						HX_STACK_LINE(262)
						if ((tmp9)){
							HX_STACK_LINE(263)
							cite = cite->next;
							HX_STACK_LINE(264)
							npre = nite;
							HX_STACK_LINE(265)
							nite = nite->next;
						}
						else{
							HX_STACK_LINE(267)
							bool tmp10 = (nite == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(267)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(267)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(267)
							if ((tmp11)){
								HX_STACK_LINE(267)
								::zpp_nape::callbacks::ZPP_Listener b = nite->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(267)
								bool tmp13 = (cx->precedence > b->precedence);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(267)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(267)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(267)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(267)
								bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(267)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(267)
								if ((tmp18)){
									HX_STACK_LINE(267)
									bool tmp19 = (cx->precedence == b->precedence);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(267)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(267)
									bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(267)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(267)
									bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(267)
									if ((tmp23)){
										HX_STACK_LINE(267)
										tmp12 = (cx->id > b->id);
									}
									else{
										HX_STACK_LINE(267)
										tmp12 = false;
									}
								}
								else{
									HX_STACK_LINE(267)
									tmp12 = true;
								}
							}
							else{
								HX_STACK_LINE(267)
								tmp12 = true;
							}
							HX_STACK_LINE(267)
							if ((tmp12)){
								HX_STACK_LINE(276)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(277)
								{
									HX_STACK_LINE(277)
									::zpp_nape::space::ZPP_Space tmp14 = cx->space;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(277)
									::zpp_nape::space::ZPP_CbSetManager tmp15 = this->manager;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(277)
									::zpp_nape::space::ZPP_CbSetManager tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(277)
									::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(277)
									tmp13 = (tmp14 == tmp17);
								}
								HX_STACK_LINE(276)
								if ((tmp13)){
									HX_STACK_LINE(278)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(278)
									{
										HX_STACK_LINE(278)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp15 = this->listeners;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(278)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp15;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(278)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(278)
										{
											HX_STACK_LINE(278)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(278)
											{
												HX_STACK_LINE(278)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp17 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(278)
												bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(278)
												if ((tmp18)){
													HX_STACK_LINE(278)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp19 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(278)
													ret = tmp19;
												}
												else{
													HX_STACK_LINE(278)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp19 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(278)
													ret = tmp19;
													HX_STACK_LINE(278)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(278)
													ret->next = null();
												}
												HX_STACK_LINE(278)
												Dynamic();
											}
											HX_STACK_LINE(278)
											ret->elt = cx;
											HX_STACK_LINE(278)
											tmp16 = ret;
										}
										HX_STACK_LINE(278)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp16;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(278)
										bool tmp17 = (npre == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(278)
										if ((tmp17)){
											HX_STACK_LINE(278)
											temp->next = _this->head;
											HX_STACK_LINE(278)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(278)
											temp->next = npre->next;
											HX_STACK_LINE(278)
											npre->next = temp;
										}
										HX_STACK_LINE(278)
										bool tmp18 = _this->modified = true;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(278)
										_this->pushmod = tmp18;
										HX_STACK_LINE(278)
										(_this->length)++;
										HX_STACK_LINE(278)
										tmp14 = temp;
									}
									HX_STACK_LINE(278)
									npre = tmp14;
								}
								HX_STACK_LINE(280)
								cite = cite->next;
							}
							else{
								HX_STACK_LINE(283)
								npre = nite;
								HX_STACK_LINE(284)
								nite = nite->next;
							}
						}
					}
				}
				HX_STACK_LINE(288)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,realvalidate_listeners,(void))

Void ZPP_CbSet_obj::invalidate_bodylisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","invalidate_bodylisteners",0xcde5932a,"zpp_nape.callbacks.ZPP_CbSet.invalidate_bodylisteners","zpp_nape/callbacks/CbSet.hx",297,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		this->zip_bodylisteners = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,invalidate_bodylisteners,(void))

Void ZPP_CbSet_obj::validate_bodylisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","validate_bodylisteners",0x3df52d45,"zpp_nape.callbacks.ZPP_CbSet.validate_bodylisteners","zpp_nape/callbacks/CbSet.hx",303,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(304)
		bool tmp = this->zip_bodylisteners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		if ((tmp)){
			HX_STACK_LINE(305)
			this->zip_bodylisteners = false;
			HX_STACK_LINE(306)
			this->realvalidate_bodylisteners();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,validate_bodylisteners,(void))

Void ZPP_CbSet_obj::realvalidate_bodylisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","realvalidate_bodylisteners",0x9b48eba3,"zpp_nape.callbacks.ZPP_CbSet.realvalidate_bodylisteners","zpp_nape/callbacks/CbSet.hx",309,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		::zpp_nape::util::ZNPList_ZPP_BodyListener tmp = this->bodylisteners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		tmp->clear();
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(312)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->cbTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(312)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(313)
			while((true)){
				HX_STACK_LINE(313)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(313)
				if ((tmp3)){
					HX_STACK_LINE(313)
					break;
				}
				HX_STACK_LINE(314)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(316)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener npre = null();		HX_STACK_VAR(npre,"npre");
					HX_STACK_LINE(317)
					::zpp_nape::util::ZNPList_ZPP_BodyListener tmp4 = this->bodylisteners;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(317)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener nite = tmp4->head;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(318)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = cb->bodylisteners->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(318)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener cite = tmp5;		HX_STACK_VAR(cite,"cite");
					HX_STACK_LINE(319)
					while((true)){
						HX_STACK_LINE(319)
						bool tmp6 = (cite != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(319)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(319)
						if ((tmp7)){
							HX_STACK_LINE(319)
							break;
						}
						HX_STACK_LINE(320)
						::zpp_nape::callbacks::ZPP_BodyListener cx = cite->elt;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(321)
						bool tmp8 = (nite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(321)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(321)
						if ((tmp8)){
							HX_STACK_LINE(321)
							tmp9 = (nite->elt == cx);
						}
						else{
							HX_STACK_LINE(321)
							tmp9 = false;
						}
						HX_STACK_LINE(321)
						if ((tmp9)){
							HX_STACK_LINE(322)
							cite = cite->next;
							HX_STACK_LINE(323)
							npre = nite;
							HX_STACK_LINE(324)
							nite = nite->next;
						}
						else{
							HX_STACK_LINE(326)
							bool tmp10 = (nite == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(326)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(326)
							if ((tmp11)){
								HX_STACK_LINE(326)
								::zpp_nape::callbacks::ZPP_Listener b = nite->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(326)
								bool tmp13 = (cx->precedence > b->precedence);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(326)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(326)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(326)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(326)
								bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(326)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(326)
								if ((tmp18)){
									HX_STACK_LINE(326)
									bool tmp19 = (cx->precedence == b->precedence);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(326)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(326)
									bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(326)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(326)
									bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(326)
									if ((tmp23)){
										HX_STACK_LINE(326)
										tmp12 = (cx->id > b->id);
									}
									else{
										HX_STACK_LINE(326)
										tmp12 = false;
									}
								}
								else{
									HX_STACK_LINE(326)
									tmp12 = true;
								}
							}
							else{
								HX_STACK_LINE(326)
								tmp12 = true;
							}
							HX_STACK_LINE(326)
							if ((tmp12)){
								HX_STACK_LINE(335)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(335)
								{
									HX_STACK_LINE(335)
									::zpp_nape::callbacks::ZPP_OptionType _this = cx->options;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(335)
									::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = this->cbTypes;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(335)
									::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = _this->excludes;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(335)
									tmp13 = _this->nonemptyintersection(tmp14,tmp15);
								}
								HX_STACK_LINE(335)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(335)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(335)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(335)
								if ((tmp15)){
									HX_STACK_LINE(336)
									::zpp_nape::space::ZPP_Space tmp17 = cx->space;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(336)
									::zpp_nape::space::ZPP_CbSetManager tmp18 = this->manager;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(336)
									::zpp_nape::space::ZPP_CbSetManager tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(336)
									::zpp_nape::space::ZPP_Space tmp20 = tmp19->space;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(336)
									tmp16 = (tmp17 == tmp20);
								}
								else{
									HX_STACK_LINE(335)
									tmp16 = false;
								}
								HX_STACK_LINE(335)
								if ((tmp16)){
									HX_STACK_LINE(337)
									::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(337)
									{
										HX_STACK_LINE(337)
										::zpp_nape::util::ZNPList_ZPP_BodyListener tmp18 = this->bodylisteners;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(337)
										::zpp_nape::util::ZNPList_ZPP_BodyListener _this = tmp18;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(337)
										::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp20 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(337)
												bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(337)
												if ((tmp21)){
													HX_STACK_LINE(337)
													::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp22 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(337)
													ret = tmp22;
												}
												else{
													HX_STACK_LINE(337)
													::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp22 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(337)
													ret = tmp22;
													HX_STACK_LINE(337)
													::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(337)
													ret->next = null();
												}
												HX_STACK_LINE(337)
												Dynamic();
											}
											HX_STACK_LINE(337)
											ret->elt = cx;
											HX_STACK_LINE(337)
											tmp19 = ret;
										}
										HX_STACK_LINE(337)
										::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = tmp19;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(337)
										bool tmp20 = (npre == null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(337)
										if ((tmp20)){
											HX_STACK_LINE(337)
											temp->next = _this->head;
											HX_STACK_LINE(337)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(337)
											temp->next = npre->next;
											HX_STACK_LINE(337)
											npre->next = temp;
										}
										HX_STACK_LINE(337)
										bool tmp21 = _this->modified = true;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(337)
										_this->pushmod = tmp21;
										HX_STACK_LINE(337)
										(_this->length)++;
										HX_STACK_LINE(337)
										tmp17 = temp;
									}
									HX_STACK_LINE(337)
									npre = tmp17;
								}
								HX_STACK_LINE(339)
								cite = cite->next;
							}
							else{
								HX_STACK_LINE(342)
								npre = nite;
								HX_STACK_LINE(343)
								nite = nite->next;
							}
						}
					}
				}
				HX_STACK_LINE(347)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,realvalidate_bodylisteners,(void))

Void ZPP_CbSet_obj::invalidate_conlisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","invalidate_conlisteners",0x5fc75110,"zpp_nape.callbacks.ZPP_CbSet.invalidate_conlisteners","zpp_nape/callbacks/CbSet.hx",356,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(356)
		this->zip_conlisteners = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,invalidate_conlisteners,(void))

Void ZPP_CbSet_obj::validate_conlisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","validate_conlisteners",0xc54db355,"zpp_nape.callbacks.ZPP_CbSet.validate_conlisteners","zpp_nape/callbacks/CbSet.hx",362,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		bool tmp = this->zip_conlisteners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		if ((tmp)){
			HX_STACK_LINE(364)
			this->zip_conlisteners = false;
			HX_STACK_LINE(365)
			this->realvalidate_conlisteners();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,validate_conlisteners,(void))

Void ZPP_CbSet_obj::realvalidate_conlisteners( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","realvalidate_conlisteners",0x7b1a6ab7,"zpp_nape.callbacks.ZPP_CbSet.realvalidate_conlisteners","zpp_nape/callbacks/CbSet.hx",368,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp = this->conlisteners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		tmp->clear();
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(371)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->cbTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(372)
			while((true)){
				HX_STACK_LINE(372)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(372)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(372)
				if ((tmp3)){
					HX_STACK_LINE(372)
					break;
				}
				HX_STACK_LINE(373)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(374)
				{
					HX_STACK_LINE(375)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener npre = null();		HX_STACK_VAR(npre,"npre");
					HX_STACK_LINE(376)
					::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp4 = this->conlisteners;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(376)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nite = tmp4->head;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(377)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = cb->conlisteners->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(377)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cite = tmp5;		HX_STACK_VAR(cite,"cite");
					HX_STACK_LINE(378)
					while((true)){
						HX_STACK_LINE(378)
						bool tmp6 = (cite != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(378)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(378)
						if ((tmp7)){
							HX_STACK_LINE(378)
							break;
						}
						HX_STACK_LINE(379)
						::zpp_nape::callbacks::ZPP_ConstraintListener cx = cite->elt;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(380)
						bool tmp8 = (nite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(380)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(380)
						if ((tmp8)){
							HX_STACK_LINE(380)
							tmp9 = (nite->elt == cx);
						}
						else{
							HX_STACK_LINE(380)
							tmp9 = false;
						}
						HX_STACK_LINE(380)
						if ((tmp9)){
							HX_STACK_LINE(381)
							cite = cite->next;
							HX_STACK_LINE(382)
							npre = nite;
							HX_STACK_LINE(383)
							nite = nite->next;
						}
						else{
							HX_STACK_LINE(385)
							bool tmp10 = (nite == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(385)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(385)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(385)
							if ((tmp11)){
								HX_STACK_LINE(385)
								::zpp_nape::callbacks::ZPP_Listener b = nite->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(385)
								bool tmp13 = (cx->precedence > b->precedence);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(385)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(385)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(385)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(385)
								bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(385)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(385)
								if ((tmp18)){
									HX_STACK_LINE(385)
									bool tmp19 = (cx->precedence == b->precedence);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(385)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(385)
									bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(385)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(385)
									bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(385)
									if ((tmp23)){
										HX_STACK_LINE(385)
										tmp12 = (cx->id > b->id);
									}
									else{
										HX_STACK_LINE(385)
										tmp12 = false;
									}
								}
								else{
									HX_STACK_LINE(385)
									tmp12 = true;
								}
							}
							else{
								HX_STACK_LINE(385)
								tmp12 = true;
							}
							HX_STACK_LINE(385)
							if ((tmp12)){
								HX_STACK_LINE(394)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(394)
								{
									HX_STACK_LINE(394)
									::zpp_nape::callbacks::ZPP_OptionType _this = cx->options;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(394)
									::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = this->cbTypes;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(394)
									::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = _this->excludes;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(394)
									tmp13 = _this->nonemptyintersection(tmp14,tmp15);
								}
								HX_STACK_LINE(394)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(394)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(394)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(394)
								if ((tmp15)){
									HX_STACK_LINE(395)
									::zpp_nape::space::ZPP_Space tmp17 = cx->space;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(395)
									::zpp_nape::space::ZPP_CbSetManager tmp18 = this->manager;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(395)
									::zpp_nape::space::ZPP_CbSetManager tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(395)
									::zpp_nape::space::ZPP_Space tmp20 = tmp19->space;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(395)
									tmp16 = (tmp17 == tmp20);
								}
								else{
									HX_STACK_LINE(394)
									tmp16 = false;
								}
								HX_STACK_LINE(394)
								if ((tmp16)){
									HX_STACK_LINE(396)
									::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(396)
									{
										HX_STACK_LINE(396)
										::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp18 = this->conlisteners;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(396)
										::zpp_nape::util::ZNPList_ZPP_ConstraintListener _this = tmp18;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(396)
										::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(396)
										{
											HX_STACK_LINE(396)
											::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(396)
											{
												HX_STACK_LINE(396)
												::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp20 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(396)
												bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(396)
												if ((tmp21)){
													HX_STACK_LINE(396)
													::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp22 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(396)
													ret = tmp22;
												}
												else{
													HX_STACK_LINE(396)
													::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp22 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(396)
													ret = tmp22;
													HX_STACK_LINE(396)
													::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(396)
													ret->next = null();
												}
												HX_STACK_LINE(396)
												Dynamic();
											}
											HX_STACK_LINE(396)
											ret->elt = cx;
											HX_STACK_LINE(396)
											tmp19 = ret;
										}
										HX_STACK_LINE(396)
										::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = tmp19;		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(396)
										bool tmp20 = (npre == null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(396)
										if ((tmp20)){
											HX_STACK_LINE(396)
											temp->next = _this->head;
											HX_STACK_LINE(396)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(396)
											temp->next = npre->next;
											HX_STACK_LINE(396)
											npre->next = temp;
										}
										HX_STACK_LINE(396)
										bool tmp21 = _this->modified = true;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(396)
										_this->pushmod = tmp21;
										HX_STACK_LINE(396)
										(_this->length)++;
										HX_STACK_LINE(396)
										tmp17 = temp;
									}
									HX_STACK_LINE(396)
									npre = tmp17;
								}
								HX_STACK_LINE(398)
								cite = cite->next;
							}
							else{
								HX_STACK_LINE(401)
								npre = nite;
								HX_STACK_LINE(402)
								nite = nite->next;
							}
						}
					}
				}
				HX_STACK_LINE(406)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,realvalidate_conlisteners,(void))

Void ZPP_CbSet_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","validate",0xf2926027,"zpp_nape.callbacks.ZPP_CbSet.validate","zpp_nape/callbacks/CbSet.hx",410,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(412)
			bool tmp = this->zip_listeners;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(412)
			if ((tmp)){
				HX_STACK_LINE(412)
				this->zip_listeners = false;
				HX_STACK_LINE(412)
				this->realvalidate_listeners();
			}
		}
		HX_STACK_LINE(413)
		{
			HX_STACK_LINE(413)
			bool tmp = this->zip_bodylisteners;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(413)
			if ((tmp)){
				HX_STACK_LINE(413)
				this->zip_bodylisteners = false;
				HX_STACK_LINE(413)
				this->realvalidate_bodylisteners();
			}
		}
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			bool tmp = this->zip_conlisteners;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(414)
			if ((tmp)){
				HX_STACK_LINE(414)
				this->zip_conlisteners = false;
				HX_STACK_LINE(414)
				this->realvalidate_conlisteners();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,validate,(void))

Void ZPP_CbSet_obj::addConstraint( ::zpp_nape::constraint::ZPP_Constraint con){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","addConstraint",0x82ffacad,"zpp_nape.callbacks.ZPP_CbSet.addConstraint","zpp_nape/callbacks/CbSet.hx",422,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(con,"con")
		HX_STACK_LINE(423)
		::zpp_nape::util::ZNPList_ZPP_Constraint tmp = this->constraints;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(423)
		::zpp_nape::constraint::ZPP_Constraint tmp1 = con;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,addConstraint,(void))

Void ZPP_CbSet_obj::addInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","addInteractor",0xada372a9,"zpp_nape.callbacks.ZPP_CbSet.addInteractor","zpp_nape/callbacks/CbSet.hx",427,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(intx,"intx")
		HX_STACK_LINE(428)
		::zpp_nape::util::ZNPList_ZPP_Interactor tmp = this->interactors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		::zpp_nape::phys::ZPP_Interactor tmp1 = intx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,addInteractor,(void))

Void ZPP_CbSet_obj::remConstraint( ::zpp_nape::constraint::ZPP_Constraint con){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","remConstraint",0xee593526,"zpp_nape.callbacks.ZPP_CbSet.remConstraint","zpp_nape/callbacks/CbSet.hx",432,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(con,"con")
		HX_STACK_LINE(433)
		::zpp_nape::util::ZNPList_ZPP_Constraint tmp = this->constraints;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(433)
		::zpp_nape::constraint::ZPP_Constraint tmp1 = con;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(433)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,remConstraint,(void))

Void ZPP_CbSet_obj::remInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","remInteractor",0x18fcfb22,"zpp_nape.callbacks.ZPP_CbSet.remInteractor","zpp_nape/callbacks/CbSet.hx",437,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(intx,"intx")
		HX_STACK_LINE(438)
		::zpp_nape::util::ZNPList_ZPP_Interactor tmp = this->interactors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		::zpp_nape::phys::ZPP_Interactor tmp1 = intx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,remInteractor,(void))

Void ZPP_CbSet_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","free",0xdf8bcfbd,"zpp_nape.callbacks.ZPP_CbSet.free","zpp_nape/callbacks/CbSet.hx",471,0x58b6155e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(497)
		::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		tmp->clear();
		HX_STACK_LINE(498)
		this->zip_listeners = true;
		HX_STACK_LINE(499)
		::zpp_nape::util::ZNPList_ZPP_BodyListener tmp1 = this->bodylisteners;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(499)
		tmp1->clear();
		HX_STACK_LINE(500)
		this->zip_bodylisteners = true;
		HX_STACK_LINE(501)
		::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp2 = this->conlisteners;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		tmp2->clear();
		HX_STACK_LINE(502)
		this->zip_conlisteners = true;
		HX_STACK_LINE(504)
		while((true)){
			HX_STACK_LINE(504)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = this->cbTypes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(504)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = tmp3->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(504)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(504)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(504)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(504)
			if ((tmp7)){
				HX_STACK_LINE(504)
				break;
			}
			HX_STACK_LINE(505)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = this->cbTypes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(505)
			::zpp_nape::callbacks::ZPP_CbType tmp9 = tmp8->pop_unsafe();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(505)
			::zpp_nape::callbacks::ZPP_CbType cb = tmp9;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(506)
			cb->cbsets->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(509)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,free,(void))

Void ZPP_CbSet_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","alloc",0xd5d72044,"zpp_nape.callbacks.ZPP_CbSet.alloc","zpp_nape/callbacks/CbSet.hx",520,0x58b6155e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSet_obj,alloc,(void))

::zpp_nape::callbacks::ZPP_CbSet ZPP_CbSet_obj::zpp_pool;

bool ZPP_CbSet_obj::setlt( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","setlt",0x2e732279,"zpp_nape.callbacks.ZPP_CbSet.setlt","zpp_nape/callbacks/CbSet.hx",440,0x58b6155e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(441)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = a->cbTypes->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	::zpp_nape::util::ZNPNode_ZPP_CbType i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(442)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = b->cbTypes->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	::zpp_nape::util::ZNPNode_ZPP_CbType j = tmp1;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(443)
	while((true)){
		HX_STACK_LINE(443)
		bool tmp2 = (i != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		if ((tmp2)){
			HX_STACK_LINE(443)
			tmp3 = (j != null());
		}
		else{
			HX_STACK_LINE(443)
			tmp3 = false;
		}
		HX_STACK_LINE(443)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		if ((tmp4)){
			HX_STACK_LINE(443)
			break;
		}
		HX_STACK_LINE(444)
		::zpp_nape::callbacks::ZPP_CbType ca = i->elt;		HX_STACK_VAR(ca,"ca");
		HX_STACK_LINE(445)
		::zpp_nape::callbacks::ZPP_CbType cb = j->elt;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(446)
		bool tmp5 = (ca->id < cb->id);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(446)
		if ((tmp5)){
			HX_STACK_LINE(446)
			return true;
		}
		HX_STACK_LINE(447)
		bool tmp6 = (cb->id < ca->id);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(447)
		if ((tmp6)){
			HX_STACK_LINE(447)
			return false;
		}
		else{
			HX_STACK_LINE(449)
			i = i->next;
			HX_STACK_LINE(450)
			j = j->next;
		}
	}
	HX_STACK_LINE(453)
	bool tmp2 = (j != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(453)
	if ((tmp2)){
		HX_STACK_LINE(453)
		tmp3 = (i == null());
	}
	else{
		HX_STACK_LINE(453)
		tmp3 = false;
	}
	HX_STACK_LINE(453)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSet_obj,setlt,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_CbSet_obj::get( ::zpp_nape::util::ZNPList_ZPP_CbType cbTypes){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","get",0xbe6c1aa5,"zpp_nape.callbacks.ZPP_CbSet.get","zpp_nape/callbacks/CbSet.hx",545,0x58b6155e)
	HX_STACK_ARG(cbTypes,"cbTypes")
	HX_STACK_LINE(546)
	::zpp_nape::callbacks::ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(547)
	{
		HX_STACK_LINE(548)
		::zpp_nape::callbacks::ZPP_CbSet tmp = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		if ((tmp1)){
			HX_STACK_LINE(549)
			::zpp_nape::callbacks::ZPP_CbSet tmp2 = ::zpp_nape::callbacks::ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(549)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(555)
			::zpp_nape::callbacks::ZPP_CbSet tmp2 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(555)
			ret = tmp2;
			HX_STACK_LINE(556)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = ret->next;
			HX_STACK_LINE(557)
			ret->next = null();
		}
		HX_STACK_LINE(562)
		Dynamic();
	}
	HX_STACK_LINE(564)
	::zpp_nape::util::ZNPNode_ZPP_CbType ite = null();		HX_STACK_VAR(ite,"ite");
	HX_STACK_LINE(567)
	{
		HX_STACK_LINE(568)
		::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(569)
		while((true)){
			HX_STACK_LINE(569)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(569)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(569)
			if ((tmp1)){
				HX_STACK_LINE(569)
				break;
			}
			HX_STACK_LINE(570)
			::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(571)
			{
				HX_STACK_LINE(572)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = ite;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(572)
				::zpp_nape::callbacks::ZPP_CbType tmp3 = cb;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(572)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ret->cbTypes->insert(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(572)
				ite = tmp4;
				HX_STACK_LINE(573)
				::zpp_nape::callbacks::ZPP_CbSet tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(573)
				cb->cbsets->add(tmp5);
			}
			HX_STACK_LINE(575)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(578)
	::zpp_nape::callbacks::ZPP_CbSet tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSet_obj,get,return )

bool ZPP_CbSet_obj::compatible( ::zpp_nape::callbacks::ZPP_InteractionListener i,::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","compatible",0xda413125,"zpp_nape.callbacks.ZPP_CbSet.compatible","zpp_nape/callbacks/CbSet.hx",581,0x58b6155e)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(582)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(582)
	{
		HX_STACK_LINE(582)
		::zpp_nape::callbacks::ZPP_OptionType _this = i->options1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType xs = a->cbTypes;		HX_STACK_VAR(xs,"xs");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = xs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = _this->includes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(582)
		bool tmp7 = _this->nonemptyintersection(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(582)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(582)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(582)
		if ((tmp9)){
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = xs;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp11 = _this->excludes;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(582)
			bool tmp16 = _this->nonemptyintersection(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(582)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(582)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(582)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(582)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(582)
			tmp = !(tmp20);
		}
		else{
			HX_STACK_LINE(582)
			tmp = false;
		}
	}
	HX_STACK_LINE(582)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(582)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(582)
	if ((tmp1)){
		HX_STACK_LINE(582)
		::zpp_nape::callbacks::ZPP_OptionType _this = i->options2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType xs = b->cbTypes;		HX_STACK_VAR(xs,"xs");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = xs;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp4 = _this->includes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(582)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(582)
		bool tmp11 = _this->nonemptyintersection(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(582)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(582)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(582)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(582)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(582)
		if ((tmp15)){
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp16 = xs;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp17 = _this->excludes;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(582)
			bool tmp24 = _this->nonemptyintersection(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(582)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(582)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(582)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(582)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(582)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(582)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(582)
			tmp2 = !(tmp30);
		}
		else{
			HX_STACK_LINE(582)
			tmp2 = false;
		}
	}
	else{
		HX_STACK_LINE(582)
		tmp2 = false;
	}
	HX_STACK_LINE(582)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(582)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(582)
	if ((tmp3)){
		HX_STACK_LINE(582)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			::zpp_nape::callbacks::ZPP_OptionType _this = i->options2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType xs = a->cbTypes;		HX_STACK_VAR(xs,"xs");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = xs;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = _this->includes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(582)
			bool tmp14 = _this->nonemptyintersection(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(582)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(582)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(582)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(582)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(582)
			if ((tmp18)){
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp19 = xs;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp20 = _this->excludes;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(582)
				bool tmp27 = _this->nonemptyintersection(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(582)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(582)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(582)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(582)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(582)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(582)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(582)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(582)
				tmp5 = tmp34;
			}
			else{
				HX_STACK_LINE(582)
				tmp5 = false;
			}
		}
		HX_STACK_LINE(582)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(582)
		if ((tmp6)){
			HX_STACK_LINE(582)
			::zpp_nape::callbacks::ZPP_OptionType _this = i->options1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType xs = b->cbTypes;		HX_STACK_VAR(xs,"xs");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = xs;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = _this->includes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(582)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(582)
			bool tmp15 = _this->nonemptyintersection(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(582)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(582)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(582)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(582)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(582)
			if ((tmp19)){
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp20 = xs;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp21 = _this->excludes;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(582)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(582)
				bool tmp28 = _this->nonemptyintersection(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(582)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(582)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(582)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(582)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(582)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(582)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(582)
				tmp4 = !(tmp34);
			}
			else{
				HX_STACK_LINE(582)
				tmp4 = false;
			}
		}
		else{
			HX_STACK_LINE(582)
			tmp4 = false;
		}
	}
	else{
		HX_STACK_LINE(582)
		tmp4 = true;
	}
	HX_STACK_LINE(582)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_CbSet_obj,compatible,return )

bool ZPP_CbSet_obj::empty_intersection( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","empty_intersection",0x6822b54c,"zpp_nape.callbacks.ZPP_CbSet.empty_intersection","zpp_nape/callbacks/CbSet.hx",585,0x58b6155e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(586)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	{
		HX_STACK_LINE(586)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(586)
			int tmp2 = a->cbpairs->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(586)
			int tmp3 = b->cbpairs->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(586)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(586)
			::zpp_nape::util::ZNPList_ZPP_CbSetPair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(586)
			if ((tmp4)){
				HX_STACK_LINE(586)
				tmp5 = a->cbpairs;
			}
			else{
				HX_STACK_LINE(586)
				tmp5 = b->cbpairs;
			}
			HX_STACK_LINE(586)
			::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs = tmp5;		HX_STACK_VAR(pairs,"pairs");
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(586)
				while((true)){
					HX_STACK_LINE(586)
					bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(586)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(586)
					if ((tmp7)){
						HX_STACK_LINE(586)
						break;
					}
					HX_STACK_LINE(586)
					::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(586)
					{
						HX_STACK_LINE(586)
						bool tmp8 = (p->a == a);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(586)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(586)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(586)
						if ((tmp9)){
							HX_STACK_LINE(586)
							tmp10 = (p->b == b);
						}
						else{
							HX_STACK_LINE(586)
							tmp10 = false;
						}
						HX_STACK_LINE(586)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(586)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(586)
						if ((tmp11)){
							HX_STACK_LINE(586)
							bool tmp13 = (p->a == b);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(586)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(586)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(586)
							if ((tmp15)){
								HX_STACK_LINE(586)
								tmp12 = (p->b == a);
							}
							else{
								HX_STACK_LINE(586)
								tmp12 = false;
							}
						}
						else{
							HX_STACK_LINE(586)
							tmp12 = true;
						}
						HX_STACK_LINE(586)
						if ((tmp12)){
							HX_STACK_LINE(586)
							ret = p;
							HX_STACK_LINE(586)
							break;
						}
					}
					HX_STACK_LINE(586)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(586)
			bool tmp6 = (ret == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(586)
			if ((tmp6)){
				HX_STACK_LINE(586)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(586)
				{
					HX_STACK_LINE(586)
					::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(586)
					{
						HX_STACK_LINE(586)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(586)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(586)
						if ((tmp9)){
							HX_STACK_LINE(586)
							::zpp_nape::callbacks::ZPP_CbSetPair tmp10 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(586)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(586)
							::zpp_nape::callbacks::ZPP_CbSetPair tmp10 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(586)
							ret1 = tmp10;
							HX_STACK_LINE(586)
							::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(586)
							ret1->next = null();
						}
						HX_STACK_LINE(586)
						ret1->zip_listeners = true;
					}
					HX_STACK_LINE(586)
					::zpp_nape::callbacks::ZPP_CbSet tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(586)
					::zpp_nape::callbacks::ZPP_CbSet tmp9 = b;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(586)
					bool tmp10 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(586)
					if ((tmp10)){
						HX_STACK_LINE(586)
						ret1->a = a;
						HX_STACK_LINE(586)
						ret1->b = b;
					}
					else{
						HX_STACK_LINE(586)
						ret1->a = b;
						HX_STACK_LINE(586)
						ret1->b = a;
					}
					HX_STACK_LINE(586)
					tmp7 = ret1;
				}
				HX_STACK_LINE(586)
				ret = tmp7;
				HX_STACK_LINE(586)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(586)
				a->cbpairs->add(tmp8);
				HX_STACK_LINE(586)
				bool tmp9 = (b != a);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(586)
				if ((tmp9)){
					HX_STACK_LINE(586)
					::zpp_nape::callbacks::ZPP_CbSetPair tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(586)
					b->cbpairs->add(tmp10);
				}
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				bool tmp7 = ret->zip_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(586)
				if ((tmp7)){
					HX_STACK_LINE(586)
					ret->zip_listeners = false;
					HX_STACK_LINE(586)
					ret->__validate();
				}
			}
			HX_STACK_LINE(586)
			tmp1 = ret;
		}
		HX_STACK_LINE(586)
		::zpp_nape::callbacks::ZPP_CbSetPair _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(586)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = _this->listeners->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(586)
		tmp = (tmp2 == null());
	}
	HX_STACK_LINE(586)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSet_obj,empty_intersection,return )

bool ZPP_CbSet_obj::single_intersection( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b,::zpp_nape::callbacks::ZPP_InteractionListener i){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","single_intersection",0x2d1641af,"zpp_nape.callbacks.ZPP_CbSet.single_intersection","zpp_nape/callbacks/CbSet.hx",588,0x58b6155e)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(589)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(589)
	{
		HX_STACK_LINE(589)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		{
			HX_STACK_LINE(589)
			::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(589)
			int tmp2 = a->cbpairs->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(589)
			int tmp3 = b->cbpairs->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(589)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(589)
			::zpp_nape::util::ZNPList_ZPP_CbSetPair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(589)
			if ((tmp4)){
				HX_STACK_LINE(589)
				tmp5 = a->cbpairs;
			}
			else{
				HX_STACK_LINE(589)
				tmp5 = b->cbpairs;
			}
			HX_STACK_LINE(589)
			::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs = tmp5;		HX_STACK_VAR(pairs,"pairs");
			HX_STACK_LINE(589)
			{
				HX_STACK_LINE(589)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(589)
				while((true)){
					HX_STACK_LINE(589)
					bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(589)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(589)
					if ((tmp7)){
						HX_STACK_LINE(589)
						break;
					}
					HX_STACK_LINE(589)
					::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(589)
					{
						HX_STACK_LINE(589)
						bool tmp8 = (p->a == a);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(589)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(589)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(589)
						if ((tmp9)){
							HX_STACK_LINE(589)
							tmp10 = (p->b == b);
						}
						else{
							HX_STACK_LINE(589)
							tmp10 = false;
						}
						HX_STACK_LINE(589)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(589)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(589)
						if ((tmp11)){
							HX_STACK_LINE(589)
							bool tmp13 = (p->a == b);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(589)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(589)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(589)
							if ((tmp15)){
								HX_STACK_LINE(589)
								tmp12 = (p->b == a);
							}
							else{
								HX_STACK_LINE(589)
								tmp12 = false;
							}
						}
						else{
							HX_STACK_LINE(589)
							tmp12 = true;
						}
						HX_STACK_LINE(589)
						if ((tmp12)){
							HX_STACK_LINE(589)
							ret = p;
							HX_STACK_LINE(589)
							break;
						}
					}
					HX_STACK_LINE(589)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(589)
			bool tmp6 = (ret == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(589)
			if ((tmp6)){
				HX_STACK_LINE(589)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(589)
				{
					HX_STACK_LINE(589)
					::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(589)
					{
						HX_STACK_LINE(589)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(589)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(589)
						if ((tmp9)){
							HX_STACK_LINE(589)
							::zpp_nape::callbacks::ZPP_CbSetPair tmp10 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(589)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(589)
							::zpp_nape::callbacks::ZPP_CbSetPair tmp10 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(589)
							ret1 = tmp10;
							HX_STACK_LINE(589)
							::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(589)
							ret1->next = null();
						}
						HX_STACK_LINE(589)
						ret1->zip_listeners = true;
					}
					HX_STACK_LINE(589)
					::zpp_nape::callbacks::ZPP_CbSet tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(589)
					::zpp_nape::callbacks::ZPP_CbSet tmp9 = b;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(589)
					bool tmp10 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(589)
					if ((tmp10)){
						HX_STACK_LINE(589)
						ret1->a = a;
						HX_STACK_LINE(589)
						ret1->b = b;
					}
					else{
						HX_STACK_LINE(589)
						ret1->a = b;
						HX_STACK_LINE(589)
						ret1->b = a;
					}
					HX_STACK_LINE(589)
					tmp7 = ret1;
				}
				HX_STACK_LINE(589)
				ret = tmp7;
				HX_STACK_LINE(589)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(589)
				a->cbpairs->add(tmp8);
				HX_STACK_LINE(589)
				bool tmp9 = (b != a);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(589)
				if ((tmp9)){
					HX_STACK_LINE(589)
					::zpp_nape::callbacks::ZPP_CbSetPair tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(589)
					b->cbpairs->add(tmp10);
				}
			}
			HX_STACK_LINE(589)
			{
				HX_STACK_LINE(589)
				bool tmp7 = ret->zip_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(589)
				if ((tmp7)){
					HX_STACK_LINE(589)
					ret->zip_listeners = false;
					HX_STACK_LINE(589)
					ret->__validate();
				}
			}
			HX_STACK_LINE(589)
			tmp1 = ret;
		}
		HX_STACK_LINE(589)
		::zpp_nape::callbacks::ZPP_CbSetPair _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(589)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = _this->listeners->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(589)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ite = tmp2;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(589)
		bool tmp3 = (ite != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(589)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(589)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(589)
		if ((tmp4)){
			HX_STACK_LINE(589)
			tmp5 = (ite->elt == i);
		}
		else{
			HX_STACK_LINE(589)
			tmp5 = false;
		}
		HX_STACK_LINE(589)
		if ((tmp5)){
			HX_STACK_LINE(589)
			tmp = (ite->next == null());
		}
		else{
			HX_STACK_LINE(589)
			tmp = false;
		}
	}
	HX_STACK_LINE(589)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_CbSet_obj,single_intersection,return )

Void ZPP_CbSet_obj::find_all( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b,int event,Dynamic cb){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSet","find_all",0x947eae6c,"zpp_nape.callbacks.ZPP_CbSet.find_all","zpp_nape/callbacks/CbSet.hx",593,0x58b6155e)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(593)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(593)
			int tmp1 = a->cbpairs->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(593)
			int tmp2 = b->cbpairs->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(593)
			bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(593)
			::zpp_nape::util::ZNPList_ZPP_CbSetPair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(593)
			if ((tmp3)){
				HX_STACK_LINE(593)
				tmp4 = a->cbpairs;
			}
			else{
				HX_STACK_LINE(593)
				tmp4 = b->cbpairs;
			}
			HX_STACK_LINE(593)
			::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs = tmp4;		HX_STACK_VAR(pairs,"pairs");
			HX_STACK_LINE(593)
			{
				HX_STACK_LINE(593)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(593)
				while((true)){
					HX_STACK_LINE(593)
					bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(593)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(593)
					if ((tmp6)){
						HX_STACK_LINE(593)
						break;
					}
					HX_STACK_LINE(593)
					::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(593)
					{
						HX_STACK_LINE(593)
						bool tmp7 = (p->a == a);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(593)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(593)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(593)
						if ((tmp8)){
							HX_STACK_LINE(593)
							tmp9 = (p->b == b);
						}
						else{
							HX_STACK_LINE(593)
							tmp9 = false;
						}
						HX_STACK_LINE(593)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(593)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(593)
						if ((tmp10)){
							HX_STACK_LINE(593)
							bool tmp12 = (p->a == b);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(593)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(593)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(593)
							if ((tmp14)){
								HX_STACK_LINE(593)
								tmp11 = (p->b == a);
							}
							else{
								HX_STACK_LINE(593)
								tmp11 = false;
							}
						}
						else{
							HX_STACK_LINE(593)
							tmp11 = true;
						}
						HX_STACK_LINE(593)
						if ((tmp11)){
							HX_STACK_LINE(593)
							ret = p;
							HX_STACK_LINE(593)
							break;
						}
					}
					HX_STACK_LINE(593)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(593)
			bool tmp5 = (ret == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(593)
			if ((tmp5)){
				HX_STACK_LINE(593)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(593)
				{
					HX_STACK_LINE(593)
					::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(593)
					{
						HX_STACK_LINE(593)
						::zpp_nape::callbacks::ZPP_CbSetPair tmp7 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(593)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(593)
						if ((tmp8)){
							HX_STACK_LINE(593)
							::zpp_nape::callbacks::ZPP_CbSetPair tmp9 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(593)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(593)
							::zpp_nape::callbacks::ZPP_CbSetPair tmp9 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(593)
							ret1 = tmp9;
							HX_STACK_LINE(593)
							::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(593)
							ret1->next = null();
						}
						HX_STACK_LINE(593)
						ret1->zip_listeners = true;
					}
					HX_STACK_LINE(593)
					::zpp_nape::callbacks::ZPP_CbSet tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(593)
					::zpp_nape::callbacks::ZPP_CbSet tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(593)
					bool tmp9 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(593)
					if ((tmp9)){
						HX_STACK_LINE(593)
						ret1->a = a;
						HX_STACK_LINE(593)
						ret1->b = b;
					}
					else{
						HX_STACK_LINE(593)
						ret1->a = b;
						HX_STACK_LINE(593)
						ret1->b = a;
					}
					HX_STACK_LINE(593)
					tmp6 = ret1;
				}
				HX_STACK_LINE(593)
				ret = tmp6;
				HX_STACK_LINE(593)
				::zpp_nape::callbacks::ZPP_CbSetPair tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(593)
				a->cbpairs->add(tmp7);
				HX_STACK_LINE(593)
				bool tmp8 = (b != a);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(593)
				if ((tmp8)){
					HX_STACK_LINE(593)
					::zpp_nape::callbacks::ZPP_CbSetPair tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(593)
					b->cbpairs->add(tmp9);
				}
			}
			HX_STACK_LINE(593)
			{
				HX_STACK_LINE(593)
				bool tmp6 = ret->zip_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(593)
				if ((tmp6)){
					HX_STACK_LINE(593)
					ret->zip_listeners = false;
					HX_STACK_LINE(593)
					ret->__validate();
				}
			}
			HX_STACK_LINE(593)
			tmp = ret;
		}
		HX_STACK_LINE(593)
		::zpp_nape::callbacks::ZPP_CbSetPair _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = _this->listeners->head;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(593)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(593)
			while((true)){
				HX_STACK_LINE(593)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(593)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(593)
				if ((tmp3)){
					HX_STACK_LINE(593)
					break;
				}
				HX_STACK_LINE(593)
				::zpp_nape::callbacks::ZPP_InteractionListener x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(593)
				{
					HX_STACK_LINE(593)
					bool tmp4 = (x->event == event);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(593)
					if ((tmp4)){
						HX_STACK_LINE(593)
						::zpp_nape::callbacks::ZPP_InteractionListener tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(593)
						cb(tmp5).Cast< Void >();
					}
				}
				HX_STACK_LINE(593)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_CbSet_obj,find_all,(void))


ZPP_CbSet_obj::ZPP_CbSet_obj()
{
}

void ZPP_CbSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbSet);
	HX_MARK_MEMBER_NAME(cbTypes,"cbTypes");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(cbpairs,"cbpairs");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_MEMBER_NAME(zip_listeners,"zip_listeners");
	HX_MARK_MEMBER_NAME(bodylisteners,"bodylisteners");
	HX_MARK_MEMBER_NAME(zip_bodylisteners,"zip_bodylisteners");
	HX_MARK_MEMBER_NAME(conlisteners,"conlisteners");
	HX_MARK_MEMBER_NAME(zip_conlisteners,"zip_conlisteners");
	HX_MARK_MEMBER_NAME(interactors,"interactors");
	HX_MARK_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_END_CLASS();
}

void ZPP_CbSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cbTypes,"cbTypes");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(cbpairs,"cbpairs");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	HX_VISIT_MEMBER_NAME(zip_listeners,"zip_listeners");
	HX_VISIT_MEMBER_NAME(bodylisteners,"bodylisteners");
	HX_VISIT_MEMBER_NAME(zip_bodylisteners,"zip_bodylisteners");
	HX_VISIT_MEMBER_NAME(conlisteners,"conlisteners");
	HX_VISIT_MEMBER_NAME(zip_conlisteners,"zip_conlisteners");
	HX_VISIT_MEMBER_NAME(interactors,"interactors");
	HX_VISIT_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
}

Dynamic ZPP_CbSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return cbTypes; }
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"cbpairs") ) { return cbpairs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { return increment_dyn(); }
		if (HX_FIELD_EQ(inName,"decrement") ) { return decrement_dyn(); }
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { return interactors; }
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conlisteners") ) { return conlisteners; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zip_listeners") ) { return zip_listeners; }
		if (HX_FIELD_EQ(inName,"bodylisteners") ) { return bodylisteners; }
		if (HX_FIELD_EQ(inName,"addConstraint") ) { return addConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"addInteractor") ) { return addInteractor_dyn(); }
		if (HX_FIELD_EQ(inName,"remConstraint") ) { return remConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"remInteractor") ) { return remInteractor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidate_pairs") ) { return invalidate_pairs_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_conlisteners") ) { return zip_conlisteners; }
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { return wrap_interactors; }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"zip_bodylisteners") ) { return zip_bodylisteners; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"validate_listeners") ) { return validate_listeners_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"invalidate_listeners") ) { return invalidate_listeners_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validate_conlisteners") ) { return validate_conlisteners_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"realvalidate_listeners") ) { return realvalidate_listeners_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_bodylisteners") ) { return validate_bodylisteners_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidate_conlisteners") ) { return invalidate_conlisteners_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidate_bodylisteners") ) { return invalidate_bodylisteners_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"realvalidate_conlisteners") ) { return realvalidate_conlisteners_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"realvalidate_bodylisteners") ) { return realvalidate_bodylisteners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_CbSet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setlt") ) { outValue = setlt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		if (HX_FIELD_EQ(inName,"find_all") ) { outValue = find_all_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compatible") ) { outValue = compatible_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"empty_intersection") ) { outValue = empty_intersection_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"single_intersection") ) { outValue = single_intersection_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_CbSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { cbTypes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::zpp_nape::space::ZPP_CbSetManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbpairs") ) { cbpairs=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSetPair >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_InteractionListener >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { interactors=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conlisteners") ) { conlisteners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_ConstraintListener >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zip_listeners") ) { zip_listeners=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bodylisteners") ) { bodylisteners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_BodyListener >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"zip_conlisteners") ) { zip_conlisteners=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { wrap_interactors=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"zip_bodylisteners") ) { zip_bodylisteners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_CbSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return true; }
	}
	return false;
}

void ZPP_CbSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	outFields->push(HX_HCSTRING("cbpairs","\x1a","\x04","\x15","\x01"));
	outFields->push(HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"));
	outFields->push(HX_HCSTRING("zip_listeners","\x61","\x93","\xbf","\xe5"));
	outFields->push(HX_HCSTRING("bodylisteners","\x9d","\x86","\x53","\x63"));
	outFields->push(HX_HCSTRING("zip_bodylisteners","\x7f","\x4d","\xae","\xea"));
	outFields->push(HX_HCSTRING("conlisteners","\xfd","\xcc","\x05","\xe1"));
	outFields->push(HX_HCSTRING("zip_conlisteners","\x5b","\xf8","\x70","\xf7"));
	outFields->push(HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"));
	outFields->push(HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	outFields->push(HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(int)offsetof(ZPP_CbSet_obj,cbTypes),HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1")},
	{hx::fsInt,(int)offsetof(ZPP_CbSet_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_CbSet_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsInt,(int)offsetof(ZPP_CbSet_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::space::ZPP_CbSetManager*/ ,(int)offsetof(ZPP_CbSet_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbSetPair*/ ,(int)offsetof(ZPP_CbSet_obj,cbpairs),HX_HCSTRING("cbpairs","\x1a","\x04","\x15","\x01")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_InteractionListener*/ ,(int)offsetof(ZPP_CbSet_obj,listeners),HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3")},
	{hx::fsBool,(int)offsetof(ZPP_CbSet_obj,zip_listeners),HX_HCSTRING("zip_listeners","\x61","\x93","\xbf","\xe5")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_BodyListener*/ ,(int)offsetof(ZPP_CbSet_obj,bodylisteners),HX_HCSTRING("bodylisteners","\x9d","\x86","\x53","\x63")},
	{hx::fsBool,(int)offsetof(ZPP_CbSet_obj,zip_bodylisteners),HX_HCSTRING("zip_bodylisteners","\x7f","\x4d","\xae","\xea")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_ConstraintListener*/ ,(int)offsetof(ZPP_CbSet_obj,conlisteners),HX_HCSTRING("conlisteners","\xfd","\xcc","\x05","\xe1")},
	{hx::fsBool,(int)offsetof(ZPP_CbSet_obj,zip_conlisteners),HX_HCSTRING("zip_conlisteners","\x5b","\xf8","\x70","\xf7")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Interactor*/ ,(int)offsetof(ZPP_CbSet_obj,interactors),HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c")},
	{hx::fsObject /*::nape::phys::InteractorList*/ ,(int)offsetof(ZPP_CbSet_obj,wrap_interactors),HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Constraint*/ ,(int)offsetof(ZPP_CbSet_obj,constraints),HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17")},
	{hx::fsObject /*::nape::constraint::ConstraintList*/ ,(int)offsetof(ZPP_CbSet_obj,wrap_constraints),HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(void *) &ZPP_CbSet_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("cbpairs","\x1a","\x04","\x15","\x01"),
	HX_HCSTRING("increment","\x2f","\x06","\xff","\x31"),
	HX_HCSTRING("decrement","\x13","\xf6","\x81","\x10"),
	HX_HCSTRING("invalidate_pairs","\x15","\xea","\x48","\x8f"),
	HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"),
	HX_HCSTRING("zip_listeners","\x61","\x93","\xbf","\xe5"),
	HX_HCSTRING("invalidate_listeners","\x7b","\xc2","\x31","\xd2"),
	HX_HCSTRING("validate_listeners","\x56","\x89","\x4b","\xa7"),
	HX_HCSTRING("realvalidate_listeners","\x34","\x04","\x6f","\x98"),
	HX_HCSTRING("bodylisteners","\x9d","\x86","\x53","\x63"),
	HX_HCSTRING("zip_bodylisteners","\x7f","\x4d","\xae","\xea"),
	HX_HCSTRING("invalidate_bodylisteners","\x99","\x11","\xcf","\xc5"),
	HX_HCSTRING("validate_bodylisteners","\xf4","\xe1","\x04","\x0b"),
	HX_HCSTRING("realvalidate_bodylisteners","\xd2","\x23","\x62","\x7f"),
	HX_HCSTRING("conlisteners","\xfd","\xcc","\x05","\xe1"),
	HX_HCSTRING("zip_conlisteners","\x5b","\xf8","\x70","\xf7"),
	HX_HCSTRING("invalidate_conlisteners","\x81","\xb5","\x75","\x00"),
	HX_HCSTRING("validate_conlisteners","\x86","\x69","\xfd","\x11"),
	HX_HCSTRING("realvalidate_conlisteners","\x68","\x8d","\x7f","\x6f"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"),
	HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9"),
	HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"),
	HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"),
	HX_HCSTRING("addConstraint","\xde","\x49","\x15","\xc5"),
	HX_HCSTRING("addInteractor","\xda","\x0f","\xb9","\xef"),
	HX_HCSTRING("remConstraint","\x57","\xd2","\x6e","\x30"),
	HX_HCSTRING("remInteractor","\x53","\x98","\x12","\x5b"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_CbSet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("setlt","\xaa","\xa6","\x2f","\x7a"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("compatible","\x54","\xdb","\x22","\x38"),
	HX_HCSTRING("empty_intersection","\x7b","\xa6","\x10","\x19"),
	HX_HCSTRING("single_intersection","\xa0","\x59","\x5b","\x4c"),
	HX_HCSTRING("find_all","\xdb","\x1e","\xd0","\xa6"),
	::String(null()) };

void ZPP_CbSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.callbacks.ZPP_CbSet","\xfd","\x06","\xda","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_CbSet_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_CbSet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_CbSet_obj >;
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

void ZPP_CbSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace callbacks
