#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_AABBPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","new",0x9a71cb61,"zpp_nape.util.ZNPList_ZPP_AABBPair.new","zpp_nape/util/Lists.hx",8932,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8942)
	this->length = (int)0;
	HX_STACK_LINE(8941)
	this->pushmod = false;
	HX_STACK_LINE(8940)
	this->modified = false;
	HX_STACK_LINE(8933)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_AABBPair_obj::~ZNPList_ZPP_AABBPair_obj() { }

Dynamic ZNPList_ZPP_AABBPair_obj::__CreateEmpty() { return  new ZNPList_ZPP_AABBPair_obj; }
hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > ZNPList_ZPP_AABBPair_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > _result_ = new ZNPList_ZPP_AABBPair_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_AABBPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > _result_ = new ZNPList_ZPP_AABBPair_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","begin",0x8a29676a,"zpp_nape.util.ZNPList_ZPP_AABBPair.begin","zpp_nape/util/Lists.hx",8937,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8938)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8938)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,begin,return )

Void ZNPList_ZPP_AABBPair_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBPair i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","setbegin",0xc20c64a6,"zpp_nape.util.ZNPList_ZPP_AABBPair.setbegin","zpp_nape/util/Lists.hx",8945,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(8946)
		this->head = i;
		HX_STACK_LINE(8947)
		this->modified = true;
		HX_STACK_LINE(8948)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,setbegin,(void))

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::add( ::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","add",0x9a67ed22,"zpp_nape.util.ZNPList_ZPP_AABBPair.add","zpp_nape/util/Lists.hx",8950,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8951)
	::zpp_nape::space::ZPP_AABBPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8951)
	{
		HX_STACK_LINE(8951)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8951)
		{
			HX_STACK_LINE(8951)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8951)
			{
				HX_STACK_LINE(8951)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp2 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(8951)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8951)
				if ((tmp3)){
					HX_STACK_LINE(8951)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8951)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(8951)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8951)
					ret = tmp4;
					HX_STACK_LINE(8951)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
					HX_STACK_LINE(8951)
					ret->next = null();
				}
				HX_STACK_LINE(8951)
				Dynamic();
			}
			HX_STACK_LINE(8951)
			ret->elt = o;
			HX_STACK_LINE(8951)
			tmp1 = ret;
		}
		HX_STACK_LINE(8951)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(8951)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8951)
		temp->next = tmp2;
		HX_STACK_LINE(8951)
		this->head = temp;
		HX_STACK_LINE(8951)
		this->modified = true;
		HX_STACK_LINE(8951)
		(this->length)++;
		HX_STACK_LINE(8951)
		tmp = o;
	}
	HX_STACK_LINE(8951)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,add,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_add( ::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_add",0x0630b08e,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_add","zpp_nape/util/Lists.hx",8955,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8964)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8964)
	{
		HX_STACK_LINE(8965)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8966)
		{
			HX_STACK_LINE(8967)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8967)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8967)
			if ((tmp2)){
				HX_STACK_LINE(8968)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8968)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(8974)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8974)
				ret = tmp3;
				HX_STACK_LINE(8975)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8976)
				ret->next = null();
			}
			HX_STACK_LINE(8981)
			Dynamic();
		}
		HX_STACK_LINE(8983)
		ret->elt = o;
		HX_STACK_LINE(8984)
		tmp = ret;
	}
	HX_STACK_LINE(8964)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8986)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8986)
	temp->next = tmp1;
	HX_STACK_LINE(8987)
	this->head = temp;
	HX_STACK_LINE(8988)
	this->modified = true;
	HX_STACK_LINE(8989)
	(this->length)++;
	HX_STACK_LINE(8990)
	::zpp_nape::space::ZPP_AABBPair tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8990)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_add,return )

