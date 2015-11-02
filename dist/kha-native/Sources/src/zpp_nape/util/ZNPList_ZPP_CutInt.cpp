#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutInt
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CutInt_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","new",0x2af7bf74,"zpp_nape.util.ZNPList_ZPP_CutInt.new","zpp_nape/util/Lists.hx",5596,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5606)
	this->length = (int)0;
	HX_STACK_LINE(5605)
	this->pushmod = false;
	HX_STACK_LINE(5604)
	this->modified = false;
	HX_STACK_LINE(5597)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_CutInt_obj::~ZNPList_ZPP_CutInt_obj() { }

Dynamic ZNPList_ZPP_CutInt_obj::__CreateEmpty() { return  new ZNPList_ZPP_CutInt_obj; }
hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > ZNPList_ZPP_CutInt_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > _result_ = new ZNPList_ZPP_CutInt_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_CutInt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > _result_ = new ZNPList_ZPP_CutInt_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","begin",0xbf22c63d,"zpp_nape.util.ZNPList_ZPP_CutInt.begin","zpp_nape/util/Lists.hx",5601,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5602)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5602)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,begin,return )

Void ZNPList_ZPP_CutInt_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CutInt i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","setbegin",0xdc39cbb3,"zpp_nape.util.ZNPList_ZPP_CutInt.setbegin","zpp_nape/util/Lists.hx",5609,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(5610)
		this->head = i;
		HX_STACK_LINE(5611)
		this->modified = true;
		HX_STACK_LINE(5612)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,setbegin,(void))

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::add( ::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","add",0x2aede135,"zpp_nape.util.ZNPList_ZPP_CutInt.add","zpp_nape/util/Lists.hx",5614,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5615)
	::zpp_nape::geom::ZPP_CutInt tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5615)
	{
		HX_STACK_LINE(5615)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5615)
		{
			HX_STACK_LINE(5615)
			::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5615)
			{
				HX_STACK_LINE(5615)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5615)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5615)
				if ((tmp3)){
					HX_STACK_LINE(5615)
					::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(5615)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(5615)
					::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(5615)
					ret = tmp4;
					HX_STACK_LINE(5615)
					::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
					HX_STACK_LINE(5615)
					ret->next = null();
				}
				HX_STACK_LINE(5615)
				Dynamic();
			}
			HX_STACK_LINE(5615)
			ret->elt = o;
			HX_STACK_LINE(5615)
			tmp1 = ret;
		}
		HX_STACK_LINE(5615)
		::zpp_nape::util::ZNPNode_ZPP_CutInt temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(5615)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5615)
		temp->next = tmp2;
		HX_STACK_LINE(5615)
		this->head = temp;
		HX_STACK_LINE(5615)
		this->modified = true;
		HX_STACK_LINE(5615)
		(this->length)++;
		HX_STACK_LINE(5615)
		tmp = o;
	}
	HX_STACK_LINE(5615)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,add,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_add( ::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_add",0xe3b56fa1,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_add","zpp_nape/util/Lists.hx",5619,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5628)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5628)
	{
		HX_STACK_LINE(5629)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5630)
		{
			HX_STACK_LINE(5631)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5631)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5631)
			if ((tmp2)){
				HX_STACK_LINE(5632)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5632)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(5638)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5638)
				ret = tmp3;
				HX_STACK_LINE(5639)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5640)
				ret->next = null();
			}
			HX_STACK_LINE(5645)
			Dynamic();
		}
		HX_STACK_LINE(5647)
		ret->elt = o;
		HX_STACK_LINE(5648)
		tmp = ret;
	}
	HX_STACK_LINE(5628)
	::zpp_nape::util::ZNPNode_ZPP_CutInt temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5650)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5650)
	temp->next = tmp1;
	HX_STACK_LINE(5651)
	this->head = temp;
	HX_STACK_LINE(5652)
	this->modified = true;
	HX_STACK_LINE(5653)
	(this->length)++;
	HX_STACK_LINE(5654)
	::zpp_nape::geom::ZPP_CutInt tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5654)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_add,return )

