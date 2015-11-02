#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_GeomVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","new",0x3d6117b4,"zpp_nape.util.ZNPList_ZPP_GeomVert.new","zpp_nape/util/Lists.hx",7264,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7274)
	this->length = (int)0;
	HX_STACK_LINE(7273)
	this->pushmod = false;
	HX_STACK_LINE(7272)
	this->modified = false;
	HX_STACK_LINE(7265)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_GeomVert_obj::~ZNPList_ZPP_GeomVert_obj() { }

Dynamic ZNPList_ZPP_GeomVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_GeomVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > ZNPList_ZPP_GeomVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > _result_ = new ZNPList_ZPP_GeomVert_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_GeomVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > _result_ = new ZNPList_ZPP_GeomVert_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","begin",0x40c2ae7d,"zpp_nape.util.ZNPList_ZPP_GeomVert.begin","zpp_nape/util/Lists.hx",7269,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7270)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7270)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,begin,return )

Void ZNPList_ZPP_GeomVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_GeomVert i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","setbegin",0x6bc88b73,"zpp_nape.util.ZNPList_ZPP_GeomVert.setbegin","zpp_nape/util/Lists.hx",7277,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(7278)
		this->head = i;
		HX_STACK_LINE(7279)
		this->modified = true;
		HX_STACK_LINE(7280)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,setbegin,(void))

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::add( ::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","add",0x3d573975,"zpp_nape.util.ZNPList_ZPP_GeomVert.add","zpp_nape/util/Lists.hx",7282,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7283)
	::zpp_nape::geom::ZPP_GeomVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7283)
	{
		HX_STACK_LINE(7283)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7283)
		{
			HX_STACK_LINE(7283)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7283)
			{
				HX_STACK_LINE(7283)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7283)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7283)
				if ((tmp3)){
					HX_STACK_LINE(7283)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7283)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(7283)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7283)
					ret = tmp4;
					HX_STACK_LINE(7283)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(7283)
					ret->next = null();
				}
				HX_STACK_LINE(7283)
				Dynamic();
			}
			HX_STACK_LINE(7283)
			ret->elt = o;
			HX_STACK_LINE(7283)
			tmp1 = ret;
		}
		HX_STACK_LINE(7283)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(7283)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7283)
		temp->next = tmp2;
		HX_STACK_LINE(7283)
		this->head = temp;
		HX_STACK_LINE(7283)
		this->modified = true;
		HX_STACK_LINE(7283)
		(this->length)++;
		HX_STACK_LINE(7283)
		tmp = o;
	}
	HX_STACK_LINE(7283)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,add,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_add( ::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_add",0xbf9107e1,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_add","zpp_nape/util/Lists.hx",7287,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7296)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7296)
	{
		HX_STACK_LINE(7297)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7298)
		{
			HX_STACK_LINE(7299)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7299)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7299)
			if ((tmp2)){
				HX_STACK_LINE(7300)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7300)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(7306)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7306)
				ret = tmp3;
				HX_STACK_LINE(7307)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7308)
				ret->next = null();
			}
			HX_STACK_LINE(7313)
			Dynamic();
		}
		HX_STACK_LINE(7315)
		ret->elt = o;
		HX_STACK_LINE(7316)
		tmp = ret;
	}
	HX_STACK_LINE(7296)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7318)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7318)
	temp->next = tmp1;
	HX_STACK_LINE(7319)
	this->head = temp;
	HX_STACK_LINE(7320)
	this->modified = true;
	HX_STACK_LINE(7321)
	(this->length)++;
	HX_STACK_LINE(7322)
	::zpp_nape::geom::ZPP_GeomVert tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7322)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_add,return )

