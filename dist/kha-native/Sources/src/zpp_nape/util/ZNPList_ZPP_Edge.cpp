#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Edge_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","new",0x4a3acbe4,"zpp_nape.util.ZNPList_ZPP_Edge.new","zpp_nape/util/Lists.hx",9349,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9359)
	this->length = (int)0;
	HX_STACK_LINE(9358)
	this->pushmod = false;
	HX_STACK_LINE(9357)
	this->modified = false;
	HX_STACK_LINE(9350)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Edge_obj::~ZNPList_ZPP_Edge_obj() { }

Dynamic ZNPList_ZPP_Edge_obj::__CreateEmpty() { return  new ZNPList_ZPP_Edge_obj; }
hx::ObjectPtr< ZNPList_ZPP_Edge_obj > ZNPList_ZPP_Edge_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Edge_obj > _result_ = new ZNPList_ZPP_Edge_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Edge_obj > _result_ = new ZNPList_ZPP_Edge_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","begin",0x7e95cead,"zpp_nape.util.ZNPList_ZPP_Edge.begin","zpp_nape/util/Lists.hx",9354,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9355)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9355)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,begin,return )

Void ZNPList_ZPP_Edge_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Edge i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","setbegin",0x9a63a943,"zpp_nape.util.ZNPList_ZPP_Edge.setbegin","zpp_nape/util/Lists.hx",9362,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(9363)
		this->head = i;
		HX_STACK_LINE(9364)
		this->modified = true;
		HX_STACK_LINE(9365)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,setbegin,(void))

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::add( ::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","add",0x4a30eda5,"zpp_nape.util.ZNPList_ZPP_Edge.add","zpp_nape/util/Lists.hx",9367,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9368)
	::zpp_nape::shape::ZPP_Edge tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9368)
	{
		HX_STACK_LINE(9368)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9368)
		{
			HX_STACK_LINE(9368)
			::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9368)
			{
				HX_STACK_LINE(9368)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(9368)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9368)
				if ((tmp3)){
					HX_STACK_LINE(9368)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9368)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(9368)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9368)
					ret = tmp4;
					HX_STACK_LINE(9368)
					::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
					HX_STACK_LINE(9368)
					ret->next = null();
				}
				HX_STACK_LINE(9368)
				Dynamic();
			}
			HX_STACK_LINE(9368)
			ret->elt = o;
			HX_STACK_LINE(9368)
			tmp1 = ret;
		}
		HX_STACK_LINE(9368)
		::zpp_nape::util::ZNPNode_ZPP_Edge temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(9368)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9368)
		temp->next = tmp2;
		HX_STACK_LINE(9368)
		this->head = temp;
		HX_STACK_LINE(9368)
		this->modified = true;
		HX_STACK_LINE(9368)
		(this->length)++;
		HX_STACK_LINE(9368)
		tmp = o;
	}
	HX_STACK_LINE(9368)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,add,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_add( ::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_add",0x18826c11,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_add","zpp_nape/util/Lists.hx",9372,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9381)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9381)
	{
		HX_STACK_LINE(9382)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9383)
		{
			HX_STACK_LINE(9384)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9384)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9384)
			if ((tmp2)){
				HX_STACK_LINE(9385)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9385)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(9391)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9391)
				ret = tmp3;
				HX_STACK_LINE(9392)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9393)
				ret->next = null();
			}
			HX_STACK_LINE(9398)
			Dynamic();
		}
		HX_STACK_LINE(9400)
		ret->elt = o;
		HX_STACK_LINE(9401)
		tmp = ret;
	}
	HX_STACK_LINE(9381)
	::zpp_nape::util::ZNPNode_ZPP_Edge temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9403)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9403)
	temp->next = tmp1;
	HX_STACK_LINE(9404)
	this->head = temp;
	HX_STACK_LINE(9405)
	this->modified = true;
	HX_STACK_LINE(9406)
	(this->length)++;
	HX_STACK_LINE(9407)
	::zpp_nape::shape::ZPP_Edge tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9407)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_add,return )

