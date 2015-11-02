#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_CbType_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","new",0x45010371,"zpp_nape.callbacks.ZPP_CbType.new","zpp_nape/callbacks/CbType.hx",174,0x45e9a502)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(301)
	this->conlisteners = null();
	HX_STACK_LINE(254)
	this->bodylisteners = null();
	HX_STACK_LINE(207)
	this->listeners = null();
	HX_STACK_LINE(178)
	this->cbsets = null();
	HX_STACK_LINE(177)
	this->id = (int)0;
	HX_STACK_LINE(176)
	this->userData = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(353)
	int tmp = ::zpp_nape::ZPP_ID_obj::CbType();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	this->id = tmp;
	HX_STACK_LINE(355)
	::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	this->listeners = tmp1;
	HX_STACK_LINE(356)
	::zpp_nape::util::ZNPList_ZPP_BodyListener tmp2 = ::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	this->bodylisteners = tmp2;
	HX_STACK_LINE(357)
	::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp3 = ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(357)
	this->conlisteners = tmp3;
	HX_STACK_LINE(358)
	::zpp_nape::util::ZNPList_ZPP_Constraint tmp4 = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(358)
	this->constraints = tmp4;
	HX_STACK_LINE(359)
	::zpp_nape::util::ZNPList_ZPP_Interactor tmp5 = ::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(359)
	this->interactors = tmp5;
	HX_STACK_LINE(360)
	::zpp_nape::util::ZNPList_ZPP_CbSet tmp6 = ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(360)
	this->cbsets = tmp6;
}
;
	return null();
}

//ZPP_CbType_obj::~ZPP_CbType_obj() { }

Dynamic ZPP_CbType_obj::__CreateEmpty() { return  new ZPP_CbType_obj; }
hx::ObjectPtr< ZPP_CbType_obj > ZPP_CbType_obj::__new()
{  hx::ObjectPtr< ZPP_CbType_obj > _result_ = new ZPP_CbType_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbType_obj > _result_ = new ZPP_CbType_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_CbType_obj::addConstraint( ::zpp_nape::constraint::ZPP_Constraint con){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","addConstraint",0x62255c2f,"zpp_nape.callbacks.ZPP_CbType.addConstraint","zpp_nape/callbacks/CbType.hx",189,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(con,"con")
		HX_STACK_LINE(190)
		::zpp_nape::util::ZNPList_ZPP_Constraint tmp = this->constraints;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		::zpp_nape::constraint::ZPP_Constraint tmp1 = con;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addConstraint,(void))

Void ZPP_CbType_obj::addInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","addInteractor",0x8cc9222b,"zpp_nape.callbacks.ZPP_CbType.addInteractor","zpp_nape/callbacks/CbType.hx",194,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(intx,"intx")
		HX_STACK_LINE(195)
		::zpp_nape::util::ZNPList_ZPP_Interactor tmp = this->interactors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		::zpp_nape::phys::ZPP_Interactor tmp1 = intx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addInteractor,(void))

Void ZPP_CbType_obj::remConstraint( ::zpp_nape::constraint::ZPP_Constraint con){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","remConstraint",0xcd7ee4a8,"zpp_nape.callbacks.ZPP_CbType.remConstraint","zpp_nape/callbacks/CbType.hx",199,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(con,"con")
		HX_STACK_LINE(200)
		::zpp_nape::util::ZNPList_ZPP_Constraint tmp = this->constraints;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		::zpp_nape::constraint::ZPP_Constraint tmp1 = con;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,remConstraint,(void))

Void ZPP_CbType_obj::remInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","remInteractor",0xf822aaa4,"zpp_nape.callbacks.ZPP_CbType.remInteractor","zpp_nape/callbacks/CbType.hx",204,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(intx,"intx")
		HX_STACK_LINE(205)
		::zpp_nape::util::ZNPList_ZPP_Interactor tmp = this->interactors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		::zpp_nape::phys::ZPP_Interactor tmp1 = intx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,remInteractor,(void))

