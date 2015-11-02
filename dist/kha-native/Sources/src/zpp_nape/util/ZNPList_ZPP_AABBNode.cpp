#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_AABBNode_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","new",0xf23b0d49,"zpp_nape.util.ZNPList_ZPP_AABBNode.new","zpp_nape/util/Lists.hx",10600,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10610)
	this->length = (int)0;
	HX_STACK_LINE(10609)
	this->pushmod = false;
	HX_STACK_LINE(10608)
	this->modified = false;
	HX_STACK_LINE(10601)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_AABBNode_obj::~ZNPList_ZPP_AABBNode_obj() { }

Dynamic ZNPList_ZPP_AABBNode_obj::__CreateEmpty() { return  new ZNPList_ZPP_AABBNode_obj; }
hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > ZNPList_ZPP_AABBNode_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > _result_ = new ZNPList_ZPP_AABBNode_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_AABBNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > _result_ = new ZNPList_ZPP_AABBNode_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","begin",0x5834f352,"zpp_nape.util.ZNPList_ZPP_AABBNode.begin","zpp_nape/util/Lists.hx",10605,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10606)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10606)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,begin,return )

Void ZNPList_ZPP_AABBNode_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBNode i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","setbegin",0x86e339be,"zpp_nape.util.ZNPList_ZPP_AABBNode.setbegin","zpp_nape/util/Lists.hx",10613,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(10614)
		this->head = i;
		HX_STACK_LINE(10615)
		this->modified = true;
		HX_STACK_LINE(10616)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,setbegin,(void))

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::add( ::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","add",0xf2312f0a,"zpp_nape.util.ZNPList_ZPP_AABBNode.add","zpp_nape/util/Lists.hx",10618,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10619)
	::zpp_nape::space::ZPP_AABBNode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10619)
	{
		HX_STACK_LINE(10619)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10619)
		{
			HX_STACK_LINE(10619)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10619)
			{
				HX_STACK_LINE(10619)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp2 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(10619)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10619)
				if ((tmp3)){
					HX_STACK_LINE(10619)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10619)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(10619)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10619)
					ret = tmp4;
					HX_STACK_LINE(10619)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
					HX_STACK_LINE(10619)
					ret->next = null();
				}
				HX_STACK_LINE(10619)
				Dynamic();
			}
			HX_STACK_LINE(10619)
			ret->elt = o;
			HX_STACK_LINE(10619)
			tmp1 = ret;
		}
		HX_STACK_LINE(10619)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(10619)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10619)
		temp->next = tmp2;
		HX_STACK_LINE(10619)
		this->head = temp;
		HX_STACK_LINE(10619)
		this->modified = true;
		HX_STACK_LINE(10619)
		(this->length)++;
		HX_STACK_LINE(10619)
		tmp = o;
	}
	HX_STACK_LINE(10619)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,add,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_add( ::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_add",0x456a1a76,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_add","zpp_nape/util/Lists.hx",10623,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10632)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10632)
	{
		HX_STACK_LINE(10633)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10634)
		{
			HX_STACK_LINE(10635)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10635)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10635)
			if ((tmp2)){
				HX_STACK_LINE(10636)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10636)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(10642)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10642)
				ret = tmp3;
				HX_STACK_LINE(10643)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10644)
				ret->next = null();
			}
			HX_STACK_LINE(10649)
			Dynamic();
		}
		HX_STACK_LINE(10651)
		ret->elt = o;
		HX_STACK_LINE(10652)
		tmp = ret;
	}
	HX_STACK_LINE(10632)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10654)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10654)
	temp->next = tmp1;
	HX_STACK_LINE(10655)
	this->head = temp;
	HX_STACK_LINE(10656)
	this->modified = true;
	HX_STACK_LINE(10657)
	(this->length)++;
	HX_STACK_LINE(10658)
	::zpp_nape::space::ZPP_AABBNode tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10658)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_add,return )

