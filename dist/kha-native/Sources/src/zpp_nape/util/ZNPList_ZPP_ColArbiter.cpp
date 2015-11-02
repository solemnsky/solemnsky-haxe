#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter
#include <zpp_nape/util/ZNPList_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ColArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","new",0xa0591ef0,"zpp_nape.util.ZNPList_ZPP_ColArbiter.new","zpp_nape/util/Lists.hx",12268,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12278)
	this->length = (int)0;
	HX_STACK_LINE(12277)
	this->pushmod = false;
	HX_STACK_LINE(12276)
	this->modified = false;
	HX_STACK_LINE(12269)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_ColArbiter_obj::~ZNPList_ZPP_ColArbiter_obj() { }

Dynamic ZNPList_ZPP_ColArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_ColArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > ZNPList_ZPP_ColArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > _result_ = new ZNPList_ZPP_ColArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_ColArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > _result_ = new ZNPList_ZPP_ColArbiter_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","begin",0x5737fcb9,"zpp_nape.util.ZNPList_ZPP_ColArbiter.begin","zpp_nape/util/Lists.hx",12273,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12274)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12274)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,begin,return )

Void ZNPList_ZPP_ColArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","setbegin",0xc2c0cab7,"zpp_nape.util.ZNPList_ZPP_ColArbiter.setbegin","zpp_nape/util/Lists.hx",12281,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(12282)
		this->head = i;
		HX_STACK_LINE(12283)
		this->modified = true;
		HX_STACK_LINE(12284)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::add( ::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","add",0xa04f40b1,"zpp_nape.util.ZNPList_ZPP_ColArbiter.add","zpp_nape/util/Lists.hx",12286,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12287)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12287)
	{
		HX_STACK_LINE(12287)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12287)
		{
			HX_STACK_LINE(12287)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12287)
			{
				HX_STACK_LINE(12287)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(12287)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12287)
				if ((tmp3)){
					HX_STACK_LINE(12287)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12287)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(12287)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12287)
					ret = tmp4;
					HX_STACK_LINE(12287)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
					HX_STACK_LINE(12287)
					ret->next = null();
				}
				HX_STACK_LINE(12287)
				Dynamic();
			}
			HX_STACK_LINE(12287)
			ret->elt = o;
			HX_STACK_LINE(12287)
			tmp1 = ret;
		}
		HX_STACK_LINE(12287)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(12287)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12287)
		temp->next = tmp2;
		HX_STACK_LINE(12287)
		this->head = temp;
		HX_STACK_LINE(12287)
		this->modified = true;
		HX_STACK_LINE(12287)
		(this->length)++;
		HX_STACK_LINE(12287)
		tmp = o;
	}
	HX_STACK_LINE(12287)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,add,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_add",0xe4fcab1d,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_add","zpp_nape/util/Lists.hx",12291,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12300)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12300)
	{
		HX_STACK_LINE(12301)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12302)
		{
			HX_STACK_LINE(12303)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12303)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12303)
			if ((tmp2)){
				HX_STACK_LINE(12304)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12304)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(12310)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12310)
				ret = tmp3;
				HX_STACK_LINE(12311)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(12312)
				ret->next = null();
			}
			HX_STACK_LINE(12317)
			Dynamic();
		}
		HX_STACK_LINE(12319)
		ret->elt = o;
		HX_STACK_LINE(12320)
		tmp = ret;
	}
	HX_STACK_LINE(12300)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12322)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12322)
	temp->next = tmp1;
	HX_STACK_LINE(12323)
	this->head = temp;
	HX_STACK_LINE(12324)
	this->modified = true;
	HX_STACK_LINE(12325)
	(this->length)++;
	HX_STACK_LINE(12326)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12326)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_add,return )