Void ZNPList_ZPP_AABBPair_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_AABBPair x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","addAll",0x5e35251f,"zpp_nape.util.ZNPList_ZPP_AABBPair.addAll","zpp_nape/util/Lists.hx",9001,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(9002)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(9003)
		while((true)){
			HX_STACK_LINE(9003)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9003)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9003)
			if ((tmp1)){
				HX_STACK_LINE(9003)
				break;
			}
			HX_STACK_LINE(9004)
			::zpp_nape::space::ZPP_AABBPair i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(9005)
			::zpp_nape::space::ZPP_AABBPair tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9005)
			this->add(tmp2);
			HX_STACK_LINE(9006)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_AABBPair cur,::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","insert",0x5d175ed8,"zpp_nape.util.ZNPList_ZPP_AABBPair.insert","zpp_nape/util/Lists.hx",9010,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9011)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9011)
	{
		HX_STACK_LINE(9011)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9011)
		{
			HX_STACK_LINE(9011)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9011)
			{
				HX_STACK_LINE(9011)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp2 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(9011)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9011)
				if ((tmp3)){
					HX_STACK_LINE(9011)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9011)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(9011)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9011)
					ret = tmp4;
					HX_STACK_LINE(9011)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
					HX_STACK_LINE(9011)
					ret->next = null();
				}
				HX_STACK_LINE(9011)
				Dynamic();
			}
			HX_STACK_LINE(9011)
			ret->elt = o;
			HX_STACK_LINE(9011)
			tmp1 = ret;
		}
		HX_STACK_LINE(9011)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(9011)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9011)
		if ((tmp2)){
			HX_STACK_LINE(9011)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9011)
			temp->next = tmp3;
			HX_STACK_LINE(9011)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(9011)
			temp->next = cur->next;
			HX_STACK_LINE(9011)
			cur->next = temp;
		}
		HX_STACK_LINE(9011)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9011)
		this->pushmod = tmp3;
		HX_STACK_LINE(9011)
		(this->length)++;
		HX_STACK_LINE(9011)
		tmp = temp;
	}
	HX_STACK_LINE(9011)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBPair cur,::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_insert",0xaa4d86ec,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_insert","zpp_nape/util/Lists.hx",9015,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9024)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9024)
	{
		HX_STACK_LINE(9025)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9026)
		{
			HX_STACK_LINE(9027)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9027)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9027)
			if ((tmp2)){
				HX_STACK_LINE(9028)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9028)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(9034)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9034)
				ret = tmp3;
				HX_STACK_LINE(9035)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9036)
				ret->next = null();
			}
			HX_STACK_LINE(9041)
			Dynamic();
		}
		HX_STACK_LINE(9043)
		ret->elt = o;
		HX_STACK_LINE(9044)
		tmp = ret;
	}
	HX_STACK_LINE(9024)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9046)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9046)
	if ((tmp1)){
		HX_STACK_LINE(9047)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9047)
		temp->next = tmp2;
		HX_STACK_LINE(9048)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9051)
		temp->next = cur->next;
		HX_STACK_LINE(9052)
		cur->next = temp;
	}
	HX_STACK_LINE(9054)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9054)
	this->pushmod = tmp2;
	HX_STACK_LINE(9055)
	(this->length)++;
	HX_STACK_LINE(9056)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(9056)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,inlined_insert,return )

Void ZNPList_ZPP_AABBPair_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","pop",0x9a735892,"zpp_nape.util.ZNPList_ZPP_AABBPair.pop","zpp_nape/util/Lists.hx",9059,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9059)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9059)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9059)
		this->head = ret->next;
		HX_STACK_LINE(9059)
		{
			HX_STACK_LINE(9059)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9059)
			o->elt = null();
			HX_STACK_LINE(9059)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9059)
			o->next = tmp1;
			HX_STACK_LINE(9059)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9059)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9059)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9059)
		if ((tmp2)){
			HX_STACK_LINE(9059)
			this->pushmod = true;
		}
		HX_STACK_LINE(9059)
		this->modified = true;
		HX_STACK_LINE(9059)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,pop,(void))

