#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Vec2_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("nape.geom.Vec2","new",0x3252e95c,"nape.geom.Vec2.new","nape/geom/Vec2.hx",204,0x020b6534)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(212)
	this->zpp_pool = null();
	HX_STACK_LINE(208)
	this->zpp_inner = null();
	HX_STACK_LINE(402)
	bool tmp = (x != x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(402)
	if ((tmp1)){
		HX_STACK_LINE(402)
		tmp2 = (y != y);
	}
	else{
		HX_STACK_LINE(402)
		tmp2 = true;
	}
	HX_STACK_LINE(402)
	if ((tmp2)){
		HX_STACK_LINE(403)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
	}
	HX_STACK_LINE(406)
	::zpp_nape::geom::ZPP_Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(406)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(406)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(406)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(406)
			if ((tmp5)){
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(406)
				ret = tmp6;
			}
			else{
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(406)
				ret = tmp6;
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(406)
				ret->next = null();
			}
			HX_STACK_LINE(406)
			ret->weak = false;
		}
		HX_STACK_LINE(406)
		ret->_immutable = immutable;
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			ret->x = x;
			HX_STACK_LINE(406)
			ret->y = y;
			HX_STACK_LINE(406)
			{
			}
		}
		HX_STACK_LINE(406)
		tmp3 = ret;
	}
	HX_STACK_LINE(406)
	this->zpp_inner = tmp3;
	HX_STACK_LINE(407)
	::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(407)
	tmp4->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Vec2_obj::~Vec2_obj() { }

Dynamic Vec2_obj::__CreateEmpty() { return  new Vec2_obj; }
hx::ObjectPtr< Vec2_obj > Vec2_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Vec2_obj > _result_ = new Vec2_obj();
	_result_->__construct(__o_x,__o_y);
	return _result_;}

