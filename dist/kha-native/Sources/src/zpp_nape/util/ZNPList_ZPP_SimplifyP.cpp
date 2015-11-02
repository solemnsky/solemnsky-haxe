#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimplifyP_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","new",0x7e62b144,"zpp_nape.util.ZNPList_ZPP_SimplifyP.new","zpp_nape/util/Lists.hx",7681,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7691)
	this->length = (int)0;
	HX_STACK_LINE(7690)
	this->pushmod = false;
	HX_STACK_LINE(7689)
	this->modified = false;
	HX_STACK_LINE(7682)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_SimplifyP_obj::~ZNPList_ZPP_SimplifyP_obj() { }

Dynamic ZNPList_ZPP_SimplifyP_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimplifyP_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > ZNPList_ZPP_SimplifyP_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > _result_ = new ZNPList_ZPP_SimplifyP_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_SimplifyP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > _result_ = new ZNPList_ZPP_SimplifyP_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","begin",0xf889cc0d,"zpp_nape.util.ZNPList_ZPP_SimplifyP.begin","zpp_nape/util/Lists.hx",7686,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7687)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7687)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,begin,return )

Void ZNPList_ZPP_SimplifyP_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","setbegin",0x14c047e3,"zpp_nape.util.ZNPList_ZPP_SimplifyP.setbegin","zpp_nape/util/Lists.hx",7694,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(7695)
		this->head = i;
		HX_STACK_LINE(7696)
		this->modified = true;
		HX_STACK_LINE(7697)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,setbegin,(void))

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::add( ::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","add",0x7e58d305,"zpp_nape.util.ZNPList_ZPP_SimplifyP.add","zpp_nape/util/Lists.hx",7699,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7700)
	::zpp_nape::geom::ZPP_SimplifyP tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7700)
	{
		HX_STACK_LINE(7700)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7700)
		{
			HX_STACK_LINE(7700)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7700)
			{
				HX_STACK_LINE(7700)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7700)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7700)
				if ((tmp3)){
					HX_STACK_LINE(7700)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7700)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(7700)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7700)
					ret = tmp4;
					HX_STACK_LINE(7700)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
					HX_STACK_LINE(7700)
					ret->next = null();
				}
				HX_STACK_LINE(7700)
				Dynamic();
			}
			HX_STACK_LINE(7700)
			ret->elt = o;
			HX_STACK_LINE(7700)
			tmp1 = ret;
		}
		HX_STACK_LINE(7700)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(7700)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7700)
		temp->next = tmp2;
		HX_STACK_LINE(7700)
		this->head = temp;
		HX_STACK_LINE(7700)
		this->modified = true;
		HX_STACK_LINE(7700)
		(this->length)++;
		HX_STACK_LINE(7700)
		tmp = o;
	}
	HX_STACK_LINE(7700)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,add,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_add( ::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_add",0x591eb171,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_add","zpp_nape/util/Lists.hx",7704,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7713)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7713)
	{
		HX_STACK_LINE(7714)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7715)
		{
			HX_STACK_LINE(7716)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7716)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7716)
			if ((tmp2)){
				HX_STACK_LINE(7717)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7717)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(7723)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7723)
				ret = tmp3;
				HX_STACK_LINE(7724)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7725)
				ret->next = null();
			}
			HX_STACK_LINE(7730)
			Dynamic();
		}
		HX_STACK_LINE(7732)
		ret->elt = o;
		HX_STACK_LINE(7733)
		tmp = ret;
	}
	HX_STACK_LINE(7713)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7735)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7735)
	temp->next = tmp1;
	HX_STACK_LINE(7736)
	this->head = temp;
	HX_STACK_LINE(7737)
	this->modified = true;
	HX_STACK_LINE(7738)
	(this->length)++;
	HX_STACK_LINE(7739)
	::zpp_nape::geom::ZPP_SimplifyP tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7739)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_add,return )

