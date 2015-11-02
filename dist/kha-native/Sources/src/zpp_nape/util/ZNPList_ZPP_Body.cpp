#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Body_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","new",0xb90114c9,"zpp_nape.util.ZNPList_ZPP_Body.new","zpp_nape/util/Lists.hx",1426,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1436)
	this->length = (int)0;
	HX_STACK_LINE(1435)
	this->pushmod = false;
	HX_STACK_LINE(1434)
	this->modified = false;
	HX_STACK_LINE(1427)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Body_obj::~ZNPList_ZPP_Body_obj() { }

Dynamic ZNPList_ZPP_Body_obj::__CreateEmpty() { return  new ZNPList_ZPP_Body_obj; }
hx::ObjectPtr< ZNPList_ZPP_Body_obj > ZNPList_ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Body_obj > _result_ = new ZNPList_ZPP_Body_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Body_obj > _result_ = new ZNPList_ZPP_Body_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","begin",0xe22bdad2,"zpp_nape.util.ZNPList_ZPP_Body.begin","zpp_nape/util/Lists.hx",1431,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1432)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1432)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,begin,return )

Void ZNPList_ZPP_Body_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Body i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","setbegin",0x1f92023e,"zpp_nape.util.ZNPList_ZPP_Body.setbegin","zpp_nape/util/Lists.hx",1439,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(1440)
		this->head = i;
		HX_STACK_LINE(1441)
		this->modified = true;
		HX_STACK_LINE(1442)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,setbegin,(void))

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::add( ::zpp_nape::phys::ZPP_Body o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","add",0xb8f7368a,"zpp_nape.util.ZNPList_ZPP_Body.add","zpp_nape/util/Lists.hx",1444,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1445)
	::zpp_nape::phys::ZPP_Body tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1445)
	{
		HX_STACK_LINE(1445)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1445)
		{
			HX_STACK_LINE(1445)
			::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1445)
			{
				HX_STACK_LINE(1445)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1445)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1445)
				if ((tmp3)){
					HX_STACK_LINE(1445)
					::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1445)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(1445)
					::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1445)
					ret = tmp4;
					HX_STACK_LINE(1445)
					::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
					HX_STACK_LINE(1445)
					ret->next = null();
				}
				HX_STACK_LINE(1445)
				Dynamic();
			}
			HX_STACK_LINE(1445)
			ret->elt = o;
			HX_STACK_LINE(1445)
			tmp1 = ret;
		}
		HX_STACK_LINE(1445)
		::zpp_nape::util::ZNPNode_ZPP_Body temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(1445)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1445)
		temp->next = tmp2;
		HX_STACK_LINE(1445)
		this->head = temp;
		HX_STACK_LINE(1445)
		this->modified = true;
		HX_STACK_LINE(1445)
		(this->length)++;
		HX_STACK_LINE(1445)
		tmp = o;
	}
	HX_STACK_LINE(1445)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,add,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::inlined_add( ::zpp_nape::phys::ZPP_Body o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_add",0x54c3a1f6,"zpp_nape.util.ZNPList_ZPP_Body.inlined_add","zpp_nape/util/Lists.hx",1449,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1458)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1458)
	{
		HX_STACK_LINE(1459)
		::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1460)
		{
			HX_STACK_LINE(1461)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1461)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1461)
			if ((tmp2)){
				HX_STACK_LINE(1462)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1462)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(1468)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1468)
				ret = tmp3;
				HX_STACK_LINE(1469)
				::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1470)
				ret->next = null();
			}
			HX_STACK_LINE(1475)
			Dynamic();
		}
		HX_STACK_LINE(1477)
		ret->elt = o;
		HX_STACK_LINE(1478)
		tmp = ret;
	}
	HX_STACK_LINE(1458)
	::zpp_nape::util::ZNPNode_ZPP_Body temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1480)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1480)
	temp->next = tmp1;
	HX_STACK_LINE(1481)
	this->head = temp;
	HX_STACK_LINE(1482)
	this->modified = true;
	HX_STACK_LINE(1483)
	(this->length)++;
	HX_STACK_LINE(1484)
	::zpp_nape::phys::ZPP_Body tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1484)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_add,return )