Dynamic Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec2_obj > _result_ = new Vec2_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Vec2_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.Vec2","dispose",0x0fb1c79b,"nape.geom.Vec2.dispose","nape/geom/Vec2.hx",328,0x020b6534)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(331)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(331)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(331)
			if ((tmp)){
				HX_STACK_LINE(331)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(331)
				tmp1 = false;
			}
			HX_STACK_LINE(331)
			if ((tmp1)){
				HX_STACK_LINE(331)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(331)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(331)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(334)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(334)
			bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(334)
			if ((tmp1)){
				HX_STACK_LINE(334)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(334)
			bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			if ((tmp2)){
				HX_STACK_LINE(334)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(336)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		bool tmp1 = tmp->_inuse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		if ((tmp1)){
			HX_STACK_LINE(337)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
		}
		HX_STACK_LINE(340)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		::zpp_nape::geom::ZPP_Vec2 inner = tmp2;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(341)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(341)
		tmp3->outer = null();
		HX_STACK_LINE(342)
		this->zpp_inner = null();
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(344)
			::nape::geom::Vec2 o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(354)
			o->zpp_pool = null();
			HX_STACK_LINE(355)
			::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			if ((tmp5)){
				HX_STACK_LINE(355)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(355)
				tmp6->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(357)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(367)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(371)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(380)
			{
				HX_STACK_LINE(380)
				bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(380)
				if ((tmp4)){
					HX_STACK_LINE(380)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(380)
					o->outer = null();
				}
				HX_STACK_LINE(380)
				o->_isimmutable = null();
				HX_STACK_LINE(380)
				o->_validate = null();
				HX_STACK_LINE(380)
				o->_invalidate = null();
			}
			HX_STACK_LINE(381)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			o->next = tmp4;
			HX_STACK_LINE(382)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,dispose,(void))

::nape::geom::Vec2 Vec2_obj::copy( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","copy",0xcefb7f39,"nape.geom.Vec2.copy","nape/geom/Vec2.hx",425,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(426)
		{
			HX_STACK_LINE(428)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(428)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(428)
			if ((tmp)){
				HX_STACK_LINE(428)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(428)
				tmp1 = false;
			}
			HX_STACK_LINE(428)
			if ((tmp1)){
				HX_STACK_LINE(428)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(428)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(428)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(431)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				bool tmp2 = this->zpp_disp;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(431)
				if ((tmp2)){
					HX_STACK_LINE(431)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(431)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(431)
					HX_STACK_DO_THROW(tmp4);
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(431)
					if ((tmp4)){
						HX_STACK_LINE(431)
						_this->_validate();
					}
				}
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(431)
				tmp1 = tmp3->x;
			}
			HX_STACK_LINE(431)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(431)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				bool tmp3 = this->zpp_disp;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(431)
				if ((tmp3)){
					HX_STACK_LINE(431)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(431)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(431)
					HX_STACK_DO_THROW(tmp5);
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(431)
					if ((tmp5)){
						HX_STACK_LINE(431)
						_this->_validate();
					}
				}
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(431)
				tmp2 = tmp4->y;
			}
			HX_STACK_LINE(431)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(431)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(431)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(431)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(431)
			if ((tmp4)){
				HX_STACK_LINE(431)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(431)
				tmp5 = true;
			}
			HX_STACK_LINE(431)
			if ((tmp5)){
				HX_STACK_LINE(431)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(431)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(431)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(431)
				if ((tmp7)){
					HX_STACK_LINE(431)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(431)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(431)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(431)
					ret = tmp8;
					HX_STACK_LINE(431)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(431)
					ret->zpp_pool = null();
					HX_STACK_LINE(431)
					ret->zpp_disp = false;
					HX_STACK_LINE(431)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(431)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(431)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(431)
					if ((tmp11)){
						HX_STACK_LINE(431)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(431)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(431)
			if ((tmp6)){
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(431)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(431)
						if ((tmp9)){
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(431)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(431)
							ret1 = tmp10;
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(431)
							ret1->next = null();
						}
						HX_STACK_LINE(431)
						ret1->weak = false;
					}
					HX_STACK_LINE(431)
					ret1->_immutable = immutable;
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						ret1->x = x;
						HX_STACK_LINE(431)
						ret1->y = y;
						HX_STACK_LINE(431)
						{
						}
					}
					HX_STACK_LINE(431)
					tmp7 = ret1;
				}
				HX_STACK_LINE(431)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(431)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(431)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(431)
					if ((tmp7)){
						HX_STACK_LINE(431)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(431)
						tmp8 = false;
					}
					HX_STACK_LINE(431)
					if ((tmp8)){
						HX_STACK_LINE(431)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(431)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(431)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(431)
					if ((tmp7)){
						HX_STACK_LINE(431)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(431)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(431)
					if ((tmp8)){
						HX_STACK_LINE(431)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(431)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(431)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(431)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(431)
				if ((tmp8)){
					HX_STACK_LINE(431)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(431)
					tmp9 = true;
				}
				HX_STACK_LINE(431)
				if ((tmp9)){
					HX_STACK_LINE(431)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(431)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(431)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(431)
						if ((tmp11)){
							HX_STACK_LINE(431)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(431)
							tmp12 = false;
						}
						HX_STACK_LINE(431)
						if ((tmp12)){
							HX_STACK_LINE(431)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(431)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(431)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(431)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(431)
						if ((tmp11)){
							HX_STACK_LINE(431)
							_this->_validate();
						}
					}
					HX_STACK_LINE(431)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(431)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(431)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(431)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(431)
				if ((tmp12)){
					HX_STACK_LINE(431)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						{
							HX_STACK_LINE(431)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(431)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(431)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(431)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(431)
							if ((tmp18)){
								HX_STACK_LINE(431)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(431)
								tmp17 = false;
							}
							HX_STACK_LINE(431)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(431)
							if ((tmp19)){
								HX_STACK_LINE(431)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(431)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(431)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(431)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(431)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(431)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(431)
						{
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(431)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(431)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(431)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(431)
							if ((tmp17)){
								HX_STACK_LINE(431)
								_this->_validate();
							}
						}
						HX_STACK_LINE(431)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(431)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(431)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(431)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(431)
					tmp13 = false;
				}
				HX_STACK_LINE(431)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(431)
				if ((tmp14)){
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(431)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(431)
						{
						}
					}
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(431)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(431)
						if ((tmp15)){
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(431)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(431)
				ret;
			}
			HX_STACK_LINE(431)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(431)
			tmp = ret;
		}
		HX_STACK_LINE(431)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,copy,return )

Float Vec2_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_x",0x9414f54b,"nape.geom.Vec2.get_x","nape/geom/Vec2.hx",523,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(524)
	{
		HX_STACK_LINE(526)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(526)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(526)
		if ((tmp)){
			HX_STACK_LINE(526)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(526)
			tmp1 = false;
		}
		HX_STACK_LINE(526)
		if ((tmp1)){
			HX_STACK_LINE(526)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(526)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(526)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(529)
	{
		HX_STACK_LINE(529)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(529)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(529)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(529)
		if ((tmp1)){
			HX_STACK_LINE(529)
			_this->_validate();
		}
	}
	HX_STACK_LINE(530)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(530)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_x,return )

Float Vec2_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.Vec2","set_x",0x7ce3eb57,"nape.geom.Vec2.set_x","nape/geom/Vec2.hx",532,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(534)
		{
			HX_STACK_LINE(536)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(536)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(536)
			if ((tmp)){
				HX_STACK_LINE(536)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(536)
				tmp1 = false;
			}
			HX_STACK_LINE(536)
			if ((tmp1)){
				HX_STACK_LINE(536)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(536)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(536)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(539)
		{
			HX_STACK_LINE(539)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(539)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(539)
			bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(539)
			if ((tmp1)){
				HX_STACK_LINE(539)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(539)
			bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(539)
			if ((tmp2)){
				HX_STACK_LINE(539)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(540)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(540)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(540)
				if ((tmp1)){
					HX_STACK_LINE(540)
					tmp2 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(540)
					tmp2 = false;
				}
				HX_STACK_LINE(540)
				if ((tmp2)){
					HX_STACK_LINE(540)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(540)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(540)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(540)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(540)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(540)
				if ((tmp2)){
					HX_STACK_LINE(540)
					_this->_validate();
				}
			}
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(540)
			tmp = tmp1->x;
		}
		HX_STACK_LINE(540)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(540)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(540)
		if ((tmp2)){
			HX_STACK_LINE(542)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(542)
			if ((tmp3)){
				HX_STACK_LINE(543)
				::String tmp4 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(543)
				::String tmp5 = (tmp4 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(543)
				HX_STACK_DO_THROW(tmp5);
			}
			HX_STACK_LINE(546)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(546)
			tmp4->x = x;
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(547)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(547)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(547)
				bool tmp6 = (_this->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(547)
				if ((tmp6)){
					HX_STACK_LINE(547)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = _this;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(547)
					_this->_invalidate(tmp7);
				}
			}
		}
	}
	HX_STACK_LINE(550)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(550)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(550)
			if ((tmp1)){
				HX_STACK_LINE(550)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(550)
				tmp2 = false;
			}
			HX_STACK_LINE(550)
			if ((tmp2)){
				HX_STACK_LINE(550)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(550)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(550)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(550)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(550)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(550)
			if ((tmp2)){
				HX_STACK_LINE(550)
				_this->_validate();
			}
		}
		HX_STACK_LINE(550)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(550)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(550)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_x,return )

Float Vec2_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_y",0x9414f54c,"nape.geom.Vec2.get_y","nape/geom/Vec2.hx",559,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(560)
	{
		HX_STACK_LINE(562)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(562)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		if ((tmp)){
			HX_STACK_LINE(562)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(562)
			tmp1 = false;
		}
		HX_STACK_LINE(562)
		if ((tmp1)){
			HX_STACK_LINE(562)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(562)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(562)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(565)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(565)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		if ((tmp1)){
			HX_STACK_LINE(565)
			_this->_validate();
		}
	}
	HX_STACK_LINE(566)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(566)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(566)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_y,return )

Float Vec2_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.Vec2","set_y",0x7ce3eb58,"nape.geom.Vec2.set_y","nape/geom/Vec2.hx",568,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(569)
	{
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(572)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(572)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(572)
			if ((tmp)){
				HX_STACK_LINE(572)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(572)
				tmp1 = false;
			}
			HX_STACK_LINE(572)
			if ((tmp1)){
				HX_STACK_LINE(572)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(572)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(572)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(575)
		{
			HX_STACK_LINE(575)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(575)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(575)
			bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(575)
			if ((tmp1)){
				HX_STACK_LINE(575)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(575)
			bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(575)
			if ((tmp2)){
				HX_STACK_LINE(575)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(576)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(576)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(576)
				if ((tmp1)){
					HX_STACK_LINE(576)
					tmp2 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(576)
					tmp2 = false;
				}
				HX_STACK_LINE(576)
				if ((tmp2)){
					HX_STACK_LINE(576)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(576)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(576)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(576)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(576)
				if ((tmp2)){
					HX_STACK_LINE(576)
					_this->_validate();
				}
			}
			HX_STACK_LINE(576)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(576)
			tmp = tmp1->y;
		}
		HX_STACK_LINE(576)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(576)
		if ((tmp2)){
			HX_STACK_LINE(578)
			bool tmp3 = (y != y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(578)
			if ((tmp3)){
				HX_STACK_LINE(579)
				::String tmp4 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(579)
				::String tmp5 = (tmp4 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(579)
				HX_STACK_DO_THROW(tmp5);
			}
			HX_STACK_LINE(582)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(582)
			tmp4->y = y;
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(583)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(583)
				bool tmp6 = (_this->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(583)
				if ((tmp6)){
					HX_STACK_LINE(583)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = _this;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(583)
					_this->_invalidate(tmp7);
				}
			}
		}
	}
	HX_STACK_LINE(586)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	{
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(586)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(586)
			if ((tmp1)){
				HX_STACK_LINE(586)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(586)
				tmp2 = false;
			}
			HX_STACK_LINE(586)
			if ((tmp2)){
				HX_STACK_LINE(586)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(586)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(586)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(586)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(586)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(586)
			if ((tmp2)){
				HX_STACK_LINE(586)
				_this->_validate();
			}
		}
		HX_STACK_LINE(586)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(586)
		tmp = tmp1->y;
	}
	HX_STACK_LINE(586)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_y,return )

Float Vec2_obj::get_length( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_length",0x33cb4333,"nape.geom.Vec2.get_length","nape/geom/Vec2.hx",599,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(600)
	{
		HX_STACK_LINE(602)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(602)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(602)
		if ((tmp)){
			HX_STACK_LINE(602)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(602)
			tmp1 = false;
		}
		HX_STACK_LINE(602)
		if ((tmp1)){
			HX_STACK_LINE(602)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(602)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(602)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(605)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(605)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			if ((tmp1)){
				HX_STACK_LINE(605)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(605)
				tmp2 = false;
			}
			HX_STACK_LINE(605)
			if ((tmp2)){
				HX_STACK_LINE(605)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(605)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(605)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			if ((tmp2)){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(605)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(605)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(605)
			if ((tmp2)){
				HX_STACK_LINE(605)
				tmp3 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(605)
				tmp3 = false;
			}
			HX_STACK_LINE(605)
			if ((tmp3)){
				HX_STACK_LINE(605)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(605)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(605)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(605)
			if ((tmp3)){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(605)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(605)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(605)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(605)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			if ((tmp4)){
				HX_STACK_LINE(605)
				tmp5 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(605)
				tmp5 = false;
			}
			HX_STACK_LINE(605)
			if ((tmp5)){
				HX_STACK_LINE(605)
				::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(605)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(605)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			if ((tmp5)){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(605)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(605)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(605)
			if ((tmp5)){
				HX_STACK_LINE(605)
				tmp6 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(605)
				tmp6 = false;
			}
			HX_STACK_LINE(605)
			if ((tmp6)){
				HX_STACK_LINE(605)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(605)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(605)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(605)
			if ((tmp6)){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(605)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(605)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(605)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(605)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(605)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_length,return )

Float Vec2_obj::set_length( Float length){
	HX_STACK_FRAME("nape.geom.Vec2","set_length",0x3748e1a7,"nape.geom.Vec2.set_length","nape/geom/Vec2.hx",607,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(608)
	{
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(611)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(611)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(611)
			if ((tmp)){
				HX_STACK_LINE(611)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(611)
				tmp1 = false;
			}
			HX_STACK_LINE(611)
			if ((tmp1)){
				HX_STACK_LINE(611)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(611)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(611)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(614)
			if ((tmp1)){
				HX_STACK_LINE(614)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(614)
			bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			if ((tmp2)){
				HX_STACK_LINE(614)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(616)
		bool tmp = (length != length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		if ((tmp)){
			HX_STACK_LINE(617)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2::length cannot be NaN","\x0d","\x59","\xb0","\x59"));
		}
		HX_STACK_LINE(619)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(619)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(619)
				if ((tmp2)){
					HX_STACK_LINE(619)
					tmp3 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(619)
					tmp3 = false;
				}
				HX_STACK_LINE(619)
				if ((tmp3)){
					HX_STACK_LINE(619)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(619)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(619)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(619)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(619)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(619)
				if ((tmp3)){
					HX_STACK_LINE(619)
					_this->_validate();
				}
			}
			HX_STACK_LINE(619)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(619)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(619)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(619)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(619)
				if ((tmp3)){
					HX_STACK_LINE(619)
					tmp4 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(619)
					tmp4 = false;
				}
				HX_STACK_LINE(619)
				if ((tmp4)){
					HX_STACK_LINE(619)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(619)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(619)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(619)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(619)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(619)
				if ((tmp4)){
					HX_STACK_LINE(619)
					_this->_validate();
				}
			}
			HX_STACK_LINE(619)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(619)
			tmp2 = tmp3->x;
		}
		HX_STACK_LINE(619)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(619)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(619)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(619)
				if ((tmp5)){
					HX_STACK_LINE(619)
					tmp6 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(619)
					tmp6 = false;
				}
				HX_STACK_LINE(619)
				if ((tmp6)){
					HX_STACK_LINE(619)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(619)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(619)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(619)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(619)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(619)
				if ((tmp6)){
					HX_STACK_LINE(619)
					_this->_validate();
				}
			}
			HX_STACK_LINE(619)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(619)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(619)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(619)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(619)
				if ((tmp6)){
					HX_STACK_LINE(619)
					tmp7 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(619)
					tmp7 = false;
				}
				HX_STACK_LINE(619)
				if ((tmp7)){
					HX_STACK_LINE(619)
					::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(619)
					::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(619)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(619)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(619)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(619)
				if ((tmp7)){
					HX_STACK_LINE(619)
					_this->_validate();
				}
			}
			HX_STACK_LINE(619)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(619)
			tmp5 = tmp6->y;
		}
		HX_STACK_LINE(619)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(619)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(619)
		bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(619)
		if ((tmp8)){
			HX_STACK_LINE(620)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set length of a zero vector","\x00","\x7b","\xb2","\x33"));
		}
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(624)
			Float tmp9 = length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(624)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(624)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(624)
					if ((tmp11)){
						HX_STACK_LINE(624)
						tmp12 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(624)
						tmp12 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp12)){
						HX_STACK_LINE(624)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(624)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(624)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(624)
					if ((tmp12)){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(624)
				tmp10 = tmp11->x;
			}
			HX_STACK_LINE(624)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(624)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(624)
					if ((tmp12)){
						HX_STACK_LINE(624)
						tmp13 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(624)
						tmp13 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp13)){
						HX_STACK_LINE(624)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(624)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(624)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(624)
					if ((tmp13)){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(624)
				tmp11 = tmp12->x;
			}
			HX_STACK_LINE(624)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(624)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(624)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(624)
					if ((tmp14)){
						HX_STACK_LINE(624)
						tmp15 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(624)
						tmp15 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp15)){
						HX_STACK_LINE(624)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(624)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(624)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(624)
					if ((tmp15)){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(624)
				tmp13 = tmp14->y;
			}
			HX_STACK_LINE(624)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(624)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(624)
					if ((tmp15)){
						HX_STACK_LINE(624)
						tmp16 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(624)
						tmp16 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp16)){
						HX_STACK_LINE(624)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(624)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(624)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(624)
					if ((tmp16)){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(624)
				tmp14 = tmp15->y;
			}
			HX_STACK_LINE(624)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(624)
			Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(624)
			Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(624)
			Float tmp18 = (Float(tmp9) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(624)
			Float t = tmp18;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(633)
			{
				HX_STACK_LINE(633)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(633)
				{
					HX_STACK_LINE(633)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						bool tmp20 = (_g != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(633)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(633)
						if ((tmp20)){
							HX_STACK_LINE(633)
							tmp21 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(633)
							tmp21 = false;
						}
						HX_STACK_LINE(633)
						if ((tmp21)){
							HX_STACK_LINE(633)
							::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(633)
							::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(633)
							HX_STACK_DO_THROW(tmp23);
						}
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(633)
							if ((tmp22)){
								HX_STACK_LINE(633)
								_this->_validate();
							}
						}
						HX_STACK_LINE(633)
						tmp19 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(633)
					Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(633)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(633)
					Float x = tmp21;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							bool tmp22 = (_g != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(633)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(633)
							if ((tmp22)){
								HX_STACK_LINE(633)
								tmp23 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(633)
								tmp23 = false;
							}
							HX_STACK_LINE(633)
							if ((tmp23)){
								HX_STACK_LINE(633)
								::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(633)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(633)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							bool tmp22 = _this->_immutable;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(633)
							if ((tmp22)){
								HX_STACK_LINE(633)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(633)
							bool tmp23 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(633)
							if ((tmp23)){
								HX_STACK_LINE(633)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(633)
						Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								bool tmp23 = (_g != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(633)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(633)
								if ((tmp23)){
									HX_STACK_LINE(633)
									tmp24 = _g->zpp_disp;
								}
								else{
									HX_STACK_LINE(633)
									tmp24 = false;
								}
								HX_STACK_LINE(633)
								if ((tmp24)){
									HX_STACK_LINE(633)
									::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(633)
									::String tmp26 = (tmp25 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(633)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(633)
								bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(633)
								if ((tmp23)){
									HX_STACK_LINE(633)
									_this->_validate();
								}
							}
							HX_STACK_LINE(633)
							tmp22 = _g->zpp_inner->x;
						}
						HX_STACK_LINE(633)
						Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(633)
						bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(633)
						if ((tmp24)){
							HX_STACK_LINE(633)
							bool tmp25 = (x != x);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(633)
							if ((tmp25)){
								HX_STACK_LINE(633)
								::String tmp26 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(633)
								::String tmp27 = (tmp26 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(633)
								HX_STACK_DO_THROW(tmp27);
							}
							HX_STACK_LINE(633)
							_g->zpp_inner->x = x;
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(633)
								bool tmp26 = (_this->_invalidate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(633)
								if ((tmp26)){
									HX_STACK_LINE(633)
									::zpp_nape::geom::ZPP_Vec2 tmp27 = _this;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(633)
									_this->_invalidate(tmp27);
								}
							}
						}
					}
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							bool tmp22 = (_g != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(633)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(633)
							if ((tmp22)){
								HX_STACK_LINE(633)
								tmp23 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(633)
								tmp23 = false;
							}
							HX_STACK_LINE(633)
							if ((tmp23)){
								HX_STACK_LINE(633)
								::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(633)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(633)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(633)
							if ((tmp22)){
								HX_STACK_LINE(633)
								_this->_validate();
							}
						}
						HX_STACK_LINE(633)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(634)
			{
				HX_STACK_LINE(634)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						bool tmp20 = (_g != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(634)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(634)
						if ((tmp20)){
							HX_STACK_LINE(634)
							tmp21 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(634)
							tmp21 = false;
						}
						HX_STACK_LINE(634)
						if ((tmp21)){
							HX_STACK_LINE(634)
							::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(634)
							::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(634)
							HX_STACK_DO_THROW(tmp23);
						}
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(634)
							if ((tmp22)){
								HX_STACK_LINE(634)
								_this->_validate();
							}
						}
						HX_STACK_LINE(634)
						tmp19 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(634)
					Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(634)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(634)
					Float y = tmp21;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							bool tmp22 = (_g != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(634)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(634)
							if ((tmp22)){
								HX_STACK_LINE(634)
								tmp23 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(634)
								tmp23 = false;
							}
							HX_STACK_LINE(634)
							if ((tmp23)){
								HX_STACK_LINE(634)
								::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(634)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(634)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							bool tmp22 = _this->_immutable;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(634)
							if ((tmp22)){
								HX_STACK_LINE(634)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(634)
							bool tmp23 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(634)
							if ((tmp23)){
								HX_STACK_LINE(634)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(634)
						Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								bool tmp23 = (_g != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(634)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(634)
								if ((tmp23)){
									HX_STACK_LINE(634)
									tmp24 = _g->zpp_disp;
								}
								else{
									HX_STACK_LINE(634)
									tmp24 = false;
								}
								HX_STACK_LINE(634)
								if ((tmp24)){
									HX_STACK_LINE(634)
									::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(634)
									::String tmp26 = (tmp25 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(634)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(634)
								bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(634)
								if ((tmp23)){
									HX_STACK_LINE(634)
									_this->_validate();
								}
							}
							HX_STACK_LINE(634)
							tmp22 = _g->zpp_inner->y;
						}
						HX_STACK_LINE(634)
						Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(634)
						bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(634)
						if ((tmp24)){
							HX_STACK_LINE(634)
							bool tmp25 = (y != y);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(634)
							if ((tmp25)){
								HX_STACK_LINE(634)
								::String tmp26 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(634)
								::String tmp27 = (tmp26 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(634)
								HX_STACK_DO_THROW(tmp27);
							}
							HX_STACK_LINE(634)
							_g->zpp_inner->y = y;
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(634)
								bool tmp26 = (_this->_invalidate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(634)
								if ((tmp26)){
									HX_STACK_LINE(634)
									::zpp_nape::geom::ZPP_Vec2 tmp27 = _this;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(634)
									_this->_invalidate(tmp27);
								}
							}
						}
					}
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							bool tmp22 = (_g != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(634)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(634)
							if ((tmp22)){
								HX_STACK_LINE(634)
								tmp23 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(634)
								tmp23 = false;
							}
							HX_STACK_LINE(634)
							if ((tmp23)){
								HX_STACK_LINE(634)
								::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(634)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(634)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(634)
							if ((tmp22)){
								HX_STACK_LINE(634)
								_this->_validate();
							}
						}
						HX_STACK_LINE(634)
						_g->zpp_inner->y;
					}
				}
			}
		}
		HX_STACK_LINE(636)
		{
			HX_STACK_LINE(636)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(636)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(636)
			bool tmp10 = (_this->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(636)
			if ((tmp10)){
				HX_STACK_LINE(636)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(636)
				_this->_invalidate(tmp11);
			}
		}
	}
	HX_STACK_LINE(638)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(638)
	{
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(638)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(638)
			if ((tmp1)){
				HX_STACK_LINE(638)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(638)
				tmp2 = false;
			}
			HX_STACK_LINE(638)
			if ((tmp2)){
				HX_STACK_LINE(638)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(638)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(638)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(638)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(638)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(638)
				if ((tmp2)){
					HX_STACK_LINE(638)
					tmp3 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(638)
					tmp3 = false;
				}
				HX_STACK_LINE(638)
				if ((tmp3)){
					HX_STACK_LINE(638)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(638)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(638)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(638)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(638)
				if ((tmp3)){
					HX_STACK_LINE(638)
					_this->_validate();
				}
			}
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(638)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(638)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(638)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(638)
				if ((tmp3)){
					HX_STACK_LINE(638)
					tmp4 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(638)
					tmp4 = false;
				}
				HX_STACK_LINE(638)
				if ((tmp4)){
					HX_STACK_LINE(638)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(638)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(638)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(638)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(638)
				if ((tmp4)){
					HX_STACK_LINE(638)
					_this->_validate();
				}
			}
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(638)
			tmp2 = tmp3->x;
		}
		HX_STACK_LINE(638)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(638)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(638)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(638)
				if ((tmp5)){
					HX_STACK_LINE(638)
					tmp6 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(638)
					tmp6 = false;
				}
				HX_STACK_LINE(638)
				if ((tmp6)){
					HX_STACK_LINE(638)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(638)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(638)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(638)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(638)
				if ((tmp6)){
					HX_STACK_LINE(638)
					_this->_validate();
				}
			}
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(638)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(638)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(638)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(638)
				if ((tmp6)){
					HX_STACK_LINE(638)
					tmp7 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(638)
					tmp7 = false;
				}
				HX_STACK_LINE(638)
				if ((tmp7)){
					HX_STACK_LINE(638)
					::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(638)
					::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(638)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(638)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(638)
				if ((tmp7)){
					HX_STACK_LINE(638)
					_this->_validate();
				}
			}
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(638)
			tmp5 = tmp6->y;
		}
		HX_STACK_LINE(638)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(638)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(638)
		tmp = ::Math_obj::sqrt(tmp7);
	}
	HX_STACK_LINE(638)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_length,return )

Float Vec2_obj::lsq( ){
	HX_STACK_FRAME("nape.geom.Vec2","lsq",0x32517106,"nape.geom.Vec2.lsq","nape/geom/Vec2.hx",650,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(651)
	{
		HX_STACK_LINE(653)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(653)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		if ((tmp)){
			HX_STACK_LINE(653)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(653)
			tmp1 = false;
		}
		HX_STACK_LINE(653)
		if ((tmp1)){
			HX_STACK_LINE(653)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(653)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(653)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(656)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(656)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			if ((tmp1)){
				HX_STACK_LINE(656)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(656)
				tmp2 = false;
			}
			HX_STACK_LINE(656)
			if ((tmp2)){
				HX_STACK_LINE(656)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(656)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(656)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			if ((tmp2)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(656)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(656)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			if ((tmp2)){
				HX_STACK_LINE(656)
				tmp3 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(656)
				tmp3 = false;
			}
			HX_STACK_LINE(656)
			if ((tmp3)){
				HX_STACK_LINE(656)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(656)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(656)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			if ((tmp3)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(656)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(656)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(656)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			if ((tmp4)){
				HX_STACK_LINE(656)
				tmp5 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(656)
				tmp5 = false;
			}
			HX_STACK_LINE(656)
			if ((tmp5)){
				HX_STACK_LINE(656)
				::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(656)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(656)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			if ((tmp5)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(656)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(656)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(656)
			if ((tmp5)){
				HX_STACK_LINE(656)
				tmp6 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(656)
				tmp6 = false;
			}
			HX_STACK_LINE(656)
			if ((tmp6)){
				HX_STACK_LINE(656)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(656)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(656)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(656)
			if ((tmp6)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(656)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(656)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(656)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(656)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,lsq,return )

::nape::geom::Vec2 Vec2_obj::set( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","set",0x3256b49e,"nape.geom.Vec2.set","nape/geom/Vec2.hx",671,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(672)
	{
		HX_STACK_LINE(674)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(674)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(674)
		if ((tmp)){
			HX_STACK_LINE(674)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(674)
			tmp1 = false;
		}
		HX_STACK_LINE(674)
		if ((tmp1)){
			HX_STACK_LINE(674)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(674)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(674)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(677)
	{
		HX_STACK_LINE(679)
		bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(679)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		if ((tmp)){
			HX_STACK_LINE(679)
			tmp1 = vector->zpp_disp;
		}
		else{
			HX_STACK_LINE(679)
			tmp1 = false;
		}
		HX_STACK_LINE(679)
		if ((tmp1)){
			HX_STACK_LINE(679)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(679)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(679)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(682)
	{
		HX_STACK_LINE(682)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(682)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(682)
		bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(682)
		if ((tmp1)){
			HX_STACK_LINE(682)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(682)
		bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(682)
		if ((tmp2)){
			HX_STACK_LINE(682)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(684)
	bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	if ((tmp)){
		HX_STACK_LINE(685)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
	}
	HX_STACK_LINE(688)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	{
		HX_STACK_LINE(688)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(688)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(688)
			if ((tmp3)){
				HX_STACK_LINE(688)
				tmp4 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(688)
				tmp4 = false;
			}
			HX_STACK_LINE(688)
			if ((tmp4)){
				HX_STACK_LINE(688)
				::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(688)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(688)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(688)
				if ((tmp5)){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			tmp2 = vector->zpp_inner->x;
		}
		HX_STACK_LINE(688)
		Float x = tmp2;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(688)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			bool tmp4 = (vector != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(688)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(688)
			if ((tmp4)){
				HX_STACK_LINE(688)
				tmp5 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(688)
				tmp5 = false;
			}
			HX_STACK_LINE(688)
			if ((tmp5)){
				HX_STACK_LINE(688)
				::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(688)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(688)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(688)
				if ((tmp6)){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			tmp3 = vector->zpp_inner->y;
		}
		HX_STACK_LINE(688)
		Float y = tmp3;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(688)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(688)
			if ((tmp4)){
				HX_STACK_LINE(688)
				tmp5 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(688)
				tmp5 = false;
			}
			HX_STACK_LINE(688)
			if ((tmp5)){
				HX_STACK_LINE(688)
				::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(688)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(688)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(688)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(688)
			bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(688)
			if ((tmp5)){
				HX_STACK_LINE(688)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(688)
			bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(688)
			if ((tmp6)){
				HX_STACK_LINE(688)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(688)
		bool tmp4 = (x != x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(688)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(688)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(688)
		if ((tmp5)){
			HX_STACK_LINE(688)
			tmp6 = (y != y);
		}
		else{
			HX_STACK_LINE(688)
			tmp6 = true;
		}
		HX_STACK_LINE(688)
		if ((tmp6)){
			HX_STACK_LINE(688)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(688)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(688)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(688)
				if ((tmp8)){
					HX_STACK_LINE(688)
					tmp9 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(688)
					tmp9 = false;
				}
				HX_STACK_LINE(688)
				if ((tmp9)){
					HX_STACK_LINE(688)
					::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(688)
					::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(688)
					HX_STACK_DO_THROW(tmp11);
				}
			}
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(688)
				if ((tmp9)){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(688)
			tmp7 = tmp8->x;
		}
		HX_STACK_LINE(688)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(688)
		bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(688)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(688)
		if ((tmp9)){
			HX_STACK_LINE(688)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(688)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(688)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(688)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(688)
					if ((tmp15)){
						HX_STACK_LINE(688)
						bool tmp16 = this->zpp_disp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(688)
						tmp14 = tmp16;
					}
					else{
						HX_STACK_LINE(688)
						tmp14 = false;
					}
					HX_STACK_LINE(688)
					bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(688)
					if ((tmp16)){
						HX_STACK_LINE(688)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(688)
						::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(688)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(688)
						::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(688)
						::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(688)
						HX_STACK_DO_THROW(tmp21);
					}
				}
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp13;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(688)
					bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(688)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(688)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(688)
					if ((tmp16)){
						HX_STACK_LINE(688)
						_this->_validate();
					}
				}
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(688)
				tmp11 = tmp13->y;
			}
			HX_STACK_LINE(688)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(688)
			tmp10 = (tmp11 == tmp12);
		}
		else{
			HX_STACK_LINE(688)
			tmp10 = false;
		}
		HX_STACK_LINE(688)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(688)
		if ((tmp11)){
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(688)
				tmp12->x = x;
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(688)
				tmp13->y = y;
				HX_STACK_LINE(688)
				{
				}
			}
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(688)
				if ((tmp13)){
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(688)
					_this->_invalidate(tmp14);
				}
			}
		}
		HX_STACK_LINE(688)
		tmp1 = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(688)
	::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(689)
	{
		HX_STACK_LINE(690)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(691)
		tmp2 = vector->zpp_inner->weak;
		HX_STACK_LINE(690)
		if ((tmp2)){
			HX_STACK_LINE(693)
			{
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(693)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(693)
					if ((tmp3)){
						HX_STACK_LINE(693)
						tmp4 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(693)
						tmp4 = false;
					}
					HX_STACK_LINE(693)
					if ((tmp4)){
						HX_STACK_LINE(693)
						::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(693)
						::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(693)
						HX_STACK_DO_THROW(tmp6);
					}
				}
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(693)
					bool tmp3 = _this->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(693)
					if ((tmp3)){
						HX_STACK_LINE(693)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(693)
					bool tmp4 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(693)
					if ((tmp4)){
						HX_STACK_LINE(693)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(693)
				bool tmp3 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(693)
				if ((tmp3)){
					HX_STACK_LINE(693)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(693)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(693)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(693)
				vector->zpp_inner = null();
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(693)
					o->zpp_pool = null();
					HX_STACK_LINE(693)
					::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(693)
					bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(693)
					if ((tmp5)){
						HX_STACK_LINE(693)
						::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(693)
						tmp6->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(693)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(693)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(693)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(693)
					{
						HX_STACK_LINE(693)
						bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(693)
						if ((tmp4)){
							HX_STACK_LINE(693)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(693)
							o->outer = null();
						}
						HX_STACK_LINE(693)
						o->_isimmutable = null();
						HX_STACK_LINE(693)
						o->_validate = null();
						HX_STACK_LINE(693)
						o->_invalidate = null();
					}
					HX_STACK_LINE(693)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(693)
					o->next = tmp4;
					HX_STACK_LINE(693)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(694)
			true;
		}
		else{
			HX_STACK_LINE(697)
			false;
		}
	}
	HX_STACK_LINE(700)
	::nape::geom::Vec2 tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(700)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set,return )

::nape::geom::Vec2 Vec2_obj::setxy( Float x,Float y){
	HX_STACK_FRAME("nape.geom.Vec2","setxy",0x7ce4011f,"nape.geom.Vec2.setxy","nape/geom/Vec2.hx",808,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(809)
	{
		HX_STACK_LINE(811)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(811)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(811)
		if ((tmp)){
			HX_STACK_LINE(811)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(811)
			tmp1 = false;
		}
		HX_STACK_LINE(811)
		if ((tmp1)){
			HX_STACK_LINE(811)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(811)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(811)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(814)
	{
		HX_STACK_LINE(814)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(814)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(814)
		bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(814)
		if ((tmp1)){
			HX_STACK_LINE(814)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(814)
		bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(814)
		if ((tmp2)){
			HX_STACK_LINE(814)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(816)
	bool tmp = (x != x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(816)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(816)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(816)
	if ((tmp1)){
		HX_STACK_LINE(816)
		tmp2 = (y != y);
	}
	else{
		HX_STACK_LINE(816)
		tmp2 = true;
	}
	HX_STACK_LINE(816)
	if ((tmp2)){
		HX_STACK_LINE(817)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
	}
	HX_STACK_LINE(820)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(820)
	{
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			if ((tmp4)){
				HX_STACK_LINE(820)
				tmp5 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(820)
				tmp5 = false;
			}
			HX_STACK_LINE(820)
			if ((tmp5)){
				HX_STACK_LINE(820)
				::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(820)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(820)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(820)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			if ((tmp5)){
				HX_STACK_LINE(820)
				_this->_validate();
			}
		}
		HX_STACK_LINE(820)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(820)
		tmp3 = tmp4->x;
	}
	HX_STACK_LINE(820)
	Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(820)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(820)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(820)
	if ((tmp5)){
		HX_STACK_LINE(820)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			{
				HX_STACK_LINE(820)
				bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(820)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(820)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(820)
				bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(820)
				if ((tmp11)){
					HX_STACK_LINE(820)
					bool tmp12 = this->zpp_disp;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(820)
					tmp10 = tmp12;
				}
				else{
					HX_STACK_LINE(820)
					tmp10 = false;
				}
				HX_STACK_LINE(820)
				bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(820)
				if ((tmp12)){
					HX_STACK_LINE(820)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(820)
					::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(820)
					::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(820)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(820)
					::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(820)
					HX_STACK_DO_THROW(tmp17);
				}
			}
			HX_STACK_LINE(820)
			{
				HX_STACK_LINE(820)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(820)
				::zpp_nape::geom::ZPP_Vec2 tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(820)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(820)
				bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(820)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(820)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(820)
				if ((tmp12)){
					HX_STACK_LINE(820)
					_this->_validate();
				}
			}
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(820)
			tmp7 = tmp9->y;
		}
		HX_STACK_LINE(820)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(820)
		tmp6 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(820)
		tmp6 = false;
	}
	HX_STACK_LINE(820)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(820)
	if ((tmp7)){
		HX_STACK_LINE(821)
		{
			HX_STACK_LINE(822)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(822)
			tmp8->x = x;
			HX_STACK_LINE(823)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(823)
			tmp9->y = y;
			HX_STACK_LINE(832)
			{
			}
		}
		HX_STACK_LINE(841)
		{
			HX_STACK_LINE(841)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(841)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(841)
			bool tmp9 = (_this->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(841)
			if ((tmp9)){
				HX_STACK_LINE(841)
				::zpp_nape::geom::ZPP_Vec2 tmp10 = _this;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(841)
				_this->_invalidate(tmp10);
			}
		}
	}
	HX_STACK_LINE(843)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,setxy,return )

Float Vec2_obj::get_angle( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_angle",0x940d9e26,"nape.geom.Vec2.get_angle","nape/geom/Vec2.hx",861,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(862)
	{
		HX_STACK_LINE(864)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(864)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(864)
		if ((tmp)){
			HX_STACK_LINE(864)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(864)
			tmp1 = false;
		}
		HX_STACK_LINE(864)
		if ((tmp1)){
			HX_STACK_LINE(864)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(864)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(864)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(867)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(867)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(867)
			if ((tmp1)){
				HX_STACK_LINE(867)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(867)
				tmp2 = false;
			}
			HX_STACK_LINE(867)
			if ((tmp2)){
				HX_STACK_LINE(867)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(867)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(867)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(867)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(867)
			if ((tmp2)){
				HX_STACK_LINE(867)
				_this->_validate();
			}
		}
		HX_STACK_LINE(867)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(867)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(867)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(867)
			if ((tmp2)){
				HX_STACK_LINE(867)
				tmp3 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(867)
				tmp3 = false;
			}
			HX_STACK_LINE(867)
			if ((tmp3)){
				HX_STACK_LINE(867)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(867)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(867)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(867)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(867)
			if ((tmp3)){
				HX_STACK_LINE(867)
				_this->_validate();
			}
		}
		HX_STACK_LINE(867)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(867)
		tmp1 = tmp2->y;
	}
	HX_STACK_LINE(867)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(867)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(867)
	if ((tmp2)){
		HX_STACK_LINE(867)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			{
				HX_STACK_LINE(867)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(867)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(867)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(867)
				bool tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(867)
				if ((tmp8)){
					HX_STACK_LINE(867)
					bool tmp9 = this->zpp_disp;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(867)
					tmp7 = tmp9;
				}
				else{
					HX_STACK_LINE(867)
					tmp7 = false;
				}
				HX_STACK_LINE(867)
				bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(867)
				if ((tmp9)){
					HX_STACK_LINE(867)
					::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(867)
					::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(867)
					::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(867)
					::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(867)
					::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(867)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(867)
			{
				HX_STACK_LINE(867)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(867)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(867)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(867)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(867)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(867)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(867)
				if ((tmp9)){
					HX_STACK_LINE(867)
					_this->_validate();
				}
			}
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(867)
			tmp4 = tmp6->x;
		}
		HX_STACK_LINE(867)
		tmp3 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(867)
		tmp3 = false;
	}
	HX_STACK_LINE(867)
	if ((tmp3)){
		HX_STACK_LINE(868)
		return ((Float)0.0);
	}
	else{
		HX_STACK_LINE(871)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(871)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(871)
				if ((tmp5)){
					HX_STACK_LINE(871)
					tmp6 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(871)
					tmp6 = false;
				}
				HX_STACK_LINE(871)
				if ((tmp6)){
					HX_STACK_LINE(871)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(871)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(871)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(871)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(871)
				if ((tmp6)){
					HX_STACK_LINE(871)
					_this->_validate();
				}
			}
			HX_STACK_LINE(871)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(871)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(871)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(871)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(871)
				if ((tmp6)){
					HX_STACK_LINE(871)
					tmp7 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(871)
					tmp7 = false;
				}
				HX_STACK_LINE(871)
				if ((tmp7)){
					HX_STACK_LINE(871)
					::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(871)
					::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(871)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(871)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(871)
				if ((tmp7)){
					HX_STACK_LINE(871)
					_this->_validate();
				}
			}
			HX_STACK_LINE(871)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(871)
			tmp5 = tmp6->x;
		}
		HX_STACK_LINE(871)
		Float tmp6 = ::Math_obj::atan2(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(871)
		return tmp6;
	}
	HX_STACK_LINE(867)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_angle,return )

Float Vec2_obj::set_angle( Float angle){
	HX_STACK_FRAME("nape.geom.Vec2","set_angle",0x775e8a32,"nape.geom.Vec2.set_angle","nape/geom/Vec2.hx",874,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(875)
	{
		HX_STACK_LINE(876)
		{
			HX_STACK_LINE(878)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(878)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(878)
			if ((tmp)){
				HX_STACK_LINE(878)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(878)
				tmp1 = false;
			}
			HX_STACK_LINE(878)
			if ((tmp1)){
				HX_STACK_LINE(878)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(878)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(878)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(881)
		{
			HX_STACK_LINE(881)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(881)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(881)
			bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(881)
			if ((tmp1)){
				HX_STACK_LINE(881)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(881)
			bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(881)
			if ((tmp2)){
				HX_STACK_LINE(881)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(883)
		bool tmp = (angle != angle);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(883)
		if ((tmp)){
			HX_STACK_LINE(884)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2::angle cannot be NaN","\x22","\xf5","\x3f","\x13"));
		}
		HX_STACK_LINE(887)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(887)
		{
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(887)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(887)
				if ((tmp2)){
					HX_STACK_LINE(887)
					tmp3 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(887)
					tmp3 = false;
				}
				HX_STACK_LINE(887)
				if ((tmp3)){
					HX_STACK_LINE(887)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(887)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(887)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(887)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(887)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(887)
					if ((tmp3)){
						HX_STACK_LINE(887)
						tmp4 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(887)
						tmp4 = false;
					}
					HX_STACK_LINE(887)
					if ((tmp4)){
						HX_STACK_LINE(887)
						::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(887)
						::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(887)
						HX_STACK_DO_THROW(tmp6);
					}
				}
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(887)
					if ((tmp4)){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(887)
				tmp2 = tmp3->x;
			}
			HX_STACK_LINE(887)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(887)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(887)
					if ((tmp4)){
						HX_STACK_LINE(887)
						tmp5 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(887)
						tmp5 = false;
					}
					HX_STACK_LINE(887)
					if ((tmp5)){
						HX_STACK_LINE(887)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(887)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(887)
						HX_STACK_DO_THROW(tmp7);
					}
				}
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(887)
					if ((tmp5)){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(887)
				tmp3 = tmp4->x;
			}
			HX_STACK_LINE(887)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(887)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(887)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(887)
					if ((tmp6)){
						HX_STACK_LINE(887)
						tmp7 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(887)
						tmp7 = false;
					}
					HX_STACK_LINE(887)
					if ((tmp7)){
						HX_STACK_LINE(887)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(887)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(887)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(887)
					if ((tmp7)){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(887)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(887)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(887)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(887)
					if ((tmp7)){
						HX_STACK_LINE(887)
						tmp8 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(887)
						tmp8 = false;
					}
					HX_STACK_LINE(887)
					if ((tmp8)){
						HX_STACK_LINE(887)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(887)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(887)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(887)
					if ((tmp8)){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(887)
				tmp6 = tmp7->y;
			}
			HX_STACK_LINE(887)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(887)
			Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(887)
			tmp1 = ::Math_obj::sqrt(tmp8);
		}
		HX_STACK_LINE(887)
		Float l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(888)
		{
			HX_STACK_LINE(888)
			Float tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(888)
			Float tmp3 = angle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(888)
			Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(888)
			Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(888)
			Float x = tmp5;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(888)
			Float tmp6 = l;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(888)
			Float tmp7 = angle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(888)
			Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(888)
			Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(888)
			Float y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(888)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(888)
				if ((tmp10)){
					HX_STACK_LINE(888)
					tmp11 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(888)
					tmp11 = false;
				}
				HX_STACK_LINE(888)
				if ((tmp11)){
					HX_STACK_LINE(888)
					::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(888)
					::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(888)
					HX_STACK_DO_THROW(tmp13);
				}
			}
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				::zpp_nape::geom::ZPP_Vec2 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(888)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(888)
				bool tmp11 = _this->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(888)
				if ((tmp11)){
					HX_STACK_LINE(888)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(888)
				bool tmp12 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(888)
				if ((tmp12)){
					HX_STACK_LINE(888)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(888)
			bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(888)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(888)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(888)
			if ((tmp11)){
				HX_STACK_LINE(888)
				tmp12 = (y != y);
			}
			else{
				HX_STACK_LINE(888)
				tmp12 = true;
			}
			HX_STACK_LINE(888)
			if ((tmp12)){
				HX_STACK_LINE(888)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(888)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(888)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(888)
					if ((tmp14)){
						HX_STACK_LINE(888)
						tmp15 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(888)
						tmp15 = false;
					}
					HX_STACK_LINE(888)
					if ((tmp15)){
						HX_STACK_LINE(888)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(888)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(888)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(888)
					if ((tmp15)){
						HX_STACK_LINE(888)
						_this->_validate();
					}
				}
				HX_STACK_LINE(888)
				::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(888)
				tmp13 = tmp14->x;
			}
			HX_STACK_LINE(888)
			Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(888)
			bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(888)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(888)
			if ((tmp15)){
				HX_STACK_LINE(888)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					{
						HX_STACK_LINE(888)
						bool tmp18 = true;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(888)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(888)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(888)
						bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(888)
						if ((tmp21)){
							HX_STACK_LINE(888)
							bool tmp22 = this->zpp_disp;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(888)
							tmp20 = tmp22;
						}
						else{
							HX_STACK_LINE(888)
							tmp20 = false;
						}
						HX_STACK_LINE(888)
						bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(888)
						if ((tmp22)){
							HX_STACK_LINE(888)
							::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(888)
							::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(888)
							::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(888)
							::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(888)
							::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(888)
							HX_STACK_DO_THROW(tmp27);
						}
					}
					HX_STACK_LINE(888)
					{
						HX_STACK_LINE(888)
						::zpp_nape::geom::ZPP_Vec2 tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(888)
						::zpp_nape::geom::ZPP_Vec2 tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(888)
						::zpp_nape::geom::ZPP_Vec2 _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(888)
						bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(888)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(888)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(888)
						if ((tmp22)){
							HX_STACK_LINE(888)
							_this->_validate();
						}
					}
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(888)
					tmp17 = tmp19->y;
				}
				HX_STACK_LINE(888)
				Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(888)
				tmp16 = (tmp17 == tmp18);
			}
			else{
				HX_STACK_LINE(888)
				tmp16 = false;
			}
			HX_STACK_LINE(888)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(888)
			if ((tmp17)){
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(888)
					tmp18->x = x;
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(888)
					tmp19->y = y;
					HX_STACK_LINE(888)
					{
					}
				}
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp18;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					bool tmp19 = (_this->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(888)
					if ((tmp19)){
						HX_STACK_LINE(888)
						::zpp_nape::geom::ZPP_Vec2 tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(888)
						_this->_invalidate(tmp20);
					}
				}
			}
			HX_STACK_LINE(888)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(890)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(890)
	{
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(890)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(890)
			if ((tmp1)){
				HX_STACK_LINE(890)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(890)
				tmp2 = false;
			}
			HX_STACK_LINE(890)
			if ((tmp2)){
				HX_STACK_LINE(890)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(890)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(890)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(890)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(890)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(890)
				if ((tmp2)){
					HX_STACK_LINE(890)
					tmp3 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(890)
					tmp3 = false;
				}
				HX_STACK_LINE(890)
				if ((tmp3)){
					HX_STACK_LINE(890)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(890)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(890)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(890)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(890)
				if ((tmp3)){
					HX_STACK_LINE(890)
					_this->_validate();
				}
			}
			HX_STACK_LINE(890)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(890)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(890)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(890)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(890)
				if ((tmp3)){
					HX_STACK_LINE(890)
					tmp4 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(890)
					tmp4 = false;
				}
				HX_STACK_LINE(890)
				if ((tmp4)){
					HX_STACK_LINE(890)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(890)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(890)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(890)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(890)
				if ((tmp4)){
					HX_STACK_LINE(890)
					_this->_validate();
				}
			}
			HX_STACK_LINE(890)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(890)
			tmp2 = tmp3->y;
		}
		HX_STACK_LINE(890)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(890)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(890)
		if ((tmp3)){
			HX_STACK_LINE(890)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(890)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(890)
					bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(890)
					if ((tmp9)){
						HX_STACK_LINE(890)
						bool tmp10 = this->zpp_disp;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(890)
						tmp8 = tmp10;
					}
					else{
						HX_STACK_LINE(890)
						tmp8 = false;
					}
					HX_STACK_LINE(890)
					bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(890)
					if ((tmp10)){
						HX_STACK_LINE(890)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(890)
						::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(890)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(890)
						::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(890)
						::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(890)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(890)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(890)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(890)
					if ((tmp10)){
						HX_STACK_LINE(890)
						_this->_validate();
					}
				}
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(890)
				tmp5 = tmp7->x;
			}
			HX_STACK_LINE(890)
			tmp4 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(890)
			tmp4 = false;
		}
		HX_STACK_LINE(890)
		if ((tmp4)){
			HX_STACK_LINE(890)
			tmp = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(890)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(890)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					if ((tmp6)){
						HX_STACK_LINE(890)
						tmp7 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(890)
						tmp7 = false;
					}
					HX_STACK_LINE(890)
					if ((tmp7)){
						HX_STACK_LINE(890)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(890)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(890)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					if ((tmp7)){
						HX_STACK_LINE(890)
						_this->_validate();
					}
				}
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(890)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(890)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(890)
					if ((tmp7)){
						HX_STACK_LINE(890)
						tmp8 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(890)
						tmp8 = false;
					}
					HX_STACK_LINE(890)
					if ((tmp8)){
						HX_STACK_LINE(890)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(890)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(890)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(890)
					if ((tmp8)){
						HX_STACK_LINE(890)
						_this->_validate();
					}
				}
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(890)
				tmp6 = tmp7->x;
			}
			HX_STACK_LINE(890)
			tmp = ::Math_obj::atan2(tmp5,tmp6);
		}
	}
	HX_STACK_LINE(890)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_angle,return )

::nape::geom::Vec2 Vec2_obj::rotate( Float angle){
	HX_STACK_FRAME("nape.geom.Vec2","rotate",0x2631f2df,"nape.geom.Vec2.rotate","nape/geom/Vec2.hx",907,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(908)
	{
		HX_STACK_LINE(910)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(910)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(910)
		if ((tmp)){
			HX_STACK_LINE(910)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(910)
			tmp1 = false;
		}
		HX_STACK_LINE(910)
		if ((tmp1)){
			HX_STACK_LINE(910)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(910)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(910)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(913)
	{
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(913)
		bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(913)
		if ((tmp1)){
			HX_STACK_LINE(913)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(913)
		bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(913)
		if ((tmp2)){
			HX_STACK_LINE(913)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(915)
	bool tmp = (angle != angle);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(915)
	if ((tmp)){
		HX_STACK_LINE(916)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot rotate Vec2 by NaN","\xbe","\x15","\x02","\x7a"));
	}
	HX_STACK_LINE(919)
	Float tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(919)
	Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(919)
	Float tmp3 = (tmp2 * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(919)
	Float tmp4 = hx::Mod(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(919)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(919)
	if ((tmp5)){
		HX_STACK_LINE(920)
		Float tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(920)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(920)
		Float ax = tmp7;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(921)
		Float tmp8 = angle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(921)
		Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(921)
		Float ay = tmp9;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(923)
			Float tmp10 = ay;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(923)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(923)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(923)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(923)
			Float tmp14 = ax;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(923)
			::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(923)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(923)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(923)
			Float tmp18 = (tmp13 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(923)
			Float t = tmp18;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(924)
			::zpp_nape::geom::ZPP_Vec2 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(924)
			Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(924)
			Float tmp21 = ax;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(924)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(924)
			::zpp_nape::geom::ZPP_Vec2 tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(924)
			Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(924)
			Float tmp25 = ay;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(924)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(924)
			Float tmp27 = (tmp22 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(924)
			::zpp_nape::geom::ZPP_Vec2 tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(924)
			tmp28->y = tmp27;
			HX_STACK_LINE(925)
			::zpp_nape::geom::ZPP_Vec2 tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(925)
			tmp29->x = t;
		}
		HX_STACK_LINE(927)
		{
			HX_STACK_LINE(927)
			::zpp_nape::geom::ZPP_Vec2 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(927)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(927)
			bool tmp11 = (_this->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(927)
			if ((tmp11)){
				HX_STACK_LINE(927)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(927)
				_this->_invalidate(tmp12);
			}
		}
	}
	HX_STACK_LINE(929)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,rotate,return )

::nape::geom::Vec2 Vec2_obj::reflect( ::nape::geom::Vec2 vec,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","reflect",0x3d8ecb39,"nape.geom.Vec2.reflect","nape/geom/Vec2.hx",942,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(943)
		{
			HX_STACK_LINE(945)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(945)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(945)
			if ((tmp)){
				HX_STACK_LINE(945)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(945)
				tmp1 = false;
			}
			HX_STACK_LINE(945)
			if ((tmp1)){
				HX_STACK_LINE(945)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(945)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(945)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(948)
		{
			HX_STACK_LINE(950)
			bool tmp = (vec != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(950)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(950)
			if ((tmp)){
				HX_STACK_LINE(950)
				tmp1 = vec->zpp_disp;
			}
			else{
				HX_STACK_LINE(950)
				tmp1 = false;
			}
			HX_STACK_LINE(950)
			if ((tmp1)){
				HX_STACK_LINE(950)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(950)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(950)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(954)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(954)
		{
			HX_STACK_LINE(954)
			{
				HX_STACK_LINE(954)
				bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(954)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(954)
				if ((tmp1)){
					HX_STACK_LINE(954)
					tmp2 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(954)
					tmp2 = false;
				}
				HX_STACK_LINE(954)
				if ((tmp2)){
					HX_STACK_LINE(954)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(954)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(954)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(954)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(954)
			{
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(954)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(954)
					if ((tmp2)){
						HX_STACK_LINE(954)
						tmp3 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(954)
						tmp3 = false;
					}
					HX_STACK_LINE(954)
					if ((tmp3)){
						HX_STACK_LINE(954)
						::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(954)
						::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(954)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(954)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(954)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(954)
					if ((tmp3)){
						HX_STACK_LINE(954)
						_this->_validate();
					}
				}
				HX_STACK_LINE(954)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(954)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(954)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(954)
			{
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(954)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(954)
					if ((tmp3)){
						HX_STACK_LINE(954)
						tmp4 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(954)
						tmp4 = false;
					}
					HX_STACK_LINE(954)
					if ((tmp4)){
						HX_STACK_LINE(954)
						::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(954)
						::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(954)
						HX_STACK_DO_THROW(tmp6);
					}
				}
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(954)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(954)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(954)
					if ((tmp4)){
						HX_STACK_LINE(954)
						_this->_validate();
					}
				}
				HX_STACK_LINE(954)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(954)
				tmp2 = tmp3->x;
			}
			HX_STACK_LINE(954)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(954)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(954)
			{
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(954)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(954)
					if ((tmp5)){
						HX_STACK_LINE(954)
						tmp6 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(954)
						tmp6 = false;
					}
					HX_STACK_LINE(954)
					if ((tmp6)){
						HX_STACK_LINE(954)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(954)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(954)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(954)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(954)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(954)
					if ((tmp6)){
						HX_STACK_LINE(954)
						_this->_validate();
					}
				}
				HX_STACK_LINE(954)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(954)
				tmp4 = tmp5->y;
			}
			HX_STACK_LINE(954)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(954)
			{
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(954)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(954)
					if ((tmp6)){
						HX_STACK_LINE(954)
						tmp7 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(954)
						tmp7 = false;
					}
					HX_STACK_LINE(954)
					if ((tmp7)){
						HX_STACK_LINE(954)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(954)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(954)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(954)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(954)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(954)
					if ((tmp7)){
						HX_STACK_LINE(954)
						_this->_validate();
					}
				}
				HX_STACK_LINE(954)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(954)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(954)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(954)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(954)
			tmp = ::Math_obj::sqrt(tmp7);
		}
		HX_STACK_LINE(954)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(954)
		if ((tmp1)){
			HX_STACK_LINE(955)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot reflect in zero vector","\xd2","\x5e","\xd7","\x3d"));
		}
		HX_STACK_LINE(958)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(958)
		{
			HX_STACK_LINE(958)
			{
				HX_STACK_LINE(958)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(958)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(958)
				if ((tmp3)){
					HX_STACK_LINE(958)
					tmp4 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(958)
					tmp4 = false;
				}
				HX_STACK_LINE(958)
				if ((tmp4)){
					HX_STACK_LINE(958)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(958)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(958)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(958)
			{
				HX_STACK_LINE(958)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(958)
				{
					HX_STACK_LINE(958)
					bool tmp4 = this->zpp_disp;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(958)
					if ((tmp4)){
						HX_STACK_LINE(958)
						::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(958)
						::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(958)
						HX_STACK_DO_THROW(tmp6);
					}
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(958)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(958)
						if ((tmp6)){
							HX_STACK_LINE(958)
							_this->_validate();
						}
					}
					HX_STACK_LINE(958)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(958)
					tmp3 = tmp5->x;
				}
				HX_STACK_LINE(958)
				Float x = tmp3;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(958)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(958)
				{
					HX_STACK_LINE(958)
					bool tmp5 = this->zpp_disp;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(958)
					if ((tmp5)){
						HX_STACK_LINE(958)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(958)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(958)
						HX_STACK_DO_THROW(tmp7);
					}
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(958)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(958)
						if ((tmp7)){
							HX_STACK_LINE(958)
							_this->_validate();
						}
					}
					HX_STACK_LINE(958)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(958)
					tmp4 = tmp6->y;
				}
				HX_STACK_LINE(958)
				Float y = tmp4;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(958)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(958)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(958)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(958)
				if ((tmp6)){
					HX_STACK_LINE(958)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(958)
					tmp7 = true;
				}
				HX_STACK_LINE(958)
				if ((tmp7)){
					HX_STACK_LINE(958)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(958)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(958)
				{
					HX_STACK_LINE(958)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(958)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(958)
					if ((tmp9)){
						HX_STACK_LINE(958)
						::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(958)
						ret = tmp10;
					}
					else{
						HX_STACK_LINE(958)
						::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(958)
						ret = tmp10;
						HX_STACK_LINE(958)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(958)
						ret->zpp_pool = null();
						HX_STACK_LINE(958)
						ret->zpp_disp = false;
						HX_STACK_LINE(958)
						::nape::geom::Vec2 tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(958)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(958)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(958)
						if ((tmp13)){
							HX_STACK_LINE(958)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(958)
				bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(958)
				if ((tmp8)){
					HX_STACK_LINE(958)
					::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(958)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(958)
							if ((tmp11)){
								HX_STACK_LINE(958)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(958)
								ret1 = tmp12;
							}
							else{
								HX_STACK_LINE(958)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(958)
								ret1 = tmp12;
								HX_STACK_LINE(958)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(958)
								ret1->next = null();
							}
							HX_STACK_LINE(958)
							ret1->weak = false;
						}
						HX_STACK_LINE(958)
						ret1->_immutable = immutable;
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							ret1->x = x;
							HX_STACK_LINE(958)
							ret1->y = y;
							HX_STACK_LINE(958)
							{
							}
						}
						HX_STACK_LINE(958)
						tmp9 = ret1;
					}
					HX_STACK_LINE(958)
					ret->zpp_inner = tmp9;
					HX_STACK_LINE(958)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(958)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(958)
						if ((tmp9)){
							HX_STACK_LINE(958)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(958)
							tmp10 = false;
						}
						HX_STACK_LINE(958)
						if ((tmp10)){
							HX_STACK_LINE(958)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(958)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(958)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(958)
						bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(958)
						if ((tmp9)){
							HX_STACK_LINE(958)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(958)
						bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(958)
						if ((tmp10)){
							HX_STACK_LINE(958)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(958)
					bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(958)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(958)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(958)
					if ((tmp10)){
						HX_STACK_LINE(958)
						tmp11 = (y != y);
					}
					else{
						HX_STACK_LINE(958)
						tmp11 = true;
					}
					HX_STACK_LINE(958)
					if ((tmp11)){
						HX_STACK_LINE(958)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(958)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(958)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(958)
							if ((tmp13)){
								HX_STACK_LINE(958)
								tmp14 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(958)
								tmp14 = false;
							}
							HX_STACK_LINE(958)
							if ((tmp14)){
								HX_STACK_LINE(958)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(958)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(958)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(958)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(958)
							if ((tmp13)){
								HX_STACK_LINE(958)
								_this->_validate();
							}
						}
						HX_STACK_LINE(958)
						tmp12 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(958)
					Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(958)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(958)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(958)
					if ((tmp14)){
						HX_STACK_LINE(958)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(958)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(958)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(958)
								bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(958)
								if ((tmp20)){
									HX_STACK_LINE(958)
									tmp19 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(958)
									tmp19 = false;
								}
								HX_STACK_LINE(958)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(958)
								if ((tmp21)){
									HX_STACK_LINE(958)
									::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(958)
									::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(958)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(958)
									::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(958)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(958)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(958)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(958)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(958)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(958)
								if ((tmp19)){
									HX_STACK_LINE(958)
									_this->_validate();
								}
							}
							HX_STACK_LINE(958)
							Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(958)
							tmp16 = tmp17;
						}
						HX_STACK_LINE(958)
						Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(958)
						tmp15 = (tmp16 == tmp17);
					}
					else{
						HX_STACK_LINE(958)
						tmp15 = false;
					}
					HX_STACK_LINE(958)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(958)
					if ((tmp16)){
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(958)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(958)
							{
							}
						}
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(958)
							bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(958)
							if ((tmp17)){
								HX_STACK_LINE(958)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(958)
								_this->_invalidate(tmp18);
							}
						}
					}
					HX_STACK_LINE(958)
					ret;
				}
				HX_STACK_LINE(958)
				ret->zpp_inner->weak = true;
				HX_STACK_LINE(958)
				tmp2 = ret;
			}
		}
		HX_STACK_LINE(958)
		::nape::geom::Vec2 tmp3 = tmp2->normalise();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(958)
		::nape::geom::Vec2 normal = tmp3;		HX_STACK_VAR(normal,"normal");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 tmp4 = vec;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(959)
		Float tmp5 = normal->dot(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(959)
		Float tmp6 = ((int)2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 tmp7 = normal->muleq(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(959)
		bool tmp8 = weak;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 tmp9 = vec->sub(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 ret = tmp9;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(960)
		{
			HX_STACK_LINE(961)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(962)
			tmp10 = vec->zpp_inner->weak;
			HX_STACK_LINE(961)
			if ((tmp10)){
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						bool tmp11 = (vec != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(964)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(964)
						if ((tmp11)){
							HX_STACK_LINE(964)
							tmp12 = vec->zpp_disp;
						}
						else{
							HX_STACK_LINE(964)
							tmp12 = false;
						}
						HX_STACK_LINE(964)
						if ((tmp12)){
							HX_STACK_LINE(964)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(964)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(964)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_Vec2 _this = vec->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(964)
						bool tmp11 = _this->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(964)
						if ((tmp11)){
							HX_STACK_LINE(964)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(964)
						bool tmp12 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(964)
						if ((tmp12)){
							HX_STACK_LINE(964)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(964)
					bool tmp11 = vec->zpp_inner->_inuse;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(964)
					if ((tmp11)){
						HX_STACK_LINE(964)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_Vec2 inner = vec->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(964)
					vec->zpp_inner->outer = null();
					HX_STACK_LINE(964)
					vec->zpp_inner = null();
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						::nape::geom::Vec2 o = vec;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(964)
						o->zpp_pool = null();
						HX_STACK_LINE(964)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(964)
						bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(964)
						if ((tmp13)){
							HX_STACK_LINE(964)
							::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(964)
							tmp14->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(964)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(964)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(964)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(964)
						{
							HX_STACK_LINE(964)
							bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(964)
							if ((tmp12)){
								HX_STACK_LINE(964)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(964)
								o->outer = null();
							}
							HX_STACK_LINE(964)
							o->_isimmutable = null();
							HX_STACK_LINE(964)
							o->_validate = null();
							HX_STACK_LINE(964)
							o->_invalidate = null();
						}
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(964)
						o->next = tmp12;
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(965)
				true;
			}
			else{
				HX_STACK_LINE(968)
				false;
			}
		}
		HX_STACK_LINE(971)
		::nape::geom::Vec2 tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(971)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,reflect,return )

::nape::geom::Vec2 Vec2_obj::normalise( ){
	HX_STACK_FRAME("nape.geom.Vec2","normalise",0xd9232f70,"nape.geom.Vec2.normalise","nape/geom/Vec2.hx",984,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(985)
	{
		HX_STACK_LINE(987)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(987)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(987)
		if ((tmp)){
			HX_STACK_LINE(987)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(987)
			tmp1 = false;
		}
		HX_STACK_LINE(987)
		if ((tmp1)){
			HX_STACK_LINE(987)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(987)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(987)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(990)
	{
		HX_STACK_LINE(990)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(990)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(990)
		bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(990)
		if ((tmp1)){
			HX_STACK_LINE(990)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(990)
		bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(990)
		if ((tmp2)){
			HX_STACK_LINE(990)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(992)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(992)
	{
		HX_STACK_LINE(992)
		{
			HX_STACK_LINE(992)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(992)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(992)
			if ((tmp1)){
				HX_STACK_LINE(992)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(992)
				tmp2 = false;
			}
			HX_STACK_LINE(992)
			if ((tmp2)){
				HX_STACK_LINE(992)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(992)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(992)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(992)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(992)
		{
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(992)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(992)
				if ((tmp2)){
					HX_STACK_LINE(992)
					tmp3 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(992)
					tmp3 = false;
				}
				HX_STACK_LINE(992)
				if ((tmp3)){
					HX_STACK_LINE(992)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(992)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(992)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(992)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(992)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(992)
				if ((tmp3)){
					HX_STACK_LINE(992)
					_this->_validate();
				}
			}
			HX_STACK_LINE(992)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(992)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(992)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(992)
		{
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(992)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(992)
				if ((tmp3)){
					HX_STACK_LINE(992)
					tmp4 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(992)
					tmp4 = false;
				}
				HX_STACK_LINE(992)
				if ((tmp4)){
					HX_STACK_LINE(992)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(992)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(992)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(992)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(992)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(992)
				if ((tmp4)){
					HX_STACK_LINE(992)
					_this->_validate();
				}
			}
			HX_STACK_LINE(992)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(992)
			tmp2 = tmp3->x;
		}
		HX_STACK_LINE(992)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(992)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(992)
		{
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(992)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(992)
				if ((tmp5)){
					HX_STACK_LINE(992)
					tmp6 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(992)
					tmp6 = false;
				}
				HX_STACK_LINE(992)
				if ((tmp6)){
					HX_STACK_LINE(992)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(992)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(992)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(992)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(992)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(992)
				if ((tmp6)){
					HX_STACK_LINE(992)
					_this->_validate();
				}
			}
			HX_STACK_LINE(992)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(992)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(992)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(992)
		{
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(992)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(992)
				if ((tmp6)){
					HX_STACK_LINE(992)
					tmp7 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(992)
					tmp7 = false;
				}
				HX_STACK_LINE(992)
				if ((tmp7)){
					HX_STACK_LINE(992)
					::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(992)
					::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(992)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(992)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(992)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(992)
				if ((tmp7)){
					HX_STACK_LINE(992)
					_this->_validate();
				}
			}
			HX_STACK_LINE(992)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(992)
			tmp5 = tmp6->y;
		}
		HX_STACK_LINE(992)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(992)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(992)
		tmp = ::Math_obj::sqrt(tmp7);
	}
	HX_STACK_LINE(992)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(992)
	if ((tmp1)){
		HX_STACK_LINE(993)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot normalise vector of length 0","\x7d","\x68","\xb1","\x86"));
	}
	HX_STACK_LINE(996)
	{
		HX_STACK_LINE(997)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(997)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(997)
				if ((tmp3)){
					HX_STACK_LINE(997)
					tmp4 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(997)
					tmp4 = false;
				}
				HX_STACK_LINE(997)
				if ((tmp4)){
					HX_STACK_LINE(997)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(997)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(997)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(997)
				if ((tmp4)){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(997)
			tmp2 = tmp3->x;
		}
		HX_STACK_LINE(997)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(997)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(997)
				if ((tmp4)){
					HX_STACK_LINE(997)
					tmp5 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(997)
					tmp5 = false;
				}
				HX_STACK_LINE(997)
				if ((tmp5)){
					HX_STACK_LINE(997)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(997)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(997)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(997)
				if ((tmp5)){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(997)
			tmp3 = tmp4->x;
		}
		HX_STACK_LINE(997)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(997)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(997)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(997)
				if ((tmp6)){
					HX_STACK_LINE(997)
					tmp7 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(997)
					tmp7 = false;
				}
				HX_STACK_LINE(997)
				if ((tmp7)){
					HX_STACK_LINE(997)
					::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(997)
					::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(997)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(997)
				if ((tmp7)){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(997)
			tmp5 = tmp6->y;
		}
		HX_STACK_LINE(997)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(997)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(997)
				if ((tmp7)){
					HX_STACK_LINE(997)
					tmp8 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(997)
					tmp8 = false;
				}
				HX_STACK_LINE(997)
				if ((tmp8)){
					HX_STACK_LINE(997)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(997)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(997)
					HX_STACK_DO_THROW(tmp10);
				}
			}
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(997)
				if ((tmp8)){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(997)
			tmp6 = tmp7->y;
		}
		HX_STACK_LINE(997)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(997)
		Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(997)
		Float d = tmp8;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1006)
		Float tmp9 = d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1006)
		Float tmp10 = ::Math_obj::sqrt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1006)
		Float tmp11 = (Float(((Float)1.0)) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1006)
		Float imag = tmp11;		HX_STACK_VAR(imag,"imag");
		HX_STACK_LINE(1007)
		{
			HX_STACK_LINE(1008)
			Float t = imag;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1017)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1017)
				{
					HX_STACK_LINE(1017)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1017)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1017)
						if ((tmp13)){
							HX_STACK_LINE(1017)
							tmp14 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(1017)
							tmp14 = false;
						}
						HX_STACK_LINE(1017)
						if ((tmp14)){
							HX_STACK_LINE(1017)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1017)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1017)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1017)
							if ((tmp15)){
								HX_STACK_LINE(1017)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1017)
						tmp12 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(1017)
					Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1017)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1017)
					Float x = tmp14;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1017)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1017)
							if ((tmp15)){
								HX_STACK_LINE(1017)
								tmp16 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(1017)
								tmp16 = false;
							}
							HX_STACK_LINE(1017)
							if ((tmp16)){
								HX_STACK_LINE(1017)
								::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1017)
								::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1017)
								HX_STACK_DO_THROW(tmp18);
							}
						}
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							bool tmp15 = _this->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1017)
							if ((tmp15)){
								HX_STACK_LINE(1017)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(1017)
							bool tmp16 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1017)
							if ((tmp16)){
								HX_STACK_LINE(1017)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1017)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							{
								HX_STACK_LINE(1017)
								bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1017)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1017)
								if ((tmp16)){
									HX_STACK_LINE(1017)
									tmp17 = _g->zpp_disp;
								}
								else{
									HX_STACK_LINE(1017)
									tmp17 = false;
								}
								HX_STACK_LINE(1017)
								if ((tmp17)){
									HX_STACK_LINE(1017)
									::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1017)
									::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1017)
									HX_STACK_DO_THROW(tmp19);
								}
							}
							HX_STACK_LINE(1017)
							{
								HX_STACK_LINE(1017)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1017)
								bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1017)
								if ((tmp16)){
									HX_STACK_LINE(1017)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1017)
							tmp15 = _g->zpp_inner->x;
						}
						HX_STACK_LINE(1017)
						Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1017)
						bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1017)
						if ((tmp17)){
							HX_STACK_LINE(1017)
							bool tmp18 = (x != x);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1017)
							if ((tmp18)){
								HX_STACK_LINE(1017)
								::String tmp19 = HX_HCSTRING("Error: Vec2::x","\x6c","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1017)
								::String tmp20 = (tmp19 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1017)
								HX_STACK_DO_THROW(tmp20);
							}
							HX_STACK_LINE(1017)
							_g->zpp_inner->x = x;
							HX_STACK_LINE(1017)
							{
								HX_STACK_LINE(1017)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1017)
								bool tmp19 = (_this->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1017)
								if ((tmp19)){
									HX_STACK_LINE(1017)
									::zpp_nape::geom::ZPP_Vec2 tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1017)
									_this->_invalidate(tmp20);
								}
							}
						}
					}
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1017)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1017)
							if ((tmp15)){
								HX_STACK_LINE(1017)
								tmp16 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(1017)
								tmp16 = false;
							}
							HX_STACK_LINE(1017)
							if ((tmp16)){
								HX_STACK_LINE(1017)
								::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1017)
								::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1017)
								HX_STACK_DO_THROW(tmp18);
							}
						}
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1017)
							if ((tmp15)){
								HX_STACK_LINE(1017)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1017)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(1018)
			{
				HX_STACK_LINE(1018)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1018)
				{
					HX_STACK_LINE(1018)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1018)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1018)
						if ((tmp13)){
							HX_STACK_LINE(1018)
							tmp14 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(1018)
							tmp14 = false;
						}
						HX_STACK_LINE(1018)
						if ((tmp14)){
							HX_STACK_LINE(1018)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1018)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1018)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1018)
							if ((tmp15)){
								HX_STACK_LINE(1018)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1018)
						tmp12 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(1018)
					Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1018)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1018)
					Float y = tmp14;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1018)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1018)
							if ((tmp15)){
								HX_STACK_LINE(1018)
								tmp16 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(1018)
								tmp16 = false;
							}
							HX_STACK_LINE(1018)
							if ((tmp16)){
								HX_STACK_LINE(1018)
								::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1018)
								::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1018)
								HX_STACK_DO_THROW(tmp18);
							}
						}
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							bool tmp15 = _this->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1018)
							if ((tmp15)){
								HX_STACK_LINE(1018)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(1018)
							bool tmp16 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1018)
							if ((tmp16)){
								HX_STACK_LINE(1018)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1018)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1018)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1018)
								if ((tmp16)){
									HX_STACK_LINE(1018)
									tmp17 = _g->zpp_disp;
								}
								else{
									HX_STACK_LINE(1018)
									tmp17 = false;
								}
								HX_STACK_LINE(1018)
								if ((tmp17)){
									HX_STACK_LINE(1018)
									::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1018)
									::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1018)
									HX_STACK_DO_THROW(tmp19);
								}
							}
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1018)
								bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1018)
								if ((tmp16)){
									HX_STACK_LINE(1018)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1018)
							tmp15 = _g->zpp_inner->y;
						}
						HX_STACK_LINE(1018)
						Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1018)
						bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1018)
						if ((tmp17)){
							HX_STACK_LINE(1018)
							bool tmp18 = (y != y);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1018)
							if ((tmp18)){
								HX_STACK_LINE(1018)
								::String tmp19 = HX_HCSTRING("Error: Vec2::y","\x6d","\xc2","\x6d","\xbe");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1018)
								::String tmp20 = (tmp19 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1018)
								HX_STACK_DO_THROW(tmp20);
							}
							HX_STACK_LINE(1018)
							_g->zpp_inner->y = y;
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1018)
								bool tmp19 = (_this->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1018)
								if ((tmp19)){
									HX_STACK_LINE(1018)
									::zpp_nape::geom::ZPP_Vec2 tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1018)
									_this->_invalidate(tmp20);
								}
							}
						}
					}
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1018)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1018)
							if ((tmp15)){
								HX_STACK_LINE(1018)
								tmp16 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(1018)
								tmp16 = false;
							}
							HX_STACK_LINE(1018)
							if ((tmp16)){
								HX_STACK_LINE(1018)
								::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1018)
								::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1018)
								HX_STACK_DO_THROW(tmp18);
							}
						}
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1018)
							if ((tmp15)){
								HX_STACK_LINE(1018)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1018)
						_g->zpp_inner->y;
					}
				}
			}
		}
	}
	HX_STACK_LINE(1021)
	{
		HX_STACK_LINE(1021)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1021)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1021)
		bool tmp3 = (_this->_invalidate != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1021)
		if ((tmp3)){
			HX_STACK_LINE(1021)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = _this;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1021)
			_this->_invalidate(tmp4);
		}
	}
	HX_STACK_LINE(1022)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,normalise,return )

::nape::geom::Vec2 Vec2_obj::unit( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","unit",0xdae08e08,"nape.geom.Vec2.unit","nape/geom/Vec2.hx",1035,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1036)
		{
			HX_STACK_LINE(1038)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1038)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1038)
			if ((tmp)){
				HX_STACK_LINE(1038)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1038)
				tmp1 = false;
			}
			HX_STACK_LINE(1038)
			if ((tmp1)){
				HX_STACK_LINE(1038)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1038)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1038)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1042)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1042)
		{
			HX_STACK_LINE(1042)
			{
				HX_STACK_LINE(1042)
				bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1042)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1042)
				if ((tmp1)){
					HX_STACK_LINE(1042)
					tmp2 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(1042)
					tmp2 = false;
				}
				HX_STACK_LINE(1042)
				if ((tmp2)){
					HX_STACK_LINE(1042)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1042)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1042)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(1042)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1042)
			{
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1042)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1042)
					if ((tmp2)){
						HX_STACK_LINE(1042)
						tmp3 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(1042)
						tmp3 = false;
					}
					HX_STACK_LINE(1042)
					if ((tmp3)){
						HX_STACK_LINE(1042)
						::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1042)
						::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1042)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1042)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1042)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1042)
					if ((tmp3)){
						HX_STACK_LINE(1042)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1042)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1042)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(1042)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1042)
			{
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1042)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1042)
					if ((tmp3)){
						HX_STACK_LINE(1042)
						tmp4 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(1042)
						tmp4 = false;
					}
					HX_STACK_LINE(1042)
					if ((tmp4)){
						HX_STACK_LINE(1042)
						::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1042)
						::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1042)
						HX_STACK_DO_THROW(tmp6);
					}
				}
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1042)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1042)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1042)
					if ((tmp4)){
						HX_STACK_LINE(1042)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1042)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1042)
				tmp2 = tmp3->x;
			}
			HX_STACK_LINE(1042)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1042)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1042)
			{
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1042)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1042)
					if ((tmp5)){
						HX_STACK_LINE(1042)
						tmp6 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(1042)
						tmp6 = false;
					}
					HX_STACK_LINE(1042)
					if ((tmp6)){
						HX_STACK_LINE(1042)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1042)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1042)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1042)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1042)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1042)
					if ((tmp6)){
						HX_STACK_LINE(1042)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1042)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1042)
				tmp4 = tmp5->y;
			}
			HX_STACK_LINE(1042)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1042)
			{
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1042)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1042)
					if ((tmp6)){
						HX_STACK_LINE(1042)
						tmp7 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(1042)
						tmp7 = false;
					}
					HX_STACK_LINE(1042)
					if ((tmp7)){
						HX_STACK_LINE(1042)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1042)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1042)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1042)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1042)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1042)
					if ((tmp7)){
						HX_STACK_LINE(1042)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1042)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1042)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(1042)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1042)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1042)
			tmp = ::Math_obj::sqrt(tmp7);
		}
		HX_STACK_LINE(1042)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1042)
		if ((tmp1)){
			HX_STACK_LINE(1043)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot normalise vector of length 0","\x7d","\x68","\xb1","\x86"));
		}
		HX_STACK_LINE(1046)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1046)
		{
			HX_STACK_LINE(1046)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				bool tmp4 = this->zpp_disp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1046)
				if ((tmp4)){
					HX_STACK_LINE(1046)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1046)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1046)
					HX_STACK_DO_THROW(tmp6);
				}
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1046)
					if ((tmp6)){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1046)
				tmp3 = tmp5->x;
			}
			HX_STACK_LINE(1046)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				bool tmp5 = this->zpp_disp;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1046)
				if ((tmp5)){
					HX_STACK_LINE(1046)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1046)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1046)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1046)
					if ((tmp7)){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1046)
				tmp4 = tmp6->x;
			}
			HX_STACK_LINE(1046)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1046)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				bool tmp7 = this->zpp_disp;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1046)
				if ((tmp7)){
					HX_STACK_LINE(1046)
					::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1046)
					::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1046)
					HX_STACK_DO_THROW(tmp9);
				}
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1046)
					if ((tmp9)){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1046)
				tmp6 = tmp8->y;
			}
			HX_STACK_LINE(1046)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				bool tmp8 = this->zpp_disp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1046)
				if ((tmp8)){
					HX_STACK_LINE(1046)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1046)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1046)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1046)
					if ((tmp10)){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				::zpp_nape::geom::ZPP_Vec2 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1046)
				tmp7 = tmp9->y;
			}
			HX_STACK_LINE(1046)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1046)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1046)
			Float x = tmp9;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1046)
			Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1046)
			tmp2 = ::Math_obj::sqrt(tmp10);
		}
		HX_STACK_LINE(1046)
		Float tmp3 = (Float((int)1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1046)
		Float scale = tmp3;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(1047)
		::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1047)
		{
			HX_STACK_LINE(1047)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				bool tmp6 = this->zpp_disp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1047)
				if ((tmp6)){
					HX_STACK_LINE(1047)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1047)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1047)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1047)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1047)
					if ((tmp8)){
						HX_STACK_LINE(1047)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1047)
				tmp5 = tmp7->x;
			}
			HX_STACK_LINE(1047)
			Float tmp6 = scale;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1047)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1047)
			Float x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1047)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				bool tmp9 = this->zpp_disp;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1047)
				if ((tmp9)){
					HX_STACK_LINE(1047)
					::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1047)
					::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1047)
					HX_STACK_DO_THROW(tmp11);
				}
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1047)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1047)
					if ((tmp11)){
						HX_STACK_LINE(1047)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1047)
				tmp8 = tmp10->y;
			}
			HX_STACK_LINE(1047)
			Float tmp9 = scale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1047)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1047)
			Float y = tmp10;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1047)
			bool tmp11 = (x != x);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1047)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1047)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1047)
			if ((tmp12)){
				HX_STACK_LINE(1047)
				tmp13 = (y != y);
			}
			else{
				HX_STACK_LINE(1047)
				tmp13 = true;
			}
			HX_STACK_LINE(1047)
			if ((tmp13)){
				HX_STACK_LINE(1047)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1047)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1047)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1047)
				if ((tmp15)){
					HX_STACK_LINE(1047)
					::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1047)
					ret = tmp16;
				}
				else{
					HX_STACK_LINE(1047)
					::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1047)
					ret = tmp16;
					HX_STACK_LINE(1047)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1047)
					ret->zpp_pool = null();
					HX_STACK_LINE(1047)
					ret->zpp_disp = false;
					HX_STACK_LINE(1047)
					::nape::geom::Vec2 tmp17 = ret;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1047)
					::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1047)
					bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1047)
					if ((tmp19)){
						HX_STACK_LINE(1047)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1047)
			bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1047)
			if ((tmp14)){
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1047)
						bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1047)
						if ((tmp17)){
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1047)
							ret1 = tmp18;
						}
						else{
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1047)
							ret1 = tmp18;
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1047)
							ret1->next = null();
						}
						HX_STACK_LINE(1047)
						ret1->weak = false;
					}
					HX_STACK_LINE(1047)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						ret1->x = x;
						HX_STACK_LINE(1047)
						ret1->y = y;
						HX_STACK_LINE(1047)
						{
						}
					}
					HX_STACK_LINE(1047)
					tmp15 = ret1;
				}
				HX_STACK_LINE(1047)
				ret->zpp_inner = tmp15;
				HX_STACK_LINE(1047)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1047)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1047)
					if ((tmp15)){
						HX_STACK_LINE(1047)
						tmp16 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1047)
						tmp16 = false;
					}
					HX_STACK_LINE(1047)
					if ((tmp16)){
						HX_STACK_LINE(1047)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1047)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1047)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1047)
					bool tmp15 = _this->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1047)
					if ((tmp15)){
						HX_STACK_LINE(1047)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1047)
					bool tmp16 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1047)
					if ((tmp16)){
						HX_STACK_LINE(1047)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1047)
				bool tmp15 = (x != x);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1047)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1047)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1047)
				if ((tmp16)){
					HX_STACK_LINE(1047)
					tmp17 = (y != y);
				}
				else{
					HX_STACK_LINE(1047)
					tmp17 = true;
				}
				HX_STACK_LINE(1047)
				if ((tmp17)){
					HX_STACK_LINE(1047)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1047)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						bool tmp19 = (ret != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1047)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1047)
						if ((tmp19)){
							HX_STACK_LINE(1047)
							tmp20 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1047)
							tmp20 = false;
						}
						HX_STACK_LINE(1047)
						if ((tmp20)){
							HX_STACK_LINE(1047)
							::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1047)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1047)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1047)
						bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1047)
						if ((tmp19)){
							HX_STACK_LINE(1047)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1047)
					tmp18 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1047)
				Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1047)
				bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1047)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1047)
				if ((tmp20)){
					HX_STACK_LINE(1047)
					Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						{
							HX_STACK_LINE(1047)
							bool tmp23 = (ret != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1047)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1047)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1047)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1047)
							if ((tmp26)){
								HX_STACK_LINE(1047)
								tmp25 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1047)
								tmp25 = false;
							}
							HX_STACK_LINE(1047)
							bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1047)
							if ((tmp27)){
								HX_STACK_LINE(1047)
								::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1047)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1047)
								::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1047)
								::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1047)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1047)
								HX_STACK_DO_THROW(tmp32);
							}
						}
						HX_STACK_LINE(1047)
						{
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1047)
							bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1047)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1047)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1047)
							if ((tmp25)){
								HX_STACK_LINE(1047)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1047)
						Float tmp23 = ret->zpp_inner->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1047)
						tmp22 = tmp23;
					}
					HX_STACK_LINE(1047)
					Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1047)
					tmp21 = (tmp22 == tmp23);
				}
				else{
					HX_STACK_LINE(1047)
					tmp21 = false;
				}
				HX_STACK_LINE(1047)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1047)
				if ((tmp22)){
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1047)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1047)
						{
						}
					}
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1047)
						bool tmp23 = (_this->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1047)
						if ((tmp23)){
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1047)
							_this->_invalidate(tmp24);
						}
					}
				}
				HX_STACK_LINE(1047)
				ret;
			}
			HX_STACK_LINE(1047)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1047)
			tmp4 = ret;
		}
		HX_STACK_LINE(1047)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,unit,return )