Void ZNPList_ZPP_GeomVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_GeomVert x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","addAll",0x6dba0eac,"zpp_nape.util.ZNPList_ZPP_GeomVert.addAll","zpp_nape/util/Lists.hx",7333,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(7334)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(7335)
		while((true)){
			HX_STACK_LINE(7335)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7335)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7335)
			if ((tmp1)){
				HX_STACK_LINE(7335)
				break;
			}
			HX_STACK_LINE(7336)
			::zpp_nape::geom::ZPP_GeomVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(7337)
			::zpp_nape::geom::ZPP_GeomVert tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7337)
			this->add(tmp2);
			HX_STACK_LINE(7338)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_GeomVert cur,::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","insert",0x6c9c4865,"zpp_nape.util.ZNPList_ZPP_GeomVert.insert","zpp_nape/util/Lists.hx",7342,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7343)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7343)
	{
		HX_STACK_LINE(7343)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7343)
		{
			HX_STACK_LINE(7343)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7343)
			{
				HX_STACK_LINE(7343)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7343)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7343)
				if ((tmp3)){
					HX_STACK_LINE(7343)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7343)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(7343)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7343)
					ret = tmp4;
					HX_STACK_LINE(7343)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(7343)
					ret->next = null();
				}
				HX_STACK_LINE(7343)
				Dynamic();
			}
			HX_STACK_LINE(7343)
			ret->elt = o;
			HX_STACK_LINE(7343)
			tmp1 = ret;
		}
		HX_STACK_LINE(7343)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(7343)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7343)
		if ((tmp2)){
			HX_STACK_LINE(7343)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7343)
			temp->next = tmp3;
			HX_STACK_LINE(7343)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(7343)
			temp->next = cur->next;
			HX_STACK_LINE(7343)
			cur->next = temp;
		}
		HX_STACK_LINE(7343)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7343)
		this->pushmod = tmp3;
		HX_STACK_LINE(7343)
		(this->length)++;
		HX_STACK_LINE(7343)
		tmp = temp;
	}
	HX_STACK_LINE(7343)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_GeomVert cur,::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_insert",0xc55a4579,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_insert","zpp_nape/util/Lists.hx",7347,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7356)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7356)
	{
		HX_STACK_LINE(7357)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7358)
		{
			HX_STACK_LINE(7359)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7359)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7359)
			if ((tmp2)){
				HX_STACK_LINE(7360)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7360)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(7366)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(7366)
				ret = tmp3;
				HX_STACK_LINE(7367)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7368)
				ret->next = null();
			}
			HX_STACK_LINE(7373)
			Dynamic();
		}
		HX_STACK_LINE(7375)
		ret->elt = o;
		HX_STACK_LINE(7376)
		tmp = ret;
	}
	HX_STACK_LINE(7356)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7378)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7378)
	if ((tmp1)){
		HX_STACK_LINE(7379)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7379)
		temp->next = tmp2;
		HX_STACK_LINE(7380)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7383)
		temp->next = cur->next;
		HX_STACK_LINE(7384)
		cur->next = temp;
	}
	HX_STACK_LINE(7386)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7386)
	this->pushmod = tmp2;
	HX_STACK_LINE(7387)
	(this->length)++;
	HX_STACK_LINE(7388)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(7388)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,inlined_insert,return )

Void ZNPList_ZPP_GeomVert_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","pop",0x3d62a4e5,"zpp_nape.util.ZNPList_ZPP_GeomVert.pop","zpp_nape/util/Lists.hx",7391,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7391)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7391)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7391)
		this->head = ret->next;
		HX_STACK_LINE(7391)
		{
			HX_STACK_LINE(7391)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7391)
			o->elt = null();
			HX_STACK_LINE(7391)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7391)
			o->next = tmp1;
			HX_STACK_LINE(7391)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7391)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7391)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7391)
		if ((tmp2)){
			HX_STACK_LINE(7391)
			this->pushmod = true;
		}
		HX_STACK_LINE(7391)
		this->modified = true;
		HX_STACK_LINE(7391)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,pop,(void))

