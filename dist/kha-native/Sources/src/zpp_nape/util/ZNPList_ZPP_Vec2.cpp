#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Vec2_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","new",0x494ccf85,"zpp_nape.util.ZNPList_ZPP_Vec2.new","zpp_nape/util/Lists.hx",9766,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9776)
	this->length = (int)0;
	HX_STACK_LINE(9775)
	this->pushmod = false;
	HX_STACK_LINE(9774)
	this->modified = false;
	HX_STACK_LINE(9767)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Vec2_obj::~ZNPList_ZPP_Vec2_obj() { }

Dynamic ZNPList_ZPP_Vec2_obj::__CreateEmpty() { return  new ZNPList_ZPP_Vec2_obj; }
hx::ObjectPtr< ZNPList_ZPP_Vec2_obj > ZNPList_ZPP_Vec2_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Vec2_obj > _result_ = new ZNPList_ZPP_Vec2_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Vec2_obj > _result_ = new ZNPList_ZPP_Vec2_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","begin",0xe8e8bc8e,"zpp_nape.util.ZNPList_ZPP_Vec2.begin","zpp_nape/util/Lists.hx",9771,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9772)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9772)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,begin,return )

Void ZNPList_ZPP_Vec2_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Vec2 i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","setbegin",0x2b9bde02,"zpp_nape.util.ZNPList_ZPP_Vec2.setbegin","zpp_nape/util/Lists.hx",9779,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(9780)
		this->head = i;
		HX_STACK_LINE(9781)
		this->modified = true;
		HX_STACK_LINE(9782)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,setbegin,(void))

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","add",0x4942f146,"zpp_nape.util.ZNPList_ZPP_Vec2.add","zpp_nape/util/Lists.hx",9784,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9785)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9785)
	{
		HX_STACK_LINE(9785)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9785)
		{
			HX_STACK_LINE(9785)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9785)
			{
				HX_STACK_LINE(9785)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(9785)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9785)
				if ((tmp3)){
					HX_STACK_LINE(9785)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9785)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(9785)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9785)
					ret = tmp4;
					HX_STACK_LINE(9785)
					::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = ret->next;
					HX_STACK_LINE(9785)
					ret->next = null();
				}
				HX_STACK_LINE(9785)
				Dynamic();
			}
			HX_STACK_LINE(9785)
			ret->elt = o;
			HX_STACK_LINE(9785)
			tmp1 = ret;
		}
		HX_STACK_LINE(9785)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(9785)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9785)
		temp->next = tmp2;
		HX_STACK_LINE(9785)
		this->head = temp;
		HX_STACK_LINE(9785)
		this->modified = true;
		HX_STACK_LINE(9785)
		(this->length)++;
		HX_STACK_LINE(9785)
		tmp = o;
	}
	HX_STACK_LINE(9785)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,add,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::inlined_add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_add",0xf7a278b2,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_add","zpp_nape/util/Lists.hx",9789,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9798)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9798)
	{
		HX_STACK_LINE(9799)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9800)
		{
			HX_STACK_LINE(9801)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9801)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9801)
			if ((tmp2)){
				HX_STACK_LINE(9802)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9802)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(9808)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9808)
				ret = tmp3;
				HX_STACK_LINE(9809)
				::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9810)
				ret->next = null();
			}
			HX_STACK_LINE(9815)
			Dynamic();
		}
		HX_STACK_LINE(9817)
		ret->elt = o;
		HX_STACK_LINE(9818)
		tmp = ret;
	}
	HX_STACK_LINE(9798)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9820)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9820)
	temp->next = tmp1;
	HX_STACK_LINE(9821)
	this->head = temp;
	HX_STACK_LINE(9822)
	this->modified = true;
	HX_STACK_LINE(9823)
	(this->length)++;
	HX_STACK_LINE(9824)
	::zpp_nape::geom::ZPP_Vec2 tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9824)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_add,return )