::nape::geom::Vec2 Vec2_obj::add( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","add",0x32490b1d,"nape.geom.Vec2.add","nape/geom/Vec2.hx",1066,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1067)
		{
			HX_STACK_LINE(1069)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1069)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1069)
			if ((tmp)){
				HX_STACK_LINE(1069)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1069)
				tmp1 = false;
			}
			HX_STACK_LINE(1069)
			if ((tmp1)){
				HX_STACK_LINE(1069)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1069)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1069)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1072)
		{
			HX_STACK_LINE(1074)
			bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1074)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1074)
			if ((tmp)){
				HX_STACK_LINE(1074)
				tmp1 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1074)
				tmp1 = false;
			}
			HX_STACK_LINE(1074)
			if ((tmp1)){
				HX_STACK_LINE(1074)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1074)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1074)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1078)
		bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1078)
		if ((tmp)){
			HX_STACK_LINE(1079)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot add null vectors","\x25","\xe0","\x51","\x9f"));
		}
		HX_STACK_LINE(1082)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1082)
		{
			HX_STACK_LINE(1082)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				bool tmp3 = this->zpp_disp;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1082)
				if ((tmp3)){
					HX_STACK_LINE(1082)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1082)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1082)
					HX_STACK_DO_THROW(tmp5);
				}
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1082)
					if ((tmp5)){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1082)
				tmp2 = tmp4->x;
			}
			HX_STACK_LINE(1082)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				bool tmp4 = (vector != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1082)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1082)
				if ((tmp4)){
					HX_STACK_LINE(1082)
					tmp5 = vector->zpp_disp;
				}
				else{
					HX_STACK_LINE(1082)
					tmp5 = false;
				}
				HX_STACK_LINE(1082)
				if ((tmp5)){
					HX_STACK_LINE(1082)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1082)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1082)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1082)
					if ((tmp6)){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				tmp3 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1082)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1082)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1082)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				bool tmp6 = this->zpp_disp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1082)
				if ((tmp6)){
					HX_STACK_LINE(1082)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1082)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1082)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1082)
					if ((tmp8)){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1082)
				tmp5 = tmp7->y;
			}
			HX_STACK_LINE(1082)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				bool tmp7 = (vector != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1082)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1082)
				if ((tmp7)){
					HX_STACK_LINE(1082)
					tmp8 = vector->zpp_disp;
				}
				else{
					HX_STACK_LINE(1082)
					tmp8 = false;
				}
				HX_STACK_LINE(1082)
				if ((tmp8)){
					HX_STACK_LINE(1082)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1082)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1082)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1082)
					if ((tmp9)){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				tmp6 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1082)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1082)
			Float y = tmp7;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1082)
			bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1082)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1082)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1082)
			if ((tmp9)){
				HX_STACK_LINE(1082)
				tmp10 = (y != y);
			}
			else{
				HX_STACK_LINE(1082)
				tmp10 = true;
			}
			HX_STACK_LINE(1082)
			if ((tmp10)){
				HX_STACK_LINE(1082)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1082)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1082)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1082)
				if ((tmp12)){
					HX_STACK_LINE(1082)
					::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1082)
					ret = tmp13;
				}
				else{
					HX_STACK_LINE(1082)
					::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1082)
					ret = tmp13;
					HX_STACK_LINE(1082)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1082)
					ret->zpp_pool = null();
					HX_STACK_LINE(1082)
					ret->zpp_disp = false;
					HX_STACK_LINE(1082)
					::nape::geom::Vec2 tmp14 = ret;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1082)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1082)
					bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1082)
					if ((tmp16)){
						HX_STACK_LINE(1082)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1082)
			bool tmp11 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1082)
			if ((tmp11)){
				HX_STACK_LINE(1082)
				::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1082)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1082)
						if ((tmp14)){
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1082)
							ret1 = tmp15;
						}
						else{
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1082)
							ret1 = tmp15;
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1082)
							ret1->next = null();
						}
						HX_STACK_LINE(1082)
						ret1->weak = false;
					}
					HX_STACK_LINE(1082)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						ret1->x = x;
						HX_STACK_LINE(1082)
						ret1->y = y;
						HX_STACK_LINE(1082)
						{
						}
					}
					HX_STACK_LINE(1082)
					tmp12 = ret1;
				}
				HX_STACK_LINE(1082)
				ret->zpp_inner = tmp12;
				HX_STACK_LINE(1082)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1082)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1082)
					if ((tmp12)){
						HX_STACK_LINE(1082)
						tmp13 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1082)
						tmp13 = false;
					}
					HX_STACK_LINE(1082)
					if ((tmp13)){
						HX_STACK_LINE(1082)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1082)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1082)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp12 = _this->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1082)
					if ((tmp12)){
						HX_STACK_LINE(1082)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1082)
					bool tmp13 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1082)
					if ((tmp13)){
						HX_STACK_LINE(1082)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1082)
				bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1082)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1082)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1082)
				if ((tmp13)){
					HX_STACK_LINE(1082)
					tmp14 = (y != y);
				}
				else{
					HX_STACK_LINE(1082)
					tmp14 = true;
				}
				HX_STACK_LINE(1082)
				if ((tmp14)){
					HX_STACK_LINE(1082)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1082)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1082)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1082)
						if ((tmp16)){
							HX_STACK_LINE(1082)
							tmp17 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1082)
							tmp17 = false;
						}
						HX_STACK_LINE(1082)
						if ((tmp17)){
							HX_STACK_LINE(1082)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1082)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1082)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1082)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1082)
						if ((tmp16)){
							HX_STACK_LINE(1082)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1082)
					tmp15 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1082)
				Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1082)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1082)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1082)
				if ((tmp17)){
					HX_STACK_LINE(1082)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						{
							HX_STACK_LINE(1082)
							bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1082)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1082)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1082)
							bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1082)
							if ((tmp23)){
								HX_STACK_LINE(1082)
								tmp22 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1082)
								tmp22 = false;
							}
							HX_STACK_LINE(1082)
							bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1082)
							if ((tmp24)){
								HX_STACK_LINE(1082)
								::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1082)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1082)
								::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1082)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1082)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1082)
								HX_STACK_DO_THROW(tmp29);
							}
						}
						HX_STACK_LINE(1082)
						{
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1082)
							bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1082)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1082)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1082)
							if ((tmp22)){
								HX_STACK_LINE(1082)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1082)
						Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1082)
						tmp19 = tmp20;
					}
					HX_STACK_LINE(1082)
					Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1082)
					tmp18 = (tmp19 == tmp20);
				}
				else{
					HX_STACK_LINE(1082)
					tmp18 = false;
				}
				HX_STACK_LINE(1082)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1082)
				if ((tmp19)){
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1082)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1082)
						{
						}
					}
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1082)
						bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1082)
						if ((tmp20)){
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1082)
							_this->_invalidate(tmp21);
						}
					}
				}
				HX_STACK_LINE(1082)
				ret;
			}
			HX_STACK_LINE(1082)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1082)
			tmp1 = ret;
		}
		HX_STACK_LINE(1082)
		::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1083)
		{
			HX_STACK_LINE(1084)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1085)
			tmp2 = vector->zpp_inner->weak;
			HX_STACK_LINE(1084)
			if ((tmp2)){
				HX_STACK_LINE(1087)
				{
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1087)
						bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1087)
						if ((tmp3)){
							HX_STACK_LINE(1087)
							tmp4 = vector->zpp_disp;
						}
						else{
							HX_STACK_LINE(1087)
							tmp4 = false;
						}
						HX_STACK_LINE(1087)
						if ((tmp4)){
							HX_STACK_LINE(1087)
							::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1087)
							::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1087)
							HX_STACK_DO_THROW(tmp6);
						}
					}
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1087)
						bool tmp3 = _this->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1087)
						if ((tmp3)){
							HX_STACK_LINE(1087)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1087)
						bool tmp4 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1087)
						if ((tmp4)){
							HX_STACK_LINE(1087)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1087)
					bool tmp3 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1087)
					if ((tmp3)){
						HX_STACK_LINE(1087)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(1087)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1087)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(1087)
					vector->zpp_inner = null();
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1087)
						o->zpp_pool = null();
						HX_STACK_LINE(1087)
						::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1087)
						bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1087)
						if ((tmp5)){
							HX_STACK_LINE(1087)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1087)
							tmp6->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1087)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1087)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1087)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1087)
						{
							HX_STACK_LINE(1087)
							bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1087)
							if ((tmp4)){
								HX_STACK_LINE(1087)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1087)
								o->outer = null();
							}
							HX_STACK_LINE(1087)
							o->_isimmutable = null();
							HX_STACK_LINE(1087)
							o->_validate = null();
							HX_STACK_LINE(1087)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1087)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1087)
						o->next = tmp4;
						HX_STACK_LINE(1087)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1088)
				true;
			}
			else{
				HX_STACK_LINE(1091)
				false;
			}
		}
		HX_STACK_LINE(1094)
		::nape::geom::Vec2 tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1094)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,add,return )

