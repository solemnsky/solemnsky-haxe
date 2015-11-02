#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Constraint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","new",0x2bf829c4,"zpp_nape.util.ZNPList_ZPP_Constraint.new","zpp_nape/util/Lists.hx",1843,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1853)
	this->length = (int)0;
	HX_STACK_LINE(1852)
	this->pushmod = false;
	HX_STACK_LINE(1851)
	this->modified = false;
	HX_STACK_LINE(1844)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Constraint_obj::~ZNPList_ZPP_Constraint_obj() { }

Dynamic ZNPList_ZPP_Constraint_obj::__CreateEmpty() { return  new ZNPList_ZPP_Constraint_obj; }
hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > ZNPList_ZPP_Constraint_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > _result_ = new ZNPList_ZPP_Constraint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > _result_ = new ZNPList_ZPP_Constraint_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","begin",0x50ce648d,"zpp_nape.util.ZNPList_ZPP_Constraint.begin","zpp_nape/util/Lists.hx",1848,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1849)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1849)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,begin,return )

Void ZNPList_ZPP_Constraint_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Constraint i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","setbegin",0x0c05ff63,"zpp_nape.util.ZNPList_ZPP_Constraint.setbegin","zpp_nape/util/Lists.hx",1856,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(1857)
		this->head = i;
		HX_STACK_LINE(1858)
		this->modified = true;
		HX_STACK_LINE(1859)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,setbegin,(void))

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::add( ::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","add",0x2bee4b85,"zpp_nape.util.ZNPList_ZPP_Constraint.add","zpp_nape/util/Lists.hx",1861,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1862)
	::zpp_nape::constraint::ZPP_Constraint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1862)
	{
		HX_STACK_LINE(1862)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1862)
		{
			HX_STACK_LINE(1862)
			::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1862)
			{
				HX_STACK_LINE(1862)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1862)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1862)
				if ((tmp3)){
					HX_STACK_LINE(1862)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1862)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(1862)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1862)
					ret = tmp4;
					HX_STACK_LINE(1862)
					::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
					HX_STACK_LINE(1862)
					ret->next = null();
				}
				HX_STACK_LINE(1862)
				Dynamic();
			}
			HX_STACK_LINE(1862)
			ret->elt = o;
			HX_STACK_LINE(1862)
			tmp1 = ret;
		}
		HX_STACK_LINE(1862)
		::zpp_nape::util::ZNPNode_ZPP_Constraint temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(1862)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1862)
		temp->next = tmp2;
		HX_STACK_LINE(1862)
		this->head = temp;
		HX_STACK_LINE(1862)
		this->modified = true;
		HX_STACK_LINE(1862)
		(this->length)++;
		HX_STACK_LINE(1862)
		tmp = o;
	}
	HX_STACK_LINE(1862)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,add,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_add( ::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_add",0xc5a0a9f1,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_add","zpp_nape/util/Lists.hx",1866,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1875)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1875)
	{
		HX_STACK_LINE(1876)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1877)
		{
			HX_STACK_LINE(1878)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1878)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1878)
			if ((tmp2)){
				HX_STACK_LINE(1879)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1879)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(1885)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1885)
				ret = tmp3;
				HX_STACK_LINE(1886)
				::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1887)
				ret->next = null();
			}
			HX_STACK_LINE(1892)
			Dynamic();
		}
		HX_STACK_LINE(1894)
		ret->elt = o;
		HX_STACK_LINE(1895)
		tmp = ret;
	}
	HX_STACK_LINE(1875)
	::zpp_nape::util::ZNPNode_ZPP_Constraint temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1897)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1897)
	temp->next = tmp1;
	HX_STACK_LINE(1898)
	this->head = temp;
	HX_STACK_LINE(1899)
	this->modified = true;
	HX_STACK_LINE(1900)
	(this->length)++;
	HX_STACK_LINE(1901)
	::zpp_nape::constraint::ZPP_Constraint tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1901)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_add,return )

