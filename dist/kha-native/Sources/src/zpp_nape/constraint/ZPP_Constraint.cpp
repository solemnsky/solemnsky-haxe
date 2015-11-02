#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_Constraint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","new",0xdb5b4dc4,"zpp_nape.constraint.ZPP_Constraint.new","zpp_nape/constraint/Constraint.hx",174,0xf29441f1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(495)
	this->pre_dt = ((Float)0.0);
	HX_STACK_LINE(215)
	this->wrap_cbTypes = null();
	HX_STACK_LINE(214)
	this->cbSet = null();
	HX_STACK_LINE(213)
	this->cbTypes = null();
	HX_STACK_LINE(192)
	this->__velocity = false;
	HX_STACK_LINE(191)
	this->ignore = false;
	HX_STACK_LINE(190)
	this->component = null();
	HX_STACK_LINE(189)
	this->removeOnBreak = false;
	HX_STACK_LINE(188)
	this->breakUnderError = false;
	HX_STACK_LINE(187)
	this->breakUnderForce = false;
	HX_STACK_LINE(186)
	this->maxError = ((Float)0.0);
	HX_STACK_LINE(185)
	this->maxForce = ((Float)0.0);
	HX_STACK_LINE(184)
	this->damping = ((Float)0.0);
	HX_STACK_LINE(183)
	this->frequency = ((Float)0.0);
	HX_STACK_LINE(182)
	this->stiff = false;
	HX_STACK_LINE(181)
	this->active = false;
	HX_STACK_LINE(180)
	this->space = null();
	HX_STACK_LINE(179)
	this->compound = null();
	HX_STACK_LINE(178)
	this->userData = null();
	HX_STACK_LINE(177)
	this->id = (int)0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(194)
	this->__velocity = false;
	HX_STACK_LINE(195)
	int tmp = ::zpp_nape::ZPP_ID_obj::Constraint();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	this->id = tmp;
	HX_STACK_LINE(196)
	this->stiff = true;
	HX_STACK_LINE(197)
	this->active = true;
	HX_STACK_LINE(198)
	this->ignore = false;
	HX_STACK_LINE(199)
	this->frequency = (int)10;
	HX_STACK_LINE(200)
	this->damping = (int)1;
	HX_STACK_LINE(201)
	Float tmp1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	this->maxForce = tmp1;
	HX_STACK_LINE(202)
	Float tmp2 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	this->maxError = tmp2;
	HX_STACK_LINE(203)
	this->breakUnderForce = false;
	HX_STACK_LINE(204)
	this->removeOnBreak = true;
	HX_STACK_LINE(205)
	this->pre_dt = ((Float)-1.0);
	HX_STACK_LINE(206)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(206)
	this->cbTypes = tmp3;
}
;
	return null();
}

//ZPP_Constraint_obj::~ZPP_Constraint_obj() { }