Void ZNPList_ZPP_Body_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Body x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","addAll",0x0857acb7,"zpp_nape.util.ZNPList_ZPP_Body.addAll","zpp_nape/util/Lists.hx",1495,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1496)
		::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1497)
		while((true)){
			HX_STACK_LINE(1497)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1497)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1497)
			if ((tmp1)){
				HX_STACK_LINE(1497)
				break;
			}
			HX_STACK_LINE(1498)
			::zpp_nape::phys::ZPP_Body i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1499)
			::zpp_nape::phys::ZPP_Body tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1499)
			this->add(tmp2);
			HX_STACK_LINE(1500)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Body cur,::zpp_nape::phys::ZPP_Body o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","insert",0x0739e670,"zpp_nape.util.ZNPList_ZPP_Body.insert","zpp_nape/util/Lists.hx",1504,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1505)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1505)
	{
		HX_STACK_LINE(1505)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1505)
		{
			HX_STACK_LINE(1505)
			::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1505)
			{
				HX_STACK_LINE(1505)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1505)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1505)
				if ((tmp3)){
					HX_STACK_LINE(1505)
					::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1505)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(1505)
					::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1505)
					ret = tmp4;
					HX_STACK_LINE(1505)
					::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
					HX_STACK_LINE(1505)
					ret->next = null();
				}
				HX_STACK_LINE(1505)
				Dynamic();
			}
			HX_STACK_LINE(1505)
			ret->elt = o;
			HX_STACK_LINE(1505)
			tmp1 = ret;
		}
		HX_STACK_LINE(1505)
		::zpp_nape::util::ZNPNode_ZPP_Body temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(1505)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1505)
		if ((tmp2)){
			HX_STACK_LINE(1505)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1505)
			temp->next = tmp3;
			HX_STACK_LINE(1505)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(1505)
			temp->next = cur->next;
			HX_STACK_LINE(1505)
			cur->next = temp;
		}
		HX_STACK_LINE(1505)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1505)
		this->pushmod = tmp3;
		HX_STACK_LINE(1505)
		(this->length)++;
		HX_STACK_LINE(1505)
		tmp = temp;
	}
	HX_STACK_LINE(1505)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Body cur,::zpp_nape::phys::ZPP_Body o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_insert",0xd4256684,"zpp_nape.util.ZNPList_ZPP_Body.inlined_insert","zpp_nape/util/Lists.hx",1509,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1518)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1518)
	{
		HX_STACK_LINE(1519)
		::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1520)
		{
			HX_STACK_LINE(1521)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1521)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1521)
			if ((tmp2)){
				HX_STACK_LINE(1522)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1522)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(1528)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1528)
				ret = tmp3;
				HX_STACK_LINE(1529)
				::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1530)
				ret->next = null();
			}
			HX_STACK_LINE(1535)
			Dynamic();
		}
		HX_STACK_LINE(1537)
		ret->elt = o;
		HX_STACK_LINE(1538)
		tmp = ret;
	}
	HX_STACK_LINE(1518)
	::zpp_nape::util::ZNPNode_ZPP_Body temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1540)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1540)
	if ((tmp1)){
		HX_STACK_LINE(1541)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1541)
		temp->next = tmp2;
		HX_STACK_LINE(1542)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1545)
		temp->next = cur->next;
		HX_STACK_LINE(1546)
		cur->next = temp;
	}
	HX_STACK_LINE(1548)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1548)
	this->pushmod = tmp2;
	HX_STACK_LINE(1549)
	(this->length)++;
	HX_STACK_LINE(1550)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1550)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,inlined_insert,return )

Void ZNPList_ZPP_Body_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","pop",0xb902a1fa,"zpp_nape.util.ZNPList_ZPP_Body.pop","zpp_nape/util/Lists.hx",1553,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1553)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1553)
		::zpp_nape::util::ZNPNode_ZPP_Body ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1553)
		this->head = ret->next;
		HX_STACK_LINE(1553)
		{
			HX_STACK_LINE(1553)
			::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1553)
			o->elt = null();
			HX_STACK_LINE(1553)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1553)
			o->next = tmp1;
			HX_STACK_LINE(1553)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1553)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1553)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1553)
		if ((tmp2)){
			HX_STACK_LINE(1553)
			this->pushmod = true;
		}
		HX_STACK_LINE(1553)
		this->modified = true;
		HX_STACK_LINE(1553)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,pop,(void))

