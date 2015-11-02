#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Compound_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","new",0x96c0b492,"zpp_nape.util.ZNPList_ZPP_Compound.new","zpp_nape/util/Lists.hx",2260,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(2270)
	this->length = (int)0;
	HX_STACK_LINE(2269)
	this->pushmod = false;
	HX_STACK_LINE(2268)
	this->modified = false;
	HX_STACK_LINE(2261)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Compound_obj::~ZNPList_ZPP_Compound_obj() { }

Dynamic ZNPList_ZPP_Compound_obj::__CreateEmpty() { return  new ZNPList_ZPP_Compound_obj; }
hx::ObjectPtr< ZNPList_ZPP_Compound_obj > ZNPList_ZPP_Compound_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Compound_obj > _result_ = new ZNPList_ZPP_Compound_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Compound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Compound_obj > _result_ = new ZNPList_ZPP_Compound_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","begin",0x66e9bedb,"zpp_nape.util.ZNPList_ZPP_Compound.begin","zpp_nape/util/Lists.hx",2265,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2266)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2266)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,begin,return )

Void ZNPList_ZPP_Compound_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Compound i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","setbegin",0x298d89d5,"zpp_nape.util.ZNPList_ZPP_Compound.setbegin","zpp_nape/util/Lists.hx",2273,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(2274)
		this->head = i;
		HX_STACK_LINE(2275)
		this->modified = true;
		HX_STACK_LINE(2276)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,setbegin,(void))

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::add( ::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","add",0x96b6d653,"zpp_nape.util.ZNPList_ZPP_Compound.add","zpp_nape/util/Lists.hx",2278,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2279)
	::zpp_nape::phys::ZPP_Compound tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2279)
	{
		HX_STACK_LINE(2279)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2279)
		{
			HX_STACK_LINE(2279)
			::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2279)
			{
				HX_STACK_LINE(2279)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2279)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2279)
				if ((tmp3)){
					HX_STACK_LINE(2279)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2279)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(2279)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2279)
					ret = tmp4;
					HX_STACK_LINE(2279)
					::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
					HX_STACK_LINE(2279)
					ret->next = null();
				}
				HX_STACK_LINE(2279)
				Dynamic();
			}
			HX_STACK_LINE(2279)
			ret->elt = o;
			HX_STACK_LINE(2279)
			tmp1 = ret;
		}
		HX_STACK_LINE(2279)
		::zpp_nape::util::ZNPNode_ZPP_Compound temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(2279)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2279)
		temp->next = tmp2;
		HX_STACK_LINE(2279)
		this->head = temp;
		HX_STACK_LINE(2279)
		this->modified = true;
		HX_STACK_LINE(2279)
		(this->length)++;
		HX_STACK_LINE(2279)
		tmp = o;
	}
	HX_STACK_LINE(2279)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,add,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_add( ::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_add",0x1945b2bf,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_add","zpp_nape/util/Lists.hx",2283,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2292)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2292)
	{
		HX_STACK_LINE(2293)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2294)
		{
			HX_STACK_LINE(2295)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2295)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2295)
			if ((tmp2)){
				HX_STACK_LINE(2296)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2296)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(2302)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2302)
				ret = tmp3;
				HX_STACK_LINE(2303)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2304)
				ret->next = null();
			}
			HX_STACK_LINE(2309)
			Dynamic();
		}
		HX_STACK_LINE(2311)
		ret->elt = o;
		HX_STACK_LINE(2312)
		tmp = ret;
	}
	HX_STACK_LINE(2292)
	::zpp_nape::util::ZNPNode_ZPP_Compound temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2314)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2314)
	temp->next = tmp1;
	HX_STACK_LINE(2315)
	this->head = temp;
	HX_STACK_LINE(2316)
	this->modified = true;
	HX_STACK_LINE(2317)
	(this->length)++;
	HX_STACK_LINE(2318)
	::zpp_nape::phys::ZPP_Compound tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2318)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_add,return )

