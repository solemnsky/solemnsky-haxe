#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CallbackSet
#include <zpp_nape/util/ZNPList_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CallbackSet_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","new",0x554ed6ba,"zpp_nape.util.ZNPList_ZPP_CallbackSet.new","zpp_nape/util/Lists.hx",592,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(602)
	this->length = (int)0;
	HX_STACK_LINE(601)
	this->pushmod = false;
	HX_STACK_LINE(600)
	this->modified = false;
	HX_STACK_LINE(593)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_CallbackSet_obj::~ZNPList_ZPP_CallbackSet_obj() { }

Dynamic ZNPList_ZPP_CallbackSet_obj::__CreateEmpty() { return  new ZNPList_ZPP_CallbackSet_obj; }
hx::ObjectPtr< ZNPList_ZPP_CallbackSet_obj > ZNPList_ZPP_CallbackSet_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CallbackSet_obj > _result_ = new ZNPList_ZPP_CallbackSet_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_CallbackSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CallbackSet_obj > _result_ = new ZNPList_ZPP_CallbackSet_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","begin",0x7ee2bb03,"zpp_nape.util.ZNPList_ZPP_CallbackSet.begin","zpp_nape/util/Lists.hx",597,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(598)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,begin,return )

Void ZNPList_ZPP_CallbackSet_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","setbegin",0x08ca96ad,"zpp_nape.util.ZNPList_ZPP_CallbackSet.setbegin","zpp_nape/util/Lists.hx",605,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(606)
		this->head = i;
		HX_STACK_LINE(607)
		this->modified = true;
		HX_STACK_LINE(608)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,setbegin,(void))

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","add",0x5544f87b,"zpp_nape.util.ZNPList_ZPP_CallbackSet.add","zpp_nape/util/Lists.hx",610,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(611)
	::zpp_nape::space::ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	{
		HX_STACK_LINE(611)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(611)
			{
				HX_STACK_LINE(611)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(611)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(611)
				if ((tmp3)){
					HX_STACK_LINE(611)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(611)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(611)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(611)
					ret = tmp4;
					HX_STACK_LINE(611)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = ret->next;
					HX_STACK_LINE(611)
					ret->next = null();
				}
				HX_STACK_LINE(611)
				Dynamic();
			}
			HX_STACK_LINE(611)
			ret->elt = o;
			HX_STACK_LINE(611)
			tmp1 = ret;
		}
		HX_STACK_LINE(611)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(611)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(611)
		temp->next = tmp2;
		HX_STACK_LINE(611)
		this->head = temp;
		HX_STACK_LINE(611)
		this->modified = true;
		HX_STACK_LINE(611)
		(this->length)++;
		HX_STACK_LINE(611)
		tmp = o;
	}
	HX_STACK_LINE(611)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,add,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::inlined_add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_add",0x1b7e3ce7,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_add","zpp_nape/util/Lists.hx",615,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(624)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(624)
	{
		HX_STACK_LINE(625)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(626)
		{
			HX_STACK_LINE(627)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(627)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(627)
			if ((tmp2)){
				HX_STACK_LINE(628)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(628)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(634)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(634)
				ret = tmp3;
				HX_STACK_LINE(635)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = ret->next;
				HX_STACK_LINE(636)
				ret->next = null();
			}
			HX_STACK_LINE(641)
			Dynamic();
		}
		HX_STACK_LINE(643)
		ret->elt = o;
		HX_STACK_LINE(644)
		tmp = ret;
	}
	HX_STACK_LINE(624)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(646)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(646)
	temp->next = tmp1;
	HX_STACK_LINE(647)
	this->head = temp;
	HX_STACK_LINE(648)
	this->modified = true;
	HX_STACK_LINE(649)
	(this->length)++;
	HX_STACK_LINE(650)
	::zpp_nape::space::ZPP_CallbackSet tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(650)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_add,return )