Void ZNPList_ZPP_CutInt_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CutInt x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","addAll",0x836ebeec,"zpp_nape.util.ZNPList_ZPP_CutInt.addAll","zpp_nape/util/Lists.hx",5665,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(5666)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(5667)
		while((true)){
			HX_STACK_LINE(5667)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(5667)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5667)
			if ((tmp1)){
				HX_STACK_LINE(5667)
				break;
			}
			HX_STACK_LINE(5668)
			::zpp_nape::geom::ZPP_CutInt i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(5669)
			::zpp_nape::geom::ZPP_CutInt tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5669)
			this->add(tmp2);
			HX_STACK_LINE(5670)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CutInt cur,::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","insert",0x8250f8a5,"zpp_nape.util.ZNPList_ZPP_CutInt.insert","zpp_nape/util/Lists.hx",5674,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5675)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5675)
	{
		HX_STACK_LINE(5675)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5675)
		{
			HX_STACK_LINE(5675)
			::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5675)
			{
				HX_STACK_LINE(5675)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5675)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5675)
				if ((tmp3)){
					HX_STACK_LINE(5675)
					::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(5675)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(5675)
					::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(5675)
					ret = tmp4;
					HX_STACK_LINE(5675)
					::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
					HX_STACK_LINE(5675)
					ret->next = null();
				}
				HX_STACK_LINE(5675)
				Dynamic();
			}
			HX_STACK_LINE(5675)
			ret->elt = o;
			HX_STACK_LINE(5675)
			tmp1 = ret;
		}
		HX_STACK_LINE(5675)
		::zpp_nape::util::ZNPNode_ZPP_CutInt temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(5675)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5675)
		if ((tmp2)){
			HX_STACK_LINE(5675)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5675)
			temp->next = tmp3;
			HX_STACK_LINE(5675)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(5675)
			temp->next = cur->next;
			HX_STACK_LINE(5675)
			cur->next = temp;
		}
		HX_STACK_LINE(5675)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5675)
		this->pushmod = tmp3;
		HX_STACK_LINE(5675)
		(this->length)++;
		HX_STACK_LINE(5675)
		tmp = temp;
	}
	HX_STACK_LINE(5675)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CutInt cur,::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_insert",0x639935b9,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_insert","zpp_nape/util/Lists.hx",5679,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(5688)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5688)
	{
		HX_STACK_LINE(5689)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5690)
		{
			HX_STACK_LINE(5691)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5691)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5691)
			if ((tmp2)){
				HX_STACK_LINE(5692)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5692)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(5698)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5698)
				ret = tmp3;
				HX_STACK_LINE(5699)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
				HX_STACK_LINE(5700)
				ret->next = null();
			}
			HX_STACK_LINE(5705)
			Dynamic();
		}
		HX_STACK_LINE(5707)
		ret->elt = o;
		HX_STACK_LINE(5708)
		tmp = ret;
	}
	HX_STACK_LINE(5688)
	::zpp_nape::util::ZNPNode_ZPP_CutInt temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5710)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5710)
	if ((tmp1)){
		HX_STACK_LINE(5711)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5711)
		temp->next = tmp2;
		HX_STACK_LINE(5712)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(5715)
		temp->next = cur->next;
		HX_STACK_LINE(5716)
		cur->next = temp;
	}
	HX_STACK_LINE(5718)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5718)
	this->pushmod = tmp2;
	HX_STACK_LINE(5719)
	(this->length)++;
	HX_STACK_LINE(5720)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5720)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,inlined_insert,return )

Void ZNPList_ZPP_CutInt_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","pop",0x2af94ca5,"zpp_nape.util.ZNPList_ZPP_CutInt.pop","zpp_nape/util/Lists.hx",5723,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5723)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5723)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5723)
		this->head = ret->next;
		HX_STACK_LINE(5723)
		{
			HX_STACK_LINE(5723)
			::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5723)
			o->elt = null();
			HX_STACK_LINE(5723)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5723)
			o->next = tmp1;
			HX_STACK_LINE(5723)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5723)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5723)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5723)
		if ((tmp2)){
			HX_STACK_LINE(5723)
			this->pushmod = true;
		}
		HX_STACK_LINE(5723)
		this->modified = true;
		HX_STACK_LINE(5723)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,pop,(void))

