#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_PartitionPair_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","new",0x9bb0ae20,"zpp_nape.geom.ZPP_PartitionPair.new","zpp_nape/geom/Triangular.hx",174,0x53295a96)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(600)
	this->node = null();
	HX_STACK_LINE(566)
	this->di = (int)0;
	HX_STACK_LINE(565)
	this->id = (int)0;
	HX_STACK_LINE(564)
	this->b = null();
	HX_STACK_LINE(563)
	this->a = null();
	HX_STACK_LINE(213)
	this->length = (int)0;
	HX_STACK_LINE(212)
	this->pushmod = false;
	HX_STACK_LINE(211)
	this->modified = false;
	HX_STACK_LINE(210)
	this->_inuse = false;
	HX_STACK_LINE(199)
	this->next = null();
}
;
	return null();
}

//ZPP_PartitionPair_obj::~ZPP_PartitionPair_obj() { }

Dynamic ZPP_PartitionPair_obj::__CreateEmpty() { return  new ZPP_PartitionPair_obj; }
hx::ObjectPtr< ZPP_PartitionPair_obj > ZPP_PartitionPair_obj::__new()
{  hx::ObjectPtr< ZPP_PartitionPair_obj > _result_ = new ZPP_PartitionPair_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_PartitionPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PartitionPair_obj > _result_ = new ZPP_PartitionPair_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","elem",0x98fa02cf,"zpp_nape.geom.ZPP_PartitionPair.elem","zpp_nape/geom/Triangular.hx",203,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,elem,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","begin",0x82f5b7e9,"zpp_nape.geom.ZPP_PartitionPair.begin","zpp_nape/geom/Triangular.hx",207,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,begin,return )

Void ZPP_PartitionPair_obj::setbegin( ::zpp_nape::geom::ZPP_PartitionPair i){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","setbegin",0x85c42d87,"zpp_nape.geom.ZPP_PartitionPair.setbegin","zpp_nape/geom/Triangular.hx",216,0x53295a96)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(217)
		this->next = i;
		HX_STACK_LINE(218)
		this->modified = true;
		HX_STACK_LINE(219)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,setbegin,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::add( ::zpp_nape::geom::ZPP_PartitionPair o){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","add",0x9ba6cfe1,"zpp_nape.geom.ZPP_PartitionPair.add","zpp_nape/geom/Triangular.hx",221,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(222)
	::zpp_nape::geom::ZPP_PartitionPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		::zpp_nape::geom::ZPP_PartitionPair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			o->_inuse = true;
			HX_STACK_LINE(222)
			tmp1 = o;
		}
		HX_STACK_LINE(222)
		::zpp_nape::geom::ZPP_PartitionPair temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(222)
		::zpp_nape::geom::ZPP_PartitionPair tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		temp->next = tmp2;
		HX_STACK_LINE(222)
		this->next = temp;
		HX_STACK_LINE(222)
		this->modified = true;
		HX_STACK_LINE(222)
		(this->length)++;
		HX_STACK_LINE(222)
		tmp = o;
	}
	HX_STACK_LINE(222)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,add,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::inlined_add( ::zpp_nape::geom::ZPP_PartitionPair o){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_add",0xf63eea4d,"zpp_nape.geom.ZPP_PartitionPair.inlined_add","zpp_nape/geom/Triangular.hx",226,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(235)
	::zpp_nape::geom::ZPP_PartitionPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(236)
		o->_inuse = true;
		HX_STACK_LINE(237)
		tmp = o;
	}
	HX_STACK_LINE(235)
	::zpp_nape::geom::ZPP_PartitionPair temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(239)
	::zpp_nape::geom::ZPP_PartitionPair tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	temp->next = tmp1;
	HX_STACK_LINE(240)
	this->next = temp;
	HX_STACK_LINE(241)
	this->modified = true;
	HX_STACK_LINE(242)
	(this->length)++;
	HX_STACK_LINE(243)
	::zpp_nape::geom::ZPP_PartitionPair tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_add,return )