Void ZNPList_ZPP_Edge_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Edge x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","addAll",0x48a3187c,"zpp_nape.util.ZNPList_ZPP_Edge.addAll","zpp_nape/util/Lists.hx",9418,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(9419)
		::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(9420)
		while((true)){
			HX_STACK_LINE(9420)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9420)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9420)
			if ((tmp1)){
				HX_STACK_LINE(9420)
				break;
			}
			HX_STACK_LINE(9421)
			::zpp_nape::shape::ZPP_Edge i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(9422)
			::zpp_nape::shape::ZPP_Edge tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9422)
			this->add(tmp2);
			HX_STACK_LINE(9423)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Edge cur,::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","insert",0x47855235,"zpp_nape.util.ZNPList_ZPP_Edge.insert","zpp_nape/util/Lists.hx",9427,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9428)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9428)
	{
		HX_STACK_LINE(9428)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9428)
		{
			HX_STACK_LINE(9428)
			::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9428)
			{
				HX_STACK_LINE(9428)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(9428)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9428)
				if ((tmp3)){
					HX_STACK_LINE(9428)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9428)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(9428)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9428)
					ret = tmp4;
					HX_STACK_LINE(9428)
					::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
					HX_STACK_LINE(9428)
					ret->next = null();
				}
				HX_STACK_LINE(9428)
				Dynamic();
			}
			HX_STACK_LINE(9428)
			ret->elt = o;
			HX_STACK_LINE(9428)
			tmp1 = ret;
		}
		HX_STACK_LINE(9428)
		::zpp_nape::util::ZNPNode_ZPP_Edge temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(9428)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9428)
		if ((tmp2)){
			HX_STACK_LINE(9428)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9428)
			temp->next = tmp3;
			HX_STACK_LINE(9428)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(9428)
			temp->next = cur->next;
			HX_STACK_LINE(9428)
			cur->next = temp;
		}
		HX_STACK_LINE(9428)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9428)
		this->pushmod = tmp3;
		HX_STACK_LINE(9428)
		(this->length)++;
		HX_STACK_LINE(9428)
		tmp = temp;
	}
	HX_STACK_LINE(9428)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Edge cur,::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_insert",0x12199f49,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_insert","zpp_nape/util/Lists.hx",9432,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(9441)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9441)
	{
		HX_STACK_LINE(9442)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9443)
		{
			HX_STACK_LINE(9444)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9444)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9444)
			if ((tmp2)){
				HX_STACK_LINE(9445)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9445)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(9451)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(9451)
				ret = tmp3;
				HX_STACK_LINE(9452)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
				HX_STACK_LINE(9453)
				ret->next = null();
			}
			HX_STACK_LINE(9458)
			Dynamic();
		}
		HX_STACK_LINE(9460)
		ret->elt = o;
		HX_STACK_LINE(9461)
		tmp = ret;
	}
	HX_STACK_LINE(9441)
	::zpp_nape::util::ZNPNode_ZPP_Edge temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9463)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9463)
	if ((tmp1)){
		HX_STACK_LINE(9464)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9464)
		temp->next = tmp2;
		HX_STACK_LINE(9465)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9468)
		temp->next = cur->next;
		HX_STACK_LINE(9469)
		cur->next = temp;
	}
	HX_STACK_LINE(9471)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9471)
	this->pushmod = tmp2;
	HX_STACK_LINE(9472)
	(this->length)++;
	HX_STACK_LINE(9473)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(9473)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,inlined_insert,return )

Void ZNPList_ZPP_Edge_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","pop",0x4a3c5915,"zpp_nape.util.ZNPList_ZPP_Edge.pop","zpp_nape/util/Lists.hx",9476,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9476)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9476)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9476)
		this->head = ret->next;
		HX_STACK_LINE(9476)
		{
			HX_STACK_LINE(9476)
			::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9476)
			o->elt = null();
			HX_STACK_LINE(9476)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9476)
			o->next = tmp1;
			HX_STACK_LINE(9476)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9476)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9476)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9476)
		if ((tmp2)){
			HX_STACK_LINE(9476)
			this->pushmod = true;
		}
		HX_STACK_LINE(9476)
		this->modified = true;
		HX_STACK_LINE(9476)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,pop,(void))

