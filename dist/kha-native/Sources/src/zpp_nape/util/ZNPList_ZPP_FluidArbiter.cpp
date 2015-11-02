#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_FluidArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","new",0xac2b8ca6,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.new","zpp_nape/util/Lists.hx",11434,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11444)
	this->length = (int)0;
	HX_STACK_LINE(11443)
	this->pushmod = false;
	HX_STACK_LINE(11442)
	this->modified = false;
	HX_STACK_LINE(11435)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_FluidArbiter_obj::~ZNPList_ZPP_FluidArbiter_obj() { }

Dynamic ZNPList_ZPP_FluidArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_FluidArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > ZNPList_ZPP_FluidArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > _result_ = new ZNPList_ZPP_FluidArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > _result_ = new ZNPList_ZPP_FluidArbiter_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","begin",0xcec9c3ef,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.begin","zpp_nape/util/Lists.hx",11439,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11440)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11440)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,begin,return )

Void ZNPList_ZPP_FluidArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","setbegin",0x48f6e941,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.setbegin","zpp_nape/util/Lists.hx",11447,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(11448)
		this->head = i;
		HX_STACK_LINE(11449)
		this->modified = true;
		HX_STACK_LINE(11450)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::add( ::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","add",0xac21ae67,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.add","zpp_nape/util/Lists.hx",11452,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11453)
	::zpp_nape::dynamics::ZPP_FluidArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11453)
	{
		HX_STACK_LINE(11453)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11453)
		{
			HX_STACK_LINE(11453)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11453)
			{
				HX_STACK_LINE(11453)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(11453)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11453)
				if ((tmp3)){
					HX_STACK_LINE(11453)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11453)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(11453)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11453)
					ret = tmp4;
					HX_STACK_LINE(11453)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
					HX_STACK_LINE(11453)
					ret->next = null();
				}
				HX_STACK_LINE(11453)
				Dynamic();
			}
			HX_STACK_LINE(11453)
			ret->elt = o;
			HX_STACK_LINE(11453)
			tmp1 = ret;
		}
		HX_STACK_LINE(11453)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(11453)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11453)
		temp->next = tmp2;
		HX_STACK_LINE(11453)
		this->head = temp;
		HX_STACK_LINE(11453)
		this->modified = true;
		HX_STACK_LINE(11453)
		(this->length)++;
		HX_STACK_LINE(11453)
		tmp = o;
	}
	HX_STACK_LINE(11453)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,add,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_add",0xd424bed3,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_add","zpp_nape/util/Lists.hx",11457,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11466)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11466)
	{
		HX_STACK_LINE(11467)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11468)
		{
			HX_STACK_LINE(11469)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11469)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11469)
			if ((tmp2)){
				HX_STACK_LINE(11470)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11470)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(11476)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11476)
				ret = tmp3;
				HX_STACK_LINE(11477)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11478)
				ret->next = null();
			}
			HX_STACK_LINE(11483)
			Dynamic();
		}
		HX_STACK_LINE(11485)
		ret->elt = o;
		HX_STACK_LINE(11486)
		tmp = ret;
	}
	HX_STACK_LINE(11466)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11488)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11488)
	temp->next = tmp1;
	HX_STACK_LINE(11489)
	this->head = temp;
	HX_STACK_LINE(11490)
	this->modified = true;
	HX_STACK_LINE(11491)
	(this->length)++;
	HX_STACK_LINE(11492)
	::zpp_nape::dynamics::ZPP_FluidArbiter tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11492)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_add,return )