Void ZNPList_ZPP_Compound_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Compound x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","addAll",0xa9c1508e,"zpp_nape.util.ZNPList_ZPP_Compound.addAll","zpp_nape/util/Lists.hx",2329,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(2330)
		::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2331)
		while((true)){
			HX_STACK_LINE(2331)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2331)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2331)
			if ((tmp1)){
				HX_STACK_LINE(2331)
				break;
			}
			HX_STACK_LINE(2332)
			::zpp_nape::phys::ZPP_Compound i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2333)
			::zpp_nape::phys::ZPP_Compound tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2333)
			this->add(tmp2);
			HX_STACK_LINE(2334)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Compound cur,::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","insert",0xa8a38a47,"zpp_nape.util.ZNPList_ZPP_Compound.insert","zpp_nape/util/Lists.hx",2338,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2339)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2339)
	{
		HX_STACK_LINE(2339)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2339)
		{
			HX_STACK_LINE(2339)
			::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2339)
			{
				HX_STACK_LINE(2339)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2339)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2339)
				if ((tmp3)){
					HX_STACK_LINE(2339)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2339)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(2339)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2339)
					ret = tmp4;
					HX_STACK_LINE(2339)
					::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
					HX_STACK_LINE(2339)
					ret->next = null();
				}
				HX_STACK_LINE(2339)
				Dynamic();
			}
			HX_STACK_LINE(2339)
			ret->elt = o;
			HX_STACK_LINE(2339)
			tmp1 = ret;
		}
		HX_STACK_LINE(2339)
		::zpp_nape::util::ZNPNode_ZPP_Compound temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(2339)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2339)
		if ((tmp2)){
			HX_STACK_LINE(2339)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2339)
			temp->next = tmp3;
			HX_STACK_LINE(2339)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(2339)
			temp->next = cur->next;
			HX_STACK_LINE(2339)
			cur->next = temp;
		}
		HX_STACK_LINE(2339)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2339)
		this->pushmod = tmp3;
		HX_STACK_LINE(2339)
		(this->length)++;
		HX_STACK_LINE(2339)
		tmp = temp;
	}
	HX_STACK_LINE(2339)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Compound cur,::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_insert",0x6529395b,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_insert","zpp_nape/util/Lists.hx",2343,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(2352)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2352)
	{
		HX_STACK_LINE(2353)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2354)
		{
			HX_STACK_LINE(2355)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2355)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2355)
			if ((tmp2)){
				HX_STACK_LINE(2356)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2356)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(2362)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2362)
				ret = tmp3;
				HX_STACK_LINE(2363)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
				HX_STACK_LINE(2364)
				ret->next = null();
			}
			HX_STACK_LINE(2369)
			Dynamic();
		}
		HX_STACK_LINE(2371)
		ret->elt = o;
		HX_STACK_LINE(2372)
		tmp = ret;
	}
	HX_STACK_LINE(2352)
	::zpp_nape::util::ZNPNode_ZPP_Compound temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2374)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2374)
	if ((tmp1)){
		HX_STACK_LINE(2375)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2375)
		temp->next = tmp2;
		HX_STACK_LINE(2376)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(2379)
		temp->next = cur->next;
		HX_STACK_LINE(2380)
		cur->next = temp;
	}
	HX_STACK_LINE(2382)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2382)
	this->pushmod = tmp2;
	HX_STACK_LINE(2383)
	(this->length)++;
	HX_STACK_LINE(2384)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2384)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,inlined_insert,return )

Void ZNPList_ZPP_Compound_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","pop",0x96c241c3,"zpp_nape.util.ZNPList_ZPP_Compound.pop","zpp_nape/util/Lists.hx",2387,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2387)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2387)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2387)
		this->head = ret->next;
		HX_STACK_LINE(2387)
		{
			HX_STACK_LINE(2387)
			::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2387)
			o->elt = null();
			HX_STACK_LINE(2387)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2387)
			o->next = tmp1;
			HX_STACK_LINE(2387)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2387)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2387)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2387)
		if ((tmp2)){
			HX_STACK_LINE(2387)
			this->pushmod = true;
		}
		HX_STACK_LINE(2387)
		this->modified = true;
		HX_STACK_LINE(2387)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,pop,(void))