Void ZNPList_ZPP_Constraint_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Constraint x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","addAll",0x67eda69c,"zpp_nape.util.ZNPList_ZPP_Constraint.addAll","zpp_nape/util/Lists.hx",1912,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1913)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1914)
		while((true)){
			HX_STACK_LINE(1914)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1914)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1914)
			if ((tmp1)){
				HX_STACK_LINE(1914)
				break;
			}
			HX_STACK_LINE(1915)
			::zpp_nape::constraint::ZPP_Constraint i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1916)
			::zpp_nape::constraint::ZPP_Constraint tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1916)
			this->add(tmp2);
			HX_STACK_LINE(1917)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Constraint cur,::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","insert",0x66cfe055,"zpp_nape.util.ZNPList_ZPP_Constraint.insert","zpp_nape/util/Lists.hx",1921,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1922)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1922)
	{
		HX_STACK_LINE(1922)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1922)
		{
			HX_STACK_LINE(1922)
			::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1922)
			{
				HX_STACK_LINE(1922)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1922)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1922)
				if ((tmp3)){
					HX_STACK_LINE(1922)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1922)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(1922)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1922)
					ret = tmp4;
					HX_STACK_LINE(1922)
					::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
					HX_STACK_LINE(1922)
					ret->next = null();
				}
				HX_STACK_LINE(1922)
				Dynamic();
			}
			HX_STACK_LINE(1922)
			ret->elt = o;
			HX_STACK_LINE(1922)
			tmp1 = ret;
		}
		HX_STACK_LINE(1922)
		::zpp_nape::util::ZNPNode_ZPP_Constraint temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(1922)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1922)
		if ((tmp2)){
			HX_STACK_LINE(1922)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1922)
			temp->next = tmp3;
			HX_STACK_LINE(1922)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(1922)
			temp->next = cur->next;
			HX_STACK_LINE(1922)
			cur->next = temp;
		}
		HX_STACK_LINE(1922)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1922)
		this->pushmod = tmp3;
		HX_STACK_LINE(1922)
		(this->length)++;
		HX_STACK_LINE(1922)
		tmp = temp;
	}
	HX_STACK_LINE(1922)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Constraint cur,::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_insert",0xd1cf4d69,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_insert","zpp_nape/util/Lists.hx",1926,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1935)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1935)
	{
		HX_STACK_LINE(1936)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1937)
		{
			HX_STACK_LINE(1938)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1938)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1938)
			if ((tmp2)){
				HX_STACK_LINE(1939)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1939)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(1945)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1945)
				ret = tmp3;
				HX_STACK_LINE(1946)
				::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1947)
				ret->next = null();
			}
			HX_STACK_LINE(1952)
			Dynamic();
		}
		HX_STACK_LINE(1954)
		ret->elt = o;
		HX_STACK_LINE(1955)
		tmp = ret;
	}
	HX_STACK_LINE(1935)
	::zpp_nape::util::ZNPNode_ZPP_Constraint temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1957)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1957)
	if ((tmp1)){
		HX_STACK_LINE(1958)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1958)
		temp->next = tmp2;
		HX_STACK_LINE(1959)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1962)
		temp->next = cur->next;
		HX_STACK_LINE(1963)
		cur->next = temp;
	}
	HX_STACK_LINE(1965)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1965)
	this->pushmod = tmp2;
	HX_STACK_LINE(1966)
	(this->length)++;
	HX_STACK_LINE(1967)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1967)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,inlined_insert,return )

Void ZNPList_ZPP_Constraint_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","pop",0x2bf9b6f5,"zpp_nape.util.ZNPList_ZPP_Constraint.pop","zpp_nape/util/Lists.hx",1970,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1970)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1970)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1970)
		this->head = ret->next;
		HX_STACK_LINE(1970)
		{
			HX_STACK_LINE(1970)
			::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1970)
			o->elt = null();
			HX_STACK_LINE(1970)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1970)
			o->next = tmp1;
			HX_STACK_LINE(1970)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1970)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1970)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1970)
		if ((tmp2)){
			HX_STACK_LINE(1970)
			this->pushmod = true;
		}
		HX_STACK_LINE(1970)
		this->modified = true;
		HX_STACK_LINE(1970)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,pop,(void))