Void ZNPList_ZPP_CallbackSet_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CallbackSet x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","addAll",0x8ba4f766,"zpp_nape.util.ZNPList_ZPP_CallbackSet.addAll","zpp_nape/util/Lists.hx",661,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(662)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(663)
		while((true)){
			HX_STACK_LINE(663)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(663)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(663)
			if ((tmp1)){
				HX_STACK_LINE(663)
				break;
			}
			HX_STACK_LINE(664)
			::zpp_nape::space::ZPP_CallbackSet i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(665)
			::zpp_nape::space::ZPP_CallbackSet tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(665)
			this->add(tmp2);
			HX_STACK_LINE(666)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","insert",0x8a87311f,"zpp_nape.util.ZNPList_ZPP_CallbackSet.insert","zpp_nape/util/Lists.hx",670,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(671)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(671)
	{
		HX_STACK_LINE(671)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		{
			HX_STACK_LINE(671)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(671)
			{
				HX_STACK_LINE(671)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(671)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(671)
				if ((tmp3)){
					HX_STACK_LINE(671)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(671)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(671)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(671)
					ret = tmp4;
					HX_STACK_LINE(671)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = ret->next;
					HX_STACK_LINE(671)
					ret->next = null();
				}
				HX_STACK_LINE(671)
				Dynamic();
			}
			HX_STACK_LINE(671)
			ret->elt = o;
			HX_STACK_LINE(671)
			tmp1 = ret;
		}
		HX_STACK_LINE(671)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(671)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(671)
		if ((tmp2)){
			HX_STACK_LINE(671)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(671)
			temp->next = tmp3;
			HX_STACK_LINE(671)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(671)
			temp->next = cur->next;
			HX_STACK_LINE(671)
			cur->next = temp;
		}
		HX_STACK_LINE(671)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(671)
		this->pushmod = tmp3;
		HX_STACK_LINE(671)
		(this->length)++;
		HX_STACK_LINE(671)
		tmp = temp;
	}
	HX_STACK_LINE(671)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CallbackSet_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_insert",0xe7d37833,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_insert","zpp_nape/util/Lists.hx",675,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(684)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	{
		HX_STACK_LINE(685)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(686)
		{
			HX_STACK_LINE(687)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(687)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(687)
			if ((tmp2)){
				HX_STACK_LINE(688)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(688)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(694)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(694)
				ret = tmp3;
				HX_STACK_LINE(695)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = ret->next;
				HX_STACK_LINE(696)
				ret->next = null();
			}
			HX_STACK_LINE(701)
			Dynamic();
		}
		HX_STACK_LINE(703)
		ret->elt = o;
		HX_STACK_LINE(704)
		tmp = ret;
	}
	HX_STACK_LINE(684)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(706)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(706)
	if ((tmp1)){
		HX_STACK_LINE(707)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(707)
		temp->next = tmp2;
		HX_STACK_LINE(708)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(711)
		temp->next = cur->next;
		HX_STACK_LINE(712)
		cur->next = temp;
	}
	HX_STACK_LINE(714)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(714)
	this->pushmod = tmp2;
	HX_STACK_LINE(715)
	(this->length)++;
	HX_STACK_LINE(716)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(716)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CallbackSet_obj,inlined_insert,return )

Void ZNPList_ZPP_CallbackSet_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","pop",0x555063eb,"zpp_nape.util.ZNPList_ZPP_CallbackSet.pop","zpp_nape/util/Lists.hx",719,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(719)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(719)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(719)
		this->head = ret->next;
		HX_STACK_LINE(719)
		{
			HX_STACK_LINE(719)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(719)
			o->elt = null();
			HX_STACK_LINE(719)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(719)
			o->next = tmp1;
			HX_STACK_LINE(719)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(719)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(719)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(719)
		if ((tmp2)){
			HX_STACK_LINE(719)
			this->pushmod = true;
		}
		HX_STACK_LINE(719)
		this->modified = true;
		HX_STACK_LINE(719)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,pop,(void))

