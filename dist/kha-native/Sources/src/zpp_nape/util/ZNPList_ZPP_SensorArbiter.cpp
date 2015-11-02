#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","new",0xa534566c,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.new","zpp_nape/util/Lists.hx",11851,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11861)
	this->length = (int)0;
	HX_STACK_LINE(11860)
	this->pushmod = false;
	HX_STACK_LINE(11859)
	this->modified = false;
	HX_STACK_LINE(11852)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_SensorArbiter_obj::~ZNPList_ZPP_SensorArbiter_obj() { }

Dynamic ZNPList_ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > ZNPList_ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > _result_ = new ZNPList_ZPP_SensorArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > _result_ = new ZNPList_ZPP_SensorArbiter_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","begin",0xb2ed0b35,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.begin","zpp_nape/util/Lists.hx",11856,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11857)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11857)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,begin,return )

Void ZNPList_ZPP_SensorArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","setbegin",0x791ef1bb,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.setbegin","zpp_nape/util/Lists.hx",11864,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(11865)
		this->head = i;
		HX_STACK_LINE(11866)
		this->modified = true;
		HX_STACK_LINE(11867)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","add",0xa52a782d,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.add","zpp_nape/util/Lists.hx",11869,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11870)
	::zpp_nape::dynamics::ZPP_SensorArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11870)
	{
		HX_STACK_LINE(11870)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11870)
		{
			HX_STACK_LINE(11870)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11870)
			{
				HX_STACK_LINE(11870)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(11870)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11870)
				if ((tmp3)){
					HX_STACK_LINE(11870)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11870)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(11870)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11870)
					ret = tmp4;
					HX_STACK_LINE(11870)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
					HX_STACK_LINE(11870)
					ret->next = null();
				}
				HX_STACK_LINE(11870)
				Dynamic();
			}
			HX_STACK_LINE(11870)
			ret->elt = o;
			HX_STACK_LINE(11870)
			tmp1 = ret;
		}
		HX_STACK_LINE(11870)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(11870)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11870)
		temp->next = tmp2;
		HX_STACK_LINE(11870)
		this->head = temp;
		HX_STACK_LINE(11870)
		this->modified = true;
		HX_STACK_LINE(11870)
		(this->length)++;
		HX_STACK_LINE(11870)
		tmp = o;
	}
	HX_STACK_LINE(11870)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,add,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_add",0xc755be99,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_add","zpp_nape/util/Lists.hx",11874,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11883)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11883)
	{
		HX_STACK_LINE(11884)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11885)
		{
			HX_STACK_LINE(11886)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11886)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11886)
			if ((tmp2)){
				HX_STACK_LINE(11887)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11887)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(11893)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11893)
				ret = tmp3;
				HX_STACK_LINE(11894)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11895)
				ret->next = null();
			}
			HX_STACK_LINE(11900)
			Dynamic();
		}
		HX_STACK_LINE(11902)
		ret->elt = o;
		HX_STACK_LINE(11903)
		tmp = ret;
	}
	HX_STACK_LINE(11883)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11905)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11905)
	temp->next = tmp1;
	HX_STACK_LINE(11906)
	this->head = temp;
	HX_STACK_LINE(11907)
	this->modified = true;
	HX_STACK_LINE(11908)
	(this->length)++;
	HX_STACK_LINE(11909)
	::zpp_nape::dynamics::ZPP_SensorArbiter tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11909)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_add,return )

