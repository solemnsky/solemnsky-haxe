#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_PartitionedPoly_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","new",0xe5cadd12,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.new","zpp_nape/util/Lists.hx",6847,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(6857)
	this->length = (int)0;
	HX_STACK_LINE(6856)
	this->pushmod = false;
	HX_STACK_LINE(6855)
	this->modified = false;
	HX_STACK_LINE(6848)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_PartitionedPoly_obj::~ZNPList_ZPP_PartitionedPoly_obj() { }

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__CreateEmpty() { return  new ZNPList_ZPP_PartitionedPoly_obj; }
hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > ZNPList_ZPP_PartitionedPoly_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > _result_ = new ZNPList_ZPP_PartitionedPoly_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > _result_ = new ZNPList_ZPP_PartitionedPoly_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","begin",0x2b2f075b,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.begin","zpp_nape/util/Lists.hx",6852,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6853)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6853)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,begin,return )

Void ZNPList_ZPP_PartitionedPoly_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","setbegin",0x8a609155,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.setbegin","zpp_nape/util/Lists.hx",6860,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(6861)
		this->head = i;
		HX_STACK_LINE(6862)
		this->modified = true;
		HX_STACK_LINE(6863)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,setbegin,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::add( ::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","add",0xe5c0fed3,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.add","zpp_nape/util/Lists.hx",6865,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(6866)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6866)
	{
		HX_STACK_LINE(6866)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6866)
		{
			HX_STACK_LINE(6866)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6866)
			{
				HX_STACK_LINE(6866)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp2 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6866)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6866)
				if ((tmp3)){
					HX_STACK_LINE(6866)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6866)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(6866)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6866)
					ret = tmp4;
					HX_STACK_LINE(6866)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
					HX_STACK_LINE(6866)
					ret->next = null();
				}
				HX_STACK_LINE(6866)
				Dynamic();
			}
			HX_STACK_LINE(6866)
			ret->elt = o;
			HX_STACK_LINE(6866)
			tmp1 = ret;
		}
		HX_STACK_LINE(6866)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(6866)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6866)
		temp->next = tmp2;
		HX_STACK_LINE(6866)
		this->head = temp;
		HX_STACK_LINE(6866)
		this->modified = true;
		HX_STACK_LINE(6866)
		(this->length)++;
		HX_STACK_LINE(6866)
		tmp = o;
	}
	HX_STACK_LINE(6866)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,add,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_add( ::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_add",0xb36c5b3f,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_add","zpp_nape/util/Lists.hx",6870,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(6879)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6879)
	{
		HX_STACK_LINE(6880)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6881)
		{
			HX_STACK_LINE(6882)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6882)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6882)
			if ((tmp2)){
				HX_STACK_LINE(6883)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6883)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(6889)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6889)
				ret = tmp3;
				HX_STACK_LINE(6890)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
				HX_STACK_LINE(6891)
				ret->next = null();
			}
			HX_STACK_LINE(6896)
			Dynamic();
		}
		HX_STACK_LINE(6898)
		ret->elt = o;
		HX_STACK_LINE(6899)
		tmp = ret;
	}
	HX_STACK_LINE(6879)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6901)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6901)
	temp->next = tmp1;
	HX_STACK_LINE(6902)
	this->head = temp;
	HX_STACK_LINE(6903)
	this->modified = true;
	HX_STACK_LINE(6904)
	(this->length)++;
	HX_STACK_LINE(6905)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6905)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_add,return )

