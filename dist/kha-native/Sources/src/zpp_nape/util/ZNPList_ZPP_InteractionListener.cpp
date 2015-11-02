#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_InteractionListener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","new",0x848f65c3,"zpp_nape.util.ZNPList_ZPP_InteractionListener.new","zpp_nape/util/Lists.hx",2677,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(2687)
	this->length = (int)0;
	HX_STACK_LINE(2686)
	this->pushmod = false;
	HX_STACK_LINE(2685)
	this->modified = false;
	HX_STACK_LINE(2678)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_InteractionListener_obj::~ZNPList_ZPP_InteractionListener_obj() { }

Dynamic ZNPList_ZPP_InteractionListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_InteractionListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > ZNPList_ZPP_InteractionListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > _result_ = new ZNPList_ZPP_InteractionListener_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > _result_ = new ZNPList_ZPP_InteractionListener_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","begin",0x6aabde4c,"zpp_nape.util.ZNPList_ZPP_InteractionListener.begin","zpp_nape/util/Lists.hx",2682,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2683)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2683)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,begin,return )

Void ZNPList_ZPP_InteractionListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","setbegin",0x3359e704,"zpp_nape.util.ZNPList_ZPP_InteractionListener.setbegin","zpp_nape/util/Lists.hx",2690,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(2691)
		this->head = i;
		HX_STACK_LINE(2692)
		this->modified = true;
		HX_STACK_LINE(2693)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::add( ::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","add",0x84858784,"zpp_nape.util.ZNPList_ZPP_InteractionListener.add","zpp_nape/util/Lists.hx",2695,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2696)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2696)
	{
		HX_STACK_LINE(2696)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2696)
		{
			HX_STACK_LINE(2696)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2696)
			{
				HX_STACK_LINE(2696)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2696)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2696)
				if ((tmp3)){
					HX_STACK_LINE(2696)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2696)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(2696)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2696)
					ret = tmp4;
					HX_STACK_LINE(2696)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(2696)
					ret->next = null();
				}
				HX_STACK_LINE(2696)
				Dynamic();
			}
			HX_STACK_LINE(2696)
			ret->elt = o;
			HX_STACK_LINE(2696)
			tmp1 = ret;
		}
		HX_STACK_LINE(2696)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(2696)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2696)
		temp->next = tmp2;
		HX_STACK_LINE(2696)
		this->head = temp;
		HX_STACK_LINE(2696)
		this->modified = true;
		HX_STACK_LINE(2696)
		(this->length)++;
		HX_STACK_LINE(2696)
		tmp = o;
	}
	HX_STACK_LINE(2696)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,add,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_add",0xcee27cf0,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_add","zpp_nape/util/Lists.hx",2700,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2709)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2709)
	{
		HX_STACK_LINE(2710)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2711)
		{
			HX_STACK_LINE(2712)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2712)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2712)
			if ((tmp2)){
				HX_STACK_LINE(2713)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2713)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(2719)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2719)
				ret = tmp3;
				HX_STACK_LINE(2720)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2721)
				ret->next = null();
			}
			HX_STACK_LINE(2726)
			Dynamic();
		}
		HX_STACK_LINE(2728)
		ret->elt = o;
		HX_STACK_LINE(2729)
		tmp = ret;
	}
	HX_STACK_LINE(2709)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2731)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2731)
	temp->next = tmp1;
	HX_STACK_LINE(2732)
	this->head = temp;
	HX_STACK_LINE(2733)
	this->modified = true;
	HX_STACK_LINE(2734)
	(this->length)++;
	HX_STACK_LINE(2735)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2735)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_add,return )

