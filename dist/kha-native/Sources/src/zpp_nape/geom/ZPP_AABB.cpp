#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_AABB_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","new",0x3f8704a8,"zpp_nape.geom.ZPP_AABB.new","zpp_nape/geom/AABB.hx",174,0xbecf4f8d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(406)
	this->wrap_max = null();
	HX_STACK_LINE(405)
	this->maxy = ((Float)0.0);
	HX_STACK_LINE(404)
	this->maxx = ((Float)0.0);
	HX_STACK_LINE(341)
	this->wrap_min = null();
	HX_STACK_LINE(340)
	this->miny = ((Float)0.0);
	HX_STACK_LINE(339)
	this->minx = ((Float)0.0);
	HX_STACK_LINE(217)
	this->next = null();
	HX_STACK_LINE(192)
	this->outer = null();
	HX_STACK_LINE(177)
	this->_immutable = false;
	HX_STACK_LINE(176)
	this->_validate = null();
	HX_STACK_LINE(175)
	this->_invalidate = null();
}
;
	return null();
}

//ZPP_AABB_obj::~ZPP_AABB_obj() { }

Dynamic ZPP_AABB_obj::__CreateEmpty() { return  new ZPP_AABB_obj; }
hx::ObjectPtr< ZPP_AABB_obj > ZPP_AABB_obj::__new()
{  hx::ObjectPtr< ZPP_AABB_obj > _result_ = new ZPP_AABB_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_AABB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABB_obj > _result_ = new ZPP_AABB_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_AABB_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","validate",0x2546174e,"zpp_nape.geom.ZPP_AABB.validate","zpp_nape/geom/AABB.hx",180,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		Dynamic tmp = this->_validate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		if ((tmp1)){
			HX_STACK_LINE(182)
			this->_validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,validate,(void))

Void ZPP_AABB_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","invalidate",0x39b57e33,"zpp_nape.geom.ZPP_AABB.invalidate","zpp_nape/geom/AABB.hx",187,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		Dynamic tmp = this->_invalidate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		if ((tmp1)){
			HX_STACK_LINE(189)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,invalidate,(void))

::nape::geom::AABB ZPP_AABB_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","wrapper",0xad1bcd9b,"zpp_nape.geom.ZPP_AABB.wrapper","zpp_nape/geom/AABB.hx",193,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	::nape::geom::AABB tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	if ((tmp1)){
		HX_STACK_LINE(195)
		::nape::geom::AABB tmp2 = ::nape::geom::AABB_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		this->outer = tmp2;
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(197)
			::nape::geom::AABB tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			::zpp_nape::geom::ZPP_AABB o = tmp3->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(206)
				if ((tmp4)){
					HX_STACK_LINE(206)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(206)
					o->outer = null();
				}
				HX_STACK_LINE(206)
				::nape::geom::Vec2 tmp5 = o->wrap_max = null();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(206)
				o->wrap_min = tmp5;
				HX_STACK_LINE(206)
				o->_invalidate = null();
				HX_STACK_LINE(206)
				o->_validate = null();
			}
			HX_STACK_LINE(207)
			::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			o->next = tmp4;
			HX_STACK_LINE(208)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
		}
		HX_STACK_LINE(213)
		::nape::geom::AABB tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(215)
	::nape::geom::AABB tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,wrapper,return )

Void ZPP_AABB_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","alloc",0xfb327abd,"zpp_nape.geom.ZPP_AABB.alloc","zpp_nape/geom/AABB.hx",244,0xbecf4f8d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,alloc,(void))

Void ZPP_AABB_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","free",0x515d2764,"zpp_nape.geom.ZPP_AABB.free","zpp_nape/geom/AABB.hx",247,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		::nape::geom::AABB tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(249)
			::nape::geom::AABB tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			tmp2->zpp_inner = null();
			HX_STACK_LINE(250)
			this->outer = null();
		}
		HX_STACK_LINE(252)
		::nape::geom::Vec2 tmp2 = this->wrap_max = null();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		this->wrap_min = tmp2;
		HX_STACK_LINE(253)
		this->_invalidate = null();
		HX_STACK_LINE(254)
		this->_validate = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,free,(void))

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","copy",0x4f5f466d,"zpp_nape.geom.ZPP_AABB.copy","zpp_nape/geom/AABB.hx",321,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	::zpp_nape::geom::ZPP_AABB tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	{
		HX_STACK_LINE(322)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			::zpp_nape::geom::ZPP_AABB tmp1 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(322)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(322)
			if ((tmp2)){
				HX_STACK_LINE(322)
				::zpp_nape::geom::ZPP_AABB tmp3 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(322)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(322)
				::zpp_nape::geom::ZPP_AABB tmp3 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(322)
				ret = tmp3;
				HX_STACK_LINE(322)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(322)
				ret->next = null();
			}
			HX_STACK_LINE(322)
			Dynamic();
		}
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			Float tmp1 = this->minx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(322)
			ret->minx = tmp1;
			HX_STACK_LINE(322)
			Float tmp2 = this->miny;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(322)
			ret->miny = tmp2;
			HX_STACK_LINE(322)
			{
			}
		}
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			Float tmp1 = this->maxx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(322)
			ret->maxx = tmp1;
			HX_STACK_LINE(322)
			Float tmp2 = this->maxy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(322)
			ret->maxy = tmp2;
			HX_STACK_LINE(322)
			{
			}
		}
		HX_STACK_LINE(322)
		tmp = ret;
	}
	HX_STACK_LINE(322)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,copy,return )