Void ZNPList_ZPP_PartitionedPoly_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","addAll",0xa21b780e,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.addAll","zpp_nape/util/Lists.hx",6916,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(6917)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(6918)
		while((true)){
			HX_STACK_LINE(6918)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(6918)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6918)
			if ((tmp1)){
				HX_STACK_LINE(6918)
				break;
			}
			HX_STACK_LINE(6919)
			::zpp_nape::geom::ZPP_PartitionedPoly i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(6920)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6920)
			this->add(tmp2);
			HX_STACK_LINE(6921)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur,::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","insert",0xa0fdb1c7,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.insert","zpp_nape/util/Lists.hx",6925,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(6926)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6926)
	{
		HX_STACK_LINE(6926)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6926)
		{
			HX_STACK_LINE(6926)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6926)
			{
				HX_STACK_LINE(6926)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp2 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6926)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6926)
				if ((tmp3)){
					HX_STACK_LINE(6926)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6926)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(6926)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6926)
					ret = tmp4;
					HX_STACK_LINE(6926)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
					HX_STACK_LINE(6926)
					ret->next = null();
				}
				HX_STACK_LINE(6926)
				Dynamic();
			}
			HX_STACK_LINE(6926)
			ret->elt = o;
			HX_STACK_LINE(6926)
			tmp1 = ret;
		}
		HX_STACK_LINE(6926)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(6926)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6926)
		if ((tmp2)){
			HX_STACK_LINE(6926)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6926)
			temp->next = tmp3;
			HX_STACK_LINE(6926)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(6926)
			temp->next = cur->next;
			HX_STACK_LINE(6926)
			cur->next = temp;
		}
		HX_STACK_LINE(6926)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6926)
		this->pushmod = tmp3;
		HX_STACK_LINE(6926)
		(this->length)++;
		HX_STACK_LINE(6926)
		tmp = temp;
	}
	HX_STACK_LINE(6926)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur,::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_insert",0x8736e0db,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_insert","zpp_nape/util/Lists.hx",6930,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(6939)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6939)
	{
		HX_STACK_LINE(6940)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6941)
		{
			HX_STACK_LINE(6942)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6942)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6942)
			if ((tmp2)){
				HX_STACK_LINE(6943)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6943)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(6949)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6949)
				ret = tmp3;
				HX_STACK_LINE(6950)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
				HX_STACK_LINE(6951)
				ret->next = null();
			}
			HX_STACK_LINE(6956)
			Dynamic();
		}
		HX_STACK_LINE(6958)
		ret->elt = o;
		HX_STACK_LINE(6959)
		tmp = ret;
	}
	HX_STACK_LINE(6939)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6961)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6961)
	if ((tmp1)){
		HX_STACK_LINE(6962)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6962)
		temp->next = tmp2;
		HX_STACK_LINE(6963)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(6966)
		temp->next = cur->next;
		HX_STACK_LINE(6967)
		cur->next = temp;
	}
	HX_STACK_LINE(6969)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6969)
	this->pushmod = tmp2;
	HX_STACK_LINE(6970)
	(this->length)++;
	HX_STACK_LINE(6971)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6971)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,inlined_insert,return )

Void ZNPList_ZPP_PartitionedPoly_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","pop",0xe5cc6a43,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.pop","zpp_nape/util/Lists.hx",6974,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6974)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6974)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6974)
		this->head = ret->next;
		HX_STACK_LINE(6974)
		{
			HX_STACK_LINE(6974)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6974)
			o->elt = null();
			HX_STACK_LINE(6974)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6974)
			o->next = tmp1;
			HX_STACK_LINE(6974)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6974)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6974)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6974)
		if ((tmp2)){
			HX_STACK_LINE(6974)
			this->pushmod = true;
		}
		HX_STACK_LINE(6974)
		this->modified = true;
		HX_STACK_LINE(6974)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,pop,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_pop",0xb377c6af,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_pop","zpp_nape/util/Lists.hx",6978,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6987)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6987)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6988)
		this->head = ret->next;
		HX_STACK_LINE(6990)
		{
			HX_STACK_LINE(6991)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7000)
			o->elt = null();
			HX_STACK_LINE(7001)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7001)
			o->next = tmp1;
			HX_STACK_LINE(7002)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7007)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7007)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7007)
		if ((tmp2)){
			HX_STACK_LINE(7007)
			this->pushmod = true;
		}
		HX_STACK_LINE(7008)
		this->modified = true;
		HX_STACK_LINE(7009)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","pop_unsafe",0x5fc249e2,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.pop_unsafe","zpp_nape/util/Lists.hx",7011,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7012)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7012)
	{
		HX_STACK_LINE(7012)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7012)
		::zpp_nape::geom::ZPP_PartitionedPoly ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7012)
		this->pop();
		HX_STACK_LINE(7012)
		tmp = ret;
	}
	HX_STACK_LINE(7012)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_pop_unsafe",0xafc292f6,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_pop_unsafe","zpp_nape/util/Lists.hx",7016,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7025)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7025)
	::zpp_nape::geom::ZPP_PartitionedPoly ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7026)
	this->pop();
	HX_STACK_LINE(7027)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7027)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_PartitionedPoly_obj::remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","remove",0x07a90ad2,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.remove","zpp_nape/util/Lists.hx",7038,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7038)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7038)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7038)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7038)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7038)
		while((true)){
			HX_STACK_LINE(7038)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7038)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7038)
			if ((tmp2)){
				HX_STACK_LINE(7038)
				break;
			}
			HX_STACK_LINE(7038)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7038)
			if ((tmp3)){
				HX_STACK_LINE(7038)
				{
					HX_STACK_LINE(7038)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7038)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7038)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7038)
					if ((tmp4)){
						HX_STACK_LINE(7038)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7038)
						old = tmp5;
						HX_STACK_LINE(7038)
						ret1 = old->next;
						HX_STACK_LINE(7038)
						this->head = ret1;
						HX_STACK_LINE(7038)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(7038)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7038)
						if ((tmp7)){
							HX_STACK_LINE(7038)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7038)
						old = pre->next;
						HX_STACK_LINE(7038)
						ret1 = old->next;
						HX_STACK_LINE(7038)
						pre->next = ret1;
						HX_STACK_LINE(7038)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7038)
						if ((tmp5)){
							HX_STACK_LINE(7038)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7038)
					{
						HX_STACK_LINE(7038)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7038)
						o->elt = null();
						HX_STACK_LINE(7038)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7038)
						o->next = tmp5;
						HX_STACK_LINE(7038)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7038)
					this->modified = true;
					HX_STACK_LINE(7038)
					(this->length)--;
					HX_STACK_LINE(7038)
					this->pushmod = true;
					HX_STACK_LINE(7038)
					ret1;
				}
				HX_STACK_LINE(7038)
				ret = true;
				HX_STACK_LINE(7038)
				break;
			}
			HX_STACK_LINE(7038)
			pre = cur;
			HX_STACK_LINE(7038)
			cur = cur->next;
		}
		HX_STACK_LINE(7038)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,remove,(void))