Void ZNPList_ZPP_GeomVert_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_pop",0xbf9c7351,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_pop","zpp_nape/util/Lists.hx",7395,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7404)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7404)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7405)
		this->head = ret->next;
		HX_STACK_LINE(7407)
		{
			HX_STACK_LINE(7408)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7417)
			o->elt = null();
			HX_STACK_LINE(7418)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7418)
			o->next = tmp1;
			HX_STACK_LINE(7419)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7424)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7424)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7424)
		if ((tmp2)){
			HX_STACK_LINE(7424)
			this->pushmod = true;
		}
		HX_STACK_LINE(7425)
		this->modified = true;
		HX_STACK_LINE(7426)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","pop_unsafe",0x66b38780,"zpp_nape.util.ZNPList_ZPP_GeomVert.pop_unsafe","zpp_nape/util/Lists.hx",7428,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7429)
	::zpp_nape::geom::ZPP_GeomVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7429)
	{
		HX_STACK_LINE(7429)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7429)
		::zpp_nape::geom::ZPP_GeomVert ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7429)
		this->pop();
		HX_STACK_LINE(7429)
		tmp = ret;
	}
	HX_STACK_LINE(7429)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_pop_unsafe",0x46b79e94,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_pop_unsafe","zpp_nape/util/Lists.hx",7433,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7442)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7442)
	::zpp_nape::geom::ZPP_GeomVert ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7443)
	this->pop();
	HX_STACK_LINE(7444)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7444)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_GeomVert_obj::remove( ::zpp_nape::geom::ZPP_GeomVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","remove",0xd347a170,"zpp_nape.util.ZNPList_ZPP_GeomVert.remove","zpp_nape/util/Lists.hx",7455,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7455)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7455)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7455)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7455)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7455)
		while((true)){
			HX_STACK_LINE(7455)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7455)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7455)
			if ((tmp2)){
				HX_STACK_LINE(7455)
				break;
			}
			HX_STACK_LINE(7455)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7455)
			if ((tmp3)){
				HX_STACK_LINE(7455)
				{
					HX_STACK_LINE(7455)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7455)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7455)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7455)
					if ((tmp4)){
						HX_STACK_LINE(7455)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7455)
						old = tmp5;
						HX_STACK_LINE(7455)
						ret1 = old->next;
						HX_STACK_LINE(7455)
						this->head = ret1;
						HX_STACK_LINE(7455)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(7455)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7455)
						if ((tmp7)){
							HX_STACK_LINE(7455)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7455)
						old = pre->next;
						HX_STACK_LINE(7455)
						ret1 = old->next;
						HX_STACK_LINE(7455)
						pre->next = ret1;
						HX_STACK_LINE(7455)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7455)
						if ((tmp5)){
							HX_STACK_LINE(7455)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7455)
					{
						HX_STACK_LINE(7455)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7455)
						o->elt = null();
						HX_STACK_LINE(7455)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7455)
						o->next = tmp5;
						HX_STACK_LINE(7455)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7455)
					this->modified = true;
					HX_STACK_LINE(7455)
					(this->length)--;
					HX_STACK_LINE(7455)
					this->pushmod = true;
					HX_STACK_LINE(7455)
					ret1;
				}
				HX_STACK_LINE(7455)
				ret = true;
				HX_STACK_LINE(7455)
				break;
			}
			HX_STACK_LINE(7455)
			pre = cur;
			HX_STACK_LINE(7455)
			cur = cur->next;
		}
		HX_STACK_LINE(7455)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,remove,(void))

