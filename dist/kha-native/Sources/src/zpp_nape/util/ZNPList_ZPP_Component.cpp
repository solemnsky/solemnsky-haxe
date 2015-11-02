#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Component
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Component_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","new",0x6e9253da,"zpp_nape.util.ZNPList_ZPP_Component.new","zpp_nape/util/Lists.hx",10183,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10193)
	this->length = (int)0;
	HX_STACK_LINE(10192)
	this->pushmod = false;
	HX_STACK_LINE(10191)
	this->modified = false;
	HX_STACK_LINE(10184)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Component_obj::~ZNPList_ZPP_Component_obj() { }

Dynamic ZNPList_ZPP_Component_obj::__CreateEmpty() { return  new ZNPList_ZPP_Component_obj; }
hx::ObjectPtr< ZNPList_ZPP_Component_obj > ZNPList_ZPP_Component_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Component_obj > _result_ = new ZNPList_ZPP_Component_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Component_obj > _result_ = new ZNPList_ZPP_Component_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","begin",0x0dd7c023,"zpp_nape.util.ZNPList_ZPP_Component.begin","zpp_nape/util/Lists.hx",10188,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10189)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10189)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,begin,return )

Void ZNPList_ZPP_Component_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Component i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","setbegin",0xe42d858d,"zpp_nape.util.ZNPList_ZPP_Component.setbegin","zpp_nape/util/Lists.hx",10196,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(10197)
		this->head = i;
		HX_STACK_LINE(10198)
		this->modified = true;
		HX_STACK_LINE(10199)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,setbegin,(void))

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::add( ::zpp_nape::space::ZPP_Component o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","add",0x6e88759b,"zpp_nape.util.ZNPList_ZPP_Component.add","zpp_nape/util/Lists.hx",10201,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10202)
	::zpp_nape::space::ZPP_Component tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10202)
	{
		HX_STACK_LINE(10202)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10202)
		{
			HX_STACK_LINE(10202)
			::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10202)
			{
				HX_STACK_LINE(10202)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(10202)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10202)
				if ((tmp3)){
					HX_STACK_LINE(10202)
					::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10202)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(10202)
					::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10202)
					ret = tmp4;
					HX_STACK_LINE(10202)
					::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
					HX_STACK_LINE(10202)
					ret->next = null();
				}
				HX_STACK_LINE(10202)
				Dynamic();
			}
			HX_STACK_LINE(10202)
			ret->elt = o;
			HX_STACK_LINE(10202)
			tmp1 = ret;
		}
		HX_STACK_LINE(10202)
		::zpp_nape::util::ZNPNode_ZPP_Component temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(10202)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10202)
		temp->next = tmp2;
		HX_STACK_LINE(10202)
		this->head = temp;
		HX_STACK_LINE(10202)
		this->modified = true;
		HX_STACK_LINE(10202)
		(this->length)++;
		HX_STACK_LINE(10202)
		tmp = o;
	}
	HX_STACK_LINE(10202)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,add,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::inlined_add( ::zpp_nape::space::ZPP_Component o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_add",0xee33da07,"zpp_nape.util.ZNPList_ZPP_Component.inlined_add","zpp_nape/util/Lists.hx",10206,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10215)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10215)
	{
		HX_STACK_LINE(10216)
		::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10217)
		{
			HX_STACK_LINE(10218)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10218)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10218)
			if ((tmp2)){
				HX_STACK_LINE(10219)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10219)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(10225)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10225)
				ret = tmp3;
				HX_STACK_LINE(10226)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10227)
				ret->next = null();
			}
			HX_STACK_LINE(10232)
			Dynamic();
		}
		HX_STACK_LINE(10234)
		ret->elt = o;
		HX_STACK_LINE(10235)
		tmp = ret;
	}
	HX_STACK_LINE(10215)
	::zpp_nape::util::ZNPNode_ZPP_Component temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10237)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10237)
	temp->next = tmp1;
	HX_STACK_LINE(10238)
	this->head = temp;
	HX_STACK_LINE(10239)
	this->modified = true;
	HX_STACK_LINE(10240)
	(this->length)++;
	HX_STACK_LINE(10241)
	::zpp_nape::space::ZPP_Component tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10241)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_add,return )