Void ZNPList_ZPP_Vec2_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","addAll",0xe6e04f7b,"zpp_nape.util.ZNPList_ZPP_Vec2.addAll","zpp_nape/util/Lists.hx",9835,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(9836)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(9837)
		while((true)){
			HX_STACK_LINE(9837)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9837)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9837)
			if ((tmp1)){
				HX_STACK_LINE(9837)
				break;
			}
			HX_STACK_LINE(9838)
			::zpp_nape::geom::ZPP_Vec2 i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(9839)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9839)
			this->add(tmp2);
			HX_STACK_LINE(9840)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","insert",0xe5c28934,"zpp_nape.util.ZNPList_ZPP_Vec2.insert","zpp_nape/util/Lists.hx",9844,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9845)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9845)
	{
		HX_STACK_LINE(9845)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9845)
		{
			HX_STACK_LINE(9845)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9845)
			{
				HX_STACK_LINE(9845)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(9845)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9845)
				if ((tmp3)){
					HX_STACK_LINE(9845)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9845)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(9845)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9845)
					ret = tmp4;
					HX_STACK_LINE(9845)
					::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = ret->next;
					HX_STACK_LINE(9845)
					ret->next = null();
				}
				HX_STACK_LINE(9845)
				Dynamic();
			}
			HX_STACK_LINE(9845)
			ret->elt = o;
			HX_STACK_LINE(9845)
			tmp1 = ret;
		}
		HX_STACK_LINE(9845)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(9845)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9845)
		if ((tmp2)){
			HX_STACK_LINE(9845)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9845)
			temp->next = tmp3;
			HX_STACK_LINE(9845)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(9845)
			temp->next = cur->next;
			HX_STACK_LINE(9845)
			cur->next = temp;
		}
		HX_STACK_LINE(9845)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9845)
		this->pushmod = tmp3;
		HX_STACK_LINE(9845)
		(this->length)++;
		HX_STACK_LINE(9845)
		tmp = temp;
	}
	HX_STACK_LINE(9845)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Vec2_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_insert",0xbff46d48,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_insert","zpp_nape/util/Lists.hx",9849,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9858)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9858)
	{
		HX_STACK_LINE(9859)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9860)
		{
			HX_STACK_LINE(9861)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9861)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9861)
			if ((tmp2)){
				HX_STACK_LINE(9862)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9862)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(9868)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9868)
				ret = tmp3;
				HX_STACK_LINE(9869)
				::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9870)
				ret->next = null();
			}
			HX_STACK_LINE(9875)
			Dynamic();
		}
		HX_STACK_LINE(9877)
		ret->elt = o;
		HX_STACK_LINE(9878)
		tmp = ret;
	}
	HX_STACK_LINE(9858)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9880)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9880)
	if ((tmp1)){
		HX_STACK_LINE(9881)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9881)
		temp->next = tmp2;
		HX_STACK_LINE(9882)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9885)
		temp->next = cur->next;
		HX_STACK_LINE(9886)
		cur->next = temp;
	}
	HX_STACK_LINE(9888)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9888)
	this->pushmod = tmp2;
	HX_STACK_LINE(9889)
	(this->length)++;
	HX_STACK_LINE(9890)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(9890)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Vec2_obj,inlined_insert,return )

Void ZNPList_ZPP_Vec2_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","pop",0x494e5cb6,"zpp_nape.util.ZNPList_ZPP_Vec2.pop","zpp_nape/util/Lists.hx",9893,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9893)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9893)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9893)
		this->head = ret->next;
		HX_STACK_LINE(9893)
		{
			HX_STACK_LINE(9893)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9893)
			o->elt = null();
			HX_STACK_LINE(9893)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9893)
			o->next = tmp1;
			HX_STACK_LINE(9893)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9893)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9893)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9893)
		if ((tmp2)){
			HX_STACK_LINE(9893)
			this->pushmod = true;
		}
		HX_STACK_LINE(9893)
		this->modified = true;
		HX_STACK_LINE(9893)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,pop,(void))

