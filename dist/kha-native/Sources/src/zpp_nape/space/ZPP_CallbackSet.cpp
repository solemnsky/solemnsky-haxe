#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_CallbackSet_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","new",0x2b5b69c1,"zpp_nape.space.ZPP_CallbackSet.new","zpp_nape/space/Space.hx",645,0x2b65ed03)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1084)
	this->lazydel = false;
	HX_STACK_LINE(1083)
	this->freed = false;
	HX_STACK_LINE(718)
	this->length = (int)0;
	HX_STACK_LINE(717)
	this->pushmod = false;
	HX_STACK_LINE(716)
	this->modified = false;
	HX_STACK_LINE(715)
	this->_inuse = false;
	HX_STACK_LINE(704)
	this->next = null();
	HX_STACK_LINE(649)
	this->int2 = null();
	HX_STACK_LINE(648)
	this->int1 = null();
	HX_STACK_LINE(647)
	this->di = (int)0;
	HX_STACK_LINE(646)
	this->id = (int)0;
	HX_STACK_LINE(1114)
	::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1114)
	this->arbiters = tmp;
}
;
	return null();
}

//ZPP_CallbackSet_obj::~ZPP_CallbackSet_obj() { }

Dynamic ZPP_CallbackSet_obj::__CreateEmpty() { return  new ZPP_CallbackSet_obj; }
hx::ObjectPtr< ZPP_CallbackSet_obj > ZPP_CallbackSet_obj::__new()
{  hx::ObjectPtr< ZPP_CallbackSet_obj > _result_ = new ZPP_CallbackSet_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_CallbackSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CallbackSet_obj > _result_ = new ZPP_CallbackSet_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","elem",0xbeb3740e,"zpp_nape.space.ZPP_CallbackSet.elem","zpp_nape/space/Space.hx",708,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(708)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,elem,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","begin",0x5f7f5dca,"zpp_nape.space.ZPP_CallbackSet.begin","zpp_nape/space/Space.hx",712,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(713)
	::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(713)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,begin,return )

Void ZPP_CallbackSet_obj::setbegin( ::zpp_nape::space::ZPP_CallbackSet i){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","setbegin",0x09c8aa46,"zpp_nape.space.ZPP_CallbackSet.setbegin","zpp_nape/space/Space.hx",721,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(722)
		this->next = i;
		HX_STACK_LINE(723)
		this->modified = true;
		HX_STACK_LINE(724)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,setbegin,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","add",0x2b518b82,"zpp_nape.space.ZPP_CallbackSet.add","zpp_nape/space/Space.hx",726,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(727)
	::zpp_nape::space::ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	{
		HX_STACK_LINE(727)
		::zpp_nape::space::ZPP_CallbackSet tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(727)
		{
			HX_STACK_LINE(727)
			o->_inuse = true;
			HX_STACK_LINE(727)
			tmp1 = o;
		}
		HX_STACK_LINE(727)
		::zpp_nape::space::ZPP_CallbackSet temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(727)
		::zpp_nape::space::ZPP_CallbackSet tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(727)
		temp->next = tmp2;
		HX_STACK_LINE(727)
		this->next = temp;
		HX_STACK_LINE(727)
		this->modified = true;
		HX_STACK_LINE(727)
		(this->length)++;
		HX_STACK_LINE(727)
		tmp = o;
	}
	HX_STACK_LINE(727)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,add,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_add",0x416faeee,"zpp_nape.space.ZPP_CallbackSet.inlined_add","zpp_nape/space/Space.hx",731,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(740)
	::zpp_nape::space::ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(740)
	{
		HX_STACK_LINE(741)
		o->_inuse = true;
		HX_STACK_LINE(742)
		tmp = o;
	}
	HX_STACK_LINE(740)
	::zpp_nape::space::ZPP_CallbackSet temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(744)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(744)
	temp->next = tmp1;
	HX_STACK_LINE(745)
	this->next = temp;
	HX_STACK_LINE(746)
	this->modified = true;
	HX_STACK_LINE(747)
	(this->length)++;
	HX_STACK_LINE(748)
	::zpp_nape::space::ZPP_CallbackSet tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(748)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_add,return )