bool ZNPList_ZPP_GeomVert_obj::try_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","try_remove",0x7dddbd34,"zpp_nape.util.ZNPList_ZPP_GeomVert.try_remove","zpp_nape/util/Lists.hx",7457,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7466)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7467)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7467)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7468)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7469)
	while((true)){
		HX_STACK_LINE(7469)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7469)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7469)
		if ((tmp2)){
			HX_STACK_LINE(7469)
			break;
		}
		HX_STACK_LINE(7470)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7470)
		if ((tmp3)){
			HX_STACK_LINE(7471)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7471)
			this->erase(tmp4);
			HX_STACK_LINE(7472)
			ret = true;
			HX_STACK_LINE(7473)
			break;
		}
		HX_STACK_LINE(7475)
		pre = cur;
		HX_STACK_LINE(7476)
		cur = cur->next;
	}
	HX_STACK_LINE(7478)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7478)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,try_remove,return )

Void ZNPList_ZPP_GeomVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_remove",0x2c059e84,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_remove","zpp_nape/util/Lists.hx",7491,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7491)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7491)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7491)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7491)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7491)
		while((true)){
			HX_STACK_LINE(7491)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7491)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7491)
			if ((tmp2)){
				HX_STACK_LINE(7491)
				break;
			}
			HX_STACK_LINE(7491)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7491)
			if ((tmp3)){
				HX_STACK_LINE(7491)
				{
					HX_STACK_LINE(7491)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7491)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7491)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(7491)
					if ((tmp4)){
						HX_STACK_LINE(7491)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7491)
						old = tmp5;
						HX_STACK_LINE(7491)
						ret1 = old->next;
						HX_STACK_LINE(7491)
						this->head = ret1;
						HX_STACK_LINE(7491)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(7491)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7491)
						if ((tmp7)){
							HX_STACK_LINE(7491)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7491)
						old = pre->next;
						HX_STACK_LINE(7491)
						ret1 = old->next;
						HX_STACK_LINE(7491)
						pre->next = ret1;
						HX_STACK_LINE(7491)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7491)
						if ((tmp5)){
							HX_STACK_LINE(7491)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7491)
					{
						HX_STACK_LINE(7491)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7491)
						o->elt = null();
						HX_STACK_LINE(7491)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(7491)
						o->next = tmp5;
						HX_STACK_LINE(7491)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7491)
					this->modified = true;
					HX_STACK_LINE(7491)
					(this->length)--;
					HX_STACK_LINE(7491)
					this->pushmod = true;
					HX_STACK_LINE(7491)
					ret1;
				}
				HX_STACK_LINE(7491)
				ret = true;
				HX_STACK_LINE(7491)
				break;
			}
			HX_STACK_LINE(7491)
			pre = cur;
			HX_STACK_LINE(7491)
			cur = cur->next;
		}
		HX_STACK_LINE(7491)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_GeomVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_try_remove",0x5de1d448,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_try_remove","zpp_nape/util/Lists.hx",7495,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7504)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7505)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7505)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7506)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7507)
	while((true)){
		HX_STACK_LINE(7507)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7507)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7507)
		if ((tmp2)){
			HX_STACK_LINE(7507)
			break;
		}
		HX_STACK_LINE(7508)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7508)
		if ((tmp3)){
			HX_STACK_LINE(7509)
			{
				HX_STACK_LINE(7509)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7509)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7509)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(7509)
				if ((tmp4)){
					HX_STACK_LINE(7509)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7509)
					old = tmp5;
					HX_STACK_LINE(7509)
					ret1 = old->next;
					HX_STACK_LINE(7509)
					this->head = ret1;
					HX_STACK_LINE(7509)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(7509)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(7509)
					if ((tmp7)){
						HX_STACK_LINE(7509)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7509)
					old = pre->next;
					HX_STACK_LINE(7509)
					ret1 = old->next;
					HX_STACK_LINE(7509)
					pre->next = ret1;
					HX_STACK_LINE(7509)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7509)
					if ((tmp5)){
						HX_STACK_LINE(7509)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7509)
				{
					HX_STACK_LINE(7509)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7509)
					o->elt = null();
					HX_STACK_LINE(7509)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(7509)
					o->next = tmp5;
					HX_STACK_LINE(7509)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7509)
				this->modified = true;
				HX_STACK_LINE(7509)
				(this->length)--;
				HX_STACK_LINE(7509)
				this->pushmod = true;
				HX_STACK_LINE(7509)
				ret1;
			}
			HX_STACK_LINE(7510)
			ret = true;
			HX_STACK_LINE(7511)
			break;
		}
		HX_STACK_LINE(7513)
		pre = cur;
		HX_STACK_LINE(7514)
		cur = cur->next;
	}
	HX_STACK_LINE(7516)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7516)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","erase",0x0389ad3a,"zpp_nape.util.ZNPList_ZPP_GeomVert.erase","zpp_nape/util/Lists.hx",7518,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7519)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7519)
	{
		HX_STACK_LINE(7519)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(7519)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7519)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7519)
		if ((tmp1)){
			HX_STACK_LINE(7519)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7519)
			old = tmp2;
			HX_STACK_LINE(7519)
			ret = old->next;
			HX_STACK_LINE(7519)
			this->head = ret;
			HX_STACK_LINE(7519)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7519)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7519)
			if ((tmp4)){
				HX_STACK_LINE(7519)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(7519)
			old = pre->next;
			HX_STACK_LINE(7519)
			ret = old->next;
			HX_STACK_LINE(7519)
			pre->next = ret;
			HX_STACK_LINE(7519)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7519)
			if ((tmp2)){
				HX_STACK_LINE(7519)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(7519)
		{
			HX_STACK_LINE(7519)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7519)
			o->elt = null();
			HX_STACK_LINE(7519)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp2 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7519)
			o->next = tmp2;
			HX_STACK_LINE(7519)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7519)
		this->modified = true;
		HX_STACK_LINE(7519)
		(this->length)--;
		HX_STACK_LINE(7519)
		this->pushmod = true;
		HX_STACK_LINE(7519)
		tmp = ret;
	}
	HX_STACK_LINE(7519)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_erase",0xe2a4eea6,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_erase","zpp_nape/util/Lists.hx",7523,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7532)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7533)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7534)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7534)
	if ((tmp)){
		HX_STACK_LINE(7535)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7535)
		old = tmp1;
		HX_STACK_LINE(7536)
		ret = old->next;
		HX_STACK_LINE(7537)
		this->head = ret;
		HX_STACK_LINE(7538)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7538)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7538)
		if ((tmp3)){
			HX_STACK_LINE(7538)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7541)
		old = pre->next;
		HX_STACK_LINE(7542)
		ret = old->next;
		HX_STACK_LINE(7543)
		pre->next = ret;
		HX_STACK_LINE(7544)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7544)
		if ((tmp1)){
			HX_STACK_LINE(7544)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7547)
	{
		HX_STACK_LINE(7548)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7557)
		o->elt = null();
		HX_STACK_LINE(7558)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7558)
		o->next = tmp1;
		HX_STACK_LINE(7559)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7564)
	this->modified = true;
	HX_STACK_LINE(7565)
	(this->length)--;
	HX_STACK_LINE(7566)
	this->pushmod = true;
	HX_STACK_LINE(7567)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7567)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","splice",0x8e5d8aa8,"zpp_nape.util.ZNPList_ZPP_GeomVert.splice","zpp_nape/util/Lists.hx",7569,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(7570)
	while((true)){
		HX_STACK_LINE(7570)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7570)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7570)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7570)
		if ((tmp1)){
			HX_STACK_LINE(7570)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(7570)
			tmp2 = false;
		}
		HX_STACK_LINE(7570)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7570)
		if ((tmp3)){
			HX_STACK_LINE(7570)
			break;
		}
		HX_STACK_LINE(7570)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7570)
		this->erase(tmp4);
	}
	HX_STACK_LINE(7571)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7571)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,splice,return )

