#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutVert
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CutVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","new",0x362d64b0,"zpp_nape.util.ZNPList_ZPP_CutVert.new","zpp_nape/util/Lists.hx",6013,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(6023)
	this->length = (int)0;
	HX_STACK_LINE(6022)
	this->pushmod = false;
	HX_STACK_LINE(6021)
	this->modified = false;
	HX_STACK_LINE(6014)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_CutVert_obj::~ZNPList_ZPP_CutVert_obj() { }

Dynamic ZNPList_ZPP_CutVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_CutVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > ZNPList_ZPP_CutVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > _result_ = new ZNPList_ZPP_CutVert_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_CutVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > _result_ = new ZNPList_ZPP_CutVert_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","begin",0x3ef93279,"zpp_nape.util.ZNPList_ZPP_CutVert.begin","zpp_nape/util/Lists.hx",6018,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6019)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6019)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,begin,return )

Void ZNPList_ZPP_CutVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CutVert i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","setbegin",0xf0d7acf7,"zpp_nape.util.ZNPList_ZPP_CutVert.setbegin","zpp_nape/util/Lists.hx",6026,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(6027)
		this->head = i;
		HX_STACK_LINE(6028)
		this->modified = true;
		HX_STACK_LINE(6029)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,setbegin,(void))

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::add( ::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","add",0x36238671,"zpp_nape.util.ZNPList_ZPP_CutVert.add","zpp_nape/util/Lists.hx",6031,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(6032)
	::zpp_nape::geom::ZPP_CutVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6032)
	{
		HX_STACK_LINE(6032)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6032)
		{
			HX_STACK_LINE(6032)
			::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6032)
			{
				HX_STACK_LINE(6032)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6032)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6032)
				if ((tmp3)){
					HX_STACK_LINE(6032)
					::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6032)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(6032)
					::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6032)
					ret = tmp4;
					HX_STACK_LINE(6032)
					::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(6032)
					ret->next = null();
				}
				HX_STACK_LINE(6032)
				Dynamic();
			}
			HX_STACK_LINE(6032)
			ret->elt = o;
			HX_STACK_LINE(6032)
			tmp1 = ret;
		}
		HX_STACK_LINE(6032)
		::zpp_nape::util::ZNPNode_ZPP_CutVert temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(6032)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6032)
		temp->next = tmp2;
		HX_STACK_LINE(6032)
		this->head = temp;
		HX_STACK_LINE(6032)
		this->modified = true;
		HX_STACK_LINE(6032)
		(this->length)++;
		HX_STACK_LINE(6032)
		tmp = o;
	}
	HX_STACK_LINE(6032)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,add,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_add( ::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_add",0xb52cb0dd,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_add","zpp_nape/util/Lists.hx",6036,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(6045)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6045)
	{
		HX_STACK_LINE(6046)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6047)
		{
			HX_STACK_LINE(6048)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6048)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6048)
			if ((tmp2)){
				HX_STACK_LINE(6049)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6049)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(6055)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6055)
				ret = tmp3;
				HX_STACK_LINE(6056)
				::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(6057)
				ret->next = null();
			}
			HX_STACK_LINE(6062)
			Dynamic();
		}
		HX_STACK_LINE(6064)
		ret->elt = o;
		HX_STACK_LINE(6065)
		tmp = ret;
	}
	HX_STACK_LINE(6045)
	::zpp_nape::util::ZNPNode_ZPP_CutVert temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6067)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6067)
	temp->next = tmp1;
	HX_STACK_LINE(6068)
	this->head = temp;
	HX_STACK_LINE(6069)
	this->modified = true;
	HX_STACK_LINE(6070)
	(this->length)++;
	HX_STACK_LINE(6071)
	::zpp_nape::geom::ZPP_CutVert tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6071)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_add,return )

