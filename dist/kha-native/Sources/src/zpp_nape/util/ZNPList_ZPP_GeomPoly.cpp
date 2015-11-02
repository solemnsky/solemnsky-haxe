#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomPoly
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_GeomPoly_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","new",0x00e5cacf,"zpp_nape.util.ZNPList_ZPP_GeomPoly.new","zpp_nape/util/Lists.hx",13936,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13946)
	this->length = (int)0;
	HX_STACK_LINE(13945)
	this->pushmod = false;
	HX_STACK_LINE(13944)
	this->modified = false;
	HX_STACK_LINE(13937)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_GeomPoly_obj::~ZNPList_ZPP_GeomPoly_obj() { }

Dynamic ZNPList_ZPP_GeomPoly_obj::__CreateEmpty() { return  new ZNPList_ZPP_GeomPoly_obj; }
hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > ZNPList_ZPP_GeomPoly_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > _result_ = new ZNPList_ZPP_GeomPoly_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_GeomPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > _result_ = new ZNPList_ZPP_GeomPoly_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","begin",0x752e9e58,"zpp_nape.util.ZNPList_ZPP_GeomPoly.begin","zpp_nape/util/Lists.hx",13941,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13942)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13942)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,begin,return )

Void ZNPList_ZPP_GeomPoly_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","setbegin",0x16fdb678,"zpp_nape.util.ZNPList_ZPP_GeomPoly.setbegin","zpp_nape/util/Lists.hx",13949,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(13950)
		this->head = i;
		HX_STACK_LINE(13951)
		this->modified = true;
		HX_STACK_LINE(13952)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,setbegin,(void))

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::add( ::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","add",0x00dbec90,"zpp_nape.util.ZNPList_ZPP_GeomPoly.add","zpp_nape/util/Lists.hx",13954,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13955)
	::zpp_nape::geom::ZPP_GeomPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13955)
	{
		HX_STACK_LINE(13955)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13955)
		{
			HX_STACK_LINE(13955)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13955)
			{
				HX_STACK_LINE(13955)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp2 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(13955)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13955)
				if ((tmp3)){
					HX_STACK_LINE(13955)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13955)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(13955)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(13955)
					ret = tmp4;
					HX_STACK_LINE(13955)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
					HX_STACK_LINE(13955)
					ret->next = null();
				}
				HX_STACK_LINE(13955)
				Dynamic();
			}
			HX_STACK_LINE(13955)
			ret->elt = o;
			HX_STACK_LINE(13955)
			tmp1 = ret;
		}
		HX_STACK_LINE(13955)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(13955)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13955)
		temp->next = tmp2;
		HX_STACK_LINE(13955)
		this->head = temp;
		HX_STACK_LINE(13955)
		this->modified = true;
		HX_STACK_LINE(13955)
		(this->length)++;
		HX_STACK_LINE(13955)
		tmp = o;
	}
	HX_STACK_LINE(13955)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,add,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_add( ::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_add",0xb2f6cdfc,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_add","zpp_nape/util/Lists.hx",13959,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(13968)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13968)
	{
		HX_STACK_LINE(13969)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13970)
		{
			HX_STACK_LINE(13971)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13971)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13971)
			if ((tmp2)){
				HX_STACK_LINE(13972)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13972)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(13978)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(13978)
				ret = tmp3;
				HX_STACK_LINE(13979)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
				HX_STACK_LINE(13980)
				ret->next = null();
			}
			HX_STACK_LINE(13985)
			Dynamic();
		}
		HX_STACK_LINE(13987)
		ret->elt = o;
		HX_STACK_LINE(13988)
		tmp = ret;
	}
	HX_STACK_LINE(13968)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13990)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13990)
	temp->next = tmp1;
	HX_STACK_LINE(13991)
	this->head = temp;
	HX_STACK_LINE(13992)
	this->modified = true;
	HX_STACK_LINE(13993)
	(this->length)++;
	HX_STACK_LINE(13994)
	::zpp_nape::geom::ZPP_GeomPoly tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13994)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_add,return )

