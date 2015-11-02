#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ToiEvent
#include <zpp_nape/util/ZNPList_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ToiEvent_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","new",0xb2337453,"zpp_nape.util.ZNPList_ZPP_ToiEvent.new","zpp_nape/util/Lists.hx",13102,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13112)
	this->length = (int)0;
	HX_STACK_LINE(13111)
	this->pushmod = false;
	HX_STACK_LINE(13110)
	this->modified = false;
	HX_STACK_LINE(13103)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_ToiEvent_obj::~ZNPList_ZPP_ToiEvent_obj() { }

Dynamic ZNPList_ZPP_ToiEvent_obj::__CreateEmpty() { return  new ZNPList_ZPP_ToiEvent_obj; }
hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > ZNPList_ZPP_ToiEvent_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > _result_ = new ZNPList_ZPP_ToiEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_ToiEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > _result_ = new ZNPList_ZPP_ToiEvent_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","begin",0x545cb0dc,"zpp_nape.util.ZNPList_ZPP_ToiEvent.begin","zpp_nape/util/Lists.hx",13107,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13108)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13108)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,begin,return )

Void ZNPList_ZPP_ToiEvent_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","setbegin",0xa5a70e74,"zpp_nape.util.ZNPList_ZPP_ToiEvent.setbegin","zpp_nape/util/Lists.hx",13115,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(13116)
		this->head = i;
		HX_STACK_LINE(13117)
		this->modified = true;
		HX_STACK_LINE(13118)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,setbegin,(void))

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::add( ::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","add",0xb2299614,"zpp_nape.util.ZNPList_ZPP_ToiEvent.add","zpp_nape/util/Lists.hx",13120,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13121)
	::zpp_nape::geom::ZPP_ToiEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13121)
	{
		HX_STACK_LINE(13121)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13121)
		{
			HX_STACK_LINE(13121)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13121)
			{
				HX_STACK_LINE(13121)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13121)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13121)
				if ((tmp3)){
					HX_STACK_LINE(13121)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13121)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(13121)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13121)
					ret = tmp4;
					HX_STACK_LINE(13121)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
					HX_STACK_LINE(13121)
					ret->next = null();
				}
				HX_STACK_LINE(13121)
				Dynamic();
			}
			HX_STACK_LINE(13121)
			ret->elt = o;
			HX_STACK_LINE(13121)
			tmp1 = ret;
		}
		HX_STACK_LINE(13121)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(13121)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13121)
		temp->next = tmp2;
		HX_STACK_LINE(13121)
		this->head = temp;
		HX_STACK_LINE(13121)
		this->modified = true;
		HX_STACK_LINE(13121)
		(this->length)++;
		HX_STACK_LINE(13121)
		tmp = o;
	}
	HX_STACK_LINE(13121)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,add,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_add( ::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_add",0x1c0f9b80,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_add","zpp_nape/util/Lists.hx",13125,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13134)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13134)
	{
		HX_STACK_LINE(13135)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13136)
		{
			HX_STACK_LINE(13137)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13137)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13137)
			if ((tmp2)){
				HX_STACK_LINE(13138)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13138)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(13144)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13144)
				ret = tmp3;
				HX_STACK_LINE(13145)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
				HX_STACK_LINE(13146)
				ret->next = null();
			}
			HX_STACK_LINE(13151)
			Dynamic();
		}
		HX_STACK_LINE(13153)
		ret->elt = o;
		HX_STACK_LINE(13154)
		tmp = ret;
	}
	HX_STACK_LINE(13134)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13156)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13156)
	temp->next = tmp1;
	HX_STACK_LINE(13157)
	this->head = temp;
	HX_STACK_LINE(13158)
	this->modified = true;
	HX_STACK_LINE(13159)
	(this->length)++;
	HX_STACK_LINE(13160)
	::zpp_nape::geom::ZPP_ToiEvent tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13160)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_add,return )

