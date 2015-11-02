#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Arbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","new",0x73a75846,"zpp_nape.util.ZNPList_ZPP_Arbiter.new","zpp_nape/util/Lists.hx",4345,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(4355)
	this->length = (int)0;
	HX_STACK_LINE(4354)
	this->pushmod = false;
	HX_STACK_LINE(4353)
	this->modified = false;
	HX_STACK_LINE(4346)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Arbiter_obj::~ZNPList_ZPP_Arbiter_obj() { }

Dynamic ZNPList_ZPP_Arbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_Arbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > ZNPList_ZPP_Arbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > _result_ = new ZNPList_ZPP_Arbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > _result_ = new ZNPList_ZPP_Arbiter_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","begin",0x4587b78f,"zpp_nape.util.ZNPList_ZPP_Arbiter.begin","zpp_nape/util/Lists.hx",4350,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4351)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4351)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,begin,return )

Void ZNPList_ZPP_Arbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Arbiter i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","setbegin",0xeef4f9a1,"zpp_nape.util.ZNPList_ZPP_Arbiter.setbegin","zpp_nape/util/Lists.hx",4358,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(4359)
		this->head = i;
		HX_STACK_LINE(4360)
		this->modified = true;
		HX_STACK_LINE(4361)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::add( ::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","add",0x739d7a07,"zpp_nape.util.ZNPList_ZPP_Arbiter.add","zpp_nape/util/Lists.hx",4363,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4364)
	::zpp_nape::dynamics::ZPP_Arbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4364)
	{
		HX_STACK_LINE(4364)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4364)
		{
			HX_STACK_LINE(4364)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4364)
			{
				HX_STACK_LINE(4364)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4364)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4364)
				if ((tmp3)){
					HX_STACK_LINE(4364)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4364)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(4364)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4364)
					ret = tmp4;
					HX_STACK_LINE(4364)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
					HX_STACK_LINE(4364)
					ret->next = null();
				}
				HX_STACK_LINE(4364)
				Dynamic();
			}
			HX_STACK_LINE(4364)
			ret->elt = o;
			HX_STACK_LINE(4364)
			tmp1 = ret;
		}
		HX_STACK_LINE(4364)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(4364)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4364)
		temp->next = tmp2;
		HX_STACK_LINE(4364)
		this->head = temp;
		HX_STACK_LINE(4364)
		this->modified = true;
		HX_STACK_LINE(4364)
		(this->length)++;
		HX_STACK_LINE(4364)
		tmp = o;
	}
	HX_STACK_LINE(4364)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,add,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_add",0x53c52a73,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_add","zpp_nape/util/Lists.hx",4368,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4377)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4377)
	{
		HX_STACK_LINE(4378)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4379)
		{
			HX_STACK_LINE(4380)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4380)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4380)
			if ((tmp2)){
				HX_STACK_LINE(4381)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4381)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(4387)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4387)
				ret = tmp3;
				HX_STACK_LINE(4388)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4389)
				ret->next = null();
			}
			HX_STACK_LINE(4394)
			Dynamic();
		}
		HX_STACK_LINE(4396)
		ret->elt = o;
		HX_STACK_LINE(4397)
		tmp = ret;
	}
	HX_STACK_LINE(4377)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4399)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4399)
	temp->next = tmp1;
	HX_STACK_LINE(4400)
	this->head = temp;
	HX_STACK_LINE(4401)
	this->modified = true;
	HX_STACK_LINE(4402)
	(this->length)++;
	HX_STACK_LINE(4403)
	::zpp_nape::dynamics::ZPP_Arbiter tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4403)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_add,return )