Void ZNPList_ZPP_CutVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CutVert x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","addAll",0xdf370730,"zpp_nape.util.ZNPList_ZPP_CutVert.addAll","zpp_nape/util/Lists.hx",6082,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(6083)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(6084)
		while((true)){
			HX_STACK_LINE(6084)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(6084)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6084)
			if ((tmp1)){
				HX_STACK_LINE(6084)
				break;
			}
			HX_STACK_LINE(6085)
			::zpp_nape::geom::ZPP_CutVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(6086)
			::zpp_nape::geom::ZPP_CutVert tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6086)
			this->add(tmp2);
			HX_STACK_LINE(6087)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CutVert cur,::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","insert",0xde1940e9,"zpp_nape.util.ZNPList_ZPP_CutVert.insert","zpp_nape/util/Lists.hx",6091,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(6092)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6092)
	{
		HX_STACK_LINE(6092)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6092)
		{
			HX_STACK_LINE(6092)
			::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6092)
			{
				HX_STACK_LINE(6092)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6092)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6092)
				if ((tmp3)){
					HX_STACK_LINE(6092)
					::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6092)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(6092)
					::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6092)
					ret = tmp4;
					HX_STACK_LINE(6092)
					::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(6092)
					ret->next = null();
				}
				HX_STACK_LINE(6092)
				Dynamic();
			}
			HX_STACK_LINE(6092)
			ret->elt = o;
			HX_STACK_LINE(6092)
			tmp1 = ret;
		}
		HX_STACK_LINE(6092)
		::zpp_nape::util::ZNPNode_ZPP_CutVert temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(6092)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6092)
		if ((tmp2)){
			HX_STACK_LINE(6092)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6092)
			temp->next = tmp3;
			HX_STACK_LINE(6092)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(6092)
			temp->next = cur->next;
			HX_STACK_LINE(6092)
			cur->next = temp;
		}
		HX_STACK_LINE(6092)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6092)
		this->pushmod = tmp3;
		HX_STACK_LINE(6092)
		(this->length)++;
		HX_STACK_LINE(6092)
		tmp = temp;
	}
	HX_STACK_LINE(6092)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CutVert cur,::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_insert",0xb50961fd,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_insert","zpp_nape/util/Lists.hx",6096,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(6105)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6105)
	{
		HX_STACK_LINE(6106)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6107)
		{
			HX_STACK_LINE(6108)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6108)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6108)
			if ((tmp2)){
				HX_STACK_LINE(6109)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6109)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(6115)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(6115)
				ret = tmp3;
				HX_STACK_LINE(6116)
				::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(6117)
				ret->next = null();
			}
			HX_STACK_LINE(6122)
			Dynamic();
		}
		HX_STACK_LINE(6124)
		ret->elt = o;
		HX_STACK_LINE(6125)
		tmp = ret;
	}
	HX_STACK_LINE(6105)
	::zpp_nape::util::ZNPNode_ZPP_CutVert temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6127)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6127)
	if ((tmp1)){
		HX_STACK_LINE(6128)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6128)
		temp->next = tmp2;
		HX_STACK_LINE(6129)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(6132)
		temp->next = cur->next;
		HX_STACK_LINE(6133)
		cur->next = temp;
	}
	HX_STACK_LINE(6135)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6135)
	this->pushmod = tmp2;
	HX_STACK_LINE(6136)
	(this->length)++;
	HX_STACK_LINE(6137)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6137)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,inlined_insert,return )

Void ZNPList_ZPP_CutVert_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","pop",0x362ef1e1,"zpp_nape.util.ZNPList_ZPP_CutVert.pop","zpp_nape/util/Lists.hx",6140,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6140)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6140)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6140)
		this->head = ret->next;
		HX_STACK_LINE(6140)
		{
			HX_STACK_LINE(6140)
			::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6140)
			o->elt = null();
			HX_STACK_LINE(6140)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6140)
			o->next = tmp1;
			HX_STACK_LINE(6140)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6140)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6140)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6140)
		if ((tmp2)){
			HX_STACK_LINE(6140)
			this->pushmod = true;
		}
		HX_STACK_LINE(6140)
		this->modified = true;
		HX_STACK_LINE(6140)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,pop,(void))