Void ZNPList_ZPP_InteractionListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_InteractionListener x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","addAll",0xefdab3fd,"zpp_nape.util.ZNPList_ZPP_InteractionListener.addAll","zpp_nape/util/Lists.hx",2746,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(2747)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2748)
		while((true)){
			HX_STACK_LINE(2748)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2748)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2748)
			if ((tmp1)){
				HX_STACK_LINE(2748)
				break;
			}
			HX_STACK_LINE(2749)
			::zpp_nape::callbacks::ZPP_InteractionListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2750)
			::zpp_nape::callbacks::ZPP_InteractionListener tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2750)
			this->add(tmp2);
			HX_STACK_LINE(2751)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur,::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","insert",0xeebcedb6,"zpp_nape.util.ZNPList_ZPP_InteractionListener.insert","zpp_nape/util/Lists.hx",2755,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2756)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2756)
	{
		HX_STACK_LINE(2756)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2756)
		{
			HX_STACK_LINE(2756)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2756)
			{
				HX_STACK_LINE(2756)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2756)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2756)
				if ((tmp3)){
					HX_STACK_LINE(2756)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2756)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(2756)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2756)
					ret = tmp4;
					HX_STACK_LINE(2756)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(2756)
					ret->next = null();
				}
				HX_STACK_LINE(2756)
				Dynamic();
			}
			HX_STACK_LINE(2756)
			ret->elt = o;
			HX_STACK_LINE(2756)
			tmp1 = ret;
		}
		HX_STACK_LINE(2756)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(2756)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2756)
		if ((tmp2)){
			HX_STACK_LINE(2756)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2756)
			temp->next = tmp3;
			HX_STACK_LINE(2756)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(2756)
			temp->next = cur->next;
			HX_STACK_LINE(2756)
			cur->next = temp;
		}
		HX_STACK_LINE(2756)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2756)
		this->pushmod = tmp3;
		HX_STACK_LINE(2756)
		(this->length)++;
		HX_STACK_LINE(2756)
		tmp = temp;
	}
	HX_STACK_LINE(2756)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur,::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_insert",0xbe8a23ca,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_insert","zpp_nape/util/Lists.hx",2760,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2769)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2769)
	{
		HX_STACK_LINE(2770)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2771)
		{
			HX_STACK_LINE(2772)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2772)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2772)
			if ((tmp2)){
				HX_STACK_LINE(2773)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2773)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(2779)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2779)
				ret = tmp3;
				HX_STACK_LINE(2780)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2781)
				ret->next = null();
			}
			HX_STACK_LINE(2786)
			Dynamic();
		}
		HX_STACK_LINE(2788)
		ret->elt = o;
		HX_STACK_LINE(2789)
		tmp = ret;
	}
	HX_STACK_LINE(2769)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2791)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2791)
	if ((tmp1)){
		HX_STACK_LINE(2792)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2792)
		temp->next = tmp2;
		HX_STACK_LINE(2793)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(2796)
		temp->next = cur->next;
		HX_STACK_LINE(2797)
		cur->next = temp;
	}
	HX_STACK_LINE(2799)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2799)
	this->pushmod = tmp2;
	HX_STACK_LINE(2800)
	(this->length)++;
	HX_STACK_LINE(2801)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2801)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,inlined_insert,return )

Void ZNPList_ZPP_InteractionListener_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","pop",0x8490f2f4,"zpp_nape.util.ZNPList_ZPP_InteractionListener.pop","zpp_nape/util/Lists.hx",2804,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2804)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2804)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2804)
		this->head = ret->next;
		HX_STACK_LINE(2804)
		{
			HX_STACK_LINE(2804)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2804)
			o->elt = null();
			HX_STACK_LINE(2804)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2804)
			o->next = tmp1;
			HX_STACK_LINE(2804)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2804)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2804)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2804)
		if ((tmp2)){
			HX_STACK_LINE(2804)
			this->pushmod = true;
		}
		HX_STACK_LINE(2804)
		this->modified = true;
		HX_STACK_LINE(2804)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,pop,(void))