Void ZNPList_ZPP_Constraint_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_pop",0xc5ac1561,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_pop","zpp_nape/util/Lists.hx",1974,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1983)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1983)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1984)
		this->head = ret->next;
		HX_STACK_LINE(1986)
		{
			HX_STACK_LINE(1987)
			::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1996)
			o->elt = null();
			HX_STACK_LINE(1997)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1997)
			o->next = tmp1;
			HX_STACK_LINE(1998)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2003)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2003)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2003)
		if ((tmp2)){
			HX_STACK_LINE(2003)
			this->pushmod = true;
		}
		HX_STACK_LINE(2004)
		this->modified = true;
		HX_STACK_LINE(2005)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_pop,(void))

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","pop_unsafe",0xa829d770,"zpp_nape.util.ZNPList_ZPP_Constraint.pop_unsafe","zpp_nape/util/Lists.hx",2007,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2008)
	::zpp_nape::constraint::ZPP_Constraint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2008)
	{
		HX_STACK_LINE(2008)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2008)
		::zpp_nape::constraint::ZPP_Constraint ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2008)
		this->pop();
		HX_STACK_LINE(2008)
		tmp = ret;
	}
	HX_STACK_LINE(2008)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,pop_unsafe,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_pop_unsafe",0x2fe75e84,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_pop_unsafe","zpp_nape/util/Lists.hx",2012,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2021)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2021)
	::zpp_nape::constraint::ZPP_Constraint ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2022)
	this->pop();
	HX_STACK_LINE(2023)
	::zpp_nape::constraint::ZPP_Constraint tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2023)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Constraint_obj::remove( ::zpp_nape::constraint::ZPP_Constraint obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","remove",0xcd7b3960,"zpp_nape.util.ZNPList_ZPP_Constraint.remove","zpp_nape/util/Lists.hx",2034,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2034)
		::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2034)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2034)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2034)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2034)
		while((true)){
			HX_STACK_LINE(2034)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2034)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2034)
			if ((tmp2)){
				HX_STACK_LINE(2034)
				break;
			}
			HX_STACK_LINE(2034)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2034)
			if ((tmp3)){
				HX_STACK_LINE(2034)
				{
					HX_STACK_LINE(2034)
					::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2034)
					::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2034)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2034)
					if ((tmp4)){
						HX_STACK_LINE(2034)
						::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2034)
						old = tmp5;
						HX_STACK_LINE(2034)
						ret1 = old->next;
						HX_STACK_LINE(2034)
						this->head = ret1;
						HX_STACK_LINE(2034)
						::zpp_nape::util::ZNPNode_ZPP_Constraint tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2034)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2034)
						if ((tmp7)){
							HX_STACK_LINE(2034)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2034)
						old = pre->next;
						HX_STACK_LINE(2034)
						ret1 = old->next;
						HX_STACK_LINE(2034)
						pre->next = ret1;
						HX_STACK_LINE(2034)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2034)
						if ((tmp5)){
							HX_STACK_LINE(2034)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2034)
					{
						HX_STACK_LINE(2034)
						::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2034)
						o->elt = null();
						HX_STACK_LINE(2034)
						::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2034)
						o->next = tmp5;
						HX_STACK_LINE(2034)
						::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2034)
					this->modified = true;
					HX_STACK_LINE(2034)
					(this->length)--;
					HX_STACK_LINE(2034)
					this->pushmod = true;
					HX_STACK_LINE(2034)
					ret1;
				}
				HX_STACK_LINE(2034)
				ret = true;
				HX_STACK_LINE(2034)
				break;
			}
			HX_STACK_LINE(2034)
			pre = cur;
			HX_STACK_LINE(2034)
			cur = cur->next;
		}
		HX_STACK_LINE(2034)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,remove,(void))

