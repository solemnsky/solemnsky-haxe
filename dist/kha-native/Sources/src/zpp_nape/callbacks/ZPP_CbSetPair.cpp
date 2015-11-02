#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_CbSetPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","new",0x012d1a29,"zpp_nape.callbacks.ZPP_CbSetPair.new","zpp_nape/callbacks/CbSetPair.hx",174,0xd7643d64)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(264)
	this->listeners = null();
	HX_STACK_LINE(263)
	this->zip_listeners = false;
	HX_STACK_LINE(177)
	this->next = null();
	HX_STACK_LINE(176)
	this->b = null();
	HX_STACK_LINE(175)
	this->a = null();
	HX_STACK_LINE(214)
	::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	this->listeners = tmp;
}
;
	return null();
}

//ZPP_CbSetPair_obj::~ZPP_CbSetPair_obj() { }

Dynamic ZPP_CbSetPair_obj::__CreateEmpty() { return  new ZPP_CbSetPair_obj; }
hx::ObjectPtr< ZPP_CbSetPair_obj > ZPP_CbSetPair_obj::__new()
{  hx::ObjectPtr< ZPP_CbSetPair_obj > _result_ = new ZPP_CbSetPair_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_CbSetPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbSetPair_obj > _result_ = new ZPP_CbSetPair_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_CbSetPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","free",0x0109e2c3,"zpp_nape.callbacks.ZPP_CbSetPair.free","zpp_nape/callbacks/CbSetPair.hx",204,0xd7643d64)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		::zpp_nape::callbacks::ZPP_CbSet tmp = this->b = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		this->a = tmp;
		HX_STACK_LINE(206)
		::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp1 = this->listeners;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		tmp1->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,free,(void))

Void ZPP_CbSetPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","alloc",0x02a9b27e,"zpp_nape.callbacks.ZPP_CbSetPair.alloc","zpp_nape/callbacks/CbSetPair.hx",211,0xd7643d64)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		this->zip_listeners = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,alloc,(void))

