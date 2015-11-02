#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintCallback
#include <nape/callbacks/ConstraintCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_Callback_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","new",0xa4f50fbd,"zpp_nape.callbacks.ZPP_Callback.new","zpp_nape/callbacks/Callback.hx",174,0x948ca4f6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(435)
	this->constraint = null();
	HX_STACK_LINE(434)
	this->body = null();
	HX_STACK_LINE(413)
	this->pre_swapped = false;
	HX_STACK_LINE(412)
	this->pre_arbiter = null();
	HX_STACK_LINE(411)
	this->wrap_arbiters = null();
	HX_STACK_LINE(410)
	this->set = null();
	HX_STACK_LINE(409)
	this->int2 = null();
	HX_STACK_LINE(408)
	this->int1 = null();
	HX_STACK_LINE(227)
	this->length = (int)0;
	HX_STACK_LINE(226)
	this->prev = null();
	HX_STACK_LINE(225)
	this->next = null();
	HX_STACK_LINE(224)
	this->index = (int)0;
	HX_STACK_LINE(223)
	this->space = null();
	HX_STACK_LINE(222)
	this->listener = null();
	HX_STACK_LINE(221)
	this->event = (int)0;
	HX_STACK_LINE(177)
	this->outer_int = null();
	HX_STACK_LINE(176)
	this->outer_con = null();
	HX_STACK_LINE(175)
	this->outer_body = null();
	HX_STACK_LINE(437)
	this->length = (int)0;
}
;
	return null();
}

//ZPP_Callback_obj::~ZPP_Callback_obj() { }

Dynamic ZPP_Callback_obj::__CreateEmpty() { return  new ZPP_Callback_obj; }
hx::ObjectPtr< ZPP_Callback_obj > ZPP_Callback_obj::__new()
{  hx::ObjectPtr< ZPP_Callback_obj > _result_ = new ZPP_Callback_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Callback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Callback_obj > _result_ = new ZPP_Callback_obj();
	_result_->__construct();
	return _result_;}

::nape::callbacks::BodyCallback ZPP_Callback_obj::wrapper_body( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","wrapper_body",0x7d8f0151,"zpp_nape.callbacks.ZPP_Callback.wrapper_body","zpp_nape/callbacks/Callback.hx",181,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	::nape::callbacks::BodyCallback tmp = this->outer_body;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	if ((tmp1)){
		HX_STACK_LINE(184)
		::zpp_nape::callbacks::ZPP_Callback_obj::internal = true;
		HX_STACK_LINE(186)
		::nape::callbacks::BodyCallback tmp2 = ::nape::callbacks::BodyCallback_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		this->outer_body = tmp2;
		HX_STACK_LINE(188)
		::zpp_nape::callbacks::ZPP_Callback_obj::internal = false;
		HX_STACK_LINE(190)
		::nape::callbacks::BodyCallback tmp3 = this->outer_body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(192)
	::nape::callbacks::BodyCallback tmp2 = this->outer_body;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,wrapper_body,return )

::nape::callbacks::ConstraintCallback ZPP_Callback_obj::wrapper_con( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","wrapper_con",0xaa77a473,"zpp_nape.callbacks.ZPP_Callback.wrapper_con","zpp_nape/callbacks/Callback.hx",194,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	::nape::callbacks::ConstraintCallback tmp = this->outer_con;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	if ((tmp1)){
		HX_STACK_LINE(197)
		::zpp_nape::callbacks::ZPP_Callback_obj::internal = true;
		HX_STACK_LINE(199)
		::nape::callbacks::ConstraintCallback tmp2 = ::nape::callbacks::ConstraintCallback_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		this->outer_con = tmp2;
		HX_STACK_LINE(201)
		::zpp_nape::callbacks::ZPP_Callback_obj::internal = false;
		HX_STACK_LINE(203)
		::nape::callbacks::ConstraintCallback tmp3 = this->outer_con;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(205)
	::nape::callbacks::ConstraintCallback tmp2 = this->outer_con;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,wrapper_con,return )