Void ZNPList_ZPP_Arbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Arbiter x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","addAll",0x955cf55a,"zpp_nape.util.ZNPList_ZPP_Arbiter.addAll","zpp_nape/util/Lists.hx",4414,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(4415)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(4416)
		while((true)){
			HX_STACK_LINE(4416)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4416)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4416)
			if ((tmp1)){
				HX_STACK_LINE(4416)
				break;
			}
			HX_STACK_LINE(4417)
			::zpp_nape::dynamics::ZPP_Arbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4418)
			::zpp_nape::dynamics::ZPP_Arbiter tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4418)
			this->add(tmp2);
			HX_STACK_LINE(4419)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Arbiter cur,::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","insert",0x943f2f13,"zpp_nape.util.ZNPList_ZPP_Arbiter.insert","zpp_nape/util/Lists.hx",4423,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4424)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4424)
	{
		HX_STACK_LINE(4424)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4424)
		{
			HX_STACK_LINE(4424)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4424)
			{
				HX_STACK_LINE(4424)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4424)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4424)
				if ((tmp3)){
					HX_STACK_LINE(4424)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4424)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(4424)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4424)
					ret = tmp4;
					HX_STACK_LINE(4424)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
					HX_STACK_LINE(4424)
					ret->next = null();
				}
				HX_STACK_LINE(4424)
				Dynamic();
			}
			HX_STACK_LINE(4424)
			ret->elt = o;
			HX_STACK_LINE(4424)
			tmp1 = ret;
		}
		HX_STACK_LINE(4424)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(4424)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4424)
		if ((tmp2)){
			HX_STACK_LINE(4424)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4424)
			temp->next = tmp3;
			HX_STACK_LINE(4424)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(4424)
			temp->next = cur->next;
			HX_STACK_LINE(4424)
			cur->next = temp;
		}
		HX_STACK_LINE(4424)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4424)
		this->pushmod = tmp3;
		HX_STACK_LINE(4424)
		(this->length)++;
		HX_STACK_LINE(4424)
		tmp = temp;
	}
	HX_STACK_LINE(4424)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Arbiter cur,::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_insert",0xa3688a27,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_insert","zpp_nape/util/Lists.hx",4428,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4437)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4437)
	{
		HX_STACK_LINE(4438)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4439)
		{
			HX_STACK_LINE(4440)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4440)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4440)
			if ((tmp2)){
				HX_STACK_LINE(4441)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4441)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(4447)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4447)
				ret = tmp3;
				HX_STACK_LINE(4448)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4449)
				ret->next = null();
			}
			HX_STACK_LINE(4454)
			Dynamic();
		}
		HX_STACK_LINE(4456)
		ret->elt = o;
		HX_STACK_LINE(4457)
		tmp = ret;
	}
	HX_STACK_LINE(4437)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4459)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4459)
	if ((tmp1)){
		HX_STACK_LINE(4460)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4460)
		temp->next = tmp2;
		HX_STACK_LINE(4461)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4464)
		temp->next = cur->next;
		HX_STACK_LINE(4465)
		cur->next = temp;
	}
	HX_STACK_LINE(4467)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4467)
	this->pushmod = tmp2;
	HX_STACK_LINE(4468)
	(this->length)++;
	HX_STACK_LINE(4469)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4469)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,inlined_insert,return )

Void ZNPList_ZPP_Arbiter_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","pop",0x73a8e577,"zpp_nape.util.ZNPList_ZPP_Arbiter.pop","zpp_nape/util/Lists.hx",4472,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4472)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4472)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4472)
		this->head = ret->next;
		HX_STACK_LINE(4472)
		{
			HX_STACK_LINE(4472)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4472)
			o->elt = null();
			HX_STACK_LINE(4472)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4472)
			o->next = tmp1;
			HX_STACK_LINE(4472)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4472)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4472)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4472)
		if ((tmp2)){
			HX_STACK_LINE(4472)
			this->pushmod = true;
		}
		HX_STACK_LINE(4472)
		this->modified = true;
		HX_STACK_LINE(4472)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,pop,(void))

