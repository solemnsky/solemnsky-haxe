#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void Arbiter_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.Arbiter","new",0xe76def27,"nape.dynamics.Arbiter.new","nape/dynamics/Arbiter.hx",180,0x42fd8209)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
	HX_STACK_LINE(363)
	bool tmp = ::zpp_nape::dynamics::ZPP_Arbiter_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	if ((tmp1)){
		HX_STACK_LINE(365)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot instantiate Arbiter derp!","\x46","\xe5","\xf3","\x4a"));
	}
}
;
	return null();
}

//Arbiter_obj::~Arbiter_obj() { }

Dynamic Arbiter_obj::__CreateEmpty() { return  new Arbiter_obj; }
hx::ObjectPtr< Arbiter_obj > Arbiter_obj::__new()
{  hx::ObjectPtr< Arbiter_obj > _result_ = new Arbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Arbiter_obj > _result_ = new Arbiter_obj();
	_result_->__construct();
	return _result_;}

bool Arbiter_obj::get_isSleeping( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_isSleeping",0x2704cb17,"nape.dynamics.Arbiter.get_isSleeping","nape/dynamics/Arbiter.hx",192,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	if ((tmp2)){
		HX_STACK_LINE(194)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(196)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	bool tmp4 = tmp3->sleeping;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(196)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_isSleeping,return )

::nape::dynamics::ArbiterType Arbiter_obj::get_type( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_type",0x2d419e1c,"nape.dynamics.Arbiter.get_type","nape/dynamics/Arbiter.hx",203,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	Array< ::Dynamic > tmp = ::zpp_nape::dynamics::ZPP_Arbiter_obj::types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	int tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	::nape::dynamics::ArbiterType tmp3 = tmp->__get(tmp2).StaticCast< ::nape::dynamics::ArbiterType >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_type,return )

bool Arbiter_obj::isCollisionArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","isCollisionArbiter",0xe3eed6ba,"nape.dynamics.Arbiter.isCollisionArbiter","nape/dynamics/Arbiter.hx",214,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(215)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isCollisionArbiter,return )

bool Arbiter_obj::isFluidArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","isFluidArbiter",0x41f1faa2,"nape.dynamics.Arbiter.isFluidArbiter","nape/dynamics/Arbiter.hx",225,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(226)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isFluidArbiter,return )

bool Arbiter_obj::isSensorArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","isSensorArbiter",0x9140c7cc,"nape.dynamics.Arbiter.isSensorArbiter","nape/dynamics/Arbiter.hx",236,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(237)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(237)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isSensorArbiter,return )

::nape::dynamics::CollisionArbiter Arbiter_obj::get_collisionArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_collisionArbiter",0x65c547f9,"nape.dynamics.Arbiter.get_collisionArbiter","nape/dynamics/Arbiter.hx",246,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(247)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(247)
	::nape::dynamics::CollisionArbiter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(247)
	if ((tmp3)){
		HX_STACK_LINE(247)
		::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(247)
		tmp4 = tmp5->colarb->outer_zn;
	}
	else{
		HX_STACK_LINE(247)
		tmp4 = null();
	}
	HX_STACK_LINE(247)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_collisionArbiter,return )

::nape::dynamics::FluidArbiter Arbiter_obj::get_fluidArbiter( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_fluidArbiter",0xff492061,"nape.dynamics.Arbiter.get_fluidArbiter","nape/dynamics/Arbiter.hx",256,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(257)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(257)
	::nape::dynamics::FluidArbiter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(257)
	if ((tmp3)){
		HX_STACK_LINE(257)
		::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		tmp4 = tmp5->fluidarb->outer_zn;
	}
	else{
		HX_STACK_LINE(257)
		tmp4 = null();
	}
	HX_STACK_LINE(257)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_fluidArbiter,return )

::nape::shape::Shape Arbiter_obj::get_shape1( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_shape1",0xfd6da1d2,"nape.dynamics.Arbiter.get_shape1","nape/dynamics/Arbiter.hx",266,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	if ((tmp2)){
		HX_STACK_LINE(268)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(270)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(270)
	int tmp4 = tmp3->ws1->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(270)
	::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(270)
	int tmp6 = tmp5->ws2->id;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(270)
	bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(270)
	::nape::shape::Shape tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(270)
	if ((tmp7)){
		HX_STACK_LINE(270)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(270)
		tmp8 = tmp9->ws2->outer;
	}
	else{
		HX_STACK_LINE(270)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(270)
		tmp8 = tmp9->ws1->outer;
	}
	HX_STACK_LINE(270)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_shape1,return )