Void ZNPList_ZPP_ToiEvent_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ToiEvent x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","addAll",0x80e21f6d,"zpp_nape.util.ZNPList_ZPP_ToiEvent.addAll","zpp_nape/util/Lists.hx",13171,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(13172)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(13173)
		while((true)){
			HX_STACK_LINE(13173)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13173)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13173)
			if ((tmp1)){
				HX_STACK_LINE(13173)
				break;
			}
			HX_STACK_LINE(13174)
			::zpp_nape::geom::ZPP_ToiEvent i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(13175)
			::zpp_nape::geom::ZPP_ToiEvent tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13175)
			this->add(tmp2);
			HX_STACK_LINE(13176)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur,::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","insert",0x7fc45926,"zpp_nape.util.ZNPList_ZPP_ToiEvent.insert","zpp_nape/util/Lists.hx",13180,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13181)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13181)
	{
		HX_STACK_LINE(13181)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13181)
		{
			HX_STACK_LINE(13181)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13181)
			{
				HX_STACK_LINE(13181)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13181)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13181)
				if ((tmp3)){
					HX_STACK_LINE(13181)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13181)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(13181)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13181)
					ret = tmp4;
					HX_STACK_LINE(13181)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
					HX_STACK_LINE(13181)
					ret->next = null();
				}
				HX_STACK_LINE(13181)
				Dynamic();
			}
			HX_STACK_LINE(13181)
			ret->elt = o;
			HX_STACK_LINE(13181)
			tmp1 = ret;
		}
		HX_STACK_LINE(13181)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(13181)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13181)
		if ((tmp2)){
			HX_STACK_LINE(13181)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13181)
			temp->next = tmp3;
			HX_STACK_LINE(13181)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(13181)
			temp->next = cur->next;
			HX_STACK_LINE(13181)
			cur->next = temp;
		}
		HX_STACK_LINE(13181)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13181)
		this->pushmod = tmp3;
		HX_STACK_LINE(13181)
		(this->length)++;
		HX_STACK_LINE(13181)
		tmp = temp;
	}
	HX_STACK_LINE(13181)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur,::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_insert",0x5f127f3a,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_insert","zpp_nape/util/Lists.hx",13185,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13194)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13194)
	{
		HX_STACK_LINE(13195)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13196)
		{
			HX_STACK_LINE(13197)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13197)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13197)
			if ((tmp2)){
				HX_STACK_LINE(13198)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13198)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(13204)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13204)
				ret = tmp3;
				HX_STACK_LINE(13205)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
				HX_STACK_LINE(13206)
				ret->next = null();
			}
			HX_STACK_LINE(13211)
			Dynamic();
		}
		HX_STACK_LINE(13213)
		ret->elt = o;
		HX_STACK_LINE(13214)
		tmp = ret;
	}
	HX_STACK_LINE(13194)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13216)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13216)
	if ((tmp1)){
		HX_STACK_LINE(13217)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13217)
		temp->next = tmp2;
		HX_STACK_LINE(13218)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(13221)
		temp->next = cur->next;
		HX_STACK_LINE(13222)
		cur->next = temp;
	}
	HX_STACK_LINE(13224)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13224)
	this->pushmod = tmp2;
	HX_STACK_LINE(13225)
	(this->length)++;
	HX_STACK_LINE(13226)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13226)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,inlined_insert,return )

Void ZNPList_ZPP_ToiEvent_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","pop",0xb2350184,"zpp_nape.util.ZNPList_ZPP_ToiEvent.pop","zpp_nape/util/Lists.hx",13229,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13229)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13229)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13229)
		this->head = ret->next;
		HX_STACK_LINE(13229)
		{
			HX_STACK_LINE(13229)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13229)
			o->elt = null();
			HX_STACK_LINE(13229)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13229)
			o->next = tmp1;
			HX_STACK_LINE(13229)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13229)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13229)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13229)
		if ((tmp2)){
			HX_STACK_LINE(13229)
			this->pushmod = true;
		}
		HX_STACK_LINE(13229)
		this->modified = true;
		HX_STACK_LINE(13229)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,pop,(void))

