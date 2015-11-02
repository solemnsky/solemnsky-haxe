#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPList_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimpleEvent_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","new",0x53a4e3e5,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.new","zpp_nape/util/Lists.hx",8515,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8525)
	this->length = (int)0;
	HX_STACK_LINE(8524)
	this->pushmod = false;
	HX_STACK_LINE(8523)
	this->modified = false;
	HX_STACK_LINE(8516)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_SimpleEvent_obj::~ZNPList_ZPP_SimpleEvent_obj() { }

Dynamic ZNPList_ZPP_SimpleEvent_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimpleEvent_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > ZNPList_ZPP_SimpleEvent_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > _result_ = new ZNPList_ZPP_SimpleEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_SimpleEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > _result_ = new ZNPList_ZPP_SimpleEvent_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","begin",0x48b6a8ee,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.begin","zpp_nape/util/Lists.hx",8520,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8521)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8521)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,begin,return )

Void ZNPList_ZPP_SimpleEvent_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","setbegin",0x27bdeda2,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.setbegin","zpp_nape/util/Lists.hx",8528,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(8529)
		this->head = i;
		HX_STACK_LINE(8530)
		this->modified = true;
		HX_STACK_LINE(8531)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,setbegin,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::add( ::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","add",0x539b05a6,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.add","zpp_nape/util/Lists.hx",8533,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8534)
	::zpp_nape::geom::ZPP_SimpleEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8534)
	{
		HX_STACK_LINE(8534)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8534)
		{
			HX_STACK_LINE(8534)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8534)
			{
				HX_STACK_LINE(8534)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(8534)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8534)
				if ((tmp3)){
					HX_STACK_LINE(8534)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8534)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(8534)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8534)
					ret = tmp4;
					HX_STACK_LINE(8534)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
					HX_STACK_LINE(8534)
					ret->next = null();
				}
				HX_STACK_LINE(8534)
				Dynamic();
			}
			HX_STACK_LINE(8534)
			ret->elt = o;
			HX_STACK_LINE(8534)
			tmp1 = ret;
		}
		HX_STACK_LINE(8534)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(8534)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8534)
		temp->next = tmp2;
		HX_STACK_LINE(8534)
		this->head = temp;
		HX_STACK_LINE(8534)
		this->modified = true;
		HX_STACK_LINE(8534)
		(this->length)++;
		HX_STACK_LINE(8534)
		tmp = o;
	}
	HX_STACK_LINE(8534)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,add,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_add( ::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_add",0x10b5ed12,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_add","zpp_nape/util/Lists.hx",8538,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8547)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8547)
	{
		HX_STACK_LINE(8548)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8549)
		{
			HX_STACK_LINE(8550)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8550)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8550)
			if ((tmp2)){
				HX_STACK_LINE(8551)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8551)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(8557)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8557)
				ret = tmp3;
				HX_STACK_LINE(8558)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8559)
				ret->next = null();
			}
			HX_STACK_LINE(8564)
			Dynamic();
		}
		HX_STACK_LINE(8566)
		ret->elt = o;
		HX_STACK_LINE(8567)
		tmp = ret;
	}
	HX_STACK_LINE(8547)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8569)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8569)
	temp->next = tmp1;
	HX_STACK_LINE(8570)
	this->head = temp;
	HX_STACK_LINE(8571)
	this->modified = true;
	HX_STACK_LINE(8572)
	(this->length)++;
	HX_STACK_LINE(8573)
	::zpp_nape::geom::ZPP_SimpleEvent tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8573)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_add,return )