Void ZNPList_ZPP_Vec2_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_pop",0xf7ade422,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_pop","zpp_nape/util/Lists.hx",9897,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9906)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9906)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9907)
		this->head = ret->next;
		HX_STACK_LINE(9909)
		{
			HX_STACK_LINE(9910)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9919)
			o->elt = null();
			HX_STACK_LINE(9920)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9920)
			o->next = tmp1;
			HX_STACK_LINE(9921)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9926)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9926)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9926)
		if ((tmp2)){
			HX_STACK_LINE(9926)
			this->pushmod = true;
		}
		HX_STACK_LINE(9927)
		this->modified = true;
		HX_STACK_LINE(9928)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","pop_unsafe",0x3febdbcf,"zpp_nape.util.ZNPList_ZPP_Vec2.pop_unsafe","zpp_nape/util/Lists.hx",9930,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9931)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9931)
	{
		HX_STACK_LINE(9931)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9931)
		::zpp_nape::geom::ZPP_Vec2 ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9931)
		this->pop();
		HX_STACK_LINE(9931)
		tmp = ret;
	}
	HX_STACK_LINE(9931)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_pop_unsafe",0x66e359e3,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_pop_unsafe","zpp_nape/util/Lists.hx",9935,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9944)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9944)
	::zpp_nape::geom::ZPP_Vec2 ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9945)
	this->pop();
	HX_STACK_LINE(9946)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9946)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Vec2_obj::remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","remove",0x4c6de23f,"zpp_nape.util.ZNPList_ZPP_Vec2.remove","zpp_nape/util/Lists.hx",9957,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9957)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9957)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9957)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9957)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9957)
		while((true)){
			HX_STACK_LINE(9957)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9957)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9957)
			if ((tmp2)){
				HX_STACK_LINE(9957)
				break;
			}
			HX_STACK_LINE(9957)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9957)
			if ((tmp3)){
				HX_STACK_LINE(9957)
				{
					HX_STACK_LINE(9957)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9957)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9957)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9957)
					if ((tmp4)){
						HX_STACK_LINE(9957)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9957)
						old = tmp5;
						HX_STACK_LINE(9957)
						ret1 = old->next;
						HX_STACK_LINE(9957)
						this->head = ret1;
						HX_STACK_LINE(9957)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(9957)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(9957)
						if ((tmp7)){
							HX_STACK_LINE(9957)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9957)
						old = pre->next;
						HX_STACK_LINE(9957)
						ret1 = old->next;
						HX_STACK_LINE(9957)
						pre->next = ret1;
						HX_STACK_LINE(9957)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9957)
						if ((tmp5)){
							HX_STACK_LINE(9957)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9957)
					{
						HX_STACK_LINE(9957)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9957)
						o->elt = null();
						HX_STACK_LINE(9957)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9957)
						o->next = tmp5;
						HX_STACK_LINE(9957)
						::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9957)
					this->modified = true;
					HX_STACK_LINE(9957)
					(this->length)--;
					HX_STACK_LINE(9957)
					this->pushmod = true;
					HX_STACK_LINE(9957)
					ret1;
				}
				HX_STACK_LINE(9957)
				ret = true;
				HX_STACK_LINE(9957)
				break;
			}
			HX_STACK_LINE(9957)
			pre = cur;
			HX_STACK_LINE(9957)
			cur = cur->next;
		}
		HX_STACK_LINE(9957)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,remove,(void))