::nape::shape::Shape Arbiter_obj::get_shape2( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_shape2",0xfd6da1d3,"nape.dynamics.Arbiter.get_shape2","nape/dynamics/Arbiter.hx",279,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(281)
	if ((tmp2)){
		HX_STACK_LINE(281)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(283)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(283)
	int tmp4 = tmp3->ws1->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(283)
	::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(283)
	int tmp6 = tmp5->ws2->id;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(283)
	bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(283)
	::nape::shape::Shape tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(283)
	if ((tmp7)){
		HX_STACK_LINE(283)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(283)
		tmp8 = tmp9->ws1->outer;
	}
	else{
		HX_STACK_LINE(283)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(283)
		tmp8 = tmp9->ws2->outer;
	}
	HX_STACK_LINE(283)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_shape2,return )

::nape::phys::Body Arbiter_obj::get_body1( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_body1",0x084d1dad,"nape.dynamics.Arbiter.get_body1","nape/dynamics/Arbiter.hx",292,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	if ((tmp2)){
		HX_STACK_LINE(294)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(296)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(296)
	int tmp4 = tmp3->ws1->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(296)
	::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(296)
	int tmp6 = tmp5->ws2->id;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(296)
	bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(296)
	::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(296)
	if ((tmp7)){
		HX_STACK_LINE(296)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(296)
		tmp8 = tmp9->b2->outer;
	}
	else{
		HX_STACK_LINE(296)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(296)
		tmp8 = tmp9->b1->outer;
	}
	HX_STACK_LINE(296)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_body1,return )

::nape::phys::Body Arbiter_obj::get_body2( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_body2",0x084d1dae,"nape.dynamics.Arbiter.get_body2","nape/dynamics/Arbiter.hx",305,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(307)
	if ((tmp2)){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(309)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(309)
	int tmp4 = tmp3->ws1->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(309)
	::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(309)
	int tmp6 = tmp5->ws2->id;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(309)
	bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(309)
	::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(309)
	if ((tmp7)){
		HX_STACK_LINE(309)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(309)
		tmp8 = tmp9->b1->outer;
	}
	else{
		HX_STACK_LINE(309)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(309)
		tmp8 = tmp9->b2->outer;
	}
	HX_STACK_LINE(309)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_body2,return )

::nape::callbacks::PreFlag Arbiter_obj::get_state( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","get_state",0xd568c06f,"nape.dynamics.Arbiter.get_state","nape/dynamics/Arbiter.hx",323,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(325)
	if ((tmp2)){
		HX_STACK_LINE(325)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(327)
	::nape::callbacks::PreFlag tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	{
		HX_STACK_LINE(327)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(327)
		int _g = tmp4->immState;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			int x = _g;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(328)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(328)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(328)
			int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(328)
			int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(328)
			bool tmp9 = (tmp5 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(328)
			if ((tmp9)){
				HX_STACK_LINE(328)
				::nape::callbacks::PreFlag tmp10 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(328)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(328)
				if ((tmp11)){
					HX_STACK_LINE(328)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(328)
					::nape::callbacks::PreFlag tmp12 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(328)
					::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = tmp12;
					HX_STACK_LINE(328)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(328)
				tmp3 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
			}
			else{
				HX_STACK_LINE(327)
				int x1 = _g;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(327)
				int tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(327)
				switch( (int)(tmp10)){
					case (int)1: {
						HX_STACK_LINE(329)
						::nape::callbacks::PreFlag tmp11 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(329)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(329)
						if ((tmp12)){
							HX_STACK_LINE(329)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(329)
							::nape::callbacks::PreFlag tmp13 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(329)
							::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = tmp13;
							HX_STACK_LINE(329)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(329)
						tmp3 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
					}
					;break;
					default: {
						HX_STACK_LINE(330)
						int tmp11 = x1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(330)
						int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_IGNORE;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(330)
						int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(330)
						int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(330)
						bool tmp15 = (tmp11 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(330)
						if ((tmp15)){
							HX_STACK_LINE(330)
							::nape::callbacks::PreFlag tmp16 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(330)
							bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(330)
							if ((tmp17)){
								HX_STACK_LINE(330)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(330)
								::nape::callbacks::PreFlag tmp18 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(330)
								::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = tmp18;
								HX_STACK_LINE(330)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(330)
							tmp3 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
						}
						else{
							HX_STACK_LINE(331)
							::nape::callbacks::PreFlag tmp16 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(331)
							bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(331)
							if ((tmp17)){
								HX_STACK_LINE(331)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(331)
								::nape::callbacks::PreFlag tmp18 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(331)
								::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = tmp18;
								HX_STACK_LINE(331)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(331)
							tmp3 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(327)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_state,return )

::nape::geom::Vec3 Arbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.Arbiter","totalImpulse",0xb05135aa,"nape.dynamics.Arbiter.totalImpulse","nape/dynamics/Arbiter.hx",350,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(352)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		if ((tmp2)){
			HX_STACK_LINE(352)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(355)
		bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(355)
		if ((tmp4)){
			HX_STACK_LINE(355)
			::nape::phys::Body tmp6 = body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(355)
			::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(355)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(355)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(355)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(355)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(355)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(355)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(355)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(355)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(355)
				if ((tmp18)){
					HX_STACK_LINE(355)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(355)
				int tmp22 = tmp21->ws1->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(355)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(355)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(355)
				int tmp28 = tmp27->ws2->id;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(355)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(355)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(355)
				bool tmp31 = (tmp24 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(355)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(355)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(355)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(355)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(355)
				if ((tmp35)){
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(355)
					::nape::phys::Body tmp39 = tmp38->b2->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(355)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(355)
					tmp7 = tmp40;
				}
				else{
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(355)
					::nape::phys::Body tmp39 = tmp38->b1->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(355)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(355)
					tmp7 = tmp40;
				}
			}
			HX_STACK_LINE(355)
			tmp5 = (tmp6 != tmp7);
		}
		else{
			HX_STACK_LINE(355)
			tmp5 = false;
		}
		HX_STACK_LINE(355)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(355)
		if ((tmp5)){
			HX_STACK_LINE(355)
			::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(355)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(355)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(355)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(355)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(355)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(355)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(355)
				if ((tmp15)){
					HX_STACK_LINE(355)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(355)
				int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(355)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(355)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(355)
				int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(355)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(355)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(355)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(355)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(355)
				if ((tmp26)){
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(355)
					::nape::phys::Body tmp29 = tmp28->b1->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(355)
					tmp8 = tmp29;
				}
				else{
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(355)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(355)
					::nape::phys::Body tmp29 = tmp28->b2->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(355)
					tmp8 = tmp29;
				}
			}
			HX_STACK_LINE(355)
			tmp6 = (tmp7 != tmp8);
		}
		else{
			HX_STACK_LINE(355)
			tmp6 = false;
		}
		HX_STACK_LINE(355)
		if ((tmp6)){
			HX_STACK_LINE(355)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter does not relate to body","\x2f","\xf6","\x45","\x99"));
		}
		HX_STACK_LINE(357)
		::nape::geom::Vec3 tmp7 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(357)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Arbiter_obj,totalImpulse,return )

::String Arbiter_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.Arbiter","toString",0x98ecc085,"nape.dynamics.Arbiter.toString","nape/dynamics/Arbiter.hx",372,0x42fd8209)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(373)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(373)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(373)
	if ((tmp3)){
		HX_STACK_LINE(373)
		tmp4 = HX_HCSTRING("CollisionArbiter","\xb7","\xed","\x02","\xe4");
	}
	else{
		HX_STACK_LINE(374)
		::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(374)
		int tmp6 = tmp5->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(374)
		int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(374)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(374)
		if ((tmp8)){
			HX_STACK_LINE(374)
			tmp4 = HX_HCSTRING("FluidArbiter","\x1f","\x8f","\x95","\xed");
		}
		else{
			HX_STACK_LINE(375)
			tmp4 = HX_HCSTRING("SensorArbiter","\xaf","\x20","\xbf","\x14");
		}
	}
	HX_STACK_LINE(373)
	::String ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(378)
	::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(378)
	bool tmp6 = tmp5->cleared;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(378)
	if ((tmp6)){
		HX_STACK_LINE(378)
		::String tmp7 = (ret + HX_HCSTRING("(object-pooled)","\xe8","\x46","\x65","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(378)
		return tmp7;
	}
	else{
		HX_STACK_LINE(379)
		::String tmp7 = (ret + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(379)
		::nape::shape::Shape tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(379)
			bool tmp10 = tmp9->active;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(379)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(379)
			if ((tmp11)){
				HX_STACK_LINE(379)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
			}
			HX_STACK_LINE(379)
			::zpp_nape::dynamics::ZPP_Arbiter tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(379)
			int tmp13 = tmp12->ws1->id;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(379)
			::zpp_nape::dynamics::ZPP_Arbiter tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(379)
			int tmp15 = tmp14->ws2->id;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(379)
			bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(379)
			if ((tmp16)){
				HX_STACK_LINE(379)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(379)
				tmp8 = tmp17->ws2->outer;
			}
			else{
				HX_STACK_LINE(379)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(379)
				tmp8 = tmp17->ws1->outer;
			}
		}
		HX_STACK_LINE(379)
		::String tmp9 = tmp8->toString();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(379)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(379)
		::String tmp11 = (tmp10 + HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(379)
		::nape::shape::Shape tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::zpp_nape::dynamics::ZPP_Arbiter tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(379)
			bool tmp14 = tmp13->active;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(379)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(379)
			if ((tmp15)){
				HX_STACK_LINE(379)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
			}
			HX_STACK_LINE(379)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(379)
			int tmp17 = tmp16->ws1->id;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(379)
			::zpp_nape::dynamics::ZPP_Arbiter tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(379)
			int tmp19 = tmp18->ws2->id;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(379)
			bool tmp20 = (tmp17 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(379)
			if ((tmp20)){
				HX_STACK_LINE(379)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(379)
				tmp12 = tmp21->ws1->outer;
			}
			else{
				HX_STACK_LINE(379)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(379)
				tmp12 = tmp21->ws2->outer;
			}
		}
		HX_STACK_LINE(379)
		::String tmp13 = tmp12->toString();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(379)
		::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(379)
		::String tmp15 = (tmp14 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(379)
		::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(379)
		int tmp17 = tmp16->type;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(379)
		int tmp18 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(379)
		bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(379)
		::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(379)
		if ((tmp19)){
			HX_STACK_LINE(379)
			Array< ::String > tmp21 = Array_obj< ::String >::__new().Add(HX_HCSTRING("SD","\x91","\x48","\x00","\x00")).Add(HX_HCSTRING("DD","\x80","\x3b","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(379)
			::zpp_nape::dynamics::ZPP_Arbiter tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(379)
			bool tmp23 = tmp22->colarb->stat;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(379)
			int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(379)
			if ((tmp23)){
				HX_STACK_LINE(379)
				tmp24 = (int)0;
			}
			else{
				HX_STACK_LINE(379)
				tmp24 = (int)1;
			}
			HX_STACK_LINE(379)
			::String tmp25 = tmp21->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(379)
			::String tmp26 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(379)
			tmp20 = (tmp26 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(379)
			tmp20 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(379)
		::String tmp21 = (tmp15 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(379)
		::String tmp22 = (tmp21 + HX_HCSTRING("<-","\x71","\x34","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(379)
		::nape::callbacks::PreFlag tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::zpp_nape::dynamics::ZPP_Arbiter tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(379)
			bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(379)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(379)
			if ((tmp26)){
				HX_STACK_LINE(379)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
			}
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(379)
				int _g = tmp27->immState;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(379)
				{
					HX_STACK_LINE(379)
					int x = _g;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(379)
					int tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(379)
					int tmp29 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(379)
					int tmp30 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(379)
					int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(379)
					bool tmp32 = (tmp28 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(379)
					if ((tmp32)){
						HX_STACK_LINE(379)
						::nape::callbacks::PreFlag tmp33 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(379)
						bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(379)
						if ((tmp34)){
							HX_STACK_LINE(379)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(379)
							::nape::callbacks::PreFlag tmp35 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(379)
							::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = tmp35;
							HX_STACK_LINE(379)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(379)
						tmp23 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
					}
					else{
						HX_STACK_LINE(379)
						int x1 = _g;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(379)
						int tmp33 = _g;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(379)
						switch( (int)(tmp33)){
							case (int)1: {
								HX_STACK_LINE(379)
								::nape::callbacks::PreFlag tmp34 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(379)
								bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(379)
								if ((tmp35)){
									HX_STACK_LINE(379)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(379)
									::nape::callbacks::PreFlag tmp36 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(379)
									::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = tmp36;
									HX_STACK_LINE(379)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(379)
								tmp23 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
							}
							;break;
							default: {
								HX_STACK_LINE(379)
								int tmp34 = x1;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(379)
								int tmp35 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_IGNORE;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(379)
								int tmp36 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(379)
								int tmp37 = (int(tmp35) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(379)
								bool tmp38 = (tmp34 == tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(379)
								if ((tmp38)){
									HX_STACK_LINE(379)
									::nape::callbacks::PreFlag tmp39 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(379)
									bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(379)
									if ((tmp40)){
										HX_STACK_LINE(379)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(379)
										::nape::callbacks::PreFlag tmp41 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(379)
										::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = tmp41;
										HX_STACK_LINE(379)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(379)
									tmp23 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
								}
								else{
									HX_STACK_LINE(379)
									::nape::callbacks::PreFlag tmp39 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(379)
									bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(379)
									if ((tmp40)){
										HX_STACK_LINE(379)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(379)
										::nape::callbacks::PreFlag tmp41 = ::nape::callbacks::PreFlag_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(379)
										::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = tmp41;
										HX_STACK_LINE(379)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(379)
									tmp23 = ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(379)
		::String tmp24 = tmp23->toString();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(379)
		::String tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(379)
		return tmp25;
	}
	HX_STACK_LINE(378)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,toString,return )


Arbiter_obj::Arbiter_obj()
{
}

void Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Arbiter);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Arbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return get_body2(); }
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return get_state(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { if (inCallProp == hx::paccAlways) return get_shape1(); }
		if (HX_FIELD_EQ(inName,"shape2") ) { if (inCallProp == hx::paccAlways) return get_shape2(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isSleeping") ) { if (inCallProp == hx::paccAlways) return get_isSleeping(); }
		if (HX_FIELD_EQ(inName,"get_shape1") ) { return get_shape1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shape2") ) { return get_shape2_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fluidArbiter") ) { if (inCallProp == hx::paccAlways) return get_fluidArbiter(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"isFluidArbiter") ) { return isFluidArbiter_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isSensorArbiter") ) { return isSensorArbiter_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collisionArbiter") ) { if (inCallProp == hx::paccAlways) return get_collisionArbiter(); }
		if (HX_FIELD_EQ(inName,"get_fluidArbiter") ) { return get_fluidArbiter_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isCollisionArbiter") ) { return isCollisionArbiter_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_collisionArbiter") ) { return get_collisionArbiter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Arbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Arbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("isSleeping","\x35","\x6a","\x42","\x8b"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("collisionArbiter","\x97","\x11","\x08","\xca"));
	outFields->push(HX_HCSTRING("fluidArbiter","\xff","\x42","\x83","\x25"));
	outFields->push(HX_HCSTRING("shape1","\xf0","\xd9","\x29","\x1d"));
	outFields->push(HX_HCSTRING("shape2","\xf1","\xd9","\x29","\x1d"));
	outFields->push(HX_HCSTRING("body1","\x4f","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body2","\x50","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(Arbiter_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_isSleeping","\x7e","\xf2","\x37","\x01"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("isCollisionArbiter","\xa1","\x3d","\x87","\x42"),
	HX_HCSTRING("isFluidArbiter","\x09","\x22","\x25","\x1c"),
	HX_HCSTRING("isSensorArbiter","\x85","\x1a","\xd0","\xa3"),
	HX_HCSTRING("get_collisionArbiter","\xa0","\x76","\x72","\xe8"),
	HX_HCSTRING("get_fluidArbiter","\x88","\x2f","\x22","\x2a"),
	HX_HCSTRING("get_shape1","\xb9","\x49","\xb1","\x0d"),
	HX_HCSTRING("get_shape2","\xba","\x49","\xb1","\x0d"),
	HX_HCSTRING("get_body1","\xa6","\x2f","\x99","\xfa"),
	HX_HCSTRING("get_body2","\xa7","\x2f","\x99","\xfa"),
	HX_HCSTRING("get_state","\x68","\xd2","\xb4","\xc7"),
	HX_HCSTRING("totalImpulse","\x51","\xe5","\xbb","\x16"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Arbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Arbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class Arbiter_obj::__mClass;

void Arbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.Arbiter","\xb5","\xcf","\x97","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Arbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Arbiter_obj >;
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
} // end namespace dynamics