Void ZNPList_ZPP_GeomVert_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","clear",0xd8c835e1,"zpp_nape.util.ZNPList_ZPP_GeomVert.clear","zpp_nape/util/Lists.hx",7574,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7574)
		while((true)){
			HX_STACK_LINE(7574)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7574)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7574)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7574)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7574)
			if ((tmp3)){
				HX_STACK_LINE(7574)
				break;
			}
			HX_STACK_LINE(7574)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7574)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7574)
			this->head = ret->next;
			HX_STACK_LINE(7574)
			{
				HX_STACK_LINE(7574)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7574)
				o->elt = null();
				HX_STACK_LINE(7574)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(7574)
				o->next = tmp5;
				HX_STACK_LINE(7574)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7574)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7574)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(7574)
			if ((tmp6)){
				HX_STACK_LINE(7574)
				this->pushmod = true;
			}
			HX_STACK_LINE(7574)
			this->modified = true;
			HX_STACK_LINE(7574)
			(this->length)--;
		}
		HX_STACK_LINE(7574)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,clear,(void))

Void ZNPList_ZPP_GeomVert_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_clear",0xb7e3774d,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_clear","zpp_nape/util/Lists.hx",7579,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7580)
		while((true)){
			HX_STACK_LINE(7580)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7580)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7580)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7580)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7580)
			if ((tmp3)){
				HX_STACK_LINE(7580)
				break;
			}
			HX_STACK_LINE(7580)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7580)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7580)
			this->head = ret->next;
			HX_STACK_LINE(7580)
			{
				HX_STACK_LINE(7580)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7580)
				o->elt = null();
				HX_STACK_LINE(7580)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(7580)
				o->next = tmp5;
				HX_STACK_LINE(7580)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7580)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(7580)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(7580)
			if ((tmp6)){
				HX_STACK_LINE(7580)
				this->pushmod = true;
			}
			HX_STACK_LINE(7580)
			this->modified = true;
			HX_STACK_LINE(7580)
			(this->length)--;
		}
		HX_STACK_LINE(7581)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_GeomVert_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","reverse",0x3361ba76,"zpp_nape.util.ZNPList_ZPP_GeomVert.reverse","zpp_nape/util/Lists.hx",7584,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7585)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7585)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7586)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7587)
		while((true)){
			HX_STACK_LINE(7587)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7587)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7587)
			if ((tmp2)){
				HX_STACK_LINE(7587)
				break;
			}
			HX_STACK_LINE(7588)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(7589)
			cur->next = pre;
			HX_STACK_LINE(7590)
			this->head = cur;
			HX_STACK_LINE(7591)
			pre = cur;
			HX_STACK_LINE(7592)
			cur = nx;
		}
		HX_STACK_LINE(7594)
		this->modified = true;
		HX_STACK_LINE(7595)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,reverse,(void))