Void ZNPList_ZPP_AABBNode_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_AABBNode x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","addAll",0xda440437,"zpp_nape.util.ZNPList_ZPP_AABBNode.addAll","zpp_nape/util/Lists.hx",10669,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(10670)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(10671)
		while((true)){
			HX_STACK_LINE(10671)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10671)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10671)
			if ((tmp1)){
				HX_STACK_LINE(10671)
				break;
			}
			HX_STACK_LINE(10672)
			::zpp_nape::space::ZPP_AABBNode i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(10673)
			::zpp_nape::space::ZPP_AABBNode tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10673)
			this->add(tmp2);
			HX_STACK_LINE(10674)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur,::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","insert",0xd9263df0,"zpp_nape.util.ZNPList_ZPP_AABBNode.insert","zpp_nape/util/Lists.hx",10678,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10679)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10679)
	{
		HX_STACK_LINE(10679)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10679)
		{
			HX_STACK_LINE(10679)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10679)
			{
				HX_STACK_LINE(10679)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp2 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(10679)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10679)
				if ((tmp3)){
					HX_STACK_LINE(10679)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10679)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(10679)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10679)
					ret = tmp4;
					HX_STACK_LINE(10679)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
					HX_STACK_LINE(10679)
					ret->next = null();
				}
				HX_STACK_LINE(10679)
				Dynamic();
			}
			HX_STACK_LINE(10679)
			ret->elt = o;
			HX_STACK_LINE(10679)
			tmp1 = ret;
		}
		HX_STACK_LINE(10679)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(10679)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10679)
		if ((tmp2)){
			HX_STACK_LINE(10679)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10679)
			temp->next = tmp3;
			HX_STACK_LINE(10679)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(10679)
			temp->next = cur->next;
			HX_STACK_LINE(10679)
			cur->next = temp;
		}
		HX_STACK_LINE(10679)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10679)
		this->pushmod = tmp3;
		HX_STACK_LINE(10679)
		(this->length)++;
		HX_STACK_LINE(10679)
		tmp = temp;
	}
	HX_STACK_LINE(10679)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur,::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_insert",0xf5753e04,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_insert","zpp_nape/util/Lists.hx",10683,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10692)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10692)
	{
		HX_STACK_LINE(10693)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10694)
		{
			HX_STACK_LINE(10695)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10695)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10695)
			if ((tmp2)){
				HX_STACK_LINE(10696)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10696)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(10702)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10702)
				ret = tmp3;
				HX_STACK_LINE(10703)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10704)
				ret->next = null();
			}
			HX_STACK_LINE(10709)
			Dynamic();
		}
		HX_STACK_LINE(10711)
		ret->elt = o;
		HX_STACK_LINE(10712)
		tmp = ret;
	}
	HX_STACK_LINE(10692)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10714)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10714)
	if ((tmp1)){
		HX_STACK_LINE(10715)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10715)
		temp->next = tmp2;
		HX_STACK_LINE(10716)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10719)
		temp->next = cur->next;
		HX_STACK_LINE(10720)
		cur->next = temp;
	}
	HX_STACK_LINE(10722)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10722)
	this->pushmod = tmp2;
	HX_STACK_LINE(10723)
	(this->length)++;
	HX_STACK_LINE(10724)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(10724)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,inlined_insert,return )

Void ZNPList_ZPP_AABBNode_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","pop",0xf23c9a7a,"zpp_nape.util.ZNPList_ZPP_AABBNode.pop","zpp_nape/util/Lists.hx",10727,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10727)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10727)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10727)
		this->head = ret->next;
		HX_STACK_LINE(10727)
		{
			HX_STACK_LINE(10727)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10727)
			o->elt = null();
			HX_STACK_LINE(10727)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10727)
			o->next = tmp1;
			HX_STACK_LINE(10727)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10727)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10727)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10727)
		if ((tmp2)){
			HX_STACK_LINE(10727)
			this->pushmod = true;
		}
		HX_STACK_LINE(10727)
		this->modified = true;
		HX_STACK_LINE(10727)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,pop,(void))

