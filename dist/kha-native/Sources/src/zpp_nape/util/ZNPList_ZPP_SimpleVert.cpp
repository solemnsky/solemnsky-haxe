#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert
#include <zpp_nape/util/ZNPList_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimpleVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","new",0xb5465a6a,"zpp_nape.util.ZNPList_ZPP_SimpleVert.new","zpp_nape/util/Lists.hx",8098,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8108)
	this->length = (int)0;
	HX_STACK_LINE(8107)
	this->pushmod = false;
	HX_STACK_LINE(8106)
	this->modified = false;
	HX_STACK_LINE(8099)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_SimpleVert_obj::~ZNPList_ZPP_SimpleVert_obj() { }

Dynamic ZNPList_ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > ZNPList_ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > _result_ = new ZNPList_ZPP_SimpleVert_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > _result_ = new ZNPList_ZPP_SimpleVert_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","begin",0x6e868ab3,"zpp_nape.util.ZNPList_ZPP_SimpleVert.begin","zpp_nape/util/Lists.hx",8103,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8104)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8104)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,begin,return )

Void ZNPList_ZPP_SimpleVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","setbegin",0x8887b4fd,"zpp_nape.util.ZNPList_ZPP_SimpleVert.setbegin","zpp_nape/util/Lists.hx",8111,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(8112)
		this->head = i;
		HX_STACK_LINE(8113)
		this->modified = true;
		HX_STACK_LINE(8114)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,setbegin,(void))

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::add( ::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","add",0xb53c7c2b,"zpp_nape.util.ZNPList_ZPP_SimpleVert.add","zpp_nape/util/Lists.hx",8116,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8117)
	::zpp_nape::geom::ZPP_SimpleVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8117)
	{
		HX_STACK_LINE(8117)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8117)
		{
			HX_STACK_LINE(8117)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8117)
			{
				HX_STACK_LINE(8117)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(8117)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8117)
				if ((tmp3)){
					HX_STACK_LINE(8117)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8117)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(8117)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8117)
					ret = tmp4;
					HX_STACK_LINE(8117)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(8117)
					ret->next = null();
				}
				HX_STACK_LINE(8117)
				Dynamic();
			}
			HX_STACK_LINE(8117)
			ret->elt = o;
			HX_STACK_LINE(8117)
			tmp1 = ret;
		}
		HX_STACK_LINE(8117)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(8117)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8117)
		temp->next = tmp2;
		HX_STACK_LINE(8117)
		this->head = temp;
		HX_STACK_LINE(8117)
		this->modified = true;
		HX_STACK_LINE(8117)
		(this->length)++;
		HX_STACK_LINE(8117)
		tmp = o;
	}
	HX_STACK_LINE(8117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,add,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_add( ::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_add",0x5928f097,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_add","zpp_nape/util/Lists.hx",8121,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8130)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8130)
	{
		HX_STACK_LINE(8131)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8132)
		{
			HX_STACK_LINE(8133)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8133)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8133)
			if ((tmp2)){
				HX_STACK_LINE(8134)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8134)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(8140)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8140)
				ret = tmp3;
				HX_STACK_LINE(8141)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8142)
				ret->next = null();
			}
			HX_STACK_LINE(8147)
			Dynamic();
		}
		HX_STACK_LINE(8149)
		ret->elt = o;
		HX_STACK_LINE(8150)
		tmp = ret;
	}
	HX_STACK_LINE(8130)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8152)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8152)
	temp->next = tmp1;
	HX_STACK_LINE(8153)
	this->head = temp;
	HX_STACK_LINE(8154)
	this->modified = true;
	HX_STACK_LINE(8155)
	(this->length)++;
	HX_STACK_LINE(8156)
	::zpp_nape::geom::ZPP_SimpleVert tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8156)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_add,return )