Void ZNPList_ZPP_CutInt_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_pop",0xe3c0db11,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_pop","zpp_nape/util/Lists.hx",5727,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5736)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5736)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5737)
		this->head = ret->next;
		HX_STACK_LINE(5739)
		{
			HX_STACK_LINE(5740)
			::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5749)
			o->elt = null();
			HX_STACK_LINE(5750)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5750)
			o->next = tmp1;
			HX_STACK_LINE(5751)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5756)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5756)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5756)
		if ((tmp2)){
			HX_STACK_LINE(5756)
			this->pushmod = true;
		}
		HX_STACK_LINE(5757)
		this->modified = true;
		HX_STACK_LINE(5758)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","pop_unsafe",0xc62557c0,"zpp_nape.util.ZNPList_ZPP_CutInt.pop_unsafe","zpp_nape/util/Lists.hx",5760,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5761)
	::zpp_nape::geom::ZPP_CutInt tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5761)
	{
		HX_STACK_LINE(5761)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5761)
		::zpp_nape::geom::ZPP_CutInt ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5761)
		this->pop();
		HX_STACK_LINE(5761)
		tmp = ret;
	}
	HX_STACK_LINE(5761)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_pop_unsafe",0xe0d3aed4,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_pop_unsafe","zpp_nape/util/Lists.hx",5765,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5774)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5774)
	::zpp_nape::geom::ZPP_CutInt ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5775)
	this->pop();
	HX_STACK_LINE(5776)
	::zpp_nape::geom::ZPP_CutInt tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5776)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_CutInt_obj::remove( ::zpp_nape::geom::ZPP_CutInt obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","remove",0xe8fc51b0,"zpp_nape.util.ZNPList_ZPP_CutInt.remove","zpp_nape/util/Lists.hx",5787,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(5787)
		::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5787)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5787)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5787)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5787)
		while((true)){
			HX_STACK_LINE(5787)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5787)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5787)
			if ((tmp2)){
				HX_STACK_LINE(5787)
				break;
			}
			HX_STACK_LINE(5787)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5787)
			if ((tmp3)){
				HX_STACK_LINE(5787)
				{
					HX_STACK_LINE(5787)
					::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(5787)
					::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(5787)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(5787)
					if ((tmp4)){
						HX_STACK_LINE(5787)
						::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(5787)
						old = tmp5;
						HX_STACK_LINE(5787)
						ret1 = old->next;
						HX_STACK_LINE(5787)
						this->head = ret1;
						HX_STACK_LINE(5787)
						::zpp_nape::util::ZNPNode_ZPP_CutInt tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(5787)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5787)
						if ((tmp7)){
							HX_STACK_LINE(5787)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(5787)
						old = pre->next;
						HX_STACK_LINE(5787)
						ret1 = old->next;
						HX_STACK_LINE(5787)
						pre->next = ret1;
						HX_STACK_LINE(5787)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(5787)
						if ((tmp5)){
							HX_STACK_LINE(5787)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(5787)
					{
						HX_STACK_LINE(5787)
						::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(5787)
						o->elt = null();
						HX_STACK_LINE(5787)
						::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(5787)
						o->next = tmp5;
						HX_STACK_LINE(5787)
						::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
					}
					HX_STACK_LINE(5787)
					this->modified = true;
					HX_STACK_LINE(5787)
					(this->length)--;
					HX_STACK_LINE(5787)
					this->pushmod = true;
					HX_STACK_LINE(5787)
					ret1;
				}
				HX_STACK_LINE(5787)
				ret = true;
				HX_STACK_LINE(5787)
				break;
			}
			HX_STACK_LINE(5787)
			pre = cur;
			HX_STACK_LINE(5787)
			cur = cur->next;
		}
		HX_STACK_LINE(5787)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,remove,(void))