Void ZPP_CallbackSet_obj::addAll( ::zpp_nape::space::ZPP_CallbackSet x){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","addAll",0x3416c2bf,"zpp_nape.space.ZPP_CallbackSet.addAll","zpp_nape/space/Space.hx",759,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(760)
		::zpp_nape::space::ZPP_CallbackSet cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(761)
		while((true)){
			HX_STACK_LINE(761)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(761)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(761)
			if ((tmp1)){
				HX_STACK_LINE(761)
				break;
			}
			HX_STACK_LINE(762)
			::zpp_nape::space::ZPP_CallbackSet i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(763)
			::zpp_nape::space::ZPP_CallbackSet tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(763)
			this->add(tmp2);
			HX_STACK_LINE(764)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,addAll,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","insert",0x32f8fc78,"zpp_nape.space.ZPP_CallbackSet.insert","zpp_nape/space/Space.hx",768,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(769)
	::zpp_nape::space::ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(769)
	{
		HX_STACK_LINE(769)
		::zpp_nape::space::ZPP_CallbackSet tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(769)
		{
			HX_STACK_LINE(769)
			o->_inuse = true;
			HX_STACK_LINE(769)
			tmp1 = o;
		}
		HX_STACK_LINE(769)
		::zpp_nape::space::ZPP_CallbackSet temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(769)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(769)
		if ((tmp2)){
			HX_STACK_LINE(769)
			::zpp_nape::space::ZPP_CallbackSet tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(769)
			temp->next = tmp3;
			HX_STACK_LINE(769)
			this->next = temp;
		}
		else{
			HX_STACK_LINE(769)
			temp->next = cur->next;
			HX_STACK_LINE(769)
			cur->next = temp;
		}
		HX_STACK_LINE(769)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(769)
		this->pushmod = tmp3;
		HX_STACK_LINE(769)
		(this->length)++;
		HX_STACK_LINE(769)
		tmp = temp;
	}
	HX_STACK_LINE(769)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,insert,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_insert",0xad75c48c,"zpp_nape.space.ZPP_CallbackSet.inlined_insert","zpp_nape/space/Space.hx",773,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(782)
	::zpp_nape::space::ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(782)
	{
		HX_STACK_LINE(783)
		o->_inuse = true;
		HX_STACK_LINE(784)
		tmp = o;
	}
	HX_STACK_LINE(782)
	::zpp_nape::space::ZPP_CallbackSet temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(786)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(786)
	if ((tmp1)){
		HX_STACK_LINE(787)
		::zpp_nape::space::ZPP_CallbackSet tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(787)
		temp->next = tmp2;
		HX_STACK_LINE(788)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(791)
		temp->next = cur->next;
		HX_STACK_LINE(792)
		cur->next = temp;
	}
	HX_STACK_LINE(794)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(794)
	this->pushmod = tmp2;
	HX_STACK_LINE(795)
	(this->length)++;
	HX_STACK_LINE(796)
	::zpp_nape::space::ZPP_CallbackSet tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(796)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,inlined_insert,return )

Void ZPP_CallbackSet_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","pop",0x2b5cf6f2,"zpp_nape.space.ZPP_CallbackSet.pop","zpp_nape/space/Space.hx",799,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(799)
		::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(799)
		::zpp_nape::space::ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(799)
		this->next = ret->next;
		HX_STACK_LINE(799)
		ret->_inuse = false;
		HX_STACK_LINE(799)
		::zpp_nape::space::ZPP_CallbackSet tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(799)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(799)
		if ((tmp2)){
			HX_STACK_LINE(799)
			this->pushmod = true;
		}
		HX_STACK_LINE(799)
		this->modified = true;
		HX_STACK_LINE(799)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,pop,(void))

Void ZPP_CallbackSet_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_pop",0x417b1a5e,"zpp_nape.space.ZPP_CallbackSet.inlined_pop","zpp_nape/space/Space.hx",803,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(812)
		::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		::zpp_nape::space::ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(813)
		this->next = ret->next;
		HX_STACK_LINE(815)
		ret->_inuse = false;
		HX_STACK_LINE(818)
		::zpp_nape::space::ZPP_CallbackSet tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(818)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(818)
		if ((tmp2)){
			HX_STACK_LINE(818)
			this->pushmod = true;
		}
		HX_STACK_LINE(819)
		this->modified = true;
		HX_STACK_LINE(820)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_pop,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","pop_unsafe",0x9c174113,"zpp_nape.space.ZPP_CallbackSet.pop_unsafe","zpp_nape/space/Space.hx",822,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(823)
	::zpp_nape::space::ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(823)
	{
		HX_STACK_LINE(823)
		::zpp_nape::space::ZPP_CallbackSet tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		::zpp_nape::space::ZPP_CallbackSet ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(823)
		this->pop();
		HX_STACK_LINE(823)
		tmp = ret;
	}
	HX_STACK_LINE(823)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,pop_unsafe,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_pop_unsafe",0xac9ba327,"zpp_nape.space.ZPP_CallbackSet.inlined_pop_unsafe","zpp_nape/space/Space.hx",827,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(836)
	::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(836)
	::zpp_nape::space::ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(837)
	this->pop();
	HX_STACK_LINE(838)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(838)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_pop_unsafe,return )

