#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ConvexResult
#include <zpp_nape/util/ZNPList_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ConvexResult_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","new",0x0a00eb86,"zpp_nape.util.ZNPList_ConvexResult.new","zpp_nape/util/Lists.hx",13519,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13529)
	this->length = (int)0;
	HX_STACK_LINE(13528)
	this->pushmod = false;
	HX_STACK_LINE(13527)
	this->modified = false;
	HX_STACK_LINE(13520)
	this->head = null();
}
;
	return null();
}

//ZNPList_ConvexResult_obj::~ZNPList_ConvexResult_obj() { }

Dynamic ZNPList_ConvexResult_obj::__CreateEmpty() { return  new ZNPList_ConvexResult_obj; }
hx::ObjectPtr< ZNPList_ConvexResult_obj > ZNPList_ConvexResult_obj::__new()
{  hx::ObjectPtr< ZNPList_ConvexResult_obj > _result_ = new ZNPList_ConvexResult_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ConvexResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ConvexResult_obj > _result_ = new ZNPList_ConvexResult_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","begin",0x53dc9acf,"zpp_nape.util.ZNPList_ConvexResult.begin","zpp_nape/util/Lists.hx",13524,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13525)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13525)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,begin,return )

Void ZNPList_ConvexResult_obj::setbegin( ::zpp_nape::util::ZNPNode_ConvexResult i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","setbegin",0xc2dd9e61,"zpp_nape.util.ZNPList_ConvexResult.setbegin","zpp_nape/util/Lists.hx",13532,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(13533)
		this->head = i;
		HX_STACK_LINE(13534)
		this->modified = true;
		HX_STACK_LINE(13535)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,setbegin,(void))

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::add( ::nape::geom::ConvexResult o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","add",0x09f70d47,"zpp_nape.util.ZNPList_ConvexResult.add","zpp_nape/util/Lists.hx",13537,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13538)
	::nape::geom::ConvexResult tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13538)
	{
		HX_STACK_LINE(13538)
		::zpp_nape::util::ZNPNode_ConvexResult tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13538)
		{
			HX_STACK_LINE(13538)
			::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13538)
			{
				HX_STACK_LINE(13538)
				::zpp_nape::util::ZNPNode_ConvexResult tmp2 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13538)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13538)
				if ((tmp3)){
					HX_STACK_LINE(13538)
					::zpp_nape::util::ZNPNode_ConvexResult tmp4 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13538)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(13538)
					::zpp_nape::util::ZNPNode_ConvexResult tmp4 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13538)
					ret = tmp4;
					HX_STACK_LINE(13538)
					::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
					HX_STACK_LINE(13538)
					ret->next = null();
				}
				HX_STACK_LINE(13538)
				Dynamic();
			}
			HX_STACK_LINE(13538)
			ret->elt = o;
			HX_STACK_LINE(13538)
			tmp1 = ret;
		}
		HX_STACK_LINE(13538)
		::zpp_nape::util::ZNPNode_ConvexResult temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(13538)
		::zpp_nape::util::ZNPNode_ConvexResult tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13538)
		temp->next = tmp2;
		HX_STACK_LINE(13538)
		this->head = temp;
		HX_STACK_LINE(13538)
		this->modified = true;
		HX_STACK_LINE(13538)
		(this->length)++;
		HX_STACK_LINE(13538)
		tmp = o;
	}
	HX_STACK_LINE(13538)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,add,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::inlined_add( ::nape::geom::ConvexResult o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_add",0xc6c3fdb3,"zpp_nape.util.ZNPList_ConvexResult.inlined_add","zpp_nape/util/Lists.hx",13542,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13551)
	::zpp_nape::util::ZNPNode_ConvexResult tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13551)
	{
		HX_STACK_LINE(13552)
		::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13553)
		{
			HX_STACK_LINE(13554)
			::zpp_nape::util::ZNPNode_ConvexResult tmp1 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13554)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13554)
			if ((tmp2)){
				HX_STACK_LINE(13555)
				::zpp_nape::util::ZNPNode_ConvexResult tmp3 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13555)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(13561)
				::zpp_nape::util::ZNPNode_ConvexResult tmp3 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13561)
				ret = tmp3;
				HX_STACK_LINE(13562)
				::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
				HX_STACK_LINE(13563)
				ret->next = null();
			}
			HX_STACK_LINE(13568)
			Dynamic();
		}
		HX_STACK_LINE(13570)
		ret->elt = o;
		HX_STACK_LINE(13571)
		tmp = ret;
	}
	HX_STACK_LINE(13551)
	::zpp_nape::util::ZNPNode_ConvexResult temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13573)
	::zpp_nape::util::ZNPNode_ConvexResult tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13573)
	temp->next = tmp1;
	HX_STACK_LINE(13574)
	this->head = temp;
	HX_STACK_LINE(13575)
	this->modified = true;
	HX_STACK_LINE(13576)
	(this->length)++;
	HX_STACK_LINE(13577)
	::nape::geom::ConvexResult tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13577)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_add,return )