bool ZNPList_ZPP_CutInt_obj::try_remove( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","try_remove",0xdd4f8d74,"zpp_nape.util.ZNPList_ZPP_CutInt.try_remove","zpp_nape/util/Lists.hx",5789,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5798)
	::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5799)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5799)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5800)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5801)
	while((true)){
		HX_STACK_LINE(5801)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5801)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5801)
		if ((tmp2)){
			HX_STACK_LINE(5801)
			break;
		}
		HX_STACK_LINE(5802)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5802)
		if ((tmp3)){
			HX_STACK_LINE(5803)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5803)
			this->erase(tmp4);
			HX_STACK_LINE(5804)
			ret = true;
			HX_STACK_LINE(5805)
			break;
		}
		HX_STACK_LINE(5807)
		pre = cur;
		HX_STACK_LINE(5808)
		cur = cur->next;
	}
	HX_STACK_LINE(5810)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5810)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,try_remove,return )

Void ZNPList_ZPP_CutInt_obj::inlined_remove( ::zpp_nape::geom::ZPP_CutInt obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_remove",0xca448ec4,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_remove","zpp_nape/util/Lists.hx",5823,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(5823)
		::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5823)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5823)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5823)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5823)
		while((true)){
			HX_STACK_LINE(5823)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5823)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5823)
			if ((tmp2)){
				HX_STACK_LINE(5823)
				break;
			}
			HX_STACK_LINE(5823)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5823)
			if ((tmp3)){
				HX_STACK_LINE(5823)
				{
					HX_STACK_LINE(5823)
					::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(5823)
					::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(5823)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(5823)
					if ((tmp4)){
						HX_STACK_LINE(5823)
						::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(5823)
						old = tmp5;
						HX_STACK_LINE(5823)
						ret1 = old->next;
						HX_STACK_LINE(5823)
						this->head = ret1;
						HX_STACK_LINE(5823)
						::zpp_nape::util::ZNPNode_ZPP_CutInt tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(5823)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(5823)
						if ((tmp7)){
							HX_STACK_LINE(5823)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(5823)
						old = pre->next;
						HX_STACK_LINE(5823)
						ret1 = old->next;
						HX_STACK_LINE(5823)
						pre->next = ret1;
						HX_STACK_LINE(5823)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(5823)
						if ((tmp5)){
							HX_STACK_LINE(5823)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(5823)
					{
						HX_STACK_LINE(5823)
						::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(5823)
						o->elt = null();
						HX_STACK_LINE(5823)
						::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(5823)
						o->next = tmp5;
						HX_STACK_LINE(5823)
						::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
					}
					HX_STACK_LINE(5823)
					this->modified = true;
					HX_STACK_LINE(5823)
					(this->length)--;
					HX_STACK_LINE(5823)
					this->pushmod = true;
					HX_STACK_LINE(5823)
					ret1;
				}
				HX_STACK_LINE(5823)
				ret = true;
				HX_STACK_LINE(5823)
				break;
			}
			HX_STACK_LINE(5823)
			pre = cur;
			HX_STACK_LINE(5823)
			cur = cur->next;
		}
		HX_STACK_LINE(5823)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_remove,(void))

bool ZNPList_ZPP_CutInt_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_try_remove",0xf7fde488,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_try_remove","zpp_nape/util/Lists.hx",5827,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5836)
	::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5837)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5837)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5838)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5839)
	while((true)){
		HX_STACK_LINE(5839)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5839)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5839)
		if ((tmp2)){
			HX_STACK_LINE(5839)
			break;
		}
		HX_STACK_LINE(5840)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5840)
		if ((tmp3)){
			HX_STACK_LINE(5841)
			{
				HX_STACK_LINE(5841)
				::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5841)
				::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5841)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5841)
				if ((tmp4)){
					HX_STACK_LINE(5841)
					::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(5841)
					old = tmp5;
					HX_STACK_LINE(5841)
					ret1 = old->next;
					HX_STACK_LINE(5841)
					this->head = ret1;
					HX_STACK_LINE(5841)
					::zpp_nape::util::ZNPNode_ZPP_CutInt tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(5841)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(5841)
					if ((tmp7)){
						HX_STACK_LINE(5841)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5841)
					old = pre->next;
					HX_STACK_LINE(5841)
					ret1 = old->next;
					HX_STACK_LINE(5841)
					pre->next = ret1;
					HX_STACK_LINE(5841)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(5841)
					if ((tmp5)){
						HX_STACK_LINE(5841)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5841)
				{
					HX_STACK_LINE(5841)
					::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5841)
					o->elt = null();
					HX_STACK_LINE(5841)
					::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(5841)
					o->next = tmp5;
					HX_STACK_LINE(5841)
					::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5841)
				this->modified = true;
				HX_STACK_LINE(5841)
				(this->length)--;
				HX_STACK_LINE(5841)
				this->pushmod = true;
				HX_STACK_LINE(5841)
				ret1;
			}
			HX_STACK_LINE(5842)
			ret = true;
			HX_STACK_LINE(5843)
			break;
		}
		HX_STACK_LINE(5845)
		pre = cur;
		HX_STACK_LINE(5846)
		cur = cur->next;
	}
	HX_STACK_LINE(5848)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5848)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","erase",0x81e9c4fa,"zpp_nape.util.ZNPList_ZPP_CutInt.erase","zpp_nape/util/Lists.hx",5850,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5851)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5851)
	{
		HX_STACK_LINE(5851)
		::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(5851)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5851)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5851)
		if ((tmp1)){
			HX_STACK_LINE(5851)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5851)
			old = tmp2;
			HX_STACK_LINE(5851)
			ret = old->next;
			HX_STACK_LINE(5851)
			this->head = ret;
			HX_STACK_LINE(5851)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5851)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5851)
			if ((tmp4)){
				HX_STACK_LINE(5851)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(5851)
			old = pre->next;
			HX_STACK_LINE(5851)
			ret = old->next;
			HX_STACK_LINE(5851)
			pre->next = ret;
			HX_STACK_LINE(5851)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5851)
			if ((tmp2)){
				HX_STACK_LINE(5851)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(5851)
		{
			HX_STACK_LINE(5851)
			::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5851)
			o->elt = null();
			HX_STACK_LINE(5851)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5851)
			o->next = tmp2;
			HX_STACK_LINE(5851)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5851)
		this->modified = true;
		HX_STACK_LINE(5851)
		(this->length)--;
		HX_STACK_LINE(5851)
		this->pushmod = true;
		HX_STACK_LINE(5851)
		tmp = ret;
	}
	HX_STACK_LINE(5851)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_erase",0xa682c666,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_erase","zpp_nape/util/Lists.hx",5855,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(5864)
	::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5865)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5866)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5866)
	if ((tmp)){
		HX_STACK_LINE(5867)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5867)
		old = tmp1;
		HX_STACK_LINE(5868)
		ret = old->next;
		HX_STACK_LINE(5869)
		this->head = ret;
		HX_STACK_LINE(5870)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5870)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5870)
		if ((tmp3)){
			HX_STACK_LINE(5870)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5873)
		old = pre->next;
		HX_STACK_LINE(5874)
		ret = old->next;
		HX_STACK_LINE(5875)
		pre->next = ret;
		HX_STACK_LINE(5876)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5876)
		if ((tmp1)){
			HX_STACK_LINE(5876)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5879)
	{
		HX_STACK_LINE(5880)
		::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5889)
		o->elt = null();
		HX_STACK_LINE(5890)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5890)
		o->next = tmp1;
		HX_STACK_LINE(5891)
		::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5896)
	this->modified = true;
	HX_STACK_LINE(5897)
	(this->length)--;
	HX_STACK_LINE(5898)
	this->pushmod = true;
	HX_STACK_LINE(5899)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5899)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","splice",0xa4123ae8,"zpp_nape.util.ZNPList_ZPP_CutInt.splice","zpp_nape/util/Lists.hx",5901,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(5902)
	while((true)){
		HX_STACK_LINE(5902)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5902)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5902)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5902)
		if ((tmp1)){
			HX_STACK_LINE(5902)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(5902)
			tmp2 = false;
		}
		HX_STACK_LINE(5902)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5902)
		if ((tmp3)){
			HX_STACK_LINE(5902)
			break;
		}
		HX_STACK_LINE(5902)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5902)
		this->erase(tmp4);
	}
	HX_STACK_LINE(5903)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5903)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,splice,return )