Void ZNPList_ZPP_FluidArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_FluidArbiter x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","addAll",0x25e5bcfa,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.addAll","zpp_nape/util/Lists.hx",11503,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(11504)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(11505)
		while((true)){
			HX_STACK_LINE(11505)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11505)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11505)
			if ((tmp1)){
				HX_STACK_LINE(11505)
				break;
			}
			HX_STACK_LINE(11506)
			::zpp_nape::dynamics::ZPP_FluidArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(11507)
			::zpp_nape::dynamics::ZPP_FluidArbiter tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11507)
			this->add(tmp2);
			HX_STACK_LINE(11508)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur,::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","insert",0x24c7f6b3,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.insert","zpp_nape/util/Lists.hx",11512,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11513)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11513)
	{
		HX_STACK_LINE(11513)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11513)
		{
			HX_STACK_LINE(11513)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11513)
			{
				HX_STACK_LINE(11513)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(11513)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11513)
				if ((tmp3)){
					HX_STACK_LINE(11513)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11513)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(11513)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11513)
					ret = tmp4;
					HX_STACK_LINE(11513)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
					HX_STACK_LINE(11513)
					ret->next = null();
				}
				HX_STACK_LINE(11513)
				Dynamic();
			}
			HX_STACK_LINE(11513)
			ret->elt = o;
			HX_STACK_LINE(11513)
			tmp1 = ret;
		}
		HX_STACK_LINE(11513)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(11513)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11513)
		if ((tmp2)){
			HX_STACK_LINE(11513)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11513)
			temp->next = tmp3;
			HX_STACK_LINE(11513)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(11513)
			temp->next = cur->next;
			HX_STACK_LINE(11513)
			cur->next = temp;
		}
		HX_STACK_LINE(11513)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11513)
		this->pushmod = tmp3;
		HX_STACK_LINE(11513)
		(this->length)++;
		HX_STACK_LINE(11513)
		tmp = temp;
	}
	HX_STACK_LINE(11513)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur,::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_insert",0x7b71f1c7,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_insert","zpp_nape/util/Lists.hx",11517,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11526)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11526)
	{
		HX_STACK_LINE(11527)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11528)
		{
			HX_STACK_LINE(11529)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11529)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11529)
			if ((tmp2)){
				HX_STACK_LINE(11530)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11530)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(11536)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11536)
				ret = tmp3;
				HX_STACK_LINE(11537)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11538)
				ret->next = null();
			}
			HX_STACK_LINE(11543)
			Dynamic();
		}
		HX_STACK_LINE(11545)
		ret->elt = o;
		HX_STACK_LINE(11546)
		tmp = ret;
	}
	HX_STACK_LINE(11526)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11548)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11548)
	if ((tmp1)){
		HX_STACK_LINE(11549)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11549)
		temp->next = tmp2;
		HX_STACK_LINE(11550)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11553)
		temp->next = cur->next;
		HX_STACK_LINE(11554)
		cur->next = temp;
	}
	HX_STACK_LINE(11556)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11556)
	this->pushmod = tmp2;
	HX_STACK_LINE(11557)
	(this->length)++;
	HX_STACK_LINE(11558)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(11558)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,inlined_insert,return )

Void ZNPList_ZPP_FluidArbiter_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","pop",0xac2d19d7,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.pop","zpp_nape/util/Lists.hx",11561,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11561)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11561)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11561)
		this->head = ret->next;
		HX_STACK_LINE(11561)
		{
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11561)
			o->elt = null();
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11561)
			o->next = tmp1;
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11561)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11561)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11561)
		if ((tmp2)){
			HX_STACK_LINE(11561)
			this->pushmod = true;
		}
		HX_STACK_LINE(11561)
		this->modified = true;
		HX_STACK_LINE(11561)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,pop,(void))

