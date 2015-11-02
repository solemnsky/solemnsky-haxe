#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_IContact_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","new",0xcc755907,"zpp_nape.dynamics.ZPP_IContact.new","zpp_nape/dynamics/Contact.hx",625,0xe7cc00d7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(655)
	this->length = (int)0;
	HX_STACK_LINE(654)
	this->pushmod = false;
	HX_STACK_LINE(653)
	this->modified = false;
	HX_STACK_LINE(652)
	this->_inuse = false;
	HX_STACK_LINE(641)
	this->next = null();
	HX_STACK_LINE(639)
	this->lr2y = ((Float)0.0);
	HX_STACK_LINE(638)
	this->lr2x = ((Float)0.0);
	HX_STACK_LINE(637)
	this->lr1y = ((Float)0.0);
	HX_STACK_LINE(636)
	this->lr1x = ((Float)0.0);
	HX_STACK_LINE(635)
	this->jtAcc = ((Float)0.0);
	HX_STACK_LINE(634)
	this->jnAcc = ((Float)0.0);
	HX_STACK_LINE(633)
	this->friction = ((Float)0.0);
	HX_STACK_LINE(632)
	this->bounce = ((Float)0.0);
	HX_STACK_LINE(631)
	this->tMass = ((Float)0.0);
	HX_STACK_LINE(630)
	this->nMass = ((Float)0.0);
	HX_STACK_LINE(629)
	this->r2y = ((Float)0.0);
	HX_STACK_LINE(628)
	this->r2x = ((Float)0.0);
	HX_STACK_LINE(627)
	this->r1y = ((Float)0.0);
	HX_STACK_LINE(626)
	this->r1x = ((Float)0.0);
}
;
	return null();
}

//ZPP_IContact_obj::~ZPP_IContact_obj() { }

Dynamic ZPP_IContact_obj::__CreateEmpty() { return  new ZPP_IContact_obj; }
hx::ObjectPtr< ZPP_IContact_obj > ZPP_IContact_obj::__new()
{  hx::ObjectPtr< ZPP_IContact_obj > _result_ = new ZPP_IContact_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_IContact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_IContact_obj > _result_ = new ZPP_IContact_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","elem",0x144ae208,"zpp_nape.dynamics.ZPP_IContact.elem","zpp_nape/dynamics/Contact.hx",645,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(645)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,elem,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","begin",0xee682a90,"zpp_nape.dynamics.ZPP_IContact.begin","zpp_nape/dynamics/Contact.hx",649,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(650)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(650)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,begin,return )