Void ZNPList_ZPP_Body_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_pop",0x54cf0d66,"zpp_nape.util.ZNPList_ZPP_Body.inlined_pop","zpp_nape/util/Lists.hx",1557,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1566)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1566)
		::zpp_nape::util::ZNPNode_ZPP_Body ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1567)
		this->head = ret->next;
		HX_STACK_LINE(1569)
		{
			HX_STACK_LINE(1570)
			::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1579)
			o->elt = null();
			HX_STACK_LINE(1580)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1580)
			o->next = tmp1;
			HX_STACK_LINE(1581)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1586)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1586)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1586)
		if ((tmp2)){
			HX_STACK_LINE(1586)
			this->pushmod = true;
		}
		HX_STACK_LINE(1587)
		this->modified = true;
		HX_STACK_LINE(1588)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_pop,(void))

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","pop_unsafe",0xb8e0870b,"zpp_nape.util.ZNPList_ZPP_Body.pop_unsafe","zpp_nape/util/Lists.hx",1590,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1591)
	::zpp_nape::phys::ZPP_Body tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1591)
	{
		HX_STACK_LINE(1591)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1591)
		::zpp_nape::phys::ZPP_Body ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1591)
		this->pop();
		HX_STACK_LINE(1591)
		tmp = ret;
	}
	HX_STACK_LINE(1591)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,pop_unsafe,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_pop_unsafe",0xa58fa11f,"zpp_nape.util.ZNPList_ZPP_Body.inlined_pop_unsafe","zpp_nape/util/Lists.hx",1595,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1604)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1604)
	::zpp_nape::phys::ZPP_Body ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1605)
	this->pop();
	HX_STACK_LINE(1606)
	::zpp_nape::phys::ZPP_Body tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1606)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Body_obj::remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","remove",0x6de53f7b,"zpp_nape.util.ZNPList_ZPP_Body.remove","zpp_nape/util/Lists.hx",1617,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(1617)
		::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1617)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1617)
		::zpp_nape::util::ZNPNode_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1617)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1617)
		while((true)){
			HX_STACK_LINE(1617)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1617)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1617)
			if ((tmp2)){
				HX_STACK_LINE(1617)
				break;
			}
			HX_STACK_LINE(1617)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1617)
			if ((tmp3)){
				HX_STACK_LINE(1617)
				{
					HX_STACK_LINE(1617)
					::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(1617)
					::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1617)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1617)
					if ((tmp4)){
						HX_STACK_LINE(1617)
						::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1617)
						old = tmp5;
						HX_STACK_LINE(1617)
						ret1 = old->next;
						HX_STACK_LINE(1617)
						this->head = ret1;
						HX_STACK_LINE(1617)
						::zpp_nape::util::ZNPNode_ZPP_Body tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1617)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1617)
						if ((tmp7)){
							HX_STACK_LINE(1617)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(1617)
						old = pre->next;
						HX_STACK_LINE(1617)
						ret1 = old->next;
						HX_STACK_LINE(1617)
						pre->next = ret1;
						HX_STACK_LINE(1617)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1617)
						if ((tmp5)){
							HX_STACK_LINE(1617)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(1617)
					{
						HX_STACK_LINE(1617)
						::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1617)
						o->elt = null();
						HX_STACK_LINE(1617)
						::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1617)
						o->next = tmp5;
						HX_STACK_LINE(1617)
						::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1617)
					this->modified = true;
					HX_STACK_LINE(1617)
					(this->length)--;
					HX_STACK_LINE(1617)
					this->pushmod = true;
					HX_STACK_LINE(1617)
					ret1;
				}
				HX_STACK_LINE(1617)
				ret = true;
				HX_STACK_LINE(1617)
				break;
			}
			HX_STACK_LINE(1617)
			pre = cur;
			HX_STACK_LINE(1617)
			cur = cur->next;
		}
		HX_STACK_LINE(1617)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,remove,(void))