Void ZNPList_ZPP_Compound_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_pop",0x19511e2f,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_pop","zpp_nape/util/Lists.hx",2391,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2400)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2400)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2401)
		this->head = ret->next;
		HX_STACK_LINE(2403)
		{
			HX_STACK_LINE(2404)
			::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2413)
			o->elt = null();
			HX_STACK_LINE(2414)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2414)
			o->next = tmp1;
			HX_STACK_LINE(2415)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2420)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2420)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2420)
		if ((tmp2)){
			HX_STACK_LINE(2420)
			this->pushmod = true;
		}
		HX_STACK_LINE(2421)
		this->modified = true;
		HX_STACK_LINE(2422)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_pop,(void))

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","pop_unsafe",0xde7e6262,"zpp_nape.util.ZNPList_ZPP_Compound.pop_unsafe","zpp_nape/util/Lists.hx",2424,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2425)
	::zpp_nape::phys::ZPP_Compound tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2425)
	{
		HX_STACK_LINE(2425)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2425)
		::zpp_nape::phys::ZPP_Compound ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2425)
		this->pop();
		HX_STACK_LINE(2425)
		tmp = ret;
	}
	HX_STACK_LINE(2425)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,pop_unsafe,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_pop_unsafe",0x650b2b76,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_pop_unsafe","zpp_nape/util/Lists.hx",2429,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2438)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2438)
	::zpp_nape::phys::ZPP_Compound ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2439)
	this->pop();
	HX_STACK_LINE(2440)
	::zpp_nape::phys::ZPP_Compound tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2440)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Compound_obj::remove( ::zpp_nape::phys::ZPP_Compound obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","remove",0x0f4ee352,"zpp_nape.util.ZNPList_ZPP_Compound.remove","zpp_nape/util/Lists.hx",2451,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2451)
		::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2451)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2451)
		::zpp_nape::util::ZNPNode_ZPP_Compound cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2451)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2451)
		while((true)){
			HX_STACK_LINE(2451)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2451)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2451)
			if ((tmp2)){
				HX_STACK_LINE(2451)
				break;
			}
			HX_STACK_LINE(2451)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2451)
			if ((tmp3)){
				HX_STACK_LINE(2451)
				{
					HX_STACK_LINE(2451)
					::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2451)
					::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2451)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2451)
					if ((tmp4)){
						HX_STACK_LINE(2451)
						::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2451)
						old = tmp5;
						HX_STACK_LINE(2451)
						ret1 = old->next;
						HX_STACK_LINE(2451)
						this->head = ret1;
						HX_STACK_LINE(2451)
						::zpp_nape::util::ZNPNode_ZPP_Compound tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2451)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2451)
						if ((tmp7)){
							HX_STACK_LINE(2451)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2451)
						old = pre->next;
						HX_STACK_LINE(2451)
						ret1 = old->next;
						HX_STACK_LINE(2451)
						pre->next = ret1;
						HX_STACK_LINE(2451)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2451)
						if ((tmp5)){
							HX_STACK_LINE(2451)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2451)
					{
						HX_STACK_LINE(2451)
						::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2451)
						o->elt = null();
						HX_STACK_LINE(2451)
						::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2451)
						o->next = tmp5;
						HX_STACK_LINE(2451)
						::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2451)
					this->modified = true;
					HX_STACK_LINE(2451)
					(this->length)--;
					HX_STACK_LINE(2451)
					this->pushmod = true;
					HX_STACK_LINE(2451)
					ret1;
				}
				HX_STACK_LINE(2451)
				ret = true;
				HX_STACK_LINE(2451)
				break;
			}
			HX_STACK_LINE(2451)
			pre = cur;
			HX_STACK_LINE(2451)
			cur = cur->next;
		}
		HX_STACK_LINE(2451)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,remove,(void))