Void ZPP_IContact_obj::setbegin( ::zpp_nape::dynamics::ZPP_IContact i){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","setbegin",0x16479d40,"zpp_nape.dynamics.ZPP_IContact.setbegin","zpp_nape/dynamics/Contact.hx",658,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(659)
		this->next = i;
		HX_STACK_LINE(660)
		this->modified = true;
		HX_STACK_LINE(661)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::add( ::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","add",0xcc6b7ac8,"zpp_nape.dynamics.ZPP_IContact.add","zpp_nape/dynamics/Contact.hx",663,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(664)
	::zpp_nape::dynamics::ZPP_IContact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	{
		HX_STACK_LINE(664)
		::zpp_nape::dynamics::ZPP_IContact tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			o->_inuse = true;
			HX_STACK_LINE(664)
			tmp1 = o;
		}
		HX_STACK_LINE(664)
		::zpp_nape::dynamics::ZPP_IContact temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(664)
		::zpp_nape::dynamics::ZPP_IContact tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		temp->next = tmp2;
		HX_STACK_LINE(664)
		this->next = temp;
		HX_STACK_LINE(664)
		this->modified = true;
		HX_STACK_LINE(664)
		(this->length)++;
		HX_STACK_LINE(664)
		tmp = o;
	}
	HX_STACK_LINE(664)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,add,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_add( ::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_add",0x32935434,"zpp_nape.dynamics.ZPP_IContact.inlined_add","zpp_nape/dynamics/Contact.hx",668,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(677)
	::zpp_nape::dynamics::ZPP_IContact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(677)
	{
		HX_STACK_LINE(678)
		o->_inuse = true;
		HX_STACK_LINE(679)
		tmp = o;
	}
	HX_STACK_LINE(677)
	::zpp_nape::dynamics::ZPP_IContact temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(681)
	::zpp_nape::dynamics::ZPP_IContact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(681)
	temp->next = tmp1;
	HX_STACK_LINE(682)
	this->next = temp;
	HX_STACK_LINE(683)
	this->modified = true;
	HX_STACK_LINE(684)
	(this->length)++;
	HX_STACK_LINE(685)
	::zpp_nape::dynamics::ZPP_IContact tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(685)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_add,return )

Void ZPP_IContact_obj::addAll( ::zpp_nape::dynamics::ZPP_IContact x){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","addAll",0xb0e12339,"zpp_nape.dynamics.ZPP_IContact.addAll","zpp_nape/dynamics/Contact.hx",696,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(697)
		::zpp_nape::dynamics::ZPP_IContact cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(698)
		while((true)){
			HX_STACK_LINE(698)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(698)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(698)
			if ((tmp1)){
				HX_STACK_LINE(698)
				break;
			}
			HX_STACK_LINE(699)
			::zpp_nape::dynamics::ZPP_IContact i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(700)
			::zpp_nape::dynamics::ZPP_IContact tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(700)
			this->add(tmp2);
			HX_STACK_LINE(701)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::insert( ::zpp_nape::dynamics::ZPP_IContact cur,::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","insert",0xafc35cf2,"zpp_nape.dynamics.ZPP_IContact.insert","zpp_nape/dynamics/Contact.hx",705,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(706)
	::zpp_nape::dynamics::ZPP_IContact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(706)
	{
		HX_STACK_LINE(706)
		::zpp_nape::dynamics::ZPP_IContact tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			o->_inuse = true;
			HX_STACK_LINE(706)
			tmp1 = o;
		}
		HX_STACK_LINE(706)
		::zpp_nape::dynamics::ZPP_IContact temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(706)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(706)
		if ((tmp2)){
			HX_STACK_LINE(706)
			::zpp_nape::dynamics::ZPP_IContact tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(706)
			temp->next = tmp3;
			HX_STACK_LINE(706)
			this->next = temp;
		}
		else{
			HX_STACK_LINE(706)
			temp->next = cur->next;
			HX_STACK_LINE(706)
			cur->next = temp;
		}
		HX_STACK_LINE(706)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(706)
		this->pushmod = tmp3;
		HX_STACK_LINE(706)
		(this->length)++;
		HX_STACK_LINE(706)
		tmp = temp;
	}
	HX_STACK_LINE(706)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,insert,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_insert( ::zpp_nape::dynamics::ZPP_IContact cur,::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_insert",0x12ac2f06,"zpp_nape.dynamics.ZPP_IContact.inlined_insert","zpp_nape/dynamics/Contact.hx",710,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(719)
	::zpp_nape::dynamics::ZPP_IContact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	{
		HX_STACK_LINE(720)
		o->_inuse = true;
		HX_STACK_LINE(721)
		tmp = o;
	}
	HX_STACK_LINE(719)
	::zpp_nape::dynamics::ZPP_IContact temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(723)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(723)
	if ((tmp1)){
		HX_STACK_LINE(724)
		::zpp_nape::dynamics::ZPP_IContact tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(724)
		temp->next = tmp2;
		HX_STACK_LINE(725)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(728)
		temp->next = cur->next;
		HX_STACK_LINE(729)
		cur->next = temp;
	}
	HX_STACK_LINE(731)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(731)
	this->pushmod = tmp2;
	HX_STACK_LINE(732)
	(this->length)++;
	HX_STACK_LINE(733)
	::zpp_nape::dynamics::ZPP_IContact tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(733)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,inlined_insert,return )

Void ZPP_IContact_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","pop",0xcc76e638,"zpp_nape.dynamics.ZPP_IContact.pop","zpp_nape/dynamics/Contact.hx",736,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(736)
		::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(736)
		::zpp_nape::dynamics::ZPP_IContact ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(736)
		this->next = ret->next;
		HX_STACK_LINE(736)
		ret->_inuse = false;
		HX_STACK_LINE(736)
		::zpp_nape::dynamics::ZPP_IContact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(736)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(736)
		if ((tmp2)){
			HX_STACK_LINE(736)
			this->pushmod = true;
		}
		HX_STACK_LINE(736)
		this->modified = true;
		HX_STACK_LINE(736)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,pop,(void))

Void ZPP_IContact_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_pop",0x329ebfa4,"zpp_nape.dynamics.ZPP_IContact.inlined_pop","zpp_nape/dynamics/Contact.hx",740,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(749)
		::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(749)
		::zpp_nape::dynamics::ZPP_IContact ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(750)
		this->next = ret->next;
		HX_STACK_LINE(752)
		ret->_inuse = false;
		HX_STACK_LINE(755)
		::zpp_nape::dynamics::ZPP_IContact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		if ((tmp2)){
			HX_STACK_LINE(755)
			this->pushmod = true;
		}
		HX_STACK_LINE(756)
		this->modified = true;
		HX_STACK_LINE(757)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","pop_unsafe",0xfc74668d,"zpp_nape.dynamics.ZPP_IContact.pop_unsafe","zpp_nape/dynamics/Contact.hx",759,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(760)
	::zpp_nape::dynamics::ZPP_IContact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(760)
	{
		HX_STACK_LINE(760)
		::zpp_nape::dynamics::ZPP_IContact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(760)
		::zpp_nape::dynamics::ZPP_IContact ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(760)
		this->pop();
		HX_STACK_LINE(760)
		tmp = ret;
	}
	HX_STACK_LINE(760)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_pop_unsafe",0x9d31d2a1,"zpp_nape.dynamics.ZPP_IContact.inlined_pop_unsafe","zpp_nape/dynamics/Contact.hx",764,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(773)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(773)
	::zpp_nape::dynamics::ZPP_IContact ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(774)
	this->pop();
	HX_STACK_LINE(775)
	::zpp_nape::dynamics::ZPP_IContact tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(775)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_pop_unsafe,return )

Void ZPP_IContact_obj::remove( ::zpp_nape::dynamics::ZPP_IContact obj){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","remove",0x166eb5fd,"zpp_nape.dynamics.ZPP_IContact.remove","zpp_nape/dynamics/Contact.hx",786,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(786)
		::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(786)
		::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(786)
		::zpp_nape::dynamics::ZPP_IContact cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(786)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(786)
		while((true)){
			HX_STACK_LINE(786)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(786)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(786)
			if ((tmp2)){
				HX_STACK_LINE(786)
				break;
			}
			HX_STACK_LINE(786)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(786)
			if ((tmp3)){
				HX_STACK_LINE(786)
				{
					HX_STACK_LINE(786)
					::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(786)
					::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(786)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(786)
					if ((tmp4)){
						HX_STACK_LINE(786)
						::zpp_nape::dynamics::ZPP_IContact tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(786)
						old = tmp5;
						HX_STACK_LINE(786)
						ret1 = old->next;
						HX_STACK_LINE(786)
						this->next = ret1;
						HX_STACK_LINE(786)
						::zpp_nape::dynamics::ZPP_IContact tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(786)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(786)
						if ((tmp7)){
							HX_STACK_LINE(786)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(786)
						old = pre->next;
						HX_STACK_LINE(786)
						ret1 = old->next;
						HX_STACK_LINE(786)
						pre->next = ret1;
						HX_STACK_LINE(786)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(786)
						if ((tmp5)){
							HX_STACK_LINE(786)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(786)
					old->_inuse = false;
					HX_STACK_LINE(786)
					this->modified = true;
					HX_STACK_LINE(786)
					(this->length)--;
					HX_STACK_LINE(786)
					this->pushmod = true;
					HX_STACK_LINE(786)
					ret1;
				}
				HX_STACK_LINE(786)
				ret = true;
				HX_STACK_LINE(786)
				break;
			}
			HX_STACK_LINE(786)
			pre = cur;
			HX_STACK_LINE(786)
			cur = cur->next;
		}
		HX_STACK_LINE(786)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,remove,(void))

bool ZPP_IContact_obj::try_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","try_remove",0x139e9c41,"zpp_nape.dynamics.ZPP_IContact.try_remove","zpp_nape/dynamics/Contact.hx",788,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(797)
	::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(798)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(798)
	::zpp_nape::dynamics::ZPP_IContact cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(799)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(800)
	while((true)){
		HX_STACK_LINE(800)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(800)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(800)
		if ((tmp2)){
			HX_STACK_LINE(800)
			break;
		}
		HX_STACK_LINE(801)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(801)
		if ((tmp3)){
			HX_STACK_LINE(802)
			::zpp_nape::dynamics::ZPP_IContact tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(802)
			this->erase(tmp4);
			HX_STACK_LINE(803)
			ret = true;
			HX_STACK_LINE(804)
			break;
		}
		HX_STACK_LINE(806)
		pre = cur;
		HX_STACK_LINE(807)
		cur = cur->next;
	}
	HX_STACK_LINE(809)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(809)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,try_remove,return )

Void ZPP_IContact_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_remove",0x79578811,"zpp_nape.dynamics.ZPP_IContact.inlined_remove","zpp_nape/dynamics/Contact.hx",822,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(822)
		::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(822)
		::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(822)
		::zpp_nape::dynamics::ZPP_IContact cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(822)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(822)
		while((true)){
			HX_STACK_LINE(822)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(822)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(822)
			if ((tmp2)){
				HX_STACK_LINE(822)
				break;
			}
			HX_STACK_LINE(822)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(822)
			if ((tmp3)){
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(822)
					::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(822)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(822)
					if ((tmp4)){
						HX_STACK_LINE(822)
						::zpp_nape::dynamics::ZPP_IContact tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(822)
						old = tmp5;
						HX_STACK_LINE(822)
						ret1 = old->next;
						HX_STACK_LINE(822)
						this->next = ret1;
						HX_STACK_LINE(822)
						::zpp_nape::dynamics::ZPP_IContact tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(822)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(822)
						if ((tmp7)){
							HX_STACK_LINE(822)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(822)
						old = pre->next;
						HX_STACK_LINE(822)
						ret1 = old->next;
						HX_STACK_LINE(822)
						pre->next = ret1;
						HX_STACK_LINE(822)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(822)
						if ((tmp5)){
							HX_STACK_LINE(822)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(822)
					old->_inuse = false;
					HX_STACK_LINE(822)
					this->modified = true;
					HX_STACK_LINE(822)
					(this->length)--;
					HX_STACK_LINE(822)
					this->pushmod = true;
					HX_STACK_LINE(822)
					ret1;
				}
				HX_STACK_LINE(822)
				ret = true;
				HX_STACK_LINE(822)
				break;
			}
			HX_STACK_LINE(822)
			pre = cur;
			HX_STACK_LINE(822)
			cur = cur->next;
		}
		HX_STACK_LINE(822)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_remove,(void))

bool ZPP_IContact_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_try_remove",0xb45c0855,"zpp_nape.dynamics.ZPP_IContact.inlined_try_remove","zpp_nape/dynamics/Contact.hx",826,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(835)
	::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(836)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(836)
	::zpp_nape::dynamics::ZPP_IContact cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(837)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(838)
	while((true)){
		HX_STACK_LINE(838)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(838)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(838)
		if ((tmp2)){
			HX_STACK_LINE(838)
			break;
		}
		HX_STACK_LINE(839)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(839)
		if ((tmp3)){
			HX_STACK_LINE(840)
			{
				HX_STACK_LINE(840)
				::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(840)
				::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(840)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(840)
				if ((tmp4)){
					HX_STACK_LINE(840)
					::zpp_nape::dynamics::ZPP_IContact tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(840)
					old = tmp5;
					HX_STACK_LINE(840)
					ret1 = old->next;
					HX_STACK_LINE(840)
					this->next = ret1;
					HX_STACK_LINE(840)
					::zpp_nape::dynamics::ZPP_IContact tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(840)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(840)
					if ((tmp7)){
						HX_STACK_LINE(840)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(840)
					old = pre->next;
					HX_STACK_LINE(840)
					ret1 = old->next;
					HX_STACK_LINE(840)
					pre->next = ret1;
					HX_STACK_LINE(840)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(840)
					if ((tmp5)){
						HX_STACK_LINE(840)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(840)
				old->_inuse = false;
				HX_STACK_LINE(840)
				this->modified = true;
				HX_STACK_LINE(840)
				(this->length)--;
				HX_STACK_LINE(840)
				this->pushmod = true;
				HX_STACK_LINE(840)
				ret1;
			}
			HX_STACK_LINE(841)
			ret = true;
			HX_STACK_LINE(842)
			break;
		}
		HX_STACK_LINE(844)
		pre = cur;
		HX_STACK_LINE(845)
		cur = cur->next;
	}
	HX_STACK_LINE(847)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(847)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_try_remove,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::erase( ::zpp_nape::dynamics::ZPP_IContact pre){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","erase",0xb12f294d,"zpp_nape.dynamics.ZPP_IContact.erase","zpp_nape/dynamics/Contact.hx",849,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(850)
	::zpp_nape::dynamics::ZPP_IContact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(850)
	{
		HX_STACK_LINE(850)
		::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(850)
		::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(850)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(850)
		if ((tmp1)){
			HX_STACK_LINE(850)
			::zpp_nape::dynamics::ZPP_IContact tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(850)
			old = tmp2;
			HX_STACK_LINE(850)
			ret = old->next;
			HX_STACK_LINE(850)
			this->next = ret;
			HX_STACK_LINE(850)
			::zpp_nape::dynamics::ZPP_IContact tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(850)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(850)
			if ((tmp4)){
				HX_STACK_LINE(850)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(850)
			old = pre->next;
			HX_STACK_LINE(850)
			ret = old->next;
			HX_STACK_LINE(850)
			pre->next = ret;
			HX_STACK_LINE(850)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(850)
			if ((tmp2)){
				HX_STACK_LINE(850)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(850)
		old->_inuse = false;
		HX_STACK_LINE(850)
		this->modified = true;
		HX_STACK_LINE(850)
		(this->length)--;
		HX_STACK_LINE(850)
		this->pushmod = true;
		HX_STACK_LINE(850)
		tmp = ret;
	}
	HX_STACK_LINE(850)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,erase,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_erase( ::zpp_nape::dynamics::ZPP_IContact pre){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_erase",0xd41135b9,"zpp_nape.dynamics.ZPP_IContact.inlined_erase","zpp_nape/dynamics/Contact.hx",854,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(863)
	::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(864)
	::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(865)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(865)
	if ((tmp)){
		HX_STACK_LINE(866)
		::zpp_nape::dynamics::ZPP_IContact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(866)
		old = tmp1;
		HX_STACK_LINE(867)
		ret = old->next;
		HX_STACK_LINE(868)
		this->next = ret;
		HX_STACK_LINE(869)
		::zpp_nape::dynamics::ZPP_IContact tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(869)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(869)
		if ((tmp3)){
			HX_STACK_LINE(869)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(872)
		old = pre->next;
		HX_STACK_LINE(873)
		ret = old->next;
		HX_STACK_LINE(874)
		pre->next = ret;
		HX_STACK_LINE(875)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(875)
		if ((tmp1)){
			HX_STACK_LINE(875)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(878)
	old->_inuse = false;
	HX_STACK_LINE(881)
	this->modified = true;
	HX_STACK_LINE(882)
	(this->length)--;
	HX_STACK_LINE(883)
	this->pushmod = true;
	HX_STACK_LINE(884)
	::zpp_nape::dynamics::ZPP_IContact tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(884)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_erase,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::splice( ::zpp_nape::dynamics::ZPP_IContact pre,int n){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","splice",0xd1849f35,"zpp_nape.dynamics.ZPP_IContact.splice","zpp_nape/dynamics/Contact.hx",886,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(887)
	while((true)){
		HX_STACK_LINE(887)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(887)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(887)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(887)
		if ((tmp1)){
			HX_STACK_LINE(887)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(887)
			tmp2 = false;
		}
		HX_STACK_LINE(887)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(887)
		if ((tmp3)){
			HX_STACK_LINE(887)
			break;
		}
		HX_STACK_LINE(887)
		::zpp_nape::dynamics::ZPP_IContact tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(887)
		this->erase(tmp4);
	}
	HX_STACK_LINE(888)
	::zpp_nape::dynamics::ZPP_IContact tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(888)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,splice,return )

Void ZPP_IContact_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","clear",0x866db1f4,"zpp_nape.dynamics.ZPP_IContact.clear","zpp_nape/dynamics/Contact.hx",891,0xe7cc00d7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,clear,(void))

Void ZPP_IContact_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_clear",0xa94fbe60,"zpp_nape.dynamics.ZPP_IContact.inlined_clear","zpp_nape/dynamics/Contact.hx",896,0xe7cc00d7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_clear,(void))

Void ZPP_IContact_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","reverse",0xb26ca149,"zpp_nape.dynamics.ZPP_IContact.reverse","zpp_nape/dynamics/Contact.hx",901,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(902)
		::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(902)
		::zpp_nape::dynamics::ZPP_IContact cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(903)
		::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(904)
		while((true)){
			HX_STACK_LINE(904)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(904)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(904)
			if ((tmp2)){
				HX_STACK_LINE(904)
				break;
			}
			HX_STACK_LINE(905)
			::zpp_nape::dynamics::ZPP_IContact nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(906)
			cur->next = pre;
			HX_STACK_LINE(907)
			this->next = cur;
			HX_STACK_LINE(908)
			pre = cur;
			HX_STACK_LINE(909)
			cur = nx;
		}
		HX_STACK_LINE(911)
		this->modified = true;
		HX_STACK_LINE(912)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,reverse,(void))

bool ZPP_IContact_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","empty",0xadec7af4,"zpp_nape.dynamics.ZPP_IContact.empty","zpp_nape/dynamics/Contact.hx",916,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(917)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(917)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(917)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,empty,return )

int ZPP_IContact_obj::size( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","size",0x1d89aa3a,"zpp_nape.dynamics.ZPP_IContact.size","zpp_nape/dynamics/Contact.hx",921,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(922)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(922)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,size,return )

bool ZPP_IContact_obj::has( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","has",0xcc70c801,"zpp_nape.dynamics.ZPP_IContact.has","zpp_nape/dynamics/Contact.hx",924,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(925)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(925)
	{
		HX_STACK_LINE(925)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(925)
		{
			HX_STACK_LINE(925)
			ret = false;
			HX_STACK_LINE(925)
			{
				HX_STACK_LINE(925)
				::zpp_nape::dynamics::ZPP_IContact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(925)
				::zpp_nape::dynamics::ZPP_IContact cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(925)
				while((true)){
					HX_STACK_LINE(925)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(925)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(925)
					if ((tmp3)){
						HX_STACK_LINE(925)
						break;
					}
					HX_STACK_LINE(925)
					::zpp_nape::dynamics::ZPP_IContact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(925)
					{
						HX_STACK_LINE(925)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(925)
						if ((tmp4)){
							HX_STACK_LINE(925)
							ret = true;
							HX_STACK_LINE(925)
							break;
						}
					}
					HX_STACK_LINE(925)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(925)
		tmp = ret;
	}
	HX_STACK_LINE(925)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,has,return )

bool ZPP_IContact_obj::inlined_has( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","inlined_has",0x3298a16d,"zpp_nape.dynamics.ZPP_IContact.inlined_has","zpp_nape/dynamics/Contact.hx",929,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(938)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(939)
	{
		HX_STACK_LINE(940)
		ret = false;
		HX_STACK_LINE(941)
		{
			HX_STACK_LINE(942)
			::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(942)
			::zpp_nape::dynamics::ZPP_IContact cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(943)
			while((true)){
				HX_STACK_LINE(943)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(943)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(943)
				if ((tmp2)){
					HX_STACK_LINE(943)
					break;
				}
				HX_STACK_LINE(944)
				::zpp_nape::dynamics::ZPP_IContact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(945)
				{
					HX_STACK_LINE(946)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(946)
					if ((tmp3)){
						HX_STACK_LINE(947)
						ret = true;
						HX_STACK_LINE(948)
						break;
					}
				}
				HX_STACK_LINE(951)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(955)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(955)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::front( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","front",0x44a05910,"zpp_nape.dynamics.ZPP_IContact.front","zpp_nape/dynamics/Contact.hx",959,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(960)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(960)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,front,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::back( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","back",0x1246e3a0,"zpp_nape.dynamics.ZPP_IContact.back","zpp_nape/dynamics/Contact.hx",962,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(963)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(963)
	::zpp_nape::dynamics::ZPP_IContact ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(964)
	::zpp_nape::dynamics::ZPP_IContact cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(965)
	while((true)){
		HX_STACK_LINE(965)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(965)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(965)
		if ((tmp2)){
			HX_STACK_LINE(965)
			break;
		}
		HX_STACK_LINE(966)
		ret = cur;
		HX_STACK_LINE(967)
		cur = cur->next;
	}
	HX_STACK_LINE(969)
	::zpp_nape::dynamics::ZPP_IContact tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(969)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,back,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","iterator_at",0x3737918b,"zpp_nape.dynamics.ZPP_IContact.iterator_at","zpp_nape/dynamics/Contact.hx",971,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(980)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	::zpp_nape::dynamics::ZPP_IContact ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(981)
	while((true)){
		HX_STACK_LINE(981)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(981)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(981)
		if ((tmp2)){
			HX_STACK_LINE(981)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(981)
			tmp3 = false;
		}
		HX_STACK_LINE(981)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(981)
		if ((tmp4)){
			HX_STACK_LINE(981)
			break;
		}
		HX_STACK_LINE(981)
		ret = ret->next;
	}
	HX_STACK_LINE(982)
	::zpp_nape::dynamics::ZPP_IContact tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(982)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_IContact","at",0xd796de2c,"zpp_nape.dynamics.ZPP_IContact.at","zpp_nape/dynamics/Contact.hx",984,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(993)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(993)
	::zpp_nape::dynamics::ZPP_IContact tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(993)
	::zpp_nape::dynamics::ZPP_IContact it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(994)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(994)
	::zpp_nape::dynamics::ZPP_IContact tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(994)
	if ((tmp2)){
		HX_STACK_LINE(994)
		tmp3 = it;
	}
	else{
		HX_STACK_LINE(994)
		tmp3 = null();
	}
	HX_STACK_LINE(994)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,at,return )


ZPP_IContact_obj::ZPP_IContact_obj()
{
}

void ZPP_IContact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_IContact);
	HX_MARK_MEMBER_NAME(r1x,"r1x");
	HX_MARK_MEMBER_NAME(r1y,"r1y");
	HX_MARK_MEMBER_NAME(r2x,"r2x");
	HX_MARK_MEMBER_NAME(r2y,"r2y");
	HX_MARK_MEMBER_NAME(nMass,"nMass");
	HX_MARK_MEMBER_NAME(tMass,"tMass");
	HX_MARK_MEMBER_NAME(bounce,"bounce");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(jnAcc,"jnAcc");
	HX_MARK_MEMBER_NAME(jtAcc,"jtAcc");
	HX_MARK_MEMBER_NAME(lr1x,"lr1x");
	HX_MARK_MEMBER_NAME(lr1y,"lr1y");
	HX_MARK_MEMBER_NAME(lr2x,"lr2x");
	HX_MARK_MEMBER_NAME(lr2y,"lr2y");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZPP_IContact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r1x,"r1x");
	HX_VISIT_MEMBER_NAME(r1y,"r1y");
	HX_VISIT_MEMBER_NAME(r2x,"r2x");
	HX_VISIT_MEMBER_NAME(r2y,"r2y");
	HX_VISIT_MEMBER_NAME(nMass,"nMass");
	HX_VISIT_MEMBER_NAME(tMass,"tMass");
	HX_VISIT_MEMBER_NAME(bounce,"bounce");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(jnAcc,"jnAcc");
	HX_VISIT_MEMBER_NAME(jtAcc,"jtAcc");
	HX_VISIT_MEMBER_NAME(lr1x,"lr1x");
	HX_VISIT_MEMBER_NAME(lr1y,"lr1y");
	HX_VISIT_MEMBER_NAME(lr2x,"lr2x");
	HX_VISIT_MEMBER_NAME(lr2y,"lr2y");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZPP_IContact_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"r1x") ) { return r1x; }
		if (HX_FIELD_EQ(inName,"r1y") ) { return r1y; }
		if (HX_FIELD_EQ(inName,"r2x") ) { return r2x; }
		if (HX_FIELD_EQ(inName,"r2y") ) { return r2y; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lr1x") ) { return lr1x; }
		if (HX_FIELD_EQ(inName,"lr1y") ) { return lr1y; }
		if (HX_FIELD_EQ(inName,"lr2x") ) { return lr2x; }
		if (HX_FIELD_EQ(inName,"lr2y") ) { return lr2y; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nMass") ) { return nMass; }
		if (HX_FIELD_EQ(inName,"tMass") ) { return tMass; }
		if (HX_FIELD_EQ(inName,"jnAcc") ) { return jnAcc; }
		if (HX_FIELD_EQ(inName,"jtAcc") ) { return jtAcc; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce; }
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
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
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

Dynamic ZPP_IContact_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"r1x") ) { r1x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1y") ) { r1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2x") ) { r2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2y") ) { r2y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lr1x") ) { lr1x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr1y") ) { lr1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr2x") ) { lr2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr2y") ) { lr2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nMass") ) { nMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tMass") ) { tMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jnAcc") ) { jnAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jtAcc") ) { jtAcc=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounce") ) { bounce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_IContact_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_IContact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r1x","\x19","\xac","\x56","\x00"));
	outFields->push(HX_HCSTRING("r1y","\x1a","\xac","\x56","\x00"));
	outFields->push(HX_HCSTRING("r2x","\xf8","\xac","\x56","\x00"));
	outFields->push(HX_HCSTRING("r2y","\xf9","\xac","\x56","\x00"));
	outFields->push(HX_HCSTRING("nMass","\x82","\x3c","\x43","\x89"));
	outFields->push(HX_HCSTRING("tMass","\x88","\xb7","\xaa","\xfd"));
	outFields->push(HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66"));
	outFields->push(HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97"));
	outFields->push(HX_HCSTRING("jnAcc","\xdd","\x9e","\x60","\x51"));
	outFields->push(HX_HCSTRING("jtAcc","\x97","\xe6","\x57","\x55"));
	outFields->push(HX_HCSTRING("lr1x","\x2d","\xb7","\xb9","\x47"));
	outFields->push(HX_HCSTRING("lr1y","\x2e","\xb7","\xb9","\x47"));
	outFields->push(HX_HCSTRING("lr2x","\x0c","\xb8","\xb9","\x47"));
	outFields->push(HX_HCSTRING("lr2y","\x0d","\xb8","\xb9","\x47"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,r1x),HX_HCSTRING("r1x","\x19","\xac","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,r1y),HX_HCSTRING("r1y","\x1a","\xac","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,r2x),HX_HCSTRING("r2x","\xf8","\xac","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,r2y),HX_HCSTRING("r2y","\xf9","\xac","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,nMass),HX_HCSTRING("nMass","\x82","\x3c","\x43","\x89")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,tMass),HX_HCSTRING("tMass","\x88","\xb7","\xaa","\xfd")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,bounce),HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,friction),HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,jnAcc),HX_HCSTRING("jnAcc","\xdd","\x9e","\x60","\x51")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,jtAcc),HX_HCSTRING("jtAcc","\x97","\xe6","\x57","\x55")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,lr1x),HX_HCSTRING("lr1x","\x2d","\xb7","\xb9","\x47")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,lr1y),HX_HCSTRING("lr1y","\x2e","\xb7","\xb9","\x47")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,lr2x),HX_HCSTRING("lr2x","\x0c","\xb8","\xb9","\x47")},
	{hx::fsFloat,(int)offsetof(ZPP_IContact_obj,lr2y),HX_HCSTRING("lr2y","\x0d","\xb8","\xb9","\x47")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_IContact_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_IContact_obj,_inuse),HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba")},
	{hx::fsBool,(int)offsetof(ZPP_IContact_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_IContact_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZPP_IContact_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("r1x","\x19","\xac","\x56","\x00"),
	HX_HCSTRING("r1y","\x1a","\xac","\x56","\x00"),
	HX_HCSTRING("r2x","\xf8","\xac","\x56","\x00"),
	HX_HCSTRING("r2y","\xf9","\xac","\x56","\x00"),
	HX_HCSTRING("nMass","\x82","\x3c","\x43","\x89"),
	HX_HCSTRING("tMass","\x88","\xb7","\xaa","\xfd"),
	HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66"),
	HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97"),
	HX_HCSTRING("jnAcc","\xdd","\x9e","\x60","\x51"),
	HX_HCSTRING("jtAcc","\x97","\xe6","\x57","\x55"),
	HX_HCSTRING("lr1x","\x2d","\xb7","\xb9","\x47"),
	HX_HCSTRING("lr1y","\x2e","\xb7","\xb9","\x47"),
	HX_HCSTRING("lr2x","\x0c","\xb8","\xb9","\x47"),
	HX_HCSTRING("lr2y","\x0d","\xb8","\xb9","\x47"),
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
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_IContact_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_IContact_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_IContact_obj::__mClass;

void ZPP_IContact_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.dynamics.ZPP_IContact","\x95","\xc9","\x6c","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_IContact_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_IContact_obj >;
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
} // end namespace dynamics
