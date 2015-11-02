#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_BodyListener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","new",0x6caada5d,"zpp_nape.util.ZNPList_ZPP_BodyListener.new","zpp_nape/util/Lists.hx",3928,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(3938)
	this->length = (int)0;
	HX_STACK_LINE(3937)
	this->pushmod = false;
	HX_STACK_LINE(3936)
	this->modified = false;
	HX_STACK_LINE(3929)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_BodyListener_obj::~ZNPList_ZPP_BodyListener_obj() { }

Dynamic ZNPList_ZPP_BodyListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_BodyListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > ZNPList_ZPP_BodyListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > _result_ = new ZNPList_ZPP_BodyListener_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_BodyListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > _result_ = new ZNPList_ZPP_BodyListener_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","begin",0x28012d66,"zpp_nape.util.ZNPList_ZPP_BodyListener.begin","zpp_nape/util/Lists.hx",3933,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3934)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3934)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,begin,return )

Void ZNPList_ZPP_BodyListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_BodyListener i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","setbegin",0x022f842a,"zpp_nape.util.ZNPList_ZPP_BodyListener.setbegin","zpp_nape/util/Lists.hx",3941,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(3942)
		this->head = i;
		HX_STACK_LINE(3943)
		this->modified = true;
		HX_STACK_LINE(3944)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::add( ::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","add",0x6ca0fc1e,"zpp_nape.util.ZNPList_ZPP_BodyListener.add","zpp_nape/util/Lists.hx",3946,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3947)
	::zpp_nape::callbacks::ZPP_BodyListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3947)
	{
		HX_STACK_LINE(3947)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3947)
		{
			HX_STACK_LINE(3947)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3947)
			{
				HX_STACK_LINE(3947)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3947)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3947)
				if ((tmp3)){
					HX_STACK_LINE(3947)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3947)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(3947)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3947)
					ret = tmp4;
					HX_STACK_LINE(3947)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(3947)
					ret->next = null();
				}
				HX_STACK_LINE(3947)
				Dynamic();
			}
			HX_STACK_LINE(3947)
			ret->elt = o;
			HX_STACK_LINE(3947)
			tmp1 = ret;
		}
		HX_STACK_LINE(3947)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(3947)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3947)
		temp->next = tmp2;
		HX_STACK_LINE(3947)
		this->head = temp;
		HX_STACK_LINE(3947)
		this->modified = true;
		HX_STACK_LINE(3947)
		(this->length)++;
		HX_STACK_LINE(3947)
		tmp = o;
	}
	HX_STACK_LINE(3947)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,add,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_add",0x12cb1b8a,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_add","zpp_nape/util/Lists.hx",3951,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3960)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3960)
	{
		HX_STACK_LINE(3961)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3962)
		{
			HX_STACK_LINE(3963)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3963)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3963)
			if ((tmp2)){
				HX_STACK_LINE(3964)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3964)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(3970)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3970)
				ret = tmp3;
				HX_STACK_LINE(3971)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3972)
				ret->next = null();
			}
			HX_STACK_LINE(3977)
			Dynamic();
		}
		HX_STACK_LINE(3979)
		ret->elt = o;
		HX_STACK_LINE(3980)
		tmp = ret;
	}
	HX_STACK_LINE(3960)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3982)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3982)
	temp->next = tmp1;
	HX_STACK_LINE(3983)
	this->head = temp;
	HX_STACK_LINE(3984)
	this->modified = true;
	HX_STACK_LINE(3985)
	(this->length)++;
	HX_STACK_LINE(3986)
	::zpp_nape::callbacks::ZPP_BodyListener tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3986)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_add,return )

