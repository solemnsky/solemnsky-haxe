#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Listener
#include <zpp_nape/util/ZNPList_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Listener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","new",0xc620aa1b,"zpp_nape.util.ZNPList_ZPP_Listener.new","zpp_nape/util/Lists.hx",12685,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12695)
	this->length = (int)0;
	HX_STACK_LINE(12694)
	this->pushmod = false;
	HX_STACK_LINE(12693)
	this->modified = false;
	HX_STACK_LINE(12686)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Listener_obj::~ZNPList_ZPP_Listener_obj() { }

Dynamic ZNPList_ZPP_Listener_obj::__CreateEmpty() { return  new ZNPList_ZPP_Listener_obj; }
hx::ObjectPtr< ZNPList_ZPP_Listener_obj > ZNPList_ZPP_Listener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Listener_obj > _result_ = new ZNPList_ZPP_Listener_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Listener_obj > _result_ = new ZNPList_ZPP_Listener_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","begin",0x2658e8a4,"zpp_nape.util.ZNPList_ZPP_Listener.begin","zpp_nape/util/Lists.hx",12690,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12691)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12691)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,begin,return )

Void ZNPList_ZPP_Listener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Listener i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","setbegin",0x1819e3ac,"zpp_nape.util.ZNPList_ZPP_Listener.setbegin","zpp_nape/util/Lists.hx",12698,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(12699)
		this->head = i;
		HX_STACK_LINE(12700)
		this->modified = true;
		HX_STACK_LINE(12701)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::add( ::zpp_nape::callbacks::ZPP_Listener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","add",0xc616cbdc,"zpp_nape.util.ZNPList_ZPP_Listener.add","zpp_nape/util/Lists.hx",12703,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12704)
	::zpp_nape::callbacks::ZPP_Listener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12704)
	{
		HX_STACK_LINE(12704)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12704)
		{
			HX_STACK_LINE(12704)
			::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12704)
			{
				HX_STACK_LINE(12704)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(12704)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12704)
				if ((tmp3)){
					HX_STACK_LINE(12704)
					::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12704)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(12704)
					::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12704)
					ret = tmp4;
					HX_STACK_LINE(12704)
					::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(12704)
					ret->next = null();
				}
				HX_STACK_LINE(12704)
				Dynamic();
			}
			HX_STACK_LINE(12704)
			ret->elt = o;
			HX_STACK_LINE(12704)
			tmp1 = ret;
		}
		HX_STACK_LINE(12704)
		::zpp_nape::util::ZNPNode_ZPP_Listener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(12704)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12704)
		temp->next = tmp2;
		HX_STACK_LINE(12704)
		this->head = temp;
		HX_STACK_LINE(12704)
		this->modified = true;
		HX_STACK_LINE(12704)
		(this->length)++;
		HX_STACK_LINE(12704)
		tmp = o;
	}
	HX_STACK_LINE(12704)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,add,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_Listener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_add",0x2c53d948,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_add","zpp_nape/util/Lists.hx",12708,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12717)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12717)
	{
		HX_STACK_LINE(12718)
		::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12719)
		{
			HX_STACK_LINE(12720)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12720)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12720)
			if ((tmp2)){
				HX_STACK_LINE(12721)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12721)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(12727)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12727)
				ret = tmp3;
				HX_STACK_LINE(12728)
				::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(12729)
				ret->next = null();
			}
			HX_STACK_LINE(12734)
			Dynamic();
		}
		HX_STACK_LINE(12736)
		ret->elt = o;
		HX_STACK_LINE(12737)
		tmp = ret;
	}
	HX_STACK_LINE(12717)
	::zpp_nape::util::ZNPNode_ZPP_Listener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12739)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12739)
	temp->next = tmp1;
	HX_STACK_LINE(12740)
	this->head = temp;
	HX_STACK_LINE(12741)
	this->modified = true;
	HX_STACK_LINE(12742)
	(this->length)++;
	HX_STACK_LINE(12743)
	::zpp_nape::callbacks::ZPP_Listener tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12743)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_add,return )