Void ZNPList_ZPP_Edge_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_pop",0x188dd781,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_pop","zpp_nape/util/Lists.hx",9480,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9489)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9489)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9490)
		this->head = ret->next;
		HX_STACK_LINE(9492)
		{
			HX_STACK_LINE(9493)
			::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9502)
			o->elt = null();
			HX_STACK_LINE(9503)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9503)
			o->next = tmp1;
			HX_STACK_LINE(9504)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9509)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9509)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9509)
		if ((tmp2)){
			HX_STACK_LINE(9509)
			this->pushmod = true;
		}
		HX_STACK_LINE(9510)
		this->modified = true;
		HX_STACK_LINE(9511)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_pop,(void))

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","pop_unsafe",0xc8adb950,"zpp_nape.util.ZNPList_ZPP_Edge.pop_unsafe","zpp_nape/util/Lists.hx",9513,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9514)
	::zpp_nape::shape::ZPP_Edge tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9514)
	{
		HX_STACK_LINE(9514)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9514)
		::zpp_nape::shape::ZPP_Edge ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9514)
		this->pop();
		HX_STACK_LINE(9514)
		tmp = ret;
	}
	HX_STACK_LINE(9514)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,pop_unsafe,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_pop_unsafe",0xcbf02064,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_pop_unsafe","zpp_nape/util/Lists.hx",9518,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9527)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9527)
	::zpp_nape::shape::ZPP_Edge ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9528)
	this->pop();
	HX_STACK_LINE(9529)
	::zpp_nape::shape::ZPP_Edge tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9529)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Edge_obj::remove( ::zpp_nape::shape::ZPP_Edge obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","remove",0xae30ab40,"zpp_nape.util.ZNPList_ZPP_Edge.remove","zpp_nape/util/Lists.hx",9540,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9540)
		::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9540)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9540)
		::zpp_nape::util::ZNPNode_ZPP_Edge cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9540)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9540)
		while((true)){
			HX_STACK_LINE(9540)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9540)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9540)
			if ((tmp2)){
				HX_STACK_LINE(9540)
				break;
			}
			HX_STACK_LINE(9540)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9540)
			if ((tmp3)){
				HX_STACK_LINE(9540)
				{
					HX_STACK_LINE(9540)
					::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9540)
					::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9540)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9540)
					if ((tmp4)){
						HX_STACK_LINE(9540)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9540)
						old = tmp5;
						HX_STACK_LINE(9540)
						ret1 = old->next;
						HX_STACK_LINE(9540)
						this->head = ret1;
						HX_STACK_LINE(9540)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(9540)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(9540)
						if ((tmp7)){
							HX_STACK_LINE(9540)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9540)
						old = pre->next;
						HX_STACK_LINE(9540)
						ret1 = old->next;
						HX_STACK_LINE(9540)
						pre->next = ret1;
						HX_STACK_LINE(9540)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9540)
						if ((tmp5)){
							HX_STACK_LINE(9540)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9540)
					{
						HX_STACK_LINE(9540)
						::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9540)
						o->elt = null();
						HX_STACK_LINE(9540)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9540)
						o->next = tmp5;
						HX_STACK_LINE(9540)
						::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9540)
					this->modified = true;
					HX_STACK_LINE(9540)
					(this->length)--;
					HX_STACK_LINE(9540)
					this->pushmod = true;
					HX_STACK_LINE(9540)
					ret1;
				}
				HX_STACK_LINE(9540)
				ret = true;
				HX_STACK_LINE(9540)
				break;
			}
			HX_STACK_LINE(9540)
			pre = cur;
			HX_STACK_LINE(9540)
			cur = cur->next;
		}
		HX_STACK_LINE(9540)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,remove,(void))