Void ZNPList_ZPP_BodyListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_BodyListener x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","addAll",0xdd2a9ba3,"zpp_nape.util.ZNPList_ZPP_BodyListener.addAll","zpp_nape/util/Lists.hx",3997,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(3998)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(3999)
		while((true)){
			HX_STACK_LINE(3999)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3999)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3999)
			if ((tmp1)){
				HX_STACK_LINE(3999)
				break;
			}
			HX_STACK_LINE(4000)
			::zpp_nape::callbacks::ZPP_BodyListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4001)
			::zpp_nape::callbacks::ZPP_BodyListener tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4001)
			this->add(tmp2);
			HX_STACK_LINE(4002)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_BodyListener cur,::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","insert",0xdc0cd55c,"zpp_nape.util.ZNPList_ZPP_BodyListener.insert","zpp_nape/util/Lists.hx",4006,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4007)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4007)
	{
		HX_STACK_LINE(4007)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4007)
		{
			HX_STACK_LINE(4007)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4007)
			{
				HX_STACK_LINE(4007)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4007)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4007)
				if ((tmp3)){
					HX_STACK_LINE(4007)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4007)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(4007)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4007)
					ret = tmp4;
					HX_STACK_LINE(4007)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(4007)
					ret->next = null();
				}
				HX_STACK_LINE(4007)
				Dynamic();
			}
			HX_STACK_LINE(4007)
			ret->elt = o;
			HX_STACK_LINE(4007)
			tmp1 = ret;
		}
		HX_STACK_LINE(4007)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(4007)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4007)
		if ((tmp2)){
			HX_STACK_LINE(4007)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4007)
			temp->next = tmp3;
			HX_STACK_LINE(4007)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(4007)
			temp->next = cur->next;
			HX_STACK_LINE(4007)
			cur->next = temp;
		}
		HX_STACK_LINE(4007)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4007)
		this->pushmod = tmp3;
		HX_STACK_LINE(4007)
		(this->length)++;
		HX_STACK_LINE(4007)
		tmp = temp;
	}
	HX_STACK_LINE(4007)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_BodyListener cur,::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_insert",0xb1232170,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_insert","zpp_nape/util/Lists.hx",4011,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4020)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4020)
	{
		HX_STACK_LINE(4021)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4022)
		{
			HX_STACK_LINE(4023)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4023)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4023)
			if ((tmp2)){
				HX_STACK_LINE(4024)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4024)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(4030)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4030)
				ret = tmp3;
				HX_STACK_LINE(4031)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4032)
				ret->next = null();
			}
			HX_STACK_LINE(4037)
			Dynamic();
		}
		HX_STACK_LINE(4039)
		ret->elt = o;
		HX_STACK_LINE(4040)
		tmp = ret;
	}
	HX_STACK_LINE(4020)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4042)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4042)
	if ((tmp1)){
		HX_STACK_LINE(4043)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4043)
		temp->next = tmp2;
		HX_STACK_LINE(4044)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4047)
		temp->next = cur->next;
		HX_STACK_LINE(4048)
		cur->next = temp;
	}
	HX_STACK_LINE(4050)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4050)
	this->pushmod = tmp2;
	HX_STACK_LINE(4051)
	(this->length)++;
	HX_STACK_LINE(4052)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4052)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,inlined_insert,return )

Void ZNPList_ZPP_BodyListener_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","pop",0x6cac678e,"zpp_nape.util.ZNPList_ZPP_BodyListener.pop","zpp_nape/util/Lists.hx",4055,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4055)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4055)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4055)
		this->head = ret->next;
		HX_STACK_LINE(4055)
		{
			HX_STACK_LINE(4055)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4055)
			o->elt = null();
			HX_STACK_LINE(4055)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4055)
			o->next = tmp1;
			HX_STACK_LINE(4055)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4055)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4055)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4055)
		if ((tmp2)){
			HX_STACK_LINE(4055)
			this->pushmod = true;
		}
		HX_STACK_LINE(4055)
		this->modified = true;
		HX_STACK_LINE(4055)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,pop,(void))