Void ZPP_PartitionPair_obj::addAll( ::zpp_nape::geom::ZPP_PartitionPair x){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","addAll",0x182f43c0,"zpp_nape.geom.ZPP_PartitionPair.addAll","zpp_nape/geom/Triangular.hx",254,0x53295a96)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(255)
		::zpp_nape::geom::ZPP_PartitionPair cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(256)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(256)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			if ((tmp1)){
				HX_STACK_LINE(256)
				break;
			}
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_PartitionPair i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(258)
			::zpp_nape::geom::ZPP_PartitionPair tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			this->add(tmp2);
			HX_STACK_LINE(259)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,addAll,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::insert( ::zpp_nape::geom::ZPP_PartitionPair cur,::zpp_nape::geom::ZPP_PartitionPair o){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","insert",0x17117d79,"zpp_nape.geom.ZPP_PartitionPair.insert","zpp_nape/geom/Triangular.hx",263,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(264)
	::zpp_nape::geom::ZPP_PartitionPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		::zpp_nape::geom::ZPP_PartitionPair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			o->_inuse = true;
			HX_STACK_LINE(264)
			tmp1 = o;
		}
		HX_STACK_LINE(264)
		::zpp_nape::geom::ZPP_PartitionPair temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(264)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		if ((tmp2)){
			HX_STACK_LINE(264)
			::zpp_nape::geom::ZPP_PartitionPair tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(264)
			temp->next = tmp3;
			HX_STACK_LINE(264)
			this->next = temp;
		}
		else{
			HX_STACK_LINE(264)
			temp->next = cur->next;
			HX_STACK_LINE(264)
			cur->next = temp;
		}
		HX_STACK_LINE(264)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		this->pushmod = tmp3;
		HX_STACK_LINE(264)
		(this->length)++;
		HX_STACK_LINE(264)
		tmp = temp;
	}
	HX_STACK_LINE(264)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,insert,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::inlined_insert( ::zpp_nape::geom::ZPP_PartitionPair cur,::zpp_nape::geom::ZPP_PartitionPair o){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_insert",0xe268ae8d,"zpp_nape.geom.ZPP_PartitionPair.inlined_insert","zpp_nape/geom/Triangular.hx",268,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(277)
	::zpp_nape::geom::ZPP_PartitionPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(278)
		o->_inuse = true;
		HX_STACK_LINE(279)
		tmp = o;
	}
	HX_STACK_LINE(277)
	::zpp_nape::geom::ZPP_PartitionPair temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(281)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	if ((tmp1)){
		HX_STACK_LINE(282)
		::zpp_nape::geom::ZPP_PartitionPair tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		temp->next = tmp2;
		HX_STACK_LINE(283)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(286)
		temp->next = cur->next;
		HX_STACK_LINE(287)
		cur->next = temp;
	}
	HX_STACK_LINE(289)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	this->pushmod = tmp2;
	HX_STACK_LINE(290)
	(this->length)++;
	HX_STACK_LINE(291)
	::zpp_nape::geom::ZPP_PartitionPair tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(291)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,inlined_insert,return )

Void ZPP_PartitionPair_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","pop",0x9bb23b51,"zpp_nape.geom.ZPP_PartitionPair.pop","zpp_nape/geom/Triangular.hx",294,0x53295a96)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		::zpp_nape::geom::ZPP_PartitionPair ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(294)
		this->next = ret->next;
		HX_STACK_LINE(294)
		ret->_inuse = false;
		HX_STACK_LINE(294)
		::zpp_nape::geom::ZPP_PartitionPair tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		if ((tmp2)){
			HX_STACK_LINE(294)
			this->pushmod = true;
		}
		HX_STACK_LINE(294)
		this->modified = true;
		HX_STACK_LINE(294)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,pop,(void))

