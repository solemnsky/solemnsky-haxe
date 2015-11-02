#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ConstraintListener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","new",0xdd87e258,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.new","zpp_nape/util/Lists.hx",4762,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(4772)
	this->length = (int)0;
	HX_STACK_LINE(4771)
	this->pushmod = false;
	HX_STACK_LINE(4770)
	this->modified = false;
	HX_STACK_LINE(4763)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_ConstraintListener_obj::~ZNPList_ZPP_ConstraintListener_obj() { }

Dynamic ZNPList_ZPP_ConstraintListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_ConstraintListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > ZNPList_ZPP_ConstraintListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > _result_ = new ZNPList_ZPP_ConstraintListener_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_ConstraintListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > _result_ = new ZNPList_ZPP_ConstraintListener_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","begin",0x502c6a21,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.begin","zpp_nape/util/Lists.hx",4767,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4768)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4768)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,begin,return )

Void ZNPList_ZPP_ConstraintListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","setbegin",0x2b4cae4f,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.setbegin","zpp_nape/util/Lists.hx",4775,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(4776)
		this->head = i;
		HX_STACK_LINE(4777)
		this->modified = true;
		HX_STACK_LINE(4778)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::add( ::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","add",0xdd7e0419,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.add","zpp_nape/util/Lists.hx",4780,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4781)
	::zpp_nape::callbacks::ZPP_ConstraintListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4781)
	{
		HX_STACK_LINE(4781)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4781)
		{
			HX_STACK_LINE(4781)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4781)
			{
				HX_STACK_LINE(4781)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4781)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4781)
				if ((tmp3)){
					HX_STACK_LINE(4781)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4781)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(4781)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4781)
					ret = tmp4;
					HX_STACK_LINE(4781)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(4781)
					ret->next = null();
				}
				HX_STACK_LINE(4781)
				Dynamic();
			}
			HX_STACK_LINE(4781)
			ret->elt = o;
			HX_STACK_LINE(4781)
			tmp1 = ret;
		}
		HX_STACK_LINE(4781)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(4781)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4781)
		temp->next = tmp2;
		HX_STACK_LINE(4781)
		this->head = temp;
		HX_STACK_LINE(4781)
		this->modified = true;
		HX_STACK_LINE(4781)
		(this->length)++;
		HX_STACK_LINE(4781)
		tmp = o;
	}
	HX_STACK_LINE(4781)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,add,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_add",0x95391685,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_add","zpp_nape/util/Lists.hx",4785,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4794)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4794)
	{
		HX_STACK_LINE(4795)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4796)
		{
			HX_STACK_LINE(4797)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4797)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4797)
			if ((tmp2)){
				HX_STACK_LINE(4798)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4798)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(4804)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4804)
				ret = tmp3;
				HX_STACK_LINE(4805)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4806)
				ret->next = null();
			}
			HX_STACK_LINE(4811)
			Dynamic();
		}
		HX_STACK_LINE(4813)
		ret->elt = o;
		HX_STACK_LINE(4814)
		tmp = ret;
	}
	HX_STACK_LINE(4794)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4816)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4816)
	temp->next = tmp1;
	HX_STACK_LINE(4817)
	this->head = temp;
	HX_STACK_LINE(4818)
	this->modified = true;
	HX_STACK_LINE(4819)
	(this->length)++;
	HX_STACK_LINE(4820)
	::zpp_nape::callbacks::ZPP_ConstraintListener tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4820)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_add,return )