Void ZNPList_ConvexResult_obj::addAll( ::zpp_nape::util::ZNPList_ConvexResult x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","addAll",0x114eea1a,"zpp_nape.util.ZNPList_ConvexResult.addAll","zpp_nape/util/Lists.hx",13588,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(13589)
		::zpp_nape::util::ZNPNode_ConvexResult cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(13590)
		while((true)){
			HX_STACK_LINE(13590)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13590)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13590)
			if ((tmp1)){
				HX_STACK_LINE(13590)
				break;
			}
			HX_STACK_LINE(13591)
			::nape::geom::ConvexResult i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(13592)
			::nape::geom::ConvexResult tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13592)
			this->add(tmp2);
			HX_STACK_LINE(13593)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::insert( ::zpp_nape::util::ZNPNode_ConvexResult cur,::nape::geom::ConvexResult o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","insert",0x103123d3,"zpp_nape.util.ZNPList_ConvexResult.insert","zpp_nape/util/Lists.hx",13597,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13598)
	::zpp_nape::util::ZNPNode_ConvexResult tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13598)
	{
		HX_STACK_LINE(13598)
		::zpp_nape::util::ZNPNode_ConvexResult tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13598)
		{
			HX_STACK_LINE(13598)
			::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13598)
			{
				HX_STACK_LINE(13598)
				::zpp_nape::util::ZNPNode_ConvexResult tmp2 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13598)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13598)
				if ((tmp3)){
					HX_STACK_LINE(13598)
					::zpp_nape::util::ZNPNode_ConvexResult tmp4 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13598)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(13598)
					::zpp_nape::util::ZNPNode_ConvexResult tmp4 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13598)
					ret = tmp4;
					HX_STACK_LINE(13598)
					::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
					HX_STACK_LINE(13598)
					ret->next = null();
				}
				HX_STACK_LINE(13598)
				Dynamic();
			}
			HX_STACK_LINE(13598)
			ret->elt = o;
			HX_STACK_LINE(13598)
			tmp1 = ret;
		}
		HX_STACK_LINE(13598)
		::zpp_nape::util::ZNPNode_ConvexResult temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(13598)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13598)
		if ((tmp2)){
			HX_STACK_LINE(13598)
			::zpp_nape::util::ZNPNode_ConvexResult tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13598)
			temp->next = tmp3;
			HX_STACK_LINE(13598)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(13598)
			temp->next = cur->next;
			HX_STACK_LINE(13598)
			cur->next = temp;
		}
		HX_STACK_LINE(13598)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13598)
		this->pushmod = tmp3;
		HX_STACK_LINE(13598)
		(this->length)++;
		HX_STACK_LINE(13598)
		tmp = temp;
	}
	HX_STACK_LINE(13598)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,insert,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ConvexResult cur,::nape::geom::ConvexResult o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_insert",0x457d3ee7,"zpp_nape.util.ZNPList_ConvexResult.inlined_insert","zpp_nape/util/Lists.hx",13602,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13611)
	::zpp_nape::util::ZNPNode_ConvexResult tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13611)
	{
		HX_STACK_LINE(13612)
		::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13613)
		{
			HX_STACK_LINE(13614)
			::zpp_nape::util::ZNPNode_ConvexResult tmp1 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13614)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13614)
			if ((tmp2)){
				HX_STACK_LINE(13615)
				::zpp_nape::util::ZNPNode_ConvexResult tmp3 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13615)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(13621)
				::zpp_nape::util::ZNPNode_ConvexResult tmp3 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13621)
				ret = tmp3;
				HX_STACK_LINE(13622)
				::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
				HX_STACK_LINE(13623)
				ret->next = null();
			}
			HX_STACK_LINE(13628)
			Dynamic();
		}
		HX_STACK_LINE(13630)
		ret->elt = o;
		HX_STACK_LINE(13631)
		tmp = ret;
	}
	HX_STACK_LINE(13611)
	::zpp_nape::util::ZNPNode_ConvexResult temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13633)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13633)
	if ((tmp1)){
		HX_STACK_LINE(13634)
		::zpp_nape::util::ZNPNode_ConvexResult tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13634)
		temp->next = tmp2;
		HX_STACK_LINE(13635)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(13638)
		temp->next = cur->next;
		HX_STACK_LINE(13639)
		cur->next = temp;
	}
	HX_STACK_LINE(13641)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13641)
	this->pushmod = tmp2;
	HX_STACK_LINE(13642)
	(this->length)++;
	HX_STACK_LINE(13643)
	::zpp_nape::util::ZNPNode_ConvexResult tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13643)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,inlined_insert,return )

