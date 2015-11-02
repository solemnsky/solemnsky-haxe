#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_InteractionGroup_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","new",0x154a7934,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.new","zpp_nape/util/Lists.hx",11017,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11027)
	this->length = (int)0;
	HX_STACK_LINE(11026)
	this->pushmod = false;
	HX_STACK_LINE(11025)
	this->modified = false;
	HX_STACK_LINE(11018)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_InteractionGroup_obj::~ZNPList_ZPP_InteractionGroup_obj() { }

Dynamic ZNPList_ZPP_InteractionGroup_obj::__CreateEmpty() { return  new ZNPList_ZPP_InteractionGroup_obj; }
hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > ZNPList_ZPP_InteractionGroup_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > _result_ = new ZNPList_ZPP_InteractionGroup_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_InteractionGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > _result_ = new ZNPList_ZPP_InteractionGroup_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","begin",0xeee76ffd,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.begin","zpp_nape/util/Lists.hx",11022,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11023)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11023)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,begin,return )

Void ZNPList_ZPP_InteractionGroup_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","setbegin",0x12edb9f3,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.setbegin","zpp_nape/util/Lists.hx",11030,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(11031)
		this->head = i;
		HX_STACK_LINE(11032)
		this->modified = true;
		HX_STACK_LINE(11033)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::add( ::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","add",0x15409af5,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.add","zpp_nape/util/Lists.hx",11035,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11036)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11036)
	{
		HX_STACK_LINE(11036)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11036)
		{
			HX_STACK_LINE(11036)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11036)
			{
				HX_STACK_LINE(11036)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(11036)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11036)
				if ((tmp3)){
					HX_STACK_LINE(11036)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11036)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(11036)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11036)
					ret = tmp4;
					HX_STACK_LINE(11036)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
					HX_STACK_LINE(11036)
					ret->next = null();
				}
				HX_STACK_LINE(11036)
				Dynamic();
			}
			HX_STACK_LINE(11036)
			ret->elt = o;
			HX_STACK_LINE(11036)
			tmp1 = ret;
		}
		HX_STACK_LINE(11036)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(11036)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11036)
		temp->next = tmp2;
		HX_STACK_LINE(11036)
		this->head = temp;
		HX_STACK_LINE(11036)
		this->modified = true;
		HX_STACK_LINE(11036)
		(this->length)++;
		HX_STACK_LINE(11036)
		tmp = o;
	}
	HX_STACK_LINE(11036)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,add,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_add( ::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_add",0x19f7e961,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_add","zpp_nape/util/Lists.hx",11040,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11049)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11049)
	{
		HX_STACK_LINE(11050)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11051)
		{
			HX_STACK_LINE(11052)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11052)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11052)
			if ((tmp2)){
				HX_STACK_LINE(11053)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11053)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(11059)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11059)
				ret = tmp3;
				HX_STACK_LINE(11060)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11061)
				ret->next = null();
			}
			HX_STACK_LINE(11066)
			Dynamic();
		}
		HX_STACK_LINE(11068)
		ret->elt = o;
		HX_STACK_LINE(11069)
		tmp = ret;
	}
	HX_STACK_LINE(11049)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11071)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11071)
	temp->next = tmp1;
	HX_STACK_LINE(11072)
	this->head = temp;
	HX_STACK_LINE(11073)
	this->modified = true;
	HX_STACK_LINE(11074)
	(this->length)++;
	HX_STACK_LINE(11075)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11075)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_add,return )