Void ZNPList_ZPP_BodyListener_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_pop",0x12d686fa,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_pop","zpp_nape/util/Lists.hx",4059,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4068)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4068)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4069)
		this->head = ret->next;
		HX_STACK_LINE(4071)
		{
			HX_STACK_LINE(4072)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4081)
			o->elt = null();
			HX_STACK_LINE(4082)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4082)
			o->next = tmp1;
			HX_STACK_LINE(4083)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4088)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4088)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4088)
		if ((tmp2)){
			HX_STACK_LINE(4088)
			this->pushmod = true;
		}
		HX_STACK_LINE(4089)
		this->modified = true;
		HX_STACK_LINE(4090)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","pop_unsafe",0x9f535bf7,"zpp_nape.util.ZNPList_ZPP_BodyListener.pop_unsafe","zpp_nape/util/Lists.hx",4092,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4093)
	::zpp_nape::callbacks::ZPP_BodyListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4093)
	{
		HX_STACK_LINE(4093)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4093)
		::zpp_nape::callbacks::ZPP_BodyListener ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4093)
		this->pop();
		HX_STACK_LINE(4093)
		tmp = ret;
	}
	HX_STACK_LINE(4093)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_pop_unsafe",0xaf83420b,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_pop_unsafe","zpp_nape/util/Lists.hx",4097,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4106)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4106)
	::zpp_nape::callbacks::ZPP_BodyListener ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4107)
	this->pop();
	HX_STACK_LINE(4108)
	::zpp_nape::callbacks::ZPP_BodyListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4108)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_BodyListener_obj::remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","remove",0x42b82e67,"zpp_nape.util.ZNPList_ZPP_BodyListener.remove","zpp_nape/util/Lists.hx",4119,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4119)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4119)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4119)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4119)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4119)
		while((true)){
			HX_STACK_LINE(4119)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4119)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4119)
			if ((tmp2)){
				HX_STACK_LINE(4119)
				break;
			}
			HX_STACK_LINE(4119)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4119)
			if ((tmp3)){
				HX_STACK_LINE(4119)
				{
					HX_STACK_LINE(4119)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4119)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4119)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4119)
					if ((tmp4)){
						HX_STACK_LINE(4119)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4119)
						old = tmp5;
						HX_STACK_LINE(4119)
						ret1 = old->next;
						HX_STACK_LINE(4119)
						this->head = ret1;
						HX_STACK_LINE(4119)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4119)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4119)
						if ((tmp7)){
							HX_STACK_LINE(4119)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4119)
						old = pre->next;
						HX_STACK_LINE(4119)
						ret1 = old->next;
						HX_STACK_LINE(4119)
						pre->next = ret1;
						HX_STACK_LINE(4119)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4119)
						if ((tmp5)){
							HX_STACK_LINE(4119)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4119)
					{
						HX_STACK_LINE(4119)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4119)
						o->elt = null();
						HX_STACK_LINE(4119)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4119)
						o->next = tmp5;
						HX_STACK_LINE(4119)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4119)
					this->modified = true;
					HX_STACK_LINE(4119)
					(this->length)--;
					HX_STACK_LINE(4119)
					this->pushmod = true;
					HX_STACK_LINE(4119)
					ret1;
				}
				HX_STACK_LINE(4119)
				ret = true;
				HX_STACK_LINE(4119)
				break;
			}
			HX_STACK_LINE(4119)
			pre = cur;
			HX_STACK_LINE(4119)
			cur = cur->next;
		}
		HX_STACK_LINE(4119)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,remove,(void))

bool ZNPList_ZPP_BodyListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","try_remove",0xb67d91ab,"zpp_nape.util.ZNPList_ZPP_BodyListener.try_remove","zpp_nape/util/Lists.hx",4121,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4130)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4131)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4131)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4132)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4133)
	while((true)){
		HX_STACK_LINE(4133)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4133)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4133)
		if ((tmp2)){
			HX_STACK_LINE(4133)
			break;
		}
		HX_STACK_LINE(4134)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4134)
		if ((tmp3)){
			HX_STACK_LINE(4135)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4135)
			this->erase(tmp4);
			HX_STACK_LINE(4136)
			ret = true;
			HX_STACK_LINE(4137)
			break;
		}
		HX_STACK_LINE(4139)
		pre = cur;
		HX_STACK_LINE(4140)
		cur = cur->next;
	}
	HX_STACK_LINE(4142)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4142)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,try_remove,return )