Void ZNPList_ZPP_Arbiter_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_pop",0x53d095e3,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_pop","zpp_nape/util/Lists.hx",4476,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4485)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4485)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4486)
		this->head = ret->next;
		HX_STACK_LINE(4488)
		{
			HX_STACK_LINE(4489)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4498)
			o->elt = null();
			HX_STACK_LINE(4499)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4499)
			o->next = tmp1;
			HX_STACK_LINE(4500)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4505)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4505)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4505)
		if ((tmp2)){
			HX_STACK_LINE(4505)
			this->pushmod = true;
		}
		HX_STACK_LINE(4506)
		this->modified = true;
		HX_STACK_LINE(4507)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","pop_unsafe",0x607a5d2e,"zpp_nape.util.ZNPList_ZPP_Arbiter.pop_unsafe","zpp_nape/util/Lists.hx",4509,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4510)
	::zpp_nape::dynamics::ZPP_Arbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4510)
	{
		HX_STACK_LINE(4510)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4510)
		::zpp_nape::dynamics::ZPP_Arbiter ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4510)
		this->pop();
		HX_STACK_LINE(4510)
		tmp = ret;
	}
	HX_STACK_LINE(4510)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_pop_unsafe",0xb2f0d242,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_pop_unsafe","zpp_nape/util/Lists.hx",4514,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4523)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4523)
	::zpp_nape::dynamics::ZPP_Arbiter ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4524)
	this->pop();
	HX_STACK_LINE(4525)
	::zpp_nape::dynamics::ZPP_Arbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4525)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Arbiter_obj::remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","remove",0xfaea881e,"zpp_nape.util.ZNPList_ZPP_Arbiter.remove","zpp_nape/util/Lists.hx",4536,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4536)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4536)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4536)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4536)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4536)
		while((true)){
			HX_STACK_LINE(4536)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4536)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4536)
			if ((tmp2)){
				HX_STACK_LINE(4536)
				break;
			}
			HX_STACK_LINE(4536)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4536)
			if ((tmp3)){
				HX_STACK_LINE(4536)
				{
					HX_STACK_LINE(4536)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4536)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4536)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4536)
					if ((tmp4)){
						HX_STACK_LINE(4536)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4536)
						old = tmp5;
						HX_STACK_LINE(4536)
						ret1 = old->next;
						HX_STACK_LINE(4536)
						this->head = ret1;
						HX_STACK_LINE(4536)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4536)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4536)
						if ((tmp7)){
							HX_STACK_LINE(4536)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4536)
						old = pre->next;
						HX_STACK_LINE(4536)
						ret1 = old->next;
						HX_STACK_LINE(4536)
						pre->next = ret1;
						HX_STACK_LINE(4536)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4536)
						if ((tmp5)){
							HX_STACK_LINE(4536)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4536)
					{
						HX_STACK_LINE(4536)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4536)
						o->elt = null();
						HX_STACK_LINE(4536)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4536)
						o->next = tmp5;
						HX_STACK_LINE(4536)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4536)
					this->modified = true;
					HX_STACK_LINE(4536)
					(this->length)--;
					HX_STACK_LINE(4536)
					this->pushmod = true;
					HX_STACK_LINE(4536)
					ret1;
				}
				HX_STACK_LINE(4536)
				ret = true;
				HX_STACK_LINE(4536)
				break;
			}
			HX_STACK_LINE(4536)
			pre = cur;
			HX_STACK_LINE(4536)
			cur = cur->next;
		}
		HX_STACK_LINE(4536)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,remove,(void))

bool ZNPList_ZPP_Arbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","try_remove",0x77a492e2,"zpp_nape.util.ZNPList_ZPP_Arbiter.try_remove","zpp_nape/util/Lists.hx",4538,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4547)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4548)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4548)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4549)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4550)
	while((true)){
		HX_STACK_LINE(4550)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4550)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4550)
		if ((tmp2)){
			HX_STACK_LINE(4550)
			break;
		}
		HX_STACK_LINE(4551)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4551)
		if ((tmp3)){
			HX_STACK_LINE(4552)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4552)
			this->erase(tmp4);
			HX_STACK_LINE(4553)
			ret = true;
			HX_STACK_LINE(4554)
			break;
		}
		HX_STACK_LINE(4556)
		pre = cur;
		HX_STACK_LINE(4557)
		cur = cur->next;
	}
	HX_STACK_LINE(4559)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4559)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,try_remove,return )

