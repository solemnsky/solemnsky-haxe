#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CallbackSet
#include <zpp_nape/util/ZNPList_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Interactor_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","new",0xc4ed842b,"zpp_nape.phys.ZPP_Interactor.new","zpp_nape/phys/Interactor.hx",174,0x9650902a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(287)
	this->wrap_cbTypes = null();
	HX_STACK_LINE(286)
	this->cbSet = null();
	HX_STACK_LINE(285)
	this->cbTypes = null();
	HX_STACK_LINE(284)
	this->group = null();
	HX_STACK_LINE(234)
	this->cbsets = null();
	HX_STACK_LINE(180)
	this->icompound = null();
	HX_STACK_LINE(179)
	this->ibody = null();
	HX_STACK_LINE(178)
	this->ishape = null();
	HX_STACK_LINE(177)
	this->userData = null();
	HX_STACK_LINE(176)
	this->id = (int)0;
	HX_STACK_LINE(175)
	this->outer_i = null();
	HX_STACK_LINE(421)
	int tmp = ::zpp_nape::ZPP_ID_obj::Interactor();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	this->id = tmp;
	HX_STACK_LINE(422)
	::zpp_nape::util::ZNPList_ZPP_CallbackSet tmp1 = ::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	this->cbsets = tmp1;
	HX_STACK_LINE(423)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(423)
	this->cbTypes = tmp2;
}
;
	return null();
}

//ZPP_Interactor_obj::~ZPP_Interactor_obj() { }