Void ZPP_CbType_obj::addint( ::zpp_nape::callbacks::ZPP_InteractionListener x){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","addint",0x85aab2fd,"zpp_nape.callbacks.ZPP_CbType.addint","zpp_nape/callbacks/CbType.hx",210,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(220)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(222)
				::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(222)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(223)
				while((true)){
					HX_STACK_LINE(223)
					bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(223)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(223)
					if ((tmp2)){
						HX_STACK_LINE(223)
						break;
					}
					HX_STACK_LINE(224)
					::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(225)
					{
						HX_STACK_LINE(226)
						bool tmp3 = (x->precedence > j->precedence);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(226)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(226)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(226)
						if ((tmp4)){
							HX_STACK_LINE(226)
							bool tmp6 = (x->precedence == j->precedence);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(226)
							bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(226)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(226)
							if ((tmp8)){
								HX_STACK_LINE(226)
								tmp5 = (x->id > j->id);
							}
							else{
								HX_STACK_LINE(226)
								tmp5 = false;
							}
						}
						else{
							HX_STACK_LINE(226)
							tmp5 = true;
						}
						HX_STACK_LINE(226)
						if ((tmp5)){
							HX_STACK_LINE(226)
							break;
						}
						HX_STACK_LINE(227)
						pre = cx_ite;
					}
					HX_STACK_LINE(229)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(232)
				::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = tmp;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(232)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(232)
						bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(232)
						if ((tmp3)){
							HX_STACK_LINE(232)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(232)
							ret = tmp4;
						}
						else{
							HX_STACK_LINE(232)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(232)
							ret = tmp4;
							HX_STACK_LINE(232)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
							HX_STACK_LINE(232)
							ret->next = null();
						}
						HX_STACK_LINE(232)
						Dynamic();
					}
					HX_STACK_LINE(232)
					ret->elt = x;
					HX_STACK_LINE(232)
					tmp1 = ret;
				}
				HX_STACK_LINE(232)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(232)
				bool tmp2 = (pre == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(232)
				if ((tmp2)){
					HX_STACK_LINE(232)
					temp->next = _this->head;
					HX_STACK_LINE(232)
					_this->head = temp;
				}
				else{
					HX_STACK_LINE(232)
					temp->next = pre->next;
					HX_STACK_LINE(232)
					pre->next = temp;
				}
				HX_STACK_LINE(232)
				bool tmp3 = _this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				_this->pushmod = tmp3;
				HX_STACK_LINE(232)
				(_this->length)++;
				HX_STACK_LINE(232)
				temp;
			}
		}
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			::zpp_nape::util::ZNPList_ZPP_CbSet tmp = this->cbsets;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(234)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(234)
			while((true)){
				HX_STACK_LINE(234)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(234)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(234)
				if ((tmp2)){
					HX_STACK_LINE(234)
					break;
				}
				HX_STACK_LINE(234)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(234)
				{
					HX_STACK_LINE(234)
					cb->zip_listeners = true;
					HX_STACK_LINE(234)
					cb->invalidate_pairs();
				}
				HX_STACK_LINE(234)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addint,(void))

Void ZPP_CbType_obj::removeint( ::zpp_nape::callbacks::ZPP_InteractionListener x){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","removeint",0xd905c8fc,"zpp_nape.callbacks.ZPP_CbType.removeint","zpp_nape/callbacks/CbType.hx",238,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(239)
		::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		tmp->remove(tmp1);
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			::zpp_nape::util::ZNPList_ZPP_CbSet tmp2 = this->cbsets;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(240)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp2->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(240)
			while((true)){
				HX_STACK_LINE(240)
				bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(240)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(240)
				if ((tmp4)){
					HX_STACK_LINE(240)
					break;
				}
				HX_STACK_LINE(240)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					cb->zip_listeners = true;
					HX_STACK_LINE(240)
					cb->invalidate_pairs();
				}
				HX_STACK_LINE(240)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,removeint,(void))

Void ZPP_CbType_obj::invalidateint( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","invalidateint",0x4418e4a5,"zpp_nape.callbacks.ZPP_CbType.invalidateint","zpp_nape/callbacks/CbType.hx",245,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		::zpp_nape::util::ZNPList_ZPP_CbSet tmp = this->cbsets;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(247)
		while((true)){
			HX_STACK_LINE(247)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(247)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			if ((tmp2)){
				HX_STACK_LINE(247)
				break;
			}
			HX_STACK_LINE(248)
			::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				cb->zip_listeners = true;
				HX_STACK_LINE(249)
				cb->invalidate_pairs();
			}
			HX_STACK_LINE(250)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbType_obj,invalidateint,(void))