Void ZNPList_ZPP_AABBPair_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_pop",0x063c1bfe,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_pop","zpp_nape/util/Lists.hx",9063,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9072)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9072)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9073)
		this->head = ret->next;
		HX_STACK_LINE(9075)
		{
			HX_STACK_LINE(9076)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9085)
			o->elt = null();
			HX_STACK_LINE(9086)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9086)
			o->next = tmp1;
			HX_STACK_LINE(9087)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9092)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9092)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9092)
		if ((tmp2)){
			HX_STACK_LINE(9092)
			this->pushmod = true;
		}
		HX_STACK_LINE(9093)
		this->modified = true;
		HX_STACK_LINE(9094)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","pop_unsafe",0xb8865373,"zpp_nape.util.ZNPList_ZPP_AABBPair.pop_unsafe","zpp_nape/util/Lists.hx",9096,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9097)
	::zpp_nape::space::ZPP_AABBPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9097)
	{
		HX_STACK_LINE(9097)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9097)
		::zpp_nape::space::ZPP_AABBPair ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9097)
		this->pop();
		HX_STACK_LINE(9097)
		tmp = ret;
	}
	HX_STACK_LINE(9097)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_pop_unsafe",0x63f41587,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_pop_unsafe","zpp_nape/util/Lists.hx",9101,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9110)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9110)
	::zpp_nape::space::ZPP_AABBPair ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9111)
	this->pop();
	HX_STACK_LINE(9112)
	::zpp_nape::space::ZPP_AABBPair tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_AABBPair_obj::remove( ::zpp_nape::space::ZPP_AABBPair obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","remove",0xc3c2b7e3,"zpp_nape.util.ZNPList_ZPP_AABBPair.remove","zpp_nape/util/Lists.hx",9123,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9123)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9123)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9123)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9123)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9123)
		while((true)){
			HX_STACK_LINE(9123)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9123)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9123)
			if ((tmp2)){
				HX_STACK_LINE(9123)
				break;
			}
			HX_STACK_LINE(9123)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9123)
			if ((tmp3)){
				HX_STACK_LINE(9123)
				{
					HX_STACK_LINE(9123)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9123)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9123)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9123)
					if ((tmp4)){
						HX_STACK_LINE(9123)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9123)
						old = tmp5;
						HX_STACK_LINE(9123)
						ret1 = old->next;
						HX_STACK_LINE(9123)
						this->head = ret1;
						HX_STACK_LINE(9123)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(9123)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(9123)
						if ((tmp7)){
							HX_STACK_LINE(9123)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9123)
						old = pre->next;
						HX_STACK_LINE(9123)
						ret1 = old->next;
						HX_STACK_LINE(9123)
						pre->next = ret1;
						HX_STACK_LINE(9123)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9123)
						if ((tmp5)){
							HX_STACK_LINE(9123)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9123)
					{
						HX_STACK_LINE(9123)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9123)
						o->elt = null();
						HX_STACK_LINE(9123)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9123)
						o->next = tmp5;
						HX_STACK_LINE(9123)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9123)
					this->modified = true;
					HX_STACK_LINE(9123)
					(this->length)--;
					HX_STACK_LINE(9123)
					this->pushmod = true;
					HX_STACK_LINE(9123)
					ret1;
				}
				HX_STACK_LINE(9123)
				ret = true;
				HX_STACK_LINE(9123)
				break;
			}
			HX_STACK_LINE(9123)
			pre = cur;
			HX_STACK_LINE(9123)
			cur = cur->next;
		}
		HX_STACK_LINE(9123)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,remove,(void))

bool ZNPList_ZPP_AABBPair_obj::try_remove( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","try_remove",0xcfb08927,"zpp_nape.util.ZNPList_ZPP_AABBPair.try_remove","zpp_nape/util/Lists.hx",9125,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9134)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9135)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9135)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9136)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9137)
	while((true)){
		HX_STACK_LINE(9137)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9137)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9137)
		if ((tmp2)){
			HX_STACK_LINE(9137)
			break;
		}
		HX_STACK_LINE(9138)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9138)
		if ((tmp3)){
			HX_STACK_LINE(9139)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9139)
			this->erase(tmp4);
			HX_STACK_LINE(9140)
			ret = true;
			HX_STACK_LINE(9141)
			break;
		}
		HX_STACK_LINE(9143)
		pre = cur;
		HX_STACK_LINE(9144)
		cur = cur->next;
	}
	HX_STACK_LINE(9146)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9146)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,try_remove,return )