Void ZNPList_ZPP_FluidArbiter_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_pop",0xd4302a43,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_pop","zpp_nape/util/Lists.hx",11565,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11574)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11574)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11575)
		this->head = ret->next;
		HX_STACK_LINE(11577)
		{
			HX_STACK_LINE(11578)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11587)
			o->elt = null();
			HX_STACK_LINE(11588)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11588)
			o->next = tmp1;
			HX_STACK_LINE(11589)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11594)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11594)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11594)
		if ((tmp2)){
			HX_STACK_LINE(11594)
			this->pushmod = true;
		}
		HX_STACK_LINE(11595)
		this->modified = true;
		HX_STACK_LINE(11596)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","pop_unsafe",0xb28f74ce,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.pop_unsafe","zpp_nape/util/Lists.hx",11598,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11599)
	::zpp_nape::dynamics::ZPP_FluidArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11599)
	{
		HX_STACK_LINE(11599)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11599)
		::zpp_nape::dynamics::ZPP_FluidArbiter ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11599)
		this->pop();
		HX_STACK_LINE(11599)
		tmp = ret;
	}
	HX_STACK_LINE(11599)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_pop_unsafe",0x295689e2,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_pop_unsafe","zpp_nape/util/Lists.hx",11603,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11612)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11612)
	::zpp_nape::dynamics::ZPP_FluidArbiter ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11613)
	this->pop();
	HX_STACK_LINE(11614)
	::zpp_nape::dynamics::ZPP_FluidArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11614)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_FluidArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","remove",0x8b734fbe,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.remove","zpp_nape/util/Lists.hx",11625,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11625)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11625)
		while((true)){
			HX_STACK_LINE(11625)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11625)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11625)
			if ((tmp2)){
				HX_STACK_LINE(11625)
				break;
			}
			HX_STACK_LINE(11625)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11625)
			if ((tmp3)){
				HX_STACK_LINE(11625)
				{
					HX_STACK_LINE(11625)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11625)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11625)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11625)
					if ((tmp4)){
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11625)
						old = tmp5;
						HX_STACK_LINE(11625)
						ret1 = old->next;
						HX_STACK_LINE(11625)
						this->head = ret1;
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(11625)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(11625)
						if ((tmp7)){
							HX_STACK_LINE(11625)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11625)
						old = pre->next;
						HX_STACK_LINE(11625)
						ret1 = old->next;
						HX_STACK_LINE(11625)
						pre->next = ret1;
						HX_STACK_LINE(11625)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11625)
						if ((tmp5)){
							HX_STACK_LINE(11625)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11625)
					{
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11625)
						o->elt = null();
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11625)
						o->next = tmp5;
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11625)
					this->modified = true;
					HX_STACK_LINE(11625)
					(this->length)--;
					HX_STACK_LINE(11625)
					this->pushmod = true;
					HX_STACK_LINE(11625)
					ret1;
				}
				HX_STACK_LINE(11625)
				ret = true;
				HX_STACK_LINE(11625)
				break;
			}
			HX_STACK_LINE(11625)
			pre = cur;
			HX_STACK_LINE(11625)
			cur = cur->next;
		}
		HX_STACK_LINE(11625)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,remove,(void))

bool ZNPList_ZPP_FluidArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","try_remove",0xc9b9aa82,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.try_remove","zpp_nape/util/Lists.hx",11627,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11636)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11637)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11637)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11638)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11639)
	while((true)){
		HX_STACK_LINE(11639)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11639)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11639)
		if ((tmp2)){
			HX_STACK_LINE(11639)
			break;
		}
		HX_STACK_LINE(11640)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11640)
		if ((tmp3)){
			HX_STACK_LINE(11641)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11641)
			this->erase(tmp4);
			HX_STACK_LINE(11642)
			ret = true;
			HX_STACK_LINE(11643)
			break;
		}
		HX_STACK_LINE(11645)
		pre = cur;
		HX_STACK_LINE(11646)
		cur = cur->next;
	}
	HX_STACK_LINE(11648)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11648)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,try_remove,return )