bool ZNPList_ZPP_Edge_obj::try_remove( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","try_remove",0xdfd7ef04,"zpp_nape.util.ZNPList_ZPP_Edge.try_remove","zpp_nape/util/Lists.hx",9542,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9551)
	::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9552)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9552)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9553)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9554)
	while((true)){
		HX_STACK_LINE(9554)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9554)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9554)
		if ((tmp2)){
			HX_STACK_LINE(9554)
			break;
		}
		HX_STACK_LINE(9555)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9555)
		if ((tmp3)){
			HX_STACK_LINE(9556)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9556)
			this->erase(tmp4);
			HX_STACK_LINE(9557)
			ret = true;
			HX_STACK_LINE(9558)
			break;
		}
		HX_STACK_LINE(9560)
		pre = cur;
		HX_STACK_LINE(9561)
		cur = cur->next;
	}
	HX_STACK_LINE(9563)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9563)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,try_remove,return )

Void ZNPList_ZPP_Edge_obj::inlined_remove( ::zpp_nape::shape::ZPP_Edge obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_remove",0x78c4f854,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_remove","zpp_nape/util/Lists.hx",9576,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(9576)
		::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9576)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9576)
		::zpp_nape::util::ZNPNode_ZPP_Edge cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9576)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9576)
		while((true)){
			HX_STACK_LINE(9576)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9576)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9576)
			if ((tmp2)){
				HX_STACK_LINE(9576)
				break;
			}
			HX_STACK_LINE(9576)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9576)
			if ((tmp3)){
				HX_STACK_LINE(9576)
				{
					HX_STACK_LINE(9576)
					::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9576)
					::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9576)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(9576)
					if ((tmp4)){
						HX_STACK_LINE(9576)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9576)
						old = tmp5;
						HX_STACK_LINE(9576)
						ret1 = old->next;
						HX_STACK_LINE(9576)
						this->head = ret1;
						HX_STACK_LINE(9576)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(9576)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(9576)
						if ((tmp7)){
							HX_STACK_LINE(9576)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9576)
						old = pre->next;
						HX_STACK_LINE(9576)
						ret1 = old->next;
						HX_STACK_LINE(9576)
						pre->next = ret1;
						HX_STACK_LINE(9576)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9576)
						if ((tmp5)){
							HX_STACK_LINE(9576)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9576)
					{
						HX_STACK_LINE(9576)
						::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9576)
						o->elt = null();
						HX_STACK_LINE(9576)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(9576)
						o->next = tmp5;
						HX_STACK_LINE(9576)
						::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9576)
					this->modified = true;
					HX_STACK_LINE(9576)
					(this->length)--;
					HX_STACK_LINE(9576)
					this->pushmod = true;
					HX_STACK_LINE(9576)
					ret1;
				}
				HX_STACK_LINE(9576)
				ret = true;
				HX_STACK_LINE(9576)
				break;
			}
			HX_STACK_LINE(9576)
			pre = cur;
			HX_STACK_LINE(9576)
			cur = cur->next;
		}
		HX_STACK_LINE(9576)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_remove,(void))

