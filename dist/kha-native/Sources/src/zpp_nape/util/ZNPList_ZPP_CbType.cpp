#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CbType_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","new",0x5278f9e0,"zpp_nape.util.ZNPList_ZPP_CbType.new","zpp_nape/util/Lists.hx",175,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	this->length = (int)0;
	HX_STACK_LINE(184)
	this->pushmod = false;
	HX_STACK_LINE(183)
	this->modified = false;
	HX_STACK_LINE(176)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_CbType_obj::~ZNPList_ZPP_CbType_obj() { }

Dynamic ZNPList_ZPP_CbType_obj::__CreateEmpty() { return  new ZNPList_ZPP_CbType_obj; }
hx::ObjectPtr< ZNPList_ZPP_CbType_obj > ZNPList_ZPP_CbType_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CbType_obj > _result_ = new ZNPList_ZPP_CbType_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CbType_obj > _result_ = new ZNPList_ZPP_CbType_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","begin",0xb53873a9,"zpp_nape.util.ZNPList_ZPP_CbType.begin","zpp_nape/util/Lists.hx",180,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,begin,return )

Void ZNPList_ZPP_CbType_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbType i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","setbegin",0xc29149c7,"zpp_nape.util.ZNPList_ZPP_CbType.setbegin","zpp_nape/util/Lists.hx",188,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(189)
		this->head = i;
		HX_STACK_LINE(190)
		this->modified = true;
		HX_STACK_LINE(191)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::add( ::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","add",0x526f1ba1,"zpp_nape.util.ZNPList_ZPP_CbType.add","zpp_nape/util/Lists.hx",193,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(194)
	::zpp_nape::callbacks::ZPP_CbType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(194)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(194)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(194)
				if ((tmp3)){
					HX_STACK_LINE(194)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(194)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(194)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(194)
					ret = tmp4;
					HX_STACK_LINE(194)
					::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
					HX_STACK_LINE(194)
					ret->next = null();
				}
				HX_STACK_LINE(194)
				Dynamic();
			}
			HX_STACK_LINE(194)
			ret->elt = o;
			HX_STACK_LINE(194)
			tmp1 = ret;
		}
		HX_STACK_LINE(194)
		::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(194)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		temp->next = tmp2;
		HX_STACK_LINE(194)
		this->head = temp;
		HX_STACK_LINE(194)
		this->modified = true;
		HX_STACK_LINE(194)
		(this->length)++;
		HX_STACK_LINE(194)
		tmp = o;
	}
	HX_STACK_LINE(194)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,add,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_add( ::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_add",0xa3d8f60d,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_add","zpp_nape/util/Lists.hx",198,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(207)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(208)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(210)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			if ((tmp2)){
				HX_STACK_LINE(211)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(211)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(217)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				ret = tmp3;
				HX_STACK_LINE(218)
				::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
				HX_STACK_LINE(219)
				ret->next = null();
			}
			HX_STACK_LINE(224)
			Dynamic();
		}
		HX_STACK_LINE(226)
		ret->elt = o;
		HX_STACK_LINE(227)
		tmp = ret;
	}
	HX_STACK_LINE(207)
	::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(229)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	temp->next = tmp1;
	HX_STACK_LINE(230)
	this->head = temp;
	HX_STACK_LINE(231)
	this->modified = true;
	HX_STACK_LINE(232)
	(this->length)++;
	HX_STACK_LINE(233)
	::zpp_nape::callbacks::ZPP_CbType tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_add,return )