Void ZNPList_ZPP_ToiEvent_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_pop",0x1c1b06f0,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_pop","zpp_nape/util/Lists.hx",13233,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13242)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13242)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13243)
		this->head = ret->next;
		HX_STACK_LINE(13245)
		{
			HX_STACK_LINE(13246)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13255)
			o->elt = null();
			HX_STACK_LINE(13256)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13256)
			o->next = tmp1;
			HX_STACK_LINE(13257)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13262)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13262)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13262)
		if ((tmp2)){
			HX_STACK_LINE(13262)
			this->pushmod = true;
		}
		HX_STACK_LINE(13263)
		this->modified = true;
		HX_STACK_LINE(13264)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","pop_unsafe",0xb7798cc1,"zpp_nape.util.ZNPList_ZPP_ToiEvent.pop_unsafe","zpp_nape/util/Lists.hx",13266,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13267)
	::zpp_nape::geom::ZPP_ToiEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13267)
	{
		HX_STACK_LINE(13267)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13267)
		::zpp_nape::geom::ZPP_ToiEvent ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13267)
		this->pop();
		HX_STACK_LINE(13267)
		tmp = ret;
	}
	HX_STACK_LINE(13267)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_pop_unsafe",0x13d64cd5,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_pop_unsafe","zpp_nape/util/Lists.hx",13271,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13280)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13280)
	::zpp_nape::geom::ZPP_ToiEvent ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13281)
	this->pop();
	HX_STACK_LINE(13282)
	::zpp_nape::geom::ZPP_ToiEvent tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13282)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_ToiEvent_obj::remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","remove",0xe66fb231,"zpp_nape.util.ZNPList_ZPP_ToiEvent.remove","zpp_nape/util/Lists.hx",13293,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(13293)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13293)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13293)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13293)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13293)
		while((true)){
			HX_STACK_LINE(13293)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13293)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13293)
			if ((tmp2)){
				HX_STACK_LINE(13293)
				break;
			}
			HX_STACK_LINE(13293)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13293)
			if ((tmp3)){
				HX_STACK_LINE(13293)
				{
					HX_STACK_LINE(13293)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(13293)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(13293)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13293)
					if ((tmp4)){
						HX_STACK_LINE(13293)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13293)
						old = tmp5;
						HX_STACK_LINE(13293)
						ret1 = old->next;
						HX_STACK_LINE(13293)
						this->head = ret1;
						HX_STACK_LINE(13293)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(13293)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(13293)
						if ((tmp7)){
							HX_STACK_LINE(13293)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(13293)
						old = pre->next;
						HX_STACK_LINE(13293)
						ret1 = old->next;
						HX_STACK_LINE(13293)
						pre->next = ret1;
						HX_STACK_LINE(13293)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13293)
						if ((tmp5)){
							HX_STACK_LINE(13293)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(13293)
					{
						HX_STACK_LINE(13293)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(13293)
						o->elt = null();
						HX_STACK_LINE(13293)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13293)
						o->next = tmp5;
						HX_STACK_LINE(13293)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
					}
					HX_STACK_LINE(13293)
					this->modified = true;
					HX_STACK_LINE(13293)
					(this->length)--;
					HX_STACK_LINE(13293)
					this->pushmod = true;
					HX_STACK_LINE(13293)
					ret1;
				}
				HX_STACK_LINE(13293)
				ret = true;
				HX_STACK_LINE(13293)
				break;
			}
			HX_STACK_LINE(13293)
			pre = cur;
			HX_STACK_LINE(13293)
			cur = cur->next;
		}
		HX_STACK_LINE(13293)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,remove,(void))