Void ZNPList_ZPP_Component_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Component x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","addAll",0x13146e46,"zpp_nape.util.ZNPList_ZPP_Component.addAll","zpp_nape/util/Lists.hx",10252,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(10253)
		::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(10254)
		while((true)){
			HX_STACK_LINE(10254)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10254)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10254)
			if ((tmp1)){
				HX_STACK_LINE(10254)
				break;
			}
			HX_STACK_LINE(10255)
			::zpp_nape::space::ZPP_Component i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(10256)
			::zpp_nape::space::ZPP_Component tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10256)
			this->add(tmp2);
			HX_STACK_LINE(10257)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Component cur,::zpp_nape::space::ZPP_Component o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","insert",0x11f6a7ff,"zpp_nape.util.ZNPList_ZPP_Component.insert","zpp_nape/util/Lists.hx",10261,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10262)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10262)
	{
		HX_STACK_LINE(10262)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10262)
		{
			HX_STACK_LINE(10262)
			::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10262)
			{
				HX_STACK_LINE(10262)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(10262)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10262)
				if ((tmp3)){
					HX_STACK_LINE(10262)
					::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10262)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(10262)
					::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10262)
					ret = tmp4;
					HX_STACK_LINE(10262)
					::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
					HX_STACK_LINE(10262)
					ret->next = null();
				}
				HX_STACK_LINE(10262)
				Dynamic();
			}
			HX_STACK_LINE(10262)
			ret->elt = o;
			HX_STACK_LINE(10262)
			tmp1 = ret;
		}
		HX_STACK_LINE(10262)
		::zpp_nape::util::ZNPNode_ZPP_Component temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(10262)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10262)
		if ((tmp2)){
			HX_STACK_LINE(10262)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10262)
			temp->next = tmp3;
			HX_STACK_LINE(10262)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(10262)
			temp->next = cur->next;
			HX_STACK_LINE(10262)
			cur->next = temp;
		}
		HX_STACK_LINE(10262)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10262)
		this->pushmod = tmp3;
		HX_STACK_LINE(10262)
		(this->length)++;
		HX_STACK_LINE(10262)
		tmp = temp;
	}
	HX_STACK_LINE(10262)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Component cur,::zpp_nape::space::ZPP_Component o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_insert",0xcfe4cf13,"zpp_nape.util.ZNPList_ZPP_Component.inlined_insert","zpp_nape/util/Lists.hx",10266,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10275)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10275)
	{
		HX_STACK_LINE(10276)
		::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10277)
		{
			HX_STACK_LINE(10278)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10278)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10278)
			if ((tmp2)){
				HX_STACK_LINE(10279)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10279)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(10285)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(10285)
				ret = tmp3;
				HX_STACK_LINE(10286)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10287)
				ret->next = null();
			}
			HX_STACK_LINE(10292)
			Dynamic();
		}
		HX_STACK_LINE(10294)
		ret->elt = o;
		HX_STACK_LINE(10295)
		tmp = ret;
	}
	HX_STACK_LINE(10275)
	::zpp_nape::util::ZNPNode_ZPP_Component temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10297)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10297)
	if ((tmp1)){
		HX_STACK_LINE(10298)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10298)
		temp->next = tmp2;
		HX_STACK_LINE(10299)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10302)
		temp->next = cur->next;
		HX_STACK_LINE(10303)
		cur->next = temp;
	}
	HX_STACK_LINE(10305)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10305)
	this->pushmod = tmp2;
	HX_STACK_LINE(10306)
	(this->length)++;
	HX_STACK_LINE(10307)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(10307)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,inlined_insert,return )

Void ZNPList_ZPP_Component_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","pop",0x6e93e10b,"zpp_nape.util.ZNPList_ZPP_Component.pop","zpp_nape/util/Lists.hx",10310,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10310)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10310)
		::zpp_nape::util::ZNPNode_ZPP_Component ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10310)
		this->head = ret->next;
		HX_STACK_LINE(10310)
		{
			HX_STACK_LINE(10310)
			::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10310)
			o->elt = null();
			HX_STACK_LINE(10310)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10310)
			o->next = tmp1;
			HX_STACK_LINE(10310)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10310)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10310)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10310)
		if ((tmp2)){
			HX_STACK_LINE(10310)
			this->pushmod = true;
		}
		HX_STACK_LINE(10310)
		this->modified = true;
		HX_STACK_LINE(10310)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,pop,(void))