Void ZNPList_ZPP_AABBPair_obj::inlined_remove( ::zpp_nape::space::ZPP_AABBPair obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_remove",0x10f8dff7,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_remove","zpp_nape/util/Lists.hx",9159,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9159)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9159)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9159)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9159)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9159)
		while((true)){
			HX_STACK_LINE(9159)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9159)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9159)
			if ((tmp2)){
				HX_STACK_LINE(9159)
				break;
			}
			HX_STACK_LINE(9159)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9159)
			if ((tmp3)){
				HX_STACK_LINE(9159)
				{
					HX_STACK_LINE(9159)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9159)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9159)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9159)
					if ((tmp4)){
						HX_STACK_LINE(9159)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9159)
						old = tmp5;
						HX_STACK_LINE(9159)
						ret1 = old->next;
						HX_STACK_LINE(9159)
						this->head = ret1;
						HX_STACK_LINE(9159)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(9159)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(9159)
						if ((tmp7)){
							HX_STACK_LINE(9159)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9159)
						old = pre->next;
						HX_STACK_LINE(9159)
						ret1 = old->next;
						HX_STACK_LINE(9159)
						pre->next = ret1;
						HX_STACK_LINE(9159)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9159)
						if ((tmp5)){
							HX_STACK_LINE(9159)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9159)
					{
						HX_STACK_LINE(9159)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9159)
						o->elt = null();
						HX_STACK_LINE(9159)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9159)
						o->next = tmp5;
						HX_STACK_LINE(9159)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9159)
					this->modified = true;
					HX_STACK_LINE(9159)
					(this->length)--;
					HX_STACK_LINE(9159)
					this->pushmod = true;
					HX_STACK_LINE(9159)
					ret1;
				}
				HX_STACK_LINE(9159)
				ret = true;
				HX_STACK_LINE(9159)
				break;
			}
			HX_STACK_LINE(9159)
			pre = cur;
			HX_STACK_LINE(9159)
			cur = cur->next;
		}
		HX_STACK_LINE(9159)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_remove,(void))