Void ZNPList_ZPP_SensorArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","addAll",0xe0a0d2f4,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.addAll","zpp_nape/util/Lists.hx",11920,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(11921)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(11922)
		while((true)){
			HX_STACK_LINE(11922)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11922)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11922)
			if ((tmp1)){
				HX_STACK_LINE(11922)
				break;
			}
			HX_STACK_LINE(11923)
			::zpp_nape::dynamics::ZPP_SensorArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(11924)
			::zpp_nape::dynamics::ZPP_SensorArbiter tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11924)
			this->add(tmp2);
			HX_STACK_LINE(11925)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","insert",0xdf830cad,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.insert","zpp_nape/util/Lists.hx",11929,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11930)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11930)
	{
		HX_STACK_LINE(11930)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11930)
		{
			HX_STACK_LINE(11930)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11930)
			{
				HX_STACK_LINE(11930)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(11930)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11930)
				if ((tmp3)){
					HX_STACK_LINE(11930)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11930)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(11930)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11930)
					ret = tmp4;
					HX_STACK_LINE(11930)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
					HX_STACK_LINE(11930)
					ret->next = null();
				}
				HX_STACK_LINE(11930)
				Dynamic();
			}
			HX_STACK_LINE(11930)
			ret->elt = o;
			HX_STACK_LINE(11930)
			tmp1 = ret;
		}
		HX_STACK_LINE(11930)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(11930)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11930)
		if ((tmp2)){
			HX_STACK_LINE(11930)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11930)
			temp->next = tmp3;
			HX_STACK_LINE(11930)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(11930)
			temp->next = cur->next;
			HX_STACK_LINE(11930)
			cur->next = temp;
		}
		HX_STACK_LINE(11930)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11930)
		this->pushmod = tmp3;
		HX_STACK_LINE(11930)
		(this->length)++;
		HX_STACK_LINE(11930)
		tmp = temp;
	}
	HX_STACK_LINE(11930)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_insert",0xb68a91c1,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_insert","zpp_nape/util/Lists.hx",11934,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11943)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11943)
	{
		HX_STACK_LINE(11944)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11945)
		{
			HX_STACK_LINE(11946)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11946)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11946)
			if ((tmp2)){
				HX_STACK_LINE(11947)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11947)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(11953)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11953)
				ret = tmp3;
				HX_STACK_LINE(11954)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11955)
				ret->next = null();
			}
			HX_STACK_LINE(11960)
			Dynamic();
		}
		HX_STACK_LINE(11962)
		ret->elt = o;
		HX_STACK_LINE(11963)
		tmp = ret;
	}
	HX_STACK_LINE(11943)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11965)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11965)
	if ((tmp1)){
		HX_STACK_LINE(11966)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11966)
		temp->next = tmp2;
		HX_STACK_LINE(11967)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11970)
		temp->next = cur->next;
		HX_STACK_LINE(11971)
		cur->next = temp;
	}
	HX_STACK_LINE(11973)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11973)
	this->pushmod = tmp2;
	HX_STACK_LINE(11974)
	(this->length)++;
	HX_STACK_LINE(11975)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(11975)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,inlined_insert,return )

Void ZNPList_ZPP_SensorArbiter_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","pop",0xa535e39d,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.pop","zpp_nape/util/Lists.hx",11978,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11978)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11978)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11978)
		this->head = ret->next;
		HX_STACK_LINE(11978)
		{
			HX_STACK_LINE(11978)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11978)
			o->elt = null();
			HX_STACK_LINE(11978)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11978)
			o->next = tmp1;
			HX_STACK_LINE(11978)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11978)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11978)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11978)
		if ((tmp2)){
			HX_STACK_LINE(11978)
			this->pushmod = true;
		}
		HX_STACK_LINE(11978)
		this->modified = true;
		HX_STACK_LINE(11978)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop,(void))