Void ZNPList_ZPP_GeomPoly_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_GeomPoly x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","addAll",0x17bffe71,"zpp_nape.util.ZNPList_ZPP_GeomPoly.addAll","zpp_nape/util/Lists.hx",14005,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(14006)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(14007)
		while((true)){
			HX_STACK_LINE(14007)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(14007)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14007)
			if ((tmp1)){
				HX_STACK_LINE(14007)
				break;
			}
			HX_STACK_LINE(14008)
			::zpp_nape::geom::ZPP_GeomPoly i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(14009)
			::zpp_nape::geom::ZPP_GeomPoly tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14009)
			this->add(tmp2);
			HX_STACK_LINE(14010)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur,::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","insert",0x16a2382a,"zpp_nape.util.ZNPList_ZPP_GeomPoly.insert","zpp_nape/util/Lists.hx",14014,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(14015)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14015)
	{
		HX_STACK_LINE(14015)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14015)
		{
			HX_STACK_LINE(14015)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14015)
			{
				HX_STACK_LINE(14015)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp2 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(14015)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(14015)
				if ((tmp3)){
					HX_STACK_LINE(14015)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(14015)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(14015)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(14015)
					ret = tmp4;
					HX_STACK_LINE(14015)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
					HX_STACK_LINE(14015)
					ret->next = null();
				}
				HX_STACK_LINE(14015)
				Dynamic();
			}
			HX_STACK_LINE(14015)
			ret->elt = o;
			HX_STACK_LINE(14015)
			tmp1 = ret;
		}
		HX_STACK_LINE(14015)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(14015)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14015)
		if ((tmp2)){
			HX_STACK_LINE(14015)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14015)
			temp->next = tmp3;
			HX_STACK_LINE(14015)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(14015)
			temp->next = cur->next;
			HX_STACK_LINE(14015)
			cur->next = temp;
		}
		HX_STACK_LINE(14015)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14015)
		this->pushmod = tmp3;
		HX_STACK_LINE(14015)
		(this->length)++;
		HX_STACK_LINE(14015)
		tmp = temp;
	}
	HX_STACK_LINE(14015)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur,::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_insert",0x312d023e,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_insert","zpp_nape/util/Lists.hx",14019,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(14028)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14028)
	{
		HX_STACK_LINE(14029)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14030)
		{
			HX_STACK_LINE(14031)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14031)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14031)
			if ((tmp2)){
				HX_STACK_LINE(14032)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(14032)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(14038)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(14038)
				ret = tmp3;
				HX_STACK_LINE(14039)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
				HX_STACK_LINE(14040)
				ret->next = null();
			}
			HX_STACK_LINE(14045)
			Dynamic();
		}
		HX_STACK_LINE(14047)
		ret->elt = o;
		HX_STACK_LINE(14048)
		tmp = ret;
	}
	HX_STACK_LINE(14028)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(14050)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14050)
	if ((tmp1)){
		HX_STACK_LINE(14051)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14051)
		temp->next = tmp2;
		HX_STACK_LINE(14052)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(14055)
		temp->next = cur->next;
		HX_STACK_LINE(14056)
		cur->next = temp;
	}
	HX_STACK_LINE(14058)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14058)
	this->pushmod = tmp2;
	HX_STACK_LINE(14059)
	(this->length)++;
	HX_STACK_LINE(14060)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14060)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,inlined_insert,return )

Void ZNPList_ZPP_GeomPoly_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","pop",0x00e75800,"zpp_nape.util.ZNPList_ZPP_GeomPoly.pop","zpp_nape/util/Lists.hx",14063,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14063)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14063)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14063)
		this->head = ret->next;
		HX_STACK_LINE(14063)
		{
			HX_STACK_LINE(14063)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14063)
			o->elt = null();
			HX_STACK_LINE(14063)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14063)
			o->next = tmp1;
			HX_STACK_LINE(14063)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14063)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14063)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14063)
		if ((tmp2)){
			HX_STACK_LINE(14063)
			this->pushmod = true;
		}
		HX_STACK_LINE(14063)
		this->modified = true;
		HX_STACK_LINE(14063)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,pop,(void))