::nape::callbacks::InteractionCallback ZPP_Callback_obj::wrapper_int( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","wrapper_int",0xaa7c3120,"zpp_nape.callbacks.ZPP_Callback.wrapper_int","zpp_nape/callbacks/Callback.hx",207,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	::nape::callbacks::InteractionCallback tmp = this->outer_int;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	if ((tmp1)){
		HX_STACK_LINE(210)
		::zpp_nape::callbacks::ZPP_Callback_obj::internal = true;
		HX_STACK_LINE(212)
		::nape::callbacks::InteractionCallback tmp2 = ::nape::callbacks::InteractionCallback_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		this->outer_int = tmp2;
		HX_STACK_LINE(214)
		::zpp_nape::callbacks::ZPP_Callback_obj::internal = false;
		HX_STACK_LINE(216)
		::nape::callbacks::InteractionCallback tmp3 = this->outer_int;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		::nape::dynamics::ArbiterList tmp2 = this->wrap_arbiters;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		if ((tmp3)){
			HX_STACK_LINE(218)
			::zpp_nape::space::ZPP_CallbackSet tmp4 = this->set;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp5 = tmp4->arbiters;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			::nape::dynamics::ArbiterList tmp6 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp5,true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			this->wrap_arbiters = tmp6;
		}
		else{
			HX_STACK_LINE(218)
			::zpp_nape::space::ZPP_CallbackSet tmp4 = this->set;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			::nape::dynamics::ArbiterList tmp5 = this->wrap_arbiters;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			tmp5->zpp_inner->inner = tmp4->arbiters;
		}
		HX_STACK_LINE(218)
		::nape::dynamics::ArbiterList tmp4 = this->wrap_arbiters;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(218)
		tmp4->zpp_inner->zip_length = true;
		HX_STACK_LINE(218)
		::nape::dynamics::ArbiterList tmp5 = this->wrap_arbiters;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(218)
		tmp5->zpp_inner->at_ite = null();
	}
	HX_STACK_LINE(219)
	::nape::callbacks::InteractionCallback tmp2 = this->outer_int;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,wrapper_int,return )

Void ZPP_Callback_obj::push( ::zpp_nape::callbacks::ZPP_Callback obj){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","push",0xb2d743dd,"zpp_nape.callbacks.ZPP_Callback.push","zpp_nape/callbacks/Callback.hx",228,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(237)
		::zpp_nape::callbacks::ZPP_Callback tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		if ((tmp1)){
			HX_STACK_LINE(237)
			::zpp_nape::callbacks::ZPP_Callback tmp2 = this->prev;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			tmp2->next = obj;
		}
		else{
			HX_STACK_LINE(238)
			this->next = obj;
		}
		HX_STACK_LINE(239)
		::zpp_nape::callbacks::ZPP_Callback tmp2 = this->prev;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		obj->prev = tmp2;
		HX_STACK_LINE(240)
		obj->next = null();
		HX_STACK_LINE(241)
		this->prev = obj;
		HX_STACK_LINE(242)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,push,(void))

Void ZPP_Callback_obj::push_rev( ::zpp_nape::callbacks::ZPP_Callback obj){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","push_rev",0xc1e514c1,"zpp_nape.callbacks.ZPP_Callback.push_rev","zpp_nape/callbacks/Callback.hx",244,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(253)
		::zpp_nape::callbacks::ZPP_Callback tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		if ((tmp1)){
			HX_STACK_LINE(253)
			::zpp_nape::callbacks::ZPP_Callback tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			tmp2->prev = obj;
		}
		else{
			HX_STACK_LINE(254)
			this->prev = obj;
		}
		HX_STACK_LINE(255)
		::zpp_nape::callbacks::ZPP_Callback tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		obj->next = tmp2;
		HX_STACK_LINE(256)
		obj->prev = null();
		HX_STACK_LINE(257)
		this->next = obj;
		HX_STACK_LINE(258)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,push_rev,(void))

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::pop( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","pop",0xa4f69cee,"zpp_nape.callbacks.ZPP_Callback.pop","zpp_nape/callbacks/Callback.hx",260,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	::zpp_nape::callbacks::ZPP_Callback ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(270)
	this->next = ret->next;
	HX_STACK_LINE(271)
	::zpp_nape::callbacks::ZPP_Callback tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	if ((tmp2)){
		HX_STACK_LINE(271)
		this->prev = null();
	}
	else{
		HX_STACK_LINE(272)
		::zpp_nape::callbacks::ZPP_Callback tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		tmp3->prev = null();
	}
	HX_STACK_LINE(273)
	(this->length)--;
	HX_STACK_LINE(274)
	::zpp_nape::callbacks::ZPP_Callback tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,pop,return )

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::pop_rev( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","pop_rev",0x22f4ca52,"zpp_nape.callbacks.ZPP_Callback.pop_rev","zpp_nape/callbacks/Callback.hx",276,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	::zpp_nape::callbacks::ZPP_Callback ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(286)
	this->prev = ret->prev;
	HX_STACK_LINE(287)
	::zpp_nape::callbacks::ZPP_Callback tmp1 = this->prev;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	if ((tmp2)){
		HX_STACK_LINE(287)
		this->next = null();
	}
	else{
		HX_STACK_LINE(288)
		::zpp_nape::callbacks::ZPP_Callback tmp3 = this->prev;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(288)
		tmp3->next = null();
	}
	HX_STACK_LINE(289)
	(this->length)--;
	HX_STACK_LINE(290)
	::zpp_nape::callbacks::ZPP_Callback tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(290)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,pop_rev,return )