Void ZNPList_ZPP_SimplifyP_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimplifyP x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","addAll",0x842ccf1c,"zpp_nape.util.ZNPList_ZPP_SimplifyP.addAll","zpp_nape/util/Lists.hx",7750,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(7751)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(7752)
		while((true)){
			HX_STACK_LINE(7752)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7752)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7752)
			if ((tmp1)){
				HX_STACK_LINE(7752)
				break;
			}
			HX_STACK_LINE(7753)
			::zpp_nape::geom::ZPP_SimplifyP i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(7754)
			::zpp_nape::geom::ZPP_SimplifyP tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7754)
			this->add(tmp2);
			HX_STACK_LINE(7755)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur,::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","insert",0x830f08d5,"zpp_nape.util.ZNPList_ZPP_SimplifyP.insert","zpp_nape/util/Lists.hx",7759,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7760)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7760)
	{
		HX_STACK_LINE(7760)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7760)
		{
			HX_STACK_LINE(7760)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7760)
			{
				HX_STACK_LINE(7760)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7760)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7760)
				if ((tmp3)){
					HX_STACK_LINE(7760)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7760)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(7760)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7760)
					ret = tmp4;
					HX_STACK_LINE(7760)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
					HX_STACK_LINE(7760)
					ret->next = null();
				}
				HX_STACK_LINE(7760)
				Dynamic();
			}
			HX_STACK_LINE(7760)
			ret->elt = o;
			HX_STACK_LINE(7760)
			tmp1 = ret;
		}
		HX_STACK_LINE(7760)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(7760)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7760)
		if ((tmp2)){
			HX_STACK_LINE(7760)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7760)
			temp->next = tmp3;
			HX_STACK_LINE(7760)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(7760)
			temp->next = cur->next;
			HX_STACK_LINE(7760)
			cur->next = temp;
		}
		HX_STACK_LINE(7760)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7760)
		this->pushmod = tmp3;
		HX_STACK_LINE(7760)
		(this->length)++;
		HX_STACK_LINE(7760)
		tmp = temp;
	}
	HX_STACK_LINE(7760)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur,::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_insert",0xf62af5e9,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_insert","zpp_nape/util/Lists.hx",7764,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7773)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7773)
	{
		HX_STACK_LINE(7774)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7775)
		{
			HX_STACK_LINE(7776)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7776)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7776)
			if ((tmp2)){
				HX_STACK_LINE(7777)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7777)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(7783)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7783)
				ret = tmp3;
				HX_STACK_LINE(7784)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7785)
				ret->next = null();
			}
			HX_STACK_LINE(7790)
			Dynamic();
		}
		HX_STACK_LINE(7792)
		ret->elt = o;
		HX_STACK_LINE(7793)
		tmp = ret;
	}
	HX_STACK_LINE(7773)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7795)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7795)
	if ((tmp1)){
		HX_STACK_LINE(7796)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7796)
		temp->next = tmp2;
		HX_STACK_LINE(7797)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7800)
		temp->next = cur->next;
		HX_STACK_LINE(7801)
		cur->next = temp;
	}
	HX_STACK_LINE(7803)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7803)
	this->pushmod = tmp2;
	HX_STACK_LINE(7804)
	(this->length)++;
	HX_STACK_LINE(7805)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(7805)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,inlined_insert,return )

Void ZNPList_ZPP_SimplifyP_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","pop",0x7e643e75,"zpp_nape.util.ZNPList_ZPP_SimplifyP.pop","zpp_nape/util/Lists.hx",7808,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7808)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7808)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7808)
		this->head = ret->next;
		HX_STACK_LINE(7808)
		{
			HX_STACK_LINE(7808)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7808)
			o->elt = null();
			HX_STACK_LINE(7808)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7808)
			o->next = tmp1;
			HX_STACK_LINE(7808)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7808)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7808)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7808)
		if ((tmp2)){
			HX_STACK_LINE(7808)
			this->pushmod = true;
		}
		HX_STACK_LINE(7808)
		this->modified = true;
		HX_STACK_LINE(7808)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,pop,(void))