Void ZNPList_ZPP_FluidArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_remove",0xe21d4ad2,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_remove","zpp_nape/util/Lists.hx",11661,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11661)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11661)
		while((true)){
			HX_STACK_LINE(11661)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11661)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11661)
			if ((tmp2)){
				HX_STACK_LINE(11661)
				break;
			}
			HX_STACK_LINE(11661)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11661)
			if ((tmp3)){
				HX_STACK_LINE(11661)
				{
					HX_STACK_LINE(11661)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11661)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11661)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11661)
					if ((tmp4)){
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11661)
						old = tmp5;
						HX_STACK_LINE(11661)
						ret1 = old->next;
						HX_STACK_LINE(11661)
						this->head = ret1;
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(11661)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(11661)
						if ((tmp7)){
							HX_STACK_LINE(11661)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11661)
						old = pre->next;
						HX_STACK_LINE(11661)
						ret1 = old->next;
						HX_STACK_LINE(11661)
						pre->next = ret1;
						HX_STACK_LINE(11661)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11661)
						if ((tmp5)){
							HX_STACK_LINE(11661)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11661)
					{
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11661)
						o->elt = null();
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11661)
						o->next = tmp5;
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11661)
					this->modified = true;
					HX_STACK_LINE(11661)
					(this->length)--;
					HX_STACK_LINE(11661)
					this->pushmod = true;
					HX_STACK_LINE(11661)
					ret1;
				}
				HX_STACK_LINE(11661)
				ret = true;
				HX_STACK_LINE(11661)
				break;
			}
			HX_STACK_LINE(11661)
			pre = cur;
			HX_STACK_LINE(11661)
			cur = cur->next;
		}
		HX_STACK_LINE(11661)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_FluidArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_try_remove",0x4080bf96,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_try_remove","zpp_nape/util/Lists.hx",11665,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11674)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11675)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11675)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11676)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11677)
	while((true)){
		HX_STACK_LINE(11677)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11677)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11677)
		if ((tmp2)){
			HX_STACK_LINE(11677)
			break;
		}
		HX_STACK_LINE(11678)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11678)
		if ((tmp3)){
			HX_STACK_LINE(11679)
			{
				HX_STACK_LINE(11679)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11679)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11679)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(11679)
				if ((tmp4)){
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(11679)
					old = tmp5;
					HX_STACK_LINE(11679)
					ret1 = old->next;
					HX_STACK_LINE(11679)
					this->head = ret1;
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(11679)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(11679)
					if ((tmp7)){
						HX_STACK_LINE(11679)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11679)
					old = pre->next;
					HX_STACK_LINE(11679)
					ret1 = old->next;
					HX_STACK_LINE(11679)
					pre->next = ret1;
					HX_STACK_LINE(11679)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(11679)
					if ((tmp5)){
						HX_STACK_LINE(11679)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11679)
				{
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11679)
					o->elt = null();
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(11679)
					o->next = tmp5;
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11679)
				this->modified = true;
				HX_STACK_LINE(11679)
				(this->length)--;
				HX_STACK_LINE(11679)
				this->pushmod = true;
				HX_STACK_LINE(11679)
				ret1;
			}
			HX_STACK_LINE(11680)
			ret = true;
			HX_STACK_LINE(11681)
			break;
		}
		HX_STACK_LINE(11683)
		pre = cur;
		HX_STACK_LINE(11684)
		cur = cur->next;
	}
	HX_STACK_LINE(11686)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11686)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","erase",0x9190c2ac,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.erase","zpp_nape/util/Lists.hx",11688,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11689)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11689)
	{
		HX_STACK_LINE(11689)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(11689)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11689)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11689)
		if ((tmp1)){
			HX_STACK_LINE(11689)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11689)
			old = tmp2;
			HX_STACK_LINE(11689)
			ret = old->next;
			HX_STACK_LINE(11689)
			this->head = ret;
			HX_STACK_LINE(11689)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11689)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11689)
			if ((tmp4)){
				HX_STACK_LINE(11689)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(11689)
			old = pre->next;
			HX_STACK_LINE(11689)
			ret = old->next;
			HX_STACK_LINE(11689)
			pre->next = ret;
			HX_STACK_LINE(11689)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11689)
			if ((tmp2)){
				HX_STACK_LINE(11689)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(11689)
		{
			HX_STACK_LINE(11689)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11689)
			o->elt = null();
			HX_STACK_LINE(11689)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11689)
			o->next = tmp2;
			HX_STACK_LINE(11689)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11689)
		this->modified = true;
		HX_STACK_LINE(11689)
		(this->length)--;
		HX_STACK_LINE(11689)
		this->pushmod = true;
		HX_STACK_LINE(11689)
		tmp = ret;
	}
	HX_STACK_LINE(11689)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_erase",0x0cc9c618,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_erase","zpp_nape/util/Lists.hx",11693,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11702)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11703)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11704)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11704)
	if ((tmp)){
		HX_STACK_LINE(11705)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11705)
		old = tmp1;
		HX_STACK_LINE(11706)
		ret = old->next;
		HX_STACK_LINE(11707)
		this->head = ret;
		HX_STACK_LINE(11708)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11708)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11708)
		if ((tmp3)){
			HX_STACK_LINE(11708)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11711)
		old = pre->next;
		HX_STACK_LINE(11712)
		ret = old->next;
		HX_STACK_LINE(11713)
		pre->next = ret;
		HX_STACK_LINE(11714)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11714)
		if ((tmp1)){
			HX_STACK_LINE(11714)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11717)
	{
		HX_STACK_LINE(11718)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11727)
		o->elt = null();
		HX_STACK_LINE(11728)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11728)
		o->next = tmp1;
		HX_STACK_LINE(11729)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11734)
	this->modified = true;
	HX_STACK_LINE(11735)
	(this->length)--;
	HX_STACK_LINE(11736)
	this->pushmod = true;
	HX_STACK_LINE(11737)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11737)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","splice",0x468938f6,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.splice","zpp_nape/util/Lists.hx",11739,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(11740)
	while((true)){
		HX_STACK_LINE(11740)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11740)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11740)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11740)
		if ((tmp1)){
			HX_STACK_LINE(11740)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(11740)
			tmp2 = false;
		}
		HX_STACK_LINE(11740)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11740)
		if ((tmp3)){
			HX_STACK_LINE(11740)
			break;
		}
		HX_STACK_LINE(11740)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(11740)
		this->erase(tmp4);
	}
	HX_STACK_LINE(11741)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11741)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,splice,return )