Void ZNPList_ZPP_Component_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_pop",0xee3f4577,"zpp_nape.util.ZNPList_ZPP_Component.inlined_pop","zpp_nape/util/Lists.hx",10314,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10323)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10323)
		::zpp_nape::util::ZNPNode_ZPP_Component ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10324)
		this->head = ret->next;
		HX_STACK_LINE(10326)
		{
			HX_STACK_LINE(10327)
			::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10336)
			o->elt = null();
			HX_STACK_LINE(10337)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10337)
			o->next = tmp1;
			HX_STACK_LINE(10338)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10343)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10343)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10343)
		if ((tmp2)){
			HX_STACK_LINE(10343)
			this->pushmod = true;
		}
		HX_STACK_LINE(10344)
		this->modified = true;
		HX_STACK_LINE(10345)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","pop_unsafe",0x7ddebc1a,"zpp_nape.util.ZNPList_ZPP_Component.pop_unsafe","zpp_nape/util/Lists.hx",10347,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10348)
	::zpp_nape::space::ZPP_Component tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10348)
	{
		HX_STACK_LINE(10348)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10348)
		::zpp_nape::space::ZPP_Component ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10348)
		this->pop();
		HX_STACK_LINE(10348)
		tmp = ret;
	}
	HX_STACK_LINE(10348)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_pop_unsafe",0xef6ffd2e,"zpp_nape.util.ZNPList_ZPP_Component.inlined_pop_unsafe","zpp_nape/util/Lists.hx",10352,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10361)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10361)
	::zpp_nape::space::ZPP_Component ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10362)
	this->pop();
	HX_STACK_LINE(10363)
	::zpp_nape::space::ZPP_Component tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10363)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Component_obj::remove( ::zpp_nape::space::ZPP_Component obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","remove",0x78a2010a,"zpp_nape.util.ZNPList_ZPP_Component.remove","zpp_nape/util/Lists.hx",10374,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10374)
		::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10374)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10374)
		::zpp_nape::util::ZNPNode_ZPP_Component cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10374)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10374)
		while((true)){
			HX_STACK_LINE(10374)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10374)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10374)
			if ((tmp2)){
				HX_STACK_LINE(10374)
				break;
			}
			HX_STACK_LINE(10374)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10374)
			if ((tmp3)){
				HX_STACK_LINE(10374)
				{
					HX_STACK_LINE(10374)
					::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10374)
					::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10374)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10374)
					if ((tmp4)){
						HX_STACK_LINE(10374)
						::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10374)
						old = tmp5;
						HX_STACK_LINE(10374)
						ret1 = old->next;
						HX_STACK_LINE(10374)
						this->head = ret1;
						HX_STACK_LINE(10374)
						::zpp_nape::util::ZNPNode_ZPP_Component tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(10374)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(10374)
						if ((tmp7)){
							HX_STACK_LINE(10374)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10374)
						old = pre->next;
						HX_STACK_LINE(10374)
						ret1 = old->next;
						HX_STACK_LINE(10374)
						pre->next = ret1;
						HX_STACK_LINE(10374)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10374)
						if ((tmp5)){
							HX_STACK_LINE(10374)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10374)
					{
						HX_STACK_LINE(10374)
						::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10374)
						o->elt = null();
						HX_STACK_LINE(10374)
						::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10374)
						o->next = tmp5;
						HX_STACK_LINE(10374)
						::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10374)
					this->modified = true;
					HX_STACK_LINE(10374)
					(this->length)--;
					HX_STACK_LINE(10374)
					this->pushmod = true;
					HX_STACK_LINE(10374)
					ret1;
				}
				HX_STACK_LINE(10374)
				ret = true;
				HX_STACK_LINE(10374)
				break;
			}
			HX_STACK_LINE(10374)
			pre = cur;
			HX_STACK_LINE(10374)
			cur = cur->next;
		}
		HX_STACK_LINE(10374)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,remove,(void))