Void ZPP_CallbackSet_obj::remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","remove",0x99a45583,"zpp_nape.space.ZPP_CallbackSet.remove","zpp_nape/space/Space.hx",849,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(849)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(849)
		::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(849)
		::zpp_nape::space::ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(849)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(849)
		while((true)){
			HX_STACK_LINE(849)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(849)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(849)
			if ((tmp2)){
				HX_STACK_LINE(849)
				break;
			}
			HX_STACK_LINE(849)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(849)
			if ((tmp3)){
				HX_STACK_LINE(849)
				{
					HX_STACK_LINE(849)
					::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(849)
					::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(849)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(849)
					if ((tmp4)){
						HX_STACK_LINE(849)
						::zpp_nape::space::ZPP_CallbackSet tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(849)
						old = tmp5;
						HX_STACK_LINE(849)
						ret1 = old->next;
						HX_STACK_LINE(849)
						this->next = ret1;
						HX_STACK_LINE(849)
						::zpp_nape::space::ZPP_CallbackSet tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(849)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(849)
						if ((tmp7)){
							HX_STACK_LINE(849)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(849)
						old = pre->next;
						HX_STACK_LINE(849)
						ret1 = old->next;
						HX_STACK_LINE(849)
						pre->next = ret1;
						HX_STACK_LINE(849)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(849)
						if ((tmp5)){
							HX_STACK_LINE(849)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(849)
					old->_inuse = false;
					HX_STACK_LINE(849)
					this->modified = true;
					HX_STACK_LINE(849)
					(this->length)--;
					HX_STACK_LINE(849)
					this->pushmod = true;
					HX_STACK_LINE(849)
					ret1;
				}
				HX_STACK_LINE(849)
				ret = true;
				HX_STACK_LINE(849)
				break;
			}
			HX_STACK_LINE(849)
			pre = cur;
			HX_STACK_LINE(849)
			cur = cur->next;
		}
		HX_STACK_LINE(849)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,remove,(void))

bool ZPP_CallbackSet_obj::try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","try_remove",0xb34176c7,"zpp_nape.space.ZPP_CallbackSet.try_remove","zpp_nape/space/Space.hx",851,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(860)
	::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(861)
	::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(861)
	::zpp_nape::space::ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(862)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(863)
	while((true)){
		HX_STACK_LINE(863)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(863)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(863)
		if ((tmp2)){
			HX_STACK_LINE(863)
			break;
		}
		HX_STACK_LINE(864)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(864)
		if ((tmp3)){
			HX_STACK_LINE(865)
			::zpp_nape::space::ZPP_CallbackSet tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(865)
			this->erase(tmp4);
			HX_STACK_LINE(866)
			ret = true;
			HX_STACK_LINE(867)
			break;
		}
		HX_STACK_LINE(869)
		pre = cur;
		HX_STACK_LINE(870)
		cur = cur->next;
	}
	HX_STACK_LINE(872)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(872)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,try_remove,return )

Void ZPP_CallbackSet_obj::inlined_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_remove",0x14211d97,"zpp_nape.space.ZPP_CallbackSet.inlined_remove","zpp_nape/space/Space.hx",885,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(885)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(885)
		::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(885)
		::zpp_nape::space::ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(885)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(885)
		while((true)){
			HX_STACK_LINE(885)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(885)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(885)
			if ((tmp2)){
				HX_STACK_LINE(885)
				break;
			}
			HX_STACK_LINE(885)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(885)
			if ((tmp3)){
				HX_STACK_LINE(885)
				{
					HX_STACK_LINE(885)
					::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(885)
					::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(885)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(885)
					if ((tmp4)){
						HX_STACK_LINE(885)
						::zpp_nape::space::ZPP_CallbackSet tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(885)
						old = tmp5;
						HX_STACK_LINE(885)
						ret1 = old->next;
						HX_STACK_LINE(885)
						this->next = ret1;
						HX_STACK_LINE(885)
						::zpp_nape::space::ZPP_CallbackSet tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(885)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(885)
						if ((tmp7)){
							HX_STACK_LINE(885)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(885)
						old = pre->next;
						HX_STACK_LINE(885)
						ret1 = old->next;
						HX_STACK_LINE(885)
						pre->next = ret1;
						HX_STACK_LINE(885)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(885)
						if ((tmp5)){
							HX_STACK_LINE(885)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(885)
					old->_inuse = false;
					HX_STACK_LINE(885)
					this->modified = true;
					HX_STACK_LINE(885)
					(this->length)--;
					HX_STACK_LINE(885)
					this->pushmod = true;
					HX_STACK_LINE(885)
					ret1;
				}
				HX_STACK_LINE(885)
				ret = true;
				HX_STACK_LINE(885)
				break;
			}
			HX_STACK_LINE(885)
			pre = cur;
			HX_STACK_LINE(885)
			cur = cur->next;
		}
		HX_STACK_LINE(885)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_remove,(void))

bool ZPP_CallbackSet_obj::inlined_try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_try_remove",0xc3c5d8db,"zpp_nape.space.ZPP_CallbackSet.inlined_try_remove","zpp_nape/space/Space.hx",889,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(898)
	::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(899)
	::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(899)
	::zpp_nape::space::ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(900)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(901)
	while((true)){
		HX_STACK_LINE(901)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(901)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(901)
		if ((tmp2)){
			HX_STACK_LINE(901)
			break;
		}
		HX_STACK_LINE(902)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(902)
		if ((tmp3)){
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(903)
				::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(903)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(903)
				if ((tmp4)){
					HX_STACK_LINE(903)
					::zpp_nape::space::ZPP_CallbackSet tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(903)
					old = tmp5;
					HX_STACK_LINE(903)
					ret1 = old->next;
					HX_STACK_LINE(903)
					this->next = ret1;
					HX_STACK_LINE(903)
					::zpp_nape::space::ZPP_CallbackSet tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(903)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(903)
					if ((tmp7)){
						HX_STACK_LINE(903)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(903)
					old = pre->next;
					HX_STACK_LINE(903)
					ret1 = old->next;
					HX_STACK_LINE(903)
					pre->next = ret1;
					HX_STACK_LINE(903)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(903)
					if ((tmp5)){
						HX_STACK_LINE(903)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(903)
				old->_inuse = false;
				HX_STACK_LINE(903)
				this->modified = true;
				HX_STACK_LINE(903)
				(this->length)--;
				HX_STACK_LINE(903)
				this->pushmod = true;
				HX_STACK_LINE(903)
				ret1;
			}
			HX_STACK_LINE(904)
			ret = true;
			HX_STACK_LINE(905)
			break;
		}
		HX_STACK_LINE(907)
		pre = cur;
		HX_STACK_LINE(908)
		cur = cur->next;
	}
	HX_STACK_LINE(910)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(910)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_try_remove,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::erase( ::zpp_nape::space::ZPP_CallbackSet pre){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","erase",0x22465c87,"zpp_nape.space.ZPP_CallbackSet.erase","zpp_nape/space/Space.hx",912,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(913)
	::zpp_nape::space::ZPP_CallbackSet tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(913)
	{
		HX_STACK_LINE(913)
		::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(913)
		::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(913)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(913)
		if ((tmp1)){
			HX_STACK_LINE(913)
			::zpp_nape::space::ZPP_CallbackSet tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(913)
			old = tmp2;
			HX_STACK_LINE(913)
			ret = old->next;
			HX_STACK_LINE(913)
			this->next = ret;
			HX_STACK_LINE(913)
			::zpp_nape::space::ZPP_CallbackSet tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(913)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(913)
			if ((tmp4)){
				HX_STACK_LINE(913)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(913)
			old = pre->next;
			HX_STACK_LINE(913)
			ret = old->next;
			HX_STACK_LINE(913)
			pre->next = ret;
			HX_STACK_LINE(913)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(913)
			if ((tmp2)){
				HX_STACK_LINE(913)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(913)
		old->_inuse = false;
		HX_STACK_LINE(913)
		this->modified = true;
		HX_STACK_LINE(913)
		(this->length)--;
		HX_STACK_LINE(913)
		this->pushmod = true;
		HX_STACK_LINE(913)
		tmp = ret;
	}
	HX_STACK_LINE(913)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,erase,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_erase( ::zpp_nape::space::ZPP_CallbackSet pre){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_erase",0x96c532f3,"zpp_nape.space.ZPP_CallbackSet.inlined_erase","zpp_nape/space/Space.hx",917,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(926)
	::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(927)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(928)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(928)
	if ((tmp)){
		HX_STACK_LINE(929)
		::zpp_nape::space::ZPP_CallbackSet tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(929)
		old = tmp1;
		HX_STACK_LINE(930)
		ret = old->next;
		HX_STACK_LINE(931)
		this->next = ret;
		HX_STACK_LINE(932)
		::zpp_nape::space::ZPP_CallbackSet tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(932)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(932)
		if ((tmp3)){
			HX_STACK_LINE(932)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(935)
		old = pre->next;
		HX_STACK_LINE(936)
		ret = old->next;
		HX_STACK_LINE(937)
		pre->next = ret;
		HX_STACK_LINE(938)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(938)
		if ((tmp1)){
			HX_STACK_LINE(938)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(941)
	old->_inuse = false;
	HX_STACK_LINE(944)
	this->modified = true;
	HX_STACK_LINE(945)
	(this->length)--;
	HX_STACK_LINE(946)
	this->pushmod = true;
	HX_STACK_LINE(947)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(947)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_erase,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::splice( ::zpp_nape::space::ZPP_CallbackSet pre,int n){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","splice",0x54ba3ebb,"zpp_nape.space.ZPP_CallbackSet.splice","zpp_nape/space/Space.hx",949,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(950)
	while((true)){
		HX_STACK_LINE(950)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(950)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(950)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(950)
		if ((tmp1)){
			HX_STACK_LINE(950)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(950)
			tmp2 = false;
		}
		HX_STACK_LINE(950)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(950)
		if ((tmp3)){
			HX_STACK_LINE(950)
			break;
		}
		HX_STACK_LINE(950)
		::zpp_nape::space::ZPP_CallbackSet tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(950)
		this->erase(tmp4);
	}
	HX_STACK_LINE(951)
	::zpp_nape::space::ZPP_CallbackSet tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(951)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,splice,return )

Void ZPP_CallbackSet_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","clear",0xf784e52e,"zpp_nape.space.ZPP_CallbackSet.clear","zpp_nape/space/Space.hx",954,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,clear,(void))

Void ZPP_CallbackSet_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_clear",0x6c03bb9a,"zpp_nape.space.ZPP_CallbackSet.inlined_clear","zpp_nape/space/Space.hx",959,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_clear,(void))

Void ZPP_CallbackSet_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","reverse",0xfe229703,"zpp_nape.space.ZPP_CallbackSet.reverse","zpp_nape/space/Space.hx",964,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(965)
		::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(965)
		::zpp_nape::space::ZPP_CallbackSet cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(966)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(967)
		while((true)){
			HX_STACK_LINE(967)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(967)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(967)
			if ((tmp2)){
				HX_STACK_LINE(967)
				break;
			}
			HX_STACK_LINE(968)
			::zpp_nape::space::ZPP_CallbackSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(969)
			cur->next = pre;
			HX_STACK_LINE(970)
			this->next = cur;
			HX_STACK_LINE(971)
			pre = cur;
			HX_STACK_LINE(972)
			cur = nx;
		}
		HX_STACK_LINE(974)
		this->modified = true;
		HX_STACK_LINE(975)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,reverse,(void))

bool ZPP_CallbackSet_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","empty",0x1f03ae2e,"zpp_nape.space.ZPP_CallbackSet.empty","zpp_nape/space/Space.hx",979,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(980)
	::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(980)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,empty,return )

int ZPP_CallbackSet_obj::size( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","size",0xc7f23c40,"zpp_nape.space.ZPP_CallbackSet.size","zpp_nape/space/Space.hx",984,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(985)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(985)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,size,return )

bool ZPP_CallbackSet_obj::has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","has",0x2b56d8bb,"zpp_nape.space.ZPP_CallbackSet.has","zpp_nape/space/Space.hx",987,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(988)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(988)
	{
		HX_STACK_LINE(988)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(988)
		{
			HX_STACK_LINE(988)
			ret = false;
			HX_STACK_LINE(988)
			{
				HX_STACK_LINE(988)
				::zpp_nape::space::ZPP_CallbackSet tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(988)
				::zpp_nape::space::ZPP_CallbackSet cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(988)
				while((true)){
					HX_STACK_LINE(988)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(988)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(988)
					if ((tmp3)){
						HX_STACK_LINE(988)
						break;
					}
					HX_STACK_LINE(988)
					::zpp_nape::space::ZPP_CallbackSet npite = cx_ite;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(988)
					{
						HX_STACK_LINE(988)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(988)
						if ((tmp4)){
							HX_STACK_LINE(988)
							ret = true;
							HX_STACK_LINE(988)
							break;
						}
					}
					HX_STACK_LINE(988)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(988)
		tmp = ret;
	}
	HX_STACK_LINE(988)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,has,return )

bool ZPP_CallbackSet_obj::inlined_has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","inlined_has",0x4174fc27,"zpp_nape.space.ZPP_CallbackSet.inlined_has","zpp_nape/space/Space.hx",992,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1001)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1002)
	{
		HX_STACK_LINE(1003)
		ret = false;
		HX_STACK_LINE(1004)
		{
			HX_STACK_LINE(1005)
			::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1005)
			::zpp_nape::space::ZPP_CallbackSet cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1006)
			while((true)){
				HX_STACK_LINE(1006)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1006)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1006)
				if ((tmp2)){
					HX_STACK_LINE(1006)
					break;
				}
				HX_STACK_LINE(1007)
				::zpp_nape::space::ZPP_CallbackSet npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1008)
				{
					HX_STACK_LINE(1009)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1009)
					if ((tmp3)){
						HX_STACK_LINE(1010)
						ret = true;
						HX_STACK_LINE(1011)
						break;
					}
				}
				HX_STACK_LINE(1014)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1018)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1018)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_has,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::front( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","front",0xb5b78c4a,"zpp_nape.space.ZPP_CallbackSet.front","zpp_nape/space/Space.hx",1022,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1023)
	::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1023)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,front,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::back( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","back",0xbcaf75a6,"zpp_nape.space.ZPP_CallbackSet.back","zpp_nape/space/Space.hx",1025,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1026)
	::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1026)
	::zpp_nape::space::ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1027)
	::zpp_nape::space::ZPP_CallbackSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1028)
	while((true)){
		HX_STACK_LINE(1028)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1028)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1028)
		if ((tmp2)){
			HX_STACK_LINE(1028)
			break;
		}
		HX_STACK_LINE(1029)
		ret = cur;
		HX_STACK_LINE(1030)
		cur = cur->next;
	}
	HX_STACK_LINE(1032)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1032)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,back,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","iterator_at",0x4613ec45,"zpp_nape.space.ZPP_CallbackSet.iterator_at","zpp_nape/space/Space.hx",1034,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1043)
	::zpp_nape::space::ZPP_CallbackSet tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1043)
	::zpp_nape::space::ZPP_CallbackSet ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1044)
	while((true)){
		HX_STACK_LINE(1044)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1044)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1044)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1044)
		if ((tmp2)){
			HX_STACK_LINE(1044)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(1044)
			tmp3 = false;
		}
		HX_STACK_LINE(1044)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1044)
		if ((tmp4)){
			HX_STACK_LINE(1044)
			break;
		}
		HX_STACK_LINE(1044)
		ret = ret->next;
	}
	HX_STACK_LINE(1045)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1045)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,iterator_at,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","at",0xe258c2b2,"zpp_nape.space.ZPP_CallbackSet.at","zpp_nape/space/Space.hx",1047,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1056)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1056)
	::zpp_nape::space::ZPP_CallbackSet tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1056)
	::zpp_nape::space::ZPP_CallbackSet it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1057)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1057)
	::zpp_nape::space::ZPP_CallbackSet tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1057)
	if ((tmp2)){
		HX_STACK_LINE(1057)
		tmp3 = it;
	}
	else{
		HX_STACK_LINE(1057)
		tmp3 = null();
	}
	HX_STACK_LINE(1057)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,at,return )