Void ZNPList_ZPP_CutVert_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_pop",0xb5381c4d,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_pop","zpp_nape/util/Lists.hx",6144,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6153)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6153)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6154)
		this->head = ret->next;
		HX_STACK_LINE(6156)
		{
			HX_STACK_LINE(6157)
			::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6166)
			o->elt = null();
			HX_STACK_LINE(6167)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6167)
			o->next = tmp1;
			HX_STACK_LINE(6168)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6173)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6173)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6173)
		if ((tmp2)){
			HX_STACK_LINE(6173)
			this->pushmod = true;
		}
		HX_STACK_LINE(6174)
		this->modified = true;
		HX_STACK_LINE(6175)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","pop_unsafe",0xa6f11204,"zpp_nape.util.ZNPList_ZPP_CutVert.pop_unsafe","zpp_nape/util/Lists.hx",6177,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6178)
	::zpp_nape::geom::ZPP_CutVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6178)
	{
		HX_STACK_LINE(6178)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6178)
		::zpp_nape::geom::ZPP_CutVert ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6178)
		this->pop();
		HX_STACK_LINE(6178)
		tmp = ret;
	}
	HX_STACK_LINE(6178)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_pop_unsafe",0x73094d18,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_pop_unsafe","zpp_nape/util/Lists.hx",6182,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6191)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6191)
	::zpp_nape::geom::ZPP_CutVert ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6192)
	this->pop();
	HX_STACK_LINE(6193)
	::zpp_nape::geom::ZPP_CutVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6193)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_CutVert_obj::remove( ::zpp_nape::geom::ZPP_CutVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","remove",0x44c499f4,"zpp_nape.util.ZNPList_ZPP_CutVert.remove","zpp_nape/util/Lists.hx",6204,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(6204)
		::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6204)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6204)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6204)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6204)
		while((true)){
			HX_STACK_LINE(6204)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6204)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6204)
			if ((tmp2)){
				HX_STACK_LINE(6204)
				break;
			}
			HX_STACK_LINE(6204)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6204)
			if ((tmp3)){
				HX_STACK_LINE(6204)
				{
					HX_STACK_LINE(6204)
					::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(6204)
					::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(6204)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6204)
					if ((tmp4)){
						HX_STACK_LINE(6204)
						::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(6204)
						old = tmp5;
						HX_STACK_LINE(6204)
						ret1 = old->next;
						HX_STACK_LINE(6204)
						this->head = ret1;
						HX_STACK_LINE(6204)
						::zpp_nape::util::ZNPNode_ZPP_CutVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(6204)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6204)
						if ((tmp7)){
							HX_STACK_LINE(6204)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(6204)
						old = pre->next;
						HX_STACK_LINE(6204)
						ret1 = old->next;
						HX_STACK_LINE(6204)
						pre->next = ret1;
						HX_STACK_LINE(6204)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(6204)
						if ((tmp5)){
							HX_STACK_LINE(6204)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(6204)
					{
						HX_STACK_LINE(6204)
						::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(6204)
						o->elt = null();
						HX_STACK_LINE(6204)
						::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(6204)
						o->next = tmp5;
						HX_STACK_LINE(6204)
						::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(6204)
					this->modified = true;
					HX_STACK_LINE(6204)
					(this->length)--;
					HX_STACK_LINE(6204)
					this->pushmod = true;
					HX_STACK_LINE(6204)
					ret1;
				}
				HX_STACK_LINE(6204)
				ret = true;
				HX_STACK_LINE(6204)
				break;
			}
			HX_STACK_LINE(6204)
			pre = cur;
			HX_STACK_LINE(6204)
			cur = cur->next;
		}
		HX_STACK_LINE(6204)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,remove,(void))

bool ZNPList_ZPP_CutVert_obj::try_remove( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","try_remove",0xbe1b47b8,"zpp_nape.util.ZNPList_ZPP_CutVert.try_remove","zpp_nape/util/Lists.hx",6206,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6215)
	::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6216)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6216)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6217)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6218)
	while((true)){
		HX_STACK_LINE(6218)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6218)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6218)
		if ((tmp2)){
			HX_STACK_LINE(6218)
			break;
		}
		HX_STACK_LINE(6219)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6219)
		if ((tmp3)){
			HX_STACK_LINE(6220)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6220)
			this->erase(tmp4);
			HX_STACK_LINE(6221)
			ret = true;
			HX_STACK_LINE(6222)
			break;
		}
		HX_STACK_LINE(6224)
		pre = cur;
		HX_STACK_LINE(6225)
		cur = cur->next;
	}
	HX_STACK_LINE(6227)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6227)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,try_remove,return )