Void ZNPList_ZPP_SimplifyP_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_pop",0x592a1ce1,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_pop","zpp_nape/util/Lists.hx",7812,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7821)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7821)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7822)
		this->head = ret->next;
		HX_STACK_LINE(7824)
		{
			HX_STACK_LINE(7825)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7834)
			o->elt = null();
			HX_STACK_LINE(7835)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7835)
			o->next = tmp1;
			HX_STACK_LINE(7836)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7841)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7841)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7841)
		if ((tmp2)){
			HX_STACK_LINE(7841)
			this->pushmod = true;
		}
		HX_STACK_LINE(7842)
		this->modified = true;
		HX_STACK_LINE(7843)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","pop_unsafe",0x0a673ff0,"zpp_nape.util.ZNPList_ZPP_SimplifyP.pop_unsafe","zpp_nape/util/Lists.hx",7845,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7846)
	::zpp_nape::geom::ZPP_SimplifyP tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7846)
	{
		HX_STACK_LINE(7846)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7846)
		::zpp_nape::geom::ZPP_SimplifyP ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7846)
		this->pop();
		HX_STACK_LINE(7846)
		tmp = ret;
	}
	HX_STACK_LINE(7846)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_pop_unsafe",0x22814704,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_pop_unsafe","zpp_nape/util/Lists.hx",7850,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7859)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7859)
	::zpp_nape::geom::ZPP_SimplifyP ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7860)
	this->pop();
	HX_STACK_LINE(7861)
	::zpp_nape::geom::ZPP_SimplifyP tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7861)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_SimplifyP_obj::remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","remove",0xe9ba61e0,"zpp_nape.util.ZNPList_ZPP_SimplifyP.remove","zpp_nape/util/Lists.hx",7872,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7872)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7872)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7872)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7872)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7872)
		while((true)){
			HX_STACK_LINE(7872)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7872)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7872)
			if ((tmp2)){
				HX_STACK_LINE(7872)
				break;
			}
			HX_STACK_LINE(7872)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7872)
			if ((tmp3)){
				HX_STACK_LINE(7872)
				{
					HX_STACK_LINE(7872)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7872)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7872)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7872)
					if ((tmp4)){
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7872)
						old = tmp5;
						HX_STACK_LINE(7872)
						ret1 = old->next;
						HX_STACK_LINE(7872)
						this->head = ret1;
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(7872)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7872)
						if ((tmp7)){
							HX_STACK_LINE(7872)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7872)
						old = pre->next;
						HX_STACK_LINE(7872)
						ret1 = old->next;
						HX_STACK_LINE(7872)
						pre->next = ret1;
						HX_STACK_LINE(7872)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7872)
						if ((tmp5)){
							HX_STACK_LINE(7872)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7872)
					{
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7872)
						o->elt = null();
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7872)
						o->next = tmp5;
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7872)
					this->modified = true;
					HX_STACK_LINE(7872)
					(this->length)--;
					HX_STACK_LINE(7872)
					this->pushmod = true;
					HX_STACK_LINE(7872)
					ret1;
				}
				HX_STACK_LINE(7872)
				ret = true;
				HX_STACK_LINE(7872)
				break;
			}
			HX_STACK_LINE(7872)
			pre = cur;
			HX_STACK_LINE(7872)
			cur = cur->next;
		}
		HX_STACK_LINE(7872)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,remove,(void))