Void ZNPList_ZPP_InteractionGroup_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_InteractionGroup x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","addAll",0x1fbe9d2c,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.addAll","zpp_nape/util/Lists.hx",11086,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(11087)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(11088)
		while((true)){
			HX_STACK_LINE(11088)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11088)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11088)
			if ((tmp1)){
				HX_STACK_LINE(11088)
				break;
			}
			HX_STACK_LINE(11089)
			::zpp_nape::dynamics::ZPP_InteractionGroup i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(11090)
			::zpp_nape::dynamics::ZPP_InteractionGroup tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11090)
			this->add(tmp2);
			HX_STACK_LINE(11091)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur,::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","insert",0x1ea0d6e5,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.insert","zpp_nape/util/Lists.hx",11095,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11096)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11096)
	{
		HX_STACK_LINE(11096)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11096)
		{
			HX_STACK_LINE(11096)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11096)
			{
				HX_STACK_LINE(11096)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(11096)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11096)
				if ((tmp3)){
					HX_STACK_LINE(11096)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11096)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(11096)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11096)
					ret = tmp4;
					HX_STACK_LINE(11096)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
					HX_STACK_LINE(11096)
					ret->next = null();
				}
				HX_STACK_LINE(11096)
				Dynamic();
			}
			HX_STACK_LINE(11096)
			ret->elt = o;
			HX_STACK_LINE(11096)
			tmp1 = ret;
		}
		HX_STACK_LINE(11096)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(11096)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11096)
		if ((tmp2)){
			HX_STACK_LINE(11096)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11096)
			temp->next = tmp3;
			HX_STACK_LINE(11096)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(11096)
			temp->next = cur->next;
			HX_STACK_LINE(11096)
			cur->next = temp;
		}
		HX_STACK_LINE(11096)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11096)
		this->pushmod = tmp3;
		HX_STACK_LINE(11096)
		(this->length)++;
		HX_STACK_LINE(11096)
		tmp = temp;
	}
	HX_STACK_LINE(11096)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur,::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_insert",0x7c5153f9,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_insert","zpp_nape/util/Lists.hx",11100,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11109)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11109)
	{
		HX_STACK_LINE(11110)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11111)
		{
			HX_STACK_LINE(11112)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11112)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11112)
			if ((tmp2)){
				HX_STACK_LINE(11113)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11113)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(11119)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(11119)
				ret = tmp3;
				HX_STACK_LINE(11120)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11121)
				ret->next = null();
			}
			HX_STACK_LINE(11126)
			Dynamic();
		}
		HX_STACK_LINE(11128)
		ret->elt = o;
		HX_STACK_LINE(11129)
		tmp = ret;
	}
	HX_STACK_LINE(11109)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11131)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11131)
	if ((tmp1)){
		HX_STACK_LINE(11132)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11132)
		temp->next = tmp2;
		HX_STACK_LINE(11133)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11136)
		temp->next = cur->next;
		HX_STACK_LINE(11137)
		cur->next = temp;
	}
	HX_STACK_LINE(11139)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11139)
	this->pushmod = tmp2;
	HX_STACK_LINE(11140)
	(this->length)++;
	HX_STACK_LINE(11141)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(11141)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,inlined_insert,return )

Void ZNPList_ZPP_InteractionGroup_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","pop",0x154c0665,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.pop","zpp_nape/util/Lists.hx",11144,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11144)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11144)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11144)
		this->head = ret->next;
		HX_STACK_LINE(11144)
		{
			HX_STACK_LINE(11144)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11144)
			o->elt = null();
			HX_STACK_LINE(11144)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11144)
			o->next = tmp1;
			HX_STACK_LINE(11144)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11144)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11144)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11144)
		if ((tmp2)){
			HX_STACK_LINE(11144)
			this->pushmod = true;
		}
		HX_STACK_LINE(11144)
		this->modified = true;
		HX_STACK_LINE(11144)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,pop,(void))