bool ZNPList_ZPP_Body_obj::try_remove( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","try_remove",0xd00abcbf,"zpp_nape.util.ZNPList_ZPP_Body.try_remove","zpp_nape/util/Lists.hx",1619,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1628)
	::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1629)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1629)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1630)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1631)
	while((true)){
		HX_STACK_LINE(1631)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1631)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1631)
		if ((tmp2)){
			HX_STACK_LINE(1631)
			break;
		}
		HX_STACK_LINE(1632)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1632)
		if ((tmp3)){
			HX_STACK_LINE(1633)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1633)
			this->erase(tmp4);
			HX_STACK_LINE(1634)
			ret = true;
			HX_STACK_LINE(1635)
			break;
		}
		HX_STACK_LINE(1637)
		pre = cur;
		HX_STACK_LINE(1638)
		cur = cur->next;
	}
	HX_STACK_LINE(1640)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1640)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,try_remove,return )

Void ZNPList_ZPP_Body_obj::inlined_remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_remove",0x3ad0bf8f,"zpp_nape.util.ZNPList_ZPP_Body.inlined_remove","zpp_nape/util/Lists.hx",1653,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(1653)
		::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1653)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1653)
		::zpp_nape::util::ZNPNode_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1653)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1653)
		while((true)){
			HX_STACK_LINE(1653)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1653)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1653)
			if ((tmp2)){
				HX_STACK_LINE(1653)
				break;
			}
			HX_STACK_LINE(1653)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1653)
			if ((tmp3)){
				HX_STACK_LINE(1653)
				{
					HX_STACK_LINE(1653)
					::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(1653)
					::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1653)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1653)
					if ((tmp4)){
						HX_STACK_LINE(1653)
						::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1653)
						old = tmp5;
						HX_STACK_LINE(1653)
						ret1 = old->next;
						HX_STACK_LINE(1653)
						this->head = ret1;
						HX_STACK_LINE(1653)
						::zpp_nape::util::ZNPNode_ZPP_Body tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1653)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1653)
						if ((tmp7)){
							HX_STACK_LINE(1653)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(1653)
						old = pre->next;
						HX_STACK_LINE(1653)
						ret1 = old->next;
						HX_STACK_LINE(1653)
						pre->next = ret1;
						HX_STACK_LINE(1653)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1653)
						if ((tmp5)){
							HX_STACK_LINE(1653)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(1653)
					{
						HX_STACK_LINE(1653)
						::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1653)
						o->elt = null();
						HX_STACK_LINE(1653)
						::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1653)
						o->next = tmp5;
						HX_STACK_LINE(1653)
						::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1653)
					this->modified = true;
					HX_STACK_LINE(1653)
					(this->length)--;
					HX_STACK_LINE(1653)
					this->pushmod = true;
					HX_STACK_LINE(1653)
					ret1;
				}
				HX_STACK_LINE(1653)
				ret = true;
				HX_STACK_LINE(1653)
				break;
			}
			HX_STACK_LINE(1653)
			pre = cur;
			HX_STACK_LINE(1653)
			cur = cur->next;
		}
		HX_STACK_LINE(1653)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_remove,(void))