Void ZNPList_ZPP_InteractionListener_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_pop",0xceede860,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_pop","zpp_nape/util/Lists.hx",2808,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2817)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2817)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2818)
		this->head = ret->next;
		HX_STACK_LINE(2820)
		{
			HX_STACK_LINE(2821)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2830)
			o->elt = null();
			HX_STACK_LINE(2831)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2831)
			o->next = tmp1;
			HX_STACK_LINE(2832)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2837)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2837)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2837)
		if ((tmp2)){
			HX_STACK_LINE(2837)
			this->pushmod = true;
		}
		HX_STACK_LINE(2838)
		this->modified = true;
		HX_STACK_LINE(2839)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","pop_unsafe",0x39ffa951,"zpp_nape.util.ZNPList_ZPP_InteractionListener.pop_unsafe","zpp_nape/util/Lists.hx",2841,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2842)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2842)
	{
		HX_STACK_LINE(2842)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2842)
		::zpp_nape::callbacks::ZPP_InteractionListener ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2842)
		this->pop();
		HX_STACK_LINE(2842)
		tmp = ret;
	}
	HX_STACK_LINE(2842)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_pop_unsafe",0x9ba37965,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_pop_unsafe","zpp_nape/util/Lists.hx",2846,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2855)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2855)
	::zpp_nape::callbacks::ZPP_InteractionListener ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2856)
	this->pop();
	HX_STACK_LINE(2857)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2857)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_InteractionListener_obj::remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","remove",0x556846c1,"zpp_nape.util.ZNPList_ZPP_InteractionListener.remove","zpp_nape/util/Lists.hx",2868,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2868)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2868)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2868)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2868)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2868)
		while((true)){
			HX_STACK_LINE(2868)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2868)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2868)
			if ((tmp2)){
				HX_STACK_LINE(2868)
				break;
			}
			HX_STACK_LINE(2868)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2868)
			if ((tmp3)){
				HX_STACK_LINE(2868)
				{
					HX_STACK_LINE(2868)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2868)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2868)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2868)
					if ((tmp4)){
						HX_STACK_LINE(2868)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2868)
						old = tmp5;
						HX_STACK_LINE(2868)
						ret1 = old->next;
						HX_STACK_LINE(2868)
						this->head = ret1;
						HX_STACK_LINE(2868)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2868)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2868)
						if ((tmp7)){
							HX_STACK_LINE(2868)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2868)
						old = pre->next;
						HX_STACK_LINE(2868)
						ret1 = old->next;
						HX_STACK_LINE(2868)
						pre->next = ret1;
						HX_STACK_LINE(2868)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2868)
						if ((tmp5)){
							HX_STACK_LINE(2868)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2868)
					{
						HX_STACK_LINE(2868)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2868)
						o->elt = null();
						HX_STACK_LINE(2868)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2868)
						o->next = tmp5;
						HX_STACK_LINE(2868)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2868)
					this->modified = true;
					HX_STACK_LINE(2868)
					(this->length)--;
					HX_STACK_LINE(2868)
					this->pushmod = true;
					HX_STACK_LINE(2868)
					ret1;
				}
				HX_STACK_LINE(2868)
				ret = true;
				HX_STACK_LINE(2868)
				break;
			}
			HX_STACK_LINE(2868)
			pre = cur;
			HX_STACK_LINE(2868)
			cur = cur->next;
		}
		HX_STACK_LINE(2868)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,remove,(void))

bool ZNPList_ZPP_InteractionListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","try_remove",0x5129df05,"zpp_nape.util.ZNPList_ZPP_InteractionListener.try_remove","zpp_nape/util/Lists.hx",2870,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2879)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2880)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2880)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2881)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2882)
	while((true)){
		HX_STACK_LINE(2882)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2882)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2882)
		if ((tmp2)){
			HX_STACK_LINE(2882)
			break;
		}
		HX_STACK_LINE(2883)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2883)
		if ((tmp3)){
			HX_STACK_LINE(2884)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2884)
			this->erase(tmp4);
			HX_STACK_LINE(2885)
			ret = true;
			HX_STACK_LINE(2886)
			break;
		}
		HX_STACK_LINE(2888)
		pre = cur;
		HX_STACK_LINE(2889)
		cur = cur->next;
	}
	HX_STACK_LINE(2891)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2891)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,try_remove,return )