bool ZPP_Callback_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","empty",0x6ecfcb2a,"zpp_nape.callbacks.ZPP_Callback.empty","zpp_nape/callbacks/Callback.hx",292,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,empty,return )

Void ZPP_Callback_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","clear",0x4751022a,"zpp_nape.callbacks.ZPP_Callback.clear","zpp_nape/callbacks/Callback.hx",296,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		while((true)){
			HX_STACK_LINE(296)
			bool tmp = this->empty();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(296)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(296)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			if ((tmp2)){
				HX_STACK_LINE(296)
				break;
			}
			HX_STACK_LINE(296)
			this->pop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,clear,(void))

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::splice( ::zpp_nape::callbacks::ZPP_Callback o){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","splice",0xd7877e3f,"zpp_nape.callbacks.ZPP_Callback.splice","zpp_nape/callbacks/Callback.hx",298,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(299)
	::zpp_nape::callbacks::ZPP_Callback ret = o->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(300)
	bool tmp = (o->prev == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	if ((tmp)){
		HX_STACK_LINE(301)
		this->next = o->next;
		HX_STACK_LINE(302)
		::zpp_nape::callbacks::ZPP_Callback tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		if ((tmp2)){
			HX_STACK_LINE(302)
			::zpp_nape::callbacks::ZPP_Callback tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			tmp3->prev = null();
		}
		else{
			HX_STACK_LINE(303)
			this->prev = null();
		}
	}
	else{
		HX_STACK_LINE(306)
		o->prev->next = o->next;
		HX_STACK_LINE(307)
		bool tmp1 = (o->next != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		if ((tmp1)){
			HX_STACK_LINE(307)
			o->next->prev = o->prev;
		}
		else{
			HX_STACK_LINE(308)
			this->prev = o->prev;
		}
	}
	HX_STACK_LINE(310)
	(this->length)--;
	HX_STACK_LINE(311)
	::zpp_nape::callbacks::ZPP_Callback tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,splice,return )

Void ZPP_Callback_obj::rotateL( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","rotateL",0xc50dfb6e,"zpp_nape.callbacks.ZPP_Callback.rotateL","zpp_nape/callbacks/Callback.hx",313,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		::zpp_nape::callbacks::ZPP_Callback tmp = this->pop();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		this->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,rotateL,(void))

Void ZPP_Callback_obj::rotateR( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","rotateR",0xc50dfb74,"zpp_nape.callbacks.ZPP_Callback.rotateR","zpp_nape/callbacks/Callback.hx",316,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		::zpp_nape::callbacks::ZPP_Callback tmp = this->pop_rev();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(317)
		this->push_rev(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,rotateR,(void))

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::cycleNext( ::zpp_nape::callbacks::ZPP_Callback o){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","cycleNext",0x71c65bd6,"zpp_nape.callbacks.ZPP_Callback.cycleNext","zpp_nape/callbacks/Callback.hx",319,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(328)
	bool tmp = (o->next == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	if ((tmp)){
		HX_STACK_LINE(328)
		::zpp_nape::callbacks::ZPP_Callback tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		return tmp1;
	}
	else{
		HX_STACK_LINE(329)
		::zpp_nape::callbacks::ZPP_Callback tmp1 = o->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		return tmp1;
	}
	HX_STACK_LINE(328)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,cycleNext,return )

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::cyclePrev( ::zpp_nape::callbacks::ZPP_Callback o){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","cyclePrev",0x732295d6,"zpp_nape.callbacks.ZPP_Callback.cyclePrev","zpp_nape/callbacks/Callback.hx",331,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(340)
	bool tmp = (o->prev == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	if ((tmp)){
		HX_STACK_LINE(340)
		::zpp_nape::callbacks::ZPP_Callback tmp1 = this->prev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		return tmp1;
	}
	else{
		HX_STACK_LINE(341)
		::zpp_nape::callbacks::ZPP_Callback tmp1 = o->prev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		return tmp1;
	}
	HX_STACK_LINE(340)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,cyclePrev,return )

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::at( int i){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","at",0xdd26f036,"zpp_nape.callbacks.ZPP_Callback.at","zpp_nape/callbacks/Callback.hx",343,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(352)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(352)
	::zpp_nape::callbacks::ZPP_Callback ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(353)
	while((true)){
		HX_STACK_LINE(353)
		int tmp1 = (i)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		if ((tmp3)){
			HX_STACK_LINE(353)
			break;
		}
		HX_STACK_LINE(353)
		ret = ret->next;
	}
	HX_STACK_LINE(354)
	::zpp_nape::callbacks::ZPP_Callback tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,at,return )

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::rev_at( int i){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","rev_at",0x22584a52,"zpp_nape.callbacks.ZPP_Callback.rev_at","zpp_nape/callbacks/Callback.hx",356,0x948ca4f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(365)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(365)
	::zpp_nape::callbacks::ZPP_Callback ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(366)
	while((true)){
		HX_STACK_LINE(366)
		int tmp1 = (i)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(366)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(366)
		if ((tmp3)){
			HX_STACK_LINE(366)
			break;
		}
		HX_STACK_LINE(366)
		ret = ret->prev;
	}
	HX_STACK_LINE(367)
	::zpp_nape::callbacks::ZPP_Callback tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(367)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Callback_obj,rev_at,return )

Void ZPP_Callback_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","free",0xac38ceaf,"zpp_nape.callbacks.ZPP_Callback.free","zpp_nape/callbacks/Callback.hx",395,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(396)
		::zpp_nape::phys::ZPP_Interactor tmp = this->int2 = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		this->int1 = tmp;
		HX_STACK_LINE(397)
		this->body = null();
		HX_STACK_LINE(398)
		this->constraint = null();
		HX_STACK_LINE(399)
		this->listener = null();
		HX_STACK_LINE(400)
		::nape::dynamics::ArbiterList tmp1 = this->wrap_arbiters;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		if ((tmp2)){
			HX_STACK_LINE(401)
			::nape::dynamics::ArbiterList tmp3 = this->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(401)
			tmp3->zpp_inner->inner = null();
		}
		HX_STACK_LINE(403)
		this->set = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,free,(void))

Void ZPP_Callback_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","alloc",0x20893512,"zpp_nape.callbacks.ZPP_Callback.alloc","zpp_nape/callbacks/Callback.hx",407,0x948ca4f6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,alloc,(void))

Void ZPP_Callback_obj::genarbs( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Callback","genarbs",0x87a7436f,"zpp_nape.callbacks.ZPP_Callback.genarbs","zpp_nape/callbacks/Callback.hx",416,0x948ca4f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(425)
		::nape::dynamics::ArbiterList tmp = this->wrap_arbiters;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(425)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(425)
		if ((tmp1)){
			HX_STACK_LINE(426)
			::zpp_nape::space::ZPP_CallbackSet tmp2 = this->set;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(426)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp3 = tmp2->arbiters;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(426)
			::nape::dynamics::ArbiterList tmp4 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp3,true);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(426)
			this->wrap_arbiters = tmp4;
		}
		else{
			HX_STACK_LINE(429)
			::zpp_nape::space::ZPP_CallbackSet tmp2 = this->set;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(429)
			::nape::dynamics::ArbiterList tmp3 = this->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			tmp3->zpp_inner->inner = tmp2->arbiters;
		}
		HX_STACK_LINE(431)
		::nape::dynamics::ArbiterList tmp2 = this->wrap_arbiters;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		tmp2->zpp_inner->zip_length = true;
		HX_STACK_LINE(432)
		::nape::dynamics::ArbiterList tmp3 = this->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(432)
		tmp3->zpp_inner->at_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Callback_obj,genarbs,(void))

bool ZPP_Callback_obj::internal;

::zpp_nape::callbacks::ZPP_Callback ZPP_Callback_obj::zpp_pool;


ZPP_Callback_obj::ZPP_Callback_obj()
{
}

void ZPP_Callback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Callback);
	HX_MARK_MEMBER_NAME(outer_body,"outer_body");
	HX_MARK_MEMBER_NAME(outer_con,"outer_con");
	HX_MARK_MEMBER_NAME(outer_int,"outer_int");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(int1,"int1");
	HX_MARK_MEMBER_NAME(int2,"int2");
	HX_MARK_MEMBER_NAME(set,"set");
	HX_MARK_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_MARK_MEMBER_NAME(pre_arbiter,"pre_arbiter");
	HX_MARK_MEMBER_NAME(pre_swapped,"pre_swapped");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(constraint,"constraint");
	HX_MARK_END_CLASS();
}

void ZPP_Callback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_body,"outer_body");
	HX_VISIT_MEMBER_NAME(outer_con,"outer_con");
	HX_VISIT_MEMBER_NAME(outer_int,"outer_int");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(int1,"int1");
	HX_VISIT_MEMBER_NAME(int2,"int2");
	HX_VISIT_MEMBER_NAME(set,"set");
	HX_VISIT_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_VISIT_MEMBER_NAME(pre_arbiter,"pre_arbiter");
	HX_VISIT_MEMBER_NAME(pre_swapped,"pre_swapped");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(constraint,"constraint");
}