Void ZPP_CallbackSet_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","free",0xbf61382b,"zpp_nape.space.ZPP_CallbackSet.free","zpp_nape/space/Space.hx",1087,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1088)
		::zpp_nape::phys::ZPP_Interactor tmp = this->int2 = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1088)
		this->int1 = tmp;
		HX_STACK_LINE(1089)
		int tmp1 = this->di = (int)-1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1089)
		this->id = tmp1;
		HX_STACK_LINE(1090)
		this->freed = true;
		HX_STACK_LINE(1091)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,free,(void))

Void ZPP_CallbackSet_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","alloc",0xd0bd1816,"zpp_nape.space.ZPP_CallbackSet.alloc","zpp_nape/space/Space.hx",1102,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1103)
		this->freed = false;
		HX_STACK_LINE(1104)
		this->lazydel = false;
		HX_STACK_LINE(1106)
		int tmp = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1106)
		this->COLLISIONstate = tmp;
		HX_STACK_LINE(1107)
		this->COLLISIONstamp = (int)0;
		HX_STACK_LINE(1108)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1108)
		this->SENSORstate = tmp1;
		HX_STACK_LINE(1109)
		this->SENSORstamp = (int)0;
		HX_STACK_LINE(1110)
		int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1110)
		this->FLUIDstate = tmp2;
		HX_STACK_LINE(1111)
		this->FLUIDstamp = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,alloc,(void))