Void ZNPList_ZPP_InteractionListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_remove",0x25357cd5,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_remove","zpp_nape/util/Lists.hx",2904,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2904)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2904)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2904)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2904)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2904)
		while((true)){
			HX_STACK_LINE(2904)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2904)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2904)
			if ((tmp2)){
				HX_STACK_LINE(2904)
				break;
			}
			HX_STACK_LINE(2904)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2904)
			if ((tmp3)){
				HX_STACK_LINE(2904)
				{
					HX_STACK_LINE(2904)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2904)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2904)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2904)
					if ((tmp4)){
						HX_STACK_LINE(2904)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2904)
						old = tmp5;
						HX_STACK_LINE(2904)
						ret1 = old->next;
						HX_STACK_LINE(2904)
						this->head = ret1;
						HX_STACK_LINE(2904)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2904)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2904)
						if ((tmp7)){
							HX_STACK_LINE(2904)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2904)
						old = pre->next;
						HX_STACK_LINE(2904)
						ret1 = old->next;
						HX_STACK_LINE(2904)
						pre->next = ret1;
						HX_STACK_LINE(2904)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2904)
						if ((tmp5)){
							HX_STACK_LINE(2904)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2904)
					{
						HX_STACK_LINE(2904)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2904)
						o->elt = null();
						HX_STACK_LINE(2904)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2904)
						o->next = tmp5;
						HX_STACK_LINE(2904)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2904)
					this->modified = true;
					HX_STACK_LINE(2904)
					(this->length)--;
					HX_STACK_LINE(2904)
					this->pushmod = true;
					HX_STACK_LINE(2904)
					ret1;
				}
				HX_STACK_LINE(2904)
				ret = true;
				HX_STACK_LINE(2904)
				break;
			}
			HX_STACK_LINE(2904)
			pre = cur;
			HX_STACK_LINE(2904)
			cur = cur->next;
		}
		HX_STACK_LINE(2904)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_InteractionListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_try_remove",0xb2cdaf19,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_try_remove","zpp_nape/util/Lists.hx",2908,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2917)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2918)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2918)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2919)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2920)
	while((true)){
		HX_STACK_LINE(2920)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2920)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2920)
		if ((tmp2)){
			HX_STACK_LINE(2920)
			break;
		}
		HX_STACK_LINE(2921)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2921)
		if ((tmp3)){
			HX_STACK_LINE(2922)
			{
				HX_STACK_LINE(2922)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2922)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(2922)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2922)
				if ((tmp4)){
					HX_STACK_LINE(2922)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2922)
					old = tmp5;
					HX_STACK_LINE(2922)
					ret1 = old->next;
					HX_STACK_LINE(2922)
					this->head = ret1;
					HX_STACK_LINE(2922)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2922)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2922)
					if ((tmp7)){
						HX_STACK_LINE(2922)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2922)
					old = pre->next;
					HX_STACK_LINE(2922)
					ret1 = old->next;
					HX_STACK_LINE(2922)
					pre->next = ret1;
					HX_STACK_LINE(2922)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2922)
					if ((tmp5)){
						HX_STACK_LINE(2922)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(2922)
				{
					HX_STACK_LINE(2922)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2922)
					o->elt = null();
					HX_STACK_LINE(2922)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2922)
					o->next = tmp5;
					HX_STACK_LINE(2922)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2922)
				this->modified = true;
				HX_STACK_LINE(2922)
				(this->length)--;
				HX_STACK_LINE(2922)
				this->pushmod = true;
				HX_STACK_LINE(2922)
				ret1;
			}
			HX_STACK_LINE(2923)
			ret = true;
			HX_STACK_LINE(2924)
			break;
		}
		HX_STACK_LINE(2926)
		pre = cur;
		HX_STACK_LINE(2927)
		cur = cur->next;
	}
	HX_STACK_LINE(2929)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2929)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","erase",0x2d72dd09,"zpp_nape.util.ZNPList_ZPP_InteractionListener.erase","zpp_nape/util/Lists.hx",2931,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(2932)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2932)
	{
		HX_STACK_LINE(2932)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(2932)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2932)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2932)
		if ((tmp1)){
			HX_STACK_LINE(2932)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2932)
			old = tmp2;
			HX_STACK_LINE(2932)
			ret = old->next;
			HX_STACK_LINE(2932)
			this->head = ret;
			HX_STACK_LINE(2932)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2932)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2932)
			if ((tmp4)){
				HX_STACK_LINE(2932)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(2932)
			old = pre->next;
			HX_STACK_LINE(2932)
			ret = old->next;
			HX_STACK_LINE(2932)
			pre->next = ret;
			HX_STACK_LINE(2932)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2932)
			if ((tmp2)){
				HX_STACK_LINE(2932)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(2932)
		{
			HX_STACK_LINE(2932)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2932)
			o->elt = null();
			HX_STACK_LINE(2932)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2932)
			o->next = tmp2;
			HX_STACK_LINE(2932)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2932)
		this->modified = true;
		HX_STACK_LINE(2932)
		(this->length)--;
		HX_STACK_LINE(2932)
		this->pushmod = true;
		HX_STACK_LINE(2932)
		tmp = ret;
	}
	HX_STACK_LINE(2932)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_erase",0x81090575,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_erase","zpp_nape/util/Lists.hx",2936,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(2945)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2946)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2947)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2947)
	if ((tmp)){
		HX_STACK_LINE(2948)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2948)
		old = tmp1;
		HX_STACK_LINE(2949)
		ret = old->next;
		HX_STACK_LINE(2950)
		this->head = ret;
		HX_STACK_LINE(2951)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2951)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2951)
		if ((tmp3)){
			HX_STACK_LINE(2951)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2954)
		old = pre->next;
		HX_STACK_LINE(2955)
		ret = old->next;
		HX_STACK_LINE(2956)
		pre->next = ret;
		HX_STACK_LINE(2957)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2957)
		if ((tmp1)){
			HX_STACK_LINE(2957)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2960)
	{
		HX_STACK_LINE(2961)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2970)
		o->elt = null();
		HX_STACK_LINE(2971)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2971)
		o->next = tmp1;
		HX_STACK_LINE(2972)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2977)
	this->modified = true;
	HX_STACK_LINE(2978)
	(this->length)--;
	HX_STACK_LINE(2979)
	this->pushmod = true;
	HX_STACK_LINE(2980)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2980)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","splice",0x107e2ff9,"zpp_nape.util.ZNPList_ZPP_InteractionListener.splice","zpp_nape/util/Lists.hx",2982,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(2983)
	while((true)){
		HX_STACK_LINE(2983)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2983)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2983)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2983)
		if ((tmp1)){
			HX_STACK_LINE(2983)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(2983)
			tmp2 = false;
		}
		HX_STACK_LINE(2983)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2983)
		if ((tmp3)){
			HX_STACK_LINE(2983)
			break;
		}
		HX_STACK_LINE(2983)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2983)
		this->erase(tmp4);
	}
	HX_STACK_LINE(2984)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2984)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,splice,return )

