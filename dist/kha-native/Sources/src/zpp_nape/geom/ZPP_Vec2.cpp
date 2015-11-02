#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Vec2_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","new",0xc50cb486,"zpp_nape.geom.ZPP_Vec2.new","zpp_nape/geom/Vec2.hx",174,0x8290c56f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(629)
	this->y = ((Float)0.0);
	HX_STACK_LINE(628)
	this->x = ((Float)0.0);
	HX_STACK_LINE(287)
	this->length = (int)0;
	HX_STACK_LINE(286)
	this->pushmod = false;
	HX_STACK_LINE(285)
	this->modified = false;
	HX_STACK_LINE(284)
	this->_inuse = false;
	HX_STACK_LINE(273)
	this->next = null();
	HX_STACK_LINE(232)
	this->weak = false;
	HX_STACK_LINE(205)
	this->outer = null();
	HX_STACK_LINE(192)
	this->_isimmutable = null();
	HX_STACK_LINE(191)
	this->_immutable = false;
	HX_STACK_LINE(176)
	this->_validate = null();
	HX_STACK_LINE(175)
	this->_invalidate = null();
}
;
	return null();
}

//ZPP_Vec2_obj::~ZPP_Vec2_obj() { }

Dynamic ZPP_Vec2_obj::__CreateEmpty() { return  new ZPP_Vec2_obj; }
hx::ObjectPtr< ZPP_Vec2_obj > ZPP_Vec2_obj::__new()
{  hx::ObjectPtr< ZPP_Vec2_obj > _result_ = new ZPP_Vec2_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Vec2_obj > _result_ = new ZPP_Vec2_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Vec2_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","validate",0xb50022b0,"zpp_nape.geom.ZPP_Vec2.validate","zpp_nape/geom/Vec2.hx",179,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		Dynamic tmp = this->_validate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(181)
			this->_validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,validate,(void))

Void ZPP_Vec2_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","invalidate",0xb492a615,"zpp_nape.geom.ZPP_Vec2.invalidate","zpp_nape/geom/Vec2.hx",186,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		Dynamic tmp = this->_invalidate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(188)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,invalidate,(void))

Void ZPP_Vec2_obj::immutable( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","immutable",0xcf72ace8,"zpp_nape.geom.ZPP_Vec2.immutable","zpp_nape/geom/Vec2.hx",195,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		bool tmp = this->_immutable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		if ((tmp)){
			HX_STACK_LINE(198)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(200)
		Dynamic tmp1 = this->_isimmutable_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		if ((tmp2)){
			HX_STACK_LINE(201)
			this->_isimmutable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,immutable,(void))

::nape::geom::Vec2 ZPP_Vec2_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","wrapper",0xcb99c479,"zpp_nape.geom.ZPP_Vec2.wrapper","zpp_nape/geom/Vec2.hx",208,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	::nape::geom::Vec2 tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	if ((tmp1)){
		HX_STACK_LINE(210)
		::nape::geom::Vec2 tmp2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		this->outer = tmp2;
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(212)
			::nape::geom::Vec2 tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			::zpp_nape::geom::ZPP_Vec2 o = tmp3->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(221)
				if ((tmp4)){
					HX_STACK_LINE(221)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(221)
					o->outer = null();
				}
				HX_STACK_LINE(221)
				o->_isimmutable = null();
				HX_STACK_LINE(221)
				o->_validate = null();
				HX_STACK_LINE(221)
				o->_invalidate = null();
			}
			HX_STACK_LINE(222)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			o->next = tmp4;
			HX_STACK_LINE(223)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(228)
		::nape::geom::Vec2 tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(230)
	::nape::geom::Vec2 tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,wrapper,return )