Dynamic ZPP_Callback_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"int1") ) { return int1; }
		if (HX_FIELD_EQ(inName,"int2") ) { return int2; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return event; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"rev_at") ) { return rev_at_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pop_rev") ) { return pop_rev_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateL") ) { return rotateL_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateR") ) { return rotateR_dyn(); }
		if (HX_FIELD_EQ(inName,"genarbs") ) { return genarbs_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		if (HX_FIELD_EQ(inName,"push_rev") ) { return push_rev_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_con") ) { return outer_con; }
		if (HX_FIELD_EQ(inName,"outer_int") ) { return outer_int; }
		if (HX_FIELD_EQ(inName,"cycleNext") ) { return cycleNext_dyn(); }
		if (HX_FIELD_EQ(inName,"cyclePrev") ) { return cyclePrev_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"outer_body") ) { return outer_body; }
		if (HX_FIELD_EQ(inName,"constraint") ) { return constraint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrapper_con") ) { return wrapper_con_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapper_int") ) { return wrapper_int_dyn(); }
		if (HX_FIELD_EQ(inName,"pre_arbiter") ) { return pre_arbiter; }
		if (HX_FIELD_EQ(inName,"pre_swapped") ) { return pre_swapped; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrapper_body") ) { return wrapper_body_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { return wrap_arbiters; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Callback_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Callback_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { set=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int1") ) { int1=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int2") ) { int2=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< ::zpp_nape::callbacks::ZPP_Listener >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_con") ) { outer_con=inValue.Cast< ::nape::callbacks::ConstraintCallback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_int") ) { outer_int=inValue.Cast< ::nape::callbacks::InteractionCallback >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"outer_body") ) { outer_body=inValue.Cast< ::nape::callbacks::BodyCallback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraint") ) { constraint=inValue.Cast< ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pre_arbiter") ) { pre_arbiter=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_swapped") ) { pre_swapped=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { wrap_arbiters=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Callback_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return true; }
	}
	return false;
}