Void ZNPList_ZPP_GeomPoly_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_pop",0xb302396c,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_pop","zpp_nape/util/Lists.hx",14067,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14076)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14076)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14077)
		this->head = ret->next;
		HX_STACK_LINE(14079)
		{
			HX_STACK_LINE(14080)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14089)
			o->elt = null();
			HX_STACK_LINE(14090)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14090)
			o->next = tmp1;
			HX_STACK_LINE(14091)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14096)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14096)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14096)
		if ((tmp2)){
			HX_STACK_LINE(14096)
			this->pushmod = true;
		}
		HX_STACK_LINE(14097)
		this->modified = true;
		HX_STACK_LINE(14098)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","pop_unsafe",0x29cd3dc5,"zpp_nape.util.ZNPList_ZPP_GeomPoly.pop_unsafe","zpp_nape/util/Lists.hx",14100,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14101)
	::zpp_nape::geom::ZPP_GeomPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14101)
	{
		HX_STACK_LINE(14101)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14101)
		::zpp_nape::geom::ZPP_GeomPoly ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14101)
		this->pop();
		HX_STACK_LINE(14101)
		tmp = ret;
	}
	HX_STACK_LINE(14101)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_pop_unsafe",0xc688a1d9,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_pop_unsafe","zpp_nape/util/Lists.hx",14105,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14114)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14114)
	::zpp_nape::geom::ZPP_GeomPoly ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14115)
	this->pop();
	HX_STACK_LINE(14116)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14116)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_GeomPoly_obj::remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","remove",0x7d4d9135,"zpp_nape.util.ZNPList_ZPP_GeomPoly.remove","zpp_nape/util/Lists.hx",14127,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(14127)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14127)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14127)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14127)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14127)
		while((true)){
			HX_STACK_LINE(14127)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14127)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14127)
			if ((tmp2)){
				HX_STACK_LINE(14127)
				break;
			}
			HX_STACK_LINE(14127)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14127)
			if ((tmp3)){
				HX_STACK_LINE(14127)
				{
					HX_STACK_LINE(14127)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(14127)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(14127)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(14127)
					if ((tmp4)){
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(14127)
						old = tmp5;
						HX_STACK_LINE(14127)
						ret1 = old->next;
						HX_STACK_LINE(14127)
						this->head = ret1;
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(14127)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(14127)
						if ((tmp7)){
							HX_STACK_LINE(14127)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(14127)
						old = pre->next;
						HX_STACK_LINE(14127)
						ret1 = old->next;
						HX_STACK_LINE(14127)
						pre->next = ret1;
						HX_STACK_LINE(14127)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(14127)
						if ((tmp5)){
							HX_STACK_LINE(14127)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(14127)
					{
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(14127)
						o->elt = null();
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(14127)
						o->next = tmp5;
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
					}
					HX_STACK_LINE(14127)
					this->modified = true;
					HX_STACK_LINE(14127)
					(this->length)--;
					HX_STACK_LINE(14127)
					this->pushmod = true;
					HX_STACK_LINE(14127)
					ret1;
				}
				HX_STACK_LINE(14127)
				ret = true;
				HX_STACK_LINE(14127)
				break;
			}
			HX_STACK_LINE(14127)
			pre = cur;
			HX_STACK_LINE(14127)
			cur = cur->next;
		}
		HX_STACK_LINE(14127)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,remove,(void))

bool ZNPList_ZPP_GeomPoly_obj::try_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","try_remove",0x40f77379,"zpp_nape.util.ZNPList_ZPP_GeomPoly.try_remove","zpp_nape/util/Lists.hx",14129,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14138)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(14139)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14139)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14140)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14141)
	while((true)){
		HX_STACK_LINE(14141)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14141)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14141)
		if ((tmp2)){
			HX_STACK_LINE(14141)
			break;
		}
		HX_STACK_LINE(14142)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14142)
		if ((tmp3)){
			HX_STACK_LINE(14143)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(14143)
			this->erase(tmp4);
			HX_STACK_LINE(14144)
			ret = true;
			HX_STACK_LINE(14145)
			break;
		}
		HX_STACK_LINE(14147)
		pre = cur;
		HX_STACK_LINE(14148)
		cur = cur->next;
	}
	HX_STACK_LINE(14150)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14150)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,try_remove,return )