Dynamic ZPP_Constraint_obj::__CreateEmpty() { return  new ZPP_Constraint_obj; }
hx::ObjectPtr< ZPP_Constraint_obj > ZPP_Constraint_obj::__new()
{  hx::ObjectPtr< ZPP_Constraint_obj > _result_ = new ZPP_Constraint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Constraint_obj > _result_ = new ZPP_Constraint_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Constraint_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","clear",0x92480ff1,"zpp_nape.constraint.ZPP_Constraint.clear","zpp_nape/constraint/Constraint.hx",176,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,clear,(void))

Void ZPP_Constraint_obj::immutable_midstep( ::String name){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","immutable_midstep",0x734194fb,"zpp_nape.constraint.ZPP_Constraint.immutable_midstep","zpp_nape/constraint/Constraint.hx",208,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(210)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		if ((tmp1)){
			HX_STACK_LINE(210)
			::zpp_nape::space::ZPP_Space tmp3 = this->space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(210)
			::zpp_nape::space::ZPP_Space tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(210)
			tmp2 = tmp4->midstep;
		}
		else{
			HX_STACK_LINE(210)
			tmp2 = false;
		}
		HX_STACK_LINE(210)
		if ((tmp2)){
			HX_STACK_LINE(210)
			::String tmp3 = (HX_HCSTRING("Error: Constraint::","\xcb","\xf5","\x02","\xd5") + name);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(210)
			::String tmp4 = (tmp3 + HX_HCSTRING(" cannot be set during space step()","\x28","\x9c","\xaa","\x20"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(210)
			HX_STACK_DO_THROW(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,immutable_midstep,(void))

Void ZPP_Constraint_obj::setupcbTypes( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","setupcbTypes",0x685aaa99,"zpp_nape.constraint.ZPP_Constraint.setupcbTypes","zpp_nape/constraint/Constraint.hx",216,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = this->cbTypes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		::nape::callbacks::CbTypeList tmp1 = ::zpp_nape::util::ZPP_CbTypeList_obj::get(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		this->wrap_cbTypes = tmp1;
		HX_STACK_LINE(218)
		Dynamic tmp2 = this->wrap_cbTypes_adder_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		::nape::callbacks::CbTypeList tmp3 = this->wrap_cbTypes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		tmp3->zpp_inner->adder = tmp2;
		HX_STACK_LINE(219)
		Dynamic tmp4 = this->wrap_cbTypes_subber_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		::nape::callbacks::CbTypeList tmp5 = this->wrap_cbTypes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		tmp5->zpp_inner->subber = tmp4;
		HX_STACK_LINE(220)
		::nape::callbacks::CbTypeList tmp6 = this->wrap_cbTypes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		tmp6->zpp_inner->dontremove = true;
		HX_STACK_LINE(222)
		Dynamic tmp7 = this->immutable_cbTypes_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		::nape::callbacks::CbTypeList tmp8 = this->wrap_cbTypes;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		tmp8->zpp_inner->_modifiable = tmp7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,setupcbTypes,(void))

Void ZPP_Constraint_obj::immutable_cbTypes( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","immutable_cbTypes",0xd4766181,"zpp_nape.constraint.ZPP_Constraint.immutable_cbTypes","zpp_nape/constraint/Constraint.hx",227,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		this->immutable_midstep(HX_HCSTRING("Constraint::cbTypes","\x7d","\xd2","\xfd","\xd6"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,immutable_cbTypes,(void))

Void ZPP_Constraint_obj::wrap_cbTypes_subber( ::nape::callbacks::CbType pcb){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","wrap_cbTypes_subber",0xf0d24acd,"zpp_nape.constraint.ZPP_Constraint.wrap_cbTypes_subber","zpp_nape/constraint/Constraint.hx",230,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pcb,"pcb")
		HX_STACK_LINE(231)
		::zpp_nape::callbacks::ZPP_CbType cb = pcb->zpp_inner;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(232)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = this->cbTypes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		::zpp_nape::callbacks::ZPP_CbType tmp1 = cb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		if ((tmp2)){
			HX_STACK_LINE(233)
			::zpp_nape::space::ZPP_Space tmp3 = this->space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			if ((tmp4)){
				HX_STACK_LINE(234)
				this->dealloc_cbSet();
				HX_STACK_LINE(235)
				cb->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(237)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp5 = this->cbTypes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			::zpp_nape::callbacks::ZPP_CbType tmp6 = cb;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			tmp5->remove(tmp6);
			HX_STACK_LINE(238)
			::zpp_nape::space::ZPP_Space tmp7 = this->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			if ((tmp8)){
				HX_STACK_LINE(239)
				this->alloc_cbSet();
				HX_STACK_LINE(240)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,wrap_cbTypes_subber,(void))

bool ZPP_Constraint_obj::wrap_cbTypes_adder( ::nape::callbacks::CbType cb){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","wrap_cbTypes_adder",0xac26ef90,"zpp_nape.constraint.ZPP_Constraint.wrap_cbTypes_adder","zpp_nape/constraint/Constraint.hx",244,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cb,"cb")
	HX_STACK_LINE(245)
	::zpp_nape::callbacks::ZPP_CbType tmp = cb->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	this->insert_cbtype(tmp);
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,wrap_cbTypes_adder,return )

Void ZPP_Constraint_obj::insert_cbtype( ::zpp_nape::callbacks::ZPP_CbType cb){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","insert_cbtype",0xb0fdbec3,"zpp_nape.constraint.ZPP_Constraint.insert_cbtype","zpp_nape/constraint/Constraint.hx",248,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(249)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = this->cbTypes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		::zpp_nape::callbacks::ZPP_CbType tmp1 = cb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		if ((tmp3)){
			HX_STACK_LINE(250)
			::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			if ((tmp5)){
				HX_STACK_LINE(251)
				this->dealloc_cbSet();
				HX_STACK_LINE(252)
				cb->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(255)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(257)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = this->cbTypes;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp6->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(258)
					while((true)){
						HX_STACK_LINE(258)
						bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(258)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(258)
						if ((tmp8)){
							HX_STACK_LINE(258)
							break;
						}
						HX_STACK_LINE(259)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(261)
							bool tmp9 = (cb->id < j->id);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(261)
							if ((tmp9)){
								HX_STACK_LINE(261)
								break;
							}
							HX_STACK_LINE(262)
							pre = cx_ite;
						}
						HX_STACK_LINE(264)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = this->cbTypes;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(267)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(267)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp8 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(267)
							bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(267)
							if ((tmp9)){
								HX_STACK_LINE(267)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(267)
								ret = tmp10;
							}
							else{
								HX_STACK_LINE(267)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(267)
								ret = tmp10;
								HX_STACK_LINE(267)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(267)
								ret->next = null();
							}
							HX_STACK_LINE(267)
							Dynamic();
						}
						HX_STACK_LINE(267)
						ret->elt = cb;
						HX_STACK_LINE(267)
						tmp7 = ret;
					}
					HX_STACK_LINE(267)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp7;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(267)
					bool tmp8 = (pre == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(267)
					if ((tmp8)){
						HX_STACK_LINE(267)
						temp->next = _this->head;
						HX_STACK_LINE(267)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(267)
						temp->next = pre->next;
						HX_STACK_LINE(267)
						pre->next = temp;
					}
					HX_STACK_LINE(267)
					bool tmp9 = _this->modified = true;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(267)
					_this->pushmod = tmp9;
					HX_STACK_LINE(267)
					(_this->length)++;
					HX_STACK_LINE(267)
					temp;
				}
			}
			HX_STACK_LINE(269)
			::zpp_nape::space::ZPP_Space tmp6 = this->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(269)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(269)
			if ((tmp7)){
				HX_STACK_LINE(270)
				this->alloc_cbSet();
				HX_STACK_LINE(271)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,insert_cbtype,(void))

Void ZPP_Constraint_obj::alloc_cbSet( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","alloc_cbSet",0x11685d1d,"zpp_nape.constraint.ZPP_Constraint.alloc_cbSet","zpp_nape/constraint/Constraint.hx",275,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(284)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->cbTypes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		::zpp_nape::callbacks::ZPP_CbSet tmp2 = tmp->cbsets->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		::zpp_nape::callbacks::ZPP_CbSet tmp3 = this->cbSet = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		if ((tmp4)){
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				::zpp_nape::callbacks::ZPP_CbSet tmp5 = this->cbSet;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(285)
				(tmp5->count)++;
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::zpp_nape::callbacks::ZPP_CbSet tmp5 = this->cbSet;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				tmp5->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,alloc_cbSet,(void))

Void ZPP_Constraint_obj::dealloc_cbSet( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","dealloc_cbSet",0xbb8dc43c,"zpp_nape.constraint.ZPP_Constraint.dealloc_cbSet","zpp_nape/constraint/Constraint.hx",289,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(298)
		::zpp_nape::callbacks::ZPP_CbSet tmp = this->cbSet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		if ((tmp1)){
			HX_STACK_LINE(299)
			{
				HX_STACK_LINE(299)
				::zpp_nape::callbacks::ZPP_CbSet tmp2 = this->cbSet;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(299)
				tmp2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(300)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				::zpp_nape::callbacks::ZPP_CbSet tmp3 = this->cbSet;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(300)
				int tmp4 = --(tmp3->count);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(300)
				tmp2 = (tmp4 == (int)0);
			}
			HX_STACK_LINE(300)
			if ((tmp2)){
				HX_STACK_LINE(301)
				::zpp_nape::space::ZPP_Space tmp3 = this->space;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(301)
				::zpp_nape::callbacks::ZPP_CbSet tmp4 = this->cbSet;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(301)
				tmp3->cbsets->remove(tmp4);
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(303)
					::zpp_nape::callbacks::ZPP_CbSet tmp5 = this->cbSet;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(303)
					::zpp_nape::callbacks::ZPP_CbSet o = tmp5;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						o->listeners->clear();
						HX_STACK_LINE(312)
						o->zip_listeners = true;
						HX_STACK_LINE(312)
						o->bodylisteners->clear();
						HX_STACK_LINE(312)
						o->zip_bodylisteners = true;
						HX_STACK_LINE(312)
						o->conlisteners->clear();
						HX_STACK_LINE(312)
						o->zip_conlisteners = true;
						HX_STACK_LINE(312)
						while((true)){
							HX_STACK_LINE(312)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = o->cbTypes->head;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(312)
							bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(312)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(312)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(312)
							if ((tmp9)){
								HX_STACK_LINE(312)
								break;
							}
							HX_STACK_LINE(312)
							::zpp_nape::callbacks::ZPP_CbType tmp10 = o->cbTypes->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(312)
							::zpp_nape::callbacks::ZPP_CbType cb = tmp10;		HX_STACK_VAR(cb,"cb");
							HX_STACK_LINE(312)
							::zpp_nape::callbacks::ZPP_CbSet tmp11 = o;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(312)
							cb->cbsets->remove(tmp11);
						}
						HX_STACK_LINE(312)
						Dynamic();
					}
					HX_STACK_LINE(313)
					::zpp_nape::callbacks::ZPP_CbSet tmp6 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(313)
					o->next = tmp6;
					HX_STACK_LINE(314)
					::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(320)
			this->cbSet = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,dealloc_cbSet,(void))

Void ZPP_Constraint_obj::activate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","activate",0x490f93cf,"zpp_nape.constraint.ZPP_Constraint.activate","zpp_nape/constraint/Constraint.hx",323,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(324)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		if ((tmp1)){
			HX_STACK_LINE(324)
			this->activeInSpace();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,activate,(void))

Void ZPP_Constraint_obj::deactivate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","deactivate",0xd9481350,"zpp_nape.constraint.ZPP_Constraint.deactivate","zpp_nape/constraint/Constraint.hx",326,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(327)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(327)
		if ((tmp1)){
			HX_STACK_LINE(327)
			this->inactiveOrOutSpace();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,deactivate,(void))

Void ZPP_Constraint_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","addedToSpace",0x8f67fa87,"zpp_nape.constraint.ZPP_Constraint.addedToSpace","zpp_nape/constraint/Constraint.hx",329,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		if ((tmp)){
			HX_STACK_LINE(330)
			this->activeInSpace();
		}
		HX_STACK_LINE(331)
		this->activeBodies();
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(333)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->cbTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(333)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(334)
			while((true)){
				HX_STACK_LINE(334)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(334)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(334)
				if ((tmp3)){
					HX_STACK_LINE(334)
					break;
				}
				HX_STACK_LINE(335)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(336)
				cb->constraints->add(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(337)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,addedToSpace,(void))

Void ZPP_Constraint_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","removedFromSpace",0xf1d43758,"zpp_nape.constraint.ZPP_Constraint.removedFromSpace","zpp_nape/constraint/Constraint.hx",341,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		if ((tmp)){
			HX_STACK_LINE(342)
			this->inactiveOrOutSpace();
		}
		HX_STACK_LINE(343)
		this->inactiveBodies();
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(345)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->cbTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(345)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(346)
			while((true)){
				HX_STACK_LINE(346)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(346)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(346)
				if ((tmp3)){
					HX_STACK_LINE(346)
					break;
				}
				HX_STACK_LINE(347)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(348)
				cb->constraints->remove(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(349)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,removedFromSpace,(void))

Void ZPP_Constraint_obj::activeInSpace( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","activeInSpace",0x50f44fdf,"zpp_nape.constraint.ZPP_Constraint.activeInSpace","zpp_nape/constraint/Constraint.hx",353,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		this->alloc_cbSet();
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(364)
			::zpp_nape::space::ZPP_Component tmp = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(364)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(364)
			if ((tmp1)){
				HX_STACK_LINE(365)
				::zpp_nape::space::ZPP_Component tmp2 = ::zpp_nape::space::ZPP_Component_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				this->component = tmp2;
			}
			else{
				HX_STACK_LINE(371)
				::zpp_nape::space::ZPP_Component tmp2 = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				this->component = tmp2;
				HX_STACK_LINE(372)
				::zpp_nape::space::ZPP_Component tmp3 = this->component;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(372)
				::zpp_nape::space::ZPP_Component_obj::zpp_pool = tmp3->next;
				HX_STACK_LINE(373)
				::zpp_nape::space::ZPP_Component tmp4 = this->component;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(373)
				tmp4->next = null();
			}
			HX_STACK_LINE(378)
			Dynamic();
		}
		HX_STACK_LINE(380)
		::zpp_nape::space::ZPP_Component tmp = this->component;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		tmp->isBody = false;
		HX_STACK_LINE(381)
		::zpp_nape::space::ZPP_Component tmp1 = this->component;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		tmp1->constraint = hx::ObjectPtr<OBJ_>(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,activeInSpace,(void))

Void ZPP_Constraint_obj::inactiveOrOutSpace( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","inactiveOrOutSpace",0x3adcf402,"zpp_nape.constraint.ZPP_Constraint.inactiveOrOutSpace","zpp_nape/constraint/Constraint.hx",383,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		this->dealloc_cbSet();
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(386)
			::zpp_nape::space::ZPP_Component tmp = this->component;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(386)
			::zpp_nape::space::ZPP_Component o = tmp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(395)
			{
				HX_STACK_LINE(395)
				o->body = null();
				HX_STACK_LINE(395)
				o->constraint = null();
				HX_STACK_LINE(395)
				Dynamic();
			}
			HX_STACK_LINE(396)
			::zpp_nape::space::ZPP_Component tmp1 = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(396)
			o->next = tmp1;
			HX_STACK_LINE(397)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(402)
		this->component = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,inactiveOrOutSpace,(void))

Void ZPP_Constraint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","activeBodies",0x40b02002,"zpp_nape.constraint.ZPP_Constraint.activeBodies","zpp_nape/constraint/Constraint.hx",406,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,activeBodies,(void))

Void ZPP_Constraint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","inactiveBodies",0xb86bfe67,"zpp_nape.constraint.ZPP_Constraint.inactiveBodies","zpp_nape/constraint/Constraint.hx",417,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,inactiveBodies,(void))

Void ZPP_Constraint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","clearcache",0x203820b1,"zpp_nape.constraint.ZPP_Constraint.clearcache","zpp_nape/constraint/Constraint.hx",428,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,clearcache,(void))

Void ZPP_Constraint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","validate",0x684748b2,"zpp_nape.constraint.ZPP_Constraint.validate","zpp_nape/constraint/Constraint.hx",439,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,validate,(void))

Void ZPP_Constraint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","wake_connected",0x698444ca,"zpp_nape.constraint.ZPP_Constraint.wake_connected","zpp_nape/constraint/Constraint.hx",450,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,wake_connected,(void))

Void ZPP_Constraint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","forest",0x62a685f9,"zpp_nape.constraint.ZPP_Constraint.forest","zpp_nape/constraint/Constraint.hx",461,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,forest,(void))

bool ZPP_Constraint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","pair_exists",0x69f1ec05,"zpp_nape.constraint.ZPP_Constraint.pair_exists","zpp_nape/constraint/Constraint.hx",480,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(480)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Constraint_obj,pair_exists,return )

Void ZPP_Constraint_obj::broken( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","broken",0x8175af71,"zpp_nape.constraint.ZPP_Constraint.broken","zpp_nape/constraint/Constraint.hx",483,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,broken,(void))

Void ZPP_Constraint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","warmStart",0x7ea8c841,"zpp_nape.constraint.ZPP_Constraint.warmStart","zpp_nape/constraint/Constraint.hx",486,0xf29441f1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,warmStart,(void))

bool ZPP_Constraint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","preStep",0x39dcc073,"zpp_nape.constraint.ZPP_Constraint.preStep","zpp_nape/constraint/Constraint.hx",506,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(506)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,preStep,return )

bool ZPP_Constraint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","applyImpulseVel",0x2550cb1a,"zpp_nape.constraint.ZPP_Constraint.applyImpulseVel","zpp_nape/constraint/Constraint.hx",518,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,applyImpulseVel,return )

bool ZPP_Constraint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","applyImpulsePos",0x254c4651,"zpp_nape.constraint.ZPP_Constraint.applyImpulsePos","zpp_nape/constraint/Constraint.hx",530,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(530)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,applyImpulsePos,return )

Void ZPP_Constraint_obj::wake( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","wake",0x1a789640,"zpp_nape.constraint.ZPP_Constraint.wake","zpp_nape/constraint/Constraint.hx",532,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(533)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(533)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		if ((tmp1)){
			HX_STACK_LINE(533)
			::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(533)
			tmp2->wake_constraint(hx::ObjectPtr<OBJ_>(this),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Constraint_obj,wake,(void))

Void ZPP_Constraint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","draw",0x0df66620,"zpp_nape.constraint.ZPP_Constraint.draw","zpp_nape/constraint/Constraint.hx",535,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,draw,(void))

::nape::constraint::Constraint ZPP_Constraint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","copy",0x0d4af5d1,"zpp_nape.constraint.ZPP_Constraint.copy","zpp_nape/constraint/Constraint.hx",537,0xf29441f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(537)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Constraint_obj,copy,return )

Void ZPP_Constraint_obj::copyto( ::nape::constraint::Constraint ret){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_Constraint","copyto",0x2e51318c,"zpp_nape.constraint.ZPP_Constraint.copyto","zpp_nape/constraint/Constraint.hx",539,0xf29441f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ret,"ret")
		HX_STACK_LINE(540)
		::nape::constraint::Constraint tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		::nape::constraint::Constraint me = tmp;		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(541)
		{
			HX_STACK_LINE(541)
			::nape::callbacks::CbTypeIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(541)
				::nape::callbacks::CbTypeList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::nape::callbacks::CbTypeList tmp3 = me->zpp_inner->wrap_cbTypes;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(541)
					bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(541)
					if ((tmp4)){
						HX_STACK_LINE(541)
						me->zpp_inner->setupcbTypes();
					}
					HX_STACK_LINE(541)
					tmp2 = me->zpp_inner->wrap_cbTypes;
				}
				HX_STACK_LINE(541)
				::nape::callbacks::CbTypeList _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(541)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(541)
				::nape::callbacks::CbTypeList tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(541)
				tmp1 = ::nape::callbacks::CbTypeIterator_obj::get(tmp3);
			}
			HX_STACK_LINE(541)
			::nape::callbacks::CbTypeIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(541)
			while((true)){
				HX_STACK_LINE(541)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::zpp_nape::util::ZPP_CbTypeList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(541)
					tmp3->valmod();
					HX_STACK_LINE(541)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(541)
					{
						HX_STACK_LINE(541)
						::nape::callbacks::CbTypeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(541)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(541)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(541)
						if ((tmp5)){
							HX_STACK_LINE(541)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(541)
							{
								HX_STACK_LINE(541)
								::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(541)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(541)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(541)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(541)
					_g->zpp_critical = true;
					HX_STACK_LINE(541)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(541)
					if ((tmp5)){
						HX_STACK_LINE(541)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(541)
							::nape::callbacks::CbTypeIterator tmp6 = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(541)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(541)
							::nape::callbacks::CbTypeIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(541)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(541)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(541)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(541)
				if ((tmp3)){
					HX_STACK_LINE(541)
					break;
				}
				HX_STACK_LINE(541)
				::nape::callbacks::CbType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					_g->zpp_critical = false;
					HX_STACK_LINE(541)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(541)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(541)
				::nape::callbacks::CbType cb = tmp4;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(541)
				::nape::callbacks::CbTypeList tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::nape::callbacks::CbTypeList tmp6 = ret->zpp_inner->wrap_cbTypes;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(541)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(541)
					if ((tmp7)){
						HX_STACK_LINE(541)
						ret->zpp_inner->setupcbTypes();
					}
					HX_STACK_LINE(541)
					tmp5 = ret->zpp_inner->wrap_cbTypes;
				}
				HX_STACK_LINE(541)
				::nape::callbacks::CbTypeList _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(541)
				bool tmp6 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(541)
				if ((tmp6)){
					HX_STACK_LINE(541)
					::nape::callbacks::CbType tmp7 = cb;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(541)
					_this->push(tmp7);
				}
				else{
					HX_STACK_LINE(541)
					::nape::callbacks::CbType tmp7 = cb;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(541)
					_this->unshift(tmp7);
				}
			}
		}
		HX_STACK_LINE(542)
		{
			HX_STACK_LINE(542)
			{
				HX_STACK_LINE(542)
				bool tmp1 = me->zpp_inner->removeOnBreak;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(542)
				ret->zpp_inner->removeOnBreak = tmp1;
			}
			HX_STACK_LINE(542)
			ret->zpp_inner->removeOnBreak;
		}
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(543)
			bool tmp1 = me->zpp_inner->breakUnderError;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(543)
			bool breakUnderError = tmp1;		HX_STACK_VAR(breakUnderError,"breakUnderError");
			HX_STACK_LINE(543)
			{
				HX_STACK_LINE(543)
				bool tmp2 = ret->zpp_inner->breakUnderError;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(543)
				bool tmp3 = breakUnderError;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(543)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(543)
				if ((tmp4)){
					HX_STACK_LINE(543)
					ret->zpp_inner->breakUnderError = breakUnderError;
					HX_STACK_LINE(543)
					ret->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(543)
			ret->zpp_inner->breakUnderError;
		}
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			bool tmp1 = me->zpp_inner->breakUnderForce;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(544)
			bool breakUnderForce = tmp1;		HX_STACK_VAR(breakUnderForce,"breakUnderForce");
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				bool tmp2 = ret->zpp_inner->breakUnderForce;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(544)
				bool tmp3 = breakUnderForce;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(544)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(544)
				if ((tmp4)){
					HX_STACK_LINE(544)
					ret->zpp_inner->breakUnderForce = breakUnderForce;
					HX_STACK_LINE(544)
					ret->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(544)
			ret->zpp_inner->breakUnderForce;
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			Float tmp1 = me->zpp_inner->maxError;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(545)
			Float maxError = tmp1;		HX_STACK_VAR(maxError,"maxError");
			HX_STACK_LINE(545)
			{
				HX_STACK_LINE(545)
				bool tmp2 = (maxError != maxError);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(545)
				if ((tmp2)){
					HX_STACK_LINE(545)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::maxError cannot be NaN","\xaa","\x5a","\x26","\x1b"));
				}
				HX_STACK_LINE(545)
				bool tmp3 = (maxError < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(545)
				if ((tmp3)){
					HX_STACK_LINE(545)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::maxError must be >=0","\x1a","\x7b","\x31","\xc4"));
				}
				HX_STACK_LINE(545)
				Float tmp4 = ret->zpp_inner->maxError;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(545)
				Float tmp5 = maxError;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(545)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(545)
				if ((tmp6)){
					HX_STACK_LINE(545)
					ret->zpp_inner->maxError = maxError;
					HX_STACK_LINE(545)
					ret->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(545)
			ret->zpp_inner->maxError;
		}
		HX_STACK_LINE(546)
		{
			HX_STACK_LINE(546)
			Float tmp1 = me->zpp_inner->maxForce;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(546)
			Float maxForce = tmp1;		HX_STACK_VAR(maxForce,"maxForce");
			HX_STACK_LINE(546)
			{
				HX_STACK_LINE(546)
				bool tmp2 = (maxForce != maxForce);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(546)
				if ((tmp2)){
					HX_STACK_LINE(546)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::maxForce cannot be NaN","\x0d","\x98","\xfe","\x01"));
				}
				HX_STACK_LINE(546)
				bool tmp3 = (maxForce < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(546)
				if ((tmp3)){
					HX_STACK_LINE(546)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::maxForce must be >=0","\xbd","\x89","\xae","\x46"));
				}
				HX_STACK_LINE(546)
				Float tmp4 = ret->zpp_inner->maxForce;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(546)
				Float tmp5 = maxForce;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(546)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(546)
				if ((tmp6)){
					HX_STACK_LINE(546)
					ret->zpp_inner->maxForce = maxForce;
					HX_STACK_LINE(546)
					ret->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(546)
			ret->zpp_inner->maxForce;
		}
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			Float tmp1 = me->zpp_inner->damping;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(547)
			Float damping = tmp1;		HX_STACK_VAR(damping,"damping");
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(547)
				bool tmp2 = (damping != damping);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(547)
				if ((tmp2)){
					HX_STACK_LINE(547)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::Damping cannot be Nan","\xb2","\x2b","\x24","\x5d"));
				}
				HX_STACK_LINE(547)
				bool tmp3 = (damping < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(547)
				if ((tmp3)){
					HX_STACK_LINE(547)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::Damping must be >=0","\x02","\xc2","\x61","\x64"));
				}
				HX_STACK_LINE(547)
				Float tmp4 = ret->zpp_inner->damping;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(547)
				Float tmp5 = damping;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(547)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(547)
				if ((tmp6)){
					HX_STACK_LINE(547)
					ret->zpp_inner->damping = damping;
					HX_STACK_LINE(547)
					bool tmp7 = ret->zpp_inner->stiff;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(547)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(547)
					if ((tmp8)){
						HX_STACK_LINE(547)
						ret->zpp_inner->wake();
					}
				}
			}
			HX_STACK_LINE(547)
			ret->zpp_inner->damping;
		}
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			Float tmp1 = me->zpp_inner->frequency;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(548)
			Float frequency = tmp1;		HX_STACK_VAR(frequency,"frequency");
			HX_STACK_LINE(548)
			{
				HX_STACK_LINE(548)
				bool tmp2 = (frequency != frequency);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(548)
				if ((tmp2)){
					HX_STACK_LINE(548)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::Frequency cannot be NaN","\x2c","\x1e","\xc8","\x25"));
				}
				HX_STACK_LINE(548)
				bool tmp3 = (frequency <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(548)
				if ((tmp3)){
					HX_STACK_LINE(548)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::Frequency must be >0","\x87","\xa7","\xde","\xc8"));
				}
				HX_STACK_LINE(548)
				Float tmp4 = ret->zpp_inner->frequency;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(548)
				Float tmp5 = frequency;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(548)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(548)
				if ((tmp6)){
					HX_STACK_LINE(548)
					ret->zpp_inner->frequency = frequency;
					HX_STACK_LINE(548)
					bool tmp7 = ret->zpp_inner->stiff;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(548)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(548)
					if ((tmp8)){
						HX_STACK_LINE(548)
						ret->zpp_inner->wake();
					}
				}
			}
			HX_STACK_LINE(548)
			ret->zpp_inner->frequency;
		}
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			bool tmp1 = me->zpp_inner->stiff;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(549)
			bool stiff = tmp1;		HX_STACK_VAR(stiff,"stiff");
			HX_STACK_LINE(549)
			{
				HX_STACK_LINE(549)
				bool tmp2 = ret->zpp_inner->stiff;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(549)
				bool tmp3 = stiff;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(549)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(549)
				if ((tmp4)){
					HX_STACK_LINE(549)
					ret->zpp_inner->stiff = stiff;
					HX_STACK_LINE(549)
					ret->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(549)
			ret->zpp_inner->stiff;
		}
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			bool tmp1 = me->zpp_inner->ignore;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(550)
			bool ignore = tmp1;		HX_STACK_VAR(ignore,"ignore");
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				bool tmp2 = ret->zpp_inner->ignore;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(550)
				bool tmp3 = ignore;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(550)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(550)
				if ((tmp4)){
					HX_STACK_LINE(550)
					ret->zpp_inner->ignore = ignore;
					HX_STACK_LINE(550)
					ret->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(550)
			ret->zpp_inner->ignore;
		}
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			bool tmp1 = me->zpp_inner->active;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(551)
			bool active = tmp1;		HX_STACK_VAR(active,"active");
			HX_STACK_LINE(551)
			{
				HX_STACK_LINE(551)
				bool tmp2 = ret->zpp_inner->active;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(551)
				bool tmp3 = active;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(551)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(551)
				if ((tmp4)){
					HX_STACK_LINE(551)
					::zpp_nape::space::ZPP_Component tmp5 = ret->zpp_inner->component;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(551)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(551)
					if ((tmp6)){
						HX_STACK_LINE(551)
						::zpp_nape::space::ZPP_Component tmp7 = ret->zpp_inner->component;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(551)
						tmp7->woken = false;
					}
					HX_STACK_LINE(551)
					ret->zpp_inner->clearcache();
					HX_STACK_LINE(551)
					bool tmp7 = active;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(551)
					if ((tmp7)){
						HX_STACK_LINE(551)
						ret->zpp_inner->active = active;
						HX_STACK_LINE(551)
						ret->zpp_inner->activate();
						HX_STACK_LINE(551)
						::zpp_nape::space::ZPP_Space tmp8 = ret->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(551)
						bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(551)
						if ((tmp9)){
							HX_STACK_LINE(551)
							::zpp_nape::space::ZPP_Component tmp10 = ret->zpp_inner->component;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(551)
							bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(551)
							if ((tmp11)){
								HX_STACK_LINE(551)
								::zpp_nape::space::ZPP_Component tmp12 = ret->zpp_inner->component;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(551)
								tmp12->sleeping = true;
							}
							HX_STACK_LINE(551)
							::zpp_nape::space::ZPP_Space tmp12 = ret->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(551)
							::zpp_nape::constraint::ZPP_Constraint tmp13 = ret->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(551)
							tmp12->wake_constraint(tmp13,true);
						}
					}
					else{
						HX_STACK_LINE(551)
						::zpp_nape::space::ZPP_Space tmp8 = ret->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(551)
						bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(551)
						if ((tmp9)){
							HX_STACK_LINE(551)
							ret->zpp_inner->wake();
							HX_STACK_LINE(551)
							::zpp_nape::space::ZPP_Space tmp10 = ret->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(551)
							::zpp_nape::constraint::ZPP_Constraint tmp11 = ret->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(551)
							tmp10->live_constraints->remove(tmp11);
						}
						HX_STACK_LINE(551)
						ret->zpp_inner->active = active;
						HX_STACK_LINE(551)
						ret->zpp_inner->deactivate();
					}
				}
			}
			HX_STACK_LINE(551)
			ret->zpp_inner->active;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Constraint_obj,copyto,(void))


ZPP_Constraint_obj::ZPP_Constraint_obj()
{
}

void ZPP_Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Constraint);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(stiff,"stiff");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(damping,"damping");
	HX_MARK_MEMBER_NAME(maxForce,"maxForce");
	HX_MARK_MEMBER_NAME(maxError,"maxError");
	HX_MARK_MEMBER_NAME(breakUnderForce,"breakUnderForce");
	HX_MARK_MEMBER_NAME(breakUnderError,"breakUnderError");
	HX_MARK_MEMBER_NAME(removeOnBreak,"removeOnBreak");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_MEMBER_NAME(__velocity,"__velocity");
	HX_MARK_MEMBER_NAME(cbTypes,"cbTypes");
	HX_MARK_MEMBER_NAME(cbSet,"cbSet");
	HX_MARK_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
	HX_MARK_MEMBER_NAME(pre_dt,"pre_dt");
	HX_MARK_END_CLASS();
}

void ZPP_Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(stiff,"stiff");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(damping,"damping");
	HX_VISIT_MEMBER_NAME(maxForce,"maxForce");
	HX_VISIT_MEMBER_NAME(maxError,"maxError");
	HX_VISIT_MEMBER_NAME(breakUnderForce,"breakUnderForce");
	HX_VISIT_MEMBER_NAME(breakUnderError,"breakUnderError");
	HX_VISIT_MEMBER_NAME(removeOnBreak,"removeOnBreak");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
	HX_VISIT_MEMBER_NAME(__velocity,"__velocity");
	HX_VISIT_MEMBER_NAME(cbTypes,"cbTypes");
	HX_VISIT_MEMBER_NAME(cbSet,"cbSet");
	HX_VISIT_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
	HX_VISIT_MEMBER_NAME(pre_dt,"pre_dt");
}

Dynamic ZPP_Constraint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wake") ) { return wake_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"stiff") ) { return stiff; }
		if (HX_FIELD_EQ(inName,"cbSet") ) { return cbSet; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"ignore") ) { return ignore; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"broken") ) { return broken_dyn(); }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { return pre_dt; }
		if (HX_FIELD_EQ(inName,"copyto") ) { return copyto_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { return damping; }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return cbTypes; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"compound") ) { return compound; }
		if (HX_FIELD_EQ(inName,"maxForce") ) { return maxForce; }
		if (HX_FIELD_EQ(inName,"maxError") ) { return maxError; }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"component") ) { return component; }
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__velocity") ) { return __velocity; }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alloc_cbSet") ) { return alloc_cbSet_dyn(); }
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { return wrap_cbTypes; }
		if (HX_FIELD_EQ(inName,"setupcbTypes") ) { return setupcbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { return removeOnBreak; }
		if (HX_FIELD_EQ(inName,"insert_cbtype") ) { return insert_cbtype_dyn(); }
		if (HX_FIELD_EQ(inName,"dealloc_cbSet") ) { return dealloc_cbSet_dyn(); }
		if (HX_FIELD_EQ(inName,"activeInSpace") ) { return activeInSpace_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { return breakUnderForce; }
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { return breakUnderError; }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"immutable_midstep") ) { return immutable_midstep_dyn(); }
		if (HX_FIELD_EQ(inName,"immutable_cbTypes") ) { return immutable_cbTypes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_adder") ) { return wrap_cbTypes_adder_dyn(); }
		if (HX_FIELD_EQ(inName,"inactiveOrOutSpace") ) { return inactiveOrOutSpace_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_subber") ) { return wrap_cbTypes_subber_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::constraint::Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stiff") ) { stiff=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbSet") ) { cbSet=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignore") ) { ignore=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { pre_dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { damping=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { cbTypes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxForce") ) { maxForce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxError") ) { maxError=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__velocity") ) { __velocity=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { wrap_cbTypes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { removeOnBreak=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { breakUnderForce=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { breakUnderError=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Constraint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_Constraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("stiff","\xe8","\x7b","\x11","\x84"));
	outFields->push(HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"));
	outFields->push(HX_HCSTRING("damping","\xc2","\x90","\x05","\x14"));
	outFields->push(HX_HCSTRING("maxForce","\xa7","\x04","\xb2","\xae"));
	outFields->push(HX_HCSTRING("maxError","\x84","\x1e","\x47","\x1d"));
	outFields->push(HX_HCSTRING("breakUnderForce","\x52","\xc7","\x85","\x6d"));
	outFields->push(HX_HCSTRING("breakUnderError","\x2f","\xe1","\x1a","\xdc"));
	outFields->push(HX_HCSTRING("removeOnBreak","\x3c","\x1f","\xe4","\x27"));
	outFields->push(HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
	outFields->push(HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"));
	outFields->push(HX_HCSTRING("__velocity","\x3d","\x75","\x36","\xc2"));
	outFields->push(HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1"));
	outFields->push(HX_HCSTRING("cbSet","\x43","\xaa","\xb1","\x41"));
	outFields->push(HX_HCSTRING("wrap_cbTypes","\xa5","\x96","\x54","\x44"));
	outFields->push(HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::Constraint*/ ,(int)offsetof(ZPP_Constraint_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsInt,(int)offsetof(ZPP_Constraint_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Constraint_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Constraint_obj,compound),HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Constraint_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,stiff),HX_HCSTRING("stiff","\xe8","\x7b","\x11","\x84")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,frequency),HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,damping),HX_HCSTRING("damping","\xc2","\x90","\x05","\x14")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,maxForce),HX_HCSTRING("maxForce","\xa7","\x04","\xb2","\xae")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,maxError),HX_HCSTRING("maxError","\x84","\x1e","\x47","\x1d")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,breakUnderForce),HX_HCSTRING("breakUnderForce","\x52","\xc7","\x85","\x6d")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,breakUnderError),HX_HCSTRING("breakUnderError","\x2f","\xe1","\x1a","\xdc")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,removeOnBreak),HX_HCSTRING("removeOnBreak","\x3c","\x1f","\xe4","\x27")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Component*/ ,(int)offsetof(ZPP_Constraint_obj,component),HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,ignore),HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92")},
	{hx::fsBool,(int)offsetof(ZPP_Constraint_obj,__velocity),HX_HCSTRING("__velocity","\x3d","\x75","\x36","\xc2")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(int)offsetof(ZPP_Constraint_obj,cbTypes),HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_Constraint_obj,cbSet),HX_HCSTRING("cbSet","\x43","\xaa","\xb1","\x41")},
	{hx::fsObject /*::nape::callbacks::CbTypeList*/ ,(int)offsetof(ZPP_Constraint_obj,wrap_cbTypes),HX_HCSTRING("wrap_cbTypes","\xa5","\x96","\x54","\x44")},
	{hx::fsFloat,(int)offsetof(ZPP_Constraint_obj,pre_dt),HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("stiff","\xe8","\x7b","\x11","\x84"),
	HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"),
	HX_HCSTRING("damping","\xc2","\x90","\x05","\x14"),
	HX_HCSTRING("maxForce","\xa7","\x04","\xb2","\xae"),
	HX_HCSTRING("maxError","\x84","\x1e","\x47","\x1d"),
	HX_HCSTRING("breakUnderForce","\x52","\xc7","\x85","\x6d"),
	HX_HCSTRING("breakUnderError","\x2f","\xe1","\x1a","\xdc"),
	HX_HCSTRING("removeOnBreak","\x3c","\x1f","\xe4","\x27"),
	HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"),
	HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"),
	HX_HCSTRING("__velocity","\x3d","\x75","\x36","\xc2"),
	HX_HCSTRING("immutable_midstep","\x97","\xf0","\xae","\xea"),
	HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1"),
	HX_HCSTRING("cbSet","\x43","\xaa","\xb1","\x41"),
	HX_HCSTRING("wrap_cbTypes","\xa5","\x96","\x54","\x44"),
	HX_HCSTRING("setupcbTypes","\x7d","\xf4","\xa2","\xe2"),
	HX_HCSTRING("immutable_cbTypes","\x1d","\xbd","\xe3","\x4b"),
	HX_HCSTRING("wrap_cbTypes_subber","\x69","\xc5","\x02","\x23"),
	HX_HCSTRING("wrap_cbTypes_adder","\x74","\xbc","\x69","\xb4"),
	HX_HCSTRING("insert_cbtype","\x5f","\x1c","\xf6","\x35"),
	HX_HCSTRING("alloc_cbSet","\xb9","\xdb","\xce","\x10"),
	HX_HCSTRING("dealloc_cbSet","\xd8","\x21","\x86","\x40"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),
	HX_HCSTRING("addedToSpace","\x6b","\x44","\xb0","\x09"),
	HX_HCSTRING("removedFromSpace","\x3c","\x43","\xd1","\xb7"),
	HX_HCSTRING("activeInSpace","\x7b","\xad","\xec","\xd5"),
	HX_HCSTRING("inactiveOrOutSpace","\xe6","\xc0","\x1f","\x43"),
	HX_HCSTRING("activeBodies","\xe6","\x69","\xf8","\xba"),
	HX_HCSTRING("inactiveBodies","\x4b","\x89","\xc5","\x8c"),
	HX_HCSTRING("clearcache","\x95","\x69","\xf1","\x82"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("wake_connected","\xae","\xcf","\xdd","\x3d"),
	HX_HCSTRING("forest","\xdd","\x8c","\x88","\xfd"),
	HX_HCSTRING("pair_exists","\xa1","\x6a","\x58","\x69"),
	HX_HCSTRING("broken","\x55","\xb6","\x57","\x1c"),
	HX_HCSTRING("warmStart","\xdd","\x27","\x03","\xeb"),
	HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae"),
	HX_HCSTRING("preStep","\x0f","\xc1","\xc0","\x24"),
	HX_HCSTRING("applyImpulseVel","\xb6","\xc7","\x50","\x1f"),
	HX_HCSTRING("applyImpulsePos","\xed","\x42","\x4c","\x1f"),
	HX_HCSTRING("wake","\x24","\x5c","\xf2","\x4e"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("copyto","\x70","\x38","\x33","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Constraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Constraint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Constraint_obj::__mClass;

void ZPP_Constraint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_Constraint","\xd2","\x5b","\xb0","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_Constraint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Constraint_obj >;
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
} // end namespace constraint