Void ZNPList_ZPP_BodyListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_remove",0x17ce7a7b,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_remove","zpp_nape/util/Lists.hx",4155,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4155)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4155)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4155)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4155)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4155)
		while((true)){
			HX_STACK_LINE(4155)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4155)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4155)
			if ((tmp2)){
				HX_STACK_LINE(4155)
				break;
			}
			HX_STACK_LINE(4155)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4155)
			if ((tmp3)){
				HX_STACK_LINE(4155)
				{
					HX_STACK_LINE(4155)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4155)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4155)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4155)
					if ((tmp4)){
						HX_STACK_LINE(4155)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4155)
						old = tmp5;
						HX_STACK_LINE(4155)
						ret1 = old->next;
						HX_STACK_LINE(4155)
						this->head = ret1;
						HX_STACK_LINE(4155)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4155)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4155)
						if ((tmp7)){
							HX_STACK_LINE(4155)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4155)
						old = pre->next;
						HX_STACK_LINE(4155)
						ret1 = old->next;
						HX_STACK_LINE(4155)
						pre->next = ret1;
						HX_STACK_LINE(4155)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4155)
						if ((tmp5)){
							HX_STACK_LINE(4155)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4155)
					{
						HX_STACK_LINE(4155)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4155)
						o->elt = null();
						HX_STACK_LINE(4155)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4155)
						o->next = tmp5;
						HX_STACK_LINE(4155)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4155)
					this->modified = true;
					HX_STACK_LINE(4155)
					(this->length)--;
					HX_STACK_LINE(4155)
					this->pushmod = true;
					HX_STACK_LINE(4155)
					ret1;
				}
				HX_STACK_LINE(4155)
				ret = true;
				HX_STACK_LINE(4155)
				break;
			}
			HX_STACK_LINE(4155)
			pre = cur;
			HX_STACK_LINE(4155)
			cur = cur->next;
		}
		HX_STACK_LINE(4155)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_BodyListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_try_remove",0xc6ad77bf,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_try_remove","zpp_nape/util/Lists.hx",4159,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4168)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4169)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4169)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4170)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4171)
	while((true)){
		HX_STACK_LINE(4171)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4171)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4171)
		if ((tmp2)){
			HX_STACK_LINE(4171)
			break;
		}
		HX_STACK_LINE(4172)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4172)
		if ((tmp3)){
			HX_STACK_LINE(4173)
			{
				HX_STACK_LINE(4173)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(4173)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(4173)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4173)
				if ((tmp4)){
					HX_STACK_LINE(4173)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(4173)
					old = tmp5;
					HX_STACK_LINE(4173)
					ret1 = old->next;
					HX_STACK_LINE(4173)
					this->head = ret1;
					HX_STACK_LINE(4173)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(4173)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(4173)
					if ((tmp7)){
						HX_STACK_LINE(4173)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(4173)
					old = pre->next;
					HX_STACK_LINE(4173)
					ret1 = old->next;
					HX_STACK_LINE(4173)
					pre->next = ret1;
					HX_STACK_LINE(4173)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(4173)
					if ((tmp5)){
						HX_STACK_LINE(4173)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(4173)
				{
					HX_STACK_LINE(4173)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(4173)
					o->elt = null();
					HX_STACK_LINE(4173)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(4173)
					o->next = tmp5;
					HX_STACK_LINE(4173)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(4173)
				this->modified = true;
				HX_STACK_LINE(4173)
				(this->length)--;
				HX_STACK_LINE(4173)
				this->pushmod = true;
				HX_STACK_LINE(4173)
				ret1;
			}
			HX_STACK_LINE(4174)
			ret = true;
			HX_STACK_LINE(4175)
			break;
		}
		HX_STACK_LINE(4177)
		pre = cur;
		HX_STACK_LINE(4178)
		cur = cur->next;
	}
	HX_STACK_LINE(4180)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4180)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","erase",0xeac82c23,"zpp_nape.util.ZNPList_ZPP_BodyListener.erase","zpp_nape/util/Lists.hx",4182,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(4183)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4183)
	{
		HX_STACK_LINE(4183)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(4183)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4183)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4183)
		if ((tmp1)){
			HX_STACK_LINE(4183)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4183)
			old = tmp2;
			HX_STACK_LINE(4183)
			ret = old->next;
			HX_STACK_LINE(4183)
			this->head = ret;
			HX_STACK_LINE(4183)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4183)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4183)
			if ((tmp4)){
				HX_STACK_LINE(4183)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(4183)
			old = pre->next;
			HX_STACK_LINE(4183)
			ret = old->next;
			HX_STACK_LINE(4183)
			pre->next = ret;
			HX_STACK_LINE(4183)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4183)
			if ((tmp2)){
				HX_STACK_LINE(4183)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(4183)
		{
			HX_STACK_LINE(4183)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4183)
			o->elt = null();
			HX_STACK_LINE(4183)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4183)
			o->next = tmp2;
			HX_STACK_LINE(4183)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4183)
		this->modified = true;
		HX_STACK_LINE(4183)
		(this->length)--;
		HX_STACK_LINE(4183)
		this->pushmod = true;
		HX_STACK_LINE(4183)
		tmp = ret;
	}
	HX_STACK_LINE(4183)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_erase",0x0749fe8f,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_erase","zpp_nape/util/Lists.hx",4187,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(4196)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(4197)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4198)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4198)
	if ((tmp)){
		HX_STACK_LINE(4199)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4199)
		old = tmp1;
		HX_STACK_LINE(4200)
		ret = old->next;
		HX_STACK_LINE(4201)
		this->head = ret;
		HX_STACK_LINE(4202)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4202)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4202)
		if ((tmp3)){
			HX_STACK_LINE(4202)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(4205)
		old = pre->next;
		HX_STACK_LINE(4206)
		ret = old->next;
		HX_STACK_LINE(4207)
		pre->next = ret;
		HX_STACK_LINE(4208)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4208)
		if ((tmp1)){
			HX_STACK_LINE(4208)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(4211)
	{
		HX_STACK_LINE(4212)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4221)
		o->elt = null();
		HX_STACK_LINE(4222)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4222)
		o->next = tmp1;
		HX_STACK_LINE(4223)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4228)
	this->modified = true;
	HX_STACK_LINE(4229)
	(this->length)--;
	HX_STACK_LINE(4230)
	this->pushmod = true;
	HX_STACK_LINE(4231)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4231)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","splice",0xfdce179f,"zpp_nape.util.ZNPList_ZPP_BodyListener.splice","zpp_nape/util/Lists.hx",4233,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(4234)
	while((true)){
		HX_STACK_LINE(4234)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4234)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4234)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4234)
		if ((tmp1)){
			HX_STACK_LINE(4234)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(4234)
			tmp2 = false;
		}
		HX_STACK_LINE(4234)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4234)
		if ((tmp3)){
			HX_STACK_LINE(4234)
			break;
		}
		HX_STACK_LINE(4234)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4234)
		this->erase(tmp4);
	}
	HX_STACK_LINE(4235)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4235)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,splice,return )