Void ZNPList_ZPP_GeomPoly_obj::inlined_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_remove",0x97d85b49,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_remove","zpp_nape/util/Lists.hx",14163,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(14163)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14163)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14163)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14163)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14163)
		while((true)){
			HX_STACK_LINE(14163)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14163)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14163)
			if ((tmp2)){
				HX_STACK_LINE(14163)
				break;
			}
			HX_STACK_LINE(14163)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14163)
			if ((tmp3)){
				HX_STACK_LINE(14163)
				{
					HX_STACK_LINE(14163)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(14163)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(14163)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(14163)
					if ((tmp4)){
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(14163)
						old = tmp5;
						HX_STACK_LINE(14163)
						ret1 = old->next;
						HX_STACK_LINE(14163)
						this->head = ret1;
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(14163)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(14163)
						if ((tmp7)){
							HX_STACK_LINE(14163)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(14163)
						old = pre->next;
						HX_STACK_LINE(14163)
						ret1 = old->next;
						HX_STACK_LINE(14163)
						pre->next = ret1;
						HX_STACK_LINE(14163)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(14163)
						if ((tmp5)){
							HX_STACK_LINE(14163)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(14163)
					{
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(14163)
						o->elt = null();
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(14163)
						o->next = tmp5;
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
					}
					HX_STACK_LINE(14163)
					this->modified = true;
					HX_STACK_LINE(14163)
					(this->length)--;
					HX_STACK_LINE(14163)
					this->pushmod = true;
					HX_STACK_LINE(14163)
					ret1;
				}
				HX_STACK_LINE(14163)
				ret = true;
				HX_STACK_LINE(14163)
				break;
			}
			HX_STACK_LINE(14163)
			pre = cur;
			HX_STACK_LINE(14163)
			cur = cur->next;
		}
		HX_STACK_LINE(14163)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_remove,(void))

bool ZNPList_ZPP_GeomPoly_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_try_remove",0xddb2d78d,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_try_remove","zpp_nape/util/Lists.hx",14167,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14176)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(14177)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14177)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14178)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14179)
	while((true)){
		HX_STACK_LINE(14179)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14179)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14179)
		if ((tmp2)){
			HX_STACK_LINE(14179)
			break;
		}
		HX_STACK_LINE(14180)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14180)
		if ((tmp3)){
			HX_STACK_LINE(14181)
			{
				HX_STACK_LINE(14181)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(14181)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(14181)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(14181)
				if ((tmp4)){
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(14181)
					old = tmp5;
					HX_STACK_LINE(14181)
					ret1 = old->next;
					HX_STACK_LINE(14181)
					this->head = ret1;
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(14181)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(14181)
					if ((tmp7)){
						HX_STACK_LINE(14181)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(14181)
					old = pre->next;
					HX_STACK_LINE(14181)
					ret1 = old->next;
					HX_STACK_LINE(14181)
					pre->next = ret1;
					HX_STACK_LINE(14181)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(14181)
					if ((tmp5)){
						HX_STACK_LINE(14181)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(14181)
				{
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(14181)
					o->elt = null();
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(14181)
					o->next = tmp5;
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(14181)
				this->modified = true;
				HX_STACK_LINE(14181)
				(this->length)--;
				HX_STACK_LINE(14181)
				this->pushmod = true;
				HX_STACK_LINE(14181)
				ret1;
			}
			HX_STACK_LINE(14182)
			ret = true;
			HX_STACK_LINE(14183)
			break;
		}
		HX_STACK_LINE(14185)
		pre = cur;
		HX_STACK_LINE(14186)
		cur = cur->next;
	}
	HX_STACK_LINE(14188)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14188)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","erase",0x37f59d15,"zpp_nape.util.ZNPList_ZPP_GeomPoly.erase","zpp_nape/util/Lists.hx",14190,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(14191)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14191)
	{
		HX_STACK_LINE(14191)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(14191)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14191)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14191)
		if ((tmp1)){
			HX_STACK_LINE(14191)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14191)
			old = tmp2;
			HX_STACK_LINE(14191)
			ret = old->next;
			HX_STACK_LINE(14191)
			this->head = ret;
			HX_STACK_LINE(14191)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14191)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(14191)
			if ((tmp4)){
				HX_STACK_LINE(14191)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(14191)
			old = pre->next;
			HX_STACK_LINE(14191)
			ret = old->next;
			HX_STACK_LINE(14191)
			pre->next = ret;
			HX_STACK_LINE(14191)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14191)
			if ((tmp2)){
				HX_STACK_LINE(14191)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(14191)
		{
			HX_STACK_LINE(14191)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14191)
			o->elt = null();
			HX_STACK_LINE(14191)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp2 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14191)
			o->next = tmp2;
			HX_STACK_LINE(14191)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14191)
		this->modified = true;
		HX_STACK_LINE(14191)
		(this->length)--;
		HX_STACK_LINE(14191)
		this->pushmod = true;
		HX_STACK_LINE(14191)
		tmp = ret;
	}
	HX_STACK_LINE(14191)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_erase",0xcf9cb181,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_erase","zpp_nape/util/Lists.hx",14195,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(14204)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(14205)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14206)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14206)
	if ((tmp)){
		HX_STACK_LINE(14207)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14207)
		old = tmp1;
		HX_STACK_LINE(14208)
		ret = old->next;
		HX_STACK_LINE(14209)
		this->head = ret;
		HX_STACK_LINE(14210)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14210)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14210)
		if ((tmp3)){
			HX_STACK_LINE(14210)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(14213)
		old = pre->next;
		HX_STACK_LINE(14214)
		ret = old->next;
		HX_STACK_LINE(14215)
		pre->next = ret;
		HX_STACK_LINE(14216)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14216)
		if ((tmp1)){
			HX_STACK_LINE(14216)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(14219)
	{
		HX_STACK_LINE(14220)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(14229)
		o->elt = null();
		HX_STACK_LINE(14230)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14230)
		o->next = tmp1;
		HX_STACK_LINE(14231)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
	}
	HX_STACK_LINE(14236)
	this->modified = true;
	HX_STACK_LINE(14237)
	(this->length)--;
	HX_STACK_LINE(14238)
	this->pushmod = true;
	HX_STACK_LINE(14239)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14239)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","splice",0x38637a6d,"zpp_nape.util.ZNPList_ZPP_GeomPoly.splice","zpp_nape/util/Lists.hx",14241,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(14242)
	while((true)){
		HX_STACK_LINE(14242)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14242)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14242)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14242)
		if ((tmp1)){
			HX_STACK_LINE(14242)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(14242)
			tmp2 = false;
		}
		HX_STACK_LINE(14242)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14242)
		if ((tmp3)){
			HX_STACK_LINE(14242)
			break;
		}
		HX_STACK_LINE(14242)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14242)
		this->erase(tmp4);
	}
	HX_STACK_LINE(14243)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14243)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,splice,return )