Void ZNPList_ZPP_CutVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_CutVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_remove",0x1bb4bb08,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_remove","zpp_nape/util/Lists.hx",6240,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(6240)
		::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6240)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6240)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6240)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6240)
		while((true)){
			HX_STACK_LINE(6240)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6240)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6240)
			if ((tmp2)){
				HX_STACK_LINE(6240)
				break;
			}
			HX_STACK_LINE(6240)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6240)
			if ((tmp3)){
				HX_STACK_LINE(6240)
				{
					HX_STACK_LINE(6240)
					::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(6240)
					::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(6240)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(6240)
					if ((tmp4)){
						HX_STACK_LINE(6240)
						::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(6240)
						old = tmp5;
						HX_STACK_LINE(6240)
						ret1 = old->next;
						HX_STACK_LINE(6240)
						this->head = ret1;
						HX_STACK_LINE(6240)
						::zpp_nape::util::ZNPNode_ZPP_CutVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(6240)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(6240)
						if ((tmp7)){
							HX_STACK_LINE(6240)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(6240)
						old = pre->next;
						HX_STACK_LINE(6240)
						ret1 = old->next;
						HX_STACK_LINE(6240)
						pre->next = ret1;
						HX_STACK_LINE(6240)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(6240)
						if ((tmp5)){
							HX_STACK_LINE(6240)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(6240)
					{
						HX_STACK_LINE(6240)
						::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(6240)
						o->elt = null();
						HX_STACK_LINE(6240)
						::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(6240)
						o->next = tmp5;
						HX_STACK_LINE(6240)
						::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(6240)
					this->modified = true;
					HX_STACK_LINE(6240)
					(this->length)--;
					HX_STACK_LINE(6240)
					this->pushmod = true;
					HX_STACK_LINE(6240)
					ret1;
				}
				HX_STACK_LINE(6240)
				ret = true;
				HX_STACK_LINE(6240)
				break;
			}
			HX_STACK_LINE(6240)
			pre = cur;
			HX_STACK_LINE(6240)
			cur = cur->next;
		}
		HX_STACK_LINE(6240)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_CutVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_try_remove",0x8a3382cc,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_try_remove","zpp_nape/util/Lists.hx",6244,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6253)
	::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6254)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6254)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6255)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6256)
	while((true)){
		HX_STACK_LINE(6256)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6256)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6256)
		if ((tmp2)){
			HX_STACK_LINE(6256)
			break;
		}
		HX_STACK_LINE(6257)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6257)
		if ((tmp3)){
			HX_STACK_LINE(6258)
			{
				HX_STACK_LINE(6258)
				::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6258)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(6258)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(6258)
				if ((tmp4)){
					HX_STACK_LINE(6258)
					::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(6258)
					old = tmp5;
					HX_STACK_LINE(6258)
					ret1 = old->next;
					HX_STACK_LINE(6258)
					this->head = ret1;
					HX_STACK_LINE(6258)
					::zpp_nape::util::ZNPNode_ZPP_CutVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(6258)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(6258)
					if ((tmp7)){
						HX_STACK_LINE(6258)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6258)
					old = pre->next;
					HX_STACK_LINE(6258)
					ret1 = old->next;
					HX_STACK_LINE(6258)
					pre->next = ret1;
					HX_STACK_LINE(6258)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(6258)
					if ((tmp5)){
						HX_STACK_LINE(6258)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(6258)
				{
					HX_STACK_LINE(6258)
					::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6258)
					o->elt = null();
					HX_STACK_LINE(6258)
					::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(6258)
					o->next = tmp5;
					HX_STACK_LINE(6258)
					::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6258)
				this->modified = true;
				HX_STACK_LINE(6258)
				(this->length)--;
				HX_STACK_LINE(6258)
				this->pushmod = true;
				HX_STACK_LINE(6258)
				ret1;
			}
			HX_STACK_LINE(6259)
			ret = true;
			HX_STACK_LINE(6260)
			break;
		}
		HX_STACK_LINE(6262)
		pre = cur;
		HX_STACK_LINE(6263)
		cur = cur->next;
	}
	HX_STACK_LINE(6265)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6265)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","erase",0x01c03136,"zpp_nape.util.ZNPList_ZPP_CutVert.erase","zpp_nape/util/Lists.hx",6267,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(6268)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6268)
	{
		HX_STACK_LINE(6268)
		::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(6268)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6268)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6268)
		if ((tmp1)){
			HX_STACK_LINE(6268)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6268)
			old = tmp2;
			HX_STACK_LINE(6268)
			ret = old->next;
			HX_STACK_LINE(6268)
			this->head = ret;
			HX_STACK_LINE(6268)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6268)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6268)
			if ((tmp4)){
				HX_STACK_LINE(6268)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(6268)
			old = pre->next;
			HX_STACK_LINE(6268)
			ret = old->next;
			HX_STACK_LINE(6268)
			pre->next = ret;
			HX_STACK_LINE(6268)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6268)
			if ((tmp2)){
				HX_STACK_LINE(6268)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(6268)
		{
			HX_STACK_LINE(6268)
			::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6268)
			o->elt = null();
			HX_STACK_LINE(6268)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6268)
			o->next = tmp2;
			HX_STACK_LINE(6268)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6268)
		this->modified = true;
		HX_STACK_LINE(6268)
		(this->length)--;
		HX_STACK_LINE(6268)
		this->pushmod = true;
		HX_STACK_LINE(6268)
		tmp = ret;
	}
	HX_STACK_LINE(6268)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_erase",0x3539cea2,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_erase","zpp_nape/util/Lists.hx",6272,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(6281)
	::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(6282)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6283)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6283)
	if ((tmp)){
		HX_STACK_LINE(6284)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6284)
		old = tmp1;
		HX_STACK_LINE(6285)
		ret = old->next;
		HX_STACK_LINE(6286)
		this->head = ret;
		HX_STACK_LINE(6287)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6287)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6287)
		if ((tmp3)){
			HX_STACK_LINE(6287)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(6290)
		old = pre->next;
		HX_STACK_LINE(6291)
		ret = old->next;
		HX_STACK_LINE(6292)
		pre->next = ret;
		HX_STACK_LINE(6293)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6293)
		if ((tmp1)){
			HX_STACK_LINE(6293)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(6296)
	{
		HX_STACK_LINE(6297)
		::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6306)
		o->elt = null();
		HX_STACK_LINE(6307)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6307)
		o->next = tmp1;
		HX_STACK_LINE(6308)
		::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6313)
	this->modified = true;
	HX_STACK_LINE(6314)
	(this->length)--;
	HX_STACK_LINE(6315)
	this->pushmod = true;
	HX_STACK_LINE(6316)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6316)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","splice",0xffda832c,"zpp_nape.util.ZNPList_ZPP_CutVert.splice","zpp_nape/util/Lists.hx",6318,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(6319)
	while((true)){
		HX_STACK_LINE(6319)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6319)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6319)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6319)
		if ((tmp1)){
			HX_STACK_LINE(6319)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(6319)
			tmp2 = false;
		}
		HX_STACK_LINE(6319)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6319)
		if ((tmp3)){
			HX_STACK_LINE(6319)
			break;
		}
		HX_STACK_LINE(6319)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(6319)
		this->erase(tmp4);
	}
	HX_STACK_LINE(6320)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6320)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,splice,return )