Void ZNPList_ZPP_ColArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ColArbiter x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","addAll",0xfde934f0,"zpp_nape.util.ZNPList_ZPP_ColArbiter.addAll","zpp_nape/util/Lists.hx",12337,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(12338)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(12339)
		while((true)){
			HX_STACK_LINE(12339)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12339)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12339)
			if ((tmp1)){
				HX_STACK_LINE(12339)
				break;
			}
			HX_STACK_LINE(12340)
			::zpp_nape::dynamics::ZPP_ColArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(12341)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12341)
			this->add(tmp2);
			HX_STACK_LINE(12342)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur,::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","insert",0xfccb6ea9,"zpp_nape.util.ZNPList_ZPP_ColArbiter.insert","zpp_nape/util/Lists.hx",12346,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12347)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12347)
	{
		HX_STACK_LINE(12347)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12347)
		{
			HX_STACK_LINE(12347)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12347)
			{
				HX_STACK_LINE(12347)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(12347)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12347)
				if ((tmp3)){
					HX_STACK_LINE(12347)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12347)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(12347)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12347)
					ret = tmp4;
					HX_STACK_LINE(12347)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
					HX_STACK_LINE(12347)
					ret->next = null();
				}
				HX_STACK_LINE(12347)
				Dynamic();
			}
			HX_STACK_LINE(12347)
			ret->elt = o;
			HX_STACK_LINE(12347)
			tmp1 = ret;
		}
		HX_STACK_LINE(12347)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(12347)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12347)
		if ((tmp2)){
			HX_STACK_LINE(12347)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12347)
			temp->next = tmp3;
			HX_STACK_LINE(12347)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(12347)
			temp->next = cur->next;
			HX_STACK_LINE(12347)
			cur->next = temp;
		}
		HX_STACK_LINE(12347)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12347)
		this->pushmod = tmp3;
		HX_STACK_LINE(12347)
		(this->length)++;
		HX_STACK_LINE(12347)
		tmp = temp;
	}
	HX_STACK_LINE(12347)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur,::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_insert",0x7a3f4fbd,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_insert","zpp_nape/util/Lists.hx",12351,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12360)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12360)
	{
		HX_STACK_LINE(12361)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12362)
		{
			HX_STACK_LINE(12363)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12363)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12363)
			if ((tmp2)){
				HX_STACK_LINE(12364)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12364)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(12370)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12370)
				ret = tmp3;
				HX_STACK_LINE(12371)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(12372)
				ret->next = null();
			}
			HX_STACK_LINE(12377)
			Dynamic();
		}
		HX_STACK_LINE(12379)
		ret->elt = o;
		HX_STACK_LINE(12380)
		tmp = ret;
	}
	HX_STACK_LINE(12360)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12382)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12382)
	if ((tmp1)){
		HX_STACK_LINE(12383)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12383)
		temp->next = tmp2;
		HX_STACK_LINE(12384)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(12387)
		temp->next = cur->next;
		HX_STACK_LINE(12388)
		cur->next = temp;
	}
	HX_STACK_LINE(12390)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12390)
	this->pushmod = tmp2;
	HX_STACK_LINE(12391)
	(this->length)++;
	HX_STACK_LINE(12392)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12392)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,inlined_insert,return )

Void ZNPList_ZPP_ColArbiter_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","pop",0xa05aac21,"zpp_nape.util.ZNPList_ZPP_ColArbiter.pop","zpp_nape/util/Lists.hx",12395,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12395)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12395)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12395)
		this->head = ret->next;
		HX_STACK_LINE(12395)
		{
			HX_STACK_LINE(12395)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12395)
			o->elt = null();
			HX_STACK_LINE(12395)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12395)
			o->next = tmp1;
			HX_STACK_LINE(12395)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12395)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12395)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12395)
		if ((tmp2)){
			HX_STACK_LINE(12395)
			this->pushmod = true;
		}
		HX_STACK_LINE(12395)
		this->modified = true;
		HX_STACK_LINE(12395)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,pop,(void))