bool ZNPList_ZPP_Constraint_obj::try_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","try_remove",0xbf540d24,"zpp_nape.util.ZNPList_ZPP_Constraint.try_remove","zpp_nape/util/Lists.hx",2036,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2045)
	::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2046)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2046)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2047)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2048)
	while((true)){
		HX_STACK_LINE(2048)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2048)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2048)
		if ((tmp2)){
			HX_STACK_LINE(2048)
			break;
		}
		HX_STACK_LINE(2049)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2049)
		if ((tmp3)){
			HX_STACK_LINE(2050)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2050)
			this->erase(tmp4);
			HX_STACK_LINE(2051)
			ret = true;
			HX_STACK_LINE(2052)
			break;
		}
		HX_STACK_LINE(2054)
		pre = cur;
		HX_STACK_LINE(2055)
		cur = cur->next;
	}
	HX_STACK_LINE(2057)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2057)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,try_remove,return )

Void ZNPList_ZPP_Constraint_obj::inlined_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_remove",0x387aa674,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_remove","zpp_nape/util/Lists.hx",2070,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(2070)
		::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2070)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2070)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2070)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2070)
		while((true)){
			HX_STACK_LINE(2070)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2070)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2070)
			if ((tmp2)){
				HX_STACK_LINE(2070)
				break;
			}
			HX_STACK_LINE(2070)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2070)
			if ((tmp3)){
				HX_STACK_LINE(2070)
				{
					HX_STACK_LINE(2070)
					::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2070)
					::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2070)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2070)
					if ((tmp4)){
						HX_STACK_LINE(2070)
						::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2070)
						old = tmp5;
						HX_STACK_LINE(2070)
						ret1 = old->next;
						HX_STACK_LINE(2070)
						this->head = ret1;
						HX_STACK_LINE(2070)
						::zpp_nape::util::ZNPNode_ZPP_Constraint tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2070)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2070)
						if ((tmp7)){
							HX_STACK_LINE(2070)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2070)
						old = pre->next;
						HX_STACK_LINE(2070)
						ret1 = old->next;
						HX_STACK_LINE(2070)
						pre->next = ret1;
						HX_STACK_LINE(2070)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2070)
						if ((tmp5)){
							HX_STACK_LINE(2070)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2070)
					{
						HX_STACK_LINE(2070)
						::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2070)
						o->elt = null();
						HX_STACK_LINE(2070)
						::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2070)
						o->next = tmp5;
						HX_STACK_LINE(2070)
						::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2070)
					this->modified = true;
					HX_STACK_LINE(2070)
					(this->length)--;
					HX_STACK_LINE(2070)
					this->pushmod = true;
					HX_STACK_LINE(2070)
					ret1;
				}
				HX_STACK_LINE(2070)
				ret = true;
				HX_STACK_LINE(2070)
				break;
			}
			HX_STACK_LINE(2070)
			pre = cur;
			HX_STACK_LINE(2070)
			cur = cur->next;
		}
		HX_STACK_LINE(2070)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_remove,(void))