Void ZNPList_ZPP_CutInt_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","clear",0x57284da1,"zpp_nape.util.ZNPList_ZPP_CutInt.clear","zpp_nape/util/Lists.hx",5906,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5906)
		while((true)){
			HX_STACK_LINE(5906)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(5906)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5906)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5906)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5906)
			if ((tmp3)){
				HX_STACK_LINE(5906)
				break;
			}
			HX_STACK_LINE(5906)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5906)
			::zpp_nape::util::ZNPNode_ZPP_CutInt ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5906)
			this->head = ret->next;
			HX_STACK_LINE(5906)
			{
				HX_STACK_LINE(5906)
				::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5906)
				o->elt = null();
				HX_STACK_LINE(5906)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5906)
				o->next = tmp5;
				HX_STACK_LINE(5906)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5906)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5906)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5906)
			if ((tmp6)){
				HX_STACK_LINE(5906)
				this->pushmod = true;
			}
			HX_STACK_LINE(5906)
			this->modified = true;
			HX_STACK_LINE(5906)
			(this->length)--;
		}
		HX_STACK_LINE(5906)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,clear,(void))

Void ZNPList_ZPP_CutInt_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_clear",0x7bc14f0d,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_clear","zpp_nape/util/Lists.hx",5911,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5912)
		while((true)){
			HX_STACK_LINE(5912)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(5912)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5912)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5912)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(5912)
			if ((tmp3)){
				HX_STACK_LINE(5912)
				break;
			}
			HX_STACK_LINE(5912)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(5912)
			::zpp_nape::util::ZNPNode_ZPP_CutInt ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5912)
			this->head = ret->next;
			HX_STACK_LINE(5912)
			{
				HX_STACK_LINE(5912)
				::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5912)
				o->elt = null();
				HX_STACK_LINE(5912)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(5912)
				o->next = tmp5;
				HX_STACK_LINE(5912)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5912)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5912)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5912)
			if ((tmp6)){
				HX_STACK_LINE(5912)
				this->pushmod = true;
			}
			HX_STACK_LINE(5912)
			this->modified = true;
			HX_STACK_LINE(5912)
			(this->length)--;
		}
		HX_STACK_LINE(5913)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_clear,(void))