Void ZNPList_ZPP_Listener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Listener x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","addAll",0x6b96b6a5,"zpp_nape.util.ZNPList_ZPP_Listener.addAll","zpp_nape/util/Lists.hx",12754,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(12755)
		::zpp_nape::util::ZNPNode_ZPP_Listener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(12756)
		while((true)){
			HX_STACK_LINE(12756)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12756)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12756)
			if ((tmp1)){
				HX_STACK_LINE(12756)
				break;
			}
			HX_STACK_LINE(12757)
			::zpp_nape::callbacks::ZPP_Listener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(12758)
			::zpp_nape::callbacks::ZPP_Listener tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12758)
			this->add(tmp2);
			HX_STACK_LINE(12759)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Listener cur,::zpp_nape::callbacks::ZPP_Listener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","insert",0x6a78f05e,"zpp_nape.util.ZNPList_ZPP_Listener.insert","zpp_nape/util/Lists.hx",12763,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12764)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12764)
	{
		HX_STACK_LINE(12764)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12764)
		{
			HX_STACK_LINE(12764)
			::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12764)
			{
				HX_STACK_LINE(12764)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(12764)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12764)
				if ((tmp3)){
					HX_STACK_LINE(12764)
					::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12764)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(12764)
					::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12764)
					ret = tmp4;
					HX_STACK_LINE(12764)
					::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(12764)
					ret->next = null();
				}
				HX_STACK_LINE(12764)
				Dynamic();
			}
			HX_STACK_LINE(12764)
			ret->elt = o;
			HX_STACK_LINE(12764)
			tmp1 = ret;
		}
		HX_STACK_LINE(12764)
		::zpp_nape::util::ZNPNode_ZPP_Listener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(12764)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12764)
		if ((tmp2)){
			HX_STACK_LINE(12764)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12764)
			temp->next = tmp3;
			HX_STACK_LINE(12764)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(12764)
			temp->next = cur->next;
			HX_STACK_LINE(12764)
			cur->next = temp;
		}
		HX_STACK_LINE(12764)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12764)
		this->pushmod = tmp3;
		HX_STACK_LINE(12764)
		(this->length)++;
		HX_STACK_LINE(12764)
		tmp = temp;
	}
	HX_STACK_LINE(12764)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Listener_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Listener cur,::zpp_nape::callbacks::ZPP_Listener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_insert",0xa7850e72,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_insert","zpp_nape/util/Lists.hx",12768,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(12777)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12777)
	{
		HX_STACK_LINE(12778)
		::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12779)
		{
			HX_STACK_LINE(12780)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12780)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12780)
			if ((tmp2)){
				HX_STACK_LINE(12781)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12781)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(12787)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(12787)
				ret = tmp3;
				HX_STACK_LINE(12788)
				::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(12789)
				ret->next = null();
			}
			HX_STACK_LINE(12794)
			Dynamic();
		}
		HX_STACK_LINE(12796)
		ret->elt = o;
		HX_STACK_LINE(12797)
		tmp = ret;
	}
	HX_STACK_LINE(12777)
	::zpp_nape::util::ZNPNode_ZPP_Listener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12799)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12799)
	if ((tmp1)){
		HX_STACK_LINE(12800)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12800)
		temp->next = tmp2;
		HX_STACK_LINE(12801)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(12804)
		temp->next = cur->next;
		HX_STACK_LINE(12805)
		cur->next = temp;
	}
	HX_STACK_LINE(12807)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12807)
	this->pushmod = tmp2;
	HX_STACK_LINE(12808)
	(this->length)++;
	HX_STACK_LINE(12809)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12809)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Listener_obj,inlined_insert,return )

Void ZNPList_ZPP_Listener_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","pop",0xc622374c,"zpp_nape.util.ZNPList_ZPP_Listener.pop","zpp_nape/util/Lists.hx",12812,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12812)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12812)
		::zpp_nape::util::ZNPNode_ZPP_Listener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12812)
		this->head = ret->next;
		HX_STACK_LINE(12812)
		{
			HX_STACK_LINE(12812)
			::zpp_nape::util::ZNPNode_ZPP_Listener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12812)
			o->elt = null();
			HX_STACK_LINE(12812)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12812)
			o->next = tmp1;
			HX_STACK_LINE(12812)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12812)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12812)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12812)
		if ((tmp2)){
			HX_STACK_LINE(12812)
			this->pushmod = true;
		}
		HX_STACK_LINE(12812)
		this->modified = true;
		HX_STACK_LINE(12812)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,pop,(void))

