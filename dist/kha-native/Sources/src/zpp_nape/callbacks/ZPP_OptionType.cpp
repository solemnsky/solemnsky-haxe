#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_OptionType_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","new",0xd0c14147,"zpp_nape.callbacks.ZPP_OptionType.new","zpp_nape/callbacks/OptionType.hx",174,0xf757a16c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->wrap_excludes = null();
	HX_STACK_LINE(183)
	this->wrap_includes = null();
	HX_STACK_LINE(178)
	this->excludes = null();
	HX_STACK_LINE(177)
	this->includes = null();
	HX_STACK_LINE(176)
	this->handler = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(180)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	this->includes = tmp;
	HX_STACK_LINE(181)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	this->excludes = tmp1;
}
;
	return null();
}

//ZPP_OptionType_obj::~ZPP_OptionType_obj() { }

Dynamic ZPP_OptionType_obj::__CreateEmpty() { return  new ZPP_OptionType_obj; }
hx::ObjectPtr< ZPP_OptionType_obj > ZPP_OptionType_obj::__new()
{  hx::ObjectPtr< ZPP_OptionType_obj > _result_ = new ZPP_OptionType_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_OptionType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_OptionType_obj > _result_ = new ZPP_OptionType_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_OptionType_obj::setup_includes( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","setup_includes",0x67e8f106,"zpp_nape.callbacks.ZPP_OptionType.setup_includes","zpp_nape/callbacks/OptionType.hx",185,0xf757a16c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = this->includes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::nape::callbacks::CbTypeList tmp1 = ::zpp_nape::util::ZPP_CbTypeList_obj::get(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		this->wrap_includes = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_OptionType_obj,setup_includes,(void))

Void ZPP_OptionType_obj::setup_excludes( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","setup_excludes",0x22f5cc14,"zpp_nape.callbacks.ZPP_OptionType.setup_excludes","zpp_nape/callbacks/OptionType.hx",188,0xf757a16c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = this->excludes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		::nape::callbacks::CbTypeList tmp1 = ::zpp_nape::util::ZPP_CbTypeList_obj::get(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		this->wrap_excludes = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_OptionType_obj,setup_excludes,(void))

bool ZPP_OptionType_obj::excluded( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","excluded",0xfa812a03,"zpp_nape.callbacks.ZPP_OptionType.excluded","zpp_nape/callbacks/OptionType.hx",192,0xf757a16c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xs,"xs")
	HX_STACK_LINE(193)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp = xs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->excludes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	bool tmp2 = this->nonemptyintersection(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,excluded,return )

bool ZPP_OptionType_obj::included( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","included",0x3f744ef5,"zpp_nape.callbacks.ZPP_OptionType.included","zpp_nape/callbacks/OptionType.hx",196,0xf757a16c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xs,"xs")
	HX_STACK_LINE(197)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp = xs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->includes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	bool tmp2 = this->nonemptyintersection(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,included,return )

bool ZPP_OptionType_obj::compatible( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","compatible",0xadc8654d,"zpp_nape.callbacks.ZPP_OptionType.compatible","zpp_nape/callbacks/OptionType.hx",200,0xf757a16c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xs,"xs")
	HX_STACK_LINE(201)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp = xs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->includes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = tmp;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(201)
	bool tmp4 = this->nonemptyintersection(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(201)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(201)
	if ((tmp4)){
		HX_STACK_LINE(201)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = xs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = this->excludes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(201)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp9 = tmp6;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(201)
		bool tmp11 = this->nonemptyintersection(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(201)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(201)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(201)
		tmp5 = !(tmp13);
	}
	else{
		HX_STACK_LINE(201)
		tmp5 = false;
	}
	HX_STACK_LINE(201)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,compatible,return )

bool ZPP_OptionType_obj::nonemptyintersection( ::zpp_nape::util::ZNPList_ZPP_CbType xs,::zpp_nape::util::ZNPList_ZPP_CbType ys){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","nonemptyintersection",0xab2c3fe2,"zpp_nape.callbacks.ZPP_OptionType.nonemptyintersection","zpp_nape/callbacks/OptionType.hx",203,0xf757a16c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xs,"xs")
	HX_STACK_ARG(ys,"ys")
	HX_STACK_LINE(204)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(205)
	::zpp_nape::util::ZNPNode_ZPP_CbType xite = xs->head;		HX_STACK_VAR(xite,"xite");
	HX_STACK_LINE(206)
	::zpp_nape::util::ZNPNode_ZPP_CbType eite = ys->head;		HX_STACK_VAR(eite,"eite");
	HX_STACK_LINE(207)
	while((true)){
		HX_STACK_LINE(207)
		bool tmp = (eite != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		if ((tmp)){
			HX_STACK_LINE(207)
			tmp1 = (xite != null());
		}
		else{
			HX_STACK_LINE(207)
			tmp1 = false;
		}
		HX_STACK_LINE(207)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		if ((tmp2)){
			HX_STACK_LINE(207)
			break;
		}
		HX_STACK_LINE(208)
		::zpp_nape::callbacks::ZPP_CbType ex = eite->elt;		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(209)
		::zpp_nape::callbacks::ZPP_CbType xi = xite->elt;		HX_STACK_VAR(xi,"xi");
		HX_STACK_LINE(210)
		bool tmp3 = (ex == xi);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		if ((tmp3)){
			HX_STACK_LINE(211)
			ret = true;
			HX_STACK_LINE(212)
			break;
		}
		else{
			HX_STACK_LINE(214)
			bool tmp4 = (ex->id < xi->id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			if ((tmp4)){
				HX_STACK_LINE(215)
				eite = eite->next;
			}
			else{
				HX_STACK_LINE(218)
				xite = xite->next;
			}
		}
	}
	HX_STACK_LINE(221)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,nonemptyintersection,return )

Void ZPP_OptionType_obj::effect_change( ::zpp_nape::callbacks::ZPP_CbType val,bool included,bool added){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","effect_change",0xa3a46445,"zpp_nape.callbacks.ZPP_OptionType.effect_change","zpp_nape/callbacks/OptionType.hx",225,0xf757a16c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_ARG(included,"included")
		HX_STACK_ARG(added,"added")
		HX_STACK_LINE(226)
		bool tmp = included;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		if ((tmp)){
			HX_STACK_LINE(227)
			bool tmp1 = added;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			if ((tmp1)){
				HX_STACK_LINE(228)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(230)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = this->includes;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(230)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp2->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(231)
					while((true)){
						HX_STACK_LINE(231)
						bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(231)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(231)
						if ((tmp4)){
							HX_STACK_LINE(231)
							break;
						}
						HX_STACK_LINE(232)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(234)
							bool tmp5 = (val->id < j->id);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(234)
							if ((tmp5)){
								HX_STACK_LINE(234)
								break;
							}
							HX_STACK_LINE(235)
							pre = cx_ite;
						}
						HX_STACK_LINE(237)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = this->includes;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(240)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(240)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(240)
							bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(240)
							if ((tmp5)){
								HX_STACK_LINE(240)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(240)
								ret = tmp6;
							}
							else{
								HX_STACK_LINE(240)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(240)
								ret = tmp6;
								HX_STACK_LINE(240)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(240)
								ret->next = null();
							}
							HX_STACK_LINE(240)
							Dynamic();
						}
						HX_STACK_LINE(240)
						ret->elt = val;
						HX_STACK_LINE(240)
						tmp3 = ret;
					}
					HX_STACK_LINE(240)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp3;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(240)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(240)
					if ((tmp4)){
						HX_STACK_LINE(240)
						temp->next = _this->head;
						HX_STACK_LINE(240)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(240)
						temp->next = pre->next;
						HX_STACK_LINE(240)
						pre->next = temp;
					}
					HX_STACK_LINE(240)
					bool tmp5 = _this->modified = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(240)
					_this->pushmod = tmp5;
					HX_STACK_LINE(240)
					(_this->length)++;
					HX_STACK_LINE(240)
					temp;
				}
			}
			else{
				HX_STACK_LINE(242)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = this->includes;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(242)
				::zpp_nape::callbacks::ZPP_CbType tmp3 = val;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(242)
				tmp2->remove(tmp3);
			}
		}
		else{
			HX_STACK_LINE(245)
			bool tmp1 = added;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(245)
			if ((tmp1)){
				HX_STACK_LINE(246)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(248)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = this->excludes;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(248)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp2->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(249)
					while((true)){
						HX_STACK_LINE(249)
						bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(249)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(249)
						if ((tmp4)){
							HX_STACK_LINE(249)
							break;
						}
						HX_STACK_LINE(250)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(252)
							bool tmp5 = (val->id < j->id);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(252)
							if ((tmp5)){
								HX_STACK_LINE(252)
								break;
							}
							HX_STACK_LINE(253)
							pre = cx_ite;
						}
						HX_STACK_LINE(255)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = this->excludes;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(258)
							bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(258)
							if ((tmp5)){
								HX_STACK_LINE(258)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(258)
								ret = tmp6;
							}
							else{
								HX_STACK_LINE(258)
								::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(258)
								ret = tmp6;
								HX_STACK_LINE(258)
								::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
								HX_STACK_LINE(258)
								ret->next = null();
							}
							HX_STACK_LINE(258)
							Dynamic();
						}
						HX_STACK_LINE(258)
						ret->elt = val;
						HX_STACK_LINE(258)
						tmp3 = ret;
					}
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp3;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(258)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(258)
					if ((tmp4)){
						HX_STACK_LINE(258)
						temp->next = _this->head;
						HX_STACK_LINE(258)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(258)
						temp->next = pre->next;
						HX_STACK_LINE(258)
						pre->next = temp;
					}
					HX_STACK_LINE(258)
					bool tmp5 = _this->modified = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(258)
					_this->pushmod = tmp5;
					HX_STACK_LINE(258)
					(_this->length)++;
					HX_STACK_LINE(258)
					temp;
				}
			}
			else{
				HX_STACK_LINE(260)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp2 = this->excludes;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(260)
				::zpp_nape::callbacks::ZPP_CbType tmp3 = val;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(260)
				tmp2->remove(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_OptionType_obj,effect_change,(void))

Void ZPP_OptionType_obj::append_type( ::zpp_nape::util::ZNPList_ZPP_CbType list,::zpp_nape::callbacks::ZPP_CbType val){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","append_type",0x24966666,"zpp_nape.callbacks.ZPP_OptionType.append_type","zpp_nape/callbacks/OptionType.hx",263,0xf757a16c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(264)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp = list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->includes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		if ((tmp2)){
			HX_STACK_LINE(265)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = this->includes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			::zpp_nape::callbacks::ZPP_CbType tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			bool tmp5 = tmp3->has(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			if ((tmp6)){
				HX_STACK_LINE(266)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = this->excludes;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				::zpp_nape::callbacks::ZPP_CbType tmp8 = val;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(266)
				bool tmp9 = tmp7->has(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(266)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(266)
				if ((tmp10)){
					HX_STACK_LINE(267)
					Dynamic tmp11 = this->handler_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(267)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(267)
					if ((tmp12)){
						HX_STACK_LINE(267)
						::zpp_nape::callbacks::ZPP_CbType tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(267)
						this->handler(tmp13,true,true);
					}
					else{
						HX_STACK_LINE(268)
						::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = this->includes;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp13->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(268)
							while((true)){
								HX_STACK_LINE(268)
								bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(268)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(268)
								if ((tmp15)){
									HX_STACK_LINE(268)
									break;
								}
								HX_STACK_LINE(268)
								::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(268)
								{
									HX_STACK_LINE(268)
									bool tmp16 = (val->id < j->id);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(268)
									if ((tmp16)){
										HX_STACK_LINE(268)
										break;
									}
									HX_STACK_LINE(268)
									pre = cx_ite;
								}
								HX_STACK_LINE(268)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = this->includes;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPList_ZPP_CbType _this = tmp13;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(268)
							{
								HX_STACK_LINE(268)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(268)
								{
									HX_STACK_LINE(268)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp15 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(268)
									bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(268)
									if ((tmp16)){
										HX_STACK_LINE(268)
										::zpp_nape::util::ZNPNode_ZPP_CbType tmp17 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(268)
										ret = tmp17;
									}
									else{
										HX_STACK_LINE(268)
										::zpp_nape::util::ZNPNode_ZPP_CbType tmp17 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(268)
										ret = tmp17;
										HX_STACK_LINE(268)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(268)
										ret->next = null();
									}
									HX_STACK_LINE(268)
									Dynamic();
								}
								HX_STACK_LINE(268)
								ret->elt = val;
								HX_STACK_LINE(268)
								tmp14 = ret;
							}
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp14;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(268)
							bool tmp15 = (pre == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(268)
							if ((tmp15)){
								HX_STACK_LINE(268)
								temp->next = _this->head;
								HX_STACK_LINE(268)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(268)
								temp->next = pre->next;
								HX_STACK_LINE(268)
								pre->next = temp;
							}
							HX_STACK_LINE(268)
							bool tmp16 = _this->modified = true;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(268)
							_this->pushmod = tmp16;
							HX_STACK_LINE(268)
							(_this->length)++;
							HX_STACK_LINE(268)
							temp;
						}
					}
				}
				else{
					HX_STACK_LINE(271)
					Dynamic tmp11 = this->handler_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(271)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(271)
					if ((tmp12)){
						HX_STACK_LINE(271)
						::zpp_nape::callbacks::ZPP_CbType tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(271)
						this->handler(tmp13,false,false);
					}
					else{
						HX_STACK_LINE(272)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = this->excludes;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(272)
						::zpp_nape::callbacks::ZPP_CbType tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(272)
						tmp13->remove(tmp14);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(277)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = this->excludes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			::zpp_nape::callbacks::ZPP_CbType tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(277)
			bool tmp5 = tmp3->has(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(277)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			if ((tmp6)){
				HX_STACK_LINE(278)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = this->includes;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(278)
				::zpp_nape::callbacks::ZPP_CbType tmp8 = val;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(278)
				bool tmp9 = tmp7->has(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(278)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(278)
				if ((tmp10)){
					HX_STACK_LINE(279)
					Dynamic tmp11 = this->handler_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(279)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(279)
					if ((tmp12)){
						HX_STACK_LINE(279)
						::zpp_nape::callbacks::ZPP_CbType tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(279)
						this->handler(tmp13,false,true);
					}
					else{
						HX_STACK_LINE(280)
						::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(280)
						{
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = this->excludes;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp13->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(280)
							while((true)){
								HX_STACK_LINE(280)
								bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(280)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(280)
								if ((tmp15)){
									HX_STACK_LINE(280)
									break;
								}
								HX_STACK_LINE(280)
								::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(280)
								{
									HX_STACK_LINE(280)
									bool tmp16 = (val->id < j->id);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(280)
									if ((tmp16)){
										HX_STACK_LINE(280)
										break;
									}
									HX_STACK_LINE(280)
									pre = cx_ite;
								}
								HX_STACK_LINE(280)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(280)
						{
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = this->excludes;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPList_ZPP_CbType _this = tmp13;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_CbType tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(280)
							{
								HX_STACK_LINE(280)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(280)
								{
									HX_STACK_LINE(280)
									::zpp_nape::util::ZNPNode_ZPP_CbType tmp15 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(280)
									bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(280)
									if ((tmp16)){
										HX_STACK_LINE(280)
										::zpp_nape::util::ZNPNode_ZPP_CbType tmp17 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(280)
										ret = tmp17;
									}
									else{
										HX_STACK_LINE(280)
										::zpp_nape::util::ZNPNode_ZPP_CbType tmp17 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(280)
										ret = tmp17;
										HX_STACK_LINE(280)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(280)
										ret->next = null();
									}
									HX_STACK_LINE(280)
									Dynamic();
								}
								HX_STACK_LINE(280)
								ret->elt = val;
								HX_STACK_LINE(280)
								tmp14 = ret;
							}
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp14;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(280)
							bool tmp15 = (pre == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(280)
							if ((tmp15)){
								HX_STACK_LINE(280)
								temp->next = _this->head;
								HX_STACK_LINE(280)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(280)
								temp->next = pre->next;
								HX_STACK_LINE(280)
								pre->next = temp;
							}
							HX_STACK_LINE(280)
							bool tmp16 = _this->modified = true;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(280)
							_this->pushmod = tmp16;
							HX_STACK_LINE(280)
							(_this->length)++;
							HX_STACK_LINE(280)
							temp;
						}
					}
				}
				else{
					HX_STACK_LINE(283)
					Dynamic tmp11 = this->handler_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(283)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(283)
					if ((tmp12)){
						HX_STACK_LINE(283)
						::zpp_nape::callbacks::ZPP_CbType tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(283)
						this->handler(tmp13,true,false);
					}
					else{
						HX_STACK_LINE(284)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = this->includes;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(284)
						::zpp_nape::callbacks::ZPP_CbType tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(284)
						tmp13->remove(tmp14);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,append_type,(void))

::zpp_nape::callbacks::ZPP_OptionType ZPP_OptionType_obj::set( ::zpp_nape::callbacks::ZPP_OptionType options){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","set",0xd0c50c89,"zpp_nape.callbacks.ZPP_OptionType.set","zpp_nape/callbacks/OptionType.hx",289,0xf757a16c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(290)
	bool tmp = (options != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	if ((tmp)){
		HX_STACK_LINE(291)
		while((true)){
			HX_STACK_LINE(291)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->includes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(291)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = tmp1->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(291)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			if ((tmp5)){
				HX_STACK_LINE(291)
				break;
			}
			HX_STACK_LINE(291)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = this->excludes;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = this->includes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(291)
			::zpp_nape::callbacks::ZPP_CbType tmp8 = tmp7->head->elt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			this->append_type(tmp6,tmp8);
		}
		HX_STACK_LINE(292)
		while((true)){
			HX_STACK_LINE(292)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp1 = this->excludes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(292)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = tmp1->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(292)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(292)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(292)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(292)
			if ((tmp5)){
				HX_STACK_LINE(292)
				break;
			}
			HX_STACK_LINE(292)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = this->includes;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(292)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = this->excludes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(292)
			::zpp_nape::callbacks::ZPP_CbType tmp8 = tmp7->head->elt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(292)
			this->append_type(tmp6,tmp8);
		}
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(294)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = options->excludes->head;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(295)
			while((true)){
				HX_STACK_LINE(295)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(295)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(295)
				if ((tmp3)){
					HX_STACK_LINE(295)
					break;
				}
				HX_STACK_LINE(296)
				::zpp_nape::callbacks::ZPP_CbType i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(297)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp4 = this->excludes;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(297)
				::zpp_nape::callbacks::ZPP_CbType tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(297)
				this->append_type(tmp4,tmp5);
				HX_STACK_LINE(298)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = options->includes->head;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(303)
			while((true)){
				HX_STACK_LINE(303)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(303)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				if ((tmp3)){
					HX_STACK_LINE(303)
					break;
				}
				HX_STACK_LINE(304)
				::zpp_nape::callbacks::ZPP_CbType i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(305)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp4 = this->includes;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(305)
				::zpp_nape::callbacks::ZPP_CbType tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				this->append_type(tmp4,tmp5);
				HX_STACK_LINE(306)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(310)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,set,return )

Void ZPP_OptionType_obj::append( ::zpp_nape::util::ZNPList_ZPP_CbType list,Dynamic val){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","append",0xa21cbb53,"zpp_nape.callbacks.ZPP_OptionType.append","zpp_nape/callbacks/OptionType.hx",312,0xf757a16c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(314)
		bool tmp = (val == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		if ((tmp)){
			HX_STACK_LINE(315)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot append null, only CbType and CbType list values","\x4b","\x7a","\x6f","\x99"));
		}
		HX_STACK_LINE(318)
		Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::nape::callbacks::CbType >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		if ((tmp2)){
			HX_STACK_LINE(319)
			::nape::callbacks::CbType cb = val;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(320)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(320)
			::zpp_nape::callbacks::ZPP_CbType tmp4 = cb->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			this->append_type(tmp3,tmp4);
		}
		else{
			HX_STACK_LINE(322)
			Dynamic tmp3 = val;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(322)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::nape::callbacks::CbTypeList >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			if ((tmp4)){
				HX_STACK_LINE(323)
				::nape::callbacks::CbTypeList cbs = val;		HX_STACK_VAR(cbs,"cbs");
				HX_STACK_LINE(324)
				{
					HX_STACK_LINE(324)
					::nape::callbacks::CbTypeIterator tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(324)
					{
						HX_STACK_LINE(324)
						cbs->zpp_inner->valmod();
						HX_STACK_LINE(324)
						::nape::callbacks::CbTypeList tmp6 = cbs;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(324)
						tmp5 = ::nape::callbacks::CbTypeIterator_obj::get(tmp6);
					}
					HX_STACK_LINE(324)
					::nape::callbacks::CbTypeIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(324)
					while((true)){
						HX_STACK_LINE(324)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(324)
						{
							HX_STACK_LINE(324)
							::zpp_nape::util::ZPP_CbTypeList tmp7 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(324)
							tmp7->valmod();
							HX_STACK_LINE(324)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(324)
							{
								HX_STACK_LINE(324)
								::nape::callbacks::CbTypeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(324)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(324)
								bool tmp9 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(324)
								if ((tmp9)){
									HX_STACK_LINE(324)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(324)
									{
										HX_STACK_LINE(324)
										::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(324)
										_this->zpp_inner->user_length = tmp10->length;
									}
								}
								HX_STACK_LINE(324)
								tmp8 = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(324)
							int length = tmp8;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(324)
							_g->zpp_critical = true;
							HX_STACK_LINE(324)
							bool tmp9 = (_g->zpp_i < length);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(324)
							if ((tmp9)){
								HX_STACK_LINE(324)
								tmp6 = true;
							}
							else{
								HX_STACK_LINE(324)
								{
									HX_STACK_LINE(324)
									::nape::callbacks::CbTypeIterator tmp10 = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(324)
									_g->zpp_next = tmp10;
									HX_STACK_LINE(324)
									::nape::callbacks::CbTypeIterator_obj::zpp_pool = _g;
									HX_STACK_LINE(324)
									_g->zpp_inner = null();
								}
								HX_STACK_LINE(324)
								tmp6 = false;
							}
						}
						HX_STACK_LINE(324)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(324)
						if ((tmp7)){
							HX_STACK_LINE(324)
							break;
						}
						HX_STACK_LINE(324)
						::nape::callbacks::CbType tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(324)
						{
							HX_STACK_LINE(324)
							_g->zpp_critical = false;
							HX_STACK_LINE(324)
							int tmp9 = (_g->zpp_i)++;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(324)
							tmp8 = _g->zpp_inner->at(tmp9);
						}
						HX_STACK_LINE(324)
						::nape::callbacks::CbType cb = tmp8;		HX_STACK_VAR(cb,"cb");
						HX_STACK_LINE(324)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp9 = list;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(324)
						::zpp_nape::callbacks::ZPP_CbType tmp10 = cb->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(324)
						this->append_type(tmp9,tmp10);
					}
				}
			}
			else{
				HX_STACK_LINE(332)
				Dynamic tmp5 = val;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(332)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(332)
				if ((tmp6)){
					HX_STACK_LINE(333)
					cpp::ArrayBase cbs = val;		HX_STACK_VAR(cbs,"cbs");
					HX_STACK_LINE(334)
					{
						HX_STACK_LINE(334)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(334)
						while((true)){
							HX_STACK_LINE(334)
							bool tmp7 = (_g < cbs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(334)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(334)
							if ((tmp8)){
								HX_STACK_LINE(334)
								break;
							}
							HX_STACK_LINE(334)
							Dynamic tmp9 = cbs->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(334)
							Dynamic cb = tmp9;		HX_STACK_VAR(cb,"cb");
							HX_STACK_LINE(334)
							++(_g);
							HX_STACK_LINE(336)
							Dynamic tmp10 = cb;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(336)
							bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::nape::callbacks::CbType >());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(336)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(336)
							if ((tmp12)){
								HX_STACK_LINE(337)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot append non-CbType or CbType list value","\x89","\xbf","\xa8","\xc4"));
							}
							HX_STACK_LINE(340)
							::nape::callbacks::CbType cbx = cb;		HX_STACK_VAR(cbx,"cbx");
							HX_STACK_LINE(341)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = list;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(341)
							::zpp_nape::callbacks::ZPP_CbType tmp14 = cbx->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(341)
							this->append_type(tmp13,tmp14);
						}
					}
				}
				else{
					HX_STACK_LINE(346)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot append non-CbType or CbType list value","\x89","\xbf","\xa8","\xc4"));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,append,(void))

::nape::callbacks::OptionType ZPP_OptionType_obj::argument( Dynamic val){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_OptionType","argument",0xdef65836,"zpp_nape.callbacks.ZPP_OptionType.argument","zpp_nape/callbacks/OptionType.hx",350,0xf757a16c)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(351)
	bool tmp = (val == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	::nape::callbacks::OptionType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	if ((tmp)){
		HX_STACK_LINE(351)
		tmp1 = ::nape::callbacks::OptionType_obj::__new(null(),null());
	}
	else{
		HX_STACK_LINE(352)
		Dynamic tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::nape::callbacks::OptionType >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		if ((tmp3)){
			HX_STACK_LINE(352)
			tmp1 = val;
		}
		else{
			HX_STACK_LINE(353)
			::nape::callbacks::OptionType tmp4 = ::nape::callbacks::OptionType_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(353)
			Dynamic tmp5 = val;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(353)
			tmp1 = tmp4->including(tmp5);
		}
	}
	HX_STACK_LINE(351)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,argument,return )


ZPP_OptionType_obj::ZPP_OptionType_obj()
{
}

void ZPP_OptionType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_OptionType);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(includes,"includes");
	HX_MARK_MEMBER_NAME(excludes,"excludes");
	HX_MARK_MEMBER_NAME(wrap_includes,"wrap_includes");
	HX_MARK_MEMBER_NAME(wrap_excludes,"wrap_excludes");
	HX_MARK_END_CLASS();
}

void ZPP_OptionType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(includes,"includes");
	HX_VISIT_MEMBER_NAME(excludes,"excludes");
	HX_VISIT_MEMBER_NAME(wrap_includes,"wrap_includes");
	HX_VISIT_MEMBER_NAME(wrap_excludes,"wrap_excludes");
}

Dynamic ZPP_OptionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"includes") ) { return includes; }
		if (HX_FIELD_EQ(inName,"excludes") ) { return excludes; }
		if (HX_FIELD_EQ(inName,"excluded") ) { return excluded_dyn(); }
		if (HX_FIELD_EQ(inName,"included") ) { return included_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compatible") ) { return compatible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"append_type") ) { return append_type_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_includes") ) { return wrap_includes; }
		if (HX_FIELD_EQ(inName,"wrap_excludes") ) { return wrap_excludes; }
		if (HX_FIELD_EQ(inName,"effect_change") ) { return effect_change_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setup_includes") ) { return setup_includes_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_excludes") ) { return setup_excludes_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nonemptyintersection") ) { return nonemptyintersection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_OptionType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"argument") ) { outValue = argument_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_OptionType_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::OptionType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"includes") ) { includes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"excludes") ) { excludes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_includes") ) { wrap_includes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_excludes") ) { wrap_excludes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_OptionType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_OptionType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("includes","\x4b","\x65","\x27","\x66"));
	outFields->push(HX_HCSTRING("excludes","\x59","\x40","\x34","\x21"));
	outFields->push(HX_HCSTRING("wrap_includes","\xa0","\x99","\x51","\x56"));
	outFields->push(HX_HCSTRING("wrap_excludes","\xae","\x74","\x5e","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::OptionType*/ ,(int)offsetof(ZPP_OptionType_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_OptionType_obj,handler),HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(int)offsetof(ZPP_OptionType_obj,includes),HX_HCSTRING("includes","\x4b","\x65","\x27","\x66")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_CbType*/ ,(int)offsetof(ZPP_OptionType_obj,excludes),HX_HCSTRING("excludes","\x59","\x40","\x34","\x21")},
	{hx::fsObject /*::nape::callbacks::CbTypeList*/ ,(int)offsetof(ZPP_OptionType_obj,wrap_includes),HX_HCSTRING("wrap_includes","\xa0","\x99","\x51","\x56")},
	{hx::fsObject /*::nape::callbacks::CbTypeList*/ ,(int)offsetof(ZPP_OptionType_obj,wrap_excludes),HX_HCSTRING("wrap_excludes","\xae","\x74","\x5e","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"),
	HX_HCSTRING("includes","\x4b","\x65","\x27","\x66"),
	HX_HCSTRING("excludes","\x59","\x40","\x34","\x21"),
	HX_HCSTRING("wrap_includes","\xa0","\x99","\x51","\x56"),
	HX_HCSTRING("wrap_excludes","\xae","\x74","\x5e","\x11"),
	HX_HCSTRING("setup_includes","\x8d","\x76","\x84","\x77"),
	HX_HCSTRING("setup_excludes","\x9b","\x51","\x91","\x32"),
	HX_HCSTRING("excluded","\x4a","\x40","\x34","\x21"),
	HX_HCSTRING("included","\x3c","\x65","\x27","\x66"),
	HX_HCSTRING("compatible","\x54","\xdb","\x22","\x38"),
	HX_HCSTRING("nonemptyintersection","\xa9","\x24","\x8b","\x75"),
	HX_HCSTRING("effect_change","\x9e","\x2c","\x58","\x91"),
	HX_HCSTRING("append_type","\x7f","\x36","\x63","\xa9"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_OptionType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_OptionType_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_OptionType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("argument","\x7d","\x6e","\xa9","\x05"),
	::String(null()) };

void ZPP_OptionType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.callbacks.ZPP_OptionType","\xd5","\x91","\x0f","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_OptionType_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_OptionType_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_OptionType_obj >;
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
} // end namespace callbacks
