#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_FluidProperties_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","new",0x991565af,"zpp_nape.phys.ZPP_FluidProperties.new","zpp_nape/phys/FluidProperties.hx",174,0x45ff3bfc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(303)
	this->wrap_gravity = null();
	HX_STACK_LINE(302)
	this->gravityy = ((Float)0.0);
	HX_STACK_LINE(301)
	this->gravityx = ((Float)0.0);
	HX_STACK_LINE(300)
	this->density = ((Float)0.0);
	HX_STACK_LINE(299)
	this->viscosity = ((Float)0.0);
	HX_STACK_LINE(235)
	this->wrap_shapes = null();
	HX_STACK_LINE(234)
	this->shapes = null();
	HX_STACK_LINE(201)
	this->outer = null();
	HX_STACK_LINE(200)
	this->userData = null();
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		this->shapes = tmp;
	}
	HX_STACK_LINE(276)
	Float tmp = this->viscosity = (int)1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	this->density = tmp;
	HX_STACK_LINE(277)
	this->wrap_gravity = null();
	HX_STACK_LINE(278)
	{
		HX_STACK_LINE(279)
		this->gravityx = (int)0;
		HX_STACK_LINE(280)
		this->gravityy = (int)0;
		HX_STACK_LINE(289)
		{
		}
	}
}
;
	return null();
}

//ZPP_FluidProperties_obj::~ZPP_FluidProperties_obj() { }

Dynamic ZPP_FluidProperties_obj::__CreateEmpty() { return  new ZPP_FluidProperties_obj; }
hx::ObjectPtr< ZPP_FluidProperties_obj > ZPP_FluidProperties_obj::__new()
{  hx::ObjectPtr< ZPP_FluidProperties_obj > _result_ = new ZPP_FluidProperties_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_FluidProperties_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_FluidProperties_obj > _result_ = new ZPP_FluidProperties_obj();
	_result_->__construct();
	return _result_;}

::nape::phys::FluidProperties ZPP_FluidProperties_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","wrapper",0xcbbcbe22,"zpp_nape.phys.ZPP_FluidProperties.wrapper","zpp_nape/phys/FluidProperties.hx",202,0x45ff3bfc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	::nape::phys::FluidProperties tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::nape::phys::FluidProperties tmp2 = ::nape::phys::FluidProperties_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		this->outer = tmp2;
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(206)
			::nape::phys::FluidProperties tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			::zpp_nape::phys::ZPP_FluidProperties o = tmp3->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(215)
			o->outer = null();
			HX_STACK_LINE(216)
			::zpp_nape::phys::ZPP_FluidProperties tmp4 = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			o->next = tmp4;
			HX_STACK_LINE(217)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = o;
		}
		HX_STACK_LINE(222)
		::nape::phys::FluidProperties tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(224)
	::nape::phys::FluidProperties tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,wrapper,return )

Void ZPP_FluidProperties_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","free",0x5463ac7d,"zpp_nape.phys.ZPP_FluidProperties.free","zpp_nape/phys/FluidProperties.hx",229,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->outer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,free,(void))

Void ZPP_FluidProperties_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","alloc",0x9de06b84,"zpp_nape.phys.ZPP_FluidProperties.alloc","zpp_nape/phys/FluidProperties.hx",233,0x45ff3bfc)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,alloc,(void))