Void ZNPList_ZPP_Arbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_remove",0x0a13e332,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_remove","zpp_nape/util/Lists.hx",4572,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4572)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4572)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4572)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4572)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4572)
		while((true)){
			HX_STACK_LINE(4572)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4572)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4572)
			if ((tmp2)){
				HX_STACK_LINE(4572)
				break;
			}
			HX_STACK_LINE(4572)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4572)
			if ((tmp3)){
				HX_STACK_LINE(4572)
				{
					HX_STACK_LINE(4572)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4572)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4572)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4572)
					if ((tmp4)){
						HX_STACK_LINE(4572)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4572)
						old = tmp5;
						HX_STACK_LINE(4572)
						ret1 = old->next;
						HX_STACK_LINE(4572)
						this->head = ret1;
						HX_STACK_LINE(4572)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4572)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4572)
						if ((tmp7)){
							HX_STACK_LINE(4572)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4572)
						old = pre->next;
						HX_STACK_LINE(4572)
						ret1 = old->next;
						HX_STACK_LINE(4572)
						pre->next = ret1;
						HX_STACK_LINE(4572)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4572)
						if ((tmp5)){
							HX_STACK_LINE(4572)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4572)
					{
						HX_STACK_LINE(4572)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4572)
						o->elt = null();
						HX_STACK_LINE(4572)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4572)
						o->next = tmp5;
						HX_STACK_LINE(4572)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4572)
					this->modified = true;
					HX_STACK_LINE(4572)
					(this->length)--;
					HX_STACK_LINE(4572)
					this->pushmod = true;
					HX_STACK_LINE(4572)
					ret1;
				}
				HX_STACK_LINE(4572)
				ret = true;
				HX_STACK_LINE(4572)
				break;
			}
			HX_STACK_LINE(4572)
			pre = cur;
			HX_STACK_LINE(4572)
			cur = cur->next;
		}
		HX_STACK_LINE(4572)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_Arbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_try_remove",0xca1b07f6,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_try_remove","zpp_nape/util/Lists.hx",4576,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4585)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4586)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4586)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4587)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4588)
	while((true)){
		HX_STACK_LINE(4588)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4588)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4588)
		if ((tmp2)){
			HX_STACK_LINE(4588)
			break;
		}
		HX_STACK_LINE(4589)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4589)
		if ((tmp3)){
			HX_STACK_LINE(4590)
			{
				HX_STACK_LINE(4590)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(4590)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(4590)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(4590)
				if ((tmp4)){
					HX_STACK_LINE(4590)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(4590)
					old = tmp5;
					HX_STACK_LINE(4590)
					ret1 = old->next;
					HX_STACK_LINE(4590)
					this->head = ret1;
					HX_STACK_LINE(4590)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(4590)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(4590)
					if ((tmp7)){
						HX_STACK_LINE(4590)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(4590)
					old = pre->next;
					HX_STACK_LINE(4590)
					ret1 = old->next;
					HX_STACK_LINE(4590)
					pre->next = ret1;
					HX_STACK_LINE(4590)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(4590)
					if ((tmp5)){
						HX_STACK_LINE(4590)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(4590)
				{
					HX_STACK_LINE(4590)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(4590)
					o->elt = null();
					HX_STACK_LINE(4590)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(4590)
					o->next = tmp5;
					HX_STACK_LINE(4590)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(4590)
				this->modified = true;
				HX_STACK_LINE(4590)
				(this->length)--;
				HX_STACK_LINE(4590)
				this->pushmod = true;
				HX_STACK_LINE(4590)
				ret1;
			}
			HX_STACK_LINE(4591)
			ret = true;
			HX_STACK_LINE(4592)
			break;
		}
		HX_STACK_LINE(4594)
		pre = cur;
		HX_STACK_LINE(4595)
		cur = cur->next;
	}
	HX_STACK_LINE(4597)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4597)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","erase",0x084eb64c,"zpp_nape.util.ZNPList_ZPP_Arbiter.erase","zpp_nape/util/Lists.hx",4599,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(4600)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4600)
	{
		HX_STACK_LINE(4600)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(4600)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4600)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4600)
		if ((tmp1)){
			HX_STACK_LINE(4600)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4600)
			old = tmp2;
			HX_STACK_LINE(4600)
			ret = old->next;
			HX_STACK_LINE(4600)
			this->head = ret;
			HX_STACK_LINE(4600)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4600)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4600)
			if ((tmp4)){
				HX_STACK_LINE(4600)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(4600)
			old = pre->next;
			HX_STACK_LINE(4600)
			ret = old->next;
			HX_STACK_LINE(4600)
			pre->next = ret;
			HX_STACK_LINE(4600)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4600)
			if ((tmp2)){
				HX_STACK_LINE(4600)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(4600)
		{
			HX_STACK_LINE(4600)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4600)
			o->elt = null();
			HX_STACK_LINE(4600)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4600)
			o->next = tmp2;
			HX_STACK_LINE(4600)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4600)
		this->modified = true;
		HX_STACK_LINE(4600)
		(this->length)--;
		HX_STACK_LINE(4600)
		this->pushmod = true;
		HX_STACK_LINE(4600)
		tmp = ret;
	}
	HX_STACK_LINE(4600)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_erase",0x061459b8,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_erase","zpp_nape/util/Lists.hx",4604,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(4613)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(4614)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4615)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4615)
	if ((tmp)){
		HX_STACK_LINE(4616)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4616)
		old = tmp1;
		HX_STACK_LINE(4617)
		ret = old->next;
		HX_STACK_LINE(4618)
		this->head = ret;
		HX_STACK_LINE(4619)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4619)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4619)
		if ((tmp3)){
			HX_STACK_LINE(4619)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(4622)
		old = pre->next;
		HX_STACK_LINE(4623)
		ret = old->next;
		HX_STACK_LINE(4624)
		pre->next = ret;
		HX_STACK_LINE(4625)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4625)
		if ((tmp1)){
			HX_STACK_LINE(4625)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(4628)
	{
		HX_STACK_LINE(4629)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4638)
		o->elt = null();
		HX_STACK_LINE(4639)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4639)
		o->next = tmp1;
		HX_STACK_LINE(4640)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4645)
	this->modified = true;
	HX_STACK_LINE(4646)
	(this->length)--;
	HX_STACK_LINE(4647)
	this->pushmod = true;
	HX_STACK_LINE(4648)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4648)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","splice",0xb6007156,"zpp_nape.util.ZNPList_ZPP_Arbiter.splice","zpp_nape/util/Lists.hx",4650,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(4651)
	while((true)){
		HX_STACK_LINE(4651)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4651)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4651)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4651)
		if ((tmp1)){
			HX_STACK_LINE(4651)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(4651)
			tmp2 = false;
		}
		HX_STACK_LINE(4651)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4651)
		if ((tmp3)){
			HX_STACK_LINE(4651)
			break;
		}
		HX_STACK_LINE(4651)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4651)
		this->erase(tmp4);
	}
	HX_STACK_LINE(4652)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4652)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,splice,return )