bool ZNPList_ZPP_Body_obj::inlined_try_remove( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_try_remove",0xbcb9d6d3,"zpp_nape.util.ZNPList_ZPP_Body.inlined_try_remove","zpp_nape/util/Lists.hx",1657,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1666)
	::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1667)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1667)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1668)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1669)
	while((true)){
		HX_STACK_LINE(1669)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1669)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1669)
		if ((tmp2)){
			HX_STACK_LINE(1669)
			break;
		}
		HX_STACK_LINE(1670)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1670)
		if ((tmp3)){
			HX_STACK_LINE(1671)
			{
				HX_STACK_LINE(1671)
				::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1671)
				::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1671)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1671)
				if ((tmp4)){
					HX_STACK_LINE(1671)
					::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1671)
					old = tmp5;
					HX_STACK_LINE(1671)
					ret1 = old->next;
					HX_STACK_LINE(1671)
					this->head = ret1;
					HX_STACK_LINE(1671)
					::zpp_nape::util::ZNPNode_ZPP_Body tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1671)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1671)
					if ((tmp7)){
						HX_STACK_LINE(1671)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1671)
					old = pre->next;
					HX_STACK_LINE(1671)
					ret1 = old->next;
					HX_STACK_LINE(1671)
					pre->next = ret1;
					HX_STACK_LINE(1671)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1671)
					if ((tmp5)){
						HX_STACK_LINE(1671)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(1671)
				{
					HX_STACK_LINE(1671)
					::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1671)
					o->elt = null();
					HX_STACK_LINE(1671)
					::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1671)
					o->next = tmp5;
					HX_STACK_LINE(1671)
					::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1671)
				this->modified = true;
				HX_STACK_LINE(1671)
				(this->length)--;
				HX_STACK_LINE(1671)
				this->pushmod = true;
				HX_STACK_LINE(1671)
				ret1;
			}
			HX_STACK_LINE(1672)
			ret = true;
			HX_STACK_LINE(1673)
			break;
		}
		HX_STACK_LINE(1675)
		pre = cur;
		HX_STACK_LINE(1676)
		cur = cur->next;
	}
	HX_STACK_LINE(1678)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1678)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Body pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","erase",0xa4f2d98f,"zpp_nape.util.ZNPList_ZPP_Body.erase","zpp_nape/util/Lists.hx",1680,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(1681)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1681)
	{
		HX_STACK_LINE(1681)
		::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(1681)
		::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1681)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1681)
		if ((tmp1)){
			HX_STACK_LINE(1681)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1681)
			old = tmp2;
			HX_STACK_LINE(1681)
			ret = old->next;
			HX_STACK_LINE(1681)
			this->head = ret;
			HX_STACK_LINE(1681)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1681)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1681)
			if ((tmp4)){
				HX_STACK_LINE(1681)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(1681)
			old = pre->next;
			HX_STACK_LINE(1681)
			ret = old->next;
			HX_STACK_LINE(1681)
			pre->next = ret;
			HX_STACK_LINE(1681)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1681)
			if ((tmp2)){
				HX_STACK_LINE(1681)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(1681)
		{
			HX_STACK_LINE(1681)
			::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1681)
			o->elt = null();
			HX_STACK_LINE(1681)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1681)
			o->next = tmp2;
			HX_STACK_LINE(1681)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1681)
		this->modified = true;
		HX_STACK_LINE(1681)
		(this->length)--;
		HX_STACK_LINE(1681)
		this->pushmod = true;
		HX_STACK_LINE(1681)
		tmp = ret;
	}
	HX_STACK_LINE(1681)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Body pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_erase",0x1d41f7fb,"zpp_nape.util.ZNPList_ZPP_Body.inlined_erase","zpp_nape/util/Lists.hx",1685,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(1694)
	::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1695)
	::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1696)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1696)
	if ((tmp)){
		HX_STACK_LINE(1697)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1697)
		old = tmp1;
		HX_STACK_LINE(1698)
		ret = old->next;
		HX_STACK_LINE(1699)
		this->head = ret;
		HX_STACK_LINE(1700)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1700)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1700)
		if ((tmp3)){
			HX_STACK_LINE(1700)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(1703)
		old = pre->next;
		HX_STACK_LINE(1704)
		ret = old->next;
		HX_STACK_LINE(1705)
		pre->next = ret;
		HX_STACK_LINE(1706)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1706)
		if ((tmp1)){
			HX_STACK_LINE(1706)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(1709)
	{
		HX_STACK_LINE(1710)
		::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1719)
		o->elt = null();
		HX_STACK_LINE(1720)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1720)
		o->next = tmp1;
		HX_STACK_LINE(1721)
		::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1726)
	this->modified = true;
	HX_STACK_LINE(1727)
	(this->length)--;
	HX_STACK_LINE(1728)
	this->pushmod = true;
	HX_STACK_LINE(1729)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1729)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Body pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","splice",0x28fb28b3,"zpp_nape.util.ZNPList_ZPP_Body.splice","zpp_nape/util/Lists.hx",1731,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(1732)
	while((true)){
		HX_STACK_LINE(1732)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1732)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1732)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1732)
		if ((tmp1)){
			HX_STACK_LINE(1732)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(1732)
			tmp2 = false;
		}
		HX_STACK_LINE(1732)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1732)
		if ((tmp3)){
			HX_STACK_LINE(1732)
			break;
		}
		HX_STACK_LINE(1732)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1732)
		this->erase(tmp4);
	}
	HX_STACK_LINE(1733)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1733)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,splice,return )