Void ZNPList_ZPP_ColArbiter_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_pop",0xe508168d,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_pop","zpp_nape/util/Lists.hx",12399,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12408)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12408)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12409)
		this->head = ret->next;
		HX_STACK_LINE(12411)
		{
			HX_STACK_LINE(12412)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12421)
			o->elt = null();
			HX_STACK_LINE(12422)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12422)
			o->next = tmp1;
			HX_STACK_LINE(12423)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12428)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12428)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12428)
		if ((tmp2)){
			HX_STACK_LINE(12428)
			this->pushmod = true;
		}
		HX_STACK_LINE(12429)
		this->modified = true;
		HX_STACK_LINE(12430)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","pop_unsafe",0x9bad1fc4,"zpp_nape.util.ZNPList_ZPP_ColArbiter.pop_unsafe","zpp_nape/util/Lists.hx",12432,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12433)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12433)
	{
		HX_STACK_LINE(12433)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12433)
		::zpp_nape::dynamics::ZPP_ColArbiter ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12433)
		this->pop();
		HX_STACK_LINE(12433)
		tmp = ret;
	}
	HX_STACK_LINE(12433)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_pop_unsafe",0xfb291ad8,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_pop_unsafe","zpp_nape/util/Lists.hx",12437,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12446)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12446)
	::zpp_nape::dynamics::ZPP_ColArbiter ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12447)
	this->pop();
	HX_STACK_LINE(12448)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12448)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_ColArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","remove",0x6376c7b4,"zpp_nape.util.ZNPList_ZPP_ColArbiter.remove","zpp_nape/util/Lists.hx",12459,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12459)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12459)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12459)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12459)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12459)
		while((true)){
			HX_STACK_LINE(12459)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12459)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12459)
			if ((tmp2)){
				HX_STACK_LINE(12459)
				break;
			}
			HX_STACK_LINE(12459)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12459)
			if ((tmp3)){
				HX_STACK_LINE(12459)
				{
					HX_STACK_LINE(12459)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12459)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12459)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12459)
					if ((tmp4)){
						HX_STACK_LINE(12459)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12459)
						old = tmp5;
						HX_STACK_LINE(12459)
						ret1 = old->next;
						HX_STACK_LINE(12459)
						this->head = ret1;
						HX_STACK_LINE(12459)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(12459)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(12459)
						if ((tmp7)){
							HX_STACK_LINE(12459)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12459)
						old = pre->next;
						HX_STACK_LINE(12459)
						ret1 = old->next;
						HX_STACK_LINE(12459)
						pre->next = ret1;
						HX_STACK_LINE(12459)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12459)
						if ((tmp5)){
							HX_STACK_LINE(12459)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12459)
					{
						HX_STACK_LINE(12459)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12459)
						o->elt = null();
						HX_STACK_LINE(12459)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12459)
						o->next = tmp5;
						HX_STACK_LINE(12459)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12459)
					this->modified = true;
					HX_STACK_LINE(12459)
					(this->length)--;
					HX_STACK_LINE(12459)
					this->pushmod = true;
					HX_STACK_LINE(12459)
					ret1;
				}
				HX_STACK_LINE(12459)
				ret = true;
				HX_STACK_LINE(12459)
				break;
			}
			HX_STACK_LINE(12459)
			pre = cur;
			HX_STACK_LINE(12459)
			cur = cur->next;
		}
		HX_STACK_LINE(12459)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,remove,(void))

bool ZNPList_ZPP_ColArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","try_remove",0xb2d75578,"zpp_nape.util.ZNPList_ZPP_ColArbiter.try_remove","zpp_nape/util/Lists.hx",12461,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12470)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12471)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12471)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12472)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12473)
	while((true)){
		HX_STACK_LINE(12473)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12473)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12473)
		if ((tmp2)){
			HX_STACK_LINE(12473)
			break;
		}
		HX_STACK_LINE(12474)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12474)
		if ((tmp3)){
			HX_STACK_LINE(12475)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12475)
			this->erase(tmp4);
			HX_STACK_LINE(12476)
			ret = true;
			HX_STACK_LINE(12477)
			break;
		}
		HX_STACK_LINE(12479)
		pre = cur;
		HX_STACK_LINE(12480)
		cur = cur->next;
	}
	HX_STACK_LINE(12482)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12482)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,try_remove,return )