Void ZNPList_ZPP_CbType_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CbType x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","addAll",0xe050d000,"zpp_nape.util.ZNPList_ZPP_CbType.addAll","zpp_nape/util/Lists.hx",244,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(245)
		::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(246)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(246)
			if ((tmp1)){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(247)
			::zpp_nape::callbacks::ZPP_CbType i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(248)
			::zpp_nape::callbacks::ZPP_CbType tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			this->add(tmp2);
			HX_STACK_LINE(249)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CbType cur,::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","insert",0xdf3309b9,"zpp_nape.util.ZNPList_ZPP_CbType.insert","zpp_nape/util/Lists.hx",253,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(254)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(254)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				if ((tmp3)){
					HX_STACK_LINE(254)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(254)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(254)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(254)
					ret = tmp4;
					HX_STACK_LINE(254)
					::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
					HX_STACK_LINE(254)
					ret->next = null();
				}
				HX_STACK_LINE(254)
				Dynamic();
			}
			HX_STACK_LINE(254)
			ret->elt = o;
			HX_STACK_LINE(254)
			tmp1 = ret;
		}
		HX_STACK_LINE(254)
		::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(254)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		if ((tmp2)){
			HX_STACK_LINE(254)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(254)
			temp->next = tmp3;
			HX_STACK_LINE(254)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(254)
			temp->next = cur->next;
			HX_STACK_LINE(254)
			cur->next = temp;
		}
		HX_STACK_LINE(254)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		this->pushmod = tmp3;
		HX_STACK_LINE(254)
		(this->length)++;
		HX_STACK_LINE(254)
		tmp = temp;
	}
	HX_STACK_LINE(254)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbType cur,::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_insert",0xf5507acd,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_insert","zpp_nape/util/Lists.hx",258,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(267)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	{
		HX_STACK_LINE(268)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(270)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			if ((tmp2)){
				HX_STACK_LINE(271)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(271)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(277)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(277)
				ret = tmp3;
				HX_STACK_LINE(278)
				::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
				HX_STACK_LINE(279)
				ret->next = null();
			}
			HX_STACK_LINE(284)
			Dynamic();
		}
		HX_STACK_LINE(286)
		ret->elt = o;
		HX_STACK_LINE(287)
		tmp = ret;
	}
	HX_STACK_LINE(267)
	::zpp_nape::util::ZNPNode_ZPP_CbType temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(289)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	if ((tmp1)){
		HX_STACK_LINE(290)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		temp->next = tmp2;
		HX_STACK_LINE(291)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(294)
		temp->next = cur->next;
		HX_STACK_LINE(295)
		cur->next = temp;
	}
	HX_STACK_LINE(297)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	this->pushmod = tmp2;
	HX_STACK_LINE(298)
	(this->length)++;
	HX_STACK_LINE(299)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(299)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,inlined_insert,return )

Void ZNPList_ZPP_CbType_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","pop",0x527a8711,"zpp_nape.util.ZNPList_ZPP_CbType.pop","zpp_nape/util/Lists.hx",302,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(302)
		this->head = ret->next;
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(302)
			o->elt = null();
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(302)
			o->next = tmp1;
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
		}
		HX_STACK_LINE(302)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		if ((tmp2)){
			HX_STACK_LINE(302)
			this->pushmod = true;
		}
		HX_STACK_LINE(302)
		this->modified = true;
		HX_STACK_LINE(302)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,pop,(void))