Void ZNPList_ZPP_ConstraintListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","addAll",0xdad48288,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.addAll","zpp_nape/util/Lists.hx",4831,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(4832)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(4833)
		while((true)){
			HX_STACK_LINE(4833)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4833)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4833)
			if ((tmp1)){
				HX_STACK_LINE(4833)
				break;
			}
			HX_STACK_LINE(4834)
			::zpp_nape::callbacks::ZPP_ConstraintListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4835)
			::zpp_nape::callbacks::ZPP_ConstraintListener tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4835)
			this->add(tmp2);
			HX_STACK_LINE(4836)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur,::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","insert",0xd9b6bc41,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.insert","zpp_nape/util/Lists.hx",4840,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4841)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4841)
	{
		HX_STACK_LINE(4841)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4841)
		{
			HX_STACK_LINE(4841)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4841)
			{
				HX_STACK_LINE(4841)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4841)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4841)
				if ((tmp3)){
					HX_STACK_LINE(4841)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4841)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(4841)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4841)
					ret = tmp4;
					HX_STACK_LINE(4841)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(4841)
					ret->next = null();
				}
				HX_STACK_LINE(4841)
				Dynamic();
			}
			HX_STACK_LINE(4841)
			ret->elt = o;
			HX_STACK_LINE(4841)
			tmp1 = ret;
		}
		HX_STACK_LINE(4841)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(4841)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4841)
		if ((tmp2)){
			HX_STACK_LINE(4841)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4841)
			temp->next = tmp3;
			HX_STACK_LINE(4841)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(4841)
			temp->next = cur->next;
			HX_STACK_LINE(4841)
			cur->next = temp;
		}
		HX_STACK_LINE(4841)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4841)
		this->pushmod = tmp3;
		HX_STACK_LINE(4841)
		(this->length)++;
		HX_STACK_LINE(4841)
		tmp = temp;
	}
	HX_STACK_LINE(4841)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur,::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_insert",0x9615f555,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_insert","zpp_nape/util/Lists.hx",4845,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(4854)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4854)
	{
		HX_STACK_LINE(4855)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4856)
		{
			HX_STACK_LINE(4857)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4857)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4857)
			if ((tmp2)){
				HX_STACK_LINE(4858)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4858)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(4864)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(4864)
				ret = tmp3;
				HX_STACK_LINE(4865)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(4866)
				ret->next = null();
			}
			HX_STACK_LINE(4871)
			Dynamic();
		}
		HX_STACK_LINE(4873)
		ret->elt = o;
		HX_STACK_LINE(4874)
		tmp = ret;
	}
	HX_STACK_LINE(4854)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4876)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4876)
	if ((tmp1)){
		HX_STACK_LINE(4877)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4877)
		temp->next = tmp2;
		HX_STACK_LINE(4878)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4881)
		temp->next = cur->next;
		HX_STACK_LINE(4882)
		cur->next = temp;
	}
	HX_STACK_LINE(4884)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4884)
	this->pushmod = tmp2;
	HX_STACK_LINE(4885)
	(this->length)++;
	HX_STACK_LINE(4886)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4886)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,inlined_insert,return )

Void ZNPList_ZPP_ConstraintListener_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","pop",0xdd896f89,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.pop","zpp_nape/util/Lists.hx",4889,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4889)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4889)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4889)
		this->head = ret->next;
		HX_STACK_LINE(4889)
		{
			HX_STACK_LINE(4889)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4889)
			o->elt = null();
			HX_STACK_LINE(4889)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4889)
			o->next = tmp1;
			HX_STACK_LINE(4889)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4889)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4889)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4889)
		if ((tmp2)){
			HX_STACK_LINE(4889)
			this->pushmod = true;
		}
		HX_STACK_LINE(4889)
		this->modified = true;
		HX_STACK_LINE(4889)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,pop,(void))