bool ZNPList_ZPP_SimplifyP_obj::try_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","try_remove",0x219175a4,"zpp_nape.util.ZNPList_ZPP_SimplifyP.try_remove","zpp_nape/util/Lists.hx",7874,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7883)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7884)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7884)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7885)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7886)
	while((true)){
		HX_STACK_LINE(7886)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7886)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7886)
		if ((tmp2)){
			HX_STACK_LINE(7886)
			break;
		}
		HX_STACK_LINE(7887)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7887)
		if ((tmp3)){
			HX_STACK_LINE(7888)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7888)
			this->erase(tmp4);
			HX_STACK_LINE(7889)
			ret = true;
			HX_STACK_LINE(7890)
			break;
		}
		HX_STACK_LINE(7892)
		pre = cur;
		HX_STACK_LINE(7893)
		cur = cur->next;
	}
	HX_STACK_LINE(7895)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7895)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,try_remove,return )

Void ZNPList_ZPP_SimplifyP_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_remove",0x5cd64ef4,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_remove","zpp_nape/util/Lists.hx",7908,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7908)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7908)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7908)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7908)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7908)
		while((true)){
			HX_STACK_LINE(7908)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7908)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7908)
			if ((tmp2)){
				HX_STACK_LINE(7908)
				break;
			}
			HX_STACK_LINE(7908)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7908)
			if ((tmp3)){
				HX_STACK_LINE(7908)
				{
					HX_STACK_LINE(7908)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7908)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7908)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7908)
					if ((tmp4)){
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7908)
						old = tmp5;
						HX_STACK_LINE(7908)
						ret1 = old->next;
						HX_STACK_LINE(7908)
						this->head = ret1;
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(7908)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7908)
						if ((tmp7)){
							HX_STACK_LINE(7908)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7908)
						old = pre->next;
						HX_STACK_LINE(7908)
						ret1 = old->next;
						HX_STACK_LINE(7908)
						pre->next = ret1;
						HX_STACK_LINE(7908)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7908)
						if ((tmp5)){
							HX_STACK_LINE(7908)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7908)
					{
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7908)
						o->elt = null();
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7908)
						o->next = tmp5;
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7908)
					this->modified = true;
					HX_STACK_LINE(7908)
					(this->length)--;
					HX_STACK_LINE(7908)
					this->pushmod = true;
					HX_STACK_LINE(7908)
					ret1;
				}
				HX_STACK_LINE(7908)
				ret = true;
				HX_STACK_LINE(7908)
				break;
			}
			HX_STACK_LINE(7908)
			pre = cur;
			HX_STACK_LINE(7908)
			cur = cur->next;
		}
		HX_STACK_LINE(7908)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimplifyP_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_try_remove",0x39ab7cb8,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_try_remove","zpp_nape/util/Lists.hx",7912,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7921)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7922)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7922)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7923)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7924)
	while((true)){
		HX_STACK_LINE(7924)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7924)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7924)
		if ((tmp2)){
			HX_STACK_LINE(7924)
			break;
		}
		HX_STACK_LINE(7925)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7925)
		if ((tmp3)){
			HX_STACK_LINE(7926)
			{
				HX_STACK_LINE(7926)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7926)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7926)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(7926)
				if ((tmp4)){
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7926)
					old = tmp5;
					HX_STACK_LINE(7926)
					ret1 = old->next;
					HX_STACK_LINE(7926)
					this->head = ret1;
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(7926)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(7926)
					if ((tmp7)){
						HX_STACK_LINE(7926)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7926)
					old = pre->next;
					HX_STACK_LINE(7926)
					ret1 = old->next;
					HX_STACK_LINE(7926)
					pre->next = ret1;
					HX_STACK_LINE(7926)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7926)
					if ((tmp5)){
						HX_STACK_LINE(7926)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7926)
				{
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7926)
					o->elt = null();
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7926)
					o->next = tmp5;
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7926)
				this->modified = true;
				HX_STACK_LINE(7926)
				(this->length)--;
				HX_STACK_LINE(7926)
				this->pushmod = true;
				HX_STACK_LINE(7926)
				ret1;
			}
			HX_STACK_LINE(7927)
			ret = true;
			HX_STACK_LINE(7928)
			break;
		}
		HX_STACK_LINE(7930)
		pre = cur;
		HX_STACK_LINE(7931)
		cur = cur->next;
	}
	HX_STACK_LINE(7933)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7933)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","erase",0xbb50caca,"zpp_nape.util.ZNPList_ZPP_SimplifyP.erase","zpp_nape/util/Lists.hx",7935,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7936)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7936)
	{
		HX_STACK_LINE(7936)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(7936)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7936)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7936)
		if ((tmp1)){
			HX_STACK_LINE(7936)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7936)
			old = tmp2;
			HX_STACK_LINE(7936)
			ret = old->next;
			HX_STACK_LINE(7936)
			this->head = ret;
			HX_STACK_LINE(7936)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7936)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7936)
			if ((tmp4)){
				HX_STACK_LINE(7936)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(7936)
			old = pre->next;
			HX_STACK_LINE(7936)
			ret = old->next;
			HX_STACK_LINE(7936)
			pre->next = ret;
			HX_STACK_LINE(7936)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7936)
			if ((tmp2)){
				HX_STACK_LINE(7936)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(7936)
		{
			HX_STACK_LINE(7936)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7936)
			o->elt = null();
			HX_STACK_LINE(7936)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7936)
			o->next = tmp2;
			HX_STACK_LINE(7936)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7936)
		this->modified = true;
		HX_STACK_LINE(7936)
		(this->length)--;
		HX_STACK_LINE(7936)
		this->pushmod = true;
		HX_STACK_LINE(7936)
		tmp = ret;
	}
	HX_STACK_LINE(7936)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_erase",0x3a1c1c36,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_erase","zpp_nape/util/Lists.hx",7940,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7949)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7950)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7951)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7951)
	if ((tmp)){
		HX_STACK_LINE(7952)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7952)
		old = tmp1;
		HX_STACK_LINE(7953)
		ret = old->next;
		HX_STACK_LINE(7954)
		this->head = ret;
		HX_STACK_LINE(7955)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7955)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7955)
		if ((tmp3)){
			HX_STACK_LINE(7955)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7958)
		old = pre->next;
		HX_STACK_LINE(7959)
		ret = old->next;
		HX_STACK_LINE(7960)
		pre->next = ret;
		HX_STACK_LINE(7961)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7961)
		if ((tmp1)){
			HX_STACK_LINE(7961)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7964)
	{
		HX_STACK_LINE(7965)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7974)
		o->elt = null();
		HX_STACK_LINE(7975)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7975)
		o->next = tmp1;
		HX_STACK_LINE(7976)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7981)
	this->modified = true;
	HX_STACK_LINE(7982)
	(this->length)--;
	HX_STACK_LINE(7983)
	this->pushmod = true;
	HX_STACK_LINE(7984)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7984)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","splice",0xa4d04b18,"zpp_nape.util.ZNPList_ZPP_SimplifyP.splice","zpp_nape/util/Lists.hx",7986,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(7987)
	while((true)){
		HX_STACK_LINE(7987)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7987)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7987)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7987)
		if ((tmp1)){
			HX_STACK_LINE(7987)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(7987)
			tmp2 = false;
		}
		HX_STACK_LINE(7987)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7987)
		if ((tmp3)){
			HX_STACK_LINE(7987)
			break;
		}
		HX_STACK_LINE(7987)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7987)
		this->erase(tmp4);
	}
	HX_STACK_LINE(7988)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7988)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,splice,return )