Void ZPP_FluidProperties_obj::feature_cons( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","feature_cons",0xf0fe182b,"zpp_nape.phys.ZPP_FluidProperties.feature_cons","zpp_nape/phys/FluidProperties.hx",238,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		this->shapes = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,feature_cons,(void))

Void ZPP_FluidProperties_obj::addShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","addShape",0xc40dd591,"zpp_nape.phys.ZPP_FluidProperties.addShape","zpp_nape/phys/FluidProperties.hx",243,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(244)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		::zpp_nape::shape::ZPP_Shape tmp1 = shape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,addShape,(void))

Void ZPP_FluidProperties_obj::remShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","remShape",0x53331fb8,"zpp_nape.phys.ZPP_FluidProperties.remShape","zpp_nape/phys/FluidProperties.hx",248,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(249)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		::zpp_nape::shape::ZPP_Shape tmp1 = shape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,remShape,(void))

::zpp_nape::phys::ZPP_FluidProperties ZPP_FluidProperties_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","copy",0x5265cb86,"zpp_nape.phys.ZPP_FluidProperties.copy","zpp_nape/phys/FluidProperties.hx",251,0x45ff3bfc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::zpp_nape::phys::ZPP_FluidProperties ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(254)
		::zpp_nape::phys::ZPP_FluidProperties tmp = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		if ((tmp1)){
			HX_STACK_LINE(255)
			::zpp_nape::phys::ZPP_FluidProperties tmp2 = ::zpp_nape::phys::ZPP_FluidProperties_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(261)
			::zpp_nape::phys::ZPP_FluidProperties tmp2 = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			ret = tmp2;
			HX_STACK_LINE(262)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = ret->next;
			HX_STACK_LINE(263)
			ret->next = null();
		}
		HX_STACK_LINE(268)
		Dynamic();
	}
	HX_STACK_LINE(270)
	Float tmp = this->viscosity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	ret->viscosity = tmp;
	HX_STACK_LINE(271)
	Float tmp1 = this->density;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	ret->density = tmp1;
	HX_STACK_LINE(272)
	::zpp_nape::phys::ZPP_FluidProperties tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(272)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,copy,return )

Void ZPP_FluidProperties_obj::gravity_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","gravity_invalidate",0xa5ad5a9d,"zpp_nape.phys.ZPP_FluidProperties.gravity_invalidate","zpp_nape/phys/FluidProperties.hx",304,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(306)
			this->gravityx = x->x;
			HX_STACK_LINE(307)
			this->gravityy = x->y;
			HX_STACK_LINE(316)
			{
			}
		}
		HX_STACK_LINE(325)
		this->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,gravity_invalidate,(void))

Void ZPP_FluidProperties_obj::gravity_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","gravity_validate",0x2a6f2538,"zpp_nape.phys.ZPP_FluidProperties.gravity_validate","zpp_nape/phys/FluidProperties.hx",328,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		Float tmp = this->gravityx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		::nape::geom::Vec2 tmp1 = this->wrap_gravity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(330)
		Float tmp2 = this->gravityy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		::nape::geom::Vec2 tmp3 = this->wrap_gravity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(339)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,gravity_validate,(void))