bool ZNPList_ZPP_Compound_obj::try_remove( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","try_remove",0xf5a89816,"zpp_nape.util.ZNPList_ZPP_Compound.try_remove","zpp_nape/util/Lists.hx",2453,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2462)
	::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2463)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2463)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2464)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2465)
	while((true)){
		HX_STACK_LINE(2465)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2465)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2465)
		if ((tmp2)){
			HX_STACK_LINE(2465)
			break;
		}
		HX_STACK_LINE(2466)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2466)
		if ((tmp3)){
			HX_STACK_LINE(2467)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2467)
			this->erase(tmp4);
			HX_STACK_LINE(2468)
			ret = true;
			HX_STACK_LINE(2469)
			break;
		}
		HX_STACK_LINE(2471)
		pre = cur;
		HX_STACK_LINE(2472)
		cur = cur->next;
	}
	HX_STACK_LINE(2474)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2474)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,try_remove,return )

Void ZNPList_ZPP_Compound_obj::inlined_remove( ::zpp_nape::phys::ZPP_Compound obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_remove",0xcbd49266,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_remove","zpp_nape/util/Lists.hx",2487,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2487)
		::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2487)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2487)
		::zpp_nape::util::ZNPNode_ZPP_Compound cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2487)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2487)
		while((true)){
			HX_STACK_LINE(2487)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2487)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2487)
			if ((tmp2)){
				HX_STACK_LINE(2487)
				break;
			}
			HX_STACK_LINE(2487)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2487)
			if ((tmp3)){
				HX_STACK_LINE(2487)
				{
					HX_STACK_LINE(2487)
					::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2487)
					::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2487)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2487)
					if ((tmp4)){
						HX_STACK_LINE(2487)
						::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2487)
						old = tmp5;
						HX_STACK_LINE(2487)
						ret1 = old->next;
						HX_STACK_LINE(2487)
						this->head = ret1;
						HX_STACK_LINE(2487)
						::zpp_nape::util::ZNPNode_ZPP_Compound tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2487)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2487)
						if ((tmp7)){
							HX_STACK_LINE(2487)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2487)
						old = pre->next;
						HX_STACK_LINE(2487)
						ret1 = old->next;
						HX_STACK_LINE(2487)
						pre->next = ret1;
						HX_STACK_LINE(2487)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2487)
						if ((tmp5)){
							HX_STACK_LINE(2487)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2487)
					{
						HX_STACK_LINE(2487)
						::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2487)
						o->elt = null();
						HX_STACK_LINE(2487)
						::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2487)
						o->next = tmp5;
						HX_STACK_LINE(2487)
						::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2487)
					this->modified = true;
					HX_STACK_LINE(2487)
					(this->length)--;
					HX_STACK_LINE(2487)
					this->pushmod = true;
					HX_STACK_LINE(2487)
					ret1;
				}
				HX_STACK_LINE(2487)
				ret = true;
				HX_STACK_LINE(2487)
				break;
			}
			HX_STACK_LINE(2487)
			pre = cur;
			HX_STACK_LINE(2487)
			cur = cur->next;
		}
		HX_STACK_LINE(2487)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_remove,(void))