bool ZPP_CallbackSet_obj::add_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","add_arb",0x739fb7d4,"zpp_nape.space.ZPP_CallbackSet.add_arb","zpp_nape/space/Space.hx",1117,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1118)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1118)
	{
		HX_STACK_LINE(1118)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1118)
		{
			HX_STACK_LINE(1118)
			ret = false;
			HX_STACK_LINE(1118)
			{
				HX_STACK_LINE(1118)
				::zpp_nape::util::ZNPList_ZPP_Arbiter tmp1 = this->arbiters;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1118)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1118)
				while((true)){
					HX_STACK_LINE(1118)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1118)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1118)
					if ((tmp3)){
						HX_STACK_LINE(1118)
						break;
					}
					HX_STACK_LINE(1118)
					::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(1118)
					{
						HX_STACK_LINE(1118)
						bool tmp4 = (npite == x);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1118)
						if ((tmp4)){
							HX_STACK_LINE(1118)
							ret = true;
							HX_STACK_LINE(1118)
							break;
						}
					}
					HX_STACK_LINE(1118)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(1118)
		tmp = ret;
	}
	HX_STACK_LINE(1118)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1118)
	if ((tmp1)){
		HX_STACK_LINE(1119)
		{
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp2 = this->arbiters;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1119)
			{
				HX_STACK_LINE(1119)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1119)
				{
					HX_STACK_LINE(1119)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1119)
					bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1119)
					if ((tmp5)){
						HX_STACK_LINE(1119)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp6 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1119)
						ret = tmp6;
					}
					else{
						HX_STACK_LINE(1119)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp6 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1119)
						ret = tmp6;
						HX_STACK_LINE(1119)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1119)
						ret->next = null();
					}
					HX_STACK_LINE(1119)
					Dynamic();
				}
				HX_STACK_LINE(1119)
				ret->elt = x;
				HX_STACK_LINE(1119)
				tmp3 = ret;
			}
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp3;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(1119)
			temp->next = _this->head;
			HX_STACK_LINE(1119)
			_this->head = temp;
			HX_STACK_LINE(1119)
			_this->modified = true;
			HX_STACK_LINE(1119)
			(_this->length)++;
			HX_STACK_LINE(1119)
			x;
		}
		HX_STACK_LINE(1120)
		return true;
	}
	else{
		HX_STACK_LINE(1122)
		return false;
	}
	HX_STACK_LINE(1118)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,add_arb,return )