Void ZNPList_ZPP_CutInt_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","reverse",0x1bc74236,"zpp_nape.util.ZNPList_ZPP_CutInt.reverse","zpp_nape/util/Lists.hx",5916,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(5917)
		::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5917)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5918)
		::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5919)
		while((true)){
			HX_STACK_LINE(5919)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(5919)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(5919)
			if ((tmp2)){
				HX_STACK_LINE(5919)
				break;
			}
			HX_STACK_LINE(5920)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5921)
			cur->next = pre;
			HX_STACK_LINE(5922)
			this->head = cur;
			HX_STACK_LINE(5923)
			pre = cur;
			HX_STACK_LINE(5924)
			cur = nx;
		}
		HX_STACK_LINE(5926)
		this->modified = true;
		HX_STACK_LINE(5927)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,reverse,(void))

bool ZNPList_ZPP_CutInt_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","empty",0x7ea716a1,"zpp_nape.util.ZNPList_ZPP_CutInt.empty","zpp_nape/util/Lists.hx",5931,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5932)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5932)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5932)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,empty,return )

int ZNPList_ZPP_CutInt_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","size",0x7120e32d,"zpp_nape.util.ZNPList_ZPP_CutInt.size","zpp_nape/util/Lists.hx",5936,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5937)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5937)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,size,return )