Void ZNPList_ConvexResult_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","pop",0x0a0278b7,"zpp_nape.util.ZNPList_ConvexResult.pop","zpp_nape/util/Lists.hx",13646,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13646)
		::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13646)
		::zpp_nape::util::ZNPNode_ConvexResult ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13646)
		this->head = ret->next;
		HX_STACK_LINE(13646)
		{
			HX_STACK_LINE(13646)
			::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13646)
			o->elt = null();
			HX_STACK_LINE(13646)
			::zpp_nape::util::ZNPNode_ConvexResult tmp1 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13646)
			o->next = tmp1;
			HX_STACK_LINE(13646)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13646)
		::zpp_nape::util::ZNPNode_ConvexResult tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13646)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13646)
		if ((tmp2)){
			HX_STACK_LINE(13646)
			this->pushmod = true;
		}
		HX_STACK_LINE(13646)
		this->modified = true;
		HX_STACK_LINE(13646)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,pop,(void))

Void ZNPList_ConvexResult_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_pop",0xc6cf6923,"zpp_nape.util.ZNPList_ConvexResult.inlined_pop","zpp_nape/util/Lists.hx",13650,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13659)
		::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13659)
		::zpp_nape::util::ZNPNode_ConvexResult ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13660)
		this->head = ret->next;
		HX_STACK_LINE(13662)
		{
			HX_STACK_LINE(13663)
			::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13672)
			o->elt = null();
			HX_STACK_LINE(13673)
			::zpp_nape::util::ZNPNode_ConvexResult tmp1 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13673)
			o->next = tmp1;
			HX_STACK_LINE(13674)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13679)
		::zpp_nape::util::ZNPNode_ConvexResult tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13679)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13679)
		if ((tmp2)){
			HX_STACK_LINE(13679)
			this->pushmod = true;
		}
		HX_STACK_LINE(13680)
		this->modified = true;
		HX_STACK_LINE(13681)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_pop,(void))

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","pop_unsafe",0x7b65b1ee,"zpp_nape.util.ZNPList_ConvexResult.pop_unsafe","zpp_nape/util/Lists.hx",13683,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13684)
	::nape::geom::ConvexResult tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13684)
	{
		HX_STACK_LINE(13684)
		::zpp_nape::util::ZNPNode_ConvexResult tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13684)
		::nape::geom::ConvexResult ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13684)
		this->pop();
		HX_STACK_LINE(13684)
		tmp = ret;
	}
	HX_STACK_LINE(13684)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,pop_unsafe,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_pop_unsafe",0x9c5ee702,"zpp_nape.util.ZNPList_ConvexResult.inlined_pop_unsafe","zpp_nape/util/Lists.hx",13688,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13697)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13697)
	::nape::geom::ConvexResult ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13698)
	this->pop();
	HX_STACK_LINE(13699)
	::nape::geom::ConvexResult tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13699)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_pop_unsafe,return )