Void ZNPList_ZPP_ColArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_remove",0xe0eaa8c8,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_remove","zpp_nape/util/Lists.hx",12495,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12495)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12495)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12495)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12495)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12495)
		while((true)){
			HX_STACK_LINE(12495)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12495)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12495)
			if ((tmp2)){
				HX_STACK_LINE(12495)
				break;
			}
			HX_STACK_LINE(12495)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12495)
			if ((tmp3)){
				HX_STACK_LINE(12495)
				{
					HX_STACK_LINE(12495)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12495)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12495)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12495)
					if ((tmp4)){
						HX_STACK_LINE(12495)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12495)
						old = tmp5;
						HX_STACK_LINE(12495)
						ret1 = old->next;
						HX_STACK_LINE(12495)
						this->head = ret1;
						HX_STACK_LINE(12495)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(12495)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(12495)
						if ((tmp7)){
							HX_STACK_LINE(12495)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12495)
						old = pre->next;
						HX_STACK_LINE(12495)
						ret1 = old->next;
						HX_STACK_LINE(12495)
						pre->next = ret1;
						HX_STACK_LINE(12495)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12495)
						if ((tmp5)){
							HX_STACK_LINE(12495)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12495)
					{
						HX_STACK_LINE(12495)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12495)
						o->elt = null();
						HX_STACK_LINE(12495)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12495)
						o->next = tmp5;
						HX_STACK_LINE(12495)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12495)
					this->modified = true;
					HX_STACK_LINE(12495)
					(this->length)--;
					HX_STACK_LINE(12495)
					this->pushmod = true;
					HX_STACK_LINE(12495)
					ret1;
				}
				HX_STACK_LINE(12495)
				ret = true;
				HX_STACK_LINE(12495)
				break;
			}
			HX_STACK_LINE(12495)
			pre = cur;
			HX_STACK_LINE(12495)
			cur = cur->next;
		}
		HX_STACK_LINE(12495)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_ColArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_try_remove",0x1253508c,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_try_remove","zpp_nape/util/Lists.hx",12499,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12508)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12509)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12509)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12510)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12511)
	while((true)){
		HX_STACK_LINE(12511)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12511)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12511)
		if ((tmp2)){
			HX_STACK_LINE(12511)
			break;
		}
		HX_STACK_LINE(12512)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12512)
		if ((tmp3)){
			HX_STACK_LINE(12513)
			{
				HX_STACK_LINE(12513)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12513)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(12513)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(12513)
				if ((tmp4)){
					HX_STACK_LINE(12513)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12513)
					old = tmp5;
					HX_STACK_LINE(12513)
					ret1 = old->next;
					HX_STACK_LINE(12513)
					this->head = ret1;
					HX_STACK_LINE(12513)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(12513)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(12513)
					if ((tmp7)){
						HX_STACK_LINE(12513)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12513)
					old = pre->next;
					HX_STACK_LINE(12513)
					ret1 = old->next;
					HX_STACK_LINE(12513)
					pre->next = ret1;
					HX_STACK_LINE(12513)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12513)
					if ((tmp5)){
						HX_STACK_LINE(12513)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(12513)
				{
					HX_STACK_LINE(12513)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12513)
					o->elt = null();
					HX_STACK_LINE(12513)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12513)
					o->next = tmp5;
					HX_STACK_LINE(12513)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12513)
				this->modified = true;
				HX_STACK_LINE(12513)
				(this->length)--;
				HX_STACK_LINE(12513)
				this->pushmod = true;
				HX_STACK_LINE(12513)
				ret1;
			}
			HX_STACK_LINE(12514)
			ret = true;
			HX_STACK_LINE(12515)
			break;
		}
		HX_STACK_LINE(12517)
		pre = cur;
		HX_STACK_LINE(12518)
		cur = cur->next;
	}
	HX_STACK_LINE(12520)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12520)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","erase",0x19fefb76,"zpp_nape.util.ZNPList_ZPP_ColArbiter.erase","zpp_nape/util/Lists.hx",12522,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12523)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12523)
	{
		HX_STACK_LINE(12523)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(12523)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12523)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12523)
		if ((tmp1)){
			HX_STACK_LINE(12523)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12523)
			old = tmp2;
			HX_STACK_LINE(12523)
			ret = old->next;
			HX_STACK_LINE(12523)
			this->head = ret;
			HX_STACK_LINE(12523)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12523)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12523)
			if ((tmp4)){
				HX_STACK_LINE(12523)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(12523)
			old = pre->next;
			HX_STACK_LINE(12523)
			ret = old->next;
			HX_STACK_LINE(12523)
			pre->next = ret;
			HX_STACK_LINE(12523)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12523)
			if ((tmp2)){
				HX_STACK_LINE(12523)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(12523)
		{
			HX_STACK_LINE(12523)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12523)
			o->elt = null();
			HX_STACK_LINE(12523)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12523)
			o->next = tmp2;
			HX_STACK_LINE(12523)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12523)
		this->modified = true;
		HX_STACK_LINE(12523)
		(this->length)--;
		HX_STACK_LINE(12523)
		this->pushmod = true;
		HX_STACK_LINE(12523)
		tmp = ret;
	}
	HX_STACK_LINE(12523)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_erase",0xf4acd8e2,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_erase","zpp_nape/util/Lists.hx",12527,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12536)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12537)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12538)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12538)
	if ((tmp)){
		HX_STACK_LINE(12539)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12539)
		old = tmp1;
		HX_STACK_LINE(12540)
		ret = old->next;
		HX_STACK_LINE(12541)
		this->head = ret;
		HX_STACK_LINE(12542)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12542)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12542)
		if ((tmp3)){
			HX_STACK_LINE(12542)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12545)
		old = pre->next;
		HX_STACK_LINE(12546)
		ret = old->next;
		HX_STACK_LINE(12547)
		pre->next = ret;
		HX_STACK_LINE(12548)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12548)
		if ((tmp1)){
			HX_STACK_LINE(12548)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12551)
	{
		HX_STACK_LINE(12552)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12561)
		o->elt = null();
		HX_STACK_LINE(12562)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12562)
		o->next = tmp1;
		HX_STACK_LINE(12563)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12568)
	this->modified = true;
	HX_STACK_LINE(12569)
	(this->length)--;
	HX_STACK_LINE(12570)
	this->pushmod = true;
	HX_STACK_LINE(12571)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12571)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","splice",0x1e8cb0ec,"zpp_nape.util.ZNPList_ZPP_ColArbiter.splice","zpp_nape/util/Lists.hx",12573,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(12574)
	while((true)){
		HX_STACK_LINE(12574)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12574)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12574)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12574)
		if ((tmp1)){
			HX_STACK_LINE(12574)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(12574)
			tmp2 = false;
		}
		HX_STACK_LINE(12574)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12574)
		if ((tmp3)){
			HX_STACK_LINE(12574)
			break;
		}
		HX_STACK_LINE(12574)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12574)
		this->erase(tmp4);
	}
	HX_STACK_LINE(12575)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12575)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,splice,return )