bool ZNPList_ZPP_Edge_obj::inlined_try_remove( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_try_remove",0xe31a5618,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_try_remove","zpp_nape/util/Lists.hx",9580,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9589)
	::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9590)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9590)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9591)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9592)
	while((true)){
		HX_STACK_LINE(9592)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9592)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9592)
		if ((tmp2)){
			HX_STACK_LINE(9592)
			break;
		}
		HX_STACK_LINE(9593)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9593)
		if ((tmp3)){
			HX_STACK_LINE(9594)
			{
				HX_STACK_LINE(9594)
				::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9594)
				::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(9594)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(9594)
				if ((tmp4)){
					HX_STACK_LINE(9594)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(9594)
					old = tmp5;
					HX_STACK_LINE(9594)
					ret1 = old->next;
					HX_STACK_LINE(9594)
					this->head = ret1;
					HX_STACK_LINE(9594)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(9594)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(9594)
					if ((tmp7)){
						HX_STACK_LINE(9594)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9594)
					old = pre->next;
					HX_STACK_LINE(9594)
					ret1 = old->next;
					HX_STACK_LINE(9594)
					pre->next = ret1;
					HX_STACK_LINE(9594)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(9594)
					if ((tmp5)){
						HX_STACK_LINE(9594)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(9594)
				{
					HX_STACK_LINE(9594)
					::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9594)
					o->elt = null();
					HX_STACK_LINE(9594)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(9594)
					o->next = tmp5;
					HX_STACK_LINE(9594)
					::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9594)
				this->modified = true;
				HX_STACK_LINE(9594)
				(this->length)--;
				HX_STACK_LINE(9594)
				this->pushmod = true;
				HX_STACK_LINE(9594)
				ret1;
			}
			HX_STACK_LINE(9595)
			ret = true;
			HX_STACK_LINE(9596)
			break;
		}
		HX_STACK_LINE(9598)
		pre = cur;
		HX_STACK_LINE(9599)
		cur = cur->next;
	}
	HX_STACK_LINE(9601)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9601)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Edge pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","erase",0x415ccd6a,"zpp_nape.util.ZNPList_ZPP_Edge.erase","zpp_nape/util/Lists.hx",9603,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(9604)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9604)
	{
		HX_STACK_LINE(9604)
		::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(9604)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9604)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9604)
		if ((tmp1)){
			HX_STACK_LINE(9604)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9604)
			old = tmp2;
			HX_STACK_LINE(9604)
			ret = old->next;
			HX_STACK_LINE(9604)
			this->head = ret;
			HX_STACK_LINE(9604)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9604)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9604)
			if ((tmp4)){
				HX_STACK_LINE(9604)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(9604)
			old = pre->next;
			HX_STACK_LINE(9604)
			ret = old->next;
			HX_STACK_LINE(9604)
			pre->next = ret;
			HX_STACK_LINE(9604)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9604)
			if ((tmp2)){
				HX_STACK_LINE(9604)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(9604)
		{
			HX_STACK_LINE(9604)
			::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9604)
			o->elt = null();
			HX_STACK_LINE(9604)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9604)
			o->next = tmp2;
			HX_STACK_LINE(9604)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9604)
		this->modified = true;
		HX_STACK_LINE(9604)
		(this->length)--;
		HX_STACK_LINE(9604)
		this->pushmod = true;
		HX_STACK_LINE(9604)
		tmp = ret;
	}
	HX_STACK_LINE(9604)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Edge pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_erase",0x65dbbed6,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_erase","zpp_nape/util/Lists.hx",9608,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(9617)
	::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(9618)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9619)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9619)
	if ((tmp)){
		HX_STACK_LINE(9620)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9620)
		old = tmp1;
		HX_STACK_LINE(9621)
		ret = old->next;
		HX_STACK_LINE(9622)
		this->head = ret;
		HX_STACK_LINE(9623)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9623)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9623)
		if ((tmp3)){
			HX_STACK_LINE(9623)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(9626)
		old = pre->next;
		HX_STACK_LINE(9627)
		ret = old->next;
		HX_STACK_LINE(9628)
		pre->next = ret;
		HX_STACK_LINE(9629)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9629)
		if ((tmp1)){
			HX_STACK_LINE(9629)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(9632)
	{
		HX_STACK_LINE(9633)
		::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(9642)
		o->elt = null();
		HX_STACK_LINE(9643)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9643)
		o->next = tmp1;
		HX_STACK_LINE(9644)
		::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
	}
	HX_STACK_LINE(9649)
	this->modified = true;
	HX_STACK_LINE(9650)
	(this->length)--;
	HX_STACK_LINE(9651)
	this->pushmod = true;
	HX_STACK_LINE(9652)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9652)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Edge pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","splice",0x69469478,"zpp_nape.util.ZNPList_ZPP_Edge.splice","zpp_nape/util/Lists.hx",9654,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(9655)
	while((true)){
		HX_STACK_LINE(9655)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9655)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9655)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9655)
		if ((tmp1)){
			HX_STACK_LINE(9655)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(9655)
			tmp2 = false;
		}
		HX_STACK_LINE(9655)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9655)
		if ((tmp3)){
			HX_STACK_LINE(9655)
			break;
		}
		HX_STACK_LINE(9655)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(9655)
		this->erase(tmp4);
	}
	HX_STACK_LINE(9656)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9656)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,splice,return )