bool ZNPList_ZPP_Constraint_obj::inlined_try_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_try_remove",0x47119438,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_try_remove","zpp_nape/util/Lists.hx",2074,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2083)
	::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2084)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2084)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2085)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2086)
	while((true)){
		HX_STACK_LINE(2086)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2086)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2086)
		if ((tmp2)){
			HX_STACK_LINE(2086)
			break;
		}
		HX_STACK_LINE(2087)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2087)
		if ((tmp3)){
			HX_STACK_LINE(2088)
			{
				HX_STACK_LINE(2088)
				::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2088)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(2088)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2088)
				if ((tmp4)){
					HX_STACK_LINE(2088)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2088)
					old = tmp5;
					HX_STACK_LINE(2088)
					ret1 = old->next;
					HX_STACK_LINE(2088)
					this->head = ret1;
					HX_STACK_LINE(2088)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2088)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2088)
					if ((tmp7)){
						HX_STACK_LINE(2088)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2088)
					old = pre->next;
					HX_STACK_LINE(2088)
					ret1 = old->next;
					HX_STACK_LINE(2088)
					pre->next = ret1;
					HX_STACK_LINE(2088)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2088)
					if ((tmp5)){
						HX_STACK_LINE(2088)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(2088)
				{
					HX_STACK_LINE(2088)
					::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2088)
					o->elt = null();
					HX_STACK_LINE(2088)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2088)
					o->next = tmp5;
					HX_STACK_LINE(2088)
					::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2088)
				this->modified = true;
				HX_STACK_LINE(2088)
				(this->length)--;
				HX_STACK_LINE(2088)
				this->pushmod = true;
				HX_STACK_LINE(2088)
				ret1;
			}
			HX_STACK_LINE(2089)
			ret = true;
			HX_STACK_LINE(2090)
			break;
		}
		HX_STACK_LINE(2092)
		pre = cur;
		HX_STACK_LINE(2093)
		cur = cur->next;
	}
	HX_STACK_LINE(2095)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2095)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","erase",0x1395634a,"zpp_nape.util.ZNPList_ZPP_Constraint.erase","zpp_nape/util/Lists.hx",2097,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(2098)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2098)
	{
		HX_STACK_LINE(2098)
		::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(2098)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2098)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2098)
		if ((tmp1)){
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2098)
			old = tmp2;
			HX_STACK_LINE(2098)
			ret = old->next;
			HX_STACK_LINE(2098)
			this->head = ret;
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2098)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2098)
			if ((tmp4)){
				HX_STACK_LINE(2098)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(2098)
			old = pre->next;
			HX_STACK_LINE(2098)
			ret = old->next;
			HX_STACK_LINE(2098)
			pre->next = ret;
			HX_STACK_LINE(2098)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2098)
			if ((tmp2)){
				HX_STACK_LINE(2098)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(2098)
		{
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2098)
			o->elt = null();
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2098)
			o->next = tmp2;
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2098)
		this->modified = true;
		HX_STACK_LINE(2098)
		(this->length)--;
		HX_STACK_LINE(2098)
		this->pushmod = true;
		HX_STACK_LINE(2098)
		tmp = ret;
	}
	HX_STACK_LINE(2098)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_erase",0x456d34b6,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_erase","zpp_nape/util/Lists.hx",2102,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(2111)
	::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2112)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2113)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2113)
	if ((tmp)){
		HX_STACK_LINE(2114)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2114)
		old = tmp1;
		HX_STACK_LINE(2115)
		ret = old->next;
		HX_STACK_LINE(2116)
		this->head = ret;
		HX_STACK_LINE(2117)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2117)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2117)
		if ((tmp3)){
			HX_STACK_LINE(2117)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2120)
		old = pre->next;
		HX_STACK_LINE(2121)
		ret = old->next;
		HX_STACK_LINE(2122)
		pre->next = ret;
		HX_STACK_LINE(2123)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2123)
		if ((tmp1)){
			HX_STACK_LINE(2123)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2126)
	{
		HX_STACK_LINE(2127)
		::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2136)
		o->elt = null();
		HX_STACK_LINE(2137)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2137)
		o->next = tmp1;
		HX_STACK_LINE(2138)
		::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2143)
	this->modified = true;
	HX_STACK_LINE(2144)
	(this->length)--;
	HX_STACK_LINE(2145)
	this->pushmod = true;
	HX_STACK_LINE(2146)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2146)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","splice",0x88912298,"zpp_nape.util.ZNPList_ZPP_Constraint.splice","zpp_nape/util/Lists.hx",2148,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(2149)
	while((true)){
		HX_STACK_LINE(2149)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2149)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2149)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2149)
		if ((tmp1)){
			HX_STACK_LINE(2149)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(2149)
			tmp2 = false;
		}
		HX_STACK_LINE(2149)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2149)
		if ((tmp3)){
			HX_STACK_LINE(2149)
			break;
		}
		HX_STACK_LINE(2149)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2149)
		this->erase(tmp4);
	}
	HX_STACK_LINE(2150)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2150)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,splice,return )