bool ZNPList_ZPP_Vec2_obj::try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","try_remove",0x57161183,"zpp_nape.util.ZNPList_ZPP_Vec2.try_remove","zpp_nape/util/Lists.hx",9959,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9968)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9969)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9969)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9970)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9971)
	while((true)){
		HX_STACK_LINE(9971)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9971)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9971)
		if ((tmp2)){
			HX_STACK_LINE(9971)
			break;
		}
		HX_STACK_LINE(9972)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9972)
		if ((tmp3)){
			HX_STACK_LINE(9973)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9973)
			this->erase(tmp4);
			HX_STACK_LINE(9974)
			ret = true;
			HX_STACK_LINE(9975)
			break;
		}
		HX_STACK_LINE(9977)
		pre = cur;
		HX_STACK_LINE(9978)
		cur = cur->next;
	}
	HX_STACK_LINE(9980)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9980)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,try_remove,return )

Void ZNPList_ZPP_Vec2_obj::inlined_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_remove",0x269fc653,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_remove","zpp_nape/util/Lists.hx",9993,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9993)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9993)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9993)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9993)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9993)
		while((true)){
			HX_STACK_LINE(9993)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9993)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9993)
			if ((tmp2)){
				HX_STACK_LINE(9993)
				break;
			}
			HX_STACK_LINE(9993)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9993)
			if ((tmp3)){
				HX_STACK_LINE(9993)
				{
					HX_STACK_LINE(9993)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9993)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9993)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9993)
					if ((tmp4)){
						HX_STACK_LINE(9993)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9993)
						old = tmp5;
						HX_STACK_LINE(9993)
						ret1 = old->next;
						HX_STACK_LINE(9993)
						this->head = ret1;
						HX_STACK_LINE(9993)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(9993)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(9993)
						if ((tmp7)){
							HX_STACK_LINE(9993)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9993)
						old = pre->next;
						HX_STACK_LINE(9993)
						ret1 = old->next;
						HX_STACK_LINE(9993)
						pre->next = ret1;
						HX_STACK_LINE(9993)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9993)
						if ((tmp5)){
							HX_STACK_LINE(9993)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9993)
					{
						HX_STACK_LINE(9993)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9993)
						o->elt = null();
						HX_STACK_LINE(9993)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9993)
						o->next = tmp5;
						HX_STACK_LINE(9993)
						::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9993)
					this->modified = true;
					HX_STACK_LINE(9993)
					(this->length)--;
					HX_STACK_LINE(9993)
					this->pushmod = true;
					HX_STACK_LINE(9993)
					ret1;
				}
				HX_STACK_LINE(9993)
				ret = true;
				HX_STACK_LINE(9993)
				break;
			}
			HX_STACK_LINE(9993)
			pre = cur;
			HX_STACK_LINE(9993)
			cur = cur->next;
		}
		HX_STACK_LINE(9993)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_remove,(void))