Void ZNPList_ZPP_AABBNode_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_pop",0x457585e6,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_pop","zpp_nape/util/Lists.hx",10731,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10740)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10740)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10741)
		this->head = ret->next;
		HX_STACK_LINE(10743)
		{
			HX_STACK_LINE(10744)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10753)
			o->elt = null();
			HX_STACK_LINE(10754)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10754)
			o->next = tmp1;
			HX_STACK_LINE(10755)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10760)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10760)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10760)
		if ((tmp2)){
			HX_STACK_LINE(10760)
			this->pushmod = true;
		}
		HX_STACK_LINE(10761)
		this->modified = true;
		HX_STACK_LINE(10762)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","pop_unsafe",0x808e9e8b,"zpp_nape.util.ZNPList_ZPP_AABBNode.pop_unsafe","zpp_nape/util/Lists.hx",10764,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10765)
	::zpp_nape::space::ZPP_AABBNode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10765)
	{
		HX_STACK_LINE(10765)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10765)
		::zpp_nape::space::ZPP_AABBNode ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10765)
		this->pop();
		HX_STACK_LINE(10765)
		tmp = ret;
	}
	HX_STACK_LINE(10765)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_pop_unsafe",0xf461389f,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_pop_unsafe","zpp_nape/util/Lists.hx",10769,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10778)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10778)
	::zpp_nape::space::ZPP_AABBNode ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10779)
	this->pop();
	HX_STACK_LINE(10780)
	::zpp_nape::space::ZPP_AABBNode tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10780)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_AABBNode_obj::remove( ::zpp_nape::space::ZPP_AABBNode obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","remove",0x3fd196fb,"zpp_nape.util.ZNPList_ZPP_AABBNode.remove","zpp_nape/util/Lists.hx",10791,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10791)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10791)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10791)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10791)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10791)
		while((true)){
			HX_STACK_LINE(10791)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10791)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10791)
			if ((tmp2)){
				HX_STACK_LINE(10791)
				break;
			}
			HX_STACK_LINE(10791)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10791)
			if ((tmp3)){
				HX_STACK_LINE(10791)
				{
					HX_STACK_LINE(10791)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10791)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10791)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10791)
					if ((tmp4)){
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10791)
						old = tmp5;
						HX_STACK_LINE(10791)
						ret1 = old->next;
						HX_STACK_LINE(10791)
						this->head = ret1;
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(10791)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(10791)
						if ((tmp7)){
							HX_STACK_LINE(10791)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10791)
						old = pre->next;
						HX_STACK_LINE(10791)
						ret1 = old->next;
						HX_STACK_LINE(10791)
						pre->next = ret1;
						HX_STACK_LINE(10791)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10791)
						if ((tmp5)){
							HX_STACK_LINE(10791)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10791)
					{
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10791)
						o->elt = null();
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10791)
						o->next = tmp5;
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10791)
					this->modified = true;
					HX_STACK_LINE(10791)
					(this->length)--;
					HX_STACK_LINE(10791)
					this->pushmod = true;
					HX_STACK_LINE(10791)
					ret1;
				}
				HX_STACK_LINE(10791)
				ret = true;
				HX_STACK_LINE(10791)
				break;
			}
			HX_STACK_LINE(10791)
			pre = cur;
			HX_STACK_LINE(10791)
			cur = cur->next;
		}
		HX_STACK_LINE(10791)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,remove,(void))