Void ZPP_PartitionPair_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_pop",0xf64a55bd,"zpp_nape.geom.ZPP_PartitionPair.inlined_pop","zpp_nape/geom/Triangular.hx",298,0x53295a96)
		HX_STACK_THIS(this)
		HX_STACK_LINE(307)
		::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		::zpp_nape::geom::ZPP_PartitionPair ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(308)
		this->next = ret->next;
		HX_STACK_LINE(310)
		ret->_inuse = false;
		HX_STACK_LINE(313)
		::zpp_nape::geom::ZPP_PartitionPair tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		if ((tmp2)){
			HX_STACK_LINE(313)
			this->pushmod = true;
		}
		HX_STACK_LINE(314)
		this->modified = true;
		HX_STACK_LINE(315)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","pop_unsafe",0xb06ad694,"zpp_nape.geom.ZPP_PartitionPair.pop_unsafe","zpp_nape/geom/Triangular.hx",317,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	::zpp_nape::geom::ZPP_PartitionPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	{
		HX_STACK_LINE(318)
		::zpp_nape::geom::ZPP_PartitionPair tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		::zpp_nape::geom::ZPP_PartitionPair ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(318)
		this->pop();
		HX_STACK_LINE(318)
		tmp = ret;
	}
	HX_STACK_LINE(318)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_pop_unsafe",0x99b221a8,"zpp_nape.geom.ZPP_PartitionPair.inlined_pop_unsafe","zpp_nape/geom/Triangular.hx",322,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	::zpp_nape::geom::ZPP_PartitionPair ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(332)
	this->pop();
	HX_STACK_LINE(333)
	::zpp_nape::geom::ZPP_PartitionPair tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(333)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,inlined_pop_unsafe,return )

Void ZPP_PartitionPair_obj::remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","remove",0x7dbcd684,"zpp_nape.geom.ZPP_PartitionPair.remove","zpp_nape/geom/Triangular.hx",344,0x53295a96)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(344)
		::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(344)
		::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		::zpp_nape::geom::ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(344)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(344)
		while((true)){
			HX_STACK_LINE(344)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(344)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(344)
			if ((tmp2)){
				HX_STACK_LINE(344)
				break;
			}
			HX_STACK_LINE(344)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			if ((tmp3)){
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_PartitionPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(344)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(344)
					if ((tmp4)){
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_PartitionPair tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(344)
						old = tmp5;
						HX_STACK_LINE(344)
						ret1 = old->next;
						HX_STACK_LINE(344)
						this->next = ret1;
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_PartitionPair tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(344)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(344)
						if ((tmp7)){
							HX_STACK_LINE(344)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(344)
						old = pre->next;
						HX_STACK_LINE(344)
						ret1 = old->next;
						HX_STACK_LINE(344)
						pre->next = ret1;
						HX_STACK_LINE(344)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(344)
						if ((tmp5)){
							HX_STACK_LINE(344)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(344)
					old->_inuse = false;
					HX_STACK_LINE(344)
					this->modified = true;
					HX_STACK_LINE(344)
					(this->length)--;
					HX_STACK_LINE(344)
					this->pushmod = true;
					HX_STACK_LINE(344)
					ret1;
				}
				HX_STACK_LINE(344)
				ret = true;
				HX_STACK_LINE(344)
				break;
			}
			HX_STACK_LINE(344)
			pre = cur;
			HX_STACK_LINE(344)
			cur = cur->next;
		}
		HX_STACK_LINE(344)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,remove,(void))

bool ZPP_PartitionPair_obj::try_remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","try_remove",0xc7950c48,"zpp_nape.geom.ZPP_PartitionPair.try_remove","zpp_nape/geom/Triangular.hx",346,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(355)
	::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(356)
	::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	::zpp_nape::geom::ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(357)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(358)
	while((true)){
		HX_STACK_LINE(358)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		if ((tmp2)){
			HX_STACK_LINE(358)
			break;
		}
		HX_STACK_LINE(359)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		if ((tmp3)){
			HX_STACK_LINE(360)
			::zpp_nape::geom::ZPP_PartitionPair tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(360)
			this->erase(tmp4);
			HX_STACK_LINE(361)
			ret = true;
			HX_STACK_LINE(362)
			break;
		}
		HX_STACK_LINE(364)
		pre = cur;
		HX_STACK_LINE(365)
		cur = cur->next;
	}
	HX_STACK_LINE(367)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(367)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,try_remove,return )