Void ZPP_FluidProperties_obj::getgravity( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","getgravity",0x6e6c0f09,"zpp_nape.phys.ZPP_FluidProperties.getgravity","zpp_nape/phys/FluidProperties.hx",349,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			Float tmp1 = this->gravityx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(350)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(350)
			Float tmp2 = this->gravityy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(350)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(350)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(350)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(350)
			if ((tmp4)){
				HX_STACK_LINE(350)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(350)
				tmp5 = true;
			}
			HX_STACK_LINE(350)
			if ((tmp5)){
				HX_STACK_LINE(350)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(350)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(350)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(350)
				if ((tmp7)){
					HX_STACK_LINE(350)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(350)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(350)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(350)
					ret = tmp8;
					HX_STACK_LINE(350)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(350)
					ret->zpp_pool = null();
					HX_STACK_LINE(350)
					ret->zpp_disp = false;
					HX_STACK_LINE(350)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(350)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(350)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(350)
					if ((tmp11)){
						HX_STACK_LINE(350)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(350)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(350)
			if ((tmp6)){
				HX_STACK_LINE(350)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(350)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(350)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(350)
						if ((tmp9)){
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(350)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(350)
							ret1 = tmp10;
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(350)
							ret1->next = null();
						}
						HX_STACK_LINE(350)
						ret1->weak = false;
					}
					HX_STACK_LINE(350)
					ret1->_immutable = immutable;
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						ret1->x = x;
						HX_STACK_LINE(350)
						ret1->y = y;
						HX_STACK_LINE(350)
						{
						}
					}
					HX_STACK_LINE(350)
					tmp7 = ret1;
				}
				HX_STACK_LINE(350)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(350)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(350)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(350)
					if ((tmp7)){
						HX_STACK_LINE(350)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(350)
						tmp8 = false;
					}
					HX_STACK_LINE(350)
					if ((tmp8)){
						HX_STACK_LINE(350)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(350)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(350)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(350)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(350)
					if ((tmp7)){
						HX_STACK_LINE(350)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(350)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(350)
					if ((tmp8)){
						HX_STACK_LINE(350)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(350)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(350)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(350)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(350)
				if ((tmp8)){
					HX_STACK_LINE(350)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(350)
					tmp9 = true;
				}
				HX_STACK_LINE(350)
				if ((tmp9)){
					HX_STACK_LINE(350)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(350)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(350)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(350)
						if ((tmp11)){
							HX_STACK_LINE(350)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(350)
							tmp12 = false;
						}
						HX_STACK_LINE(350)
						if ((tmp12)){
							HX_STACK_LINE(350)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(350)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(350)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(350)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(350)
						if ((tmp11)){
							HX_STACK_LINE(350)
							_this->_validate();
						}
					}
					HX_STACK_LINE(350)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(350)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(350)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(350)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(350)
				if ((tmp12)){
					HX_STACK_LINE(350)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(350)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(350)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(350)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(350)
							if ((tmp18)){
								HX_STACK_LINE(350)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(350)
								tmp17 = false;
							}
							HX_STACK_LINE(350)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(350)
							if ((tmp19)){
								HX_STACK_LINE(350)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(350)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(350)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(350)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(350)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(350)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(350)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(350)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(350)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(350)
							if ((tmp17)){
								HX_STACK_LINE(350)
								_this->_validate();
							}
						}
						HX_STACK_LINE(350)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(350)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(350)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(350)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(350)
					tmp13 = false;
				}
				HX_STACK_LINE(350)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(350)
				if ((tmp14)){
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(350)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(350)
						{
						}
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(350)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(350)
						if ((tmp15)){
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(350)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(350)
				ret;
			}
			HX_STACK_LINE(350)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(350)
			tmp = ret;
		}
		HX_STACK_LINE(350)
		this->wrap_gravity = tmp;
		HX_STACK_LINE(351)
		::nape::geom::Vec2 tmp1 = this->wrap_gravity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(352)
		Dynamic tmp2 = this->gravity_invalidate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		::nape::geom::Vec2 tmp3 = this->wrap_gravity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		tmp3->zpp_inner->_invalidate = tmp2;
		HX_STACK_LINE(353)
		Dynamic tmp4 = this->gravity_validate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		::nape::geom::Vec2 tmp5 = this->wrap_gravity;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(353)
		tmp5->zpp_inner->_validate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,getgravity,(void))

Void ZPP_FluidProperties_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_FluidProperties","invalidate",0xfb865c0c,"zpp_nape.phys.ZPP_FluidProperties.invalidate","zpp_nape/phys/FluidProperties.hx",356,0x45ff3bfc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(358)
		while((true)){
			HX_STACK_LINE(358)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(358)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(358)
			if ((tmp2)){
				HX_STACK_LINE(358)
				break;
			}
			HX_STACK_LINE(359)
			::zpp_nape::shape::ZPP_Shape shape = cx_ite->elt;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(360)
			shape->invalidate_fluidprops();
			HX_STACK_LINE(361)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,invalidate,(void))

::zpp_nape::phys::ZPP_FluidProperties ZPP_FluidProperties_obj::zpp_pool;


ZPP_FluidProperties_obj::ZPP_FluidProperties_obj()
{
}

void ZPP_FluidProperties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_FluidProperties);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(viscosity,"viscosity");
	HX_MARK_MEMBER_NAME(density,"density");
	HX_MARK_MEMBER_NAME(gravityx,"gravityx");
	HX_MARK_MEMBER_NAME(gravityy,"gravityy");
	HX_MARK_MEMBER_NAME(wrap_gravity,"wrap_gravity");
	HX_MARK_END_CLASS();
}

void ZPP_FluidProperties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(viscosity,"viscosity");
	HX_VISIT_MEMBER_NAME(density,"density");
	HX_VISIT_MEMBER_NAME(gravityx,"gravityx");
	HX_VISIT_MEMBER_NAME(gravityy,"gravityy");
	HX_VISIT_MEMBER_NAME(wrap_gravity,"wrap_gravity");
}

Dynamic ZPP_FluidProperties_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"density") ) { return density; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"addShape") ) { return addShape_dyn(); }
		if (HX_FIELD_EQ(inName,"remShape") ) { return remShape_dyn(); }
		if (HX_FIELD_EQ(inName,"gravityx") ) { return gravityx; }
		if (HX_FIELD_EQ(inName,"gravityy") ) { return gravityy; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viscosity") ) { return viscosity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getgravity") ) { return getgravity_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"feature_cons") ) { return feature_cons_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_gravity") ) { return wrap_gravity; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gravity_validate") ) { return gravity_validate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"gravity_invalidate") ) { return gravity_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_FluidProperties_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_FluidProperties_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::FluidProperties >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { density=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityx") ) { gravityx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityy") ) { gravityy=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viscosity") ) { viscosity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_gravity") ) { wrap_gravity=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_FluidProperties_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return true; }
	}
	return false;
}