bool ZNPList_ZPP_AABBPair_obj::inlined_try_remove( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_try_remove",0x7b1e4b3b,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_try_remove","zpp_nape/util/Lists.hx",9163,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9172)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9173)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9173)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9174)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9175)
	while((true)){
		HX_STACK_LINE(9175)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9175)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9175)
		if ((tmp2)){
			HX_STACK_LINE(9175)
			break;
		}
		HX_STACK_LINE(9176)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9176)
		if ((tmp3)){
			HX_STACK_LINE(9177)
			{
				HX_STACK_LINE(9177)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9177)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(9177)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(9177)
				if ((tmp4)){
					HX_STACK_LINE(9177)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(9177)
					old = tmp5;
					HX_STACK_LINE(9177)
					ret1 = old->next;
					HX_STACK_LINE(9177)
					this->head = ret1;
					HX_STACK_LINE(9177)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(9177)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(9177)
					if ((tmp7)){
						HX_STACK_LINE(9177)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9177)
					old = pre->next;
					HX_STACK_LINE(9177)
					ret1 = old->next;
					HX_STACK_LINE(9177)
					pre->next = ret1;
					HX_STACK_LINE(9177)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(9177)
					if ((tmp5)){
						HX_STACK_LINE(9177)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(9177)
				{
					HX_STACK_LINE(9177)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9177)
					o->elt = null();
					HX_STACK_LINE(9177)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(9177)
					o->next = tmp5;
					HX_STACK_LINE(9177)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9177)
				this->modified = true;
				HX_STACK_LINE(9177)
				(this->length)--;
				HX_STACK_LINE(9177)
				this->pushmod = true;
				HX_STACK_LINE(9177)
				ret1;
			}
			HX_STACK_LINE(9178)
			ret = true;
			HX_STACK_LINE(9179)
			break;
		}
		HX_STACK_LINE(9181)
		pre = cur;
		HX_STACK_LINE(9182)
		cur = cur->next;
	}
	HX_STACK_LINE(9184)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9184)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","erase",0x4cf06627,"zpp_nape.util.ZNPList_ZPP_AABBPair.erase","zpp_nape/util/Lists.hx",9186,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(9187)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9187)
	{
		HX_STACK_LINE(9187)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(9187)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9187)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9187)
		if ((tmp1)){
			HX_STACK_LINE(9187)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9187)
			old = tmp2;
			HX_STACK_LINE(9187)
			ret = old->next;
			HX_STACK_LINE(9187)
			this->head = ret;
			HX_STACK_LINE(9187)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9187)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9187)
			if ((tmp4)){
				HX_STACK_LINE(9187)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(9187)
			old = pre->next;
			HX_STACK_LINE(9187)
			ret = old->next;
			HX_STACK_LINE(9187)
			pre->next = ret;
			HX_STACK_LINE(9187)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9187)
			if ((tmp2)){
				HX_STACK_LINE(9187)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(9187)
		{
			HX_STACK_LINE(9187)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9187)
			o->elt = null();
			HX_STACK_LINE(9187)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp2 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9187)
			o->next = tmp2;
			HX_STACK_LINE(9187)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9187)
		this->modified = true;
		HX_STACK_LINE(9187)
		(this->length)--;
		HX_STACK_LINE(9187)
		this->pushmod = true;
		HX_STACK_LINE(9187)
		tmp = ret;
	}
	HX_STACK_LINE(9187)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_erase",0xcf01dc93,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_erase","zpp_nape/util/Lists.hx",9191,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(9200)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(9201)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9202)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9202)
	if ((tmp)){
		HX_STACK_LINE(9203)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9203)
		old = tmp1;
		HX_STACK_LINE(9204)
		ret = old->next;
		HX_STACK_LINE(9205)
		this->head = ret;
		HX_STACK_LINE(9206)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9206)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9206)
		if ((tmp3)){
			HX_STACK_LINE(9206)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(9209)
		old = pre->next;
		HX_STACK_LINE(9210)
		ret = old->next;
		HX_STACK_LINE(9211)
		pre->next = ret;
		HX_STACK_LINE(9212)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9212)
		if ((tmp1)){
			HX_STACK_LINE(9212)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(9215)
	{
		HX_STACK_LINE(9216)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(9225)
		o->elt = null();
		HX_STACK_LINE(9226)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9226)
		o->next = tmp1;
		HX_STACK_LINE(9227)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(9232)
	this->modified = true;
	HX_STACK_LINE(9233)
	(this->length)--;
	HX_STACK_LINE(9234)
	this->pushmod = true;
	HX_STACK_LINE(9235)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","splice",0x7ed8a11b,"zpp_nape.util.ZNPList_ZPP_AABBPair.splice","zpp_nape/util/Lists.hx",9237,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(9238)
	while((true)){
		HX_STACK_LINE(9238)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9238)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9238)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9238)
		if ((tmp1)){
			HX_STACK_LINE(9238)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(9238)
			tmp2 = false;
		}
		HX_STACK_LINE(9238)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9238)
		if ((tmp3)){
			HX_STACK_LINE(9238)
			break;
		}
		HX_STACK_LINE(9238)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(9238)
		this->erase(tmp4);
	}
	HX_STACK_LINE(9239)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9239)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,splice,return )