Void ZNPList_ZPP_SimplifyP_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","clear",0x908f5371,"zpp_nape.util.ZNPList_ZPP_SimplifyP.clear","zpp_nape/util/Lists.hx",7991,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7991)
		while((true)){
			HX_STACK_LINE(7991)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7991)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7991)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7991)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7991)
			if ((tmp3)){
				HX_STACK_LINE(7991)
				break;
			}
			HX_STACK_LINE(7991)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7991)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7991)
			this->head = ret->next;
			HX_STACK_LINE(7991)
			{
				HX_STACK_LINE(7991)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7991)
				o->elt = null();
				HX_STACK_LINE(7991)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(7991)
				o->next = tmp5;
				HX_STACK_LINE(7991)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7991)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7991)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(7991)
			if ((tmp6)){
				HX_STACK_LINE(7991)
				this->pushmod = true;
			}
			HX_STACK_LINE(7991)
			this->modified = true;
			HX_STACK_LINE(7991)
			(this->length)--;
		}
		HX_STACK_LINE(7991)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,clear,(void))

Void ZNPList_ZPP_SimplifyP_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_clear",0x0f5aa4dd,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_clear","zpp_nape/util/Lists.hx",7996,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7997)
		while((true)){
			HX_STACK_LINE(7997)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7997)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7997)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7997)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7997)
			if ((tmp3)){
				HX_STACK_LINE(7997)
				break;
			}
			HX_STACK_LINE(7997)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7997)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7997)
			this->head = ret->next;
			HX_STACK_LINE(7997)
			{
				HX_STACK_LINE(7997)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7997)
				o->elt = null();
				HX_STACK_LINE(7997)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(7997)
				o->next = tmp5;
				HX_STACK_LINE(7997)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7997)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7997)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(7997)
			if ((tmp6)){
				HX_STACK_LINE(7997)
				this->pushmod = true;
			}
			HX_STACK_LINE(7997)
			this->modified = true;
			HX_STACK_LINE(7997)
			(this->length)--;
		}
		HX_STACK_LINE(7998)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimplifyP_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","reverse",0xc1575c06,"zpp_nape.util.ZNPList_ZPP_SimplifyP.reverse","zpp_nape/util/Lists.hx",8001,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8002)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8002)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8003)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8004)
		while((true)){
			HX_STACK_LINE(8004)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8004)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8004)
			if ((tmp2)){
				HX_STACK_LINE(8004)
				break;
			}
			HX_STACK_LINE(8005)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8006)
			cur->next = pre;
			HX_STACK_LINE(8007)
			this->head = cur;
			HX_STACK_LINE(8008)
			pre = cur;
			HX_STACK_LINE(8009)
			cur = nx;
		}
		HX_STACK_LINE(8011)
		this->modified = true;
		HX_STACK_LINE(8012)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,reverse,(void))