bool ZNPList_ZPP_CutInt_obj::has( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","has",0x2af32e6e,"zpp_nape.util.ZNPList_ZPP_CutInt.has","zpp_nape/util/Lists.hx",5939,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5940)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5940)
	{
		HX_STACK_LINE(5940)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5940)
		{
			HX_STACK_LINE(5940)
			ret = false;
			HX_STACK_LINE(5940)
			{
				HX_STACK_LINE(5940)
				::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(5940)
				::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(5940)
				while((true)){
					HX_STACK_LINE(5940)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(5940)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(5940)
					if ((tmp3)){
						HX_STACK_LINE(5940)
						break;
					}
					HX_STACK_LINE(5940)
					::zpp_nape::geom::ZPP_CutInt npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(5940)
					{
						HX_STACK_LINE(5940)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(5940)
						if ((tmp4)){
							HX_STACK_LINE(5940)
							ret = true;
							HX_STACK_LINE(5940)
							break;
						}
					}
					HX_STACK_LINE(5940)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(5940)
		tmp = ret;
	}
	HX_STACK_LINE(5940)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,has,return )

bool ZNPList_ZPP_CutInt_obj::inlined_has( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","inlined_has",0xe3babcda,"zpp_nape.util.ZNPList_ZPP_CutInt.inlined_has","zpp_nape/util/Lists.hx",5944,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(5953)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5954)
	{
		HX_STACK_LINE(5955)
		ret = false;
		HX_STACK_LINE(5956)
		{
			HX_STACK_LINE(5957)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(5957)
			::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5958)
			while((true)){
				HX_STACK_LINE(5958)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(5958)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(5958)
				if ((tmp2)){
					HX_STACK_LINE(5958)
					break;
				}
				HX_STACK_LINE(5959)
				::zpp_nape::geom::ZPP_CutInt npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5960)
				{
					HX_STACK_LINE(5961)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(5961)
					if ((tmp3)){
						HX_STACK_LINE(5962)
						ret = true;
						HX_STACK_LINE(5963)
						break;
					}
				}
				HX_STACK_LINE(5966)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5970)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5970)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_has,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","front",0x155af4bd,"zpp_nape.util.ZNPList_ZPP_CutInt.front","zpp_nape/util/Lists.hx",5974,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5975)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5975)
	::zpp_nape::geom::ZPP_CutInt tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5975)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,front,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","back",0x65de1c93,"zpp_nape.util.ZNPList_ZPP_CutInt.back","zpp_nape/util/Lists.hx",5977,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(5978)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5978)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5979)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5980)
	while((true)){
		HX_STACK_LINE(5980)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5980)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5980)
		if ((tmp2)){
			HX_STACK_LINE(5980)
			break;
		}
		HX_STACK_LINE(5981)
		ret = cur;
		HX_STACK_LINE(5982)
		cur = cur->next;
	}
	HX_STACK_LINE(5984)
	::zpp_nape::geom::ZPP_CutInt tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5984)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","iterator_at",0xe859acf8,"zpp_nape.util.ZNPList_ZPP_CutInt.iterator_at","zpp_nape/util/Lists.hx",5986,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(5995)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5995)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5996)
	while((true)){
		HX_STACK_LINE(5996)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5996)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5996)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(5996)
		if ((tmp2)){
			HX_STACK_LINE(5996)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(5996)
			tmp3 = false;
		}
		HX_STACK_LINE(5996)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(5996)
		if ((tmp4)){
			HX_STACK_LINE(5996)
			break;
		}
		HX_STACK_LINE(5996)
		ret = ret->next;
	}
	HX_STACK_LINE(5997)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5997)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,iterator_at,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutInt","at",0x97b9e45f,"zpp_nape.util.ZNPList_ZPP_CutInt.at","zpp_nape/util/Lists.hx",5999,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(6008)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6008)
	::zpp_nape::util::ZNPNode_ZPP_CutInt tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6008)
	::zpp_nape::util::ZNPNode_ZPP_CutInt it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(6009)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6009)
	::zpp_nape::geom::ZPP_CutInt tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6009)
	if ((tmp2)){
		HX_STACK_LINE(6009)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(6009)
		tmp3 = null();
	}
	HX_STACK_LINE(6009)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,at,return )


ZNPList_ZPP_CutInt_obj::ZNPList_ZPP_CutInt_obj()
{
}

void ZNPList_ZPP_CutInt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CutInt);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CutInt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_CutInt_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_CutInt_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CutInt >(); return inValue; }
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

bool ZNPList_ZPP_CutInt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_CutInt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CutInt*/ ,(int)offsetof(ZNPList_ZPP_CutInt_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CutInt_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CutInt_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_CutInt_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CutInt_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CutInt_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_CutInt_obj::__mClass;

void ZNPList_ZPP_CutInt_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_CutInt","\x82","\x35","\x66","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_CutInt_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_CutInt_obj >;
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