Void ZNPList_ZPP_ColArbiter_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","clear",0xef3d841d,"zpp_nape.util.ZNPList_ZPP_ColArbiter.clear","zpp_nape/util/Lists.hx",12578,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12578)
		while((true)){
			HX_STACK_LINE(12578)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12578)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12578)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12578)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12578)
			if ((tmp3)){
				HX_STACK_LINE(12578)
				break;
			}
			HX_STACK_LINE(12578)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12578)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12578)
			this->head = ret->next;
			HX_STACK_LINE(12578)
			{
				HX_STACK_LINE(12578)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12578)
				o->elt = null();
				HX_STACK_LINE(12578)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(12578)
				o->next = tmp5;
				HX_STACK_LINE(12578)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12578)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(12578)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(12578)
			if ((tmp6)){
				HX_STACK_LINE(12578)
				this->pushmod = true;
			}
			HX_STACK_LINE(12578)
			this->modified = true;
			HX_STACK_LINE(12578)
			(this->length)--;
		}
		HX_STACK_LINE(12578)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,clear,(void))

Void ZNPList_ZPP_ColArbiter_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_clear",0xc9eb6189,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_clear","zpp_nape/util/Lists.hx",12583,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12584)
		while((true)){
			HX_STACK_LINE(12584)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12584)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12584)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12584)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12584)
			if ((tmp3)){
				HX_STACK_LINE(12584)
				break;
			}
			HX_STACK_LINE(12584)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12584)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12584)
			this->head = ret->next;
			HX_STACK_LINE(12584)
			{
				HX_STACK_LINE(12584)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12584)
				o->elt = null();
				HX_STACK_LINE(12584)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(12584)
				o->next = tmp5;
				HX_STACK_LINE(12584)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12584)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(12584)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(12584)
			if ((tmp6)){
				HX_STACK_LINE(12584)
				this->pushmod = true;
			}
			HX_STACK_LINE(12584)
			this->modified = true;
			HX_STACK_LINE(12584)
			(this->length)--;
		}
		HX_STACK_LINE(12585)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_ColArbiter_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","reverse",0xcc740fb2,"zpp_nape.util.ZNPList_ZPP_ColArbiter.reverse","zpp_nape/util/Lists.hx",12588,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12589)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12589)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12590)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12591)
		while((true)){
			HX_STACK_LINE(12591)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12591)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12591)
			if ((tmp2)){
				HX_STACK_LINE(12591)
				break;
			}
			HX_STACK_LINE(12592)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(12593)
			cur->next = pre;
			HX_STACK_LINE(12594)
			this->head = cur;
			HX_STACK_LINE(12595)
			pre = cur;
			HX_STACK_LINE(12596)
			cur = nx;
		}
		HX_STACK_LINE(12598)
		this->modified = true;
		HX_STACK_LINE(12599)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,reverse,(void))

bool ZNPList_ZPP_ColArbiter_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","empty",0x16bc4d1d,"zpp_nape.util.ZNPList_ZPP_ColArbiter.empty","zpp_nape/util/Lists.hx",12603,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12604)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12604)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12604)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,empty,return )

int ZNPList_ZPP_ColArbiter_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","size",0xb0f31031,"zpp_nape.util.ZNPList_ZPP_ColArbiter.size","zpp_nape/util/Lists.hx",12608,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12609)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12609)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,size,return )