Float ZPP_AABB_obj::width( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","width",0xa4018c4e,"zpp_nape.geom.ZPP_AABB.width","zpp_nape/geom/AABB.hx",326,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	Float tmp = this->maxx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	Float tmp1 = this->minx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,width,return )

Float ZPP_AABB_obj::height( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","height",0x93a8b09f,"zpp_nape.geom.ZPP_AABB.height","zpp_nape/geom/AABB.hx",331,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(332)
	Float tmp = this->maxy;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	Float tmp1 = this->miny;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,height,return )

Float ZPP_AABB_obj::perimeter( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","perimeter",0x95f07b65,"zpp_nape.geom.ZPP_AABB.perimeter","zpp_nape/geom/AABB.hx",336,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(337)
	Float tmp = this->maxx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(337)
	Float tmp1 = this->minx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(337)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(337)
	Float tmp3 = this->maxy;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(337)
	Float tmp4 = this->miny;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(337)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(337)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(337)
	Float tmp7 = (tmp6 * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(337)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,perimeter,return )

::nape::geom::Vec2 ZPP_AABB_obj::getmin( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","getmin",0x34973b74,"zpp_nape.geom.ZPP_AABB.getmin","zpp_nape/geom/AABB.hx",342,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(343)
	::nape::geom::Vec2 tmp = this->wrap_min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(343)
	if ((tmp1)){
		HX_STACK_LINE(344)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			Float tmp3 = this->minx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(344)
			Float tmp4 = this->miny;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(344)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(344)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(344)
			bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(344)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(344)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(344)
			if ((tmp6)){
				HX_STACK_LINE(344)
				tmp7 = (y != y);
			}
			else{
				HX_STACK_LINE(344)
				tmp7 = true;
			}
			HX_STACK_LINE(344)
			if ((tmp7)){
				HX_STACK_LINE(344)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(344)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(344)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(344)
				if ((tmp9)){
					HX_STACK_LINE(344)
					::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(344)
					ret = tmp10;
				}
				else{
					HX_STACK_LINE(344)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(344)
					ret = tmp10;
					HX_STACK_LINE(344)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(344)
					ret->zpp_pool = null();
					HX_STACK_LINE(344)
					ret->zpp_disp = false;
					HX_STACK_LINE(344)
					::nape::geom::Vec2 tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(344)
					::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(344)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(344)
					if ((tmp13)){
						HX_STACK_LINE(344)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(344)
			bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(344)
			if ((tmp8)){
				HX_STACK_LINE(344)
				::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(344)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(344)
						if ((tmp11)){
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(344)
							ret1 = tmp12;
						}
						else{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(344)
							ret1 = tmp12;
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(344)
							ret1->next = null();
						}
						HX_STACK_LINE(344)
						ret1->weak = false;
					}
					HX_STACK_LINE(344)
					ret1->_immutable = immutable;
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						ret1->x = x;
						HX_STACK_LINE(344)
						ret1->y = y;
						HX_STACK_LINE(344)
						{
						}
					}
					HX_STACK_LINE(344)
					tmp9 = ret1;
				}
				HX_STACK_LINE(344)
				ret->zpp_inner = tmp9;
				HX_STACK_LINE(344)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(344)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(344)
					if ((tmp9)){
						HX_STACK_LINE(344)
						tmp10 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(344)
						tmp10 = false;
					}
					HX_STACK_LINE(344)
					if ((tmp10)){
						HX_STACK_LINE(344)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(344)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(344)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(344)
					bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(344)
					if ((tmp9)){
						HX_STACK_LINE(344)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(344)
					bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(344)
					if ((tmp10)){
						HX_STACK_LINE(344)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(344)
				bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(344)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(344)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(344)
				if ((tmp10)){
					HX_STACK_LINE(344)
					tmp11 = (y != y);
				}
				else{
					HX_STACK_LINE(344)
					tmp11 = true;
				}
				HX_STACK_LINE(344)
				if ((tmp11)){
					HX_STACK_LINE(344)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(344)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(344)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(344)
						if ((tmp13)){
							HX_STACK_LINE(344)
							tmp14 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(344)
							tmp14 = false;
						}
						HX_STACK_LINE(344)
						if ((tmp14)){
							HX_STACK_LINE(344)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(344)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(344)
							HX_STACK_DO_THROW(tmp16);
						}
					}
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(344)
						bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(344)
						if ((tmp13)){
							HX_STACK_LINE(344)
							_this->_validate();
						}
					}
					HX_STACK_LINE(344)
					tmp12 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(344)
				Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(344)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(344)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(344)
				if ((tmp14)){
					HX_STACK_LINE(344)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(344)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(344)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(344)
							bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(344)
							if ((tmp20)){
								HX_STACK_LINE(344)
								tmp19 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(344)
								tmp19 = false;
							}
							HX_STACK_LINE(344)
							bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(344)
							if ((tmp21)){
								HX_STACK_LINE(344)
								::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(344)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(344)
								::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(344)
								::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(344)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(344)
								HX_STACK_DO_THROW(tmp26);
							}
						}
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(344)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(344)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(344)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(344)
							if ((tmp19)){
								HX_STACK_LINE(344)
								_this->_validate();
							}
						}
						HX_STACK_LINE(344)
						Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(344)
						tmp16 = tmp17;
					}
					HX_STACK_LINE(344)
					Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(344)
					tmp15 = (tmp16 == tmp17);
				}
				else{
					HX_STACK_LINE(344)
					tmp15 = false;
				}
				HX_STACK_LINE(344)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(344)
				if ((tmp16)){
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(344)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(344)
						{
						}
					}
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(344)
						bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(344)
						if ((tmp17)){
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(344)
							_this->_invalidate(tmp18);
						}
					}
				}
				HX_STACK_LINE(344)
				ret;
			}
			HX_STACK_LINE(344)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(344)
			tmp2 = ret;
		}
		HX_STACK_LINE(344)
		this->wrap_min = tmp2;
		HX_STACK_LINE(345)
		::nape::geom::Vec2 tmp3 = this->wrap_min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		tmp3->zpp_inner->_inuse = true;
		HX_STACK_LINE(346)
		bool tmp4 = this->_immutable;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(346)
		if ((tmp4)){
			HX_STACK_LINE(347)
			::nape::geom::Vec2 tmp5 = this->wrap_min;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			tmp5->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(350)
			Dynamic tmp5 = this->mod_min_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(350)
			::nape::geom::Vec2 tmp6 = this->wrap_min;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(350)
			tmp6->zpp_inner->_invalidate = tmp5;
		}
		HX_STACK_LINE(352)
		Dynamic tmp5 = this->dom_min_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(352)
		::nape::geom::Vec2 tmp6 = this->wrap_min;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(352)
		tmp6->zpp_inner->_validate = tmp5;
	}
	HX_STACK_LINE(354)
	::nape::geom::Vec2 tmp2 = this->wrap_min;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(354)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,getmin,return )