bool ZNPList_ZPP_Component_obj::try_remove( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","try_remove",0x9508f1ce,"zpp_nape.util.ZNPList_ZPP_Component.try_remove","zpp_nape/util/Lists.hx",10376,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10385)
	::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10386)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10386)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10387)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10388)
	while((true)){
		HX_STACK_LINE(10388)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10388)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10388)
		if ((tmp2)){
			HX_STACK_LINE(10388)
			break;
		}
		HX_STACK_LINE(10389)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10389)
		if ((tmp3)){
			HX_STACK_LINE(10390)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10390)
			this->erase(tmp4);
			HX_STACK_LINE(10391)
			ret = true;
			HX_STACK_LINE(10392)
			break;
		}
		HX_STACK_LINE(10394)
		pre = cur;
		HX_STACK_LINE(10395)
		cur = cur->next;
	}
	HX_STACK_LINE(10397)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10397)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,try_remove,return )

Void ZNPList_ZPP_Component_obj::inlined_remove( ::zpp_nape::space::ZPP_Component obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_remove",0x3690281e,"zpp_nape.util.ZNPList_ZPP_Component.inlined_remove","zpp_nape/util/Lists.hx",10410,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10410)
		::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10410)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10410)
		::zpp_nape::util::ZNPNode_ZPP_Component cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10410)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10410)
		while((true)){
			HX_STACK_LINE(10410)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10410)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10410)
			if ((tmp2)){
				HX_STACK_LINE(10410)
				break;
			}
			HX_STACK_LINE(10410)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10410)
			if ((tmp3)){
				HX_STACK_LINE(10410)
				{
					HX_STACK_LINE(10410)
					::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10410)
					::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10410)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(10410)
					if ((tmp4)){
						HX_STACK_LINE(10410)
						::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10410)
						old = tmp5;
						HX_STACK_LINE(10410)
						ret1 = old->next;
						HX_STACK_LINE(10410)
						this->head = ret1;
						HX_STACK_LINE(10410)
						::zpp_nape::util::ZNPNode_ZPP_Component tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(10410)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(10410)
						if ((tmp7)){
							HX_STACK_LINE(10410)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10410)
						old = pre->next;
						HX_STACK_LINE(10410)
						ret1 = old->next;
						HX_STACK_LINE(10410)
						pre->next = ret1;
						HX_STACK_LINE(10410)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10410)
						if ((tmp5)){
							HX_STACK_LINE(10410)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10410)
					{
						HX_STACK_LINE(10410)
						::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10410)
						o->elt = null();
						HX_STACK_LINE(10410)
						::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(10410)
						o->next = tmp5;
						HX_STACK_LINE(10410)
						::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10410)
					this->modified = true;
					HX_STACK_LINE(10410)
					(this->length)--;
					HX_STACK_LINE(10410)
					this->pushmod = true;
					HX_STACK_LINE(10410)
					ret1;
				}
				HX_STACK_LINE(10410)
				ret = true;
				HX_STACK_LINE(10410)
				break;
			}
			HX_STACK_LINE(10410)
			pre = cur;
			HX_STACK_LINE(10410)
			cur = cur->next;
		}
		HX_STACK_LINE(10410)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_remove,(void))