Void ZNPList_ZPP_SensorArbiter_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_pop",0xc7612a09,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_pop","zpp_nape/util/Lists.hx",11982,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11991)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11991)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11992)
		this->head = ret->next;
		HX_STACK_LINE(11994)
		{
			HX_STACK_LINE(11995)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12004)
			o->elt = null();
			HX_STACK_LINE(12005)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12005)
			o->next = tmp1;
			HX_STACK_LINE(12006)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12011)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12011)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12011)
		if ((tmp2)){
			HX_STACK_LINE(12011)
			this->pushmod = true;
		}
		HX_STACK_LINE(12012)
		this->modified = true;
		HX_STACK_LINE(12013)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","pop_unsafe",0x43260fc8,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.pop_unsafe","zpp_nape/util/Lists.hx",12015,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12016)
	::zpp_nape::dynamics::ZPP_SensorArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12016)
	{
		HX_STACK_LINE(12016)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12016)
		::zpp_nape::dynamics::ZPP_SensorArbiter ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12016)
		this->pop();
		HX_STACK_LINE(12016)
		tmp = ret;
	}
	HX_STACK_LINE(12016)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_pop_unsafe",0x78d7aedc,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_pop_unsafe","zpp_nape/util/Lists.hx",12020,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12029)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12029)
	::zpp_nape::dynamics::ZPP_SensorArbiter ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12030)
	this->pop();
	HX_STACK_LINE(12031)
	::zpp_nape::dynamics::ZPP_SensorArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12031)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_SensorArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","remove",0x462e65b8,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.remove","zpp_nape/util/Lists.hx",12042,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12042)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12042)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12042)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12042)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12042)
		while((true)){
			HX_STACK_LINE(12042)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12042)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12042)
			if ((tmp2)){
				HX_STACK_LINE(12042)
				break;
			}
			HX_STACK_LINE(12042)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12042)
			if ((tmp3)){
				HX_STACK_LINE(12042)
				{
					HX_STACK_LINE(12042)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12042)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12042)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12042)
					if ((tmp4)){
						HX_STACK_LINE(12042)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12042)
						old = tmp5;
						HX_STACK_LINE(12042)
						ret1 = old->next;
						HX_STACK_LINE(12042)
						this->head = ret1;
						HX_STACK_LINE(12042)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(12042)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(12042)
						if ((tmp7)){
							HX_STACK_LINE(12042)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12042)
						old = pre->next;
						HX_STACK_LINE(12042)
						ret1 = old->next;
						HX_STACK_LINE(12042)
						pre->next = ret1;
						HX_STACK_LINE(12042)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12042)
						if ((tmp5)){
							HX_STACK_LINE(12042)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12042)
					{
						HX_STACK_LINE(12042)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12042)
						o->elt = null();
						HX_STACK_LINE(12042)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12042)
						o->next = tmp5;
						HX_STACK_LINE(12042)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12042)
					this->modified = true;
					HX_STACK_LINE(12042)
					(this->length)--;
					HX_STACK_LINE(12042)
					this->pushmod = true;
					HX_STACK_LINE(12042)
					ret1;
				}
				HX_STACK_LINE(12042)
				ret = true;
				HX_STACK_LINE(12042)
				break;
			}
			HX_STACK_LINE(12042)
			pre = cur;
			HX_STACK_LINE(12042)
			cur = cur->next;
		}
		HX_STACK_LINE(12042)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,remove,(void))

bool ZNPList_ZPP_SensorArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","try_remove",0x5a50457c,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.try_remove","zpp_nape/util/Lists.hx",12044,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12053)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12054)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12054)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12055)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12056)
	while((true)){
		HX_STACK_LINE(12056)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12056)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12056)
		if ((tmp2)){
			HX_STACK_LINE(12056)
			break;
		}
		HX_STACK_LINE(12057)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12057)
		if ((tmp3)){
			HX_STACK_LINE(12058)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12058)
			this->erase(tmp4);
			HX_STACK_LINE(12059)
			ret = true;
			HX_STACK_LINE(12060)
			break;
		}
		HX_STACK_LINE(12062)
		pre = cur;
		HX_STACK_LINE(12063)
		cur = cur->next;
	}
	HX_STACK_LINE(12065)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12065)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,try_remove,return )