Void ZNPList_ZPP_CutVert_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","clear",0xd6feb9dd,"zpp_nape.util.ZNPList_ZPP_CutVert.clear","zpp_nape/util/Lists.hx",6323,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6323)
		while((true)){
			HX_STACK_LINE(6323)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(6323)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6323)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6323)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6323)
			if ((tmp3)){
				HX_STACK_LINE(6323)
				break;
			}
			HX_STACK_LINE(6323)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6323)
			::zpp_nape::util::ZNPNode_ZPP_CutVert ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6323)
			this->head = ret->next;
			HX_STACK_LINE(6323)
			{
				HX_STACK_LINE(6323)
				::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6323)
				o->elt = null();
				HX_STACK_LINE(6323)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6323)
				o->next = tmp5;
				HX_STACK_LINE(6323)
				::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6323)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6323)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(6323)
			if ((tmp6)){
				HX_STACK_LINE(6323)
				this->pushmod = true;
			}
			HX_STACK_LINE(6323)
			this->modified = true;
			HX_STACK_LINE(6323)
			(this->length)--;
		}
		HX_STACK_LINE(6323)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,clear,(void))

Void ZNPList_ZPP_CutVert_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_clear",0x0a785749,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_clear","zpp_nape/util/Lists.hx",6328,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6329)
		while((true)){
			HX_STACK_LINE(6329)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(6329)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6329)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6329)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(6329)
			if ((tmp3)){
				HX_STACK_LINE(6329)
				break;
			}
			HX_STACK_LINE(6329)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(6329)
			::zpp_nape::util::ZNPNode_ZPP_CutVert ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6329)
			this->head = ret->next;
			HX_STACK_LINE(6329)
			{
				HX_STACK_LINE(6329)
				::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6329)
				o->elt = null();
				HX_STACK_LINE(6329)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6329)
				o->next = tmp5;
				HX_STACK_LINE(6329)
				::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6329)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(6329)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(6329)
			if ((tmp6)){
				HX_STACK_LINE(6329)
				this->pushmod = true;
			}
			HX_STACK_LINE(6329)
			this->modified = true;
			HX_STACK_LINE(6329)
			(this->length)--;
		}
		HX_STACK_LINE(6330)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_CutVert_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","reverse",0x0f3e3572,"zpp_nape.util.ZNPList_ZPP_CutVert.reverse","zpp_nape/util/Lists.hx",6333,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(6334)
		::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6334)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6335)
		::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6336)
		while((true)){
			HX_STACK_LINE(6336)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(6336)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(6336)
			if ((tmp2)){
				HX_STACK_LINE(6336)
				break;
			}
			HX_STACK_LINE(6337)
			::zpp_nape::util::ZNPNode_ZPP_CutVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(6338)
			cur->next = pre;
			HX_STACK_LINE(6339)
			this->head = cur;
			HX_STACK_LINE(6340)
			pre = cur;
			HX_STACK_LINE(6341)
			cur = nx;
		}
		HX_STACK_LINE(6343)
		this->modified = true;
		HX_STACK_LINE(6344)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,reverse,(void))