Dynamic ZPP_Interactor_obj::__CreateEmpty() { return  new ZPP_Interactor_obj; }
hx::ObjectPtr< ZPP_Interactor_obj > ZPP_Interactor_obj::__new()
{  hx::ObjectPtr< ZPP_Interactor_obj > _result_ = new ZPP_Interactor_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Interactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Interactor_obj > _result_ = new ZPP_Interactor_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_Interactor_obj::isShape( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","isShape",0x39e97c22,"zpp_nape.phys.ZPP_Interactor.isShape","zpp_nape/phys/Interactor.hx",183,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	::zpp_nape::shape::ZPP_Shape tmp = this->ishape;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isShape,return )

bool ZPP_Interactor_obj::isBody( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","isBody",0x96e8bcc1,"zpp_nape.phys.ZPP_Interactor.isBody","zpp_nape/phys/Interactor.hx",188,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	::zpp_nape::phys::ZPP_Body tmp = this->ibody;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isBody,return )

bool ZPP_Interactor_obj::isCompound( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","isCompound",0x8dd2010a,"zpp_nape.phys.ZPP_Interactor.isCompound","zpp_nape/phys/Interactor.hx",193,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	::zpp_nape::phys::ZPP_Compound tmp = this->icompound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isCompound,return )

Void ZPP_Interactor_obj::__iaddedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","__iaddedToSpace",0xdad3af7f,"zpp_nape.phys.ZPP_Interactor.__iaddedToSpace","zpp_nape/phys/Interactor.hx",196,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		if ((tmp1)){
			HX_STACK_LINE(197)
			::zpp_nape::dynamics::ZPP_InteractionGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			tmp2->interactors->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(199)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = this->cbTypes;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp2->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(200)
			while((true)){
				HX_STACK_LINE(200)
				bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(200)
				if ((tmp4)){
					HX_STACK_LINE(200)
					break;
				}
				HX_STACK_LINE(201)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(202)
				cb->interactors->add(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(203)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(206)
		this->alloc_cbSet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,__iaddedToSpace,(void))

Void ZPP_Interactor_obj::__iremovedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","__iremovedFromSpace",0xba89c850,"zpp_nape.phys.ZPP_Interactor.__iremovedFromSpace","zpp_nape/phys/Interactor.hx",208,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		if ((tmp1)){
			HX_STACK_LINE(209)
			int flag = (int)-1;		HX_STACK_VAR(flag,"flag");
			HX_STACK_LINE(209)
			::zpp_nape::dynamics::ZPP_InteractionGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(209)
			tmp2->interactors->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(211)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = this->cbTypes;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(211)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp2->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(212)
			while((true)){
				HX_STACK_LINE(212)
				bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(212)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(212)
				if ((tmp4)){
					HX_STACK_LINE(212)
					break;
				}
				HX_STACK_LINE(213)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(214)
				cb->interactors->remove(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(215)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(218)
		this->dealloc_cbSet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,__iremovedFromSpace,(void))

Void ZPP_Interactor_obj::wake( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","wake",0x90d5f9f9,"zpp_nape.phys.ZPP_Interactor.wake","zpp_nape/phys/Interactor.hx",220,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		::zpp_nape::shape::ZPP_Shape tmp = this->ishape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		if ((tmp1)){
			HX_STACK_LINE(222)
			::zpp_nape::shape::ZPP_Shape tmp2 = this->ishape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			::zpp_nape::phys::ZPP_Body body = tmp2->body;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(223)
			bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			if ((tmp3)){
				HX_STACK_LINE(223)
				tmp4 = (body->space != null());
			}
			else{
				HX_STACK_LINE(223)
				tmp4 = false;
			}
			HX_STACK_LINE(223)
			if ((tmp4)){
				HX_STACK_LINE(223)
				::zpp_nape::phys::ZPP_Body tmp5 = body;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(223)
				body->space->non_inlined_wake(tmp5,null());
			}
			HX_STACK_LINE(224)
			true;
		}
		else{
			HX_STACK_LINE(226)
			::zpp_nape::phys::ZPP_Body tmp2 = this->ibody;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			if ((tmp3)){
				HX_STACK_LINE(227)
				::zpp_nape::phys::ZPP_Body tmp4 = this->ibody;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				::zpp_nape::space::ZPP_Space tmp5 = tmp4->space;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(227)
				if ((tmp6)){
					HX_STACK_LINE(227)
					::zpp_nape::phys::ZPP_Body tmp7 = this->ibody;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(227)
					::zpp_nape::phys::ZPP_Body tmp8 = this->ibody;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(227)
					tmp7->space->non_inlined_wake(tmp8,null());
				}
				else{
					HX_STACK_LINE(227)
					false;
				}
			}
			else{
				HX_STACK_LINE(230)
				::zpp_nape::phys::ZPP_Compound tmp4 = this->icompound;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(230)
				::zpp_nape::space::ZPP_Space tmp5 = tmp4->space;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(230)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(230)
				if ((tmp6)){
					HX_STACK_LINE(230)
					::zpp_nape::phys::ZPP_Compound tmp7 = this->icompound;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(230)
					::zpp_nape::phys::ZPP_Compound tmp8 = this->icompound;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(230)
					tmp7->space->wakeCompound(tmp8);
				}
				HX_STACK_LINE(231)
				true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,wake,(void))

::zpp_nape::space::ZPP_Space ZPP_Interactor_obj::getSpace( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","getSpace",0xde0d48a5,"zpp_nape.phys.ZPP_Interactor.getSpace","zpp_nape/phys/Interactor.hx",281,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	::zpp_nape::shape::ZPP_Shape tmp = this->ishape;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	::zpp_nape::space::ZPP_Space tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(282)
	if ((tmp1)){
		HX_STACK_LINE(282)
		::zpp_nape::shape::ZPP_Shape tmp3 = this->ishape;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		::zpp_nape::phys::ZPP_Body tmp4 = tmp3->body;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		if ((tmp5)){
			HX_STACK_LINE(282)
			tmp2 = null();
		}
		else{
			HX_STACK_LINE(282)
			::zpp_nape::shape::ZPP_Shape tmp6 = this->ishape;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(282)
			tmp2 = tmp6->body->space;
		}
	}
	else{
		HX_STACK_LINE(282)
		::zpp_nape::phys::ZPP_Body tmp3 = this->ibody;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		if ((tmp4)){
			HX_STACK_LINE(282)
			::zpp_nape::phys::ZPP_Body tmp5 = this->ibody;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(282)
			tmp2 = tmp5->space;
		}
		else{
			HX_STACK_LINE(282)
			::zpp_nape::phys::ZPP_Compound tmp5 = this->icompound;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(282)
			tmp2 = tmp5->space;
		}
	}
	HX_STACK_LINE(282)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,getSpace,return )

Void ZPP_Interactor_obj::setupcbTypes( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","setupcbTypes",0xcfc7ef52,"zpp_nape.phys.ZPP_Interactor.setupcbTypes","zpp_nape/phys/Interactor.hx",288,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = this->cbTypes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		::nape::callbacks::CbTypeList tmp1 = ::zpp_nape::util::ZPP_CbTypeList_obj::get(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		this->wrap_cbTypes = tmp1;
		HX_STACK_LINE(290)
		Dynamic tmp2 = this->wrap_cbTypes_adder_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		::nape::callbacks::CbTypeList tmp3 = this->wrap_cbTypes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		tmp3->zpp_inner->adder = tmp2;
		HX_STACK_LINE(291)
		Dynamic tmp4 = this->wrap_cbTypes_subber_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		::nape::callbacks::CbTypeList tmp5 = this->wrap_cbTypes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(291)
		tmp5->zpp_inner->subber = tmp4;
		HX_STACK_LINE(292)
		::nape::callbacks::CbTypeList tmp6 = this->wrap_cbTypes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		tmp6->zpp_inner->dontremove = true;
		HX_STACK_LINE(294)
		Dynamic tmp7 = this->immutable_cbTypes_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(294)
		::nape::callbacks::CbTypeList tmp8 = this->wrap_cbTypes;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(294)
		tmp8->zpp_inner->_modifiable = tmp7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,setupcbTypes,(void))

Void ZPP_Interactor_obj::immutable_cbTypes( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","immutable_cbTypes",0x9e785e28,"zpp_nape.phys.ZPP_Interactor.immutable_cbTypes","zpp_nape/phys/Interactor.hx",299,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		this->immutable_midstep(HX_HCSTRING("Interactor::cbTypes","\x01","\x6d","\x87","\x57"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,immutable_cbTypes,(void))

Void ZPP_Interactor_obj::wrap_cbTypes_subber( ::nape::callbacks::CbType pcb){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","wrap_cbTypes_subber",0xbcc9ff34,"zpp_nape.phys.ZPP_Interactor.wrap_cbTypes_subber","zpp_nape/phys/Interactor.hx",302,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pcb,"pcb")
		HX_STACK_LINE(303)
		::zpp_nape::callbacks::ZPP_CbType cb = pcb->zpp_inner;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(304)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = this->cbTypes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		::zpp_nape::callbacks::ZPP_CbType tmp1 = cb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		if ((tmp2)){
			HX_STACK_LINE(305)
			::zpp_nape::shape::ZPP_Shape tmp3 = this->ishape;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			::zpp_nape::space::ZPP_Space tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			if ((tmp4)){
				HX_STACK_LINE(305)
				::zpp_nape::shape::ZPP_Shape tmp6 = this->ishape;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				::zpp_nape::phys::ZPP_Body tmp7 = tmp6->body;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(305)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(305)
				if ((tmp8)){
					HX_STACK_LINE(305)
					tmp5 = null();
				}
				else{
					HX_STACK_LINE(305)
					::zpp_nape::shape::ZPP_Shape tmp9 = this->ishape;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(305)
					tmp5 = tmp9->body->space;
				}
			}
			else{
				HX_STACK_LINE(305)
				::zpp_nape::phys::ZPP_Body tmp6 = this->ibody;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(305)
				if ((tmp7)){
					HX_STACK_LINE(305)
					::zpp_nape::phys::ZPP_Body tmp8 = this->ibody;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(305)
					tmp5 = tmp8->space;
				}
				else{
					HX_STACK_LINE(305)
					::zpp_nape::phys::ZPP_Compound tmp8 = this->icompound;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(305)
					tmp5 = tmp8->space;
				}
			}
			HX_STACK_LINE(305)
			::zpp_nape::space::ZPP_Space space = tmp5;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(306)
			bool tmp6 = (space != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(306)
			if ((tmp6)){
				HX_STACK_LINE(307)
				this->dealloc_cbSet();
				HX_STACK_LINE(308)
				cb->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(310)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = this->cbTypes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(310)
			::zpp_nape::callbacks::ZPP_CbType tmp8 = cb;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(310)
			tmp7->remove(tmp8);
			HX_STACK_LINE(311)
			bool tmp9 = (space != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(311)
			if ((tmp9)){
				HX_STACK_LINE(312)
				this->alloc_cbSet();
				HX_STACK_LINE(313)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,wrap_cbTypes_subber,(void))

bool ZPP_Interactor_obj::wrap_cbTypes_adder( ::nape::callbacks::CbType cb){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","wrap_cbTypes_adder",0xa3e20509,"zpp_nape.phys.ZPP_Interactor.wrap_cbTypes_adder","zpp_nape/phys/Interactor.hx",317,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cb,"cb")
	HX_STACK_LINE(318)
	::zpp_nape::callbacks::ZPP_CbType tmp = cb->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	this->insert_cbtype(tmp);
	HX_STACK_LINE(319)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,wrap_cbTypes_adder,return )

Void ZPP_Interactor_obj::insert_cbtype( ::zpp_nape::callbacks::ZPP_CbType cb){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","insert_cbtype",0xc92c9bea,"zpp_nape.phys.ZPP_Interactor.insert_cbtype","zpp_nape/phys/Interactor.hx",321,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(322)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = this->cbTypes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		::zpp_nape::callbacks::ZPP_CbType tmp1 = cb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		if ((tmp3)){
			HX_STACK_LINE(323)
			::zpp_nape::shape::ZPP_Shape tmp4 = this->ishape;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(323)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(323)
			::zpp_nape::space::ZPP_Space tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(323)
			if ((tmp5)){
				HX_STACK_LINE(323)
				::zpp_nape::shape::ZPP_Shape tmp7 = this->ishape;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(323)
				::zpp_nape::phys::ZPP_Body tmp8 = tmp7->body;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(323)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(323)
				if ((tmp9)){
					HX_STACK_LINE(323)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(323)
					::zpp_nape::shape::ZPP_Shape tmp10 = this->ishape;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(323)
					tmp6 = tmp10->body->space;
				}
			}
			else{
				HX_STACK_LINE(323)
				::zpp_nape::phys::ZPP_Body tmp7 = this->ibody;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(323)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(323)
				if ((tmp8)){
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Body tmp9 = this->ibody;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(323)
					tmp6 = tmp9->space;
				}
				else{
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Compound tmp9 = this->icompound;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(323)
					tmp6 = tmp9->space;
				}
			}
			HX_STACK_LINE(323)
			::zpp_nape::space::ZPP_Space space = tmp6;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(324)
			bool tmp7 = (space != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			if ((tmp7)){
				HX_STACK_LINE(325)
				this->dealloc_cbSet();
				HX_STACK_LINE(326)
				cb->interactors->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(329)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(330)
				{
					HX_STACK_LINE(331)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = this->cbTypes;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(331)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp8->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(332)
					while((true)){
						HX_STACK_LINE(332)
						bool tmp9 = (cx_ite != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(332)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(332)
						if ((tmp10)){
							HX_STACK_LINE(332)
							break;
						}
						HX_STACK_LINE(333)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(334)
						{
							HX_STACK_LINE(335)
							bool tmp11 = (cb->id < j->id);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(335)
							if ((tmp11)){
								HX_STACK_LINE(335)
								break;
							}
							HX_STACK_LINE(336)
							pre = cx_ite;
						}
						HX_STACK_LINE(338)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(341)
				{
					HX_STACK_LINE(341)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = this->cbTypes;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(341)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(341)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(341)
					{
						HX_STACK_LINE(341)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(341)
						{
							HX_STACK_LINE(341)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp10 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(341)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(341)
							if ((tmp11)){
								HX_STACK_LINE(341)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp12 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(341)
								ret = tmp12;
							}
							else{
								HX_STACK_LINE(341)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp12 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(341)
								ret = tmp12;
								HX_STACK_LINE(341)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(341)
								ret->next = null();
							}
							HX_STACK_LINE(341)
							Dynamic();
						}
						HX_STACK_LINE(341)
						ret->elt = cb;
						HX_STACK_LINE(341)
						tmp9 = ret;
					}
					HX_STACK_LINE(341)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp9;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(341)
					bool tmp10 = (pre == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(341)
					if ((tmp10)){
						HX_STACK_LINE(341)
						temp->next = _this->head;
						HX_STACK_LINE(341)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(341)
						temp->next = pre->next;
						HX_STACK_LINE(341)
						pre->next = temp;
					}
					HX_STACK_LINE(341)
					bool tmp11 = _this->modified = true;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(341)
					_this->pushmod = tmp11;
					HX_STACK_LINE(341)
					(_this->length)++;
					HX_STACK_LINE(341)
					temp;
				}
			}
			HX_STACK_LINE(343)
			bool tmp8 = (space != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(343)
			if ((tmp8)){
				HX_STACK_LINE(344)
				this->alloc_cbSet();
				HX_STACK_LINE(345)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,insert_cbtype,(void))

Void ZPP_Interactor_obj::alloc_cbSet( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","alloc_cbSet",0xa841d284,"zpp_nape.phys.ZPP_Interactor.alloc_cbSet","zpp_nape/phys/Interactor.hx",349,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		::zpp_nape::shape::ZPP_Shape tmp = this->ishape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		::zpp_nape::space::ZPP_Space tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		if ((tmp1)){
			HX_STACK_LINE(350)
			::zpp_nape::shape::ZPP_Shape tmp3 = this->ishape;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(350)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(350)
			if ((tmp5)){
				HX_STACK_LINE(350)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(350)
				::zpp_nape::shape::ZPP_Shape tmp6 = this->ishape;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(350)
				tmp2 = tmp6->body->space;
			}
		}
		else{
			HX_STACK_LINE(350)
			::zpp_nape::phys::ZPP_Body tmp3 = this->ibody;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(350)
			if ((tmp4)){
				HX_STACK_LINE(350)
				::zpp_nape::phys::ZPP_Body tmp5 = this->ibody;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(350)
				tmp2 = tmp5->space;
			}
			else{
				HX_STACK_LINE(350)
				::zpp_nape::phys::ZPP_Compound tmp5 = this->icompound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(350)
				tmp2 = tmp5->space;
			}
		}
		HX_STACK_LINE(350)
		::zpp_nape::space::ZPP_Space space = tmp2;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(359)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = this->cbTypes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		::zpp_nape::callbacks::ZPP_CbSet tmp4 = space->cbsets->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(359)
		::zpp_nape::callbacks::ZPP_CbSet tmp5 = this->cbSet = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(359)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(359)
		if ((tmp6)){
			HX_STACK_LINE(360)
			{
				HX_STACK_LINE(360)
				::zpp_nape::callbacks::ZPP_CbSet tmp7 = this->cbSet;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(360)
				(tmp7->count)++;
			}
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				::zpp_nape::callbacks::ZPP_CbSet tmp7 = this->cbSet;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(361)
				tmp7->interactors->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(362)
			::zpp_nape::callbacks::ZPP_CbSet tmp7 = this->cbSet;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(362)
			tmp7->validate();
			HX_STACK_LINE(363)
			space->freshInteractorType(hx::ObjectPtr<OBJ_>(this),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,alloc_cbSet,(void))

Void ZPP_Interactor_obj::dealloc_cbSet( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","dealloc_cbSet",0xd3bca163,"zpp_nape.phys.ZPP_Interactor.dealloc_cbSet","zpp_nape/phys/Interactor.hx",366,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(367)
		::zpp_nape::shape::ZPP_Shape tmp = this->ishape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		::zpp_nape::space::ZPP_Space tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		if ((tmp1)){
			HX_STACK_LINE(367)
			::zpp_nape::shape::ZPP_Shape tmp3 = this->ishape;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(367)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(367)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(367)
			if ((tmp5)){
				HX_STACK_LINE(367)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(367)
				::zpp_nape::shape::ZPP_Shape tmp6 = this->ishape;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				tmp2 = tmp6->body->space;
			}
		}
		else{
			HX_STACK_LINE(367)
			::zpp_nape::phys::ZPP_Body tmp3 = this->ibody;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(367)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(367)
			if ((tmp4)){
				HX_STACK_LINE(367)
				::zpp_nape::phys::ZPP_Body tmp5 = this->ibody;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(367)
				tmp2 = tmp5->space;
			}
			else{
				HX_STACK_LINE(367)
				::zpp_nape::phys::ZPP_Compound tmp5 = this->icompound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(367)
				tmp2 = tmp5->space;
			}
		}
		HX_STACK_LINE(367)
		::zpp_nape::space::ZPP_Space space = tmp2;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(376)
		::zpp_nape::callbacks::ZPP_CbSet tmp3 = this->cbSet;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(376)
		if ((tmp4)){
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				::zpp_nape::callbacks::ZPP_CbSet tmp5 = this->cbSet;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(377)
				tmp5->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(378)
			space->nullInteractorType(hx::ObjectPtr<OBJ_>(this),null());
			HX_STACK_LINE(379)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				::zpp_nape::callbacks::ZPP_CbSet tmp6 = this->cbSet;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(379)
				int tmp7 = --(tmp6->count);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(379)
				tmp5 = (tmp7 == (int)0);
			}
			HX_STACK_LINE(379)
			if ((tmp5)){
				HX_STACK_LINE(380)
				::zpp_nape::callbacks::ZPP_CbSet tmp6 = this->cbSet;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(380)
				space->cbsets->remove(tmp6);
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(382)
					::zpp_nape::callbacks::ZPP_CbSet tmp7 = this->cbSet;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(382)
					::zpp_nape::callbacks::ZPP_CbSet o = tmp7;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(391)
					{
						HX_STACK_LINE(391)
						o->listeners->clear();
						HX_STACK_LINE(391)
						o->zip_listeners = true;
						HX_STACK_LINE(391)
						o->bodylisteners->clear();
						HX_STACK_LINE(391)
						o->zip_bodylisteners = true;
						HX_STACK_LINE(391)
						o->conlisteners->clear();
						HX_STACK_LINE(391)
						o->zip_conlisteners = true;
						HX_STACK_LINE(391)
						while((true)){
							HX_STACK_LINE(391)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp8 = o->cbTypes->head;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(391)
							bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(391)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(391)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(391)
							if ((tmp11)){
								HX_STACK_LINE(391)
								break;
							}
							HX_STACK_LINE(391)
							::zpp_nape::callbacks::ZPP_CbType tmp12 = o->cbTypes->pop_unsafe();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(391)
							::zpp_nape::callbacks::ZPP_CbType cb = tmp12;		HX_STACK_VAR(cb,"cb");
							HX_STACK_LINE(391)
							::zpp_nape::callbacks::ZPP_CbSet tmp13 = o;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(391)
							cb->cbsets->remove(tmp13);
						}
						HX_STACK_LINE(391)
						Dynamic();
					}
					HX_STACK_LINE(392)
					::zpp_nape::callbacks::ZPP_CbSet tmp8 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(392)
					o->next = tmp8;
					HX_STACK_LINE(393)
					::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(399)
			this->cbSet = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,dealloc_cbSet,(void))

Void ZPP_Interactor_obj::setGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","setGroup",0xa4f8c892,"zpp_nape.phys.ZPP_Interactor.setGroup","zpp_nape/phys/Interactor.hx",402,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(group,"group")
		HX_STACK_LINE(403)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(403)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = group;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		if ((tmp2)){
			HX_STACK_LINE(404)
			::zpp_nape::shape::ZPP_Shape tmp3 = this->ishape;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(404)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(404)
			::zpp_nape::space::ZPP_Space tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(404)
			if ((tmp4)){
				HX_STACK_LINE(404)
				::zpp_nape::shape::ZPP_Shape tmp6 = this->ishape;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(404)
				::zpp_nape::phys::ZPP_Body tmp7 = tmp6->body;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(404)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(404)
				if ((tmp8)){
					HX_STACK_LINE(404)
					tmp5 = null();
				}
				else{
					HX_STACK_LINE(404)
					::zpp_nape::shape::ZPP_Shape tmp9 = this->ishape;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(404)
					tmp5 = tmp9->body->space;
				}
			}
			else{
				HX_STACK_LINE(404)
				::zpp_nape::phys::ZPP_Body tmp6 = this->ibody;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(404)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(404)
				if ((tmp7)){
					HX_STACK_LINE(404)
					::zpp_nape::phys::ZPP_Body tmp8 = this->ibody;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(404)
					tmp5 = tmp8->space;
				}
				else{
					HX_STACK_LINE(404)
					::zpp_nape::phys::ZPP_Compound tmp8 = this->icompound;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(404)
					tmp5 = tmp8->space;
				}
			}
			HX_STACK_LINE(404)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(404)
			bool inspace = tmp6;		HX_STACK_VAR(inspace,"inspace");
			HX_STACK_LINE(405)
			bool tmp7 = inspace;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(405)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(405)
			if ((tmp7)){
				HX_STACK_LINE(405)
				::zpp_nape::dynamics::ZPP_InteractionGroup tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(405)
				::zpp_nape::dynamics::ZPP_InteractionGroup tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(405)
				tmp8 = (tmp10 != null());
			}
			else{
				HX_STACK_LINE(405)
				tmp8 = false;
			}
			HX_STACK_LINE(405)
			if ((tmp8)){
				HX_STACK_LINE(405)
				int flag = (int)-1;		HX_STACK_VAR(flag,"flag");
				HX_STACK_LINE(405)
				::zpp_nape::dynamics::ZPP_InteractionGroup tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(405)
				tmp9->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(406)
			this->group = group;
			HX_STACK_LINE(407)
			bool tmp9 = inspace;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(407)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(407)
			if ((tmp9)){
				HX_STACK_LINE(407)
				tmp10 = (group != null());
			}
			else{
				HX_STACK_LINE(407)
				tmp10 = false;
			}
			HX_STACK_LINE(407)
			if ((tmp10)){
				HX_STACK_LINE(407)
				group->interactors->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(408)
			bool tmp11 = inspace;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(408)
			if ((tmp11)){
				HX_STACK_LINE(409)
				::zpp_nape::shape::ZPP_Shape tmp12 = this->ishape;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(409)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(409)
				if ((tmp13)){
					HX_STACK_LINE(409)
					::zpp_nape::shape::ZPP_Shape tmp14 = this->ishape;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(409)
					tmp14->body->wake();
				}
				else{
					HX_STACK_LINE(410)
					::zpp_nape::phys::ZPP_Body tmp14 = this->ibody;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(410)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(410)
					if ((tmp15)){
						HX_STACK_LINE(410)
						::zpp_nape::phys::ZPP_Body tmp16 = this->ibody;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(410)
						tmp16->wake();
					}
					else{
						HX_STACK_LINE(411)
						::zpp_nape::phys::ZPP_Compound tmp16 = this->icompound;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(411)
						tmp16->wake();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,setGroup,(void))

Void ZPP_Interactor_obj::immutable_midstep( ::String n){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","immutable_midstep",0x3d4391a2,"zpp_nape.phys.ZPP_Interactor.immutable_midstep","zpp_nape/phys/Interactor.hx",415,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(416)
		::zpp_nape::phys::ZPP_Body tmp = this->ibody;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(416)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		if ((tmp1)){
			HX_STACK_LINE(416)
			::zpp_nape::phys::ZPP_Body tmp2 = this->ibody;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(416)
			::zpp_nape::phys::ZPP_Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(416)
			bool tmp3 = (_this->space != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			if ((tmp3)){
				HX_STACK_LINE(416)
				tmp4 = _this->space->midstep;
			}
			else{
				HX_STACK_LINE(416)
				tmp4 = false;
			}
			HX_STACK_LINE(416)
			if ((tmp4)){
				HX_STACK_LINE(416)
				::String tmp5 = (HX_HCSTRING("Error: ","\x4e","\xa8","\x5b","\xb7") + n);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(416)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be set during a space step()","\x87","\xd5","\x6a","\xc1"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(416)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		else{
			HX_STACK_LINE(417)
			::zpp_nape::shape::ZPP_Shape tmp2 = this->ishape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(417)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			if ((tmp3)){
				HX_STACK_LINE(417)
				::zpp_nape::shape::ZPP_Shape tmp4 = this->ishape;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				::String tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(417)
				tmp4->__immutable_midstep(tmp5);
			}
			else{
				HX_STACK_LINE(418)
				::zpp_nape::phys::ZPP_Compound tmp4 = this->icompound;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(418)
				::String tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				tmp4->__imutable_midstep(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,immutable_midstep,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZPP_Interactor_obj::lookup_group( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","lookup_group",0x00d6af4f,"zpp_nape.phys.ZPP_Interactor.lookup_group","zpp_nape/phys/Interactor.hx",440,0x9650902a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(441)
	::zpp_nape::phys::ZPP_Interactor cur = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(442)
	while((true)){
		HX_STACK_LINE(442)
		bool tmp = (cur != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		if ((tmp)){
			HX_STACK_LINE(442)
			tmp1 = (cur->group == null());
		}
		else{
			HX_STACK_LINE(442)
			tmp1 = false;
		}
		HX_STACK_LINE(442)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		if ((tmp2)){
			HX_STACK_LINE(442)
			break;
		}
		HX_STACK_LINE(443)
		bool tmp3 = (cur->ishape != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		if ((tmp3)){
			HX_STACK_LINE(443)
			::zpp_nape::phys::ZPP_Body tmp4 = cur->ishape->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(443)
			cur = tmp4;
		}
		else{
			HX_STACK_LINE(444)
			bool tmp4 = (cur->icompound != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			if ((tmp4)){
				HX_STACK_LINE(444)
				::zpp_nape::phys::ZPP_Compound tmp5 = cur->icompound->compound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(444)
				cur = tmp5;
			}
			else{
				HX_STACK_LINE(445)
				::zpp_nape::phys::ZPP_Compound tmp5 = cur->ibody->compound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(445)
				cur = tmp5;
			}
		}
	}
	HX_STACK_LINE(447)
	bool tmp = (cur == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(447)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(447)
	if ((tmp)){
		HX_STACK_LINE(447)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(447)
		tmp1 = cur->group;
	}
	HX_STACK_LINE(447)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,lookup_group,return )

Void ZPP_Interactor_obj::copyto( ::nape::phys::Interactor ret){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","copyto",0x0199b585,"zpp_nape.phys.ZPP_Interactor.copyto","zpp_nape/phys/Interactor.hx",449,0x9650902a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ret,"ret")
		HX_STACK_LINE(450)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(450)
		ret->zpp_inner_i->group = tmp;
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			::nape::callbacks::CbTypeIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(451)
			{
				HX_STACK_LINE(451)
				::nape::callbacks::CbTypeList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					::nape::phys::Interactor tmp3 = this->outer_i;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(451)
					::nape::phys::Interactor _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(451)
					::nape::callbacks::CbTypeList tmp4 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(451)
					bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(451)
					if ((tmp5)){
						HX_STACK_LINE(451)
						_this->zpp_inner_i->setupcbTypes();
					}
					HX_STACK_LINE(451)
					tmp2 = _this->zpp_inner_i->wrap_cbTypes;
				}
				HX_STACK_LINE(451)
				::nape::callbacks::CbTypeList _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(451)
				::nape::callbacks::CbTypeList tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(451)
				tmp1 = ::nape::callbacks::CbTypeIterator_obj::get(tmp3);
			}
			HX_STACK_LINE(451)
			::nape::callbacks::CbTypeIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(451)
			while((true)){
				HX_STACK_LINE(451)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					::zpp_nape::util::ZPP_CbTypeList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(451)
					tmp3->valmod();
					HX_STACK_LINE(451)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(451)
						::nape::callbacks::CbTypeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(451)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(451)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(451)
						if ((tmp5)){
							HX_STACK_LINE(451)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(451)
							{
								HX_STACK_LINE(451)
								::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(451)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(451)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(451)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(451)
					_g->zpp_critical = true;
					HX_STACK_LINE(451)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(451)
					if ((tmp5)){
						HX_STACK_LINE(451)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(451)
						{
							HX_STACK_LINE(451)
							::nape::callbacks::CbTypeIterator tmp6 = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(451)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(451)
							::nape::callbacks::CbTypeIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(451)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(451)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(451)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(451)
				if ((tmp3)){
					HX_STACK_LINE(451)
					break;
				}
				HX_STACK_LINE(451)
				::nape::callbacks::CbType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					_g->zpp_critical = false;
					HX_STACK_LINE(451)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(451)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(451)
				::nape::callbacks::CbType cb = tmp4;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(451)
				::nape::callbacks::CbTypeList tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					::nape::callbacks::CbTypeList tmp6 = ret->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(451)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(451)
					if ((tmp7)){
						HX_STACK_LINE(451)
						ret->zpp_inner_i->setupcbTypes();
					}
					HX_STACK_LINE(451)
					tmp5 = ret->zpp_inner_i->wrap_cbTypes;
				}
				HX_STACK_LINE(451)
				::nape::callbacks::CbTypeList _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				bool tmp6 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(451)
				if ((tmp6)){
					HX_STACK_LINE(451)
					::nape::callbacks::CbType tmp7 = cb;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(451)
					_this->push(tmp7);
				}
				else{
					HX_STACK_LINE(451)
					::nape::callbacks::CbType tmp7 = cb;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(451)
					_this->unshift(tmp7);
				}
			}
		}
		HX_STACK_LINE(452)
		Dynamic tmp1 = this->userData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(452)
		if ((tmp2)){
			HX_STACK_LINE(452)
			Dynamic tmp3 = this->userData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(452)
			Dynamic tmp4 = ::Reflect_obj::copy(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(452)
			ret->zpp_inner_i->userData = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,copyto,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_Interactor_obj::get( ::zpp_nape::phys::ZPP_Interactor i1,::zpp_nape::phys::ZPP_Interactor i2){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","get",0xc4e83461,"zpp_nape.phys.ZPP_Interactor.get","zpp_nape/phys/Interactor.hx",235,0x9650902a)
	HX_STACK_ARG(i1,"i1")
	HX_STACK_ARG(i2,"i2")
	HX_STACK_LINE(244)
	bool tmp = (i1->id < i2->id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	if ((tmp)){
		HX_STACK_LINE(244)
		tmp1 = i1->id;
	}
	else{
		HX_STACK_LINE(244)
		tmp1 = i2->id;
	}
	HX_STACK_LINE(244)
	int id = tmp1;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(245)
	bool tmp2 = (i1->id < i2->id);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(245)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	if ((tmp2)){
		HX_STACK_LINE(245)
		tmp3 = i2->id;
	}
	else{
		HX_STACK_LINE(245)
		tmp3 = i1->id;
	}
	HX_STACK_LINE(245)
	int di = tmp3;		HX_STACK_VAR(di,"di");
	HX_STACK_LINE(254)
	int tmp4 = i1->cbsets->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(254)
	int tmp5 = i2->cbsets->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(254)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(254)
	::zpp_nape::util::ZNPList_ZPP_CallbackSet tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(254)
	if ((tmp6)){
		HX_STACK_LINE(254)
		tmp7 = i1->cbsets;
	}
	else{
		HX_STACK_LINE(254)
		tmp7 = i2->cbsets;
	}
	HX_STACK_LINE(254)
	::zpp_nape::util::ZNPList_ZPP_CallbackSet xs = tmp7;		HX_STACK_VAR(xs,"xs");
	HX_STACK_LINE(255)
	::zpp_nape::space::ZPP_CallbackSet ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(257)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = xs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(258)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(258)
			if ((tmp9)){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(259)
			::zpp_nape::space::ZPP_CallbackSet x = cx_ite->elt;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(269)
				bool tmp10 = (x->id == id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(269)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(269)
				if ((tmp10)){
					HX_STACK_LINE(269)
					tmp11 = (x->di == di);
				}
				else{
					HX_STACK_LINE(269)
					tmp11 = false;
				}
				HX_STACK_LINE(269)
				if ((tmp11)){
					HX_STACK_LINE(270)
					ret = x;
					HX_STACK_LINE(271)
					break;
				}
			}
			HX_STACK_LINE(274)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(277)
	::zpp_nape::space::ZPP_CallbackSet tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(277)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Interactor_obj,get,return )

Void ZPP_Interactor_obj::int_callback( ::zpp_nape::space::ZPP_CallbackSet set,::zpp_nape::callbacks::ZPP_InteractionListener x,::zpp_nape::callbacks::ZPP_Callback cb){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Interactor","int_callback",0x2c95e92a,"zpp_nape.phys.ZPP_Interactor.int_callback","zpp_nape/phys/Interactor.hx",426,0x9650902a)
		HX_STACK_ARG(set,"set")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(427)
		::zpp_nape::phys::ZPP_Interactor o1 = set->int1;		HX_STACK_VAR(o1,"o1");
		HX_STACK_LINE(428)
		::zpp_nape::phys::ZPP_Interactor o2 = set->int2;		HX_STACK_VAR(o2,"o2");
		HX_STACK_LINE(429)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			::zpp_nape::callbacks::ZPP_OptionType _this = x->options1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType xs = o1->cbTypes;		HX_STACK_VAR(xs,"xs");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = xs;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = _this->includes;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(429)
			bool tmp7 = _this->nonemptyintersection(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(429)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(429)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(429)
			if ((tmp9)){
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = xs;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp11 = _this->excludes;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(429)
				bool tmp16 = _this->nonemptyintersection(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(429)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(429)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(429)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(429)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(429)
				tmp = !(tmp20);
			}
			else{
				HX_STACK_LINE(429)
				tmp = false;
			}
		}
		HX_STACK_LINE(429)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		if ((tmp)){
			HX_STACK_LINE(429)
			::zpp_nape::callbacks::ZPP_OptionType _this = x->options2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType xs = o2->cbTypes;		HX_STACK_VAR(xs,"xs");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = xs;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = _this->includes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(429)
			bool tmp8 = _this->nonemptyintersection(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(429)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(429)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(429)
			if ((tmp10)){
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp11 = xs;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = _this->excludes;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(429)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(429)
				bool tmp17 = _this->nonemptyintersection(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(429)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(429)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(429)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(429)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(429)
				tmp1 = !(tmp21);
			}
			else{
				HX_STACK_LINE(429)
				tmp1 = false;
			}
		}
		else{
			HX_STACK_LINE(429)
			tmp1 = false;
		}
		HX_STACK_LINE(429)
		if ((tmp1)){
			HX_STACK_LINE(430)
			cb->int1 = o1;
			HX_STACK_LINE(431)
			cb->int2 = o2;
		}
		else{
			HX_STACK_LINE(434)
			cb->int1 = o2;
			HX_STACK_LINE(435)
			cb->int2 = o1;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Interactor_obj,int_callback,(void))


ZPP_Interactor_obj::ZPP_Interactor_obj()
{
}

void ZPP_Interactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Interactor);
	HX_MARK_MEMBER_NAME(outer_i,"outer_i");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(ishape,"ishape");
	HX_MARK_MEMBER_NAME(ibody,"ibody");
	HX_MARK_MEMBER_NAME(icompound,"icompound");
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(cbTypes,"cbTypes");
	HX_MARK_MEMBER_NAME(cbSet,"cbSet");
	HX_MARK_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
	HX_MARK_END_CLASS();
}

void ZPP_Interactor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_i,"outer_i");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(ishape,"ishape");
	HX_VISIT_MEMBER_NAME(ibody,"ibody");
	HX_VISIT_MEMBER_NAME(icompound,"icompound");
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(cbTypes,"cbTypes");
	HX_VISIT_MEMBER_NAME(cbSet,"cbSet");
	HX_VISIT_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
}

Dynamic ZPP_Interactor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wake") ) { return wake_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ibody") ) { return ibody; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"cbSet") ) { return cbSet; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ishape") ) { return ishape; }
		if (HX_FIELD_EQ(inName,"isBody") ) { return isBody_dyn(); }
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		if (HX_FIELD_EQ(inName,"copyto") ) { return copyto_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outer_i") ) { return outer_i; }
		if (HX_FIELD_EQ(inName,"isShape") ) { return isShape_dyn(); }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return cbTypes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"getSpace") ) { return getSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"setGroup") ) { return setGroup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"icompound") ) { return icompound; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isCompound") ) { return isCompound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alloc_cbSet") ) { return alloc_cbSet_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { return wrap_cbTypes; }
		if (HX_FIELD_EQ(inName,"setupcbTypes") ) { return setupcbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"lookup_group") ) { return lookup_group_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"insert_cbtype") ) { return insert_cbtype_dyn(); }
		if (HX_FIELD_EQ(inName,"dealloc_cbSet") ) { return dealloc_cbSet_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__iaddedToSpace") ) { return __iaddedToSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"immutable_cbTypes") ) { return immutable_cbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"immutable_midstep") ) { return immutable_midstep_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_adder") ) { return wrap_cbTypes_adder_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__iremovedFromSpace") ) { return __iremovedFromSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_subber") ) { return wrap_cbTypes_subber_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Interactor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"int_callback") ) { outValue = int_callback_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_Interactor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ibody") ) { ibody=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbSet") ) { cbSet=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ishape") ) { ishape=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CallbackSet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outer_i") ) { outer_i=inValue.Cast< ::nape::phys::Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { cbTypes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"icompound") ) { icompound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { wrap_cbTypes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Interactor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_Interactor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_i","\x65","\x60","\x24","\xdd"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("ishape","\x18","\xc6","\x95","\x77"));
	outFields->push(HX_HCSTRING("ibody","\x8b","\x63","\x2e","\xb6"));
	outFields->push(HX_HCSTRING("icompound","\xd4","\xd4","\xd3","\x06"));
	outFields->push(HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1"));
	outFields->push(HX_HCSTRING("cbSet","\x43","\xaa","\xb1","\x41"));
	outFields->push(HX_HCSTRING("wrap_cbTypes","\xa5","\x96","\x54","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Interactor*/ ,(int)offsetof(ZPP_Interactor_obj,outer_i),HX_HCSTRING("outer_i","\x65","\x60","\x24","\xdd")},
	{hx::fsInt,(int)offsetof(ZPP_Interactor_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Interactor_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_Interactor_obj,ishape),HX_HCSTRING("ishape","\x18","\xc6","\x95","\x77")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Interactor_obj,ibody),HX_HCSTRING("ibody","\x8b","\x63","\x2e","\xb6")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Interactor_obj,icompound),HX_HCSTRING("icompound","\xd4","\xd4","\xd3","\x06")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CallbackSet*/ ,(int)offsetof(ZPP_Interactor_obj,cbsets),HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionGroup*/ ,(int)offsetof(ZPP_Interactor_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(int)offsetof(ZPP_Interactor_obj,cbTypes),HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_Interactor_obj,cbSet),HX_HCSTRING("cbSet","\x43","\xaa","\xb1","\x41")},
	{hx::fsObject /*::nape::callbacks::CbTypeList*/ ,(int)offsetof(ZPP_Interactor_obj,wrap_cbTypes),HX_HCSTRING("wrap_cbTypes","\xa5","\x96","\x54","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_i","\x65","\x60","\x24","\xdd"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("ishape","\x18","\xc6","\x95","\x77"),
	HX_HCSTRING("ibody","\x8b","\x63","\x2e","\xb6"),
	HX_HCSTRING("icompound","\xd4","\xd4","\xd3","\x06"),
	HX_HCSTRING("isShape","\xd7","\x86","\xa2","\x18"),
	HX_HCSTRING("isBody","\xac","\x3f","\x82","\x5e"),
	HX_HCSTRING("isCompound","\x75","\xd5","\x7e","\xfc"),
	HX_HCSTRING("__iaddedToSpace","\x34","\xf7","\x55","\x2d"),
	HX_HCSTRING("__iremovedFromSpace","\x85","\x8e","\xc2","\x20"),
	HX_HCSTRING("wake","\x24","\x5c","\xf2","\x4e"),
	HX_HCSTRING("cbsets","\xb0","\x24","\xea","\x4e"),
	HX_HCSTRING("getSpace","\x50","\x9c","\x3d","\xe1"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
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
	HX_HCSTRING("setGroup","\x3d","\x1c","\x29","\xa8"),
	HX_HCSTRING("immutable_midstep","\x97","\xf0","\xae","\xea"),
	HX_HCSTRING("lookup_group","\x7a","\xb4","\xb1","\x13"),
	HX_HCSTRING("copyto","\x70","\x38","\x33","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Interactor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Interactor_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Interactor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("int_callback","\x55","\xee","\x70","\x3f"),
	::String(null()) };

void ZPP_Interactor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.phys.ZPP_Interactor","\xb9","\x92","\xdf","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Interactor_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Interactor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Interactor_obj >;
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
} // end namespace phys