Void ZNPList_ZPP_InteractionGroup_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_pop",0x1a0354d1,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_pop","zpp_nape/util/Lists.hx",11148,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11157)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11157)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11158)
		this->head = ret->next;
		HX_STACK_LINE(11160)
		{
			HX_STACK_LINE(11161)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11170)
			o->elt = null();
			HX_STACK_LINE(11171)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11171)
			o->next = tmp1;
			HX_STACK_LINE(11172)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11177)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11177)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11177)
		if ((tmp2)){
			HX_STACK_LINE(11177)
			this->pushmod = true;
		}
		HX_STACK_LINE(11178)
		this->modified = true;
		HX_STACK_LINE(11179)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","pop_unsafe",0x04615600,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.pop_unsafe","zpp_nape/util/Lists.hx",11181,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11182)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11182)
	{
		HX_STACK_LINE(11182)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11182)
		::zpp_nape::dynamics::ZPP_InteractionGroup ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11182)
		this->pop();
		HX_STACK_LINE(11182)
		tmp = ret;
	}
	HX_STACK_LINE(11182)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_pop_unsafe",0x9497ed14,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_pop_unsafe","zpp_nape/util/Lists.hx",11186,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11195)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11195)
	::zpp_nape::dynamics::ZPP_InteractionGroup ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11196)
	this->pop();
	HX_STACK_LINE(11197)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11197)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_InteractionGroup_obj::remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","remove",0x854c2ff0,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.remove","zpp_nape/util/Lists.hx",11208,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11208)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11208)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11208)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11208)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11208)
		while((true)){
			HX_STACK_LINE(11208)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11208)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11208)
			if ((tmp2)){
				HX_STACK_LINE(11208)
				break;
			}
			HX_STACK_LINE(11208)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11208)
			if ((tmp3)){
				HX_STACK_LINE(11208)
				{
					HX_STACK_LINE(11208)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11208)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11208)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11208)
					if ((tmp4)){
						HX_STACK_LINE(11208)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11208)
						old = tmp5;
						HX_STACK_LINE(11208)
						ret1 = old->next;
						HX_STACK_LINE(11208)
						this->head = ret1;
						HX_STACK_LINE(11208)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(11208)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(11208)
						if ((tmp7)){
							HX_STACK_LINE(11208)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11208)
						old = pre->next;
						HX_STACK_LINE(11208)
						ret1 = old->next;
						HX_STACK_LINE(11208)
						pre->next = ret1;
						HX_STACK_LINE(11208)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11208)
						if ((tmp5)){
							HX_STACK_LINE(11208)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11208)
					{
						HX_STACK_LINE(11208)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11208)
						o->elt = null();
						HX_STACK_LINE(11208)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11208)
						o->next = tmp5;
						HX_STACK_LINE(11208)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11208)
					this->modified = true;
					HX_STACK_LINE(11208)
					(this->length)--;
					HX_STACK_LINE(11208)
					this->pushmod = true;
					HX_STACK_LINE(11208)
					ret1;
				}
				HX_STACK_LINE(11208)
				ret = true;
				HX_STACK_LINE(11208)
				break;
			}
			HX_STACK_LINE(11208)
			pre = cur;
			HX_STACK_LINE(11208)
			cur = cur->next;
		}
		HX_STACK_LINE(11208)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,remove,(void))

bool ZNPList_ZPP_InteractionGroup_obj::try_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","try_remove",0x1b8b8bb4,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.try_remove","zpp_nape/util/Lists.hx",11210,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11219)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11220)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11220)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11221)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11222)
	while((true)){
		HX_STACK_LINE(11222)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11222)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11222)
		if ((tmp2)){
			HX_STACK_LINE(11222)
			break;
		}
		HX_STACK_LINE(11223)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11223)
		if ((tmp3)){
			HX_STACK_LINE(11224)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11224)
			this->erase(tmp4);
			HX_STACK_LINE(11225)
			ret = true;
			HX_STACK_LINE(11226)
			break;
		}
		HX_STACK_LINE(11228)
		pre = cur;
		HX_STACK_LINE(11229)
		cur = cur->next;
	}
	HX_STACK_LINE(11231)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11231)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,try_remove,return )

Void ZNPList_ZPP_InteractionGroup_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_remove",0xe2fcad04,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_remove","zpp_nape/util/Lists.hx",11244,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11244)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11244)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11244)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11244)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11244)
		while((true)){
			HX_STACK_LINE(11244)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11244)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11244)
			if ((tmp2)){
				HX_STACK_LINE(11244)
				break;
			}
			HX_STACK_LINE(11244)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11244)
			if ((tmp3)){
				HX_STACK_LINE(11244)
				{
					HX_STACK_LINE(11244)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11244)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11244)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(11244)
					if ((tmp4)){
						HX_STACK_LINE(11244)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11244)
						old = tmp5;
						HX_STACK_LINE(11244)
						ret1 = old->next;
						HX_STACK_LINE(11244)
						this->head = ret1;
						HX_STACK_LINE(11244)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(11244)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(11244)
						if ((tmp7)){
							HX_STACK_LINE(11244)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11244)
						old = pre->next;
						HX_STACK_LINE(11244)
						ret1 = old->next;
						HX_STACK_LINE(11244)
						pre->next = ret1;
						HX_STACK_LINE(11244)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11244)
						if ((tmp5)){
							HX_STACK_LINE(11244)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11244)
					{
						HX_STACK_LINE(11244)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11244)
						o->elt = null();
						HX_STACK_LINE(11244)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(11244)
						o->next = tmp5;
						HX_STACK_LINE(11244)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11244)
					this->modified = true;
					HX_STACK_LINE(11244)
					(this->length)--;
					HX_STACK_LINE(11244)
					this->pushmod = true;
					HX_STACK_LINE(11244)
					ret1;
				}
				HX_STACK_LINE(11244)
				ret = true;
				HX_STACK_LINE(11244)
				break;
			}
			HX_STACK_LINE(11244)
			pre = cur;
			HX_STACK_LINE(11244)
			cur = cur->next;
		}
		HX_STACK_LINE(11244)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_remove,(void))