::nape::geom::Vec2 Vec2_obj::addMul( ::nape::geom::Vec2 vector,Float scalar,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","addMul",0xfa15d8e7,"nape.geom.Vec2.addMul","nape/geom/Vec2.hx",1119,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1120)
		{
			HX_STACK_LINE(1122)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1122)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1122)
			if ((tmp)){
				HX_STACK_LINE(1122)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1122)
				tmp1 = false;
			}
			HX_STACK_LINE(1122)
			if ((tmp1)){
				HX_STACK_LINE(1122)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1122)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1122)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1125)
		{
			HX_STACK_LINE(1127)
			bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1127)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1127)
			if ((tmp)){
				HX_STACK_LINE(1127)
				tmp1 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1127)
				tmp1 = false;
			}
			HX_STACK_LINE(1127)
			if ((tmp1)){
				HX_STACK_LINE(1127)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1127)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1127)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1131)
		bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1131)
		if ((tmp)){
			HX_STACK_LINE(1132)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot add null vectors","\x25","\xe0","\x51","\x9f"));
		}
		HX_STACK_LINE(1135)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1135)
		{
			HX_STACK_LINE(1135)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				bool tmp3 = this->zpp_disp;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1135)
				if ((tmp3)){
					HX_STACK_LINE(1135)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1135)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1135)
					HX_STACK_DO_THROW(tmp5);
				}
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1135)
					if ((tmp5)){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1135)
				tmp2 = tmp4->x;
			}
			HX_STACK_LINE(1135)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				bool tmp4 = (vector != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1135)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1135)
				if ((tmp4)){
					HX_STACK_LINE(1135)
					tmp5 = vector->zpp_disp;
				}
				else{
					HX_STACK_LINE(1135)
					tmp5 = false;
				}
				HX_STACK_LINE(1135)
				if ((tmp5)){
					HX_STACK_LINE(1135)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1135)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1135)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1135)
					if ((tmp6)){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				tmp3 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1135)
			Float tmp4 = scalar;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1135)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1135)
			Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1135)
			Float x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1135)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				bool tmp8 = this->zpp_disp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1135)
				if ((tmp8)){
					HX_STACK_LINE(1135)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1135)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1135)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1135)
					if ((tmp10)){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				::zpp_nape::geom::ZPP_Vec2 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1135)
				tmp7 = tmp9->y;
			}
			HX_STACK_LINE(1135)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				bool tmp9 = (vector != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1135)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1135)
				if ((tmp9)){
					HX_STACK_LINE(1135)
					tmp10 = vector->zpp_disp;
				}
				else{
					HX_STACK_LINE(1135)
					tmp10 = false;
				}
				HX_STACK_LINE(1135)
				if ((tmp10)){
					HX_STACK_LINE(1135)
					::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1135)
					::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1135)
					HX_STACK_DO_THROW(tmp12);
				}
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1135)
					if ((tmp11)){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				tmp8 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1135)
			Float tmp9 = scalar;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1135)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1135)
			Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1135)
			Float y = tmp11;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1135)
			bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1135)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1135)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1135)
			if ((tmp13)){
				HX_STACK_LINE(1135)
				tmp14 = (y != y);
			}
			else{
				HX_STACK_LINE(1135)
				tmp14 = true;
			}
			HX_STACK_LINE(1135)
			if ((tmp14)){
				HX_STACK_LINE(1135)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1135)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1135)
				bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1135)
				if ((tmp16)){
					HX_STACK_LINE(1135)
					::nape::geom::Vec2 tmp17 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1135)
					ret = tmp17;
				}
				else{
					HX_STACK_LINE(1135)
					::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1135)
					ret = tmp17;
					HX_STACK_LINE(1135)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1135)
					ret->zpp_pool = null();
					HX_STACK_LINE(1135)
					ret->zpp_disp = false;
					HX_STACK_LINE(1135)
					::nape::geom::Vec2 tmp18 = ret;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1135)
					::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1135)
					bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1135)
					if ((tmp20)){
						HX_STACK_LINE(1135)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1135)
			bool tmp15 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1135)
			if ((tmp15)){
				HX_STACK_LINE(1135)
				::zpp_nape::geom::ZPP_Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1135)
						bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1135)
						if ((tmp18)){
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1135)
							ret1 = tmp19;
						}
						else{
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1135)
							ret1 = tmp19;
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1135)
							ret1->next = null();
						}
						HX_STACK_LINE(1135)
						ret1->weak = false;
					}
					HX_STACK_LINE(1135)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						ret1->x = x;
						HX_STACK_LINE(1135)
						ret1->y = y;
						HX_STACK_LINE(1135)
						{
						}
					}
					HX_STACK_LINE(1135)
					tmp16 = ret1;
				}
				HX_STACK_LINE(1135)
				ret->zpp_inner = tmp16;
				HX_STACK_LINE(1135)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1135)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1135)
					if ((tmp16)){
						HX_STACK_LINE(1135)
						tmp17 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1135)
						tmp17 = false;
					}
					HX_STACK_LINE(1135)
					if ((tmp17)){
						HX_STACK_LINE(1135)
						::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1135)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1135)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp16 = _this->_immutable;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1135)
					if ((tmp16)){
						HX_STACK_LINE(1135)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1135)
					bool tmp17 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1135)
					if ((tmp17)){
						HX_STACK_LINE(1135)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1135)
				bool tmp16 = (x != x);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1135)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1135)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1135)
				if ((tmp17)){
					HX_STACK_LINE(1135)
					tmp18 = (y != y);
				}
				else{
					HX_STACK_LINE(1135)
					tmp18 = true;
				}
				HX_STACK_LINE(1135)
				if ((tmp18)){
					HX_STACK_LINE(1135)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1135)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1135)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1135)
						if ((tmp20)){
							HX_STACK_LINE(1135)
							tmp21 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1135)
							tmp21 = false;
						}
						HX_STACK_LINE(1135)
						if ((tmp21)){
							HX_STACK_LINE(1135)
							::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1135)
							::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1135)
							HX_STACK_DO_THROW(tmp23);
						}
					}
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1135)
						bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1135)
						if ((tmp20)){
							HX_STACK_LINE(1135)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1135)
					tmp19 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1135)
				Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1135)
				bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1135)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1135)
				if ((tmp21)){
					HX_STACK_LINE(1135)
					Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						{
							HX_STACK_LINE(1135)
							bool tmp24 = (ret != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1135)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1135)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1135)
							bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1135)
							if ((tmp27)){
								HX_STACK_LINE(1135)
								tmp26 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1135)
								tmp26 = false;
							}
							HX_STACK_LINE(1135)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1135)
							if ((tmp28)){
								HX_STACK_LINE(1135)
								::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1135)
								::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1135)
								::String tmp31 = (tmp30 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1135)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1135)
								::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1135)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(1135)
						{
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1135)
							bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1135)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1135)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1135)
							if ((tmp26)){
								HX_STACK_LINE(1135)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1135)
						Float tmp24 = ret->zpp_inner->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1135)
						tmp23 = tmp24;
					}
					HX_STACK_LINE(1135)
					Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1135)
					tmp22 = (tmp23 == tmp24);
				}
				else{
					HX_STACK_LINE(1135)
					tmp22 = false;
				}
				HX_STACK_LINE(1135)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1135)
				if ((tmp23)){
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1135)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1135)
						{
						}
					}
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1135)
						bool tmp24 = (_this->_invalidate != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1135)
						if ((tmp24)){
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1135)
							_this->_invalidate(tmp25);
						}
					}
				}
				HX_STACK_LINE(1135)
				ret;
			}
			HX_STACK_LINE(1135)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1135)
			tmp1 = ret;
		}
		HX_STACK_LINE(1135)
		::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1136)
		{
			HX_STACK_LINE(1137)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1138)
			tmp2 = vector->zpp_inner->weak;
			HX_STACK_LINE(1137)
			if ((tmp2)){
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					{
						HX_STACK_LINE(1140)
						bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1140)
						bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1140)
						if ((tmp3)){
							HX_STACK_LINE(1140)
							tmp4 = vector->zpp_disp;
						}
						else{
							HX_STACK_LINE(1140)
							tmp4 = false;
						}
						HX_STACK_LINE(1140)
						if ((tmp4)){
							HX_STACK_LINE(1140)
							::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1140)
							::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1140)
							HX_STACK_DO_THROW(tmp6);
						}
					}
					HX_STACK_LINE(1140)
					{
						HX_STACK_LINE(1140)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1140)
						bool tmp3 = _this->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1140)
						if ((tmp3)){
							HX_STACK_LINE(1140)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1140)
						bool tmp4 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1140)
						if ((tmp4)){
							HX_STACK_LINE(1140)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1140)
					bool tmp3 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1140)
					if ((tmp3)){
						HX_STACK_LINE(1140)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(1140)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1140)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(1140)
					vector->zpp_inner = null();
					HX_STACK_LINE(1140)
					{
						HX_STACK_LINE(1140)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1140)
						o->zpp_pool = null();
						HX_STACK_LINE(1140)
						::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1140)
						bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1140)
						if ((tmp5)){
							HX_STACK_LINE(1140)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1140)
							tmp6->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1140)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1140)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1140)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1140)
					{
						HX_STACK_LINE(1140)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1140)
						{
							HX_STACK_LINE(1140)
							bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1140)
							if ((tmp4)){
								HX_STACK_LINE(1140)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1140)
								o->outer = null();
							}
							HX_STACK_LINE(1140)
							o->_isimmutable = null();
							HX_STACK_LINE(1140)
							o->_validate = null();
							HX_STACK_LINE(1140)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1140)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1140)
						o->next = tmp4;
						HX_STACK_LINE(1140)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1141)
				true;
			}
			else{
				HX_STACK_LINE(1144)
				false;
			}
		}
		HX_STACK_LINE(1147)
		::nape::geom::Vec2 tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1147)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,addMul,return )