Void ZNPList_ZPP_ConstraintListener_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_pop",0x954481f5,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_pop","zpp_nape/util/Lists.hx",4893,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(4902)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4902)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4903)
		this->head = ret->next;
		HX_STACK_LINE(4905)
		{
			HX_STACK_LINE(4906)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4915)
			o->elt = null();
			HX_STACK_LINE(4916)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4916)
			o->next = tmp1;
			HX_STACK_LINE(4917)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4922)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4922)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4922)
		if ((tmp2)){
			HX_STACK_LINE(4922)
			this->pushmod = true;
		}
		HX_STACK_LINE(4923)
		this->modified = true;
		HX_STACK_LINE(4924)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","pop_unsafe",0x29ab195c,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.pop_unsafe","zpp_nape/util/Lists.hx",4926,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4927)
	::zpp_nape::callbacks::ZPP_ConstraintListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4927)
	{
		HX_STACK_LINE(4927)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4927)
		::zpp_nape::callbacks::ZPP_ConstraintListener ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4927)
		this->pop();
		HX_STACK_LINE(4927)
		tmp = ret;
	}
	HX_STACK_LINE(4927)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_pop_unsafe",0x5c9e6c70,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_pop_unsafe","zpp_nape/util/Lists.hx",4931,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(4940)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4940)
	::zpp_nape::callbacks::ZPP_ConstraintListener ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4941)
	this->pop();
	HX_STACK_LINE(4942)
	::zpp_nape::callbacks::ZPP_ConstraintListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4942)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_ConstraintListener_obj::remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","remove",0x4062154c,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.remove","zpp_nape/util/Lists.hx",4953,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4953)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4953)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4953)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4953)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4953)
		while((true)){
			HX_STACK_LINE(4953)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4953)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4953)
			if ((tmp2)){
				HX_STACK_LINE(4953)
				break;
			}
			HX_STACK_LINE(4953)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4953)
			if ((tmp3)){
				HX_STACK_LINE(4953)
				{
					HX_STACK_LINE(4953)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4953)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4953)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4953)
					if ((tmp4)){
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4953)
						old = tmp5;
						HX_STACK_LINE(4953)
						ret1 = old->next;
						HX_STACK_LINE(4953)
						this->head = ret1;
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4953)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4953)
						if ((tmp7)){
							HX_STACK_LINE(4953)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4953)
						old = pre->next;
						HX_STACK_LINE(4953)
						ret1 = old->next;
						HX_STACK_LINE(4953)
						pre->next = ret1;
						HX_STACK_LINE(4953)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4953)
						if ((tmp5)){
							HX_STACK_LINE(4953)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4953)
					{
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4953)
						o->elt = null();
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4953)
						o->next = tmp5;
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4953)
					this->modified = true;
					HX_STACK_LINE(4953)
					(this->length)--;
					HX_STACK_LINE(4953)
					this->pushmod = true;
					HX_STACK_LINE(4953)
					ret1;
				}
				HX_STACK_LINE(4953)
				ret = true;
				HX_STACK_LINE(4953)
				break;
			}
			HX_STACK_LINE(4953)
			pre = cur;
			HX_STACK_LINE(4953)
			cur = cur->next;
		}
		HX_STACK_LINE(4953)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,remove,(void))

bool ZNPList_ZPP_ConstraintListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","try_remove",0x40d54f10,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.try_remove","zpp_nape/util/Lists.hx",4955,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(4964)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4965)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4965)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4966)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4967)
	while((true)){
		HX_STACK_LINE(4967)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4967)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4967)
		if ((tmp2)){
			HX_STACK_LINE(4967)
			break;
		}
		HX_STACK_LINE(4968)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(4968)
		if ((tmp3)){
			HX_STACK_LINE(4969)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(4969)
			this->erase(tmp4);
			HX_STACK_LINE(4970)
			ret = true;
			HX_STACK_LINE(4971)
			break;
		}
		HX_STACK_LINE(4973)
		pre = cur;
		HX_STACK_LINE(4974)
		cur = cur->next;
	}
	HX_STACK_LINE(4976)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4976)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,try_remove,return )