Void ZNPList_ZPP_Listener_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_pop",0x2c5f44b8,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_pop","zpp_nape/util/Lists.hx",12816,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12825)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12825)
		::zpp_nape::util::ZNPNode_ZPP_Listener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12826)
		this->head = ret->next;
		HX_STACK_LINE(12828)
		{
			HX_STACK_LINE(12829)
			::zpp_nape::util::ZNPNode_ZPP_Listener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12838)
			o->elt = null();
			HX_STACK_LINE(12839)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12839)
			o->next = tmp1;
			HX_STACK_LINE(12840)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12845)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12845)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12845)
		if ((tmp2)){
			HX_STACK_LINE(12845)
			this->pushmod = true;
		}
		HX_STACK_LINE(12846)
		this->modified = true;
		HX_STACK_LINE(12847)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","pop_unsafe",0xcc361ff9,"zpp_nape.util.ZNPList_ZPP_Listener.pop_unsafe","zpp_nape/util/Lists.hx",12849,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12850)
	::zpp_nape::callbacks::ZPP_Listener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12850)
	{
		HX_STACK_LINE(12850)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12850)
		::zpp_nape::callbacks::ZPP_Listener ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12850)
		this->pop();
		HX_STACK_LINE(12850)
		tmp = ret;
	}
	HX_STACK_LINE(12850)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_pop_unsafe",0x08acd80d,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_pop_unsafe","zpp_nape/util/Lists.hx",12854,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12863)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12863)
	::zpp_nape::callbacks::ZPP_Listener ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12864)
	this->pop();
	HX_STACK_LINE(12865)
	::zpp_nape::callbacks::ZPP_Listener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12865)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Listener_obj::remove( ::zpp_nape::callbacks::ZPP_Listener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","remove",0xd1244969,"zpp_nape.util.ZNPList_ZPP_Listener.remove","zpp_nape/util/Lists.hx",12876,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12876)
		::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12876)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12876)
		::zpp_nape::util::ZNPNode_ZPP_Listener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12876)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12876)
		while((true)){
			HX_STACK_LINE(12876)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12876)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12876)
			if ((tmp2)){
				HX_STACK_LINE(12876)
				break;
			}
			HX_STACK_LINE(12876)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12876)
			if ((tmp3)){
				HX_STACK_LINE(12876)
				{
					HX_STACK_LINE(12876)
					::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12876)
					::zpp_nape::util::ZNPNode_ZPP_Listener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12876)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12876)
					if ((tmp4)){
						HX_STACK_LINE(12876)
						::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12876)
						old = tmp5;
						HX_STACK_LINE(12876)
						ret1 = old->next;
						HX_STACK_LINE(12876)
						this->head = ret1;
						HX_STACK_LINE(12876)
						::zpp_nape::util::ZNPNode_ZPP_Listener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(12876)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(12876)
						if ((tmp7)){
							HX_STACK_LINE(12876)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12876)
						old = pre->next;
						HX_STACK_LINE(12876)
						ret1 = old->next;
						HX_STACK_LINE(12876)
						pre->next = ret1;
						HX_STACK_LINE(12876)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12876)
						if ((tmp5)){
							HX_STACK_LINE(12876)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12876)
					{
						HX_STACK_LINE(12876)
						::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12876)
						o->elt = null();
						HX_STACK_LINE(12876)
						::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12876)
						o->next = tmp5;
						HX_STACK_LINE(12876)
						::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12876)
					this->modified = true;
					HX_STACK_LINE(12876)
					(this->length)--;
					HX_STACK_LINE(12876)
					this->pushmod = true;
					HX_STACK_LINE(12876)
					ret1;
				}
				HX_STACK_LINE(12876)
				ret = true;
				HX_STACK_LINE(12876)
				break;
			}
			HX_STACK_LINE(12876)
			pre = cur;
			HX_STACK_LINE(12876)
			cur = cur->next;
		}
		HX_STACK_LINE(12876)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,remove,(void))