void ZPP_Callback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_body","\x26","\x40","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("outer_con","\x3e","\xd7","\x44","\xb7"));
	outFields->push(HX_HCSTRING("outer_int","\xeb","\x63","\x49","\xb7"));
	outFields->push(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"));
	outFields->push(HX_HCSTRING("listener","\x74","\x00","\x32","\x38"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("int1","\x62","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("int2","\x63","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"));
	outFields->push(HX_HCSTRING("wrap_arbiters","\xbf","\x60","\xdc","\x11"));
	outFields->push(HX_HCSTRING("pre_arbiter","\x8d","\xd4","\xc4","\x7e"));
	outFields->push(HX_HCSTRING("pre_swapped","\xc0","\xdc","\x46","\xdc"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("constraint","\x5d","\x00","\xcc","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::BodyCallback*/ ,(int)offsetof(ZPP_Callback_obj,outer_body),HX_HCSTRING("outer_body","\x26","\x40","\x4e","\xa4")},
	{hx::fsObject /*::nape::callbacks::ConstraintCallback*/ ,(int)offsetof(ZPP_Callback_obj,outer_con),HX_HCSTRING("outer_con","\x3e","\xd7","\x44","\xb7")},
	{hx::fsObject /*::nape::callbacks::InteractionCallback*/ ,(int)offsetof(ZPP_Callback_obj,outer_int),HX_HCSTRING("outer_int","\xeb","\x63","\x49","\xb7")},
	{hx::fsInt,(int)offsetof(ZPP_Callback_obj,event),HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Listener*/ ,(int)offsetof(ZPP_Callback_obj,listener),HX_HCSTRING("listener","\x74","\x00","\x32","\x38")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Callback_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsInt,(int)offsetof(ZPP_Callback_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Callback*/ ,(int)offsetof(ZPP_Callback_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Callback*/ ,(int)offsetof(ZPP_Callback_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsInt,(int)offsetof(ZPP_Callback_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(ZPP_Callback_obj,int1),HX_HCSTRING("int1","\x62","\x44","\xbb","\x45")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(ZPP_Callback_obj,int2),HX_HCSTRING("int2","\x63","\x44","\xbb","\x45")},
	{hx::fsObject /*::zpp_nape::space::ZPP_CallbackSet*/ ,(int)offsetof(ZPP_Callback_obj,set),HX_HCSTRING("set","\xa2","\x9b","\x57","\x00")},
	{hx::fsObject /*::nape::dynamics::ArbiterList*/ ,(int)offsetof(ZPP_Callback_obj,wrap_arbiters),HX_HCSTRING("wrap_arbiters","\xbf","\x60","\xdc","\x11")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(ZPP_Callback_obj,pre_arbiter),HX_HCSTRING("pre_arbiter","\x8d","\xd4","\xc4","\x7e")},
	{hx::fsBool,(int)offsetof(ZPP_Callback_obj,pre_swapped),HX_HCSTRING("pre_swapped","\xc0","\xdc","\x46","\xdc")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Callback_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*::zpp_nape::constraint::ZPP_Constraint*/ ,(int)offsetof(ZPP_Callback_obj,constraint),HX_HCSTRING("constraint","\x5d","\x00","\xcc","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_Callback_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Callback*/ ,(void *) &ZPP_Callback_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_body","\x26","\x40","\x4e","\xa4"),
	HX_HCSTRING("outer_con","\x3e","\xd7","\x44","\xb7"),
	HX_HCSTRING("outer_int","\xeb","\x63","\x49","\xb7"),
	HX_HCSTRING("wrapper_body","\x4e","\x94","\xc2","\x0f"),
	HX_HCSTRING("wrapper_con","\x16","\x40","\x4c","\xf2"),
	HX_HCSTRING("wrapper_int","\xc3","\xcc","\x50","\xf2"),
	HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"),
	HX_HCSTRING("listener","\x74","\x00","\x32","\x38"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("push_rev","\x3e","\x25","\x3a","\x23"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("pop_rev","\x75","\x18","\x04","\x4f"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("rotateL","\x91","\x49","\x1d","\xf1"),
	HX_HCSTRING("rotateR","\x97","\x49","\x1d","\xf1"),
	HX_HCSTRING("cycleNext","\xb9","\xb8","\xdf","\x3a"),
	HX_HCSTRING("cyclePrev","\xb9","\xf2","\x3b","\x3c"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("rev_at","\x8f","\x51","\x6f","\x0a"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("int1","\x62","\x44","\xbb","\x45"),
	HX_HCSTRING("int2","\x63","\x44","\xbb","\x45"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("wrap_arbiters","\xbf","\x60","\xdc","\x11"),
	HX_HCSTRING("pre_arbiter","\x8d","\xd4","\xc4","\x7e"),
	HX_HCSTRING("pre_swapped","\xc0","\xdc","\x46","\xdc"),
	HX_HCSTRING("genarbs","\x92","\x91","\xb6","\xb3"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("constraint","\x5d","\x00","\xcc","\x5a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Callback_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Callback_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Callback_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Callback_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Callback_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Callback_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Callback_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Callback_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.callbacks.ZPP_Callback","\x4b","\x6d","\x71","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Callback_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Callback_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Callback_obj >;
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

void ZPP_Callback_obj::__boot()
{
	internal= false;
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace callbacks