Void ZNPList_ZPP_SimpleEvent_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","addAll",0x5b41371b,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.addAll","zpp_nape/util/Lists.hx",8584,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(8585)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(8586)
		while((true)){
			HX_STACK_LINE(8586)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8586)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8586)
			if ((tmp1)){
				HX_STACK_LINE(8586)
				break;
			}
			HX_STACK_LINE(8587)
			::zpp_nape::geom::ZPP_SimpleEvent i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(8588)
			::zpp_nape::geom::ZPP_SimpleEvent tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8588)
			this->add(tmp2);
			HX_STACK_LINE(8589)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur,::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","insert",0x5a2370d4,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.insert","zpp_nape/util/Lists.hx",8593,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8594)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8594)
	{
		HX_STACK_LINE(8594)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8594)
		{
			HX_STACK_LINE(8594)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8594)
			{
				HX_STACK_LINE(8594)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(8594)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8594)
				if ((tmp3)){
					HX_STACK_LINE(8594)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8594)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(8594)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8594)
					ret = tmp4;
					HX_STACK_LINE(8594)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
					HX_STACK_LINE(8594)
					ret->next = null();
				}
				HX_STACK_LINE(8594)
				Dynamic();
			}
			HX_STACK_LINE(8594)
			ret->elt = o;
			HX_STACK_LINE(8594)
			tmp1 = ret;
		}
		HX_STACK_LINE(8594)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(8594)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8594)
		if ((tmp2)){
			HX_STACK_LINE(8594)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8594)
			temp->next = tmp3;
			HX_STACK_LINE(8594)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(8594)
			temp->next = cur->next;
			HX_STACK_LINE(8594)
			cur->next = temp;
		}
		HX_STACK_LINE(8594)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8594)
		this->pushmod = tmp3;
		HX_STACK_LINE(8594)
		(this->length)++;
		HX_STACK_LINE(8594)
		tmp = temp;
	}
	HX_STACK_LINE(8594)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur,::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_insert",0x40f5f4e8,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_insert","zpp_nape/util/Lists.hx",8598,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(8607)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8607)
	{
		HX_STACK_LINE(8608)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8609)
		{
			HX_STACK_LINE(8610)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8610)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8610)
			if ((tmp2)){
				HX_STACK_LINE(8611)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8611)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(8617)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(8617)
				ret = tmp3;
				HX_STACK_LINE(8618)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
				HX_STACK_LINE(8619)
				ret->next = null();
			}
			HX_STACK_LINE(8624)
			Dynamic();
		}
		HX_STACK_LINE(8626)
		ret->elt = o;
		HX_STACK_LINE(8627)
		tmp = ret;
	}
	HX_STACK_LINE(8607)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8629)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8629)
	if ((tmp1)){
		HX_STACK_LINE(8630)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8630)
		temp->next = tmp2;
		HX_STACK_LINE(8631)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(8634)
		temp->next = cur->next;
		HX_STACK_LINE(8635)
		cur->next = temp;
	}
	HX_STACK_LINE(8637)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8637)
	this->pushmod = tmp2;
	HX_STACK_LINE(8638)
	(this->length)++;
	HX_STACK_LINE(8639)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(8639)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,inlined_insert,return )

Void ZNPList_ZPP_SimpleEvent_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","pop",0x53a67116,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.pop","zpp_nape/util/Lists.hx",8642,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8642)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8642)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8642)
		this->head = ret->next;
		HX_STACK_LINE(8642)
		{
			HX_STACK_LINE(8642)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8642)
			o->elt = null();
			HX_STACK_LINE(8642)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8642)
			o->next = tmp1;
			HX_STACK_LINE(8642)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8642)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8642)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8642)
		if ((tmp2)){
			HX_STACK_LINE(8642)
			this->pushmod = true;
		}
		HX_STACK_LINE(8642)
		this->modified = true;
		HX_STACK_LINE(8642)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,pop,(void))