bool ZNPList_ZPP_SimplifyP_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","empty",0xb80e1c71,"zpp_nape.util.ZNPList_ZPP_SimplifyP.empty","zpp_nape/util/Lists.hx",8016,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8017)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8017)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8017)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,empty,return )

int ZNPList_ZPP_SimplifyP_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","size",0x1b49875d,"zpp_nape.util.ZNPList_ZPP_SimplifyP.size","zpp_nape/util/Lists.hx",8021,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8022)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8022)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,size,return )

bool ZNPList_ZPP_SimplifyP_obj::has( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","has",0x7e5e203e,"zpp_nape.util.ZNPList_ZPP_SimplifyP.has","zpp_nape/util/Lists.hx",8024,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8025)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8025)
	{
		HX_STACK_LINE(8025)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8025)
		{
			HX_STACK_LINE(8025)
			ret = false;
			HX_STACK_LINE(8025)
			{
				HX_STACK_LINE(8025)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(8025)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(8025)
				while((true)){
					HX_STACK_LINE(8025)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(8025)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(8025)
					if ((tmp3)){
						HX_STACK_LINE(8025)
						break;
					}
					HX_STACK_LINE(8025)
					::zpp_nape::geom::ZPP_SimplifyP npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(8025)
					{
						HX_STACK_LINE(8025)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(8025)
						if ((tmp4)){
							HX_STACK_LINE(8025)
							ret = true;
							HX_STACK_LINE(8025)
							break;
						}
					}
					HX_STACK_LINE(8025)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(8025)
		tmp = ret;
	}
	HX_STACK_LINE(8025)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,has,return )

bool ZNPList_ZPP_SimplifyP_obj::inlined_has( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","inlined_has",0x5923feaa,"zpp_nape.util.ZNPList_ZPP_SimplifyP.inlined_has","zpp_nape/util/Lists.hx",8029,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8038)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8039)
	{
		HX_STACK_LINE(8040)
		ret = false;
		HX_STACK_LINE(8041)
		{
			HX_STACK_LINE(8042)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8042)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8043)
			while((true)){
				HX_STACK_LINE(8043)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(8043)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(8043)
				if ((tmp2)){
					HX_STACK_LINE(8043)
					break;
				}
				HX_STACK_LINE(8044)
				::zpp_nape::geom::ZPP_SimplifyP npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8045)
				{
					HX_STACK_LINE(8046)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(8046)
					if ((tmp3)){
						HX_STACK_LINE(8047)
						ret = true;
						HX_STACK_LINE(8048)
						break;
					}
				}
				HX_STACK_LINE(8051)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8055)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8055)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_has,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","front",0x4ec1fa8d,"zpp_nape.util.ZNPList_ZPP_SimplifyP.front","zpp_nape/util/Lists.hx",8059,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8060)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8060)
	::zpp_nape::geom::ZPP_SimplifyP tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8060)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,front,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","back",0x1006c0c3,"zpp_nape.util.ZNPList_ZPP_SimplifyP.back","zpp_nape/util/Lists.hx",8062,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8063)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8063)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8064)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8065)
	while((true)){
		HX_STACK_LINE(8065)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8065)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8065)
		if ((tmp2)){
			HX_STACK_LINE(8065)
			break;
		}
		HX_STACK_LINE(8066)
		ret = cur;
		HX_STACK_LINE(8067)
		cur = cur->next;
	}
	HX_STACK_LINE(8069)
	::zpp_nape::geom::ZPP_SimplifyP tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8069)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","iterator_at",0x5dc2eec8,"zpp_nape.util.ZNPList_ZPP_SimplifyP.iterator_at","zpp_nape/util/Lists.hx",8071,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8080)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8080)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8081)
	while((true)){
		HX_STACK_LINE(8081)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8081)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8081)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8081)
		if ((tmp2)){
			HX_STACK_LINE(8081)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(8081)
			tmp3 = false;
		}
		HX_STACK_LINE(8081)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(8081)
		if ((tmp4)){
			HX_STACK_LINE(8081)
			break;
		}
		HX_STACK_LINE(8081)
		ret = ret->next;
	}
	HX_STACK_LINE(8082)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8082)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimplifyP","at",0x09c01c8f,"zpp_nape.util.ZNPList_ZPP_SimplifyP.at","zpp_nape/util/Lists.hx",8084,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8093)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8093)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8093)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8094)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8094)
	::zpp_nape::geom::ZPP_SimplifyP tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(8094)
	if ((tmp2)){
		HX_STACK_LINE(8094)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(8094)
		tmp3 = null();
	}
	HX_STACK_LINE(8094)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,at,return )


ZNPList_ZPP_SimplifyP_obj::ZNPList_ZPP_SimplifyP_obj()
{
}

void ZNPList_ZPP_SimplifyP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimplifyP);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimplifyP_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_SimplifyP_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_SimplifyP_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimplifyP >(); return inValue; }
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

bool ZNPList_ZPP_SimplifyP_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_SimplifyP_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SimplifyP*/ ,(int)offsetof(ZNPList_ZPP_SimplifyP_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SimplifyP_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SimplifyP_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_SimplifyP_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimplifyP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimplifyP_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_SimplifyP_obj::__mClass;

void ZNPList_ZPP_SimplifyP_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_SimplifyP","\x52","\xff","\x5f","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_SimplifyP_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_SimplifyP_obj >;
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