::nape::geom::Vec2 Vec2_obj::sub( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","sub",0x3256c27c,"nape.geom.Vec2.sub","nape/geom/Vec2.hx",1165,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1166)
		{
			HX_STACK_LINE(1168)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1168)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1168)
			if ((tmp)){
				HX_STACK_LINE(1168)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1168)
				tmp1 = false;
			}
			HX_STACK_LINE(1168)
			if ((tmp1)){
				HX_STACK_LINE(1168)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1168)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1168)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1171)
		{
			HX_STACK_LINE(1173)
			bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1173)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1173)
			if ((tmp)){
				HX_STACK_LINE(1173)
				tmp1 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1173)
				tmp1 = false;
			}
			HX_STACK_LINE(1173)
			if ((tmp1)){
				HX_STACK_LINE(1173)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1173)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1173)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1177)
		bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1177)
		if ((tmp)){
			HX_STACK_LINE(1178)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot subtract null vectors","\xd4","\x7c","\x91","\x74"));
		}
		HX_STACK_LINE(1181)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1181)
		{
			HX_STACK_LINE(1181)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				bool tmp3 = this->zpp_disp;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1181)
				if ((tmp3)){
					HX_STACK_LINE(1181)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1181)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1181)
					HX_STACK_DO_THROW(tmp5);
				}
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1181)
					if ((tmp5)){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1181)
				tmp2 = tmp4->x;
			}
			HX_STACK_LINE(1181)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				bool tmp4 = (vector != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1181)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1181)
				if ((tmp4)){
					HX_STACK_LINE(1181)
					tmp5 = vector->zpp_disp;
				}
				else{
					HX_STACK_LINE(1181)
					tmp5 = false;
				}
				HX_STACK_LINE(1181)
				if ((tmp5)){
					HX_STACK_LINE(1181)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1181)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1181)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1181)
					if ((tmp6)){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				tmp3 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1181)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1181)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1181)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				bool tmp6 = this->zpp_disp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1181)
				if ((tmp6)){
					HX_STACK_LINE(1181)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1181)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1181)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1181)
					if ((tmp8)){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1181)
				tmp5 = tmp7->y;
			}
			HX_STACK_LINE(1181)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				bool tmp7 = (vector != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1181)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1181)
				if ((tmp7)){
					HX_STACK_LINE(1181)
					tmp8 = vector->zpp_disp;
				}
				else{
					HX_STACK_LINE(1181)
					tmp8 = false;
				}
				HX_STACK_LINE(1181)
				if ((tmp8)){
					HX_STACK_LINE(1181)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1181)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1181)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1181)
					if ((tmp9)){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				tmp6 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1181)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1181)
			Float y = tmp7;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1181)
			bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1181)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1181)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1181)
			if ((tmp9)){
				HX_STACK_LINE(1181)
				tmp10 = (y != y);
			}
			else{
				HX_STACK_LINE(1181)
				tmp10 = true;
			}
			HX_STACK_LINE(1181)
			if ((tmp10)){
				HX_STACK_LINE(1181)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1181)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1181)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1181)
				if ((tmp12)){
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1181)
					ret = tmp13;
				}
				else{
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1181)
					ret = tmp13;
					HX_STACK_LINE(1181)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1181)
					ret->zpp_pool = null();
					HX_STACK_LINE(1181)
					ret->zpp_disp = false;
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp14 = ret;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1181)
					bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1181)
					if ((tmp16)){
						HX_STACK_LINE(1181)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1181)
			bool tmp11 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1181)
			if ((tmp11)){
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1181)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1181)
						if ((tmp14)){
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1181)
							ret1 = tmp15;
						}
						else{
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1181)
							ret1 = tmp15;
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1181)
							ret1->next = null();
						}
						HX_STACK_LINE(1181)
						ret1->weak = false;
					}
					HX_STACK_LINE(1181)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret1->x = x;
						HX_STACK_LINE(1181)
						ret1->y = y;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					tmp12 = ret1;
				}
				HX_STACK_LINE(1181)
				ret->zpp_inner = tmp12;
				HX_STACK_LINE(1181)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1181)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1181)
					if ((tmp12)){
						HX_STACK_LINE(1181)
						tmp13 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1181)
						tmp13 = false;
					}
					HX_STACK_LINE(1181)
					if ((tmp13)){
						HX_STACK_LINE(1181)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1181)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1181)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp12 = _this->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1181)
					if ((tmp12)){
						HX_STACK_LINE(1181)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1181)
					bool tmp13 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1181)
					if ((tmp13)){
						HX_STACK_LINE(1181)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1181)
				bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1181)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1181)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1181)
				if ((tmp13)){
					HX_STACK_LINE(1181)
					tmp14 = (y != y);
				}
				else{
					HX_STACK_LINE(1181)
					tmp14 = true;
				}
				HX_STACK_LINE(1181)
				if ((tmp14)){
					HX_STACK_LINE(1181)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1181)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1181)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1181)
						if ((tmp16)){
							HX_STACK_LINE(1181)
							tmp17 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1181)
							tmp17 = false;
						}
						HX_STACK_LINE(1181)
						if ((tmp17)){
							HX_STACK_LINE(1181)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1181)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1181)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1181)
						if ((tmp16)){
							HX_STACK_LINE(1181)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1181)
					tmp15 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1181)
				Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1181)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1181)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1181)
				if ((tmp17)){
					HX_STACK_LINE(1181)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						{
							HX_STACK_LINE(1181)
							bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1181)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1181)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1181)
							bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1181)
							if ((tmp23)){
								HX_STACK_LINE(1181)
								tmp22 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1181)
								tmp22 = false;
							}
							HX_STACK_LINE(1181)
							bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1181)
							if ((tmp24)){
								HX_STACK_LINE(1181)
								::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1181)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1181)
								::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1181)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1181)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1181)
								HX_STACK_DO_THROW(tmp29);
							}
						}
						HX_STACK_LINE(1181)
						{
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1181)
							bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1181)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1181)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1181)
							if ((tmp22)){
								HX_STACK_LINE(1181)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1181)
						Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1181)
						tmp19 = tmp20;
					}
					HX_STACK_LINE(1181)
					Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1181)
					tmp18 = (tmp19 == tmp20);
				}
				else{
					HX_STACK_LINE(1181)
					tmp18 = false;
				}
				HX_STACK_LINE(1181)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1181)
				if ((tmp19)){
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1181)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1181)
						if ((tmp20)){
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1181)
							_this->_invalidate(tmp21);
						}
					}
				}
				HX_STACK_LINE(1181)
				ret;
			}
			HX_STACK_LINE(1181)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1181)
			tmp1 = ret;
		}
		HX_STACK_LINE(1181)
		::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1182)
		{
			HX_STACK_LINE(1183)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1184)
			tmp2 = vector->zpp_inner->weak;
			HX_STACK_LINE(1183)
			if ((tmp2)){
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1186)
						bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1186)
						bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1186)
						if ((tmp3)){
							HX_STACK_LINE(1186)
							tmp4 = vector->zpp_disp;
						}
						else{
							HX_STACK_LINE(1186)
							tmp4 = false;
						}
						HX_STACK_LINE(1186)
						if ((tmp4)){
							HX_STACK_LINE(1186)
							::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1186)
							::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1186)
							HX_STACK_DO_THROW(tmp6);
						}
					}
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1186)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1186)
						bool tmp3 = _this->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1186)
						if ((tmp3)){
							HX_STACK_LINE(1186)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1186)
						bool tmp4 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1186)
						if ((tmp4)){
							HX_STACK_LINE(1186)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1186)
					bool tmp3 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1186)
					if ((tmp3)){
						HX_STACK_LINE(1186)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(1186)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1186)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(1186)
					vector->zpp_inner = null();
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1186)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1186)
						o->zpp_pool = null();
						HX_STACK_LINE(1186)
						::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1186)
						bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1186)
						if ((tmp5)){
							HX_STACK_LINE(1186)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1186)
							tmp6->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1186)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1186)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1186)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1186)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1186)
						{
							HX_STACK_LINE(1186)
							bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1186)
							if ((tmp4)){
								HX_STACK_LINE(1186)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1186)
								o->outer = null();
							}
							HX_STACK_LINE(1186)
							o->_isimmutable = null();
							HX_STACK_LINE(1186)
							o->_validate = null();
							HX_STACK_LINE(1186)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1186)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1186)
						o->next = tmp4;
						HX_STACK_LINE(1186)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1187)
				true;
			}
			else{
				HX_STACK_LINE(1190)
				false;
			}
		}
		HX_STACK_LINE(1193)
		::nape::geom::Vec2 tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1193)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,sub,return )