Void ZNPList_ZPP_SimpleVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimpleVert x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","addAll",0x4b56e1b6,"zpp_nape.util.ZNPList_ZPP_SimpleVert.addAll","zpp_nape/util/Lists.hx",8167,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(8168)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(8169)
		while((true)){
			HX_STACK_LINE(8169)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8169)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8169)
			if ((tmp1)){
				HX_STACK_LINE(8169)
				break;
			}
			HX_STACK_LINE(8170)
			::zpp_nape::geom::ZPP_SimpleVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(8171)
			::zpp_nape::geom::ZPP_SimpleVert tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8171)
			this->add(tmp2);
			HX_STACK_LINE(8172)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur,::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","insert",0x4a391b6f,"zpp_nape.util.ZNPList_ZPP_SimpleVert.insert","zpp_nape/util/Lists.hx",8176,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8177)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8177)
	{
		HX_STACK_LINE(8177)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8177)
		{
			HX_STACK_LINE(8177)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8177)
			{
				HX_STACK_LINE(8177)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(8177)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8177)
				if ((tmp3)){
					HX_STACK_LINE(8177)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8177)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(8177)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8177)
					ret = tmp4;
					HX_STACK_LINE(8177)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(8177)
					ret->next = null();
				}
				HX_STACK_LINE(8177)
				Dynamic();
			}
			HX_STACK_LINE(8177)
			ret->elt = o;
			HX_STACK_LINE(8177)
			tmp1 = ret;
		}
		HX_STACK_LINE(8177)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(8177)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8177)
		if ((tmp2)){
			HX_STACK_LINE(8177)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8177)
			temp->next = tmp3;
			HX_STACK_LINE(8177)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(8177)
			temp->next = cur->next;
			HX_STACK_LINE(8177)
			cur->next = temp;
		}
		HX_STACK_LINE(8177)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8177)
		this->pushmod = tmp3;
		HX_STACK_LINE(8177)
		(this->length)++;
		HX_STACK_LINE(8177)
		tmp = temp;
	}
	HX_STACK_LINE(8177)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur,::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_insert",0xd5f03283,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_insert","zpp_nape/util/Lists.hx",8181,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8190)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8190)
	{
		HX_STACK_LINE(8191)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8192)
		{
			HX_STACK_LINE(8193)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8193)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8193)
			if ((tmp2)){
				HX_STACK_LINE(8194)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8194)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(8200)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8200)
				ret = tmp3;
				HX_STACK_LINE(8201)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8202)
				ret->next = null();
			}
			HX_STACK_LINE(8207)
			Dynamic();
		}
		HX_STACK_LINE(8209)
		ret->elt = o;
		HX_STACK_LINE(8210)
		tmp = ret;
	}
	HX_STACK_LINE(8190)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8212)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8212)
	if ((tmp1)){
		HX_STACK_LINE(8213)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8213)
		temp->next = tmp2;
		HX_STACK_LINE(8214)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(8217)
		temp->next = cur->next;
		HX_STACK_LINE(8218)
		cur->next = temp;
	}
	HX_STACK_LINE(8220)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8220)
	this->pushmod = tmp2;
	HX_STACK_LINE(8221)
	(this->length)++;
	HX_STACK_LINE(8222)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(8222)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,inlined_insert,return )

Void ZNPList_ZPP_SimpleVert_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","pop",0xb547e79b,"zpp_nape.util.ZNPList_ZPP_SimpleVert.pop","zpp_nape/util/Lists.hx",8225,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8225)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8225)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8225)
		this->head = ret->next;
		HX_STACK_LINE(8225)
		{
			HX_STACK_LINE(8225)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8225)
			o->elt = null();
			HX_STACK_LINE(8225)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8225)
			o->next = tmp1;
			HX_STACK_LINE(8225)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8225)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8225)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8225)
		if ((tmp2)){
			HX_STACK_LINE(8225)
			this->pushmod = true;
		}
		HX_STACK_LINE(8225)
		this->modified = true;
		HX_STACK_LINE(8225)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,pop,(void))