bool ZNPList_ZPP_Vec2_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_try_remove",0x7e0d8f97,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_try_remove","zpp_nape/util/Lists.hx",9997,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10006)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10007)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10007)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10008)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10009)
	while((true)){
		HX_STACK_LINE(10009)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10009)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10009)
		if ((tmp2)){
			HX_STACK_LINE(10009)
			break;
		}
		HX_STACK_LINE(10010)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10010)
		if ((tmp3)){
			HX_STACK_LINE(10011)
			{
				HX_STACK_LINE(10011)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10011)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10011)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(10011)
				if ((tmp4)){
					HX_STACK_LINE(10011)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10011)
					old = tmp5;
					HX_STACK_LINE(10011)
					ret1 = old->next;
					HX_STACK_LINE(10011)
					this->head = ret1;
					HX_STACK_LINE(10011)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(10011)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(10011)
					if ((tmp7)){
						HX_STACK_LINE(10011)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10011)
					old = pre->next;
					HX_STACK_LINE(10011)
					ret1 = old->next;
					HX_STACK_LINE(10011)
					pre->next = ret1;
					HX_STACK_LINE(10011)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10011)
					if ((tmp5)){
						HX_STACK_LINE(10011)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10011)
				{
					HX_STACK_LINE(10011)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10011)
					o->elt = null();
					HX_STACK_LINE(10011)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(10011)
					o->next = tmp5;
					HX_STACK_LINE(10011)
					::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10011)
				this->modified = true;
				HX_STACK_LINE(10011)
				(this->length)--;
				HX_STACK_LINE(10011)
				this->pushmod = true;
				HX_STACK_LINE(10011)
				ret1;
			}
			HX_STACK_LINE(10012)
			ret = true;
			HX_STACK_LINE(10013)
			break;
		}
		HX_STACK_LINE(10015)
		pre = cur;
		HX_STACK_LINE(10016)
		cur = cur->next;
	}
	HX_STACK_LINE(10018)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10018)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Vec2 pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","erase",0xabafbb4b,"zpp_nape.util.ZNPList_ZPP_Vec2.erase","zpp_nape/util/Lists.hx",10020,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10021)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10021)
	{
		HX_STACK_LINE(10021)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(10021)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10021)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10021)
		if ((tmp1)){
			HX_STACK_LINE(10021)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10021)
			old = tmp2;
			HX_STACK_LINE(10021)
			ret = old->next;
			HX_STACK_LINE(10021)
			this->head = ret;
			HX_STACK_LINE(10021)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10021)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10021)
			if ((tmp4)){
				HX_STACK_LINE(10021)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(10021)
			old = pre->next;
			HX_STACK_LINE(10021)
			ret = old->next;
			HX_STACK_LINE(10021)
			pre->next = ret;
			HX_STACK_LINE(10021)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10021)
			if ((tmp2)){
				HX_STACK_LINE(10021)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(10021)
		{
			HX_STACK_LINE(10021)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10021)
			o->elt = null();
			HX_STACK_LINE(10021)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10021)
			o->next = tmp2;
			HX_STACK_LINE(10021)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10021)
		this->modified = true;
		HX_STACK_LINE(10021)
		(this->length)--;
		HX_STACK_LINE(10021)
		this->pushmod = true;
		HX_STACK_LINE(10021)
		tmp = ret;
	}
	HX_STACK_LINE(10021)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Vec2 pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_erase",0x5690f5b7,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_erase","zpp_nape/util/Lists.hx",10025,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10034)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10035)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10036)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10036)
	if ((tmp)){
		HX_STACK_LINE(10037)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10037)
		old = tmp1;
		HX_STACK_LINE(10038)
		ret = old->next;
		HX_STACK_LINE(10039)
		this->head = ret;
		HX_STACK_LINE(10040)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10040)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10040)
		if ((tmp3)){
			HX_STACK_LINE(10040)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10043)
		old = pre->next;
		HX_STACK_LINE(10044)
		ret = old->next;
		HX_STACK_LINE(10045)
		pre->next = ret;
		HX_STACK_LINE(10046)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10046)
		if ((tmp1)){
			HX_STACK_LINE(10046)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10049)
	{
		HX_STACK_LINE(10050)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10059)
		o->elt = null();
		HX_STACK_LINE(10060)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10060)
		o->next = tmp1;
		HX_STACK_LINE(10061)
		::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10066)
	this->modified = true;
	HX_STACK_LINE(10067)
	(this->length)--;
	HX_STACK_LINE(10068)
	this->pushmod = true;
	HX_STACK_LINE(10069)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10069)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Vec2 pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","splice",0x0783cb77,"zpp_nape.util.ZNPList_ZPP_Vec2.splice","zpp_nape/util/Lists.hx",10071,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(10072)
	while((true)){
		HX_STACK_LINE(10072)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10072)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10072)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10072)
		if ((tmp1)){
			HX_STACK_LINE(10072)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(10072)
			tmp2 = false;
		}
		HX_STACK_LINE(10072)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10072)
		if ((tmp3)){
			HX_STACK_LINE(10072)
			break;
		}
		HX_STACK_LINE(10072)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(10072)
		this->erase(tmp4);
	}
	HX_STACK_LINE(10073)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10073)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Vec2_obj,splice,return )