bool ZNPList_ZPP_AABBNode_obj::try_remove( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","try_remove",0x97b8d43f,"zpp_nape.util.ZNPList_ZPP_AABBNode.try_remove","zpp_nape/util/Lists.hx",10793,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10802)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10803)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10803)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10804)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10805)
	while((true)){
		HX_STACK_LINE(10805)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10805)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10805)
		if ((tmp2)){
			HX_STACK_LINE(10805)
			break;
		}
		HX_STACK_LINE(10806)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10806)
		if ((tmp3)){
			HX_STACK_LINE(10807)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10807)
			this->erase(tmp4);
			HX_STACK_LINE(10808)
			ret = true;
			HX_STACK_LINE(10809)
			break;
		}
		HX_STACK_LINE(10811)
		pre = cur;
		HX_STACK_LINE(10812)
		cur = cur->next;
	}
	HX_STACK_LINE(10814)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10814)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,try_remove,return )

Void ZNPList_ZPP_AABBNode_obj::inlined_remove( ::zpp_nape::space::ZPP_AABBNode obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_remove",0x5c20970f,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_remove","zpp_nape/util/Lists.hx",10827,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10827)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10827)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10827)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10827)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10827)
		while((true)){
			HX_STACK_LINE(10827)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10827)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10827)
			if ((tmp2)){
				HX_STACK_LINE(10827)
				break;
			}
			HX_STACK_LINE(10827)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10827)
			if ((tmp3)){
				HX_STACK_LINE(10827)
				{
					HX_STACK_LINE(10827)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10827)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10827)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10827)
					if ((tmp4)){
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10827)
						old = tmp5;
						HX_STACK_LINE(10827)
						ret1 = old->next;
						HX_STACK_LINE(10827)
						this->head = ret1;
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(10827)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(10827)
						if ((tmp7)){
							HX_STACK_LINE(10827)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10827)
						old = pre->next;
						HX_STACK_LINE(10827)
						ret1 = old->next;
						HX_STACK_LINE(10827)
						pre->next = ret1;
						HX_STACK_LINE(10827)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10827)
						if ((tmp5)){
							HX_STACK_LINE(10827)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10827)
					{
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10827)
						o->elt = null();
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10827)
						o->next = tmp5;
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10827)
					this->modified = true;
					HX_STACK_LINE(10827)
					(this->length)--;
					HX_STACK_LINE(10827)
					this->pushmod = true;
					HX_STACK_LINE(10827)
					ret1;
				}
				HX_STACK_LINE(10827)
				ret = true;
				HX_STACK_LINE(10827)
				break;
			}
			HX_STACK_LINE(10827)
			pre = cur;
			HX_STACK_LINE(10827)
			cur = cur->next;
		}
		HX_STACK_LINE(10827)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_remove,(void))