Void ZNPList_ZPP_InteractionListener_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","clear",0x02b165b0,"zpp_nape.util.ZNPList_ZPP_InteractionListener.clear","zpp_nape/util/Lists.hx",2987,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2987)
		while((true)){
			HX_STACK_LINE(2987)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2987)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2987)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2987)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2987)
			if ((tmp3)){
				HX_STACK_LINE(2987)
				break;
			}
			HX_STACK_LINE(2987)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2987)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2987)
			this->head = ret->next;
			HX_STACK_LINE(2987)
			{
				HX_STACK_LINE(2987)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2987)
				o->elt = null();
				HX_STACK_LINE(2987)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2987)
				o->next = tmp5;
				HX_STACK_LINE(2987)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2987)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2987)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2987)
			if ((tmp6)){
				HX_STACK_LINE(2987)
				this->pushmod = true;
			}
			HX_STACK_LINE(2987)
			this->modified = true;
			HX_STACK_LINE(2987)
			(this->length)--;
		}
		HX_STACK_LINE(2987)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,clear,(void))

Void ZNPList_ZPP_InteractionListener_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_clear",0x56478e1c,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_clear","zpp_nape/util/Lists.hx",2992,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2993)
		while((true)){
			HX_STACK_LINE(2993)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2993)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2993)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2993)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2993)
			if ((tmp3)){
				HX_STACK_LINE(2993)
				break;
			}
			HX_STACK_LINE(2993)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2993)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2993)
			this->head = ret->next;
			HX_STACK_LINE(2993)
			{
				HX_STACK_LINE(2993)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2993)
				o->elt = null();
				HX_STACK_LINE(2993)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2993)
				o->next = tmp5;
				HX_STACK_LINE(2993)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2993)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2993)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2993)
			if ((tmp6)){
				HX_STACK_LINE(2993)
				this->pushmod = true;
			}
			HX_STACK_LINE(2993)
			this->modified = true;
			HX_STACK_LINE(2993)
			(this->length)--;
		}
		HX_STACK_LINE(2994)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_InteractionListener_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","reverse",0x8dd1bc05,"zpp_nape.util.ZNPList_ZPP_InteractionListener.reverse","zpp_nape/util/Lists.hx",2997,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2998)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2998)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2999)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3000)
		while((true)){
			HX_STACK_LINE(3000)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3000)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3000)
			if ((tmp2)){
				HX_STACK_LINE(3000)
				break;
			}
			HX_STACK_LINE(3001)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3002)
			cur->next = pre;
			HX_STACK_LINE(3003)
			this->head = cur;
			HX_STACK_LINE(3004)
			pre = cur;
			HX_STACK_LINE(3005)
			cur = nx;
		}
		HX_STACK_LINE(3007)
		this->modified = true;
		HX_STACK_LINE(3008)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,reverse,(void))

bool ZNPList_ZPP_InteractionListener_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","empty",0x2a302eb0,"zpp_nape.util.ZNPList_ZPP_InteractionListener.empty","zpp_nape/util/Lists.hx",3012,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3013)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3013)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3013)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,empty,return )

int ZNPList_ZPP_InteractionListener_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","size",0x7c3ac1fe,"zpp_nape.util.ZNPList_ZPP_InteractionListener.size","zpp_nape/util/Lists.hx",3017,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3018)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3018)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,size,return )