bool ZNPList_ZPP_PartitionedPoly_obj::try_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","try_remove",0x76ec7f96,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.try_remove","zpp_nape/util/Lists.hx",7040,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7049)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7050)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7050)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7051)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7052)
	while((true)){
		HX_STACK_LINE(7052)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7052)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7052)
		if ((tmp2)){
			HX_STACK_LINE(7052)
			break;
		}
		HX_STACK_LINE(7053)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7053)
		if ((tmp3)){
			HX_STACK_LINE(7054)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7054)
			this->erase(tmp4);
			HX_STACK_LINE(7055)
			ret = true;
			HX_STACK_LINE(7056)
			break;
		}
		HX_STACK_LINE(7058)
		pre = cur;
		HX_STACK_LINE(7059)
		cur = cur->next;
	}
	HX_STACK_LINE(7061)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7061)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,try_remove,return )

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_remove",0xede239e6,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_remove","zpp_nape/util/Lists.hx",7074,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7074)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7074)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7074)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7074)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7074)
		while((true)){
			HX_STACK_LINE(7074)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7074)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7074)
			if ((tmp2)){
				HX_STACK_LINE(7074)
				break;
			}
			HX_STACK_LINE(7074)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7074)
			if ((tmp3)){
				HX_STACK_LINE(7074)
				{
					HX_STACK_LINE(7074)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7074)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7074)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7074)
					if ((tmp4)){
						HX_STACK_LINE(7074)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7074)
						old = tmp5;
						HX_STACK_LINE(7074)
						ret1 = old->next;
						HX_STACK_LINE(7074)
						this->head = ret1;
						HX_STACK_LINE(7074)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(7074)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7074)
						if ((tmp7)){
							HX_STACK_LINE(7074)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7074)
						old = pre->next;
						HX_STACK_LINE(7074)
						ret1 = old->next;
						HX_STACK_LINE(7074)
						pre->next = ret1;
						HX_STACK_LINE(7074)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7074)
						if ((tmp5)){
							HX_STACK_LINE(7074)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7074)
					{
						HX_STACK_LINE(7074)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7074)
						o->elt = null();
						HX_STACK_LINE(7074)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7074)
						o->next = tmp5;
						HX_STACK_LINE(7074)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7074)
					this->modified = true;
					HX_STACK_LINE(7074)
					(this->length)--;
					HX_STACK_LINE(7074)
					this->pushmod = true;
					HX_STACK_LINE(7074)
					ret1;
				}
				HX_STACK_LINE(7074)
				ret = true;
				HX_STACK_LINE(7074)
				break;
			}
			HX_STACK_LINE(7074)
			pre = cur;
			HX_STACK_LINE(7074)
			cur = cur->next;
		}
		HX_STACK_LINE(7074)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_remove,(void))