Void ZNPList_ZPP_SimpleVert_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_pop",0x59345c07,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_pop","zpp_nape/util/Lists.hx",8229,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8238)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8238)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8239)
		this->head = ret->next;
		HX_STACK_LINE(8241)
		{
			HX_STACK_LINE(8242)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8251)
			o->elt = null();
			HX_STACK_LINE(8252)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8252)
			o->next = tmp1;
			HX_STACK_LINE(8253)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8258)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8258)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8258)
		if ((tmp2)){
			HX_STACK_LINE(8258)
			this->pushmod = true;
		}
		HX_STACK_LINE(8259)
		this->modified = true;
		HX_STACK_LINE(8260)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","pop_unsafe",0x90b7a78a,"zpp_nape.util.ZNPList_ZPP_SimpleVert.pop_unsafe","zpp_nape/util/Lists.hx",8262,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8263)
	::zpp_nape::geom::ZPP_SimpleVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8263)
	{
		HX_STACK_LINE(8263)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8263)
		::zpp_nape::geom::ZPP_SimpleVert ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8263)
		this->pop();
		HX_STACK_LINE(8263)
		tmp = ret;
	}
	HX_STACK_LINE(8263)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_pop_unsafe",0x7f49d89e,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_pop_unsafe","zpp_nape/util/Lists.hx",8267,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8276)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8276)
	::zpp_nape::geom::ZPP_SimpleVert ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8277)
	this->pop();
	HX_STACK_LINE(8278)
	::zpp_nape::geom::ZPP_SimpleVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8278)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_SimpleVert_obj::remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","remove",0xb0e4747a,"zpp_nape.util.ZNPList_ZPP_SimpleVert.remove","zpp_nape/util/Lists.hx",8289,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(8289)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8289)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8289)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8289)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8289)
		while((true)){
			HX_STACK_LINE(8289)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8289)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8289)
			if ((tmp2)){
				HX_STACK_LINE(8289)
				break;
			}
			HX_STACK_LINE(8289)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8289)
			if ((tmp3)){
				HX_STACK_LINE(8289)
				{
					HX_STACK_LINE(8289)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(8289)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(8289)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8289)
					if ((tmp4)){
						HX_STACK_LINE(8289)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8289)
						old = tmp5;
						HX_STACK_LINE(8289)
						ret1 = old->next;
						HX_STACK_LINE(8289)
						this->head = ret1;
						HX_STACK_LINE(8289)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(8289)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(8289)
						if ((tmp7)){
							HX_STACK_LINE(8289)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(8289)
						old = pre->next;
						HX_STACK_LINE(8289)
						ret1 = old->next;
						HX_STACK_LINE(8289)
						pre->next = ret1;
						HX_STACK_LINE(8289)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8289)
						if ((tmp5)){
							HX_STACK_LINE(8289)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(8289)
					{
						HX_STACK_LINE(8289)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(8289)
						o->elt = null();
						HX_STACK_LINE(8289)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8289)
						o->next = tmp5;
						HX_STACK_LINE(8289)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(8289)
					this->modified = true;
					HX_STACK_LINE(8289)
					(this->length)--;
					HX_STACK_LINE(8289)
					this->pushmod = true;
					HX_STACK_LINE(8289)
					ret1;
				}
				HX_STACK_LINE(8289)
				ret = true;
				HX_STACK_LINE(8289)
				break;
			}
			HX_STACK_LINE(8289)
			pre = cur;
			HX_STACK_LINE(8289)
			cur = cur->next;
		}
		HX_STACK_LINE(8289)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,remove,(void))