Void ZNPList_ConvexResult_obj::remove( ::nape::geom::ConvexResult obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","remove",0x76dc7cde,"zpp_nape.util.ZNPList_ConvexResult.remove","zpp_nape/util/Lists.hx",13710,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(13710)
		::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13710)
		::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13710)
		::zpp_nape::util::ZNPNode_ConvexResult cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13710)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13710)
		while((true)){
			HX_STACK_LINE(13710)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13710)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13710)
			if ((tmp2)){
				HX_STACK_LINE(13710)
				break;
			}
			HX_STACK_LINE(13710)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13710)
			if ((tmp3)){
				HX_STACK_LINE(13710)
				{
					HX_STACK_LINE(13710)
					::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(13710)
					::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(13710)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13710)
					if ((tmp4)){
						HX_STACK_LINE(13710)
						::zpp_nape::util::ZNPNode_ConvexResult tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13710)
						old = tmp5;
						HX_STACK_LINE(13710)
						ret1 = old->next;
						HX_STACK_LINE(13710)
						this->head = ret1;
						HX_STACK_LINE(13710)
						::zpp_nape::util::ZNPNode_ConvexResult tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(13710)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(13710)
						if ((tmp7)){
							HX_STACK_LINE(13710)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(13710)
						old = pre->next;
						HX_STACK_LINE(13710)
						ret1 = old->next;
						HX_STACK_LINE(13710)
						pre->next = ret1;
						HX_STACK_LINE(13710)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13710)
						if ((tmp5)){
							HX_STACK_LINE(13710)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(13710)
					{
						HX_STACK_LINE(13710)
						::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(13710)
						o->elt = null();
						HX_STACK_LINE(13710)
						::zpp_nape::util::ZNPNode_ConvexResult tmp5 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13710)
						o->next = tmp5;
						HX_STACK_LINE(13710)
						::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
					}
					HX_STACK_LINE(13710)
					this->modified = true;
					HX_STACK_LINE(13710)
					(this->length)--;
					HX_STACK_LINE(13710)
					this->pushmod = true;
					HX_STACK_LINE(13710)
					ret1;
				}
				HX_STACK_LINE(13710)
				ret = true;
				HX_STACK_LINE(13710)
				break;
			}
			HX_STACK_LINE(13710)
			pre = cur;
			HX_STACK_LINE(13710)
			cur = cur->next;
		}
		HX_STACK_LINE(13710)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,remove,(void))

bool ZNPList_ConvexResult_obj::try_remove( ::nape::geom::ConvexResult obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","try_remove",0x928fe7a2,"zpp_nape.util.ZNPList_ConvexResult.try_remove","zpp_nape/util/Lists.hx",13712,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13721)
	::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13722)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13722)
	::zpp_nape::util::ZNPNode_ConvexResult cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13723)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13724)
	while((true)){
		HX_STACK_LINE(13724)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13724)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13724)
		if ((tmp2)){
			HX_STACK_LINE(13724)
			break;
		}
		HX_STACK_LINE(13725)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13725)
		if ((tmp3)){
			HX_STACK_LINE(13726)
			::zpp_nape::util::ZNPNode_ConvexResult tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13726)
			this->erase(tmp4);
			HX_STACK_LINE(13727)
			ret = true;
			HX_STACK_LINE(13728)
			break;
		}
		HX_STACK_LINE(13730)
		pre = cur;
		HX_STACK_LINE(13731)
		cur = cur->next;
	}
	HX_STACK_LINE(13733)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13733)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,try_remove,return )