bool ZNPList_ZPP_ToiEvent_obj::try_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","try_remove",0xcea3c275,"zpp_nape.util.ZNPList_ZPP_ToiEvent.try_remove","zpp_nape/util/Lists.hx",13295,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13304)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13305)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13305)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13306)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13307)
	while((true)){
		HX_STACK_LINE(13307)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13307)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13307)
		if ((tmp2)){
			HX_STACK_LINE(13307)
			break;
		}
		HX_STACK_LINE(13308)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13308)
		if ((tmp3)){
			HX_STACK_LINE(13309)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13309)
			this->erase(tmp4);
			HX_STACK_LINE(13310)
			ret = true;
			HX_STACK_LINE(13311)
			break;
		}
		HX_STACK_LINE(13313)
		pre = cur;
		HX_STACK_LINE(13314)
		cur = cur->next;
	}
	HX_STACK_LINE(13316)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13316)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,try_remove,return )

Void ZNPList_ZPP_ToiEvent_obj::inlined_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_remove",0xc5bdd845,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_remove","zpp_nape/util/Lists.hx",13329,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(13329)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13329)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13329)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13329)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13329)
		while((true)){
			HX_STACK_LINE(13329)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13329)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13329)
			if ((tmp2)){
				HX_STACK_LINE(13329)
				break;
			}
			HX_STACK_LINE(13329)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13329)
			if ((tmp3)){
				HX_STACK_LINE(13329)
				{
					HX_STACK_LINE(13329)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(13329)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(13329)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13329)
					if ((tmp4)){
						HX_STACK_LINE(13329)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13329)
						old = tmp5;
						HX_STACK_LINE(13329)
						ret1 = old->next;
						HX_STACK_LINE(13329)
						this->head = ret1;
						HX_STACK_LINE(13329)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(13329)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(13329)
						if ((tmp7)){
							HX_STACK_LINE(13329)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(13329)
						old = pre->next;
						HX_STACK_LINE(13329)
						ret1 = old->next;
						HX_STACK_LINE(13329)
						pre->next = ret1;
						HX_STACK_LINE(13329)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13329)
						if ((tmp5)){
							HX_STACK_LINE(13329)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(13329)
					{
						HX_STACK_LINE(13329)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(13329)
						o->elt = null();
						HX_STACK_LINE(13329)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(13329)
						o->next = tmp5;
						HX_STACK_LINE(13329)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
					}
					HX_STACK_LINE(13329)
					this->modified = true;
					HX_STACK_LINE(13329)
					(this->length)--;
					HX_STACK_LINE(13329)
					this->pushmod = true;
					HX_STACK_LINE(13329)
					ret1;
				}
				HX_STACK_LINE(13329)
				ret = true;
				HX_STACK_LINE(13329)
				break;
			}
			HX_STACK_LINE(13329)
			pre = cur;
			HX_STACK_LINE(13329)
			cur = cur->next;
		}
		HX_STACK_LINE(13329)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_remove,(void))