bool ZNPList_ZPP_Compound_obj::inlined_try_remove( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_try_remove",0x7c35612a,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_try_remove","zpp_nape/util/Lists.hx",2491,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2500)
	::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2501)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2501)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2502)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2503)
	while((true)){
		HX_STACK_LINE(2503)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2503)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2503)
		if ((tmp2)){
			HX_STACK_LINE(2503)
			break;
		}
		HX_STACK_LINE(2504)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2504)
		if ((tmp3)){
			HX_STACK_LINE(2505)
			{
				HX_STACK_LINE(2505)
				::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2505)
				::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(2505)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2505)
				if ((tmp4)){
					HX_STACK_LINE(2505)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2505)
					old = tmp5;
					HX_STACK_LINE(2505)
					ret1 = old->next;
					HX_STACK_LINE(2505)
					this->head = ret1;
					HX_STACK_LINE(2505)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2505)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2505)
					if ((tmp7)){
						HX_STACK_LINE(2505)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2505)
					old = pre->next;
					HX_STACK_LINE(2505)
					ret1 = old->next;
					HX_STACK_LINE(2505)
					pre->next = ret1;
					HX_STACK_LINE(2505)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2505)
					if ((tmp5)){
						HX_STACK_LINE(2505)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(2505)
				{
					HX_STACK_LINE(2505)
					::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2505)
					o->elt = null();
					HX_STACK_LINE(2505)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2505)
					o->next = tmp5;
					HX_STACK_LINE(2505)
					::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2505)
				this->modified = true;
				HX_STACK_LINE(2505)
				(this->length)--;
				HX_STACK_LINE(2505)
				this->pushmod = true;
				HX_STACK_LINE(2505)
				ret1;
			}
			HX_STACK_LINE(2506)
			ret = true;
			HX_STACK_LINE(2507)
			break;
		}
		HX_STACK_LINE(2509)
		pre = cur;
		HX_STACK_LINE(2510)
		cur = cur->next;
	}
	HX_STACK_LINE(2512)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2512)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Compound pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","erase",0x29b0bd98,"zpp_nape.util.ZNPList_ZPP_Compound.erase","zpp_nape/util/Lists.hx",2514,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(2515)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2515)
	{
		HX_STACK_LINE(2515)
		::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(2515)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2515)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2515)
		if ((tmp1)){
			HX_STACK_LINE(2515)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2515)
			old = tmp2;
			HX_STACK_LINE(2515)
			ret = old->next;
			HX_STACK_LINE(2515)
			this->head = ret;
			HX_STACK_LINE(2515)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2515)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2515)
			if ((tmp4)){
				HX_STACK_LINE(2515)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(2515)
			old = pre->next;
			HX_STACK_LINE(2515)
			ret = old->next;
			HX_STACK_LINE(2515)
			pre->next = ret;
			HX_STACK_LINE(2515)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2515)
			if ((tmp2)){
				HX_STACK_LINE(2515)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(2515)
		{
			HX_STACK_LINE(2515)
			::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2515)
			o->elt = null();
			HX_STACK_LINE(2515)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2515)
			o->next = tmp2;
			HX_STACK_LINE(2515)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2515)
		this->modified = true;
		HX_STACK_LINE(2515)
		(this->length)--;
		HX_STACK_LINE(2515)
		this->pushmod = true;
		HX_STACK_LINE(2515)
		tmp = ret;
	}
	HX_STACK_LINE(2515)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Compound pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_erase",0x93008d04,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_erase","zpp_nape/util/Lists.hx",2519,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(2528)
	::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2529)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2530)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2530)
	if ((tmp)){
		HX_STACK_LINE(2531)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2531)
		old = tmp1;
		HX_STACK_LINE(2532)
		ret = old->next;
		HX_STACK_LINE(2533)
		this->head = ret;
		HX_STACK_LINE(2534)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2534)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2534)
		if ((tmp3)){
			HX_STACK_LINE(2534)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2537)
		old = pre->next;
		HX_STACK_LINE(2538)
		ret = old->next;
		HX_STACK_LINE(2539)
		pre->next = ret;
		HX_STACK_LINE(2540)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2540)
		if ((tmp1)){
			HX_STACK_LINE(2540)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2543)
	{
		HX_STACK_LINE(2544)
		::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2553)
		o->elt = null();
		HX_STACK_LINE(2554)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2554)
		o->next = tmp1;
		HX_STACK_LINE(2555)
		::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2560)
	this->modified = true;
	HX_STACK_LINE(2561)
	(this->length)--;
	HX_STACK_LINE(2562)
	this->pushmod = true;
	HX_STACK_LINE(2563)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2563)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Compound pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","splice",0xca64cc8a,"zpp_nape.util.ZNPList_ZPP_Compound.splice","zpp_nape/util/Lists.hx",2565,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(2566)
	while((true)){
		HX_STACK_LINE(2566)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2566)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2566)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2566)
		if ((tmp1)){
			HX_STACK_LINE(2566)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(2566)
			tmp2 = false;
		}
		HX_STACK_LINE(2566)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2566)
		if ((tmp3)){
			HX_STACK_LINE(2566)
			break;
		}
		HX_STACK_LINE(2566)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2566)
		this->erase(tmp4);
	}
	HX_STACK_LINE(2567)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2567)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,splice,return )