Void ZNPList_ZPP_FluidArbiter_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","clear",0x66cf4b53,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.clear","zpp_nape/util/Lists.hx",11744,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11744)
		while((true)){
			HX_STACK_LINE(11744)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11744)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11744)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11744)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11744)
			if ((tmp3)){
				HX_STACK_LINE(11744)
				break;
			}
			HX_STACK_LINE(11744)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11744)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11744)
			this->head = ret->next;
			HX_STACK_LINE(11744)
			{
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11744)
				o->elt = null();
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(11744)
				o->next = tmp5;
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11744)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(11744)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(11744)
			if ((tmp6)){
				HX_STACK_LINE(11744)
				this->pushmod = true;
			}
			HX_STACK_LINE(11744)
			this->modified = true;
			HX_STACK_LINE(11744)
			(this->length)--;
		}
		HX_STACK_LINE(11744)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,clear,(void))

Void ZNPList_ZPP_FluidArbiter_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_clear",0xe2084ebf,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_clear","zpp_nape/util/Lists.hx",11749,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11750)
		while((true)){
			HX_STACK_LINE(11750)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11750)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11750)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11750)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11750)
			if ((tmp3)){
				HX_STACK_LINE(11750)
				break;
			}
			HX_STACK_LINE(11750)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11750)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11750)
			this->head = ret->next;
			HX_STACK_LINE(11750)
			{
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11750)
				o->elt = null();
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(11750)
				o->next = tmp5;
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11750)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(11750)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(11750)
			if ((tmp6)){
				HX_STACK_LINE(11750)
				this->pushmod = true;
			}
			HX_STACK_LINE(11750)
			this->modified = true;
			HX_STACK_LINE(11750)
			(this->length)--;
		}
		HX_STACK_LINE(11751)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_FluidArbiter_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","reverse",0xa16e9068,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.reverse","zpp_nape/util/Lists.hx",11754,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11755)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11755)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11756)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11757)
		while((true)){
			HX_STACK_LINE(11757)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11757)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11757)
			if ((tmp2)){
				HX_STACK_LINE(11757)
				break;
			}
			HX_STACK_LINE(11758)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11759)
			cur->next = pre;
			HX_STACK_LINE(11760)
			this->head = cur;
			HX_STACK_LINE(11761)
			pre = cur;
			HX_STACK_LINE(11762)
			cur = nx;
		}
		HX_STACK_LINE(11764)
		this->modified = true;
		HX_STACK_LINE(11765)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,reverse,(void))

bool ZNPList_ZPP_FluidArbiter_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","empty",0x8e4e1453,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.empty","zpp_nape/util/Lists.hx",11769,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11770)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11770)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11770)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,empty,return )

int ZNPList_ZPP_FluidArbiter_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","size",0xfd40a1bb,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.size","zpp_nape/util/Lists.hx",11774,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11775)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11775)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,size,return )