bool ZNPList_ZPP_ToiEvent_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_try_remove",0x2b008289,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_try_remove","zpp_nape/util/Lists.hx",13333,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13342)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13343)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13343)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13344)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13345)
	while((true)){
		HX_STACK_LINE(13345)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13345)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13345)
		if ((tmp2)){
			HX_STACK_LINE(13345)
			break;
		}
		HX_STACK_LINE(13346)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13346)
		if ((tmp3)){
			HX_STACK_LINE(13347)
			{
				HX_STACK_LINE(13347)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(13347)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(13347)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(13347)
				if ((tmp4)){
					HX_STACK_LINE(13347)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(13347)
					old = tmp5;
					HX_STACK_LINE(13347)
					ret1 = old->next;
					HX_STACK_LINE(13347)
					this->head = ret1;
					HX_STACK_LINE(13347)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(13347)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(13347)
					if ((tmp7)){
						HX_STACK_LINE(13347)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(13347)
					old = pre->next;
					HX_STACK_LINE(13347)
					ret1 = old->next;
					HX_STACK_LINE(13347)
					pre->next = ret1;
					HX_STACK_LINE(13347)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(13347)
					if ((tmp5)){
						HX_STACK_LINE(13347)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(13347)
				{
					HX_STACK_LINE(13347)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(13347)
					o->elt = null();
					HX_STACK_LINE(13347)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(13347)
					o->next = tmp5;
					HX_STACK_LINE(13347)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(13347)
				this->modified = true;
				HX_STACK_LINE(13347)
				(this->length)--;
				HX_STACK_LINE(13347)
				this->pushmod = true;
				HX_STACK_LINE(13347)
				ret1;
			}
			HX_STACK_LINE(13348)
			ret = true;
			HX_STACK_LINE(13349)
			break;
		}
		HX_STACK_LINE(13351)
		pre = cur;
		HX_STACK_LINE(13352)
		cur = cur->next;
	}
	HX_STACK_LINE(13354)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13354)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","erase",0x1723af99,"zpp_nape.util.ZNPList_ZPP_ToiEvent.erase","zpp_nape/util/Lists.hx",13356,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(13357)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13357)
	{
		HX_STACK_LINE(13357)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(13357)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13357)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13357)
		if ((tmp1)){
			HX_STACK_LINE(13357)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13357)
			old = tmp2;
			HX_STACK_LINE(13357)
			ret = old->next;
			HX_STACK_LINE(13357)
			this->head = ret;
			HX_STACK_LINE(13357)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13357)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13357)
			if ((tmp4)){
				HX_STACK_LINE(13357)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(13357)
			old = pre->next;
			HX_STACK_LINE(13357)
			ret = old->next;
			HX_STACK_LINE(13357)
			pre->next = ret;
			HX_STACK_LINE(13357)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13357)
			if ((tmp2)){
				HX_STACK_LINE(13357)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(13357)
		{
			HX_STACK_LINE(13357)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13357)
			o->elt = null();
			HX_STACK_LINE(13357)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp2 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13357)
			o->next = tmp2;
			HX_STACK_LINE(13357)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13357)
		this->modified = true;
		HX_STACK_LINE(13357)
		(this->length)--;
		HX_STACK_LINE(13357)
		this->pushmod = true;
		HX_STACK_LINE(13357)
		tmp = ret;
	}
	HX_STACK_LINE(13357)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_erase",0x4aa6e805,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_erase","zpp_nape/util/Lists.hx",13361,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(13370)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(13371)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13372)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13372)
	if ((tmp)){
		HX_STACK_LINE(13373)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13373)
		old = tmp1;
		HX_STACK_LINE(13374)
		ret = old->next;
		HX_STACK_LINE(13375)
		this->head = ret;
		HX_STACK_LINE(13376)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13376)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13376)
		if ((tmp3)){
			HX_STACK_LINE(13376)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(13379)
		old = pre->next;
		HX_STACK_LINE(13380)
		ret = old->next;
		HX_STACK_LINE(13381)
		pre->next = ret;
		HX_STACK_LINE(13382)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13382)
		if ((tmp1)){
			HX_STACK_LINE(13382)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(13385)
	{
		HX_STACK_LINE(13386)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(13395)
		o->elt = null();
		HX_STACK_LINE(13396)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13396)
		o->next = tmp1;
		HX_STACK_LINE(13397)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(13402)
	this->modified = true;
	HX_STACK_LINE(13403)
	(this->length)--;
	HX_STACK_LINE(13404)
	this->pushmod = true;
	HX_STACK_LINE(13405)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13405)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","splice",0xa1859b69,"zpp_nape.util.ZNPList_ZPP_ToiEvent.splice","zpp_nape/util/Lists.hx",13407,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(13408)
	while((true)){
		HX_STACK_LINE(13408)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13408)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13408)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13408)
		if ((tmp1)){
			HX_STACK_LINE(13408)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(13408)
			tmp2 = false;
		}
		HX_STACK_LINE(13408)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13408)
		if ((tmp3)){
			HX_STACK_LINE(13408)
			break;
		}
		HX_STACK_LINE(13408)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13408)
		this->erase(tmp4);
	}
	HX_STACK_LINE(13409)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13409)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,splice,return )

