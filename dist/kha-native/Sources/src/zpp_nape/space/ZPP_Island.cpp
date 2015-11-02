#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_Island_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_Island","new",0x3d045015,"zpp_nape.space.ZPP_Island.new","zpp_nape/space/Space.hx",174,0x2b65ed03)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(532)
	this->waket = (int)0;
	HX_STACK_LINE(531)
	this->sleep = false;
	HX_STACK_LINE(530)
	this->comps = null();
	HX_STACK_LINE(189)
	this->length = (int)0;
	HX_STACK_LINE(188)
	this->pushmod = false;
	HX_STACK_LINE(187)
	this->modified = false;
	HX_STACK_LINE(186)
	this->_inuse = false;
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(575)
	::zpp_nape::util::ZNPList_ZPP_Component tmp = ::zpp_nape::util::ZNPList_ZPP_Component_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(575)
	this->comps = tmp;
}
;
	return null();
}

//ZPP_Island_obj::~ZPP_Island_obj() { }

Dynamic ZPP_Island_obj::__CreateEmpty() { return  new ZPP_Island_obj; }
hx::ObjectPtr< ZPP_Island_obj > ZPP_Island_obj::__new()
{  hx::ObjectPtr< ZPP_Island_obj > _result_ = new ZPP_Island_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Island_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Island_obj > _result_ = new ZPP_Island_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::space::ZPP_Island ZPP_Island_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","elem",0x20d4173a,"zpp_nape.space.ZPP_Island.elem","zpp_nape/space/Space.hx",179,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,elem,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","begin",0xd9ed811e,"zpp_nape.space.ZPP_Island.begin","zpp_nape/space/Space.hx",183,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,begin,return )

Void ZPP_Island_obj::setbegin( ::zpp_nape::space::ZPP_Island i){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","setbegin",0xa2185372,"zpp_nape.space.ZPP_Island.setbegin","zpp_nape/space/Space.hx",192,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(193)
		this->next = i;
		HX_STACK_LINE(194)
		this->modified = true;
		HX_STACK_LINE(195)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,setbegin,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::add( ::zpp_nape::space::ZPP_Island o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","add",0x3cfa71d6,"zpp_nape.space.ZPP_Island.add","zpp_nape/space/Space.hx",197,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(198)
	::zpp_nape::space::ZPP_Island tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		::zpp_nape::space::ZPP_Island tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			o->_inuse = true;
			HX_STACK_LINE(198)
			tmp1 = o;
		}
		HX_STACK_LINE(198)
		::zpp_nape::space::ZPP_Island temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(198)
		::zpp_nape::space::ZPP_Island tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		temp->next = tmp2;
		HX_STACK_LINE(198)
		this->next = temp;
		HX_STACK_LINE(198)
		this->modified = true;
		HX_STACK_LINE(198)
		(this->length)++;
		HX_STACK_LINE(198)
		tmp = o;
	}
	HX_STACK_LINE(198)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,add,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_add( ::zpp_nape::space::ZPP_Island o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_add",0x56a50942,"zpp_nape.space.ZPP_Island.inlined_add","zpp_nape/space/Space.hx",202,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(211)
	::zpp_nape::space::ZPP_Island tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(212)
		o->_inuse = true;
		HX_STACK_LINE(213)
		tmp = o;
	}
	HX_STACK_LINE(211)
	::zpp_nape::space::ZPP_Island temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(215)
	::zpp_nape::space::ZPP_Island tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	temp->next = tmp1;
	HX_STACK_LINE(216)
	this->next = temp;
	HX_STACK_LINE(217)
	this->modified = true;
	HX_STACK_LINE(218)
	(this->length)++;
	HX_STACK_LINE(219)
	::zpp_nape::space::ZPP_Island tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_add,return )