Void ZNPList_ZPP_AABBPair_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","clear",0x222eeece,"zpp_nape.util.ZNPList_ZPP_AABBPair.clear","zpp_nape/util/Lists.hx",9242,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9242)
		while((true)){
			HX_STACK_LINE(9242)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9242)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9242)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9242)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9242)
			if ((tmp3)){
				HX_STACK_LINE(9242)
				break;
			}
			HX_STACK_LINE(9242)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9242)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9242)
			this->head = ret->next;
			HX_STACK_LINE(9242)
			{
				HX_STACK_LINE(9242)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9242)
				o->elt = null();
				HX_STACK_LINE(9242)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(9242)
				o->next = tmp5;
				HX_STACK_LINE(9242)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9242)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(9242)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(9242)
			if ((tmp6)){
				HX_STACK_LINE(9242)
				this->pushmod = true;
			}
			HX_STACK_LINE(9242)
			this->modified = true;
			HX_STACK_LINE(9242)
			(this->length)--;
		}
		HX_STACK_LINE(9242)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,clear,(void))

Void ZNPList_ZPP_AABBPair_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_clear",0xa440653a,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_clear","zpp_nape/util/Lists.hx",9247,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9248)
		while((true)){
			HX_STACK_LINE(9248)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9248)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9248)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9248)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9248)
			if ((tmp3)){
				HX_STACK_LINE(9248)
				break;
			}
			HX_STACK_LINE(9248)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9248)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9248)
			this->head = ret->next;
			HX_STACK_LINE(9248)
			{
				HX_STACK_LINE(9248)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9248)
				o->elt = null();
				HX_STACK_LINE(9248)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(9248)
				o->next = tmp5;
				HX_STACK_LINE(9248)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9248)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(9248)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(9248)
			if ((tmp6)){
				HX_STACK_LINE(9248)
				this->pushmod = true;
			}
			HX_STACK_LINE(9248)
			this->modified = true;
			HX_STACK_LINE(9248)
			(this->length)--;
		}
		HX_STACK_LINE(9249)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_clear,(void))

Void ZNPList_ZPP_AABBPair_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","reverse",0xae9a48a3,"zpp_nape.util.ZNPList_ZPP_AABBPair.reverse","zpp_nape/util/Lists.hx",9252,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9253)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9253)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9254)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9255)
		while((true)){
			HX_STACK_LINE(9255)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9255)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9255)
			if ((tmp2)){
				HX_STACK_LINE(9255)
				break;
			}
			HX_STACK_LINE(9256)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(9257)
			cur->next = pre;
			HX_STACK_LINE(9258)
			this->head = cur;
			HX_STACK_LINE(9259)
			pre = cur;
			HX_STACK_LINE(9260)
			cur = nx;
		}
		HX_STACK_LINE(9262)
		this->modified = true;
		HX_STACK_LINE(9263)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,reverse,(void))

bool ZNPList_ZPP_AABBPair_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","empty",0x49adb7ce,"zpp_nape.util.ZNPList_ZPP_AABBPair.empty","zpp_nape/util/Lists.hx",9267,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9268)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9268)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9268)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,empty,return )

int ZNPList_ZPP_AABBPair_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","size",0x8c7146a0,"zpp_nape.util.ZNPList_ZPP_AABBPair.size","zpp_nape/util/Lists.hx",9272,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9273)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9273)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,size,return )