Void ZPP_Vec2_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","free",0xa0d159c6,"zpp_nape.geom.ZPP_Vec2.free","zpp_nape/geom/Vec2.hx",259,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(260)
		::nape::geom::Vec2 tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		if ((tmp1)){
			HX_STACK_LINE(261)
			::nape::geom::Vec2 tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			tmp2->zpp_inner = null();
			HX_STACK_LINE(262)
			this->outer = null();
		}
		HX_STACK_LINE(264)
		this->_isimmutable = null();
		HX_STACK_LINE(265)
		this->_validate = null();
		HX_STACK_LINE(266)
		this->_invalidate = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,free,(void))

Void ZPP_Vec2_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","alloc",0x316a5e1b,"zpp_nape.geom.ZPP_Vec2.alloc","zpp_nape/geom/Vec2.hx",271,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		this->weak = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,alloc,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","elem",0xa02395a9,"zpp_nape.geom.ZPP_Vec2.elem","zpp_nape/geom/Vec2.hx",277,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,elem,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","begin",0xc02ca3cf,"zpp_nape.geom.ZPP_Vec2.begin","zpp_nape/geom/Vec2.hx",281,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,begin,return )

Void ZPP_Vec2_obj::setbegin( ::zpp_nape::geom::ZPP_Vec2 i){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","setbegin",0xdb793561,"zpp_nape.geom.ZPP_Vec2.setbegin","zpp_nape/geom/Vec2.hx",290,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(291)
		this->next = i;
		HX_STACK_LINE(292)
		this->modified = true;
		HX_STACK_LINE(293)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,setbegin,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","add",0xc502d647,"zpp_nape.geom.ZPP_Vec2.add","zpp_nape/geom/Vec2.hx",295,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(296)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		::zpp_nape::geom::ZPP_Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			o->_inuse = true;
			HX_STACK_LINE(296)
			tmp1 = o;
		}
		HX_STACK_LINE(296)
		::zpp_nape::geom::ZPP_Vec2 temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(296)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		temp->next = tmp2;
		HX_STACK_LINE(296)
		this->next = temp;
		HX_STACK_LINE(296)
		this->modified = true;
		HX_STACK_LINE(296)
		(this->length)++;
		HX_STACK_LINE(296)
		tmp = o;
	}
	HX_STACK_LINE(296)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,add,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_add",0x9040c6b3,"zpp_nape.geom.ZPP_Vec2.inlined_add","zpp_nape/geom/Vec2.hx",300,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(309)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(310)
		o->_inuse = true;
		HX_STACK_LINE(311)
		tmp = o;
	}
	HX_STACK_LINE(309)
	::zpp_nape::geom::ZPP_Vec2 temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(313)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	temp->next = tmp1;
	HX_STACK_LINE(314)
	this->next = temp;
	HX_STACK_LINE(315)
	this->modified = true;
	HX_STACK_LINE(316)
	(this->length)++;
	HX_STACK_LINE(317)
	::zpp_nape::geom::ZPP_Vec2 tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_add,return )