Void ZNPList_ConvexResult_obj::inlined_remove( ::nape::geom::ConvexResult obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_remove",0xac2897f2,"zpp_nape.util.ZNPList_ConvexResult.inlined_remove","zpp_nape/util/Lists.hx",13746,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(13746)
		::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13746)
		::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13746)
		::zpp_nape::util::ZNPNode_ConvexResult cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13746)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13746)
		while((true)){
			HX_STACK_LINE(13746)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13746)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13746)
			if ((tmp2)){
				HX_STACK_LINE(13746)
				break;
			}
			HX_STACK_LINE(13746)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13746)
			if ((tmp3)){
				HX_STACK_LINE(13746)
				{
					HX_STACK_LINE(13746)
					::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(13746)
					::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(13746)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13746)
					if ((tmp4)){
						HX_STACK_LINE(13746)
						::zpp_nape::util::ZNPNode_ConvexResult tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13746)
						old = tmp5;
						HX_STACK_LINE(13746)
						ret1 = old->next;
						HX_STACK_LINE(13746)
						this->head = ret1;
						HX_STACK_LINE(13746)
						::zpp_nape::util::ZNPNode_ConvexResult tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(13746)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(13746)
						if ((tmp7)){
							HX_STACK_LINE(13746)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(13746)
						old = pre->next;
						HX_STACK_LINE(13746)
						ret1 = old->next;
						HX_STACK_LINE(13746)
						pre->next = ret1;
						HX_STACK_LINE(13746)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13746)
						if ((tmp5)){
							HX_STACK_LINE(13746)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(13746)
					{
						HX_STACK_LINE(13746)
						::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(13746)
						o->elt = null();
						HX_STACK_LINE(13746)
						::zpp_nape::util::ZNPNode_ConvexResult tmp5 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13746)
						o->next = tmp5;
						HX_STACK_LINE(13746)
						::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
					}
					HX_STACK_LINE(13746)
					this->modified = true;
					HX_STACK_LINE(13746)
					(this->length)--;
					HX_STACK_LINE(13746)
					this->pushmod = true;
					HX_STACK_LINE(13746)
					ret1;
				}
				HX_STACK_LINE(13746)
				ret = true;
				HX_STACK_LINE(13746)
				break;
			}
			HX_STACK_LINE(13746)
			pre = cur;
			HX_STACK_LINE(13746)
			cur = cur->next;
		}
		HX_STACK_LINE(13746)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_remove,(void))