bool ZNPList_ZPP_AABBNode_obj::inlined_try_remove( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_try_remove",0x0b8b6e53,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_try_remove","zpp_nape/util/Lists.hx",10831,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10840)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10841)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10841)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10842)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10843)
	while((true)){
		HX_STACK_LINE(10843)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10843)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10843)
		if ((tmp2)){
			HX_STACK_LINE(10843)
			break;
		}
		HX_STACK_LINE(10844)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10844)
		if ((tmp3)){
			HX_STACK_LINE(10845)
			{
				HX_STACK_LINE(10845)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10845)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10845)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(10845)
				if ((tmp4)){
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10845)
					old = tmp5;
					HX_STACK_LINE(10845)
					ret1 = old->next;
					HX_STACK_LINE(10845)
					this->head = ret1;
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(10845)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(10845)
					if ((tmp7)){
						HX_STACK_LINE(10845)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10845)
					old = pre->next;
					HX_STACK_LINE(10845)
					ret1 = old->next;
					HX_STACK_LINE(10845)
					pre->next = ret1;
					HX_STACK_LINE(10845)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10845)
					if ((tmp5)){
						HX_STACK_LINE(10845)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10845)
				{
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10845)
					o->elt = null();
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10845)
					o->next = tmp5;
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10845)
				this->modified = true;
				HX_STACK_LINE(10845)
				(this->length)--;
				HX_STACK_LINE(10845)
				this->pushmod = true;
				HX_STACK_LINE(10845)
				ret1;
			}
			HX_STACK_LINE(10846)
			ret = true;
			HX_STACK_LINE(10847)
			break;
		}
		HX_STACK_LINE(10849)
		pre = cur;
		HX_STACK_LINE(10850)
		cur = cur->next;
	}
	HX_STACK_LINE(10852)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10852)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","erase",0x1afbf20f,"zpp_nape.util.ZNPList_ZPP_AABBNode.erase","zpp_nape/util/Lists.hx",10854,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10855)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10855)
	{
		HX_STACK_LINE(10855)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(10855)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10855)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10855)
		if ((tmp1)){
			HX_STACK_LINE(10855)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10855)
			old = tmp2;
			HX_STACK_LINE(10855)
			ret = old->next;
			HX_STACK_LINE(10855)
			this->head = ret;
			HX_STACK_LINE(10855)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10855)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10855)
			if ((tmp4)){
				HX_STACK_LINE(10855)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(10855)
			old = pre->next;
			HX_STACK_LINE(10855)
			ret = old->next;
			HX_STACK_LINE(10855)
			pre->next = ret;
			HX_STACK_LINE(10855)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10855)
			if ((tmp2)){
				HX_STACK_LINE(10855)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(10855)
		{
			HX_STACK_LINE(10855)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10855)
			o->elt = null();
			HX_STACK_LINE(10855)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp2 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10855)
			o->next = tmp2;
			HX_STACK_LINE(10855)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10855)
		this->modified = true;
		HX_STACK_LINE(10855)
		(this->length)--;
		HX_STACK_LINE(10855)
		this->pushmod = true;
		HX_STACK_LINE(10855)
		tmp = ret;
	}
	HX_STACK_LINE(10855)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_erase",0x5ed7907b,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_erase","zpp_nape/util/Lists.hx",10859,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10868)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10869)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10870)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10870)
	if ((tmp)){
		HX_STACK_LINE(10871)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10871)
		old = tmp1;
		HX_STACK_LINE(10872)
		ret = old->next;
		HX_STACK_LINE(10873)
		this->head = ret;
		HX_STACK_LINE(10874)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10874)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10874)
		if ((tmp3)){
			HX_STACK_LINE(10874)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10877)
		old = pre->next;
		HX_STACK_LINE(10878)
		ret = old->next;
		HX_STACK_LINE(10879)
		pre->next = ret;
		HX_STACK_LINE(10880)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10880)
		if ((tmp1)){
			HX_STACK_LINE(10880)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10883)
	{
		HX_STACK_LINE(10884)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10893)
		o->elt = null();
		HX_STACK_LINE(10894)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10894)
		o->next = tmp1;
		HX_STACK_LINE(10895)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10900)
	this->modified = true;
	HX_STACK_LINE(10901)
	(this->length)--;
	HX_STACK_LINE(10902)
	this->pushmod = true;
	HX_STACK_LINE(10903)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10903)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","splice",0xfae78033,"zpp_nape.util.ZNPList_ZPP_AABBNode.splice","zpp_nape/util/Lists.hx",10905,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(10906)
	while((true)){
		HX_STACK_LINE(10906)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10906)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10906)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10906)
		if ((tmp1)){
			HX_STACK_LINE(10906)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(10906)
			tmp2 = false;
		}
		HX_STACK_LINE(10906)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10906)
		if ((tmp3)){
			HX_STACK_LINE(10906)
			break;
		}
		HX_STACK_LINE(10906)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(10906)
		this->erase(tmp4);
	}
	HX_STACK_LINE(10907)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10907)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,splice,return )