Void ZNPList_ZPP_SimpleEvent_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_pop",0x10c15882,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_pop","zpp_nape/util/Lists.hx",8646,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8655)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8655)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8656)
		this->head = ret->next;
		HX_STACK_LINE(8658)
		{
			HX_STACK_LINE(8659)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8668)
			o->elt = null();
			HX_STACK_LINE(8669)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8669)
			o->next = tmp1;
			HX_STACK_LINE(8670)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8675)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8675)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8675)
		if ((tmp2)){
			HX_STACK_LINE(8675)
			this->pushmod = true;
		}
		HX_STACK_LINE(8676)
		this->modified = true;
		HX_STACK_LINE(8677)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","pop_unsafe",0x1469136f,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.pop_unsafe","zpp_nape/util/Lists.hx",8679,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8680)
	::zpp_nape::geom::ZPP_SimpleEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8680)
	{
		HX_STACK_LINE(8680)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8680)
		::zpp_nape::geom::ZPP_SimpleEvent ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8680)
		this->pop();
		HX_STACK_LINE(8680)
		tmp = ret;
	}
	HX_STACK_LINE(8680)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_pop_unsafe",0x34d13183,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_pop_unsafe","zpp_nape/util/Lists.hx",8684,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8693)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8693)
	::zpp_nape::geom::ZPP_SimpleEvent ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8694)
	this->pop();
	HX_STACK_LINE(8695)
	::zpp_nape::geom::ZPP_SimpleEvent tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8695)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_SimpleEvent_obj::remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","remove",0xc0cec9df,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.remove","zpp_nape/util/Lists.hx",8706,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(8706)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8706)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8706)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8706)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8706)
		while((true)){
			HX_STACK_LINE(8706)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8706)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8706)
			if ((tmp2)){
				HX_STACK_LINE(8706)
				break;
			}
			HX_STACK_LINE(8706)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8706)
			if ((tmp3)){
				HX_STACK_LINE(8706)
				{
					HX_STACK_LINE(8706)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(8706)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(8706)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8706)
					if ((tmp4)){
						HX_STACK_LINE(8706)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8706)
						old = tmp5;
						HX_STACK_LINE(8706)
						ret1 = old->next;
						HX_STACK_LINE(8706)
						this->head = ret1;
						HX_STACK_LINE(8706)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(8706)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(8706)
						if ((tmp7)){
							HX_STACK_LINE(8706)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(8706)
						old = pre->next;
						HX_STACK_LINE(8706)
						ret1 = old->next;
						HX_STACK_LINE(8706)
						pre->next = ret1;
						HX_STACK_LINE(8706)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8706)
						if ((tmp5)){
							HX_STACK_LINE(8706)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(8706)
					{
						HX_STACK_LINE(8706)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(8706)
						o->elt = null();
						HX_STACK_LINE(8706)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8706)
						o->next = tmp5;
						HX_STACK_LINE(8706)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
					}
					HX_STACK_LINE(8706)
					this->modified = true;
					HX_STACK_LINE(8706)
					(this->length)--;
					HX_STACK_LINE(8706)
					this->pushmod = true;
					HX_STACK_LINE(8706)
					ret1;
				}
				HX_STACK_LINE(8706)
				ret = true;
				HX_STACK_LINE(8706)
				break;
			}
			HX_STACK_LINE(8706)
			pre = cur;
			HX_STACK_LINE(8706)
			cur = cur->next;
		}
		HX_STACK_LINE(8706)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,remove,(void))

bool ZNPList_ZPP_SimpleEvent_obj::try_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","try_remove",0x2b934923,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.try_remove","zpp_nape/util/Lists.hx",8708,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8717)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8718)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8718)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8719)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8720)
	while((true)){
		HX_STACK_LINE(8720)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8720)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8720)
		if ((tmp2)){
			HX_STACK_LINE(8720)
			break;
		}
		HX_STACK_LINE(8721)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8721)
		if ((tmp3)){
			HX_STACK_LINE(8722)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8722)
			this->erase(tmp4);
			HX_STACK_LINE(8723)
			ret = true;
			HX_STACK_LINE(8724)
			break;
		}
		HX_STACK_LINE(8726)
		pre = cur;
		HX_STACK_LINE(8727)
		cur = cur->next;
	}
	HX_STACK_LINE(8729)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8729)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,try_remove,return )