Void ZNPList_ZPP_Compound_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","clear",0xfeef463f,"zpp_nape.util.ZNPList_ZPP_Compound.clear","zpp_nape/util/Lists.hx",2570,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2570)
		while((true)){
			HX_STACK_LINE(2570)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2570)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2570)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2570)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2570)
			if ((tmp3)){
				HX_STACK_LINE(2570)
				break;
			}
			HX_STACK_LINE(2570)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2570)
			::zpp_nape::util::ZNPNode_ZPP_Compound ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2570)
			this->head = ret->next;
			HX_STACK_LINE(2570)
			{
				HX_STACK_LINE(2570)
				::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2570)
				o->elt = null();
				HX_STACK_LINE(2570)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2570)
				o->next = tmp5;
				HX_STACK_LINE(2570)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2570)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2570)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2570)
			if ((tmp6)){
				HX_STACK_LINE(2570)
				this->pushmod = true;
			}
			HX_STACK_LINE(2570)
			this->modified = true;
			HX_STACK_LINE(2570)
			(this->length)--;
		}
		HX_STACK_LINE(2570)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,clear,(void))

Void ZNPList_ZPP_Compound_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_clear",0x683f15ab,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_clear","zpp_nape/util/Lists.hx",2575,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2576)
		while((true)){
			HX_STACK_LINE(2576)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2576)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2576)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2576)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2576)
			if ((tmp3)){
				HX_STACK_LINE(2576)
				break;
			}
			HX_STACK_LINE(2576)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2576)
			::zpp_nape::util::ZNPNode_ZPP_Compound ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2576)
			this->head = ret->next;
			HX_STACK_LINE(2576)
			{
				HX_STACK_LINE(2576)
				::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2576)
				o->elt = null();
				HX_STACK_LINE(2576)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2576)
				o->next = tmp5;
				HX_STACK_LINE(2576)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2576)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2576)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2576)
			if ((tmp6)){
				HX_STACK_LINE(2576)
				this->pushmod = true;
			}
			HX_STACK_LINE(2576)
			this->modified = true;
			HX_STACK_LINE(2576)
			(this->length)--;
		}
		HX_STACK_LINE(2577)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_clear,(void))

Void ZNPList_ZPP_Compound_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","reverse",0x7db41e54,"zpp_nape.util.ZNPList_ZPP_Compound.reverse","zpp_nape/util/Lists.hx",2580,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2581)
		::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2581)
		::zpp_nape::util::ZNPNode_ZPP_Compound cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2582)
		::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2583)
		while((true)){
			HX_STACK_LINE(2583)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2583)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2583)
			if ((tmp2)){
				HX_STACK_LINE(2583)
				break;
			}
			HX_STACK_LINE(2584)
			::zpp_nape::util::ZNPNode_ZPP_Compound nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(2585)
			cur->next = pre;
			HX_STACK_LINE(2586)
			this->head = cur;
			HX_STACK_LINE(2587)
			pre = cur;
			HX_STACK_LINE(2588)
			cur = nx;
		}
		HX_STACK_LINE(2590)
		this->modified = true;
		HX_STACK_LINE(2591)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,reverse,(void))

bool ZNPList_ZPP_Compound_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","empty",0x266e0f3f,"zpp_nape.util.ZNPList_ZPP_Compound.empty","zpp_nape/util/Lists.hx",2595,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2596)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2596)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2596)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,empty,return )

int ZNPList_ZPP_Compound_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","size",0x552e684f,"zpp_nape.util.ZNPList_ZPP_Compound.size","zpp_nape/util/Lists.hx",2600,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2601)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2601)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,size,return )

bool ZNPList_ZPP_Compound_obj::has( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","has",0x96bc238c,"zpp_nape.util.ZNPList_ZPP_Compound.has","zpp_nape/util/Lists.hx",2603,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2604)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2604)
	{
		HX_STACK_LINE(2604)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2604)
		{
			HX_STACK_LINE(2604)
			ret = false;
			HX_STACK_LINE(2604)
			{
				HX_STACK_LINE(2604)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2604)
				::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(2604)
				while((true)){
					HX_STACK_LINE(2604)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2604)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2604)
					if ((tmp3)){
						HX_STACK_LINE(2604)
						break;
					}
					HX_STACK_LINE(2604)
					::zpp_nape::phys::ZPP_Compound npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(2604)
					{
						HX_STACK_LINE(2604)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(2604)
						if ((tmp4)){
							HX_STACK_LINE(2604)
							ret = true;
							HX_STACK_LINE(2604)
							break;
						}
					}
					HX_STACK_LINE(2604)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(2604)
		tmp = ret;
	}
	HX_STACK_LINE(2604)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,has,return )