Void ZNPList_ZPP_AABBNode_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","clear",0xf03a7ab6,"zpp_nape.util.ZNPList_ZPP_AABBNode.clear","zpp_nape/util/Lists.hx",10910,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10910)
		while((true)){
			HX_STACK_LINE(10910)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10910)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10910)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10910)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10910)
			if ((tmp3)){
				HX_STACK_LINE(10910)
				break;
			}
			HX_STACK_LINE(10910)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10910)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10910)
			this->head = ret->next;
			HX_STACK_LINE(10910)
			{
				HX_STACK_LINE(10910)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10910)
				o->elt = null();
				HX_STACK_LINE(10910)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(10910)
				o->next = tmp5;
				HX_STACK_LINE(10910)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10910)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(10910)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(10910)
			if ((tmp6)){
				HX_STACK_LINE(10910)
				this->pushmod = true;
			}
			HX_STACK_LINE(10910)
			this->modified = true;
			HX_STACK_LINE(10910)
			(this->length)--;
		}
		HX_STACK_LINE(10910)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,clear,(void))

Void ZNPList_ZPP_AABBNode_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_clear",0x34161922,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_clear","zpp_nape/util/Lists.hx",10915,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10916)
		while((true)){
			HX_STACK_LINE(10916)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10916)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10916)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10916)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10916)
			if ((tmp3)){
				HX_STACK_LINE(10916)
				break;
			}
			HX_STACK_LINE(10916)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10916)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10916)
			this->head = ret->next;
			HX_STACK_LINE(10916)
			{
				HX_STACK_LINE(10916)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10916)
				o->elt = null();
				HX_STACK_LINE(10916)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(10916)
				o->next = tmp5;
				HX_STACK_LINE(10916)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10916)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(10916)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(10916)
			if ((tmp6)){
				HX_STACK_LINE(10916)
				this->pushmod = true;
			}
			HX_STACK_LINE(10916)
			this->modified = true;
			HX_STACK_LINE(10916)
			(this->length)--;
		}
		HX_STACK_LINE(10917)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_clear,(void))

Void ZNPList_ZPP_AABBNode_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","reverse",0xbf8e9e8b,"zpp_nape.util.ZNPList_ZPP_AABBNode.reverse","zpp_nape/util/Lists.hx",10920,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10921)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10921)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10922)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10923)
		while((true)){
			HX_STACK_LINE(10923)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10923)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10923)
			if ((tmp2)){
				HX_STACK_LINE(10923)
				break;
			}
			HX_STACK_LINE(10924)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10925)
			cur->next = pre;
			HX_STACK_LINE(10926)
			this->head = cur;
			HX_STACK_LINE(10927)
			pre = cur;
			HX_STACK_LINE(10928)
			cur = nx;
		}
		HX_STACK_LINE(10930)
		this->modified = true;
		HX_STACK_LINE(10931)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,reverse,(void))

bool ZNPList_ZPP_AABBNode_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","empty",0x17b943b6,"zpp_nape.util.ZNPList_ZPP_AABBNode.empty","zpp_nape/util/Lists.hx",10935,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10936)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10936)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10936)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,empty,return )

int ZNPList_ZPP_AABBNode_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","size",0x04c1afb8,"zpp_nape.util.ZNPList_ZPP_AABBNode.size","zpp_nape/util/Lists.hx",10940,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10941)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10941)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,size,return )