Void ZNPList_ZPP_Constraint_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","clear",0xe8d3ebf1,"zpp_nape.util.ZNPList_ZPP_Constraint.clear","zpp_nape/util/Lists.hx",2153,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2153)
		while((true)){
			HX_STACK_LINE(2153)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2153)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2153)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2153)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2153)
			if ((tmp3)){
				HX_STACK_LINE(2153)
				break;
			}
			HX_STACK_LINE(2153)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2153)
			::zpp_nape::util::ZNPNode_ZPP_Constraint ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2153)
			this->head = ret->next;
			HX_STACK_LINE(2153)
			{
				HX_STACK_LINE(2153)
				::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2153)
				o->elt = null();
				HX_STACK_LINE(2153)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2153)
				o->next = tmp5;
				HX_STACK_LINE(2153)
				::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2153)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2153)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2153)
			if ((tmp6)){
				HX_STACK_LINE(2153)
				this->pushmod = true;
			}
			HX_STACK_LINE(2153)
			this->modified = true;
			HX_STACK_LINE(2153)
			(this->length)--;
		}
		HX_STACK_LINE(2153)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,clear,(void))

Void ZNPList_ZPP_Constraint_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_clear",0x1aabbd5d,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_clear","zpp_nape/util/Lists.hx",2158,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2159)
		while((true)){
			HX_STACK_LINE(2159)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2159)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2159)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2159)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2159)
			if ((tmp3)){
				HX_STACK_LINE(2159)
				break;
			}
			HX_STACK_LINE(2159)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2159)
			::zpp_nape::util::ZNPNode_ZPP_Constraint ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2159)
			this->head = ret->next;
			HX_STACK_LINE(2159)
			{
				HX_STACK_LINE(2159)
				::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2159)
				o->elt = null();
				HX_STACK_LINE(2159)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2159)
				o->next = tmp5;
				HX_STACK_LINE(2159)
				::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2159)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2159)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2159)
			if ((tmp6)){
				HX_STACK_LINE(2159)
				this->pushmod = true;
			}
			HX_STACK_LINE(2159)
			this->modified = true;
			HX_STACK_LINE(2159)
			(this->length)--;
		}
		HX_STACK_LINE(2160)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_clear,(void))

Void ZNPList_ZPP_Constraint_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","reverse",0x26531486,"zpp_nape.util.ZNPList_ZPP_Constraint.reverse","zpp_nape/util/Lists.hx",2163,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2164)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2164)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2165)
		::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2166)
		while((true)){
			HX_STACK_LINE(2166)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2166)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2166)
			if ((tmp2)){
				HX_STACK_LINE(2166)
				break;
			}
			HX_STACK_LINE(2167)
			::zpp_nape::util::ZNPNode_ZPP_Constraint nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(2168)
			cur->next = pre;
			HX_STACK_LINE(2169)
			this->head = cur;
			HX_STACK_LINE(2170)
			pre = cur;
			HX_STACK_LINE(2171)
			cur = nx;
		}
		HX_STACK_LINE(2173)
		this->modified = true;
		HX_STACK_LINE(2174)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,reverse,(void))

bool ZNPList_ZPP_Constraint_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","empty",0x1052b4f1,"zpp_nape.util.ZNPList_ZPP_Constraint.empty","zpp_nape/util/Lists.hx",2178,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2179)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2179)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2179)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,empty,return )

int ZNPList_ZPP_Constraint_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","size",0x507d7edd,"zpp_nape.util.ZNPList_ZPP_Constraint.size","zpp_nape/util/Lists.hx",2183,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2184)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2184)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,size,return )

bool ZNPList_ZPP_Constraint_obj::has( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","has",0x2bf398be,"zpp_nape.util.ZNPList_ZPP_Constraint.has","zpp_nape/util/Lists.hx",2186,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2187)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2187)
	{
		HX_STACK_LINE(2187)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2187)
		{
			HX_STACK_LINE(2187)
			ret = false;
			HX_STACK_LINE(2187)
			{
				HX_STACK_LINE(2187)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2187)
				::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(2187)
				while((true)){
					HX_STACK_LINE(2187)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2187)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2187)
					if ((tmp3)){
						HX_STACK_LINE(2187)
						break;
					}
					HX_STACK_LINE(2187)
					::zpp_nape::constraint::ZPP_Constraint npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(2187)
					{
						HX_STACK_LINE(2187)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(2187)
						if ((tmp4)){
							HX_STACK_LINE(2187)
							ret = true;
							HX_STACK_LINE(2187)
							break;
						}
					}
					HX_STACK_LINE(2187)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(2187)
		tmp = ret;
	}
	HX_STACK_LINE(2187)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,has,return )