bool ZNPList_ZPP_InteractionListener_obj::has( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","has",0x848ad4bd,"zpp_nape.util.ZNPList_ZPP_InteractionListener.has","zpp_nape/util/Lists.hx",3020,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3021)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3021)
	{
		HX_STACK_LINE(3021)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3021)
		{
			HX_STACK_LINE(3021)
			ret = false;
			HX_STACK_LINE(3021)
			{
				HX_STACK_LINE(3021)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(3021)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(3021)
				while((true)){
					HX_STACK_LINE(3021)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(3021)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(3021)
					if ((tmp3)){
						HX_STACK_LINE(3021)
						break;
					}
					HX_STACK_LINE(3021)
					::zpp_nape::callbacks::ZPP_InteractionListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(3021)
					{
						HX_STACK_LINE(3021)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(3021)
						if ((tmp4)){
							HX_STACK_LINE(3021)
							ret = true;
							HX_STACK_LINE(3021)
							break;
						}
					}
					HX_STACK_LINE(3021)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(3021)
		tmp = ret;
	}
	HX_STACK_LINE(3021)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,has,return )

bool ZNPList_ZPP_InteractionListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_has",0xcee7ca29,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_has","zpp_nape/util/Lists.hx",3025,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3034)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3035)
	{
		HX_STACK_LINE(3036)
		ret = false;
		HX_STACK_LINE(3037)
		{
			HX_STACK_LINE(3038)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3038)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3039)
			while((true)){
				HX_STACK_LINE(3039)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(3039)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3039)
				if ((tmp2)){
					HX_STACK_LINE(3039)
					break;
				}
				HX_STACK_LINE(3040)
				::zpp_nape::callbacks::ZPP_InteractionListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3041)
				{
					HX_STACK_LINE(3042)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(3042)
					if ((tmp3)){
						HX_STACK_LINE(3043)
						ret = true;
						HX_STACK_LINE(3044)
						break;
					}
				}
				HX_STACK_LINE(3047)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3051)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3051)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","front",0xc0e40ccc,"zpp_nape.util.ZNPList_ZPP_InteractionListener.front","zpp_nape/util/Lists.hx",3055,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3056)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3056)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3056)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,front,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","back",0x70f7fb64,"zpp_nape.util.ZNPList_ZPP_InteractionListener.back","zpp_nape/util/Lists.hx",3058,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3059)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3059)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3060)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3061)
	while((true)){
		HX_STACK_LINE(3061)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3061)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3061)
		if ((tmp2)){
			HX_STACK_LINE(3061)
			break;
		}
		HX_STACK_LINE(3062)
		ret = cur;
		HX_STACK_LINE(3063)
		cur = cur->next;
	}
	HX_STACK_LINE(3065)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3065)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","iterator_at",0xd386ba47,"zpp_nape.util.ZNPList_ZPP_InteractionListener.iterator_at","zpp_nape/util/Lists.hx",3067,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(3076)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3076)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3077)
	while((true)){
		HX_STACK_LINE(3077)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3077)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3077)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3077)
		if ((tmp2)){
			HX_STACK_LINE(3077)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(3077)
			tmp3 = false;
		}
		HX_STACK_LINE(3077)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3077)
		if ((tmp4)){
			HX_STACK_LINE(3077)
			break;
		}
		HX_STACK_LINE(3077)
		ret = ret->next;
	}
	HX_STACK_LINE(3078)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3078)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","at",0x533fbcf0,"zpp_nape.util.ZNPList_ZPP_InteractionListener.at","zpp_nape/util/Lists.hx",3080,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(3089)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3089)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3089)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(3090)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3090)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(3090)
	if ((tmp2)){
		HX_STACK_LINE(3090)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(3090)
		tmp3 = null();
	}
	HX_STACK_LINE(3090)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,at,return )


ZNPList_ZPP_InteractionListener_obj::ZNPList_ZPP_InteractionListener_obj()
{
}

void ZNPList_ZPP_InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_InteractionListener);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_InteractionListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_InteractionListener >(); return inValue; }
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

bool ZNPList_ZPP_InteractionListener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_InteractionListener*/ ,(int)offsetof(ZNPList_ZPP_InteractionListener_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_InteractionListener_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_InteractionListener_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_InteractionListener_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_InteractionListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_InteractionListener_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_InteractionListener_obj::__mClass;

void ZNPList_ZPP_InteractionListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_InteractionListener","\x51","\xc8","\x5a","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_InteractionListener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_InteractionListener_obj >;
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