bool ZNPList_ZPP_AABBNode_obj::has( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","has",0xf2367c43,"zpp_nape.util.ZNPList_ZPP_AABBNode.has","zpp_nape/util/Lists.hx",10943,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10944)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10944)
	{
		HX_STACK_LINE(10944)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10944)
		{
			HX_STACK_LINE(10944)
			ret = false;
			HX_STACK_LINE(10944)
			{
				HX_STACK_LINE(10944)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(10944)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(10944)
				while((true)){
					HX_STACK_LINE(10944)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(10944)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(10944)
					if ((tmp3)){
						HX_STACK_LINE(10944)
						break;
					}
					HX_STACK_LINE(10944)
					::zpp_nape::space::ZPP_AABBNode npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(10944)
					{
						HX_STACK_LINE(10944)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(10944)
						if ((tmp4)){
							HX_STACK_LINE(10944)
							ret = true;
							HX_STACK_LINE(10944)
							break;
						}
					}
					HX_STACK_LINE(10944)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(10944)
		tmp = ret;
	}
	HX_STACK_LINE(10944)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,has,return )

bool ZNPList_ZPP_AABBNode_obj::inlined_has( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","inlined_has",0x456f67af,"zpp_nape.util.ZNPList_ZPP_AABBNode.inlined_has","zpp_nape/util/Lists.hx",10948,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10957)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10958)
	{
		HX_STACK_LINE(10959)
		ret = false;
		HX_STACK_LINE(10960)
		{
			HX_STACK_LINE(10961)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10961)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10962)
			while((true)){
				HX_STACK_LINE(10962)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(10962)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(10962)
				if ((tmp2)){
					HX_STACK_LINE(10962)
					break;
				}
				HX_STACK_LINE(10963)
				::zpp_nape::space::ZPP_AABBNode npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10964)
				{
					HX_STACK_LINE(10965)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(10965)
					if ((tmp3)){
						HX_STACK_LINE(10966)
						ret = true;
						HX_STACK_LINE(10967)
						break;
					}
				}
				HX_STACK_LINE(10970)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10974)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10974)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_has,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","front",0xae6d21d2,"zpp_nape.util.ZNPList_ZPP_AABBNode.front","zpp_nape/util/Lists.hx",10978,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10979)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10979)
	::zpp_nape::space::ZPP_AABBNode tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10979)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,front,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","back",0xf97ee91e,"zpp_nape.util.ZNPList_ZPP_AABBNode.back","zpp_nape/util/Lists.hx",10981,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10982)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10982)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10983)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10984)
	while((true)){
		HX_STACK_LINE(10984)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10984)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10984)
		if ((tmp2)){
			HX_STACK_LINE(10984)
			break;
		}
		HX_STACK_LINE(10985)
		ret = cur;
		HX_STACK_LINE(10986)
		cur = cur->next;
	}
	HX_STACK_LINE(10988)
	::zpp_nape::space::ZPP_AABBNode tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10988)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","iterator_at",0x4a0e57cd,"zpp_nape.util.ZNPList_ZPP_AABBNode.iterator_at","zpp_nape/util/Lists.hx",10990,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10999)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10999)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11000)
	while((true)){
		HX_STACK_LINE(11000)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11000)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11000)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11000)
		if ((tmp2)){
			HX_STACK_LINE(11000)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(11000)
			tmp3 = false;
		}
		HX_STACK_LINE(11000)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(11000)
		if ((tmp4)){
			HX_STACK_LINE(11000)
			break;
		}
		HX_STACK_LINE(11000)
		ret = ret->next;
	}
	HX_STACK_LINE(11001)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11001)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,iterator_at,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBNode","at",0x7879e82a,"zpp_nape.util.ZNPList_ZPP_AABBNode.at","zpp_nape/util/Lists.hx",11003,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11012)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11012)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11012)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11013)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11013)
	::zpp_nape::space::ZPP_AABBNode tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(11013)
	if ((tmp2)){
		HX_STACK_LINE(11013)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(11013)
		tmp3 = null();
	}
	HX_STACK_LINE(11013)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,at,return )


ZNPList_ZPP_AABBNode_obj::ZNPList_ZPP_AABBNode_obj()
{
}

void ZNPList_ZPP_AABBNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_AABBNode);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_AABBNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_AABBNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_AABBNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBNode >(); return inValue; }
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

bool ZNPList_ZPP_AABBNode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_AABBNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_AABBNode*/ ,(int)offsetof(ZNPList_ZPP_AABBNode_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_AABBNode_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_AABBNode_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_AABBNode_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_AABBNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_AABBNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_AABBNode_obj::__mClass;

void ZNPList_ZPP_AABBNode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_AABBNode","\xd7","\xb4","\xee","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_AABBNode_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_AABBNode_obj >;
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