bool ZNPList_ZPP_AABBPair_obj::has( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","has",0x9a6d3a5b,"zpp_nape.util.ZNPList_ZPP_AABBPair.has","zpp_nape/util/Lists.hx",9275,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9276)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9276)
	{
		HX_STACK_LINE(9276)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9276)
		{
			HX_STACK_LINE(9276)
			ret = false;
			HX_STACK_LINE(9276)
			{
				HX_STACK_LINE(9276)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(9276)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(9276)
				while((true)){
					HX_STACK_LINE(9276)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(9276)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(9276)
					if ((tmp3)){
						HX_STACK_LINE(9276)
						break;
					}
					HX_STACK_LINE(9276)
					::zpp_nape::space::ZPP_AABBPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(9276)
					{
						HX_STACK_LINE(9276)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(9276)
						if ((tmp4)){
							HX_STACK_LINE(9276)
							ret = true;
							HX_STACK_LINE(9276)
							break;
						}
					}
					HX_STACK_LINE(9276)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(9276)
		tmp = ret;
	}
	HX_STACK_LINE(9276)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,has,return )

bool ZNPList_ZPP_AABBPair_obj::inlined_has( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","inlined_has",0x0635fdc7,"zpp_nape.util.ZNPList_ZPP_AABBPair.inlined_has","zpp_nape/util/Lists.hx",9280,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9289)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9290)
	{
		HX_STACK_LINE(9291)
		ret = false;
		HX_STACK_LINE(9292)
		{
			HX_STACK_LINE(9293)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9293)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9294)
			while((true)){
				HX_STACK_LINE(9294)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(9294)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(9294)
				if ((tmp2)){
					HX_STACK_LINE(9294)
					break;
				}
				HX_STACK_LINE(9295)
				::zpp_nape::space::ZPP_AABBPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(9296)
				{
					HX_STACK_LINE(9297)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(9297)
					if ((tmp3)){
						HX_STACK_LINE(9298)
						ret = true;
						HX_STACK_LINE(9299)
						break;
					}
				}
				HX_STACK_LINE(9302)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(9306)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9306)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_has,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","front",0xe06195ea,"zpp_nape.util.ZNPList_ZPP_AABBPair.front","zpp_nape/util/Lists.hx",9310,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9311)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9311)
	::zpp_nape::space::ZPP_AABBPair tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9311)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,front,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","back",0x812e8006,"zpp_nape.util.ZNPList_ZPP_AABBPair.back","zpp_nape/util/Lists.hx",9313,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9314)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9314)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9315)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9316)
	while((true)){
		HX_STACK_LINE(9316)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9316)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9316)
		if ((tmp2)){
			HX_STACK_LINE(9316)
			break;
		}
		HX_STACK_LINE(9317)
		ret = cur;
		HX_STACK_LINE(9318)
		cur = cur->next;
	}
	HX_STACK_LINE(9320)
	::zpp_nape::space::ZPP_AABBPair tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9320)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","iterator_at",0x0ad4ede5,"zpp_nape.util.ZNPList_ZPP_AABBPair.iterator_at","zpp_nape/util/Lists.hx",9322,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(9331)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9331)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9332)
	while((true)){
		HX_STACK_LINE(9332)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9332)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9332)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9332)
		if ((tmp2)){
			HX_STACK_LINE(9332)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(9332)
			tmp3 = false;
		}
		HX_STACK_LINE(9332)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(9332)
		if ((tmp4)){
			HX_STACK_LINE(9332)
			break;
		}
		HX_STACK_LINE(9332)
		ret = ret->next;
	}
	HX_STACK_LINE(9333)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9333)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,iterator_at,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_AABBPair","at",0x1c3e7512,"zpp_nape.util.ZNPList_ZPP_AABBPair.at","zpp_nape/util/Lists.hx",9335,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(9344)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9344)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9344)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(9345)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9345)
	::zpp_nape::space::ZPP_AABBPair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(9345)
	if ((tmp2)){
		HX_STACK_LINE(9345)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(9345)
		tmp3 = null();
	}
	HX_STACK_LINE(9345)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,at,return )


ZNPList_ZPP_AABBPair_obj::ZNPList_ZPP_AABBPair_obj()
{
}

void ZNPList_ZPP_AABBPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_AABBPair);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_AABBPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_AABBPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_AABBPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBPair >(); return inValue; }
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

bool ZNPList_ZPP_AABBPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_AABBPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_AABBPair*/ ,(int)offsetof(ZNPList_ZPP_AABBPair_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_AABBPair_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_AABBPair_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_AABBPair_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_AABBPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_AABBPair_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_AABBPair_obj::__mClass;

void ZNPList_ZPP_AABBPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_AABBPair","\xef","\x86","\x36","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_AABBPair_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_AABBPair_obj >;
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