Void ZNPList_ZPP_ToiEvent_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","clear",0xec623840,"zpp_nape.util.ZNPList_ZPP_ToiEvent.clear","zpp_nape/util/Lists.hx",13412,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13412)
		while((true)){
			HX_STACK_LINE(13412)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13412)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13412)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13412)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13412)
			if ((tmp3)){
				HX_STACK_LINE(13412)
				break;
			}
			HX_STACK_LINE(13412)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13412)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13412)
			this->head = ret->next;
			HX_STACK_LINE(13412)
			{
				HX_STACK_LINE(13412)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13412)
				o->elt = null();
				HX_STACK_LINE(13412)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(13412)
				o->next = tmp5;
				HX_STACK_LINE(13412)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13412)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(13412)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13412)
			if ((tmp6)){
				HX_STACK_LINE(13412)
				this->pushmod = true;
			}
			HX_STACK_LINE(13412)
			this->modified = true;
			HX_STACK_LINE(13412)
			(this->length)--;
		}
		HX_STACK_LINE(13412)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,clear,(void))

Void ZNPList_ZPP_ToiEvent_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_clear",0x1fe570ac,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_clear","zpp_nape/util/Lists.hx",13417,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13418)
		while((true)){
			HX_STACK_LINE(13418)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13418)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13418)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13418)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13418)
			if ((tmp3)){
				HX_STACK_LINE(13418)
				break;
			}
			HX_STACK_LINE(13418)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13418)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13418)
			this->head = ret->next;
			HX_STACK_LINE(13418)
			{
				HX_STACK_LINE(13418)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13418)
				o->elt = null();
				HX_STACK_LINE(13418)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(13418)
				o->next = tmp5;
				HX_STACK_LINE(13418)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13418)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(13418)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13418)
			if ((tmp6)){
				HX_STACK_LINE(13418)
				this->pushmod = true;
			}
			HX_STACK_LINE(13418)
			this->modified = true;
			HX_STACK_LINE(13418)
			(this->length)--;
		}
		HX_STACK_LINE(13419)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_clear,(void))

Void ZNPList_ZPP_ToiEvent_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","reverse",0xe3485295,"zpp_nape.util.ZNPList_ZPP_ToiEvent.reverse","zpp_nape/util/Lists.hx",13422,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13423)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13423)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13424)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13425)
		while((true)){
			HX_STACK_LINE(13425)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13425)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13425)
			if ((tmp2)){
				HX_STACK_LINE(13425)
				break;
			}
			HX_STACK_LINE(13426)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(13427)
			cur->next = pre;
			HX_STACK_LINE(13428)
			this->head = cur;
			HX_STACK_LINE(13429)
			pre = cur;
			HX_STACK_LINE(13430)
			cur = nx;
		}
		HX_STACK_LINE(13432)
		this->modified = true;
		HX_STACK_LINE(13433)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,reverse,(void))

bool ZNPList_ZPP_ToiEvent_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","empty",0x13e10140,"zpp_nape.util.ZNPList_ZPP_ToiEvent.empty","zpp_nape/util/Lists.hx",13437,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13438)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13438)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13438)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,empty,return )

int ZNPList_ZPP_ToiEvent_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","size",0x3e23716e,"zpp_nape.util.ZNPList_ZPP_ToiEvent.size","zpp_nape/util/Lists.hx",13442,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13443)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13443)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,size,return )

