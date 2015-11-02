#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace dynamics{

Void FluidArbiter_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.FluidArbiter","new",0x49116625,"nape.dynamics.FluidArbiter.new","nape/dynamics/FluidArbiter.hx",316,0xd522c90b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(318)
	bool tmp = ::zpp_nape::dynamics::ZPP_Arbiter_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	if ((tmp1)){
		HX_STACK_LINE(318)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot instantiate FluidArbiter derp!","\x06","\x89","\x0e","\x27"));
	}
	HX_STACK_LINE(320)
	super::__construct();
}
;
	return null();
}

//FluidArbiter_obj::~FluidArbiter_obj() { }

Dynamic FluidArbiter_obj::__CreateEmpty() { return  new FluidArbiter_obj; }
hx::ObjectPtr< FluidArbiter_obj > FluidArbiter_obj::__new()
{  hx::ObjectPtr< FluidArbiter_obj > _result_ = new FluidArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FluidArbiter_obj > _result_ = new FluidArbiter_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec2 FluidArbiter_obj::get_position( ){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","get_position",0x08ca5e4d,"nape.dynamics.FluidArbiter.get_position","nape/dynamics/FluidArbiter.hx",185,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	if ((tmp2)){
		HX_STACK_LINE(187)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(189)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	::nape::geom::Vec2 tmp4 = tmp3->fluidarb->wrap_position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(189)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(189)
	if ((tmp5)){
		HX_STACK_LINE(189)
		::zpp_nape::dynamics::ZPP_Arbiter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		tmp6->fluidarb->getposition();
	}
	HX_STACK_LINE(190)
	::zpp_nape::dynamics::ZPP_Arbiter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(190)
	::nape::geom::Vec2 tmp7 = tmp6->fluidarb->wrap_position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(190)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidArbiter_obj,get_position,return )

::nape::geom::Vec2 FluidArbiter_obj::set_position( ::nape::geom::Vec2 position){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","set_position",0x1dc381c1,"nape.dynamics.FluidArbiter.set_position","nape/dynamics/FluidArbiter.hx",192,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(195)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		bool tmp1 = tmp->fluidarb->_mutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		if ((tmp2)){
			HX_STACK_LINE(195)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter is mutable only within a pre-handler","\x35","\x62","\xcf","\x81"));
		}
		HX_STACK_LINE(198)
		bool tmp3 = (position == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		if ((tmp3)){
			HX_STACK_LINE(198)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: FluidArbiter::position cannot be null","\xb1","\xf2","\x6d","\x24"));
		}
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				bool tmp6 = tmp5->active;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				if ((tmp7)){
					HX_STACK_LINE(200)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(200)
				::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				::nape::geom::Vec2 tmp9 = tmp8->fluidarb->wrap_position;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(200)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(200)
				if ((tmp10)){
					HX_STACK_LINE(200)
					::zpp_nape::dynamics::ZPP_Arbiter tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(200)
					tmp11->fluidarb->getposition();
				}
				HX_STACK_LINE(200)
				::zpp_nape::dynamics::ZPP_Arbiter tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(200)
				tmp4 = tmp11->fluidarb->wrap_position;
			}
			HX_STACK_LINE(200)
			::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				if ((tmp5)){
					HX_STACK_LINE(200)
					tmp6 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(200)
					tmp6 = false;
				}
				HX_STACK_LINE(200)
				if ((tmp6)){
					HX_STACK_LINE(200)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(200)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(200)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				bool tmp5 = (position != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				if ((tmp5)){
					HX_STACK_LINE(200)
					tmp6 = position->zpp_disp;
				}
				else{
					HX_STACK_LINE(200)
					tmp6 = false;
				}
				HX_STACK_LINE(200)
				if ((tmp6)){
					HX_STACK_LINE(200)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(200)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(200)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(200)
				bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				if ((tmp5)){
					HX_STACK_LINE(200)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(200)
				bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				if ((tmp6)){
					HX_STACK_LINE(200)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(200)
			bool tmp5 = (position == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			if ((tmp5)){
				HX_STACK_LINE(200)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(200)
			::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					bool tmp8 = (position != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(200)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					if ((tmp8)){
						HX_STACK_LINE(200)
						tmp9 = position->zpp_disp;
					}
					else{
						HX_STACK_LINE(200)
						tmp9 = false;
					}
					HX_STACK_LINE(200)
					if ((tmp9)){
						HX_STACK_LINE(200)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(200)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(200)
						HX_STACK_DO_THROW(tmp11);
					}
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(200)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(200)
						if ((tmp10)){
							HX_STACK_LINE(200)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(200)
					tmp7 = position->zpp_inner->x;
				}
				HX_STACK_LINE(200)
				Float x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(200)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					bool tmp9 = (position != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(200)
					if ((tmp9)){
						HX_STACK_LINE(200)
						tmp10 = position->zpp_disp;
					}
					else{
						HX_STACK_LINE(200)
						tmp10 = false;
					}
					HX_STACK_LINE(200)
					if ((tmp10)){
						HX_STACK_LINE(200)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(200)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(200)
						HX_STACK_DO_THROW(tmp12);
					}
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(200)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(200)
						if ((tmp11)){
							HX_STACK_LINE(200)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(200)
					tmp8 = position->zpp_inner->y;
				}
				HX_STACK_LINE(200)
				Float y = tmp8;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(200)
					if ((tmp9)){
						HX_STACK_LINE(200)
						tmp10 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(200)
						tmp10 = false;
					}
					HX_STACK_LINE(200)
					if ((tmp10)){
						HX_STACK_LINE(200)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(200)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(200)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					if ((tmp9)){
						HX_STACK_LINE(200)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(200)
					bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(200)
					if ((tmp10)){
						HX_STACK_LINE(200)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(200)
				bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(200)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(200)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(200)
				if ((tmp10)){
					HX_STACK_LINE(200)
					tmp11 = (y != y);
				}
				else{
					HX_STACK_LINE(200)
					tmp11 = true;
				}
				HX_STACK_LINE(200)
				if ((tmp11)){
					HX_STACK_LINE(200)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(200)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(200)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(200)
						if ((tmp13)){
							HX_STACK_LINE(200)
							tmp14 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(200)
							tmp14 = false;
						}
						HX_STACK_LINE(200)
						if ((tmp14)){
							HX_STACK_LINE(200)
							::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(200)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(200)
							HX_STACK_DO_THROW(tmp16);
						}
					}
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(200)
						bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(200)
						if ((tmp13)){
							HX_STACK_LINE(200)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(200)
					tmp12 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(200)
				Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(200)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(200)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(200)
				if ((tmp14)){
					HX_STACK_LINE(200)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							bool tmp17 = (_this != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(200)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(200)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(200)
							bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(200)
							if ((tmp20)){
								HX_STACK_LINE(200)
								tmp19 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(200)
								tmp19 = false;
							}
							HX_STACK_LINE(200)
							bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(200)
							if ((tmp21)){
								HX_STACK_LINE(200)
								::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(200)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(200)
								::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(200)
								::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(200)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(200)
								HX_STACK_DO_THROW(tmp26);
							}
						}
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(200)
							bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(200)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(200)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(200)
							if ((tmp19)){
								HX_STACK_LINE(200)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(200)
						Float tmp17 = _this->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(200)
						tmp16 = tmp17;
					}
					HX_STACK_LINE(200)
					Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(200)
					tmp15 = (tmp16 == tmp17);
				}
				else{
					HX_STACK_LINE(200)
					tmp15 = false;
				}
				HX_STACK_LINE(200)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(200)
				if ((tmp16)){
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(200)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(200)
						{
						}
					}
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(200)
						bool tmp17 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(200)
						if ((tmp17)){
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(200)
							_this1->_invalidate(tmp18);
						}
					}
				}
				HX_STACK_LINE(200)
				tmp6 = _this;
			}
			HX_STACK_LINE(200)
			::nape::geom::Vec2 ret = tmp6;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				tmp7 = position->zpp_inner->weak;
				HX_STACK_LINE(200)
				if ((tmp7)){
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							bool tmp8 = (position != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(200)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(200)
							if ((tmp8)){
								HX_STACK_LINE(200)
								tmp9 = position->zpp_disp;
							}
							else{
								HX_STACK_LINE(200)
								tmp9 = false;
							}
							HX_STACK_LINE(200)
							if ((tmp9)){
								HX_STACK_LINE(200)
								::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(200)
								::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(200)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(200)
							bool tmp8 = _this1->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(200)
							if ((tmp8)){
								HX_STACK_LINE(200)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(200)
							bool tmp9 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(200)
							if ((tmp9)){
								HX_STACK_LINE(200)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(200)
						bool tmp8 = position->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(200)
						if ((tmp8)){
							HX_STACK_LINE(200)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(200)
						position->zpp_inner->outer = null();
						HX_STACK_LINE(200)
						position->zpp_inner = null();
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(200)
							o->zpp_pool = null();
							HX_STACK_LINE(200)
							::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(200)
							bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(200)
							if ((tmp10)){
								HX_STACK_LINE(200)
								::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(200)
								tmp11->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(200)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(200)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(200)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(200)
							{
								HX_STACK_LINE(200)
								bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(200)
								if ((tmp9)){
									HX_STACK_LINE(200)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(200)
									o->outer = null();
								}
								HX_STACK_LINE(200)
								o->_isimmutable = null();
								HX_STACK_LINE(200)
								o->_validate = null();
								HX_STACK_LINE(200)
								o->_invalidate = null();
							}
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(200)
							o->next = tmp9;
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(200)
					true;
				}
				else{
					HX_STACK_LINE(200)
					false;
				}
			}
			HX_STACK_LINE(200)
			ret;
		}
	}
	HX_STACK_LINE(202)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		if ((tmp3)){
			HX_STACK_LINE(202)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(202)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		::nape::geom::Vec2 tmp5 = tmp4->fluidarb->wrap_position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		if ((tmp6)){
			HX_STACK_LINE(202)
			::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			tmp7->fluidarb->getposition();
		}
		HX_STACK_LINE(202)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		tmp = tmp7->fluidarb->wrap_position;
	}
	HX_STACK_LINE(202)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,set_position,return )

Float FluidArbiter_obj::get_overlap( ){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","get_overlap",0xd2ab0663,"nape.dynamics.FluidArbiter.get_overlap","nape/dynamics/FluidArbiter.hx",214,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	if ((tmp2)){
		HX_STACK_LINE(216)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(218)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	Float tmp4 = tmp3->fluidarb->overlap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidArbiter_obj,get_overlap,return )

Float FluidArbiter_obj::set_overlap( Float overlap){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","set_overlap",0xdd180d6f,"nape.dynamics.FluidArbiter.set_overlap","nape/dynamics/FluidArbiter.hx",220,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(overlap,"overlap")
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(223)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		bool tmp1 = tmp->fluidarb->_mutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		if ((tmp2)){
			HX_STACK_LINE(223)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter is mutable only within a pre-handler","\x35","\x62","\xcf","\x81"));
		}
		HX_STACK_LINE(226)
		bool tmp3 = (overlap != overlap);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		if ((tmp3)){
			HX_STACK_LINE(226)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: FluidArbiter::overlap cannot be NaN","\x55","\x07","\x76","\x53"));
		}
		HX_STACK_LINE(229)
		bool tmp4 = (overlap <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(229)
		if ((tmp5)){
			HX_STACK_LINE(229)
			Float tmp7 = overlap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(229)
			Float tmp8 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(229)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(229)
			tmp6 = (tmp7 == tmp9);
		}
		else{
			HX_STACK_LINE(229)
			tmp6 = true;
		}
		HX_STACK_LINE(229)
		if ((tmp6)){
			HX_STACK_LINE(229)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: FluidArbiter::overlap must be strictly positive and non infinite","\x79","\x3e","\xc6","\xe6"));
		}
		HX_STACK_LINE(231)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		tmp7->fluidarb->overlap = overlap;
	}
	HX_STACK_LINE(233)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		if ((tmp3)){
			HX_STACK_LINE(233)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(233)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		tmp = tmp4->fluidarb->overlap;
	}
	HX_STACK_LINE(233)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,set_overlap,return )

::nape::geom::Vec3 FluidArbiter_obj::buoyancyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","buoyancyImpulse",0x456d50ba,"nape.dynamics.FluidArbiter.buoyancyImpulse","nape/dynamics/FluidArbiter.hx",246,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(248)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	if ((tmp2)){
		HX_STACK_LINE(248)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(251)
	bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(251)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(251)
	if ((tmp4)){
		HX_STACK_LINE(251)
		::nape::phys::Body tmp6 = body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(251)
			bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(251)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(251)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(251)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(251)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(251)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(251)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(251)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(251)
			if ((tmp18)){
				HX_STACK_LINE(251)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
			}
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(251)
			int tmp22 = tmp21->ws1->id;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(251)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(251)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(251)
			int tmp28 = tmp27->ws2->id;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(251)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(251)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(251)
			bool tmp31 = (tmp24 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(251)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(251)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(251)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(251)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(251)
			if ((tmp35)){
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(251)
				::nape::phys::Body tmp39 = tmp38->b2->outer;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(251)
				::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(251)
				tmp7 = tmp40;
			}
			else{
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(251)
				::nape::phys::Body tmp39 = tmp38->b1->outer;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(251)
				::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(251)
				tmp7 = tmp40;
			}
		}
		HX_STACK_LINE(251)
		tmp5 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(251)
		tmp5 = false;
	}
	HX_STACK_LINE(251)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(251)
	if ((tmp5)){
		HX_STACK_LINE(251)
		::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(251)
		::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(251)
			bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(251)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(251)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(251)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(251)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(251)
			if ((tmp15)){
				HX_STACK_LINE(251)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
			}
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(251)
			int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(251)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(251)
			::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(251)
			int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(251)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(251)
			bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(251)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(251)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(251)
			if ((tmp26)){
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(251)
				::nape::phys::Body tmp29 = tmp28->b1->outer;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(251)
				tmp8 = tmp29;
			}
			else{
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(251)
				::nape::phys::Body tmp29 = tmp28->b2->outer;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(251)
				tmp8 = tmp29;
			}
		}
		HX_STACK_LINE(251)
		tmp6 = (tmp7 != tmp8);
	}
	else{
		HX_STACK_LINE(251)
		tmp6 = false;
	}
	HX_STACK_LINE(251)
	if ((tmp6)){
		HX_STACK_LINE(251)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter does not relate to body","\x2f","\xf6","\x45","\x99"));
	}
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_FluidArbiter farb = tmp7->fluidarb;		HX_STACK_VAR(farb,"farb");
	HX_STACK_LINE(254)
	bool tmp8 = (body == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(254)
	if ((tmp8)){
		HX_STACK_LINE(255)
		Float tmp9 = farb->buoyx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(255)
		Float tmp10 = farb->buoyy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(255)
		::nape::geom::Vec3 tmp11 = ::nape::geom::Vec3_obj::get(tmp9,tmp10,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(255)
		return tmp11;
	}
	else{
		HX_STACK_LINE(257)
		::zpp_nape::phys::ZPP_Body tmp9 = body->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(257)
		::zpp_nape::dynamics::ZPP_Arbiter tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(257)
		::zpp_nape::phys::ZPP_Body tmp11 = tmp10->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(257)
		bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(257)
		if ((tmp12)){
			HX_STACK_LINE(258)
			Float tmp13 = farb->buoyx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(258)
			Float tmp14 = farb->buoyy;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(258)
			Float tmp15 = (farb->buoyy * farb->r2x);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(258)
			Float tmp16 = (farb->buoyx * farb->r2y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(258)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(258)
			::nape::geom::Vec3 tmp18 = ::nape::geom::Vec3_obj::get(tmp13,tmp14,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(258)
			return tmp18;
		}
		else{
			HX_STACK_LINE(261)
			Float tmp13 = farb->buoyx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			Float tmp15 = farb->buoyy;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(261)
			Float tmp17 = (farb->buoyy * farb->r1x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(261)
			Float tmp18 = (farb->buoyx * farb->r1y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(261)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(261)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(261)
			::nape::geom::Vec3 tmp21 = ::nape::geom::Vec3_obj::get(tmp14,tmp16,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(261)
			return tmp21;
		}
	}
	HX_STACK_LINE(254)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,buoyancyImpulse,return )

::nape::geom::Vec3 FluidArbiter_obj::dragImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","dragImpulse",0xc77ed5e6,"nape.dynamics.FluidArbiter.dragImpulse","nape/dynamics/FluidArbiter.hx",275,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(277)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	if ((tmp2)){
		HX_STACK_LINE(277)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(280)
	bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(280)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(280)
	if ((tmp4)){
		HX_STACK_LINE(280)
		::nape::phys::Body tmp6 = body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(280)
		::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(280)
			bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(280)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(280)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(280)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(280)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(280)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(280)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(280)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(280)
			if ((tmp18)){
				HX_STACK_LINE(280)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
			}
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(280)
			int tmp22 = tmp21->ws1->id;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(280)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(280)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(280)
			int tmp28 = tmp27->ws2->id;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(280)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(280)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(280)
			bool tmp31 = (tmp24 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(280)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(280)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(280)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(280)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(280)
			if ((tmp35)){
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(280)
				::nape::phys::Body tmp39 = tmp38->b2->outer;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(280)
				::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(280)
				tmp7 = tmp40;
			}
			else{
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(280)
				::nape::phys::Body tmp39 = tmp38->b1->outer;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(280)
				::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(280)
				tmp7 = tmp40;
			}
		}
		HX_STACK_LINE(280)
		tmp5 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(280)
		tmp5 = false;
	}
	HX_STACK_LINE(280)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(280)
	if ((tmp5)){
		HX_STACK_LINE(280)
		::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(280)
			bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(280)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(280)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(280)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(280)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(280)
			if ((tmp15)){
				HX_STACK_LINE(280)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
			}
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(280)
			int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(280)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(280)
			::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(280)
			int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(280)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(280)
			bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(280)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(280)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(280)
			if ((tmp26)){
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(280)
				::nape::phys::Body tmp29 = tmp28->b1->outer;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(280)
				tmp8 = tmp29;
			}
			else{
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(280)
				::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(280)
				::nape::phys::Body tmp29 = tmp28->b2->outer;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(280)
				tmp8 = tmp29;
			}
		}
		HX_STACK_LINE(280)
		tmp6 = (tmp7 != tmp8);
	}
	else{
		HX_STACK_LINE(280)
		tmp6 = false;
	}
	HX_STACK_LINE(280)
	if ((tmp6)){
		HX_STACK_LINE(280)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter does not relate to body","\x2f","\xf6","\x45","\x99"));
	}
	HX_STACK_LINE(282)
	::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(282)
	::zpp_nape::dynamics::ZPP_FluidArbiter farb = tmp7->fluidarb;		HX_STACK_VAR(farb,"farb");
	HX_STACK_LINE(283)
	bool tmp8 = (body == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(283)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(283)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(283)
	if ((tmp9)){
		HX_STACK_LINE(283)
		::zpp_nape::phys::ZPP_Body tmp11 = body->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(283)
		::zpp_nape::dynamics::ZPP_Arbiter tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(283)
		::zpp_nape::dynamics::ZPP_Arbiter tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(283)
		::zpp_nape::phys::ZPP_Body tmp14 = tmp13->b2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(283)
		tmp10 = (tmp11 == tmp14);
	}
	else{
		HX_STACK_LINE(283)
		tmp10 = true;
	}
	HX_STACK_LINE(283)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(283)
	if ((tmp10)){
		HX_STACK_LINE(283)
		tmp11 = (int)1;
	}
	else{
		HX_STACK_LINE(283)
		tmp11 = (int)-1;
	}
	HX_STACK_LINE(283)
	int scale = tmp11;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(284)
	Float tmp12 = (farb->dampx * scale);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(284)
	Float tmp13 = (farb->dampy * scale);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(284)
	Float tmp14 = (farb->adamp * scale);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(284)
	::nape::geom::Vec3 tmp15 = ::nape::geom::Vec3_obj::get(tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(284)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,dragImpulse,return )

::nape::geom::Vec3 FluidArbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","totalImpulse",0x9f71eeec,"nape.dynamics.FluidArbiter.totalImpulse","nape/dynamics/FluidArbiter.hx",298,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(300)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(300)
		if ((tmp2)){
			HX_STACK_LINE(300)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(303)
		bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		if ((tmp4)){
			HX_STACK_LINE(303)
			::nape::phys::Body tmp6 = body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(303)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(303)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(303)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(303)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(303)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(303)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(303)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(303)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(303)
				if ((tmp18)){
					HX_STACK_LINE(303)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(303)
				int tmp22 = tmp21->ws1->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(303)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(303)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(303)
				int tmp28 = tmp27->ws2->id;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(303)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(303)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(303)
				bool tmp31 = (tmp24 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(303)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(303)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(303)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(303)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(303)
				if ((tmp35)){
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(303)
					::nape::phys::Body tmp39 = tmp38->b2->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(303)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(303)
					tmp7 = tmp40;
				}
				else{
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(303)
					::nape::phys::Body tmp39 = tmp38->b1->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(303)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(303)
					tmp7 = tmp40;
				}
			}
			HX_STACK_LINE(303)
			tmp5 = (tmp6 != tmp7);
		}
		else{
			HX_STACK_LINE(303)
			tmp5 = false;
		}
		HX_STACK_LINE(303)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		if ((tmp5)){
			HX_STACK_LINE(303)
			::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(303)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(303)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(303)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(303)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(303)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(303)
				if ((tmp15)){
					HX_STACK_LINE(303)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(303)
				int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(303)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(303)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(303)
				int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(303)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(303)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(303)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(303)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(303)
				if ((tmp26)){
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(303)
					::nape::phys::Body tmp29 = tmp28->b1->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(303)
					tmp8 = tmp29;
				}
				else{
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(303)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(303)
					::nape::phys::Body tmp29 = tmp28->b2->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(303)
					tmp8 = tmp29;
				}
			}
			HX_STACK_LINE(303)
			tmp6 = (tmp7 != tmp8);
		}
		else{
			HX_STACK_LINE(303)
			tmp6 = false;
		}
		HX_STACK_LINE(303)
		if ((tmp6)){
			HX_STACK_LINE(303)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter does not relate to body","\x2f","\xf6","\x45","\x99"));
		}
		HX_STACK_LINE(305)
		::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(305)
		::nape::geom::Vec3 tmp8 = this->buoyancyImpulse(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(305)
		::nape::geom::Vec3 tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(306)
		::nape::phys::Body tmp10 = body;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(306)
		::nape::geom::Vec3 tmp11 = this->dragImpulse(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(306)
		::nape::geom::Vec3 ret = tmp11;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(307)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(307)
					if ((tmp13)){
						HX_STACK_LINE(307)
						tmp14 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(307)
						tmp14 = false;
					}
					HX_STACK_LINE(307)
					if ((tmp14)){
						HX_STACK_LINE(307)
						::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(307)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(307)
						HX_STACK_DO_THROW(tmp16);
					}
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(307)
						if ((tmp15)){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					tmp12 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(307)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					bool tmp14 = (tmp9 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(307)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(307)
					if ((tmp14)){
						HX_STACK_LINE(307)
						tmp15 = tmp9->zpp_disp;
					}
					else{
						HX_STACK_LINE(307)
						tmp15 = false;
					}
					HX_STACK_LINE(307)
					if ((tmp15)){
						HX_STACK_LINE(307)
						::String tmp16 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(307)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(307)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp9->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(307)
						if ((tmp16)){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					tmp13 = tmp9->zpp_inner->x;
				}
				HX_STACK_LINE(307)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(307)
				Float x = tmp14;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(307)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(307)
						if ((tmp15)){
							HX_STACK_LINE(307)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(307)
							tmp16 = false;
						}
						HX_STACK_LINE(307)
						if ((tmp16)){
							HX_STACK_LINE(307)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(307)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(307)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(307)
					bool tmp15 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(307)
					if ((tmp15)){
						HX_STACK_LINE(307)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
					}
					HX_STACK_LINE(307)
					_g->zpp_inner->x = x;
				}
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(307)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(307)
						if ((tmp15)){
							HX_STACK_LINE(307)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(307)
							tmp16 = false;
						}
						HX_STACK_LINE(307)
						if ((tmp16)){
							HX_STACK_LINE(307)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(307)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(307)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(307)
						if ((tmp15)){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					_g->zpp_inner->x;
				}
			}
		}
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			{
				HX_STACK_LINE(308)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(308)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(308)
					if ((tmp13)){
						HX_STACK_LINE(308)
						tmp14 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(308)
						tmp14 = false;
					}
					HX_STACK_LINE(308)
					if ((tmp14)){
						HX_STACK_LINE(308)
						::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(308)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(308)
						HX_STACK_DO_THROW(tmp16);
					}
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(308)
						if ((tmp15)){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					tmp12 = _g->zpp_inner->y;
				}
				HX_STACK_LINE(308)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					bool tmp14 = (tmp9 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(308)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(308)
					if ((tmp14)){
						HX_STACK_LINE(308)
						tmp15 = tmp9->zpp_disp;
					}
					else{
						HX_STACK_LINE(308)
						tmp15 = false;
					}
					HX_STACK_LINE(308)
					if ((tmp15)){
						HX_STACK_LINE(308)
						::String tmp16 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(308)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(308)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp9->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(308)
						if ((tmp16)){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					tmp13 = tmp9->zpp_inner->y;
				}
				HX_STACK_LINE(308)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(308)
				Float y = tmp14;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(308)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(308)
						if ((tmp15)){
							HX_STACK_LINE(308)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(308)
							tmp16 = false;
						}
						HX_STACK_LINE(308)
						if ((tmp16)){
							HX_STACK_LINE(308)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(308)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(308)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(308)
					bool tmp15 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(308)
					if ((tmp15)){
						HX_STACK_LINE(308)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
					}
					HX_STACK_LINE(308)
					_g->zpp_inner->y = y;
				}
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(308)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(308)
						if ((tmp15)){
							HX_STACK_LINE(308)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(308)
							tmp16 = false;
						}
						HX_STACK_LINE(308)
						if ((tmp16)){
							HX_STACK_LINE(308)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(308)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(308)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(308)
						if ((tmp15)){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					_g->zpp_inner->y;
				}
			}
		}
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(309)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(309)
					if ((tmp13)){
						HX_STACK_LINE(309)
						tmp14 = _g->zpp_disp;
					}
					else{
						HX_STACK_LINE(309)
						tmp14 = false;
					}
					HX_STACK_LINE(309)
					if ((tmp14)){
						HX_STACK_LINE(309)
						::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(tmp16);
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						if ((tmp15)){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					tmp12 = _g->zpp_inner->z;
				}
				HX_STACK_LINE(309)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					bool tmp14 = (tmp9 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(309)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(309)
					if ((tmp14)){
						HX_STACK_LINE(309)
						tmp15 = tmp9->zpp_disp;
					}
					else{
						HX_STACK_LINE(309)
						tmp15 = false;
					}
					HX_STACK_LINE(309)
					if ((tmp15)){
						HX_STACK_LINE(309)
						::String tmp16 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(309)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp9->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(309)
						if ((tmp16)){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					tmp13 = tmp9->zpp_inner->z;
				}
				HX_STACK_LINE(309)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(309)
				Float z = tmp14;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(309)
						if ((tmp15)){
							HX_STACK_LINE(309)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(309)
							tmp16 = false;
						}
						HX_STACK_LINE(309)
						if ((tmp16)){
							HX_STACK_LINE(309)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(309)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(309)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(309)
					bool tmp15 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(309)
					if ((tmp15)){
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
					}
					HX_STACK_LINE(309)
					_g->zpp_inner->z = z;
				}
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(309)
						if ((tmp15)){
							HX_STACK_LINE(309)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(309)
							tmp16 = false;
						}
						HX_STACK_LINE(309)
						if ((tmp16)){
							HX_STACK_LINE(309)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(309)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(309)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						if ((tmp15)){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					_g->zpp_inner->z;
				}
			}
		}
		HX_STACK_LINE(310)
		tmp9->dispose();
		HX_STACK_LINE(311)
		::nape::geom::Vec3 tmp12 = ret;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(311)
		return tmp12;
	}
}



FluidArbiter_obj::FluidArbiter_obj()
{
}

Dynamic FluidArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { if (inCallProp == hx::paccAlways) return get_overlap(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_overlap") ) { return get_overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_overlap") ) { return set_overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"dragImpulse") ) { return dragImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buoyancyImpulse") ) { return buoyancyImpulse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { if (inCallProp == hx::paccAlways) return set_overlap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FluidArbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get_overlap","\x9e","\xa3","\x0a","\x2f"),
	HX_HCSTRING("set_overlap","\xaa","\xaa","\x77","\x39"),
	HX_HCSTRING("buoyancyImpulse","\x75","\xa7","\x03","\x9f"),
	HX_HCSTRING("dragImpulse","\x21","\x73","\xde","\x23"),
	HX_HCSTRING("totalImpulse","\x51","\xe5","\xbb","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FluidArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FluidArbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class FluidArbiter_obj::__mClass;

void FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.FluidArbiter","\xb3","\x6f","\x38","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FluidArbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FluidArbiter_obj >;
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