Void ZPP_CbType_obj::addbody( ::zpp_nape::callbacks::ZPP_BodyListener x){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","addbody",0x6b1220d4,"zpp_nape.callbacks.ZPP_CbType.addbody","zpp_nape/callbacks/CbType.hx",257,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(267)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(269)
				::zpp_nape::util::ZNPList_ZPP_BodyListener tmp = this->bodylisteners;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(269)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(270)
				while((true)){
					HX_STACK_LINE(270)
					bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(270)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(270)
					if ((tmp2)){
						HX_STACK_LINE(270)
						break;
					}
					HX_STACK_LINE(271)
					::zpp_nape::callbacks::ZPP_BodyListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(272)
					{
						HX_STACK_LINE(273)
						bool tmp3 = (x->precedence > j->precedence);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(273)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(273)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(273)
						if ((tmp4)){
							HX_STACK_LINE(273)
							bool tmp6 = (x->precedence == j->precedence);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(273)
							bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(273)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(273)
							if ((tmp8)){
								HX_STACK_LINE(273)
								tmp5 = (x->id > j->id);
							}
							else{
								HX_STACK_LINE(273)
								tmp5 = false;
							}
						}
						else{
							HX_STACK_LINE(273)
							tmp5 = true;
						}
						HX_STACK_LINE(273)
						if ((tmp5)){
							HX_STACK_LINE(273)
							break;
						}
						HX_STACK_LINE(274)
						pre = cx_ite;
					}
					HX_STACK_LINE(276)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::zpp_nape::util::ZNPList_ZPP_BodyListener tmp = this->bodylisteners;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(279)
				::zpp_nape::util::ZNPList_ZPP_BodyListener _this = tmp;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(279)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(279)
						bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(279)
						if ((tmp3)){
							HX_STACK_LINE(279)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(279)
							ret = tmp4;
						}
						else{
							HX_STACK_LINE(279)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(279)
							ret = tmp4;
							HX_STACK_LINE(279)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
							HX_STACK_LINE(279)
							ret->next = null();
						}
						HX_STACK_LINE(279)
						Dynamic();
					}
					HX_STACK_LINE(279)
					ret->elt = x;
					HX_STACK_LINE(279)
					tmp1 = ret;
				}
				HX_STACK_LINE(279)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(279)
				bool tmp2 = (pre == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(279)
				if ((tmp2)){
					HX_STACK_LINE(279)
					temp->next = _this->head;
					HX_STACK_LINE(279)
					_this->head = temp;
				}
				else{
					HX_STACK_LINE(279)
					temp->next = pre->next;
					HX_STACK_LINE(279)
					pre->next = temp;
				}
				HX_STACK_LINE(279)
				bool tmp3 = _this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				_this->pushmod = tmp3;
				HX_STACK_LINE(279)
				(_this->length)++;
				HX_STACK_LINE(279)
				temp;
			}
		}
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			::zpp_nape::util::ZNPList_ZPP_CbSet tmp = this->cbsets;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(281)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(281)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(281)
				if ((tmp2)){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(281)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(281)
				cb->zip_bodylisteners = true;
				HX_STACK_LINE(281)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addbody,(void))