bool ZNPList_ZPP_SimpleVert_obj::try_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","try_remove",0xa7e1dd3e,"zpp_nape.util.ZNPList_ZPP_SimpleVert.try_remove","zpp_nape/util/Lists.hx",8291,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8300)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8301)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8301)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8302)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8303)
	while((true)){
		HX_STACK_LINE(8303)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8303)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8303)
		if ((tmp2)){
			HX_STACK_LINE(8303)
			break;
		}
		HX_STACK_LINE(8304)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8304)
		if ((tmp3)){
			HX_STACK_LINE(8305)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8305)
			this->erase(tmp4);
			HX_STACK_LINE(8306)
			ret = true;
			HX_STACK_LINE(8307)
			break;
		}
		HX_STACK_LINE(8309)
		pre = cur;
		HX_STACK_LINE(8310)
		cur = cur->next;
	}
	HX_STACK_LINE(8312)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8312)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,try_remove,return )

Void ZNPList_ZPP_SimpleVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_remove",0x3c9b8b8e,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_remove","zpp_nape/util/Lists.hx",8325,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(8325)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8325)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8325)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8325)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8325)
		while((true)){
			HX_STACK_LINE(8325)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8325)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8325)
			if ((tmp2)){
				HX_STACK_LINE(8325)
				break;
			}
			HX_STACK_LINE(8325)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8325)
			if ((tmp3)){
				HX_STACK_LINE(8325)
				{
					HX_STACK_LINE(8325)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(8325)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(8325)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8325)
					if ((tmp4)){
						HX_STACK_LINE(8325)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8325)
						old = tmp5;
						HX_STACK_LINE(8325)
						ret1 = old->next;
						HX_STACK_LINE(8325)
						this->head = ret1;
						HX_STACK_LINE(8325)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(8325)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(8325)
						if ((tmp7)){
							HX_STACK_LINE(8325)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(8325)
						old = pre->next;
						HX_STACK_LINE(8325)
						ret1 = old->next;
						HX_STACK_LINE(8325)
						pre->next = ret1;
						HX_STACK_LINE(8325)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8325)
						if ((tmp5)){
							HX_STACK_LINE(8325)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(8325)
					{
						HX_STACK_LINE(8325)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(8325)
						o->elt = null();
						HX_STACK_LINE(8325)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8325)
						o->next = tmp5;
						HX_STACK_LINE(8325)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(8325)
					this->modified = true;
					HX_STACK_LINE(8325)
					(this->length)--;
					HX_STACK_LINE(8325)
					this->pushmod = true;
					HX_STACK_LINE(8325)
					ret1;
				}
				HX_STACK_LINE(8325)
				ret = true;
				HX_STACK_LINE(8325)
				break;
			}
			HX_STACK_LINE(8325)
			pre = cur;
			HX_STACK_LINE(8325)
			cur = cur->next;
		}
		HX_STACK_LINE(8325)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimpleVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_try_remove",0x96740e52,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_try_remove","zpp_nape/util/Lists.hx",8329,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8338)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8339)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8339)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8340)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8341)
	while((true)){
		HX_STACK_LINE(8341)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8341)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8341)
		if ((tmp2)){
			HX_STACK_LINE(8341)
			break;
		}
		HX_STACK_LINE(8342)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8342)
		if ((tmp3)){
			HX_STACK_LINE(8343)
			{
				HX_STACK_LINE(8343)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8343)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(8343)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(8343)
				if ((tmp4)){
					HX_STACK_LINE(8343)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(8343)
					old = tmp5;
					HX_STACK_LINE(8343)
					ret1 = old->next;
					HX_STACK_LINE(8343)
					this->head = ret1;
					HX_STACK_LINE(8343)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(8343)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(8343)
					if ((tmp7)){
						HX_STACK_LINE(8343)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8343)
					old = pre->next;
					HX_STACK_LINE(8343)
					ret1 = old->next;
					HX_STACK_LINE(8343)
					pre->next = ret1;
					HX_STACK_LINE(8343)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(8343)
					if ((tmp5)){
						HX_STACK_LINE(8343)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(8343)
				{
					HX_STACK_LINE(8343)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8343)
					o->elt = null();
					HX_STACK_LINE(8343)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(8343)
					o->next = tmp5;
					HX_STACK_LINE(8343)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8343)
				this->modified = true;
				HX_STACK_LINE(8343)
				(this->length)--;
				HX_STACK_LINE(8343)
				this->pushmod = true;
				HX_STACK_LINE(8343)
				ret1;
			}
			HX_STACK_LINE(8344)
			ret = true;
			HX_STACK_LINE(8345)
			break;
		}
		HX_STACK_LINE(8347)
		pre = cur;
		HX_STACK_LINE(8348)
		cur = cur->next;
	}
	HX_STACK_LINE(8350)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8350)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","erase",0x314d8970,"zpp_nape.util.ZNPList_ZPP_SimpleVert.erase","zpp_nape/util/Lists.hx",8352,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(8353)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8353)
	{
		HX_STACK_LINE(8353)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(8353)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8353)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8353)
		if ((tmp1)){
			HX_STACK_LINE(8353)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8353)
			old = tmp2;
			HX_STACK_LINE(8353)
			ret = old->next;
			HX_STACK_LINE(8353)
			this->head = ret;
			HX_STACK_LINE(8353)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8353)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8353)
			if ((tmp4)){
				HX_STACK_LINE(8353)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(8353)
			old = pre->next;
			HX_STACK_LINE(8353)
			ret = old->next;
			HX_STACK_LINE(8353)
			pre->next = ret;
			HX_STACK_LINE(8353)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8353)
			if ((tmp2)){
				HX_STACK_LINE(8353)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(8353)
		{
			HX_STACK_LINE(8353)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8353)
			o->elt = null();
			HX_STACK_LINE(8353)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8353)
			o->next = tmp2;
			HX_STACK_LINE(8353)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8353)
		this->modified = true;
		HX_STACK_LINE(8353)
		(this->length)--;
		HX_STACK_LINE(8353)
		this->pushmod = true;
		HX_STACK_LINE(8353)
		tmp = ret;
	}
	HX_STACK_LINE(8353)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_erase",0x0090f0dc,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_erase","zpp_nape/util/Lists.hx",8357,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(8366)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(8367)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8368)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8368)
	if ((tmp)){
		HX_STACK_LINE(8369)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8369)
		old = tmp1;
		HX_STACK_LINE(8370)
		ret = old->next;
		HX_STACK_LINE(8371)
		this->head = ret;
		HX_STACK_LINE(8372)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8372)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8372)
		if ((tmp3)){
			HX_STACK_LINE(8372)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(8375)
		old = pre->next;
		HX_STACK_LINE(8376)
		ret = old->next;
		HX_STACK_LINE(8377)
		pre->next = ret;
		HX_STACK_LINE(8378)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8378)
		if ((tmp1)){
			HX_STACK_LINE(8378)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(8381)
	{
		HX_STACK_LINE(8382)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(8391)
		o->elt = null();
		HX_STACK_LINE(8392)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8392)
		o->next = tmp1;
		HX_STACK_LINE(8393)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(8398)
	this->modified = true;
	HX_STACK_LINE(8399)
	(this->length)--;
	HX_STACK_LINE(8400)
	this->pushmod = true;
	HX_STACK_LINE(8401)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8401)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","splice",0x6bfa5db2,"zpp_nape.util.ZNPList_ZPP_SimpleVert.splice","zpp_nape/util/Lists.hx",8403,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(8404)
	while((true)){
		HX_STACK_LINE(8404)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8404)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8404)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8404)
		if ((tmp1)){
			HX_STACK_LINE(8404)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(8404)
			tmp2 = false;
		}
		HX_STACK_LINE(8404)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8404)
		if ((tmp3)){
			HX_STACK_LINE(8404)
			break;
		}
		HX_STACK_LINE(8404)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(8404)
		this->erase(tmp4);
	}
	HX_STACK_LINE(8405)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8405)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,splice,return )