Void ZNPList_ZPP_GeomPoly_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","clear",0x0d3425bc,"zpp_nape.util.ZNPList_ZPP_GeomPoly.clear","zpp_nape/util/Lists.hx",14246,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14246)
		while((true)){
			HX_STACK_LINE(14246)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(14246)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14246)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14246)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14246)
			if ((tmp3)){
				HX_STACK_LINE(14246)
				break;
			}
			HX_STACK_LINE(14246)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(14246)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14246)
			this->head = ret->next;
			HX_STACK_LINE(14246)
			{
				HX_STACK_LINE(14246)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(14246)
				o->elt = null();
				HX_STACK_LINE(14246)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(14246)
				o->next = tmp5;
				HX_STACK_LINE(14246)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(14246)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(14246)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(14246)
			if ((tmp6)){
				HX_STACK_LINE(14246)
				this->pushmod = true;
			}
			HX_STACK_LINE(14246)
			this->modified = true;
			HX_STACK_LINE(14246)
			(this->length)--;
		}
		HX_STACK_LINE(14246)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,clear,(void))

Void ZNPList_ZPP_GeomPoly_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_clear",0xa4db3a28,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_clear","zpp_nape/util/Lists.hx",14251,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14252)
		while((true)){
			HX_STACK_LINE(14252)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(14252)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14252)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14252)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14252)
			if ((tmp3)){
				HX_STACK_LINE(14252)
				break;
			}
			HX_STACK_LINE(14252)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(14252)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14252)
			this->head = ret->next;
			HX_STACK_LINE(14252)
			{
				HX_STACK_LINE(14252)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(14252)
				o->elt = null();
				HX_STACK_LINE(14252)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(14252)
				o->next = tmp5;
				HX_STACK_LINE(14252)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(14252)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(14252)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(14252)
			if ((tmp6)){
				HX_STACK_LINE(14252)
				this->pushmod = true;
			}
			HX_STACK_LINE(14252)
			this->modified = true;
			HX_STACK_LINE(14252)
			(this->length)--;
		}
		HX_STACK_LINE(14253)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_clear,(void))