Void ZPP_Island_obj::addAll( ::zpp_nape::space::ZPP_Island x){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","addAll",0xda0788eb,"zpp_nape.space.ZPP_Island.addAll","zpp_nape/space/Space.hx",230,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(231)
		::zpp_nape::space::ZPP_Island cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(232)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(232)
			if ((tmp1)){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(233)
			::zpp_nape::space::ZPP_Island i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(234)
			::zpp_nape::space::ZPP_Island tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			this->add(tmp2);
			HX_STACK_LINE(235)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,addAll,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::insert( ::zpp_nape::space::ZPP_Island cur,::zpp_nape::space::ZPP_Island o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","insert",0xd8e9c2a4,"zpp_nape.space.ZPP_Island.insert","zpp_nape/space/Space.hx",239,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(240)
	::zpp_nape::space::ZPP_Island tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		::zpp_nape::space::ZPP_Island tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			o->_inuse = true;
			HX_STACK_LINE(240)
			tmp1 = o;
		}
		HX_STACK_LINE(240)
		::zpp_nape::space::ZPP_Island temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(240)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		if ((tmp2)){
			HX_STACK_LINE(240)
			::zpp_nape::space::ZPP_Island tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			temp->next = tmp3;
			HX_STACK_LINE(240)
			this->next = temp;
		}
		else{
			HX_STACK_LINE(240)
			temp->next = cur->next;
			HX_STACK_LINE(240)
			cur->next = temp;
		}
		HX_STACK_LINE(240)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		this->pushmod = tmp3;
		HX_STACK_LINE(240)
		(this->length)++;
		HX_STACK_LINE(240)
		tmp = temp;
	}
	HX_STACK_LINE(240)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,insert,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_insert( ::zpp_nape::space::ZPP_Island cur,::zpp_nape::space::ZPP_Island o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_insert",0xbc1a96b8,"zpp_nape.space.ZPP_Island.inlined_insert","zpp_nape/space/Space.hx",244,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(253)
	::zpp_nape::space::ZPP_Island tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(254)
		o->_inuse = true;
		HX_STACK_LINE(255)
		tmp = o;
	}
	HX_STACK_LINE(253)
	::zpp_nape::space::ZPP_Island temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(257)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	if ((tmp1)){
		HX_STACK_LINE(258)
		::zpp_nape::space::ZPP_Island tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		temp->next = tmp2;
		HX_STACK_LINE(259)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(262)
		temp->next = cur->next;
		HX_STACK_LINE(263)
		cur->next = temp;
	}
	HX_STACK_LINE(265)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	this->pushmod = tmp2;
	HX_STACK_LINE(266)
	(this->length)++;
	HX_STACK_LINE(267)
	::zpp_nape::space::ZPP_Island tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(267)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,inlined_insert,return )

Void ZPP_Island_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","pop",0x3d05dd46,"zpp_nape.space.ZPP_Island.pop","zpp_nape/space/Space.hx",270,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		::zpp_nape::space::ZPP_Island ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(270)
		this->next = ret->next;
		HX_STACK_LINE(270)
		ret->_inuse = false;
		HX_STACK_LINE(270)
		::zpp_nape::space::ZPP_Island tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		if ((tmp2)){
			HX_STACK_LINE(270)
			this->pushmod = true;
		}
		HX_STACK_LINE(270)
		this->modified = true;
		HX_STACK_LINE(270)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,pop,(void))

Void ZPP_Island_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_pop",0x56b074b2,"zpp_nape.space.ZPP_Island.inlined_pop","zpp_nape/space/Space.hx",274,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		::zpp_nape::space::ZPP_Island ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(284)
		this->next = ret->next;
		HX_STACK_LINE(286)
		ret->_inuse = false;
		HX_STACK_LINE(289)
		::zpp_nape::space::ZPP_Island tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		if ((tmp2)){
			HX_STACK_LINE(289)
			this->pushmod = true;
		}
		HX_STACK_LINE(290)
		this->modified = true;
		HX_STACK_LINE(291)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","pop_unsafe",0xa6848d3f,"zpp_nape.space.ZPP_Island.pop_unsafe","zpp_nape/space/Space.hx",293,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	::zpp_nape::space::ZPP_Island tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		::zpp_nape::space::ZPP_Island tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		::zpp_nape::space::ZPP_Island ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(294)
		this->pop();
		HX_STACK_LINE(294)
		tmp = ret;
	}
	HX_STACK_LINE(294)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_pop_unsafe",0x58b2fb53,"zpp_nape.space.ZPP_Island.inlined_pop_unsafe","zpp_nape/space/Space.hx",298,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	::zpp_nape::space::ZPP_Island ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(308)
	this->pop();
	HX_STACK_LINE(309)
	::zpp_nape::space::ZPP_Island tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(309)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_pop_unsafe,return )