void ZPP_FluidProperties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"));
	outFields->push(HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07"));
	outFields->push(HX_HCSTRING("viscosity","\x27","\x46","\x3e","\x2a"));
	outFields->push(HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42"));
	outFields->push(HX_HCSTRING("gravityx","\x6a","\x16","\x81","\x87"));
	outFields->push(HX_HCSTRING("gravityy","\x6b","\x16","\x81","\x87"));
	outFields->push(HX_HCSTRING("wrap_gravity","\x99","\xdb","\x94","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_FluidProperties*/ ,(int)offsetof(ZPP_FluidProperties_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_FluidProperties_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*::nape::phys::FluidProperties*/ ,(int)offsetof(ZPP_FluidProperties_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Shape*/ ,(int)offsetof(ZPP_FluidProperties_obj,shapes),HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_FluidProperties_obj,wrap_shapes),HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidProperties_obj,viscosity),HX_HCSTRING("viscosity","\x27","\x46","\x3e","\x2a")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidProperties_obj,density),HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidProperties_obj,gravityx),HX_HCSTRING("gravityx","\x6a","\x16","\x81","\x87")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidProperties_obj,gravityy),HX_HCSTRING("gravityy","\x6b","\x16","\x81","\x87")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_FluidProperties_obj,wrap_gravity),HX_HCSTRING("wrap_gravity","\x99","\xdb","\x94","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_FluidProperties*/ ,(void *) &ZPP_FluidProperties_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"),
	HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07"),
	HX_HCSTRING("feature_cons","\x5a","\x4f","\x1f","\x7b"),
	HX_HCSTRING("addShape","\x40","\x09","\x7a","\xf5"),
	HX_HCSTRING("remShape","\x67","\x53","\x9f","\x84"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("viscosity","\x27","\x46","\x3e","\x2a"),
	HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42"),
	HX_HCSTRING("gravityx","\x6a","\x16","\x81","\x87"),
	HX_HCSTRING("gravityy","\x6b","\x16","\x81","\x87"),
	HX_HCSTRING("wrap_gravity","\x99","\xdb","\x94","\xca"),
	HX_HCSTRING("gravity_invalidate","\x0c","\x9f","\x82","\xbd"),
	HX_HCSTRING("gravity_validate","\xe7","\x1f","\xcd","\xf2"),
	HX_HCSTRING("getgravity","\x78","\xcc","\x0f","\xfa"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_FluidProperties_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_FluidProperties_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_FluidProperties_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_FluidProperties_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_FluidProperties_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_FluidProperties_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.phys.ZPP_FluidProperties","\x3d","\x62","\x8f","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_FluidProperties_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_FluidProperties_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_FluidProperties_obj >;
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

void ZPP_FluidProperties_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace phys