Void ZNPList_ZPP_Edge_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","clear",0x169b5611,"zpp_nape.util.ZNPList_ZPP_Edge.clear","zpp_nape/util/Lists.hx",9659,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9659)
		while((true)){
			HX_STACK_LINE(9659)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9659)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9659)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9659)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9659)
			if ((tmp3)){
				HX_STACK_LINE(9659)
				break;
			}
			HX_STACK_LINE(9659)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9659)
			::zpp_nape::util::ZNPNode_ZPP_Edge ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9659)
			this->head = ret->next;
			HX_STACK_LINE(9659)
			{
				HX_STACK_LINE(9659)
				::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9659)
				o->elt = null();
				HX_STACK_LINE(9659)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(9659)
				o->next = tmp5;
				HX_STACK_LINE(9659)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9659)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(9659)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(9659)
			if ((tmp6)){
				HX_STACK_LINE(9659)
				this->pushmod = true;
			}
			HX_STACK_LINE(9659)
			this->modified = true;
			HX_STACK_LINE(9659)
			(this->length)--;
		}
		HX_STACK_LINE(9659)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,clear,(void))

Void ZNPList_ZPP_Edge_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_clear",0x3b1a477d,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_clear","zpp_nape/util/Lists.hx",9664,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9665)
		while((true)){
			HX_STACK_LINE(9665)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9665)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9665)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9665)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9665)
			if ((tmp3)){
				HX_STACK_LINE(9665)
				break;
			}
			HX_STACK_LINE(9665)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(9665)
			::zpp_nape::util::ZNPNode_ZPP_Edge ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9665)
			this->head = ret->next;
			HX_STACK_LINE(9665)
			{
				HX_STACK_LINE(9665)
				::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9665)
				o->elt = null();
				HX_STACK_LINE(9665)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(9665)
				o->next = tmp5;
				HX_STACK_LINE(9665)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9665)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(9665)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(9665)
			if ((tmp6)){
				HX_STACK_LINE(9665)
				this->pushmod = true;
			}
			HX_STACK_LINE(9665)
			this->modified = true;
			HX_STACK_LINE(9665)
			(this->length)--;
		}
		HX_STACK_LINE(9666)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_clear,(void))

Void ZNPList_ZPP_Edge_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","reverse",0xe46146a6,"zpp_nape.util.ZNPList_ZPP_Edge.reverse","zpp_nape/util/Lists.hx",9669,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9670)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9670)
		::zpp_nape::util::ZNPNode_ZPP_Edge cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9671)
		::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9672)
		while((true)){
			HX_STACK_LINE(9672)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9672)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(9672)
			if ((tmp2)){
				HX_STACK_LINE(9672)
				break;
			}
			HX_STACK_LINE(9673)
			::zpp_nape::util::ZNPNode_ZPP_Edge nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(9674)
			cur->next = pre;
			HX_STACK_LINE(9675)
			this->head = cur;
			HX_STACK_LINE(9676)
			pre = cur;
			HX_STACK_LINE(9677)
			cur = nx;
		}
		HX_STACK_LINE(9679)
		this->modified = true;
		HX_STACK_LINE(9680)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,reverse,(void))

bool ZNPList_ZPP_Edge_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","empty",0x3e1a1f11,"zpp_nape.util.ZNPList_ZPP_Edge.empty","zpp_nape/util/Lists.hx",9684,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9685)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9685)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9685)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,empty,return )

int ZNPList_ZPP_Edge_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","size",0xac88b8bd,"zpp_nape.util.ZNPList_ZPP_Edge.size","zpp_nape/util/Lists.hx",9689,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9690)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9690)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,size,return )