Void ZNPList_ZPP_GeomPoly_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","reverse",0x4e8d9711,"zpp_nape.util.ZNPList_ZPP_GeomPoly.reverse","zpp_nape/util/Lists.hx",14256,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14257)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14257)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14258)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14259)
		while((true)){
			HX_STACK_LINE(14259)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14259)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14259)
			if ((tmp2)){
				HX_STACK_LINE(14259)
				break;
			}
			HX_STACK_LINE(14260)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(14261)
			cur->next = pre;
			HX_STACK_LINE(14262)
			this->head = cur;
			HX_STACK_LINE(14263)
			pre = cur;
			HX_STACK_LINE(14264)
			cur = nx;
		}
		HX_STACK_LINE(14266)
		this->modified = true;
		HX_STACK_LINE(14267)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,reverse,(void))

bool ZNPList_ZPP_GeomPoly_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","empty",0x34b2eebc,"zpp_nape.util.ZNPList_ZPP_GeomPoly.empty","zpp_nape/util/Lists.hx",14271,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14272)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14272)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14272)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,empty,return )

int ZNPList_ZPP_GeomPoly_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","size",0xcb7cc772,"zpp_nape.util.ZNPList_ZPP_GeomPoly.size","zpp_nape/util/Lists.hx",14276,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14277)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14277)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,size,return )