Void ZNPList_ZPP_ConstraintListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_remove",0xfcc14e60,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_remove","zpp_nape/util/Lists.hx",4989,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(4989)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4989)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(4989)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4989)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4989)
		while((true)){
			HX_STACK_LINE(4989)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4989)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(4989)
			if ((tmp2)){
				HX_STACK_LINE(4989)
				break;
			}
			HX_STACK_LINE(4989)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(4989)
			if ((tmp3)){
				HX_STACK_LINE(4989)
				{
					HX_STACK_LINE(4989)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4989)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4989)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(4989)
					if ((tmp4)){
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4989)
						old = tmp5;
						HX_STACK_LINE(4989)
						ret1 = old->next;
						HX_STACK_LINE(4989)
						this->head = ret1;
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(4989)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(4989)
						if ((tmp7)){
							HX_STACK_LINE(4989)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4989)
						old = pre->next;
						HX_STACK_LINE(4989)
						ret1 = old->next;
						HX_STACK_LINE(4989)
						pre->next = ret1;
						HX_STACK_LINE(4989)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4989)
						if ((tmp5)){
							HX_STACK_LINE(4989)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4989)
					{
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4989)
						o->elt = null();
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(4989)
						o->next = tmp5;
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4989)
					this->modified = true;
					HX_STACK_LINE(4989)
					(this->length)--;
					HX_STACK_LINE(4989)
					this->pushmod = true;
					HX_STACK_LINE(4989)
					ret1;
				}
				HX_STACK_LINE(4989)
				ret = true;
				HX_STACK_LINE(4989)
				break;
			}
			HX_STACK_LINE(4989)
			pre = cur;
			HX_STACK_LINE(4989)
			cur = cur->next;
		}
		HX_STACK_LINE(4989)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_ConstraintListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_try_remove",0x73c8a224,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_try_remove","zpp_nape/util/Lists.hx",4993,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5002)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5003)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5003)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5004)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5005)
	while((true)){
		HX_STACK_LINE(5005)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5005)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5005)
		if ((tmp2)){
			HX_STACK_LINE(5005)
			break;
		}
		HX_STACK_LINE(5006)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5006)
		if ((tmp3)){
			HX_STACK_LINE(5007)
			{
				HX_STACK_LINE(5007)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5007)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5007)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5007)
				if ((tmp4)){
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(5007)
					old = tmp5;
					HX_STACK_LINE(5007)
					ret1 = old->next;
					HX_STACK_LINE(5007)
					this->head = ret1;
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(5007)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(5007)
					if ((tmp7)){
						HX_STACK_LINE(5007)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5007)
					old = pre->next;
					HX_STACK_LINE(5007)
					ret1 = old->next;
					HX_STACK_LINE(5007)
					pre->next = ret1;
					HX_STACK_LINE(5007)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(5007)
					if ((tmp5)){
						HX_STACK_LINE(5007)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5007)
				{
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5007)
					o->elt = null();
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(5007)
					o->next = tmp5;
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5007)
				this->modified = true;
				HX_STACK_LINE(5007)
				(this->length)--;
				HX_STACK_LINE(5007)
				this->pushmod = true;
				HX_STACK_LINE(5007)
				ret1;
			}
			HX_STACK_LINE(5008)
			ret = true;
			HX_STACK_LINE(5009)
			break;
		}
		HX_STACK_LINE(5011)
		pre = cur;
		HX_STACK_LINE(5012)
		cur = cur->next;
	}
	HX_STACK_LINE(5014)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5014)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","erase",0x12f368de,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.erase","zpp_nape/util/Lists.hx",5016,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5017)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5017)
	{
		HX_STACK_LINE(5017)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(5017)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5017)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5017)
		if ((tmp1)){
			HX_STACK_LINE(5017)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5017)
			old = tmp2;
			HX_STACK_LINE(5017)
			ret = old->next;
			HX_STACK_LINE(5017)
			this->head = ret;
			HX_STACK_LINE(5017)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5017)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5017)
			if ((tmp4)){
				HX_STACK_LINE(5017)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(5017)
			old = pre->next;
			HX_STACK_LINE(5017)
			ret = old->next;
			HX_STACK_LINE(5017)
			pre->next = ret;
			HX_STACK_LINE(5017)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5017)
			if ((tmp2)){
				HX_STACK_LINE(5017)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(5017)
		{
			HX_STACK_LINE(5017)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5017)
			o->elt = null();
			HX_STACK_LINE(5017)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5017)
			o->next = tmp2;
			HX_STACK_LINE(5017)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5017)
		this->modified = true;
		HX_STACK_LINE(5017)
		(this->length)--;
		HX_STACK_LINE(5017)
		this->pushmod = true;
		HX_STACK_LINE(5017)
		tmp = ret;
	}
	HX_STACK_LINE(5017)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_erase",0x7d68ee4a,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_erase","zpp_nape/util/Lists.hx",5021,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5030)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5031)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5032)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5032)
	if ((tmp)){
		HX_STACK_LINE(5033)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5033)
		old = tmp1;
		HX_STACK_LINE(5034)
		ret = old->next;
		HX_STACK_LINE(5035)
		this->head = ret;
		HX_STACK_LINE(5036)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5036)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5036)
		if ((tmp3)){
			HX_STACK_LINE(5036)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5039)
		old = pre->next;
		HX_STACK_LINE(5040)
		ret = old->next;
		HX_STACK_LINE(5041)
		pre->next = ret;
		HX_STACK_LINE(5042)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5042)
		if ((tmp1)){
			HX_STACK_LINE(5042)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5045)
	{
		HX_STACK_LINE(5046)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5055)
		o->elt = null();
		HX_STACK_LINE(5056)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5056)
		o->next = tmp1;
		HX_STACK_LINE(5057)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5062)
	this->modified = true;
	HX_STACK_LINE(5063)
	(this->length)--;
	HX_STACK_LINE(5064)
	this->pushmod = true;
	HX_STACK_LINE(5065)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5065)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","splice",0xfb77fe84,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.splice","zpp_nape/util/Lists.hx",5067,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(5068)
	while((true)){
		HX_STACK_LINE(5068)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5068)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5068)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5068)
		if ((tmp1)){
			HX_STACK_LINE(5068)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(5068)
			tmp2 = false;
		}
		HX_STACK_LINE(5068)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5068)
		if ((tmp3)){
			HX_STACK_LINE(5068)
			break;
		}
		HX_STACK_LINE(5068)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5068)
		this->erase(tmp4);
	}
	HX_STACK_LINE(5069)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5069)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,splice,return )