Void ZPP_AABB_obj::dom_min( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","dom_min",0x4181fa5d,"zpp_nape.geom.ZPP_AABB.dom_min","zpp_nape/geom/AABB.hx",356,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		{
			HX_STACK_LINE(357)
			Dynamic tmp = this->_validate_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(357)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(357)
			if ((tmp1)){
				HX_STACK_LINE(357)
				this->_validate();
			}
		}
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(359)
			Float tmp = this->minx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(359)
			::nape::geom::Vec2 tmp1 = this->wrap_min;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			tmp1->zpp_inner->x = tmp;
			HX_STACK_LINE(360)
			Float tmp2 = this->miny;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			::nape::geom::Vec2 tmp3 = this->wrap_min;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			tmp3->zpp_inner->y = tmp2;
			HX_STACK_LINE(369)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,dom_min,(void))

Void ZPP_AABB_obj::mod_min( ::zpp_nape::geom::ZPP_Vec2 min){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","mod_min",0x8927ee9d,"zpp_nape.geom.ZPP_AABB.mod_min","zpp_nape/geom/AABB.hx",379,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_LINE(380)
		Float tmp = min->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		Float tmp1 = this->minx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(380)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(380)
		if ((tmp3)){
			HX_STACK_LINE(380)
			Float tmp5 = min->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(380)
			Float tmp6 = this->miny;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(380)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(380)
			tmp4 = (tmp5 != tmp7);
		}
		else{
			HX_STACK_LINE(380)
			tmp4 = true;
		}
		HX_STACK_LINE(380)
		if ((tmp4)){
			HX_STACK_LINE(381)
			{
				HX_STACK_LINE(382)
				this->minx = min->x;
				HX_STACK_LINE(383)
				this->miny = min->y;
				HX_STACK_LINE(392)
				{
				}
			}
			HX_STACK_LINE(401)
			{
				HX_STACK_LINE(401)
				Dynamic tmp5 = this->_invalidate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(401)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(401)
				if ((tmp6)){
					HX_STACK_LINE(401)
					this->_invalidate(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,mod_min,(void))

::nape::geom::Vec2 ZPP_AABB_obj::getmax( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","getmax",0x34973486,"zpp_nape.geom.ZPP_AABB.getmax","zpp_nape/geom/AABB.hx",407,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(408)
	::nape::geom::Vec2 tmp = this->wrap_max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(408)
	if ((tmp1)){
		HX_STACK_LINE(409)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(409)
		{
			HX_STACK_LINE(409)
			Float tmp3 = this->maxx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(409)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(409)
			Float tmp4 = this->maxy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(409)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(409)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(409)
			bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(409)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(409)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(409)
			if ((tmp6)){
				HX_STACK_LINE(409)
				tmp7 = (y != y);
			}
			else{
				HX_STACK_LINE(409)
				tmp7 = true;
			}
			HX_STACK_LINE(409)
			if ((tmp7)){
				HX_STACK_LINE(409)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(409)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(409)
			{
				HX_STACK_LINE(409)
				::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(409)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(409)
				if ((tmp9)){
					HX_STACK_LINE(409)
					::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(409)
					ret = tmp10;
				}
				else{
					HX_STACK_LINE(409)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(409)
					ret = tmp10;
					HX_STACK_LINE(409)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(409)
					ret->zpp_pool = null();
					HX_STACK_LINE(409)
					ret->zpp_disp = false;
					HX_STACK_LINE(409)
					::nape::geom::Vec2 tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(409)
					::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(409)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(409)
					if ((tmp13)){
						HX_STACK_LINE(409)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(409)
			bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(409)
			if ((tmp8)){
				HX_STACK_LINE(409)
				::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(409)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(409)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(409)
						if ((tmp11)){
							HX_STACK_LINE(409)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(409)
							ret1 = tmp12;
						}
						else{
							HX_STACK_LINE(409)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(409)
							ret1 = tmp12;
							HX_STACK_LINE(409)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(409)
							ret1->next = null();
						}
						HX_STACK_LINE(409)
						ret1->weak = false;
					}
					HX_STACK_LINE(409)
					ret1->_immutable = immutable;
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						ret1->x = x;
						HX_STACK_LINE(409)
						ret1->y = y;
						HX_STACK_LINE(409)
						{
						}
					}
					HX_STACK_LINE(409)
					tmp9 = ret1;
				}
				HX_STACK_LINE(409)
				ret->zpp_inner = tmp9;
				HX_STACK_LINE(409)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(409)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(409)
					if ((tmp9)){
						HX_STACK_LINE(409)
						tmp10 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(409)
						tmp10 = false;
					}
					HX_STACK_LINE(409)
					if ((tmp10)){
						HX_STACK_LINE(409)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(409)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(409)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(409)
					bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(409)
					if ((tmp9)){
						HX_STACK_LINE(409)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(409)
					bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(409)
					if ((tmp10)){
						HX_STACK_LINE(409)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(409)
				bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(409)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(409)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(409)
				if ((tmp10)){
					HX_STACK_LINE(409)
					tmp11 = (y != y);
				}
				else{
					HX_STACK_LINE(409)
					tmp11 = true;
				}
				HX_STACK_LINE(409)
				if ((tmp11)){
					HX_STACK_LINE(409)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(409)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(409)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(409)
						if ((tmp13)){
							HX_STACK_LINE(409)
							tmp14 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(409)
							tmp14 = false;
						}
						HX_STACK_LINE(409)
						if ((tmp14)){
							HX_STACK_LINE(409)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(409)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(409)
							HX_STACK_DO_THROW(tmp16);
						}
					}
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(409)
						bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(409)
						if ((tmp13)){
							HX_STACK_LINE(409)
							_this->_validate();
						}
					}
					HX_STACK_LINE(409)
					tmp12 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(409)
				Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(409)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(409)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(409)
				if ((tmp14)){
					HX_STACK_LINE(409)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						{
							HX_STACK_LINE(409)
							bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(409)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(409)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(409)
							bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(409)
							if ((tmp20)){
								HX_STACK_LINE(409)
								tmp19 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(409)
								tmp19 = false;
							}
							HX_STACK_LINE(409)
							bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(409)
							if ((tmp21)){
								HX_STACK_LINE(409)
								::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(409)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(409)
								::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(409)
								::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(409)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(409)
								HX_STACK_DO_THROW(tmp26);
							}
						}
						HX_STACK_LINE(409)
						{
							HX_STACK_LINE(409)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(409)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(409)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(409)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(409)
							if ((tmp19)){
								HX_STACK_LINE(409)
								_this->_validate();
							}
						}
						HX_STACK_LINE(409)
						Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(409)
						tmp16 = tmp17;
					}
					HX_STACK_LINE(409)
					Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(409)
					tmp15 = (tmp16 == tmp17);
				}
				else{
					HX_STACK_LINE(409)
					tmp15 = false;
				}
				HX_STACK_LINE(409)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(409)
				if ((tmp16)){
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(409)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(409)
						{
						}
					}
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(409)
						bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(409)
						if ((tmp17)){
							HX_STACK_LINE(409)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(409)
							_this->_invalidate(tmp18);
						}
					}
				}
				HX_STACK_LINE(409)
				ret;
			}
			HX_STACK_LINE(409)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(409)
			tmp2 = ret;
		}
		HX_STACK_LINE(409)
		this->wrap_max = tmp2;
		HX_STACK_LINE(410)
		::nape::geom::Vec2 tmp3 = this->wrap_max;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(410)
		tmp3->zpp_inner->_inuse = true;
		HX_STACK_LINE(411)
		bool tmp4 = this->_immutable;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		if ((tmp4)){
			HX_STACK_LINE(412)
			::nape::geom::Vec2 tmp5 = this->wrap_max;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(412)
			tmp5->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(415)
			Dynamic tmp5 = this->mod_max_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			::nape::geom::Vec2 tmp6 = this->wrap_max;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			tmp6->zpp_inner->_invalidate = tmp5;
		}
		HX_STACK_LINE(417)
		Dynamic tmp5 = this->dom_max_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(417)
		::nape::geom::Vec2 tmp6 = this->wrap_max;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(417)
		tmp6->zpp_inner->_validate = tmp5;
	}
	HX_STACK_LINE(419)
	::nape::geom::Vec2 tmp2 = this->wrap_max;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(419)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,getmax,return )

Void ZPP_AABB_obj::dom_max( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","dom_max",0x4181f36f,"zpp_nape.geom.ZPP_AABB.dom_max","zpp_nape/geom/AABB.hx",421,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			Dynamic tmp = this->_validate_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(422)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(422)
			if ((tmp1)){
				HX_STACK_LINE(422)
				this->_validate();
			}
		}
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(424)
			Float tmp = this->maxx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(424)
			::nape::geom::Vec2 tmp1 = this->wrap_max;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(424)
			tmp1->zpp_inner->x = tmp;
			HX_STACK_LINE(425)
			Float tmp2 = this->maxy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(425)
			::nape::geom::Vec2 tmp3 = this->wrap_max;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(425)
			tmp3->zpp_inner->y = tmp2;
			HX_STACK_LINE(434)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,dom_max,(void))

Void ZPP_AABB_obj::mod_max( ::zpp_nape::geom::ZPP_Vec2 max){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","mod_max",0x8927e7af,"zpp_nape.geom.ZPP_AABB.mod_max","zpp_nape/geom/AABB.hx",444,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(445)
		Float tmp = max->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		Float tmp1 = this->maxx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(445)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(445)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(445)
		if ((tmp3)){
			HX_STACK_LINE(445)
			Float tmp5 = max->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(445)
			Float tmp6 = this->maxy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(445)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(445)
			tmp4 = (tmp5 != tmp7);
		}
		else{
			HX_STACK_LINE(445)
			tmp4 = true;
		}
		HX_STACK_LINE(445)
		if ((tmp4)){
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(447)
				this->maxx = max->x;
				HX_STACK_LINE(448)
				this->maxy = max->y;
				HX_STACK_LINE(457)
				{
				}
			}
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				Dynamic tmp5 = this->_invalidate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(466)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(466)
				if ((tmp6)){
					HX_STACK_LINE(466)
					this->_invalidate(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,mod_max,(void))

bool ZPP_AABB_obj::intersectX( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","intersectX",0x96772751,"zpp_nape.geom.ZPP_AABB.intersectX","zpp_nape/geom/AABB.hx",471,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(472)
	Float tmp = x->minx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(472)
	Float tmp1 = this->maxx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(472)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(472)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(472)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(472)
	if ((tmp3)){
		HX_STACK_LINE(472)
		Float tmp5 = this->minx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(472)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(472)
		Float tmp7 = x->maxx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(472)
		tmp4 = (tmp6 > tmp7);
	}
	else{
		HX_STACK_LINE(472)
		tmp4 = true;
	}
	HX_STACK_LINE(472)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(472)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersectX,return )

bool ZPP_AABB_obj::intersectY( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","intersectY",0x96772752,"zpp_nape.geom.ZPP_AABB.intersectY","zpp_nape/geom/AABB.hx",476,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(477)
	Float tmp = x->miny;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(477)
	Float tmp1 = this->maxy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(477)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(477)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(477)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(477)
	if ((tmp3)){
		HX_STACK_LINE(477)
		Float tmp5 = this->miny;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(477)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(477)
		Float tmp7 = x->maxy;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(477)
		tmp4 = (tmp6 > tmp7);
	}
	else{
		HX_STACK_LINE(477)
		tmp4 = true;
	}
	HX_STACK_LINE(477)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(477)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersectY,return )

bool ZPP_AABB_obj::intersect( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","intersect",0x78109b27,"zpp_nape.geom.ZPP_AABB.intersect","zpp_nape/geom/AABB.hx",481,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(482)
	Float tmp = x->miny;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	Float tmp1 = this->maxy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(482)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(482)
	if ((tmp3)){
		HX_STACK_LINE(482)
		Float tmp5 = this->miny;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(482)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(482)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		Float tmp8 = x->maxy;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		tmp4 = (tmp7 <= tmp8);
	}
	else{
		HX_STACK_LINE(482)
		tmp4 = false;
	}
	HX_STACK_LINE(482)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(482)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(482)
	if ((tmp5)){
		HX_STACK_LINE(482)
		Float tmp7 = x->minx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		Float tmp8 = this->maxx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(482)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(482)
		tmp6 = (tmp7 <= tmp10);
	}
	else{
		HX_STACK_LINE(482)
		tmp6 = false;
	}
	HX_STACK_LINE(482)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(482)
	if ((tmp6)){
		HX_STACK_LINE(482)
		Float tmp8 = this->minx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(482)
		Float tmp10 = x->maxx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(482)
		tmp7 = (tmp9 <= tmp10);
	}
	else{
		HX_STACK_LINE(482)
		tmp7 = false;
	}
	HX_STACK_LINE(482)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersect,return )

Void ZPP_AABB_obj::combine( ::zpp_nape::geom::ZPP_AABB x){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","combine",0x19e522c7,"zpp_nape.geom.ZPP_AABB.combine","zpp_nape/geom/AABB.hx",486,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(487)
		Float tmp = x->minx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(487)
		Float tmp1 = this->minx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(487)
		if ((tmp2)){
			HX_STACK_LINE(487)
			this->minx = x->minx;
		}
		HX_STACK_LINE(488)
		Float tmp3 = x->maxx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(488)
		Float tmp4 = this->maxx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(488)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(488)
		if ((tmp5)){
			HX_STACK_LINE(488)
			this->maxx = x->maxx;
		}
		HX_STACK_LINE(489)
		Float tmp6 = x->miny;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(489)
		Float tmp7 = this->miny;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(489)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(489)
		if ((tmp8)){
			HX_STACK_LINE(489)
			this->miny = x->miny;
		}
		HX_STACK_LINE(490)
		Float tmp9 = x->maxy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(490)
		Float tmp10 = this->maxy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(490)
		bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(490)
		if ((tmp11)){
			HX_STACK_LINE(490)
			this->maxy = x->maxy;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,combine,(void))

bool ZPP_AABB_obj::contains( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","contains",0x4cdda0d7,"zpp_nape.geom.ZPP_AABB.contains","zpp_nape/geom/AABB.hx",494,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(495)
	Float tmp = x->minx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	Float tmp1 = this->minx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(495)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(495)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(495)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(495)
	if ((tmp3)){
		HX_STACK_LINE(495)
		Float tmp5 = x->miny;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(495)
		Float tmp6 = this->miny;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(495)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(495)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(495)
		tmp4 = (tmp5 >= tmp8);
	}
	else{
		HX_STACK_LINE(495)
		tmp4 = false;
	}
	HX_STACK_LINE(495)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(495)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(495)
	if ((tmp5)){
		HX_STACK_LINE(495)
		Float tmp7 = x->maxx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(495)
		Float tmp8 = this->maxx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(495)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(495)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(495)
		tmp6 = (tmp7 <= tmp10);
	}
	else{
		HX_STACK_LINE(495)
		tmp6 = false;
	}
	HX_STACK_LINE(495)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(495)
	if ((tmp6)){
		HX_STACK_LINE(495)
		Float tmp8 = x->maxy;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(495)
		Float tmp9 = this->maxy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(495)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(495)
		tmp7 = (tmp8 <= tmp10);
	}
	else{
		HX_STACK_LINE(495)
		tmp7 = false;
	}
	HX_STACK_LINE(495)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,contains,return )

bool ZPP_AABB_obj::containsPoint( ::zpp_nape::geom::ZPP_Vec2 v){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","containsPoint",0x5c3617f9,"zpp_nape.geom.ZPP_AABB.containsPoint","zpp_nape/geom/AABB.hx",499,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(500)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	Float tmp1 = this->minx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(500)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(500)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(500)
	if ((tmp3)){
		HX_STACK_LINE(500)
		Float tmp5 = v->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(500)
		Float tmp6 = this->maxx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(500)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(500)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(500)
		tmp4 = (tmp5 <= tmp8);
	}
	else{
		HX_STACK_LINE(500)
		tmp4 = false;
	}
	HX_STACK_LINE(500)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(500)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(500)
	if ((tmp5)){
		HX_STACK_LINE(500)
		Float tmp7 = v->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(500)
		Float tmp8 = this->miny;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(500)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(500)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(500)
		tmp6 = (tmp7 >= tmp10);
	}
	else{
		HX_STACK_LINE(500)
		tmp6 = false;
	}
	HX_STACK_LINE(500)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(500)
	if ((tmp6)){
		HX_STACK_LINE(500)
		Float tmp8 = v->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(500)
		Float tmp9 = this->maxy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(500)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(500)
		tmp7 = (tmp8 <= tmp10);
	}
	else{
		HX_STACK_LINE(500)
		tmp7 = false;
	}
	HX_STACK_LINE(500)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,containsPoint,return )

Void ZPP_AABB_obj::setCombine( ::zpp_nape::geom::ZPP_AABB a,::zpp_nape::geom::ZPP_AABB b){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","setCombine",0x7f98b3b5,"zpp_nape.geom.ZPP_AABB.setCombine","zpp_nape/geom/AABB.hx",504,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(505)
		bool tmp = (a->minx < b->minx);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(505)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		if ((tmp)){
			HX_STACK_LINE(505)
			tmp1 = a->minx;
		}
		else{
			HX_STACK_LINE(505)
			tmp1 = b->minx;
		}
		HX_STACK_LINE(505)
		this->minx = tmp1;
		HX_STACK_LINE(506)
		bool tmp2 = (a->miny < b->miny);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		if ((tmp2)){
			HX_STACK_LINE(506)
			tmp3 = a->miny;
		}
		else{
			HX_STACK_LINE(506)
			tmp3 = b->miny;
		}
		HX_STACK_LINE(506)
		this->miny = tmp3;
		HX_STACK_LINE(507)
		bool tmp4 = (a->maxx > b->maxx);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(507)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(507)
		if ((tmp4)){
			HX_STACK_LINE(507)
			tmp5 = a->maxx;
		}
		else{
			HX_STACK_LINE(507)
			tmp5 = b->maxx;
		}
		HX_STACK_LINE(507)
		this->maxx = tmp5;
		HX_STACK_LINE(508)
		bool tmp6 = (a->maxy > b->maxy);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(508)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(508)
		if ((tmp6)){
			HX_STACK_LINE(508)
			tmp7 = a->maxy;
		}
		else{
			HX_STACK_LINE(508)
			tmp7 = b->maxy;
		}
		HX_STACK_LINE(508)
		this->maxy = tmp7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setCombine,(void))

Void ZPP_AABB_obj::setExpand( ::zpp_nape::geom::ZPP_AABB a,Float fatten){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","setExpand",0x59b5fde4,"zpp_nape.geom.ZPP_AABB.setExpand","zpp_nape/geom/AABB.hx",512,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(fatten,"fatten")
		HX_STACK_LINE(513)
		Float tmp = (a->minx - fatten);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		this->minx = tmp;
		HX_STACK_LINE(514)
		Float tmp1 = (a->miny - fatten);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(514)
		this->miny = tmp1;
		HX_STACK_LINE(515)
		Float tmp2 = (a->maxx + fatten);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(515)
		this->maxx = tmp2;
		HX_STACK_LINE(516)
		Float tmp3 = (a->maxy + fatten);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(516)
		this->maxy = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setExpand,(void))

Void ZPP_AABB_obj::setExpandPoint( Float x,Float y){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","setExpandPoint",0x23904bcc,"zpp_nape.geom.ZPP_AABB.setExpandPoint","zpp_nape/geom/AABB.hx",520,0xbecf4f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(521)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		Float tmp1 = this->minx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(521)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		if ((tmp2)){
			HX_STACK_LINE(521)
			this->minx = x;
		}
		HX_STACK_LINE(522)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(522)
		Float tmp4 = this->maxx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(522)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(522)
		if ((tmp5)){
			HX_STACK_LINE(522)
			this->maxx = x;
		}
		HX_STACK_LINE(523)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(523)
		Float tmp7 = this->miny;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(523)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(523)
		if ((tmp8)){
			HX_STACK_LINE(523)
			this->miny = y;
		}
		HX_STACK_LINE(524)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(524)
		Float tmp10 = this->maxy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(524)
		bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(524)
		if ((tmp11)){
			HX_STACK_LINE(524)
			this->maxy = y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setExpandPoint,(void))

::String ZPP_AABB_obj::toString( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","toString",0x58d11764,"zpp_nape.geom.ZPP_AABB.toString","zpp_nape/geom/AABB.hx",526,0xbecf4f8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(527)
	Float tmp = this->minx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	::String tmp1 = (HX_HCSTRING("{ x: ","\xf9","\x6e","\xcb","\xe7") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	::String tmp2 = (tmp1 + HX_HCSTRING(" y: ","\x3f","\xd7","\x82","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(527)
	Float tmp3 = this->miny;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(527)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(527)
	::String tmp5 = (tmp4 + HX_HCSTRING(" w: ","\xbd","\x52","\x81","\x15"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(527)
	Float tmp6 = this->maxx;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(527)
	Float tmp7 = this->minx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(527)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(527)
	::String tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(527)
	::String tmp10 = (tmp9 + HX_HCSTRING(" h: ","\xee","\xf0","\x75","\x15"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(527)
	Float tmp11 = this->maxy;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(527)
	Float tmp12 = this->miny;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(527)
	Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(527)
	::String tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(527)
	::String tmp15 = (tmp14 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(527)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,toString,return )

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::zpp_pool;

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::get( Float minx,Float miny,Float maxx,Float maxy){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_AABB","get",0x3f81b4de,"zpp_nape.geom.ZPP_AABB.get","zpp_nape/geom/AABB.hx",258,0xbecf4f8d)
	HX_STACK_ARG(minx,"minx")
	HX_STACK_ARG(miny,"miny")
	HX_STACK_ARG(maxx,"maxx")
	HX_STACK_ARG(maxy,"maxy")
	HX_STACK_LINE(259)
	::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_AABB tmp = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		if ((tmp1)){
			HX_STACK_LINE(262)
			::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(268)
			::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(268)
			ret = tmp2;
			HX_STACK_LINE(269)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
			HX_STACK_LINE(270)
			ret->next = null();
		}
		HX_STACK_LINE(275)
		Dynamic();
	}
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(278)
		ret->minx = minx;
		HX_STACK_LINE(279)
		ret->miny = miny;
		HX_STACK_LINE(288)
		{
		}
	}
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(298)
		ret->maxx = maxx;
		HX_STACK_LINE(299)
		ret->maxy = maxy;
		HX_STACK_LINE(308)
		{
		}
	}
	HX_STACK_LINE(317)
	::zpp_nape::geom::ZPP_AABB tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_AABB_obj,get,return )


ZPP_AABB_obj::ZPP_AABB_obj()
{
}

void ZPP_AABB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABB);
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_immutable,"_immutable");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(minx,"minx");
	HX_MARK_MEMBER_NAME(miny,"miny");
	HX_MARK_MEMBER_NAME(wrap_min,"wrap_min");
	HX_MARK_MEMBER_NAME(maxx,"maxx");
	HX_MARK_MEMBER_NAME(maxy,"maxy");
	HX_MARK_MEMBER_NAME(wrap_max,"wrap_max");
	HX_MARK_END_CLASS();
}

void ZPP_AABB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_immutable,"_immutable");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(minx,"minx");
	HX_VISIT_MEMBER_NAME(miny,"miny");
	HX_VISIT_MEMBER_NAME(wrap_min,"wrap_min");
	HX_VISIT_MEMBER_NAME(maxx,"maxx");
	HX_VISIT_MEMBER_NAME(maxy,"maxy");
	HX_VISIT_MEMBER_NAME(wrap_max,"wrap_max");
}

Dynamic ZPP_AABB_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"minx") ) { return minx; }
		if (HX_FIELD_EQ(inName,"miny") ) { return miny; }
		if (HX_FIELD_EQ(inName,"maxx") ) { return maxx; }
		if (HX_FIELD_EQ(inName,"maxy") ) { return maxy; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height_dyn(); }
		if (HX_FIELD_EQ(inName,"getmin") ) { return getmin_dyn(); }
		if (HX_FIELD_EQ(inName,"getmax") ) { return getmax_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"dom_min") ) { return dom_min_dyn(); }
		if (HX_FIELD_EQ(inName,"mod_min") ) { return mod_min_dyn(); }
		if (HX_FIELD_EQ(inName,"dom_max") ) { return dom_max_dyn(); }
		if (HX_FIELD_EQ(inName,"mod_max") ) { return mod_max_dyn(); }
		if (HX_FIELD_EQ(inName,"combine") ) { return combine_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_min") ) { return wrap_min; }
		if (HX_FIELD_EQ(inName,"wrap_max") ) { return wrap_max; }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		if (HX_FIELD_EQ(inName,"perimeter") ) { return perimeter_dyn(); }
		if (HX_FIELD_EQ(inName,"intersect") ) { return intersect_dyn(); }
		if (HX_FIELD_EQ(inName,"setExpand") ) { return setExpand_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_immutable") ) { return _immutable; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectX") ) { return intersectX_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectY") ) { return intersectY_dyn(); }
		if (HX_FIELD_EQ(inName,"setCombine") ) { return setCombine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setExpandPoint") ) { return setExpandPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_AABB_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic ZPP_AABB_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minx") ) { minx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"miny") ) { miny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxx") ) { maxx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxy") ) { maxy=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::AABB >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wrap_min") ) { wrap_min=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_max") ) { wrap_max=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_immutable") ) { _immutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_AABB_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return true; }
	}
	return false;
}