bool ZNPList_ConvexResult_obj::inlined_try_remove( ::nape::geom::ConvexResult obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_try_remove",0xb3891cb6,"zpp_nape.util.ZNPList_ConvexResult.inlined_try_remove","zpp_nape/util/Lists.hx",13750,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13759)
	::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13760)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13760)
	::zpp_nape::util::ZNPNode_ConvexResult cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13761)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13762)
	while((true)){
		HX_STACK_LINE(13762)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13762)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13762)
		if ((tmp2)){
			HX_STACK_LINE(13762)
			break;
		}
		HX_STACK_LINE(13763)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13763)
		if ((tmp3)){
			HX_STACK_LINE(13764)
			{
				HX_STACK_LINE(13764)
				::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(13764)
				::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(13764)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(13764)
				if ((tmp4)){
					HX_STACK_LINE(13764)
					::zpp_nape::util::ZNPNode_ConvexResult tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(13764)
					old = tmp5;
					HX_STACK_LINE(13764)
					ret1 = old->next;
					HX_STACK_LINE(13764)
					this->head = ret1;
					HX_STACK_LINE(13764)
					::zpp_nape::util::ZNPNode_ConvexResult tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(13764)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(13764)
					if ((tmp7)){
						HX_STACK_LINE(13764)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(13764)
					old = pre->next;
					HX_STACK_LINE(13764)
					ret1 = old->next;
					HX_STACK_LINE(13764)
					pre->next = ret1;
					HX_STACK_LINE(13764)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(13764)
					if ((tmp5)){
						HX_STACK_LINE(13764)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(13764)
				{
					HX_STACK_LINE(13764)
					::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(13764)
					o->elt = null();
					HX_STACK_LINE(13764)
					::zpp_nape::util::ZNPNode_ConvexResult tmp5 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(13764)
					o->next = tmp5;
					HX_STACK_LINE(13764)
					::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
				}
				HX_STACK_LINE(13764)
				this->modified = true;
				HX_STACK_LINE(13764)
				(this->length)--;
				HX_STACK_LINE(13764)
				this->pushmod = true;
				HX_STACK_LINE(13764)
				ret1;
			}
			HX_STACK_LINE(13765)
			ret = true;
			HX_STACK_LINE(13766)
			break;
		}
		HX_STACK_LINE(13768)
		pre = cur;
		HX_STACK_LINE(13769)
		cur = cur->next;
	}
	HX_STACK_LINE(13771)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13771)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::erase( ::zpp_nape::util::ZNPNode_ConvexResult pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","erase",0x16a3998c,"zpp_nape.util.ZNPList_ConvexResult.erase","zpp_nape/util/Lists.hx",13773,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(13774)
	::zpp_nape::util::ZNPNode_ConvexResult tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13774)
	{
		HX_STACK_LINE(13774)
		::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(13774)
		::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13774)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13774)
		if ((tmp1)){
			HX_STACK_LINE(13774)
			::zpp_nape::util::ZNPNode_ConvexResult tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13774)
			old = tmp2;
			HX_STACK_LINE(13774)
			ret = old->next;
			HX_STACK_LINE(13774)
			this->head = ret;
			HX_STACK_LINE(13774)
			::zpp_nape::util::ZNPNode_ConvexResult tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13774)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13774)
			if ((tmp4)){
				HX_STACK_LINE(13774)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(13774)
			old = pre->next;
			HX_STACK_LINE(13774)
			ret = old->next;
			HX_STACK_LINE(13774)
			pre->next = ret;
			HX_STACK_LINE(13774)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13774)
			if ((tmp2)){
				HX_STACK_LINE(13774)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(13774)
		{
			HX_STACK_LINE(13774)
			::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13774)
			o->elt = null();
			HX_STACK_LINE(13774)
			::zpp_nape::util::ZNPNode_ConvexResult tmp2 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13774)
			o->next = tmp2;
			HX_STACK_LINE(13774)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13774)
		this->modified = true;
		HX_STACK_LINE(13774)
		(this->length)--;
		HX_STACK_LINE(13774)
		this->pushmod = true;
		HX_STACK_LINE(13774)
		tmp = ret;
	}
	HX_STACK_LINE(13774)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,erase,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ConvexResult pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_erase",0x54de7cf8,"zpp_nape.util.ZNPList_ConvexResult.inlined_erase","zpp_nape/util/Lists.hx",13778,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(13787)
	::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(13788)
	::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13789)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13789)
	if ((tmp)){
		HX_STACK_LINE(13790)
		::zpp_nape::util::ZNPNode_ConvexResult tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13790)
		old = tmp1;
		HX_STACK_LINE(13791)
		ret = old->next;
		HX_STACK_LINE(13792)
		this->head = ret;
		HX_STACK_LINE(13793)
		::zpp_nape::util::ZNPNode_ConvexResult tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13793)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13793)
		if ((tmp3)){
			HX_STACK_LINE(13793)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(13796)
		old = pre->next;
		HX_STACK_LINE(13797)
		ret = old->next;
		HX_STACK_LINE(13798)
		pre->next = ret;
		HX_STACK_LINE(13799)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13799)
		if ((tmp1)){
			HX_STACK_LINE(13799)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(13802)
	{
		HX_STACK_LINE(13803)
		::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(13812)
		o->elt = null();
		HX_STACK_LINE(13813)
		::zpp_nape::util::ZNPNode_ConvexResult tmp1 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13813)
		o->next = tmp1;
		HX_STACK_LINE(13814)
		::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
	}
	HX_STACK_LINE(13819)
	this->modified = true;
	HX_STACK_LINE(13820)
	(this->length)--;
	HX_STACK_LINE(13821)
	this->pushmod = true;
	HX_STACK_LINE(13822)
	::zpp_nape::util::ZNPNode_ConvexResult tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13822)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::splice( ::zpp_nape::util::ZNPNode_ConvexResult pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","splice",0x31f26616,"zpp_nape.util.ZNPList_ConvexResult.splice","zpp_nape/util/Lists.hx",13824,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(13825)
	while((true)){
		HX_STACK_LINE(13825)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13825)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13825)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13825)
		if ((tmp1)){
			HX_STACK_LINE(13825)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(13825)
			tmp2 = false;
		}
		HX_STACK_LINE(13825)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13825)
		if ((tmp3)){
			HX_STACK_LINE(13825)
			break;
		}
		HX_STACK_LINE(13825)
		::zpp_nape::util::ZNPNode_ConvexResult tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13825)
		this->erase(tmp4);
	}
	HX_STACK_LINE(13826)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13826)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,splice,return )

Void ZNPList_ConvexResult_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","clear",0xebe22233,"zpp_nape.util.ZNPList_ConvexResult.clear","zpp_nape/util/Lists.hx",13829,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13829)
		while((true)){
			HX_STACK_LINE(13829)
			::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13829)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13829)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13829)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13829)
			if ((tmp3)){
				HX_STACK_LINE(13829)
				break;
			}
			HX_STACK_LINE(13829)
			::zpp_nape::util::ZNPNode_ConvexResult tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13829)
			::zpp_nape::util::ZNPNode_ConvexResult ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13829)
			this->head = ret->next;
			HX_STACK_LINE(13829)
			{
				HX_STACK_LINE(13829)
				::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13829)
				o->elt = null();
				HX_STACK_LINE(13829)
				::zpp_nape::util::ZNPNode_ConvexResult tmp5 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(13829)
				o->next = tmp5;
				HX_STACK_LINE(13829)
				::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13829)
			::zpp_nape::util::ZNPNode_ConvexResult tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(13829)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13829)
			if ((tmp6)){
				HX_STACK_LINE(13829)
				this->pushmod = true;
			}
			HX_STACK_LINE(13829)
			this->modified = true;
			HX_STACK_LINE(13829)
			(this->length)--;
		}
		HX_STACK_LINE(13829)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,clear,(void))