Void ZPP_Vec2_obj::addAll( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","addAll",0x6b06c11a,"zpp_nape.geom.ZPP_Vec2.addAll","zpp_nape/geom/Vec2.hx",328,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(329)
		::zpp_nape::geom::ZPP_Vec2 cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(330)
		while((true)){
			HX_STACK_LINE(330)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(330)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(330)
			if ((tmp1)){
				HX_STACK_LINE(330)
				break;
			}
			HX_STACK_LINE(331)
			::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(332)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(332)
			this->add(tmp2);
			HX_STACK_LINE(333)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,addAll,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::insert( ::zpp_nape::geom::ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","insert",0x69e8fad3,"zpp_nape.geom.ZPP_Vec2.insert","zpp_nape/geom/Vec2.hx",337,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(338)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(338)
		::zpp_nape::geom::ZPP_Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(338)
		{
			HX_STACK_LINE(338)
			o->_inuse = true;
			HX_STACK_LINE(338)
			tmp1 = o;
		}
		HX_STACK_LINE(338)
		::zpp_nape::geom::ZPP_Vec2 temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(338)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(338)
		if ((tmp2)){
			HX_STACK_LINE(338)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(338)
			temp->next = tmp3;
			HX_STACK_LINE(338)
			this->next = temp;
		}
		else{
			HX_STACK_LINE(338)
			temp->next = cur->next;
			HX_STACK_LINE(338)
			cur->next = temp;
		}
		HX_STACK_LINE(338)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(338)
		this->pushmod = tmp3;
		HX_STACK_LINE(338)
		(this->length)++;
		HX_STACK_LINE(338)
		tmp = temp;
	}
	HX_STACK_LINE(338)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,insert,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_insert( ::zpp_nape::geom::ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_insert",0x6d6415e7,"zpp_nape.geom.ZPP_Vec2.inlined_insert","zpp_nape/geom/Vec2.hx",342,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(351)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	{
		HX_STACK_LINE(352)
		o->_inuse = true;
		HX_STACK_LINE(353)
		tmp = o;
	}
	HX_STACK_LINE(351)
	::zpp_nape::geom::ZPP_Vec2 temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(355)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	if ((tmp1)){
		HX_STACK_LINE(356)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		temp->next = tmp2;
		HX_STACK_LINE(357)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(360)
		temp->next = cur->next;
		HX_STACK_LINE(361)
		cur->next = temp;
	}
	HX_STACK_LINE(363)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	this->pushmod = tmp2;
	HX_STACK_LINE(364)
	(this->length)++;
	HX_STACK_LINE(365)
	::zpp_nape::geom::ZPP_Vec2 tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(365)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,inlined_insert,return )

Void ZPP_Vec2_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","pop",0xc50e41b7,"zpp_nape.geom.ZPP_Vec2.pop","zpp_nape/geom/Vec2.hx",368,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(368)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		::zpp_nape::geom::ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(368)
		this->next = ret->next;
		HX_STACK_LINE(368)
		ret->_inuse = false;
		HX_STACK_LINE(368)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		if ((tmp2)){
			HX_STACK_LINE(368)
			this->pushmod = true;
		}
		HX_STACK_LINE(368)
		this->modified = true;
		HX_STACK_LINE(368)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,pop,(void))

Void ZPP_Vec2_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_pop",0x904c3223,"zpp_nape.geom.ZPP_Vec2.inlined_pop","zpp_nape/geom/Vec2.hx",372,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(381)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		::zpp_nape::geom::ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(382)
		this->next = ret->next;
		HX_STACK_LINE(384)
		ret->_inuse = false;
		HX_STACK_LINE(387)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(387)
		if ((tmp2)){
			HX_STACK_LINE(387)
			this->pushmod = true;
		}
		HX_STACK_LINE(388)
		this->modified = true;
		HX_STACK_LINE(389)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_pop,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","pop_unsafe",0xa35508ee,"zpp_nape.geom.ZPP_Vec2.pop_unsafe","zpp_nape/geom/Vec2.hx",391,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(392)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	{
		HX_STACK_LINE(392)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		::zpp_nape::geom::ZPP_Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(392)
		this->pop();
		HX_STACK_LINE(392)
		tmp = ret;
	}
	HX_STACK_LINE(392)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,pop_unsafe,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_pop_unsafe",0xd5fd3e02,"zpp_nape.geom.ZPP_Vec2.inlined_pop_unsafe","zpp_nape/geom/Vec2.hx",396,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(405)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	::zpp_nape::geom::ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(406)
	this->pop();
	HX_STACK_LINE(407)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(407)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_pop_unsafe,return )