void ZPP_AABB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_immutable","\x03","\xa4","\x69","\xc2"));
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("minx","\xa6","\x4e","\x5c","\x48"));
	outFields->push(HX_HCSTRING("miny","\xa7","\x4e","\x5c","\x48"));
	outFields->push(HX_HCSTRING("wrap_min","\x5d","\x3d","\x9f","\x9f"));
	outFields->push(HX_HCSTRING("maxx","\x54","\x45","\x56","\x48"));
	outFields->push(HX_HCSTRING("maxy","\x55","\x45","\x56","\x48"));
	outFields->push(HX_HCSTRING("wrap_max","\x6f","\x36","\x9f","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_AABB_obj,_invalidate),HX_HCSTRING("_invalidate","\x9a","\xe6","\xb3","\x59")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_AABB_obj,_validate),HX_HCSTRING("_validate","\xf5","\xc7","\x79","\x4c")},
	{hx::fsBool,(int)offsetof(ZPP_AABB_obj,_immutable),HX_HCSTRING("_immutable","\x03","\xa4","\x69","\xc2")},
	{hx::fsObject /*::nape::geom::AABB*/ ,(int)offsetof(ZPP_AABB_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_AABB_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(ZPP_AABB_obj,minx),HX_HCSTRING("minx","\xa6","\x4e","\x5c","\x48")},
	{hx::fsFloat,(int)offsetof(ZPP_AABB_obj,miny),HX_HCSTRING("miny","\xa7","\x4e","\x5c","\x48")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_AABB_obj,wrap_min),HX_HCSTRING("wrap_min","\x5d","\x3d","\x9f","\x9f")},
	{hx::fsFloat,(int)offsetof(ZPP_AABB_obj,maxx),HX_HCSTRING("maxx","\x54","\x45","\x56","\x48")},
	{hx::fsFloat,(int)offsetof(ZPP_AABB_obj,maxy),HX_HCSTRING("maxy","\x55","\x45","\x56","\x48")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_AABB_obj,wrap_max),HX_HCSTRING("wrap_max","\x6f","\x36","\x9f","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(void *) &ZPP_AABB_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_invalidate","\x9a","\xe6","\xb3","\x59"),
	HX_HCSTRING("_validate","\xf5","\xc7","\x79","\x4c"),
	HX_HCSTRING("_immutable","\x03","\xa4","\x69","\xc2"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("perimeter","\x1d","\xe1","\x54","\x60"),
	HX_HCSTRING("minx","\xa6","\x4e","\x5c","\x48"),
	HX_HCSTRING("miny","\xa7","\x4e","\x5c","\x48"),
	HX_HCSTRING("wrap_min","\x5d","\x3d","\x9f","\x9f"),
	HX_HCSTRING("getmin","\xbc","\x92","\x3a","\xa3"),
	HX_HCSTRING("dom_min","\x15","\x02","\xcb","\xa1"),
	HX_HCSTRING("mod_min","\x55","\xf6","\x70","\xe9"),
	HX_HCSTRING("maxx","\x54","\x45","\x56","\x48"),
	HX_HCSTRING("maxy","\x55","\x45","\x56","\x48"),
	HX_HCSTRING("wrap_max","\x6f","\x36","\x9f","\x9f"),
	HX_HCSTRING("getmax","\xce","\x8b","\x3a","\xa3"),
	HX_HCSTRING("dom_max","\x27","\xfb","\xca","\xa1"),
	HX_HCSTRING("mod_max","\x67","\xef","\x70","\xe9"),
	HX_HCSTRING("intersectX","\x99","\xc2","\xeb","\xe3"),
	HX_HCSTRING("intersectY","\x9a","\xc2","\xeb","\xe3"),
	HX_HCSTRING("intersect","\xdf","\x00","\x75","\x42"),
	HX_HCSTRING("combine","\x7f","\x2a","\x2e","\x7a"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"),
	HX_HCSTRING("setCombine","\xfd","\x4e","\x0d","\xcd"),
	HX_HCSTRING("setExpand","\x9c","\x63","\x1a","\x24"),
	HX_HCSTRING("setExpandPoint","\x14","\x2b","\xc8","\xcb"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABB_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABB_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABB_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABB_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_AABB_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_AABB_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_AABB","\xb6","\xd0","\xb5","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_AABB_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_AABB_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_AABB_obj >;
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

void ZPP_AABB_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