bool ZNPList_ZPP_Compound_obj::inlined_has( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","inlined_has",0x194afff8,"zpp_nape.util.ZNPList_ZPP_Compound.inlined_has","zpp_nape/util/Lists.hx",2608,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2617)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2618)
	{
		HX_STACK_LINE(2619)
		ret = false;
		HX_STACK_LINE(2620)
		{
			HX_STACK_LINE(2621)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2621)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2622)
			while((true)){
				HX_STACK_LINE(2622)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2622)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2622)
				if ((tmp2)){
					HX_STACK_LINE(2622)
					break;
				}
				HX_STACK_LINE(2623)
				::zpp_nape::phys::ZPP_Compound npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(2624)
				{
					HX_STACK_LINE(2625)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2625)
					if ((tmp3)){
						HX_STACK_LINE(2626)
						ret = true;
						HX_STACK_LINE(2627)
						break;
					}
				}
				HX_STACK_LINE(2630)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2634)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2634)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_has,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","front",0xbd21ed5b,"zpp_nape.util.ZNPList_ZPP_Compound.front","zpp_nape/util/Lists.hx",2638,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2639)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2639)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2639)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,front,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","back",0x49eba1b5,"zpp_nape.util.ZNPList_ZPP_Compound.back","zpp_nape/util/Lists.hx",2641,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2642)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2642)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2643)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2644)
	while((true)){
		HX_STACK_LINE(2644)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2644)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2644)
		if ((tmp2)){
			HX_STACK_LINE(2644)
			break;
		}
		HX_STACK_LINE(2645)
		ret = cur;
		HX_STACK_LINE(2646)
		cur = cur->next;
	}
	HX_STACK_LINE(2648)
	::zpp_nape::phys::ZPP_Compound tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2648)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","iterator_at",0x1de9f016,"zpp_nape.util.ZNPList_ZPP_Compound.iterator_at","zpp_nape/util/Lists.hx",2650,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(2659)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2659)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2660)
	while((true)){
		HX_STACK_LINE(2660)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2660)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2660)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2660)
		if ((tmp2)){
			HX_STACK_LINE(2660)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(2660)
			tmp3 = false;
		}
		HX_STACK_LINE(2660)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2660)
		if ((tmp4)){
			HX_STACK_LINE(2660)
			break;
		}
		HX_STACK_LINE(2660)
		ret = ret->next;
	}
	HX_STACK_LINE(2661)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2661)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,iterator_at,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Compound","at",0x40f67d01,"zpp_nape.util.ZNPList_ZPP_Compound.at","zpp_nape/util/Lists.hx",2663,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(2672)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2672)
	::zpp_nape::util::ZNPNode_ZPP_Compound tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2672)
	::zpp_nape::util::ZNPNode_ZPP_Compound it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(2673)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2673)
	::zpp_nape::phys::ZPP_Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2673)
	if ((tmp2)){
		HX_STACK_LINE(2673)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(2673)
		tmp3 = null();
	}
	HX_STACK_LINE(2673)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,at,return )


ZNPList_ZPP_Compound_obj::ZNPList_ZPP_Compound_obj()
{
}

void ZNPList_ZPP_Compound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Compound);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Compound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Compound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_Compound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Compound >(); return inValue; }
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

bool ZNPList_ZPP_Compound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Compound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Compound*/ ,(int)offsetof(ZNPList_ZPP_Compound_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Compound_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Compound_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Compound_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Compound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Compound_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Compound_obj::__mClass;

void ZNPList_ZPP_Compound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Compound","\xa0","\xc3","\xca","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Compound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Compound_obj >;
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