::nape::geom::Vec2 Vec2_obj::mul( Float scalar,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","mul",0x32523500,"nape.geom.Vec2.mul","nape/geom/Vec2.hx",1209,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1210)
		{
			HX_STACK_LINE(1212)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1212)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1212)
			if ((tmp)){
				HX_STACK_LINE(1212)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1212)
				tmp1 = false;
			}
			HX_STACK_LINE(1212)
			if ((tmp1)){
				HX_STACK_LINE(1212)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1212)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1212)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1216)
		bool tmp = (scalar != scalar);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1216)
		if ((tmp)){
			HX_STACK_LINE(1217)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot multiply with NaN","\x0e","\xe9","\x6e","\x5b"));
		}
		HX_STACK_LINE(1220)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1220)
		{
			HX_STACK_LINE(1220)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				bool tmp3 = this->zpp_disp;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1220)
				if ((tmp3)){
					HX_STACK_LINE(1220)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1220)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1220)
					HX_STACK_DO_THROW(tmp5);
				}
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1220)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1220)
					if ((tmp5)){
						HX_STACK_LINE(1220)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1220)
				tmp2 = tmp4->x;
			}
			HX_STACK_LINE(1220)
			Float tmp3 = scalar;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1220)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1220)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1220)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				bool tmp6 = this->zpp_disp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1220)
				if ((tmp6)){
					HX_STACK_LINE(1220)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1220)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1220)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1220)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1220)
					if ((tmp8)){
						HX_STACK_LINE(1220)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1220)
				tmp5 = tmp7->y;
			}
			HX_STACK_LINE(1220)
			Float tmp6 = scalar;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1220)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1220)
			Float y = tmp7;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1220)
			bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1220)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1220)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1220)
			if ((tmp9)){
				HX_STACK_LINE(1220)
				tmp10 = (y != y);
			}
			else{
				HX_STACK_LINE(1220)
				tmp10 = true;
			}
			HX_STACK_LINE(1220)
			if ((tmp10)){
				HX_STACK_LINE(1220)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1220)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1220)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1220)
				if ((tmp12)){
					HX_STACK_LINE(1220)
					::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1220)
					ret = tmp13;
				}
				else{
					HX_STACK_LINE(1220)
					::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1220)
					ret = tmp13;
					HX_STACK_LINE(1220)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1220)
					ret->zpp_pool = null();
					HX_STACK_LINE(1220)
					ret->zpp_disp = false;
					HX_STACK_LINE(1220)
					::nape::geom::Vec2 tmp14 = ret;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1220)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1220)
					bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1220)
					if ((tmp16)){
						HX_STACK_LINE(1220)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1220)
			bool tmp11 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1220)
			if ((tmp11)){
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1220)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1220)
						if ((tmp14)){
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1220)
							ret1 = tmp15;
						}
						else{
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1220)
							ret1 = tmp15;
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1220)
							ret1->next = null();
						}
						HX_STACK_LINE(1220)
						ret1->weak = false;
					}
					HX_STACK_LINE(1220)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						ret1->x = x;
						HX_STACK_LINE(1220)
						ret1->y = y;
						HX_STACK_LINE(1220)
						{
						}
					}
					HX_STACK_LINE(1220)
					tmp12 = ret1;
				}
				HX_STACK_LINE(1220)
				ret->zpp_inner = tmp12;
				HX_STACK_LINE(1220)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1220)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1220)
					if ((tmp12)){
						HX_STACK_LINE(1220)
						tmp13 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1220)
						tmp13 = false;
					}
					HX_STACK_LINE(1220)
					if ((tmp13)){
						HX_STACK_LINE(1220)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1220)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1220)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1220)
					bool tmp12 = _this->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1220)
					if ((tmp12)){
						HX_STACK_LINE(1220)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1220)
					bool tmp13 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1220)
					if ((tmp13)){
						HX_STACK_LINE(1220)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1220)
				bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1220)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1220)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1220)
				if ((tmp13)){
					HX_STACK_LINE(1220)
					tmp14 = (y != y);
				}
				else{
					HX_STACK_LINE(1220)
					tmp14 = true;
				}
				HX_STACK_LINE(1220)
				if ((tmp14)){
					HX_STACK_LINE(1220)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1220)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1220)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1220)
						if ((tmp16)){
							HX_STACK_LINE(1220)
							tmp17 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1220)
							tmp17 = false;
						}
						HX_STACK_LINE(1220)
						if ((tmp17)){
							HX_STACK_LINE(1220)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1220)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1220)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1220)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1220)
						if ((tmp16)){
							HX_STACK_LINE(1220)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1220)
					tmp15 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1220)
				Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1220)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1220)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1220)
				if ((tmp17)){
					HX_STACK_LINE(1220)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						{
							HX_STACK_LINE(1220)
							bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1220)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1220)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1220)
							bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1220)
							if ((tmp23)){
								HX_STACK_LINE(1220)
								tmp22 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1220)
								tmp22 = false;
							}
							HX_STACK_LINE(1220)
							bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1220)
							if ((tmp24)){
								HX_STACK_LINE(1220)
								::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1220)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1220)
								::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1220)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1220)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1220)
								HX_STACK_DO_THROW(tmp29);
							}
						}
						HX_STACK_LINE(1220)
						{
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1220)
							bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1220)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1220)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1220)
							if ((tmp22)){
								HX_STACK_LINE(1220)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1220)
						Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1220)
						tmp19 = tmp20;
					}
					HX_STACK_LINE(1220)
					Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1220)
					tmp18 = (tmp19 == tmp20);
				}
				else{
					HX_STACK_LINE(1220)
					tmp18 = false;
				}
				HX_STACK_LINE(1220)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1220)
				if ((tmp19)){
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1220)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1220)
						{
						}
					}
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1220)
						bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1220)
						if ((tmp20)){
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1220)
							_this->_invalidate(tmp21);
						}
					}
				}
				HX_STACK_LINE(1220)
				ret;
			}
			HX_STACK_LINE(1220)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1220)
			tmp1 = ret;
		}
		HX_STACK_LINE(1220)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,mul,return )

::nape::geom::Vec2 Vec2_obj::addeq( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","addeq",0x1ef824c9,"nape.geom.Vec2.addeq","nape/geom/Vec2.hx",1237,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1238)
	{
		HX_STACK_LINE(1240)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1240)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1240)
		if ((tmp)){
			HX_STACK_LINE(1240)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1240)
			tmp1 = false;
		}
		HX_STACK_LINE(1240)
		if ((tmp1)){
			HX_STACK_LINE(1240)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1240)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1240)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1243)
	{
		HX_STACK_LINE(1245)
		bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1245)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1245)
		if ((tmp)){
			HX_STACK_LINE(1245)
			tmp1 = vector->zpp_disp;
		}
		else{
			HX_STACK_LINE(1245)
			tmp1 = false;
		}
		HX_STACK_LINE(1245)
		if ((tmp1)){
			HX_STACK_LINE(1245)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1245)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1245)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1248)
	{
		HX_STACK_LINE(1248)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1248)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1248)
		bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1248)
		if ((tmp1)){
			HX_STACK_LINE(1248)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(1248)
		bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1248)
		if ((tmp2)){
			HX_STACK_LINE(1248)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(1250)
	bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1250)
	if ((tmp)){
		HX_STACK_LINE(1251)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot add null vectors","\x25","\xe0","\x51","\x9f"));
	}
	HX_STACK_LINE(1254)
	{
		HX_STACK_LINE(1254)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			bool tmp2 = this->zpp_disp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1254)
			if ((tmp2)){
				HX_STACK_LINE(1254)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1254)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1254)
				HX_STACK_DO_THROW(tmp4);
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1254)
				if ((tmp4)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1254)
			tmp1 = tmp3->x;
		}
		HX_STACK_LINE(1254)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1254)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1254)
			if ((tmp3)){
				HX_STACK_LINE(1254)
				tmp4 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1254)
				tmp4 = false;
			}
			HX_STACK_LINE(1254)
			if ((tmp4)){
				HX_STACK_LINE(1254)
				::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1254)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1254)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1254)
				if ((tmp5)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			tmp2 = vector->zpp_inner->x;
		}
		HX_STACK_LINE(1254)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1254)
		Float x = tmp3;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1254)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			bool tmp5 = this->zpp_disp;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1254)
			if ((tmp5)){
				HX_STACK_LINE(1254)
				::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1254)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1254)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1254)
				if ((tmp7)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1254)
			tmp4 = tmp6->y;
		}
		HX_STACK_LINE(1254)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			bool tmp6 = (vector != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1254)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1254)
			if ((tmp6)){
				HX_STACK_LINE(1254)
				tmp7 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1254)
				tmp7 = false;
			}
			HX_STACK_LINE(1254)
			if ((tmp7)){
				HX_STACK_LINE(1254)
				::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1254)
				::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1254)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1254)
				if ((tmp8)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			tmp5 = vector->zpp_inner->y;
		}
		HX_STACK_LINE(1254)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1254)
		Float y = tmp6;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1254)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1254)
			if ((tmp7)){
				HX_STACK_LINE(1254)
				tmp8 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1254)
				tmp8 = false;
			}
			HX_STACK_LINE(1254)
			if ((tmp8)){
				HX_STACK_LINE(1254)
				::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1254)
				::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1254)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1254)
			bool tmp8 = _this->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1254)
			if ((tmp8)){
				HX_STACK_LINE(1254)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(1254)
			bool tmp9 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1254)
			if ((tmp9)){
				HX_STACK_LINE(1254)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1254)
		bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1254)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1254)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1254)
		if ((tmp8)){
			HX_STACK_LINE(1254)
			tmp9 = (y != y);
		}
		else{
			HX_STACK_LINE(1254)
			tmp9 = true;
		}
		HX_STACK_LINE(1254)
		if ((tmp9)){
			HX_STACK_LINE(1254)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(1254)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1254)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1254)
				if ((tmp11)){
					HX_STACK_LINE(1254)
					tmp12 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(1254)
					tmp12 = false;
				}
				HX_STACK_LINE(1254)
				if ((tmp12)){
					HX_STACK_LINE(1254)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1254)
					::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1254)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1254)
				if ((tmp12)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1254)
			tmp10 = tmp11->x;
		}
		HX_STACK_LINE(1254)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1254)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1254)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1254)
		if ((tmp12)){
			HX_STACK_LINE(1254)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				{
					HX_STACK_LINE(1254)
					bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1254)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1254)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1254)
					bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1254)
					if ((tmp18)){
						HX_STACK_LINE(1254)
						bool tmp19 = this->zpp_disp;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1254)
						tmp17 = tmp19;
					}
					else{
						HX_STACK_LINE(1254)
						tmp17 = false;
					}
					HX_STACK_LINE(1254)
					bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1254)
					if ((tmp19)){
						HX_STACK_LINE(1254)
						::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1254)
						::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1254)
						::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1254)
						::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1254)
						::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1254)
						HX_STACK_DO_THROW(tmp24);
					}
				}
				HX_STACK_LINE(1254)
				{
					HX_STACK_LINE(1254)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1254)
					::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1254)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp16;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1254)
					bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1254)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1254)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1254)
					if ((tmp19)){
						HX_STACK_LINE(1254)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1254)
				tmp14 = tmp16->y;
			}
			HX_STACK_LINE(1254)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1254)
			tmp13 = (tmp14 == tmp15);
		}
		else{
			HX_STACK_LINE(1254)
			tmp13 = false;
		}
		HX_STACK_LINE(1254)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1254)
		if ((tmp14)){
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1254)
				tmp15->x = x;
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1254)
				tmp16->y = y;
				HX_STACK_LINE(1254)
				{
				}
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1254)
				if ((tmp16)){
					HX_STACK_LINE(1254)
					::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1254)
					_this->_invalidate(tmp17);
				}
			}
		}
		HX_STACK_LINE(1254)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1255)
	{
		HX_STACK_LINE(1256)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1257)
		tmp1 = vector->zpp_inner->weak;
		HX_STACK_LINE(1256)
		if ((tmp1)){
			HX_STACK_LINE(1259)
			{
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					bool tmp2 = (vector != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1259)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1259)
					if ((tmp2)){
						HX_STACK_LINE(1259)
						tmp3 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1259)
						tmp3 = false;
					}
					HX_STACK_LINE(1259)
					if ((tmp3)){
						HX_STACK_LINE(1259)
						::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1259)
						::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1259)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1259)
					bool tmp2 = _this->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1259)
					if ((tmp2)){
						HX_STACK_LINE(1259)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1259)
					bool tmp3 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1259)
					if ((tmp3)){
						HX_STACK_LINE(1259)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1259)
				bool tmp2 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1259)
				if ((tmp2)){
					HX_STACK_LINE(1259)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1259)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1259)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1259)
				vector->zpp_inner = null();
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1259)
					o->zpp_pool = null();
					HX_STACK_LINE(1259)
					::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1259)
					bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1259)
					if ((tmp4)){
						HX_STACK_LINE(1259)
						::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1259)
						tmp5->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1259)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1259)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1259)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1259)
					{
						HX_STACK_LINE(1259)
						bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1259)
						if ((tmp3)){
							HX_STACK_LINE(1259)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1259)
							o->outer = null();
						}
						HX_STACK_LINE(1259)
						o->_isimmutable = null();
						HX_STACK_LINE(1259)
						o->_validate = null();
						HX_STACK_LINE(1259)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1259)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1259)
					o->next = tmp3;
					HX_STACK_LINE(1259)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1260)
			true;
		}
		else{
			HX_STACK_LINE(1263)
			false;
		}
	}
	HX_STACK_LINE(1266)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,addeq,return )

::nape::geom::Vec2 Vec2_obj::subeq( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","subeq",0x8769b1e8,"nape.geom.Vec2.subeq","nape/geom/Vec2.hx",1283,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1284)
	{
		HX_STACK_LINE(1286)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1286)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1286)
		if ((tmp)){
			HX_STACK_LINE(1286)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1286)
			tmp1 = false;
		}
		HX_STACK_LINE(1286)
		if ((tmp1)){
			HX_STACK_LINE(1286)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1286)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1286)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1289)
	{
		HX_STACK_LINE(1291)
		bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1291)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1291)
		if ((tmp)){
			HX_STACK_LINE(1291)
			tmp1 = vector->zpp_disp;
		}
		else{
			HX_STACK_LINE(1291)
			tmp1 = false;
		}
		HX_STACK_LINE(1291)
		if ((tmp1)){
			HX_STACK_LINE(1291)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1291)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1291)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1294)
	{
		HX_STACK_LINE(1294)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1294)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1294)
		bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1294)
		if ((tmp1)){
			HX_STACK_LINE(1294)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(1294)
		bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1294)
		if ((tmp2)){
			HX_STACK_LINE(1294)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(1296)
	bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1296)
	if ((tmp)){
		HX_STACK_LINE(1297)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot subtract null vectors","\xd4","\x7c","\x91","\x74"));
	}
	HX_STACK_LINE(1300)
	{
		HX_STACK_LINE(1300)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			bool tmp2 = this->zpp_disp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1300)
			if ((tmp2)){
				HX_STACK_LINE(1300)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1300)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1300)
				HX_STACK_DO_THROW(tmp4);
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1300)
				if ((tmp4)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1300)
			tmp1 = tmp3->x;
		}
		HX_STACK_LINE(1300)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1300)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1300)
			if ((tmp3)){
				HX_STACK_LINE(1300)
				tmp4 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1300)
				tmp4 = false;
			}
			HX_STACK_LINE(1300)
			if ((tmp4)){
				HX_STACK_LINE(1300)
				::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1300)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1300)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1300)
				if ((tmp5)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			tmp2 = vector->zpp_inner->x;
		}
		HX_STACK_LINE(1300)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1300)
		Float x = tmp3;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1300)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			bool tmp5 = this->zpp_disp;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1300)
			if ((tmp5)){
				HX_STACK_LINE(1300)
				::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1300)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1300)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1300)
				if ((tmp7)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1300)
			tmp4 = tmp6->y;
		}
		HX_STACK_LINE(1300)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			bool tmp6 = (vector != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1300)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1300)
			if ((tmp6)){
				HX_STACK_LINE(1300)
				tmp7 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1300)
				tmp7 = false;
			}
			HX_STACK_LINE(1300)
			if ((tmp7)){
				HX_STACK_LINE(1300)
				::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1300)
				::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1300)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1300)
				if ((tmp8)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			tmp5 = vector->zpp_inner->y;
		}
		HX_STACK_LINE(1300)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1300)
		Float y = tmp6;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1300)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1300)
			if ((tmp7)){
				HX_STACK_LINE(1300)
				tmp8 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1300)
				tmp8 = false;
			}
			HX_STACK_LINE(1300)
			if ((tmp8)){
				HX_STACK_LINE(1300)
				::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1300)
				::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1300)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1300)
			bool tmp8 = _this->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1300)
			if ((tmp8)){
				HX_STACK_LINE(1300)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(1300)
			bool tmp9 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1300)
			if ((tmp9)){
				HX_STACK_LINE(1300)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1300)
		bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1300)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1300)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1300)
		if ((tmp8)){
			HX_STACK_LINE(1300)
			tmp9 = (y != y);
		}
		else{
			HX_STACK_LINE(1300)
			tmp9 = true;
		}
		HX_STACK_LINE(1300)
		if ((tmp9)){
			HX_STACK_LINE(1300)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(1300)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1300)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1300)
				if ((tmp11)){
					HX_STACK_LINE(1300)
					tmp12 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(1300)
					tmp12 = false;
				}
				HX_STACK_LINE(1300)
				if ((tmp12)){
					HX_STACK_LINE(1300)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1300)
					::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1300)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1300)
				if ((tmp12)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1300)
			tmp10 = tmp11->x;
		}
		HX_STACK_LINE(1300)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1300)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1300)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1300)
		if ((tmp12)){
			HX_STACK_LINE(1300)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				{
					HX_STACK_LINE(1300)
					bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1300)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1300)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1300)
					bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1300)
					if ((tmp18)){
						HX_STACK_LINE(1300)
						bool tmp19 = this->zpp_disp;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1300)
						tmp17 = tmp19;
					}
					else{
						HX_STACK_LINE(1300)
						tmp17 = false;
					}
					HX_STACK_LINE(1300)
					bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1300)
					if ((tmp19)){
						HX_STACK_LINE(1300)
						::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1300)
						::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1300)
						::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1300)
						::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1300)
						::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1300)
						HX_STACK_DO_THROW(tmp24);
					}
				}
				HX_STACK_LINE(1300)
				{
					HX_STACK_LINE(1300)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1300)
					::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1300)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp16;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1300)
					bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1300)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1300)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1300)
					if ((tmp19)){
						HX_STACK_LINE(1300)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1300)
				tmp14 = tmp16->y;
			}
			HX_STACK_LINE(1300)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1300)
			tmp13 = (tmp14 == tmp15);
		}
		else{
			HX_STACK_LINE(1300)
			tmp13 = false;
		}
		HX_STACK_LINE(1300)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1300)
		if ((tmp14)){
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1300)
				tmp15->x = x;
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1300)
				tmp16->y = y;
				HX_STACK_LINE(1300)
				{
				}
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1300)
				if ((tmp16)){
					HX_STACK_LINE(1300)
					::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1300)
					_this->_invalidate(tmp17);
				}
			}
		}
		HX_STACK_LINE(1300)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1301)
	{
		HX_STACK_LINE(1302)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1303)
		tmp1 = vector->zpp_inner->weak;
		HX_STACK_LINE(1302)
		if ((tmp1)){
			HX_STACK_LINE(1305)
			{
				HX_STACK_LINE(1305)
				{
					HX_STACK_LINE(1305)
					bool tmp2 = (vector != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1305)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1305)
					if ((tmp2)){
						HX_STACK_LINE(1305)
						tmp3 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1305)
						tmp3 = false;
					}
					HX_STACK_LINE(1305)
					if ((tmp3)){
						HX_STACK_LINE(1305)
						::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1305)
						::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1305)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(1305)
				{
					HX_STACK_LINE(1305)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1305)
					bool tmp2 = _this->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1305)
					if ((tmp2)){
						HX_STACK_LINE(1305)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1305)
					bool tmp3 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1305)
					if ((tmp3)){
						HX_STACK_LINE(1305)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1305)
				bool tmp2 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1305)
				if ((tmp2)){
					HX_STACK_LINE(1305)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1305)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1305)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1305)
				vector->zpp_inner = null();
				HX_STACK_LINE(1305)
				{
					HX_STACK_LINE(1305)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1305)
					o->zpp_pool = null();
					HX_STACK_LINE(1305)
					::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1305)
					bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1305)
					if ((tmp4)){
						HX_STACK_LINE(1305)
						::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1305)
						tmp5->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1305)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1305)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1305)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1305)
				{
					HX_STACK_LINE(1305)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1305)
					{
						HX_STACK_LINE(1305)
						bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1305)
						if ((tmp3)){
							HX_STACK_LINE(1305)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1305)
							o->outer = null();
						}
						HX_STACK_LINE(1305)
						o->_isimmutable = null();
						HX_STACK_LINE(1305)
						o->_validate = null();
						HX_STACK_LINE(1305)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1305)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1305)
					o->next = tmp3;
					HX_STACK_LINE(1305)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1306)
			true;
		}
		else{
			HX_STACK_LINE(1309)
			false;
		}
	}
	HX_STACK_LINE(1312)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,subeq,return )

::nape::geom::Vec2 Vec2_obj::muleq( Float scalar){
	HX_STACK_FRAME("nape.geom.Vec2","muleq",0x1309cd6c,"nape.geom.Vec2.muleq","nape/geom/Vec2.hx",1328,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_LINE(1329)
	{
		HX_STACK_LINE(1331)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1331)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1331)
		if ((tmp)){
			HX_STACK_LINE(1331)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1331)
			tmp1 = false;
		}
		HX_STACK_LINE(1331)
		if ((tmp1)){
			HX_STACK_LINE(1331)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1331)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1331)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1334)
	{
		HX_STACK_LINE(1334)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1334)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1334)
		bool tmp1 = _this->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1334)
		if ((tmp1)){
			HX_STACK_LINE(1334)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(1334)
		bool tmp2 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1334)
		if ((tmp2)){
			HX_STACK_LINE(1334)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(1336)
	bool tmp = (scalar != scalar);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1336)
	if ((tmp)){
		HX_STACK_LINE(1337)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot multiply with NaN","\x0e","\xe9","\x6e","\x5b"));
	}
	HX_STACK_LINE(1340)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1340)
	{
		HX_STACK_LINE(1340)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			bool tmp3 = this->zpp_disp;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1340)
			if ((tmp3)){
				HX_STACK_LINE(1340)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1340)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1340)
				HX_STACK_DO_THROW(tmp5);
			}
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1340)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1340)
				if ((tmp5)){
					HX_STACK_LINE(1340)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1340)
			tmp2 = tmp4->x;
		}
		HX_STACK_LINE(1340)
		Float tmp3 = scalar;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1340)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1340)
		Float x = tmp4;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1340)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			bool tmp6 = this->zpp_disp;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1340)
			if ((tmp6)){
				HX_STACK_LINE(1340)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1340)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1340)
				HX_STACK_DO_THROW(tmp8);
			}
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1340)
				bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1340)
				if ((tmp8)){
					HX_STACK_LINE(1340)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1340)
			tmp5 = tmp7->y;
		}
		HX_STACK_LINE(1340)
		Float tmp6 = scalar;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1340)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1340)
		Float y = tmp7;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1340)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1340)
			if ((tmp8)){
				HX_STACK_LINE(1340)
				tmp9 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1340)
				tmp9 = false;
			}
			HX_STACK_LINE(1340)
			if ((tmp9)){
				HX_STACK_LINE(1340)
				::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1340)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1340)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1340)
			bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1340)
			if ((tmp9)){
				HX_STACK_LINE(1340)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(1340)
			bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1340)
			if ((tmp10)){
				HX_STACK_LINE(1340)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1340)
		bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1340)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1340)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1340)
		if ((tmp9)){
			HX_STACK_LINE(1340)
			tmp10 = (y != y);
		}
		else{
			HX_STACK_LINE(1340)
			tmp10 = true;
		}
		HX_STACK_LINE(1340)
		if ((tmp10)){
			HX_STACK_LINE(1340)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(1340)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1340)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1340)
				if ((tmp12)){
					HX_STACK_LINE(1340)
					tmp13 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(1340)
					tmp13 = false;
				}
				HX_STACK_LINE(1340)
				if ((tmp13)){
					HX_STACK_LINE(1340)
					::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1340)
					::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1340)
					HX_STACK_DO_THROW(tmp15);
				}
			}
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1340)
				bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1340)
				if ((tmp13)){
					HX_STACK_LINE(1340)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1340)
			tmp11 = tmp12->x;
		}
		HX_STACK_LINE(1340)
		Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1340)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1340)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1340)
		if ((tmp13)){
			HX_STACK_LINE(1340)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				{
					HX_STACK_LINE(1340)
					bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1340)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1340)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1340)
					bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1340)
					if ((tmp19)){
						HX_STACK_LINE(1340)
						bool tmp20 = this->zpp_disp;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1340)
						tmp18 = tmp20;
					}
					else{
						HX_STACK_LINE(1340)
						tmp18 = false;
					}
					HX_STACK_LINE(1340)
					bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1340)
					if ((tmp20)){
						HX_STACK_LINE(1340)
						::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1340)
						::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1340)
						::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1340)
						::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1340)
						::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1340)
						HX_STACK_DO_THROW(tmp25);
					}
				}
				HX_STACK_LINE(1340)
				{
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1340)
					bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1340)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1340)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1340)
					if ((tmp20)){
						HX_STACK_LINE(1340)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1340)
				tmp15 = tmp17->y;
			}
			HX_STACK_LINE(1340)
			Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1340)
			tmp14 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(1340)
			tmp14 = false;
		}
		HX_STACK_LINE(1340)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1340)
		if ((tmp15)){
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1340)
				tmp16->x = x;
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1340)
				tmp17->y = y;
				HX_STACK_LINE(1340)
				{
				}
			}
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1340)
				bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1340)
				if ((tmp17)){
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1340)
					_this->_invalidate(tmp18);
				}
			}
		}
		HX_STACK_LINE(1340)
		tmp1 = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1340)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,muleq,return )