Void ZNPList_ConvexResult_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_clear",0x2a1d059f,"zpp_nape.util.ZNPList_ConvexResult.inlined_clear","zpp_nape/util/Lists.hx",13834,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13835)
		while((true)){
			HX_STACK_LINE(13835)
			::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13835)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13835)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13835)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13835)
			if ((tmp3)){
				HX_STACK_LINE(13835)
				break;
			}
			HX_STACK_LINE(13835)
			::zpp_nape::util::ZNPNode_ConvexResult tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13835)
			::zpp_nape::util::ZNPNode_ConvexResult ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13835)
			this->head = ret->next;
			HX_STACK_LINE(13835)
			{
				HX_STACK_LINE(13835)
				::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13835)
				o->elt = null();
				HX_STACK_LINE(13835)
				::zpp_nape::util::ZNPNode_ConvexResult tmp5 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(13835)
				o->next = tmp5;
				HX_STACK_LINE(13835)
				::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13835)
			::zpp_nape::util::ZNPNode_ConvexResult tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(13835)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13835)
			if ((tmp6)){
				HX_STACK_LINE(13835)
				this->pushmod = true;
			}
			HX_STACK_LINE(13835)
			this->modified = true;
			HX_STACK_LINE(13835)
			(this->length)--;
		}
		HX_STACK_LINE(13836)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_clear,(void))

Void ZNPList_ConvexResult_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","reverse",0xb20cdf48,"zpp_nape.util.ZNPList_ConvexResult.reverse","zpp_nape/util/Lists.hx",13839,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13840)
		::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13840)
		::zpp_nape::util::ZNPNode_ConvexResult cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13841)
		::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13842)
		while((true)){
			HX_STACK_LINE(13842)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13842)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13842)
			if ((tmp2)){
				HX_STACK_LINE(13842)
				break;
			}
			HX_STACK_LINE(13843)
			::zpp_nape::util::ZNPNode_ConvexResult nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(13844)
			cur->next = pre;
			HX_STACK_LINE(13845)
			this->head = cur;
			HX_STACK_LINE(13846)
			pre = cur;
			HX_STACK_LINE(13847)
			cur = nx;
		}
		HX_STACK_LINE(13849)
		this->modified = true;
		HX_STACK_LINE(13850)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,reverse,(void))

bool ZNPList_ConvexResult_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","empty",0x1360eb33,"zpp_nape.util.ZNPList_ConvexResult.empty","zpp_nape/util/Lists.hx",13854,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13855)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13855)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13855)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,empty,return )

int ZNPList_ConvexResult_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","size",0xba1e46db,"zpp_nape.util.ZNPList_ConvexResult.size","zpp_nape/util/Lists.hx",13859,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13860)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13860)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,size,return )