Void ZNPList_ZPP_SimpleVert_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","clear",0x068c1217,"zpp_nape.util.ZNPList_ZPP_SimpleVert.clear","zpp_nape/util/Lists.hx",8408,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8408)
		while((true)){
			HX_STACK_LINE(8408)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8408)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8408)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8408)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8408)
			if ((tmp3)){
				HX_STACK_LINE(8408)
				break;
			}
			HX_STACK_LINE(8408)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8408)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8408)
			this->head = ret->next;
			HX_STACK_LINE(8408)
			{
				HX_STACK_LINE(8408)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8408)
				o->elt = null();
				HX_STACK_LINE(8408)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(8408)
				o->next = tmp5;
				HX_STACK_LINE(8408)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8408)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(8408)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(8408)
			if ((tmp6)){
				HX_STACK_LINE(8408)
				this->pushmod = true;
			}
			HX_STACK_LINE(8408)
			this->modified = true;
			HX_STACK_LINE(8408)
			(this->length)--;
		}
		HX_STACK_LINE(8408)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,clear,(void))

Void ZNPList_ZPP_SimpleVert_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_clear",0xd5cf7983,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_clear","zpp_nape/util/Lists.hx",8413,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8414)
		while((true)){
			HX_STACK_LINE(8414)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8414)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8414)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8414)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8414)
			if ((tmp3)){
				HX_STACK_LINE(8414)
				break;
			}
			HX_STACK_LINE(8414)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8414)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8414)
			this->head = ret->next;
			HX_STACK_LINE(8414)
			{
				HX_STACK_LINE(8414)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8414)
				o->elt = null();
				HX_STACK_LINE(8414)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(8414)
				o->next = tmp5;
				HX_STACK_LINE(8414)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8414)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(8414)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(8414)
			if ((tmp6)){
				HX_STACK_LINE(8414)
				this->pushmod = true;
			}
			HX_STACK_LINE(8414)
			this->modified = true;
			HX_STACK_LINE(8414)
			(this->length)--;
		}
		HX_STACK_LINE(8415)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimpleVert_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","reverse",0x3efd902c,"zpp_nape.util.ZNPList_ZPP_SimpleVert.reverse","zpp_nape/util/Lists.hx",8418,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8419)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8419)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8420)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8421)
		while((true)){
			HX_STACK_LINE(8421)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8421)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8421)
			if ((tmp2)){
				HX_STACK_LINE(8421)
				break;
			}
			HX_STACK_LINE(8422)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8423)
			cur->next = pre;
			HX_STACK_LINE(8424)
			this->head = cur;
			HX_STACK_LINE(8425)
			pre = cur;
			HX_STACK_LINE(8426)
			cur = nx;
		}
		HX_STACK_LINE(8428)
		this->modified = true;
		HX_STACK_LINE(8429)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,reverse,(void))