Void ZNPList_ZPP_SensorArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_remove",0x1d35eacc,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_remove","zpp_nape/util/Lists.hx",12078,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12078)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12078)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12078)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12078)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12078)
		while((true)){
			HX_STACK_LINE(12078)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12078)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12078)
			if ((tmp2)){
				HX_STACK_LINE(12078)
				break;
			}
			HX_STACK_LINE(12078)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12078)
			if ((tmp3)){
				HX_STACK_LINE(12078)
				{
					HX_STACK_LINE(12078)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12078)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12078)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12078)
					if ((tmp4)){
						HX_STACK_LINE(12078)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12078)
						old = tmp5;
						HX_STACK_LINE(12078)
						ret1 = old->next;
						HX_STACK_LINE(12078)
						this->head = ret1;
						HX_STACK_LINE(12078)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(12078)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(12078)
						if ((tmp7)){
							HX_STACK_LINE(12078)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12078)
						old = pre->next;
						HX_STACK_LINE(12078)
						ret1 = old->next;
						HX_STACK_LINE(12078)
						pre->next = ret1;
						HX_STACK_LINE(12078)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12078)
						if ((tmp5)){
							HX_STACK_LINE(12078)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12078)
					{
						HX_STACK_LINE(12078)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12078)
						o->elt = null();
						HX_STACK_LINE(12078)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12078)
						o->next = tmp5;
						HX_STACK_LINE(12078)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12078)
					this->modified = true;
					HX_STACK_LINE(12078)
					(this->length)--;
					HX_STACK_LINE(12078)
					this->pushmod = true;
					HX_STACK_LINE(12078)
					ret1;
				}
				HX_STACK_LINE(12078)
				ret = true;
				HX_STACK_LINE(12078)
				break;
			}
			HX_STACK_LINE(12078)
			pre = cur;
			HX_STACK_LINE(12078)
			cur = cur->next;
		}
		HX_STACK_LINE(12078)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_SensorArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_try_remove",0x9001e490,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_try_remove","zpp_nape/util/Lists.hx",12082,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12091)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12092)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12092)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12093)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12094)
	while((true)){
		HX_STACK_LINE(12094)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12094)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12094)
		if ((tmp2)){
			HX_STACK_LINE(12094)
			break;
		}
		HX_STACK_LINE(12095)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12095)
		if ((tmp3)){
			HX_STACK_LINE(12096)
			{
				HX_STACK_LINE(12096)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12096)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(12096)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(12096)
				if ((tmp4)){
					HX_STACK_LINE(12096)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12096)
					old = tmp5;
					HX_STACK_LINE(12096)
					ret1 = old->next;
					HX_STACK_LINE(12096)
					this->head = ret1;
					HX_STACK_LINE(12096)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(12096)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(12096)
					if ((tmp7)){
						HX_STACK_LINE(12096)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12096)
					old = pre->next;
					HX_STACK_LINE(12096)
					ret1 = old->next;
					HX_STACK_LINE(12096)
					pre->next = ret1;
					HX_STACK_LINE(12096)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12096)
					if ((tmp5)){
						HX_STACK_LINE(12096)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(12096)
				{
					HX_STACK_LINE(12096)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12096)
					o->elt = null();
					HX_STACK_LINE(12096)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12096)
					o->next = tmp5;
					HX_STACK_LINE(12096)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12096)
				this->modified = true;
				HX_STACK_LINE(12096)
				(this->length)--;
				HX_STACK_LINE(12096)
				this->pushmod = true;
				HX_STACK_LINE(12096)
				ret1;
			}
			HX_STACK_LINE(12097)
			ret = true;
			HX_STACK_LINE(12098)
			break;
		}
		HX_STACK_LINE(12100)
		pre = cur;
		HX_STACK_LINE(12101)
		cur = cur->next;
	}
	HX_STACK_LINE(12103)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12103)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","erase",0x75b409f2,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.erase","zpp_nape/util/Lists.hx",12105,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12106)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12106)
	{
		HX_STACK_LINE(12106)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(12106)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12106)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12106)
		if ((tmp1)){
			HX_STACK_LINE(12106)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12106)
			old = tmp2;
			HX_STACK_LINE(12106)
			ret = old->next;
			HX_STACK_LINE(12106)
			this->head = ret;
			HX_STACK_LINE(12106)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12106)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12106)
			if ((tmp4)){
				HX_STACK_LINE(12106)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(12106)
			old = pre->next;
			HX_STACK_LINE(12106)
			ret = old->next;
			HX_STACK_LINE(12106)
			pre->next = ret;
			HX_STACK_LINE(12106)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12106)
			if ((tmp2)){
				HX_STACK_LINE(12106)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(12106)
		{
			HX_STACK_LINE(12106)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12106)
			o->elt = null();
			HX_STACK_LINE(12106)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12106)
			o->next = tmp2;
			HX_STACK_LINE(12106)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12106)
		this->modified = true;
		HX_STACK_LINE(12106)
		(this->length)--;
		HX_STACK_LINE(12106)
		this->pushmod = true;
		HX_STACK_LINE(12106)
		tmp = ret;
	}
	HX_STACK_LINE(12106)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_erase",0xee0ec35e,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_erase","zpp_nape/util/Lists.hx",12110,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12119)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12120)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12121)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12121)
	if ((tmp)){
		HX_STACK_LINE(12122)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12122)
		old = tmp1;
		HX_STACK_LINE(12123)
		ret = old->next;
		HX_STACK_LINE(12124)
		this->head = ret;
		HX_STACK_LINE(12125)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12125)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12125)
		if ((tmp3)){
			HX_STACK_LINE(12125)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12128)
		old = pre->next;
		HX_STACK_LINE(12129)
		ret = old->next;
		HX_STACK_LINE(12130)
		pre->next = ret;
		HX_STACK_LINE(12131)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12131)
		if ((tmp1)){
			HX_STACK_LINE(12131)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12134)
	{
		HX_STACK_LINE(12135)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12144)
		o->elt = null();
		HX_STACK_LINE(12145)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12145)
		o->next = tmp1;
		HX_STACK_LINE(12146)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12151)
	this->modified = true;
	HX_STACK_LINE(12152)
	(this->length)--;
	HX_STACK_LINE(12153)
	this->pushmod = true;
	HX_STACK_LINE(12154)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12154)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","splice",0x01444ef0,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.splice","zpp_nape/util/Lists.hx",12156,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(12157)
	while((true)){
		HX_STACK_LINE(12157)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12157)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12157)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12157)
		if ((tmp1)){
			HX_STACK_LINE(12157)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(12157)
			tmp2 = false;
		}
		HX_STACK_LINE(12157)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12157)
		if ((tmp3)){
			HX_STACK_LINE(12157)
			break;
		}
		HX_STACK_LINE(12157)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12157)
		this->erase(tmp4);
	}
	HX_STACK_LINE(12158)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12158)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,splice,return )