Void ZNPList_ZPP_CbType_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_pop",0xa3e4617d,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_pop","zpp_nape/util/Lists.hx",306,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(316)
		this->head = ret->next;
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(319)
			::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(328)
			o->elt = null();
			HX_STACK_LINE(329)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(329)
			o->next = tmp1;
			HX_STACK_LINE(330)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
		}
		HX_STACK_LINE(335)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		if ((tmp2)){
			HX_STACK_LINE(335)
			this->pushmod = true;
		}
		HX_STACK_LINE(336)
		this->modified = true;
		HX_STACK_LINE(337)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","pop_unsafe",0x8fe782d4,"zpp_nape.util.ZNPList_ZPP_CbType.pop_unsafe","zpp_nape/util/Lists.hx",339,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(340)
	::zpp_nape::callbacks::ZPP_CbType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		::zpp_nape::callbacks::ZPP_CbType ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(340)
		this->pop();
		HX_STACK_LINE(340)
		tmp = ret;
	}
	HX_STACK_LINE(340)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_pop_unsafe",0x44150de8,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_pop_unsafe","zpp_nape/util/Lists.hx",344,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	::zpp_nape::callbacks::ZPP_CbType ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(354)
	this->pop();
	HX_STACK_LINE(355)
	::zpp_nape::callbacks::ZPP_CbType tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_CbType_obj::remove( ::zpp_nape::callbacks::ZPP_CbType obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","remove",0x45de62c4,"zpp_nape.util.ZNPList_ZPP_CbType.remove","zpp_nape/util/Lists.hx",366,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(366)
		::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(366)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		::zpp_nape::util::ZNPNode_ZPP_CbType cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(366)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(366)
		while((true)){
			HX_STACK_LINE(366)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(366)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(366)
			if ((tmp2)){
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(366)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			if ((tmp3)){
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(366)
					::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(366)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(366)
					if ((tmp4)){
						HX_STACK_LINE(366)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(366)
						old = tmp5;
						HX_STACK_LINE(366)
						ret1 = old->next;
						HX_STACK_LINE(366)
						this->head = ret1;
						HX_STACK_LINE(366)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(366)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(366)
						if ((tmp7)){
							HX_STACK_LINE(366)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(366)
						old = pre->next;
						HX_STACK_LINE(366)
						ret1 = old->next;
						HX_STACK_LINE(366)
						pre->next = ret1;
						HX_STACK_LINE(366)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(366)
						if ((tmp5)){
							HX_STACK_LINE(366)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(366)
						o->elt = null();
						HX_STACK_LINE(366)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(366)
						o->next = tmp5;
						HX_STACK_LINE(366)
						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
					}
					HX_STACK_LINE(366)
					this->modified = true;
					HX_STACK_LINE(366)
					(this->length)--;
					HX_STACK_LINE(366)
					this->pushmod = true;
					HX_STACK_LINE(366)
					ret1;
				}
				HX_STACK_LINE(366)
				ret = true;
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(366)
			pre = cur;
			HX_STACK_LINE(366)
			cur = cur->next;
		}
		HX_STACK_LINE(366)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,remove,(void))

bool ZNPList_ZPP_CbType_obj::try_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","try_remove",0xa711b888,"zpp_nape.util.ZNPList_ZPP_CbType.try_remove","zpp_nape/util/Lists.hx",368,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(377)
	::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(378)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(378)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(379)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(380)
	while((true)){
		HX_STACK_LINE(380)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		if ((tmp2)){
			HX_STACK_LINE(380)
			break;
		}
		HX_STACK_LINE(381)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		if ((tmp3)){
			HX_STACK_LINE(382)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			this->erase(tmp4);
			HX_STACK_LINE(383)
			ret = true;
			HX_STACK_LINE(384)
			break;
		}
		HX_STACK_LINE(386)
		pre = cur;
		HX_STACK_LINE(387)
		cur = cur->next;
	}
	HX_STACK_LINE(389)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,try_remove,return )

Void ZNPList_ZPP_CbType_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_remove",0x5bfbd3d8,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_remove","zpp_nape/util/Lists.hx",402,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(402)
		::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(402)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(402)
		::zpp_nape::util::ZNPNode_ZPP_CbType cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(402)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(402)
		while((true)){
			HX_STACK_LINE(402)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(402)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(402)
			if ((tmp2)){
				HX_STACK_LINE(402)
				break;
			}
			HX_STACK_LINE(402)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(402)
			if ((tmp3)){
				HX_STACK_LINE(402)
				{
					HX_STACK_LINE(402)
					::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(402)
					::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(402)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(402)
					if ((tmp4)){
						HX_STACK_LINE(402)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(402)
						old = tmp5;
						HX_STACK_LINE(402)
						ret1 = old->next;
						HX_STACK_LINE(402)
						this->head = ret1;
						HX_STACK_LINE(402)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(402)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(402)
						if ((tmp7)){
							HX_STACK_LINE(402)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(402)
						old = pre->next;
						HX_STACK_LINE(402)
						ret1 = old->next;
						HX_STACK_LINE(402)
						pre->next = ret1;
						HX_STACK_LINE(402)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(402)
						if ((tmp5)){
							HX_STACK_LINE(402)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(402)
						::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(402)
						o->elt = null();
						HX_STACK_LINE(402)
						::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(402)
						o->next = tmp5;
						HX_STACK_LINE(402)
						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
					}
					HX_STACK_LINE(402)
					this->modified = true;
					HX_STACK_LINE(402)
					(this->length)--;
					HX_STACK_LINE(402)
					this->pushmod = true;
					HX_STACK_LINE(402)
					ret1;
				}
				HX_STACK_LINE(402)
				ret = true;
				HX_STACK_LINE(402)
				break;
			}
			HX_STACK_LINE(402)
			pre = cur;
			HX_STACK_LINE(402)
			cur = cur->next;
		}
		HX_STACK_LINE(402)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_remove,(void))

bool ZNPList_ZPP_CbType_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_try_remove",0x5b3f439c,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_try_remove","zpp_nape/util/Lists.hx",406,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(415)
	::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(416)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(417)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(418)
	while((true)){
		HX_STACK_LINE(418)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(418)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		if ((tmp2)){
			HX_STACK_LINE(418)
			break;
		}
		HX_STACK_LINE(419)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		if ((tmp3)){
			HX_STACK_LINE(420)
			{
				HX_STACK_LINE(420)
				::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(420)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(420)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(420)
				if ((tmp4)){
					HX_STACK_LINE(420)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(420)
					old = tmp5;
					HX_STACK_LINE(420)
					ret1 = old->next;
					HX_STACK_LINE(420)
					this->head = ret1;
					HX_STACK_LINE(420)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(420)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(420)
					if ((tmp7)){
						HX_STACK_LINE(420)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(420)
					old = pre->next;
					HX_STACK_LINE(420)
					ret1 = old->next;
					HX_STACK_LINE(420)
					pre->next = ret1;
					HX_STACK_LINE(420)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(420)
					if ((tmp5)){
						HX_STACK_LINE(420)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(420)
					o->elt = null();
					HX_STACK_LINE(420)
					::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(420)
					o->next = tmp5;
					HX_STACK_LINE(420)
					::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
				}
				HX_STACK_LINE(420)
				this->modified = true;
				HX_STACK_LINE(420)
				(this->length)--;
				HX_STACK_LINE(420)
				this->pushmod = true;
				HX_STACK_LINE(420)
				ret1;
			}
			HX_STACK_LINE(421)
			ret = true;
			HX_STACK_LINE(422)
			break;
		}
		HX_STACK_LINE(424)
		pre = cur;
		HX_STACK_LINE(425)
		cur = cur->next;
	}
	HX_STACK_LINE(427)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(427)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CbType pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","erase",0x77ff7266,"zpp_nape.util.ZNPList_ZPP_CbType.erase","zpp_nape/util/Lists.hx",429,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(430)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(430)
		::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(430)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(430)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		if ((tmp1)){
			HX_STACK_LINE(430)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(430)
			old = tmp2;
			HX_STACK_LINE(430)
			ret = old->next;
			HX_STACK_LINE(430)
			this->head = ret;
			HX_STACK_LINE(430)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(430)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(430)
			if ((tmp4)){
				HX_STACK_LINE(430)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(430)
			old = pre->next;
			HX_STACK_LINE(430)
			ret = old->next;
			HX_STACK_LINE(430)
			pre->next = ret;
			HX_STACK_LINE(430)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(430)
			if ((tmp2)){
				HX_STACK_LINE(430)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(430)
			o->elt = null();
			HX_STACK_LINE(430)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(430)
			o->next = tmp2;
			HX_STACK_LINE(430)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
		}
		HX_STACK_LINE(430)
		this->modified = true;
		HX_STACK_LINE(430)
		(this->length)--;
		HX_STACK_LINE(430)
		this->pushmod = true;
		HX_STACK_LINE(430)
		tmp = ret;
	}
	HX_STACK_LINE(430)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbType pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_erase",0x5b65bfd2,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_erase","zpp_nape/util/Lists.hx",434,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(443)
	::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(444)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(445)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(445)
	if ((tmp)){
		HX_STACK_LINE(446)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		old = tmp1;
		HX_STACK_LINE(447)
		ret = old->next;
		HX_STACK_LINE(448)
		this->head = ret;
		HX_STACK_LINE(449)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(449)
		if ((tmp3)){
			HX_STACK_LINE(449)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(452)
		old = pre->next;
		HX_STACK_LINE(453)
		ret = old->next;
		HX_STACK_LINE(454)
		pre->next = ret;
		HX_STACK_LINE(455)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(455)
		if ((tmp1)){
			HX_STACK_LINE(455)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(458)
	{
		HX_STACK_LINE(459)
		::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(468)
		o->elt = null();
		HX_STACK_LINE(469)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(469)
		o->next = tmp1;
		HX_STACK_LINE(470)
		::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
	}
	HX_STACK_LINE(475)
	this->modified = true;
	HX_STACK_LINE(476)
	(this->length)--;
	HX_STACK_LINE(477)
	this->pushmod = true;
	HX_STACK_LINE(478)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(478)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CbType pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","splice",0x00f44bfc,"zpp_nape.util.ZNPList_ZPP_CbType.splice","zpp_nape/util/Lists.hx",480,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(481)
	while((true)){
		HX_STACK_LINE(481)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		if ((tmp1)){
			HX_STACK_LINE(481)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(481)
			tmp2 = false;
		}
		HX_STACK_LINE(481)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		if ((tmp3)){
			HX_STACK_LINE(481)
			break;
		}
		HX_STACK_LINE(481)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(481)
		this->erase(tmp4);
	}
	HX_STACK_LINE(482)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,splice,return )

Void ZNPList_ZPP_CbType_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","clear",0x4d3dfb0d,"zpp_nape.util.ZNPList_ZPP_CbType.clear","zpp_nape/util/Lists.hx",485,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(485)
		while((true)){
			HX_STACK_LINE(485)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(485)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(485)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(485)
			if ((tmp3)){
				HX_STACK_LINE(485)
				break;
			}
			HX_STACK_LINE(485)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(485)
			::zpp_nape::util::ZNPNode_ZPP_CbType ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(485)
			this->head = ret->next;
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(485)
				o->elt = null();
				HX_STACK_LINE(485)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(485)
				o->next = tmp5;
				HX_STACK_LINE(485)
				::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
			}
			HX_STACK_LINE(485)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(485)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(485)
			if ((tmp6)){
				HX_STACK_LINE(485)
				this->pushmod = true;
			}
			HX_STACK_LINE(485)
			this->modified = true;
			HX_STACK_LINE(485)
			(this->length)--;
		}
		HX_STACK_LINE(485)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,clear,(void))

Void ZNPList_ZPP_CbType_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_clear",0x30a44879,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_clear","zpp_nape/util/Lists.hx",490,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(491)
		while((true)){
			HX_STACK_LINE(491)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(491)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(491)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(491)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(491)
			if ((tmp3)){
				HX_STACK_LINE(491)
				break;
			}
			HX_STACK_LINE(491)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(491)
			::zpp_nape::util::ZNPNode_ZPP_CbType ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(491)
			this->head = ret->next;
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(491)
				o->elt = null();
				HX_STACK_LINE(491)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(491)
				o->next = tmp5;
				HX_STACK_LINE(491)
				::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
			}
			HX_STACK_LINE(491)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(491)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(491)
			if ((tmp6)){
				HX_STACK_LINE(491)
				this->pushmod = true;
			}
			HX_STACK_LINE(491)
			this->modified = true;
			HX_STACK_LINE(491)
			(this->length)--;
		}
		HX_STACK_LINE(492)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_clear,(void))

Void ZNPList_ZPP_CbType_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","reverse",0x04b422a2,"zpp_nape.util.ZNPList_ZPP_CbType.reverse","zpp_nape/util/Lists.hx",495,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(496)
		::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		::zpp_nape::util::ZNPNode_ZPP_CbType cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(497)
		::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(498)
		while((true)){
			HX_STACK_LINE(498)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(498)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(498)
			if ((tmp2)){
				HX_STACK_LINE(498)
				break;
			}
			HX_STACK_LINE(499)
			::zpp_nape::util::ZNPNode_ZPP_CbType nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(500)
			cur->next = pre;
			HX_STACK_LINE(501)
			this->head = cur;
			HX_STACK_LINE(502)
			pre = cur;
			HX_STACK_LINE(503)
			cur = nx;
		}
		HX_STACK_LINE(505)
		this->modified = true;
		HX_STACK_LINE(506)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,reverse,(void))

bool ZNPList_ZPP_CbType_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","empty",0x74bcc40d,"zpp_nape.util.ZNPList_ZPP_CbType.empty","zpp_nape/util/Lists.hx",510,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(511)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(511)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(511)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,empty,return )

int ZNPList_ZPP_CbType_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","size",0xdab2c741,"zpp_nape.util.ZNPList_ZPP_CbType.size","zpp_nape/util/Lists.hx",515,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(516)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,size,return )

bool ZNPList_ZPP_CbType_obj::has( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","has",0x527468da,"zpp_nape.util.ZNPList_ZPP_CbType.has","zpp_nape/util/Lists.hx",518,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(519)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(519)
	{
		HX_STACK_LINE(519)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			ret = false;
			HX_STACK_LINE(519)
			{
				HX_STACK_LINE(519)
				::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(519)
				::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(519)
				while((true)){
					HX_STACK_LINE(519)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(519)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(519)
					if ((tmp3)){
						HX_STACK_LINE(519)
						break;
					}
					HX_STACK_LINE(519)
					::zpp_nape::callbacks::ZPP_CbType npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(519)
					{
						HX_STACK_LINE(519)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(519)
						if ((tmp4)){
							HX_STACK_LINE(519)
							ret = true;
							HX_STACK_LINE(519)
							break;
						}
					}
					HX_STACK_LINE(519)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(519)
		tmp = ret;
	}
	HX_STACK_LINE(519)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,has,return )

bool ZNPList_ZPP_CbType_obj::inlined_has( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","inlined_has",0xa3de4346,"zpp_nape.util.ZNPList_ZPP_CbType.inlined_has","zpp_nape/util/Lists.hx",523,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(532)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(534)
		ret = false;
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(536)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(536)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(537)
			while((true)){
				HX_STACK_LINE(537)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(537)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(537)
				if ((tmp2)){
					HX_STACK_LINE(537)
					break;
				}
				HX_STACK_LINE(538)
				::zpp_nape::callbacks::ZPP_CbType npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(539)
				{
					HX_STACK_LINE(540)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(540)
					if ((tmp3)){
						HX_STACK_LINE(541)
						ret = true;
						HX_STACK_LINE(542)
						break;
					}
				}
				HX_STACK_LINE(545)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(549)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","front",0x0b70a229,"zpp_nape.util.ZNPList_ZPP_CbType.front","zpp_nape/util/Lists.hx",553,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(554)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(554)
	::zpp_nape::callbacks::ZPP_CbType tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(554)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,front,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","back",0xcf7000a7,"zpp_nape.util.ZNPList_ZPP_CbType.back","zpp_nape/util/Lists.hx",556,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(557)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(558)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(559)
	while((true)){
		HX_STACK_LINE(559)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(559)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(559)
		if ((tmp2)){
			HX_STACK_LINE(559)
			break;
		}
		HX_STACK_LINE(560)
		ret = cur;
		HX_STACK_LINE(561)
		cur = cur->next;
	}
	HX_STACK_LINE(563)
	::zpp_nape::callbacks::ZPP_CbType tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(563)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","iterator_at",0xa87d3364,"zpp_nape.util.ZNPList_ZPP_CbType.iterator_at","zpp_nape/util/Lists.hx",565,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(574)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(575)
	while((true)){
		HX_STACK_LINE(575)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(575)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(575)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(575)
		if ((tmp2)){
			HX_STACK_LINE(575)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(575)
			tmp3 = false;
		}
		HX_STACK_LINE(575)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(575)
		if ((tmp4)){
			HX_STACK_LINE(575)
			break;
		}
		HX_STACK_LINE(575)
		ret = ret->next;
	}
	HX_STACK_LINE(576)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(576)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CbType","at",0x7450db73,"zpp_nape.util.ZNPList_ZPP_CbType.at","zpp_nape/util/Lists.hx",578,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(587)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	::zpp_nape::util::ZNPNode_ZPP_CbType tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(587)
	::zpp_nape::util::ZNPNode_ZPP_CbType it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(588)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(588)
	::zpp_nape::callbacks::ZPP_CbType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(588)
	if ((tmp2)){
		HX_STACK_LINE(588)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(588)
		tmp3 = null();
	}
	HX_STACK_LINE(588)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,at,return )


ZNPList_ZPP_CbType_obj::ZNPList_ZPP_CbType_obj()
{
}

void ZNPList_ZPP_CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CbType);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_CbType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPList_ZPP_CbType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_CbType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CbType*/ ,(int)offsetof(ZNPList_ZPP_CbType_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CbType_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CbType_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_CbType_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"),
	HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("setbegin","\x47","\xe3","\x5c","\x2b"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("inlined_add","\x8d","\x4c","\x2e","\x02"),
	HX_HCSTRING("addAll","\x80","\x09","\xfb","\x9e"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("inlined_insert","\x4d","\x34","\x10","\xa7"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("inlined_pop","\xfd","\xb7","\x39","\x02"),
	HX_HCSTRING("pop_unsafe","\x54","\x7c","\xec","\x75"),
	HX_HCSTRING("inlined_pop_unsafe","\x68","\x87","\xef","\x15"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("try_remove","\x08","\xb2","\x16","\x8d"),
	HX_HCSTRING("inlined_remove","\x58","\x8d","\xbb","\x0d"),
	HX_HCSTRING("inlined_try_remove","\x1c","\xbd","\x19","\x2d"),
	HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"),
	HX_HCSTRING("inlined_erase","\x52","\xb6","\x9d","\xfa"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("inlined_clear","\xf9","\x3e","\xdc","\xcf"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("inlined_has","\xc6","\x99","\x33","\x02"),
	HX_HCSTRING("front","\xa9","\x18","\x8e","\x06"),
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("iterator_at","\xe4","\x89","\xd2","\x06"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CbType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CbType_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_CbType_obj::__mClass;

void ZNPList_ZPP_CbType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_CbType","\xee","\xc9","\xc6","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_CbType_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_CbType_obj >;
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
} // end namespace util