bool ZNPList_ZPP_Edge_obj::has( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","has",0x4a363ade,"zpp_nape.util.ZNPList_ZPP_Edge.has","zpp_nape/util/Lists.hx",9692,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9693)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9693)
	{
		HX_STACK_LINE(9693)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9693)
		{
			HX_STACK_LINE(9693)
			ret = false;
			HX_STACK_LINE(9693)
			{
				HX_STACK_LINE(9693)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(9693)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(9693)
				while((true)){
					HX_STACK_LINE(9693)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(9693)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(9693)
					if ((tmp3)){
						HX_STACK_LINE(9693)
						break;
					}
					HX_STACK_LINE(9693)
					::zpp_nape::shape::ZPP_Edge npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(9693)
					{
						HX_STACK_LINE(9693)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(9693)
						if ((tmp4)){
							HX_STACK_LINE(9693)
							ret = true;
							HX_STACK_LINE(9693)
							break;
						}
					}
					HX_STACK_LINE(9693)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(9693)
		tmp = ret;
	}
	HX_STACK_LINE(9693)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,has,return )

bool ZNPList_ZPP_Edge_obj::inlined_has( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","inlined_has",0x1887b94a,"zpp_nape.util.ZNPList_ZPP_Edge.inlined_has","zpp_nape/util/Lists.hx",9697,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(9706)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9707)
	{
		HX_STACK_LINE(9708)
		ret = false;
		HX_STACK_LINE(9709)
		{
			HX_STACK_LINE(9710)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9710)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9711)
			while((true)){
				HX_STACK_LINE(9711)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(9711)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(9711)
				if ((tmp2)){
					HX_STACK_LINE(9711)
					break;
				}
				HX_STACK_LINE(9712)
				::zpp_nape::shape::ZPP_Edge npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(9713)
				{
					HX_STACK_LINE(9714)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(9714)
					if ((tmp3)){
						HX_STACK_LINE(9715)
						ret = true;
						HX_STACK_LINE(9716)
						break;
					}
				}
				HX_STACK_LINE(9719)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(9723)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9723)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_has,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","front",0xd4cdfd2d,"zpp_nape.util.ZNPList_ZPP_Edge.front","zpp_nape/util/Lists.hx",9727,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9728)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9728)
	::zpp_nape::shape::ZPP_Edge tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9728)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,front,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","back",0xa145f223,"zpp_nape.util.ZNPList_ZPP_Edge.back","zpp_nape/util/Lists.hx",9730,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9731)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9731)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9732)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9733)
	while((true)){
		HX_STACK_LINE(9733)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9733)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9733)
		if ((tmp2)){
			HX_STACK_LINE(9733)
			break;
		}
		HX_STACK_LINE(9734)
		ret = cur;
		HX_STACK_LINE(9735)
		cur = cur->next;
	}
	HX_STACK_LINE(9737)
	::zpp_nape::shape::ZPP_Edge tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9737)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","iterator_at",0x1d26a968,"zpp_nape.util.ZNPList_ZPP_Edge.iterator_at","zpp_nape/util/Lists.hx",9739,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(9748)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9748)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9749)
	while((true)){
		HX_STACK_LINE(9749)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9749)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9749)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(9749)
		if ((tmp2)){
			HX_STACK_LINE(9749)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(9749)
			tmp3 = false;
		}
		HX_STACK_LINE(9749)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(9749)
		if ((tmp4)){
			HX_STACK_LINE(9749)
			break;
		}
		HX_STACK_LINE(9749)
		ret = ret->next;
	}
	HX_STACK_LINE(9750)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9750)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,iterator_at,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Edge","at",0x6c3e35ef,"zpp_nape.util.ZNPList_ZPP_Edge.at","zpp_nape/util/Lists.hx",9752,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(9761)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9761)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9761)
	::zpp_nape::util::ZNPNode_ZPP_Edge it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(9762)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9762)
	::zpp_nape::shape::ZPP_Edge tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(9762)
	if ((tmp2)){
		HX_STACK_LINE(9762)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(9762)
		tmp3 = null();
	}
	HX_STACK_LINE(9762)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,at,return )


ZNPList_ZPP_Edge_obj::ZNPList_ZPP_Edge_obj()
{
}

void ZNPList_ZPP_Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Edge);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Edge_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_Edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Edge >(); return inValue; }
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

bool ZNPList_ZPP_Edge_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Edge*/ ,(int)offsetof(ZNPList_ZPP_Edge_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Edge_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Edge_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Edge_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Edge_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Edge_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Edge_obj::__mClass;

void ZNPList_ZPP_Edge_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Edge","\xf2","\x49","\x2e","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Edge_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Edge_obj >;
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