Void ZNPList_ZPP_SensorArbiter_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","clear",0x4af29299,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.clear","zpp_nape/util/Lists.hx",12161,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12161)
		while((true)){
			HX_STACK_LINE(12161)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12161)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12161)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12161)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12161)
			if ((tmp3)){
				HX_STACK_LINE(12161)
				break;
			}
			HX_STACK_LINE(12161)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12161)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12161)
			this->head = ret->next;
			HX_STACK_LINE(12161)
			{
				HX_STACK_LINE(12161)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12161)
				o->elt = null();
				HX_STACK_LINE(12161)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(12161)
				o->next = tmp5;
				HX_STACK_LINE(12161)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12161)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(12161)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(12161)
			if ((tmp6)){
				HX_STACK_LINE(12161)
				this->pushmod = true;
			}
			HX_STACK_LINE(12161)
			this->modified = true;
			HX_STACK_LINE(12161)
			(this->length)--;
		}
		HX_STACK_LINE(12161)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,clear,(void))

Void ZNPList_ZPP_SensorArbiter_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_clear",0xc34d4c05,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_clear","zpp_nape/util/Lists.hx",12166,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12167)
		while((true)){
			HX_STACK_LINE(12167)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12167)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12167)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12167)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12167)
			if ((tmp3)){
				HX_STACK_LINE(12167)
				break;
			}
			HX_STACK_LINE(12167)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12167)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12167)
			this->head = ret->next;
			HX_STACK_LINE(12167)
			{
				HX_STACK_LINE(12167)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12167)
				o->elt = null();
				HX_STACK_LINE(12167)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(12167)
				o->next = tmp5;
				HX_STACK_LINE(12167)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12167)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(12167)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(12167)
			if ((tmp6)){
				HX_STACK_LINE(12167)
				this->pushmod = true;
			}
			HX_STACK_LINE(12167)
			this->modified = true;
			HX_STACK_LINE(12167)
			(this->length)--;
		}
		HX_STACK_LINE(12168)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_SensorArbiter_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","reverse",0x4a66b52e,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.reverse","zpp_nape/util/Lists.hx",12171,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12172)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12172)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12173)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12174)
		while((true)){
			HX_STACK_LINE(12174)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12174)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12174)
			if ((tmp2)){
				HX_STACK_LINE(12174)
				break;
			}
			HX_STACK_LINE(12175)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(12176)
			cur->next = pre;
			HX_STACK_LINE(12177)
			this->head = cur;
			HX_STACK_LINE(12178)
			pre = cur;
			HX_STACK_LINE(12179)
			cur = nx;
		}
		HX_STACK_LINE(12181)
		this->modified = true;
		HX_STACK_LINE(12182)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,reverse,(void))

bool ZNPList_ZPP_SensorArbiter_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","empty",0x72715b99,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.empty","zpp_nape/util/Lists.hx",12186,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12187)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12187)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12187)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,empty,return )

int ZNPList_ZPP_SensorArbiter_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","size",0xebe86535,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.size","zpp_nape/util/Lists.hx",12191,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12192)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12192)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,size,return )