Float Vec2_obj::dot( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","dot",0x324b5b85,"nape.geom.Vec2.dot","nape/geom/Vec2.hx",1359,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1360)
	{
		HX_STACK_LINE(1362)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1362)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1362)
		if ((tmp)){
			HX_STACK_LINE(1362)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1362)
			tmp1 = false;
		}
		HX_STACK_LINE(1362)
		if ((tmp1)){
			HX_STACK_LINE(1362)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1362)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1362)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1365)
	{
		HX_STACK_LINE(1367)
		bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1367)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1367)
		if ((tmp)){
			HX_STACK_LINE(1367)
			tmp1 = vector->zpp_disp;
		}
		else{
			HX_STACK_LINE(1367)
			tmp1 = false;
		}
		HX_STACK_LINE(1367)
		if ((tmp1)){
			HX_STACK_LINE(1367)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1367)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1367)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1371)
	bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1371)
	if ((tmp)){
		HX_STACK_LINE(1372)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot take dot product with null vector","\x34","\xb4","\x1f","\xc6"));
	}
	HX_STACK_LINE(1375)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1375)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1375)
			if ((tmp2)){
				HX_STACK_LINE(1375)
				tmp3 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1375)
				tmp3 = false;
			}
			HX_STACK_LINE(1375)
			if ((tmp3)){
				HX_STACK_LINE(1375)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1375)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1375)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1375)
			if ((tmp3)){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1375)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(1375)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1375)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1375)
			if ((tmp3)){
				HX_STACK_LINE(1375)
				tmp4 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1375)
				tmp4 = false;
			}
			HX_STACK_LINE(1375)
			if ((tmp4)){
				HX_STACK_LINE(1375)
				::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1375)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1375)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1375)
			if ((tmp3)){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		tmp2 = vector->zpp_inner->x;
	}
	HX_STACK_LINE(1375)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1375)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1375)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1375)
			if ((tmp5)){
				HX_STACK_LINE(1375)
				tmp6 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1375)
				tmp6 = false;
			}
			HX_STACK_LINE(1375)
			if ((tmp6)){
				HX_STACK_LINE(1375)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1375)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1375)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1375)
			if ((tmp6)){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1375)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(1375)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			bool tmp6 = (vector != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1375)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1375)
			if ((tmp6)){
				HX_STACK_LINE(1375)
				tmp7 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1375)
				tmp7 = false;
			}
			HX_STACK_LINE(1375)
			if ((tmp7)){
				HX_STACK_LINE(1375)
				::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1375)
				::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1375)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1375)
			if ((tmp6)){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		tmp5 = vector->zpp_inner->y;
	}
	HX_STACK_LINE(1375)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1375)
	Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1375)
	Float ret = tmp7;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1376)
	{
		HX_STACK_LINE(1377)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1378)
		tmp8 = vector->zpp_inner->weak;
		HX_STACK_LINE(1377)
		if ((tmp8)){
			HX_STACK_LINE(1380)
			{
				HX_STACK_LINE(1380)
				{
					HX_STACK_LINE(1380)
					bool tmp9 = (vector != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1380)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1380)
					if ((tmp9)){
						HX_STACK_LINE(1380)
						tmp10 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1380)
						tmp10 = false;
					}
					HX_STACK_LINE(1380)
					if ((tmp10)){
						HX_STACK_LINE(1380)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1380)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1380)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(1380)
				{
					HX_STACK_LINE(1380)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1380)
					bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1380)
					if ((tmp9)){
						HX_STACK_LINE(1380)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1380)
					bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1380)
					if ((tmp10)){
						HX_STACK_LINE(1380)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1380)
				bool tmp9 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1380)
				if ((tmp9)){
					HX_STACK_LINE(1380)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1380)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1380)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1380)
				vector->zpp_inner = null();
				HX_STACK_LINE(1380)
				{
					HX_STACK_LINE(1380)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1380)
					o->zpp_pool = null();
					HX_STACK_LINE(1380)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1380)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1380)
					if ((tmp11)){
						HX_STACK_LINE(1380)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1380)
						tmp12->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1380)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1380)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1380)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1380)
				{
					HX_STACK_LINE(1380)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1380)
					{
						HX_STACK_LINE(1380)
						bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1380)
						if ((tmp10)){
							HX_STACK_LINE(1380)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1380)
							o->outer = null();
						}
						HX_STACK_LINE(1380)
						o->_isimmutable = null();
						HX_STACK_LINE(1380)
						o->_validate = null();
						HX_STACK_LINE(1380)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1380)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1380)
					o->next = tmp10;
					HX_STACK_LINE(1380)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1381)
			true;
		}
		else{
			HX_STACK_LINE(1384)
			false;
		}
	}
	HX_STACK_LINE(1387)
	Float tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1387)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,dot,return )

Float Vec2_obj::cross( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","cross",0x4f0eaf7c,"nape.geom.Vec2.cross","nape/geom/Vec2.hx",1419,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1420)
	{
		HX_STACK_LINE(1422)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1422)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1422)
		if ((tmp)){
			HX_STACK_LINE(1422)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1422)
			tmp1 = false;
		}
		HX_STACK_LINE(1422)
		if ((tmp1)){
			HX_STACK_LINE(1422)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1422)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1422)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1425)
	{
		HX_STACK_LINE(1427)
		bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1427)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1427)
		if ((tmp)){
			HX_STACK_LINE(1427)
			tmp1 = vector->zpp_disp;
		}
		else{
			HX_STACK_LINE(1427)
			tmp1 = false;
		}
		HX_STACK_LINE(1427)
		if ((tmp1)){
			HX_STACK_LINE(1427)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1427)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1427)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1431)
	bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1431)
	if ((tmp)){
		HX_STACK_LINE(1432)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot take cross product with null vector","\xdd","\x58","\xfb","\x6c"));
	}
	HX_STACK_LINE(1435)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			bool tmp2 = (vector != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1435)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1435)
			if ((tmp2)){
				HX_STACK_LINE(1435)
				tmp3 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1435)
				tmp3 = false;
			}
			HX_STACK_LINE(1435)
			if ((tmp3)){
				HX_STACK_LINE(1435)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1435)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1435)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1435)
			if ((tmp2)){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		tmp1 = vector->zpp_inner->y;
	}
	HX_STACK_LINE(1435)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1435)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1435)
			if ((tmp3)){
				HX_STACK_LINE(1435)
				tmp4 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1435)
				tmp4 = false;
			}
			HX_STACK_LINE(1435)
			if ((tmp4)){
				HX_STACK_LINE(1435)
				::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1435)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1435)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1435)
			if ((tmp4)){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1435)
		tmp2 = tmp3->x;
	}
	HX_STACK_LINE(1435)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1435)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			bool tmp5 = (vector != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1435)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1435)
			if ((tmp5)){
				HX_STACK_LINE(1435)
				tmp6 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1435)
				tmp6 = false;
			}
			HX_STACK_LINE(1435)
			if ((tmp6)){
				HX_STACK_LINE(1435)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1435)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1435)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1435)
			if ((tmp5)){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		tmp4 = vector->zpp_inner->x;
	}
	HX_STACK_LINE(1435)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1435)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1435)
			if ((tmp6)){
				HX_STACK_LINE(1435)
				tmp7 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1435)
				tmp7 = false;
			}
			HX_STACK_LINE(1435)
			if ((tmp7)){
				HX_STACK_LINE(1435)
				::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1435)
				::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1435)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1435)
			if ((tmp7)){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1435)
		tmp5 = tmp6->y;
	}
	HX_STACK_LINE(1435)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1435)
	Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1435)
	Float ret = tmp7;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1436)
	{
		HX_STACK_LINE(1437)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1438)
		tmp8 = vector->zpp_inner->weak;
		HX_STACK_LINE(1437)
		if ((tmp8)){
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					bool tmp9 = (vector != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1440)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1440)
					if ((tmp9)){
						HX_STACK_LINE(1440)
						tmp10 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1440)
						tmp10 = false;
					}
					HX_STACK_LINE(1440)
					if ((tmp10)){
						HX_STACK_LINE(1440)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1440)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1440)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1440)
					bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1440)
					if ((tmp9)){
						HX_STACK_LINE(1440)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1440)
					bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1440)
					if ((tmp10)){
						HX_STACK_LINE(1440)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1440)
				bool tmp9 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1440)
				if ((tmp9)){
					HX_STACK_LINE(1440)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1440)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1440)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1440)
				vector->zpp_inner = null();
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1440)
					o->zpp_pool = null();
					HX_STACK_LINE(1440)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1440)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1440)
					if ((tmp11)){
						HX_STACK_LINE(1440)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1440)
						tmp12->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1440)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1440)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1440)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1440)
					{
						HX_STACK_LINE(1440)
						bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1440)
						if ((tmp10)){
							HX_STACK_LINE(1440)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1440)
							o->outer = null();
						}
						HX_STACK_LINE(1440)
						o->_isimmutable = null();
						HX_STACK_LINE(1440)
						o->_validate = null();
						HX_STACK_LINE(1440)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1440)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1440)
					o->next = tmp10;
					HX_STACK_LINE(1440)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1441)
			true;
		}
		else{
			HX_STACK_LINE(1444)
			false;
		}
	}
	HX_STACK_LINE(1447)
	Float tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1447)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,cross,return )

::nape::geom::Vec2 Vec2_obj::perp( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","perp",0xd78bb077,"nape.geom.Vec2.perp","nape/geom/Vec2.hx",1470,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1471)
		{
			HX_STACK_LINE(1473)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1473)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1473)
			if ((tmp)){
				HX_STACK_LINE(1473)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1473)
				tmp1 = false;
			}
			HX_STACK_LINE(1473)
			if ((tmp1)){
				HX_STACK_LINE(1473)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1473)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1473)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1476)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1476)
		{
			HX_STACK_LINE(1476)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				bool tmp2 = this->zpp_disp;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1476)
				if ((tmp2)){
					HX_STACK_LINE(1476)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1476)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1476)
					HX_STACK_DO_THROW(tmp4);
				}
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1476)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1476)
					if ((tmp4)){
						HX_STACK_LINE(1476)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1476)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1476)
				tmp1 = tmp3->y;
			}
			HX_STACK_LINE(1476)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1476)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1476)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				bool tmp4 = this->zpp_disp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1476)
				if ((tmp4)){
					HX_STACK_LINE(1476)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1476)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1476)
					HX_STACK_DO_THROW(tmp6);
				}
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1476)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1476)
					if ((tmp6)){
						HX_STACK_LINE(1476)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1476)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1476)
				tmp3 = tmp5->x;
			}
			HX_STACK_LINE(1476)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1476)
			bool tmp4 = (x != x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1476)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1476)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1476)
			if ((tmp5)){
				HX_STACK_LINE(1476)
				tmp6 = (y != y);
			}
			else{
				HX_STACK_LINE(1476)
				tmp6 = true;
			}
			HX_STACK_LINE(1476)
			if ((tmp6)){
				HX_STACK_LINE(1476)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1476)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1476)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1476)
				if ((tmp8)){
					HX_STACK_LINE(1476)
					::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1476)
					ret = tmp9;
				}
				else{
					HX_STACK_LINE(1476)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1476)
					ret = tmp9;
					HX_STACK_LINE(1476)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1476)
					ret->zpp_pool = null();
					HX_STACK_LINE(1476)
					ret->zpp_disp = false;
					HX_STACK_LINE(1476)
					::nape::geom::Vec2 tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1476)
					::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1476)
					bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1476)
					if ((tmp12)){
						HX_STACK_LINE(1476)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1476)
			bool tmp7 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1476)
			if ((tmp7)){
				HX_STACK_LINE(1476)
				::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1476)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1476)
						if ((tmp10)){
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1476)
							ret1 = tmp11;
						}
						else{
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1476)
							ret1 = tmp11;
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1476)
							ret1->next = null();
						}
						HX_STACK_LINE(1476)
						ret1->weak = false;
					}
					HX_STACK_LINE(1476)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						ret1->x = x;
						HX_STACK_LINE(1476)
						ret1->y = y;
						HX_STACK_LINE(1476)
						{
						}
					}
					HX_STACK_LINE(1476)
					tmp8 = ret1;
				}
				HX_STACK_LINE(1476)
				ret->zpp_inner = tmp8;
				HX_STACK_LINE(1476)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					bool tmp8 = (ret != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1476)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1476)
					if ((tmp8)){
						HX_STACK_LINE(1476)
						tmp9 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1476)
						tmp9 = false;
					}
					HX_STACK_LINE(1476)
					if ((tmp9)){
						HX_STACK_LINE(1476)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1476)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1476)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1476)
					bool tmp8 = _this->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1476)
					if ((tmp8)){
						HX_STACK_LINE(1476)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1476)
					bool tmp9 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1476)
					if ((tmp9)){
						HX_STACK_LINE(1476)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1476)
				bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1476)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1476)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1476)
				if ((tmp9)){
					HX_STACK_LINE(1476)
					tmp10 = (y != y);
				}
				else{
					HX_STACK_LINE(1476)
					tmp10 = true;
				}
				HX_STACK_LINE(1476)
				if ((tmp10)){
					HX_STACK_LINE(1476)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1476)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1476)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1476)
						if ((tmp12)){
							HX_STACK_LINE(1476)
							tmp13 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1476)
							tmp13 = false;
						}
						HX_STACK_LINE(1476)
						if ((tmp13)){
							HX_STACK_LINE(1476)
							::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1476)
							::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1476)
							HX_STACK_DO_THROW(tmp15);
						}
					}
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1476)
						bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1476)
						if ((tmp12)){
							HX_STACK_LINE(1476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1476)
					tmp11 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1476)
				Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1476)
				bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1476)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1476)
				if ((tmp13)){
					HX_STACK_LINE(1476)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						{
							HX_STACK_LINE(1476)
							bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1476)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1476)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1476)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1476)
							if ((tmp19)){
								HX_STACK_LINE(1476)
								tmp18 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1476)
								tmp18 = false;
							}
							HX_STACK_LINE(1476)
							bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1476)
							if ((tmp20)){
								HX_STACK_LINE(1476)
								::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1476)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1476)
								::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1476)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1476)
								::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1476)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(1476)
						{
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1476)
							bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1476)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1476)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1476)
							if ((tmp18)){
								HX_STACK_LINE(1476)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1476)
						Float tmp16 = ret->zpp_inner->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1476)
						tmp15 = tmp16;
					}
					HX_STACK_LINE(1476)
					Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1476)
					tmp14 = (tmp15 == tmp16);
				}
				else{
					HX_STACK_LINE(1476)
					tmp14 = false;
				}
				HX_STACK_LINE(1476)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1476)
				if ((tmp15)){
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1476)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1476)
						{
						}
					}
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1476)
						bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1476)
						if ((tmp16)){
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1476)
							_this->_invalidate(tmp17);
						}
					}
				}
				HX_STACK_LINE(1476)
				ret;
			}
			HX_STACK_LINE(1476)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1476)
			tmp = ret;
		}
		HX_STACK_LINE(1476)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,perp,return )

::String Vec2_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Vec2","toString",0xbca7a630,"nape.geom.Vec2.toString","nape/geom/Vec2.hx",1481,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1482)
	{
		HX_STACK_LINE(1484)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1484)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1484)
		if ((tmp)){
			HX_STACK_LINE(1484)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1484)
			tmp1 = false;
		}
		HX_STACK_LINE(1484)
		if ((tmp1)){
			HX_STACK_LINE(1484)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1484)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1484)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1487)
	{
		HX_STACK_LINE(1487)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1487)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1487)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1487)
		if ((tmp1)){
			HX_STACK_LINE(1487)
			_this->_validate();
		}
	}
	HX_STACK_LINE(1488)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1488)
	::String tmp1 = tmp->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1488)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,toString,return )