bool ZNPList_ZPP_Listener_obj::try_remove( ::zpp_nape::callbacks::ZPP_Listener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","try_remove",0xe36055ad,"zpp_nape.util.ZNPList_ZPP_Listener.try_remove","zpp_nape/util/Lists.hx",12878,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12887)
	::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12888)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12888)
	::zpp_nape::util::ZNPNode_ZPP_Listener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12889)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12890)
	while((true)){
		HX_STACK_LINE(12890)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12890)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12890)
		if ((tmp2)){
			HX_STACK_LINE(12890)
			break;
		}
		HX_STACK_LINE(12891)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12891)
		if ((tmp3)){
			HX_STACK_LINE(12892)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12892)
			this->erase(tmp4);
			HX_STACK_LINE(12893)
			ret = true;
			HX_STACK_LINE(12894)
			break;
		}
		HX_STACK_LINE(12896)
		pre = cur;
		HX_STACK_LINE(12897)
		cur = cur->next;
	}
	HX_STACK_LINE(12899)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12899)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,try_remove,return )

Void ZNPList_ZPP_Listener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_Listener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_remove",0x0e30677d,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_remove","zpp_nape/util/Lists.hx",12912,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12912)
		::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12912)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12912)
		::zpp_nape::util::ZNPNode_ZPP_Listener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12912)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12912)
		while((true)){
			HX_STACK_LINE(12912)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12912)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12912)
			if ((tmp2)){
				HX_STACK_LINE(12912)
				break;
			}
			HX_STACK_LINE(12912)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12912)
			if ((tmp3)){
				HX_STACK_LINE(12912)
				{
					HX_STACK_LINE(12912)
					::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12912)
					::zpp_nape::util::ZNPNode_ZPP_Listener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12912)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(12912)
					if ((tmp4)){
						HX_STACK_LINE(12912)
						::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12912)
						old = tmp5;
						HX_STACK_LINE(12912)
						ret1 = old->next;
						HX_STACK_LINE(12912)
						this->head = ret1;
						HX_STACK_LINE(12912)
						::zpp_nape::util::ZNPNode_ZPP_Listener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(12912)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(12912)
						if ((tmp7)){
							HX_STACK_LINE(12912)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12912)
						old = pre->next;
						HX_STACK_LINE(12912)
						ret1 = old->next;
						HX_STACK_LINE(12912)
						pre->next = ret1;
						HX_STACK_LINE(12912)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12912)
						if ((tmp5)){
							HX_STACK_LINE(12912)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12912)
					{
						HX_STACK_LINE(12912)
						::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12912)
						o->elt = null();
						HX_STACK_LINE(12912)
						::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(12912)
						o->next = tmp5;
						HX_STACK_LINE(12912)
						::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12912)
					this->modified = true;
					HX_STACK_LINE(12912)
					(this->length)--;
					HX_STACK_LINE(12912)
					this->pushmod = true;
					HX_STACK_LINE(12912)
					ret1;
				}
				HX_STACK_LINE(12912)
				ret = true;
				HX_STACK_LINE(12912)
				break;
			}
			HX_STACK_LINE(12912)
			pre = cur;
			HX_STACK_LINE(12912)
			cur = cur->next;
		}
		HX_STACK_LINE(12912)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_remove,(void))