bool ZNPList_ZPP_PartitionedPoly_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_try_remove",0xc6ecc8aa,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_try_remove","zpp_nape/util/Lists.hx",7078,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7087)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7088)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7088)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7089)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7090)
	while((true)){
		HX_STACK_LINE(7090)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7090)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7090)
		if ((tmp2)){
			HX_STACK_LINE(7090)
			break;
		}
		HX_STACK_LINE(7091)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7091)
		if ((tmp3)){
			HX_STACK_LINE(7092)
			{
				HX_STACK_LINE(7092)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7092)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7092)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(7092)
				if ((tmp4)){
					HX_STACK_LINE(7092)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7092)
					old = tmp5;
					HX_STACK_LINE(7092)
					ret1 = old->next;
					HX_STACK_LINE(7092)
					this->head = ret1;
					HX_STACK_LINE(7092)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(7092)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(7092)
					if ((tmp7)){
						HX_STACK_LINE(7092)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7092)
					old = pre->next;
					HX_STACK_LINE(7092)
					ret1 = old->next;
					HX_STACK_LINE(7092)
					pre->next = ret1;
					HX_STACK_LINE(7092)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7092)
					if ((tmp5)){
						HX_STACK_LINE(7092)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7092)
				{
					HX_STACK_LINE(7092)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7092)
					o->elt = null();
					HX_STACK_LINE(7092)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7092)
					o->next = tmp5;
					HX_STACK_LINE(7092)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7092)
				this->modified = true;
				HX_STACK_LINE(7092)
				(this->length)--;
				HX_STACK_LINE(7092)
				this->pushmod = true;
				HX_STACK_LINE(7092)
				ret1;
			}
			HX_STACK_LINE(7093)
			ret = true;
			HX_STACK_LINE(7094)
			break;
		}
		HX_STACK_LINE(7096)
		pre = cur;
		HX_STACK_LINE(7097)
		cur = cur->next;
	}
	HX_STACK_LINE(7099)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7099)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","erase",0xedf60618,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.erase","zpp_nape/util/Lists.hx",7101,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7102)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7102)
	{
		HX_STACK_LINE(7102)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(7102)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7102)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7102)
		if ((tmp1)){
			HX_STACK_LINE(7102)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7102)
			old = tmp2;
			HX_STACK_LINE(7102)
			ret = old->next;
			HX_STACK_LINE(7102)
			this->head = ret;
			HX_STACK_LINE(7102)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7102)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7102)
			if ((tmp4)){
				HX_STACK_LINE(7102)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(7102)
			old = pre->next;
			HX_STACK_LINE(7102)
			ret = old->next;
			HX_STACK_LINE(7102)
			pre->next = ret;
			HX_STACK_LINE(7102)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7102)
			if ((tmp2)){
				HX_STACK_LINE(7102)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(7102)
		{
			HX_STACK_LINE(7102)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7102)
			o->elt = null();
			HX_STACK_LINE(7102)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp2 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7102)
			o->next = tmp2;
			HX_STACK_LINE(7102)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7102)
		this->modified = true;
		HX_STACK_LINE(7102)
		(this->length)--;
		HX_STACK_LINE(7102)
		this->pushmod = true;
		HX_STACK_LINE(7102)
		tmp = ret;
	}
	HX_STACK_LINE(7102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_erase",0x02825584,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_erase","zpp_nape/util/Lists.hx",7106,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7115)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7116)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7117)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7117)
	if ((tmp)){
		HX_STACK_LINE(7118)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7118)
		old = tmp1;
		HX_STACK_LINE(7119)
		ret = old->next;
		HX_STACK_LINE(7120)
		this->head = ret;
		HX_STACK_LINE(7121)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7121)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7121)
		if ((tmp3)){
			HX_STACK_LINE(7121)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7124)
		old = pre->next;
		HX_STACK_LINE(7125)
		ret = old->next;
		HX_STACK_LINE(7126)
		pre->next = ret;
		HX_STACK_LINE(7127)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7127)
		if ((tmp1)){
			HX_STACK_LINE(7127)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7130)
	{
		HX_STACK_LINE(7131)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7140)
		o->elt = null();
		HX_STACK_LINE(7141)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7141)
		o->next = tmp1;
		HX_STACK_LINE(7142)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7147)
	this->modified = true;
	HX_STACK_LINE(7148)
	(this->length)--;
	HX_STACK_LINE(7149)
	this->pushmod = true;
	HX_STACK_LINE(7150)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7150)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","splice",0xc2bef40a,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.splice","zpp_nape/util/Lists.hx",7152,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(7153)
	while((true)){
		HX_STACK_LINE(7153)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7153)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7153)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7153)
		if ((tmp1)){
			HX_STACK_LINE(7153)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(7153)
			tmp2 = false;
		}
		HX_STACK_LINE(7153)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7153)
		if ((tmp3)){
			HX_STACK_LINE(7153)
			break;
		}
		HX_STACK_LINE(7153)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7153)
		this->erase(tmp4);
	}
	HX_STACK_LINE(7154)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,splice,return )

