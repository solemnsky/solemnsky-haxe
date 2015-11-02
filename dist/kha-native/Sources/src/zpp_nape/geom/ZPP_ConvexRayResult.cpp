#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_ConvexRayResult_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_ConvexRayResult","new",0xb0fabd7c,"zpp_nape.geom.ZPP_ConvexRayResult.new","zpp_nape/geom/ConvexRayResult.hx",174,0x535a39cf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->toiDistance = ((Float)0.0);
	HX_STACK_LINE(183)
	this->next = null();
	HX_STACK_LINE(182)
	this->inner = false;
	HX_STACK_LINE(181)
	this->ray = null();
	HX_STACK_LINE(179)
	this->position = null();
	HX_STACK_LINE(178)
	this->convex = null();
	HX_STACK_LINE(176)
	this->shape = null();
	HX_STACK_LINE(175)
	this->normal = null();
}
;
	return null();
}

//ZPP_ConvexRayResult_obj::~ZPP_ConvexRayResult_obj() { }

Dynamic ZPP_ConvexRayResult_obj::__CreateEmpty() { return  new ZPP_ConvexRayResult_obj; }
hx::ObjectPtr< ZPP_ConvexRayResult_obj > ZPP_ConvexRayResult_obj::__new()
{  hx::ObjectPtr< ZPP_ConvexRayResult_obj > _result_ = new ZPP_ConvexRayResult_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_ConvexRayResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ConvexRayResult_obj > _result_ = new ZPP_ConvexRayResult_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_ConvexRayResult_obj::disposed( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_ConvexRayResult","disposed",0x23c01849,"zpp_nape.geom.ZPP_ConvexRayResult.disposed","zpp_nape/geom/ConvexRayResult.hx",234,0x535a39cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(236)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexRayResult_obj,disposed,(void))

Void ZPP_ConvexRayResult_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_ConvexRayResult","free",0x252b2810,"zpp_nape.geom.ZPP_ConvexRayResult.free","zpp_nape/geom/ConvexRayResult.hx",239,0x535a39cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(240)
		::nape::geom::Vec2 tmp = this->normal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		tmp->zpp_inner->_immutable = false;
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			::nape::geom::Vec2 tmp1 = this->normal;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(241)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(241)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(241)
				if ((tmp2)){
					HX_STACK_LINE(241)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(241)
					tmp3 = false;
				}
				HX_STACK_LINE(241)
				if ((tmp3)){
					HX_STACK_LINE(241)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(241)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(241)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(241)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(241)
				if ((tmp2)){
					HX_STACK_LINE(241)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(241)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(241)
				if ((tmp3)){
					HX_STACK_LINE(241)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(241)
			bool tmp2 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			if ((tmp2)){
				HX_STACK_LINE(241)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
			}
			HX_STACK_LINE(241)
			::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(241)
			_this->zpp_inner->outer = null();
			HX_STACK_LINE(241)
			_this->zpp_inner = null();
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(241)
				o->zpp_pool = null();
				HX_STACK_LINE(241)
				::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(241)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(241)
				if ((tmp4)){
					HX_STACK_LINE(241)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(241)
					tmp5->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(241)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(241)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(241)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(241)
					if ((tmp3)){
						HX_STACK_LINE(241)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(241)
						o->outer = null();
					}
					HX_STACK_LINE(241)
					o->_isimmutable = null();
					HX_STACK_LINE(241)
					o->_validate = null();
					HX_STACK_LINE(241)
					o->_invalidate = null();
				}
				HX_STACK_LINE(241)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(241)
				o->next = tmp3;
				HX_STACK_LINE(241)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(242)
		::nape::geom::Vec2 tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		if ((tmp2)){
			HX_STACK_LINE(243)
			::nape::geom::Vec2 tmp3 = this->position;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(243)
			tmp3->zpp_inner->_immutable = false;
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::nape::geom::Vec2 tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(244)
				::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(244)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(244)
					if ((tmp5)){
						HX_STACK_LINE(244)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(244)
						tmp6 = false;
					}
					HX_STACK_LINE(244)
					if ((tmp6)){
						HX_STACK_LINE(244)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(244)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(244)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(244)
					bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(244)
					if ((tmp5)){
						HX_STACK_LINE(244)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(244)
					bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(244)
					if ((tmp6)){
						HX_STACK_LINE(244)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(244)
				bool tmp5 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(244)
				if ((tmp5)){
					HX_STACK_LINE(244)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(244)
				::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(244)
				_this->zpp_inner->outer = null();
				HX_STACK_LINE(244)
				_this->zpp_inner = null();
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(244)
					o->zpp_pool = null();
					HX_STACK_LINE(244)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(244)
					bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(244)
					if ((tmp7)){
						HX_STACK_LINE(244)
						::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(244)
						tmp8->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(244)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(244)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(244)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(244)
						bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(244)
						if ((tmp6)){
							HX_STACK_LINE(244)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(244)
							o->outer = null();
						}
						HX_STACK_LINE(244)
						o->_isimmutable = null();
						HX_STACK_LINE(244)
						o->_validate = null();
						HX_STACK_LINE(244)
						o->_invalidate = null();
					}
					HX_STACK_LINE(244)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(244)
					o->next = tmp6;
					HX_STACK_LINE(244)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(246)
		this->shape = null();
		HX_STACK_LINE(247)
		this->toiDistance = ((Float)0.0);
		HX_STACK_LINE(248)
		::nape::geom::ConvexResult tmp3 = this->convex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		if ((tmp4)){
			HX_STACK_LINE(249)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp5 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			this->next = tmp5;
			HX_STACK_LINE(250)
			::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(253)
			::zpp_nape::geom::ZPP_ConvexRayResult tmp5 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(253)
			this->next = tmp5;
			HX_STACK_LINE(254)
			::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool = hx::ObjectPtr<OBJ_>(this);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexRayResult_obj,free,(void))

::zpp_nape::geom::ZPP_ConvexRayResult ZPP_ConvexRayResult_obj::convexPool;

::zpp_nape::geom::ZPP_ConvexRayResult ZPP_ConvexRayResult_obj::rayPool;

bool ZPP_ConvexRayResult_obj::internal;

::nape::geom::RayResult ZPP_ConvexRayResult_obj::getRay( ::nape::geom::Vec2 normal,Float time,bool inner,::nape::shape::Shape shape){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_ConvexRayResult","getRay",0x18533b58,"zpp_nape.geom.ZPP_ConvexRayResult.getRay","zpp_nape/geom/ConvexRayResult.hx",187,0x535a39cf)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(shape,"shape")
	HX_STACK_LINE(188)
	::nape::geom::RayResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(189)
	::zpp_nape::geom::ZPP_ConvexRayResult tmp = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	if ((tmp1)){
		HX_STACK_LINE(190)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal = true;
		HX_STACK_LINE(191)
		::nape::geom::RayResult tmp2 = ::nape::geom::RayResult_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		ret = tmp2;
		HX_STACK_LINE(192)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp3 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		ret->zpp_inner = tmp3;
		HX_STACK_LINE(193)
		ret->zpp_inner->ray = ret;
		HX_STACK_LINE(194)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal = false;
	}
	else{
		HX_STACK_LINE(197)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp2 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		ret = tmp2->ray;
		HX_STACK_LINE(198)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp3 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool = tmp3->next;
		HX_STACK_LINE(199)
		ret->zpp_inner->next = null();
	}
	HX_STACK_LINE(201)
	::zpp_nape::geom::ZPP_ConvexRayResult zinner = ret->zpp_inner;		HX_STACK_VAR(zinner,"zinner");
	HX_STACK_LINE(202)
	zinner->normal = normal;
	HX_STACK_LINE(203)
	normal->zpp_inner->_immutable = true;
	HX_STACK_LINE(204)
	zinner->toiDistance = time;
	HX_STACK_LINE(205)
	zinner->inner = inner;
	HX_STACK_LINE(206)
	zinner->shape = shape;
	HX_STACK_LINE(207)
	::nape::geom::RayResult tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_ConvexRayResult_obj,getRay,return )

::nape::geom::ConvexResult ZPP_ConvexRayResult_obj::getConvex( ::nape::geom::Vec2 normal,::nape::geom::Vec2 position,Float toiDistance,::nape::shape::Shape shape){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_ConvexRayResult","getConvex",0xe0a4aab9,"zpp_nape.geom.ZPP_ConvexRayResult.getConvex","zpp_nape/geom/ConvexRayResult.hx",209,0x535a39cf)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(toiDistance,"toiDistance")
	HX_STACK_ARG(shape,"shape")
	HX_STACK_LINE(210)
	::nape::geom::ConvexResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(211)
	::zpp_nape::geom::ZPP_ConvexRayResult tmp = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	if ((tmp1)){
		HX_STACK_LINE(212)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal = true;
		HX_STACK_LINE(213)
		::nape::geom::ConvexResult tmp2 = ::nape::geom::ConvexResult_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		ret = tmp2;
		HX_STACK_LINE(214)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp3 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		ret->zpp_inner = tmp3;
		HX_STACK_LINE(215)
		ret->zpp_inner->convex = ret;
		HX_STACK_LINE(216)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal = false;
	}
	else{
		HX_STACK_LINE(219)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp2 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		ret = tmp2->convex;
		HX_STACK_LINE(220)
		::zpp_nape::geom::ZPP_ConvexRayResult tmp3 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool = tmp3->next;
		HX_STACK_LINE(221)
		ret->zpp_inner->next = null();
	}
	HX_STACK_LINE(223)
	::zpp_nape::geom::ZPP_ConvexRayResult inner = ret->zpp_inner;		HX_STACK_VAR(inner,"inner");
	HX_STACK_LINE(224)
	inner->normal = normal;
	HX_STACK_LINE(225)
	inner->position = position;
	HX_STACK_LINE(226)
	normal->zpp_inner->_immutable = true;
	HX_STACK_LINE(227)
	position->zpp_inner->_immutable = true;
	HX_STACK_LINE(228)
	inner->toiDistance = toiDistance;
	HX_STACK_LINE(229)
	inner->shape = shape;
	HX_STACK_LINE(230)
	::nape::geom::ConvexResult tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_ConvexRayResult_obj,getConvex,return )


ZPP_ConvexRayResult_obj::ZPP_ConvexRayResult_obj()
{
}

void ZPP_ConvexRayResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ConvexRayResult);
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(convex,"convex");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(ray,"ray");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(toiDistance,"toiDistance");
	HX_MARK_END_CLASS();
}

void ZPP_ConvexRayResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(convex,"convex");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(ray,"ray");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(toiDistance,"toiDistance");
}

Dynamic ZPP_ConvexRayResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
		if (HX_FIELD_EQ(inName,"convex") ) { return convex; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toiDistance") ) { return toiDistance; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_ConvexRayResult_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getRay") ) { outValue = getRay_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayPool") ) { outValue = rayPool; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getConvex") ) { outValue = getConvex_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"convexPool") ) { outValue = convexPool; return true;  }
	}
	return false;
}

Dynamic ZPP_ConvexRayResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { ray=inValue.Cast< ::nape::geom::RayResult >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"convex") ) { convex=inValue.Cast< ::nape::geom::ConvexResult >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toiDistance") ) { toiDistance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_ConvexRayResult_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rayPool") ) { rayPool=ioValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"convexPool") ) { convexPool=ioValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return true; }
	}
	return false;
}