bool ZNPList_ConvexResult_obj::has( ::nape::geom::ConvexResult obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","has",0x09fc5a80,"zpp_nape.util.ZNPList_ConvexResult.has","zpp_nape/util/Lists.hx",13862,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13863)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13863)
	{
		HX_STACK_LINE(13863)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13863)
		{
			HX_STACK_LINE(13863)
			ret = false;
			HX_STACK_LINE(13863)
			{
				HX_STACK_LINE(13863)
				::zpp_nape::util::ZNPNode_ConvexResult tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(13863)
				::zpp_nape::util::ZNPNode_ConvexResult cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(13863)
				while((true)){
					HX_STACK_LINE(13863)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(13863)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(13863)
					if ((tmp3)){
						HX_STACK_LINE(13863)
						break;
					}
					HX_STACK_LINE(13863)
					::nape::geom::ConvexResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(13863)
					{
						HX_STACK_LINE(13863)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(13863)
						if ((tmp4)){
							HX_STACK_LINE(13863)
							ret = true;
							HX_STACK_LINE(13863)
							break;
						}
					}
					HX_STACK_LINE(13863)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(13863)
		tmp = ret;
	}
	HX_STACK_LINE(13863)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,has,return )

bool ZNPList_ConvexResult_obj::inlined_has( ::nape::geom::ConvexResult obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","inlined_has",0xc6c94aec,"zpp_nape.util.ZNPList_ConvexResult.inlined_has","zpp_nape/util/Lists.hx",13867,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13876)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13877)
	{
		HX_STACK_LINE(13878)
		ret = false;
		HX_STACK_LINE(13879)
		{
			HX_STACK_LINE(13880)
			::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13880)
			::zpp_nape::util::ZNPNode_ConvexResult cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(13881)
			while((true)){
				HX_STACK_LINE(13881)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(13881)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13881)
				if ((tmp2)){
					HX_STACK_LINE(13881)
					break;
				}
				HX_STACK_LINE(13882)
				::nape::geom::ConvexResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(13883)
				{
					HX_STACK_LINE(13884)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(13884)
					if ((tmp3)){
						HX_STACK_LINE(13885)
						ret = true;
						HX_STACK_LINE(13886)
						break;
					}
				}
				HX_STACK_LINE(13889)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(13893)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13893)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_has,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","front",0xaa14c94f,"zpp_nape.util.ZNPList_ConvexResult.front","zpp_nape/util/Lists.hx",13897,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13898)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13898)
	::nape::geom::ConvexResult tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13898)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,front,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","back",0xaedb8041,"zpp_nape.util.ZNPList_ConvexResult.back","zpp_nape/util/Lists.hx",13900,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13901)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13901)
	::zpp_nape::util::ZNPNode_ConvexResult ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13902)
	::zpp_nape::util::ZNPNode_ConvexResult cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13903)
	while((true)){
		HX_STACK_LINE(13903)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13903)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13903)
		if ((tmp2)){
			HX_STACK_LINE(13903)
			break;
		}
		HX_STACK_LINE(13904)
		ret = cur;
		HX_STACK_LINE(13905)
		cur = cur->next;
	}
	HX_STACK_LINE(13907)
	::nape::geom::ConvexResult tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13907)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,back,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","iterator_at",0xcb683b0a,"zpp_nape.util.ZNPList_ConvexResult.iterator_at","zpp_nape/util/Lists.hx",13909,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(13918)
	::zpp_nape::util::ZNPNode_ConvexResult tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13918)
	::zpp_nape::util::ZNPNode_ConvexResult ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13919)
	while((true)){
		HX_STACK_LINE(13919)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13919)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13919)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13919)
		if ((tmp2)){
			HX_STACK_LINE(13919)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(13919)
			tmp3 = false;
		}
		HX_STACK_LINE(13919)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13919)
		if ((tmp4)){
			HX_STACK_LINE(13919)
			break;
		}
		HX_STACK_LINE(13919)
		ret = ret->next;
	}
	HX_STACK_LINE(13920)
	::zpp_nape::util::ZNPNode_ConvexResult tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13920)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,iterator_at,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ConvexResult","at",0x3bbd608d,"zpp_nape.util.ZNPList_ConvexResult.at","zpp_nape/util/Lists.hx",13922,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(13931)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13931)
	::zpp_nape::util::ZNPNode_ConvexResult tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13931)
	::zpp_nape::util::ZNPNode_ConvexResult it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(13932)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13932)
	::nape::geom::ConvexResult tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13932)
	if ((tmp2)){
		HX_STACK_LINE(13932)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(13932)
		tmp3 = null();
	}
	HX_STACK_LINE(13932)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,at,return )


ZNPList_ConvexResult_obj::ZNPList_ConvexResult_obj()
{
}

void ZNPList_ConvexResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ConvexResult);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ConvexResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ConvexResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ConvexResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ConvexResult >(); return inValue; }
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

bool ZNPList_ConvexResult_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ConvexResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ConvexResult*/ ,(int)offsetof(ZNPList_ConvexResult_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ConvexResult_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ConvexResult_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ConvexResult_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ConvexResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ConvexResult_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ConvexResult_obj::__mClass;

void ZNPList_ConvexResult_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ConvexResult","\x94","\x70","\x7f","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ConvexResult_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ConvexResult_obj >;
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