Void ZNPList_ZPP_BodyListener_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","clear",0xc006b4ca,"zpp_nape.util.ZNPList_ZPP_BodyListener.clear","zpp_nape/util/Lists.hx",4238,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4238)
		while((true)){
			HX_STACK_LINE(4238)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4238)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4238)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4238)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4238)
			if ((tmp3)){
				HX_STACK_LINE(4238)
				break;
			}
			HX_STACK_LINE(4238)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4238)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4238)
			this->head = ret->next;
			HX_STACK_LINE(4238)
			{
				HX_STACK_LINE(4238)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4238)
				o->elt = null();
				HX_STACK_LINE(4238)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4238)
				o->next = tmp5;
				HX_STACK_LINE(4238)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4238)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4238)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(4238)
			if ((tmp6)){
				HX_STACK_LINE(4238)
				this->pushmod = true;
			}
			HX_STACK_LINE(4238)
			this->modified = true;
			HX_STACK_LINE(4238)
			(this->length)--;
		}
		HX_STACK_LINE(4238)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,clear,(void))

Void ZNPList_ZPP_BodyListener_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_clear",0xdc888736,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_clear","zpp_nape/util/Lists.hx",4243,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4244)
		while((true)){
			HX_STACK_LINE(4244)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4244)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4244)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4244)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4244)
			if ((tmp3)){
				HX_STACK_LINE(4244)
				break;
			}
			HX_STACK_LINE(4244)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4244)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4244)
			this->head = ret->next;
			HX_STACK_LINE(4244)
			{
				HX_STACK_LINE(4244)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4244)
				o->elt = null();
				HX_STACK_LINE(4244)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4244)
				o->next = tmp5;
				HX_STACK_LINE(4244)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4244)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4244)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(4244)
			if ((tmp6)){
				HX_STACK_LINE(4244)
				this->pushmod = true;
			}
			HX_STACK_LINE(4244)
			this->modified = true;
			HX_STACK_LINE(4244)
			(this->length)--;
		}
		HX_STACK_LINE(4245)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_BodyListener_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","reverse",0x466c859f,"zpp_nape.util.ZNPList_ZPP_BodyListener.reverse","zpp_nape/util/Lists.hx",4248,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4249)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4249)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4250)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4251)
		while((true)){
			HX_STACK_LINE(4251)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4251)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4251)
			if ((tmp2)){
				HX_STACK_LINE(4251)
				break;
			}
			HX_STACK_LINE(4252)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(4253)
			cur->next = pre;
			HX_STACK_LINE(4254)
			this->head = cur;
			HX_STACK_LINE(4255)
			pre = cur;
			HX_STACK_LINE(4256)
			cur = nx;
		}
		HX_STACK_LINE(4258)
		this->modified = true;
		HX_STACK_LINE(4259)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,reverse,(void))