Void ZNPList_ZPP_ConstraintListener_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","clear",0xe831f185,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.clear","zpp_nape/util/Lists.hx",5072,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5072)
		while((true)){
			HX_STACK_LINE(5072)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(5072)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5072)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5072)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5072)
			if ((tmp3)){
				HX_STACK_LINE(5072)
				break;
			}
			HX_STACK_LINE(5072)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5072)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5072)
			this->head = ret->next;
			HX_STACK_LINE(5072)
			{
				HX_STACK_LINE(5072)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5072)
				o->elt = null();
				HX_STACK_LINE(5072)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5072)
				o->next = tmp5;
				HX_STACK_LINE(5072)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5072)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5072)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5072)
			if ((tmp6)){
				HX_STACK_LINE(5072)
				this->pushmod = true;
			}
			HX_STACK_LINE(5072)
			this->modified = true;
			HX_STACK_LINE(5072)
			(this->length)--;
		}
		HX_STACK_LINE(5072)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,clear,(void))

Void ZNPList_ZPP_ConstraintListener_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_clear",0x52a776f1,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_clear","zpp_nape/util/Lists.hx",5077,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5078)
		while((true)){
			HX_STACK_LINE(5078)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(5078)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5078)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5078)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5078)
			if ((tmp3)){
				HX_STACK_LINE(5078)
				break;
			}
			HX_STACK_LINE(5078)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5078)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5078)
			this->head = ret->next;
			HX_STACK_LINE(5078)
			{
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5078)
				o->elt = null();
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5078)
				o->next = tmp5;
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5078)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5078)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5078)
			if ((tmp6)){
				HX_STACK_LINE(5078)
				this->pushmod = true;
			}
			HX_STACK_LINE(5078)
			this->modified = true;
			HX_STACK_LINE(5078)
			(this->length)--;
		}
		HX_STACK_LINE(5079)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_ConstraintListener_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","reverse",0x3d6ca71a,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.reverse","zpp_nape/util/Lists.hx",5082,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5083)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5083)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5084)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5085)
		while((true)){
			HX_STACK_LINE(5085)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5085)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5085)
			if ((tmp2)){
				HX_STACK_LINE(5085)
				break;
			}
			HX_STACK_LINE(5086)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5087)
			cur->next = pre;
			HX_STACK_LINE(5088)
			this->head = cur;
			HX_STACK_LINE(5089)
			pre = cur;
			HX_STACK_LINE(5090)
			cur = nx;
		}
		HX_STACK_LINE(5092)
		this->modified = true;
		HX_STACK_LINE(5093)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,reverse,(void))

bool ZNPList_ZPP_ConstraintListener_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","empty",0x0fb0ba85,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.empty","zpp_nape/util/Lists.hx",5097,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5098)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5098)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5098)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,empty,return )

int ZNPList_ZPP_ConstraintListener_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","size",0xfcaf47c9,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.size","zpp_nape/util/Lists.hx",5102,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5103)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,size,return )