Void ZPP_Vec2_obj::remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","remove",0xd09453de,"zpp_nape.geom.ZPP_Vec2.remove","zpp_nape/geom/Vec2.hx",418,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(418)
		::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(418)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(418)
		::zpp_nape::geom::ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(418)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(418)
		while((true)){
			HX_STACK_LINE(418)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(418)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(418)
			if ((tmp2)){
				HX_STACK_LINE(418)
				break;
			}
			HX_STACK_LINE(418)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(418)
			if ((tmp3)){
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(418)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(418)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(418)
					if ((tmp4)){
						HX_STACK_LINE(418)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(418)
						old = tmp5;
						HX_STACK_LINE(418)
						ret1 = old->next;
						HX_STACK_LINE(418)
						this->next = ret1;
						HX_STACK_LINE(418)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(418)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(418)
						if ((tmp7)){
							HX_STACK_LINE(418)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(418)
						old = pre->next;
						HX_STACK_LINE(418)
						ret1 = old->next;
						HX_STACK_LINE(418)
						pre->next = ret1;
						HX_STACK_LINE(418)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(418)
						if ((tmp5)){
							HX_STACK_LINE(418)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(418)
					old->_inuse = false;
					HX_STACK_LINE(418)
					this->modified = true;
					HX_STACK_LINE(418)
					(this->length)--;
					HX_STACK_LINE(418)
					this->pushmod = true;
					HX_STACK_LINE(418)
					ret1;
				}
				HX_STACK_LINE(418)
				ret = true;
				HX_STACK_LINE(418)
				break;
			}
			HX_STACK_LINE(418)
			pre = cur;
			HX_STACK_LINE(418)
			cur = cur->next;
		}
		HX_STACK_LINE(418)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,remove,(void))

bool ZPP_Vec2_obj::try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","try_remove",0xba7f3ea2,"zpp_nape.geom.ZPP_Vec2.try_remove","zpp_nape/geom/Vec2.hx",420,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(429)
	::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(430)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(430)
	::zpp_nape::geom::ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(431)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(432)
	while((true)){
		HX_STACK_LINE(432)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(432)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(432)
		if ((tmp2)){
			HX_STACK_LINE(432)
			break;
		}
		HX_STACK_LINE(433)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(433)
		if ((tmp3)){
			HX_STACK_LINE(434)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(434)
			this->erase(tmp4);
			HX_STACK_LINE(435)
			ret = true;
			HX_STACK_LINE(436)
			break;
		}
		HX_STACK_LINE(438)
		pre = cur;
		HX_STACK_LINE(439)
		cur = cur->next;
	}
	HX_STACK_LINE(441)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,try_remove,return )