Void ZNPList_ZPP_PartitionedPoly_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","clear",0xc3348ebf,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.clear","zpp_nape/util/Lists.hx",7157,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7157)
		while((true)){
			HX_STACK_LINE(7157)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7157)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7157)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7157)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7157)
			if ((tmp3)){
				HX_STACK_LINE(7157)
				break;
			}
			HX_STACK_LINE(7157)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7157)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7157)
			this->head = ret->next;
			HX_STACK_LINE(7157)
			{
				HX_STACK_LINE(7157)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7157)
				o->elt = null();
				HX_STACK_LINE(7157)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(7157)
				o->next = tmp5;
				HX_STACK_LINE(7157)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7157)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7157)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(7157)
			if ((tmp6)){
				HX_STACK_LINE(7157)
				this->pushmod = true;
			}
			HX_STACK_LINE(7157)
			this->modified = true;
			HX_STACK_LINE(7157)
			(this->length)--;
		}
		HX_STACK_LINE(7157)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,clear,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_clear",0xd7c0de2b,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_clear","zpp_nape/util/Lists.hx",7162,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7163)
		while((true)){
			HX_STACK_LINE(7163)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7163)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7163)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7163)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7163)
			if ((tmp3)){
				HX_STACK_LINE(7163)
				break;
			}
			HX_STACK_LINE(7163)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7163)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7163)
			this->head = ret->next;
			HX_STACK_LINE(7163)
			{
				HX_STACK_LINE(7163)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7163)
				o->elt = null();
				HX_STACK_LINE(7163)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(7163)
				o->next = tmp5;
				HX_STACK_LINE(7163)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7163)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7163)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(7163)
			if ((tmp6)){
				HX_STACK_LINE(7163)
				this->pushmod = true;
			}
			HX_STACK_LINE(7163)
			this->modified = true;
			HX_STACK_LINE(7163)
			(this->length)--;
		}
		HX_STACK_LINE(7164)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_clear,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","reverse",0xd43c86d4,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.reverse","zpp_nape/util/Lists.hx",7167,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7168)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7168)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7169)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7170)
		while((true)){
			HX_STACK_LINE(7170)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7170)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7170)
			if ((tmp2)){
				HX_STACK_LINE(7170)
				break;
			}
			HX_STACK_LINE(7171)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(7172)
			cur->next = pre;
			HX_STACK_LINE(7173)
			this->head = cur;
			HX_STACK_LINE(7174)
			pre = cur;
			HX_STACK_LINE(7175)
			cur = nx;
		}
		HX_STACK_LINE(7177)
		this->modified = true;
		HX_STACK_LINE(7178)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,reverse,(void))

bool ZNPList_ZPP_PartitionedPoly_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","empty",0xeab357bf,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.empty","zpp_nape/util/Lists.hx",7182,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7183)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7183)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7183)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,empty,return )

int ZNPList_ZPP_PartitionedPoly_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","size",0x2f07afcf,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.size","zpp_nape/util/Lists.hx",7187,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7188)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7188)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,size,return )