Void ZNPList_ZPP_SimpleEvent_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_remove",0xa7a14df3,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_remove","zpp_nape/util/Lists.hx",8742,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(8742)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8742)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8742)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8742)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8742)
		while((true)){
			HX_STACK_LINE(8742)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8742)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8742)
			if ((tmp2)){
				HX_STACK_LINE(8742)
				break;
			}
			HX_STACK_LINE(8742)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8742)
			if ((tmp3)){
				HX_STACK_LINE(8742)
				{
					HX_STACK_LINE(8742)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(8742)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(8742)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(8742)
					if ((tmp4)){
						HX_STACK_LINE(8742)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8742)
						old = tmp5;
						HX_STACK_LINE(8742)
						ret1 = old->next;
						HX_STACK_LINE(8742)
						this->head = ret1;
						HX_STACK_LINE(8742)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(8742)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(8742)
						if ((tmp7)){
							HX_STACK_LINE(8742)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(8742)
						old = pre->next;
						HX_STACK_LINE(8742)
						ret1 = old->next;
						HX_STACK_LINE(8742)
						pre->next = ret1;
						HX_STACK_LINE(8742)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8742)
						if ((tmp5)){
							HX_STACK_LINE(8742)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(8742)
					{
						HX_STACK_LINE(8742)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(8742)
						o->elt = null();
						HX_STACK_LINE(8742)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(8742)
						o->next = tmp5;
						HX_STACK_LINE(8742)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
					}
					HX_STACK_LINE(8742)
					this->modified = true;
					HX_STACK_LINE(8742)
					(this->length)--;
					HX_STACK_LINE(8742)
					this->pushmod = true;
					HX_STACK_LINE(8742)
					ret1;
				}
				HX_STACK_LINE(8742)
				ret = true;
				HX_STACK_LINE(8742)
				break;
			}
			HX_STACK_LINE(8742)
			pre = cur;
			HX_STACK_LINE(8742)
			cur = cur->next;
		}
		HX_STACK_LINE(8742)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimpleEvent_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_try_remove",0x4bfb6737,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_try_remove","zpp_nape/util/Lists.hx",8746,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8755)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8756)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8756)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8757)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8758)
	while((true)){
		HX_STACK_LINE(8758)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8758)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8758)
		if ((tmp2)){
			HX_STACK_LINE(8758)
			break;
		}
		HX_STACK_LINE(8759)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8759)
		if ((tmp3)){
			HX_STACK_LINE(8760)
			{
				HX_STACK_LINE(8760)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8760)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(8760)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(8760)
				if ((tmp4)){
					HX_STACK_LINE(8760)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(8760)
					old = tmp5;
					HX_STACK_LINE(8760)
					ret1 = old->next;
					HX_STACK_LINE(8760)
					this->head = ret1;
					HX_STACK_LINE(8760)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(8760)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(8760)
					if ((tmp7)){
						HX_STACK_LINE(8760)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8760)
					old = pre->next;
					HX_STACK_LINE(8760)
					ret1 = old->next;
					HX_STACK_LINE(8760)
					pre->next = ret1;
					HX_STACK_LINE(8760)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(8760)
					if ((tmp5)){
						HX_STACK_LINE(8760)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(8760)
				{
					HX_STACK_LINE(8760)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8760)
					o->elt = null();
					HX_STACK_LINE(8760)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(8760)
					o->next = tmp5;
					HX_STACK_LINE(8760)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8760)
				this->modified = true;
				HX_STACK_LINE(8760)
				(this->length)--;
				HX_STACK_LINE(8760)
				this->pushmod = true;
				HX_STACK_LINE(8760)
				ret1;
			}
			HX_STACK_LINE(8761)
			ret = true;
			HX_STACK_LINE(8762)
			break;
		}
		HX_STACK_LINE(8764)
		pre = cur;
		HX_STACK_LINE(8765)
		cur = cur->next;
	}
	HX_STACK_LINE(8767)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8767)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","erase",0x0b7da7ab,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.erase","zpp_nape/util/Lists.hx",8769,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(8770)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8770)
	{
		HX_STACK_LINE(8770)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(8770)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8770)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8770)
		if ((tmp1)){
			HX_STACK_LINE(8770)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8770)
			old = tmp2;
			HX_STACK_LINE(8770)
			ret = old->next;
			HX_STACK_LINE(8770)
			this->head = ret;
			HX_STACK_LINE(8770)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8770)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8770)
			if ((tmp4)){
				HX_STACK_LINE(8770)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(8770)
			old = pre->next;
			HX_STACK_LINE(8770)
			ret = old->next;
			HX_STACK_LINE(8770)
			pre->next = ret;
			HX_STACK_LINE(8770)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8770)
			if ((tmp2)){
				HX_STACK_LINE(8770)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(8770)
		{
			HX_STACK_LINE(8770)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8770)
			o->elt = null();
			HX_STACK_LINE(8770)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp2 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8770)
			o->next = tmp2;
			HX_STACK_LINE(8770)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8770)
		this->modified = true;
		HX_STACK_LINE(8770)
		(this->length)--;
		HX_STACK_LINE(8770)
		this->pushmod = true;
		HX_STACK_LINE(8770)
		tmp = ret;
	}
	HX_STACK_LINE(8770)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_erase",0x72b24217,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_erase","zpp_nape/util/Lists.hx",8774,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(8783)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(8784)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8785)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8785)
	if ((tmp)){
		HX_STACK_LINE(8786)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8786)
		old = tmp1;
		HX_STACK_LINE(8787)
		ret = old->next;
		HX_STACK_LINE(8788)
		this->head = ret;
		HX_STACK_LINE(8789)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8789)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8789)
		if ((tmp3)){
			HX_STACK_LINE(8789)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(8792)
		old = pre->next;
		HX_STACK_LINE(8793)
		ret = old->next;
		HX_STACK_LINE(8794)
		pre->next = ret;
		HX_STACK_LINE(8795)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8795)
		if ((tmp1)){
			HX_STACK_LINE(8795)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(8798)
	{
		HX_STACK_LINE(8799)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(8808)
		o->elt = null();
		HX_STACK_LINE(8809)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8809)
		o->next = tmp1;
		HX_STACK_LINE(8810)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(8815)
	this->modified = true;
	HX_STACK_LINE(8816)
	(this->length)--;
	HX_STACK_LINE(8817)
	this->pushmod = true;
	HX_STACK_LINE(8818)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8818)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","splice",0x7be4b317,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.splice","zpp_nape/util/Lists.hx",8820,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(8821)
	while((true)){
		HX_STACK_LINE(8821)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8821)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8821)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8821)
		if ((tmp1)){
			HX_STACK_LINE(8821)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(8821)
			tmp2 = false;
		}
		HX_STACK_LINE(8821)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8821)
		if ((tmp3)){
			HX_STACK_LINE(8821)
			break;
		}
		HX_STACK_LINE(8821)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(8821)
		this->erase(tmp4);
	}
	HX_STACK_LINE(8822)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8822)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,splice,return )