bool ZNPList_ZPP_Component_obj::inlined_try_remove( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_try_remove",0x069a32e2,"zpp_nape.util.ZNPList_ZPP_Component.inlined_try_remove","zpp_nape/util/Lists.hx",10414,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10423)
	::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10424)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10424)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10425)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10426)
	while((true)){
		HX_STACK_LINE(10426)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10426)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10426)
		if ((tmp2)){
			HX_STACK_LINE(10426)
			break;
		}
		HX_STACK_LINE(10427)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10427)
		if ((tmp3)){
			HX_STACK_LINE(10428)
			{
				HX_STACK_LINE(10428)
				::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10428)
				::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10428)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(10428)
				if ((tmp4)){
					HX_STACK_LINE(10428)
					::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10428)
					old = tmp5;
					HX_STACK_LINE(10428)
					ret1 = old->next;
					HX_STACK_LINE(10428)
					this->head = ret1;
					HX_STACK_LINE(10428)
					::zpp_nape::util::ZNPNode_ZPP_Component tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(10428)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(10428)
					if ((tmp7)){
						HX_STACK_LINE(10428)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10428)
					old = pre->next;
					HX_STACK_LINE(10428)
					ret1 = old->next;
					HX_STACK_LINE(10428)
					pre->next = ret1;
					HX_STACK_LINE(10428)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10428)
					if ((tmp5)){
						HX_STACK_LINE(10428)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10428)
				{
					HX_STACK_LINE(10428)
					::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10428)
					o->elt = null();
					HX_STACK_LINE(10428)
					::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10428)
					o->next = tmp5;
					HX_STACK_LINE(10428)
					::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10428)
				this->modified = true;
				HX_STACK_LINE(10428)
				(this->length)--;
				HX_STACK_LINE(10428)
				this->pushmod = true;
				HX_STACK_LINE(10428)
				ret1;
			}
			HX_STACK_LINE(10429)
			ret = true;
			HX_STACK_LINE(10430)
			break;
		}
		HX_STACK_LINE(10432)
		pre = cur;
		HX_STACK_LINE(10433)
		cur = cur->next;
	}
	HX_STACK_LINE(10435)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10435)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Component pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","erase",0xd09ebee0,"zpp_nape.util.ZNPList_ZPP_Component.erase","zpp_nape/util/Lists.hx",10437,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10438)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10438)
	{
		HX_STACK_LINE(10438)
		::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(10438)
		::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10438)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10438)
		if ((tmp1)){
			HX_STACK_LINE(10438)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10438)
			old = tmp2;
			HX_STACK_LINE(10438)
			ret = old->next;
			HX_STACK_LINE(10438)
			this->head = ret;
			HX_STACK_LINE(10438)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10438)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10438)
			if ((tmp4)){
				HX_STACK_LINE(10438)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(10438)
			old = pre->next;
			HX_STACK_LINE(10438)
			ret = old->next;
			HX_STACK_LINE(10438)
			pre->next = ret;
			HX_STACK_LINE(10438)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10438)
			if ((tmp2)){
				HX_STACK_LINE(10438)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(10438)
		{
			HX_STACK_LINE(10438)
			::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10438)
			o->elt = null();
			HX_STACK_LINE(10438)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10438)
			o->next = tmp2;
			HX_STACK_LINE(10438)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10438)
		this->modified = true;
		HX_STACK_LINE(10438)
		(this->length)--;
		HX_STACK_LINE(10438)
		this->pushmod = true;
		HX_STACK_LINE(10438)
		tmp = ret;
	}
	HX_STACK_LINE(10438)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Component pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_erase",0x1d3d164c,"zpp_nape.util.ZNPList_ZPP_Component.inlined_erase","zpp_nape/util/Lists.hx",10442,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10451)
	::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10452)
	::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10453)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10453)
	if ((tmp)){
		HX_STACK_LINE(10454)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10454)
		old = tmp1;
		HX_STACK_LINE(10455)
		ret = old->next;
		HX_STACK_LINE(10456)
		this->head = ret;
		HX_STACK_LINE(10457)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10457)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10457)
		if ((tmp3)){
			HX_STACK_LINE(10457)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10460)
		old = pre->next;
		HX_STACK_LINE(10461)
		ret = old->next;
		HX_STACK_LINE(10462)
		pre->next = ret;
		HX_STACK_LINE(10463)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10463)
		if ((tmp1)){
			HX_STACK_LINE(10463)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10466)
	{
		HX_STACK_LINE(10467)
		::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10476)
		o->elt = null();
		HX_STACK_LINE(10477)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10477)
		o->next = tmp1;
		HX_STACK_LINE(10478)
		::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10483)
	this->modified = true;
	HX_STACK_LINE(10484)
	(this->length)--;
	HX_STACK_LINE(10485)
	this->pushmod = true;
	HX_STACK_LINE(10486)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10486)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Component pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","splice",0x33b7ea42,"zpp_nape.util.ZNPList_ZPP_Component.splice","zpp_nape/util/Lists.hx",10488,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(10489)
	while((true)){
		HX_STACK_LINE(10489)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10489)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10489)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10489)
		if ((tmp1)){
			HX_STACK_LINE(10489)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(10489)
			tmp2 = false;
		}
		HX_STACK_LINE(10489)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10489)
		if ((tmp3)){
			HX_STACK_LINE(10489)
			break;
		}
		HX_STACK_LINE(10489)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(10489)
		this->erase(tmp4);
	}
	HX_STACK_LINE(10490)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10490)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,splice,return )