bool ZNPList_ZPP_InteractionGroup_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_try_remove",0xabc222c8,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_try_remove","zpp_nape/util/Lists.hx",11248,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11257)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11258)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11258)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11259)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11260)
	while((true)){
		HX_STACK_LINE(11260)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11260)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11260)
		if ((tmp2)){
			HX_STACK_LINE(11260)
			break;
		}
		HX_STACK_LINE(11261)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11261)
		if ((tmp3)){
			HX_STACK_LINE(11262)
			{
				HX_STACK_LINE(11262)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11262)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11262)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(11262)
				if ((tmp4)){
					HX_STACK_LINE(11262)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(11262)
					old = tmp5;
					HX_STACK_LINE(11262)
					ret1 = old->next;
					HX_STACK_LINE(11262)
					this->head = ret1;
					HX_STACK_LINE(11262)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(11262)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(11262)
					if ((tmp7)){
						HX_STACK_LINE(11262)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11262)
					old = pre->next;
					HX_STACK_LINE(11262)
					ret1 = old->next;
					HX_STACK_LINE(11262)
					pre->next = ret1;
					HX_STACK_LINE(11262)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(11262)
					if ((tmp5)){
						HX_STACK_LINE(11262)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11262)
				{
					HX_STACK_LINE(11262)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11262)
					o->elt = null();
					HX_STACK_LINE(11262)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(11262)
					o->next = tmp5;
					HX_STACK_LINE(11262)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11262)
				this->modified = true;
				HX_STACK_LINE(11262)
				(this->length)--;
				HX_STACK_LINE(11262)
				this->pushmod = true;
				HX_STACK_LINE(11262)
				ret1;
			}
			HX_STACK_LINE(11263)
			ret = true;
			HX_STACK_LINE(11264)
			break;
		}
		HX_STACK_LINE(11266)
		pre = cur;
		HX_STACK_LINE(11267)
		cur = cur->next;
	}
	HX_STACK_LINE(11269)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11269)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","erase",0xb1ae6eba,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.erase","zpp_nape/util/Lists.hx",11271,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11272)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11272)
	{
		HX_STACK_LINE(11272)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(11272)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11272)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11272)
		if ((tmp1)){
			HX_STACK_LINE(11272)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11272)
			old = tmp2;
			HX_STACK_LINE(11272)
			ret = old->next;
			HX_STACK_LINE(11272)
			this->head = ret;
			HX_STACK_LINE(11272)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11272)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11272)
			if ((tmp4)){
				HX_STACK_LINE(11272)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(11272)
			old = pre->next;
			HX_STACK_LINE(11272)
			ret = old->next;
			HX_STACK_LINE(11272)
			pre->next = ret;
			HX_STACK_LINE(11272)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11272)
			if ((tmp2)){
				HX_STACK_LINE(11272)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(11272)
		{
			HX_STACK_LINE(11272)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11272)
			o->elt = null();
			HX_STACK_LINE(11272)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11272)
			o->next = tmp2;
			HX_STACK_LINE(11272)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11272)
		this->modified = true;
		HX_STACK_LINE(11272)
		(this->length)--;
		HX_STACK_LINE(11272)
		this->pushmod = true;
		HX_STACK_LINE(11272)
		tmp = ret;
	}
	HX_STACK_LINE(11272)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_erase",0xcda73026,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_erase","zpp_nape/util/Lists.hx",11276,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11285)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11286)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11287)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11287)
	if ((tmp)){
		HX_STACK_LINE(11288)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11288)
		old = tmp1;
		HX_STACK_LINE(11289)
		ret = old->next;
		HX_STACK_LINE(11290)
		this->head = ret;
		HX_STACK_LINE(11291)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11291)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11291)
		if ((tmp3)){
			HX_STACK_LINE(11291)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11294)
		old = pre->next;
		HX_STACK_LINE(11295)
		ret = old->next;
		HX_STACK_LINE(11296)
		pre->next = ret;
		HX_STACK_LINE(11297)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11297)
		if ((tmp1)){
			HX_STACK_LINE(11297)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11300)
	{
		HX_STACK_LINE(11301)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11310)
		o->elt = null();
		HX_STACK_LINE(11311)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11311)
		o->next = tmp1;
		HX_STACK_LINE(11312)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11317)
	this->modified = true;
	HX_STACK_LINE(11318)
	(this->length)--;
	HX_STACK_LINE(11319)
	this->pushmod = true;
	HX_STACK_LINE(11320)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11320)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","splice",0x40621928,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.splice","zpp_nape/util/Lists.hx",11322,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(11323)
	while((true)){
		HX_STACK_LINE(11323)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11323)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11323)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11323)
		if ((tmp1)){
			HX_STACK_LINE(11323)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(11323)
			tmp2 = false;
		}
		HX_STACK_LINE(11323)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11323)
		if ((tmp3)){
			HX_STACK_LINE(11323)
			break;
		}
		HX_STACK_LINE(11323)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(11323)
		this->erase(tmp4);
	}
	HX_STACK_LINE(11324)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11324)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,splice,return )