Void ZNPList_ZPP_Arbiter_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","clear",0xdd8d3ef3,"zpp_nape.util.ZNPList_ZPP_Arbiter.clear","zpp_nape/util/Lists.hx",4655,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4655)
		while((true)){
			HX_STACK_LINE(4655)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4655)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4655)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4655)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4655)
			if ((tmp3)){
				HX_STACK_LINE(4655)
				break;
			}
			HX_STACK_LINE(4655)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4655)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4655)
			this->head = ret->next;
			HX_STACK_LINE(4655)
			{
				HX_STACK_LINE(4655)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4655)
				o->elt = null();
				HX_STACK_LINE(4655)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4655)
				o->next = tmp5;
				HX_STACK_LINE(4655)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4655)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4655)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(4655)
			if ((tmp6)){
				HX_STACK_LINE(4655)
				this->pushmod = true;
			}
			HX_STACK_LINE(4655)
			this->modified = true;
			HX_STACK_LINE(4655)
			(this->length)--;
		}
		HX_STACK_LINE(4655)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,clear,(void))

Void ZNPList_ZPP_Arbiter_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_clear",0xdb52e25f,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_clear","zpp_nape/util/Lists.hx",4660,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4661)
		while((true)){
			HX_STACK_LINE(4661)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4661)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4661)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4661)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4661)
			if ((tmp3)){
				HX_STACK_LINE(4661)
				break;
			}
			HX_STACK_LINE(4661)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4661)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4661)
			this->head = ret->next;
			HX_STACK_LINE(4661)
			{
				HX_STACK_LINE(4661)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4661)
				o->elt = null();
				HX_STACK_LINE(4661)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(4661)
				o->next = tmp5;
				HX_STACK_LINE(4661)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4661)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(4661)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(4661)
			if ((tmp6)){
				HX_STACK_LINE(4661)
				this->pushmod = true;
			}
			HX_STACK_LINE(4661)
			this->modified = true;
			HX_STACK_LINE(4661)
			(this->length)--;
		}
		HX_STACK_LINE(4662)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_Arbiter_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","reverse",0xba48ac08,"zpp_nape.util.ZNPList_ZPP_Arbiter.reverse","zpp_nape/util/Lists.hx",4665,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4666)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4666)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4667)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4668)
		while((true)){
			HX_STACK_LINE(4668)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4668)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4668)
			if ((tmp2)){
				HX_STACK_LINE(4668)
				break;
			}
			HX_STACK_LINE(4669)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(4670)
			cur->next = pre;
			HX_STACK_LINE(4671)
			this->head = cur;
			HX_STACK_LINE(4672)
			pre = cur;
			HX_STACK_LINE(4673)
			cur = nx;
		}
		HX_STACK_LINE(4675)
		this->modified = true;
		HX_STACK_LINE(4676)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,reverse,(void))

bool ZNPList_ZPP_Arbiter_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","empty",0x050c07f3,"zpp_nape.util.ZNPList_ZPP_Arbiter.empty","zpp_nape/util/Lists.hx",4680,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4681)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4681)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4681)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,empty,return )

int ZNPList_ZPP_Arbiter_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","size",0xc217021b,"zpp_nape.util.ZNPList_ZPP_Arbiter.size","zpp_nape/util/Lists.hx",4685,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4686)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4686)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,size,return )