bool ZNPList_ZPP_BodyListener_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","empty",0xe7857dca,"zpp_nape.util.ZNPList_ZPP_BodyListener.empty","zpp_nape/util/Lists.hx",4263,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4264)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4264)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4264)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,empty,return )

int ZNPList_ZPP_BodyListener_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","size",0xac255424,"zpp_nape.util.ZNPList_ZPP_BodyListener.size","zpp_nape/util/Lists.hx",4268,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4269)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4269)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,size,return )

bool ZNPList_ZPP_BodyListener_obj::has( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","has",0x6ca64957,"zpp_nape.util.ZNPList_ZPP_BodyListener.has","zpp_nape/util/Lists.hx",4271,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4272)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4272)
	{
		HX_STACK_LINE(4272)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4272)
		{
			HX_STACK_LINE(4272)
			ret = false;
			HX_STACK_LINE(4272)
			{
				HX_STACK_LINE(4272)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(4272)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(4272)
				while((true)){
					HX_STACK_LINE(4272)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(4272)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(4272)
					if ((tmp3)){
						HX_STACK_LINE(4272)
						break;
					}
					HX_STACK_LINE(4272)
					::zpp_nape::callbacks::ZPP_BodyListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(4272)
					{
						HX_STACK_LINE(4272)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(4272)
						if ((tmp4)){
							HX_STACK_LINE(4272)
							ret = true;
							HX_STACK_LINE(4272)
							break;
						}
					}
					HX_STACK_LINE(4272)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(4272)
		tmp = ret;
	}
	HX_STACK_LINE(4272)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,has,return )

bool ZNPList_ZPP_BodyListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","inlined_has",0x12d068c3,"zpp_nape.util.ZNPList_ZPP_BodyListener.inlined_has","zpp_nape/util/Lists.hx",4276,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4285)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4286)
	{
		HX_STACK_LINE(4287)
		ret = false;
		HX_STACK_LINE(4288)
		{
			HX_STACK_LINE(4289)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4289)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4290)
			while((true)){
				HX_STACK_LINE(4290)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(4290)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4290)
				if ((tmp2)){
					HX_STACK_LINE(4290)
					break;
				}
				HX_STACK_LINE(4291)
				::zpp_nape::callbacks::ZPP_BodyListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(4292)
				{
					HX_STACK_LINE(4293)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(4293)
					if ((tmp3)){
						HX_STACK_LINE(4294)
						ret = true;
						HX_STACK_LINE(4295)
						break;
					}
				}
				HX_STACK_LINE(4298)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(4302)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4302)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","front",0x7e395be6,"zpp_nape.util.ZNPList_ZPP_BodyListener.front","zpp_nape/util/Lists.hx",4306,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4307)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4307)
	::zpp_nape::callbacks::ZPP_BodyListener tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4307)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,front,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","back",0xa0e28d8a,"zpp_nape.util.ZNPList_ZPP_BodyListener.back","zpp_nape/util/Lists.hx",4309,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4310)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4310)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4311)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4312)
	while((true)){
		HX_STACK_LINE(4312)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4312)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4312)
		if ((tmp2)){
			HX_STACK_LINE(4312)
			break;
		}
		HX_STACK_LINE(4313)
		ret = cur;
		HX_STACK_LINE(4314)
		cur = cur->next;
	}
	HX_STACK_LINE(4316)
	::zpp_nape::callbacks::ZPP_BodyListener tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4316)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","iterator_at",0x176f58e1,"zpp_nape.util.ZNPList_ZPP_BodyListener.iterator_at","zpp_nape/util/Lists.hx",4318,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(4327)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4327)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4328)
	while((true)){
		HX_STACK_LINE(4328)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4328)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4328)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4328)
		if ((tmp2)){
			HX_STACK_LINE(4328)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(4328)
			tmp3 = false;
		}
		HX_STACK_LINE(4328)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4328)
		if ((tmp4)){
			HX_STACK_LINE(4328)
			break;
		}
		HX_STACK_LINE(4328)
		ret = ret->next;
	}
	HX_STACK_LINE(4329)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4329)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_BodyListener","at",0xbf0d5996,"zpp_nape.util.ZNPList_ZPP_BodyListener.at","zpp_nape/util/Lists.hx",4331,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(4340)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4340)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4340)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(4341)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4341)
	::zpp_nape::callbacks::ZPP_BodyListener tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4341)
	if ((tmp2)){
		HX_STACK_LINE(4341)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(4341)
		tmp3 = null();
	}
	HX_STACK_LINE(4341)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,at,return )


ZNPList_ZPP_BodyListener_obj::ZNPList_ZPP_BodyListener_obj()
{
}

void ZNPList_ZPP_BodyListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_BodyListener);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_BodyListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_BodyListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_BodyListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_BodyListener >(); return inValue; }
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

bool ZNPList_ZPP_BodyListener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_BodyListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_BodyListener*/ ,(int)offsetof(ZNPList_ZPP_BodyListener_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_BodyListener_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_BodyListener_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_BodyListener_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_BodyListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_BodyListener_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_BodyListener_obj::__mClass;

void ZNPList_ZPP_BodyListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_BodyListener","\xeb","\x67","\x85","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_BodyListener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_BodyListener_obj >;
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
