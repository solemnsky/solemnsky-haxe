#include <hxcpp.h>

#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace shape{

Void Circle_obj::__construct(Float radius,::nape::geom::Vec2 localCOM,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{
HX_STACK_FRAME("nape.shape.Circle","new",0x5e7f0595,"nape.shape.Circle.new","nape/shape/Circle.hx",177,0xc2732479)
HX_STACK_THIS(this)
HX_STACK_ARG(radius,"radius")
HX_STACK_ARG(localCOM,"localCOM")
HX_STACK_ARG(material,"material")
HX_STACK_ARG(filter,"filter")
{
	HX_STACK_LINE(181)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(198)
	::nape::shape::Shape_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(199)
	super::__construct();
	HX_STACK_LINE(200)
	::nape::shape::Shape_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(205)
	::zpp_nape::shape::ZPP_Circle tmp = ::zpp_nape::shape::ZPP_Circle_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(206)
	::zpp_nape::shape::ZPP_Circle tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(207)
	::zpp_nape::shape::ZPP_Circle tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	tmp2->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(208)
	::zpp_nape::shape::ZPP_Circle tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	this->zpp_inner = tmp3;
	HX_STACK_LINE(209)
	::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(209)
	this->zpp_inner_i = tmp4;
	HX_STACK_LINE(210)
	::zpp_nape::phys::ZPP_Interactor tmp5 = this->zpp_inner_i;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(210)
	tmp5->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			::zpp_nape::shape::ZPP_Shape tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			tmp6->immutable_midstep(HX_HCSTRING("Circle::radius","\x42","\x29","\x7d","\x17"));
			HX_STACK_LINE(211)
			::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(211)
			::zpp_nape::phys::ZPP_Body tmp8 = tmp7->body;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(211)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(211)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(211)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(211)
			if ((tmp10)){
				HX_STACK_LINE(211)
				::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(211)
				::zpp_nape::shape::ZPP_Shape tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(211)
				::zpp_nape::shape::ZPP_Shape tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(211)
				int tmp15 = tmp14->body->type;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(211)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(211)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(211)
				int tmp18 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(211)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(211)
				tmp11 = (tmp17 == tmp20);
			}
			else{
				HX_STACK_LINE(211)
				tmp11 = false;
			}
			HX_STACK_LINE(211)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(211)
			if ((tmp11)){
				HX_STACK_LINE(211)
				::zpp_nape::shape::ZPP_Shape tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(211)
				::zpp_nape::shape::ZPP_Shape tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(211)
				::zpp_nape::space::ZPP_Space tmp15 = tmp14->body->space;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(211)
				::zpp_nape::space::ZPP_Space tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(211)
				tmp12 = (tmp16 != null());
			}
			else{
				HX_STACK_LINE(211)
				tmp12 = false;
			}
			HX_STACK_LINE(211)
			if ((tmp12)){
				HX_STACK_LINE(211)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modifiy radius of Circle contained in static object once added to space","\x18","\xde","\x81","\xd8"));
			}
			HX_STACK_LINE(211)
			Float tmp13 = radius;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(211)
			::zpp_nape::shape::ZPP_Circle tmp14 = this->zpp_inner_zn;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(211)
			Float tmp15 = tmp14->radius;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(211)
			bool tmp16 = (tmp13 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			if ((tmp16)){
				HX_STACK_LINE(211)
				bool tmp17 = (radius != radius);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(211)
				if ((tmp17)){
					HX_STACK_LINE(211)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Circle::radius cannot be NaN","\x2b","\x71","\xf4","\xf7"));
				}
				HX_STACK_LINE(211)
				Float tmp18 = radius;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(211)
				Float tmp19 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(211)
				if ((tmp20)){
					HX_STACK_LINE(211)
					::String tmp21 = (HX_HCSTRING("Error: Circle::radius (","\x18","\x3e","\x81","\x15") + radius);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(211)
					::String tmp22 = (tmp21 + HX_HCSTRING(") must be > Config.epsilon","\xbd","\x2d","\xe5","\x64"));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(211)
					HX_STACK_DO_THROW(tmp22);
				}
				HX_STACK_LINE(211)
				bool tmp21 = (radius > ((Float)1e100));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(211)
				if ((tmp21)){
					HX_STACK_LINE(211)
					::String tmp22 = (HX_HCSTRING("Error: Circle::radius (","\x18","\x3e","\x81","\x15") + radius);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(211)
					::String tmp23 = (tmp22 + HX_HCSTRING(") must be < PR(Const).FMAX","\x61","\xd7","\x3f","\x25"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(211)
					HX_STACK_DO_THROW(tmp23);
				}
				HX_STACK_LINE(211)
				::zpp_nape::shape::ZPP_Circle tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(211)
				tmp22->radius = radius;
				HX_STACK_LINE(211)
				::zpp_nape::shape::ZPP_Circle tmp23 = this->zpp_inner_zn;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(211)
				tmp23->invalidate_radius();
			}
		}
		HX_STACK_LINE(211)
		::zpp_nape::shape::ZPP_Circle tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		tmp6->radius;
	}
	HX_STACK_LINE(212)
	bool tmp6 = (localCOM == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(212)
	if ((tmp6)){
		HX_STACK_LINE(213)
		::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(213)
		tmp7->localCOMx = (int)0;
		HX_STACK_LINE(214)
		::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(214)
		tmp8->localCOMy = (int)0;
		HX_STACK_LINE(223)
		{
		}
	}
	else{
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(235)
			bool tmp7 = (localCOM != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(235)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(235)
			if ((tmp7)){
				HX_STACK_LINE(235)
				tmp8 = localCOM->zpp_disp;
			}
			else{
				HX_STACK_LINE(235)
				tmp8 = false;
			}
			HX_STACK_LINE(235)
			if ((tmp8)){
				HX_STACK_LINE(235)
				::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(235)
				::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(235)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(239)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					bool tmp8 = (localCOM != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(239)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(239)
					if ((tmp8)){
						HX_STACK_LINE(239)
						tmp9 = localCOM->zpp_disp;
					}
					else{
						HX_STACK_LINE(239)
						tmp9 = false;
					}
					HX_STACK_LINE(239)
					if ((tmp9)){
						HX_STACK_LINE(239)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(239)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(239)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					::zpp_nape::geom::ZPP_Vec2 _this = localCOM->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(239)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(239)
					if ((tmp8)){
						HX_STACK_LINE(239)
						_this->_validate();
					}
				}
				HX_STACK_LINE(239)
				tmp7 = localCOM->zpp_inner->x;
			}
			HX_STACK_LINE(239)
			::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(239)
			tmp8->localCOMx = tmp7;
			HX_STACK_LINE(240)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					bool tmp10 = (localCOM != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(240)
					if ((tmp10)){
						HX_STACK_LINE(240)
						tmp11 = localCOM->zpp_disp;
					}
					else{
						HX_STACK_LINE(240)
						tmp11 = false;
					}
					HX_STACK_LINE(240)
					if ((tmp11)){
						HX_STACK_LINE(240)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(240)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(240)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::zpp_nape::geom::ZPP_Vec2 _this = localCOM->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(240)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					if ((tmp10)){
						HX_STACK_LINE(240)
						_this->_validate();
					}
				}
				HX_STACK_LINE(240)
				tmp9 = localCOM->zpp_inner->y;
			}
			HX_STACK_LINE(240)
			::zpp_nape::shape::ZPP_Shape tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(240)
			tmp10->localCOMy = tmp9;
			HX_STACK_LINE(249)
			{
			}
		}
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(259)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(260)
			tmp7 = localCOM->zpp_inner->weak;
			HX_STACK_LINE(259)
			if ((tmp7)){
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						bool tmp8 = (localCOM != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(262)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(262)
						if ((tmp8)){
							HX_STACK_LINE(262)
							tmp9 = localCOM->zpp_disp;
						}
						else{
							HX_STACK_LINE(262)
							tmp9 = false;
						}
						HX_STACK_LINE(262)
						if ((tmp9)){
							HX_STACK_LINE(262)
							::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(262)
							::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(262)
							HX_STACK_DO_THROW(tmp11);
						}
					}
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						::zpp_nape::geom::ZPP_Vec2 _this = localCOM->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(262)
						bool tmp8 = _this->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(262)
						if ((tmp8)){
							HX_STACK_LINE(262)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(262)
						bool tmp9 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(262)
						if ((tmp9)){
							HX_STACK_LINE(262)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(262)
					bool tmp8 = localCOM->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(262)
					if ((tmp8)){
						HX_STACK_LINE(262)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(262)
					::zpp_nape::geom::ZPP_Vec2 inner = localCOM->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(262)
					localCOM->zpp_inner->outer = null();
					HX_STACK_LINE(262)
					localCOM->zpp_inner = null();
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						::nape::geom::Vec2 o = localCOM;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(262)
						o->zpp_pool = null();
						HX_STACK_LINE(262)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(262)
						bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(262)
						if ((tmp10)){
							HX_STACK_LINE(262)
							::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(262)
							tmp11->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(262)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(262)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(262)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(262)
							if ((tmp9)){
								HX_STACK_LINE(262)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(262)
								o->outer = null();
							}
							HX_STACK_LINE(262)
							o->_isimmutable = null();
							HX_STACK_LINE(262)
							o->_validate = null();
							HX_STACK_LINE(262)
							o->_invalidate = null();
						}
						HX_STACK_LINE(262)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(262)
						o->next = tmp9;
						HX_STACK_LINE(262)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(263)
				true;
			}
			else{
				HX_STACK_LINE(266)
				false;
			}
		}
	}
	HX_STACK_LINE(270)
	bool tmp7 = (material == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(270)
	if ((tmp7)){
		HX_STACK_LINE(271)
		::zpp_nape::phys::ZPP_Material tmp8 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(271)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(271)
		if ((tmp9)){
			HX_STACK_LINE(272)
			::zpp_nape::phys::ZPP_Material tmp10 = ::zpp_nape::phys::ZPP_Material_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(272)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(272)
			tmp11->material = tmp10;
		}
		else{
			HX_STACK_LINE(278)
			::zpp_nape::phys::ZPP_Material tmp10 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(278)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(278)
			tmp11->material = tmp10;
			HX_STACK_LINE(279)
			::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(279)
			::zpp_nape::phys::ZPP_Material tmp13 = tmp12->material->next;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(279)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = tmp13;
			HX_STACK_LINE(280)
			::zpp_nape::shape::ZPP_Shape tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(280)
			tmp14->material->next = null();
		}
		HX_STACK_LINE(285)
		Dynamic();
	}
	else{
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(287)
			tmp8->immutable_midstep(HX_HCSTRING("Shape::material","\xa8","\xcd","\xa4","\xb9"));
			HX_STACK_LINE(287)
			bool tmp9 = (material == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(287)
			if ((tmp9)){
				HX_STACK_LINE(287)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape material","\x9d","\xc0","\x89","\x99"));
			}
			HX_STACK_LINE(287)
			::zpp_nape::shape::ZPP_Shape tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(287)
			::zpp_nape::phys::ZPP_Material tmp11 = material->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(287)
			tmp10->setMaterial(tmp11);
		}
		HX_STACK_LINE(287)
		::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		tmp8->material->wrapper();
	}
	HX_STACK_LINE(288)
	bool tmp8 = (filter == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(288)
	if ((tmp8)){
		HX_STACK_LINE(289)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp9 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(289)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(289)
		if ((tmp10)){
			HX_STACK_LINE(290)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp11 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(290)
			::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(290)
			tmp12->filter = tmp11;
		}
		else{
			HX_STACK_LINE(296)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp11 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(296)
			::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(296)
			tmp12->filter = tmp11;
			HX_STACK_LINE(297)
			::zpp_nape::shape::ZPP_Shape tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp14 = tmp13->filter->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = tmp14;
			HX_STACK_LINE(298)
			::zpp_nape::shape::ZPP_Shape tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(298)
			tmp15->filter->next = null();
		}
		HX_STACK_LINE(303)
		Dynamic();
	}
	else{
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			::zpp_nape::shape::ZPP_Shape tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(305)
			tmp9->immutable_midstep(HX_HCSTRING("Shape::filter","\x79","\x9e","\xc6","\x67"));
			HX_STACK_LINE(305)
			bool tmp10 = (filter == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(305)
			if ((tmp10)){
				HX_STACK_LINE(305)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape filter","\x2e","\x7a","\x75","\x59"));
			}
			HX_STACK_LINE(305)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(305)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp12 = filter->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(305)
			tmp11->setFilter(tmp12);
		}
		HX_STACK_LINE(305)
		::zpp_nape::shape::ZPP_Shape tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(305)
		tmp9->filter->wrapper();
	}
	HX_STACK_LINE(306)
	::zpp_nape::phys::ZPP_Interactor tmp9 = this->zpp_inner_i;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(306)
	::nape::callbacks::CbType tmp10 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(306)
	::zpp_nape::callbacks::ZPP_CbType tmp11 = tmp10->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(306)
	tmp9->insert_cbtype(tmp11);
}
;
	return null();
}

//Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(Float radius,::nape::geom::Vec2 localCOM,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{  hx::ObjectPtr< Circle_obj > _result_ = new Circle_obj();
	_result_->__construct(radius,localCOM,material,filter);
	return _result_;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > _result_ = new Circle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Float Circle_obj::get_radius( ){
	HX_STACK_FRAME("nape.shape.Circle","get_radius",0x77c54b86,"nape.shape.Circle.get_radius","nape/shape/Circle.hx",317,0xc2732479)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	::zpp_nape::shape::ZPP_Circle tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	Float tmp1 = tmp->radius;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_radius,return )

Float Circle_obj::set_radius( Float radius){
	HX_STACK_FRAME("nape.shape.Circle","set_radius",0x7b42e9fa,"nape.shape.Circle.set_radius","nape/shape/Circle.hx",320,0xc2732479)
	HX_STACK_THIS(this)
	HX_STACK_ARG(radius,"radius")
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(322)
		::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		tmp->immutable_midstep(HX_HCSTRING("Circle::radius","\x42","\x29","\x7d","\x17"));
		HX_STACK_LINE(324)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		::zpp_nape::phys::ZPP_Body tmp2 = tmp1->body;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		if ((tmp4)){
			HX_STACK_LINE(324)
			::zpp_nape::shape::ZPP_Shape tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(324)
			::zpp_nape::shape::ZPP_Shape tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			int tmp9 = tmp8->body->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(324)
			int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(324)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(324)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(324)
			tmp5 = (tmp11 == tmp14);
		}
		else{
			HX_STACK_LINE(324)
			tmp5 = false;
		}
		HX_STACK_LINE(324)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		if ((tmp5)){
			HX_STACK_LINE(324)
			::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			::zpp_nape::space::ZPP_Space tmp9 = tmp8->body->space;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			::zpp_nape::space::ZPP_Space tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			tmp6 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(324)
			tmp6 = false;
		}
		HX_STACK_LINE(324)
		if ((tmp6)){
			HX_STACK_LINE(324)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modifiy radius of Circle contained in static object once added to space","\x18","\xde","\x81","\xd8"));
		}
		HX_STACK_LINE(326)
		Float tmp7 = radius;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(326)
		::zpp_nape::shape::ZPP_Circle tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(326)
		Float tmp9 = tmp8->radius;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(326)
		bool tmp10 = (tmp7 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(326)
		if ((tmp10)){
			HX_STACK_LINE(328)
			bool tmp11 = (radius != radius);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(328)
			if ((tmp11)){
				HX_STACK_LINE(328)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Circle::radius cannot be NaN","\x2b","\x71","\xf4","\xf7"));
			}
			HX_STACK_LINE(329)
			Float tmp12 = radius;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(329)
			Float tmp13 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(329)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(329)
			if ((tmp14)){
				HX_STACK_LINE(329)
				::String tmp15 = (HX_HCSTRING("Error: Circle::radius (","\x18","\x3e","\x81","\x15") + radius);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(329)
				::String tmp16 = (tmp15 + HX_HCSTRING(") must be > Config.epsilon","\xbd","\x2d","\xe5","\x64"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(329)
				HX_STACK_DO_THROW(tmp16);
			}
			HX_STACK_LINE(330)
			bool tmp15 = (radius > ((Float)1e100));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(330)
			if ((tmp15)){
				HX_STACK_LINE(330)
				::String tmp16 = (HX_HCSTRING("Error: Circle::radius (","\x18","\x3e","\x81","\x15") + radius);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(330)
				::String tmp17 = (tmp16 + HX_HCSTRING(") must be < PR(Const).FMAX","\x61","\xd7","\x3f","\x25"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(330)
				HX_STACK_DO_THROW(tmp17);
			}
			HX_STACK_LINE(332)
			::zpp_nape::shape::ZPP_Circle tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(332)
			tmp16->radius = radius;
			HX_STACK_LINE(333)
			::zpp_nape::shape::ZPP_Circle tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(333)
			tmp17->invalidate_radius();
		}
	}
	HX_STACK_LINE(336)
	::zpp_nape::shape::ZPP_Circle tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	Float tmp1 = tmp->radius;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(336)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,set_radius,return )


Circle_obj::Circle_obj()
{
}

void Circle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Circle);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::shape::Shape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Circle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::shape::Shape_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Circle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return get_radius(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return set_radius(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::shape::ZPP_Circle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Circle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Circle*/ ,(int)offsetof(Circle_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("get_radius","\x1b","\x40","\x7e","\xa1"),
	HX_HCSTRING("set_radius","\x8f","\xde","\xfb","\xa4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#endif

hx::Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.shape.Circle","\x23","\x97","\xa5","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Circle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Circle_obj >;
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
} // end namespace shape