bool ZPP_CallbackSet_obj::try_remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","try_remove_arb",0x04072999,"zpp_nape.space.ZPP_CallbackSet.try_remove_arb","zpp_nape/space/Space.hx",1124,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1125)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1125)
	{
		HX_STACK_LINE(1125)
		::zpp_nape::util::ZNPList_ZPP_Arbiter tmp1 = this->arbiters;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1125)
		::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1125)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1125)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1125)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1125)
		while((true)){
			HX_STACK_LINE(1125)
			bool tmp2 = (cur != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1125)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1125)
			if ((tmp3)){
				HX_STACK_LINE(1125)
				break;
			}
			HX_STACK_LINE(1125)
			bool tmp4 = (cur->elt == x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1125)
			if ((tmp4)){
				HX_STACK_LINE(1125)
				{
					HX_STACK_LINE(1125)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(1125)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1125)
					bool tmp5 = (pre == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1125)
					if ((tmp5)){
						HX_STACK_LINE(1125)
						old = _this->head;
						HX_STACK_LINE(1125)
						ret1 = old->next;
						HX_STACK_LINE(1125)
						_this->head = ret1;
						HX_STACK_LINE(1125)
						bool tmp6 = (_this->head == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1125)
						if ((tmp6)){
							HX_STACK_LINE(1125)
							_this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(1125)
						old = pre->next;
						HX_STACK_LINE(1125)
						ret1 = old->next;
						HX_STACK_LINE(1125)
						pre->next = ret1;
						HX_STACK_LINE(1125)
						bool tmp6 = (ret1 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1125)
						if ((tmp6)){
							HX_STACK_LINE(1125)
							_this->pushmod = true;
						}
					}
					HX_STACK_LINE(1125)
					{
						HX_STACK_LINE(1125)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1125)
						o->elt = null();
						HX_STACK_LINE(1125)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp6 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1125)
						o->next = tmp6;
						HX_STACK_LINE(1125)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1125)
					_this->modified = true;
					HX_STACK_LINE(1125)
					(_this->length)--;
					HX_STACK_LINE(1125)
					_this->pushmod = true;
					HX_STACK_LINE(1125)
					ret1;
				}
				HX_STACK_LINE(1125)
				ret = true;
				HX_STACK_LINE(1125)
				break;
			}
			HX_STACK_LINE(1125)
			pre = cur;
			HX_STACK_LINE(1125)
			cur = cur->next;
		}
		HX_STACK_LINE(1125)
		tmp = ret;
	}
	HX_STACK_LINE(1125)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,try_remove_arb,return )

Void ZPP_CallbackSet_obj::remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","remove_arb",0xf7861655,"zpp_nape.space.ZPP_CallbackSet.remove_arb","zpp_nape/space/Space.hx",1128,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1128)
		::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = this->arbiters;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1128)
		::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1128)
		{
			HX_STACK_LINE(1128)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1128)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1128)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1128)
			while((true)){
				HX_STACK_LINE(1128)
				bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1128)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1128)
				if ((tmp2)){
					HX_STACK_LINE(1128)
					break;
				}
				HX_STACK_LINE(1128)
				bool tmp3 = (cur->elt == x);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1128)
				if ((tmp3)){
					HX_STACK_LINE(1128)
					{
						HX_STACK_LINE(1128)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1128)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1128)
						bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1128)
						if ((tmp4)){
							HX_STACK_LINE(1128)
							old = _this->head;
							HX_STACK_LINE(1128)
							ret1 = old->next;
							HX_STACK_LINE(1128)
							_this->head = ret1;
							HX_STACK_LINE(1128)
							bool tmp5 = (_this->head == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1128)
							if ((tmp5)){
								HX_STACK_LINE(1128)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1128)
							old = pre->next;
							HX_STACK_LINE(1128)
							ret1 = old->next;
							HX_STACK_LINE(1128)
							pre->next = ret1;
							HX_STACK_LINE(1128)
							bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1128)
							if ((tmp5)){
								HX_STACK_LINE(1128)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1128)
						{
							HX_STACK_LINE(1128)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1128)
							o->elt = null();
							HX_STACK_LINE(1128)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1128)
							o->next = tmp5;
							HX_STACK_LINE(1128)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1128)
						_this->modified = true;
						HX_STACK_LINE(1128)
						(_this->length)--;
						HX_STACK_LINE(1128)
						_this->pushmod = true;
						HX_STACK_LINE(1128)
						ret1;
					}
					HX_STACK_LINE(1128)
					ret = true;
					HX_STACK_LINE(1128)
					break;
				}
				HX_STACK_LINE(1128)
				pre = cur;
				HX_STACK_LINE(1128)
				cur = cur->next;
			}
			HX_STACK_LINE(1128)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,remove_arb,(void))

bool ZPP_CallbackSet_obj::empty_arb( int type){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","empty_arb",0xd0f6a080,"zpp_nape.space.ZPP_CallbackSet.empty_arb","zpp_nape/space/Space.hx",1130,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1131)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(1132)
	{
		HX_STACK_LINE(1133)
		retvar = true;
		HX_STACK_LINE(1134)
		{
			HX_STACK_LINE(1135)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = this->arbiters;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1135)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1136)
			while((true)){
				HX_STACK_LINE(1136)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1136)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1136)
				if ((tmp2)){
					HX_STACK_LINE(1136)
					break;
				}
				HX_STACK_LINE(1137)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1138)
				{
					HX_STACK_LINE(1139)
					int tmp3 = (int(x->type) & int(type));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1139)
					bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1139)
					if ((tmp4)){
						HX_STACK_LINE(1141)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(1142)
						continue;
					}
					else{
						HX_STACK_LINE(1146)
						retvar = false;
						HX_STACK_LINE(1147)
						break;
					}
				}
				HX_STACK_LINE(1150)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1154)
	bool tmp = retvar;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,empty_arb,return )