void ZPP_ConvexRayResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("convex","\x67","\x77","\xde","\xc7"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("toiDistance","\xe3","\xf3","\xc1","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_ConvexRayResult_obj,normal),HX_HCSTRING("normal","\x27","\x72","\x69","\x30")},
	{hx::fsObject /*::nape::shape::Shape*/ ,(int)offsetof(ZPP_ConvexRayResult_obj,shape),HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c")},
	{hx::fsObject /*::nape::geom::ConvexResult*/ ,(int)offsetof(ZPP_ConvexRayResult_obj,convex),HX_HCSTRING("convex","\x67","\x77","\xde","\xc7")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_ConvexRayResult_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*::nape::geom::RayResult*/ ,(int)offsetof(ZPP_ConvexRayResult_obj,ray),HX_HCSTRING("ray","\xea","\xd5","\x56","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_ConvexRayResult_obj,inner),HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_ConvexRayResult*/ ,(int)offsetof(ZPP_ConvexRayResult_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(ZPP_ConvexRayResult_obj,toiDistance),HX_HCSTRING("toiDistance","\xe3","\xf3","\xc1","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_ConvexRayResult*/ ,(void *) &ZPP_ConvexRayResult_obj::convexPool,HX_HCSTRING("convexPool","\xe3","\x63","\x61","\x41")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_ConvexRayResult*/ ,(void *) &ZPP_ConvexRayResult_obj::rayPool,HX_HCSTRING("rayPool","\xe6","\xbf","\xde","\x2d")},
	{hx::fsBool,(void *) &ZPP_ConvexRayResult_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),
	HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"),
	HX_HCSTRING("convex","\x67","\x77","\xde","\xc7"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"),
	HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("toiDistance","\xe3","\xf3","\xc1","\x8f"),
	HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ConvexRayResult_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ConvexRayResult_obj::convexPool,"convexPool");
	HX_MARK_MEMBER_NAME(ZPP_ConvexRayResult_obj::rayPool,"rayPool");
	HX_MARK_MEMBER_NAME(ZPP_ConvexRayResult_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ConvexRayResult_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ConvexRayResult_obj::convexPool,"convexPool");
	HX_VISIT_MEMBER_NAME(ZPP_ConvexRayResult_obj::rayPool,"rayPool");
	HX_VISIT_MEMBER_NAME(ZPP_ConvexRayResult_obj::internal,"internal");
};

#endif

hx::Class ZPP_ConvexRayResult_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("convexPool","\xe3","\x63","\x61","\x41"),
	HX_HCSTRING("rayPool","\xe6","\xbf","\xde","\x2d"),
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	HX_HCSTRING("getRay","\xf4","\x0e","\x26","\xa3"),
	HX_HCSTRING("getConvex","\x9d","\x00","\x35","\x44"),
	::String(null()) };

void ZPP_ConvexRayResult_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_ConvexRayResult","\x8a","\x8f","\x7f","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_ConvexRayResult_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_ConvexRayResult_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ConvexRayResult_obj >;
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

void ZPP_ConvexRayResult_obj::__boot()
{
	convexPool= null();
	rayPool= null();
	internal= false;
}

} // end namespace zpp_nape
} // end namespace geom