Void ZNPList_ZPP_InteractionGroup_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","clear",0x86ecf761,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.clear","zpp_nape/util/Lists.hx",11327,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11327)
		while((true)){
			HX_STACK_LINE(11327)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11327)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11327)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11327)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11327)
			if ((tmp3)){
				HX_STACK_LINE(11327)
				break;
			}
			HX_STACK_LINE(11327)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11327)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11327)
			this->head = ret->next;
			HX_STACK_LINE(11327)
			{
				HX_STACK_LINE(11327)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11327)
				o->elt = null();
				HX_STACK_LINE(11327)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(11327)
				o->next = tmp5;
				HX_STACK_LINE(11327)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11327)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(11327)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(11327)
			if ((tmp6)){
				HX_STACK_LINE(11327)
				this->pushmod = true;
			}
			HX_STACK_LINE(11327)
			this->modified = true;
			HX_STACK_LINE(11327)
			(this->length)--;
		}
		HX_STACK_LINE(11327)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,clear,(void))

Void ZNPList_ZPP_InteractionGroup_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_clear",0xa2e5b8cd,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_clear","zpp_nape/util/Lists.hx",11332,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11333)
		while((true)){
			HX_STACK_LINE(11333)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11333)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11333)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11333)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11333)
			if ((tmp3)){
				HX_STACK_LINE(11333)
				break;
			}
			HX_STACK_LINE(11333)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11333)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11333)
			this->head = ret->next;
			HX_STACK_LINE(11333)
			{
				HX_STACK_LINE(11333)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11333)
				o->elt = null();
				HX_STACK_LINE(11333)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(11333)
				o->next = tmp5;
				HX_STACK_LINE(11333)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11333)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(11333)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(11333)
			if ((tmp6)){
				HX_STACK_LINE(11333)
				this->pushmod = true;
			}
			HX_STACK_LINE(11333)
			this->modified = true;
			HX_STACK_LINE(11333)
			(this->length)--;
		}
		HX_STACK_LINE(11334)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_clear,(void))

Void ZNPList_ZPP_InteractionGroup_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","reverse",0x4559dbf6,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.reverse","zpp_nape/util/Lists.hx",11337,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11338)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11338)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11339)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11340)
		while((true)){
			HX_STACK_LINE(11340)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11340)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11340)
			if ((tmp2)){
				HX_STACK_LINE(11340)
				break;
			}
			HX_STACK_LINE(11341)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11342)
			cur->next = pre;
			HX_STACK_LINE(11343)
			this->head = cur;
			HX_STACK_LINE(11344)
			pre = cur;
			HX_STACK_LINE(11345)
			cur = nx;
		}
		HX_STACK_LINE(11347)
		this->modified = true;
		HX_STACK_LINE(11348)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,reverse,(void))

bool ZNPList_ZPP_InteractionGroup_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","empty",0xae6bc061,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.empty","zpp_nape/util/Lists.hx",11352,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11353)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11353)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11353)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,empty,return )

int ZNPList_ZPP_InteractionGroup_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","size",0x8f30b16d,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.size","zpp_nape/util/Lists.hx",11357,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11358)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11358)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,size,return )