bool ZNPList_ZPP_Arbiter_obj::has( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","has",0x73a2c740,"zpp_nape.util.ZNPList_ZPP_Arbiter.has","zpp_nape/util/Lists.hx",4688,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4689)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4689)
	{
		HX_STACK_LINE(4689)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4689)
		{
			HX_STACK_LINE(4689)
			ret = false;
			HX_STACK_LINE(4689)
			{
				HX_STACK_LINE(4689)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(4689)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(4689)
				while((true)){
					HX_STACK_LINE(4689)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(4689)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(4689)
					if ((tmp3)){
						HX_STACK_LINE(4689)
						break;
					}
					HX_STACK_LINE(4689)
					::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(4689)
					{
						HX_STACK_LINE(4689)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(4689)
						if ((tmp4)){
							HX_STACK_LINE(4689)
							ret = true;
							HX_STACK_LINE(4689)
							break;
						}
					}
					HX_STACK_LINE(4689)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(4689)
		tmp = ret;
	}
	HX_STACK_LINE(4689)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,has,return )

bool ZNPList_ZPP_Arbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","inlined_has",0x53ca77ac,"zpp_nape.util.ZNPList_ZPP_Arbiter.inlined_has","zpp_nape/util/Lists.hx",4693,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4702)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4703)
	{
		HX_STACK_LINE(4704)
		ret = false;
		HX_STACK_LINE(4705)
		{
			HX_STACK_LINE(4706)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4706)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4707)
			while((true)){
				HX_STACK_LINE(4707)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(4707)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4707)
				if ((tmp2)){
					HX_STACK_LINE(4707)
					break;
				}
				HX_STACK_LINE(4708)
				::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(4709)
				{
					HX_STACK_LINE(4710)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(4710)
					if ((tmp3)){
						HX_STACK_LINE(4711)
						ret = true;
						HX_STACK_LINE(4712)
						break;
					}
				}
				HX_STACK_LINE(4715)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(4719)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4719)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","front",0x9bbfe60f,"zpp_nape.util.ZNPList_ZPP_Arbiter.front","zpp_nape/util/Lists.hx",4723,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4724)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4724)
	::zpp_nape::dynamics::ZPP_Arbiter tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4724)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,front,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","back",0xb6d43b81,"zpp_nape.util.ZNPList_ZPP_Arbiter.back","zpp_nape/util/Lists.hx",4726,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4727)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4727)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4728)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4729)
	while((true)){
		HX_STACK_LINE(4729)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4729)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4729)
		if ((tmp2)){
			HX_STACK_LINE(4729)
			break;
		}
		HX_STACK_LINE(4730)
		ret = cur;
		HX_STACK_LINE(4731)
		cur = cur->next;
	}
	HX_STACK_LINE(4733)
	::zpp_nape::dynamics::ZPP_Arbiter tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4733)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","iterator_at",0x586967ca,"zpp_nape.util.ZNPList_ZPP_Arbiter.iterator_at","zpp_nape/util/Lists.hx",4735,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(4744)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4744)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4745)
	while((true)){
		HX_STACK_LINE(4745)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4745)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4745)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4745)
		if ((tmp2)){
			HX_STACK_LINE(4745)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(4745)
			tmp3 = false;
		}
		HX_STACK_LINE(4745)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(4745)
		if ((tmp4)){
			HX_STACK_LINE(4745)
			break;
		}
		HX_STACK_LINE(4745)
		ret = ret->next;
	}
	HX_STACK_LINE(4746)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4746)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Arbiter","at",0x4e94cbcd,"zpp_nape.util.ZNPList_ZPP_Arbiter.at","zpp_nape/util/Lists.hx",4748,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(4757)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4757)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4757)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(4758)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4758)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4758)
	if ((tmp2)){
		HX_STACK_LINE(4758)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(4758)
		tmp3 = null();
	}
	HX_STACK_LINE(4758)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,at,return )


ZNPList_ZPP_Arbiter_obj::ZNPList_ZPP_Arbiter_obj()
{
}

void ZNPList_ZPP_Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Arbiter);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Arbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
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

bool ZNPList_ZPP_Arbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Arbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Arbiter*/ ,(int)offsetof(ZNPList_ZPP_Arbiter_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Arbiter_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Arbiter_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Arbiter_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Arbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Arbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Arbiter_obj::__mClass;

void ZNPList_ZPP_Arbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Arbiter","\x54","\x7d","\xc0","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Arbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Arbiter_obj >;
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