Void ZNPList_ZPP_SimpleEvent_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","clear",0xe0bc3052,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.clear","zpp_nape/util/Lists.hx",8825,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8825)
		while((true)){
			HX_STACK_LINE(8825)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8825)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8825)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8825)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8825)
			if ((tmp3)){
				HX_STACK_LINE(8825)
				break;
			}
			HX_STACK_LINE(8825)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8825)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8825)
			this->head = ret->next;
			HX_STACK_LINE(8825)
			{
				HX_STACK_LINE(8825)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8825)
				o->elt = null();
				HX_STACK_LINE(8825)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(8825)
				o->next = tmp5;
				HX_STACK_LINE(8825)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8825)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(8825)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(8825)
			if ((tmp6)){
				HX_STACK_LINE(8825)
				this->pushmod = true;
			}
			HX_STACK_LINE(8825)
			this->modified = true;
			HX_STACK_LINE(8825)
			(this->length)--;
		}
		HX_STACK_LINE(8825)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,clear,(void))

Void ZNPList_ZPP_SimpleEvent_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_clear",0x47f0cabe,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_clear","zpp_nape/util/Lists.hx",8830,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8831)
		while((true)){
			HX_STACK_LINE(8831)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8831)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8831)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8831)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8831)
			if ((tmp3)){
				HX_STACK_LINE(8831)
				break;
			}
			HX_STACK_LINE(8831)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8831)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8831)
			this->head = ret->next;
			HX_STACK_LINE(8831)
			{
				HX_STACK_LINE(8831)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8831)
				o->elt = null();
				HX_STACK_LINE(8831)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(8831)
				o->next = tmp5;
				HX_STACK_LINE(8831)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8831)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(8831)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(8831)
			if ((tmp6)){
				HX_STACK_LINE(8831)
				this->pushmod = true;
			}
			HX_STACK_LINE(8831)
			this->modified = true;
			HX_STACK_LINE(8831)
			(this->length)--;
		}
		HX_STACK_LINE(8832)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimpleEvent_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","reverse",0x1c1df327,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.reverse","zpp_nape/util/Lists.hx",8835,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8836)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8836)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8837)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8838)
		while((true)){
			HX_STACK_LINE(8838)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(8838)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8838)
			if ((tmp2)){
				HX_STACK_LINE(8838)
				break;
			}
			HX_STACK_LINE(8839)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8840)
			cur->next = pre;
			HX_STACK_LINE(8841)
			this->head = cur;
			HX_STACK_LINE(8842)
			pre = cur;
			HX_STACK_LINE(8843)
			cur = nx;
		}
		HX_STACK_LINE(8845)
		this->modified = true;
		HX_STACK_LINE(8846)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,reverse,(void))

bool ZNPList_ZPP_SimpleEvent_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","empty",0x083af952,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.empty","zpp_nape/util/Lists.hx",8850,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8851)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8851)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8851)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,empty,return )

int ZNPList_ZPP_SimpleEvent_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","size",0xdff3a19c,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.size","zpp_nape/util/Lists.hx",8855,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8856)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8856)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,size,return )