Void ZNPList_ZPP_Body_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","clear",0x7a316236,"zpp_nape.util.ZNPList_ZPP_Body.clear","zpp_nape/util/Lists.hx",1736,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1736)
		while((true)){
			HX_STACK_LINE(1736)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1736)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1736)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1736)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1736)
			if ((tmp3)){
				HX_STACK_LINE(1736)
				break;
			}
			HX_STACK_LINE(1736)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1736)
			::zpp_nape::util::ZNPNode_ZPP_Body ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1736)
			this->head = ret->next;
			HX_STACK_LINE(1736)
			{
				HX_STACK_LINE(1736)
				::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1736)
				o->elt = null();
				HX_STACK_LINE(1736)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1736)
				o->next = tmp5;
				HX_STACK_LINE(1736)
				::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1736)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1736)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1736)
			if ((tmp6)){
				HX_STACK_LINE(1736)
				this->pushmod = true;
			}
			HX_STACK_LINE(1736)
			this->modified = true;
			HX_STACK_LINE(1736)
			(this->length)--;
		}
		HX_STACK_LINE(1736)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,clear,(void))

Void ZNPList_ZPP_Body_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_clear",0xf28080a2,"zpp_nape.util.ZNPList_ZPP_Body.inlined_clear","zpp_nape/util/Lists.hx",1741,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1742)
		while((true)){
			HX_STACK_LINE(1742)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1742)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1742)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1742)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1742)
			if ((tmp3)){
				HX_STACK_LINE(1742)
				break;
			}
			HX_STACK_LINE(1742)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1742)
			::zpp_nape::util::ZNPNode_ZPP_Body ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1742)
			this->head = ret->next;
			HX_STACK_LINE(1742)
			{
				HX_STACK_LINE(1742)
				::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1742)
				o->elt = null();
				HX_STACK_LINE(1742)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1742)
				o->next = tmp5;
				HX_STACK_LINE(1742)
				::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1742)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1742)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1742)
			if ((tmp6)){
				HX_STACK_LINE(1742)
				this->pushmod = true;
			}
			HX_STACK_LINE(1742)
			this->modified = true;
			HX_STACK_LINE(1742)
			(this->length)--;
		}
		HX_STACK_LINE(1743)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_clear,(void))

Void ZNPList_ZPP_Body_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","reverse",0xe2ae660b,"zpp_nape.util.ZNPList_ZPP_Body.reverse","zpp_nape/util/Lists.hx",1746,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1747)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1747)
		::zpp_nape::util::ZNPNode_ZPP_Body cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1748)
		::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1749)
		while((true)){
			HX_STACK_LINE(1749)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1749)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1749)
			if ((tmp2)){
				HX_STACK_LINE(1749)
				break;
			}
			HX_STACK_LINE(1750)
			::zpp_nape::util::ZNPNode_ZPP_Body nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1751)
			cur->next = pre;
			HX_STACK_LINE(1752)
			this->head = cur;
			HX_STACK_LINE(1753)
			pre = cur;
			HX_STACK_LINE(1754)
			cur = nx;
		}
		HX_STACK_LINE(1756)
		this->modified = true;
		HX_STACK_LINE(1757)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,reverse,(void))

bool ZNPList_ZPP_Body_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","empty",0xa1b02b36,"zpp_nape.util.ZNPList_ZPP_Body.empty","zpp_nape/util/Lists.hx",1761,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1762)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1762)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1762)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,empty,return )

int ZNPList_ZPP_Body_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","size",0x2b423838,"zpp_nape.util.ZNPList_ZPP_Body.size","zpp_nape/util/Lists.hx",1766,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1767)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1767)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,size,return )