bool ZNPList_ZPP_InteractionGroup_obj::has( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","has",0x1545e82e,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.has","zpp_nape/util/Lists.hx",11360,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11361)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11361)
	{
		HX_STACK_LINE(11361)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11361)
		{
			HX_STACK_LINE(11361)
			ret = false;
			HX_STACK_LINE(11361)
			{
				HX_STACK_LINE(11361)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(11361)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(11361)
				while((true)){
					HX_STACK_LINE(11361)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(11361)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(11361)
					if ((tmp3)){
						HX_STACK_LINE(11361)
						break;
					}
					HX_STACK_LINE(11361)
					::zpp_nape::dynamics::ZPP_InteractionGroup npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(11361)
					{
						HX_STACK_LINE(11361)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(11361)
						if ((tmp4)){
							HX_STACK_LINE(11361)
							ret = true;
							HX_STACK_LINE(11361)
							break;
						}
					}
					HX_STACK_LINE(11361)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(11361)
		tmp = ret;
	}
	HX_STACK_LINE(11361)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,has,return )

bool ZNPList_ZPP_InteractionGroup_obj::inlined_has( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","inlined_has",0x19fd369a,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.inlined_has","zpp_nape/util/Lists.hx",11365,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11374)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11375)
	{
		HX_STACK_LINE(11376)
		ret = false;
		HX_STACK_LINE(11377)
		{
			HX_STACK_LINE(11378)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11378)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11379)
			while((true)){
				HX_STACK_LINE(11379)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(11379)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(11379)
				if ((tmp2)){
					HX_STACK_LINE(11379)
					break;
				}
				HX_STACK_LINE(11380)
				::zpp_nape::dynamics::ZPP_InteractionGroup npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11381)
				{
					HX_STACK_LINE(11382)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(11382)
					if ((tmp3)){
						HX_STACK_LINE(11383)
						ret = true;
						HX_STACK_LINE(11384)
						break;
					}
				}
				HX_STACK_LINE(11387)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11391)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11391)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","front",0x451f9e7d,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.front","zpp_nape/util/Lists.hx",11395,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11396)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11396)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11396)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,front,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","back",0x83edead3,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.back","zpp_nape/util/Lists.hx",11398,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11399)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11399)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11400)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11401)
	while((true)){
		HX_STACK_LINE(11401)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11401)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11401)
		if ((tmp2)){
			HX_STACK_LINE(11401)
			break;
		}
		HX_STACK_LINE(11402)
		ret = cur;
		HX_STACK_LINE(11403)
		cur = cur->next;
	}
	HX_STACK_LINE(11405)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11405)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","iterator_at",0x1e9c26b8,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.iterator_at","zpp_nape/util/Lists.hx",11407,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11416)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11416)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11417)
	while((true)){
		HX_STACK_LINE(11417)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11417)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11417)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11417)
		if ((tmp2)){
			HX_STACK_LINE(11417)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(11417)
			tmp3 = false;
		}
		HX_STACK_LINE(11417)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(11417)
		if ((tmp4)){
			HX_STACK_LINE(11417)
			break;
		}
		HX_STACK_LINE(11417)
		ret = ret->next;
	}
	HX_STACK_LINE(11418)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11418)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionGroup","at",0x42ada29f,"zpp_nape.util.ZNPList_ZPP_InteractionGroup.at","zpp_nape/util/Lists.hx",11420,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11429)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11429)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11429)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11430)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11430)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(11430)
	if ((tmp2)){
		HX_STACK_LINE(11430)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(11430)
		tmp3 = null();
	}
	HX_STACK_LINE(11430)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,at,return )


ZNPList_ZPP_InteractionGroup_obj::ZNPList_ZPP_InteractionGroup_obj()
{
}

void ZNPList_ZPP_InteractionGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_InteractionGroup);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_InteractionGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_InteractionGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_InteractionGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup >(); return inValue; }
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

bool ZNPList_ZPP_InteractionGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_InteractionGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_InteractionGroup*/ ,(int)offsetof(ZNPList_ZPP_InteractionGroup_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_InteractionGroup_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_InteractionGroup_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_InteractionGroup_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_InteractionGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_InteractionGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_InteractionGroup_obj::__mClass;

void ZNPList_ZPP_InteractionGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_InteractionGroup","\x42","\x0f","\xe9","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_InteractionGroup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_InteractionGroup_obj >;
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