bool ZPP_CbSetPair_obj::compatible( ::zpp_nape::callbacks::ZPP_InteractionListener i){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","compatible",0x3f904cab,"zpp_nape.callbacks.ZPP_CbSetPair.compatible","zpp_nape/callbacks/CbSetPair.hx",260,0xd7643d64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(261)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		::zpp_nape::callbacks::ZPP_OptionType _this = i->options1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(261)
		::zpp_nape::callbacks::ZPP_CbSet tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		::zpp_nape::callbacks::ZPP_CbSet tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType xs = tmp2->cbTypes;		HX_STACK_VAR(xs,"xs");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp3 = xs;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp4 = _this->includes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(261)
		bool tmp9 = _this->nonemptyintersection(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(261)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(261)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(261)
		if ((tmp11)){
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = xs;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = _this->excludes;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(261)
			bool tmp18 = _this->nonemptyintersection(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(261)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(261)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(261)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(261)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(261)
			tmp = !(tmp22);
		}
		else{
			HX_STACK_LINE(261)
			tmp = false;
		}
	}
	HX_STACK_LINE(261)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	if ((tmp1)){
		HX_STACK_LINE(261)
		::zpp_nape::callbacks::ZPP_OptionType _this = i->options2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(261)
		::zpp_nape::callbacks::ZPP_CbSet tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		::zpp_nape::callbacks::ZPP_CbSet tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(261)
		::zpp_nape::callbacks::ZPP_CbSet tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType xs = tmp5->cbTypes;		HX_STACK_VAR(xs,"xs");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp6 = xs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp7 = _this->includes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(261)
		::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(261)
		bool tmp14 = _this->nonemptyintersection(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(261)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(261)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(261)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(261)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(261)
		if ((tmp18)){
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp19 = xs;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp20 = _this->excludes;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(261)
			bool tmp27 = _this->nonemptyintersection(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(261)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(261)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(261)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(261)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(261)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(261)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(261)
			tmp2 = !(tmp33);
		}
		else{
			HX_STACK_LINE(261)
			tmp2 = false;
		}
	}
	else{
		HX_STACK_LINE(261)
		tmp2 = false;
	}
	HX_STACK_LINE(261)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	if ((tmp3)){
		HX_STACK_LINE(261)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::callbacks::ZPP_OptionType _this = i->options2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			::zpp_nape::callbacks::ZPP_CbSet tmp6 = this->a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(261)
			::zpp_nape::callbacks::ZPP_CbSet tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			::zpp_nape::callbacks::ZPP_CbSet tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType xs = tmp8->cbTypes;		HX_STACK_VAR(xs,"xs");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp9 = xs;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = _this->includes;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(261)
			bool tmp17 = _this->nonemptyintersection(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(261)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(261)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(261)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(261)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(261)
			if ((tmp21)){
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = xs;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = _this->excludes;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(261)
				bool tmp30 = _this->nonemptyintersection(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(261)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(261)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(261)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(261)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(261)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(261)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(261)
				bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(261)
				tmp5 = tmp37;
			}
			else{
				HX_STACK_LINE(261)
				tmp5 = false;
			}
		}
		HX_STACK_LINE(261)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		if ((tmp6)){
			HX_STACK_LINE(261)
			::zpp_nape::callbacks::ZPP_OptionType _this = i->options1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			::zpp_nape::callbacks::ZPP_CbSet tmp7 = this->b;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			::zpp_nape::callbacks::ZPP_CbSet tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			::zpp_nape::callbacks::ZPP_CbSet tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType xs = tmp9->cbTypes;		HX_STACK_VAR(xs,"xs");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp10 = xs;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp11 = _this->includes;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPList_ZPP_CbType tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(261)
			bool tmp18 = _this->nonemptyintersection(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(261)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(261)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(261)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(261)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(261)
			if ((tmp22)){
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = xs;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp24 = _this->excludes;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(261)
				::zpp_nape::util::ZNPList_ZPP_CbType tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(261)
				bool tmp31 = _this->nonemptyintersection(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(261)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(261)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(261)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(261)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(261)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(261)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(261)
				tmp4 = !(tmp37);
			}
			else{
				HX_STACK_LINE(261)
				tmp4 = false;
			}
		}
		else{
			HX_STACK_LINE(261)
			tmp4 = false;
		}
	}
	else{
		HX_STACK_LINE(261)
		tmp4 = true;
	}
	HX_STACK_LINE(261)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetPair_obj,compatible,return )

Void ZPP_CbSetPair_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","invalidate",0x8e978ad2,"zpp_nape.callbacks.ZPP_CbSetPair.invalidate","zpp_nape/callbacks/CbSetPair.hx",268,0xd7643d64)
		HX_STACK_THIS(this)
		HX_STACK_LINE(268)
		this->zip_listeners = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,invalidate,(void))

Void ZPP_CbSetPair_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","validate",0xbc7d6e2d,"zpp_nape.callbacks.ZPP_CbSetPair.validate","zpp_nape/callbacks/CbSetPair.hx",272,0xd7643d64)
		HX_STACK_THIS(this)
		HX_STACK_LINE(273)
		bool tmp = this->zip_listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		if ((tmp)){
			HX_STACK_LINE(274)
			this->zip_listeners = false;
			HX_STACK_LINE(275)
			this->__validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,validate,(void))

Void ZPP_CbSetPair_obj::__validate( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","__validate",0xaf89b50d,"zpp_nape.callbacks.ZPP_CbSetPair.__validate","zpp_nape/callbacks/CbSetPair.hx",278,0xd7643d64)
		HX_STACK_THIS(this)
		HX_STACK_LINE(279)
		::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		tmp->clear();
		HX_STACK_LINE(296)
		::zpp_nape::callbacks::ZPP_CbSet tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = tmp1->listeners->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener aite = tmp2;		HX_STACK_VAR(aite,"aite");
		HX_STACK_LINE(297)
		::zpp_nape::callbacks::ZPP_CbSet tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = tmp3->listeners->head;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener bite = tmp4;		HX_STACK_VAR(bite,"bite");
		HX_STACK_LINE(298)
		while((true)){
			HX_STACK_LINE(298)
			bool tmp5 = (aite != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(298)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(298)
			if ((tmp5)){
				HX_STACK_LINE(298)
				tmp6 = (bite != null());
			}
			else{
				HX_STACK_LINE(298)
				tmp6 = false;
			}
			HX_STACK_LINE(298)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(298)
			if ((tmp7)){
				HX_STACK_LINE(298)
				break;
			}
			HX_STACK_LINE(299)
			::zpp_nape::callbacks::ZPP_InteractionListener ax = aite->elt;		HX_STACK_VAR(ax,"ax");
			HX_STACK_LINE(300)
			::zpp_nape::callbacks::ZPP_InteractionListener bx = bite->elt;		HX_STACK_VAR(bx,"bx");
			HX_STACK_LINE(301)
			bool tmp8 = (ax == bx);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			if ((tmp8)){
				HX_STACK_LINE(302)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::callbacks::ZPP_OptionType _this = ax->options1;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					::zpp_nape::callbacks::ZPP_CbSet tmp10 = this->a;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(302)
					::zpp_nape::callbacks::ZPP_CbSet tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType xs = tmp11->cbTypes;		HX_STACK_VAR(xs,"xs");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp12 = xs;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp13 = _this->includes;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(302)
					bool tmp18 = _this->nonemptyintersection(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(302)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(302)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(302)
					if ((tmp20)){
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp21 = xs;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = _this->excludes;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(302)
						bool tmp27 = _this->nonemptyintersection(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(302)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(302)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(302)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(302)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(302)
						tmp9 = !(tmp31);
					}
					else{
						HX_STACK_LINE(302)
						tmp9 = false;
					}
				}
				HX_STACK_LINE(302)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(302)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(302)
				if ((tmp10)){
					HX_STACK_LINE(302)
					::zpp_nape::callbacks::ZPP_OptionType _this = ax->options2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					::zpp_nape::callbacks::ZPP_CbSet tmp12 = this->b;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(302)
					::zpp_nape::callbacks::ZPP_CbSet tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(302)
					::zpp_nape::callbacks::ZPP_CbSet tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType xs = tmp14->cbTypes;		HX_STACK_VAR(xs,"xs");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp15 = xs;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp16 = _this->includes;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(302)
					::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(302)
					bool tmp23 = _this->nonemptyintersection(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(302)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(302)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(302)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(302)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(302)
					if ((tmp27)){
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp28 = xs;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp29 = _this->excludes;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(302)
						bool tmp36 = _this->nonemptyintersection(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(302)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(302)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(302)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(302)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(302)
						bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(302)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(302)
						tmp11 = !(tmp42);
					}
					else{
						HX_STACK_LINE(302)
						tmp11 = false;
					}
				}
				else{
					HX_STACK_LINE(302)
					tmp11 = false;
				}
				HX_STACK_LINE(302)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(302)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(302)
				if ((tmp12)){
					HX_STACK_LINE(302)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						::zpp_nape::callbacks::ZPP_OptionType _this = ax->options2;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(302)
						::zpp_nape::callbacks::ZPP_CbSet tmp15 = this->a;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(302)
						::zpp_nape::callbacks::ZPP_CbSet tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(302)
						::zpp_nape::callbacks::ZPP_CbSet tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType xs = tmp17->cbTypes;		HX_STACK_VAR(xs,"xs");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp18 = xs;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp19 = _this->includes;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(302)
						bool tmp26 = _this->nonemptyintersection(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(302)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(302)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(302)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(302)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(302)
						if ((tmp30)){
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp31 = xs;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp32 = _this->excludes;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(302)
							bool tmp39 = _this->nonemptyintersection(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(302)
							bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(302)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(302)
							bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(302)
							bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(302)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(302)
							bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(302)
							bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(302)
							tmp14 = tmp46;
						}
						else{
							HX_STACK_LINE(302)
							tmp14 = false;
						}
					}
					HX_STACK_LINE(302)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					if ((tmp15)){
						HX_STACK_LINE(302)
						::zpp_nape::callbacks::ZPP_OptionType _this = ax->options1;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(302)
						::zpp_nape::callbacks::ZPP_CbSet tmp16 = this->b;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(302)
						::zpp_nape::callbacks::ZPP_CbSet tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(302)
						::zpp_nape::callbacks::ZPP_CbSet tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType xs = tmp18->cbTypes;		HX_STACK_VAR(xs,"xs");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp19 = xs;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp20 = _this->includes;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(302)
						::zpp_nape::util::ZNPList_ZPP_CbType tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(302)
						bool tmp27 = _this->nonemptyintersection(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(302)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(302)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(302)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(302)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(302)
						if ((tmp31)){
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp32 = xs;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp33 = _this->excludes;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(302)
							::zpp_nape::util::ZNPList_ZPP_CbType tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(302)
							bool tmp40 = _this->nonemptyintersection(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(302)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(302)
							bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(302)
							bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(302)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(302)
							bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(302)
							bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(302)
							tmp13 = !(tmp46);
						}
						else{
							HX_STACK_LINE(302)
							tmp13 = false;
						}
					}
					else{
						HX_STACK_LINE(302)
						tmp13 = false;
					}
				}
				else{
					HX_STACK_LINE(302)
					tmp13 = true;
				}
				HX_STACK_LINE(302)
				if ((tmp13)){
					HX_STACK_LINE(303)
					::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp14 = this->listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(303)
					::zpp_nape::callbacks::ZPP_InteractionListener tmp15 = ax;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(303)
					tmp14->add(tmp15);
				}
				HX_STACK_LINE(305)
				aite = aite->next;
				HX_STACK_LINE(306)
				bite = bite->next;
			}
			else{
				HX_STACK_LINE(308)
				bool tmp9 = (ax->precedence > bx->precedence);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(308)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(308)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(308)
				if ((tmp10)){
					HX_STACK_LINE(308)
					bool tmp12 = (ax->precedence == bx->precedence);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(308)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(308)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(308)
					if ((tmp14)){
						HX_STACK_LINE(308)
						tmp11 = (ax->id > bx->id);
					}
					else{
						HX_STACK_LINE(308)
						tmp11 = false;
					}
				}
				else{
					HX_STACK_LINE(308)
					tmp11 = true;
				}
				HX_STACK_LINE(308)
				if ((tmp11)){
					HX_STACK_LINE(308)
					aite = aite->next;
				}
				else{
					HX_STACK_LINE(309)
					bite = bite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,__validate,(void))

bool ZPP_CbSetPair_obj::empty_intersection( ){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","empty_intersection",0x14e1c6d2,"zpp_nape.callbacks.ZPP_CbSetPair.empty_intersection","zpp_nape/callbacks/CbSetPair.hx",314,0xd7643d64)
	HX_STACK_THIS(this)
	HX_STACK_LINE(323)
	::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = tmp->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,empty_intersection,return )

bool ZPP_CbSetPair_obj::single_intersection( ::zpp_nape::callbacks::ZPP_InteractionListener i){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","single_intersection",0xa7868569,"zpp_nape.callbacks.ZPP_CbSetPair.single_intersection","zpp_nape/callbacks/CbSetPair.hx",327,0xd7643d64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(336)
	::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ite = tmp->head;		HX_STACK_VAR(ite,"ite");
	HX_STACK_LINE(337)
	bool tmp1 = (ite != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(337)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(337)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(337)
	if ((tmp2)){
		HX_STACK_LINE(337)
		tmp3 = (ite->elt == i);
	}
	else{
		HX_STACK_LINE(337)
		tmp3 = false;
	}
	HX_STACK_LINE(337)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(337)
	if ((tmp3)){
		HX_STACK_LINE(337)
		tmp4 = (ite->next == null());
	}
	else{
		HX_STACK_LINE(337)
		tmp4 = false;
	}
	HX_STACK_LINE(337)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetPair_obj,single_intersection,return )

Void ZPP_CbSetPair_obj::forall( int event,Dynamic cb){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","forall",0x0fbbb78f,"zpp_nape.callbacks.ZPP_CbSetPair.forall","zpp_nape/callbacks/CbSetPair.hx",350,0xd7643d64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(cb,"cb")
		HX_STACK_LINE(351)
		::zpp_nape::util::ZNPList_ZPP_InteractionListener tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(352)
		while((true)){
			HX_STACK_LINE(352)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(352)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(352)
			if ((tmp2)){
				HX_STACK_LINE(352)
				break;
			}
			HX_STACK_LINE(353)
			::zpp_nape::callbacks::ZPP_InteractionListener x = cx_ite->elt;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(355)
				bool tmp3 = (x->event == event);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(355)
				if ((tmp3)){
					HX_STACK_LINE(355)
					::zpp_nape::callbacks::ZPP_InteractionListener tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(355)
					cb(tmp4).Cast< Void >();
				}
			}
			HX_STACK_LINE(357)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetPair_obj,forall,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_CbSetPair_obj::zpp_pool;

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_CbSetPair_obj::get( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","get",0x0127ca5f,"zpp_nape.callbacks.ZPP_CbSetPair.get","zpp_nape/callbacks/CbSetPair.hx",217,0xd7643d64)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(218)
	::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(220)
		::zpp_nape::callbacks::ZPP_CbSetPair tmp = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		if ((tmp1)){
			HX_STACK_LINE(221)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp2 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(221)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(227)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp2 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			ret = tmp2;
			HX_STACK_LINE(228)
			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
			HX_STACK_LINE(229)
			ret->next = null();
		}
		HX_STACK_LINE(234)
		ret->zip_listeners = true;
	}
	HX_STACK_LINE(236)
	::zpp_nape::callbacks::ZPP_CbSet tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::zpp_nape::callbacks::ZPP_CbSet tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	bool tmp2 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	if ((tmp2)){
		HX_STACK_LINE(237)
		ret->a = a;
		HX_STACK_LINE(238)
		ret->b = b;
	}
	else{
		HX_STACK_LINE(241)
		ret->a = b;
		HX_STACK_LINE(242)
		ret->b = a;
	}
	HX_STACK_LINE(244)
	::zpp_nape::callbacks::ZPP_CbSetPair tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetPair_obj,get,return )

bool ZPP_CbSetPair_obj::setlt( ::zpp_nape::callbacks::ZPP_CbSetPair x,::zpp_nape::callbacks::ZPP_CbSetPair y){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_CbSetPair","setlt",0x5b45b4b3,"zpp_nape.callbacks.ZPP_CbSetPair.setlt","zpp_nape/callbacks/CbSetPair.hx",247,0xd7643d64)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(256)
	::zpp_nape::callbacks::ZPP_CbSet tmp = x->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	::zpp_nape::callbacks::ZPP_CbSet tmp1 = y->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	::zpp_nape::callbacks::ZPP_CbSet tmp2 = tmp;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	::zpp_nape::callbacks::ZPP_CbSet tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	bool tmp4 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(256)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(256)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(256)
	if ((tmp5)){
		HX_STACK_LINE(256)
		bool tmp7 = (x->a == y->a);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(256)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(256)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(256)
		if ((tmp9)){
			HX_STACK_LINE(256)
			::zpp_nape::callbacks::ZPP_CbSet tmp10 = x->b;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(256)
			::zpp_nape::callbacks::ZPP_CbSet tmp11 = y->b;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(256)
			::zpp_nape::callbacks::ZPP_CbSet tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(256)
			::zpp_nape::callbacks::ZPP_CbSet tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(256)
			::zpp_nape::callbacks::ZPP_CbSet tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(256)
			::zpp_nape::callbacks::ZPP_CbSet tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(256)
			tmp6 = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(tmp14,tmp15);
		}
		else{
			HX_STACK_LINE(256)
			tmp6 = false;
		}
	}
	else{
		HX_STACK_LINE(256)
		tmp6 = true;
	}
	HX_STACK_LINE(256)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetPair_obj,setlt,return )


ZPP_CbSetPair_obj::ZPP_CbSetPair_obj()
{
}

void ZPP_CbSetPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbSetPair);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(zip_listeners,"zip_listeners");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_END_CLASS();
}

void ZPP_CbSetPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(zip_listeners,"zip_listeners");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
}

Dynamic ZPP_CbSetPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forall") ) { return forall_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compatible") ) { return compatible_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate") ) { return __validate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zip_listeners") ) { return zip_listeners; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"empty_intersection") ) { return empty_intersection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"single_intersection") ) { return single_intersection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_CbSetPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	}
	return false;
}

Dynamic ZPP_CbSetPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSetPair >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_InteractionListener >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zip_listeners") ) { zip_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_CbSetPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::callbacks::ZPP_CbSetPair >(); return true; }
	}
	return false;
}

void ZPP_CbSetPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("zip_listeners","\x61","\x93","\xbf","\xe5"));
	outFields->push(HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_CbSetPair_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSet*/ ,(int)offsetof(ZPP_CbSetPair_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSetPair*/ ,(int)offsetof(ZPP_CbSetPair_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_CbSetPair_obj,zip_listeners),HX_HCSTRING("zip_listeners","\x61","\x93","\xbf","\xe5")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_InteractionListener*/ ,(int)offsetof(ZPP_CbSetPair_obj,listeners),HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbSetPair*/ ,(void *) &ZPP_CbSetPair_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("compatible","\x54","\xdb","\x22","\x38"),
	HX_HCSTRING("zip_listeners","\x61","\x93","\xbf","\xe5"),
	HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("__validate","\xb6","\x43","\x1c","\xa8"),
	HX_HCSTRING("empty_intersection","\x7b","\xa6","\x10","\x19"),
	HX_HCSTRING("single_intersection","\xa0","\x59","\x5b","\x4c"),
	HX_HCSTRING("forall","\xb8","\x7d","\x85","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_CbSetPair_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("setlt","\xaa","\xa6","\x2f","\x7a"),
	::String(null()) };

void ZPP_CbSetPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.callbacks.ZPP_CbSetPair","\xb7","\xd1","\xe0","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_CbSetPair_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_CbSetPair_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_CbSetPair_obj >;
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

void ZPP_CbSetPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace callbacks