bool ZNPList_ZPP_GeomPoly_obj::has( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","has",0x00e139c9,"zpp_nape.util.ZNPList_ZPP_GeomPoly.has","zpp_nape/util/Lists.hx",14279,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14280)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14280)
	{
		HX_STACK_LINE(14280)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14280)
		{
			HX_STACK_LINE(14280)
			ret = false;
			HX_STACK_LINE(14280)
			{
				HX_STACK_LINE(14280)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(14280)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(14280)
				while((true)){
					HX_STACK_LINE(14280)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(14280)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(14280)
					if ((tmp3)){
						HX_STACK_LINE(14280)
						break;
					}
					HX_STACK_LINE(14280)
					::zpp_nape::geom::ZPP_GeomPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(14280)
					{
						HX_STACK_LINE(14280)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(14280)
						if ((tmp4)){
							HX_STACK_LINE(14280)
							ret = true;
							HX_STACK_LINE(14280)
							break;
						}
					}
					HX_STACK_LINE(14280)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(14280)
		tmp = ret;
	}
	HX_STACK_LINE(14280)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,has,return )

bool ZNPList_ZPP_GeomPoly_obj::inlined_has( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","inlined_has",0xb2fc1b35,"zpp_nape.util.ZNPList_ZPP_GeomPoly.inlined_has","zpp_nape/util/Lists.hx",14284,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14293)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14294)
	{
		HX_STACK_LINE(14295)
		ret = false;
		HX_STACK_LINE(14296)
		{
			HX_STACK_LINE(14297)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(14297)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(14298)
			while((true)){
				HX_STACK_LINE(14298)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(14298)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(14298)
				if ((tmp2)){
					HX_STACK_LINE(14298)
					break;
				}
				HX_STACK_LINE(14299)
				::zpp_nape::geom::ZPP_GeomPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(14300)
				{
					HX_STACK_LINE(14301)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(14301)
					if ((tmp3)){
						HX_STACK_LINE(14302)
						ret = true;
						HX_STACK_LINE(14303)
						break;
					}
				}
				HX_STACK_LINE(14306)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(14310)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14310)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_has,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","front",0xcb66ccd8,"zpp_nape.util.ZNPList_ZPP_GeomPoly.front","zpp_nape/util/Lists.hx",14314,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14315)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14315)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14315)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,front,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","back",0xc03a00d8,"zpp_nape.util.ZNPList_ZPP_GeomPoly.back","zpp_nape/util/Lists.hx",14317,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14318)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14318)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14319)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14320)
	while((true)){
		HX_STACK_LINE(14320)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14320)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14320)
		if ((tmp2)){
			HX_STACK_LINE(14320)
			break;
		}
		HX_STACK_LINE(14321)
		ret = cur;
		HX_STACK_LINE(14322)
		cur = cur->next;
	}
	HX_STACK_LINE(14324)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14324)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","iterator_at",0xb79b0b53,"zpp_nape.util.ZNPList_ZPP_GeomPoly.iterator_at","zpp_nape/util/Lists.hx",14326,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(14335)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14335)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14336)
	while((true)){
		HX_STACK_LINE(14336)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14336)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14336)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14336)
		if ((tmp2)){
			HX_STACK_LINE(14336)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(14336)
			tmp3 = false;
		}
		HX_STACK_LINE(14336)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14336)
		if ((tmp4)){
			HX_STACK_LINE(14336)
			break;
		}
		HX_STACK_LINE(14336)
		ret = ret->next;
	}
	HX_STACK_LINE(14337)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14337)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,iterator_at,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomPoly","at",0x33a9bd64,"zpp_nape.util.ZNPList_ZPP_GeomPoly.at","zpp_nape/util/Lists.hx",14339,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(14348)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14348)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14348)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(14349)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14349)
	::zpp_nape::geom::ZPP_GeomPoly tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14349)
	if ((tmp2)){
		HX_STACK_LINE(14349)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(14349)
		tmp3 = null();
	}
	HX_STACK_LINE(14349)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,at,return )


ZNPList_ZPP_GeomPoly_obj::ZNPList_ZPP_GeomPoly_obj()
{
}

void ZNPList_ZPP_GeomPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_GeomPoly);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_GeomPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_GeomPoly_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_GeomPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomPoly >(); return inValue; }
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

bool ZNPList_ZPP_GeomPoly_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_GeomPoly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_GeomPoly*/ ,(int)offsetof(ZNPList_ZPP_GeomPoly_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_GeomPoly_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_GeomPoly_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_GeomPoly_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_GeomPoly_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_GeomPoly_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_GeomPoly_obj::__mClass;

void ZNPList_ZPP_GeomPoly_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_GeomPoly","\x5d","\xb7","\xbe","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_GeomPoly_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_GeomPoly_obj >;
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