bool ZNPList_ZPP_ColArbiter_obj::has( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","has",0xa0548dea,"zpp_nape.util.ZNPList_ZPP_ColArbiter.has","zpp_nape/util/Lists.hx",12611,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12612)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12612)
	{
		HX_STACK_LINE(12612)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12612)
		{
			HX_STACK_LINE(12612)
			ret = false;
			HX_STACK_LINE(12612)
			{
				HX_STACK_LINE(12612)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(12612)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(12612)
				while((true)){
					HX_STACK_LINE(12612)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(12612)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(12612)
					if ((tmp3)){
						HX_STACK_LINE(12612)
						break;
					}
					HX_STACK_LINE(12612)
					::zpp_nape::dynamics::ZPP_ColArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(12612)
					{
						HX_STACK_LINE(12612)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(12612)
						if ((tmp4)){
							HX_STACK_LINE(12612)
							ret = true;
							HX_STACK_LINE(12612)
							break;
						}
					}
					HX_STACK_LINE(12612)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(12612)
		tmp = ret;
	}
	HX_STACK_LINE(12612)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,has,return )

bool ZNPList_ZPP_ColArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","inlined_has",0xe501f856,"zpp_nape.util.ZNPList_ZPP_ColArbiter.inlined_has","zpp_nape/util/Lists.hx",12616,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12625)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12626)
	{
		HX_STACK_LINE(12627)
		ret = false;
		HX_STACK_LINE(12628)
		{
			HX_STACK_LINE(12629)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12629)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12630)
			while((true)){
				HX_STACK_LINE(12630)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(12630)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(12630)
				if ((tmp2)){
					HX_STACK_LINE(12630)
					break;
				}
				HX_STACK_LINE(12631)
				::zpp_nape::dynamics::ZPP_ColArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12632)
				{
					HX_STACK_LINE(12633)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(12633)
					if ((tmp3)){
						HX_STACK_LINE(12634)
						ret = true;
						HX_STACK_LINE(12635)
						break;
					}
				}
				HX_STACK_LINE(12638)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12642)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12642)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","front",0xad702b39,"zpp_nape.util.ZNPList_ZPP_ColArbiter.front","zpp_nape/util/Lists.hx",12646,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12647)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12647)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12647)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,front,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","back",0xa5b04997,"zpp_nape.util.ZNPList_ZPP_ColArbiter.back","zpp_nape/util/Lists.hx",12649,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12650)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12650)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12651)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12652)
	while((true)){
		HX_STACK_LINE(12652)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12652)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12652)
		if ((tmp2)){
			HX_STACK_LINE(12652)
			break;
		}
		HX_STACK_LINE(12653)
		ret = cur;
		HX_STACK_LINE(12654)
		cur = cur->next;
	}
	HX_STACK_LINE(12656)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12656)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","iterator_at",0xe9a0e874,"zpp_nape.util.ZNPList_ZPP_ColArbiter.iterator_at","zpp_nape/util/Lists.hx",12658,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(12667)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12667)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12668)
	while((true)){
		HX_STACK_LINE(12668)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12668)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12668)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12668)
		if ((tmp2)){
			HX_STACK_LINE(12668)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(12668)
			tmp3 = false;
		}
		HX_STACK_LINE(12668)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12668)
		if ((tmp4)){
			HX_STACK_LINE(12668)
			break;
		}
		HX_STACK_LINE(12668)
		ret = ret->next;
	}
	HX_STACK_LINE(12669)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12669)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ColArbiter","at",0x00b80863,"zpp_nape.util.ZNPList_ZPP_ColArbiter.at","zpp_nape/util/Lists.hx",12671,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(12680)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12680)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12680)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(12681)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12681)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12681)
	if ((tmp2)){
		HX_STACK_LINE(12681)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(12681)
		tmp3 = null();
	}
	HX_STACK_LINE(12681)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,at,return )


ZNPList_ZPP_ColArbiter_obj::ZNPList_ZPP_ColArbiter_obj()
{
}

void ZNPList_ZPP_ColArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ColArbiter);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ColArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_ColArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_ColArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ColArbiter >(); return inValue; }
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

bool ZNPList_ZPP_ColArbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_ColArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ColArbiter*/ ,(int)offsetof(ZNPList_ZPP_ColArbiter_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ColArbiter_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ColArbiter_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_ColArbiter_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ColArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ColArbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_ColArbiter_obj::__mClass;

void ZNPList_ZPP_ColArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_ColArbiter","\xfe","\x26","\x4b","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_ColArbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_ColArbiter_obj >;
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