Void ZNPList_ZPP_Vec2_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","clear",0x80ee43f2,"zpp_nape.util.ZNPList_ZPP_Vec2.clear","zpp_nape/util/Lists.hx",10076,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10076)
		while((true)){
			HX_STACK_LINE(10076)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10076)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10076)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10076)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10076)
			if ((tmp3)){
				HX_STACK_LINE(10076)
				break;
			}
			HX_STACK_LINE(10076)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10076)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10076)
			this->head = ret->next;
			HX_STACK_LINE(10076)
			{
				HX_STACK_LINE(10076)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10076)
				o->elt = null();
				HX_STACK_LINE(10076)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(10076)
				o->next = tmp5;
				HX_STACK_LINE(10076)
				::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10076)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(10076)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(10076)
			if ((tmp6)){
				HX_STACK_LINE(10076)
				this->pushmod = true;
			}
			HX_STACK_LINE(10076)
			this->modified = true;
			HX_STACK_LINE(10076)
			(this->length)--;
		}
		HX_STACK_LINE(10076)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,clear,(void))

Void ZNPList_ZPP_Vec2_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_clear",0x2bcf7e5e,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_clear","zpp_nape/util/Lists.hx",10081,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10082)
		while((true)){
			HX_STACK_LINE(10082)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10082)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10082)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10082)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10082)
			if ((tmp3)){
				HX_STACK_LINE(10082)
				break;
			}
			HX_STACK_LINE(10082)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10082)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10082)
			this->head = ret->next;
			HX_STACK_LINE(10082)
			{
				HX_STACK_LINE(10082)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10082)
				o->elt = null();
				HX_STACK_LINE(10082)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(10082)
				o->next = tmp5;
				HX_STACK_LINE(10082)
				::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10082)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(10082)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(10082)
			if ((tmp6)){
				HX_STACK_LINE(10082)
				this->pushmod = true;
			}
			HX_STACK_LINE(10082)
			this->modified = true;
			HX_STACK_LINE(10082)
			(this->length)--;
		}
		HX_STACK_LINE(10083)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,inlined_clear,(void))

Void ZNPList_ZPP_Vec2_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","reverse",0xbbb42ec7,"zpp_nape.util.ZNPList_ZPP_Vec2.reverse","zpp_nape/util/Lists.hx",10086,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10087)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10087)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10088)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10089)
		while((true)){
			HX_STACK_LINE(10089)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10089)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10089)
			if ((tmp2)){
				HX_STACK_LINE(10089)
				break;
			}
			HX_STACK_LINE(10090)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10091)
			cur->next = pre;
			HX_STACK_LINE(10092)
			this->head = cur;
			HX_STACK_LINE(10093)
			pre = cur;
			HX_STACK_LINE(10094)
			cur = nx;
		}
		HX_STACK_LINE(10096)
		this->modified = true;
		HX_STACK_LINE(10097)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,reverse,(void))

bool ZNPList_ZPP_Vec2_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","empty",0xa86d0cf2,"zpp_nape.util.ZNPList_ZPP_Vec2.empty","zpp_nape/util/Lists.hx",10101,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10102)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10102)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10102)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,empty,return )

int ZNPList_ZPP_Vec2_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","size",0xdd39e1fc,"zpp_nape.util.ZNPList_ZPP_Vec2.size","zpp_nape/util/Lists.hx",10106,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10107)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10107)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,size,return )