Void ZNPList_ZPP_CallbackSet_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_pop",0x1b89a857,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_pop","zpp_nape/util/Lists.hx",723,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(732)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(732)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(733)
		this->head = ret->next;
		HX_STACK_LINE(735)
		{
			HX_STACK_LINE(736)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(745)
			o->elt = null();
			HX_STACK_LINE(746)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(746)
			o->next = tmp1;
			HX_STACK_LINE(747)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(752)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(752)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(752)
		if ((tmp2)){
			HX_STACK_LINE(752)
			this->pushmod = true;
		}
		HX_STACK_LINE(753)
		this->modified = true;
		HX_STACK_LINE(754)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","pop_unsafe",0xd0ba553a,"zpp_nape.util.ZNPList_ZPP_CallbackSet.pop_unsafe","zpp_nape/util/Lists.hx",756,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(757)
	::zpp_nape::space::ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(757)
	{
		HX_STACK_LINE(757)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(757)
		::zpp_nape::space::ZPP_CallbackSet ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(757)
		this->pop();
		HX_STACK_LINE(757)
		tmp = ret;
	}
	HX_STACK_LINE(757)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_pop_unsafe",0xbb39b64e,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_pop_unsafe","zpp_nape/util/Lists.hx",761,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(770)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(770)
	::zpp_nape::space::ZPP_CallbackSet ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(771)
	this->pop();
	HX_STACK_LINE(772)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(772)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_CallbackSet_obj::remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","remove",0xf1328a2a,"zpp_nape.util.ZNPList_ZPP_CallbackSet.remove","zpp_nape/util/Lists.hx",783,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(783)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(783)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(783)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(783)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(783)
		while((true)){
			HX_STACK_LINE(783)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(783)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(783)
			if ((tmp2)){
				HX_STACK_LINE(783)
				break;
			}
			HX_STACK_LINE(783)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(783)
			if ((tmp3)){
				HX_STACK_LINE(783)
				{
					HX_STACK_LINE(783)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(783)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(783)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(783)
					if ((tmp4)){
						HX_STACK_LINE(783)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(783)
						old = tmp5;
						HX_STACK_LINE(783)
						ret1 = old->next;
						HX_STACK_LINE(783)
						this->head = ret1;
						HX_STACK_LINE(783)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(783)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(783)
						if ((tmp7)){
							HX_STACK_LINE(783)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(783)
						old = pre->next;
						HX_STACK_LINE(783)
						ret1 = old->next;
						HX_STACK_LINE(783)
						pre->next = ret1;
						HX_STACK_LINE(783)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(783)
						if ((tmp5)){
							HX_STACK_LINE(783)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(783)
					{
						HX_STACK_LINE(783)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(783)
						o->elt = null();
						HX_STACK_LINE(783)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(783)
						o->next = tmp5;
						HX_STACK_LINE(783)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
					}
					HX_STACK_LINE(783)
					this->modified = true;
					HX_STACK_LINE(783)
					(this->length)--;
					HX_STACK_LINE(783)
					this->pushmod = true;
					HX_STACK_LINE(783)
					ret1;
				}
				HX_STACK_LINE(783)
				ret = true;
				HX_STACK_LINE(783)
				break;
			}
			HX_STACK_LINE(783)
			pre = cur;
			HX_STACK_LINE(783)
			cur = cur->next;
		}
		HX_STACK_LINE(783)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,remove,(void))

bool ZNPList_ZPP_CallbackSet_obj::try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","try_remove",0xe7e48aee,"zpp_nape.util.ZNPList_ZPP_CallbackSet.try_remove","zpp_nape/util/Lists.hx",785,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(794)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(795)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(795)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(796)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(797)
	while((true)){
		HX_STACK_LINE(797)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(797)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(797)
		if ((tmp2)){
			HX_STACK_LINE(797)
			break;
		}
		HX_STACK_LINE(798)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(798)
		if ((tmp3)){
			HX_STACK_LINE(799)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(799)
			this->erase(tmp4);
			HX_STACK_LINE(800)
			ret = true;
			HX_STACK_LINE(801)
			break;
		}
		HX_STACK_LINE(803)
		pre = cur;
		HX_STACK_LINE(804)
		cur = cur->next;
	}
	HX_STACK_LINE(806)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(806)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,try_remove,return )

Void ZNPList_ZPP_CallbackSet_obj::inlined_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_remove",0x4e7ed13e,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_remove","zpp_nape/util/Lists.hx",819,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(819)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(819)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(819)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(819)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(819)
		while((true)){
			HX_STACK_LINE(819)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(819)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(819)
			if ((tmp2)){
				HX_STACK_LINE(819)
				break;
			}
			HX_STACK_LINE(819)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(819)
			if ((tmp3)){
				HX_STACK_LINE(819)
				{
					HX_STACK_LINE(819)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(819)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(819)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(819)
					if ((tmp4)){
						HX_STACK_LINE(819)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(819)
						old = tmp5;
						HX_STACK_LINE(819)
						ret1 = old->next;
						HX_STACK_LINE(819)
						this->head = ret1;
						HX_STACK_LINE(819)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(819)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(819)
						if ((tmp7)){
							HX_STACK_LINE(819)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(819)
						old = pre->next;
						HX_STACK_LINE(819)
						ret1 = old->next;
						HX_STACK_LINE(819)
						pre->next = ret1;
						HX_STACK_LINE(819)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(819)
						if ((tmp5)){
							HX_STACK_LINE(819)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(819)
					{
						HX_STACK_LINE(819)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(819)
						o->elt = null();
						HX_STACK_LINE(819)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(819)
						o->next = tmp5;
						HX_STACK_LINE(819)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
					}
					HX_STACK_LINE(819)
					this->modified = true;
					HX_STACK_LINE(819)
					(this->length)--;
					HX_STACK_LINE(819)
					this->pushmod = true;
					HX_STACK_LINE(819)
					ret1;
				}
				HX_STACK_LINE(819)
				ret = true;
				HX_STACK_LINE(819)
				break;
			}
			HX_STACK_LINE(819)
			pre = cur;
			HX_STACK_LINE(819)
			cur = cur->next;
		}
		HX_STACK_LINE(819)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_remove,(void))

bool ZNPList_ZPP_CallbackSet_obj::inlined_try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_try_remove",0xd263ec02,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_try_remove","zpp_nape/util/Lists.hx",823,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(832)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(833)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(834)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(835)
	while((true)){
		HX_STACK_LINE(835)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(835)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(835)
		if ((tmp2)){
			HX_STACK_LINE(835)
			break;
		}
		HX_STACK_LINE(836)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(836)
		if ((tmp3)){
			HX_STACK_LINE(837)
			{
				HX_STACK_LINE(837)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(837)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(837)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(837)
				if ((tmp4)){
					HX_STACK_LINE(837)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(837)
					old = tmp5;
					HX_STACK_LINE(837)
					ret1 = old->next;
					HX_STACK_LINE(837)
					this->head = ret1;
					HX_STACK_LINE(837)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(837)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(837)
					if ((tmp7)){
						HX_STACK_LINE(837)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(837)
					old = pre->next;
					HX_STACK_LINE(837)
					ret1 = old->next;
					HX_STACK_LINE(837)
					pre->next = ret1;
					HX_STACK_LINE(837)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(837)
					if ((tmp5)){
						HX_STACK_LINE(837)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(837)
				{
					HX_STACK_LINE(837)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(837)
					o->elt = null();
					HX_STACK_LINE(837)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(837)
					o->next = tmp5;
					HX_STACK_LINE(837)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
				}
				HX_STACK_LINE(837)
				this->modified = true;
				HX_STACK_LINE(837)
				(this->length)--;
				HX_STACK_LINE(837)
				this->pushmod = true;
				HX_STACK_LINE(837)
				ret1;
			}
			HX_STACK_LINE(838)
			ret = true;
			HX_STACK_LINE(839)
			break;
		}
		HX_STACK_LINE(841)
		pre = cur;
		HX_STACK_LINE(842)
		cur = cur->next;
	}
	HX_STACK_LINE(844)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(844)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","erase",0x41a9b9c0,"zpp_nape.util.ZNPList_ZPP_CallbackSet.erase","zpp_nape/util/Lists.hx",846,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(847)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(847)
	{
		HX_STACK_LINE(847)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(847)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(847)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(847)
		if ((tmp1)){
			HX_STACK_LINE(847)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(847)
			old = tmp2;
			HX_STACK_LINE(847)
			ret = old->next;
			HX_STACK_LINE(847)
			this->head = ret;
			HX_STACK_LINE(847)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(847)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(847)
			if ((tmp4)){
				HX_STACK_LINE(847)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(847)
			old = pre->next;
			HX_STACK_LINE(847)
			ret = old->next;
			HX_STACK_LINE(847)
			pre->next = ret;
			HX_STACK_LINE(847)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(847)
			if ((tmp2)){
				HX_STACK_LINE(847)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(847)
		{
			HX_STACK_LINE(847)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(847)
			o->elt = null();
			HX_STACK_LINE(847)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(847)
			o->next = tmp2;
			HX_STACK_LINE(847)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(847)
		this->modified = true;
		HX_STACK_LINE(847)
		(this->length)--;
		HX_STACK_LINE(847)
		this->pushmod = true;
		HX_STACK_LINE(847)
		tmp = ret;
	}
	HX_STACK_LINE(847)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_erase",0xfc0df12c,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_erase","zpp_nape/util/Lists.hx",851,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(860)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(861)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(862)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(862)
	if ((tmp)){
		HX_STACK_LINE(863)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(863)
		old = tmp1;
		HX_STACK_LINE(864)
		ret = old->next;
		HX_STACK_LINE(865)
		this->head = ret;
		HX_STACK_LINE(866)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(866)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(866)
		if ((tmp3)){
			HX_STACK_LINE(866)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(869)
		old = pre->next;
		HX_STACK_LINE(870)
		ret = old->next;
		HX_STACK_LINE(871)
		pre->next = ret;
		HX_STACK_LINE(872)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(872)
		if ((tmp1)){
			HX_STACK_LINE(872)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(875)
	{
		HX_STACK_LINE(876)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(885)
		o->elt = null();
		HX_STACK_LINE(886)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(886)
		o->next = tmp1;
		HX_STACK_LINE(887)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(892)
	this->modified = true;
	HX_STACK_LINE(893)
	(this->length)--;
	HX_STACK_LINE(894)
	this->pushmod = true;
	HX_STACK_LINE(895)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(895)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","splice",0xac487362,"zpp_nape.util.ZNPList_ZPP_CallbackSet.splice","zpp_nape/util/Lists.hx",897,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(898)
	while((true)){
		HX_STACK_LINE(898)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(898)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(898)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(898)
		if ((tmp1)){
			HX_STACK_LINE(898)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(898)
			tmp2 = false;
		}
		HX_STACK_LINE(898)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(898)
		if ((tmp3)){
			HX_STACK_LINE(898)
			break;
		}
		HX_STACK_LINE(898)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(898)
		this->erase(tmp4);
	}
	HX_STACK_LINE(899)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(899)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CallbackSet_obj,splice,return )

Void ZNPList_ZPP_CallbackSet_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","clear",0x16e84267,"zpp_nape.util.ZNPList_ZPP_CallbackSet.clear","zpp_nape/util/Lists.hx",902,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(902)
		while((true)){
			HX_STACK_LINE(902)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(902)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(902)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(902)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(902)
			if ((tmp3)){
				HX_STACK_LINE(902)
				break;
			}
			HX_STACK_LINE(902)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(902)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(902)
			this->head = ret->next;
			HX_STACK_LINE(902)
			{
				HX_STACK_LINE(902)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(902)
				o->elt = null();
				HX_STACK_LINE(902)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(902)
				o->next = tmp5;
				HX_STACK_LINE(902)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(902)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(902)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(902)
			if ((tmp6)){
				HX_STACK_LINE(902)
				this->pushmod = true;
			}
			HX_STACK_LINE(902)
			this->modified = true;
			HX_STACK_LINE(902)
			(this->length)--;
		}
		HX_STACK_LINE(902)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,clear,(void))

Void ZNPList_ZPP_CallbackSet_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_clear",0xd14c79d3,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_clear","zpp_nape/util/Lists.hx",907,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(908)
		while((true)){
			HX_STACK_LINE(908)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(908)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(908)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(908)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(908)
			if ((tmp3)){
				HX_STACK_LINE(908)
				break;
			}
			HX_STACK_LINE(908)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(908)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(908)
			this->head = ret->next;
			HX_STACK_LINE(908)
			{
				HX_STACK_LINE(908)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(908)
				o->elt = null();
				HX_STACK_LINE(908)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(908)
				o->next = tmp5;
				HX_STACK_LINE(908)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(908)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(908)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(908)
			if ((tmp6)){
				HX_STACK_LINE(908)
				this->pushmod = true;
			}
			HX_STACK_LINE(908)
			this->modified = true;
			HX_STACK_LINE(908)
			(this->length)--;
		}
		HX_STACK_LINE(909)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,inlined_clear,(void))

Void ZNPList_ZPP_CallbackSet_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","reverse",0x4302747c,"zpp_nape.util.ZNPList_ZPP_CallbackSet.reverse","zpp_nape/util/Lists.hx",912,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(913)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(913)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(914)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(915)
		while((true)){
			HX_STACK_LINE(915)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(915)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(915)
			if ((tmp2)){
				HX_STACK_LINE(915)
				break;
			}
			HX_STACK_LINE(916)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(917)
			cur->next = pre;
			HX_STACK_LINE(918)
			this->head = cur;
			HX_STACK_LINE(919)
			pre = cur;
			HX_STACK_LINE(920)
			cur = nx;
		}
		HX_STACK_LINE(922)
		this->modified = true;
		HX_STACK_LINE(923)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,reverse,(void))

bool ZNPList_ZPP_CallbackSet_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","empty",0x3e670b67,"zpp_nape.util.ZNPList_ZPP_CallbackSet.empty","zpp_nape/util/Lists.hx",927,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(928)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(928)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(928)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,empty,return )

int ZNPList_ZPP_CallbackSet_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","size",0x52fe2927,"zpp_nape.util.ZNPList_ZPP_CallbackSet.size","zpp_nape/util/Lists.hx",932,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(933)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(933)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,size,return )

bool ZNPList_ZPP_CallbackSet_obj::has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","has",0x554a45b4,"zpp_nape.util.ZNPList_ZPP_CallbackSet.has","zpp_nape/util/Lists.hx",935,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(936)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(936)
	{
		HX_STACK_LINE(936)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(936)
		{
			HX_STACK_LINE(936)
			ret = false;
			HX_STACK_LINE(936)
			{
				HX_STACK_LINE(936)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(936)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(936)
				while((true)){
					HX_STACK_LINE(936)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(936)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(936)
					if ((tmp3)){
						HX_STACK_LINE(936)
						break;
					}
					HX_STACK_LINE(936)
					::zpp_nape::space::ZPP_CallbackSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(936)
					{
						HX_STACK_LINE(936)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(936)
						if ((tmp4)){
							HX_STACK_LINE(936)
							ret = true;
							HX_STACK_LINE(936)
							break;
						}
					}
					HX_STACK_LINE(936)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(936)
		tmp = ret;
	}
	HX_STACK_LINE(936)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,has,return )

bool ZNPList_ZPP_CallbackSet_obj::inlined_has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","inlined_has",0x1b838a20,"zpp_nape.util.ZNPList_ZPP_CallbackSet.inlined_has","zpp_nape/util/Lists.hx",940,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(949)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(950)
	{
		HX_STACK_LINE(951)
		ret = false;
		HX_STACK_LINE(952)
		{
			HX_STACK_LINE(953)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(953)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(954)
			while((true)){
				HX_STACK_LINE(954)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(954)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(954)
				if ((tmp2)){
					HX_STACK_LINE(954)
					break;
				}
				HX_STACK_LINE(955)
				::zpp_nape::space::ZPP_CallbackSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(956)
				{
					HX_STACK_LINE(957)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(957)
					if ((tmp3)){
						HX_STACK_LINE(958)
						ret = true;
						HX_STACK_LINE(959)
						break;
					}
				}
				HX_STACK_LINE(962)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(966)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(966)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_has,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","front",0xd51ae983,"zpp_nape.util.ZNPList_ZPP_CallbackSet.front","zpp_nape/util/Lists.hx",970,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(971)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(971)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(971)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,front,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","back",0x47bb628d,"zpp_nape.util.ZNPList_ZPP_CallbackSet.back","zpp_nape/util/Lists.hx",973,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(974)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(974)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(975)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(976)
	while((true)){
		HX_STACK_LINE(976)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(976)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(976)
		if ((tmp2)){
			HX_STACK_LINE(976)
			break;
		}
		HX_STACK_LINE(977)
		ret = cur;
		HX_STACK_LINE(978)
		cur = cur->next;
	}
	HX_STACK_LINE(980)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(980)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","iterator_at",0x20227a3e,"zpp_nape.util.ZNPList_ZPP_CallbackSet.iterator_at","zpp_nape/util/Lists.hx",982,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(991)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(991)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(992)
	while((true)){
		HX_STACK_LINE(992)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(992)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(992)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(992)
		if ((tmp2)){
			HX_STACK_LINE(992)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(992)
			tmp3 = false;
		}
		HX_STACK_LINE(992)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(992)
		if ((tmp4)){
			HX_STACK_LINE(992)
			break;
		}
		HX_STACK_LINE(992)
		ret = ret->next;
	}
	HX_STACK_LINE(993)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(993)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,iterator_at,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CallbackSet","at",0x4f97d7d9,"zpp_nape.util.ZNPList_ZPP_CallbackSet.at","zpp_nape/util/Lists.hx",995,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1004)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1004)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1004)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1005)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1005)
	::zpp_nape::space::ZPP_CallbackSet tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1005)
	if ((tmp2)){
		HX_STACK_LINE(1005)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(1005)
		tmp3 = null();
	}
	HX_STACK_LINE(1005)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,at,return )


ZNPList_ZPP_CallbackSet_obj::ZNPList_ZPP_CallbackSet_obj()
{
}

void ZNPList_ZPP_CallbackSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CallbackSet);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CallbackSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_CallbackSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_CallbackSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CallbackSet >(); return inValue; }
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

bool ZNPList_ZPP_CallbackSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_CallbackSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CallbackSet*/ ,(int)offsetof(ZNPList_ZPP_CallbackSet_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CallbackSet_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CallbackSet_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_CallbackSet_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CallbackSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CallbackSet_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_CallbackSet_obj::__mClass;

void ZNPList_ZPP_CallbackSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_CallbackSet","\xc8","\xb1","\xc2","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_CallbackSet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_CallbackSet_obj >;
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