bool ZNPList_ZPP_ToiEvent_obj::has( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","has",0xb22ee34d,"zpp_nape.util.ZNPList_ZPP_ToiEvent.has","zpp_nape/util/Lists.hx",13445,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13446)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13446)
	{
		HX_STACK_LINE(13446)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13446)
		{
			HX_STACK_LINE(13446)
			ret = false;
			HX_STACK_LINE(13446)
			{
				HX_STACK_LINE(13446)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(13446)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(13446)
				while((true)){
					HX_STACK_LINE(13446)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(13446)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(13446)
					if ((tmp3)){
						HX_STACK_LINE(13446)
						break;
					}
					HX_STACK_LINE(13446)
					::zpp_nape::geom::ZPP_ToiEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(13446)
					{
						HX_STACK_LINE(13446)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(13446)
						if ((tmp4)){
							HX_STACK_LINE(13446)
							ret = true;
							HX_STACK_LINE(13446)
							break;
						}
					}
					HX_STACK_LINE(13446)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(13446)
		tmp = ret;
	}
	HX_STACK_LINE(13446)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,has,return )

bool ZNPList_ZPP_ToiEvent_obj::inlined_has( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","inlined_has",0x1c14e8b9,"zpp_nape.util.ZNPList_ZPP_ToiEvent.inlined_has","zpp_nape/util/Lists.hx",13450,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(13459)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13460)
	{
		HX_STACK_LINE(13461)
		ret = false;
		HX_STACK_LINE(13462)
		{
			HX_STACK_LINE(13463)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13463)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(13464)
			while((true)){
				HX_STACK_LINE(13464)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(13464)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13464)
				if ((tmp2)){
					HX_STACK_LINE(13464)
					break;
				}
				HX_STACK_LINE(13465)
				::zpp_nape::geom::ZPP_ToiEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(13466)
				{
					HX_STACK_LINE(13467)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(13467)
					if ((tmp3)){
						HX_STACK_LINE(13468)
						ret = true;
						HX_STACK_LINE(13469)
						break;
					}
				}
				HX_STACK_LINE(13472)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(13476)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13476)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_has,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","front",0xaa94df5c,"zpp_nape.util.ZNPList_ZPP_ToiEvent.front","zpp_nape/util/Lists.hx",13480,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13481)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13481)
	::zpp_nape::geom::ZPP_ToiEvent tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13481)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,front,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","back",0x32e0aad4,"zpp_nape.util.ZNPList_ZPP_ToiEvent.back","zpp_nape/util/Lists.hx",13483,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13484)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13484)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13485)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13486)
	while((true)){
		HX_STACK_LINE(13486)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13486)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13486)
		if ((tmp2)){
			HX_STACK_LINE(13486)
			break;
		}
		HX_STACK_LINE(13487)
		ret = cur;
		HX_STACK_LINE(13488)
		cur = cur->next;
	}
	HX_STACK_LINE(13490)
	::zpp_nape::geom::ZPP_ToiEvent tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13490)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","iterator_at",0x20b3d8d7,"zpp_nape.util.ZNPList_ZPP_ToiEvent.iterator_at","zpp_nape/util/Lists.hx",13492,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(13501)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13501)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13502)
	while((true)){
		HX_STACK_LINE(13502)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13502)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13502)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13502)
		if ((tmp2)){
			HX_STACK_LINE(13502)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(13502)
			tmp3 = false;
		}
		HX_STACK_LINE(13502)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13502)
		if ((tmp4)){
			HX_STACK_LINE(13502)
			break;
		}
		HX_STACK_LINE(13502)
		ret = ret->next;
	}
	HX_STACK_LINE(13503)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13503)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,iterator_at,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_ToiEvent","at",0xb070b060,"zpp_nape.util.ZNPList_ZPP_ToiEvent.at","zpp_nape/util/Lists.hx",13505,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(13514)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13514)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13514)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(13515)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13515)
	::zpp_nape::geom::ZPP_ToiEvent tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13515)
	if ((tmp2)){
		HX_STACK_LINE(13515)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(13515)
		tmp3 = null();
	}
	HX_STACK_LINE(13515)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,at,return )


ZNPList_ZPP_ToiEvent_obj::ZNPList_ZPP_ToiEvent_obj()
{
}

void ZNPList_ZPP_ToiEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ToiEvent);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ToiEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_ToiEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_ToiEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ToiEvent >(); return inValue; }
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

bool ZNPList_ZPP_ToiEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_ToiEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ToiEvent*/ ,(int)offsetof(ZNPList_ZPP_ToiEvent_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ToiEvent_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_ToiEvent_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_ToiEvent_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ToiEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ToiEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_ToiEvent_obj::__mClass;

void ZNPList_ZPP_ToiEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_ToiEvent","\xe1","\x4e","\x10","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_ToiEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_ToiEvent_obj >;
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