Void ZNPList_ZPP_Component_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","clear",0xa5dd4787,"zpp_nape.util.ZNPList_ZPP_Component.clear","zpp_nape/util/Lists.hx",10493,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10493)
		while((true)){
			HX_STACK_LINE(10493)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10493)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10493)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10493)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10493)
			if ((tmp3)){
				HX_STACK_LINE(10493)
				break;
			}
			HX_STACK_LINE(10493)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10493)
			::zpp_nape::util::ZNPNode_ZPP_Component ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10493)
			this->head = ret->next;
			HX_STACK_LINE(10493)
			{
				HX_STACK_LINE(10493)
				::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10493)
				o->elt = null();
				HX_STACK_LINE(10493)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(10493)
				o->next = tmp5;
				HX_STACK_LINE(10493)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10493)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(10493)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(10493)
			if ((tmp6)){
				HX_STACK_LINE(10493)
				this->pushmod = true;
			}
			HX_STACK_LINE(10493)
			this->modified = true;
			HX_STACK_LINE(10493)
			(this->length)--;
		}
		HX_STACK_LINE(10493)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,clear,(void))

Void ZNPList_ZPP_Component_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_clear",0xf27b9ef3,"zpp_nape.util.ZNPList_ZPP_Component.inlined_clear","zpp_nape/util/Lists.hx",10498,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10499)
		while((true)){
			HX_STACK_LINE(10499)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10499)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10499)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10499)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10499)
			if ((tmp3)){
				HX_STACK_LINE(10499)
				break;
			}
			HX_STACK_LINE(10499)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10499)
			::zpp_nape::util::ZNPNode_ZPP_Component ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10499)
			this->head = ret->next;
			HX_STACK_LINE(10499)
			{
				HX_STACK_LINE(10499)
				::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10499)
				o->elt = null();
				HX_STACK_LINE(10499)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(10499)
				o->next = tmp5;
				HX_STACK_LINE(10499)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10499)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(10499)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(10499)
			if ((tmp6)){
				HX_STACK_LINE(10499)
				this->pushmod = true;
			}
			HX_STACK_LINE(10499)
			this->modified = true;
			HX_STACK_LINE(10499)
			(this->length)--;
		}
		HX_STACK_LINE(10500)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_clear,(void))

Void ZNPList_ZPP_Component_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","reverse",0x3d1b019c,"zpp_nape.util.ZNPList_ZPP_Component.reverse","zpp_nape/util/Lists.hx",10503,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10504)
		::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10504)
		::zpp_nape::util::ZNPNode_ZPP_Component cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10505)
		::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10506)
		while((true)){
			HX_STACK_LINE(10506)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10506)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10506)
			if ((tmp2)){
				HX_STACK_LINE(10506)
				break;
			}
			HX_STACK_LINE(10507)
			::zpp_nape::util::ZNPNode_ZPP_Component nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10508)
			cur->next = pre;
			HX_STACK_LINE(10509)
			this->head = cur;
			HX_STACK_LINE(10510)
			pre = cur;
			HX_STACK_LINE(10511)
			cur = nx;
		}
		HX_STACK_LINE(10513)
		this->modified = true;
		HX_STACK_LINE(10514)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,reverse,(void))

bool ZNPList_ZPP_Component_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","empty",0xcd5c1087,"zpp_nape.util.ZNPList_ZPP_Component.empty","zpp_nape/util/Lists.hx",10518,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10519)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10519)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10519)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,empty,return )

int ZNPList_ZPP_Component_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","size",0x54c82807,"zpp_nape.util.ZNPList_ZPP_Component.size","zpp_nape/util/Lists.hx",10523,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10524)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10524)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,size,return )