bool ZPP_CallbackSet_obj::really_empty( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","really_empty",0x47b253f8,"zpp_nape.space.ZPP_CallbackSet.really_empty","zpp_nape/space/Space.hx",1158,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1159)
	::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = this->arbiters;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1159)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = tmp->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1159)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1159)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,really_empty,return )

bool ZPP_CallbackSet_obj::sleeping( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","sleeping",0xeeff1f2a,"zpp_nape.space.ZPP_CallbackSet.sleeping","zpp_nape/space/Space.hx",1163,0x2b65ed03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1164)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1165)
	{
		HX_STACK_LINE(1166)
		ret = true;
		HX_STACK_LINE(1167)
		{
			HX_STACK_LINE(1168)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = this->arbiters;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1168)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1169)
			while((true)){
				HX_STACK_LINE(1169)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1169)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1169)
				if ((tmp2)){
					HX_STACK_LINE(1169)
					break;
				}
				HX_STACK_LINE(1170)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1171)
				{
					HX_STACK_LINE(1172)
					bool tmp3 = x->sleeping;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1172)
					if ((tmp3)){
						HX_STACK_LINE(1174)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(1175)
						continue;
					}
					else{
						HX_STACK_LINE(1179)
						ret = false;
						HX_STACK_LINE(1180)
						break;
					}
				}
				HX_STACK_LINE(1183)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1187)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1187)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,sleeping,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::get( ::zpp_nape::phys::ZPP_Interactor i1,::zpp_nape::phys::ZPP_Interactor i2){
	HX_STACK_FRAME("zpp_nape.space.ZPP_CallbackSet","get",0x2b5619f7,"zpp_nape.space.ZPP_CallbackSet.get","zpp_nape/space/Space.hx",650,0x2b65ed03)
	HX_STACK_ARG(i1,"i1")
	HX_STACK_ARG(i2,"i2")
	HX_STACK_LINE(651)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(652)
	{
		HX_STACK_LINE(653)
		::zpp_nape::space::ZPP_CallbackSet tmp = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(653)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		if ((tmp1)){
			HX_STACK_LINE(654)
			::zpp_nape::space::ZPP_CallbackSet tmp2 = ::zpp_nape::space::ZPP_CallbackSet_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(654)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(660)
			::zpp_nape::space::ZPP_CallbackSet tmp2 = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(660)
			ret = tmp2;
			HX_STACK_LINE(661)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool = ret->next;
			HX_STACK_LINE(662)
			ret->next = null();
		}
		HX_STACK_LINE(667)
		{
			HX_STACK_LINE(667)
			ret->freed = false;
			HX_STACK_LINE(667)
			ret->lazydel = false;
			HX_STACK_LINE(667)
			int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(667)
			ret->COLLISIONstate = tmp2;
			HX_STACK_LINE(667)
			ret->COLLISIONstamp = (int)0;
			HX_STACK_LINE(667)
			int tmp3 = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(667)
			ret->SENSORstate = tmp3;
			HX_STACK_LINE(667)
			ret->SENSORstamp = (int)0;
			HX_STACK_LINE(667)
			int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(667)
			ret->FLUIDstate = tmp4;
			HX_STACK_LINE(667)
			ret->FLUIDstamp = (int)0;
		}
	}
	HX_STACK_LINE(677)
	bool tmp = (i1->id < i2->id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(677)
	if ((tmp)){
		HX_STACK_LINE(678)
		ret->int1 = i1;
		HX_STACK_LINE(679)
		ret->int2 = i2;
	}
	else{
		HX_STACK_LINE(682)
		ret->int1 = i2;
		HX_STACK_LINE(683)
		ret->int2 = i1;
	}
	HX_STACK_LINE(685)
	int tmp1 = ret->int1->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(685)
	ret->id = tmp1;
	HX_STACK_LINE(686)
	int tmp2 = ret->int2->id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(686)
	ret->di = tmp2;
	HX_STACK_LINE(695)
	::zpp_nape::space::ZPP_CallbackSet tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(695)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,get,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::zpp_pool;


ZPP_CallbackSet_obj::ZPP_CallbackSet_obj()
{
}

void ZPP_CallbackSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CallbackSet);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(int1,"int1");
	HX_MARK_MEMBER_NAME(int2,"int2");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(COLLISIONstate,"COLLISIONstate");
	HX_MARK_MEMBER_NAME(COLLISIONstamp,"COLLISIONstamp");
	HX_MARK_MEMBER_NAME(SENSORstate,"SENSORstate");
	HX_MARK_MEMBER_NAME(SENSORstamp,"SENSORstamp");
	HX_MARK_MEMBER_NAME(FLUIDstate,"FLUIDstate");
	HX_MARK_MEMBER_NAME(FLUIDstamp,"FLUIDstamp");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(freed,"freed");
	HX_MARK_MEMBER_NAME(lazydel,"lazydel");
	HX_MARK_END_CLASS();
}

void ZPP_CallbackSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(int1,"int1");
	HX_VISIT_MEMBER_NAME(int2,"int2");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(COLLISIONstate,"COLLISIONstate");
	HX_VISIT_MEMBER_NAME(COLLISIONstamp,"COLLISIONstamp");
	HX_VISIT_MEMBER_NAME(SENSORstate,"SENSORstate");
	HX_VISIT_MEMBER_NAME(SENSORstamp,"SENSORstamp");
	HX_VISIT_MEMBER_NAME(FLUIDstate,"FLUIDstate");
	HX_VISIT_MEMBER_NAME(FLUIDstamp,"FLUIDstamp");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(freed,"freed");
	HX_VISIT_MEMBER_NAME(lazydel,"lazydel");
}