bool ZNPList_ZPP_GeomVert_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","empty",0x0046fee1,"zpp_nape.util.ZNPList_ZPP_GeomVert.empty","zpp_nape/util/Lists.hx",7599,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7600)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7600)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7600)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,empty,return )

int ZNPList_ZPP_GeomVert_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","size",0x7ae4c2ed,"zpp_nape.util.ZNPList_ZPP_GeomVert.size","zpp_nape/util/Lists.hx",7604,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7605)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7605)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,size,return )

bool ZNPList_ZPP_GeomVert_obj::has( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","has",0x3d5c86ae,"zpp_nape.util.ZNPList_ZPP_GeomVert.has","zpp_nape/util/Lists.hx",7607,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7608)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7608)
	{
		HX_STACK_LINE(7608)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7608)
		{
			HX_STACK_LINE(7608)
			ret = false;
			HX_STACK_LINE(7608)
			{
				HX_STACK_LINE(7608)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(7608)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(7608)
				while((true)){
					HX_STACK_LINE(7608)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(7608)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(7608)
					if ((tmp3)){
						HX_STACK_LINE(7608)
						break;
					}
					HX_STACK_LINE(7608)
					::zpp_nape::geom::ZPP_GeomVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(7608)
					{
						HX_STACK_LINE(7608)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(7608)
						if ((tmp4)){
							HX_STACK_LINE(7608)
							ret = true;
							HX_STACK_LINE(7608)
							break;
						}
					}
					HX_STACK_LINE(7608)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(7608)
		tmp = ret;
	}
	HX_STACK_LINE(7608)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,has,return )

bool ZNPList_ZPP_GeomVert_obj::inlined_has( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","inlined_has",0xbf96551a,"zpp_nape.util.ZNPList_ZPP_GeomVert.inlined_has","zpp_nape/util/Lists.hx",7612,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7621)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7622)
	{
		HX_STACK_LINE(7623)
		ret = false;
		HX_STACK_LINE(7624)
		{
			HX_STACK_LINE(7625)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(7625)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7626)
			while((true)){
				HX_STACK_LINE(7626)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(7626)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(7626)
				if ((tmp2)){
					HX_STACK_LINE(7626)
					break;
				}
				HX_STACK_LINE(7627)
				::zpp_nape::geom::ZPP_GeomVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(7628)
				{
					HX_STACK_LINE(7629)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(7629)
					if ((tmp3)){
						HX_STACK_LINE(7630)
						ret = true;
						HX_STACK_LINE(7631)
						break;
					}
				}
				HX_STACK_LINE(7634)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(7638)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7638)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_has,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","front",0x96fadcfd,"zpp_nape.util.ZNPList_ZPP_GeomVert.front","zpp_nape/util/Lists.hx",7642,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7643)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7643)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7643)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,front,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","back",0x6fa1fc53,"zpp_nape.util.ZNPList_ZPP_GeomVert.back","zpp_nape/util/Lists.hx",7645,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7646)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7646)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7647)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7648)
	while((true)){
		HX_STACK_LINE(7648)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7648)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7648)
		if ((tmp2)){
			HX_STACK_LINE(7648)
			break;
		}
		HX_STACK_LINE(7649)
		ret = cur;
		HX_STACK_LINE(7650)
		cur = cur->next;
	}
	HX_STACK_LINE(7652)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7652)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","iterator_at",0xc4354538,"zpp_nape.util.ZNPList_ZPP_GeomVert.iterator_at","zpp_nape/util/Lists.hx",7654,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(7663)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7663)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7664)
	while((true)){
		HX_STACK_LINE(7664)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7664)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7664)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7664)
		if ((tmp2)){
			HX_STACK_LINE(7664)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(7664)
			tmp3 = false;
		}
		HX_STACK_LINE(7664)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7664)
		if ((tmp4)){
			HX_STACK_LINE(7664)
			break;
		}
		HX_STACK_LINE(7664)
		ret = ret->next;
	}
	HX_STACK_LINE(7665)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7665)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_GeomVert","at",0x9eb2541f,"zpp_nape.util.ZNPList_ZPP_GeomVert.at","zpp_nape/util/Lists.hx",7667,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(7676)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7676)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7676)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(7677)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7677)
	::zpp_nape::geom::ZPP_GeomVert tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(7677)
	if ((tmp2)){
		HX_STACK_LINE(7677)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(7677)
		tmp3 = null();
	}
	HX_STACK_LINE(7677)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,at,return )


ZNPList_ZPP_GeomVert_obj::ZNPList_ZPP_GeomVert_obj()
{
}

void ZNPList_ZPP_GeomVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_GeomVert);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_GeomVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_GeomVert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_GeomVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomVert >(); return inValue; }
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

bool ZNPList_ZPP_GeomVert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_GeomVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_GeomVert*/ ,(int)offsetof(ZNPList_ZPP_GeomVert_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_GeomVert_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_GeomVert_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_GeomVert_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_GeomVert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_GeomVert_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_GeomVert_obj::__mClass;

void ZNPList_ZPP_GeomVert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_GeomVert","\xc2","\x6d","\xae","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_GeomVert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_GeomVert_obj >;
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