bool ZNPList_ZPP_FluidArbiter_obj::has( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","has",0xac26fba0,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.has","zpp_nape/util/Lists.hx",11777,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11778)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11778)
	{
		HX_STACK_LINE(11778)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11778)
		{
			HX_STACK_LINE(11778)
			ret = false;
			HX_STACK_LINE(11778)
			{
				HX_STACK_LINE(11778)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(11778)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(11778)
				while((true)){
					HX_STACK_LINE(11778)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(11778)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(11778)
					if ((tmp3)){
						HX_STACK_LINE(11778)
						break;
					}
					HX_STACK_LINE(11778)
					::zpp_nape::dynamics::ZPP_FluidArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(11778)
					{
						HX_STACK_LINE(11778)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(11778)
						if ((tmp4)){
							HX_STACK_LINE(11778)
							ret = true;
							HX_STACK_LINE(11778)
							break;
						}
					}
					HX_STACK_LINE(11778)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(11778)
		tmp = ret;
	}
	HX_STACK_LINE(11778)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,has,return )

bool ZNPList_ZPP_FluidArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","inlined_has",0xd42a0c0c,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.inlined_has","zpp_nape/util/Lists.hx",11782,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11791)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11792)
	{
		HX_STACK_LINE(11793)
		ret = false;
		HX_STACK_LINE(11794)
		{
			HX_STACK_LINE(11795)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11795)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11796)
			while((true)){
				HX_STACK_LINE(11796)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(11796)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(11796)
				if ((tmp2)){
					HX_STACK_LINE(11796)
					break;
				}
				HX_STACK_LINE(11797)
				::zpp_nape::dynamics::ZPP_FluidArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11798)
				{
					HX_STACK_LINE(11799)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(11799)
					if ((tmp3)){
						HX_STACK_LINE(11800)
						ret = true;
						HX_STACK_LINE(11801)
						break;
					}
				}
				HX_STACK_LINE(11804)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11808)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11808)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","front",0x2501f26f,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.front","zpp_nape/util/Lists.hx",11812,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11813)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11813)
	::zpp_nape::dynamics::ZPP_FluidArbiter tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11813)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,front,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","back",0xf1fddb21,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.back","zpp_nape/util/Lists.hx",11815,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11816)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11816)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11817)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11818)
	while((true)){
		HX_STACK_LINE(11818)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11818)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11818)
		if ((tmp2)){
			HX_STACK_LINE(11818)
			break;
		}
		HX_STACK_LINE(11819)
		ret = cur;
		HX_STACK_LINE(11820)
		cur = cur->next;
	}
	HX_STACK_LINE(11822)
	::zpp_nape::dynamics::ZPP_FluidArbiter tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11822)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","iterator_at",0xd8c8fc2a,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.iterator_at","zpp_nape/util/Lists.hx",11824,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11833)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11833)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11834)
	while((true)){
		HX_STACK_LINE(11834)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11834)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11834)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11834)
		if ((tmp2)){
			HX_STACK_LINE(11834)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(11834)
			tmp3 = false;
		}
		HX_STACK_LINE(11834)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(11834)
		if ((tmp4)){
			HX_STACK_LINE(11834)
			break;
		}
		HX_STACK_LINE(11834)
		ret = ret->next;
	}
	HX_STACK_LINE(11835)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11835)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_FluidArbiter","at",0x8df9436d,"zpp_nape.util.ZNPList_ZPP_FluidArbiter.at","zpp_nape/util/Lists.hx",11837,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11846)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11846)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11846)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11847)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11847)
	::zpp_nape::dynamics::ZPP_FluidArbiter tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(11847)
	if ((tmp2)){
		HX_STACK_LINE(11847)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(11847)
		tmp3 = null();
	}
	HX_STACK_LINE(11847)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,at,return )


ZNPList_ZPP_FluidArbiter_obj::ZNPList_ZPP_FluidArbiter_obj()
{
}

void ZNPList_ZPP_FluidArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_FluidArbiter);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_FluidArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_FluidArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter >(); return inValue; }
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

bool ZNPList_ZPP_FluidArbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_FluidArbiter*/ ,(int)offsetof(ZNPList_ZPP_FluidArbiter_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_FluidArbiter_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_FluidArbiter_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_FluidArbiter_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_FluidArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_FluidArbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_FluidArbiter_obj::__mClass;

void ZNPList_ZPP_FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_FluidArbiter","\xb4","\x01","\x3b","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_FluidArbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_FluidArbiter_obj >;
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