bool ZNPList_ZPP_Component_obj::has( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","has",0x6e8dc2d4,"zpp_nape.util.ZNPList_ZPP_Component.has","zpp_nape/util/Lists.hx",10526,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10527)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10527)
	{
		HX_STACK_LINE(10527)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10527)
		{
			HX_STACK_LINE(10527)
			ret = false;
			HX_STACK_LINE(10527)
			{
				HX_STACK_LINE(10527)
				::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(10527)
				::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(10527)
				while((true)){
					HX_STACK_LINE(10527)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(10527)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(10527)
					if ((tmp3)){
						HX_STACK_LINE(10527)
						break;
					}
					HX_STACK_LINE(10527)
					::zpp_nape::space::ZPP_Component npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(10527)
					{
						HX_STACK_LINE(10527)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(10527)
						if ((tmp4)){
							HX_STACK_LINE(10527)
							ret = true;
							HX_STACK_LINE(10527)
							break;
						}
					}
					HX_STACK_LINE(10527)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(10527)
		tmp = ret;
	}
	HX_STACK_LINE(10527)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,has,return )

bool ZNPList_ZPP_Component_obj::inlined_has( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","inlined_has",0xee392740,"zpp_nape.util.ZNPList_ZPP_Component.inlined_has","zpp_nape/util/Lists.hx",10531,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10540)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10541)
	{
		HX_STACK_LINE(10542)
		ret = false;
		HX_STACK_LINE(10543)
		{
			HX_STACK_LINE(10544)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10544)
			::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10545)
			while((true)){
				HX_STACK_LINE(10545)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(10545)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(10545)
				if ((tmp2)){
					HX_STACK_LINE(10545)
					break;
				}
				HX_STACK_LINE(10546)
				::zpp_nape::space::ZPP_Component npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10547)
				{
					HX_STACK_LINE(10548)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(10548)
					if ((tmp3)){
						HX_STACK_LINE(10549)
						ret = true;
						HX_STACK_LINE(10550)
						break;
					}
				}
				HX_STACK_LINE(10553)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10557)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10557)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_has,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","front",0x640feea3,"zpp_nape.util.ZNPList_ZPP_Component.front","zpp_nape/util/Lists.hx",10561,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10562)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10562)
	::zpp_nape::space::ZPP_Component tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10562)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,front,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","back",0x4985616d,"zpp_nape.util.ZNPList_ZPP_Component.back","zpp_nape/util/Lists.hx",10564,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10565)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10565)
	::zpp_nape::util::ZNPNode_ZPP_Component ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10566)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10567)
	while((true)){
		HX_STACK_LINE(10567)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10567)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10567)
		if ((tmp2)){
			HX_STACK_LINE(10567)
			break;
		}
		HX_STACK_LINE(10568)
		ret = cur;
		HX_STACK_LINE(10569)
		cur = cur->next;
	}
	HX_STACK_LINE(10571)
	::zpp_nape::space::ZPP_Component tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10571)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","iterator_at",0xf2d8175e,"zpp_nape.util.ZNPList_ZPP_Component.iterator_at","zpp_nape/util/Lists.hx",10573,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10582)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10582)
	::zpp_nape::util::ZNPNode_ZPP_Component ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10583)
	while((true)){
		HX_STACK_LINE(10583)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10583)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10583)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10583)
		if ((tmp2)){
			HX_STACK_LINE(10583)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(10583)
			tmp3 = false;
		}
		HX_STACK_LINE(10583)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(10583)
		if ((tmp4)){
			HX_STACK_LINE(10583)
			break;
		}
		HX_STACK_LINE(10583)
		ret = ret->next;
	}
	HX_STACK_LINE(10584)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10584)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,iterator_at,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Component","at",0xca8a5eb9,"zpp_nape.util.ZNPList_ZPP_Component.at","zpp_nape/util/Lists.hx",10586,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10595)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10595)
	::zpp_nape::util::ZNPNode_ZPP_Component tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10595)
	::zpp_nape::util::ZNPNode_ZPP_Component it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(10596)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10596)
	::zpp_nape::space::ZPP_Component tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(10596)
	if ((tmp2)){
		HX_STACK_LINE(10596)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(10596)
		tmp3 = null();
	}
	HX_STACK_LINE(10596)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,at,return )


ZNPList_ZPP_Component_obj::ZNPList_ZPP_Component_obj()
{
}

void ZNPList_ZPP_Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Component);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Component_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Component >(); return inValue; }
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

bool ZNPList_ZPP_Component_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Component*/ ,(int)offsetof(ZNPList_ZPP_Component_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Component_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Component_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Component_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Component_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Component_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Component_obj::__mClass;

void ZNPList_ZPP_Component_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Component","\xe8","\x1e","\xf9","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Component_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Component_obj >;
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