bool ZNPList_ZPP_Vec2_obj::has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","has",0x49483e7f,"zpp_nape.util.ZNPList_ZPP_Vec2.has","zpp_nape/util/Lists.hx",10109,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10110)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10110)
	{
		HX_STACK_LINE(10110)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10110)
		{
			HX_STACK_LINE(10110)
			ret = false;
			HX_STACK_LINE(10110)
			{
				HX_STACK_LINE(10110)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(10110)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(10110)
				while((true)){
					HX_STACK_LINE(10110)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(10110)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(10110)
					if ((tmp3)){
						HX_STACK_LINE(10110)
						break;
					}
					HX_STACK_LINE(10110)
					::zpp_nape::geom::ZPP_Vec2 npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(10110)
					{
						HX_STACK_LINE(10110)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(10110)
						if ((tmp4)){
							HX_STACK_LINE(10110)
							ret = true;
							HX_STACK_LINE(10110)
							break;
						}
					}
					HX_STACK_LINE(10110)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(10110)
		tmp = ret;
	}
	HX_STACK_LINE(10110)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,has,return )

bool ZNPList_ZPP_Vec2_obj::inlined_has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","inlined_has",0xf7a7c5eb,"zpp_nape.util.ZNPList_ZPP_Vec2.inlined_has","zpp_nape/util/Lists.hx",10114,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10123)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10124)
	{
		HX_STACK_LINE(10125)
		ret = false;
		HX_STACK_LINE(10126)
		{
			HX_STACK_LINE(10127)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10127)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10128)
			while((true)){
				HX_STACK_LINE(10128)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(10128)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(10128)
				if ((tmp2)){
					HX_STACK_LINE(10128)
					break;
				}
				HX_STACK_LINE(10129)
				::zpp_nape::geom::ZPP_Vec2 npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10130)
				{
					HX_STACK_LINE(10131)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(10131)
					if ((tmp3)){
						HX_STACK_LINE(10132)
						ret = true;
						HX_STACK_LINE(10133)
						break;
					}
				}
				HX_STACK_LINE(10136)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10140)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_has,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","front",0x3f20eb0e,"zpp_nape.util.ZNPList_ZPP_Vec2.front","zpp_nape/util/Lists.hx",10144,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10145)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10145)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10145)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,front,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","back",0xd1f71b62,"zpp_nape.util.ZNPList_ZPP_Vec2.back","zpp_nape/util/Lists.hx",10147,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10148)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10148)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10149)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10150)
	while((true)){
		HX_STACK_LINE(10150)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10150)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10150)
		if ((tmp2)){
			HX_STACK_LINE(10150)
			break;
		}
		HX_STACK_LINE(10151)
		ret = cur;
		HX_STACK_LINE(10152)
		cur = cur->next;
	}
	HX_STACK_LINE(10154)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10154)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","iterator_at",0xfc46b609,"zpp_nape.util.ZNPList_ZPP_Vec2.iterator_at","zpp_nape/util/Lists.hx",10156,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10165)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10165)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10166)
	while((true)){
		HX_STACK_LINE(10166)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10166)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10166)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10166)
		if ((tmp2)){
			HX_STACK_LINE(10166)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(10166)
			tmp3 = false;
		}
		HX_STACK_LINE(10166)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(10166)
		if ((tmp4)){
			HX_STACK_LINE(10166)
			break;
		}
		HX_STACK_LINE(10166)
		ret = ret->next;
	}
	HX_STACK_LINE(10167)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10167)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,iterator_at,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Vec2","at",0x2636416e,"zpp_nape.util.ZNPList_ZPP_Vec2.at","zpp_nape/util/Lists.hx",10169,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10178)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10178)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10178)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(10179)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10179)
	::zpp_nape::geom::ZPP_Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(10179)
	if ((tmp2)){
		HX_STACK_LINE(10179)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(10179)
		tmp3 = null();
	}
	HX_STACK_LINE(10179)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,at,return )


ZNPList_ZPP_Vec2_obj::ZNPList_ZPP_Vec2_obj()
{
}

void ZNPList_ZPP_Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Vec2);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Vec2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Vec2 >(); return inValue; }
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

bool ZNPList_ZPP_Vec2_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Vec2*/ ,(int)offsetof(ZNPList_ZPP_Vec2_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Vec2_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Vec2_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Vec2_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Vec2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Vec2_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Vec2_obj::__mClass;

void ZNPList_ZPP_Vec2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Vec2","\x13","\xa9","\x6b","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Vec2_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Vec2_obj >;
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