Void ZPP_CbType_obj::removebody( ::zpp_nape::callbacks::ZPP_BodyListener x){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","removebody",0x076a49f5,"zpp_nape.callbacks.ZPP_CbType.removebody","zpp_nape/callbacks/CbType.hx",285,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(286)
		::zpp_nape::util::ZNPList_ZPP_BodyListener tmp = this->bodylisteners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		::zpp_nape::callbacks::ZPP_BodyListener tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		tmp->remove(tmp1);
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::zpp_nape::util::ZNPList_ZPP_CbSet tmp2 = this->cbsets;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp2->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(287)
			while((true)){
				HX_STACK_LINE(287)
				bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(287)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				if ((tmp4)){
					HX_STACK_LINE(287)
					break;
				}
				HX_STACK_LINE(287)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(287)
				cb->zip_bodylisteners = true;
				HX_STACK_LINE(287)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,removebody,(void))

Void ZPP_CbType_obj::invalidatebody( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","invalidatebody",0x4d0f622c,"zpp_nape.callbacks.ZPP_CbType.invalidatebody","zpp_nape/callbacks/CbType.hx",292,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_LINE(293)
		::zpp_nape::util::ZNPList_ZPP_CbSet tmp = this->cbsets;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(294)
		while((true)){
			HX_STACK_LINE(294)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			if ((tmp2)){
				HX_STACK_LINE(294)
				break;
			}
			HX_STACK_LINE(295)
			::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(296)
			cb->zip_bodylisteners = true;
			HX_STACK_LINE(297)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbType_obj,invalidatebody,(void))

Void ZPP_CbType_obj::addconstraint( ::zpp_nape::callbacks::ZPP_ConstraintListener x){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","addconstraint",0x6b74580f,"zpp_nape.callbacks.ZPP_CbType.addconstraint","zpp_nape/callbacks/CbType.hx",304,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(314)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(316)
				::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp = this->conlisteners;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(316)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(317)
				while((true)){
					HX_STACK_LINE(317)
					bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(317)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(317)
					if ((tmp2)){
						HX_STACK_LINE(317)
						break;
					}
					HX_STACK_LINE(318)
					::zpp_nape::callbacks::ZPP_ConstraintListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(320)
						bool tmp3 = (x->precedence > j->precedence);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(320)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(320)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(320)
						if ((tmp4)){
							HX_STACK_LINE(320)
							bool tmp6 = (x->precedence == j->precedence);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(320)
							bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(320)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(320)
							if ((tmp8)){
								HX_STACK_LINE(320)
								tmp5 = (x->id > j->id);
							}
							else{
								HX_STACK_LINE(320)
								tmp5 = false;
							}
						}
						else{
							HX_STACK_LINE(320)
							tmp5 = true;
						}
						HX_STACK_LINE(320)
						if ((tmp5)){
							HX_STACK_LINE(320)
							break;
						}
						HX_STACK_LINE(321)
						pre = cx_ite;
					}
					HX_STACK_LINE(323)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(326)
			{
				HX_STACK_LINE(326)
				::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp = this->conlisteners;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(326)
				::zpp_nape::util::ZNPList_ZPP_ConstraintListener _this = tmp;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(326)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(326)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(326)
					{
						HX_STACK_LINE(326)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(326)
						bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(326)
						if ((tmp3)){
							HX_STACK_LINE(326)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(326)
							ret = tmp4;
						}
						else{
							HX_STACK_LINE(326)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(326)
							ret = tmp4;
							HX_STACK_LINE(326)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
							HX_STACK_LINE(326)
							ret->next = null();
						}
						HX_STACK_LINE(326)
						Dynamic();
					}
					HX_STACK_LINE(326)
					ret->elt = x;
					HX_STACK_LINE(326)
					tmp1 = ret;
				}
				HX_STACK_LINE(326)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(326)
				bool tmp2 = (pre == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(326)
				if ((tmp2)){
					HX_STACK_LINE(326)
					temp->next = _this->head;
					HX_STACK_LINE(326)
					_this->head = temp;
				}
				else{
					HX_STACK_LINE(326)
					temp->next = pre->next;
					HX_STACK_LINE(326)
					pre->next = temp;
				}
				HX_STACK_LINE(326)
				bool tmp3 = _this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(326)
				_this->pushmod = tmp3;
				HX_STACK_LINE(326)
				(_this->length)++;
				HX_STACK_LINE(326)
				temp;
			}
		}
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(328)
			::zpp_nape::util::ZNPList_ZPP_CbSet tmp = this->cbsets;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(328)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(328)
			while((true)){
				HX_STACK_LINE(328)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(328)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(328)
				if ((tmp2)){
					HX_STACK_LINE(328)
					break;
				}
				HX_STACK_LINE(328)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(328)
				cb->zip_conlisteners = true;
				HX_STACK_LINE(328)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addconstraint,(void))

Void ZPP_CbType_obj::removeconstraint( ::zpp_nape::callbacks::ZPP_ConstraintListener x){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","removeconstraint",0x26158ff0,"zpp_nape.callbacks.ZPP_CbType.removeconstraint","zpp_nape/callbacks/CbType.hx",332,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(333)
		::zpp_nape::util::ZNPList_ZPP_ConstraintListener tmp = this->conlisteners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		::zpp_nape::callbacks::ZPP_ConstraintListener tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		tmp->remove(tmp1);
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::zpp_nape::util::ZNPList_ZPP_CbSet tmp2 = this->cbsets;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp2->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(334)
			while((true)){
				HX_STACK_LINE(334)
				bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(334)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(334)
				if ((tmp4)){
					HX_STACK_LINE(334)
					break;
				}
				HX_STACK_LINE(334)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(334)
				cb->zip_conlisteners = true;
				HX_STACK_LINE(334)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,removeconstraint,(void))

Void ZPP_CbType_obj::invalidateconstraint( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","invalidateconstraint",0xa7b92b67,"zpp_nape.callbacks.ZPP_CbType.invalidateconstraint","zpp_nape/callbacks/CbType.hx",339,0x45e9a502)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		::zpp_nape::util::ZNPList_ZPP_CbSet tmp = this->cbsets;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(341)
		while((true)){
			HX_STACK_LINE(341)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(341)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(341)
			if ((tmp2)){
				HX_STACK_LINE(341)
				break;
			}
			HX_STACK_LINE(342)
			::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(343)
			cb->zip_conlisteners = true;
			HX_STACK_LINE(344)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbType_obj,invalidateconstraint,(void))

bool ZPP_CbType_obj::setlt( ::zpp_nape::callbacks::ZPP_CbType a,::zpp_nape::callbacks::ZPP_CbType b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbType","setlt",0x2adc7ffb,"zpp_nape.callbacks.ZPP_CbType.setlt","zpp_nape/callbacks/CbType.hx",180,0x45e9a502)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(181)
	bool tmp = (a->id < b->id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbType_obj,setlt,return )

::nape::callbacks::CbType ZPP_CbType_obj::ANY_SHAPE;

::nape::callbacks::CbType ZPP_CbType_obj::ANY_BODY;

::nape::callbacks::CbType ZPP_CbType_obj::ANY_COMPOUND;

::nape::callbacks::CbType ZPP_CbType_obj::ANY_CONSTRAINT;


ZPP_CbType_obj::ZPP_CbType_obj()
{
}

void ZPP_CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbType);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_MEMBER_NAME(interactors,"interactors");
	HX_MARK_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_MEMBER_NAME(bodylisteners,"bodylisteners");
	HX_MARK_MEMBER_NAME(conlisteners,"conlisteners");
	HX_MARK_END_CLASS();
}

void ZPP_CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
	HX_VISIT_MEMBER_NAME(interactors,"interactors");
	HX_VISIT_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	HX_VISIT_MEMBER_NAME(bodylisteners,"bodylisteners");
	HX_VISIT_MEMBER_NAME(conlisteners,"conlisteners");
}

Dynamic ZPP_CbType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		if (HX_FIELD_EQ(inName,"addint") ) { return addint_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addbody") ) { return addbody_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		if (HX_FIELD_EQ(inName,"removeint") ) { return removeint_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removebody") ) { return removebody_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { return interactors; }
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conlisteners") ) { return conlisteners; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addConstraint") ) { return addConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"addInteractor") ) { return addInteractor_dyn(); }
		if (HX_FIELD_EQ(inName,"remConstraint") ) { return remConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"remInteractor") ) { return remInteractor_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateint") ) { return invalidateint_dyn(); }
		if (HX_FIELD_EQ(inName,"bodylisteners") ) { return bodylisteners; }
		if (HX_FIELD_EQ(inName,"addconstraint") ) { return addconstraint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidatebody") ) { return invalidatebody_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { return wrap_interactors; }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		if (HX_FIELD_EQ(inName,"removeconstraint") ) { return removeconstraint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"invalidateconstraint") ) { return invalidateconstraint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_CbType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setlt") ) { outValue = setlt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { outValue = ANY_BODY; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { outValue = ANY_SHAPE; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { outValue = ANY_COMPOUND; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { outValue = ANY_CONSTRAINT; return true;  }
	}
	return false;
}

Dynamic ZPP_CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"bodylisteners") ) { bodylisteners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_BodyListener >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { wrap_interactors=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_CbType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { ANY_BODY=ioValue.Cast< ::nape::callbacks::CbType >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { ANY_SHAPE=ioValue.Cast< ::nape::callbacks::CbType >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { ANY_COMPOUND=ioValue.Cast< ::nape::callbacks::CbType >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { ANY_CONSTRAINT=ioValue.Cast< ::nape::callbacks::CbType >(); return true; }
	}
	return false;
}

void ZPP_CbType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e"));
	outFields->push(HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"));
	outFields->push(HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	outFields->push(HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"));
	outFields->push(HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"));
	outFields->push(HX_HCSTRING("bodylisteners","\x9d","\x86","\x53","\x63"));
	outFields->push(HX_HCSTRING("conlisteners","\xfd","\xcc","\x05","\xe1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(int)offsetof(ZPP_CbType_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_CbType_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsInt,(int)offsetof(ZPP_CbType_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbSet*/ ,(int)offsetof(ZPP_CbType_obj,cbsets),HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Interactor*/ ,(int)offsetof(ZPP_CbType_obj,interactors),HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c")},
	{hx::fsObject /*::nape::phys::InteractorList*/ ,(int)offsetof(ZPP_CbType_obj,wrap_interactors),HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Constraint*/ ,(int)offsetof(ZPP_CbType_obj,constraints),HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17")},
	{hx::fsObject /*::nape::constraint::ConstraintList*/ ,(int)offsetof(ZPP_CbType_obj,wrap_constraints),HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_InteractionListener*/ ,(int)offsetof(ZPP_CbType_obj,listeners),HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_BodyListener*/ ,(int)offsetof(ZPP_CbType_obj,bodylisteners),HX_HCSTRING("bodylisteners","\x9d","\x86","\x53","\x63")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_ConstraintListener*/ ,(int)offsetof(ZPP_CbType_obj,conlisteners),HX_HCSTRING("conlisteners","\xfd","\xcc","\x05","\xe1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(void *) &ZPP_CbType_obj::ANY_SHAPE,HX_HCSTRING("ANY_SHAPE","\x0e","\x1a","\x93","\x67")},
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(void *) &ZPP_CbType_obj::ANY_BODY,HX_HCSTRING("ANY_BODY","\x35","\xa4","\x09","\xa6")},
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(void *) &ZPP_CbType_obj::ANY_COMPOUND,HX_HCSTRING("ANY_COMPOUND","\x7e","\x7a","\x2e","\xf2")},
	{hx::fsObject /*::nape::callbacks::CbType*/ ,(void *) &ZPP_CbType_obj::ANY_CONSTRAINT,HX_HCSTRING("ANY_CONSTRAINT","\x30","\xc6","\x94","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e"),
	HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"),
	HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9"),
	HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"),
	HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"),
	HX_HCSTRING("addConstraint","\xde","\x49","\x15","\xc5"),
	HX_HCSTRING("addInteractor","\xda","\x0f","\xb9","\xef"),
	HX_HCSTRING("remConstraint","\x57","\xd2","\x6e","\x30"),
	HX_HCSTRING("remInteractor","\x53","\x98","\x12","\x5b"),
	HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"),
	HX_HCSTRING("addint","\x6e","\x65","\x19","\x9f"),
	HX_HCSTRING("removeint","\x2b","\x73","\x03","\xcb"),
	HX_HCSTRING("invalidateint","\x54","\xd2","\x08","\xa7"),
	HX_HCSTRING("bodylisteners","\x9d","\x86","\x53","\x63"),
	HX_HCSTRING("addbody","\x43","\x91","\x7f","\x92"),
	HX_HCSTRING("removebody","\xe6","\x88","\x61","\xd3"),
	HX_HCSTRING("invalidatebody","\x9d","\x6d","\x0f","\x7c"),
	HX_HCSTRING("conlisteners","\xfd","\xcc","\x05","\xe1"),
	HX_HCSTRING("addconstraint","\xbe","\x45","\x64","\xce"),
	HX_HCSTRING("removeconstraint","\xa1","\x19","\xc4","\x1d"),
	HX_HCSTRING("invalidateconstraint","\x98","\xe1","\xcc","\xdd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::ANY_SHAPE,"ANY_SHAPE");
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::ANY_BODY,"ANY_BODY");
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::ANY_COMPOUND,"ANY_COMPOUND");
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::ANY_CONSTRAINT,"ANY_CONSTRAINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::ANY_SHAPE,"ANY_SHAPE");
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::ANY_BODY,"ANY_BODY");
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::ANY_COMPOUND,"ANY_COMPOUND");
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::ANY_CONSTRAINT,"ANY_CONSTRAINT");
};

#endif

hx::Class ZPP_CbType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("setlt","\xaa","\xa6","\x2f","\x7a"),
	HX_HCSTRING("ANY_SHAPE","\x0e","\x1a","\x93","\x67"),
	HX_HCSTRING("ANY_BODY","\x35","\xa4","\x09","\xa6"),
	HX_HCSTRING("ANY_COMPOUND","\x7e","\x7a","\x2e","\xf2"),
	HX_HCSTRING("ANY_CONSTRAINT","\x30","\xc6","\x94","\xa9"),
	::String(null()) };

void ZPP_CbType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.callbacks.ZPP_CbType","\xff","\x76","\xa4","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_CbType_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_CbType_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_CbType_obj >;
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

void ZPP_CbType_obj::__boot()
{
	ANY_SHAPE= ::nape::callbacks::CbType_obj::__new();
	ANY_BODY= ::nape::callbacks::CbType_obj::__new();
	ANY_COMPOUND= ::nape::callbacks::CbType_obj::__new();
	ANY_CONSTRAINT= ::nape::callbacks::CbType_obj::__new();
}

} // end namespace zpp_nape
} // end namespace callbacks