bool ZNPList_ZPP_SimpleVert_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","empty",0x2e0adb17,"zpp_nape.util.ZNPList_ZPP_SimpleVert.empty","zpp_nape/util/Lists.hx",8433,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8434)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8434)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8434)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,empty,return )

int ZNPList_ZPP_SimpleVert_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","size",0xeb99df77,"zpp_nape.util.ZNPList_ZPP_SimpleVert.size","zpp_nape/util/Lists.hx",8438,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8439)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8439)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,size,return )

bool ZNPList_ZPP_SimpleVert_obj::has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","has",0xb541c964,"zpp_nape.util.ZNPList_ZPP_SimpleVert.has","zpp_nape/util/Lists.hx",8441,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8442)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8442)
	{
		HX_STACK_LINE(8442)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8442)
		{
			HX_STACK_LINE(8442)
			ret = false;
			HX_STACK_LINE(8442)
			{
				HX_STACK_LINE(8442)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(8442)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(8442)
				while((true)){
					HX_STACK_LINE(8442)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(8442)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(8442)
					if ((tmp3)){
						HX_STACK_LINE(8442)
						break;
					}
					HX_STACK_LINE(8442)
					::zpp_nape::geom::ZPP_SimpleVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(8442)
					{
						HX_STACK_LINE(8442)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(8442)
						if ((tmp4)){
							HX_STACK_LINE(8442)
							ret = true;
							HX_STACK_LINE(8442)
							break;
						}
					}
					HX_STACK_LINE(8442)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(8442)
		tmp = ret;
	}
	HX_STACK_LINE(8442)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,has,return )

bool ZNPList_ZPP_SimpleVert_obj::inlined_has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","inlined_has",0x592e3dd0,"zpp_nape.util.ZNPList_ZPP_SimpleVert.inlined_has","zpp_nape/util/Lists.hx",8446,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8455)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8456)
	{
		HX_STACK_LINE(8457)
		ret = false;
		HX_STACK_LINE(8458)
		{
			HX_STACK_LINE(8459)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8459)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8460)
			while((true)){
				HX_STACK_LINE(8460)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(8460)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(8460)
				if ((tmp2)){
					HX_STACK_LINE(8460)
					break;
				}
				HX_STACK_LINE(8461)
				::zpp_nape::geom::ZPP_SimpleVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8462)
				{
					HX_STACK_LINE(8463)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(8463)
					if ((tmp3)){
						HX_STACK_LINE(8464)
						ret = true;
						HX_STACK_LINE(8465)
						break;
					}
				}
				HX_STACK_LINE(8468)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8472)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8472)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_has,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","front",0xc4beb933,"zpp_nape.util.ZNPList_ZPP_SimpleVert.front","zpp_nape/util/Lists.hx",8476,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8477)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8477)
	::zpp_nape::geom::ZPP_SimpleVert tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8477)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,front,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","back",0xe05718dd,"zpp_nape.util.ZNPList_ZPP_SimpleVert.back","zpp_nape/util/Lists.hx",8479,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8480)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8480)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8481)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8482)
	while((true)){
		HX_STACK_LINE(8482)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8482)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8482)
		if ((tmp2)){
			HX_STACK_LINE(8482)
			break;
		}
		HX_STACK_LINE(8483)
		ret = cur;
		HX_STACK_LINE(8484)
		cur = cur->next;
	}
	HX_STACK_LINE(8486)
	::zpp_nape::geom::ZPP_SimpleVert tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8486)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","iterator_at",0x5dcd2dee,"zpp_nape.util.ZNPList_ZPP_SimpleVert.iterator_at","zpp_nape/util/Lists.hx",8488,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8497)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8497)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8498)
	while((true)){
		HX_STACK_LINE(8498)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8498)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8498)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8498)
		if ((tmp2)){
			HX_STACK_LINE(8498)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(8498)
			tmp3 = false;
		}
		HX_STACK_LINE(8498)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(8498)
		if ((tmp4)){
			HX_STACK_LINE(8498)
			break;
		}
		HX_STACK_LINE(8498)
		ret = ret->next;
	}
	HX_STACK_LINE(8499)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8499)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleVert","at",0xc2d25a29,"zpp_nape.util.ZNPList_ZPP_SimpleVert.at","zpp_nape/util/Lists.hx",8501,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8510)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8510)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8510)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8511)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8511)
	::zpp_nape::geom::ZPP_SimpleVert tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(8511)
	if ((tmp2)){
		HX_STACK_LINE(8511)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(8511)
		tmp3 = null();
	}
	HX_STACK_LINE(8511)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,at,return )


ZNPList_ZPP_SimpleVert_obj::ZNPList_ZPP_SimpleVert_obj()
{
}

void ZNPList_ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_SimpleVert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimpleVert >(); return inValue; }
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

bool ZNPList_ZPP_SimpleVert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SimpleVert*/ ,(int)offsetof(ZNPList_ZPP_SimpleVert_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SimpleVert_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SimpleVert_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_SimpleVert_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimpleVert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimpleVert_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_SimpleVert_obj::__mClass;

void ZNPList_ZPP_SimpleVert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_SimpleVert","\x78","\x9d","\x62","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_SimpleVert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_SimpleVert_obj >;
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