::nape::geom::Vec2 Vec2_obj::weak( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("nape.geom.Vec2","weak",0xdc2c1ffc,"nape.geom.Vec2.weak","nape/geom/Vec2.hx",256,0x020b6534)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(257)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			bool tmp1 = (x != x);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(257)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(257)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			if ((tmp2)){
				HX_STACK_LINE(257)
				tmp3 = (y != y);
			}
			else{
				HX_STACK_LINE(257)
				tmp3 = true;
			}
			HX_STACK_LINE(257)
			if ((tmp3)){
				HX_STACK_LINE(257)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(257)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(257)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				if ((tmp5)){
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					ret = tmp6;
				}
				else{
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					ret = tmp6;
					HX_STACK_LINE(257)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(257)
					ret->zpp_pool = null();
					HX_STACK_LINE(257)
					ret->zpp_disp = false;
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(257)
					bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(257)
					if ((tmp9)){
						HX_STACK_LINE(257)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(257)
			bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			if ((tmp4)){
				HX_STACK_LINE(257)
				::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(257)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(257)
						if ((tmp7)){
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(257)
							ret1 = tmp8;
						}
						else{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(257)
							ret1 = tmp8;
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(257)
							ret1->next = null();
						}
						HX_STACK_LINE(257)
						ret1->weak = false;
					}
					HX_STACK_LINE(257)
					ret1->_immutable = immutable;
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						ret1->x = x;
						HX_STACK_LINE(257)
						ret1->y = y;
						HX_STACK_LINE(257)
						{
						}
					}
					HX_STACK_LINE(257)
					tmp5 = ret1;
				}
				HX_STACK_LINE(257)
				ret->zpp_inner = tmp5;
				HX_STACK_LINE(257)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					bool tmp5 = (ret != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(257)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					if ((tmp5)){
						HX_STACK_LINE(257)
						tmp6 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(257)
						tmp6 = false;
					}
					HX_STACK_LINE(257)
					if ((tmp6)){
						HX_STACK_LINE(257)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(257)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(257)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(257)
					bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(257)
					if ((tmp5)){
						HX_STACK_LINE(257)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(257)
					bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					if ((tmp6)){
						HX_STACK_LINE(257)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(257)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(257)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(257)
				if ((tmp6)){
					HX_STACK_LINE(257)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(257)
					tmp7 = true;
				}
				HX_STACK_LINE(257)
				if ((tmp7)){
					HX_STACK_LINE(257)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(257)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(257)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(257)
						if ((tmp9)){
							HX_STACK_LINE(257)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(257)
							tmp10 = false;
						}
						HX_STACK_LINE(257)
						if ((tmp10)){
							HX_STACK_LINE(257)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(257)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(257)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(257)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(257)
						if ((tmp9)){
							HX_STACK_LINE(257)
							_this->_validate();
						}
					}
					HX_STACK_LINE(257)
					tmp8 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(257)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(257)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(257)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(257)
				if ((tmp10)){
					HX_STACK_LINE(257)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(257)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(257)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(257)
							bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(257)
							if ((tmp16)){
								HX_STACK_LINE(257)
								tmp15 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(257)
								tmp15 = false;
							}
							HX_STACK_LINE(257)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(257)
							if ((tmp17)){
								HX_STACK_LINE(257)
								::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(257)
								::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(257)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(257)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(257)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(257)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(257)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(257)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(257)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(257)
							if ((tmp15)){
								HX_STACK_LINE(257)
								_this->_validate();
							}
						}
						HX_STACK_LINE(257)
						Float tmp13 = ret->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(257)
						tmp12 = tmp13;
					}
					HX_STACK_LINE(257)
					Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(257)
					tmp11 = (tmp12 == tmp13);
				}
				else{
					HX_STACK_LINE(257)
					tmp11 = false;
				}
				HX_STACK_LINE(257)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(257)
				if ((tmp12)){
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(257)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(257)
						{
						}
					}
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(257)
						bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(257)
						if ((tmp13)){
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(257)
							_this->_invalidate(tmp14);
						}
					}
				}
				HX_STACK_LINE(257)
				ret;
			}
			HX_STACK_LINE(257)
			ret->zpp_inner->weak = true;
			HX_STACK_LINE(257)
			tmp = ret;
		}
		HX_STACK_LINE(257)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,weak,return )

::nape::geom::Vec2 Vec2_obj::get( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< bool >  __o_weak){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","get",0x324d9992,"nape.geom.Vec2.get","nape/geom/Vec2.hx",273,0x020b6534)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(275)
		bool tmp = (x != x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(275)
			tmp2 = (y != y);
		}
		else{
			HX_STACK_LINE(275)
			tmp2 = true;
		}
		HX_STACK_LINE(275)
		if ((tmp2)){
			HX_STACK_LINE(276)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(279)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(281)
			::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(281)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(281)
			if ((tmp4)){
				HX_STACK_LINE(282)
				::nape::geom::Vec2 tmp5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(282)
				ret = tmp5;
			}
			else{
				HX_STACK_LINE(288)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(288)
				ret = tmp5;
				HX_STACK_LINE(289)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(290)
				ret->zpp_pool = null();
				HX_STACK_LINE(292)
				ret->zpp_disp = false;
				HX_STACK_LINE(293)
				::nape::geom::Vec2 tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(293)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				if ((tmp8)){
					HX_STACK_LINE(293)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
		}
		HX_STACK_LINE(300)
		bool tmp3 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(300)
		if ((tmp3)){
			HX_STACK_LINE(301)
			::zpp_nape::geom::ZPP_Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(301)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(301)
					bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(301)
					if ((tmp6)){
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(301)
						ret1 = tmp7;
					}
					else{
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(301)
						ret1 = tmp7;
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(301)
						ret1->next = null();
					}
					HX_STACK_LINE(301)
					ret1->weak = false;
				}
				HX_STACK_LINE(301)
				ret1->_immutable = immutable;
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					ret1->x = x;
					HX_STACK_LINE(301)
					ret1->y = y;
					HX_STACK_LINE(301)
					{
					}
				}
				HX_STACK_LINE(301)
				tmp4 = ret1;
			}
			HX_STACK_LINE(301)
			ret->zpp_inner = tmp4;
			HX_STACK_LINE(302)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				bool tmp4 = (ret != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(305)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				if ((tmp4)){
					HX_STACK_LINE(305)
					tmp5 = ret->zpp_disp;
				}
				else{
					HX_STACK_LINE(305)
					tmp5 = false;
				}
				HX_STACK_LINE(305)
				if ((tmp5)){
					HX_STACK_LINE(305)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(305)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(305)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(305)
				bool tmp4 = _this->_immutable;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(305)
				if ((tmp4)){
					HX_STACK_LINE(305)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(305)
				bool tmp5 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				if ((tmp5)){
					HX_STACK_LINE(305)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(305)
			bool tmp4 = (x != x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(305)
			if ((tmp5)){
				HX_STACK_LINE(305)
				tmp6 = (y != y);
			}
			else{
				HX_STACK_LINE(305)
				tmp6 = true;
			}
			HX_STACK_LINE(305)
			if ((tmp6)){
				HX_STACK_LINE(305)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(305)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					bool tmp8 = (ret != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(305)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(305)
					if ((tmp8)){
						HX_STACK_LINE(305)
						tmp9 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(305)
						tmp9 = false;
					}
					HX_STACK_LINE(305)
					if ((tmp9)){
						HX_STACK_LINE(305)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(305)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(305)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(305)
					if ((tmp8)){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				tmp7 = ret->zpp_inner->x;
			}
			HX_STACK_LINE(305)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(305)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(305)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(305)
			if ((tmp9)){
				HX_STACK_LINE(305)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(305)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(305)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(305)
						bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(305)
						if ((tmp15)){
							HX_STACK_LINE(305)
							tmp14 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(305)
							tmp14 = false;
						}
						HX_STACK_LINE(305)
						bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(305)
						if ((tmp16)){
							HX_STACK_LINE(305)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(305)
							::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(305)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(305)
							::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(305)
							::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(305)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(305)
						bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(305)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(305)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(305)
						if ((tmp14)){
							HX_STACK_LINE(305)
							_this->_validate();
						}
					}
					HX_STACK_LINE(305)
					Float tmp12 = ret->zpp_inner->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(305)
					tmp11 = tmp12;
				}
				HX_STACK_LINE(305)
				Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(305)
				tmp10 = (tmp11 == tmp12);
			}
			else{
				HX_STACK_LINE(305)
				tmp10 = false;
			}
			HX_STACK_LINE(305)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(305)
			if ((tmp11)){
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(305)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(305)
					{
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp12 = (_this->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(305)
					if ((tmp12)){
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(305)
						_this->_invalidate(tmp13);
					}
				}
			}
			HX_STACK_LINE(305)
			ret;
		}
		HX_STACK_LINE(307)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(308)
		::nape::geom::Vec2 tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(308)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,get,return )

::nape::geom::Vec2 Vec2_obj::fromPolar( Float length,Float angle,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","fromPolar",0xa89cd7f0,"nape.geom.Vec2.fromPolar","nape/geom/Vec2.hx",505,0x020b6534)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(507)
		bool tmp = (length != length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(507)
		if ((tmp)){
			HX_STACK_LINE(508)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2::length cannot be NaN","\x0d","\x59","\xb0","\x59"));
		}
		HX_STACK_LINE(510)
		bool tmp1 = (angle != angle);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		if ((tmp1)){
			HX_STACK_LINE(511)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2::angle cannot be NaN","\x22","\xf5","\x3f","\x13"));
		}
		HX_STACK_LINE(514)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			Float tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(514)
			Float tmp4 = angle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(514)
			Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(514)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(514)
			Float x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(514)
			Float tmp7 = length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(514)
			Float tmp8 = angle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(514)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(514)
			Float y = tmp10;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(514)
			bool tmp11 = (x != x);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(514)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(514)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(514)
			if ((tmp12)){
				HX_STACK_LINE(514)
				tmp13 = (y != y);
			}
			else{
				HX_STACK_LINE(514)
				tmp13 = true;
			}
			HX_STACK_LINE(514)
			if ((tmp13)){
				HX_STACK_LINE(514)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(514)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(514)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(514)
				if ((tmp15)){
					HX_STACK_LINE(514)
					::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(514)
					ret = tmp16;
				}
				else{
					HX_STACK_LINE(514)
					::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(514)
					ret = tmp16;
					HX_STACK_LINE(514)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(514)
					ret->zpp_pool = null();
					HX_STACK_LINE(514)
					ret->zpp_disp = false;
					HX_STACK_LINE(514)
					::nape::geom::Vec2 tmp17 = ret;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(514)
					::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(514)
					bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(514)
					if ((tmp19)){
						HX_STACK_LINE(514)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(514)
			bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(514)
			if ((tmp14)){
				HX_STACK_LINE(514)
				::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(514)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(514)
						bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(514)
						if ((tmp17)){
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(514)
							ret1 = tmp18;
						}
						else{
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(514)
							ret1 = tmp18;
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(514)
							ret1->next = null();
						}
						HX_STACK_LINE(514)
						ret1->weak = false;
					}
					HX_STACK_LINE(514)
					ret1->_immutable = immutable;
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						ret1->x = x;
						HX_STACK_LINE(514)
						ret1->y = y;
						HX_STACK_LINE(514)
						{
						}
					}
					HX_STACK_LINE(514)
					tmp15 = ret1;
				}
				HX_STACK_LINE(514)
				ret->zpp_inner = tmp15;
				HX_STACK_LINE(514)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(514)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(514)
					if ((tmp15)){
						HX_STACK_LINE(514)
						tmp16 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(514)
						tmp16 = false;
					}
					HX_STACK_LINE(514)
					if ((tmp16)){
						HX_STACK_LINE(514)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(514)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(514)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(514)
					bool tmp15 = _this->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(514)
					if ((tmp15)){
						HX_STACK_LINE(514)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(514)
					bool tmp16 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(514)
					if ((tmp16)){
						HX_STACK_LINE(514)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(514)
				bool tmp15 = (x != x);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(514)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(514)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(514)
				if ((tmp16)){
					HX_STACK_LINE(514)
					tmp17 = (y != y);
				}
				else{
					HX_STACK_LINE(514)
					tmp17 = true;
				}
				HX_STACK_LINE(514)
				if ((tmp17)){
					HX_STACK_LINE(514)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(514)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						bool tmp19 = (ret != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(514)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(514)
						if ((tmp19)){
							HX_STACK_LINE(514)
							tmp20 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(514)
							tmp20 = false;
						}
						HX_STACK_LINE(514)
						if ((tmp20)){
							HX_STACK_LINE(514)
							::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(514)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(514)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(514)
						bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(514)
						if ((tmp19)){
							HX_STACK_LINE(514)
							_this->_validate();
						}
					}
					HX_STACK_LINE(514)
					tmp18 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(514)
				Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(514)
				bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(514)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(514)
				if ((tmp20)){
					HX_STACK_LINE(514)
					Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(514)
							bool tmp23 = (ret != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(514)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(514)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(514)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(514)
							if ((tmp26)){
								HX_STACK_LINE(514)
								tmp25 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(514)
								tmp25 = false;
							}
							HX_STACK_LINE(514)
							bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(514)
							if ((tmp27)){
								HX_STACK_LINE(514)
								::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(514)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(514)
								::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(514)
								::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(514)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(514)
								HX_STACK_DO_THROW(tmp32);
							}
						}
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(514)
							bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(514)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(514)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(514)
							if ((tmp25)){
								HX_STACK_LINE(514)
								_this->_validate();
							}
						}
						HX_STACK_LINE(514)
						Float tmp23 = ret->zpp_inner->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(514)
						tmp22 = tmp23;
					}
					HX_STACK_LINE(514)
					Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(514)
					tmp21 = (tmp22 == tmp23);
				}
				else{
					HX_STACK_LINE(514)
					tmp21 = false;
				}
				HX_STACK_LINE(514)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(514)
				if ((tmp22)){
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(514)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(514)
						{
						}
					}
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(514)
						bool tmp23 = (_this->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(514)
						if ((tmp23)){
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(514)
							_this->_invalidate(tmp24);
						}
					}
				}
				HX_STACK_LINE(514)
				ret;
			}
			HX_STACK_LINE(514)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(514)
			tmp2 = ret;
		}
		HX_STACK_LINE(514)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,fromPolar,return )

Float Vec2_obj::dsq( ::nape::geom::Vec2 a,::nape::geom::Vec2 b){
	HX_STACK_FRAME("nape.geom.Vec2","dsq",0x324b5efe,"nape.geom.Vec2.dsq","nape/geom/Vec2.hx",711,0x020b6534)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(712)
	{
		HX_STACK_LINE(714)
		bool tmp = (a != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(714)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		if ((tmp)){
			HX_STACK_LINE(714)
			tmp1 = a->zpp_disp;
		}
		else{
			HX_STACK_LINE(714)
			tmp1 = false;
		}
		HX_STACK_LINE(714)
		if ((tmp1)){
			HX_STACK_LINE(714)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(714)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(714)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(717)
	{
		HX_STACK_LINE(719)
		bool tmp = (b != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(719)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(719)
		if ((tmp)){
			HX_STACK_LINE(719)
			tmp1 = b->zpp_disp;
		}
		else{
			HX_STACK_LINE(719)
			tmp1 = false;
		}
		HX_STACK_LINE(719)
		if ((tmp1)){
			HX_STACK_LINE(719)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(719)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(719)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(723)
	bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(723)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(723)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(723)
	if ((tmp1)){
		HX_STACK_LINE(723)
		tmp2 = (b == null());
	}
	else{
		HX_STACK_LINE(723)
		tmp2 = true;
	}
	HX_STACK_LINE(723)
	if ((tmp2)){
		HX_STACK_LINE(723)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot compute squared distance between null Vec2","\xe5","\x2e","\xc5","\x64"));
	}
	HX_STACK_LINE(725)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(725)
	{
		HX_STACK_LINE(725)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			bool tmp5 = (a != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(725)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(725)
			if ((tmp5)){
				HX_STACK_LINE(725)
				tmp6 = a->zpp_disp;
			}
			else{
				HX_STACK_LINE(725)
				tmp6 = false;
			}
			HX_STACK_LINE(725)
			if ((tmp6)){
				HX_STACK_LINE(725)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(725)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(725)
				HX_STACK_DO_THROW(tmp8);
			}
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(725)
				if ((tmp7)){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			tmp4 = a->zpp_inner->x;
		}
		HX_STACK_LINE(725)
		Float ax = tmp4;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(725)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(725)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(725)
			if ((tmp6)){
				HX_STACK_LINE(725)
				tmp7 = a->zpp_disp;
			}
			else{
				HX_STACK_LINE(725)
				tmp7 = false;
			}
			HX_STACK_LINE(725)
			if ((tmp7)){
				HX_STACK_LINE(725)
				::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(725)
				::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(725)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(725)
				if ((tmp8)){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			tmp5 = a->zpp_inner->y;
		}
		HX_STACK_LINE(725)
		Float ay = tmp5;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(725)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			bool tmp7 = (b != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(725)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(725)
			if ((tmp7)){
				HX_STACK_LINE(725)
				tmp8 = b->zpp_disp;
			}
			else{
				HX_STACK_LINE(725)
				tmp8 = false;
			}
			HX_STACK_LINE(725)
			if ((tmp8)){
				HX_STACK_LINE(725)
				::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(725)
				::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(725)
				HX_STACK_DO_THROW(tmp10);
			}
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(725)
				if ((tmp9)){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			tmp6 = b->zpp_inner->x;
		}
		HX_STACK_LINE(725)
		Float bx = tmp6;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(725)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			bool tmp8 = (b != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(725)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(725)
			if ((tmp8)){
				HX_STACK_LINE(725)
				tmp9 = b->zpp_disp;
			}
			else{
				HX_STACK_LINE(725)
				tmp9 = false;
			}
			HX_STACK_LINE(725)
			if ((tmp9)){
				HX_STACK_LINE(725)
				::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(725)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(725)
				HX_STACK_DO_THROW(tmp11);
			}
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(725)
				if ((tmp10)){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			tmp7 = b->zpp_inner->y;
		}
		HX_STACK_LINE(725)
		Float by = tmp7;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(725)
		Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(725)
		Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			Float tmp8 = (ax - bx);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(725)
			dx = tmp8;
			HX_STACK_LINE(725)
			Float tmp9 = (ay - by);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(725)
			dy = tmp9;
		}
		HX_STACK_LINE(725)
		Float tmp8 = (dx * dx);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(725)
		Float tmp9 = (dy * dy);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(725)
		tmp3 = (tmp8 + tmp9);
	}
	HX_STACK_LINE(725)
	Float ret = tmp3;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(726)
	{
		HX_STACK_LINE(727)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(728)
		tmp4 = a->zpp_inner->weak;
		HX_STACK_LINE(727)
		if ((tmp4)){
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					bool tmp5 = (a != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(730)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(730)
					if ((tmp5)){
						HX_STACK_LINE(730)
						tmp6 = a->zpp_disp;
					}
					else{
						HX_STACK_LINE(730)
						tmp6 = false;
					}
					HX_STACK_LINE(730)
					if ((tmp6)){
						HX_STACK_LINE(730)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(730)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(730)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(730)
					bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(730)
					if ((tmp5)){
						HX_STACK_LINE(730)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(730)
					bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(730)
					if ((tmp6)){
						HX_STACK_LINE(730)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(730)
				bool tmp5 = a->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(730)
				if ((tmp5)){
					HX_STACK_LINE(730)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2 inner = a->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(730)
				a->zpp_inner->outer = null();
				HX_STACK_LINE(730)
				a->zpp_inner = null();
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::nape::geom::Vec2 o = a;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(730)
					o->zpp_pool = null();
					HX_STACK_LINE(730)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(730)
					bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(730)
					if ((tmp7)){
						HX_STACK_LINE(730)
						::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(730)
						tmp8->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(730)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(730)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(730)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(730)
						if ((tmp6)){
							HX_STACK_LINE(730)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(730)
							o->outer = null();
						}
						HX_STACK_LINE(730)
						o->_isimmutable = null();
						HX_STACK_LINE(730)
						o->_validate = null();
						HX_STACK_LINE(730)
						o->_invalidate = null();
					}
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(730)
					o->next = tmp6;
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(731)
			true;
		}
		else{
			HX_STACK_LINE(734)
			false;
		}
	}
	HX_STACK_LINE(737)
	{
		HX_STACK_LINE(738)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(739)
		tmp4 = b->zpp_inner->weak;
		HX_STACK_LINE(738)
		if ((tmp4)){
			HX_STACK_LINE(741)
			{
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					bool tmp5 = (b != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(741)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(741)
					if ((tmp5)){
						HX_STACK_LINE(741)
						tmp6 = b->zpp_disp;
					}
					else{
						HX_STACK_LINE(741)
						tmp6 = false;
					}
					HX_STACK_LINE(741)
					if ((tmp6)){
						HX_STACK_LINE(741)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(741)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(741)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(741)
					bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(741)
					if ((tmp5)){
						HX_STACK_LINE(741)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(741)
					bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(741)
					if ((tmp6)){
						HX_STACK_LINE(741)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(741)
				bool tmp5 = b->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(741)
				if ((tmp5)){
					HX_STACK_LINE(741)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(741)
				::zpp_nape::geom::ZPP_Vec2 inner = b->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(741)
				b->zpp_inner->outer = null();
				HX_STACK_LINE(741)
				b->zpp_inner = null();
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					::nape::geom::Vec2 o = b;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(741)
					o->zpp_pool = null();
					HX_STACK_LINE(741)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(741)
					bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(741)
					if ((tmp7)){
						HX_STACK_LINE(741)
						::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(741)
						tmp8->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(741)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(741)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(741)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(741)
					{
						HX_STACK_LINE(741)
						bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(741)
						if ((tmp6)){
							HX_STACK_LINE(741)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(741)
							o->outer = null();
						}
						HX_STACK_LINE(741)
						o->_isimmutable = null();
						HX_STACK_LINE(741)
						o->_validate = null();
						HX_STACK_LINE(741)
						o->_invalidate = null();
					}
					HX_STACK_LINE(741)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(741)
					o->next = tmp6;
					HX_STACK_LINE(741)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(742)
			true;
		}
		else{
			HX_STACK_LINE(745)
			false;
		}
	}
	HX_STACK_LINE(748)
	Float tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(748)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,dsq,return )

Float Vec2_obj::distance( ::nape::geom::Vec2 a,::nape::geom::Vec2 b){
	HX_STACK_FRAME("nape.geom.Vec2","distance",0xf03268b9,"nape.geom.Vec2.distance","nape/geom/Vec2.hx",759,0x020b6534)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(760)
	{
		HX_STACK_LINE(762)
		bool tmp = (a != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(762)
		if ((tmp)){
			HX_STACK_LINE(762)
			tmp1 = a->zpp_disp;
		}
		else{
			HX_STACK_LINE(762)
			tmp1 = false;
		}
		HX_STACK_LINE(762)
		if ((tmp1)){
			HX_STACK_LINE(762)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(762)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(762)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(765)
	{
		HX_STACK_LINE(767)
		bool tmp = (b != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(767)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(767)
		if ((tmp)){
			HX_STACK_LINE(767)
			tmp1 = b->zpp_disp;
		}
		else{
			HX_STACK_LINE(767)
			tmp1 = false;
		}
		HX_STACK_LINE(767)
		if ((tmp1)){
			HX_STACK_LINE(767)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(767)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(767)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(771)
	bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(771)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(771)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(771)
	if ((tmp1)){
		HX_STACK_LINE(771)
		tmp2 = (b == null());
	}
	else{
		HX_STACK_LINE(771)
		tmp2 = true;
	}
	HX_STACK_LINE(771)
	if ((tmp2)){
		HX_STACK_LINE(771)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot compute squared distance between null Vec2","\xe5","\x2e","\xc5","\x64"));
	}
	HX_STACK_LINE(773)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(773)
	{
		HX_STACK_LINE(773)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			bool tmp5 = (a != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(773)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(773)
			if ((tmp5)){
				HX_STACK_LINE(773)
				tmp6 = a->zpp_disp;
			}
			else{
				HX_STACK_LINE(773)
				tmp6 = false;
			}
			HX_STACK_LINE(773)
			if ((tmp6)){
				HX_STACK_LINE(773)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(773)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(773)
				HX_STACK_DO_THROW(tmp8);
			}
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(773)
				if ((tmp7)){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			tmp4 = a->zpp_inner->x;
		}
		HX_STACK_LINE(773)
		Float ax = tmp4;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(773)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(773)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(773)
			if ((tmp6)){
				HX_STACK_LINE(773)
				tmp7 = a->zpp_disp;
			}
			else{
				HX_STACK_LINE(773)
				tmp7 = false;
			}
			HX_STACK_LINE(773)
			if ((tmp7)){
				HX_STACK_LINE(773)
				::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(773)
				::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(773)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(773)
				if ((tmp8)){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			tmp5 = a->zpp_inner->y;
		}
		HX_STACK_LINE(773)
		Float ay = tmp5;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(773)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			bool tmp7 = (b != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(773)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(773)
			if ((tmp7)){
				HX_STACK_LINE(773)
				tmp8 = b->zpp_disp;
			}
			else{
				HX_STACK_LINE(773)
				tmp8 = false;
			}
			HX_STACK_LINE(773)
			if ((tmp8)){
				HX_STACK_LINE(773)
				::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(773)
				::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(773)
				HX_STACK_DO_THROW(tmp10);
			}
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(773)
				if ((tmp9)){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			tmp6 = b->zpp_inner->x;
		}
		HX_STACK_LINE(773)
		Float bx = tmp6;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(773)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			bool tmp8 = (b != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(773)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(773)
			if ((tmp8)){
				HX_STACK_LINE(773)
				tmp9 = b->zpp_disp;
			}
			else{
				HX_STACK_LINE(773)
				tmp9 = false;
			}
			HX_STACK_LINE(773)
			if ((tmp9)){
				HX_STACK_LINE(773)
				::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(773)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(773)
				HX_STACK_DO_THROW(tmp11);
			}
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(773)
				if ((tmp10)){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			tmp7 = b->zpp_inner->y;
		}
		HX_STACK_LINE(773)
		Float by = tmp7;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(773)
		Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(773)
		Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			Float tmp8 = (ax - bx);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(773)
			dx = tmp8;
			HX_STACK_LINE(773)
			Float tmp9 = (ay - by);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(773)
			dy = tmp9;
		}
		HX_STACK_LINE(773)
		Float tmp8 = (dx * dx);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(773)
		Float tmp9 = (dy * dy);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(773)
		tmp3 = (tmp8 + tmp9);
	}
	HX_STACK_LINE(773)
	Float tmp4 = ::Math_obj::sqrt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(773)
	Float ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(774)
	{
		HX_STACK_LINE(775)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(776)
		tmp5 = a->zpp_inner->weak;
		HX_STACK_LINE(775)
		if ((tmp5)){
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(778)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(778)
					if ((tmp6)){
						HX_STACK_LINE(778)
						tmp7 = a->zpp_disp;
					}
					else{
						HX_STACK_LINE(778)
						tmp7 = false;
					}
					HX_STACK_LINE(778)
					if ((tmp7)){
						HX_STACK_LINE(778)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(778)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(778)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(778)
					bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(778)
					if ((tmp6)){
						HX_STACK_LINE(778)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(778)
					bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(778)
					if ((tmp7)){
						HX_STACK_LINE(778)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(778)
				bool tmp6 = a->zpp_inner->_inuse;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(778)
				if ((tmp6)){
					HX_STACK_LINE(778)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_Vec2 inner = a->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(778)
				a->zpp_inner->outer = null();
				HX_STACK_LINE(778)
				a->zpp_inner = null();
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					::nape::geom::Vec2 o = a;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(778)
					o->zpp_pool = null();
					HX_STACK_LINE(778)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(778)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(778)
					if ((tmp8)){
						HX_STACK_LINE(778)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(778)
						tmp9->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(778)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(778)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(778)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(778)
					{
						HX_STACK_LINE(778)
						bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(778)
						if ((tmp7)){
							HX_STACK_LINE(778)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(778)
							o->outer = null();
						}
						HX_STACK_LINE(778)
						o->_isimmutable = null();
						HX_STACK_LINE(778)
						o->_validate = null();
						HX_STACK_LINE(778)
						o->_invalidate = null();
					}
					HX_STACK_LINE(778)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(778)
					o->next = tmp7;
					HX_STACK_LINE(778)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(779)
			true;
		}
		else{
			HX_STACK_LINE(782)
			false;
		}
	}
	HX_STACK_LINE(785)
	{
		HX_STACK_LINE(786)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(787)
		tmp5 = b->zpp_inner->weak;
		HX_STACK_LINE(786)
		if ((tmp5)){
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					bool tmp6 = (b != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(789)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					if ((tmp6)){
						HX_STACK_LINE(789)
						tmp7 = b->zpp_disp;
					}
					else{
						HX_STACK_LINE(789)
						tmp7 = false;
					}
					HX_STACK_LINE(789)
					if ((tmp7)){
						HX_STACK_LINE(789)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(789)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(789)
					bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(789)
					if ((tmp6)){
						HX_STACK_LINE(789)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(789)
					bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					if ((tmp7)){
						HX_STACK_LINE(789)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(789)
				bool tmp6 = b->zpp_inner->_inuse;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(789)
				if ((tmp6)){
					HX_STACK_LINE(789)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 inner = b->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(789)
				b->zpp_inner->outer = null();
				HX_STACK_LINE(789)
				b->zpp_inner = null();
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::nape::geom::Vec2 o = b;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					o->zpp_pool = null();
					HX_STACK_LINE(789)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(789)
					if ((tmp8)){
						HX_STACK_LINE(789)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(789)
						tmp9->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(789)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(789)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(789)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					{
						HX_STACK_LINE(789)
						bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(789)
						if ((tmp7)){
							HX_STACK_LINE(789)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(789)
							o->outer = null();
						}
						HX_STACK_LINE(789)
						o->_isimmutable = null();
						HX_STACK_LINE(789)
						o->_validate = null();
						HX_STACK_LINE(789)
						o->_invalidate = null();
					}
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					o->next = tmp7;
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(790)
			true;
		}
		else{
			HX_STACK_LINE(793)
			false;
		}
	}
	HX_STACK_LINE(796)
	Float tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(796)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,distance,return )


Vec2_obj::Vec2_obj()
{
}

void Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec2);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(zpp_disp,"zpp_disp");
	HX_MARK_END_CLASS();
}

void Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(zpp_disp,"zpp_disp");
}

Dynamic Vec2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"unit") ) { return unit_dyn(); }
		if (HX_FIELD_EQ(inName,"perp") ) { return perp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"setxy") ) { return setxy_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return get_angle(); }
		if (HX_FIELD_EQ(inName,"addeq") ) { return addeq_dyn(); }
		if (HX_FIELD_EQ(inName,"subeq") ) { return subeq_dyn(); }
		if (HX_FIELD_EQ(inName,"muleq") ) { return muleq_dyn(); }
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"addMul") ) { return addMul_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"reflect") ) { return reflect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { return zpp_disp; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"normalise") ) { return normalise_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vec2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dsq") ) { outValue = dsq_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromPolar") ) { outValue = fromPolar_dyn(); return true;  }
	}
	return false;
}

Dynamic Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { zpp_disp=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vec2_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"));
	outFields->push(HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(Vec2_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(Vec2_obj,zpp_pool),HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{hx::fsBool,(int)offsetof(Vec2_obj,zpp_disp),HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("lsq","\x0a","\x58","\x52","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("setxy","\x23","\xb1","\x2f","\x7a"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("reflect","\x3d","\x84","\x29","\xe9"),
	HX_HCSTRING("normalise","\x74","\x31","\xa1","\xab"),
	HX_HCSTRING("unit","\x84","\xca","\xa9","\x4d"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addMul","\x63","\x2c","\x04","\x9f"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("mul","\x04","\x1c","\x53","\x00"),
	HX_HCSTRING("addeq","\xcd","\xd4","\x43","\x1c"),
	HX_HCSTRING("subeq","\xec","\x61","\xb5","\x84"),
	HX_HCSTRING("muleq","\x70","\x7d","\x55","\x10"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("cross","\x80","\x5f","\x5a","\x4c"),
	HX_HCSTRING("perp","\xf3","\xec","\x54","\x4a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

#endif

hx::Class Vec2_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("fromPolar","\xf4","\xd9","\x1a","\x7b"),
	HX_HCSTRING("dsq","\x02","\x46","\x4c","\x00"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	::String(null()) };

void Vec2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Vec2","\x6a","\x4b","\x9c","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vec2_obj::__GetStatic;
	__mClass->mSetStaticField = &Vec2_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vec2_obj >;
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

} // end namespace nape
} // end namespace geom