bool ZNPList_ZPP_SimpleEvent_obj::has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","has",0x53a052df,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.has","zpp_nape/util/Lists.hx",8858,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8859)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8859)
	{
		HX_STACK_LINE(8859)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8859)
		{
			HX_STACK_LINE(8859)
			ret = false;
			HX_STACK_LINE(8859)
			{
				HX_STACK_LINE(8859)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(8859)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(8859)
				while((true)){
					HX_STACK_LINE(8859)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(8859)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(8859)
					if ((tmp3)){
						HX_STACK_LINE(8859)
						break;
					}
					HX_STACK_LINE(8859)
					::zpp_nape::geom::ZPP_SimpleEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(8859)
					{
						HX_STACK_LINE(8859)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(8859)
						if ((tmp4)){
							HX_STACK_LINE(8859)
							ret = true;
							HX_STACK_LINE(8859)
							break;
						}
					}
					HX_STACK_LINE(8859)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(8859)
		tmp = ret;
	}
	HX_STACK_LINE(8859)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,has,return )

bool ZNPList_ZPP_SimpleEvent_obj::inlined_has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","inlined_has",0x10bb3a4b,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.inlined_has","zpp_nape/util/Lists.hx",8863,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8872)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8873)
	{
		HX_STACK_LINE(8874)
		ret = false;
		HX_STACK_LINE(8875)
		{
			HX_STACK_LINE(8876)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(8876)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8877)
			while((true)){
				HX_STACK_LINE(8877)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(8877)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(8877)
				if ((tmp2)){
					HX_STACK_LINE(8877)
					break;
				}
				HX_STACK_LINE(8878)
				::zpp_nape::geom::ZPP_SimpleEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8879)
				{
					HX_STACK_LINE(8880)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(8880)
					if ((tmp3)){
						HX_STACK_LINE(8881)
						ret = true;
						HX_STACK_LINE(8882)
						break;
					}
				}
				HX_STACK_LINE(8885)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8889)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8889)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_has,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","front",0x9eeed76e,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.front","zpp_nape/util/Lists.hx",8893,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8894)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8894)
	::zpp_nape::geom::ZPP_SimpleEvent tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8894)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,front,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","back",0xd4b0db02,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.back","zpp_nape/util/Lists.hx",8896,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8897)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8897)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8898)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8899)
	while((true)){
		HX_STACK_LINE(8899)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8899)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8899)
		if ((tmp2)){
			HX_STACK_LINE(8899)
			break;
		}
		HX_STACK_LINE(8900)
		ret = cur;
		HX_STACK_LINE(8901)
		cur = cur->next;
	}
	HX_STACK_LINE(8903)
	::zpp_nape::geom::ZPP_SimpleEvent tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8903)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","iterator_at",0x155a2a69,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.iterator_at","zpp_nape/util/Lists.hx",8905,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8914)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8914)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8915)
	while((true)){
		HX_STACK_LINE(8915)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8915)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8915)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8915)
		if ((tmp2)){
			HX_STACK_LINE(8915)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(8915)
			tmp3 = false;
		}
		HX_STACK_LINE(8915)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(8915)
		if ((tmp4)){
			HX_STACK_LINE(8915)
			break;
		}
		HX_STACK_LINE(8915)
		ret = ret->next;
	}
	HX_STACK_LINE(8916)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8916)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_SimpleEvent","at",0x32e2d90e,"zpp_nape.util.ZNPList_ZPP_SimpleEvent.at","zpp_nape/util/Lists.hx",8918,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8927)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8927)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8927)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8928)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8928)
	::zpp_nape::geom::ZPP_SimpleEvent tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(8928)
	if ((tmp2)){
		HX_STACK_LINE(8928)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(8928)
		tmp3 = null();
	}
	HX_STACK_LINE(8928)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,at,return )


ZNPList_ZPP_SimpleEvent_obj::ZNPList_ZPP_SimpleEvent_obj()
{
}

void ZNPList_ZPP_SimpleEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimpleEvent);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimpleEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_SimpleEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPList_ZPP_SimpleEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent >(); return inValue; }
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

bool ZNPList_ZPP_SimpleEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_SimpleEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SimpleEvent*/ ,(int)offsetof(ZNPList_ZPP_SimpleEvent_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SimpleEvent_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_SimpleEvent_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_SimpleEvent_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimpleEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimpleEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_SimpleEvent_obj::__mClass;

void ZNPList_ZPP_SimpleEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_SimpleEvent","\x73","\x0d","\x4a","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_SimpleEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_SimpleEvent_obj >;
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