bool ZNPList_ZPP_PartitionedPoly_obj::has( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","has",0xe5c64c0c,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.has","zpp_nape/util/Lists.hx",7190,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7191)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7191)
	{
		HX_STACK_LINE(7191)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7191)
		{
			HX_STACK_LINE(7191)
			ret = false;
			HX_STACK_LINE(7191)
			{
				HX_STACK_LINE(7191)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(7191)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(7191)
				while((true)){
					HX_STACK_LINE(7191)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(7191)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(7191)
					if ((tmp3)){
						HX_STACK_LINE(7191)
						break;
					}
					HX_STACK_LINE(7191)
					::zpp_nape::geom::ZPP_PartitionedPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(7191)
					{
						HX_STACK_LINE(7191)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(7191)
						if ((tmp4)){
							HX_STACK_LINE(7191)
							ret = true;
							HX_STACK_LINE(7191)
							break;
						}
					}
					HX_STACK_LINE(7191)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(7191)
		tmp = ret;
	}
	HX_STACK_LINE(7191)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,has,return )

bool ZNPList_ZPP_PartitionedPoly_obj::inlined_has( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","inlined_has",0xb371a878,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.inlined_has","zpp_nape/util/Lists.hx",7195,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7204)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7205)
	{
		HX_STACK_LINE(7206)
		ret = false;
		HX_STACK_LINE(7207)
		{
			HX_STACK_LINE(7208)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7208)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7209)
			while((true)){
				HX_STACK_LINE(7209)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(7209)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7209)
				if ((tmp2)){
					HX_STACK_LINE(7209)
					break;
				}
				HX_STACK_LINE(7210)
				::zpp_nape::geom::ZPP_PartitionedPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(7211)
				{
					HX_STACK_LINE(7212)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(7212)
					if ((tmp3)){
						HX_STACK_LINE(7213)
						ret = true;
						HX_STACK_LINE(7214)
						break;
					}
				}
				HX_STACK_LINE(7217)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(7221)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7221)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_has,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","front",0x816735db,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.front","zpp_nape/util/Lists.hx",7225,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7226)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7226)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7226)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,front,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","back",0x23c4e935,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.back","zpp_nape/util/Lists.hx",7228,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7229)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7229)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7230)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7231)
	while((true)){
		HX_STACK_LINE(7231)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7231)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7231)
		if ((tmp2)){
			HX_STACK_LINE(7231)
			break;
		}
		HX_STACK_LINE(7232)
		ret = cur;
		HX_STACK_LINE(7233)
		cur = cur->next;
	}
	HX_STACK_LINE(7235)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","iterator_at",0xb8109896,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.iterator_at","zpp_nape/util/Lists.hx",7237,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(7246)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7246)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7247)
	while((true)){
		HX_STACK_LINE(7247)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7247)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7247)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7247)
		if ((tmp2)){
			HX_STACK_LINE(7247)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(7247)
			tmp3 = false;
		}
		HX_STACK_LINE(7247)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7247)
		if ((tmp4)){
			HX_STACK_LINE(7247)
			break;
		}
		HX_STACK_LINE(7247)
		ret = ret->next;
	}
	HX_STACK_LINE(7248)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7248)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,iterator_at,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","at",0x5846e481,"zpp_nape.util.ZNPList_ZPP_PartitionedPoly.at","zpp_nape/util/Lists.hx",7250,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(7259)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7259)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7259)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(7260)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7260)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(7260)
	if ((tmp2)){
		HX_STACK_LINE(7260)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(7260)
		tmp3 = null();
	}
	HX_STACK_LINE(7260)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,at,return )


ZNPList_ZPP_PartitionedPoly_obj::ZNPList_ZPP_PartitionedPoly_obj()
{
}

void ZNPList_ZPP_PartitionedPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_PartitionedPoly);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_PartitionedPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly >(); return inValue; }
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

bool ZNPList_ZPP_PartitionedPoly_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_PartitionedPoly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly*/ ,(int)offsetof(ZNPList_ZPP_PartitionedPoly_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_PartitionedPoly_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_PartitionedPoly_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_PartitionedPoly_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_PartitionedPoly_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_PartitionedPoly_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_PartitionedPoly_obj::__mClass;

void ZNPList_ZPP_PartitionedPoly_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_PartitionedPoly","\x20","\xac","\x76","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_PartitionedPoly_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_PartitionedPoly_obj >;
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