Void ZPP_Island_obj::remove( ::zpp_nape::space::ZPP_Island obj){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","remove",0x3f951baf,"zpp_nape.space.ZPP_Island.remove","zpp_nape/space/Space.hx",320,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(320)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(320)
		::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		::zpp_nape::space::ZPP_Island cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(320)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(320)
		while((true)){
			HX_STACK_LINE(320)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(320)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(320)
			if ((tmp2)){
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(320)
			if ((tmp3)){
				HX_STACK_LINE(320)
				{
					HX_STACK_LINE(320)
					::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(320)
					::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(320)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(320)
					if ((tmp4)){
						HX_STACK_LINE(320)
						::zpp_nape::space::ZPP_Island tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(320)
						old = tmp5;
						HX_STACK_LINE(320)
						ret1 = old->next;
						HX_STACK_LINE(320)
						this->next = ret1;
						HX_STACK_LINE(320)
						::zpp_nape::space::ZPP_Island tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(320)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(320)
						if ((tmp7)){
							HX_STACK_LINE(320)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(320)
						old = pre->next;
						HX_STACK_LINE(320)
						ret1 = old->next;
						HX_STACK_LINE(320)
						pre->next = ret1;
						HX_STACK_LINE(320)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(320)
						if ((tmp5)){
							HX_STACK_LINE(320)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(320)
					old->_inuse = false;
					HX_STACK_LINE(320)
					this->modified = true;
					HX_STACK_LINE(320)
					(this->length)--;
					HX_STACK_LINE(320)
					this->pushmod = true;
					HX_STACK_LINE(320)
					ret1;
				}
				HX_STACK_LINE(320)
				ret = true;
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			pre = cur;
			HX_STACK_LINE(320)
			cur = cur->next;
		}
		HX_STACK_LINE(320)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,remove,(void))

bool ZPP_Island_obj::try_remove( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","try_remove",0xbdaec2f3,"zpp_nape.space.ZPP_Island.try_remove","zpp_nape/space/Space.hx",322,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(331)
	::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(332)
	::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	::zpp_nape::space::ZPP_Island cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(333)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(334)
	while((true)){
		HX_STACK_LINE(334)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		if ((tmp2)){
			HX_STACK_LINE(334)
			break;
		}
		HX_STACK_LINE(335)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		if ((tmp3)){
			HX_STACK_LINE(336)
			::zpp_nape::space::ZPP_Island tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(336)
			this->erase(tmp4);
			HX_STACK_LINE(337)
			ret = true;
			HX_STACK_LINE(338)
			break;
		}
		HX_STACK_LINE(340)
		pre = cur;
		HX_STACK_LINE(341)
		cur = cur->next;
	}
	HX_STACK_LINE(343)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(343)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,try_remove,return )

Void ZPP_Island_obj::inlined_remove( ::zpp_nape::space::ZPP_Island obj){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_remove",0x22c5efc3,"zpp_nape.space.ZPP_Island.inlined_remove","zpp_nape/space/Space.hx",356,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(356)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(356)
		::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		::zpp_nape::space::ZPP_Island cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(356)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(356)
		while((true)){
			HX_STACK_LINE(356)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(356)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(356)
			if ((tmp2)){
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(356)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(356)
			if ((tmp3)){
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(356)
					::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(356)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(356)
					if ((tmp4)){
						HX_STACK_LINE(356)
						::zpp_nape::space::ZPP_Island tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(356)
						old = tmp5;
						HX_STACK_LINE(356)
						ret1 = old->next;
						HX_STACK_LINE(356)
						this->next = ret1;
						HX_STACK_LINE(356)
						::zpp_nape::space::ZPP_Island tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(356)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(356)
						if ((tmp7)){
							HX_STACK_LINE(356)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(356)
						old = pre->next;
						HX_STACK_LINE(356)
						ret1 = old->next;
						HX_STACK_LINE(356)
						pre->next = ret1;
						HX_STACK_LINE(356)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(356)
						if ((tmp5)){
							HX_STACK_LINE(356)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(356)
					old->_inuse = false;
					HX_STACK_LINE(356)
					this->modified = true;
					HX_STACK_LINE(356)
					(this->length)--;
					HX_STACK_LINE(356)
					this->pushmod = true;
					HX_STACK_LINE(356)
					ret1;
				}
				HX_STACK_LINE(356)
				ret = true;
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(356)
			pre = cur;
			HX_STACK_LINE(356)
			cur = cur->next;
		}
		HX_STACK_LINE(356)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_remove,(void))

bool ZPP_Island_obj::inlined_try_remove( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_try_remove",0x6fdd3107,"zpp_nape.space.ZPP_Island.inlined_try_remove","zpp_nape/space/Space.hx",360,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(369)
	::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(370)
	::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	::zpp_nape::space::ZPP_Island cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(371)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(372)
	while((true)){
		HX_STACK_LINE(372)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(372)
		if ((tmp2)){
			HX_STACK_LINE(372)
			break;
		}
		HX_STACK_LINE(373)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(373)
		if ((tmp3)){
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(374)
				::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(374)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(374)
				if ((tmp4)){
					HX_STACK_LINE(374)
					::zpp_nape::space::ZPP_Island tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(374)
					old = tmp5;
					HX_STACK_LINE(374)
					ret1 = old->next;
					HX_STACK_LINE(374)
					this->next = ret1;
					HX_STACK_LINE(374)
					::zpp_nape::space::ZPP_Island tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(374)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(374)
					if ((tmp7)){
						HX_STACK_LINE(374)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(374)
					old = pre->next;
					HX_STACK_LINE(374)
					ret1 = old->next;
					HX_STACK_LINE(374)
					pre->next = ret1;
					HX_STACK_LINE(374)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(374)
					if ((tmp5)){
						HX_STACK_LINE(374)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(374)
				old->_inuse = false;
				HX_STACK_LINE(374)
				this->modified = true;
				HX_STACK_LINE(374)
				(this->length)--;
				HX_STACK_LINE(374)
				this->pushmod = true;
				HX_STACK_LINE(374)
				ret1;
			}
			HX_STACK_LINE(375)
			ret = true;
			HX_STACK_LINE(376)
			break;
		}
		HX_STACK_LINE(378)
		pre = cur;
		HX_STACK_LINE(379)
		cur = cur->next;
	}
	HX_STACK_LINE(381)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(381)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_try_remove,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::erase( ::zpp_nape::space::ZPP_Island pre){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","erase",0x9cb47fdb,"zpp_nape.space.ZPP_Island.erase","zpp_nape/space/Space.hx",383,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(384)
	::zpp_nape::space::ZPP_Island tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	{
		HX_STACK_LINE(384)
		::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(384)
		::zpp_nape::space::ZPP_Island ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(384)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		if ((tmp1)){
			HX_STACK_LINE(384)
			::zpp_nape::space::ZPP_Island tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(384)
			old = tmp2;
			HX_STACK_LINE(384)
			ret = old->next;
			HX_STACK_LINE(384)
			this->next = ret;
			HX_STACK_LINE(384)
			::zpp_nape::space::ZPP_Island tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(384)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			if ((tmp4)){
				HX_STACK_LINE(384)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(384)
			old = pre->next;
			HX_STACK_LINE(384)
			ret = old->next;
			HX_STACK_LINE(384)
			pre->next = ret;
			HX_STACK_LINE(384)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(384)
			if ((tmp2)){
				HX_STACK_LINE(384)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(384)
		old->_inuse = false;
		HX_STACK_LINE(384)
		this->modified = true;
		HX_STACK_LINE(384)
		(this->length)--;
		HX_STACK_LINE(384)
		this->pushmod = true;
		HX_STACK_LINE(384)
		tmp = ret;
	}
	HX_STACK_LINE(384)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,erase,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_erase( ::zpp_nape::space::ZPP_Island pre){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_erase",0x67c4ca47,"zpp_nape.space.ZPP_Island.inlined_erase","zpp_nape/space/Space.hx",388,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(397)
	::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(398)
	::zpp_nape::space::ZPP_Island ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(399)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	if ((tmp)){
		HX_STACK_LINE(400)
		::zpp_nape::space::ZPP_Island tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		old = tmp1;
		HX_STACK_LINE(401)
		ret = old->next;
		HX_STACK_LINE(402)
		this->next = ret;
		HX_STACK_LINE(403)
		::zpp_nape::space::ZPP_Island tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(403)
		if ((tmp3)){
			HX_STACK_LINE(403)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(406)
		old = pre->next;
		HX_STACK_LINE(407)
		ret = old->next;
		HX_STACK_LINE(408)
		pre->next = ret;
		HX_STACK_LINE(409)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(409)
		if ((tmp1)){
			HX_STACK_LINE(409)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(412)
	old->_inuse = false;
	HX_STACK_LINE(415)
	this->modified = true;
	HX_STACK_LINE(416)
	(this->length)--;
	HX_STACK_LINE(417)
	this->pushmod = true;
	HX_STACK_LINE(418)
	::zpp_nape::space::ZPP_Island tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_erase,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::splice( ::zpp_nape::space::ZPP_Island pre,int n){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","splice",0xfaab04e7,"zpp_nape.space.ZPP_Island.splice","zpp_nape/space/Space.hx",420,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(421)
	while((true)){
		HX_STACK_LINE(421)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(421)
		if ((tmp1)){
			HX_STACK_LINE(421)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(421)
			tmp2 = false;
		}
		HX_STACK_LINE(421)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(421)
		if ((tmp3)){
			HX_STACK_LINE(421)
			break;
		}
		HX_STACK_LINE(421)
		::zpp_nape::space::ZPP_Island tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(421)
		this->erase(tmp4);
	}
	HX_STACK_LINE(422)
	::zpp_nape::space::ZPP_Island tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,splice,return )

Void ZPP_Island_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","clear",0x71f30882,"zpp_nape.space.ZPP_Island.clear","zpp_nape/space/Space.hx",425,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,clear,(void))

Void ZPP_Island_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_clear",0x3d0352ee,"zpp_nape.space.ZPP_Island.inlined_clear","zpp_nape/space/Space.hx",430,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_clear,(void))

Void ZPP_Island_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","reverse",0x8adf3757,"zpp_nape.space.ZPP_Island.reverse","zpp_nape/space/Space.hx",435,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(436)
		::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(436)
		::zpp_nape::space::ZPP_Island cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(437)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(438)
		while((true)){
			HX_STACK_LINE(438)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(438)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(438)
			if ((tmp2)){
				HX_STACK_LINE(438)
				break;
			}
			HX_STACK_LINE(439)
			::zpp_nape::space::ZPP_Island nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(440)
			cur->next = pre;
			HX_STACK_LINE(441)
			this->next = cur;
			HX_STACK_LINE(442)
			pre = cur;
			HX_STACK_LINE(443)
			cur = nx;
		}
		HX_STACK_LINE(445)
		this->modified = true;
		HX_STACK_LINE(446)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,reverse,(void))

bool ZPP_Island_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","empty",0x9971d182,"zpp_nape.space.ZPP_Island.empty","zpp_nape/space/Space.hx",450,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(451)
	::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(451)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(451)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,empty,return )

int ZPP_Island_obj::size( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","size",0x2a12df6c,"zpp_nape.space.ZPP_Island.size","zpp_nape/space/Space.hx",455,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(456)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(456)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,size,return )

bool ZPP_Island_obj::has( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","has",0x3cffbf0f,"zpp_nape.space.ZPP_Island.has","zpp_nape/space/Space.hx",458,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(459)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(459)
	{
		HX_STACK_LINE(459)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			ret = false;
			HX_STACK_LINE(459)
			{
				HX_STACK_LINE(459)
				::zpp_nape::space::ZPP_Island tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(459)
				::zpp_nape::space::ZPP_Island cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(459)
				while((true)){
					HX_STACK_LINE(459)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(459)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(459)
					if ((tmp3)){
						HX_STACK_LINE(459)
						break;
					}
					HX_STACK_LINE(459)
					::zpp_nape::space::ZPP_Island npite = cx_ite;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(459)
					{
						HX_STACK_LINE(459)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(459)
						if ((tmp4)){
							HX_STACK_LINE(459)
							ret = true;
							HX_STACK_LINE(459)
							break;
						}
					}
					HX_STACK_LINE(459)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(459)
		tmp = ret;
	}
	HX_STACK_LINE(459)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,has,return )

bool ZPP_Island_obj::inlined_has( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","inlined_has",0x56aa567b,"zpp_nape.space.ZPP_Island.inlined_has","zpp_nape/space/Space.hx",463,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(472)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(473)
	{
		HX_STACK_LINE(474)
		ret = false;
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(476)
			::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(476)
			::zpp_nape::space::ZPP_Island cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(477)
			while((true)){
				HX_STACK_LINE(477)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(477)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(477)
				if ((tmp2)){
					HX_STACK_LINE(477)
					break;
				}
				HX_STACK_LINE(478)
				::zpp_nape::space::ZPP_Island npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(479)
				{
					HX_STACK_LINE(480)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(480)
					if ((tmp3)){
						HX_STACK_LINE(481)
						ret = true;
						HX_STACK_LINE(482)
						break;
					}
				}
				HX_STACK_LINE(485)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(489)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(489)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_has,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::front( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","front",0x3025af9e,"zpp_nape.space.ZPP_Island.front","zpp_nape/space/Space.hx",493,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(494)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,front,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::back( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","back",0x1ed018d2,"zpp_nape.space.ZPP_Island.back","zpp_nape/space/Space.hx",496,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(497)
	::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	::zpp_nape::space::ZPP_Island ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(498)
	::zpp_nape::space::ZPP_Island cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(499)
	while((true)){
		HX_STACK_LINE(499)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(499)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(499)
		if ((tmp2)){
			HX_STACK_LINE(499)
			break;
		}
		HX_STACK_LINE(500)
		ret = cur;
		HX_STACK_LINE(501)
		cur = cur->next;
	}
	HX_STACK_LINE(503)
	::zpp_nape::space::ZPP_Island tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(503)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,back,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","iterator_at",0x5b494699,"zpp_nape.space.ZPP_Island.iterator_at","zpp_nape/space/Space.hx",505,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(514)
	::zpp_nape::space::ZPP_Island tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(514)
	::zpp_nape::space::ZPP_Island ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(515)
	while((true)){
		HX_STACK_LINE(515)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(515)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(515)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(515)
		if ((tmp2)){
			HX_STACK_LINE(515)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(515)
			tmp3 = false;
		}
		HX_STACK_LINE(515)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(515)
		if ((tmp4)){
			HX_STACK_LINE(515)
			break;
		}
		HX_STACK_LINE(515)
		ret = ret->next;
	}
	HX_STACK_LINE(516)
	::zpp_nape::space::ZPP_Island tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(516)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,iterator_at,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.space.ZPP_Island","at",0x8a0802de,"zpp_nape.space.ZPP_Island.at","zpp_nape/space/Space.hx",518,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(527)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	::zpp_nape::space::ZPP_Island tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	::zpp_nape::space::ZPP_Island it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(528)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(528)
	::zpp_nape::space::ZPP_Island tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(528)
	if ((tmp2)){
		HX_STACK_LINE(528)
		tmp3 = it;
	}
	else{
		HX_STACK_LINE(528)
		tmp3 = null();
	}
	HX_STACK_LINE(528)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,at,return )

Void ZPP_Island_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","free",0x2181db57,"zpp_nape.space.ZPP_Island.free","zpp_nape/space/Space.hx",560,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,free,(void))

Void ZPP_Island_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Island","alloc",0x4b2b3b6a,"zpp_nape.space.ZPP_Island.alloc","zpp_nape/space/Space.hx",572,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(572)
		this->waket = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,alloc,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::zpp_pool;


ZPP_Island_obj::ZPP_Island_obj()
{
}

void ZPP_Island_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Island);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(comps,"comps");
	HX_MARK_MEMBER_NAME(sleep,"sleep");
	HX_MARK_MEMBER_NAME(waket,"waket");
	HX_MARK_END_CLASS();
}

void ZPP_Island_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(comps,"comps");
	HX_VISIT_MEMBER_NAME(sleep,"sleep");
	HX_VISIT_MEMBER_NAME(waket,"waket");
}

Dynamic ZPP_Island_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"comps") ) { return comps; }
		if (HX_FIELD_EQ(inName,"sleep") ) { return sleep; }
		if (HX_FIELD_EQ(inName,"waket") ) { return waket; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
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

bool ZPP_Island_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Island_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_Island >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"comps") ) { comps=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleep") ) { sleep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waket") ) { waket=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
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

bool ZPP_Island_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::space::ZPP_Island >(); return true; }
	}
	return false;
}

void ZPP_Island_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("comps","\x84","\x34","\x5d","\x4a"));
	outFields->push(HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"));
	outFields->push(HX_HCSTRING("waket","\xd0","\x43","\x1e","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Island*/ ,(int)offsetof(ZPP_Island_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_Island_obj,_inuse),HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba")},
	{hx::fsBool,(int)offsetof(ZPP_Island_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_Island_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZPP_Island_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Component*/ ,(int)offsetof(ZPP_Island_obj,comps),HX_HCSTRING("comps","\x84","\x34","\x5d","\x4a")},
	{hx::fsBool,(int)offsetof(ZPP_Island_obj,sleep),HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e")},
	{hx::fsInt,(int)offsetof(ZPP_Island_obj,waket),HX_HCSTRING("waket","\xd0","\x43","\x1e","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Island*/ ,(void *) &ZPP_Island_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("elem","\x8f","\xd8","\x14","\x43"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba"),
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
	HX_HCSTRING("comps","\x84","\x34","\x5d","\x4a"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	HX_HCSTRING("waket","\xd0","\x43","\x1e","\xc5"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Island_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Island_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Island_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Island_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Island_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Island_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_Island","\xa3","\xa1","\x13","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Island_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Island_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Island_obj >;
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

void ZPP_Island_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