bool ZNPList_ZPP_Listener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_Listener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_try_remove",0x1fd70dc1,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_try_remove","zpp_nape/util/Lists.hx",12916,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12925)
	::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12926)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12926)
	::zpp_nape::util::ZNPNode_ZPP_Listener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12927)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12928)
	while((true)){
		HX_STACK_LINE(12928)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12928)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12928)
		if ((tmp2)){
			HX_STACK_LINE(12928)
			break;
		}
		HX_STACK_LINE(12929)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12929)
		if ((tmp3)){
			HX_STACK_LINE(12930)
			{
				HX_STACK_LINE(12930)
				::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12930)
				::zpp_nape::util::ZNPNode_ZPP_Listener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(12930)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(12930)
				if ((tmp4)){
					HX_STACK_LINE(12930)
					::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12930)
					old = tmp5;
					HX_STACK_LINE(12930)
					ret1 = old->next;
					HX_STACK_LINE(12930)
					this->head = ret1;
					HX_STACK_LINE(12930)
					::zpp_nape::util::ZNPNode_ZPP_Listener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(12930)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(12930)
					if ((tmp7)){
						HX_STACK_LINE(12930)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12930)
					old = pre->next;
					HX_STACK_LINE(12930)
					ret1 = old->next;
					HX_STACK_LINE(12930)
					pre->next = ret1;
					HX_STACK_LINE(12930)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12930)
					if ((tmp5)){
						HX_STACK_LINE(12930)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(12930)
				{
					HX_STACK_LINE(12930)
					::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12930)
					o->elt = null();
					HX_STACK_LINE(12930)
					::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(12930)
					o->next = tmp5;
					HX_STACK_LINE(12930)
					::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12930)
				this->modified = true;
				HX_STACK_LINE(12930)
				(this->length)--;
				HX_STACK_LINE(12930)
				this->pushmod = true;
				HX_STACK_LINE(12930)
				ret1;
			}
			HX_STACK_LINE(12931)
			ret = true;
			HX_STACK_LINE(12932)
			break;
		}
		HX_STACK_LINE(12934)
		pre = cur;
		HX_STACK_LINE(12935)
		cur = cur->next;
	}
	HX_STACK_LINE(12937)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12937)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Listener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","erase",0xe91fe761,"zpp_nape.util.ZNPList_ZPP_Listener.erase","zpp_nape/util/Lists.hx",12939,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12940)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12940)
	{
		HX_STACK_LINE(12940)
		::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(12940)
		::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12940)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12940)
		if ((tmp1)){
			HX_STACK_LINE(12940)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12940)
			old = tmp2;
			HX_STACK_LINE(12940)
			ret = old->next;
			HX_STACK_LINE(12940)
			this->head = ret;
			HX_STACK_LINE(12940)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12940)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12940)
			if ((tmp4)){
				HX_STACK_LINE(12940)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(12940)
			old = pre->next;
			HX_STACK_LINE(12940)
			ret = old->next;
			HX_STACK_LINE(12940)
			pre->next = ret;
			HX_STACK_LINE(12940)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12940)
			if ((tmp2)){
				HX_STACK_LINE(12940)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(12940)
		{
			HX_STACK_LINE(12940)
			::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12940)
			o->elt = null();
			HX_STACK_LINE(12940)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12940)
			o->next = tmp2;
			HX_STACK_LINE(12940)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12940)
		this->modified = true;
		HX_STACK_LINE(12940)
		(this->length)--;
		HX_STACK_LINE(12940)
		this->pushmod = true;
		HX_STACK_LINE(12940)
		tmp = ret;
	}
	HX_STACK_LINE(12940)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Listener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_erase",0x22cc27cd,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_erase","zpp_nape/util/Lists.hx",12944,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12953)
	::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12954)
	::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12955)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12955)
	if ((tmp)){
		HX_STACK_LINE(12956)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12956)
		old = tmp1;
		HX_STACK_LINE(12957)
		ret = old->next;
		HX_STACK_LINE(12958)
		this->head = ret;
		HX_STACK_LINE(12959)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12959)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12959)
		if ((tmp3)){
			HX_STACK_LINE(12959)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12962)
		old = pre->next;
		HX_STACK_LINE(12963)
		ret = old->next;
		HX_STACK_LINE(12964)
		pre->next = ret;
		HX_STACK_LINE(12965)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12965)
		if ((tmp1)){
			HX_STACK_LINE(12965)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12968)
	{
		HX_STACK_LINE(12969)
		::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12978)
		o->elt = null();
		HX_STACK_LINE(12979)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12979)
		o->next = tmp1;
		HX_STACK_LINE(12980)
		::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12985)
	this->modified = true;
	HX_STACK_LINE(12986)
	(this->length)--;
	HX_STACK_LINE(12987)
	this->pushmod = true;
	HX_STACK_LINE(12988)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12988)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Listener pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","splice",0x8c3a32a1,"zpp_nape.util.ZNPList_ZPP_Listener.splice","zpp_nape/util/Lists.hx",12990,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(12991)
	while((true)){
		HX_STACK_LINE(12991)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12991)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12991)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12991)
		if ((tmp1)){
			HX_STACK_LINE(12991)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(12991)
			tmp2 = false;
		}
		HX_STACK_LINE(12991)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12991)
		if ((tmp3)){
			HX_STACK_LINE(12991)
			break;
		}
		HX_STACK_LINE(12991)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12991)
		this->erase(tmp4);
	}
	HX_STACK_LINE(12992)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12992)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Listener_obj,splice,return )