bool ZNPList_ZPP_ConstraintListener_obj::has( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","has",0xdd835152,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.has","zpp_nape/util/Lists.hx",5105,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5106)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5106)
	{
		HX_STACK_LINE(5106)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5106)
		{
			HX_STACK_LINE(5106)
			ret = false;
			HX_STACK_LINE(5106)
			{
				HX_STACK_LINE(5106)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(5106)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(5106)
				while((true)){
					HX_STACK_LINE(5106)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(5106)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(5106)
					if ((tmp3)){
						HX_STACK_LINE(5106)
						break;
					}
					HX_STACK_LINE(5106)
					::zpp_nape::callbacks::ZPP_ConstraintListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(5106)
					{
						HX_STACK_LINE(5106)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(5106)
						if ((tmp4)){
							HX_STACK_LINE(5106)
							ret = true;
							HX_STACK_LINE(5106)
							break;
						}
					}
					HX_STACK_LINE(5106)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(5106)
		tmp = ret;
	}
	HX_STACK_LINE(5106)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,has,return )

bool ZNPList_ZPP_ConstraintListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","inlined_has",0x953e63be,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.inlined_has","zpp_nape/util/Lists.hx",5110,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5119)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5120)
	{
		HX_STACK_LINE(5121)
		ret = false;
		HX_STACK_LINE(5122)
		{
			HX_STACK_LINE(5123)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(5123)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5124)
			while((true)){
				HX_STACK_LINE(5124)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(5124)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5124)
				if ((tmp2)){
					HX_STACK_LINE(5124)
					break;
				}
				HX_STACK_LINE(5125)
				::zpp_nape::callbacks::ZPP_ConstraintListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5126)
				{
					HX_STACK_LINE(5127)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(5127)
					if ((tmp3)){
						HX_STACK_LINE(5128)
						ret = true;
						HX_STACK_LINE(5129)
						break;
					}
				}
				HX_STACK_LINE(5132)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5136)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5136)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","front",0xa66498a1,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.front","zpp_nape/util/Lists.hx",5140,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5141)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5141)
	::zpp_nape::callbacks::ZPP_ConstraintListener tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5141)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,front,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","back",0xf16c812f,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.back","zpp_nape/util/Lists.hx",5143,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5144)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5144)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5145)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5146)
	while((true)){
		HX_STACK_LINE(5146)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5146)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5146)
		if ((tmp2)){
			HX_STACK_LINE(5146)
			break;
		}
		HX_STACK_LINE(5147)
		ret = cur;
		HX_STACK_LINE(5148)
		cur = cur->next;
	}
	HX_STACK_LINE(5150)
	::zpp_nape::callbacks::ZPP_ConstraintListener tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5150)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","iterator_at",0x99dd53dc,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.iterator_at","zpp_nape/util/Lists.hx",5152,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(5161)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5161)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5162)
	while((true)){
		HX_STACK_LINE(5162)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5162)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5162)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5162)
		if ((tmp2)){
			HX_STACK_LINE(5162)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(5162)
			tmp3 = false;
		}
		HX_STACK_LINE(5162)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5162)
		if ((tmp4)){
			HX_STACK_LINE(5162)
			break;
		}
		HX_STACK_LINE(5162)
		ret = ret->next;
	}
	HX_STACK_LINE(5163)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5163)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ConstraintListener","at",0xae56a9fb,"zpp_nape.util.ZNPList_ZPP_ConstraintListener.at","zpp_nape/util/Lists.hx",5165,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(5174)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5174)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5174)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(5175)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5175)
	::zpp_nape::callbacks::ZPP_ConstraintListener tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5175)
	if ((tmp2)){
		HX_STACK_LINE(5175)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(5175)
		tmp3 = null();
	}
	HX_STACK_LINE(5175)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,at,return )


ZNPList_ZPP_ConstraintListener_obj::ZNPList_ZPP_ConstraintListener_obj()
{
}

void ZNPList_ZPP_ConstraintListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ConstraintListener);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ConstraintListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_ConstraintListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_ConstraintListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener >(); return inValue; }
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

bool ZNPList_ZPP_ConstraintListener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_ConstraintListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ConstraintListener*/ ,(int)offsetof(ZNPList_ZPP_ConstraintListener_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ConstraintListener_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ConstraintListener_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_ConstraintListener_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_ConstraintListener_obj::__mClass;

void ZNPList_ZPP_ConstraintListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_ConstraintListener","\x66","\x16","\x2a","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_ConstraintListener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_ConstraintListener_obj >;
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