Dynamic ZPP_CallbackSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"int1") ) { return int1; }
		if (HX_FIELD_EQ(inName,"int2") ) { return int2; }
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
		if (HX_FIELD_EQ(inName,"freed") ) { return freed; }
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
		if (HX_FIELD_EQ(inName,"lazydel") ) { return lazydel; }
		if (HX_FIELD_EQ(inName,"add_arb") ) { return add_arb_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"arbiters") ) { return arbiters; }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"empty_arb") ) { return empty_arb_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLUIDstate") ) { return FLUIDstate; }
		if (HX_FIELD_EQ(inName,"FLUIDstamp") ) { return FLUIDstamp; }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"remove_arb") ) { return remove_arb_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SENSORstate") ) { return SENSORstate; }
		if (HX_FIELD_EQ(inName,"SENSORstamp") ) { return SENSORstamp; }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"really_empty") ) { return really_empty_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"COLLISIONstate") ) { return COLLISIONstate; }
		if (HX_FIELD_EQ(inName,"COLLISIONstamp") ) { return COLLISIONstamp; }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove_arb") ) { return try_remove_arb_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_CallbackSet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_CallbackSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"int1") ) { int1=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int2") ) { int2=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"freed") ) { freed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lazydel") ) { lazydel=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLUIDstate") ) { FLUIDstate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLUIDstamp") ) { FLUIDstamp=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SENSORstate") ) { SENSORstate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SENSORstamp") ) { SENSORstamp=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"COLLISIONstate") ) { COLLISIONstate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLLISIONstamp") ) { COLLISIONstamp=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_CallbackSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return true; }
	}
	return false;
}

void ZPP_CallbackSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("di","\x85","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("int1","\x62","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("int2","\x63","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21"));
	outFields->push(HX_HCSTRING("COLLISIONstate","\x7f","\xf4","\x84","\x52"));
	outFields->push(HX_HCSTRING("COLLISIONstamp","\x71","\xee","\x84","\x52"));
	outFields->push(HX_HCSTRING("SENSORstate","\x97","\xc5","\x86","\x8f"));
	outFields->push(HX_HCSTRING("SENSORstamp","\x89","\xbf","\x86","\x8f"));
	outFields->push(HX_HCSTRING("FLUIDstate","\xe7","\xb3","\xb6","\xc1"));
	outFields->push(HX_HCSTRING("FLUIDstamp","\xd9","\xad","\xb6","\xc1"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("freed","\x38","\x7a","\x86","\x06"));
	outFields->push(HX_HCSTRING("lazydel","\xd7","\xe9","\xd5","\xe2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,di),HX_HCSTRING("di","\x85","\x57","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(ZPP_CallbackSet_obj,int1),HX_HCSTRING("int1","\x62","\x44","\xbb","\x45")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(ZPP_CallbackSet_obj,int2),HX_HCSTRING("int2","\x63","\x44","\xbb","\x45")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Arbiter*/ ,(int)offsetof(ZPP_CallbackSet_obj,arbiters),HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,COLLISIONstate),HX_HCSTRING("COLLISIONstate","\x7f","\xf4","\x84","\x52")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,COLLISIONstamp),HX_HCSTRING("COLLISIONstamp","\x71","\xee","\x84","\x52")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,SENSORstate),HX_HCSTRING("SENSORstate","\x97","\xc5","\x86","\x8f")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,SENSORstamp),HX_HCSTRING("SENSORstamp","\x89","\xbf","\x86","\x8f")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,FLUIDstate),HX_HCSTRING("FLUIDstate","\xe7","\xb3","\xb6","\xc1")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,FLUIDstamp),HX_HCSTRING("FLUIDstamp","\xd9","\xad","\xb6","\xc1")},
	{hx::fsObject /*::zpp_nape::space::ZPP_CallbackSet*/ ,(int)offsetof(ZPP_CallbackSet_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,_inuse),HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZPP_CallbackSet_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,freed),HX_HCSTRING("freed","\x38","\x7a","\x86","\x06")},
	{hx::fsBool,(int)offsetof(ZPP_CallbackSet_obj,lazydel),HX_HCSTRING("lazydel","\xd7","\xe9","\xd5","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_CallbackSet*/ ,(void *) &ZPP_CallbackSet_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("di","\x85","\x57","\x00","\x00"),
	HX_HCSTRING("int1","\x62","\x44","\xbb","\x45"),
	HX_HCSTRING("int2","\x63","\x44","\xbb","\x45"),
	HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21"),
	HX_HCSTRING("COLLISIONstate","\x7f","\xf4","\x84","\x52"),
	HX_HCSTRING("COLLISIONstamp","\x71","\xee","\x84","\x52"),
	HX_HCSTRING("SENSORstate","\x97","\xc5","\x86","\x8f"),
	HX_HCSTRING("SENSORstamp","\x89","\xbf","\x86","\x8f"),
	HX_HCSTRING("FLUIDstate","\xe7","\xb3","\xb6","\xc1"),
	HX_HCSTRING("FLUIDstamp","\xd9","\xad","\xb6","\xc1"),
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
	HX_HCSTRING("freed","\x38","\x7a","\x86","\x06"),
	HX_HCSTRING("lazydel","\xd7","\xe9","\xd5","\xe2"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("add_arb","\xf3","\x59","\x79","\x90"),
	HX_HCSTRING("try_remove_arb","\x5a","\x99","\xa1","\xfd"),
	HX_HCSTRING("remove_arb","\x96","\x51","\x5b","\xd1"),
	HX_HCSTRING("empty_arb","\x5f","\x48","\x14","\x11"),
	HX_HCSTRING("really_empty","\x79","\xa1","\xbd","\x2d"),
	HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CallbackSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CallbackSet_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CallbackSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CallbackSet_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_CallbackSet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_CallbackSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_CallbackSet","\x4f","\x75","\x99","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_CallbackSet_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_CallbackSet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_CallbackSet_obj >;
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

void ZPP_CallbackSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