bool ZNPList_ZPP_Body_obj::has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","has",0xb8fc83c3,"zpp_nape.util.ZNPList_ZPP_Body.has","zpp_nape/util/Lists.hx",1769,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1770)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1770)
	{
		HX_STACK_LINE(1770)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1770)
		{
			HX_STACK_LINE(1770)
			ret = false;
			HX_STACK_LINE(1770)
			{
				HX_STACK_LINE(1770)
				::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1770)
				::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1770)
				while((true)){
					HX_STACK_LINE(1770)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1770)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1770)
					if ((tmp3)){
						HX_STACK_LINE(1770)
						break;
					}
					HX_STACK_LINE(1770)
					::zpp_nape::phys::ZPP_Body npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(1770)
					{
						HX_STACK_LINE(1770)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1770)
						if ((tmp4)){
							HX_STACK_LINE(1770)
							ret = true;
							HX_STACK_LINE(1770)
							break;
						}
					}
					HX_STACK_LINE(1770)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(1770)
		tmp = ret;
	}
	HX_STACK_LINE(1770)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,has,return )

bool ZNPList_ZPP_Body_obj::inlined_has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","inlined_has",0x54c8ef2f,"zpp_nape.util.ZNPList_ZPP_Body.inlined_has","zpp_nape/util/Lists.hx",1774,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1783)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1784)
	{
		HX_STACK_LINE(1785)
		ret = false;
		HX_STACK_LINE(1786)
		{
			HX_STACK_LINE(1787)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1787)
			::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1788)
			while((true)){
				HX_STACK_LINE(1788)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1788)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1788)
				if ((tmp2)){
					HX_STACK_LINE(1788)
					break;
				}
				HX_STACK_LINE(1789)
				::zpp_nape::phys::ZPP_Body npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1790)
				{
					HX_STACK_LINE(1791)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1791)
					if ((tmp3)){
						HX_STACK_LINE(1792)
						ret = true;
						HX_STACK_LINE(1793)
						break;
					}
				}
				HX_STACK_LINE(1796)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1800)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1800)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_has,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","front",0x38640952,"zpp_nape.util.ZNPList_ZPP_Body.front","zpp_nape/util/Lists.hx",1804,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1805)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1805)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1805)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,front,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","back",0x1fff719e,"zpp_nape.util.ZNPList_ZPP_Body.back","zpp_nape/util/Lists.hx",1807,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1808)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1808)
	::zpp_nape::util::ZNPNode_ZPP_Body ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1809)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1810)
	while((true)){
		HX_STACK_LINE(1810)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1810)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1810)
		if ((tmp2)){
			HX_STACK_LINE(1810)
			break;
		}
		HX_STACK_LINE(1811)
		ret = cur;
		HX_STACK_LINE(1812)
		cur = cur->next;
	}
	HX_STACK_LINE(1814)
	::zpp_nape::phys::ZPP_Body tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1814)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","iterator_at",0x5967df4d,"zpp_nape.util.ZNPList_ZPP_Body.iterator_at","zpp_nape/util/Lists.hx",1816,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1825)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1825)
	::zpp_nape::util::ZNPNode_ZPP_Body ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1826)
	while((true)){
		HX_STACK_LINE(1826)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1826)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1826)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1826)
		if ((tmp2)){
			HX_STACK_LINE(1826)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(1826)
			tmp3 = false;
		}
		HX_STACK_LINE(1826)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1826)
		if ((tmp4)){
			HX_STACK_LINE(1826)
			break;
		}
		HX_STACK_LINE(1826)
		ret = ret->next;
	}
	HX_STACK_LINE(1827)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1827)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,iterator_at,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Body","at",0xa86f50aa,"zpp_nape.util.ZNPList_ZPP_Body.at","zpp_nape/util/Lists.hx",1829,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1838)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1838)
	::zpp_nape::util::ZNPNode_ZPP_Body tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1838)
	::zpp_nape::util::ZNPNode_ZPP_Body it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1839)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1839)
	::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1839)
	if ((tmp2)){
		HX_STACK_LINE(1839)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(1839)
		tmp3 = null();
	}
	HX_STACK_LINE(1839)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,at,return )


ZNPList_ZPP_Body_obj::ZNPList_ZPP_Body_obj()
{
}

void ZNPList_ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Body);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Body_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return inValue; }
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

bool ZNPList_ZPP_Body_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Body*/ ,(int)offsetof(ZNPList_ZPP_Body_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Body_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Body_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Body_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Body_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Body_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Body_obj::__mClass;

void ZNPList_ZPP_Body_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Body","\x57","\xfc","\x3a","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Body_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Body_obj >;
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