bool ZNPList_ZPP_Constraint_obj::inlined_has( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","inlined_has",0xc5a5f72a,"zpp_nape.util.ZNPList_ZPP_Constraint.inlined_has","zpp_nape/util/Lists.hx",2191,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(2200)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2201)
	{
		HX_STACK_LINE(2202)
		ret = false;
		HX_STACK_LINE(2203)
		{
			HX_STACK_LINE(2204)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2204)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2205)
			while((true)){
				HX_STACK_LINE(2205)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2205)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2205)
				if ((tmp2)){
					HX_STACK_LINE(2205)
					break;
				}
				HX_STACK_LINE(2206)
				::zpp_nape::constraint::ZPP_Constraint npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(2207)
				{
					HX_STACK_LINE(2208)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2208)
					if ((tmp3)){
						HX_STACK_LINE(2209)
						ret = true;
						HX_STACK_LINE(2210)
						break;
					}
				}
				HX_STACK_LINE(2213)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2217)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2217)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_has,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","front",0xa706930d,"zpp_nape.util.ZNPList_ZPP_Constraint.front","zpp_nape/util/Lists.hx",2221,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2222)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2222)
	::zpp_nape::constraint::ZPP_Constraint tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2222)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,front,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","back",0x453ab843,"zpp_nape.util.ZNPList_ZPP_Constraint.back","zpp_nape/util/Lists.hx",2224,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2225)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2225)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2226)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2227)
	while((true)){
		HX_STACK_LINE(2227)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2227)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2227)
		if ((tmp2)){
			HX_STACK_LINE(2227)
			break;
		}
		HX_STACK_LINE(2228)
		ret = cur;
		HX_STACK_LINE(2229)
		cur = cur->next;
	}
	HX_STACK_LINE(2231)
	::zpp_nape::constraint::ZPP_Constraint tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2231)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","iterator_at",0xca44e748,"zpp_nape.util.ZNPList_ZPP_Constraint.iterator_at","zpp_nape/util/Lists.hx",2233,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(2242)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2242)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2243)
	while((true)){
		HX_STACK_LINE(2243)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2243)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2243)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2243)
		if ((tmp2)){
			HX_STACK_LINE(2243)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(2243)
			tmp3 = false;
		}
		HX_STACK_LINE(2243)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2243)
		if ((tmp4)){
			HX_STACK_LINE(2243)
			break;
		}
		HX_STACK_LINE(2243)
		ret = ret->next;
	}
	HX_STACK_LINE(2244)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2244)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,iterator_at,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Constraint","at",0x475f340f,"zpp_nape.util.ZNPList_ZPP_Constraint.at","zpp_nape/util/Lists.hx",2246,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(2255)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2255)
	::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2255)
	::zpp_nape::util::ZNPNode_ZPP_Constraint it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(2256)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2256)
	::zpp_nape::constraint::ZPP_Constraint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2256)
	if ((tmp2)){
		HX_STACK_LINE(2256)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(2256)
		tmp3 = null();
	}
	HX_STACK_LINE(2256)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,at,return )


ZNPList_ZPP_Constraint_obj::ZNPList_ZPP_Constraint_obj()
{
}

void ZNPList_ZPP_Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Constraint);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Constraint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return inValue; }
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

bool ZNPList_ZPP_Constraint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Constraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Constraint*/ ,(int)offsetof(ZNPList_ZPP_Constraint_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Constraint_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Constraint_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Constraint_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Constraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Constraint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Constraint_obj::__mClass;

void ZNPList_ZPP_Constraint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Constraint","\xd2","\x37","\xaf","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Constraint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Constraint_obj >;
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