Void ZNPList_ZPP_Listener_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","clear",0xbe5e7008,"zpp_nape.util.ZNPList_ZPP_Listener.clear","zpp_nape/util/Lists.hx",12995,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12995)
		while((true)){
			HX_STACK_LINE(12995)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12995)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12995)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12995)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12995)
			if ((tmp3)){
				HX_STACK_LINE(12995)
				break;
			}
			HX_STACK_LINE(12995)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12995)
			::zpp_nape::util::ZNPNode_ZPP_Listener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12995)
			this->head = ret->next;
			HX_STACK_LINE(12995)
			{
				HX_STACK_LINE(12995)
				::zpp_nape::util::ZNPNode_ZPP_Listener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12995)
				o->elt = null();
				HX_STACK_LINE(12995)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(12995)
				o->next = tmp5;
				HX_STACK_LINE(12995)
				::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12995)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(12995)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(12995)
			if ((tmp6)){
				HX_STACK_LINE(12995)
				this->pushmod = true;
			}
			HX_STACK_LINE(12995)
			this->modified = true;
			HX_STACK_LINE(12995)
			(this->length)--;
		}
		HX_STACK_LINE(12995)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,clear,(void))

Void ZNPList_ZPP_Listener_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_clear",0xf80ab074,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_clear","zpp_nape/util/Lists.hx",13000,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13001)
		while((true)){
			HX_STACK_LINE(13001)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13001)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13001)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13001)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13001)
			if ((tmp3)){
				HX_STACK_LINE(13001)
				break;
			}
			HX_STACK_LINE(13001)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13001)
			::zpp_nape::util::ZNPNode_ZPP_Listener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13001)
			this->head = ret->next;
			HX_STACK_LINE(13001)
			{
				HX_STACK_LINE(13001)
				::zpp_nape::util::ZNPNode_ZPP_Listener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13001)
				o->elt = null();
				HX_STACK_LINE(13001)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(13001)
				o->next = tmp5;
				HX_STACK_LINE(13001)
				::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13001)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(13001)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13001)
			if ((tmp6)){
				HX_STACK_LINE(13001)
				this->pushmod = true;
			}
			HX_STACK_LINE(13001)
			this->modified = true;
			HX_STACK_LINE(13001)
			(this->length)--;
		}
		HX_STACK_LINE(13002)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,inlined_clear,(void))

Void ZNPList_ZPP_Listener_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","reverse",0x56980c5d,"zpp_nape.util.ZNPList_ZPP_Listener.reverse","zpp_nape/util/Lists.hx",13005,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13006)
		::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13006)
		::zpp_nape::util::ZNPNode_ZPP_Listener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13007)
		::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13008)
		while((true)){
			HX_STACK_LINE(13008)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13008)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13008)
			if ((tmp2)){
				HX_STACK_LINE(13008)
				break;
			}
			HX_STACK_LINE(13009)
			::zpp_nape::util::ZNPNode_ZPP_Listener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(13010)
			cur->next = pre;
			HX_STACK_LINE(13011)
			this->head = cur;
			HX_STACK_LINE(13012)
			pre = cur;
			HX_STACK_LINE(13013)
			cur = nx;
		}
		HX_STACK_LINE(13015)
		this->modified = true;
		HX_STACK_LINE(13016)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,reverse,(void))

bool ZNPList_ZPP_Listener_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","empty",0xe5dd3908,"zpp_nape.util.ZNPList_ZPP_Listener.empty","zpp_nape/util/Lists.hx",13020,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13021)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13021)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13021)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,empty,return )

int ZNPList_ZPP_Listener_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","size",0x99c54aa6,"zpp_nape.util.ZNPList_ZPP_Listener.size","zpp_nape/util/Lists.hx",13025,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13026)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13026)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,size,return )