Void ZPP_Vec2_obj::inlined_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_remove",0xd40f6ef2,"zpp_nape.geom.ZPP_Vec2.inlined_remove","zpp_nape/geom/Vec2.hx",454,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(454)
		::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(454)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		::zpp_nape::geom::ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(454)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(454)
		while((true)){
			HX_STACK_LINE(454)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(454)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(454)
			if ((tmp2)){
				HX_STACK_LINE(454)
				break;
			}
			HX_STACK_LINE(454)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(454)
			if ((tmp3)){
				HX_STACK_LINE(454)
				{
					HX_STACK_LINE(454)
					::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(454)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(454)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(454)
					if ((tmp4)){
						HX_STACK_LINE(454)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(454)
						old = tmp5;
						HX_STACK_LINE(454)
						ret1 = old->next;
						HX_STACK_LINE(454)
						this->next = ret1;
						HX_STACK_LINE(454)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(454)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(454)
						if ((tmp7)){
							HX_STACK_LINE(454)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(454)
						old = pre->next;
						HX_STACK_LINE(454)
						ret1 = old->next;
						HX_STACK_LINE(454)
						pre->next = ret1;
						HX_STACK_LINE(454)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(454)
						if ((tmp5)){
							HX_STACK_LINE(454)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(454)
					old->_inuse = false;
					HX_STACK_LINE(454)
					this->modified = true;
					HX_STACK_LINE(454)
					(this->length)--;
					HX_STACK_LINE(454)
					this->pushmod = true;
					HX_STACK_LINE(454)
					ret1;
				}
				HX_STACK_LINE(454)
				ret = true;
				HX_STACK_LINE(454)
				break;
			}
			HX_STACK_LINE(454)
			pre = cur;
			HX_STACK_LINE(454)
			cur = cur->next;
		}
		HX_STACK_LINE(454)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_remove,(void))

bool ZPP_Vec2_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_try_remove",0xed2773b6,"zpp_nape.geom.ZPP_Vec2.inlined_try_remove","zpp_nape/geom/Vec2.hx",458,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(467)
	::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(468)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(468)
	::zpp_nape::geom::ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(469)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(470)
	while((true)){
		HX_STACK_LINE(470)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(470)
		if ((tmp2)){
			HX_STACK_LINE(470)
			break;
		}
		HX_STACK_LINE(471)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(471)
		if ((tmp3)){
			HX_STACK_LINE(472)
			{
				HX_STACK_LINE(472)
				::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(472)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(472)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(472)
				if ((tmp4)){
					HX_STACK_LINE(472)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(472)
					old = tmp5;
					HX_STACK_LINE(472)
					ret1 = old->next;
					HX_STACK_LINE(472)
					this->next = ret1;
					HX_STACK_LINE(472)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(472)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(472)
					if ((tmp7)){
						HX_STACK_LINE(472)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(472)
					old = pre->next;
					HX_STACK_LINE(472)
					ret1 = old->next;
					HX_STACK_LINE(472)
					pre->next = ret1;
					HX_STACK_LINE(472)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(472)
					if ((tmp5)){
						HX_STACK_LINE(472)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(472)
				old->_inuse = false;
				HX_STACK_LINE(472)
				this->modified = true;
				HX_STACK_LINE(472)
				(this->length)--;
				HX_STACK_LINE(472)
				this->pushmod = true;
				HX_STACK_LINE(472)
				ret1;
			}
			HX_STACK_LINE(473)
			ret = true;
			HX_STACK_LINE(474)
			break;
		}
		HX_STACK_LINE(476)
		pre = cur;
		HX_STACK_LINE(477)
		cur = cur->next;
	}
	HX_STACK_LINE(479)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_try_remove,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::erase( ::zpp_nape::geom::ZPP_Vec2 pre){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","erase",0x82f3a28c,"zpp_nape.geom.ZPP_Vec2.erase","zpp_nape/geom/Vec2.hx",481,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(482)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(482)
		::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(482)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(482)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(482)
		if ((tmp1)){
			HX_STACK_LINE(482)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(482)
			old = tmp2;
			HX_STACK_LINE(482)
			ret = old->next;
			HX_STACK_LINE(482)
			this->next = ret;
			HX_STACK_LINE(482)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(482)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(482)
			if ((tmp4)){
				HX_STACK_LINE(482)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(482)
			old = pre->next;
			HX_STACK_LINE(482)
			ret = old->next;
			HX_STACK_LINE(482)
			pre->next = ret;
			HX_STACK_LINE(482)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(482)
			if ((tmp2)){
				HX_STACK_LINE(482)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(482)
		old->_inuse = false;
		HX_STACK_LINE(482)
		this->modified = true;
		HX_STACK_LINE(482)
		(this->length)--;
		HX_STACK_LINE(482)
		this->pushmod = true;
		HX_STACK_LINE(482)
		tmp = ret;
	}
	HX_STACK_LINE(482)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,erase,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_erase( ::zpp_nape::geom::ZPP_Vec2 pre){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_erase",0x0ddf85f8,"zpp_nape.geom.ZPP_Vec2.inlined_erase","zpp_nape/geom/Vec2.hx",486,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(495)
	::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(496)
	::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(497)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	if ((tmp)){
		HX_STACK_LINE(498)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(498)
		old = tmp1;
		HX_STACK_LINE(499)
		ret = old->next;
		HX_STACK_LINE(500)
		this->next = ret;
		HX_STACK_LINE(501)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(501)
		if ((tmp3)){
			HX_STACK_LINE(501)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(504)
		old = pre->next;
		HX_STACK_LINE(505)
		ret = old->next;
		HX_STACK_LINE(506)
		pre->next = ret;
		HX_STACK_LINE(507)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(507)
		if ((tmp1)){
			HX_STACK_LINE(507)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(510)
	old->_inuse = false;
	HX_STACK_LINE(513)
	this->modified = true;
	HX_STACK_LINE(514)
	(this->length)--;
	HX_STACK_LINE(515)
	this->pushmod = true;
	HX_STACK_LINE(516)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(516)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_erase,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::splice( ::zpp_nape::geom::ZPP_Vec2 pre,int n){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","splice",0x8baa3d16,"zpp_nape.geom.ZPP_Vec2.splice","zpp_nape/geom/Vec2.hx",518,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(519)
	while((true)){
		HX_STACK_LINE(519)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(519)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(519)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(519)
		if ((tmp1)){
			HX_STACK_LINE(519)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(519)
			tmp2 = false;
		}
		HX_STACK_LINE(519)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(519)
		if ((tmp3)){
			HX_STACK_LINE(519)
			break;
		}
		HX_STACK_LINE(519)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(519)
		this->erase(tmp4);
	}
	HX_STACK_LINE(520)
	::zpp_nape::geom::ZPP_Vec2 tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(520)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,splice,return )

Void ZPP_Vec2_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","clear",0x58322b33,"zpp_nape.geom.ZPP_Vec2.clear","zpp_nape/geom/Vec2.hx",523,0x8290c56f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,clear,(void))

Void ZPP_Vec2_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_clear",0xe31e0e9f,"zpp_nape.geom.ZPP_Vec2.inlined_clear","zpp_nape/geom/Vec2.hx",528,0x8290c56f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_clear,(void))

Void ZPP_Vec2_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","reverse",0xd9312848,"zpp_nape.geom.ZPP_Vec2.reverse","zpp_nape/geom/Vec2.hx",533,0x8290c56f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		::zpp_nape::geom::ZPP_Vec2 cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(535)
		::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(536)
		while((true)){
			HX_STACK_LINE(536)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(536)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(536)
			if ((tmp2)){
				HX_STACK_LINE(536)
				break;
			}
			HX_STACK_LINE(537)
			::zpp_nape::geom::ZPP_Vec2 nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(538)
			cur->next = pre;
			HX_STACK_LINE(539)
			this->next = cur;
			HX_STACK_LINE(540)
			pre = cur;
			HX_STACK_LINE(541)
			cur = nx;
		}
		HX_STACK_LINE(543)
		this->modified = true;
		HX_STACK_LINE(544)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,reverse,(void))

bool ZPP_Vec2_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","empty",0x7fb0f433,"zpp_nape.geom.ZPP_Vec2.empty","zpp_nape/geom/Vec2.hx",548,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(549)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(549)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,empty,return )

int ZPP_Vec2_obj::size( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","size",0xa9625ddb,"zpp_nape.geom.ZPP_Vec2.size","zpp_nape/geom/Vec2.hx",553,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(554)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(554)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,size,return )

bool ZPP_Vec2_obj::has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","has",0xc5082380,"zpp_nape.geom.ZPP_Vec2.has","zpp_nape/geom/Vec2.hx",556,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(557)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	{
		HX_STACK_LINE(557)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			ret = false;
			HX_STACK_LINE(557)
			{
				HX_STACK_LINE(557)
				::zpp_nape::geom::ZPP_Vec2 tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(557)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(557)
				while((true)){
					HX_STACK_LINE(557)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(557)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(557)
					if ((tmp3)){
						HX_STACK_LINE(557)
						break;
					}
					HX_STACK_LINE(557)
					::zpp_nape::geom::ZPP_Vec2 npite = cx_ite;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(557)
					{
						HX_STACK_LINE(557)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(557)
						if ((tmp4)){
							HX_STACK_LINE(557)
							ret = true;
							HX_STACK_LINE(557)
							break;
						}
					}
					HX_STACK_LINE(557)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(557)
		tmp = ret;
	}
	HX_STACK_LINE(557)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,has,return )

bool ZPP_Vec2_obj::inlined_has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","inlined_has",0x904613ec,"zpp_nape.geom.ZPP_Vec2.inlined_has","zpp_nape/geom/Vec2.hx",561,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(570)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(572)
		ret = false;
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(574)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(574)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(575)
			while((true)){
				HX_STACK_LINE(575)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(575)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(575)
				if ((tmp2)){
					HX_STACK_LINE(575)
					break;
				}
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(577)
				{
					HX_STACK_LINE(578)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(578)
					if ((tmp3)){
						HX_STACK_LINE(579)
						ret = true;
						HX_STACK_LINE(580)
						break;
					}
				}
				HX_STACK_LINE(583)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(587)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_has,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::front( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","front",0x1664d24f,"zpp_nape.geom.ZPP_Vec2.front","zpp_nape/geom/Vec2.hx",591,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(592)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(592)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,front,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::back( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","back",0x9e1f9741,"zpp_nape.geom.ZPP_Vec2.back","zpp_nape/geom/Vec2.hx",594,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(595)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(595)
	::zpp_nape::geom::ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(596)
	::zpp_nape::geom::ZPP_Vec2 cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(597)
	while((true)){
		HX_STACK_LINE(597)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(597)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(597)
		if ((tmp2)){
			HX_STACK_LINE(597)
			break;
		}
		HX_STACK_LINE(598)
		ret = cur;
		HX_STACK_LINE(599)
		cur = cur->next;
	}
	HX_STACK_LINE(601)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(601)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,back,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","iterator_at",0x94e5040a,"zpp_nape.geom.ZPP_Vec2.iterator_at","zpp_nape/geom/Vec2.hx",603,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(612)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	::zpp_nape::geom::ZPP_Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(613)
	while((true)){
		HX_STACK_LINE(613)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(613)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(613)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(613)
		if ((tmp2)){
			HX_STACK_LINE(613)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(613)
			tmp3 = false;
		}
		HX_STACK_LINE(613)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(613)
		if ((tmp4)){
			HX_STACK_LINE(613)
			break;
		}
		HX_STACK_LINE(613)
		ret = ret->next;
	}
	HX_STACK_LINE(614)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(614)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,iterator_at,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","at",0x18fdb78d,"zpp_nape.geom.ZPP_Vec2.at","zpp_nape/geom/Vec2.hx",616,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(625)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(625)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(625)
	::zpp_nape::geom::ZPP_Vec2 it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(626)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(626)
	::zpp_nape::geom::ZPP_Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(626)
	if ((tmp2)){
		HX_STACK_LINE(626)
		tmp3 = it;
	}
	else{
		HX_STACK_LINE(626)
		tmp3 = null();
	}
	HX_STACK_LINE(626)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,at,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","copy",0x9ed378cf,"zpp_nape.geom.ZPP_Vec2.copy","zpp_nape/geom/Vec2.hx",676,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(677)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(677)
	{
		HX_STACK_LINE(677)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(677)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(677)
		{
			HX_STACK_LINE(677)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(677)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(677)
			if ((tmp2)){
				HX_STACK_LINE(677)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(677)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(677)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(677)
				ret = tmp3;
				HX_STACK_LINE(677)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(677)
				ret->next = null();
			}
			HX_STACK_LINE(677)
			ret->weak = false;
		}
		HX_STACK_LINE(677)
		ret->_immutable = immutable;
		HX_STACK_LINE(677)
		{
			HX_STACK_LINE(677)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(677)
			ret->x = tmp1;
			HX_STACK_LINE(677)
			Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(677)
			ret->y = tmp2;
			HX_STACK_LINE(677)
			{
			}
		}
		HX_STACK_LINE(677)
		tmp = ret;
	}
	HX_STACK_LINE(677)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,copy,return )

::String ZPP_Vec2_obj::toString( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","toString",0xe88b22c6,"zpp_nape.geom.ZPP_Vec2.toString","zpp_nape/geom/Vec2.hx",679,0x8290c56f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(680)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(680)
	::String tmp1 = (HX_HCSTRING("{ x: ","\xf9","\x6e","\xcb","\xe7") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(680)
	::String tmp2 = (tmp1 + HX_HCSTRING(" y: ","\x3f","\xd7","\x82","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(680)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(680)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(680)
	::String tmp5 = (tmp4 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(680)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,toString,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::zpp_pool;

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::get( Float x,Float y,hx::Null< bool >  __o_immutable){
bool immutable = __o_immutable.Default(false);
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Vec2","get",0xc50764bc,"zpp_nape.geom.ZPP_Vec2.get","zpp_nape/geom/Vec2.hx",632,0x8290c56f)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(immutable,"immutable")
{
		HX_STACK_LINE(633)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(635)
			::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(635)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(635)
			if ((tmp1)){
				HX_STACK_LINE(636)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(636)
				ret = tmp2;
			}
			else{
				HX_STACK_LINE(642)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(642)
				ret = tmp2;
				HX_STACK_LINE(643)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(644)
				ret->next = null();
			}
			HX_STACK_LINE(649)
			ret->weak = false;
		}
		HX_STACK_LINE(651)
		ret->_immutable = immutable;
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(653)
			ret->x = x;
			HX_STACK_LINE(654)
			ret->y = y;
			HX_STACK_LINE(663)
			{
			}
		}
		HX_STACK_LINE(672)
		::zpp_nape::geom::ZPP_Vec2 tmp = ret;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Vec2_obj,get,return )


ZPP_Vec2_obj::ZPP_Vec2_obj()
{
}

void ZPP_Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Vec2);
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_immutable,"_immutable");
	HX_MARK_MEMBER_NAME(_isimmutable,"_isimmutable");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(weak,"weak");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void ZPP_Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_immutable,"_immutable");
	HX_VISIT_MEMBER_NAME(_isimmutable,"_isimmutable");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(weak,"weak");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic ZPP_Vec2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
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
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		if (HX_FIELD_EQ(inName,"immutable") ) { return immutable_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"_immutable") ) { return _immutable; }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isimmutable") ) { return _isimmutable; }
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

bool ZPP_Vec2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic ZPP_Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { weak=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
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
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_immutable") ) { _immutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isimmutable") ) { _isimmutable=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Vec2_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return true; }
	}
	return false;
}

void ZPP_Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_immutable","\x03","\xa4","\x69","\xc2"));
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Vec2_obj,_invalidate),HX_HCSTRING("_invalidate","\x9a","\xe6","\xb3","\x59")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Vec2_obj,_validate),HX_HCSTRING("_validate","\xf5","\xc7","\x79","\x4c")},
	{hx::fsBool,(int)offsetof(ZPP_Vec2_obj,_immutable),HX_HCSTRING("_immutable","\x03","\xa4","\x69","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Vec2_obj,_isimmutable),HX_HCSTRING("_isimmutable","\x19","\xad","\x7e","\x09")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Vec2_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsBool,(int)offsetof(ZPP_Vec2_obj,weak),HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Vec2_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_Vec2_obj,_inuse),HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba")},
	{hx::fsBool,(int)offsetof(ZPP_Vec2_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_Vec2_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZPP_Vec2_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(ZPP_Vec2_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Vec2_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(void *) &ZPP_Vec2_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_invalidate","\x9a","\xe6","\xb3","\x59"),
	HX_HCSTRING("_validate","\xf5","\xc7","\x79","\x4c"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("_immutable","\x03","\xa4","\x69","\xc2"),
	HX_HCSTRING("_isimmutable","\x19","\xad","\x7e","\x09"),
	HX_HCSTRING("immutable","\x42","\x28","\xc7","\x66"),
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
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
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Vec2_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Vec2_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Vec2_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Vec2_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Vec2_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_Vec2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Vec2","\x94","\xb9","\xb2","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Vec2_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Vec2_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Vec2_obj >;
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

void ZPP_Vec2_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