bool ZNPList_ZPP_SensorArbiter_obj::has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","has",0xa52fc566,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.has","zpp_nape/util/Lists.hx",12194,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12195)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12195)
	{
		HX_STACK_LINE(12195)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12195)
		{
			HX_STACK_LINE(12195)
			ret = false;
			HX_STACK_LINE(12195)
			{
				HX_STACK_LINE(12195)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(12195)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(12195)
				while((true)){
					HX_STACK_LINE(12195)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(12195)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(12195)
					if ((tmp3)){
						HX_STACK_LINE(12195)
						break;
					}
					HX_STACK_LINE(12195)
					::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(12195)
					{
						HX_STACK_LINE(12195)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(12195)
						if ((tmp4)){
							HX_STACK_LINE(12195)
							ret = true;
							HX_STACK_LINE(12195)
							break;
						}
					}
					HX_STACK_LINE(12195)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(12195)
		tmp = ret;
	}
	HX_STACK_LINE(12195)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,has,return )

bool ZNPList_ZPP_SensorArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","inlined_has",0xc75b0bd2,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.inlined_has","zpp_nape/util/Lists.hx",12199,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12208)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12209)
	{
		HX_STACK_LINE(12210)
		ret = false;
		HX_STACK_LINE(12211)
		{
			HX_STACK_LINE(12212)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12212)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12213)
			while((true)){
				HX_STACK_LINE(12213)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(12213)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(12213)
				if ((tmp2)){
					HX_STACK_LINE(12213)
					break;
				}
				HX_STACK_LINE(12214)
				::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12215)
				{
					HX_STACK_LINE(12216)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(12216)
					if ((tmp3)){
						HX_STACK_LINE(12217)
						ret = true;
						HX_STACK_LINE(12218)
						break;
					}
				}
				HX_STACK_LINE(12221)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12225)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12225)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","front",0x092539b5,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.front","zpp_nape/util/Lists.hx",12229,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12230)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12230)
	::zpp_nape::dynamics::ZPP_SensorArbiter tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12230)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,front,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","back",0xe0a59e9b,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.back","zpp_nape/util/Lists.hx",12232,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12233)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12233)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12234)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12235)
	while((true)){
		HX_STACK_LINE(12235)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12235)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12235)
		if ((tmp2)){
			HX_STACK_LINE(12235)
			break;
		}
		HX_STACK_LINE(12236)
		ret = cur;
		HX_STACK_LINE(12237)
		cur = cur->next;
	}
	HX_STACK_LINE(12239)
	::zpp_nape::dynamics::ZPP_SensorArbiter tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12239)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","iterator_at",0xcbf9fbf0,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.iterator_at","zpp_nape/util/Lists.hx",12241,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(12250)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12250)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12251)
	while((true)){
		HX_STACK_LINE(12251)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12251)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12251)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12251)
		if ((tmp2)){
			HX_STACK_LINE(12251)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(12251)
			tmp3 = false;
		}
		HX_STACK_LINE(12251)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12251)
		if ((tmp4)){
			HX_STACK_LINE(12251)
			break;
		}
		HX_STACK_LINE(12251)
		ret = ret->next;
	}
	HX_STACK_LINE(12252)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12252)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SensorArbiter","at",0x523f5467,"zpp_nape.util.ZNPList_ZPP_SensorArbiter.at","zpp_nape/util/Lists.hx",12254,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(12263)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12263)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12263)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(12264)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12264)
	::zpp_nape::dynamics::ZPP_SensorArbiter tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12264)
	if ((tmp2)){
		HX_STACK_LINE(12264)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(12264)
		tmp3 = null();
	}
	HX_STACK_LINE(12264)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,at,return )


ZNPList_ZPP_SensorArbiter_obj::ZNPList_ZPP_SensorArbiter_obj()
{
}

void ZNPList_ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
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

bool ZNPList_ZPP_SensorArbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SensorArbiter*/ ,(int)offsetof(ZNPList_ZPP_SensorArbiter_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SensorArbiter_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SensorArbiter_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_SensorArbiter_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_SensorArbiter_obj::__mClass;

void ZNPList_ZPP_SensorArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_SensorArbiter","\x7a","\xf0","\xdd","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_SensorArbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_SensorArbiter_obj >;
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