bool ZNPList_ZPP_Listener_obj::has( ::zpp_nape::callbacks::ZPP_Listener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","has",0xc61c1915,"zpp_nape.util.ZNPList_ZPP_Listener.has","zpp_nape/util/Lists.hx",13028,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13029)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13029)
	{
		HX_STACK_LINE(13029)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13029)
		{
			HX_STACK_LINE(13029)
			ret = false;
			HX_STACK_LINE(13029)
			{
				HX_STACK_LINE(13029)
				::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(13029)
				::zpp_nape::util::ZNPNode_ZPP_Listener cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(13029)
				while((true)){
					HX_STACK_LINE(13029)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(13029)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(13029)
					if ((tmp3)){
						HX_STACK_LINE(13029)
						break;
					}
					HX_STACK_LINE(13029)
					::zpp_nape::callbacks::ZPP_Listener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(13029)
					{
						HX_STACK_LINE(13029)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(13029)
						if ((tmp4)){
							HX_STACK_LINE(13029)
							ret = true;
							HX_STACK_LINE(13029)
							break;
						}
					}
					HX_STACK_LINE(13029)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(13029)
		tmp = ret;
	}
	HX_STACK_LINE(13029)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,has,return )

bool ZNPList_ZPP_Listener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_Listener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","inlined_has",0x2c592681,"zpp_nape.util.ZNPList_ZPP_Listener.inlined_has","zpp_nape/util/Lists.hx",13033,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13042)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13043)
	{
		HX_STACK_LINE(13044)
		ret = false;
		HX_STACK_LINE(13045)
		{
			HX_STACK_LINE(13046)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13046)
			::zpp_nape::util::ZNPNode_ZPP_Listener cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(13047)
			while((true)){
				HX_STACK_LINE(13047)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(13047)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13047)
				if ((tmp2)){
					HX_STACK_LINE(13047)
					break;
				}
				HX_STACK_LINE(13048)
				::zpp_nape::callbacks::ZPP_Listener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(13049)
				{
					HX_STACK_LINE(13050)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(13050)
					if ((tmp3)){
						HX_STACK_LINE(13051)
						ret = true;
						HX_STACK_LINE(13052)
						break;
					}
				}
				HX_STACK_LINE(13055)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(13059)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13059)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","front",0x7c911724,"zpp_nape.util.ZNPList_ZPP_Listener.front","zpp_nape/util/Lists.hx",13063,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13064)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13064)
	::zpp_nape::callbacks::ZPP_Listener tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13064)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,front,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","back",0x8e82840c,"zpp_nape.util.ZNPList_ZPP_Listener.back","zpp_nape/util/Lists.hx",13066,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13067)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13067)
	::zpp_nape::util::ZNPNode_ZPP_Listener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13068)
	::zpp_nape::util::ZNPNode_ZPP_Listener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13069)
	while((true)){
		HX_STACK_LINE(13069)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13069)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13069)
		if ((tmp2)){
			HX_STACK_LINE(13069)
			break;
		}
		HX_STACK_LINE(13070)
		ret = cur;
		HX_STACK_LINE(13071)
		cur = cur->next;
	}
	HX_STACK_LINE(13073)
	::zpp_nape::callbacks::ZPP_Listener tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13073)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","iterator_at",0x30f8169f,"zpp_nape.util.ZNPList_ZPP_Listener.iterator_at","zpp_nape/util/Lists.hx",13075,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(13084)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13084)
	::zpp_nape::util::ZNPNode_ZPP_Listener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13085)
	while((true)){
		HX_STACK_LINE(13085)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13085)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13085)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13085)
		if ((tmp2)){
			HX_STACK_LINE(13085)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(13085)
			tmp3 = false;
		}
		HX_STACK_LINE(13085)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13085)
		if ((tmp4)){
			HX_STACK_LINE(13085)
			break;
		}
		HX_STACK_LINE(13085)
		ret = ret->next;
	}
	HX_STACK_LINE(13086)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13086)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Listener","at",0x8bcb4b98,"zpp_nape.util.ZNPList_ZPP_Listener.at","zpp_nape/util/Lists.hx",13088,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(13097)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13097)
	::zpp_nape::util::ZNPNode_ZPP_Listener tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13097)
	::zpp_nape::util::ZNPNode_ZPP_Listener it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(13098)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13098)
	::zpp_nape::callbacks::ZPP_Listener tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13098)
	if ((tmp2)){
		HX_STACK_LINE(13098)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(13098)
		tmp3 = null();
	}
	HX_STACK_LINE(13098)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,at,return )


ZNPList_ZPP_Listener_obj::ZNPList_ZPP_Listener_obj()
{
}

void ZNPList_ZPP_Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Listener);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Listener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Listener >(); return inValue; }
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

bool ZNPList_ZPP_Listener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Listener*/ ,(int)offsetof(ZNPList_ZPP_Listener_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Listener_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Listener_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Listener_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Listener_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Listener_obj::__mClass;

void ZNPList_ZPP_Listener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Listener","\xa9","\x00","\x2d","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Listener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Listener_obj >;
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