bool ZNPList_ZPP_CutVert_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","empty",0xfe7d82dd,"zpp_nape.util.ZNPList_ZPP_CutVert.empty","zpp_nape/util/Lists.hx",6348,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6349)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6349)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6349)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,empty,return )

int ZNPList_ZPP_CutVert_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","size",0x34dbd271,"zpp_nape.util.ZNPList_ZPP_CutVert.size","zpp_nape/util/Lists.hx",6353,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6354)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6354)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,size,return )

bool ZNPList_ZPP_CutVert_obj::has( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","has",0x3628d3aa,"zpp_nape.util.ZNPList_ZPP_CutVert.has","zpp_nape/util/Lists.hx",6356,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6357)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6357)
	{
		HX_STACK_LINE(6357)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6357)
		{
			HX_STACK_LINE(6357)
			ret = false;
			HX_STACK_LINE(6357)
			{
				HX_STACK_LINE(6357)
				::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(6357)
				::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(6357)
				while((true)){
					HX_STACK_LINE(6357)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(6357)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(6357)
					if ((tmp3)){
						HX_STACK_LINE(6357)
						break;
					}
					HX_STACK_LINE(6357)
					::zpp_nape::geom::ZPP_CutVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(6357)
					{
						HX_STACK_LINE(6357)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(6357)
						if ((tmp4)){
							HX_STACK_LINE(6357)
							ret = true;
							HX_STACK_LINE(6357)
							break;
						}
					}
					HX_STACK_LINE(6357)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(6357)
		tmp = ret;
	}
	HX_STACK_LINE(6357)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,has,return )

bool ZNPList_ZPP_CutVert_obj::inlined_has( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","inlined_has",0xb531fe16,"zpp_nape.util.ZNPList_ZPP_CutVert.inlined_has","zpp_nape/util/Lists.hx",6361,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(6370)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6371)
	{
		HX_STACK_LINE(6372)
		ret = false;
		HX_STACK_LINE(6373)
		{
			HX_STACK_LINE(6374)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(6374)
			::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(6375)
			while((true)){
				HX_STACK_LINE(6375)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(6375)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(6375)
				if ((tmp2)){
					HX_STACK_LINE(6375)
					break;
				}
				HX_STACK_LINE(6376)
				::zpp_nape::geom::ZPP_CutVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(6377)
				{
					HX_STACK_LINE(6378)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(6378)
					if ((tmp3)){
						HX_STACK_LINE(6379)
						ret = true;
						HX_STACK_LINE(6380)
						break;
					}
				}
				HX_STACK_LINE(6383)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(6387)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6387)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_has,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","front",0x953160f9,"zpp_nape.util.ZNPList_ZPP_CutVert.front","zpp_nape/util/Lists.hx",6391,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6392)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6392)
	::zpp_nape::geom::ZPP_CutVert tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6392)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,front,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","back",0x29990bd7,"zpp_nape.util.ZNPList_ZPP_CutVert.back","zpp_nape/util/Lists.hx",6394,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(6395)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6395)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6396)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6397)
	while((true)){
		HX_STACK_LINE(6397)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6397)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6397)
		if ((tmp2)){
			HX_STACK_LINE(6397)
			break;
		}
		HX_STACK_LINE(6398)
		ret = cur;
		HX_STACK_LINE(6399)
		cur = cur->next;
	}
	HX_STACK_LINE(6401)
	::zpp_nape::geom::ZPP_CutVert tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6401)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","iterator_at",0xb9d0ee34,"zpp_nape.util.ZNPList_ZPP_CutVert.iterator_at","zpp_nape/util/Lists.hx",6403,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(6412)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6412)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6413)
	while((true)){
		HX_STACK_LINE(6413)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6413)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(6413)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6413)
		if ((tmp2)){
			HX_STACK_LINE(6413)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(6413)
			tmp3 = false;
		}
		HX_STACK_LINE(6413)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(6413)
		if ((tmp4)){
			HX_STACK_LINE(6413)
			break;
		}
		HX_STACK_LINE(6413)
		ret = ret->next;
	}
	HX_STACK_LINE(6414)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6414)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_CutVert","at",0xb59fbaa3,"zpp_nape.util.ZNPList_ZPP_CutVert.at","zpp_nape/util/Lists.hx",6416,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(6425)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6425)
	::zpp_nape::util::ZNPNode_ZPP_CutVert tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6425)
	::zpp_nape::util::ZNPNode_ZPP_CutVert it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(6426)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6426)
	::zpp_nape::geom::ZPP_CutVert tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6426)
	if ((tmp2)){
		HX_STACK_LINE(6426)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(6426)
		tmp3 = null();
	}
	HX_STACK_LINE(6426)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,at,return )


ZNPList_ZPP_CutVert_obj::ZNPList_ZPP_CutVert_obj()
{
}

void ZNPList_ZPP_CutVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CutVert);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CutVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_CutVert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_CutVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CutVert >(); return inValue; }
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

bool ZNPList_ZPP_CutVert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_CutVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_CutVert*/ ,(int)offsetof(ZNPList_ZPP_CutVert_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CutVert_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_CutVert_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_CutVert_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CutVert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CutVert_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_CutVert_obj::__mClass;

void ZNPList_ZPP_CutVert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_CutVert","\xbe","\x8c","\x99","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_CutVert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_CutVert_obj >;
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