Void ZPP_PartitionPair_obj::inlined_remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_remove",0x49140798,"zpp_nape.geom.ZPP_PartitionPair.inlined_remove","zpp_nape/geom/Triangular.hx",380,0x53295a96)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(380)
		::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(380)
		::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		::zpp_nape::geom::ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(380)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(380)
		while((true)){
			HX_STACK_LINE(380)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(380)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(380)
			if ((tmp2)){
				HX_STACK_LINE(380)
				break;
			}
			HX_STACK_LINE(380)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(380)
			if ((tmp3)){
				HX_STACK_LINE(380)
				{
					HX_STACK_LINE(380)
					::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(380)
					::zpp_nape::geom::ZPP_PartitionPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(380)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(380)
					if ((tmp4)){
						HX_STACK_LINE(380)
						::zpp_nape::geom::ZPP_PartitionPair tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(380)
						old = tmp5;
						HX_STACK_LINE(380)
						ret1 = old->next;
						HX_STACK_LINE(380)
						this->next = ret1;
						HX_STACK_LINE(380)
						::zpp_nape::geom::ZPP_PartitionPair tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(380)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(380)
						if ((tmp7)){
							HX_STACK_LINE(380)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(380)
						old = pre->next;
						HX_STACK_LINE(380)
						ret1 = old->next;
						HX_STACK_LINE(380)
						pre->next = ret1;
						HX_STACK_LINE(380)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(380)
						if ((tmp5)){
							HX_STACK_LINE(380)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(380)
					old->_inuse = false;
					HX_STACK_LINE(380)
					this->modified = true;
					HX_STACK_LINE(380)
					(this->length)--;
					HX_STACK_LINE(380)
					this->pushmod = true;
					HX_STACK_LINE(380)
					ret1;
				}
				HX_STACK_LINE(380)
				ret = true;
				HX_STACK_LINE(380)
				break;
			}
			HX_STACK_LINE(380)
			pre = cur;
			HX_STACK_LINE(380)
			cur = cur->next;
		}
		HX_STACK_LINE(380)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_remove,(void))

bool ZPP_PartitionPair_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_try_remove",0xb0dc575c,"zpp_nape.geom.ZPP_PartitionPair.inlined_try_remove","zpp_nape/geom/Triangular.hx",384,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(393)
	::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(394)
	::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	::zpp_nape::geom::ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(395)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(396)
	while((true)){
		HX_STACK_LINE(396)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		if ((tmp2)){
			HX_STACK_LINE(396)
			break;
		}
		HX_STACK_LINE(397)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		if ((tmp3)){
			HX_STACK_LINE(398)
			{
				HX_STACK_LINE(398)
				::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(398)
				::zpp_nape::geom::ZPP_PartitionPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(398)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(398)
				if ((tmp4)){
					HX_STACK_LINE(398)
					::zpp_nape::geom::ZPP_PartitionPair tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(398)
					old = tmp5;
					HX_STACK_LINE(398)
					ret1 = old->next;
					HX_STACK_LINE(398)
					this->next = ret1;
					HX_STACK_LINE(398)
					::zpp_nape::geom::ZPP_PartitionPair tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(398)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(398)
					if ((tmp7)){
						HX_STACK_LINE(398)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(398)
					old = pre->next;
					HX_STACK_LINE(398)
					ret1 = old->next;
					HX_STACK_LINE(398)
					pre->next = ret1;
					HX_STACK_LINE(398)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(398)
					if ((tmp5)){
						HX_STACK_LINE(398)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(398)
				old->_inuse = false;
				HX_STACK_LINE(398)
				this->modified = true;
				HX_STACK_LINE(398)
				(this->length)--;
				HX_STACK_LINE(398)
				this->pushmod = true;
				HX_STACK_LINE(398)
				ret1;
			}
			HX_STACK_LINE(399)
			ret = true;
			HX_STACK_LINE(400)
			break;
		}
		HX_STACK_LINE(402)
		pre = cur;
		HX_STACK_LINE(403)
		cur = cur->next;
	}
	HX_STACK_LINE(405)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_try_remove,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::erase( ::zpp_nape::geom::ZPP_PartitionPair pre){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","erase",0x45bcb6a6,"zpp_nape.geom.ZPP_PartitionPair.erase","zpp_nape/geom/Triangular.hx",407,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(408)
	::zpp_nape::geom::ZPP_PartitionPair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	{
		HX_STACK_LINE(408)
		::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(408)
		::zpp_nape::geom::ZPP_PartitionPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(408)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		if ((tmp1)){
			HX_STACK_LINE(408)
			::zpp_nape::geom::ZPP_PartitionPair tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(408)
			old = tmp2;
			HX_STACK_LINE(408)
			ret = old->next;
			HX_STACK_LINE(408)
			this->next = ret;
			HX_STACK_LINE(408)
			::zpp_nape::geom::ZPP_PartitionPair tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(408)
			if ((tmp4)){
				HX_STACK_LINE(408)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(408)
			old = pre->next;
			HX_STACK_LINE(408)
			ret = old->next;
			HX_STACK_LINE(408)
			pre->next = ret;
			HX_STACK_LINE(408)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(408)
			if ((tmp2)){
				HX_STACK_LINE(408)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(408)
		old->_inuse = false;
		HX_STACK_LINE(408)
		this->modified = true;
		HX_STACK_LINE(408)
		(this->length)--;
		HX_STACK_LINE(408)
		this->pushmod = true;
		HX_STACK_LINE(408)
		tmp = ret;
	}
	HX_STACK_LINE(408)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,erase,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::inlined_erase( ::zpp_nape::geom::ZPP_PartitionPair pre){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_erase",0x8a614412,"zpp_nape.geom.ZPP_PartitionPair.inlined_erase","zpp_nape/geom/Triangular.hx",412,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(421)
	::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(422)
	::zpp_nape::geom::ZPP_PartitionPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(423)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(423)
	if ((tmp)){
		HX_STACK_LINE(424)
		::zpp_nape::geom::ZPP_PartitionPair tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(424)
		old = tmp1;
		HX_STACK_LINE(425)
		ret = old->next;
		HX_STACK_LINE(426)
		this->next = ret;
		HX_STACK_LINE(427)
		::zpp_nape::geom::ZPP_PartitionPair tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(427)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(427)
		if ((tmp3)){
			HX_STACK_LINE(427)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(430)
		old = pre->next;
		HX_STACK_LINE(431)
		ret = old->next;
		HX_STACK_LINE(432)
		pre->next = ret;
		HX_STACK_LINE(433)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(433)
		if ((tmp1)){
			HX_STACK_LINE(433)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(436)
	old->_inuse = false;
	HX_STACK_LINE(439)
	this->modified = true;
	HX_STACK_LINE(440)
	(this->length)--;
	HX_STACK_LINE(441)
	this->pushmod = true;
	HX_STACK_LINE(442)
	::zpp_nape::geom::ZPP_PartitionPair tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_erase,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::splice( ::zpp_nape::geom::ZPP_PartitionPair pre,int n){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","splice",0x38d2bfbc,"zpp_nape.geom.ZPP_PartitionPair.splice","zpp_nape/geom/Triangular.hx",444,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(445)
	while((true)){
		HX_STACK_LINE(445)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(445)
		if ((tmp1)){
			HX_STACK_LINE(445)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(445)
			tmp2 = false;
		}
		HX_STACK_LINE(445)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(445)
		if ((tmp3)){
			HX_STACK_LINE(445)
			break;
		}
		HX_STACK_LINE(445)
		::zpp_nape::geom::ZPP_PartitionPair tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(445)
		this->erase(tmp4);
	}
	HX_STACK_LINE(446)
	::zpp_nape::geom::ZPP_PartitionPair tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,splice,return )

Void ZPP_PartitionPair_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","clear",0x1afb3f4d,"zpp_nape.geom.ZPP_PartitionPair.clear","zpp_nape/geom/Triangular.hx",449,0x53295a96)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,clear,(void))

Void ZPP_PartitionPair_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_clear",0x5f9fccb9,"zpp_nape.geom.ZPP_PartitionPair.inlined_clear","zpp_nape/geom/Triangular.hx",454,0x53295a96)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,inlined_clear,(void))

Void ZPP_PartitionPair_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","reverse",0xaf7af6e2,"zpp_nape.geom.ZPP_PartitionPair.reverse","zpp_nape/geom/Triangular.hx",459,0x53295a96)
		HX_STACK_THIS(this)
		HX_STACK_LINE(460)
		::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		::zpp_nape::geom::ZPP_PartitionPair cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(461)
		::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(462)
		while((true)){
			HX_STACK_LINE(462)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(462)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(462)
			if ((tmp2)){
				HX_STACK_LINE(462)
				break;
			}
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_PartitionPair nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(464)
			cur->next = pre;
			HX_STACK_LINE(465)
			this->next = cur;
			HX_STACK_LINE(466)
			pre = cur;
			HX_STACK_LINE(467)
			cur = nx;
		}
		HX_STACK_LINE(469)
		this->modified = true;
		HX_STACK_LINE(470)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,reverse,(void))

bool ZPP_PartitionPair_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","empty",0x427a084d,"zpp_nape.geom.ZPP_PartitionPair.empty","zpp_nape/geom/Triangular.hx",474,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(475)
	::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(475)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(475)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,empty,return )

int ZPP_PartitionPair_obj::size( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","size",0xa238cb01,"zpp_nape.geom.ZPP_PartitionPair.size","zpp_nape/geom/Triangular.hx",479,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,size,return )

bool ZPP_PartitionPair_obj::has( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","has",0x9bac1d1a,"zpp_nape.geom.ZPP_PartitionPair.has","zpp_nape/geom/Triangular.hx",482,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(483)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	{
		HX_STACK_LINE(483)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			ret = false;
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				::zpp_nape::geom::ZPP_PartitionPair tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(483)
				::zpp_nape::geom::ZPP_PartitionPair cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(483)
				while((true)){
					HX_STACK_LINE(483)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(483)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(483)
					if ((tmp3)){
						HX_STACK_LINE(483)
						break;
					}
					HX_STACK_LINE(483)
					::zpp_nape::geom::ZPP_PartitionPair npite = cx_ite;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(483)
					{
						HX_STACK_LINE(483)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(483)
						if ((tmp4)){
							HX_STACK_LINE(483)
							ret = true;
							HX_STACK_LINE(483)
							break;
						}
					}
					HX_STACK_LINE(483)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(483)
		tmp = ret;
	}
	HX_STACK_LINE(483)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,has,return )

bool ZPP_PartitionPair_obj::inlined_has( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","inlined_has",0xf6443786,"zpp_nape.geom.ZPP_PartitionPair.inlined_has","zpp_nape/geom/Triangular.hx",487,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(496)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(497)
	{
		HX_STACK_LINE(498)
		ret = false;
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(500)
			::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(500)
			::zpp_nape::geom::ZPP_PartitionPair cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(501)
			while((true)){
				HX_STACK_LINE(501)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(501)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(501)
				if ((tmp2)){
					HX_STACK_LINE(501)
					break;
				}
				HX_STACK_LINE(502)
				::zpp_nape::geom::ZPP_PartitionPair npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(503)
				{
					HX_STACK_LINE(504)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(504)
					if ((tmp3)){
						HX_STACK_LINE(505)
						ret = true;
						HX_STACK_LINE(506)
						break;
					}
				}
				HX_STACK_LINE(509)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(513)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(513)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_has,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::front( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","front",0xd92de669,"zpp_nape.geom.ZPP_PartitionPair.front","zpp_nape/geom/Triangular.hx",517,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(518)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,front,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::back( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","back",0x96f60467,"zpp_nape.geom.ZPP_PartitionPair.back","zpp_nape/geom/Triangular.hx",520,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	::zpp_nape::geom::ZPP_PartitionPair ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(522)
	::zpp_nape::geom::ZPP_PartitionPair cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(523)
	while((true)){
		HX_STACK_LINE(523)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(523)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(523)
		if ((tmp2)){
			HX_STACK_LINE(523)
			break;
		}
		HX_STACK_LINE(524)
		ret = cur;
		HX_STACK_LINE(525)
		cur = cur->next;
	}
	HX_STACK_LINE(527)
	::zpp_nape::geom::ZPP_PartitionPair tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,back,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","iterator_at",0xfae327a4,"zpp_nape.geom.ZPP_PartitionPair.iterator_at","zpp_nape/geom/Triangular.hx",529,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(538)
	::zpp_nape::geom::ZPP_PartitionPair tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	::zpp_nape::geom::ZPP_PartitionPair ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(539)
	while((true)){
		HX_STACK_LINE(539)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		if ((tmp2)){
			HX_STACK_LINE(539)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(539)
			tmp3 = false;
		}
		HX_STACK_LINE(539)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		if ((tmp4)){
			HX_STACK_LINE(539)
			break;
		}
		HX_STACK_LINE(539)
		ret = ret->next;
	}
	HX_STACK_LINE(540)
	::zpp_nape::geom::ZPP_PartitionPair tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,iterator_at,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","at",0xef7a6f33,"zpp_nape.geom.ZPP_PartitionPair.at","zpp_nape/geom/Triangular.hx",542,0x53295a96)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(551)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(551)
	::zpp_nape::geom::ZPP_PartitionPair tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(551)
	::zpp_nape::geom::ZPP_PartitionPair it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(552)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(552)
	::zpp_nape::geom::ZPP_PartitionPair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(552)
	if ((tmp2)){
		HX_STACK_LINE(552)
		tmp3 = it;
	}
	else{
		HX_STACK_LINE(552)
		tmp3 = null();
	}
	HX_STACK_LINE(552)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,at,return )

Void ZPP_PartitionPair_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","free",0x99a7c6ec,"zpp_nape.geom.ZPP_PartitionPair.free","zpp_nape/geom/Triangular.hx",556,0x53295a96)
		HX_STACK_THIS(this)
		HX_STACK_LINE(557)
		::zpp_nape::geom::ZPP_PartitionVertex tmp = this->b = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		this->a = tmp;
		HX_STACK_LINE(558)
		this->node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,free,(void))

Void ZPP_PartitionPair_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","alloc",0xf4337235,"zpp_nape.geom.ZPP_PartitionPair.alloc","zpp_nape/geom/Triangular.hx",562,0x53295a96)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,alloc,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::zpp_pool;

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::get( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","get",0x9bab5e56,"zpp_nape.geom.ZPP_PartitionPair.get","zpp_nape/geom/Triangular.hx",569,0x53295a96)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(570)
	::zpp_nape::geom::ZPP_PartitionPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(572)
		::zpp_nape::geom::ZPP_PartitionPair tmp = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(572)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		if ((tmp1)){
			HX_STACK_LINE(573)
			::zpp_nape::geom::ZPP_PartitionPair tmp2 = ::zpp_nape::geom::ZPP_PartitionPair_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(573)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(579)
			::zpp_nape::geom::ZPP_PartitionPair tmp2 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(579)
			ret = tmp2;
			HX_STACK_LINE(580)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = ret->next;
			HX_STACK_LINE(581)
			ret->next = null();
		}
		HX_STACK_LINE(586)
		Dynamic();
	}
	HX_STACK_LINE(588)
	ret->a = a;
	HX_STACK_LINE(589)
	ret->b = b;
	HX_STACK_LINE(590)
	bool tmp = (a->id < b->id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	if ((tmp)){
		HX_STACK_LINE(591)
		ret->id = a->id;
		HX_STACK_LINE(592)
		ret->di = b->id;
	}
	else{
		HX_STACK_LINE(595)
		ret->id = b->id;
		HX_STACK_LINE(596)
		ret->di = a->id;
	}
	HX_STACK_LINE(598)
	::zpp_nape::geom::ZPP_PartitionPair tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(598)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,get,return )

Void ZPP_PartitionPair_obj::edge_swap( ::zpp_nape::geom::ZPP_PartitionPair a,::zpp_nape::geom::ZPP_PartitionPair b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","edge_swap",0x6d8a2ed5,"zpp_nape.geom.ZPP_PartitionPair.edge_swap","zpp_nape/geom/Triangular.hx",602,0x53295a96)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(603)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t = a->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(604)
		a->node = b->node;
		HX_STACK_LINE(605)
		b->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,edge_swap,(void))

bool ZPP_PartitionPair_obj::edge_lt( ::zpp_nape::geom::ZPP_PartitionPair a,::zpp_nape::geom::ZPP_PartitionPair b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_PartitionPair","edge_lt",0x89776e4a,"zpp_nape.geom.ZPP_PartitionPair.edge_lt","zpp_nape/geom/Triangular.hx",608,0x53295a96)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(609)
	bool tmp = (a->id < b->id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(609)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(609)
	if ((tmp1)){
		HX_STACK_LINE(609)
		bool tmp3 = (a->id == b->id);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(609)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(609)
		if ((tmp5)){
			HX_STACK_LINE(609)
			tmp2 = (a->di < b->di);
		}
		else{
			HX_STACK_LINE(609)
			tmp2 = false;
		}
	}
	else{
		HX_STACK_LINE(609)
		tmp2 = true;
	}
	HX_STACK_LINE(609)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,edge_lt,return )


ZPP_PartitionPair_obj::ZPP_PartitionPair_obj()
{
}

void ZPP_PartitionPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PartitionPair);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_END_CLASS();
}

void ZPP_PartitionPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(node,"node");
}

Dynamic ZPP_PartitionPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
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
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
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

bool ZPP_PartitionPair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edge_lt") ) { outValue = edge_lt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"edge_swap") ) { outValue = edge_swap_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_PartitionPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
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

bool ZPP_PartitionPair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_PartitionPair >(); return true; }
	}
	return false;
}

void ZPP_PartitionPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("di","\x85","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionPair*/ ,(int)offsetof(ZPP_PartitionPair_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_PartitionPair_obj,_inuse),HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba")},
	{hx::fsBool,(int)offsetof(ZPP_PartitionPair_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_PartitionPair_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZPP_PartitionPair_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionPair_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionVertex*/ ,(int)offsetof(ZPP_PartitionPair_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_PartitionPair_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_PartitionPair_obj,di),HX_HCSTRING("di","\x85","\x57","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_PartitionPair*/ ,(int)offsetof(ZPP_PartitionPair_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionPair*/ ,(void *) &ZPP_PartitionPair_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("di","\x85","\x57","\x00","\x00"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_PartitionPair_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("edge_swap","\x15","\x81","\x90","\xad"),
	HX_HCSTRING("edge_lt","\x8a","\xb0","\xf8","\xf4"),
	::String(null()) };

void ZPP_PartitionPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_PartitionPair","\x2e","\x5e","\x7f","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_PartitionPair_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_PartitionPair_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_PartitionPair_obj >;
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

void ZPP_PartitionPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
