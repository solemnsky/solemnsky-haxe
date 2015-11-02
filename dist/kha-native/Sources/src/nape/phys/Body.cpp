#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
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
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void Body_obj::__construct(::nape::phys::BodyType type,::nape::geom::Vec2 position)
{
HX_STACK_FRAME("nape.phys.Body","new",0x6578e0ca,"nape.phys.Body.new","nape/phys/Body.hx",177,0xcb2bb586)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(position,"position")
{
	HX_STACK_LINE(189)
	this->debugDraw = true;
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(459)
	::nape::phys::Interactor_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(460)
	super::__construct();
	HX_STACK_LINE(461)
	::nape::phys::Interactor_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(466)
	::zpp_nape::phys::ZPP_Body tmp = ::zpp_nape::phys::ZPP_Body_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	this->zpp_inner = tmp;
	HX_STACK_LINE(467)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(467)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(468)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(468)
	tmp2->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(469)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(469)
	this->zpp_inner_i = tmp3;
	HX_STACK_LINE(470)
	bool tmp4 = (position != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(470)
	if ((tmp4)){
		HX_STACK_LINE(471)
		{
			HX_STACK_LINE(473)
			bool tmp5 = (position != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(473)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(473)
			if ((tmp5)){
				HX_STACK_LINE(473)
				tmp6 = position->zpp_disp;
			}
			else{
				HX_STACK_LINE(473)
				tmp6 = false;
			}
			HX_STACK_LINE(473)
			if ((tmp6)){
				HX_STACK_LINE(473)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(473)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(473)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(477)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					bool tmp6 = (position != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(477)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(477)
					if ((tmp6)){
						HX_STACK_LINE(477)
						tmp7 = position->zpp_disp;
					}
					else{
						HX_STACK_LINE(477)
						tmp7 = false;
					}
					HX_STACK_LINE(477)
					if ((tmp7)){
						HX_STACK_LINE(477)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(477)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(477)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(477)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(477)
					if ((tmp6)){
						HX_STACK_LINE(477)
						_this->_validate();
					}
				}
				HX_STACK_LINE(477)
				tmp5 = position->zpp_inner->x;
			}
			HX_STACK_LINE(477)
			::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(477)
			tmp6->posx = tmp5;
			HX_STACK_LINE(478)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(478)
					bool tmp8 = (position != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(478)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(478)
					if ((tmp8)){
						HX_STACK_LINE(478)
						tmp9 = position->zpp_disp;
					}
					else{
						HX_STACK_LINE(478)
						tmp9 = false;
					}
					HX_STACK_LINE(478)
					if ((tmp9)){
						HX_STACK_LINE(478)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(478)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(478)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(478)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(478)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(478)
					if ((tmp8)){
						HX_STACK_LINE(478)
						_this->_validate();
					}
				}
				HX_STACK_LINE(478)
				tmp7 = position->zpp_inner->y;
			}
			HX_STACK_LINE(478)
			::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(478)
			tmp8->posy = tmp7;
			HX_STACK_LINE(487)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(498)
		::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		tmp5->posx = (int)0;
		HX_STACK_LINE(499)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(499)
		tmp6->posy = (int)0;
		HX_STACK_LINE(508)
		{
		}
	}
	HX_STACK_LINE(517)
	{
		HX_STACK_LINE(517)
		bool tmp5 = (type == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(517)
		::nape::phys::BodyType tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(517)
		if ((tmp5)){
			HX_STACK_LINE(517)
			::nape::phys::BodyType tmp7 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(517)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(517)
			if ((tmp8)){
				HX_STACK_LINE(517)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(517)
				::nape::phys::BodyType tmp9 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(517)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp9;
				HX_STACK_LINE(517)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(517)
			tmp6 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		else{
			HX_STACK_LINE(517)
			tmp6 = type;
		}
		HX_STACK_LINE(517)
		::nape::phys::BodyType type1 = tmp6;		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(517)
		{
			HX_STACK_LINE(517)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(517)
			tmp7->immutable_midstep(HX_HCSTRING("Body::type","\xbc","\xa9","\x32","\xec"));
			HX_STACK_LINE(517)
			::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(517)
			bool tmp9 = tmp8->world;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(517)
			if ((tmp9)){
				HX_STACK_LINE(517)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(517)
			Array< ::Dynamic > tmp10 = ::zpp_nape::phys::ZPP_Body_obj::types;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(517)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(517)
			int tmp12 = tmp11->type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(517)
			::nape::phys::BodyType tmp13 = tmp10->__get(tmp12).StaticCast< ::nape::phys::BodyType >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(517)
			::nape::phys::BodyType tmp14 = type1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(517)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(517)
			if ((tmp15)){
				HX_STACK_LINE(517)
				bool tmp16 = (type1 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(517)
				if ((tmp16)){
					HX_STACK_LINE(517)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot use null BodyType","\xcd","\xf3","\x4c","\x7b"));
				}
				HX_STACK_LINE(517)
				::nape::phys::BodyType tmp17 = type1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(517)
				::nape::phys::BodyType tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(517)
				{
					HX_STACK_LINE(517)
					::nape::phys::BodyType tmp19 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(517)
					bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(517)
					if ((tmp20)){
						HX_STACK_LINE(517)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(517)
						::nape::phys::BodyType tmp21 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(517)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp21;
						HX_STACK_LINE(517)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(517)
					tmp18 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				HX_STACK_LINE(517)
				bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(517)
				int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(517)
				if ((tmp19)){
					HX_STACK_LINE(517)
					tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;
				}
				else{
					HX_STACK_LINE(517)
					::nape::phys::BodyType tmp21 = type1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(517)
					::nape::phys::BodyType tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(517)
					{
						HX_STACK_LINE(517)
						::nape::phys::BodyType tmp23 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(517)
						bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(517)
						if ((tmp24)){
							HX_STACK_LINE(517)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(517)
							::nape::phys::BodyType tmp25 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(517)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp25;
							HX_STACK_LINE(517)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(517)
						tmp22 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					HX_STACK_LINE(517)
					bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(517)
					if ((tmp23)){
						HX_STACK_LINE(517)
						tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC;
					}
					else{
						HX_STACK_LINE(517)
						tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;
					}
				}
				HX_STACK_LINE(517)
				int ntype = tmp20;		HX_STACK_VAR(ntype,"ntype");
				HX_STACK_LINE(517)
				int tmp21 = ntype;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(517)
				int tmp22 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(517)
				bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(517)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(517)
				if ((tmp23)){
					HX_STACK_LINE(517)
					::zpp_nape::phys::ZPP_Body tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(517)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(517)
					::zpp_nape::space::ZPP_Space tmp27 = tmp26->space;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(517)
					tmp24 = (tmp27 != null());
				}
				else{
					HX_STACK_LINE(517)
					tmp24 = false;
				}
				HX_STACK_LINE(517)
				if ((tmp24)){
					HX_STACK_LINE(517)
					{
						HX_STACK_LINE(517)
						::zpp_nape::phys::ZPP_Body tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(517)
						tmp25->velx = (int)0;
						HX_STACK_LINE(517)
						::zpp_nape::phys::ZPP_Body tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(517)
						tmp26->vely = (int)0;
						HX_STACK_LINE(517)
						{
						}
					}
					HX_STACK_LINE(517)
					::zpp_nape::phys::ZPP_Body tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(517)
					tmp25->angvel = (int)0;
				}
				HX_STACK_LINE(517)
				::zpp_nape::phys::ZPP_Body tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(517)
				tmp25->invalidate_type();
				HX_STACK_LINE(517)
				::zpp_nape::phys::ZPP_Body tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(517)
				::zpp_nape::space::ZPP_Space tmp27 = tmp26->space;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(517)
				bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(517)
				if ((tmp28)){
					HX_STACK_LINE(517)
					::zpp_nape::phys::ZPP_Body tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(517)
					::zpp_nape::phys::ZPP_Body tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(517)
					int tmp31 = ntype;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(517)
					tmp29->space->transmitType(tmp30,tmp31);
				}
				else{
					HX_STACK_LINE(517)
					::zpp_nape::phys::ZPP_Body tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(517)
					tmp29->type = ntype;
				}
			}
		}
		HX_STACK_LINE(517)
		Array< ::Dynamic > tmp7 = ::zpp_nape::phys::ZPP_Body_obj::types;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(517)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(517)
		int tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(517)
		tmp7->__get(tmp9).StaticCast< ::nape::phys::BodyType >();
	}
	HX_STACK_LINE(518)
	bool tmp5 = (position != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(518)
	if ((tmp5)){
		HX_STACK_LINE(519)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(520)
		tmp6 = position->zpp_inner->weak;
		HX_STACK_LINE(519)
		if ((tmp6)){
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(522)
				{
					HX_STACK_LINE(522)
					bool tmp7 = (position != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(522)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(522)
					if ((tmp7)){
						HX_STACK_LINE(522)
						tmp8 = position->zpp_disp;
					}
					else{
						HX_STACK_LINE(522)
						tmp8 = false;
					}
					HX_STACK_LINE(522)
					if ((tmp8)){
						HX_STACK_LINE(522)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(522)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(522)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(522)
				{
					HX_STACK_LINE(522)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(522)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(522)
					if ((tmp7)){
						HX_STACK_LINE(522)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(522)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(522)
					if ((tmp8)){
						HX_STACK_LINE(522)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(522)
				bool tmp7 = position->zpp_inner->_inuse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(522)
				if ((tmp7)){
					HX_STACK_LINE(522)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(522)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(522)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(522)
				position->zpp_inner = null();
				HX_STACK_LINE(522)
				{
					HX_STACK_LINE(522)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(522)
					o->zpp_pool = null();
					HX_STACK_LINE(522)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(522)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(522)
					if ((tmp9)){
						HX_STACK_LINE(522)
						::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(522)
						tmp10->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(522)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(522)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(522)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(522)
				{
					HX_STACK_LINE(522)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(522)
					{
						HX_STACK_LINE(522)
						bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(522)
						if ((tmp8)){
							HX_STACK_LINE(522)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(522)
							o->outer = null();
						}
						HX_STACK_LINE(522)
						o->_isimmutable = null();
						HX_STACK_LINE(522)
						o->_validate = null();
						HX_STACK_LINE(522)
						o->_invalidate = null();
					}
					HX_STACK_LINE(522)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(522)
					o->next = tmp8;
					HX_STACK_LINE(522)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(523)
			true;
		}
		else{
			HX_STACK_LINE(526)
			false;
		}
	}
	HX_STACK_LINE(529)
	::zpp_nape::phys::ZPP_Interactor tmp6 = this->zpp_inner_i;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(529)
	::nape::callbacks::CbType tmp7 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(529)
	::zpp_nape::callbacks::ZPP_CbType tmp8 = tmp7->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(529)
	tmp6->insert_cbtype(tmp8);
}
;
	return null();
}

//Body_obj::~Body_obj() { }

Dynamic Body_obj::__CreateEmpty() { return  new Body_obj; }
hx::ObjectPtr< Body_obj > Body_obj::__new(::nape::phys::BodyType type,::nape::geom::Vec2 position)
{  hx::ObjectPtr< Body_obj > _result_ = new Body_obj();
	_result_->__construct(type,position);
	return _result_;}

Dynamic Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Body_obj > _result_ = new Body_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::nape::phys::BodyType Body_obj::get_type( ){
	HX_STACK_FRAME("nape.phys.Body","get_type",0xb918dd99,"nape.phys.Body.get_type","nape/phys/Body.hx",197,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	Array< ::Dynamic > tmp = ::zpp_nape::phys::ZPP_Body_obj::types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	int tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	::nape::phys::BodyType tmp3 = tmp->__get(tmp2).StaticCast< ::nape::phys::BodyType >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_type,return )

::nape::phys::BodyType Body_obj::set_type( ::nape::phys::BodyType type){
	HX_STACK_FRAME("nape.phys.Body","set_type",0x6776370d,"nape.phys.Body.set_type","nape/phys/Body.hx",200,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(202)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		tmp->immutable_midstep(HX_HCSTRING("Body::type","\xbc","\xa9","\x32","\xec"));
		HX_STACK_LINE(204)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		if ((tmp2)){
			HX_STACK_LINE(204)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(206)
		Array< ::Dynamic > tmp3 = ::zpp_nape::phys::ZPP_Body_obj::types;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		::nape::phys::BodyType tmp6 = tmp3->__get(tmp5).StaticCast< ::nape::phys::BodyType >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		::nape::phys::BodyType tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(206)
		if ((tmp8)){
			HX_STACK_LINE(208)
			bool tmp9 = (type == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(208)
			if ((tmp9)){
				HX_STACK_LINE(208)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot use null BodyType","\xcd","\xf3","\x4c","\x7b"));
			}
			HX_STACK_LINE(210)
			::nape::phys::BodyType tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(210)
			::nape::phys::BodyType tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(210)
			{
				HX_STACK_LINE(210)
				::nape::phys::BodyType tmp12 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(210)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(210)
				if ((tmp13)){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::nape::phys::BodyType tmp14 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp14;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				tmp11 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			HX_STACK_LINE(210)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(210)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(210)
			if ((tmp12)){
				HX_STACK_LINE(210)
				tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;
			}
			else{
				HX_STACK_LINE(210)
				::nape::phys::BodyType tmp14 = type;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				::nape::phys::BodyType tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(210)
				{
					HX_STACK_LINE(210)
					::nape::phys::BodyType tmp16 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(210)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(210)
					if ((tmp17)){
						HX_STACK_LINE(210)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(210)
						::nape::phys::BodyType tmp18 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(210)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp18;
						HX_STACK_LINE(210)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(210)
					tmp15 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
				}
				HX_STACK_LINE(210)
				bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(210)
				if ((tmp16)){
					HX_STACK_LINE(210)
					tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC;
				}
				else{
					HX_STACK_LINE(210)
					tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;
				}
			}
			HX_STACK_LINE(210)
			int ntype = tmp13;		HX_STACK_VAR(ntype,"ntype");
			HX_STACK_LINE(211)
			int tmp14 = ntype;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(211)
			int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(211)
			bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(211)
			if ((tmp16)){
				HX_STACK_LINE(211)
				::zpp_nape::phys::ZPP_Body tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(211)
				::zpp_nape::phys::ZPP_Body tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				::zpp_nape::space::ZPP_Space tmp20 = tmp19->space;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(211)
				tmp17 = (tmp20 != null());
			}
			else{
				HX_STACK_LINE(211)
				tmp17 = false;
			}
			HX_STACK_LINE(211)
			if ((tmp17)){
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(213)
					::zpp_nape::phys::ZPP_Body tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					tmp18->velx = (int)0;
					HX_STACK_LINE(214)
					::zpp_nape::phys::ZPP_Body tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(214)
					tmp19->vely = (int)0;
					HX_STACK_LINE(223)
					{
					}
				}
				HX_STACK_LINE(232)
				::zpp_nape::phys::ZPP_Body tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(232)
				tmp18->angvel = (int)0;
			}
			HX_STACK_LINE(234)
			::zpp_nape::phys::ZPP_Body tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(234)
			tmp18->invalidate_type();
			HX_STACK_LINE(235)
			::zpp_nape::phys::ZPP_Body tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(235)
			::zpp_nape::space::ZPP_Space tmp20 = tmp19->space;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(235)
			bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(235)
			if ((tmp21)){
				HX_STACK_LINE(235)
				::zpp_nape::phys::ZPP_Body tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(235)
				::zpp_nape::phys::ZPP_Body tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(235)
				int tmp24 = ntype;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(235)
				tmp22->space->transmitType(tmp23,tmp24);
			}
			else{
				HX_STACK_LINE(236)
				::zpp_nape::phys::ZPP_Body tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(236)
				tmp22->type = ntype;
			}
		}
	}
	HX_STACK_LINE(239)
	Array< ::Dynamic > tmp = ::zpp_nape::phys::ZPP_Body_obj::types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	int tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	::nape::phys::BodyType tmp3 = tmp->__get(tmp2).StaticCast< ::nape::phys::BodyType >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_type,return )

bool Body_obj::get_isBullet( ){
	HX_STACK_FRAME("nape.phys.Body","get_isBullet",0x76a2742b,"nape.phys.Body.get_isBullet","nape/phys/Body.hx",259,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	bool tmp1 = tmp->bulletEnabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_isBullet,return )

bool Body_obj::set_isBullet( bool isBullet){
	HX_STACK_FRAME("nape.phys.Body","set_isBullet",0x8b9b979f,"nape.phys.Body.set_isBullet","nape/phys/Body.hx",262,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(isBullet,"isBullet")
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(264)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		tmp->bulletEnabled = isBullet;
	}
	HX_STACK_LINE(266)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	bool tmp1 = tmp->bulletEnabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_isBullet,return )

bool Body_obj::get_disableCCD( ){
	HX_STACK_FRAME("nape.phys.Body","get_disableCCD",0xefa9a4db,"nape.phys.Body.get_disableCCD","nape/phys/Body.hx",278,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	bool tmp1 = tmp->disableCCD;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_disableCCD,return )

bool Body_obj::set_disableCCD( bool disableCCD){
	HX_STACK_FRAME("nape.phys.Body","set_disableCCD",0x0fc98d4f,"nape.phys.Body.set_disableCCD","nape/phys/Body.hx",281,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(disableCCD,"disableCCD")
	HX_STACK_LINE(282)
	{
		HX_STACK_LINE(283)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		tmp->disableCCD = disableCCD;
	}
	HX_STACK_LINE(285)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	bool tmp1 = tmp->disableCCD;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_disableCCD,return )

::nape::phys::Body Body_obj::integrate( Float deltaTime){
	HX_STACK_FRAME("nape.phys.Body","integrate",0xca94aa5b,"nape.phys.Body.integrate","nape/phys/Body.hx",295,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_LINE(297)
	bool tmp = (deltaTime != deltaTime);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	if ((tmp)){
		HX_STACK_LINE(297)
		HX_STACK_DO_THROW(HX_HCSTRING("Cannot integrate by NaN time","\x2f","\x66","\xd3","\x2b"));
	}
	HX_STACK_LINE(299)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	tmp1->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
	HX_STACK_LINE(301)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	bool tmp3 = tmp2->world;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(301)
	if ((tmp3)){
		HX_STACK_LINE(301)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(303)
	bool tmp4 = (deltaTime == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(303)
	if ((tmp4)){
		HX_STACK_LINE(303)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(304)
	::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(304)
	::zpp_nape::phys::ZPP_Body cur = tmp5;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(305)
	cur->sweepTime = (int)0;
	HX_STACK_LINE(306)
	cur->sweep_angvel = cur->angvel;
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		Float tmp6 = (deltaTime - cur->sweepTime);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(307)
		Float delta = tmp6;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(307)
		bool tmp7 = (delta != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(307)
		if ((tmp7)){
			HX_STACK_LINE(307)
			cur->sweepTime = deltaTime;
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				Float t = delta;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(307)
				Float tmp8 = (cur->velx * t);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(307)
				hx::AddEq(cur->posx,tmp8);
				HX_STACK_LINE(307)
				Float tmp9 = (cur->vely * t);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				hx::AddEq(cur->posy,tmp9);
			}
			HX_STACK_LINE(307)
			bool tmp8 = (cur->angvel != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(307)
			if ((tmp8)){
				HX_STACK_LINE(307)
				Float tmp9 = (cur->sweep_angvel * delta);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				Float dr = tmp9;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(307)
				hx::AddEq(cur->rot,dr);
				HX_STACK_LINE(307)
				Float tmp10 = (dr * dr);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(307)
				bool tmp11 = (tmp10 > ((Float)0.0001));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(307)
				if ((tmp11)){
					HX_STACK_LINE(307)
					Float tmp12 = cur->rot;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(307)
					Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(307)
					cur->axisx = tmp13;
					HX_STACK_LINE(307)
					Float tmp14 = cur->rot;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(307)
					Float tmp15 = ::Math_obj::cos(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(307)
					cur->axisy = tmp15;
					HX_STACK_LINE(307)
					Dynamic();
				}
				else{
					HX_STACK_LINE(307)
					Float tmp12 = (dr * dr);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(307)
					Float d2 = tmp12;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(307)
					Float tmp13 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(307)
					Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(307)
					Float p = tmp14;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(307)
					Float tmp15 = (d2 * d2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(307)
					Float tmp16 = (Float(tmp15) / Float((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(307)
					Float tmp17 = ((int)1 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(307)
					Float m = tmp17;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(307)
					Float tmp18 = (p * cur->axisx);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(307)
					Float tmp19 = (dr * cur->axisy);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(307)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(307)
					Float tmp21 = m;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(307)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(307)
					Float nx = tmp22;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(307)
					Float tmp23 = (p * cur->axisy);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(307)
					Float tmp24 = (dr * cur->axisx);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(307)
					Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(307)
					Float tmp26 = m;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(307)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(307)
					cur->axisy = tmp27;
					HX_STACK_LINE(307)
					cur->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp6 = cur->shapes->head;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(308)
			while((true)){
				HX_STACK_LINE(308)
				bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(308)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(308)
				if ((tmp8)){
					HX_STACK_LINE(308)
					break;
				}
				HX_STACK_LINE(308)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					int tmp9 = s->type;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(308)
					int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(308)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(308)
					if ((tmp11)){
						HX_STACK_LINE(308)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(308)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(308)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(308)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(308)
		cur->zip_worldCOM = true;
	}
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(309)
		cur->zip_axis = true;
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp6 = cur->shapes->head;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(309)
			while((true)){
				HX_STACK_LINE(309)
				bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(309)
				if ((tmp8)){
					HX_STACK_LINE(309)
					break;
				}
				HX_STACK_LINE(309)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					int tmp9 = s->type;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(309)
					int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(309)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(309)
					if ((tmp11)){
						HX_STACK_LINE(309)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(309)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(309)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(309)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(309)
		cur->zip_worldCOM = true;
	}
	HX_STACK_LINE(310)
	cur->sweepTime = (int)0;
	HX_STACK_LINE(311)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,integrate,return )

bool Body_obj::isStatic( ){
	HX_STACK_FRAME("nape.phys.Body","isStatic",0x4abaa78e,"nape.phys.Body.isStatic","nape/phys/Body.hx",319,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(320)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isStatic,return )

bool Body_obj::isDynamic( ){
	HX_STACK_FRAME("nape.phys.Body","isDynamic",0x1848589f,"nape.phys.Body.isDynamic","nape/phys/Body.hx",328,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(329)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(329)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(329)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isDynamic,return )

bool Body_obj::isKinematic( ){
	HX_STACK_FRAME("nape.phys.Body","isKinematic",0xc32aba25,"nape.phys.Body.isKinematic","nape/phys/Body.hx",337,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(338)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(338)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(338)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(338)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isKinematic,return )

::nape::shape::ShapeList Body_obj::get_shapes( ){
	HX_STACK_FRAME("nape.phys.Body","get_shapes",0x9d317ad1,"nape.phys.Body.get_shapes","nape/phys/Body.hx",349,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(350)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	::nape::shape::ShapeList tmp1 = tmp->wrap_shapes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_shapes,return )

::nape::phys::Compound Body_obj::get_compound( ){
	HX_STACK_FRAME("nape.phys.Body","get_compound",0xcb7809ca,"nape.phys.Body.get_compound","nape/phys/Body.hx",363,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(364)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(364)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(364)
	::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(364)
	if ((tmp2)){
		HX_STACK_LINE(364)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(364)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		tmp3 = tmp4->compound->outer;
	}
	HX_STACK_LINE(364)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_compound,return )

::nape::phys::Compound Body_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_FRAME("nape.phys.Body","set_compound",0xe0712d3e,"nape.phys.Body.set_compound","nape/phys/Body.hx",366,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compound,"compound")
	HX_STACK_LINE(367)
	{
		HX_STACK_LINE(368)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(368)
		if ((tmp2)){
			HX_STACK_LINE(368)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(368)
			::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(368)
			tmp3 = tmp4->compound->outer;
		}
		HX_STACK_LINE(368)
		::nape::phys::Compound tmp4 = compound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(368)
		if ((tmp5)){
			HX_STACK_LINE(369)
			::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(369)
			::zpp_nape::phys::ZPP_Compound tmp7 = tmp6->compound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(369)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(369)
			::nape::phys::Compound tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(369)
			if ((tmp8)){
				HX_STACK_LINE(369)
				tmp9 = null();
			}
			else{
				HX_STACK_LINE(369)
				::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(369)
				tmp9 = tmp10->compound->outer;
			}
			HX_STACK_LINE(369)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(369)
			if ((tmp10)){
				HX_STACK_LINE(369)
				::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(369)
				::zpp_nape::phys::ZPP_Compound tmp12 = tmp11->compound;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(369)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(369)
				::nape::phys::Compound tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(369)
				if ((tmp13)){
					HX_STACK_LINE(369)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(369)
					::zpp_nape::phys::ZPP_Body tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(369)
					tmp14 = tmp15->compound->outer;
				}
				HX_STACK_LINE(369)
				::nape::phys::BodyList tmp15 = tmp14->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(369)
				tmp15->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(370)
			bool tmp11 = (compound != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(370)
			if ((tmp11)){
				HX_STACK_LINE(370)
				::nape::phys::BodyList tmp12 = compound->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(370)
				::nape::phys::BodyList _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(370)
				bool tmp13 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(370)
				if ((tmp13)){
					HX_STACK_LINE(370)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(370)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(373)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(373)
	::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(373)
	if ((tmp2)){
		HX_STACK_LINE(373)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(373)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(373)
		tmp3 = tmp4->compound->outer;
	}
	HX_STACK_LINE(373)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_compound,return )

::nape::space::Space Body_obj::get_space( ){
	HX_STACK_FRAME("nape.phys.Body","get_space",0xa3442507,"nape.phys.Body.get_space","nape/phys/Body.hx",385,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(386)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(386)
	if ((tmp2)){
		HX_STACK_LINE(386)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(386)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(386)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(386)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_space,return )

::nape::space::Space Body_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("nape.phys.Body","set_space",0x86951113,"nape.phys.Body.set_space","nape/phys/Body.hx",388,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(391)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		if ((tmp2)){
			HX_STACK_LINE(391)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
		}
		HX_STACK_LINE(393)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		tmp3->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
		HX_STACK_LINE(395)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(395)
		bool tmp5 = tmp4->world;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(395)
		if ((tmp5)){
			HX_STACK_LINE(395)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(397)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		::zpp_nape::space::ZPP_Space tmp7 = tmp6->space;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		::nape::space::Space tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(397)
		if ((tmp8)){
			HX_STACK_LINE(397)
			tmp9 = null();
		}
		else{
			HX_STACK_LINE(397)
			::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(397)
			tmp9 = tmp10->space->outer;
		}
		HX_STACK_LINE(397)
		::nape::space::Space tmp10 = space;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(397)
		bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(397)
		if ((tmp11)){
			HX_STACK_LINE(398)
			::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(398)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(398)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(398)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(398)
			if ((tmp14)){
				HX_STACK_LINE(398)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(398)
				::zpp_nape::phys::ZPP_Body tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(398)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(398)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(398)
			if ((tmp16)){
				HX_STACK_LINE(398)
				::zpp_nape::phys::ZPP_Body tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(398)
				tmp17->component->woken = false;
			}
			HX_STACK_LINE(399)
			::zpp_nape::phys::ZPP_Body tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(399)
			::zpp_nape::space::ZPP_Space tmp18 = tmp17->space;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(399)
			bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(399)
			::nape::space::Space tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(399)
			if ((tmp19)){
				HX_STACK_LINE(399)
				tmp20 = null();
			}
			else{
				HX_STACK_LINE(399)
				::zpp_nape::phys::ZPP_Body tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(399)
				tmp20 = tmp21->space->outer;
			}
			HX_STACK_LINE(399)
			bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(399)
			if ((tmp21)){
				HX_STACK_LINE(399)
				::zpp_nape::phys::ZPP_Body tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(399)
				::zpp_nape::space::ZPP_Space tmp23 = tmp22->space;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(399)
				bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(399)
				::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				if ((tmp24)){
					HX_STACK_LINE(399)
					tmp25 = null();
				}
				else{
					HX_STACK_LINE(399)
					::zpp_nape::phys::ZPP_Body tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(399)
					tmp25 = tmp26->space->outer;
				}
				HX_STACK_LINE(399)
				::nape::phys::BodyList tmp26 = tmp25->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(399)
				tmp26->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(400)
			bool tmp22 = (space != null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(400)
			if ((tmp22)){
				HX_STACK_LINE(400)
				::nape::phys::BodyList tmp23 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(400)
				::nape::phys::BodyList _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(400)
				bool tmp24 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(400)
				if ((tmp24)){
					HX_STACK_LINE(400)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(400)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(403)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(403)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(403)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(403)
	if ((tmp2)){
		HX_STACK_LINE(403)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(403)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(403)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(403)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_space,return )

::nape::dynamics::ArbiterList Body_obj::get_arbiters( ){
	HX_STACK_FRAME("nape.phys.Body","get_arbiters",0x6b5a72c9,"nape.phys.Body.get_arbiters","nape/phys/Body.hx",412,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(413)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(413)
	::nape::dynamics::ArbiterList tmp1 = tmp->wrap_arbiters;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(413)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(413)
	if ((tmp2)){
		HX_STACK_LINE(413)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		::zpp_nape::util::ZNPList_ZPP_Arbiter tmp4 = tmp3->arbiters;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(413)
		::nape::dynamics::ArbiterList tmp5 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(413)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(413)
		tmp6->wrap_arbiters = tmp5;
	}
	HX_STACK_LINE(414)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(414)
	::nape::dynamics::ArbiterList tmp4 = tmp3->wrap_arbiters;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(414)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_arbiters,return )

bool Body_obj::get_isSleeping( ){
	HX_STACK_FRAME("nape.phys.Body","get_isSleeping",0xc4504654,"nape.phys.Body.get_isSleeping","nape/phys/Body.hx",428,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(430)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(430)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(430)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(430)
	if ((tmp2)){
		HX_STACK_LINE(430)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: isSleeping makes no sense if the object is not contained within a Space","\x1a","\xc1","\xd3","\xeb"));
	}
	HX_STACK_LINE(432)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(432)
	bool tmp4 = tmp3->component->sleeping;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(432)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_isSleeping,return )

::nape::constraint::ConstraintList Body_obj::get_constraints( ){
	HX_STACK_FRAME("nape.phys.Body","get_constraints",0xcac71077,"nape.phys.Body.get_constraints","nape/phys/Body.hx",443,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(444)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(444)
	::nape::constraint::ConstraintList tmp1 = tmp->wrap_constraints;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(444)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(444)
	if ((tmp2)){
		HX_STACK_LINE(444)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(444)
		::zpp_nape::util::ZNPList_ZPP_Constraint tmp4 = tmp3->constraints;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(444)
		::nape::constraint::ConstraintList tmp5 = ::zpp_nape::util::ZPP_ConstraintList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(444)
		tmp6->wrap_constraints = tmp5;
	}
	HX_STACK_LINE(445)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(445)
	::nape::constraint::ConstraintList tmp4 = tmp3->wrap_constraints;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(445)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraints,return )

::nape::phys::Body Body_obj::copy( ){
	HX_STACK_FRAME("nape.phys.Body","copy",0x5d0e080b,"nape.phys.Body.copy","nape/phys/Body.hx",542,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	if ((tmp1)){
		HX_STACK_LINE(544)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world cannot be copied","\x8a","\x96","\x3d","\xf8"));
	}
	HX_STACK_LINE(546)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	::nape::phys::Body tmp3 = tmp2->copy();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(546)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,copy,return )

::nape::geom::Vec2 Body_obj::get_position( ){
	HX_STACK_FRAME("nape.phys.Body","get_position",0x14a2e708,"nape.phys.Body.get_position","nape/phys/Body.hx",564,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(565)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(565)
	::nape::geom::Vec2 tmp1 = tmp->wrap_pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(565)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(565)
	if ((tmp2)){
		HX_STACK_LINE(565)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(565)
		tmp3->setupPosition();
	}
	HX_STACK_LINE(566)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(566)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(566)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_position,return )

::nape::geom::Vec2 Body_obj::set_position( ::nape::geom::Vec2 position){
	HX_STACK_FRAME("nape.phys.Body","set_position",0x299c0a7c,"nape.phys.Body.set_position","nape/phys/Body.hx",568,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(569)
	{
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(572)
			bool tmp = (position != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(572)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(572)
			if ((tmp)){
				HX_STACK_LINE(572)
				tmp1 = position->zpp_disp;
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
		HX_STACK_LINE(576)
		bool tmp = (position == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		if ((tmp)){
			HX_STACK_LINE(576)
			::String tmp1 = HX_HCSTRING("Error: Body::position","\x79","\x55","\xb5","\x73");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(576)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(576)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(578)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(578)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(578)
				if ((tmp4)){
					HX_STACK_LINE(578)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(578)
					tmp5->setupPosition();
				}
				HX_STACK_LINE(578)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(578)
				tmp1 = tmp5->wrap_pos;
			}
			HX_STACK_LINE(578)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(578)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(578)
				if ((tmp2)){
					HX_STACK_LINE(578)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(578)
					tmp3 = false;
				}
				HX_STACK_LINE(578)
				if ((tmp3)){
					HX_STACK_LINE(578)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(578)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(578)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				bool tmp2 = (position != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(578)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(578)
				if ((tmp2)){
					HX_STACK_LINE(578)
					tmp3 = position->zpp_disp;
				}
				else{
					HX_STACK_LINE(578)
					tmp3 = false;
				}
				HX_STACK_LINE(578)
				if ((tmp3)){
					HX_STACK_LINE(578)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(578)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(578)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(578)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(578)
				if ((tmp2)){
					HX_STACK_LINE(578)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(578)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(578)
				if ((tmp3)){
					HX_STACK_LINE(578)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(578)
			bool tmp2 = (position == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(578)
			if ((tmp2)){
				HX_STACK_LINE(578)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(578)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(578)
				{
					HX_STACK_LINE(578)
					bool tmp5 = (position != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(578)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(578)
					if ((tmp5)){
						HX_STACK_LINE(578)
						tmp6 = position->zpp_disp;
					}
					else{
						HX_STACK_LINE(578)
						tmp6 = false;
					}
					HX_STACK_LINE(578)
					if ((tmp6)){
						HX_STACK_LINE(578)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(578)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(578)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(578)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(578)
						if ((tmp7)){
							HX_STACK_LINE(578)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(578)
					tmp4 = position->zpp_inner->x;
				}
				HX_STACK_LINE(578)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(578)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(578)
				{
					HX_STACK_LINE(578)
					bool tmp6 = (position != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(578)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(578)
					if ((tmp6)){
						HX_STACK_LINE(578)
						tmp7 = position->zpp_disp;
					}
					else{
						HX_STACK_LINE(578)
						tmp7 = false;
					}
					HX_STACK_LINE(578)
					if ((tmp7)){
						HX_STACK_LINE(578)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(578)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(578)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(578)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(578)
						if ((tmp8)){
							HX_STACK_LINE(578)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(578)
					tmp5 = position->zpp_inner->y;
				}
				HX_STACK_LINE(578)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(578)
				{
					HX_STACK_LINE(578)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(578)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(578)
					if ((tmp6)){
						HX_STACK_LINE(578)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(578)
						tmp7 = false;
					}
					HX_STACK_LINE(578)
					if ((tmp7)){
						HX_STACK_LINE(578)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(578)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(578)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(578)
				{
					HX_STACK_LINE(578)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(578)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(578)
					if ((tmp6)){
						HX_STACK_LINE(578)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(578)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(578)
					if ((tmp7)){
						HX_STACK_LINE(578)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(578)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(578)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(578)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(578)
				if ((tmp7)){
					HX_STACK_LINE(578)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(578)
					tmp8 = true;
				}
				HX_STACK_LINE(578)
				if ((tmp8)){
					HX_STACK_LINE(578)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(578)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(578)
				{
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(578)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(578)
						if ((tmp10)){
							HX_STACK_LINE(578)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(578)
							tmp11 = false;
						}
						HX_STACK_LINE(578)
						if ((tmp11)){
							HX_STACK_LINE(578)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(578)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(578)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(578)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(578)
						if ((tmp10)){
							HX_STACK_LINE(578)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(578)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(578)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(578)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(578)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(578)
				if ((tmp11)){
					HX_STACK_LINE(578)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						{
							HX_STACK_LINE(578)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(578)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(578)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(578)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(578)
							if ((tmp17)){
								HX_STACK_LINE(578)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(578)
								tmp16 = false;
							}
							HX_STACK_LINE(578)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(578)
							if ((tmp18)){
								HX_STACK_LINE(578)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(578)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(578)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(578)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(578)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(578)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(578)
						{
							HX_STACK_LINE(578)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(578)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(578)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(578)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(578)
							if ((tmp16)){
								HX_STACK_LINE(578)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(578)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(578)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(578)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(578)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(578)
					tmp12 = false;
				}
				HX_STACK_LINE(578)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(578)
				if ((tmp13)){
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(578)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(578)
						{
						}
					}
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(578)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(578)
						if ((tmp14)){
							HX_STACK_LINE(578)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(578)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(578)
				tmp3 = _this;
			}
			HX_STACK_LINE(578)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(578)
				tmp4 = position->zpp_inner->weak;
				HX_STACK_LINE(578)
				if ((tmp4)){
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						{
							HX_STACK_LINE(578)
							bool tmp5 = (position != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(578)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(578)
							if ((tmp5)){
								HX_STACK_LINE(578)
								tmp6 = position->zpp_disp;
							}
							else{
								HX_STACK_LINE(578)
								tmp6 = false;
							}
							HX_STACK_LINE(578)
							if ((tmp6)){
								HX_STACK_LINE(578)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(578)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(578)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(578)
						{
							HX_STACK_LINE(578)
							::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(578)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(578)
							if ((tmp5)){
								HX_STACK_LINE(578)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(578)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(578)
							if ((tmp6)){
								HX_STACK_LINE(578)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(578)
						bool tmp5 = position->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(578)
						if ((tmp5)){
							HX_STACK_LINE(578)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(578)
						::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(578)
						position->zpp_inner->outer = null();
						HX_STACK_LINE(578)
						position->zpp_inner = null();
						HX_STACK_LINE(578)
						{
							HX_STACK_LINE(578)
							::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(578)
							o->zpp_pool = null();
							HX_STACK_LINE(578)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(578)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(578)
							if ((tmp7)){
								HX_STACK_LINE(578)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(578)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(578)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(578)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(578)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(578)
						{
							HX_STACK_LINE(578)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(578)
							{
								HX_STACK_LINE(578)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(578)
								if ((tmp6)){
									HX_STACK_LINE(578)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(578)
									o->outer = null();
								}
								HX_STACK_LINE(578)
								o->_isimmutable = null();
								HX_STACK_LINE(578)
								o->_validate = null();
								HX_STACK_LINE(578)
								o->_invalidate = null();
							}
							HX_STACK_LINE(578)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(578)
							o->next = tmp6;
							HX_STACK_LINE(578)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(578)
					true;
				}
				else{
					HX_STACK_LINE(578)
					false;
				}
			}
			HX_STACK_LINE(578)
			ret;
		}
	}
	HX_STACK_LINE(580)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	{
		HX_STACK_LINE(580)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(580)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(580)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(580)
		if ((tmp3)){
			HX_STACK_LINE(580)
			::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(580)
			tmp4->setupPosition();
		}
		HX_STACK_LINE(580)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(580)
		tmp = tmp4->wrap_pos;
	}
	HX_STACK_LINE(580)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_position,return )

::nape::geom::Vec2 Body_obj::get_velocity( ){
	HX_STACK_FRAME("nape.phys.Body","get_velocity",0x68a6487c,"nape.phys.Body.get_velocity","nape/phys/Body.hx",593,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(594)
	::nape::geom::Vec2 tmp1 = tmp->wrap_vel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(594)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(594)
	if ((tmp2)){
		HX_STACK_LINE(594)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		tmp3->setupVelocity();
	}
	HX_STACK_LINE(595)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(595)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(595)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_velocity,return )

::nape::geom::Vec2 Body_obj::set_velocity( ::nape::geom::Vec2 velocity){
	HX_STACK_FRAME("nape.phys.Body","set_velocity",0x7d9f6bf0,"nape.phys.Body.set_velocity","nape/phys/Body.hx",597,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(velocity,"velocity")
	HX_STACK_LINE(598)
	{
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(601)
			bool tmp = (velocity != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(601)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(601)
			if ((tmp)){
				HX_STACK_LINE(601)
				tmp1 = velocity->zpp_disp;
			}
			else{
				HX_STACK_LINE(601)
				tmp1 = false;
			}
			HX_STACK_LINE(601)
			if ((tmp1)){
				HX_STACK_LINE(601)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(601)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(601)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(605)
		bool tmp = (velocity == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(605)
		if ((tmp)){
			HX_STACK_LINE(605)
			::String tmp1 = HX_HCSTRING("Error: Body::velocity","\xed","\xb6","\xb8","\xc7");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(605)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(607)
		{
			HX_STACK_LINE(607)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(607)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_vel;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(607)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(607)
				if ((tmp4)){
					HX_STACK_LINE(607)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(607)
					tmp5->setupVelocity();
				}
				HX_STACK_LINE(607)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(607)
				tmp1 = tmp5->wrap_vel;
			}
			HX_STACK_LINE(607)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(607)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(607)
				if ((tmp2)){
					HX_STACK_LINE(607)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(607)
					tmp3 = false;
				}
				HX_STACK_LINE(607)
				if ((tmp3)){
					HX_STACK_LINE(607)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(607)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(607)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				bool tmp2 = (velocity != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(607)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(607)
				if ((tmp2)){
					HX_STACK_LINE(607)
					tmp3 = velocity->zpp_disp;
				}
				else{
					HX_STACK_LINE(607)
					tmp3 = false;
				}
				HX_STACK_LINE(607)
				if ((tmp3)){
					HX_STACK_LINE(607)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(607)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(607)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(607)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(607)
				if ((tmp2)){
					HX_STACK_LINE(607)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(607)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(607)
				if ((tmp3)){
					HX_STACK_LINE(607)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(607)
			bool tmp2 = (velocity == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(607)
			if ((tmp2)){
				HX_STACK_LINE(607)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(607)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(607)
				{
					HX_STACK_LINE(607)
					bool tmp5 = (velocity != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(607)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(607)
					if ((tmp5)){
						HX_STACK_LINE(607)
						tmp6 = velocity->zpp_disp;
					}
					else{
						HX_STACK_LINE(607)
						tmp6 = false;
					}
					HX_STACK_LINE(607)
					if ((tmp6)){
						HX_STACK_LINE(607)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(607)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(607)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(607)
					{
						HX_STACK_LINE(607)
						::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(607)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(607)
						if ((tmp7)){
							HX_STACK_LINE(607)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(607)
					tmp4 = velocity->zpp_inner->x;
				}
				HX_STACK_LINE(607)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(607)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(607)
				{
					HX_STACK_LINE(607)
					bool tmp6 = (velocity != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(607)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(607)
					if ((tmp6)){
						HX_STACK_LINE(607)
						tmp7 = velocity->zpp_disp;
					}
					else{
						HX_STACK_LINE(607)
						tmp7 = false;
					}
					HX_STACK_LINE(607)
					if ((tmp7)){
						HX_STACK_LINE(607)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(607)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(607)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(607)
					{
						HX_STACK_LINE(607)
						::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(607)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(607)
						if ((tmp8)){
							HX_STACK_LINE(607)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(607)
					tmp5 = velocity->zpp_inner->y;
				}
				HX_STACK_LINE(607)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(607)
				{
					HX_STACK_LINE(607)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(607)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(607)
					if ((tmp6)){
						HX_STACK_LINE(607)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(607)
						tmp7 = false;
					}
					HX_STACK_LINE(607)
					if ((tmp7)){
						HX_STACK_LINE(607)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(607)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(607)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(607)
				{
					HX_STACK_LINE(607)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(607)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(607)
					if ((tmp6)){
						HX_STACK_LINE(607)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(607)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(607)
					if ((tmp7)){
						HX_STACK_LINE(607)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(607)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(607)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(607)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(607)
				if ((tmp7)){
					HX_STACK_LINE(607)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(607)
					tmp8 = true;
				}
				HX_STACK_LINE(607)
				if ((tmp8)){
					HX_STACK_LINE(607)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(607)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(607)
				{
					HX_STACK_LINE(607)
					{
						HX_STACK_LINE(607)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(607)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(607)
						if ((tmp10)){
							HX_STACK_LINE(607)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(607)
							tmp11 = false;
						}
						HX_STACK_LINE(607)
						if ((tmp11)){
							HX_STACK_LINE(607)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(607)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(607)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(607)
					{
						HX_STACK_LINE(607)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(607)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(607)
						if ((tmp10)){
							HX_STACK_LINE(607)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(607)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(607)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(607)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(607)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(607)
				if ((tmp11)){
					HX_STACK_LINE(607)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(607)
					{
						HX_STACK_LINE(607)
						{
							HX_STACK_LINE(607)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(607)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(607)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(607)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(607)
							if ((tmp17)){
								HX_STACK_LINE(607)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(607)
								tmp16 = false;
							}
							HX_STACK_LINE(607)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(607)
							if ((tmp18)){
								HX_STACK_LINE(607)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(607)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(607)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(607)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(607)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(607)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(607)
						{
							HX_STACK_LINE(607)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(607)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(607)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(607)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(607)
							if ((tmp16)){
								HX_STACK_LINE(607)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(607)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(607)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(607)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(607)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(607)
					tmp12 = false;
				}
				HX_STACK_LINE(607)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(607)
				if ((tmp13)){
					HX_STACK_LINE(607)
					{
						HX_STACK_LINE(607)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(607)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(607)
						{
						}
					}
					HX_STACK_LINE(607)
					{
						HX_STACK_LINE(607)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(607)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(607)
						if ((tmp14)){
							HX_STACK_LINE(607)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(607)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(607)
				tmp3 = _this;
			}
			HX_STACK_LINE(607)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(607)
				tmp4 = velocity->zpp_inner->weak;
				HX_STACK_LINE(607)
				if ((tmp4)){
					HX_STACK_LINE(607)
					{
						HX_STACK_LINE(607)
						{
							HX_STACK_LINE(607)
							bool tmp5 = (velocity != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(607)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(607)
							if ((tmp5)){
								HX_STACK_LINE(607)
								tmp6 = velocity->zpp_disp;
							}
							else{
								HX_STACK_LINE(607)
								tmp6 = false;
							}
							HX_STACK_LINE(607)
							if ((tmp6)){
								HX_STACK_LINE(607)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(607)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(607)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(607)
						{
							HX_STACK_LINE(607)
							::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(607)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(607)
							if ((tmp5)){
								HX_STACK_LINE(607)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(607)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(607)
							if ((tmp6)){
								HX_STACK_LINE(607)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(607)
						bool tmp5 = velocity->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(607)
						if ((tmp5)){
							HX_STACK_LINE(607)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(607)
						::zpp_nape::geom::ZPP_Vec2 inner = velocity->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(607)
						velocity->zpp_inner->outer = null();
						HX_STACK_LINE(607)
						velocity->zpp_inner = null();
						HX_STACK_LINE(607)
						{
							HX_STACK_LINE(607)
							::nape::geom::Vec2 o = velocity;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(607)
							o->zpp_pool = null();
							HX_STACK_LINE(607)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(607)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(607)
							if ((tmp7)){
								HX_STACK_LINE(607)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(607)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(607)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(607)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(607)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(607)
						{
							HX_STACK_LINE(607)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(607)
							{
								HX_STACK_LINE(607)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(607)
								if ((tmp6)){
									HX_STACK_LINE(607)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(607)
									o->outer = null();
								}
								HX_STACK_LINE(607)
								o->_isimmutable = null();
								HX_STACK_LINE(607)
								o->_validate = null();
								HX_STACK_LINE(607)
								o->_invalidate = null();
							}
							HX_STACK_LINE(607)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(607)
							o->next = tmp6;
							HX_STACK_LINE(607)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(607)
					true;
				}
				else{
					HX_STACK_LINE(607)
					false;
				}
			}
			HX_STACK_LINE(607)
			ret;
		}
	}
	HX_STACK_LINE(609)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	{
		HX_STACK_LINE(609)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_vel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		if ((tmp3)){
			HX_STACK_LINE(609)
			::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(609)
			tmp4->setupVelocity();
		}
		HX_STACK_LINE(609)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(609)
		tmp = tmp4->wrap_vel;
	}
	HX_STACK_LINE(609)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_velocity,return )

::nape::phys::Body Body_obj::setVelocityFromTarget( ::nape::geom::Vec2 targetPosition,Float targetRotation,Float deltaTime){
	HX_STACK_FRAME("nape.phys.Body","setVelocityFromTarget",0x4d9f6804,"nape.phys.Body.setVelocityFromTarget","nape/phys/Body.hx",628,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetPosition,"targetPosition")
	HX_STACK_ARG(targetRotation,"targetRotation")
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_LINE(629)
	{
		HX_STACK_LINE(631)
		bool tmp = (targetPosition != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(631)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(631)
		if ((tmp)){
			HX_STACK_LINE(631)
			tmp1 = targetPosition->zpp_disp;
		}
		else{
			HX_STACK_LINE(631)
			tmp1 = false;
		}
		HX_STACK_LINE(631)
		if ((tmp1)){
			HX_STACK_LINE(631)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(631)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(631)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(635)
	bool tmp = (targetPosition == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(635)
	if ((tmp)){
		HX_STACK_LINE(635)
		HX_STACK_DO_THROW(HX_HCSTRING("Cannot set velocity for null target position","\xde","\x2d","\xb3","\x30"));
	}
	HX_STACK_LINE(636)
	bool tmp1 = (deltaTime == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	if ((tmp1)){
		HX_STACK_LINE(636)
		HX_STACK_DO_THROW(HX_HCSTRING("deltaTime cannot be 0 for setVelocityFromTarget","\x38","\x1b","\x1b","\xd9"));
	}
	HX_STACK_LINE(638)
	Float tmp2 = (Float((int)1) / Float(deltaTime));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(638)
	Float idt = tmp2;		HX_STACK_VAR(idt,"idt");
	HX_STACK_LINE(639)
	{
		HX_STACK_LINE(639)
		::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(639)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(639)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(639)
			if ((tmp6)){
				HX_STACK_LINE(639)
				::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(639)
				tmp7->setupVelocity();
			}
			HX_STACK_LINE(639)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(639)
			tmp3 = tmp7->wrap_vel;
		}
		HX_STACK_LINE(639)
		::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(639)
		::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(639)
			::nape::geom::Vec2 tmp6 = tmp5->wrap_pos;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(639)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(639)
			if ((tmp7)){
				HX_STACK_LINE(639)
				::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(639)
				tmp8->setupPosition();
			}
			HX_STACK_LINE(639)
			::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(639)
			tmp4 = tmp8->wrap_pos;
		}
		HX_STACK_LINE(639)
		::nape::geom::Vec2 tmp5 = targetPosition->sub(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(639)
		Float tmp6 = idt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(639)
		::nape::geom::Vec2 tmp7 = tmp5->muleq(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(639)
		::nape::geom::Vec2 vector = tmp7;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(639)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(639)
			if ((tmp8)){
				HX_STACK_LINE(639)
				tmp9 = _this->zpp_disp;
			}
			else{
				HX_STACK_LINE(639)
				tmp9 = false;
			}
			HX_STACK_LINE(639)
			if ((tmp9)){
				HX_STACK_LINE(639)
				::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(639)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(639)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			bool tmp8 = (vector != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(639)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(639)
			if ((tmp8)){
				HX_STACK_LINE(639)
				tmp9 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(639)
				tmp9 = false;
			}
			HX_STACK_LINE(639)
			if ((tmp9)){
				HX_STACK_LINE(639)
				::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(639)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(639)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(639)
			bool tmp8 = _this1->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(639)
			if ((tmp8)){
				HX_STACK_LINE(639)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(639)
			bool tmp9 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(639)
			if ((tmp9)){
				HX_STACK_LINE(639)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(639)
		bool tmp8 = (vector == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(639)
		if ((tmp8)){
			HX_STACK_LINE(639)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
		}
		HX_STACK_LINE(639)
		::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(639)
			{
				HX_STACK_LINE(639)
				bool tmp11 = (vector != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(639)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(639)
				if ((tmp11)){
					HX_STACK_LINE(639)
					tmp12 = vector->zpp_disp;
				}
				else{
					HX_STACK_LINE(639)
					tmp12 = false;
				}
				HX_STACK_LINE(639)
				if ((tmp12)){
					HX_STACK_LINE(639)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(639)
					::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(639)
					HX_STACK_DO_THROW(tmp14);
				}
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(639)
					bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(639)
					if ((tmp13)){
						HX_STACK_LINE(639)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(639)
				tmp10 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(639)
			Float x = tmp10;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(639)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(639)
			{
				HX_STACK_LINE(639)
				bool tmp12 = (vector != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(639)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(639)
				if ((tmp12)){
					HX_STACK_LINE(639)
					tmp13 = vector->zpp_disp;
				}
				else{
					HX_STACK_LINE(639)
					tmp13 = false;
				}
				HX_STACK_LINE(639)
				if ((tmp13)){
					HX_STACK_LINE(639)
					::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(639)
					::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(639)
					HX_STACK_DO_THROW(tmp15);
				}
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(639)
					bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(639)
					if ((tmp14)){
						HX_STACK_LINE(639)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(639)
				tmp11 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(639)
			Float y = tmp11;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(639)
			{
				HX_STACK_LINE(639)
				bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(639)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(639)
				if ((tmp12)){
					HX_STACK_LINE(639)
					tmp13 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(639)
					tmp13 = false;
				}
				HX_STACK_LINE(639)
				if ((tmp13)){
					HX_STACK_LINE(639)
					::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(639)
					::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(639)
					HX_STACK_DO_THROW(tmp15);
				}
			}
			HX_STACK_LINE(639)
			{
				HX_STACK_LINE(639)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(639)
				bool tmp12 = _this1->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(639)
				if ((tmp12)){
					HX_STACK_LINE(639)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(639)
				bool tmp13 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(639)
				if ((tmp13)){
					HX_STACK_LINE(639)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(639)
			bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(639)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(639)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(639)
			if ((tmp13)){
				HX_STACK_LINE(639)
				tmp14 = (y != y);
			}
			else{
				HX_STACK_LINE(639)
				tmp14 = true;
			}
			HX_STACK_LINE(639)
			if ((tmp14)){
				HX_STACK_LINE(639)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(639)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(639)
			{
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					bool tmp16 = (_this != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(639)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(639)
					if ((tmp16)){
						HX_STACK_LINE(639)
						tmp17 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(639)
						tmp17 = false;
					}
					HX_STACK_LINE(639)
					if ((tmp17)){
						HX_STACK_LINE(639)
						::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(639)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(639)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(639)
					bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(639)
					if ((tmp16)){
						HX_STACK_LINE(639)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(639)
				tmp15 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(639)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(639)
			bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(639)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(639)
			if ((tmp17)){
				HX_STACK_LINE(639)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					{
						HX_STACK_LINE(639)
						bool tmp20 = (_this != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(639)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(639)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(639)
						bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(639)
						if ((tmp23)){
							HX_STACK_LINE(639)
							tmp22 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(639)
							tmp22 = false;
						}
						HX_STACK_LINE(639)
						bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(639)
						if ((tmp24)){
							HX_STACK_LINE(639)
							::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(639)
							::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(639)
							::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(639)
							::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(639)
							::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(639)
							HX_STACK_DO_THROW(tmp29);
						}
					}
					HX_STACK_LINE(639)
					{
						HX_STACK_LINE(639)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(639)
						bool tmp20 = (_this1->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(639)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(639)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(639)
						if ((tmp22)){
							HX_STACK_LINE(639)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(639)
					Float tmp20 = _this->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(639)
					tmp19 = tmp20;
				}
				HX_STACK_LINE(639)
				Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(639)
				tmp18 = (tmp19 == tmp20);
			}
			else{
				HX_STACK_LINE(639)
				tmp18 = false;
			}
			HX_STACK_LINE(639)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(639)
			if ((tmp19)){
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(639)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(639)
					{
					}
				}
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(639)
					bool tmp20 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(639)
					if ((tmp20)){
						HX_STACK_LINE(639)
						::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(639)
						_this1->_invalidate(tmp21);
					}
				}
			}
			HX_STACK_LINE(639)
			tmp9 = _this;
		}
		HX_STACK_LINE(639)
		::nape::geom::Vec2 ret = tmp9;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(639)
			tmp10 = vector->zpp_inner->weak;
			HX_STACK_LINE(639)
			if ((tmp10)){
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					{
						HX_STACK_LINE(639)
						bool tmp11 = (vector != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(639)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(639)
						if ((tmp11)){
							HX_STACK_LINE(639)
							tmp12 = vector->zpp_disp;
						}
						else{
							HX_STACK_LINE(639)
							tmp12 = false;
						}
						HX_STACK_LINE(639)
						if ((tmp12)){
							HX_STACK_LINE(639)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(639)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(639)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(639)
					{
						HX_STACK_LINE(639)
						::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(639)
						bool tmp11 = _this1->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(639)
						if ((tmp11)){
							HX_STACK_LINE(639)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(639)
						bool tmp12 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(639)
						if ((tmp12)){
							HX_STACK_LINE(639)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(639)
					bool tmp11 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(639)
					if ((tmp11)){
						HX_STACK_LINE(639)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(639)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(639)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(639)
					vector->zpp_inner = null();
					HX_STACK_LINE(639)
					{
						HX_STACK_LINE(639)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(639)
						o->zpp_pool = null();
						HX_STACK_LINE(639)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(639)
						bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(639)
						if ((tmp13)){
							HX_STACK_LINE(639)
							::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(639)
							tmp14->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(639)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(639)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(639)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(639)
					{
						HX_STACK_LINE(639)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(639)
						{
							HX_STACK_LINE(639)
							bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(639)
							if ((tmp12)){
								HX_STACK_LINE(639)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(639)
								o->outer = null();
							}
							HX_STACK_LINE(639)
							o->_isimmutable = null();
							HX_STACK_LINE(639)
							o->_validate = null();
							HX_STACK_LINE(639)
							o->_invalidate = null();
						}
						HX_STACK_LINE(639)
						::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(639)
						o->next = tmp12;
						HX_STACK_LINE(639)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(639)
				true;
			}
			else{
				HX_STACK_LINE(639)
				false;
			}
		}
		HX_STACK_LINE(639)
		ret;
	}
	HX_STACK_LINE(640)
	{
		HX_STACK_LINE(640)
		Float tmp3 = targetRotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(640)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(640)
		Float tmp5 = tmp4->rot;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(640)
		Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(640)
		Float tmp7 = idt;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(640)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(640)
		Float angularVel = tmp8;		HX_STACK_VAR(angularVel,"angularVel");
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(640)
			bool tmp10 = tmp9->world;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(640)
			if ((tmp10)){
				HX_STACK_LINE(640)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(640)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(640)
			Float tmp12 = tmp11->angvel;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(640)
			Float tmp13 = angularVel;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(640)
			bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(640)
			if ((tmp14)){
				HX_STACK_LINE(640)
				bool tmp15 = (angularVel != angularVel);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(640)
				if ((tmp15)){
					HX_STACK_LINE(640)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::angularVel cannot be NaN","\xc6","\x69","\x71","\x8d"));
				}
				HX_STACK_LINE(640)
				::zpp_nape::phys::ZPP_Body tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(640)
				int tmp17 = tmp16->type;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(640)
				int tmp18 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(640)
				bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(640)
				if ((tmp19)){
					HX_STACK_LINE(640)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: A static object cannot be given a velocity","\x3b","\xe0","\xbd","\x35"));
				}
				HX_STACK_LINE(640)
				::zpp_nape::phys::ZPP_Body tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(640)
				tmp20->angvel = angularVel;
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::phys::ZPP_Body tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(640)
					tmp21->wake();
				}
			}
		}
		HX_STACK_LINE(640)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(640)
		tmp9->angvel;
	}
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(642)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(643)
		tmp3 = targetPosition->zpp_inner->weak;
		HX_STACK_LINE(642)
		if ((tmp3)){
			HX_STACK_LINE(645)
			{
				HX_STACK_LINE(645)
				{
					HX_STACK_LINE(645)
					bool tmp4 = (targetPosition != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(645)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(645)
					if ((tmp4)){
						HX_STACK_LINE(645)
						tmp5 = targetPosition->zpp_disp;
					}
					else{
						HX_STACK_LINE(645)
						tmp5 = false;
					}
					HX_STACK_LINE(645)
					if ((tmp5)){
						HX_STACK_LINE(645)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(645)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(645)
						HX_STACK_DO_THROW(tmp7);
					}
				}
				HX_STACK_LINE(645)
				{
					HX_STACK_LINE(645)
					::zpp_nape::geom::ZPP_Vec2 _this = targetPosition->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(645)
					bool tmp4 = _this->_immutable;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(645)
					if ((tmp4)){
						HX_STACK_LINE(645)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(645)
					bool tmp5 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(645)
					if ((tmp5)){
						HX_STACK_LINE(645)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(645)
				bool tmp4 = targetPosition->zpp_inner->_inuse;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(645)
				if ((tmp4)){
					HX_STACK_LINE(645)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(645)
				::zpp_nape::geom::ZPP_Vec2 inner = targetPosition->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(645)
				targetPosition->zpp_inner->outer = null();
				HX_STACK_LINE(645)
				targetPosition->zpp_inner = null();
				HX_STACK_LINE(645)
				{
					HX_STACK_LINE(645)
					::nape::geom::Vec2 o = targetPosition;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(645)
					o->zpp_pool = null();
					HX_STACK_LINE(645)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(645)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(645)
					if ((tmp6)){
						HX_STACK_LINE(645)
						::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(645)
						tmp7->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(645)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(645)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(645)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(645)
				{
					HX_STACK_LINE(645)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						bool tmp5 = (o->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(645)
						if ((tmp5)){
							HX_STACK_LINE(645)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(645)
							o->outer = null();
						}
						HX_STACK_LINE(645)
						o->_isimmutable = null();
						HX_STACK_LINE(645)
						o->_validate = null();
						HX_STACK_LINE(645)
						o->_invalidate = null();
					}
					HX_STACK_LINE(645)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(645)
					o->next = tmp5;
					HX_STACK_LINE(645)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(646)
			true;
		}
		else{
			HX_STACK_LINE(649)
			false;
		}
	}
	HX_STACK_LINE(652)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,setVelocityFromTarget,return )

::nape::geom::Vec2 Body_obj::get_kinematicVel( ){
	HX_STACK_FRAME("nape.phys.Body","get_kinematicVel",0x61163437,"nape.phys.Body.get_kinematicVel","nape/phys/Body.hx",668,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(669)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(669)
	::nape::geom::Vec2 tmp1 = tmp->wrap_kinvel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(669)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(669)
	if ((tmp2)){
		HX_STACK_LINE(669)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(669)
		tmp3->setupkinvel();
	}
	HX_STACK_LINE(670)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(670)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_kinvel;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(670)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_kinematicVel,return )

::nape::geom::Vec2 Body_obj::set_kinematicVel( ::nape::geom::Vec2 kinematicVel){
	HX_STACK_FRAME("nape.phys.Body","set_kinematicVel",0xb75821ab,"nape.phys.Body.set_kinematicVel","nape/phys/Body.hx",672,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kinematicVel,"kinematicVel")
	HX_STACK_LINE(673)
	{
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(676)
			bool tmp = (kinematicVel != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(676)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(676)
			if ((tmp)){
				HX_STACK_LINE(676)
				tmp1 = kinematicVel->zpp_disp;
			}
			else{
				HX_STACK_LINE(676)
				tmp1 = false;
			}
			HX_STACK_LINE(676)
			if ((tmp1)){
				HX_STACK_LINE(676)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(676)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(676)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(680)
		bool tmp = (kinematicVel == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(680)
		if ((tmp)){
			HX_STACK_LINE(680)
			::String tmp1 = HX_HCSTRING("Error: Body::kinematicVel","\x28","\x2f","\x3f","\xd5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(680)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(680)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(682)
		{
			HX_STACK_LINE(682)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(682)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(682)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_kinvel;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(682)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(682)
				if ((tmp4)){
					HX_STACK_LINE(682)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(682)
					tmp5->setupkinvel();
				}
				HX_STACK_LINE(682)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(682)
				tmp1 = tmp5->wrap_kinvel;
			}
			HX_STACK_LINE(682)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(682)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(682)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(682)
				if ((tmp2)){
					HX_STACK_LINE(682)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(682)
					tmp3 = false;
				}
				HX_STACK_LINE(682)
				if ((tmp3)){
					HX_STACK_LINE(682)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(682)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(682)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(682)
				bool tmp2 = (kinematicVel != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(682)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(682)
				if ((tmp2)){
					HX_STACK_LINE(682)
					tmp3 = kinematicVel->zpp_disp;
				}
				else{
					HX_STACK_LINE(682)
					tmp3 = false;
				}
				HX_STACK_LINE(682)
				if ((tmp3)){
					HX_STACK_LINE(682)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(682)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(682)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(682)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(682)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(682)
				if ((tmp2)){
					HX_STACK_LINE(682)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(682)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(682)
				if ((tmp3)){
					HX_STACK_LINE(682)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(682)
			bool tmp2 = (kinematicVel == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(682)
			if ((tmp2)){
				HX_STACK_LINE(682)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(682)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(682)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					bool tmp5 = (kinematicVel != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(682)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(682)
					if ((tmp5)){
						HX_STACK_LINE(682)
						tmp6 = kinematicVel->zpp_disp;
					}
					else{
						HX_STACK_LINE(682)
						tmp6 = false;
					}
					HX_STACK_LINE(682)
					if ((tmp6)){
						HX_STACK_LINE(682)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(682)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(682)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(682)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(682)
						if ((tmp7)){
							HX_STACK_LINE(682)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(682)
					tmp4 = kinematicVel->zpp_inner->x;
				}
				HX_STACK_LINE(682)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(682)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					bool tmp6 = (kinematicVel != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(682)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(682)
					if ((tmp6)){
						HX_STACK_LINE(682)
						tmp7 = kinematicVel->zpp_disp;
					}
					else{
						HX_STACK_LINE(682)
						tmp7 = false;
					}
					HX_STACK_LINE(682)
					if ((tmp7)){
						HX_STACK_LINE(682)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(682)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(682)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(682)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(682)
						if ((tmp8)){
							HX_STACK_LINE(682)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(682)
					tmp5 = kinematicVel->zpp_inner->y;
				}
				HX_STACK_LINE(682)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(682)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(682)
					if ((tmp6)){
						HX_STACK_LINE(682)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(682)
						tmp7 = false;
					}
					HX_STACK_LINE(682)
					if ((tmp7)){
						HX_STACK_LINE(682)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(682)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(682)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(682)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(682)
					if ((tmp6)){
						HX_STACK_LINE(682)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(682)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(682)
					if ((tmp7)){
						HX_STACK_LINE(682)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(682)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(682)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(682)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(682)
				if ((tmp7)){
					HX_STACK_LINE(682)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(682)
					tmp8 = true;
				}
				HX_STACK_LINE(682)
				if ((tmp8)){
					HX_STACK_LINE(682)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(682)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(682)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(682)
						if ((tmp10)){
							HX_STACK_LINE(682)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(682)
							tmp11 = false;
						}
						HX_STACK_LINE(682)
						if ((tmp11)){
							HX_STACK_LINE(682)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(682)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(682)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(682)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(682)
						if ((tmp10)){
							HX_STACK_LINE(682)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(682)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(682)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(682)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(682)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(682)
				if ((tmp11)){
					HX_STACK_LINE(682)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						{
							HX_STACK_LINE(682)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(682)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(682)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(682)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(682)
							if ((tmp17)){
								HX_STACK_LINE(682)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(682)
								tmp16 = false;
							}
							HX_STACK_LINE(682)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(682)
							if ((tmp18)){
								HX_STACK_LINE(682)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(682)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(682)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(682)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(682)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(682)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(682)
						{
							HX_STACK_LINE(682)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(682)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(682)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(682)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(682)
							if ((tmp16)){
								HX_STACK_LINE(682)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(682)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(682)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(682)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(682)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(682)
					tmp12 = false;
				}
				HX_STACK_LINE(682)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(682)
				if ((tmp13)){
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(682)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(682)
						{
						}
					}
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(682)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(682)
						if ((tmp14)){
							HX_STACK_LINE(682)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(682)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(682)
				tmp3 = _this;
			}
			HX_STACK_LINE(682)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(682)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(682)
				tmp4 = kinematicVel->zpp_inner->weak;
				HX_STACK_LINE(682)
				if ((tmp4)){
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						{
							HX_STACK_LINE(682)
							bool tmp5 = (kinematicVel != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(682)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(682)
							if ((tmp5)){
								HX_STACK_LINE(682)
								tmp6 = kinematicVel->zpp_disp;
							}
							else{
								HX_STACK_LINE(682)
								tmp6 = false;
							}
							HX_STACK_LINE(682)
							if ((tmp6)){
								HX_STACK_LINE(682)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(682)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(682)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(682)
						{
							HX_STACK_LINE(682)
							::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(682)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(682)
							if ((tmp5)){
								HX_STACK_LINE(682)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(682)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(682)
							if ((tmp6)){
								HX_STACK_LINE(682)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(682)
						bool tmp5 = kinematicVel->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(682)
						if ((tmp5)){
							HX_STACK_LINE(682)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(682)
						::zpp_nape::geom::ZPP_Vec2 inner = kinematicVel->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(682)
						kinematicVel->zpp_inner->outer = null();
						HX_STACK_LINE(682)
						kinematicVel->zpp_inner = null();
						HX_STACK_LINE(682)
						{
							HX_STACK_LINE(682)
							::nape::geom::Vec2 o = kinematicVel;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(682)
							o->zpp_pool = null();
							HX_STACK_LINE(682)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(682)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(682)
							if ((tmp7)){
								HX_STACK_LINE(682)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(682)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(682)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(682)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(682)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(682)
						{
							HX_STACK_LINE(682)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(682)
							{
								HX_STACK_LINE(682)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(682)
								if ((tmp6)){
									HX_STACK_LINE(682)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(682)
									o->outer = null();
								}
								HX_STACK_LINE(682)
								o->_isimmutable = null();
								HX_STACK_LINE(682)
								o->_validate = null();
								HX_STACK_LINE(682)
								o->_invalidate = null();
							}
							HX_STACK_LINE(682)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(682)
							o->next = tmp6;
							HX_STACK_LINE(682)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(682)
					true;
				}
				else{
					HX_STACK_LINE(682)
					false;
				}
			}
			HX_STACK_LINE(682)
			ret;
		}
	}
	HX_STACK_LINE(684)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	{
		HX_STACK_LINE(684)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(684)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_kinvel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(684)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(684)
		if ((tmp3)){
			HX_STACK_LINE(684)
			::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(684)
			tmp4->setupkinvel();
		}
		HX_STACK_LINE(684)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(684)
		tmp = tmp4->wrap_kinvel;
	}
	HX_STACK_LINE(684)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_kinematicVel,return )

::nape::geom::Vec2 Body_obj::get_surfaceVel( ){
	HX_STACK_FRAME("nape.phys.Body","get_surfaceVel",0x19286a4f,"nape.phys.Body.get_surfaceVel","nape/phys/Body.hx",700,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(701)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(701)
	::nape::geom::Vec2 tmp1 = tmp->wrap_svel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(701)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(701)
	if ((tmp2)){
		HX_STACK_LINE(701)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(701)
		tmp3->setupsvel();
	}
	HX_STACK_LINE(702)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(702)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_svel;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(702)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_surfaceVel,return )

::nape::geom::Vec2 Body_obj::set_surfaceVel( ::nape::geom::Vec2 surfaceVel){
	HX_STACK_FRAME("nape.phys.Body","set_surfaceVel",0x394852c3,"nape.phys.Body.set_surfaceVel","nape/phys/Body.hx",704,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(surfaceVel,"surfaceVel")
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(708)
			bool tmp = (surfaceVel != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(708)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(708)
			if ((tmp)){
				HX_STACK_LINE(708)
				tmp1 = surfaceVel->zpp_disp;
			}
			else{
				HX_STACK_LINE(708)
				tmp1 = false;
			}
			HX_STACK_LINE(708)
			if ((tmp1)){
				HX_STACK_LINE(708)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(708)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(708)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(712)
		bool tmp = (surfaceVel == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(712)
		if ((tmp)){
			HX_STACK_LINE(712)
			::String tmp1 = HX_HCSTRING("Error: Body::surfaceVel","\x00","\x17","\x88","\x34");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(712)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(712)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(714)
		{
			HX_STACK_LINE(714)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(714)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_svel;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(714)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(714)
				if ((tmp4)){
					HX_STACK_LINE(714)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(714)
					tmp5->setupsvel();
				}
				HX_STACK_LINE(714)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(714)
				tmp1 = tmp5->wrap_svel;
			}
			HX_STACK_LINE(714)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(714)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(714)
				if ((tmp2)){
					HX_STACK_LINE(714)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(714)
					tmp3 = false;
				}
				HX_STACK_LINE(714)
				if ((tmp3)){
					HX_STACK_LINE(714)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(714)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(714)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				bool tmp2 = (surfaceVel != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(714)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(714)
				if ((tmp2)){
					HX_STACK_LINE(714)
					tmp3 = surfaceVel->zpp_disp;
				}
				else{
					HX_STACK_LINE(714)
					tmp3 = false;
				}
				HX_STACK_LINE(714)
				if ((tmp3)){
					HX_STACK_LINE(714)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(714)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(714)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(714)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(714)
				if ((tmp2)){
					HX_STACK_LINE(714)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(714)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(714)
				if ((tmp3)){
					HX_STACK_LINE(714)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(714)
			bool tmp2 = (surfaceVel == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(714)
			if ((tmp2)){
				HX_STACK_LINE(714)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(714)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					bool tmp5 = (surfaceVel != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(714)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(714)
					if ((tmp5)){
						HX_STACK_LINE(714)
						tmp6 = surfaceVel->zpp_disp;
					}
					else{
						HX_STACK_LINE(714)
						tmp6 = false;
					}
					HX_STACK_LINE(714)
					if ((tmp6)){
						HX_STACK_LINE(714)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(714)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(714)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(714)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(714)
						if ((tmp7)){
							HX_STACK_LINE(714)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(714)
					tmp4 = surfaceVel->zpp_inner->x;
				}
				HX_STACK_LINE(714)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(714)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					bool tmp6 = (surfaceVel != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(714)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(714)
					if ((tmp6)){
						HX_STACK_LINE(714)
						tmp7 = surfaceVel->zpp_disp;
					}
					else{
						HX_STACK_LINE(714)
						tmp7 = false;
					}
					HX_STACK_LINE(714)
					if ((tmp7)){
						HX_STACK_LINE(714)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(714)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(714)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(714)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(714)
						if ((tmp8)){
							HX_STACK_LINE(714)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(714)
					tmp5 = surfaceVel->zpp_inner->y;
				}
				HX_STACK_LINE(714)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(714)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(714)
					if ((tmp6)){
						HX_STACK_LINE(714)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(714)
						tmp7 = false;
					}
					HX_STACK_LINE(714)
					if ((tmp7)){
						HX_STACK_LINE(714)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(714)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(714)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(714)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(714)
					if ((tmp6)){
						HX_STACK_LINE(714)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(714)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(714)
					if ((tmp7)){
						HX_STACK_LINE(714)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(714)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(714)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(714)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(714)
				if ((tmp7)){
					HX_STACK_LINE(714)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(714)
					tmp8 = true;
				}
				HX_STACK_LINE(714)
				if ((tmp8)){
					HX_STACK_LINE(714)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(714)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(714)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(714)
						if ((tmp10)){
							HX_STACK_LINE(714)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(714)
							tmp11 = false;
						}
						HX_STACK_LINE(714)
						if ((tmp11)){
							HX_STACK_LINE(714)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(714)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(714)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(714)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(714)
						if ((tmp10)){
							HX_STACK_LINE(714)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(714)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(714)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(714)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(714)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(714)
				if ((tmp11)){
					HX_STACK_LINE(714)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						{
							HX_STACK_LINE(714)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(714)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(714)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(714)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(714)
							if ((tmp17)){
								HX_STACK_LINE(714)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(714)
								tmp16 = false;
							}
							HX_STACK_LINE(714)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(714)
							if ((tmp18)){
								HX_STACK_LINE(714)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(714)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(714)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(714)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(714)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(714)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(714)
						{
							HX_STACK_LINE(714)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(714)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(714)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(714)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(714)
							if ((tmp16)){
								HX_STACK_LINE(714)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(714)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(714)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(714)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(714)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(714)
					tmp12 = false;
				}
				HX_STACK_LINE(714)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(714)
				if ((tmp13)){
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(714)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(714)
						{
						}
					}
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(714)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(714)
						if ((tmp14)){
							HX_STACK_LINE(714)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(714)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(714)
				tmp3 = _this;
			}
			HX_STACK_LINE(714)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(714)
				tmp4 = surfaceVel->zpp_inner->weak;
				HX_STACK_LINE(714)
				if ((tmp4)){
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						{
							HX_STACK_LINE(714)
							bool tmp5 = (surfaceVel != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(714)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(714)
							if ((tmp5)){
								HX_STACK_LINE(714)
								tmp6 = surfaceVel->zpp_disp;
							}
							else{
								HX_STACK_LINE(714)
								tmp6 = false;
							}
							HX_STACK_LINE(714)
							if ((tmp6)){
								HX_STACK_LINE(714)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(714)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(714)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(714)
						{
							HX_STACK_LINE(714)
							::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(714)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(714)
							if ((tmp5)){
								HX_STACK_LINE(714)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(714)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(714)
							if ((tmp6)){
								HX_STACK_LINE(714)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(714)
						bool tmp5 = surfaceVel->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(714)
						if ((tmp5)){
							HX_STACK_LINE(714)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(714)
						::zpp_nape::geom::ZPP_Vec2 inner = surfaceVel->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(714)
						surfaceVel->zpp_inner->outer = null();
						HX_STACK_LINE(714)
						surfaceVel->zpp_inner = null();
						HX_STACK_LINE(714)
						{
							HX_STACK_LINE(714)
							::nape::geom::Vec2 o = surfaceVel;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(714)
							o->zpp_pool = null();
							HX_STACK_LINE(714)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(714)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(714)
							if ((tmp7)){
								HX_STACK_LINE(714)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(714)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(714)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(714)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(714)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(714)
						{
							HX_STACK_LINE(714)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(714)
							{
								HX_STACK_LINE(714)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(714)
								if ((tmp6)){
									HX_STACK_LINE(714)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(714)
									o->outer = null();
								}
								HX_STACK_LINE(714)
								o->_isimmutable = null();
								HX_STACK_LINE(714)
								o->_validate = null();
								HX_STACK_LINE(714)
								o->_invalidate = null();
							}
							HX_STACK_LINE(714)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(714)
							o->next = tmp6;
							HX_STACK_LINE(714)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(714)
					true;
				}
				else{
					HX_STACK_LINE(714)
					false;
				}
			}
			HX_STACK_LINE(714)
			ret;
		}
	}
	HX_STACK_LINE(716)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(716)
	{
		HX_STACK_LINE(716)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(716)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_svel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(716)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(716)
		if ((tmp3)){
			HX_STACK_LINE(716)
			::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(716)
			tmp4->setupsvel();
		}
		HX_STACK_LINE(716)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(716)
		tmp = tmp4->wrap_svel;
	}
	HX_STACK_LINE(716)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_surfaceVel,return )

::nape::geom::Vec2 Body_obj::get_force( ){
	HX_STACK_FRAME("nape.phys.Body","get_force",0x26724a2c,"nape.phys.Body.get_force","nape/phys/Body.hx",729,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(730)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	::nape::geom::Vec2 tmp1 = tmp->wrap_force;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(730)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(730)
	if ((tmp2)){
		HX_STACK_LINE(730)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(730)
		tmp3->setupForce();
	}
	HX_STACK_LINE(731)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(731)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_force;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(731)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_force,return )

::nape::geom::Vec2 Body_obj::set_force( ::nape::geom::Vec2 force){
	HX_STACK_FRAME("nape.phys.Body","set_force",0x09c33638,"nape.phys.Body.set_force","nape/phys/Body.hx",733,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
	HX_STACK_LINE(734)
	{
		HX_STACK_LINE(735)
		{
			HX_STACK_LINE(737)
			bool tmp = (force != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(737)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(737)
			if ((tmp)){
				HX_STACK_LINE(737)
				tmp1 = force->zpp_disp;
			}
			else{
				HX_STACK_LINE(737)
				tmp1 = false;
			}
			HX_STACK_LINE(737)
			if ((tmp1)){
				HX_STACK_LINE(737)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(737)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(737)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(741)
		bool tmp = (force == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(741)
		if ((tmp)){
			HX_STACK_LINE(741)
			::String tmp1 = HX_HCSTRING("Error: Body::force","\x1b","\xdb","\xb3","\xf2");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(741)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(741)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(743)
		{
			HX_STACK_LINE(743)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(743)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_force;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(743)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(743)
				if ((tmp4)){
					HX_STACK_LINE(743)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(743)
					tmp5->setupForce();
				}
				HX_STACK_LINE(743)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(743)
				tmp1 = tmp5->wrap_force;
			}
			HX_STACK_LINE(743)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(743)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(743)
				if ((tmp2)){
					HX_STACK_LINE(743)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(743)
					tmp3 = false;
				}
				HX_STACK_LINE(743)
				if ((tmp3)){
					HX_STACK_LINE(743)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(743)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(743)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				bool tmp2 = (force != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(743)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(743)
				if ((tmp2)){
					HX_STACK_LINE(743)
					tmp3 = force->zpp_disp;
				}
				else{
					HX_STACK_LINE(743)
					tmp3 = false;
				}
				HX_STACK_LINE(743)
				if ((tmp3)){
					HX_STACK_LINE(743)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(743)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(743)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(743)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(743)
				if ((tmp2)){
					HX_STACK_LINE(743)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(743)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(743)
				if ((tmp3)){
					HX_STACK_LINE(743)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(743)
			bool tmp2 = (force == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(743)
			if ((tmp2)){
				HX_STACK_LINE(743)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(743)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(743)
				{
					HX_STACK_LINE(743)
					bool tmp5 = (force != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(743)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(743)
					if ((tmp5)){
						HX_STACK_LINE(743)
						tmp6 = force->zpp_disp;
					}
					else{
						HX_STACK_LINE(743)
						tmp6 = false;
					}
					HX_STACK_LINE(743)
					if ((tmp6)){
						HX_STACK_LINE(743)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(743)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(743)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(743)
					{
						HX_STACK_LINE(743)
						::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(743)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(743)
						if ((tmp7)){
							HX_STACK_LINE(743)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(743)
					tmp4 = force->zpp_inner->x;
				}
				HX_STACK_LINE(743)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(743)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(743)
				{
					HX_STACK_LINE(743)
					bool tmp6 = (force != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(743)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(743)
					if ((tmp6)){
						HX_STACK_LINE(743)
						tmp7 = force->zpp_disp;
					}
					else{
						HX_STACK_LINE(743)
						tmp7 = false;
					}
					HX_STACK_LINE(743)
					if ((tmp7)){
						HX_STACK_LINE(743)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(743)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(743)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(743)
					{
						HX_STACK_LINE(743)
						::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(743)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(743)
						if ((tmp8)){
							HX_STACK_LINE(743)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(743)
					tmp5 = force->zpp_inner->y;
				}
				HX_STACK_LINE(743)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(743)
				{
					HX_STACK_LINE(743)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(743)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(743)
					if ((tmp6)){
						HX_STACK_LINE(743)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(743)
						tmp7 = false;
					}
					HX_STACK_LINE(743)
					if ((tmp7)){
						HX_STACK_LINE(743)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(743)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(743)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(743)
				{
					HX_STACK_LINE(743)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(743)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(743)
					if ((tmp6)){
						HX_STACK_LINE(743)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(743)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(743)
					if ((tmp7)){
						HX_STACK_LINE(743)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(743)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(743)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(743)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(743)
				if ((tmp7)){
					HX_STACK_LINE(743)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(743)
					tmp8 = true;
				}
				HX_STACK_LINE(743)
				if ((tmp8)){
					HX_STACK_LINE(743)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(743)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(743)
				{
					HX_STACK_LINE(743)
					{
						HX_STACK_LINE(743)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(743)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(743)
						if ((tmp10)){
							HX_STACK_LINE(743)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(743)
							tmp11 = false;
						}
						HX_STACK_LINE(743)
						if ((tmp11)){
							HX_STACK_LINE(743)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(743)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(743)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(743)
					{
						HX_STACK_LINE(743)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(743)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(743)
						if ((tmp10)){
							HX_STACK_LINE(743)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(743)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(743)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(743)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(743)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(743)
				if ((tmp11)){
					HX_STACK_LINE(743)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(743)
					{
						HX_STACK_LINE(743)
						{
							HX_STACK_LINE(743)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(743)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(743)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(743)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(743)
							if ((tmp17)){
								HX_STACK_LINE(743)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(743)
								tmp16 = false;
							}
							HX_STACK_LINE(743)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(743)
							if ((tmp18)){
								HX_STACK_LINE(743)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(743)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(743)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(743)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(743)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(743)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(743)
						{
							HX_STACK_LINE(743)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(743)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(743)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(743)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(743)
							if ((tmp16)){
								HX_STACK_LINE(743)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(743)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(743)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(743)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(743)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(743)
					tmp12 = false;
				}
				HX_STACK_LINE(743)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(743)
				if ((tmp13)){
					HX_STACK_LINE(743)
					{
						HX_STACK_LINE(743)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(743)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(743)
						{
						}
					}
					HX_STACK_LINE(743)
					{
						HX_STACK_LINE(743)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(743)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(743)
						if ((tmp14)){
							HX_STACK_LINE(743)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(743)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(743)
				tmp3 = _this;
			}
			HX_STACK_LINE(743)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(743)
				tmp4 = force->zpp_inner->weak;
				HX_STACK_LINE(743)
				if ((tmp4)){
					HX_STACK_LINE(743)
					{
						HX_STACK_LINE(743)
						{
							HX_STACK_LINE(743)
							bool tmp5 = (force != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(743)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(743)
							if ((tmp5)){
								HX_STACK_LINE(743)
								tmp6 = force->zpp_disp;
							}
							else{
								HX_STACK_LINE(743)
								tmp6 = false;
							}
							HX_STACK_LINE(743)
							if ((tmp6)){
								HX_STACK_LINE(743)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(743)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(743)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(743)
						{
							HX_STACK_LINE(743)
							::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(743)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(743)
							if ((tmp5)){
								HX_STACK_LINE(743)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(743)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(743)
							if ((tmp6)){
								HX_STACK_LINE(743)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(743)
						bool tmp5 = force->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(743)
						if ((tmp5)){
							HX_STACK_LINE(743)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(743)
						::zpp_nape::geom::ZPP_Vec2 inner = force->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(743)
						force->zpp_inner->outer = null();
						HX_STACK_LINE(743)
						force->zpp_inner = null();
						HX_STACK_LINE(743)
						{
							HX_STACK_LINE(743)
							::nape::geom::Vec2 o = force;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(743)
							o->zpp_pool = null();
							HX_STACK_LINE(743)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(743)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(743)
							if ((tmp7)){
								HX_STACK_LINE(743)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(743)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(743)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(743)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(743)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(743)
						{
							HX_STACK_LINE(743)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(743)
							{
								HX_STACK_LINE(743)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(743)
								if ((tmp6)){
									HX_STACK_LINE(743)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(743)
									o->outer = null();
								}
								HX_STACK_LINE(743)
								o->_isimmutable = null();
								HX_STACK_LINE(743)
								o->_validate = null();
								HX_STACK_LINE(743)
								o->_invalidate = null();
							}
							HX_STACK_LINE(743)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(743)
							o->next = tmp6;
							HX_STACK_LINE(743)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(743)
					true;
				}
				else{
					HX_STACK_LINE(743)
					false;
				}
			}
			HX_STACK_LINE(743)
			ret;
		}
	}
	HX_STACK_LINE(745)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(745)
	{
		HX_STACK_LINE(745)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(745)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_force;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(745)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(745)
		if ((tmp3)){
			HX_STACK_LINE(745)
			::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(745)
			tmp4->setupForce();
		}
		HX_STACK_LINE(745)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(745)
		tmp = tmp4->wrap_force;
	}
	HX_STACK_LINE(745)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_force,return )

::nape::geom::Vec3 Body_obj::get_constraintVelocity( ){
	HX_STACK_FRAME("nape.phys.Body","get_constraintVelocity",0x30b476b9,"nape.phys.Body.get_constraintVelocity","nape/phys/Body.hx",755,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(756)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(756)
	::nape::geom::Vec3 tmp1 = tmp->wrapcvel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(756)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(756)
	if ((tmp2)){
		HX_STACK_LINE(756)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(756)
		tmp3->setup_cvel();
	}
	HX_STACK_LINE(757)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(757)
	::nape::geom::Vec3 tmp4 = tmp3->wrapcvel;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(757)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintVelocity,return )

Float Body_obj::get_rotation( ){
	HX_STACK_FRAME("nape.phys.Body","get_rotation",0x522e839d,"nape.phys.Body.get_rotation","nape/phys/Body.hx",773,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(774)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(774)
	Float tmp1 = tmp->rot;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(774)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_rotation,return )

Float Body_obj::set_rotation( Float rotation){
	HX_STACK_FRAME("nape.phys.Body","set_rotation",0x6727a711,"nape.phys.Body.set_rotation","nape/phys/Body.hx",776,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(777)
	{
		HX_STACK_LINE(778)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(778)
		tmp->immutable_midstep(HX_HCSTRING("Body::rotation","\x40","\x9d","\x24","\x6b"));
		HX_STACK_LINE(780)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(780)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(780)
		if ((tmp2)){
			HX_STACK_LINE(780)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(783)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(783)
		int tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(783)
		int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(783)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(783)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(783)
		if ((tmp6)){
			HX_STACK_LINE(783)
			::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(783)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(783)
			::zpp_nape::space::ZPP_Space tmp10 = tmp9->space;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(783)
			tmp7 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(783)
			tmp7 = false;
		}
		HX_STACK_LINE(783)
		if ((tmp7)){
			HX_STACK_LINE(783)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Static objects cannot be rotated once inside a Space","\x1b","\xe2","\x01","\xc9"));
		}
		HX_STACK_LINE(785)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(785)
		Float tmp9 = tmp8->rot;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(785)
		Float tmp10 = rotation;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(785)
		bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(785)
		if ((tmp11)){
			HX_STACK_LINE(787)
			bool tmp12 = (rotation != rotation);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(787)
			if ((tmp12)){
				HX_STACK_LINE(787)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::rotation cannot be NaN","\xa9","\xa5","\x47","\x9c"));
			}
			HX_STACK_LINE(789)
			::zpp_nape::phys::ZPP_Body tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(789)
			tmp13->rot = rotation;
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(790)
				::zpp_nape::phys::ZPP_Body tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(790)
				::zpp_nape::phys::ZPP_Body _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(790)
				_this->zip_axis = true;
				HX_STACK_LINE(790)
				{
					HX_STACK_LINE(790)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp15 = _this->shapes->head;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(790)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(790)
					while((true)){
						HX_STACK_LINE(790)
						bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(790)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(790)
						if ((tmp17)){
							HX_STACK_LINE(790)
							break;
						}
						HX_STACK_LINE(790)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(790)
						{
							HX_STACK_LINE(790)
							int tmp18 = s->type;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(790)
							int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(790)
							bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(790)
							if ((tmp20)){
								HX_STACK_LINE(790)
								s->polygon->invalidate_gverts();
								HX_STACK_LINE(790)
								s->polygon->invalidate_gaxi();
							}
							HX_STACK_LINE(790)
							s->invalidate_worldCOM();
						}
						HX_STACK_LINE(790)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(790)
				_this->zip_worldCOM = true;
			}
			HX_STACK_LINE(791)
			::zpp_nape::phys::ZPP_Body tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(791)
			tmp14->wake();
		}
	}
	HX_STACK_LINE(794)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	Float tmp1 = tmp->rot;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(794)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_rotation,return )

Float Body_obj::get_angularVel( ){
	HX_STACK_FRAME("nape.phys.Body","get_angularVel",0x11a0c0ba,"nape.phys.Body.get_angularVel","nape/phys/Body.hx",805,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(806)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(806)
	Float tmp1 = tmp->angvel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(806)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_angularVel,return )

Float Body_obj::set_angularVel( Float angularVel){
	HX_STACK_FRAME("nape.phys.Body","set_angularVel",0x31c0a92e,"nape.phys.Body.set_angularVel","nape/phys/Body.hx",808,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angularVel,"angularVel")
	HX_STACK_LINE(809)
	{
		HX_STACK_LINE(811)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(811)
		bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(811)
		if ((tmp1)){
			HX_STACK_LINE(811)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(813)
		::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(813)
		Float tmp3 = tmp2->angvel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(813)
		Float tmp4 = angularVel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(813)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(813)
		if ((tmp5)){
			HX_STACK_LINE(815)
			bool tmp6 = (angularVel != angularVel);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(815)
			if ((tmp6)){
				HX_STACK_LINE(815)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::angularVel cannot be NaN","\xc6","\x69","\x71","\x8d"));
			}
			HX_STACK_LINE(818)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(818)
			int tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(818)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(818)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(818)
			if ((tmp10)){
				HX_STACK_LINE(818)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: A static object cannot be given a velocity","\x3b","\xe0","\xbd","\x35"));
			}
			HX_STACK_LINE(820)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(820)
			tmp11->angvel = angularVel;
			HX_STACK_LINE(821)
			{
				HX_STACK_LINE(821)
				::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(821)
				tmp12->wake();
			}
		}
	}
	HX_STACK_LINE(824)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(824)
	Float tmp1 = tmp->angvel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(824)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_angularVel,return )

Float Body_obj::get_kinAngVel( ){
	HX_STACK_FRAME("nape.phys.Body","get_kinAngVel",0x4002dd94,"nape.phys.Body.get_kinAngVel","nape/phys/Body.hx",840,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(841)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(841)
	Float tmp1 = tmp->kinangvel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(841)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_kinAngVel,return )

Float Body_obj::set_kinAngVel( Float kinAngVel){
	HX_STACK_FRAME("nape.phys.Body","set_kinAngVel",0x8508bfa0,"nape.phys.Body.set_kinAngVel","nape/phys/Body.hx",843,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kinAngVel,"kinAngVel")
	HX_STACK_LINE(844)
	{
		HX_STACK_LINE(846)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(846)
		bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(846)
		if ((tmp1)){
			HX_STACK_LINE(846)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(848)
		::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(848)
		Float tmp3 = tmp2->kinangvel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(848)
		Float tmp4 = kinAngVel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(848)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(848)
		if ((tmp5)){
			HX_STACK_LINE(850)
			bool tmp6 = (kinAngVel != kinAngVel);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(850)
			if ((tmp6)){
				HX_STACK_LINE(850)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::kinAngVel cannot be NaN","\x5e","\xe8","\x3f","\x15"));
			}
			HX_STACK_LINE(852)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(852)
			tmp7->kinangvel = kinAngVel;
			HX_STACK_LINE(853)
			{
				HX_STACK_LINE(853)
				::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(853)
				tmp8->wake();
			}
		}
	}
	HX_STACK_LINE(856)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(856)
	Float tmp1 = tmp->kinangvel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(856)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_kinAngVel,return )

Float Body_obj::get_torque( ){
	HX_STACK_FRAME("nape.phys.Body","get_torque",0x16985769,"nape.phys.Body.get_torque","nape/phys/Body.hx",869,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(870)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(870)
	Float tmp1 = tmp->torque;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(870)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_torque,return )

Float Body_obj::set_torque( Float torque){
	HX_STACK_FRAME("nape.phys.Body","set_torque",0x1a15f5dd,"nape.phys.Body.set_torque","nape/phys/Body.hx",872,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(torque,"torque")
	HX_STACK_LINE(873)
	{
		HX_STACK_LINE(875)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(875)
		bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(875)
		if ((tmp1)){
			HX_STACK_LINE(875)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(878)
		::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(878)
		int tmp3 = tmp2->type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(878)
		int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(878)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(878)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(878)
		if ((tmp6)){
			HX_STACK_LINE(878)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Non-dynamic body cannot have torque applied.","\x1d","\x98","\x9c","\x52"));
		}
		HX_STACK_LINE(881)
		bool tmp7 = (torque != torque);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(881)
		if ((tmp7)){
			HX_STACK_LINE(881)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::torque cannot be NaN","\x35","\x68","\x4e","\x79"));
		}
		HX_STACK_LINE(883)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(883)
		Float tmp9 = tmp8->torque;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(883)
		Float tmp10 = torque;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(883)
		bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(883)
		if ((tmp11)){
			HX_STACK_LINE(884)
			::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(884)
			tmp12->torque = torque;
			HX_STACK_LINE(885)
			{
				HX_STACK_LINE(885)
				::zpp_nape::phys::ZPP_Body tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(885)
				tmp13->wake();
			}
		}
	}
	HX_STACK_LINE(888)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(888)
	Float tmp1 = tmp->torque;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(888)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_torque,return )

::nape::geom::AABB Body_obj::get_bounds( ){
	HX_STACK_FRAME("nape.phys.Body","get_bounds",0xe6252714,"nape.phys.Body.get_bounds","nape/phys/Body.hx",901,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(903)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(903)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(903)
	if ((tmp1)){
		HX_STACK_LINE(903)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no bounds","\x88","\xea","\xf6","\xa3"));
	}
	HX_STACK_LINE(905)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(905)
	::nape::geom::AABB tmp3 = tmp2->aabb->wrapper();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(905)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_bounds,return )

bool Body_obj::get_allowMovement( ){
	HX_STACK_FRAME("nape.phys.Body","get_allowMovement",0x7d735819,"nape.phys.Body.get_allowMovement","nape/phys/Body.hx",918,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(919)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(919)
	bool tmp1 = tmp->nomove;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(919)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(919)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_allowMovement,return )

bool Body_obj::set_allowMovement( bool allowMovement){
	HX_STACK_FRAME("nape.phys.Body","set_allowMovement",0xa0e13025,"nape.phys.Body.set_allowMovement","nape/phys/Body.hx",921,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(allowMovement,"allowMovement")
	HX_STACK_LINE(922)
	{
		HX_STACK_LINE(923)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(923)
		bool tmp1 = allowMovement;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(923)
		::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(923)
		::String tmp3 = (HX_HCSTRING("Body::","\x02","\x8e","\x7d","\x8f") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(923)
		tmp->immutable_midstep(tmp3);
		HX_STACK_LINE(924)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(924)
		bool tmp5 = tmp4->nomove;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(924)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(924)
		bool tmp7 = allowMovement;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(924)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(924)
		if ((tmp8)){
			HX_STACK_LINE(925)
			bool tmp9 = allowMovement;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(925)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(925)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(925)
			tmp11->nomove = tmp10;
			HX_STACK_LINE(926)
			::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(926)
			tmp12->invalidate_mass();
		}
	}
	HX_STACK_LINE(929)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(929)
	bool tmp1 = tmp->nomove;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(929)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(929)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_allowMovement,return )

bool Body_obj::get_allowRotation( ){
	HX_STACK_FRAME("nape.phys.Body","get_allowRotation",0x85c21028,"nape.phys.Body.get_allowRotation","nape/phys/Body.hx",942,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(943)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(943)
	bool tmp1 = tmp->norotate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(943)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(943)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_allowRotation,return )

bool Body_obj::set_allowRotation( bool allowRotation){
	HX_STACK_FRAME("nape.phys.Body","set_allowRotation",0xa92fe834,"nape.phys.Body.set_allowRotation","nape/phys/Body.hx",945,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(allowRotation,"allowRotation")
	HX_STACK_LINE(946)
	{
		HX_STACK_LINE(947)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(947)
		bool tmp1 = allowRotation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(947)
		::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(947)
		::String tmp3 = (HX_HCSTRING("Body::","\x02","\x8e","\x7d","\x8f") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(947)
		tmp->immutable_midstep(tmp3);
		HX_STACK_LINE(948)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(948)
		bool tmp5 = tmp4->norotate;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(948)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(948)
		bool tmp7 = allowRotation;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(948)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(948)
		if ((tmp8)){
			HX_STACK_LINE(949)
			bool tmp9 = allowRotation;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(949)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(949)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(949)
			tmp11->norotate = tmp10;
			HX_STACK_LINE(950)
			::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(950)
			tmp12->invalidate_inertia();
		}
	}
	HX_STACK_LINE(953)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(953)
	bool tmp1 = tmp->norotate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(953)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(953)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_allowRotation,return )

::nape::phys::MassMode Body_obj::get_massMode( ){
	HX_STACK_FRAME("nape.phys.Body","get_massMode",0xcb1e10d6,"nape.phys.Body.get_massMode","nape/phys/Body.hx",966,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(967)
	::nape::phys::MassMode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(967)
	{
		HX_STACK_LINE(967)
		::nape::phys::MassMode tmp1 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(967)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(967)
		if ((tmp2)){
			HX_STACK_LINE(967)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(967)
			::nape::phys::MassMode tmp3 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(967)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = tmp3;
			HX_STACK_LINE(967)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(967)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
	}
	HX_STACK_LINE(967)
	::nape::phys::MassMode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(967)
	{
		HX_STACK_LINE(967)
		::nape::phys::MassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(967)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(967)
		if ((tmp3)){
			HX_STACK_LINE(967)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(967)
			::nape::phys::MassMode tmp4 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(967)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = tmp4;
			HX_STACK_LINE(967)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(967)
		tmp1 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
	}
	HX_STACK_LINE(967)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(967)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(967)
	int tmp4 = tmp3->massMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(967)
	::nape::phys::MassMode tmp5 = tmp2->__get(tmp4).StaticCast< ::nape::phys::MassMode >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(967)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_massMode,return )

::nape::phys::MassMode Body_obj::set_massMode( ::nape::phys::MassMode massMode){
	HX_STACK_FRAME("nape.phys.Body","set_massMode",0xe017344a,"nape.phys.Body.set_massMode","nape/phys/Body.hx",969,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(massMode,"massMode")
	HX_STACK_LINE(970)
	{
		HX_STACK_LINE(971)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(971)
		tmp->immutable_midstep(HX_HCSTRING("Body::massMode","\x79","\x2a","\x14","\xe4"));
		HX_STACK_LINE(973)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(973)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(973)
		if ((tmp2)){
			HX_STACK_LINE(973)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(976)
		bool tmp3 = (massMode == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(976)
		if ((tmp3)){
			HX_STACK_LINE(976)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: cannot use null massMode","\x88","\x73","\x80","\xde"));
		}
		HX_STACK_LINE(978)
		::nape::phys::MassMode tmp4 = massMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(978)
		::nape::phys::MassMode tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(978)
		{
			HX_STACK_LINE(978)
			::nape::phys::MassMode tmp6 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(978)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(978)
			if ((tmp7)){
				HX_STACK_LINE(978)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(978)
				::nape::phys::MassMode tmp8 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(978)
				::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = tmp8;
				HX_STACK_LINE(978)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(978)
			tmp5 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
		}
		HX_STACK_LINE(978)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(978)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(978)
		if ((tmp6)){
			HX_STACK_LINE(978)
			tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;
		}
		else{
			HX_STACK_LINE(978)
			tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_FIXED;
		}
		HX_STACK_LINE(978)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(978)
		tmp8->massMode = tmp7;
		HX_STACK_LINE(979)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(979)
		tmp9->invalidate_mass();
	}
	HX_STACK_LINE(981)
	::nape::phys::MassMode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(981)
	{
		HX_STACK_LINE(981)
		::nape::phys::MassMode tmp1 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(981)
		if ((tmp2)){
			HX_STACK_LINE(981)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(981)
			::nape::phys::MassMode tmp3 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(981)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = tmp3;
			HX_STACK_LINE(981)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(981)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
	}
	HX_STACK_LINE(981)
	::nape::phys::MassMode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(981)
	{
		HX_STACK_LINE(981)
		::nape::phys::MassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(981)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(981)
		if ((tmp3)){
			HX_STACK_LINE(981)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(981)
			::nape::phys::MassMode tmp4 = ::nape::phys::MassMode_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(981)
			::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = tmp4;
			HX_STACK_LINE(981)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(981)
		tmp1 = ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
	}
	HX_STACK_LINE(981)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(981)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(981)
	int tmp4 = tmp3->massMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(981)
	::nape::phys::MassMode tmp5 = tmp2->__get(tmp4).StaticCast< ::nape::phys::MassMode >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(981)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_massMode,return )

Float Body_obj::get_constraintMass( ){
	HX_STACK_FRAME("nape.phys.Body","get_constraintMass",0xb4d73790,"nape.phys.Body.get_constraintMass","nape/phys/Body.hx",992,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(993)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(993)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(993)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(993)
	if ((tmp2)){
		HX_STACK_LINE(993)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(993)
		tmp3->validate_mass();
	}
	HX_STACK_LINE(994)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(994)
	Float tmp4 = tmp3->smass;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(994)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintMass,return )

Float Body_obj::get_mass( ){
	HX_STACK_FRAME("nape.phys.Body","get_mass",0xb4662bd3,"nape.phys.Body.get_mass","nape/phys/Body.hx",1010,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1012)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1012)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1012)
	if ((tmp1)){
		HX_STACK_LINE(1012)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
	}
	HX_STACK_LINE(1014)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1014)
	tmp2->validate_mass();
	HX_STACK_LINE(1016)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1016)
	int tmp4 = tmp3->massMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1016)
	int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1016)
	bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1016)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1016)
	if ((tmp6)){
		HX_STACK_LINE(1016)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1016)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1016)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp10 = tmp9->shapes->head;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1016)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1016)
		tmp7 = (tmp11 == null());
	}
	else{
		HX_STACK_LINE(1016)
		tmp7 = false;
	}
	HX_STACK_LINE(1016)
	if ((tmp7)){
		HX_STACK_LINE(1016)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
	}
	HX_STACK_LINE(1018)
	::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1018)
	Float tmp9 = tmp8->cmass;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1018)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_mass,return )

Float Body_obj::set_mass( Float mass){
	HX_STACK_FRAME("nape.phys.Body","set_mass",0x62c38547,"nape.phys.Body.set_mass","nape/phys/Body.hx",1020,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mass,"mass")
	HX_STACK_LINE(1021)
	{
		HX_STACK_LINE(1022)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1022)
		tmp->immutable_midstep(HX_HCSTRING("Body::mass","\xf6","\xf7","\x7f","\xe7"));
		HX_STACK_LINE(1024)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1024)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1024)
		if ((tmp2)){
			HX_STACK_LINE(1024)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(1027)
		bool tmp3 = (mass != mass);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1027)
		if ((tmp3)){
			HX_STACK_LINE(1027)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Mass cannot be NaN","\xfd","\xf2","\xbe","\x8f"));
		}
		HX_STACK_LINE(1028)
		bool tmp4 = (mass <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1028)
		if ((tmp4)){
			HX_STACK_LINE(1028)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Mass must be strictly positive","\x9f","\xd2","\xed","\x97"));
		}
		HX_STACK_LINE(1029)
		Float tmp5 = mass;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1029)
		Float tmp6 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1029)
		bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1029)
		if ((tmp7)){
			HX_STACK_LINE(1029)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Mass cannot be infinite, use allowMovement = false instead","\x1b","\x22","\xab","\x35"));
		}
		HX_STACK_LINE(1031)
		int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_FIXED;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1031)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1031)
		tmp9->massMode = tmp8;
		HX_STACK_LINE(1032)
		::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1032)
		tmp10->cmass = mass;
		HX_STACK_LINE(1033)
		::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1033)
		tmp11->invalidate_mass();
	}
	HX_STACK_LINE(1035)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1035)
	{
		HX_STACK_LINE(1035)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1035)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1035)
		if ((tmp2)){
			HX_STACK_LINE(1035)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
		}
		HX_STACK_LINE(1035)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1035)
		tmp3->validate_mass();
		HX_STACK_LINE(1035)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1035)
		int tmp5 = tmp4->massMode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1035)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1035)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1035)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1035)
		if ((tmp7)){
			HX_STACK_LINE(1035)
			::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1035)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1035)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp11 = tmp10->shapes->head;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1035)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1035)
			tmp8 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1035)
			tmp8 = false;
		}
		HX_STACK_LINE(1035)
		if ((tmp8)){
			HX_STACK_LINE(1035)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
		}
		HX_STACK_LINE(1035)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1035)
		tmp = tmp9->cmass;
	}
	HX_STACK_LINE(1035)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_mass,return )

::nape::phys::GravMassMode Body_obj::get_gravMassMode( ){
	HX_STACK_FRAME("nape.phys.Body","get_gravMassMode",0x470a9856,"nape.phys.Body.get_gravMassMode","nape/phys/Body.hx",1046,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1047)
	::nape::phys::GravMassMode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1047)
	{
		HX_STACK_LINE(1047)
		::nape::phys::GravMassMode tmp1 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1047)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1047)
		if ((tmp2)){
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1047)
			::nape::phys::GravMassMode tmp3 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = tmp3;
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1047)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
	}
	HX_STACK_LINE(1047)
	::nape::phys::GravMassMode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1047)
	{
		HX_STACK_LINE(1047)
		::nape::phys::GravMassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1047)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1047)
		if ((tmp3)){
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1047)
			::nape::phys::GravMassMode tmp4 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = tmp4;
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1047)
		tmp1 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
	}
	HX_STACK_LINE(1047)
	::nape::phys::GravMassMode tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1047)
	{
		HX_STACK_LINE(1047)
		::nape::phys::GravMassMode tmp3 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1047)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1047)
		if ((tmp4)){
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1047)
			::nape::phys::GravMassMode tmp5 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = tmp5;
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1047)
		tmp2 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
	}
	HX_STACK_LINE(1047)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1047)
	::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1047)
	int tmp5 = tmp4->massMode;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1047)
	::nape::phys::GravMassMode tmp6 = tmp3->__get(tmp5).StaticCast< ::nape::phys::GravMassMode >();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1047)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMassMode,return )

::nape::phys::GravMassMode Body_obj::set_gravMassMode( ::nape::phys::GravMassMode gravMassMode){
	HX_STACK_FRAME("nape.phys.Body","set_gravMassMode",0x9d4c85ca,"nape.phys.Body.set_gravMassMode","nape/phys/Body.hx",1049,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravMassMode,"gravMassMode")
	HX_STACK_LINE(1050)
	{
		HX_STACK_LINE(1051)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1051)
		tmp->immutable_midstep(HX_HCSTRING("Body::gravMassMode","\x79","\xbf","\xd1","\xf1"));
		HX_STACK_LINE(1053)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1053)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1053)
		if ((tmp2)){
			HX_STACK_LINE(1053)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(1056)
		bool tmp3 = (gravMassMode == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1056)
		if ((tmp3)){
			HX_STACK_LINE(1056)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot use null gravMassMode","\x28","\xc8","\x7d","\xc2"));
		}
		HX_STACK_LINE(1058)
		::nape::phys::GravMassMode tmp4 = gravMassMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1058)
		::nape::phys::GravMassMode tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1058)
		{
			HX_STACK_LINE(1058)
			::nape::phys::GravMassMode tmp6 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1058)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1058)
			if ((tmp7)){
				HX_STACK_LINE(1058)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(1058)
				::nape::phys::GravMassMode tmp8 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1058)
				::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = tmp8;
				HX_STACK_LINE(1058)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(1058)
			tmp5 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
		}
		HX_STACK_LINE(1058)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1058)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1058)
		if ((tmp6)){
			HX_STACK_LINE(1058)
			tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;
		}
		else{
			HX_STACK_LINE(1058)
			::nape::phys::GravMassMode tmp8 = gravMassMode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1058)
			::nape::phys::GravMassMode tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1058)
			{
				HX_STACK_LINE(1058)
				::nape::phys::GravMassMode tmp10 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1058)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1058)
				if ((tmp11)){
					HX_STACK_LINE(1058)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1058)
					::nape::phys::GravMassMode tmp12 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1058)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = tmp12;
					HX_STACK_LINE(1058)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1058)
				tmp9 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
			}
			HX_STACK_LINE(1058)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1058)
			if ((tmp10)){
				HX_STACK_LINE(1058)
				tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;
			}
			else{
				HX_STACK_LINE(1058)
				tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;
			}
		}
		HX_STACK_LINE(1058)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1058)
		tmp8->gravMassMode = tmp7;
		HX_STACK_LINE(1059)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1059)
		tmp9->invalidate_gravMass();
	}
	HX_STACK_LINE(1061)
	::nape::phys::GravMassMode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1061)
	{
		HX_STACK_LINE(1061)
		::nape::phys::GravMassMode tmp1 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1061)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1061)
		if ((tmp2)){
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1061)
			::nape::phys::GravMassMode tmp3 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = tmp3;
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1061)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
	}
	HX_STACK_LINE(1061)
	::nape::phys::GravMassMode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1061)
	{
		HX_STACK_LINE(1061)
		::nape::phys::GravMassMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1061)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1061)
		if ((tmp3)){
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1061)
			::nape::phys::GravMassMode tmp4 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = tmp4;
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1061)
		tmp1 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
	}
	HX_STACK_LINE(1061)
	::nape::phys::GravMassMode tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1061)
	{
		HX_STACK_LINE(1061)
		::nape::phys::GravMassMode tmp3 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1061)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1061)
		if ((tmp4)){
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1061)
			::nape::phys::GravMassMode tmp5 = ::nape::phys::GravMassMode_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = tmp5;
			HX_STACK_LINE(1061)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1061)
		tmp2 = ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
	}
	HX_STACK_LINE(1061)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1061)
	::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1061)
	int tmp5 = tmp4->massMode;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1061)
	::nape::phys::GravMassMode tmp6 = tmp3->__get(tmp5).StaticCast< ::nape::phys::GravMassMode >();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1061)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMassMode,return )

Float Body_obj::get_gravMass( ){
	HX_STACK_FRAME("nape.phys.Body","get_gravMass",0xbe98f353,"nape.phys.Body.get_gravMass","nape/phys/Body.hx",1072,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1074)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1074)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1074)
	if ((tmp1)){
		HX_STACK_LINE(1074)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no gravMass","\xc7","\x7b","\xf9","\xe6"));
	}
	HX_STACK_LINE(1076)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1076)
	tmp2->validate_gravMass();
	HX_STACK_LINE(1078)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1078)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->shapes->head;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1078)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1078)
	if ((tmp5)){
		HX_STACK_LINE(1079)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1079)
		int tmp7 = tmp6->massMode;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1079)
		int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1079)
		bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1079)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1079)
		if ((tmp9)){
			HX_STACK_LINE(1079)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1079)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1079)
			int tmp13 = tmp12->gravMassMode;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1079)
			int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1079)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1079)
			tmp10 = (tmp13 != tmp15);
		}
		else{
			HX_STACK_LINE(1079)
			tmp10 = false;
		}
		HX_STACK_LINE(1079)
		if ((tmp10)){
			HX_STACK_LINE(1079)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass/gravMass modes; Body::gravMass only makes sense if it contains Shapes","\xbe","\x98","\xa4","\x72"));
		}
	}
	HX_STACK_LINE(1082)
	::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1082)
	Float tmp7 = tmp6->gravMass;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1082)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMass,return )

Float Body_obj::set_gravMass( Float gravMass){
	HX_STACK_FRAME("nape.phys.Body","set_gravMass",0xd39216c7,"nape.phys.Body.set_gravMass","nape/phys/Body.hx",1084,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravMass,"gravMass")
	HX_STACK_LINE(1085)
	{
		HX_STACK_LINE(1086)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1086)
		tmp->immutable_midstep(HX_HCSTRING("Body::gravMass","\xf6","\x0c","\x8f","\xd7"));
		HX_STACK_LINE(1088)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1088)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1088)
		if ((tmp2)){
			HX_STACK_LINE(1088)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(1091)
		bool tmp3 = (gravMass != gravMass);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1091)
		if ((tmp3)){
			HX_STACK_LINE(1091)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: gravMass cannot be NaN","\xdd","\x39","\x2d","\x37"));
		}
		HX_STACK_LINE(1093)
		int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1093)
		::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1093)
		tmp5->gravMassMode = tmp4;
		HX_STACK_LINE(1094)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1094)
		tmp6->gravMass = gravMass;
		HX_STACK_LINE(1095)
		::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1095)
		tmp7->invalidate_gravMass();
	}
	HX_STACK_LINE(1097)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1097)
	{
		HX_STACK_LINE(1097)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1097)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1097)
		if ((tmp2)){
			HX_STACK_LINE(1097)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no gravMass","\xc7","\x7b","\xf9","\xe6"));
		}
		HX_STACK_LINE(1097)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1097)
		tmp3->validate_gravMass();
		HX_STACK_LINE(1097)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1097)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = tmp4->shapes->head;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1097)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1097)
		if ((tmp6)){
			HX_STACK_LINE(1097)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1097)
			int tmp8 = tmp7->massMode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1097)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1097)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1097)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1097)
			if ((tmp10)){
				HX_STACK_LINE(1097)
				::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1097)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1097)
				int tmp14 = tmp13->gravMassMode;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1097)
				int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1097)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1097)
				tmp11 = (tmp14 != tmp16);
			}
			else{
				HX_STACK_LINE(1097)
				tmp11 = false;
			}
			HX_STACK_LINE(1097)
			if ((tmp11)){
				HX_STACK_LINE(1097)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass/gravMass modes; Body::gravMass only makes sense if it contains Shapes","\xbe","\x98","\xa4","\x72"));
			}
		}
		HX_STACK_LINE(1097)
		::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1097)
		tmp = tmp7->gravMass;
	}
	HX_STACK_LINE(1097)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMass,return )

Float Body_obj::get_gravMassScale( ){
	HX_STACK_FRAME("nape.phys.Body","get_gravMassScale",0x4eb15e37,"nape.phys.Body.get_gravMassScale","nape/phys/Body.hx",1109,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1110)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1110)
	tmp->validate_gravMassScale();
	HX_STACK_LINE(1112)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1112)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp2 = tmp1->shapes->head;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1112)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1112)
	if ((tmp3)){
		HX_STACK_LINE(1113)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1113)
		int tmp5 = tmp4->massMode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1113)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1113)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1113)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1113)
		if ((tmp7)){
			HX_STACK_LINE(1113)
			::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1113)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1113)
			int tmp11 = tmp10->gravMassMode;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1113)
			int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1113)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1113)
			tmp8 = (tmp11 != tmp13);
		}
		else{
			HX_STACK_LINE(1113)
			tmp8 = false;
		}
		HX_STACK_LINE(1113)
		if ((tmp8)){
			HX_STACK_LINE(1113)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass/gravMass modes; Body::gravMassScale only makes sense if it contains Shapes","\x58","\xa2","\x3a","\x09"));
		}
	}
	HX_STACK_LINE(1116)
	::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1116)
	Float tmp5 = tmp4->gravMassScale;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1116)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMassScale,return )

Float Body_obj::set_gravMassScale( Float gravMassScale){
	HX_STACK_FRAME("nape.phys.Body","set_gravMassScale",0x721f3643,"nape.phys.Body.set_gravMassScale","nape/phys/Body.hx",1118,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravMassScale,"gravMassScale")
	HX_STACK_LINE(1119)
	{
		HX_STACK_LINE(1120)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1120)
		tmp->immutable_midstep(HX_HCSTRING("Body::gravMassScale","\xb4","\x75","\x2c","\x12"));
		HX_STACK_LINE(1122)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1122)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1122)
		if ((tmp2)){
			HX_STACK_LINE(1122)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(1125)
		bool tmp3 = (gravMassScale != gravMassScale);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1125)
		if ((tmp3)){
			HX_STACK_LINE(1125)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: gravMassScale cannot be NaN","\x03","\x59","\xed","\x9c"));
		}
		HX_STACK_LINE(1127)
		int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1127)
		::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1127)
		tmp5->gravMassMode = tmp4;
		HX_STACK_LINE(1128)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1128)
		tmp6->gravMassScale = gravMassScale;
		HX_STACK_LINE(1129)
		::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1129)
		tmp7->invalidate_gravMassScale();
	}
	HX_STACK_LINE(1131)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	{
		HX_STACK_LINE(1131)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1131)
		tmp1->validate_gravMassScale();
		HX_STACK_LINE(1131)
		::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1131)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = tmp2->shapes->head;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1131)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1131)
		if ((tmp4)){
			HX_STACK_LINE(1131)
			::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1131)
			int tmp6 = tmp5->massMode;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1131)
			int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1131)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1131)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1131)
			if ((tmp8)){
				HX_STACK_LINE(1131)
				::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1131)
				::zpp_nape::phys::ZPP_Body tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1131)
				int tmp12 = tmp11->gravMassMode;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1131)
				int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1131)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1131)
				tmp9 = (tmp12 != tmp14);
			}
			else{
				HX_STACK_LINE(1131)
				tmp9 = false;
			}
			HX_STACK_LINE(1131)
			if ((tmp9)){
				HX_STACK_LINE(1131)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass/gravMass modes; Body::gravMassScale only makes sense if it contains Shapes","\x58","\xa2","\x3a","\x09"));
			}
		}
		HX_STACK_LINE(1131)
		::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1131)
		tmp = tmp5->gravMassScale;
	}
	HX_STACK_LINE(1131)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMassScale,return )

::nape::phys::InertiaMode Body_obj::get_inertiaMode( ){
	HX_STACK_FRAME("nape.phys.Body","get_inertiaMode",0xc04c747e,"nape.phys.Body.get_inertiaMode","nape/phys/Body.hx",1142,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1143)
	::nape::phys::InertiaMode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1143)
	{
		HX_STACK_LINE(1143)
		::nape::phys::InertiaMode tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1143)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1143)
		if ((tmp2)){
			HX_STACK_LINE(1143)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1143)
			::nape::phys::InertiaMode tmp3 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1143)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = tmp3;
			HX_STACK_LINE(1143)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1143)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
	}
	HX_STACK_LINE(1143)
	::nape::phys::InertiaMode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1143)
	{
		HX_STACK_LINE(1143)
		::nape::phys::InertiaMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1143)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1143)
		if ((tmp3)){
			HX_STACK_LINE(1143)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1143)
			::nape::phys::InertiaMode tmp4 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1143)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = tmp4;
			HX_STACK_LINE(1143)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1143)
		tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
	}
	HX_STACK_LINE(1143)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1143)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1143)
	int tmp4 = tmp3->inertiaMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1143)
	::nape::phys::InertiaMode tmp5 = tmp2->__get(tmp4).StaticCast< ::nape::phys::InertiaMode >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1143)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_inertiaMode,return )

::nape::phys::InertiaMode Body_obj::set_inertiaMode( ::nape::phys::InertiaMode inertiaMode){
	HX_STACK_FRAME("nape.phys.Body","set_inertiaMode",0xbc17f18a,"nape.phys.Body.set_inertiaMode","nape/phys/Body.hx",1145,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inertiaMode,"inertiaMode")
	HX_STACK_LINE(1146)
	{
		HX_STACK_LINE(1147)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1147)
		tmp->immutable_midstep(HX_HCSTRING("Body::inertiaMode","\xbb","\xc2","\x29","\x17"));
		HX_STACK_LINE(1149)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1149)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1149)
		if ((tmp2)){
			HX_STACK_LINE(1149)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(1152)
		bool tmp3 = (inertiaMode == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1152)
		if ((tmp3)){
			HX_STACK_LINE(1152)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot use null InertiaMode","\xcc","\x3c","\x56","\xe5"));
		}
		HX_STACK_LINE(1154)
		::nape::phys::InertiaMode tmp4 = inertiaMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1154)
		::nape::phys::InertiaMode tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1154)
		{
			HX_STACK_LINE(1154)
			::nape::phys::InertiaMode tmp6 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1154)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1154)
			if ((tmp7)){
				HX_STACK_LINE(1154)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(1154)
				::nape::phys::InertiaMode tmp8 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1154)
				::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = tmp8;
				HX_STACK_LINE(1154)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(1154)
			tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
		}
		HX_STACK_LINE(1154)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1154)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1154)
		if ((tmp6)){
			HX_STACK_LINE(1154)
			tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED;
		}
		else{
			HX_STACK_LINE(1154)
			tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;
		}
		HX_STACK_LINE(1154)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1154)
		tmp8->inertiaMode = tmp7;
		HX_STACK_LINE(1155)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1155)
		tmp9->invalidate_inertia();
	}
	HX_STACK_LINE(1157)
	::nape::phys::InertiaMode tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1157)
	{
		HX_STACK_LINE(1157)
		::nape::phys::InertiaMode tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1157)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1157)
		if ((tmp2)){
			HX_STACK_LINE(1157)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1157)
			::nape::phys::InertiaMode tmp3 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1157)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = tmp3;
			HX_STACK_LINE(1157)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1157)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
	}
	HX_STACK_LINE(1157)
	::nape::phys::InertiaMode tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1157)
	{
		HX_STACK_LINE(1157)
		::nape::phys::InertiaMode tmp2 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1157)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1157)
		if ((tmp3)){
			HX_STACK_LINE(1157)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1157)
			::nape::phys::InertiaMode tmp4 = ::nape::phys::InertiaMode_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1157)
			::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = tmp4;
			HX_STACK_LINE(1157)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1157)
		tmp1 = ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
	}
	HX_STACK_LINE(1157)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1157)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1157)
	int tmp4 = tmp3->inertiaMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1157)
	::nape::phys::InertiaMode tmp5 = tmp2->__get(tmp4).StaticCast< ::nape::phys::InertiaMode >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1157)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_inertiaMode,return )

Float Body_obj::get_constraintInertia( ){
	HX_STACK_FRAME("nape.phys.Body","get_constraintInertia",0xe1d4c3de,"nape.phys.Body.get_constraintInertia","nape/phys/Body.hx",1168,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1169)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1169)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1169)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1169)
	if ((tmp2)){
		HX_STACK_LINE(1169)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1169)
		tmp3->validate_inertia();
	}
	HX_STACK_LINE(1170)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1170)
	Float tmp4 = tmp3->sinertia;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1170)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintInertia,return )

Float Body_obj::get_inertia( ){
	HX_STACK_FRAME("nape.phys.Body","get_inertia",0x035f9b7b,"nape.phys.Body.get_inertia","nape/phys/Body.hx",1179,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1181)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1181)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1181)
	if ((tmp1)){
		HX_STACK_LINE(1181)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no inertia","\x87","\xdd","\x18","\x5d"));
	}
	HX_STACK_LINE(1183)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1183)
	tmp2->validate_inertia();
	HX_STACK_LINE(1185)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1185)
	int tmp4 = tmp3->inertiaMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1185)
	int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1185)
	bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1185)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1185)
	if ((tmp6)){
		HX_STACK_LINE(1185)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1185)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1185)
		::nape::shape::ShapeList _this = tmp9->wrap_shapes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1185)
		{
			HX_STACK_LINE(1185)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp10 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1185)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1185)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1185)
			tmp7 = (tmp12 == null());
		}
	}
	else{
		HX_STACK_LINE(1185)
		tmp7 = false;
	}
	HX_STACK_LINE(1185)
	if ((tmp7)){
		HX_STACK_LINE(1185)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current inertia mode flag, Body::inertia only makes sense if Body contains Shapes","\x3e","\x00","\x35","\x76"));
	}
	HX_STACK_LINE(1187)
	::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1187)
	Float tmp9 = tmp8->cinertia;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1187)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_inertia,return )

Float Body_obj::set_inertia( Float inertia){
	HX_STACK_FRAME("nape.phys.Body","set_inertia",0x0dcca287,"nape.phys.Body.set_inertia","nape/phys/Body.hx",1189,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inertia,"inertia")
	HX_STACK_LINE(1190)
	{
		HX_STACK_LINE(1191)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1191)
		tmp->immutable_midstep(HX_HCSTRING("Body::inertia","\x38","\xc7","\x8f","\xf4"));
		HX_STACK_LINE(1193)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1193)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1193)
		if ((tmp2)){
			HX_STACK_LINE(1193)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(1196)
		bool tmp3 = (inertia != inertia);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1196)
		if ((tmp3)){
			HX_STACK_LINE(1196)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Inertia cannot be NaN","\x67","\x5a","\x0a","\x96"));
		}
		HX_STACK_LINE(1197)
		bool tmp4 = (inertia <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1197)
		if ((tmp4)){
			HX_STACK_LINE(1197)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Inertia must be strictly positive","\x09","\xb1","\xeb","\xb6"));
		}
		HX_STACK_LINE(1198)
		Float tmp5 = inertia;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1198)
		Float tmp6 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1198)
		bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1198)
		if ((tmp7)){
			HX_STACK_LINE(1198)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Inertia cannot be infinite, use allowRotation = false instead","\x94","\xf1","\xe8","\x1c"));
		}
		HX_STACK_LINE(1200)
		int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1200)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1200)
		tmp9->inertiaMode = tmp8;
		HX_STACK_LINE(1201)
		::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1201)
		tmp10->cinertia = inertia;
		HX_STACK_LINE(1202)
		::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1202)
		tmp11->invalidate_inertia();
	}
	HX_STACK_LINE(1204)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1204)
	{
		HX_STACK_LINE(1204)
		::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1204)
		bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1204)
		if ((tmp2)){
			HX_STACK_LINE(1204)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no inertia","\x87","\xdd","\x18","\x5d"));
		}
		HX_STACK_LINE(1204)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1204)
		tmp3->validate_inertia();
		HX_STACK_LINE(1204)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1204)
		int tmp5 = tmp4->inertiaMode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1204)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1204)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1204)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1204)
		if ((tmp7)){
			HX_STACK_LINE(1204)
			::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1204)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1204)
			::nape::shape::ShapeList _this = tmp10->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1204)
			{
				HX_STACK_LINE(1204)
				::zpp_nape::util::ZNPList_ZPP_Shape tmp11 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1204)
				::zpp_nape::util::ZNPList_ZPP_Shape tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1204)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp13 = tmp12->head;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1204)
				tmp8 = (tmp13 == null());
			}
		}
		else{
			HX_STACK_LINE(1204)
			tmp8 = false;
		}
		HX_STACK_LINE(1204)
		if ((tmp8)){
			HX_STACK_LINE(1204)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current inertia mode flag, Body::inertia only makes sense if Body contains Shapes","\x3e","\x00","\x35","\x76"));
		}
		HX_STACK_LINE(1204)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1204)
		tmp = tmp9->cinertia;
	}
	HX_STACK_LINE(1204)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_inertia,return )

::nape::phys::BodyList Body_obj::connectedBodies( hx::Null< int >  __o_depth,::nape::phys::BodyList output){
int depth = __o_depth.Default(-1);
	HX_STACK_FRAME("nape.phys.Body","connectedBodies",0x5a493693,"nape.phys.Body.connectedBodies","nape/phys/Body.hx",1223,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(1224)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1224)
		int tmp1 = depth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1224)
		::nape::phys::BodyList tmp2 = output;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1224)
		::nape::phys::BodyList tmp3 = tmp->connectedBodies(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1224)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,connectedBodies,return )

::nape::phys::BodyList Body_obj::interactingBodies( ::nape::callbacks::InteractionType type,hx::Null< int >  __o_depth,::nape::phys::BodyList output){
int depth = __o_depth.Default(-1);
	HX_STACK_FRAME("nape.phys.Body","interactingBodies",0x9771f576,"nape.phys.Body.interactingBodies","nape/phys/Body.hx",1241,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(1242)
		bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1242)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1242)
		if ((tmp)){
			HX_STACK_LINE(1243)
			int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1243)
			int tmp3 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1243)
			int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1243)
			int tmp5 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1243)
			tmp1 = (int(tmp4) | int(tmp5));
		}
		else{
			HX_STACK_LINE(1245)
			::nape::callbacks::InteractionType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1245)
			::nape::callbacks::InteractionType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1245)
			{
				HX_STACK_LINE(1245)
				::nape::callbacks::InteractionType tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1245)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1245)
				if ((tmp5)){
					HX_STACK_LINE(1245)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1245)
					::nape::callbacks::InteractionType tmp6 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1245)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp6;
					HX_STACK_LINE(1245)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1245)
				tmp3 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			HX_STACK_LINE(1245)
			bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1245)
			if ((tmp4)){
				HX_STACK_LINE(1245)
				tmp1 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;
			}
			else{
				HX_STACK_LINE(1245)
				::nape::callbacks::InteractionType tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1245)
				::nape::callbacks::InteractionType tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1245)
				{
					HX_STACK_LINE(1245)
					::nape::callbacks::InteractionType tmp7 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1245)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1245)
					if ((tmp8)){
						HX_STACK_LINE(1245)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1245)
						::nape::callbacks::InteractionType tmp9 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1245)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp9;
						HX_STACK_LINE(1245)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1245)
					tmp6 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				HX_STACK_LINE(1245)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1245)
				if ((tmp7)){
					HX_STACK_LINE(1245)
					tmp1 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR;
				}
				else{
					HX_STACK_LINE(1245)
					tmp1 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;
				}
			}
		}
		HX_STACK_LINE(1242)
		int arbiter_type = tmp1;		HX_STACK_VAR(arbiter_type,"arbiter_type");
		HX_STACK_LINE(1246)
		::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1246)
		int tmp3 = arbiter_type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1246)
		int tmp4 = depth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1246)
		::nape::phys::BodyList tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1246)
		::nape::phys::BodyList tmp6 = tmp2->interactingBodies(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1246)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,interactingBodies,return )

Float Body_obj::crushFactor( ){
	HX_STACK_FRAME("nape.phys.Body","crushFactor",0x8f2ff294,"nape.phys.Body.crushFactor","nape/phys/Body.hx",1263,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1265)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1265)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1265)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1265)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1265)
	if ((tmp2)){
		HX_STACK_LINE(1265)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(1265)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1265)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(1265)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1265)
	if ((tmp4)){
		HX_STACK_LINE(1265)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Makes no sense to see how much an object not taking part in a simulation is being crushed","\xc7","\x5c","\x55","\xde"));
	}
	HX_STACK_LINE(1267)
	Float msum = ((Float)0.0);		HX_STACK_VAR(msum,"msum");
	HX_STACK_LINE(1268)
	::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1268)
	{
		HX_STACK_LINE(1268)
		Float x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1268)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1268)
		bool weak = false;		HX_STACK_VAR(weak,"weak");
		HX_STACK_LINE(1268)
		bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1268)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1268)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1268)
		if ((tmp7)){
			HX_STACK_LINE(1268)
			tmp8 = (y != y);
		}
		else{
			HX_STACK_LINE(1268)
			tmp8 = true;
		}
		HX_STACK_LINE(1268)
		if ((tmp8)){
			HX_STACK_LINE(1268)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(1268)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1268)
		{
			HX_STACK_LINE(1268)
			::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1268)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1268)
			if ((tmp10)){
				HX_STACK_LINE(1268)
				::nape::geom::Vec2 tmp11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1268)
				ret = tmp11;
			}
			else{
				HX_STACK_LINE(1268)
				::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1268)
				ret = tmp11;
				HX_STACK_LINE(1268)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(1268)
				ret->zpp_pool = null();
				HX_STACK_LINE(1268)
				ret->zpp_disp = false;
				HX_STACK_LINE(1268)
				::nape::geom::Vec2 tmp12 = ret;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1268)
				::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1268)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1268)
				if ((tmp14)){
					HX_STACK_LINE(1268)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
		}
		HX_STACK_LINE(1268)
		bool tmp9 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1268)
		if ((tmp9)){
			HX_STACK_LINE(1268)
			::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1268)
			{
				HX_STACK_LINE(1268)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1268)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1268)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1268)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1268)
					if ((tmp12)){
						HX_STACK_LINE(1268)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1268)
						ret1 = tmp13;
					}
					else{
						HX_STACK_LINE(1268)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1268)
						ret1 = tmp13;
						HX_STACK_LINE(1268)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1268)
						ret1->next = null();
					}
					HX_STACK_LINE(1268)
					ret1->weak = false;
				}
				HX_STACK_LINE(1268)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1268)
					ret1->x = x;
					HX_STACK_LINE(1268)
					ret1->y = y;
					HX_STACK_LINE(1268)
					{
					}
				}
				HX_STACK_LINE(1268)
				tmp10 = ret1;
			}
			HX_STACK_LINE(1268)
			ret->zpp_inner = tmp10;
			HX_STACK_LINE(1268)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1268)
			{
				HX_STACK_LINE(1268)
				bool tmp10 = (ret != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1268)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1268)
				if ((tmp10)){
					HX_STACK_LINE(1268)
					tmp11 = ret->zpp_disp;
				}
				else{
					HX_STACK_LINE(1268)
					tmp11 = false;
				}
				HX_STACK_LINE(1268)
				if ((tmp11)){
					HX_STACK_LINE(1268)
					::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1268)
					::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1268)
					HX_STACK_DO_THROW(tmp13);
				}
			}
			HX_STACK_LINE(1268)
			{
				HX_STACK_LINE(1268)
				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1268)
				bool tmp10 = _this->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1268)
				if ((tmp10)){
					HX_STACK_LINE(1268)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(1268)
				bool tmp11 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1268)
				if ((tmp11)){
					HX_STACK_LINE(1268)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1268)
			bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1268)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1268)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1268)
			if ((tmp11)){
				HX_STACK_LINE(1268)
				tmp12 = (y != y);
			}
			else{
				HX_STACK_LINE(1268)
				tmp12 = true;
			}
			HX_STACK_LINE(1268)
			if ((tmp12)){
				HX_STACK_LINE(1268)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1268)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1268)
			{
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1268)
					bool tmp14 = (ret != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1268)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1268)
					if ((tmp14)){
						HX_STACK_LINE(1268)
						tmp15 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1268)
						tmp15 = false;
					}
					HX_STACK_LINE(1268)
					if ((tmp15)){
						HX_STACK_LINE(1268)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1268)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1268)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1268)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1268)
					bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1268)
					if ((tmp14)){
						HX_STACK_LINE(1268)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1268)
				tmp13 = ret->zpp_inner->x;
			}
			HX_STACK_LINE(1268)
			Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1268)
			bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1268)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1268)
			if ((tmp15)){
				HX_STACK_LINE(1268)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1268)
					{
						HX_STACK_LINE(1268)
						bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1268)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1268)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1268)
						bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1268)
						if ((tmp21)){
							HX_STACK_LINE(1268)
							tmp20 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1268)
							tmp20 = false;
						}
						HX_STACK_LINE(1268)
						bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1268)
						if ((tmp22)){
							HX_STACK_LINE(1268)
							::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1268)
							::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1268)
							::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1268)
							::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1268)
							::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1268)
							HX_STACK_DO_THROW(tmp27);
						}
					}
					HX_STACK_LINE(1268)
					{
						HX_STACK_LINE(1268)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1268)
						bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1268)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1268)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1268)
						if ((tmp20)){
							HX_STACK_LINE(1268)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1268)
					Float tmp18 = ret->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1268)
					tmp17 = tmp18;
				}
				HX_STACK_LINE(1268)
				Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1268)
				tmp16 = (tmp17 == tmp18);
			}
			else{
				HX_STACK_LINE(1268)
				tmp16 = false;
			}
			HX_STACK_LINE(1268)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1268)
			if ((tmp17)){
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1268)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(1268)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(1268)
					{
					}
				}
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1268)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1268)
					bool tmp18 = (_this->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1268)
					if ((tmp18)){
						HX_STACK_LINE(1268)
						::zpp_nape::geom::ZPP_Vec2 tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1268)
						_this->_invalidate(tmp19);
					}
				}
			}
			HX_STACK_LINE(1268)
			ret;
		}
		HX_STACK_LINE(1268)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1268)
		tmp5 = ret;
	}
	HX_STACK_LINE(1268)
	::nape::geom::Vec2 jsum = tmp5;		HX_STACK_VAR(jsum,"jsum");
	HX_STACK_LINE(1269)
	{
		HX_STACK_LINE(1269)
		::nape::dynamics::ArbiterList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1269)
		{
			HX_STACK_LINE(1269)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1269)
			::nape::dynamics::ArbiterList tmp8 = tmp7->wrap_arbiters;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1269)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1269)
			if ((tmp9)){
				HX_STACK_LINE(1269)
				::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1269)
				::zpp_nape::util::ZNPList_ZPP_Arbiter tmp11 = tmp10->arbiters;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1269)
				::nape::dynamics::ArbiterList tmp12 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp11,true);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1269)
				::zpp_nape::phys::ZPP_Body tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1269)
				tmp13->wrap_arbiters = tmp12;
			}
			HX_STACK_LINE(1269)
			::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1269)
			tmp6 = tmp10->wrap_arbiters;
		}
		HX_STACK_LINE(1269)
		::nape::dynamics::ArbiterIterator tmp7 = tmp6->iterator();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1269)
		::nape::dynamics::ArbiterIterator _g = tmp7;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1269)
		while((true)){
			HX_STACK_LINE(1269)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1269)
			{
				HX_STACK_LINE(1269)
				::zpp_nape::util::ZPP_ArbiterList tmp9 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1269)
				tmp9->valmod();
				HX_STACK_LINE(1269)
				int tmp10 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1269)
				int length = tmp10;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(1269)
				_g->zpp_critical = true;
				HX_STACK_LINE(1269)
				bool tmp11 = (_g->zpp_i < length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1269)
				if ((tmp11)){
					HX_STACK_LINE(1269)
					tmp8 = true;
				}
				else{
					HX_STACK_LINE(1269)
					{
						HX_STACK_LINE(1269)
						::nape::dynamics::ArbiterIterator tmp12 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1269)
						_g->zpp_next = tmp12;
						HX_STACK_LINE(1269)
						::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(1269)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(1269)
					tmp8 = false;
				}
			}
			HX_STACK_LINE(1269)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1269)
			if ((tmp9)){
				HX_STACK_LINE(1269)
				break;
			}
			HX_STACK_LINE(1269)
			::nape::dynamics::Arbiter tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1269)
			{
				HX_STACK_LINE(1269)
				_g->zpp_critical = false;
				HX_STACK_LINE(1269)
				int tmp11 = (_g->zpp_i)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1269)
				tmp10 = _g->zpp_inner->at(tmp11);
			}
			HX_STACK_LINE(1269)
			::nape::dynamics::Arbiter arb = tmp10;		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(1270)
			::nape::geom::Vec3 tmp11 = arb->totalImpulse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1270)
			::nape::geom::Vec3 imp3 = tmp11;		HX_STACK_VAR(imp3,"imp3");
			HX_STACK_LINE(1271)
			::nape::geom::Vec2 tmp12 = imp3->xy(null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1271)
			::nape::geom::Vec2 imp = tmp12;		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(1272)
			::nape::geom::Vec2 tmp13 = imp;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1272)
			jsum->addeq(tmp13);
			HX_STACK_LINE(1273)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1273)
			{
				HX_STACK_LINE(1273)
				{
					HX_STACK_LINE(1273)
					bool tmp15 = (imp != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1273)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1273)
					if ((tmp15)){
						HX_STACK_LINE(1273)
						tmp16 = imp->zpp_disp;
					}
					else{
						HX_STACK_LINE(1273)
						tmp16 = false;
					}
					HX_STACK_LINE(1273)
					if ((tmp16)){
						HX_STACK_LINE(1273)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1273)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1273)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(1273)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1273)
				{
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						bool tmp16 = (imp != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1273)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1273)
						if ((tmp16)){
							HX_STACK_LINE(1273)
							tmp17 = imp->zpp_disp;
						}
						else{
							HX_STACK_LINE(1273)
							tmp17 = false;
						}
						HX_STACK_LINE(1273)
						if ((tmp17)){
							HX_STACK_LINE(1273)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1273)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1273)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1273)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1273)
						if ((tmp16)){
							HX_STACK_LINE(1273)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1273)
					tmp15 = imp->zpp_inner->x;
				}
				HX_STACK_LINE(1273)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1273)
				{
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1273)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1273)
						if ((tmp17)){
							HX_STACK_LINE(1273)
							tmp18 = imp->zpp_disp;
						}
						else{
							HX_STACK_LINE(1273)
							tmp18 = false;
						}
						HX_STACK_LINE(1273)
						if ((tmp18)){
							HX_STACK_LINE(1273)
							::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1273)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1273)
							HX_STACK_DO_THROW(tmp20);
						}
					}
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1273)
						bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1273)
						if ((tmp17)){
							HX_STACK_LINE(1273)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1273)
					tmp16 = imp->zpp_inner->x;
				}
				HX_STACK_LINE(1273)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1273)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1273)
				{
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						bool tmp19 = (imp != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1273)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1273)
						if ((tmp19)){
							HX_STACK_LINE(1273)
							tmp20 = imp->zpp_disp;
						}
						else{
							HX_STACK_LINE(1273)
							tmp20 = false;
						}
						HX_STACK_LINE(1273)
						if ((tmp20)){
							HX_STACK_LINE(1273)
							::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1273)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1273)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1273)
						bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1273)
						if ((tmp19)){
							HX_STACK_LINE(1273)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1273)
					tmp18 = imp->zpp_inner->y;
				}
				HX_STACK_LINE(1273)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1273)
				{
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						bool tmp20 = (imp != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1273)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1273)
						if ((tmp20)){
							HX_STACK_LINE(1273)
							tmp21 = imp->zpp_disp;
						}
						else{
							HX_STACK_LINE(1273)
							tmp21 = false;
						}
						HX_STACK_LINE(1273)
						if ((tmp21)){
							HX_STACK_LINE(1273)
							::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1273)
							::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1273)
							HX_STACK_DO_THROW(tmp23);
						}
					}
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1273)
						bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1273)
						if ((tmp20)){
							HX_STACK_LINE(1273)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1273)
					tmp19 = imp->zpp_inner->y;
				}
				HX_STACK_LINE(1273)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1273)
				Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1273)
				tmp14 = ::Math_obj::sqrt(tmp21);
			}
			HX_STACK_LINE(1273)
			hx::AddEq(msum,tmp14);
			HX_STACK_LINE(1274)
			{
				HX_STACK_LINE(1274)
				{
					HX_STACK_LINE(1274)
					bool tmp15 = (imp != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1274)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1274)
					if ((tmp15)){
						HX_STACK_LINE(1274)
						tmp16 = imp->zpp_disp;
					}
					else{
						HX_STACK_LINE(1274)
						tmp16 = false;
					}
					HX_STACK_LINE(1274)
					if ((tmp16)){
						HX_STACK_LINE(1274)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1274)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1274)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(1274)
				{
					HX_STACK_LINE(1274)
					::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1274)
					bool tmp15 = _this->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1274)
					if ((tmp15)){
						HX_STACK_LINE(1274)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1274)
					bool tmp16 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1274)
					if ((tmp16)){
						HX_STACK_LINE(1274)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1274)
				bool tmp15 = imp->zpp_inner->_inuse;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1274)
				if ((tmp15)){
					HX_STACK_LINE(1274)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1274)
				::zpp_nape::geom::ZPP_Vec2 inner = imp->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1274)
				imp->zpp_inner->outer = null();
				HX_STACK_LINE(1274)
				imp->zpp_inner = null();
				HX_STACK_LINE(1274)
				{
					HX_STACK_LINE(1274)
					::nape::geom::Vec2 o = imp;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1274)
					o->zpp_pool = null();
					HX_STACK_LINE(1274)
					::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1274)
					bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1274)
					if ((tmp17)){
						HX_STACK_LINE(1274)
						::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1274)
						tmp18->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1274)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1274)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1274)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1274)
				{
					HX_STACK_LINE(1274)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1274)
					{
						HX_STACK_LINE(1274)
						bool tmp16 = (o->outer != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1274)
						if ((tmp16)){
							HX_STACK_LINE(1274)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1274)
							o->outer = null();
						}
						HX_STACK_LINE(1274)
						o->_isimmutable = null();
						HX_STACK_LINE(1274)
						o->_validate = null();
						HX_STACK_LINE(1274)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1274)
					::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1274)
					o->next = tmp16;
					HX_STACK_LINE(1274)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1275)
			imp3->dispose();
		}
	}
	HX_STACK_LINE(1277)
	{
		HX_STACK_LINE(1277)
		::nape::constraint::ConstraintIterator tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1277)
		{
			HX_STACK_LINE(1277)
			::nape::constraint::ConstraintList tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1277)
			{
				HX_STACK_LINE(1277)
				::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1277)
				::nape::constraint::ConstraintList tmp9 = tmp8->wrap_constraints;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1277)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1277)
				if ((tmp10)){
					HX_STACK_LINE(1277)
					::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1277)
					::zpp_nape::util::ZNPList_ZPP_Constraint tmp12 = tmp11->constraints;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1277)
					::nape::constraint::ConstraintList tmp13 = ::zpp_nape::util::ZPP_ConstraintList_obj::get(tmp12,true);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1277)
					::zpp_nape::phys::ZPP_Body tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1277)
					tmp14->wrap_constraints = tmp13;
				}
				HX_STACK_LINE(1277)
				::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1277)
				tmp7 = tmp11->wrap_constraints;
			}
			HX_STACK_LINE(1277)
			::nape::constraint::ConstraintList _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1277)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(1277)
			::nape::constraint::ConstraintList tmp8 = _this;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1277)
			tmp6 = ::nape::constraint::ConstraintIterator_obj::get(tmp8);
		}
		HX_STACK_LINE(1277)
		::nape::constraint::ConstraintIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1277)
		while((true)){
			HX_STACK_LINE(1277)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1277)
			{
				HX_STACK_LINE(1277)
				::zpp_nape::util::ZPP_ConstraintList tmp8 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1277)
				tmp8->valmod();
				HX_STACK_LINE(1277)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1277)
				{
					HX_STACK_LINE(1277)
					::nape::constraint::ConstraintList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1277)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(1277)
					bool tmp10 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1277)
					if ((tmp10)){
						HX_STACK_LINE(1277)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(1277)
						{
							HX_STACK_LINE(1277)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp11 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1277)
							_this->zpp_inner->user_length = tmp11->length;
						}
					}
					HX_STACK_LINE(1277)
					tmp9 = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(1277)
				int length = tmp9;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(1277)
				_g->zpp_critical = true;
				HX_STACK_LINE(1277)
				bool tmp10 = (_g->zpp_i < length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1277)
				if ((tmp10)){
					HX_STACK_LINE(1277)
					tmp7 = true;
				}
				else{
					HX_STACK_LINE(1277)
					{
						HX_STACK_LINE(1277)
						::nape::constraint::ConstraintIterator tmp11 = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1277)
						_g->zpp_next = tmp11;
						HX_STACK_LINE(1277)
						::nape::constraint::ConstraintIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(1277)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(1277)
					tmp7 = false;
				}
			}
			HX_STACK_LINE(1277)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1277)
			if ((tmp8)){
				HX_STACK_LINE(1277)
				break;
			}
			HX_STACK_LINE(1277)
			::nape::constraint::Constraint tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1277)
			{
				HX_STACK_LINE(1277)
				_g->zpp_critical = false;
				HX_STACK_LINE(1277)
				int tmp10 = (_g->zpp_i)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1277)
				tmp9 = _g->zpp_inner->at(tmp10);
			}
			HX_STACK_LINE(1277)
			::nape::constraint::Constraint con = tmp9;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(1278)
			::nape::geom::Vec3 tmp10 = con->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1278)
			::nape::geom::Vec3 imp3 = tmp10;		HX_STACK_VAR(imp3,"imp3");
			HX_STACK_LINE(1279)
			::nape::geom::Vec2 tmp11 = imp3->xy(null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1279)
			::nape::geom::Vec2 imp = tmp11;		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(1280)
			::nape::geom::Vec2 tmp12 = imp;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1280)
			jsum->addeq(tmp12);
			HX_STACK_LINE(1281)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1281)
			{
				HX_STACK_LINE(1281)
				{
					HX_STACK_LINE(1281)
					bool tmp14 = (imp != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1281)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1281)
					if ((tmp14)){
						HX_STACK_LINE(1281)
						tmp15 = imp->zpp_disp;
					}
					else{
						HX_STACK_LINE(1281)
						tmp15 = false;
					}
					HX_STACK_LINE(1281)
					if ((tmp15)){
						HX_STACK_LINE(1281)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1281)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1281)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(1281)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1281)
				{
					HX_STACK_LINE(1281)
					{
						HX_STACK_LINE(1281)
						bool tmp15 = (imp != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1281)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1281)
						if ((tmp15)){
							HX_STACK_LINE(1281)
							tmp16 = imp->zpp_disp;
						}
						else{
							HX_STACK_LINE(1281)
							tmp16 = false;
						}
						HX_STACK_LINE(1281)
						if ((tmp16)){
							HX_STACK_LINE(1281)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1281)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1281)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(1281)
					{
						HX_STACK_LINE(1281)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1281)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1281)
						if ((tmp15)){
							HX_STACK_LINE(1281)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1281)
					tmp14 = imp->zpp_inner->x;
				}
				HX_STACK_LINE(1281)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1281)
				{
					HX_STACK_LINE(1281)
					{
						HX_STACK_LINE(1281)
						bool tmp16 = (imp != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1281)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1281)
						if ((tmp16)){
							HX_STACK_LINE(1281)
							tmp17 = imp->zpp_disp;
						}
						else{
							HX_STACK_LINE(1281)
							tmp17 = false;
						}
						HX_STACK_LINE(1281)
						if ((tmp17)){
							HX_STACK_LINE(1281)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1281)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1281)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(1281)
					{
						HX_STACK_LINE(1281)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1281)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1281)
						if ((tmp16)){
							HX_STACK_LINE(1281)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1281)
					tmp15 = imp->zpp_inner->x;
				}
				HX_STACK_LINE(1281)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1281)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1281)
				{
					HX_STACK_LINE(1281)
					{
						HX_STACK_LINE(1281)
						bool tmp18 = (imp != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1281)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1281)
						if ((tmp18)){
							HX_STACK_LINE(1281)
							tmp19 = imp->zpp_disp;
						}
						else{
							HX_STACK_LINE(1281)
							tmp19 = false;
						}
						HX_STACK_LINE(1281)
						if ((tmp19)){
							HX_STACK_LINE(1281)
							::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1281)
							::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1281)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(1281)
					{
						HX_STACK_LINE(1281)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1281)
						bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1281)
						if ((tmp18)){
							HX_STACK_LINE(1281)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1281)
					tmp17 = imp->zpp_inner->y;
				}
				HX_STACK_LINE(1281)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1281)
				{
					HX_STACK_LINE(1281)
					{
						HX_STACK_LINE(1281)
						bool tmp19 = (imp != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1281)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1281)
						if ((tmp19)){
							HX_STACK_LINE(1281)
							tmp20 = imp->zpp_disp;
						}
						else{
							HX_STACK_LINE(1281)
							tmp20 = false;
						}
						HX_STACK_LINE(1281)
						if ((tmp20)){
							HX_STACK_LINE(1281)
							::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1281)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1281)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(1281)
					{
						HX_STACK_LINE(1281)
						::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1281)
						bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1281)
						if ((tmp19)){
							HX_STACK_LINE(1281)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1281)
					tmp18 = imp->zpp_inner->y;
				}
				HX_STACK_LINE(1281)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1281)
				Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1281)
				tmp13 = ::Math_obj::sqrt(tmp20);
			}
			HX_STACK_LINE(1281)
			hx::AddEq(msum,tmp13);
			HX_STACK_LINE(1282)
			{
				HX_STACK_LINE(1282)
				{
					HX_STACK_LINE(1282)
					bool tmp14 = (imp != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1282)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1282)
					if ((tmp14)){
						HX_STACK_LINE(1282)
						tmp15 = imp->zpp_disp;
					}
					else{
						HX_STACK_LINE(1282)
						tmp15 = false;
					}
					HX_STACK_LINE(1282)
					if ((tmp15)){
						HX_STACK_LINE(1282)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1282)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1282)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(1282)
				{
					HX_STACK_LINE(1282)
					::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1282)
					bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1282)
					if ((tmp14)){
						HX_STACK_LINE(1282)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1282)
					bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1282)
					if ((tmp15)){
						HX_STACK_LINE(1282)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1282)
				bool tmp14 = imp->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1282)
				if ((tmp14)){
					HX_STACK_LINE(1282)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1282)
				::zpp_nape::geom::ZPP_Vec2 inner = imp->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1282)
				imp->zpp_inner->outer = null();
				HX_STACK_LINE(1282)
				imp->zpp_inner = null();
				HX_STACK_LINE(1282)
				{
					HX_STACK_LINE(1282)
					::nape::geom::Vec2 o = imp;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1282)
					o->zpp_pool = null();
					HX_STACK_LINE(1282)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1282)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1282)
					if ((tmp16)){
						HX_STACK_LINE(1282)
						::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1282)
						tmp17->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1282)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1282)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1282)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1282)
				{
					HX_STACK_LINE(1282)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1282)
					{
						HX_STACK_LINE(1282)
						bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1282)
						if ((tmp15)){
							HX_STACK_LINE(1282)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1282)
							o->outer = null();
						}
						HX_STACK_LINE(1282)
						o->_isimmutable = null();
						HX_STACK_LINE(1282)
						o->_validate = null();
						HX_STACK_LINE(1282)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1282)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1282)
					o->next = tmp15;
					HX_STACK_LINE(1282)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1283)
			imp3->dispose();
		}
	}
	HX_STACK_LINE(1285)
	Float tmp6 = msum;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1285)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1285)
	{
		HX_STACK_LINE(1285)
		{
			HX_STACK_LINE(1285)
			bool tmp8 = (jsum != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1285)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1285)
			if ((tmp8)){
				HX_STACK_LINE(1285)
				tmp9 = jsum->zpp_disp;
			}
			else{
				HX_STACK_LINE(1285)
				tmp9 = false;
			}
			HX_STACK_LINE(1285)
			if ((tmp9)){
				HX_STACK_LINE(1285)
				::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1285)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1285)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(1285)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1285)
		{
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				bool tmp9 = (jsum != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1285)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1285)
				if ((tmp9)){
					HX_STACK_LINE(1285)
					tmp10 = jsum->zpp_disp;
				}
				else{
					HX_STACK_LINE(1285)
					tmp10 = false;
				}
				HX_STACK_LINE(1285)
				if ((tmp10)){
					HX_STACK_LINE(1285)
					::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1285)
					::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1285)
					HX_STACK_DO_THROW(tmp12);
				}
			}
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1285)
				bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1285)
				if ((tmp9)){
					HX_STACK_LINE(1285)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1285)
			tmp8 = jsum->zpp_inner->x;
		}
		HX_STACK_LINE(1285)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1285)
		{
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				bool tmp10 = (jsum != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1285)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1285)
				if ((tmp10)){
					HX_STACK_LINE(1285)
					tmp11 = jsum->zpp_disp;
				}
				else{
					HX_STACK_LINE(1285)
					tmp11 = false;
				}
				HX_STACK_LINE(1285)
				if ((tmp11)){
					HX_STACK_LINE(1285)
					::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1285)
					::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1285)
					HX_STACK_DO_THROW(tmp13);
				}
			}
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1285)
				bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1285)
				if ((tmp10)){
					HX_STACK_LINE(1285)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1285)
			tmp9 = jsum->zpp_inner->x;
		}
		HX_STACK_LINE(1285)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1285)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1285)
		{
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				bool tmp12 = (jsum != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1285)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1285)
				if ((tmp12)){
					HX_STACK_LINE(1285)
					tmp13 = jsum->zpp_disp;
				}
				else{
					HX_STACK_LINE(1285)
					tmp13 = false;
				}
				HX_STACK_LINE(1285)
				if ((tmp13)){
					HX_STACK_LINE(1285)
					::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1285)
					::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1285)
					HX_STACK_DO_THROW(tmp15);
				}
			}
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1285)
				bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1285)
				if ((tmp12)){
					HX_STACK_LINE(1285)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1285)
			tmp11 = jsum->zpp_inner->y;
		}
		HX_STACK_LINE(1285)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1285)
		{
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				bool tmp13 = (jsum != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1285)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1285)
				if ((tmp13)){
					HX_STACK_LINE(1285)
					tmp14 = jsum->zpp_disp;
				}
				else{
					HX_STACK_LINE(1285)
					tmp14 = false;
				}
				HX_STACK_LINE(1285)
				if ((tmp14)){
					HX_STACK_LINE(1285)
					::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1285)
					::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1285)
					HX_STACK_DO_THROW(tmp16);
				}
			}
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1285)
				bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1285)
				if ((tmp13)){
					HX_STACK_LINE(1285)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1285)
			tmp12 = jsum->zpp_inner->y;
		}
		HX_STACK_LINE(1285)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1285)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1285)
		tmp7 = ::Math_obj::sqrt(tmp14);
	}
	HX_STACK_LINE(1285)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1285)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1285)
	{
		HX_STACK_LINE(1285)
		::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1285)
		bool tmp11 = tmp10->world;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1285)
		if ((tmp11)){
			HX_STACK_LINE(1285)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
		}
		HX_STACK_LINE(1285)
		::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1285)
		tmp12->validate_mass();
		HX_STACK_LINE(1285)
		::zpp_nape::phys::ZPP_Body tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1285)
		int tmp14 = tmp13->massMode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1285)
		int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1285)
		bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1285)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1285)
		if ((tmp16)){
			HX_STACK_LINE(1285)
			::zpp_nape::phys::ZPP_Body tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1285)
			::zpp_nape::phys::ZPP_Body tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1285)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp20 = tmp19->shapes->head;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1285)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1285)
			tmp17 = (tmp21 == null());
		}
		else{
			HX_STACK_LINE(1285)
			tmp17 = false;
		}
		HX_STACK_LINE(1285)
		if ((tmp17)){
			HX_STACK_LINE(1285)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
		}
		HX_STACK_LINE(1285)
		::zpp_nape::phys::ZPP_Body tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1285)
		tmp9 = tmp18->cmass;
	}
	HX_STACK_LINE(1285)
	::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1285)
	::zpp_nape::space::ZPP_Space tmp11 = tmp10->space;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1285)
	bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1285)
	::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1285)
	if ((tmp12)){
		HX_STACK_LINE(1285)
		tmp13 = null();
	}
	else{
		HX_STACK_LINE(1285)
		::zpp_nape::phys::ZPP_Body tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1285)
		tmp13 = tmp14->space->outer;
	}
	HX_STACK_LINE(1285)
	Float tmp14 = tmp13->zpp_inner->pre_dt;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1285)
	Float tmp15 = (tmp9 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1285)
	Float tmp16 = (Float(tmp8) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1285)
	Float ret = tmp16;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1286)
	{
		HX_STACK_LINE(1286)
		{
			HX_STACK_LINE(1286)
			bool tmp17 = (jsum != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1286)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1286)
			if ((tmp17)){
				HX_STACK_LINE(1286)
				tmp18 = jsum->zpp_disp;
			}
			else{
				HX_STACK_LINE(1286)
				tmp18 = false;
			}
			HX_STACK_LINE(1286)
			if ((tmp18)){
				HX_STACK_LINE(1286)
				::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1286)
				::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1286)
				HX_STACK_DO_THROW(tmp20);
			}
		}
		HX_STACK_LINE(1286)
		{
			HX_STACK_LINE(1286)
			::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1286)
			bool tmp17 = _this->_immutable;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1286)
			if ((tmp17)){
				HX_STACK_LINE(1286)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(1286)
			bool tmp18 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1286)
			if ((tmp18)){
				HX_STACK_LINE(1286)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1286)
		bool tmp17 = jsum->zpp_inner->_inuse;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1286)
		if ((tmp17)){
			HX_STACK_LINE(1286)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
		}
		HX_STACK_LINE(1286)
		::zpp_nape::geom::ZPP_Vec2 inner = jsum->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1286)
		jsum->zpp_inner->outer = null();
		HX_STACK_LINE(1286)
		jsum->zpp_inner = null();
		HX_STACK_LINE(1286)
		{
			HX_STACK_LINE(1286)
			::nape::geom::Vec2 o = jsum;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1286)
			o->zpp_pool = null();
			HX_STACK_LINE(1286)
			::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1286)
			bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1286)
			if ((tmp19)){
				HX_STACK_LINE(1286)
				::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1286)
				tmp20->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1286)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1286)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1286)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1286)
		{
			HX_STACK_LINE(1286)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1286)
			{
				HX_STACK_LINE(1286)
				bool tmp18 = (o->outer != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1286)
				if ((tmp18)){
					HX_STACK_LINE(1286)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1286)
					o->outer = null();
				}
				HX_STACK_LINE(1286)
				o->_isimmutable = null();
				HX_STACK_LINE(1286)
				o->_validate = null();
				HX_STACK_LINE(1286)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1286)
			::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1286)
			o->next = tmp18;
			HX_STACK_LINE(1286)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1287)
	Float tmp17 = ret;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1287)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,crushFactor,return )

::nape::geom::Vec2 Body_obj::localPointToWorld( ::nape::geom::Vec2 point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Body","localPointToWorld",0x529ec05c,"nape.phys.Body.localPointToWorld","nape/phys/Body.hx",1300,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1301)
		{
			HX_STACK_LINE(1303)
			bool tmp = (point != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1303)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1303)
			if ((tmp)){
				HX_STACK_LINE(1303)
				tmp1 = point->zpp_disp;
			}
			else{
				HX_STACK_LINE(1303)
				tmp1 = false;
			}
			HX_STACK_LINE(1303)
			if ((tmp1)){
				HX_STACK_LINE(1303)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1303)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1303)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1307)
		bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1307)
		if ((tmp)){
			HX_STACK_LINE(1307)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot transform null Vec2","\x54","\x10","\xc3","\x67"));
		}
		HX_STACK_LINE(1309)
		{
			HX_STACK_LINE(1309)
			::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1309)
			::zpp_nape::phys::ZPP_Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1309)
			bool tmp2 = _this->zip_axis;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1309)
			if ((tmp2)){
				HX_STACK_LINE(1309)
				_this->zip_axis = false;
				HX_STACK_LINE(1309)
				{
					HX_STACK_LINE(1309)
					Float tmp3 = _this->rot;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1309)
					Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1309)
					_this->axisx = tmp4;
					HX_STACK_LINE(1309)
					Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1309)
					Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1309)
					_this->axisy = tmp6;
					HX_STACK_LINE(1309)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1310)
		Float tempx = ((Float)0.0);		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1311)
		Float tempy = ((Float)0.0);		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1312)
		{
			HX_STACK_LINE(1313)
			::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1313)
			Float tmp2 = tmp1->axisy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1313)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1313)
			{
				HX_STACK_LINE(1313)
				{
					HX_STACK_LINE(1313)
					bool tmp4 = (point != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1313)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1313)
					if ((tmp4)){
						HX_STACK_LINE(1313)
						tmp5 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(1313)
						tmp5 = false;
					}
					HX_STACK_LINE(1313)
					if ((tmp5)){
						HX_STACK_LINE(1313)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1313)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1313)
						HX_STACK_DO_THROW(tmp7);
					}
				}
				HX_STACK_LINE(1313)
				{
					HX_STACK_LINE(1313)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1313)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1313)
					if ((tmp4)){
						HX_STACK_LINE(1313)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1313)
				tmp3 = point->zpp_inner->x;
			}
			HX_STACK_LINE(1313)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1313)
			::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1313)
			Float tmp6 = tmp5->axisx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1313)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1313)
			{
				HX_STACK_LINE(1313)
				{
					HX_STACK_LINE(1313)
					bool tmp8 = (point != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1313)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1313)
					if ((tmp8)){
						HX_STACK_LINE(1313)
						tmp9 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(1313)
						tmp9 = false;
					}
					HX_STACK_LINE(1313)
					if ((tmp9)){
						HX_STACK_LINE(1313)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1313)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1313)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(1313)
				{
					HX_STACK_LINE(1313)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1313)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1313)
					if ((tmp8)){
						HX_STACK_LINE(1313)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1313)
				tmp7 = point->zpp_inner->y;
			}
			HX_STACK_LINE(1313)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1313)
			Float tmp9 = (tmp4 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1313)
			tempx = tmp9;
			HX_STACK_LINE(1314)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1314)
			{
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					bool tmp11 = (point != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1314)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1314)
					if ((tmp11)){
						HX_STACK_LINE(1314)
						tmp12 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(1314)
						tmp12 = false;
					}
					HX_STACK_LINE(1314)
					if ((tmp12)){
						HX_STACK_LINE(1314)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1314)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1314)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1314)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1314)
					if ((tmp11)){
						HX_STACK_LINE(1314)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1314)
				tmp10 = point->zpp_inner->x;
			}
			HX_STACK_LINE(1314)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1314)
			Float tmp12 = tmp11->axisx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1314)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1314)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1314)
			{
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					bool tmp15 = (point != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1314)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1314)
					if ((tmp15)){
						HX_STACK_LINE(1314)
						tmp16 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(1314)
						tmp16 = false;
					}
					HX_STACK_LINE(1314)
					if ((tmp16)){
						HX_STACK_LINE(1314)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1314)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1314)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1314)
					bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1314)
					if ((tmp15)){
						HX_STACK_LINE(1314)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1314)
				tmp14 = point->zpp_inner->y;
			}
			HX_STACK_LINE(1314)
			::zpp_nape::phys::ZPP_Body tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1314)
			Float tmp16 = tmp15->axisy;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1314)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1314)
			Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1314)
			tempy = tmp18;
		}
		HX_STACK_LINE(1316)
		{
			HX_STACK_LINE(1317)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1318)
			tmp1 = point->zpp_inner->weak;
			HX_STACK_LINE(1317)
			if ((tmp1)){
				HX_STACK_LINE(1320)
				{
					HX_STACK_LINE(1320)
					{
						HX_STACK_LINE(1320)
						bool tmp2 = (point != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1320)
						bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1320)
						if ((tmp2)){
							HX_STACK_LINE(1320)
							tmp3 = point->zpp_disp;
						}
						else{
							HX_STACK_LINE(1320)
							tmp3 = false;
						}
						HX_STACK_LINE(1320)
						if ((tmp3)){
							HX_STACK_LINE(1320)
							::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1320)
							::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1320)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					HX_STACK_LINE(1320)
					{
						HX_STACK_LINE(1320)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1320)
						bool tmp2 = _this->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1320)
						if ((tmp2)){
							HX_STACK_LINE(1320)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1320)
						bool tmp3 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1320)
						if ((tmp3)){
							HX_STACK_LINE(1320)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1320)
					bool tmp2 = point->zpp_inner->_inuse;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1320)
					if ((tmp2)){
						HX_STACK_LINE(1320)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(1320)
					::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1320)
					point->zpp_inner->outer = null();
					HX_STACK_LINE(1320)
					point->zpp_inner = null();
					HX_STACK_LINE(1320)
					{
						HX_STACK_LINE(1320)
						::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1320)
						o->zpp_pool = null();
						HX_STACK_LINE(1320)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1320)
						bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1320)
						if ((tmp4)){
							HX_STACK_LINE(1320)
							::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1320)
							tmp5->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1320)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1320)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1320)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1320)
					{
						HX_STACK_LINE(1320)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1320)
						{
							HX_STACK_LINE(1320)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1320)
							if ((tmp3)){
								HX_STACK_LINE(1320)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1320)
								o->outer = null();
							}
							HX_STACK_LINE(1320)
							o->_isimmutable = null();
							HX_STACK_LINE(1320)
							o->_validate = null();
							HX_STACK_LINE(1320)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1320)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1320)
						o->next = tmp3;
						HX_STACK_LINE(1320)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1321)
				true;
			}
			else{
				HX_STACK_LINE(1324)
				false;
			}
		}
		HX_STACK_LINE(1327)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1327)
		{
			HX_STACK_LINE(1327)
			Float tmp2 = tempx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1327)
			::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1327)
			Float tmp4 = tmp3->posx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1327)
			Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1327)
			Float x = tmp5;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1327)
			Float tmp6 = tempy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1327)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1327)
			Float tmp8 = tmp7->posy;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1327)
			Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1327)
			Float y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1327)
			bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1327)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1327)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1327)
			if ((tmp11)){
				HX_STACK_LINE(1327)
				tmp12 = (y != y);
			}
			else{
				HX_STACK_LINE(1327)
				tmp12 = true;
			}
			HX_STACK_LINE(1327)
			if ((tmp12)){
				HX_STACK_LINE(1327)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1327)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1327)
			{
				HX_STACK_LINE(1327)
				::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1327)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1327)
				if ((tmp14)){
					HX_STACK_LINE(1327)
					::nape::geom::Vec2 tmp15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1327)
					ret = tmp15;
				}
				else{
					HX_STACK_LINE(1327)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1327)
					ret = tmp15;
					HX_STACK_LINE(1327)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1327)
					ret->zpp_pool = null();
					HX_STACK_LINE(1327)
					ret->zpp_disp = false;
					HX_STACK_LINE(1327)
					::nape::geom::Vec2 tmp16 = ret;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1327)
					::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1327)
					bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1327)
					if ((tmp18)){
						HX_STACK_LINE(1327)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1327)
			bool tmp13 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1327)
			if ((tmp13)){
				HX_STACK_LINE(1327)
				::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1327)
				{
					HX_STACK_LINE(1327)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1327)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1327)
					{
						HX_STACK_LINE(1327)
						::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1327)
						bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1327)
						if ((tmp16)){
							HX_STACK_LINE(1327)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1327)
							ret1 = tmp17;
						}
						else{
							HX_STACK_LINE(1327)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1327)
							ret1 = tmp17;
							HX_STACK_LINE(1327)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1327)
							ret1->next = null();
						}
						HX_STACK_LINE(1327)
						ret1->weak = false;
					}
					HX_STACK_LINE(1327)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1327)
					{
						HX_STACK_LINE(1327)
						ret1->x = x;
						HX_STACK_LINE(1327)
						ret1->y = y;
						HX_STACK_LINE(1327)
						{
						}
					}
					HX_STACK_LINE(1327)
					tmp14 = ret1;
				}
				HX_STACK_LINE(1327)
				ret->zpp_inner = tmp14;
				HX_STACK_LINE(1327)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1327)
				{
					HX_STACK_LINE(1327)
					bool tmp14 = (ret != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1327)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1327)
					if ((tmp14)){
						HX_STACK_LINE(1327)
						tmp15 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1327)
						tmp15 = false;
					}
					HX_STACK_LINE(1327)
					if ((tmp15)){
						HX_STACK_LINE(1327)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1327)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1327)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(1327)
				{
					HX_STACK_LINE(1327)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1327)
					bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1327)
					if ((tmp14)){
						HX_STACK_LINE(1327)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1327)
					bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1327)
					if ((tmp15)){
						HX_STACK_LINE(1327)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1327)
				bool tmp14 = (x != x);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1327)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1327)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1327)
				if ((tmp15)){
					HX_STACK_LINE(1327)
					tmp16 = (y != y);
				}
				else{
					HX_STACK_LINE(1327)
					tmp16 = true;
				}
				HX_STACK_LINE(1327)
				if ((tmp16)){
					HX_STACK_LINE(1327)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1327)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1327)
				{
					HX_STACK_LINE(1327)
					{
						HX_STACK_LINE(1327)
						bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1327)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1327)
						if ((tmp18)){
							HX_STACK_LINE(1327)
							tmp19 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1327)
							tmp19 = false;
						}
						HX_STACK_LINE(1327)
						if ((tmp19)){
							HX_STACK_LINE(1327)
							::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1327)
							::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1327)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(1327)
					{
						HX_STACK_LINE(1327)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1327)
						bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1327)
						if ((tmp18)){
							HX_STACK_LINE(1327)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1327)
					tmp17 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1327)
				Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1327)
				bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1327)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1327)
				if ((tmp19)){
					HX_STACK_LINE(1327)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1327)
					{
						HX_STACK_LINE(1327)
						{
							HX_STACK_LINE(1327)
							bool tmp22 = (ret != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1327)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1327)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1327)
							bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1327)
							if ((tmp25)){
								HX_STACK_LINE(1327)
								tmp24 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1327)
								tmp24 = false;
							}
							HX_STACK_LINE(1327)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1327)
							if ((tmp26)){
								HX_STACK_LINE(1327)
								::String tmp27 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1327)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1327)
								::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1327)
								::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1327)
								::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1327)
								HX_STACK_DO_THROW(tmp31);
							}
						}
						HX_STACK_LINE(1327)
						{
							HX_STACK_LINE(1327)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1327)
							bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1327)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1327)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1327)
							if ((tmp24)){
								HX_STACK_LINE(1327)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1327)
						Float tmp22 = ret->zpp_inner->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1327)
						tmp21 = tmp22;
					}
					HX_STACK_LINE(1327)
					Float tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1327)
					tmp20 = (tmp21 == tmp22);
				}
				else{
					HX_STACK_LINE(1327)
					tmp20 = false;
				}
				HX_STACK_LINE(1327)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1327)
				if ((tmp21)){
					HX_STACK_LINE(1327)
					{
						HX_STACK_LINE(1327)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1327)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1327)
						{
						}
					}
					HX_STACK_LINE(1327)
					{
						HX_STACK_LINE(1327)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1327)
						bool tmp22 = (_this->_invalidate != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1327)
						if ((tmp22)){
							HX_STACK_LINE(1327)
							::zpp_nape::geom::ZPP_Vec2 tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1327)
							_this->_invalidate(tmp23);
						}
					}
				}
				HX_STACK_LINE(1327)
				ret;
			}
			HX_STACK_LINE(1327)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1327)
			tmp1 = ret;
		}
		HX_STACK_LINE(1327)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,localPointToWorld,return )

::nape::geom::Vec2 Body_obj::worldPointToLocal( ::nape::geom::Vec2 point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Body","worldPointToLocal",0x87d1fedc,"nape.phys.Body.worldPointToLocal","nape/phys/Body.hx",1340,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1341)
		{
			HX_STACK_LINE(1343)
			bool tmp = (point != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1343)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1343)
			if ((tmp)){
				HX_STACK_LINE(1343)
				tmp1 = point->zpp_disp;
			}
			else{
				HX_STACK_LINE(1343)
				tmp1 = false;
			}
			HX_STACK_LINE(1343)
			if ((tmp1)){
				HX_STACK_LINE(1343)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1343)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1343)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1347)
		bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1347)
		if ((tmp)){
			HX_STACK_LINE(1347)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot transform null Vec2","\x54","\x10","\xc3","\x67"));
		}
		HX_STACK_LINE(1349)
		{
			HX_STACK_LINE(1349)
			::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1349)
			::zpp_nape::phys::ZPP_Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1349)
			bool tmp2 = _this->zip_axis;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1349)
			if ((tmp2)){
				HX_STACK_LINE(1349)
				_this->zip_axis = false;
				HX_STACK_LINE(1349)
				{
					HX_STACK_LINE(1349)
					Float tmp3 = _this->rot;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1349)
					Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1349)
					_this->axisx = tmp4;
					HX_STACK_LINE(1349)
					Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1349)
					Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1349)
					_this->axisy = tmp6;
					HX_STACK_LINE(1349)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1350)
		Float tempx = ((Float)0.0);		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1351)
		Float tempy = ((Float)0.0);		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1352)
		Float pointx = ((Float)0.0);		HX_STACK_VAR(pointx,"pointx");
		HX_STACK_LINE(1353)
		Float pointy = ((Float)0.0);		HX_STACK_VAR(pointy,"pointy");
		HX_STACK_LINE(1354)
		{
			HX_STACK_LINE(1355)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1355)
			{
				HX_STACK_LINE(1355)
				{
					HX_STACK_LINE(1355)
					bool tmp2 = (point != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1355)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1355)
					if ((tmp2)){
						HX_STACK_LINE(1355)
						tmp3 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(1355)
						tmp3 = false;
					}
					HX_STACK_LINE(1355)
					if ((tmp3)){
						HX_STACK_LINE(1355)
						::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1355)
						::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1355)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(1355)
				{
					HX_STACK_LINE(1355)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1355)
					bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1355)
					if ((tmp2)){
						HX_STACK_LINE(1355)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1355)
				tmp1 = point->zpp_inner->x;
			}
			HX_STACK_LINE(1355)
			::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1355)
			Float tmp3 = tmp2->posx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1355)
			Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1355)
			pointx = tmp4;
			HX_STACK_LINE(1356)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1356)
			{
				HX_STACK_LINE(1356)
				{
					HX_STACK_LINE(1356)
					bool tmp6 = (point != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1356)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1356)
					if ((tmp6)){
						HX_STACK_LINE(1356)
						tmp7 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(1356)
						tmp7 = false;
					}
					HX_STACK_LINE(1356)
					if ((tmp7)){
						HX_STACK_LINE(1356)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1356)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1356)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(1356)
				{
					HX_STACK_LINE(1356)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1356)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1356)
					if ((tmp6)){
						HX_STACK_LINE(1356)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1356)
				tmp5 = point->zpp_inner->y;
			}
			HX_STACK_LINE(1356)
			::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1356)
			Float tmp7 = tmp6->posy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1356)
			Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1356)
			pointy = tmp8;
		}
		HX_STACK_LINE(1358)
		{
			HX_STACK_LINE(1359)
			Float tmp1 = pointx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1359)
			::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1359)
			Float tmp3 = tmp2->axisy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1359)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1359)
			Float tmp5 = pointy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1359)
			::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1359)
			Float tmp7 = tmp6->axisx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1359)
			Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1359)
			Float tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1359)
			tempx = tmp9;
			HX_STACK_LINE(1360)
			Float tmp10 = pointy;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1360)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1360)
			Float tmp12 = tmp11->axisy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1360)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1360)
			Float tmp14 = pointx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1360)
			::zpp_nape::phys::ZPP_Body tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1360)
			Float tmp16 = tmp15->axisx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1360)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1360)
			Float tmp18 = (tmp13 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1360)
			tempy = tmp18;
		}
		HX_STACK_LINE(1362)
		{
			HX_STACK_LINE(1363)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1364)
			tmp1 = point->zpp_inner->weak;
			HX_STACK_LINE(1363)
			if ((tmp1)){
				HX_STACK_LINE(1366)
				{
					HX_STACK_LINE(1366)
					{
						HX_STACK_LINE(1366)
						bool tmp2 = (point != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1366)
						bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1366)
						if ((tmp2)){
							HX_STACK_LINE(1366)
							tmp3 = point->zpp_disp;
						}
						else{
							HX_STACK_LINE(1366)
							tmp3 = false;
						}
						HX_STACK_LINE(1366)
						if ((tmp3)){
							HX_STACK_LINE(1366)
							::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1366)
							::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1366)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					HX_STACK_LINE(1366)
					{
						HX_STACK_LINE(1366)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1366)
						bool tmp2 = _this->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1366)
						if ((tmp2)){
							HX_STACK_LINE(1366)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1366)
						bool tmp3 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1366)
						if ((tmp3)){
							HX_STACK_LINE(1366)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1366)
					bool tmp2 = point->zpp_inner->_inuse;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1366)
					if ((tmp2)){
						HX_STACK_LINE(1366)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(1366)
					::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1366)
					point->zpp_inner->outer = null();
					HX_STACK_LINE(1366)
					point->zpp_inner = null();
					HX_STACK_LINE(1366)
					{
						HX_STACK_LINE(1366)
						::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1366)
						o->zpp_pool = null();
						HX_STACK_LINE(1366)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1366)
						bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1366)
						if ((tmp4)){
							HX_STACK_LINE(1366)
							::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1366)
							tmp5->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1366)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1366)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1366)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1366)
					{
						HX_STACK_LINE(1366)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1366)
						{
							HX_STACK_LINE(1366)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1366)
							if ((tmp3)){
								HX_STACK_LINE(1366)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1366)
								o->outer = null();
							}
							HX_STACK_LINE(1366)
							o->_isimmutable = null();
							HX_STACK_LINE(1366)
							o->_validate = null();
							HX_STACK_LINE(1366)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1366)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1366)
						o->next = tmp3;
						HX_STACK_LINE(1366)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1367)
				true;
			}
			else{
				HX_STACK_LINE(1370)
				false;
			}
		}
		HX_STACK_LINE(1373)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1373)
		{
			HX_STACK_LINE(1373)
			bool tmp2 = (tempx != tempx);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1373)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1373)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1373)
			if ((tmp3)){
				HX_STACK_LINE(1373)
				tmp4 = (tempy != tempy);
			}
			else{
				HX_STACK_LINE(1373)
				tmp4 = true;
			}
			HX_STACK_LINE(1373)
			if ((tmp4)){
				HX_STACK_LINE(1373)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1373)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1373)
			{
				HX_STACK_LINE(1373)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1373)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1373)
				if ((tmp6)){
					HX_STACK_LINE(1373)
					::nape::geom::Vec2 tmp7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1373)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(1373)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1373)
					ret = tmp7;
					HX_STACK_LINE(1373)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1373)
					ret->zpp_pool = null();
					HX_STACK_LINE(1373)
					ret->zpp_disp = false;
					HX_STACK_LINE(1373)
					::nape::geom::Vec2 tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1373)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1373)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1373)
					if ((tmp10)){
						HX_STACK_LINE(1373)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1373)
			bool tmp5 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1373)
			if ((tmp5)){
				HX_STACK_LINE(1373)
				::zpp_nape::geom::ZPP_Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1373)
				{
					HX_STACK_LINE(1373)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1373)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1373)
					{
						HX_STACK_LINE(1373)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1373)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1373)
						if ((tmp8)){
							HX_STACK_LINE(1373)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1373)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(1373)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1373)
							ret1 = tmp9;
							HX_STACK_LINE(1373)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1373)
							ret1->next = null();
						}
						HX_STACK_LINE(1373)
						ret1->weak = false;
					}
					HX_STACK_LINE(1373)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1373)
					{
						HX_STACK_LINE(1373)
						ret1->x = tempx;
						HX_STACK_LINE(1373)
						ret1->y = tempy;
						HX_STACK_LINE(1373)
						{
						}
					}
					HX_STACK_LINE(1373)
					tmp6 = ret1;
				}
				HX_STACK_LINE(1373)
				ret->zpp_inner = tmp6;
				HX_STACK_LINE(1373)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1373)
				{
					HX_STACK_LINE(1373)
					bool tmp6 = (ret != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1373)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1373)
					if ((tmp6)){
						HX_STACK_LINE(1373)
						tmp7 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1373)
						tmp7 = false;
					}
					HX_STACK_LINE(1373)
					if ((tmp7)){
						HX_STACK_LINE(1373)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1373)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1373)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(1373)
				{
					HX_STACK_LINE(1373)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1373)
					bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1373)
					if ((tmp6)){
						HX_STACK_LINE(1373)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1373)
					bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1373)
					if ((tmp7)){
						HX_STACK_LINE(1373)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1373)
				bool tmp6 = (tempx != tempx);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1373)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1373)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1373)
				if ((tmp7)){
					HX_STACK_LINE(1373)
					tmp8 = (tempy != tempy);
				}
				else{
					HX_STACK_LINE(1373)
					tmp8 = true;
				}
				HX_STACK_LINE(1373)
				if ((tmp8)){
					HX_STACK_LINE(1373)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1373)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1373)
				{
					HX_STACK_LINE(1373)
					{
						HX_STACK_LINE(1373)
						bool tmp10 = (ret != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1373)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1373)
						if ((tmp10)){
							HX_STACK_LINE(1373)
							tmp11 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1373)
							tmp11 = false;
						}
						HX_STACK_LINE(1373)
						if ((tmp11)){
							HX_STACK_LINE(1373)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1373)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1373)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(1373)
					{
						HX_STACK_LINE(1373)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1373)
						bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1373)
						if ((tmp10)){
							HX_STACK_LINE(1373)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1373)
					tmp9 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1373)
				Float tmp10 = tempx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1373)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1373)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1373)
				if ((tmp11)){
					HX_STACK_LINE(1373)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1373)
					{
						HX_STACK_LINE(1373)
						{
							HX_STACK_LINE(1373)
							bool tmp14 = (ret != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1373)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1373)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1373)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1373)
							if ((tmp17)){
								HX_STACK_LINE(1373)
								tmp16 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1373)
								tmp16 = false;
							}
							HX_STACK_LINE(1373)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1373)
							if ((tmp18)){
								HX_STACK_LINE(1373)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1373)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1373)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1373)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1373)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1373)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(1373)
						{
							HX_STACK_LINE(1373)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1373)
							bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1373)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1373)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1373)
							if ((tmp16)){
								HX_STACK_LINE(1373)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1373)
						Float tmp14 = ret->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1373)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(1373)
					Float tmp14 = tempy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1373)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(1373)
					tmp12 = false;
				}
				HX_STACK_LINE(1373)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1373)
				if ((tmp13)){
					HX_STACK_LINE(1373)
					{
						HX_STACK_LINE(1373)
						ret->zpp_inner->x = tempx;
						HX_STACK_LINE(1373)
						ret->zpp_inner->y = tempy;
						HX_STACK_LINE(1373)
						{
						}
					}
					HX_STACK_LINE(1373)
					{
						HX_STACK_LINE(1373)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1373)
						bool tmp14 = (_this->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1373)
						if ((tmp14)){
							HX_STACK_LINE(1373)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1373)
							_this->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(1373)
				ret;
			}
			HX_STACK_LINE(1373)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1373)
			tmp1 = ret;
		}
		HX_STACK_LINE(1373)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,worldPointToLocal,return )

::nape::geom::Vec2 Body_obj::localVectorToWorld( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Body","localVectorToWorld",0x7d44febf,"nape.phys.Body.localVectorToWorld","nape/phys/Body.hx",1387,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1388)
		{
			HX_STACK_LINE(1390)
			bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1390)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1390)
			if ((tmp)){
				HX_STACK_LINE(1390)
				tmp1 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1390)
				tmp1 = false;
			}
			HX_STACK_LINE(1390)
			if ((tmp1)){
				HX_STACK_LINE(1390)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1390)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1390)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1394)
		bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1394)
		if ((tmp)){
			HX_STACK_LINE(1394)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot transform null Vec2","\x54","\x10","\xc3","\x67"));
		}
		HX_STACK_LINE(1396)
		{
			HX_STACK_LINE(1396)
			::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1396)
			::zpp_nape::phys::ZPP_Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1396)
			bool tmp2 = _this->zip_axis;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1396)
			if ((tmp2)){
				HX_STACK_LINE(1396)
				_this->zip_axis = false;
				HX_STACK_LINE(1396)
				{
					HX_STACK_LINE(1396)
					Float tmp3 = _this->rot;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1396)
					Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1396)
					_this->axisx = tmp4;
					HX_STACK_LINE(1396)
					Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1396)
					Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1396)
					_this->axisy = tmp6;
					HX_STACK_LINE(1396)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1397)
		Float tempx = ((Float)0.0);		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1398)
		Float tempy = ((Float)0.0);		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1399)
		{
			HX_STACK_LINE(1400)
			::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1400)
			Float tmp2 = tmp1->axisy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1400)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1400)
			{
				HX_STACK_LINE(1400)
				{
					HX_STACK_LINE(1400)
					bool tmp4 = (vector != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1400)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1400)
					if ((tmp4)){
						HX_STACK_LINE(1400)
						tmp5 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1400)
						tmp5 = false;
					}
					HX_STACK_LINE(1400)
					if ((tmp5)){
						HX_STACK_LINE(1400)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1400)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1400)
						HX_STACK_DO_THROW(tmp7);
					}
				}
				HX_STACK_LINE(1400)
				{
					HX_STACK_LINE(1400)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1400)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1400)
					if ((tmp4)){
						HX_STACK_LINE(1400)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1400)
				tmp3 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1400)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1400)
			::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1400)
			Float tmp6 = tmp5->axisx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1400)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1400)
			{
				HX_STACK_LINE(1400)
				{
					HX_STACK_LINE(1400)
					bool tmp8 = (vector != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1400)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1400)
					if ((tmp8)){
						HX_STACK_LINE(1400)
						tmp9 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1400)
						tmp9 = false;
					}
					HX_STACK_LINE(1400)
					if ((tmp9)){
						HX_STACK_LINE(1400)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1400)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1400)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(1400)
				{
					HX_STACK_LINE(1400)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1400)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1400)
					if ((tmp8)){
						HX_STACK_LINE(1400)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1400)
				tmp7 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1400)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1400)
			Float tmp9 = (tmp4 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1400)
			tempx = tmp9;
			HX_STACK_LINE(1401)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1401)
			{
				HX_STACK_LINE(1401)
				{
					HX_STACK_LINE(1401)
					bool tmp11 = (vector != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1401)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1401)
					if ((tmp11)){
						HX_STACK_LINE(1401)
						tmp12 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1401)
						tmp12 = false;
					}
					HX_STACK_LINE(1401)
					if ((tmp12)){
						HX_STACK_LINE(1401)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1401)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1401)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(1401)
				{
					HX_STACK_LINE(1401)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1401)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1401)
					if ((tmp11)){
						HX_STACK_LINE(1401)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1401)
				tmp10 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1401)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1401)
			Float tmp12 = tmp11->axisx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1401)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1401)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1401)
			{
				HX_STACK_LINE(1401)
				{
					HX_STACK_LINE(1401)
					bool tmp15 = (vector != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1401)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1401)
					if ((tmp15)){
						HX_STACK_LINE(1401)
						tmp16 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1401)
						tmp16 = false;
					}
					HX_STACK_LINE(1401)
					if ((tmp16)){
						HX_STACK_LINE(1401)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1401)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1401)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(1401)
				{
					HX_STACK_LINE(1401)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1401)
					bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1401)
					if ((tmp15)){
						HX_STACK_LINE(1401)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1401)
				tmp14 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1401)
			::zpp_nape::phys::ZPP_Body tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1401)
			Float tmp16 = tmp15->axisy;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1401)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1401)
			Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1401)
			tempy = tmp18;
		}
		HX_STACK_LINE(1403)
		{
			HX_STACK_LINE(1404)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1405)
			tmp1 = vector->zpp_inner->weak;
			HX_STACK_LINE(1404)
			if ((tmp1)){
				HX_STACK_LINE(1407)
				{
					HX_STACK_LINE(1407)
					{
						HX_STACK_LINE(1407)
						bool tmp2 = (vector != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1407)
						bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1407)
						if ((tmp2)){
							HX_STACK_LINE(1407)
							tmp3 = vector->zpp_disp;
						}
						else{
							HX_STACK_LINE(1407)
							tmp3 = false;
						}
						HX_STACK_LINE(1407)
						if ((tmp3)){
							HX_STACK_LINE(1407)
							::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1407)
							::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1407)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					HX_STACK_LINE(1407)
					{
						HX_STACK_LINE(1407)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1407)
						bool tmp2 = _this->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1407)
						if ((tmp2)){
							HX_STACK_LINE(1407)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1407)
						bool tmp3 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1407)
						if ((tmp3)){
							HX_STACK_LINE(1407)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1407)
					bool tmp2 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1407)
					if ((tmp2)){
						HX_STACK_LINE(1407)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(1407)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1407)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(1407)
					vector->zpp_inner = null();
					HX_STACK_LINE(1407)
					{
						HX_STACK_LINE(1407)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1407)
						o->zpp_pool = null();
						HX_STACK_LINE(1407)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1407)
						bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1407)
						if ((tmp4)){
							HX_STACK_LINE(1407)
							::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1407)
							tmp5->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1407)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1407)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1407)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1407)
					{
						HX_STACK_LINE(1407)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1407)
						{
							HX_STACK_LINE(1407)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1407)
							if ((tmp3)){
								HX_STACK_LINE(1407)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1407)
								o->outer = null();
							}
							HX_STACK_LINE(1407)
							o->_isimmutable = null();
							HX_STACK_LINE(1407)
							o->_validate = null();
							HX_STACK_LINE(1407)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1407)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1407)
						o->next = tmp3;
						HX_STACK_LINE(1407)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1408)
				true;
			}
			else{
				HX_STACK_LINE(1411)
				false;
			}
		}
		HX_STACK_LINE(1414)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1414)
		{
			HX_STACK_LINE(1414)
			bool tmp2 = (tempx != tempx);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1414)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1414)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1414)
			if ((tmp3)){
				HX_STACK_LINE(1414)
				tmp4 = (tempy != tempy);
			}
			else{
				HX_STACK_LINE(1414)
				tmp4 = true;
			}
			HX_STACK_LINE(1414)
			if ((tmp4)){
				HX_STACK_LINE(1414)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1414)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1414)
			{
				HX_STACK_LINE(1414)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1414)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1414)
				if ((tmp6)){
					HX_STACK_LINE(1414)
					::nape::geom::Vec2 tmp7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1414)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(1414)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1414)
					ret = tmp7;
					HX_STACK_LINE(1414)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1414)
					ret->zpp_pool = null();
					HX_STACK_LINE(1414)
					ret->zpp_disp = false;
					HX_STACK_LINE(1414)
					::nape::geom::Vec2 tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1414)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1414)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1414)
					if ((tmp10)){
						HX_STACK_LINE(1414)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1414)
			bool tmp5 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1414)
			if ((tmp5)){
				HX_STACK_LINE(1414)
				::zpp_nape::geom::ZPP_Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1414)
				{
					HX_STACK_LINE(1414)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1414)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1414)
					{
						HX_STACK_LINE(1414)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1414)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1414)
						if ((tmp8)){
							HX_STACK_LINE(1414)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1414)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(1414)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1414)
							ret1 = tmp9;
							HX_STACK_LINE(1414)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1414)
							ret1->next = null();
						}
						HX_STACK_LINE(1414)
						ret1->weak = false;
					}
					HX_STACK_LINE(1414)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1414)
					{
						HX_STACK_LINE(1414)
						ret1->x = tempx;
						HX_STACK_LINE(1414)
						ret1->y = tempy;
						HX_STACK_LINE(1414)
						{
						}
					}
					HX_STACK_LINE(1414)
					tmp6 = ret1;
				}
				HX_STACK_LINE(1414)
				ret->zpp_inner = tmp6;
				HX_STACK_LINE(1414)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1414)
				{
					HX_STACK_LINE(1414)
					bool tmp6 = (ret != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1414)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1414)
					if ((tmp6)){
						HX_STACK_LINE(1414)
						tmp7 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1414)
						tmp7 = false;
					}
					HX_STACK_LINE(1414)
					if ((tmp7)){
						HX_STACK_LINE(1414)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1414)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1414)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(1414)
				{
					HX_STACK_LINE(1414)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1414)
					bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1414)
					if ((tmp6)){
						HX_STACK_LINE(1414)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1414)
					bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1414)
					if ((tmp7)){
						HX_STACK_LINE(1414)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1414)
				bool tmp6 = (tempx != tempx);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1414)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1414)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1414)
				if ((tmp7)){
					HX_STACK_LINE(1414)
					tmp8 = (tempy != tempy);
				}
				else{
					HX_STACK_LINE(1414)
					tmp8 = true;
				}
				HX_STACK_LINE(1414)
				if ((tmp8)){
					HX_STACK_LINE(1414)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1414)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1414)
				{
					HX_STACK_LINE(1414)
					{
						HX_STACK_LINE(1414)
						bool tmp10 = (ret != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1414)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1414)
						if ((tmp10)){
							HX_STACK_LINE(1414)
							tmp11 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1414)
							tmp11 = false;
						}
						HX_STACK_LINE(1414)
						if ((tmp11)){
							HX_STACK_LINE(1414)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1414)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1414)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(1414)
					{
						HX_STACK_LINE(1414)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1414)
						bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1414)
						if ((tmp10)){
							HX_STACK_LINE(1414)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1414)
					tmp9 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1414)
				Float tmp10 = tempx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1414)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1414)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1414)
				if ((tmp11)){
					HX_STACK_LINE(1414)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1414)
					{
						HX_STACK_LINE(1414)
						{
							HX_STACK_LINE(1414)
							bool tmp14 = (ret != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1414)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1414)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1414)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1414)
							if ((tmp17)){
								HX_STACK_LINE(1414)
								tmp16 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1414)
								tmp16 = false;
							}
							HX_STACK_LINE(1414)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1414)
							if ((tmp18)){
								HX_STACK_LINE(1414)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1414)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1414)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1414)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1414)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1414)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(1414)
						{
							HX_STACK_LINE(1414)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1414)
							bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1414)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1414)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1414)
							if ((tmp16)){
								HX_STACK_LINE(1414)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1414)
						Float tmp14 = ret->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1414)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(1414)
					Float tmp14 = tempy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1414)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(1414)
					tmp12 = false;
				}
				HX_STACK_LINE(1414)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1414)
				if ((tmp13)){
					HX_STACK_LINE(1414)
					{
						HX_STACK_LINE(1414)
						ret->zpp_inner->x = tempx;
						HX_STACK_LINE(1414)
						ret->zpp_inner->y = tempy;
						HX_STACK_LINE(1414)
						{
						}
					}
					HX_STACK_LINE(1414)
					{
						HX_STACK_LINE(1414)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1414)
						bool tmp14 = (_this->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1414)
						if ((tmp14)){
							HX_STACK_LINE(1414)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1414)
							_this->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(1414)
				ret;
			}
			HX_STACK_LINE(1414)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1414)
			tmp1 = ret;
		}
		HX_STACK_LINE(1414)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,localVectorToWorld,return )

::nape::geom::Vec2 Body_obj::worldVectorToLocal( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Body","worldVectorToLocal",0xef542091,"nape.phys.Body.worldVectorToLocal","nape/phys/Body.hx",1428,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1429)
		{
			HX_STACK_LINE(1431)
			bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1431)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1431)
			if ((tmp)){
				HX_STACK_LINE(1431)
				tmp1 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(1431)
				tmp1 = false;
			}
			HX_STACK_LINE(1431)
			if ((tmp1)){
				HX_STACK_LINE(1431)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1431)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1431)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1435)
		bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1435)
		if ((tmp)){
			HX_STACK_LINE(1435)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot transform null Vec2","\x54","\x10","\xc3","\x67"));
		}
		HX_STACK_LINE(1437)
		{
			HX_STACK_LINE(1437)
			::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1437)
			::zpp_nape::phys::ZPP_Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1437)
			bool tmp2 = _this->zip_axis;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1437)
			if ((tmp2)){
				HX_STACK_LINE(1437)
				_this->zip_axis = false;
				HX_STACK_LINE(1437)
				{
					HX_STACK_LINE(1437)
					Float tmp3 = _this->rot;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1437)
					Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1437)
					_this->axisx = tmp4;
					HX_STACK_LINE(1437)
					Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1437)
					Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1437)
					_this->axisy = tmp6;
					HX_STACK_LINE(1437)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1438)
		Float tempx = ((Float)0.0);		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1439)
		Float tempy = ((Float)0.0);		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1440)
		{
			HX_STACK_LINE(1441)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1441)
			{
				HX_STACK_LINE(1441)
				{
					HX_STACK_LINE(1441)
					bool tmp2 = (vector != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1441)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1441)
					if ((tmp2)){
						HX_STACK_LINE(1441)
						tmp3 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1441)
						tmp3 = false;
					}
					HX_STACK_LINE(1441)
					if ((tmp3)){
						HX_STACK_LINE(1441)
						::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1441)
						::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1441)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(1441)
				{
					HX_STACK_LINE(1441)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1441)
					bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1441)
					if ((tmp2)){
						HX_STACK_LINE(1441)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1441)
				tmp1 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1441)
			::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1441)
			Float tmp3 = tmp2->axisy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1441)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1441)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1441)
			{
				HX_STACK_LINE(1441)
				{
					HX_STACK_LINE(1441)
					bool tmp6 = (vector != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1441)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1441)
					if ((tmp6)){
						HX_STACK_LINE(1441)
						tmp7 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1441)
						tmp7 = false;
					}
					HX_STACK_LINE(1441)
					if ((tmp7)){
						HX_STACK_LINE(1441)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1441)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1441)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(1441)
				{
					HX_STACK_LINE(1441)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1441)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1441)
					if ((tmp6)){
						HX_STACK_LINE(1441)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1441)
				tmp5 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1441)
			::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1441)
			Float tmp7 = tmp6->axisx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1441)
			Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1441)
			Float tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1441)
			tempx = tmp9;
			HX_STACK_LINE(1442)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1442)
			{
				HX_STACK_LINE(1442)
				{
					HX_STACK_LINE(1442)
					bool tmp11 = (vector != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1442)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1442)
					if ((tmp11)){
						HX_STACK_LINE(1442)
						tmp12 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1442)
						tmp12 = false;
					}
					HX_STACK_LINE(1442)
					if ((tmp12)){
						HX_STACK_LINE(1442)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1442)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1442)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(1442)
				{
					HX_STACK_LINE(1442)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1442)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1442)
					if ((tmp11)){
						HX_STACK_LINE(1442)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1442)
				tmp10 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1442)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1442)
			Float tmp12 = tmp11->axisy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1442)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1442)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1442)
			{
				HX_STACK_LINE(1442)
				{
					HX_STACK_LINE(1442)
					bool tmp15 = (vector != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1442)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1442)
					if ((tmp15)){
						HX_STACK_LINE(1442)
						tmp16 = vector->zpp_disp;
					}
					else{
						HX_STACK_LINE(1442)
						tmp16 = false;
					}
					HX_STACK_LINE(1442)
					if ((tmp16)){
						HX_STACK_LINE(1442)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1442)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1442)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(1442)
				{
					HX_STACK_LINE(1442)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1442)
					bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1442)
					if ((tmp15)){
						HX_STACK_LINE(1442)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1442)
				tmp14 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1442)
			::zpp_nape::phys::ZPP_Body tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1442)
			Float tmp16 = tmp15->axisx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1442)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1442)
			Float tmp18 = (tmp13 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1442)
			tempy = tmp18;
		}
		HX_STACK_LINE(1444)
		{
			HX_STACK_LINE(1445)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1446)
			tmp1 = vector->zpp_inner->weak;
			HX_STACK_LINE(1445)
			if ((tmp1)){
				HX_STACK_LINE(1448)
				{
					HX_STACK_LINE(1448)
					{
						HX_STACK_LINE(1448)
						bool tmp2 = (vector != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1448)
						bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1448)
						if ((tmp2)){
							HX_STACK_LINE(1448)
							tmp3 = vector->zpp_disp;
						}
						else{
							HX_STACK_LINE(1448)
							tmp3 = false;
						}
						HX_STACK_LINE(1448)
						if ((tmp3)){
							HX_STACK_LINE(1448)
							::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1448)
							::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1448)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					HX_STACK_LINE(1448)
					{
						HX_STACK_LINE(1448)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1448)
						bool tmp2 = _this->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1448)
						if ((tmp2)){
							HX_STACK_LINE(1448)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1448)
						bool tmp3 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1448)
						if ((tmp3)){
							HX_STACK_LINE(1448)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1448)
					bool tmp2 = vector->zpp_inner->_inuse;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1448)
					if ((tmp2)){
						HX_STACK_LINE(1448)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(1448)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1448)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(1448)
					vector->zpp_inner = null();
					HX_STACK_LINE(1448)
					{
						HX_STACK_LINE(1448)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1448)
						o->zpp_pool = null();
						HX_STACK_LINE(1448)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1448)
						bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1448)
						if ((tmp4)){
							HX_STACK_LINE(1448)
							::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1448)
							tmp5->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1448)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1448)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1448)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1448)
					{
						HX_STACK_LINE(1448)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1448)
						{
							HX_STACK_LINE(1448)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1448)
							if ((tmp3)){
								HX_STACK_LINE(1448)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1448)
								o->outer = null();
							}
							HX_STACK_LINE(1448)
							o->_isimmutable = null();
							HX_STACK_LINE(1448)
							o->_validate = null();
							HX_STACK_LINE(1448)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1448)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1448)
						o->next = tmp3;
						HX_STACK_LINE(1448)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1449)
				true;
			}
			else{
				HX_STACK_LINE(1452)
				false;
			}
		}
		HX_STACK_LINE(1455)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1455)
		{
			HX_STACK_LINE(1455)
			bool tmp2 = (tempx != tempx);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1455)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1455)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1455)
			if ((tmp3)){
				HX_STACK_LINE(1455)
				tmp4 = (tempy != tempy);
			}
			else{
				HX_STACK_LINE(1455)
				tmp4 = true;
			}
			HX_STACK_LINE(1455)
			if ((tmp4)){
				HX_STACK_LINE(1455)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1455)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1455)
			{
				HX_STACK_LINE(1455)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1455)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1455)
				if ((tmp6)){
					HX_STACK_LINE(1455)
					::nape::geom::Vec2 tmp7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1455)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(1455)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1455)
					ret = tmp7;
					HX_STACK_LINE(1455)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1455)
					ret->zpp_pool = null();
					HX_STACK_LINE(1455)
					ret->zpp_disp = false;
					HX_STACK_LINE(1455)
					::nape::geom::Vec2 tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1455)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1455)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1455)
					if ((tmp10)){
						HX_STACK_LINE(1455)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1455)
			bool tmp5 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1455)
			if ((tmp5)){
				HX_STACK_LINE(1455)
				::zpp_nape::geom::ZPP_Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1455)
				{
					HX_STACK_LINE(1455)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1455)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1455)
					{
						HX_STACK_LINE(1455)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1455)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1455)
						if ((tmp8)){
							HX_STACK_LINE(1455)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1455)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(1455)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1455)
							ret1 = tmp9;
							HX_STACK_LINE(1455)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1455)
							ret1->next = null();
						}
						HX_STACK_LINE(1455)
						ret1->weak = false;
					}
					HX_STACK_LINE(1455)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1455)
					{
						HX_STACK_LINE(1455)
						ret1->x = tempx;
						HX_STACK_LINE(1455)
						ret1->y = tempy;
						HX_STACK_LINE(1455)
						{
						}
					}
					HX_STACK_LINE(1455)
					tmp6 = ret1;
				}
				HX_STACK_LINE(1455)
				ret->zpp_inner = tmp6;
				HX_STACK_LINE(1455)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1455)
				{
					HX_STACK_LINE(1455)
					bool tmp6 = (ret != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1455)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1455)
					if ((tmp6)){
						HX_STACK_LINE(1455)
						tmp7 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1455)
						tmp7 = false;
					}
					HX_STACK_LINE(1455)
					if ((tmp7)){
						HX_STACK_LINE(1455)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1455)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1455)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(1455)
				{
					HX_STACK_LINE(1455)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1455)
					bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1455)
					if ((tmp6)){
						HX_STACK_LINE(1455)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1455)
					bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1455)
					if ((tmp7)){
						HX_STACK_LINE(1455)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1455)
				bool tmp6 = (tempx != tempx);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1455)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1455)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1455)
				if ((tmp7)){
					HX_STACK_LINE(1455)
					tmp8 = (tempy != tempy);
				}
				else{
					HX_STACK_LINE(1455)
					tmp8 = true;
				}
				HX_STACK_LINE(1455)
				if ((tmp8)){
					HX_STACK_LINE(1455)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1455)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1455)
				{
					HX_STACK_LINE(1455)
					{
						HX_STACK_LINE(1455)
						bool tmp10 = (ret != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1455)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1455)
						if ((tmp10)){
							HX_STACK_LINE(1455)
							tmp11 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1455)
							tmp11 = false;
						}
						HX_STACK_LINE(1455)
						if ((tmp11)){
							HX_STACK_LINE(1455)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1455)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1455)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(1455)
					{
						HX_STACK_LINE(1455)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1455)
						bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1455)
						if ((tmp10)){
							HX_STACK_LINE(1455)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1455)
					tmp9 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1455)
				Float tmp10 = tempx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1455)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1455)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1455)
				if ((tmp11)){
					HX_STACK_LINE(1455)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1455)
					{
						HX_STACK_LINE(1455)
						{
							HX_STACK_LINE(1455)
							bool tmp14 = (ret != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1455)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1455)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1455)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1455)
							if ((tmp17)){
								HX_STACK_LINE(1455)
								tmp16 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1455)
								tmp16 = false;
							}
							HX_STACK_LINE(1455)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1455)
							if ((tmp18)){
								HX_STACK_LINE(1455)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1455)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1455)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1455)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1455)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1455)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(1455)
						{
							HX_STACK_LINE(1455)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1455)
							bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1455)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1455)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1455)
							if ((tmp16)){
								HX_STACK_LINE(1455)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1455)
						Float tmp14 = ret->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1455)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(1455)
					Float tmp14 = tempy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1455)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(1455)
					tmp12 = false;
				}
				HX_STACK_LINE(1455)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1455)
				if ((tmp13)){
					HX_STACK_LINE(1455)
					{
						HX_STACK_LINE(1455)
						ret->zpp_inner->x = tempx;
						HX_STACK_LINE(1455)
						ret->zpp_inner->y = tempy;
						HX_STACK_LINE(1455)
						{
						}
					}
					HX_STACK_LINE(1455)
					{
						HX_STACK_LINE(1455)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1455)
						bool tmp14 = (_this->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1455)
						if ((tmp14)){
							HX_STACK_LINE(1455)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1455)
							_this->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(1455)
				ret;
			}
			HX_STACK_LINE(1455)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1455)
			tmp1 = ret;
		}
		HX_STACK_LINE(1455)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,worldVectorToLocal,return )

::nape::phys::Body Body_obj::applyImpulse( ::nape::geom::Vec2 impulse,::nape::geom::Vec2 pos,hx::Null< bool >  __o_sleepable){
bool sleepable = __o_sleepable.Default(false);
	HX_STACK_FRAME("nape.phys.Body","applyImpulse",0x41b92f3d,"nape.phys.Body.applyImpulse","nape/phys/Body.hx",1478,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(impulse,"impulse")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(sleepable,"sleepable")
{
		HX_STACK_LINE(1479)
		{
			HX_STACK_LINE(1481)
			bool tmp = (impulse != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1481)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1481)
			if ((tmp)){
				HX_STACK_LINE(1481)
				tmp1 = impulse->zpp_disp;
			}
			else{
				HX_STACK_LINE(1481)
				tmp1 = false;
			}
			HX_STACK_LINE(1481)
			if ((tmp1)){
				HX_STACK_LINE(1481)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1481)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1481)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1484)
		{
			HX_STACK_LINE(1486)
			bool tmp = (pos != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1486)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1486)
			if ((tmp)){
				HX_STACK_LINE(1486)
				tmp1 = pos->zpp_disp;
			}
			else{
				HX_STACK_LINE(1486)
				tmp1 = false;
			}
			HX_STACK_LINE(1486)
			if ((tmp1)){
				HX_STACK_LINE(1486)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1486)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1486)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1490)
		bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1490)
		if ((tmp1)){
			HX_STACK_LINE(1490)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(1493)
		bool tmp2 = (impulse == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1493)
		if ((tmp2)){
			HX_STACK_LINE(1493)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot apply null impulse to Body","\x44","\xf5","\xe1","\x71"));
		}
		HX_STACK_LINE(1495)
		bool tmp3 = sleepable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1495)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1495)
		if ((tmp3)){
			HX_STACK_LINE(1495)
			::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1495)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1495)
			::zpp_nape::space::ZPP_Space tmp7 = tmp6->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1495)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1495)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1495)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1495)
			if ((tmp10)){
				HX_STACK_LINE(1495)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: isSleeping makes no sense if the object is not contained within a Space","\x1a","\xc1","\xd3","\xeb"));
			}
			HX_STACK_LINE(1495)
			::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1495)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1495)
			tmp4 = tmp12->component->sleeping;
		}
		else{
			HX_STACK_LINE(1495)
			tmp4 = false;
		}
		HX_STACK_LINE(1495)
		if ((tmp4)){
			HX_STACK_LINE(1496)
			{
				HX_STACK_LINE(1497)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1498)
				tmp5 = impulse->zpp_inner->weak;
				HX_STACK_LINE(1497)
				if ((tmp5)){
					HX_STACK_LINE(1500)
					{
						HX_STACK_LINE(1500)
						{
							HX_STACK_LINE(1500)
							bool tmp6 = (impulse != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1500)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1500)
							if ((tmp6)){
								HX_STACK_LINE(1500)
								tmp7 = impulse->zpp_disp;
							}
							else{
								HX_STACK_LINE(1500)
								tmp7 = false;
							}
							HX_STACK_LINE(1500)
							if ((tmp7)){
								HX_STACK_LINE(1500)
								::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1500)
								::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1500)
								HX_STACK_DO_THROW(tmp9);
							}
						}
						HX_STACK_LINE(1500)
						{
							HX_STACK_LINE(1500)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1500)
							bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1500)
							if ((tmp6)){
								HX_STACK_LINE(1500)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(1500)
							bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1500)
							if ((tmp7)){
								HX_STACK_LINE(1500)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1500)
						bool tmp6 = impulse->zpp_inner->_inuse;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1500)
						if ((tmp6)){
							HX_STACK_LINE(1500)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(1500)
						::zpp_nape::geom::ZPP_Vec2 inner = impulse->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(1500)
						impulse->zpp_inner->outer = null();
						HX_STACK_LINE(1500)
						impulse->zpp_inner = null();
						HX_STACK_LINE(1500)
						{
							HX_STACK_LINE(1500)
							::nape::geom::Vec2 o = impulse;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1500)
							o->zpp_pool = null();
							HX_STACK_LINE(1500)
							::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1500)
							bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1500)
							if ((tmp8)){
								HX_STACK_LINE(1500)
								::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1500)
								tmp9->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(1500)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(1500)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(1500)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(1500)
						{
							HX_STACK_LINE(1500)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1500)
							{
								HX_STACK_LINE(1500)
								bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1500)
								if ((tmp7)){
									HX_STACK_LINE(1500)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(1500)
									o->outer = null();
								}
								HX_STACK_LINE(1500)
								o->_isimmutable = null();
								HX_STACK_LINE(1500)
								o->_validate = null();
								HX_STACK_LINE(1500)
								o->_invalidate = null();
							}
							HX_STACK_LINE(1500)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1500)
							o->next = tmp7;
							HX_STACK_LINE(1500)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(1501)
					true;
				}
				else{
					HX_STACK_LINE(1504)
					false;
				}
			}
			HX_STACK_LINE(1507)
			bool tmp5 = (pos != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1507)
			if ((tmp5)){
				HX_STACK_LINE(1509)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1510)
				tmp6 = pos->zpp_inner->weak;
				HX_STACK_LINE(1509)
				if ((tmp6)){
					HX_STACK_LINE(1512)
					{
						HX_STACK_LINE(1512)
						{
							HX_STACK_LINE(1512)
							bool tmp7 = (pos != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1512)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1512)
							if ((tmp7)){
								HX_STACK_LINE(1512)
								tmp8 = pos->zpp_disp;
							}
							else{
								HX_STACK_LINE(1512)
								tmp8 = false;
							}
							HX_STACK_LINE(1512)
							if ((tmp8)){
								HX_STACK_LINE(1512)
								::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1512)
								::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1512)
								HX_STACK_DO_THROW(tmp10);
							}
						}
						HX_STACK_LINE(1512)
						{
							HX_STACK_LINE(1512)
							::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1512)
							bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1512)
							if ((tmp7)){
								HX_STACK_LINE(1512)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(1512)
							bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1512)
							if ((tmp8)){
								HX_STACK_LINE(1512)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1512)
						bool tmp7 = pos->zpp_inner->_inuse;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1512)
						if ((tmp7)){
							HX_STACK_LINE(1512)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(1512)
						::zpp_nape::geom::ZPP_Vec2 inner = pos->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(1512)
						pos->zpp_inner->outer = null();
						HX_STACK_LINE(1512)
						pos->zpp_inner = null();
						HX_STACK_LINE(1512)
						{
							HX_STACK_LINE(1512)
							::nape::geom::Vec2 o = pos;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1512)
							o->zpp_pool = null();
							HX_STACK_LINE(1512)
							::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1512)
							bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1512)
							if ((tmp9)){
								HX_STACK_LINE(1512)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1512)
								tmp10->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(1512)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(1512)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(1512)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(1512)
						{
							HX_STACK_LINE(1512)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1512)
							{
								HX_STACK_LINE(1512)
								bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1512)
								if ((tmp8)){
									HX_STACK_LINE(1512)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(1512)
									o->outer = null();
								}
								HX_STACK_LINE(1512)
								o->_isimmutable = null();
								HX_STACK_LINE(1512)
								o->_validate = null();
								HX_STACK_LINE(1512)
								o->_invalidate = null();
							}
							HX_STACK_LINE(1512)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1512)
							o->next = tmp8;
							HX_STACK_LINE(1512)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(1513)
					true;
				}
				else{
					HX_STACK_LINE(1516)
					false;
				}
			}
			HX_STACK_LINE(1520)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1522)
		::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1522)
		tmp5->validate_mass();
		HX_STACK_LINE(1523)
		{
			HX_STACK_LINE(1524)
			::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1524)
			Float t = tmp6->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1533)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1533)
			{
				HX_STACK_LINE(1533)
				{
					HX_STACK_LINE(1533)
					bool tmp8 = (impulse != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1533)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1533)
					if ((tmp8)){
						HX_STACK_LINE(1533)
						tmp9 = impulse->zpp_disp;
					}
					else{
						HX_STACK_LINE(1533)
						tmp9 = false;
					}
					HX_STACK_LINE(1533)
					if ((tmp9)){
						HX_STACK_LINE(1533)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1533)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1533)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(1533)
				{
					HX_STACK_LINE(1533)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1533)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1533)
					if ((tmp8)){
						HX_STACK_LINE(1533)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1533)
				tmp7 = impulse->zpp_inner->x;
			}
			HX_STACK_LINE(1533)
			Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1533)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1533)
			::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1533)
			hx::AddEq(tmp10->velx,tmp9);
			HX_STACK_LINE(1534)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1534)
			{
				HX_STACK_LINE(1534)
				{
					HX_STACK_LINE(1534)
					bool tmp12 = (impulse != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1534)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1534)
					if ((tmp12)){
						HX_STACK_LINE(1534)
						tmp13 = impulse->zpp_disp;
					}
					else{
						HX_STACK_LINE(1534)
						tmp13 = false;
					}
					HX_STACK_LINE(1534)
					if ((tmp13)){
						HX_STACK_LINE(1534)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1534)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1534)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(1534)
				{
					HX_STACK_LINE(1534)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1534)
					bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1534)
					if ((tmp12)){
						HX_STACK_LINE(1534)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1534)
				tmp11 = impulse->zpp_inner->y;
			}
			HX_STACK_LINE(1534)
			Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1534)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1534)
			::zpp_nape::phys::ZPP_Body tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1534)
			hx::AddEq(tmp14->vely,tmp13);
		}
		HX_STACK_LINE(1536)
		bool tmp6 = (pos != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1536)
		if ((tmp6)){
			HX_STACK_LINE(1537)
			Float rx = ((Float)0.0);		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(1538)
			Float ry = ((Float)0.0);		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(1539)
			{
				HX_STACK_LINE(1540)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1540)
				{
					HX_STACK_LINE(1540)
					{
						HX_STACK_LINE(1540)
						bool tmp8 = (pos != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1540)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1540)
						if ((tmp8)){
							HX_STACK_LINE(1540)
							tmp9 = pos->zpp_disp;
						}
						else{
							HX_STACK_LINE(1540)
							tmp9 = false;
						}
						HX_STACK_LINE(1540)
						if ((tmp9)){
							HX_STACK_LINE(1540)
							::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1540)
							::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1540)
							HX_STACK_DO_THROW(tmp11);
						}
					}
					HX_STACK_LINE(1540)
					{
						HX_STACK_LINE(1540)
						::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1540)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1540)
						if ((tmp8)){
							HX_STACK_LINE(1540)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1540)
					tmp7 = pos->zpp_inner->x;
				}
				HX_STACK_LINE(1540)
				::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1540)
				Float tmp9 = tmp8->posx;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1540)
				Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1540)
				rx = tmp10;
				HX_STACK_LINE(1541)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1541)
				{
					HX_STACK_LINE(1541)
					{
						HX_STACK_LINE(1541)
						bool tmp12 = (pos != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1541)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1541)
						if ((tmp12)){
							HX_STACK_LINE(1541)
							tmp13 = pos->zpp_disp;
						}
						else{
							HX_STACK_LINE(1541)
							tmp13 = false;
						}
						HX_STACK_LINE(1541)
						if ((tmp13)){
							HX_STACK_LINE(1541)
							::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1541)
							::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1541)
							HX_STACK_DO_THROW(tmp15);
						}
					}
					HX_STACK_LINE(1541)
					{
						HX_STACK_LINE(1541)
						::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1541)
						bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1541)
						if ((tmp12)){
							HX_STACK_LINE(1541)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1541)
					tmp11 = pos->zpp_inner->y;
				}
				HX_STACK_LINE(1541)
				::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1541)
				Float tmp13 = tmp12->posy;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1541)
				Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1541)
				ry = tmp14;
			}
			HX_STACK_LINE(1543)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1543)
			tmp7->validate_inertia();
			HX_STACK_LINE(1544)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1544)
			{
				HX_STACK_LINE(1544)
				{
					HX_STACK_LINE(1544)
					bool tmp9 = (impulse != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1544)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1544)
					if ((tmp9)){
						HX_STACK_LINE(1544)
						tmp10 = impulse->zpp_disp;
					}
					else{
						HX_STACK_LINE(1544)
						tmp10 = false;
					}
					HX_STACK_LINE(1544)
					if ((tmp10)){
						HX_STACK_LINE(1544)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1544)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1544)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(1544)
				{
					HX_STACK_LINE(1544)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1544)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1544)
					if ((tmp9)){
						HX_STACK_LINE(1544)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1544)
				tmp8 = impulse->zpp_inner->y;
			}
			HX_STACK_LINE(1544)
			Float tmp9 = rx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1544)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1544)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1544)
			{
				HX_STACK_LINE(1544)
				{
					HX_STACK_LINE(1544)
					bool tmp12 = (impulse != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1544)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1544)
					if ((tmp12)){
						HX_STACK_LINE(1544)
						tmp13 = impulse->zpp_disp;
					}
					else{
						HX_STACK_LINE(1544)
						tmp13 = false;
					}
					HX_STACK_LINE(1544)
					if ((tmp13)){
						HX_STACK_LINE(1544)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1544)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1544)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(1544)
				{
					HX_STACK_LINE(1544)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1544)
					bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1544)
					if ((tmp12)){
						HX_STACK_LINE(1544)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1544)
				tmp11 = impulse->zpp_inner->x;
			}
			HX_STACK_LINE(1544)
			Float tmp12 = ry;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1544)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1544)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1544)
			::zpp_nape::phys::ZPP_Body tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1544)
			Float tmp16 = tmp15->iinertia;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1544)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1544)
			::zpp_nape::phys::ZPP_Body tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1544)
			hx::AddEq(tmp18->angvel,tmp17);
			HX_STACK_LINE(1545)
			{
				HX_STACK_LINE(1546)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1547)
				tmp19 = pos->zpp_inner->weak;
				HX_STACK_LINE(1546)
				if ((tmp19)){
					HX_STACK_LINE(1549)
					{
						HX_STACK_LINE(1549)
						{
							HX_STACK_LINE(1549)
							bool tmp20 = (pos != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1549)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1549)
							if ((tmp20)){
								HX_STACK_LINE(1549)
								tmp21 = pos->zpp_disp;
							}
							else{
								HX_STACK_LINE(1549)
								tmp21 = false;
							}
							HX_STACK_LINE(1549)
							if ((tmp21)){
								HX_STACK_LINE(1549)
								::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1549)
								::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1549)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(1549)
						{
							HX_STACK_LINE(1549)
							::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1549)
							bool tmp20 = _this->_immutable;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1549)
							if ((tmp20)){
								HX_STACK_LINE(1549)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(1549)
							bool tmp21 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1549)
							if ((tmp21)){
								HX_STACK_LINE(1549)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1549)
						bool tmp20 = pos->zpp_inner->_inuse;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1549)
						if ((tmp20)){
							HX_STACK_LINE(1549)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(1549)
						::zpp_nape::geom::ZPP_Vec2 inner = pos->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(1549)
						pos->zpp_inner->outer = null();
						HX_STACK_LINE(1549)
						pos->zpp_inner = null();
						HX_STACK_LINE(1549)
						{
							HX_STACK_LINE(1549)
							::nape::geom::Vec2 o = pos;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1549)
							o->zpp_pool = null();
							HX_STACK_LINE(1549)
							::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1549)
							bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1549)
							if ((tmp22)){
								HX_STACK_LINE(1549)
								::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1549)
								tmp23->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(1549)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(1549)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(1549)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(1549)
						{
							HX_STACK_LINE(1549)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1549)
							{
								HX_STACK_LINE(1549)
								bool tmp21 = (o->outer != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1549)
								if ((tmp21)){
									HX_STACK_LINE(1549)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(1549)
									o->outer = null();
								}
								HX_STACK_LINE(1549)
								o->_isimmutable = null();
								HX_STACK_LINE(1549)
								o->_validate = null();
								HX_STACK_LINE(1549)
								o->_invalidate = null();
							}
							HX_STACK_LINE(1549)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1549)
							o->next = tmp21;
							HX_STACK_LINE(1549)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(1550)
					true;
				}
				else{
					HX_STACK_LINE(1553)
					false;
				}
			}
		}
		HX_STACK_LINE(1557)
		bool tmp7 = sleepable;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1557)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1557)
		if ((tmp8)){
			HX_STACK_LINE(1558)
			::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1558)
			int tmp10 = tmp9->type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1558)
			int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1558)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1558)
			if ((tmp12)){
				HX_STACK_LINE(1558)
				::zpp_nape::phys::ZPP_Body tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1558)
				tmp13->wake();
			}
		}
		HX_STACK_LINE(1560)
		{
			HX_STACK_LINE(1561)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1562)
			tmp9 = impulse->zpp_inner->weak;
			HX_STACK_LINE(1561)
			if ((tmp9)){
				HX_STACK_LINE(1564)
				{
					HX_STACK_LINE(1564)
					{
						HX_STACK_LINE(1564)
						bool tmp10 = (impulse != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1564)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1564)
						if ((tmp10)){
							HX_STACK_LINE(1564)
							tmp11 = impulse->zpp_disp;
						}
						else{
							HX_STACK_LINE(1564)
							tmp11 = false;
						}
						HX_STACK_LINE(1564)
						if ((tmp11)){
							HX_STACK_LINE(1564)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1564)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1564)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(1564)
					{
						HX_STACK_LINE(1564)
						::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1564)
						bool tmp10 = _this->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1564)
						if ((tmp10)){
							HX_STACK_LINE(1564)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1564)
						bool tmp11 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1564)
						if ((tmp11)){
							HX_STACK_LINE(1564)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1564)
					bool tmp10 = impulse->zpp_inner->_inuse;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1564)
					if ((tmp10)){
						HX_STACK_LINE(1564)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(1564)
					::zpp_nape::geom::ZPP_Vec2 inner = impulse->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1564)
					impulse->zpp_inner->outer = null();
					HX_STACK_LINE(1564)
					impulse->zpp_inner = null();
					HX_STACK_LINE(1564)
					{
						HX_STACK_LINE(1564)
						::nape::geom::Vec2 o = impulse;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1564)
						o->zpp_pool = null();
						HX_STACK_LINE(1564)
						::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1564)
						bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1564)
						if ((tmp12)){
							HX_STACK_LINE(1564)
							::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1564)
							tmp13->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1564)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1564)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1564)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1564)
					{
						HX_STACK_LINE(1564)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1564)
						{
							HX_STACK_LINE(1564)
							bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1564)
							if ((tmp11)){
								HX_STACK_LINE(1564)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1564)
								o->outer = null();
							}
							HX_STACK_LINE(1564)
							o->_isimmutable = null();
							HX_STACK_LINE(1564)
							o->_validate = null();
							HX_STACK_LINE(1564)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1564)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1564)
						o->next = tmp11;
						HX_STACK_LINE(1564)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1565)
				true;
			}
			else{
				HX_STACK_LINE(1568)
				false;
			}
		}
		HX_STACK_LINE(1571)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,applyImpulse,return )

::nape::phys::Body Body_obj::applyAngularImpulse( Float impulse,hx::Null< bool >  __o_sleepable){
bool sleepable = __o_sleepable.Default(false);
	HX_STACK_FRAME("nape.phys.Body","applyAngularImpulse",0x699fcc6b,"nape.phys.Body.applyAngularImpulse","nape/phys/Body.hx",1587,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(impulse,"impulse")
	HX_STACK_ARG(sleepable,"sleepable")
{
		HX_STACK_LINE(1589)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1589)
		bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1589)
		if ((tmp1)){
			HX_STACK_LINE(1589)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
		}
		HX_STACK_LINE(1591)
		bool tmp2 = sleepable;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1591)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1591)
		if ((tmp2)){
			HX_STACK_LINE(1591)
			::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1591)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1591)
			::zpp_nape::space::ZPP_Space tmp6 = tmp5->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1591)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1591)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1591)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1591)
			if ((tmp9)){
				HX_STACK_LINE(1591)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: isSleeping makes no sense if the object is not contained within a Space","\x1a","\xc1","\xd3","\xeb"));
			}
			HX_STACK_LINE(1591)
			::zpp_nape::phys::ZPP_Body tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1591)
			::zpp_nape::phys::ZPP_Body tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1591)
			tmp3 = tmp11->component->sleeping;
		}
		else{
			HX_STACK_LINE(1591)
			tmp3 = false;
		}
		HX_STACK_LINE(1591)
		if ((tmp3)){
			HX_STACK_LINE(1592)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1594)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1594)
		tmp4->validate_inertia();
		HX_STACK_LINE(1595)
		Float tmp5 = impulse;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1595)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1595)
		Float tmp7 = tmp6->iinertia;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1595)
		Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1595)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1595)
		hx::AddEq(tmp9->angvel,tmp8);
		HX_STACK_LINE(1596)
		bool tmp10 = sleepable;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1596)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1596)
		if ((tmp11)){
			HX_STACK_LINE(1597)
			::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1597)
			int tmp13 = tmp12->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1597)
			int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1597)
			bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1597)
			if ((tmp15)){
				HX_STACK_LINE(1597)
				::zpp_nape::phys::ZPP_Body tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1597)
				tmp16->wake();
			}
		}
		HX_STACK_LINE(1599)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,applyAngularImpulse,return )

::nape::phys::Body Body_obj::translateShapes( ::nape::geom::Vec2 translation){
	HX_STACK_FRAME("nape.phys.Body","translateShapes",0x68f49b8a,"nape.phys.Body.translateShapes","nape/phys/Body.hx",1613,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(1614)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1614)
	tmp->immutable_midstep(HX_HCSTRING("Body::translateShapes()","\xdf","\x8e","\x13","\x25"));
	HX_STACK_LINE(1615)
	{
		HX_STACK_LINE(1617)
		bool tmp1 = (translation != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1617)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1617)
		if ((tmp1)){
			HX_STACK_LINE(1617)
			tmp2 = translation->zpp_disp;
		}
		else{
			HX_STACK_LINE(1617)
			tmp2 = false;
		}
		HX_STACK_LINE(1617)
		if ((tmp2)){
			HX_STACK_LINE(1617)
			::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1617)
			::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1617)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(1621)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1621)
	bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1621)
	if ((tmp2)){
		HX_STACK_LINE(1621)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(1624)
	bool tmp3 = (translation == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1624)
	if ((tmp3)){
		HX_STACK_LINE(1624)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot displace by null Vec2","\x86","\x36","\x3a","\x52"));
	}
	HX_STACK_LINE(1626)
	bool tmp4 = translation->zpp_inner->weak;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1626)
	bool weak = tmp4;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(1627)
	translation->zpp_inner->weak = false;
	HX_STACK_LINE(1628)
	{
		HX_STACK_LINE(1629)
		::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1629)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp6 = tmp5->shapes->head;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1629)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1630)
		while((true)){
			HX_STACK_LINE(1630)
			bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1630)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1630)
			if ((tmp8)){
				HX_STACK_LINE(1630)
				break;
			}
			HX_STACK_LINE(1631)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1632)
			::nape::geom::Vec2 tmp9 = translation;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1632)
			s->outer->translate(tmp9);
			HX_STACK_LINE(1633)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1636)
	translation->zpp_inner->weak = weak;
	HX_STACK_LINE(1637)
	{
		HX_STACK_LINE(1638)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1639)
		tmp5 = translation->zpp_inner->weak;
		HX_STACK_LINE(1638)
		if ((tmp5)){
			HX_STACK_LINE(1641)
			{
				HX_STACK_LINE(1641)
				{
					HX_STACK_LINE(1641)
					bool tmp6 = (translation != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1641)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1641)
					if ((tmp6)){
						HX_STACK_LINE(1641)
						tmp7 = translation->zpp_disp;
					}
					else{
						HX_STACK_LINE(1641)
						tmp7 = false;
					}
					HX_STACK_LINE(1641)
					if ((tmp7)){
						HX_STACK_LINE(1641)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1641)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1641)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(1641)
				{
					HX_STACK_LINE(1641)
					::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1641)
					bool tmp6 = _this->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1641)
					if ((tmp6)){
						HX_STACK_LINE(1641)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1641)
					bool tmp7 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1641)
					if ((tmp7)){
						HX_STACK_LINE(1641)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1641)
				bool tmp6 = translation->zpp_inner->_inuse;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1641)
				if ((tmp6)){
					HX_STACK_LINE(1641)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1641)
				::zpp_nape::geom::ZPP_Vec2 inner = translation->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1641)
				translation->zpp_inner->outer = null();
				HX_STACK_LINE(1641)
				translation->zpp_inner = null();
				HX_STACK_LINE(1641)
				{
					HX_STACK_LINE(1641)
					::nape::geom::Vec2 o = translation;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1641)
					o->zpp_pool = null();
					HX_STACK_LINE(1641)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1641)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1641)
					if ((tmp8)){
						HX_STACK_LINE(1641)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1641)
						tmp9->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1641)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1641)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1641)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1641)
				{
					HX_STACK_LINE(1641)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1641)
					{
						HX_STACK_LINE(1641)
						bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1641)
						if ((tmp7)){
							HX_STACK_LINE(1641)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1641)
							o->outer = null();
						}
						HX_STACK_LINE(1641)
						o->_isimmutable = null();
						HX_STACK_LINE(1641)
						o->_validate = null();
						HX_STACK_LINE(1641)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1641)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1641)
					o->next = tmp7;
					HX_STACK_LINE(1641)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1642)
			true;
		}
		else{
			HX_STACK_LINE(1645)
			false;
		}
	}
	HX_STACK_LINE(1648)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,translateShapes,return )

::nape::phys::Body Body_obj::rotateShapes( Float angle){
	HX_STACK_FRAME("nape.phys.Body","rotateShapes",0x7006dd43,"nape.phys.Body.rotateShapes","nape/phys/Body.hx",1661,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(1662)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1662)
	tmp->immutable_midstep(HX_HCSTRING("Body::rotateShapes()","\xb0","\x10","\x24","\x6f"));
	HX_STACK_LINE(1664)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1664)
	bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1664)
	if ((tmp2)){
		HX_STACK_LINE(1664)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(1666)
	{
		HX_STACK_LINE(1667)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1667)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->shapes->head;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1667)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1668)
		while((true)){
			HX_STACK_LINE(1668)
			bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1668)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1668)
			if ((tmp6)){
				HX_STACK_LINE(1668)
				break;
			}
			HX_STACK_LINE(1669)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1670)
			Float tmp7 = angle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1670)
			s->outer->rotate(tmp7);
			HX_STACK_LINE(1671)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1674)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,rotateShapes,return )

::nape::phys::Body Body_obj::scaleShapes( Float scaleX,Float scaleY){
	HX_STACK_FRAME("nape.phys.Body","scaleShapes",0x09d82ac6,"nape.phys.Body.scaleShapes","nape/phys/Body.hx",1689,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_LINE(1690)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1690)
	tmp->immutable_midstep(HX_HCSTRING("Body::scaleShapes()","\x1b","\xeb","\x17","\x58"));
	HX_STACK_LINE(1692)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1692)
	bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1692)
	if ((tmp2)){
		HX_STACK_LINE(1692)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(1694)
	{
		HX_STACK_LINE(1695)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1695)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->shapes->head;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1695)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1696)
		while((true)){
			HX_STACK_LINE(1696)
			bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1696)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1696)
			if ((tmp6)){
				HX_STACK_LINE(1696)
				break;
			}
			HX_STACK_LINE(1697)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1698)
			Float tmp7 = scaleX;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1698)
			Float tmp8 = scaleY;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1698)
			s->outer->scale(tmp7,tmp8);
			HX_STACK_LINE(1699)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1702)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,scaleShapes,return )

::nape::phys::Body Body_obj::transformShapes( ::nape::geom::Mat23 matrix){
	HX_STACK_FRAME("nape.phys.Body","transformShapes",0x4ab05c28,"nape.phys.Body.transformShapes","nape/phys/Body.hx",1718,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(1719)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1719)
	tmp->immutable_midstep(HX_HCSTRING("Body::transformShapes()","\xfd","\x32","\xb7","\xbd"));
	HX_STACK_LINE(1721)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1721)
	bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1721)
	if ((tmp2)){
		HX_STACK_LINE(1721)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(1723)
	{
		HX_STACK_LINE(1724)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1724)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->shapes->head;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1724)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1725)
		while((true)){
			HX_STACK_LINE(1725)
			bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1725)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1725)
			if ((tmp6)){
				HX_STACK_LINE(1725)
				break;
			}
			HX_STACK_LINE(1726)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1727)
			::nape::geom::Mat23 tmp7 = matrix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1727)
			s->outer->transform(tmp7);
			HX_STACK_LINE(1728)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1731)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,transformShapes,return )

::nape::phys::Body Body_obj::align( ){
	HX_STACK_FRAME("nape.phys.Body","align",0xe66ad5af,"nape.phys.Body.align","nape/phys/Body.hx",1749,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1750)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1750)
	tmp->immutable_midstep(HX_HCSTRING("Body::align()","\x44","\x8b","\x7d","\x21"));
	HX_STACK_LINE(1752)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1752)
	bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1752)
	if ((tmp2)){
		HX_STACK_LINE(1752)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(1755)
	::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1755)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->shapes->head;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1755)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1755)
	if ((tmp5)){
		HX_STACK_LINE(1755)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot align empty Body","\xbf","\x31","\xd9","\x0a"));
	}
	HX_STACK_LINE(1757)
	::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1757)
	tmp6->validate_localCOM();
	HX_STACK_LINE(1758)
	::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1758)
	{
		HX_STACK_LINE(1758)
		::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1758)
		Float tmp9 = tmp8->localCOMx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1758)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1758)
		Float x = tmp10;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1758)
		::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1758)
		Float tmp12 = tmp11->localCOMy;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1758)
		Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1758)
		Float y = tmp13;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1758)
		bool weak = false;		HX_STACK_VAR(weak,"weak");
		HX_STACK_LINE(1758)
		bool tmp14 = (x != x);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1758)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1758)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1758)
		if ((tmp15)){
			HX_STACK_LINE(1758)
			tmp16 = (y != y);
		}
		else{
			HX_STACK_LINE(1758)
			tmp16 = true;
		}
		HX_STACK_LINE(1758)
		if ((tmp16)){
			HX_STACK_LINE(1758)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(1758)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1758)
		{
			HX_STACK_LINE(1758)
			::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1758)
			bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1758)
			if ((tmp18)){
				HX_STACK_LINE(1758)
				::nape::geom::Vec2 tmp19 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1758)
				ret = tmp19;
			}
			else{
				HX_STACK_LINE(1758)
				::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1758)
				ret = tmp19;
				HX_STACK_LINE(1758)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(1758)
				ret->zpp_pool = null();
				HX_STACK_LINE(1758)
				ret->zpp_disp = false;
				HX_STACK_LINE(1758)
				::nape::geom::Vec2 tmp20 = ret;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1758)
				::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1758)
				bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1758)
				if ((tmp22)){
					HX_STACK_LINE(1758)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
		}
		HX_STACK_LINE(1758)
		bool tmp17 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1758)
		if ((tmp17)){
			HX_STACK_LINE(1758)
			::zpp_nape::geom::ZPP_Vec2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1758)
			{
				HX_STACK_LINE(1758)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1758)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1758)
				{
					HX_STACK_LINE(1758)
					::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1758)
					bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1758)
					if ((tmp20)){
						HX_STACK_LINE(1758)
						::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1758)
						ret1 = tmp21;
					}
					else{
						HX_STACK_LINE(1758)
						::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1758)
						ret1 = tmp21;
						HX_STACK_LINE(1758)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1758)
						ret1->next = null();
					}
					HX_STACK_LINE(1758)
					ret1->weak = false;
				}
				HX_STACK_LINE(1758)
				ret1->_immutable = immutable;
				HX_STACK_LINE(1758)
				{
					HX_STACK_LINE(1758)
					ret1->x = x;
					HX_STACK_LINE(1758)
					ret1->y = y;
					HX_STACK_LINE(1758)
					{
					}
				}
				HX_STACK_LINE(1758)
				tmp18 = ret1;
			}
			HX_STACK_LINE(1758)
			ret->zpp_inner = tmp18;
			HX_STACK_LINE(1758)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(1758)
			{
				HX_STACK_LINE(1758)
				bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1758)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1758)
				if ((tmp18)){
					HX_STACK_LINE(1758)
					tmp19 = ret->zpp_disp;
				}
				else{
					HX_STACK_LINE(1758)
					tmp19 = false;
				}
				HX_STACK_LINE(1758)
				if ((tmp19)){
					HX_STACK_LINE(1758)
					::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1758)
					::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1758)
					HX_STACK_DO_THROW(tmp21);
				}
			}
			HX_STACK_LINE(1758)
			{
				HX_STACK_LINE(1758)
				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1758)
				bool tmp18 = _this->_immutable;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1758)
				if ((tmp18)){
					HX_STACK_LINE(1758)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(1758)
				bool tmp19 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1758)
				if ((tmp19)){
					HX_STACK_LINE(1758)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1758)
			bool tmp18 = (x != x);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1758)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1758)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1758)
			if ((tmp19)){
				HX_STACK_LINE(1758)
				tmp20 = (y != y);
			}
			else{
				HX_STACK_LINE(1758)
				tmp20 = true;
			}
			HX_STACK_LINE(1758)
			if ((tmp20)){
				HX_STACK_LINE(1758)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1758)
			Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1758)
			{
				HX_STACK_LINE(1758)
				{
					HX_STACK_LINE(1758)
					bool tmp22 = (ret != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1758)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1758)
					if ((tmp22)){
						HX_STACK_LINE(1758)
						tmp23 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1758)
						tmp23 = false;
					}
					HX_STACK_LINE(1758)
					if ((tmp23)){
						HX_STACK_LINE(1758)
						::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1758)
						::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1758)
						HX_STACK_DO_THROW(tmp25);
					}
				}
				HX_STACK_LINE(1758)
				{
					HX_STACK_LINE(1758)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1758)
					bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1758)
					if ((tmp22)){
						HX_STACK_LINE(1758)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1758)
				tmp21 = ret->zpp_inner->x;
			}
			HX_STACK_LINE(1758)
			Float tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1758)
			bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1758)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1758)
			if ((tmp23)){
				HX_STACK_LINE(1758)
				Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1758)
				{
					HX_STACK_LINE(1758)
					{
						HX_STACK_LINE(1758)
						bool tmp26 = (ret != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1758)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1758)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1758)
						bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1758)
						if ((tmp29)){
							HX_STACK_LINE(1758)
							tmp28 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1758)
							tmp28 = false;
						}
						HX_STACK_LINE(1758)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1758)
						if ((tmp30)){
							HX_STACK_LINE(1758)
							::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1758)
							::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1758)
							::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1758)
							::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1758)
							::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1758)
							HX_STACK_DO_THROW(tmp35);
						}
					}
					HX_STACK_LINE(1758)
					{
						HX_STACK_LINE(1758)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1758)
						bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1758)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1758)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1758)
						if ((tmp28)){
							HX_STACK_LINE(1758)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1758)
					Float tmp26 = ret->zpp_inner->y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1758)
					tmp25 = tmp26;
				}
				HX_STACK_LINE(1758)
				Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1758)
				tmp24 = (tmp25 == tmp26);
			}
			else{
				HX_STACK_LINE(1758)
				tmp24 = false;
			}
			HX_STACK_LINE(1758)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1758)
			if ((tmp25)){
				HX_STACK_LINE(1758)
				{
					HX_STACK_LINE(1758)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(1758)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(1758)
					{
					}
				}
				HX_STACK_LINE(1758)
				{
					HX_STACK_LINE(1758)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1758)
					bool tmp26 = (_this->_invalidate != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1758)
					if ((tmp26)){
						HX_STACK_LINE(1758)
						::zpp_nape::geom::ZPP_Vec2 tmp27 = _this;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1758)
						_this->_invalidate(tmp27);
					}
				}
			}
			HX_STACK_LINE(1758)
			ret;
		}
		HX_STACK_LINE(1758)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(1758)
		tmp7 = ret;
	}
	HX_STACK_LINE(1758)
	::nape::geom::Vec2 dx = tmp7;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1759)
	::nape::geom::Vec2 tmp8 = dx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1759)
	this->translateShapes(tmp8);
	HX_STACK_LINE(1760)
	::nape::geom::Vec2 tmp9 = dx;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1760)
	::nape::geom::Vec2 tmp10 = this->localVectorToWorld(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1760)
	::nape::geom::Vec2 dx2 = tmp10;		HX_STACK_VAR(dx2,"dx2");
	HX_STACK_LINE(1761)
	::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1761)
	{
		HX_STACK_LINE(1761)
		::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1761)
		::nape::geom::Vec2 tmp13 = tmp12->wrap_pos;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1761)
		bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1761)
		if ((tmp14)){
			HX_STACK_LINE(1761)
			::zpp_nape::phys::ZPP_Body tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1761)
			tmp15->setupPosition();
		}
		HX_STACK_LINE(1761)
		::zpp_nape::phys::ZPP_Body tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1761)
		tmp11 = tmp15->wrap_pos;
	}
	HX_STACK_LINE(1761)
	::nape::geom::Vec2 tmp12 = dx2;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1761)
	tmp11->subeq(tmp12);
	HX_STACK_LINE(1762)
	::zpp_nape::phys::ZPP_Body tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1762)
	Float tmp14 = tmp13->pre_posx;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1762)
	Float tmp15 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1762)
	bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1762)
	if ((tmp16)){
		HX_STACK_LINE(1763)
		Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1772)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1772)
		{
			HX_STACK_LINE(1772)
			{
				HX_STACK_LINE(1772)
				bool tmp18 = (dx2 != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1772)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1772)
				if ((tmp18)){
					HX_STACK_LINE(1772)
					tmp19 = dx2->zpp_disp;
				}
				else{
					HX_STACK_LINE(1772)
					tmp19 = false;
				}
				HX_STACK_LINE(1772)
				if ((tmp19)){
					HX_STACK_LINE(1772)
					::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1772)
					::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1772)
					HX_STACK_DO_THROW(tmp21);
				}
			}
			HX_STACK_LINE(1772)
			{
				HX_STACK_LINE(1772)
				::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1772)
				bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1772)
				if ((tmp18)){
					HX_STACK_LINE(1772)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1772)
			tmp17 = dx2->zpp_inner->x;
		}
		HX_STACK_LINE(1772)
		Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1772)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1772)
		::zpp_nape::phys::ZPP_Body tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1772)
		hx::SubEq(tmp20->pre_posx,tmp19);
		HX_STACK_LINE(1773)
		Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1773)
		{
			HX_STACK_LINE(1773)
			{
				HX_STACK_LINE(1773)
				bool tmp22 = (dx2 != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1773)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1773)
				if ((tmp22)){
					HX_STACK_LINE(1773)
					tmp23 = dx2->zpp_disp;
				}
				else{
					HX_STACK_LINE(1773)
					tmp23 = false;
				}
				HX_STACK_LINE(1773)
				if ((tmp23)){
					HX_STACK_LINE(1773)
					::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1773)
					::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1773)
					HX_STACK_DO_THROW(tmp25);
				}
			}
			HX_STACK_LINE(1773)
			{
				HX_STACK_LINE(1773)
				::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1773)
				bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1773)
				if ((tmp22)){
					HX_STACK_LINE(1773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1773)
			tmp21 = dx2->zpp_inner->y;
		}
		HX_STACK_LINE(1773)
		Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1773)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1773)
		::zpp_nape::phys::ZPP_Body tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1773)
		hx::SubEq(tmp24->pre_posy,tmp23);
	}
	HX_STACK_LINE(1775)
	{
		HX_STACK_LINE(1775)
		{
			HX_STACK_LINE(1775)
			bool tmp17 = (dx != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1775)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1775)
			if ((tmp17)){
				HX_STACK_LINE(1775)
				tmp18 = dx->zpp_disp;
			}
			else{
				HX_STACK_LINE(1775)
				tmp18 = false;
			}
			HX_STACK_LINE(1775)
			if ((tmp18)){
				HX_STACK_LINE(1775)
				::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1775)
				::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1775)
				HX_STACK_DO_THROW(tmp20);
			}
		}
		HX_STACK_LINE(1775)
		{
			HX_STACK_LINE(1775)
			::zpp_nape::geom::ZPP_Vec2 _this = dx->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1775)
			bool tmp17 = _this->_immutable;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1775)
			if ((tmp17)){
				HX_STACK_LINE(1775)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(1775)
			bool tmp18 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1775)
			if ((tmp18)){
				HX_STACK_LINE(1775)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1775)
		bool tmp17 = dx->zpp_inner->_inuse;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1775)
		if ((tmp17)){
			HX_STACK_LINE(1775)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
		}
		HX_STACK_LINE(1775)
		::zpp_nape::geom::ZPP_Vec2 inner = dx->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1775)
		dx->zpp_inner->outer = null();
		HX_STACK_LINE(1775)
		dx->zpp_inner = null();
		HX_STACK_LINE(1775)
		{
			HX_STACK_LINE(1775)
			::nape::geom::Vec2 o = dx;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1775)
			o->zpp_pool = null();
			HX_STACK_LINE(1775)
			::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1775)
			bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1775)
			if ((tmp19)){
				HX_STACK_LINE(1775)
				::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1775)
				tmp20->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1775)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1775)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1775)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1775)
		{
			HX_STACK_LINE(1775)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1775)
			{
				HX_STACK_LINE(1775)
				bool tmp18 = (o->outer != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1775)
				if ((tmp18)){
					HX_STACK_LINE(1775)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1775)
					o->outer = null();
				}
				HX_STACK_LINE(1775)
				o->_isimmutable = null();
				HX_STACK_LINE(1775)
				o->_validate = null();
				HX_STACK_LINE(1775)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1775)
			::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1775)
			o->next = tmp18;
			HX_STACK_LINE(1775)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1776)
	{
		HX_STACK_LINE(1776)
		{
			HX_STACK_LINE(1776)
			bool tmp17 = (dx2 != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1776)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1776)
			if ((tmp17)){
				HX_STACK_LINE(1776)
				tmp18 = dx2->zpp_disp;
			}
			else{
				HX_STACK_LINE(1776)
				tmp18 = false;
			}
			HX_STACK_LINE(1776)
			if ((tmp18)){
				HX_STACK_LINE(1776)
				::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1776)
				::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1776)
				HX_STACK_DO_THROW(tmp20);
			}
		}
		HX_STACK_LINE(1776)
		{
			HX_STACK_LINE(1776)
			::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1776)
			bool tmp17 = _this->_immutable;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1776)
			if ((tmp17)){
				HX_STACK_LINE(1776)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(1776)
			bool tmp18 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1776)
			if ((tmp18)){
				HX_STACK_LINE(1776)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1776)
		bool tmp17 = dx2->zpp_inner->_inuse;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1776)
		if ((tmp17)){
			HX_STACK_LINE(1776)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
		}
		HX_STACK_LINE(1776)
		::zpp_nape::geom::ZPP_Vec2 inner = dx2->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1776)
		dx2->zpp_inner->outer = null();
		HX_STACK_LINE(1776)
		dx2->zpp_inner = null();
		HX_STACK_LINE(1776)
		{
			HX_STACK_LINE(1776)
			::nape::geom::Vec2 o = dx2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1776)
			o->zpp_pool = null();
			HX_STACK_LINE(1776)
			::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1776)
			bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1776)
			if ((tmp19)){
				HX_STACK_LINE(1776)
				::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1776)
				tmp20->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1776)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1776)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1776)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1776)
		{
			HX_STACK_LINE(1776)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1776)
			{
				HX_STACK_LINE(1776)
				bool tmp18 = (o->outer != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1776)
				if ((tmp18)){
					HX_STACK_LINE(1776)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1776)
					o->outer = null();
				}
				HX_STACK_LINE(1776)
				o->_isimmutable = null();
				HX_STACK_LINE(1776)
				o->_validate = null();
				HX_STACK_LINE(1776)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1776)
			::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1776)
			o->next = tmp18;
			HX_STACK_LINE(1776)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1777)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,align,return )

::nape::phys::Body Body_obj::rotate( ::nape::geom::Vec2 centre,Float angle){
	HX_STACK_FRAME("nape.phys.Body","rotate",0x4495d431,"nape.phys.Body.rotate","nape/phys/Body.hx",1792,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(centre,"centre")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(1793)
	{
		HX_STACK_LINE(1795)
		bool tmp = (centre != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1795)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1795)
		if ((tmp)){
			HX_STACK_LINE(1795)
			tmp1 = centre->zpp_disp;
		}
		else{
			HX_STACK_LINE(1795)
			tmp1 = false;
		}
		HX_STACK_LINE(1795)
		if ((tmp1)){
			HX_STACK_LINE(1795)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1795)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1795)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1799)
	bool tmp = (centre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1799)
	if ((tmp)){
		HX_STACK_LINE(1799)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot rotate about a null Vec2","\xef","\x7f","\x59","\xa6"));
	}
	HX_STACK_LINE(1802)
	bool tmp1 = (angle != angle);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1802)
	if ((tmp1)){
		HX_STACK_LINE(1802)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot rotate by NaN radians","\xda","\x44","\x34","\x35"));
	}
	HX_STACK_LINE(1804)
	bool tmp2 = centre->zpp_inner->weak;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1804)
	bool weak = tmp2;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(1805)
	centre->zpp_inner->weak = false;
	HX_STACK_LINE(1806)
	::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1806)
	{
		HX_STACK_LINE(1806)
		::zpp_nape::phys::ZPP_Body tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1806)
		::nape::geom::Vec2 tmp5 = tmp4->wrap_pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1806)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1806)
		if ((tmp6)){
			HX_STACK_LINE(1806)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1806)
			tmp7->setupPosition();
		}
		HX_STACK_LINE(1806)
		::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1806)
		tmp3 = tmp7->wrap_pos;
	}
	HX_STACK_LINE(1806)
	::nape::geom::Vec2 tmp4 = centre;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1806)
	::nape::geom::Vec2 tmp5 = tmp3->sub(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1806)
	::nape::geom::Vec2 del = tmp5;		HX_STACK_VAR(del,"del");
	HX_STACK_LINE(1807)
	Float tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1807)
	del->rotate(tmp6);
	HX_STACK_LINE(1808)
	{
		HX_STACK_LINE(1808)
		::nape::geom::Vec2 tmp7 = del;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1808)
		::nape::geom::Vec2 tmp8 = centre->add(tmp7,true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1808)
		::nape::geom::Vec2 position = tmp8;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(1808)
		{
			HX_STACK_LINE(1808)
			{
				HX_STACK_LINE(1808)
				bool tmp9 = (position != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1808)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1808)
				if ((tmp9)){
					HX_STACK_LINE(1808)
					tmp10 = position->zpp_disp;
				}
				else{
					HX_STACK_LINE(1808)
					tmp10 = false;
				}
				HX_STACK_LINE(1808)
				if ((tmp10)){
					HX_STACK_LINE(1808)
					::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1808)
					::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1808)
					HX_STACK_DO_THROW(tmp12);
				}
			}
			HX_STACK_LINE(1808)
			bool tmp9 = (position == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1808)
			if ((tmp9)){
				HX_STACK_LINE(1808)
				::String tmp10 = HX_HCSTRING("Error: Body::position","\x79","\x55","\xb5","\x73");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1808)
				::String tmp11 = (tmp10 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1808)
				HX_STACK_DO_THROW(tmp11);
			}
			HX_STACK_LINE(1808)
			{
				HX_STACK_LINE(1808)
				::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1808)
				{
					HX_STACK_LINE(1808)
					::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1808)
					::nape::geom::Vec2 tmp12 = tmp11->wrap_pos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1808)
					bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1808)
					if ((tmp13)){
						HX_STACK_LINE(1808)
						::zpp_nape::phys::ZPP_Body tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1808)
						tmp14->setupPosition();
					}
					HX_STACK_LINE(1808)
					::zpp_nape::phys::ZPP_Body tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1808)
					tmp10 = tmp14->wrap_pos;
				}
				HX_STACK_LINE(1808)
				::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1808)
				{
					HX_STACK_LINE(1808)
					bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1808)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1808)
					if ((tmp11)){
						HX_STACK_LINE(1808)
						tmp12 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(1808)
						tmp12 = false;
					}
					HX_STACK_LINE(1808)
					if ((tmp12)){
						HX_STACK_LINE(1808)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1808)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1808)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(1808)
				{
					HX_STACK_LINE(1808)
					bool tmp11 = (position != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1808)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1808)
					if ((tmp11)){
						HX_STACK_LINE(1808)
						tmp12 = position->zpp_disp;
					}
					else{
						HX_STACK_LINE(1808)
						tmp12 = false;
					}
					HX_STACK_LINE(1808)
					if ((tmp12)){
						HX_STACK_LINE(1808)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1808)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1808)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(1808)
				{
					HX_STACK_LINE(1808)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1808)
					bool tmp11 = _this1->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1808)
					if ((tmp11)){
						HX_STACK_LINE(1808)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1808)
					bool tmp12 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1808)
					if ((tmp12)){
						HX_STACK_LINE(1808)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(1808)
				bool tmp11 = (position == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1808)
				if ((tmp11)){
					HX_STACK_LINE(1808)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(1808)
				::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1808)
				{
					HX_STACK_LINE(1808)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1808)
					{
						HX_STACK_LINE(1808)
						bool tmp14 = (position != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1808)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1808)
						if ((tmp14)){
							HX_STACK_LINE(1808)
							tmp15 = position->zpp_disp;
						}
						else{
							HX_STACK_LINE(1808)
							tmp15 = false;
						}
						HX_STACK_LINE(1808)
						if ((tmp15)){
							HX_STACK_LINE(1808)
							::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1808)
							::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1808)
							HX_STACK_DO_THROW(tmp17);
						}
						HX_STACK_LINE(1808)
						{
							HX_STACK_LINE(1808)
							::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1808)
							bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1808)
							if ((tmp16)){
								HX_STACK_LINE(1808)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1808)
						tmp13 = position->zpp_inner->x;
					}
					HX_STACK_LINE(1808)
					Float x = tmp13;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1808)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1808)
					{
						HX_STACK_LINE(1808)
						bool tmp15 = (position != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1808)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1808)
						if ((tmp15)){
							HX_STACK_LINE(1808)
							tmp16 = position->zpp_disp;
						}
						else{
							HX_STACK_LINE(1808)
							tmp16 = false;
						}
						HX_STACK_LINE(1808)
						if ((tmp16)){
							HX_STACK_LINE(1808)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1808)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1808)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(1808)
						{
							HX_STACK_LINE(1808)
							::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1808)
							bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1808)
							if ((tmp17)){
								HX_STACK_LINE(1808)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1808)
						tmp14 = position->zpp_inner->y;
					}
					HX_STACK_LINE(1808)
					Float y = tmp14;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1808)
					{
						HX_STACK_LINE(1808)
						bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1808)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1808)
						if ((tmp15)){
							HX_STACK_LINE(1808)
							tmp16 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(1808)
							tmp16 = false;
						}
						HX_STACK_LINE(1808)
						if ((tmp16)){
							HX_STACK_LINE(1808)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1808)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1808)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(1808)
					{
						HX_STACK_LINE(1808)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1808)
						bool tmp15 = _this1->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1808)
						if ((tmp15)){
							HX_STACK_LINE(1808)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1808)
						bool tmp16 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1808)
						if ((tmp16)){
							HX_STACK_LINE(1808)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(1808)
					bool tmp15 = (x != x);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1808)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1808)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1808)
					if ((tmp16)){
						HX_STACK_LINE(1808)
						tmp17 = (y != y);
					}
					else{
						HX_STACK_LINE(1808)
						tmp17 = true;
					}
					HX_STACK_LINE(1808)
					if ((tmp17)){
						HX_STACK_LINE(1808)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(1808)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1808)
					{
						HX_STACK_LINE(1808)
						{
							HX_STACK_LINE(1808)
							bool tmp19 = (_this != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1808)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1808)
							if ((tmp19)){
								HX_STACK_LINE(1808)
								tmp20 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(1808)
								tmp20 = false;
							}
							HX_STACK_LINE(1808)
							if ((tmp20)){
								HX_STACK_LINE(1808)
								::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1808)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1808)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(1808)
						{
							HX_STACK_LINE(1808)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1808)
							bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1808)
							if ((tmp19)){
								HX_STACK_LINE(1808)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1808)
						tmp18 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1808)
					Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1808)
					bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1808)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1808)
					if ((tmp20)){
						HX_STACK_LINE(1808)
						Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1808)
						{
							HX_STACK_LINE(1808)
							{
								HX_STACK_LINE(1808)
								bool tmp23 = (_this != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1808)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1808)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1808)
								bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1808)
								if ((tmp26)){
									HX_STACK_LINE(1808)
									tmp25 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(1808)
									tmp25 = false;
								}
								HX_STACK_LINE(1808)
								bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1808)
								if ((tmp27)){
									HX_STACK_LINE(1808)
									::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1808)
									::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1808)
									::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1808)
									::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1808)
									::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1808)
									HX_STACK_DO_THROW(tmp32);
								}
							}
							HX_STACK_LINE(1808)
							{
								HX_STACK_LINE(1808)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1808)
								bool tmp23 = (_this1->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1808)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1808)
								bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1808)
								if ((tmp25)){
									HX_STACK_LINE(1808)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1808)
							Float tmp23 = _this->zpp_inner->y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1808)
							tmp22 = tmp23;
						}
						HX_STACK_LINE(1808)
						Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1808)
						tmp21 = (tmp22 == tmp23);
					}
					else{
						HX_STACK_LINE(1808)
						tmp21 = false;
					}
					HX_STACK_LINE(1808)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1808)
					if ((tmp22)){
						HX_STACK_LINE(1808)
						{
							HX_STACK_LINE(1808)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(1808)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(1808)
							{
							}
						}
						HX_STACK_LINE(1808)
						{
							HX_STACK_LINE(1808)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1808)
							bool tmp23 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1808)
							if ((tmp23)){
								HX_STACK_LINE(1808)
								::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1808)
								_this1->_invalidate(tmp24);
							}
						}
					}
					HX_STACK_LINE(1808)
					tmp12 = _this;
				}
				HX_STACK_LINE(1808)
				::nape::geom::Vec2 ret = tmp12;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1808)
				{
					HX_STACK_LINE(1808)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1808)
					tmp13 = position->zpp_inner->weak;
					HX_STACK_LINE(1808)
					if ((tmp13)){
						HX_STACK_LINE(1808)
						{
							HX_STACK_LINE(1808)
							{
								HX_STACK_LINE(1808)
								bool tmp14 = (position != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1808)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1808)
								if ((tmp14)){
									HX_STACK_LINE(1808)
									tmp15 = position->zpp_disp;
								}
								else{
									HX_STACK_LINE(1808)
									tmp15 = false;
								}
								HX_STACK_LINE(1808)
								if ((tmp15)){
									HX_STACK_LINE(1808)
									::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1808)
									::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1808)
									HX_STACK_DO_THROW(tmp17);
								}
							}
							HX_STACK_LINE(1808)
							{
								HX_STACK_LINE(1808)
								::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1808)
								bool tmp14 = _this1->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1808)
								if ((tmp14)){
									HX_STACK_LINE(1808)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(1808)
								bool tmp15 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1808)
								if ((tmp15)){
									HX_STACK_LINE(1808)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(1808)
							bool tmp14 = position->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1808)
							if ((tmp14)){
								HX_STACK_LINE(1808)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(1808)
							::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(1808)
							position->zpp_inner->outer = null();
							HX_STACK_LINE(1808)
							position->zpp_inner = null();
							HX_STACK_LINE(1808)
							{
								HX_STACK_LINE(1808)
								::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1808)
								o->zpp_pool = null();
								HX_STACK_LINE(1808)
								::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1808)
								bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1808)
								if ((tmp16)){
									HX_STACK_LINE(1808)
									::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1808)
									tmp17->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(1808)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1808)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(1808)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(1808)
							{
								HX_STACK_LINE(1808)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1808)
								{
									HX_STACK_LINE(1808)
									bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1808)
									if ((tmp15)){
										HX_STACK_LINE(1808)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(1808)
										o->outer = null();
									}
									HX_STACK_LINE(1808)
									o->_isimmutable = null();
									HX_STACK_LINE(1808)
									o->_validate = null();
									HX_STACK_LINE(1808)
									o->_invalidate = null();
								}
								HX_STACK_LINE(1808)
								::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1808)
								o->next = tmp15;
								HX_STACK_LINE(1808)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(1808)
						true;
					}
					else{
						HX_STACK_LINE(1808)
						false;
					}
				}
				HX_STACK_LINE(1808)
				ret;
			}
		}
		HX_STACK_LINE(1808)
		{
			HX_STACK_LINE(1808)
			::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1808)
			::nape::geom::Vec2 tmp10 = tmp9->wrap_pos;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1808)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1808)
			if ((tmp11)){
				HX_STACK_LINE(1808)
				::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1808)
				tmp12->setupPosition();
			}
			HX_STACK_LINE(1808)
			::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1808)
			tmp12->wrap_pos;
		}
	}
	HX_STACK_LINE(1809)
	{
		HX_STACK_LINE(1809)
		{
			HX_STACK_LINE(1809)
			bool tmp7 = (del != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1809)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1809)
			if ((tmp7)){
				HX_STACK_LINE(1809)
				tmp8 = del->zpp_disp;
			}
			else{
				HX_STACK_LINE(1809)
				tmp8 = false;
			}
			HX_STACK_LINE(1809)
			if ((tmp8)){
				HX_STACK_LINE(1809)
				::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1809)
				::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1809)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(1809)
		{
			HX_STACK_LINE(1809)
			::zpp_nape::geom::ZPP_Vec2 _this = del->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1809)
			bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1809)
			if ((tmp7)){
				HX_STACK_LINE(1809)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(1809)
			bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1809)
			if ((tmp8)){
				HX_STACK_LINE(1809)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1809)
		bool tmp7 = del->zpp_inner->_inuse;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1809)
		if ((tmp7)){
			HX_STACK_LINE(1809)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
		}
		HX_STACK_LINE(1809)
		::zpp_nape::geom::ZPP_Vec2 inner = del->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1809)
		del->zpp_inner->outer = null();
		HX_STACK_LINE(1809)
		del->zpp_inner = null();
		HX_STACK_LINE(1809)
		{
			HX_STACK_LINE(1809)
			::nape::geom::Vec2 o = del;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1809)
			o->zpp_pool = null();
			HX_STACK_LINE(1809)
			::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1809)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1809)
			if ((tmp9)){
				HX_STACK_LINE(1809)
				::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1809)
				tmp10->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1809)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1809)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1809)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1809)
		{
			HX_STACK_LINE(1809)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1809)
			{
				HX_STACK_LINE(1809)
				bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1809)
				if ((tmp8)){
					HX_STACK_LINE(1809)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1809)
					o->outer = null();
				}
				HX_STACK_LINE(1809)
				o->_isimmutable = null();
				HX_STACK_LINE(1809)
				o->_validate = null();
				HX_STACK_LINE(1809)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1809)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1809)
			o->next = tmp8;
			HX_STACK_LINE(1809)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1810)
	{
		HX_STACK_LINE(1810)
		::nape::phys::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1810)
		{
			HX_STACK_LINE(1810)
			Float tmp7 = _g->zpp_inner->rot;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1810)
			Float tmp8 = angle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1810)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1810)
			Float rotation = tmp9;		HX_STACK_VAR(rotation,"rotation");
			HX_STACK_LINE(1810)
			{
				HX_STACK_LINE(1810)
				_g->zpp_inner->immutable_midstep(HX_HCSTRING("Body::rotation","\x40","\x9d","\x24","\x6b"));
				HX_STACK_LINE(1810)
				bool tmp10 = _g->zpp_inner->world;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1810)
				if ((tmp10)){
					HX_STACK_LINE(1810)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(1810)
				int tmp11 = _g->zpp_inner->type;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1810)
				int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1810)
				bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1810)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1810)
				if ((tmp13)){
					HX_STACK_LINE(1810)
					::zpp_nape::space::ZPP_Space tmp15 = _g->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1810)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1810)
					tmp14 = (tmp16 != null());
				}
				else{
					HX_STACK_LINE(1810)
					tmp14 = false;
				}
				HX_STACK_LINE(1810)
				if ((tmp14)){
					HX_STACK_LINE(1810)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Static objects cannot be rotated once inside a Space","\x1b","\xe2","\x01","\xc9"));
				}
				HX_STACK_LINE(1810)
				Float tmp15 = _g->zpp_inner->rot;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1810)
				Float tmp16 = rotation;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1810)
				bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1810)
				if ((tmp17)){
					HX_STACK_LINE(1810)
					bool tmp18 = (rotation != rotation);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1810)
					if ((tmp18)){
						HX_STACK_LINE(1810)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::rotation cannot be NaN","\xa9","\xa5","\x47","\x9c"));
					}
					HX_STACK_LINE(1810)
					_g->zpp_inner->rot = rotation;
					HX_STACK_LINE(1810)
					{
						HX_STACK_LINE(1810)
						::zpp_nape::phys::ZPP_Body _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1810)
						_this->zip_axis = true;
						HX_STACK_LINE(1810)
						{
							HX_STACK_LINE(1810)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp19 = _this->shapes->head;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1810)
							::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp19;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1810)
							while((true)){
								HX_STACK_LINE(1810)
								bool tmp20 = (cx_ite != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1810)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1810)
								if ((tmp21)){
									HX_STACK_LINE(1810)
									break;
								}
								HX_STACK_LINE(1810)
								::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1810)
								{
									HX_STACK_LINE(1810)
									int tmp22 = s->type;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1810)
									int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1810)
									bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1810)
									if ((tmp24)){
										HX_STACK_LINE(1810)
										s->polygon->invalidate_gverts();
										HX_STACK_LINE(1810)
										s->polygon->invalidate_gaxi();
									}
									HX_STACK_LINE(1810)
									s->invalidate_worldCOM();
								}
								HX_STACK_LINE(1810)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(1810)
						_this->zip_worldCOM = true;
					}
					HX_STACK_LINE(1810)
					_g->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(1810)
			_g->zpp_inner->rot;
		}
	}
	HX_STACK_LINE(1811)
	centre->zpp_inner->weak = weak;
	HX_STACK_LINE(1812)
	{
		HX_STACK_LINE(1813)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1814)
		tmp7 = centre->zpp_inner->weak;
		HX_STACK_LINE(1813)
		if ((tmp7)){
			HX_STACK_LINE(1816)
			{
				HX_STACK_LINE(1816)
				{
					HX_STACK_LINE(1816)
					bool tmp8 = (centre != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1816)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1816)
					if ((tmp8)){
						HX_STACK_LINE(1816)
						tmp9 = centre->zpp_disp;
					}
					else{
						HX_STACK_LINE(1816)
						tmp9 = false;
					}
					HX_STACK_LINE(1816)
					if ((tmp9)){
						HX_STACK_LINE(1816)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1816)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1816)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(1816)
				{
					HX_STACK_LINE(1816)
					::zpp_nape::geom::ZPP_Vec2 _this = centre->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1816)
					bool tmp8 = _this->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1816)
					if ((tmp8)){
						HX_STACK_LINE(1816)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1816)
					bool tmp9 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1816)
					if ((tmp9)){
						HX_STACK_LINE(1816)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1816)
				bool tmp8 = centre->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1816)
				if ((tmp8)){
					HX_STACK_LINE(1816)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1816)
				::zpp_nape::geom::ZPP_Vec2 inner = centre->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1816)
				centre->zpp_inner->outer = null();
				HX_STACK_LINE(1816)
				centre->zpp_inner = null();
				HX_STACK_LINE(1816)
				{
					HX_STACK_LINE(1816)
					::nape::geom::Vec2 o = centre;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1816)
					o->zpp_pool = null();
					HX_STACK_LINE(1816)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1816)
					bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1816)
					if ((tmp10)){
						HX_STACK_LINE(1816)
						::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1816)
						tmp11->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1816)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1816)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1816)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1816)
				{
					HX_STACK_LINE(1816)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1816)
					{
						HX_STACK_LINE(1816)
						bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1816)
						if ((tmp9)){
							HX_STACK_LINE(1816)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1816)
							o->outer = null();
						}
						HX_STACK_LINE(1816)
						o->_isimmutable = null();
						HX_STACK_LINE(1816)
						o->_validate = null();
						HX_STACK_LINE(1816)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1816)
					::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1816)
					o->next = tmp9;
					HX_STACK_LINE(1816)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1817)
			true;
		}
		else{
			HX_STACK_LINE(1820)
			false;
		}
	}
	HX_STACK_LINE(1823)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,rotate,return )

::nape::phys::Body Body_obj::setShapeMaterials( ::nape::phys::Material material){
	HX_STACK_FRAME("nape.phys.Body","setShapeMaterials",0x701983b7,"nape.phys.Body.setShapeMaterials","nape/phys/Body.hx",1834,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(material,"material")
	HX_STACK_LINE(1835)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1835)
	tmp->immutable_midstep(HX_HCSTRING("Body::setShapeMaterials()","\x4c","\xb9","\xcd","\x69"));
	HX_STACK_LINE(1837)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1837)
	bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1837)
	if ((tmp2)){
		HX_STACK_LINE(1837)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(1839)
	{
		HX_STACK_LINE(1840)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1840)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->shapes->head;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1840)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1841)
		while((true)){
			HX_STACK_LINE(1841)
			bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1841)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1841)
			if ((tmp6)){
				HX_STACK_LINE(1841)
				break;
			}
			HX_STACK_LINE(1842)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1843)
			{
				HX_STACK_LINE(1843)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1843)
				{
					HX_STACK_LINE(1843)
					_this->zpp_inner->immutable_midstep(HX_HCSTRING("Shape::material","\xa8","\xcd","\xa4","\xb9"));
					HX_STACK_LINE(1843)
					bool tmp7 = (material == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1843)
					if ((tmp7)){
						HX_STACK_LINE(1843)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape material","\x9d","\xc0","\x89","\x99"));
					}
					HX_STACK_LINE(1843)
					::zpp_nape::phys::ZPP_Material tmp8 = material->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1843)
					_this->zpp_inner->setMaterial(tmp8);
				}
				HX_STACK_LINE(1843)
				::zpp_nape::phys::ZPP_Material tmp7 = _this->zpp_inner->material;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1843)
				tmp7->wrapper();
			}
			HX_STACK_LINE(1844)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1847)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeMaterials,return )

::nape::phys::Body Body_obj::setShapeFilters( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.phys.Body","setShapeFilters",0x8194d6c6,"nape.phys.Body.setShapeFilters","nape/phys/Body.hx",1858,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(1859)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1859)
	tmp->immutable_midstep(HX_HCSTRING("Body::setShapeFilters()","\x1b","\x11","\xa6","\xd2"));
	HX_STACK_LINE(1861)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1861)
	bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1861)
	if ((tmp2)){
		HX_STACK_LINE(1861)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(1863)
	{
		HX_STACK_LINE(1864)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1864)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->shapes->head;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1864)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1865)
		while((true)){
			HX_STACK_LINE(1865)
			bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1865)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1865)
			if ((tmp6)){
				HX_STACK_LINE(1865)
				break;
			}
			HX_STACK_LINE(1866)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1867)
			{
				HX_STACK_LINE(1867)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1867)
				{
					HX_STACK_LINE(1867)
					_this->zpp_inner->immutable_midstep(HX_HCSTRING("Shape::filter","\x79","\x9e","\xc6","\x67"));
					HX_STACK_LINE(1867)
					bool tmp7 = (filter == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1867)
					if ((tmp7)){
						HX_STACK_LINE(1867)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape filter","\x2e","\x7a","\x75","\x59"));
					}
					HX_STACK_LINE(1867)
					::zpp_nape::dynamics::ZPP_InteractionFilter tmp8 = filter->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1867)
					_this->zpp_inner->setFilter(tmp8);
				}
				HX_STACK_LINE(1867)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp7 = _this->zpp_inner->filter;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1867)
				tmp7->wrapper();
			}
			HX_STACK_LINE(1868)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1871)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeFilters,return )

::nape::phys::Body Body_obj::setShapeFluidProperties( ::nape::phys::FluidProperties fluidProperties){
	HX_STACK_FRAME("nape.phys.Body","setShapeFluidProperties",0x85eac2a8,"nape.phys.Body.setShapeFluidProperties","nape/phys/Body.hx",1882,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fluidProperties,"fluidProperties")
	HX_STACK_LINE(1883)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1883)
	tmp->immutable_midstep(HX_HCSTRING("Body::setShapeFluidProperties()","\x7d","\x2d","\xa4","\xe7"));
	HX_STACK_LINE(1885)
	::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1885)
	bool tmp2 = tmp1->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1885)
	if ((tmp2)){
		HX_STACK_LINE(1885)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
	}
	HX_STACK_LINE(1887)
	{
		HX_STACK_LINE(1888)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1888)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->shapes->head;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1888)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1889)
		while((true)){
			HX_STACK_LINE(1889)
			bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1889)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1889)
			if ((tmp6)){
				HX_STACK_LINE(1889)
				break;
			}
			HX_STACK_LINE(1890)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1891)
			{
				HX_STACK_LINE(1891)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1891)
				{
					HX_STACK_LINE(1891)
					bool tmp7 = (fluidProperties == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1891)
					if ((tmp7)){
						HX_STACK_LINE(1891)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape fluidProperties, disable fluids by setting fluidEnabled to false","\xb2","\xc7","\x28","\xb5"));
					}
					HX_STACK_LINE(1891)
					::zpp_nape::phys::ZPP_FluidProperties tmp8 = fluidProperties->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1891)
					_this->zpp_inner->setFluid(tmp8);
				}
				HX_STACK_LINE(1891)
				{
					HX_STACK_LINE(1891)
					_this->zpp_inner->immutable_midstep(HX_HCSTRING("Shape::fluidProperties","\xbc","\x2b","\xf3","\x66"));
					HX_STACK_LINE(1891)
					::zpp_nape::phys::ZPP_FluidProperties tmp7 = _this->zpp_inner->fluidProperties;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1891)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1891)
					if ((tmp8)){
						HX_STACK_LINE(1891)
						::nape::phys::FluidProperties tmp9 = ::nape::phys::FluidProperties_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1891)
						::zpp_nape::phys::ZPP_FluidProperties tmp10 = tmp9->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1891)
						_this->zpp_inner->setFluid(tmp10);
					}
					HX_STACK_LINE(1891)
					::zpp_nape::phys::ZPP_FluidProperties tmp9 = _this->zpp_inner->fluidProperties;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1891)
					tmp9->wrapper();
				}
			}
			HX_STACK_LINE(1892)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1895)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeFluidProperties,return )

::nape::geom::Vec2 Body_obj::get_localCOM( ){
	HX_STACK_FRAME("nape.phys.Body","get_localCOM",0x29880df5,"nape.phys.Body.get_localCOM","nape/phys/Body.hx",1907,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1909)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1909)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1909)
	if ((tmp1)){
		HX_STACK_LINE(1909)
		::String tmp2 = HX_HCSTRING("Error: Space::world has no localCOM","\x69","\x96","\xe8","\x51");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1909)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(1911)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1911)
	::nape::geom::Vec2 tmp3 = tmp2->wrap_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1911)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1911)
	if ((tmp4)){
		HX_STACK_LINE(1912)
		::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1912)
		{
			HX_STACK_LINE(1912)
			::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1912)
			Float x = tmp6->localCOMx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1912)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1912)
			Float y = tmp7->localCOMy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1912)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1912)
			bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1912)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1912)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1912)
			if ((tmp9)){
				HX_STACK_LINE(1912)
				tmp10 = (y != y);
			}
			else{
				HX_STACK_LINE(1912)
				tmp10 = true;
			}
			HX_STACK_LINE(1912)
			if ((tmp10)){
				HX_STACK_LINE(1912)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1912)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1912)
			{
				HX_STACK_LINE(1912)
				::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1912)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1912)
				if ((tmp12)){
					HX_STACK_LINE(1912)
					::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1912)
					ret = tmp13;
				}
				else{
					HX_STACK_LINE(1912)
					::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1912)
					ret = tmp13;
					HX_STACK_LINE(1912)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1912)
					ret->zpp_pool = null();
					HX_STACK_LINE(1912)
					ret->zpp_disp = false;
					HX_STACK_LINE(1912)
					::nape::geom::Vec2 tmp14 = ret;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1912)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1912)
					bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1912)
					if ((tmp16)){
						HX_STACK_LINE(1912)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1912)
			bool tmp11 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1912)
			if ((tmp11)){
				HX_STACK_LINE(1912)
				::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1912)
				{
					HX_STACK_LINE(1912)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1912)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1912)
					{
						HX_STACK_LINE(1912)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1912)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1912)
						if ((tmp14)){
							HX_STACK_LINE(1912)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1912)
							ret1 = tmp15;
						}
						else{
							HX_STACK_LINE(1912)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1912)
							ret1 = tmp15;
							HX_STACK_LINE(1912)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1912)
							ret1->next = null();
						}
						HX_STACK_LINE(1912)
						ret1->weak = false;
					}
					HX_STACK_LINE(1912)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1912)
					{
						HX_STACK_LINE(1912)
						ret1->x = x;
						HX_STACK_LINE(1912)
						ret1->y = y;
						HX_STACK_LINE(1912)
						{
						}
					}
					HX_STACK_LINE(1912)
					tmp12 = ret1;
				}
				HX_STACK_LINE(1912)
				ret->zpp_inner = tmp12;
				HX_STACK_LINE(1912)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1912)
				{
					HX_STACK_LINE(1912)
					bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1912)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1912)
					if ((tmp12)){
						HX_STACK_LINE(1912)
						tmp13 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1912)
						tmp13 = false;
					}
					HX_STACK_LINE(1912)
					if ((tmp13)){
						HX_STACK_LINE(1912)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1912)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1912)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(1912)
				{
					HX_STACK_LINE(1912)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1912)
					bool tmp12 = _this->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1912)
					if ((tmp12)){
						HX_STACK_LINE(1912)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1912)
					bool tmp13 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1912)
					if ((tmp13)){
						HX_STACK_LINE(1912)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1912)
				bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1912)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1912)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1912)
				if ((tmp13)){
					HX_STACK_LINE(1912)
					tmp14 = (y != y);
				}
				else{
					HX_STACK_LINE(1912)
					tmp14 = true;
				}
				HX_STACK_LINE(1912)
				if ((tmp14)){
					HX_STACK_LINE(1912)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1912)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1912)
				{
					HX_STACK_LINE(1912)
					{
						HX_STACK_LINE(1912)
						bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1912)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1912)
						if ((tmp16)){
							HX_STACK_LINE(1912)
							tmp17 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1912)
							tmp17 = false;
						}
						HX_STACK_LINE(1912)
						if ((tmp17)){
							HX_STACK_LINE(1912)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1912)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1912)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(1912)
					{
						HX_STACK_LINE(1912)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1912)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1912)
						if ((tmp16)){
							HX_STACK_LINE(1912)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1912)
					tmp15 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1912)
				Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1912)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1912)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1912)
				if ((tmp17)){
					HX_STACK_LINE(1912)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1912)
					{
						HX_STACK_LINE(1912)
						{
							HX_STACK_LINE(1912)
							bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1912)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1912)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1912)
							bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1912)
							if ((tmp23)){
								HX_STACK_LINE(1912)
								tmp22 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1912)
								tmp22 = false;
							}
							HX_STACK_LINE(1912)
							bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1912)
							if ((tmp24)){
								HX_STACK_LINE(1912)
								::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1912)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1912)
								::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1912)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1912)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1912)
								HX_STACK_DO_THROW(tmp29);
							}
						}
						HX_STACK_LINE(1912)
						{
							HX_STACK_LINE(1912)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1912)
							bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1912)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1912)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1912)
							if ((tmp22)){
								HX_STACK_LINE(1912)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1912)
						Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1912)
						tmp19 = tmp20;
					}
					HX_STACK_LINE(1912)
					Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1912)
					tmp18 = (tmp19 == tmp20);
				}
				else{
					HX_STACK_LINE(1912)
					tmp18 = false;
				}
				HX_STACK_LINE(1912)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1912)
				if ((tmp19)){
					HX_STACK_LINE(1912)
					{
						HX_STACK_LINE(1912)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1912)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1912)
						{
						}
					}
					HX_STACK_LINE(1912)
					{
						HX_STACK_LINE(1912)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1912)
						bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1912)
						if ((tmp20)){
							HX_STACK_LINE(1912)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1912)
							_this->_invalidate(tmp21);
						}
					}
				}
				HX_STACK_LINE(1912)
				ret;
			}
			HX_STACK_LINE(1912)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1912)
			tmp5 = ret;
		}
		HX_STACK_LINE(1912)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1912)
		tmp6->wrap_localCOM = tmp5;
		HX_STACK_LINE(1913)
		::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1913)
		::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1913)
		tmp8->_inuse = true;
		HX_STACK_LINE(1914)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1914)
		::zpp_nape::geom::ZPP_Vec2 tmp10 = tmp9->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1914)
		tmp10->_immutable = true;
		HX_STACK_LINE(1915)
		::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1915)
		::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1915)
		::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1915)
		tmp13->_validate = tmp11->getlocalCOM_dyn();
	}
	HX_STACK_LINE(1917)
	::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1917)
	::nape::geom::Vec2 tmp6 = tmp5->wrap_localCOM;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1917)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_localCOM,return )

::nape::geom::Vec2 Body_obj::get_worldCOM( ){
	HX_STACK_FRAME("nape.phys.Body","get_worldCOM",0xee2c0b6e,"nape.phys.Body.get_worldCOM","nape/phys/Body.hx",1929,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1931)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1931)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1931)
	if ((tmp1)){
		HX_STACK_LINE(1931)
		::String tmp2 = HX_HCSTRING("Error: Space::world has no worldCOM","\xe2","\x93","\x8c","\x16");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1931)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(1933)
	::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1933)
	::nape::geom::Vec2 tmp3 = tmp2->wrap_worldCOM;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1933)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1933)
	if ((tmp4)){
		HX_STACK_LINE(1934)
		::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1934)
		{
			HX_STACK_LINE(1934)
			::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1934)
			Float x = tmp6->worldCOMx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1934)
			::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1934)
			Float y = tmp7->worldCOMy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1934)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1934)
			bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1934)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1934)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1934)
			if ((tmp9)){
				HX_STACK_LINE(1934)
				tmp10 = (y != y);
			}
			else{
				HX_STACK_LINE(1934)
				tmp10 = true;
			}
			HX_STACK_LINE(1934)
			if ((tmp10)){
				HX_STACK_LINE(1934)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1934)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1934)
			{
				HX_STACK_LINE(1934)
				::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1934)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1934)
				if ((tmp12)){
					HX_STACK_LINE(1934)
					::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1934)
					ret = tmp13;
				}
				else{
					HX_STACK_LINE(1934)
					::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1934)
					ret = tmp13;
					HX_STACK_LINE(1934)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1934)
					ret->zpp_pool = null();
					HX_STACK_LINE(1934)
					ret->zpp_disp = false;
					HX_STACK_LINE(1934)
					::nape::geom::Vec2 tmp14 = ret;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1934)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1934)
					bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1934)
					if ((tmp16)){
						HX_STACK_LINE(1934)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1934)
			bool tmp11 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1934)
			if ((tmp11)){
				HX_STACK_LINE(1934)
				::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1934)
				{
					HX_STACK_LINE(1934)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1934)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1934)
					{
						HX_STACK_LINE(1934)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1934)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1934)
						if ((tmp14)){
							HX_STACK_LINE(1934)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1934)
							ret1 = tmp15;
						}
						else{
							HX_STACK_LINE(1934)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1934)
							ret1 = tmp15;
							HX_STACK_LINE(1934)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1934)
							ret1->next = null();
						}
						HX_STACK_LINE(1934)
						ret1->weak = false;
					}
					HX_STACK_LINE(1934)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1934)
					{
						HX_STACK_LINE(1934)
						ret1->x = x;
						HX_STACK_LINE(1934)
						ret1->y = y;
						HX_STACK_LINE(1934)
						{
						}
					}
					HX_STACK_LINE(1934)
					tmp12 = ret1;
				}
				HX_STACK_LINE(1934)
				ret->zpp_inner = tmp12;
				HX_STACK_LINE(1934)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1934)
				{
					HX_STACK_LINE(1934)
					bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1934)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1934)
					if ((tmp12)){
						HX_STACK_LINE(1934)
						tmp13 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1934)
						tmp13 = false;
					}
					HX_STACK_LINE(1934)
					if ((tmp13)){
						HX_STACK_LINE(1934)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1934)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1934)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(1934)
				{
					HX_STACK_LINE(1934)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1934)
					bool tmp12 = _this->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1934)
					if ((tmp12)){
						HX_STACK_LINE(1934)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1934)
					bool tmp13 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1934)
					if ((tmp13)){
						HX_STACK_LINE(1934)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1934)
				bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1934)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1934)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1934)
				if ((tmp13)){
					HX_STACK_LINE(1934)
					tmp14 = (y != y);
				}
				else{
					HX_STACK_LINE(1934)
					tmp14 = true;
				}
				HX_STACK_LINE(1934)
				if ((tmp14)){
					HX_STACK_LINE(1934)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1934)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1934)
				{
					HX_STACK_LINE(1934)
					{
						HX_STACK_LINE(1934)
						bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1934)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1934)
						if ((tmp16)){
							HX_STACK_LINE(1934)
							tmp17 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1934)
							tmp17 = false;
						}
						HX_STACK_LINE(1934)
						if ((tmp17)){
							HX_STACK_LINE(1934)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1934)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1934)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(1934)
					{
						HX_STACK_LINE(1934)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1934)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1934)
						if ((tmp16)){
							HX_STACK_LINE(1934)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1934)
					tmp15 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1934)
				Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1934)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1934)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1934)
				if ((tmp17)){
					HX_STACK_LINE(1934)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1934)
					{
						HX_STACK_LINE(1934)
						{
							HX_STACK_LINE(1934)
							bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1934)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1934)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1934)
							bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1934)
							if ((tmp23)){
								HX_STACK_LINE(1934)
								tmp22 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1934)
								tmp22 = false;
							}
							HX_STACK_LINE(1934)
							bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1934)
							if ((tmp24)){
								HX_STACK_LINE(1934)
								::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1934)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1934)
								::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1934)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1934)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1934)
								HX_STACK_DO_THROW(tmp29);
							}
						}
						HX_STACK_LINE(1934)
						{
							HX_STACK_LINE(1934)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1934)
							bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1934)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1934)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1934)
							if ((tmp22)){
								HX_STACK_LINE(1934)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1934)
						Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1934)
						tmp19 = tmp20;
					}
					HX_STACK_LINE(1934)
					Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1934)
					tmp18 = (tmp19 == tmp20);
				}
				else{
					HX_STACK_LINE(1934)
					tmp18 = false;
				}
				HX_STACK_LINE(1934)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1934)
				if ((tmp19)){
					HX_STACK_LINE(1934)
					{
						HX_STACK_LINE(1934)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1934)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1934)
						{
						}
					}
					HX_STACK_LINE(1934)
					{
						HX_STACK_LINE(1934)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1934)
						bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1934)
						if ((tmp20)){
							HX_STACK_LINE(1934)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1934)
							_this->_invalidate(tmp21);
						}
					}
				}
				HX_STACK_LINE(1934)
				ret;
			}
			HX_STACK_LINE(1934)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1934)
			tmp5 = ret;
		}
		HX_STACK_LINE(1934)
		::zpp_nape::phys::ZPP_Body tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1934)
		tmp6->wrap_worldCOM = tmp5;
		HX_STACK_LINE(1935)
		::zpp_nape::phys::ZPP_Body tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1935)
		::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->wrap_worldCOM->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1935)
		tmp8->_inuse = true;
		HX_STACK_LINE(1936)
		::zpp_nape::phys::ZPP_Body tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1936)
		::zpp_nape::geom::ZPP_Vec2 tmp10 = tmp9->wrap_worldCOM->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1936)
		tmp10->_immutable = true;
		HX_STACK_LINE(1937)
		::zpp_nape::phys::ZPP_Body tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1937)
		::zpp_nape::phys::ZPP_Body tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1937)
		::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12->wrap_worldCOM->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1937)
		tmp13->_validate = tmp11->getworldCOM_dyn();
	}
	HX_STACK_LINE(1939)
	::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1939)
	::nape::geom::Vec2 tmp6 = tmp5->wrap_worldCOM;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1939)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_worldCOM,return )

::nape::geom::Vec3 Body_obj::normalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","normalImpulse",0x6f782238,"nape.phys.Body.normalImpulse","nape/phys/Body.hx",1954,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(1955)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(1956)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(1973)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(1974)
		{
			HX_STACK_LINE(1975)
			::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1975)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = tmp->arbiters;		HX_STACK_VAR(arbs,"arbs");
			HX_STACK_LINE(1976)
			{
				HX_STACK_LINE(1976)
				::nape::dynamics::ArbiterList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1976)
				{
					HX_STACK_LINE(1976)
					::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1976)
					::nape::dynamics::ArbiterList tmp3 = tmp2->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1976)
					bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1976)
					if ((tmp4)){
						HX_STACK_LINE(1976)
						::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1976)
						::zpp_nape::util::ZNPList_ZPP_Arbiter tmp6 = tmp5->arbiters;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1976)
						::nape::dynamics::ArbiterList tmp7 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1976)
						::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1976)
						tmp8->wrap_arbiters = tmp7;
					}
					HX_STACK_LINE(1976)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1976)
					tmp1 = tmp5->wrap_arbiters;
				}
				HX_STACK_LINE(1976)
				::nape::dynamics::ArbiterIterator tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1976)
				::nape::dynamics::ArbiterIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1976)
				while((true)){
					HX_STACK_LINE(1976)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1976)
					{
						HX_STACK_LINE(1976)
						::zpp_nape::util::ZPP_ArbiterList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1976)
						tmp4->valmod();
						HX_STACK_LINE(1976)
						int tmp5 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1976)
						int length = tmp5;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(1976)
						_g->zpp_critical = true;
						HX_STACK_LINE(1976)
						bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1976)
						if ((tmp6)){
							HX_STACK_LINE(1976)
							tmp3 = true;
						}
						else{
							HX_STACK_LINE(1976)
							{
								HX_STACK_LINE(1976)
								::nape::dynamics::ArbiterIterator tmp7 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1976)
								_g->zpp_next = tmp7;
								HX_STACK_LINE(1976)
								::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
								HX_STACK_LINE(1976)
								_g->zpp_inner = null();
							}
							HX_STACK_LINE(1976)
							tmp3 = false;
						}
					}
					HX_STACK_LINE(1976)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1976)
					if ((tmp4)){
						HX_STACK_LINE(1976)
						break;
					}
					HX_STACK_LINE(1976)
					::nape::dynamics::Arbiter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1976)
					{
						HX_STACK_LINE(1976)
						_g->zpp_critical = false;
						HX_STACK_LINE(1976)
						int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1976)
						tmp5 = _g->zpp_inner->at(tmp6);
					}
					HX_STACK_LINE(1976)
					::nape::dynamics::Arbiter oarb = tmp5;		HX_STACK_VAR(oarb,"oarb");
					HX_STACK_LINE(1977)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(1978)
					int tmp6 = arb->type;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1978)
					int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1978)
					bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1978)
					if ((tmp8)){
						HX_STACK_LINE(1978)
						continue;
					}
					HX_STACK_LINE(1979)
					bool tmp9 = (body != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1979)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1979)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1979)
					if ((tmp10)){
						HX_STACK_LINE(1979)
						tmp11 = (arb->b2 != body->zpp_inner);
					}
					else{
						HX_STACK_LINE(1979)
						tmp11 = false;
					}
					HX_STACK_LINE(1979)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1979)
					if ((tmp11)){
						HX_STACK_LINE(1979)
						tmp12 = (arb->b1 != body->zpp_inner);
					}
					else{
						HX_STACK_LINE(1979)
						tmp12 = false;
					}
					HX_STACK_LINE(1979)
					if ((tmp12)){
						HX_STACK_LINE(1979)
						continue;
					}
					HX_STACK_LINE(1980)
					{
						HX_STACK_LINE(1981)
						::nape::dynamics::CollisionArbiter tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1981)
						{
							HX_STACK_LINE(1981)
							::nape::dynamics::Arbiter tmp14 = arb->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1981)
							::nape::dynamics::Arbiter _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1981)
							int tmp15 = _this->zpp_inner->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1981)
							int tmp16 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1981)
							bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1981)
							if ((tmp17)){
								HX_STACK_LINE(1981)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = _this->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1981)
								tmp13 = tmp18->outer_zn;
							}
							else{
								HX_STACK_LINE(1981)
								tmp13 = null();
							}
						}
						HX_STACK_LINE(1981)
						bool tmp14 = freshOnly;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1981)
						::nape::geom::Vec3 tmp15 = tmp13->normalImpulse(hx::ObjectPtr<OBJ_>(this),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1981)
						::nape::geom::Vec3 imp = tmp15;		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(1982)
						{
							HX_STACK_LINE(1983)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1984)
							{
								HX_STACK_LINE(1985)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1994)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1994)
								{
									HX_STACK_LINE(1994)
									{
										HX_STACK_LINE(1994)
										bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1994)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1994)
										if ((tmp17)){
											HX_STACK_LINE(1994)
											tmp18 = imp->zpp_disp;
										}
										else{
											HX_STACK_LINE(1994)
											tmp18 = false;
										}
										HX_STACK_LINE(1994)
										if ((tmp18)){
											HX_STACK_LINE(1994)
											::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1994)
											::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1994)
											HX_STACK_DO_THROW(tmp20);
										}
									}
									HX_STACK_LINE(1994)
									{
										HX_STACK_LINE(1994)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1994)
										bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1994)
										if ((tmp17)){
											HX_STACK_LINE(1994)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1994)
									tmp16 = imp->zpp_inner->x;
								}
								HX_STACK_LINE(1994)
								int tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1994)
								Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1994)
								hx::AddEq(retx,tmp18);
								HX_STACK_LINE(1995)
								Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1995)
								{
									HX_STACK_LINE(1995)
									{
										HX_STACK_LINE(1995)
										bool tmp20 = (imp != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1995)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1995)
										if ((tmp20)){
											HX_STACK_LINE(1995)
											tmp21 = imp->zpp_disp;
										}
										else{
											HX_STACK_LINE(1995)
											tmp21 = false;
										}
										HX_STACK_LINE(1995)
										if ((tmp21)){
											HX_STACK_LINE(1995)
											::String tmp22 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1995)
											::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1995)
											HX_STACK_DO_THROW(tmp23);
										}
									}
									HX_STACK_LINE(1995)
									{
										HX_STACK_LINE(1995)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1995)
										bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1995)
										if ((tmp20)){
											HX_STACK_LINE(1995)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1995)
									tmp19 = imp->zpp_inner->y;
								}
								HX_STACK_LINE(1995)
								int tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1995)
								Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1995)
								hx::AddEq(rety,tmp21);
							}
							HX_STACK_LINE(1997)
							Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1997)
							{
								HX_STACK_LINE(1997)
								{
									HX_STACK_LINE(1997)
									bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1997)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1997)
									if ((tmp17)){
										HX_STACK_LINE(1997)
										tmp18 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(1997)
										tmp18 = false;
									}
									HX_STACK_LINE(1997)
									if ((tmp18)){
										HX_STACK_LINE(1997)
										::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1997)
										::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1997)
										HX_STACK_DO_THROW(tmp20);
									}
								}
								HX_STACK_LINE(1997)
								{
									HX_STACK_LINE(1997)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1997)
									bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1997)
									if ((tmp17)){
										HX_STACK_LINE(1997)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1997)
								tmp16 = imp->zpp_inner->z;
							}
							HX_STACK_LINE(1997)
							int tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1997)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1997)
							hx::AddEq(retz,tmp18);
						}
						HX_STACK_LINE(1999)
						imp->dispose();
					}
				}
			}
		}
		HX_STACK_LINE(2003)
		Float tmp = retx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2003)
		Float tmp1 = rety;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2003)
		Float tmp2 = retz;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2003)
		::nape::geom::Vec3 tmp3 = ::nape::geom::Vec3_obj::get(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2003)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,normalImpulse,return )

::nape::geom::Vec3 Body_obj::tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","tangentImpulse",0x28568246,"nape.phys.Body.tangentImpulse","nape/phys/Body.hx",2018,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(2019)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2020)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2037)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2038)
		{
			HX_STACK_LINE(2039)
			::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2039)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = tmp->arbiters;		HX_STACK_VAR(arbs,"arbs");
			HX_STACK_LINE(2040)
			{
				HX_STACK_LINE(2040)
				::nape::dynamics::ArbiterList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2040)
				{
					HX_STACK_LINE(2040)
					::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2040)
					::nape::dynamics::ArbiterList tmp3 = tmp2->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2040)
					bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2040)
					if ((tmp4)){
						HX_STACK_LINE(2040)
						::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2040)
						::zpp_nape::util::ZNPList_ZPP_Arbiter tmp6 = tmp5->arbiters;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2040)
						::nape::dynamics::ArbiterList tmp7 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2040)
						::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2040)
						tmp8->wrap_arbiters = tmp7;
					}
					HX_STACK_LINE(2040)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2040)
					tmp1 = tmp5->wrap_arbiters;
				}
				HX_STACK_LINE(2040)
				::nape::dynamics::ArbiterIterator tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2040)
				::nape::dynamics::ArbiterIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2040)
				while((true)){
					HX_STACK_LINE(2040)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2040)
					{
						HX_STACK_LINE(2040)
						::zpp_nape::util::ZPP_ArbiterList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(2040)
						tmp4->valmod();
						HX_STACK_LINE(2040)
						int tmp5 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2040)
						int length = tmp5;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2040)
						_g->zpp_critical = true;
						HX_STACK_LINE(2040)
						bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2040)
						if ((tmp6)){
							HX_STACK_LINE(2040)
							tmp3 = true;
						}
						else{
							HX_STACK_LINE(2040)
							{
								HX_STACK_LINE(2040)
								::nape::dynamics::ArbiterIterator tmp7 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(2040)
								_g->zpp_next = tmp7;
								HX_STACK_LINE(2040)
								::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
								HX_STACK_LINE(2040)
								_g->zpp_inner = null();
							}
							HX_STACK_LINE(2040)
							tmp3 = false;
						}
					}
					HX_STACK_LINE(2040)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2040)
					if ((tmp4)){
						HX_STACK_LINE(2040)
						break;
					}
					HX_STACK_LINE(2040)
					::nape::dynamics::Arbiter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2040)
					{
						HX_STACK_LINE(2040)
						_g->zpp_critical = false;
						HX_STACK_LINE(2040)
						int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2040)
						tmp5 = _g->zpp_inner->at(tmp6);
					}
					HX_STACK_LINE(2040)
					::nape::dynamics::Arbiter oarb = tmp5;		HX_STACK_VAR(oarb,"oarb");
					HX_STACK_LINE(2041)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2042)
					int tmp6 = arb->type;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2042)
					int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2042)
					bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2042)
					if ((tmp8)){
						HX_STACK_LINE(2042)
						continue;
					}
					HX_STACK_LINE(2043)
					bool tmp9 = (body != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2043)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2043)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2043)
					if ((tmp10)){
						HX_STACK_LINE(2043)
						tmp11 = (arb->b2 != body->zpp_inner);
					}
					else{
						HX_STACK_LINE(2043)
						tmp11 = false;
					}
					HX_STACK_LINE(2043)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2043)
					if ((tmp11)){
						HX_STACK_LINE(2043)
						tmp12 = (arb->b1 != body->zpp_inner);
					}
					else{
						HX_STACK_LINE(2043)
						tmp12 = false;
					}
					HX_STACK_LINE(2043)
					if ((tmp12)){
						HX_STACK_LINE(2043)
						continue;
					}
					HX_STACK_LINE(2044)
					{
						HX_STACK_LINE(2045)
						::nape::dynamics::CollisionArbiter tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2045)
						{
							HX_STACK_LINE(2045)
							::nape::dynamics::Arbiter tmp14 = arb->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2045)
							::nape::dynamics::Arbiter _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2045)
							int tmp15 = _this->zpp_inner->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2045)
							int tmp16 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2045)
							bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2045)
							if ((tmp17)){
								HX_STACK_LINE(2045)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = _this->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2045)
								tmp13 = tmp18->outer_zn;
							}
							else{
								HX_STACK_LINE(2045)
								tmp13 = null();
							}
						}
						HX_STACK_LINE(2045)
						bool tmp14 = freshOnly;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2045)
						::nape::geom::Vec3 tmp15 = tmp13->tangentImpulse(hx::ObjectPtr<OBJ_>(this),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2045)
						::nape::geom::Vec3 imp = tmp15;		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2046)
						{
							HX_STACK_LINE(2047)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2048)
							{
								HX_STACK_LINE(2049)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(2058)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2058)
								{
									HX_STACK_LINE(2058)
									{
										HX_STACK_LINE(2058)
										bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(2058)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2058)
										if ((tmp17)){
											HX_STACK_LINE(2058)
											tmp18 = imp->zpp_disp;
										}
										else{
											HX_STACK_LINE(2058)
											tmp18 = false;
										}
										HX_STACK_LINE(2058)
										if ((tmp18)){
											HX_STACK_LINE(2058)
											::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(2058)
											::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(2058)
											HX_STACK_DO_THROW(tmp20);
										}
									}
									HX_STACK_LINE(2058)
									{
										HX_STACK_LINE(2058)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2058)
										bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(2058)
										if ((tmp17)){
											HX_STACK_LINE(2058)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2058)
									tmp16 = imp->zpp_inner->x;
								}
								HX_STACK_LINE(2058)
								int tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2058)
								Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2058)
								hx::AddEq(retx,tmp18);
								HX_STACK_LINE(2059)
								Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2059)
								{
									HX_STACK_LINE(2059)
									{
										HX_STACK_LINE(2059)
										bool tmp20 = (imp != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2059)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(2059)
										if ((tmp20)){
											HX_STACK_LINE(2059)
											tmp21 = imp->zpp_disp;
										}
										else{
											HX_STACK_LINE(2059)
											tmp21 = false;
										}
										HX_STACK_LINE(2059)
										if ((tmp21)){
											HX_STACK_LINE(2059)
											::String tmp22 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(2059)
											::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(2059)
											HX_STACK_DO_THROW(tmp23);
										}
									}
									HX_STACK_LINE(2059)
									{
										HX_STACK_LINE(2059)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2059)
										bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2059)
										if ((tmp20)){
											HX_STACK_LINE(2059)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2059)
									tmp19 = imp->zpp_inner->y;
								}
								HX_STACK_LINE(2059)
								int tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2059)
								Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2059)
								hx::AddEq(rety,tmp21);
							}
							HX_STACK_LINE(2061)
							Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2061)
							{
								HX_STACK_LINE(2061)
								{
									HX_STACK_LINE(2061)
									bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2061)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2061)
									if ((tmp17)){
										HX_STACK_LINE(2061)
										tmp18 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2061)
										tmp18 = false;
									}
									HX_STACK_LINE(2061)
									if ((tmp18)){
										HX_STACK_LINE(2061)
										::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(2061)
										::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2061)
										HX_STACK_DO_THROW(tmp20);
									}
								}
								HX_STACK_LINE(2061)
								{
									HX_STACK_LINE(2061)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2061)
									bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2061)
									if ((tmp17)){
										HX_STACK_LINE(2061)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2061)
								tmp16 = imp->zpp_inner->z;
							}
							HX_STACK_LINE(2061)
							int tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2061)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2061)
							hx::AddEq(retz,tmp18);
						}
						HX_STACK_LINE(2063)
						imp->dispose();
					}
				}
			}
		}
		HX_STACK_LINE(2067)
		Float tmp = retx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2067)
		Float tmp1 = rety;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2067)
		Float tmp2 = retz;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2067)
		::nape::geom::Vec3 tmp3 = ::nape::geom::Vec3_obj::get(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2067)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,tangentImpulse,return )

::nape::geom::Vec3 Body_obj::totalContactsImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","totalContactsImpulse",0xcd704014,"nape.phys.Body.totalContactsImpulse","nape/phys/Body.hx",2082,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(2083)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2084)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2101)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2102)
		{
			HX_STACK_LINE(2103)
			::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2103)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = tmp->arbiters;		HX_STACK_VAR(arbs,"arbs");
			HX_STACK_LINE(2104)
			{
				HX_STACK_LINE(2104)
				::nape::dynamics::ArbiterList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2104)
				{
					HX_STACK_LINE(2104)
					::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2104)
					::nape::dynamics::ArbiterList tmp3 = tmp2->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2104)
					bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2104)
					if ((tmp4)){
						HX_STACK_LINE(2104)
						::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2104)
						::zpp_nape::util::ZNPList_ZPP_Arbiter tmp6 = tmp5->arbiters;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2104)
						::nape::dynamics::ArbiterList tmp7 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2104)
						::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2104)
						tmp8->wrap_arbiters = tmp7;
					}
					HX_STACK_LINE(2104)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2104)
					tmp1 = tmp5->wrap_arbiters;
				}
				HX_STACK_LINE(2104)
				::nape::dynamics::ArbiterIterator tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2104)
				::nape::dynamics::ArbiterIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2104)
				while((true)){
					HX_STACK_LINE(2104)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2104)
					{
						HX_STACK_LINE(2104)
						::zpp_nape::util::ZPP_ArbiterList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(2104)
						tmp4->valmod();
						HX_STACK_LINE(2104)
						int tmp5 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2104)
						int length = tmp5;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2104)
						_g->zpp_critical = true;
						HX_STACK_LINE(2104)
						bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2104)
						if ((tmp6)){
							HX_STACK_LINE(2104)
							tmp3 = true;
						}
						else{
							HX_STACK_LINE(2104)
							{
								HX_STACK_LINE(2104)
								::nape::dynamics::ArbiterIterator tmp7 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(2104)
								_g->zpp_next = tmp7;
								HX_STACK_LINE(2104)
								::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
								HX_STACK_LINE(2104)
								_g->zpp_inner = null();
							}
							HX_STACK_LINE(2104)
							tmp3 = false;
						}
					}
					HX_STACK_LINE(2104)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2104)
					if ((tmp4)){
						HX_STACK_LINE(2104)
						break;
					}
					HX_STACK_LINE(2104)
					::nape::dynamics::Arbiter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2104)
					{
						HX_STACK_LINE(2104)
						_g->zpp_critical = false;
						HX_STACK_LINE(2104)
						int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2104)
						tmp5 = _g->zpp_inner->at(tmp6);
					}
					HX_STACK_LINE(2104)
					::nape::dynamics::Arbiter oarb = tmp5;		HX_STACK_VAR(oarb,"oarb");
					HX_STACK_LINE(2105)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2106)
					int tmp6 = arb->type;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2106)
					int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2106)
					bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2106)
					if ((tmp8)){
						HX_STACK_LINE(2106)
						continue;
					}
					HX_STACK_LINE(2107)
					bool tmp9 = (body != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2107)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2107)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2107)
					if ((tmp10)){
						HX_STACK_LINE(2107)
						tmp11 = (arb->b2 != body->zpp_inner);
					}
					else{
						HX_STACK_LINE(2107)
						tmp11 = false;
					}
					HX_STACK_LINE(2107)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2107)
					if ((tmp11)){
						HX_STACK_LINE(2107)
						tmp12 = (arb->b1 != body->zpp_inner);
					}
					else{
						HX_STACK_LINE(2107)
						tmp12 = false;
					}
					HX_STACK_LINE(2107)
					if ((tmp12)){
						HX_STACK_LINE(2107)
						continue;
					}
					HX_STACK_LINE(2108)
					{
						HX_STACK_LINE(2109)
						::nape::dynamics::CollisionArbiter tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2109)
						{
							HX_STACK_LINE(2109)
							::nape::dynamics::Arbiter tmp14 = arb->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2109)
							::nape::dynamics::Arbiter _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2109)
							int tmp15 = _this->zpp_inner->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2109)
							int tmp16 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2109)
							bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2109)
							if ((tmp17)){
								HX_STACK_LINE(2109)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = _this->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2109)
								tmp13 = tmp18->outer_zn;
							}
							else{
								HX_STACK_LINE(2109)
								tmp13 = null();
							}
						}
						HX_STACK_LINE(2109)
						bool tmp14 = freshOnly;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2109)
						::nape::geom::Vec3 tmp15 = tmp13->totalImpulse(hx::ObjectPtr<OBJ_>(this),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2109)
						::nape::geom::Vec3 imp = tmp15;		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2110)
						{
							HX_STACK_LINE(2111)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2112)
							{
								HX_STACK_LINE(2113)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(2122)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2122)
								{
									HX_STACK_LINE(2122)
									{
										HX_STACK_LINE(2122)
										bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(2122)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2122)
										if ((tmp17)){
											HX_STACK_LINE(2122)
											tmp18 = imp->zpp_disp;
										}
										else{
											HX_STACK_LINE(2122)
											tmp18 = false;
										}
										HX_STACK_LINE(2122)
										if ((tmp18)){
											HX_STACK_LINE(2122)
											::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(2122)
											::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(2122)
											HX_STACK_DO_THROW(tmp20);
										}
									}
									HX_STACK_LINE(2122)
									{
										HX_STACK_LINE(2122)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2122)
										bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(2122)
										if ((tmp17)){
											HX_STACK_LINE(2122)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2122)
									tmp16 = imp->zpp_inner->x;
								}
								HX_STACK_LINE(2122)
								int tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2122)
								Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2122)
								hx::AddEq(retx,tmp18);
								HX_STACK_LINE(2123)
								Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2123)
								{
									HX_STACK_LINE(2123)
									{
										HX_STACK_LINE(2123)
										bool tmp20 = (imp != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2123)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(2123)
										if ((tmp20)){
											HX_STACK_LINE(2123)
											tmp21 = imp->zpp_disp;
										}
										else{
											HX_STACK_LINE(2123)
											tmp21 = false;
										}
										HX_STACK_LINE(2123)
										if ((tmp21)){
											HX_STACK_LINE(2123)
											::String tmp22 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(2123)
											::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(2123)
											HX_STACK_DO_THROW(tmp23);
										}
									}
									HX_STACK_LINE(2123)
									{
										HX_STACK_LINE(2123)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2123)
										bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2123)
										if ((tmp20)){
											HX_STACK_LINE(2123)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2123)
									tmp19 = imp->zpp_inner->y;
								}
								HX_STACK_LINE(2123)
								int tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2123)
								Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2123)
								hx::AddEq(rety,tmp21);
							}
							HX_STACK_LINE(2125)
							Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2125)
							{
								HX_STACK_LINE(2125)
								{
									HX_STACK_LINE(2125)
									bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2125)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2125)
									if ((tmp17)){
										HX_STACK_LINE(2125)
										tmp18 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2125)
										tmp18 = false;
									}
									HX_STACK_LINE(2125)
									if ((tmp18)){
										HX_STACK_LINE(2125)
										::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(2125)
										::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2125)
										HX_STACK_DO_THROW(tmp20);
									}
								}
								HX_STACK_LINE(2125)
								{
									HX_STACK_LINE(2125)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2125)
									bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2125)
									if ((tmp17)){
										HX_STACK_LINE(2125)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2125)
								tmp16 = imp->zpp_inner->z;
							}
							HX_STACK_LINE(2125)
							int tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2125)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2125)
							hx::AddEq(retz,tmp18);
						}
						HX_STACK_LINE(2127)
						imp->dispose();
					}
				}
			}
		}
		HX_STACK_LINE(2131)
		Float tmp = retx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2131)
		Float tmp1 = rety;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2131)
		Float tmp2 = retz;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2131)
		::nape::geom::Vec3 tmp3 = ::nape::geom::Vec3_obj::get(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2131)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,totalContactsImpulse,return )

Float Body_obj::rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","rollingImpulse",0x8df60986,"nape.phys.Body.rollingImpulse","nape/phys/Body.hx",2146,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(2147)
		Float ret = ((Float)0.0);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2148)
		{
			HX_STACK_LINE(2149)
			::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2149)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = tmp->arbiters;		HX_STACK_VAR(arbs,"arbs");
			HX_STACK_LINE(2150)
			{
				HX_STACK_LINE(2150)
				::nape::dynamics::ArbiterList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2150)
				{
					HX_STACK_LINE(2150)
					::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2150)
					::nape::dynamics::ArbiterList tmp3 = tmp2->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2150)
					bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2150)
					if ((tmp4)){
						HX_STACK_LINE(2150)
						::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2150)
						::zpp_nape::util::ZNPList_ZPP_Arbiter tmp6 = tmp5->arbiters;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2150)
						::nape::dynamics::ArbiterList tmp7 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2150)
						::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2150)
						tmp8->wrap_arbiters = tmp7;
					}
					HX_STACK_LINE(2150)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2150)
					tmp1 = tmp5->wrap_arbiters;
				}
				HX_STACK_LINE(2150)
				::nape::dynamics::ArbiterIterator tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2150)
				::nape::dynamics::ArbiterIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2150)
				while((true)){
					HX_STACK_LINE(2150)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2150)
					{
						HX_STACK_LINE(2150)
						::zpp_nape::util::ZPP_ArbiterList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(2150)
						tmp4->valmod();
						HX_STACK_LINE(2150)
						int tmp5 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2150)
						int length = tmp5;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2150)
						_g->zpp_critical = true;
						HX_STACK_LINE(2150)
						bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2150)
						if ((tmp6)){
							HX_STACK_LINE(2150)
							tmp3 = true;
						}
						else{
							HX_STACK_LINE(2150)
							{
								HX_STACK_LINE(2150)
								::nape::dynamics::ArbiterIterator tmp7 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(2150)
								_g->zpp_next = tmp7;
								HX_STACK_LINE(2150)
								::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
								HX_STACK_LINE(2150)
								_g->zpp_inner = null();
							}
							HX_STACK_LINE(2150)
							tmp3 = false;
						}
					}
					HX_STACK_LINE(2150)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2150)
					if ((tmp4)){
						HX_STACK_LINE(2150)
						break;
					}
					HX_STACK_LINE(2150)
					::nape::dynamics::Arbiter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2150)
					{
						HX_STACK_LINE(2150)
						_g->zpp_critical = false;
						HX_STACK_LINE(2150)
						int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2150)
						tmp5 = _g->zpp_inner->at(tmp6);
					}
					HX_STACK_LINE(2150)
					::nape::dynamics::Arbiter oarb = tmp5;		HX_STACK_VAR(oarb,"oarb");
					HX_STACK_LINE(2151)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2152)
					int tmp6 = arb->type;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2152)
					int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2152)
					bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2152)
					if ((tmp8)){
						HX_STACK_LINE(2152)
						continue;
					}
					HX_STACK_LINE(2153)
					bool tmp9 = (body != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2153)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2153)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2153)
					if ((tmp10)){
						HX_STACK_LINE(2153)
						tmp11 = (arb->b2 != body->zpp_inner);
					}
					else{
						HX_STACK_LINE(2153)
						tmp11 = false;
					}
					HX_STACK_LINE(2153)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2153)
					if ((tmp11)){
						HX_STACK_LINE(2153)
						tmp12 = (arb->b1 != body->zpp_inner);
					}
					else{
						HX_STACK_LINE(2153)
						tmp12 = false;
					}
					HX_STACK_LINE(2153)
					if ((tmp12)){
						HX_STACK_LINE(2153)
						continue;
					}
					HX_STACK_LINE(2154)
					{
						HX_STACK_LINE(2155)
						::nape::dynamics::CollisionArbiter tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2155)
						{
							HX_STACK_LINE(2155)
							::nape::dynamics::Arbiter tmp14 = arb->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2155)
							::nape::dynamics::Arbiter _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2155)
							int tmp15 = _this->zpp_inner->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2155)
							int tmp16 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2155)
							bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2155)
							if ((tmp17)){
								HX_STACK_LINE(2155)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = _this->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2155)
								tmp13 = tmp18->outer_zn;
							}
							else{
								HX_STACK_LINE(2155)
								tmp13 = null();
							}
						}
						HX_STACK_LINE(2155)
						bool tmp14 = freshOnly;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2155)
						Float tmp15 = tmp13->rollingImpulse(hx::ObjectPtr<OBJ_>(this),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2155)
						hx::AddEq(ret,tmp15);
					}
				}
			}
		}
		HX_STACK_LINE(2159)
		Float tmp = ret;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2159)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,rollingImpulse,return )

::nape::geom::Vec3 Body_obj::buoyancyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.phys.Body","buoyancyImpulse",0x9134aedf,"nape.phys.Body.buoyancyImpulse","nape/phys/Body.hx",2172,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(2173)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2174)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2191)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2192)
	{
		HX_STACK_LINE(2193)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2193)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = tmp->arbiters;		HX_STACK_VAR(arbs,"arbs");
		HX_STACK_LINE(2194)
		{
			HX_STACK_LINE(2194)
			::nape::dynamics::ArbiterList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2194)
			{
				HX_STACK_LINE(2194)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2194)
				::nape::dynamics::ArbiterList tmp3 = tmp2->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2194)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2194)
				if ((tmp4)){
					HX_STACK_LINE(2194)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2194)
					::zpp_nape::util::ZNPList_ZPP_Arbiter tmp6 = tmp5->arbiters;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2194)
					::nape::dynamics::ArbiterList tmp7 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2194)
					::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2194)
					tmp8->wrap_arbiters = tmp7;
				}
				HX_STACK_LINE(2194)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2194)
				tmp1 = tmp5->wrap_arbiters;
			}
			HX_STACK_LINE(2194)
			::nape::dynamics::ArbiterIterator tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2194)
			::nape::dynamics::ArbiterIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2194)
			while((true)){
				HX_STACK_LINE(2194)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2194)
				{
					HX_STACK_LINE(2194)
					::zpp_nape::util::ZPP_ArbiterList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2194)
					tmp4->valmod();
					HX_STACK_LINE(2194)
					int tmp5 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2194)
					int length = tmp5;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(2194)
					_g->zpp_critical = true;
					HX_STACK_LINE(2194)
					bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2194)
					if ((tmp6)){
						HX_STACK_LINE(2194)
						tmp3 = true;
					}
					else{
						HX_STACK_LINE(2194)
						{
							HX_STACK_LINE(2194)
							::nape::dynamics::ArbiterIterator tmp7 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2194)
							_g->zpp_next = tmp7;
							HX_STACK_LINE(2194)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(2194)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(2194)
						tmp3 = false;
					}
				}
				HX_STACK_LINE(2194)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2194)
				if ((tmp4)){
					HX_STACK_LINE(2194)
					break;
				}
				HX_STACK_LINE(2194)
				::nape::dynamics::Arbiter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2194)
				{
					HX_STACK_LINE(2194)
					_g->zpp_critical = false;
					HX_STACK_LINE(2194)
					int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2194)
					tmp5 = _g->zpp_inner->at(tmp6);
				}
				HX_STACK_LINE(2194)
				::nape::dynamics::Arbiter oarb = tmp5;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(2195)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2196)
				int tmp6 = arb->type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2196)
				int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2196)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2196)
				if ((tmp8)){
					HX_STACK_LINE(2196)
					continue;
				}
				HX_STACK_LINE(2197)
				bool tmp9 = (body != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2197)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2197)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2197)
				if ((tmp10)){
					HX_STACK_LINE(2197)
					tmp11 = (arb->b2 != body->zpp_inner);
				}
				else{
					HX_STACK_LINE(2197)
					tmp11 = false;
				}
				HX_STACK_LINE(2197)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2197)
				if ((tmp11)){
					HX_STACK_LINE(2197)
					tmp12 = (arb->b1 != body->zpp_inner);
				}
				else{
					HX_STACK_LINE(2197)
					tmp12 = false;
				}
				HX_STACK_LINE(2197)
				if ((tmp12)){
					HX_STACK_LINE(2197)
					continue;
				}
				HX_STACK_LINE(2198)
				{
					HX_STACK_LINE(2199)
					::nape::dynamics::FluidArbiter tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2199)
					{
						HX_STACK_LINE(2199)
						::nape::dynamics::Arbiter tmp14 = arb->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2199)
						::nape::dynamics::Arbiter _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2199)
						int tmp15 = _this->zpp_inner->type;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2199)
						int tmp16 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2199)
						bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2199)
						if ((tmp17)){
							HX_STACK_LINE(2199)
							::zpp_nape::dynamics::ZPP_FluidArbiter tmp18 = _this->zpp_inner->fluidarb;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2199)
							tmp13 = tmp18->outer_zn;
						}
						else{
							HX_STACK_LINE(2199)
							tmp13 = null();
						}
					}
					HX_STACK_LINE(2199)
					::nape::geom::Vec3 tmp14 = tmp13->buoyancyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2199)
					::nape::geom::Vec3 imp = tmp14;		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2200)
					{
						HX_STACK_LINE(2201)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2202)
						{
							HX_STACK_LINE(2203)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2212)
							Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2212)
							{
								HX_STACK_LINE(2212)
								{
									HX_STACK_LINE(2212)
									bool tmp16 = (imp != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2212)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2212)
									if ((tmp16)){
										HX_STACK_LINE(2212)
										tmp17 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2212)
										tmp17 = false;
									}
									HX_STACK_LINE(2212)
									if ((tmp17)){
										HX_STACK_LINE(2212)
										::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2212)
										::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(2212)
										HX_STACK_DO_THROW(tmp19);
									}
								}
								HX_STACK_LINE(2212)
								{
									HX_STACK_LINE(2212)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2212)
									bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2212)
									if ((tmp16)){
										HX_STACK_LINE(2212)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2212)
								tmp15 = imp->zpp_inner->x;
							}
							HX_STACK_LINE(2212)
							int tmp16 = t1;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2212)
							Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2212)
							hx::AddEq(retx,tmp17);
							HX_STACK_LINE(2213)
							Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2213)
							{
								HX_STACK_LINE(2213)
								{
									HX_STACK_LINE(2213)
									bool tmp19 = (imp != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2213)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2213)
									if ((tmp19)){
										HX_STACK_LINE(2213)
										tmp20 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2213)
										tmp20 = false;
									}
									HX_STACK_LINE(2213)
									if ((tmp20)){
										HX_STACK_LINE(2213)
										::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(2213)
										::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(2213)
										HX_STACK_DO_THROW(tmp22);
									}
								}
								HX_STACK_LINE(2213)
								{
									HX_STACK_LINE(2213)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2213)
									bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2213)
									if ((tmp19)){
										HX_STACK_LINE(2213)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2213)
								tmp18 = imp->zpp_inner->y;
							}
							HX_STACK_LINE(2213)
							int tmp19 = t1;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(2213)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2213)
							hx::AddEq(rety,tmp20);
						}
						HX_STACK_LINE(2215)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2215)
						{
							HX_STACK_LINE(2215)
							{
								HX_STACK_LINE(2215)
								bool tmp16 = (imp != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2215)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2215)
								if ((tmp16)){
									HX_STACK_LINE(2215)
									tmp17 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(2215)
									tmp17 = false;
								}
								HX_STACK_LINE(2215)
								if ((tmp17)){
									HX_STACK_LINE(2215)
									::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2215)
									::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2215)
									HX_STACK_DO_THROW(tmp19);
								}
							}
							HX_STACK_LINE(2215)
							{
								HX_STACK_LINE(2215)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2215)
								bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2215)
								if ((tmp16)){
									HX_STACK_LINE(2215)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2215)
							tmp15 = imp->zpp_inner->z;
						}
						HX_STACK_LINE(2215)
						int tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2215)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2215)
						hx::AddEq(retz,tmp17);
					}
					HX_STACK_LINE(2217)
					imp->dispose();
				}
			}
		}
	}
	HX_STACK_LINE(2221)
	Float tmp = retx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2221)
	Float tmp1 = rety;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2221)
	Float tmp2 = retz;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2221)
	::nape::geom::Vec3 tmp3 = ::nape::geom::Vec3_obj::get(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2221)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,buoyancyImpulse,return )

::nape::geom::Vec3 Body_obj::dragImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.phys.Body","dragImpulse",0x2488fd8b,"nape.phys.Body.dragImpulse","nape/phys/Body.hx",2234,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(2235)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2236)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2253)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2254)
	{
		HX_STACK_LINE(2255)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2255)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = tmp->arbiters;		HX_STACK_VAR(arbs,"arbs");
		HX_STACK_LINE(2256)
		{
			HX_STACK_LINE(2256)
			::nape::dynamics::ArbiterList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2256)
			{
				HX_STACK_LINE(2256)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2256)
				::nape::dynamics::ArbiterList tmp3 = tmp2->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2256)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2256)
				if ((tmp4)){
					HX_STACK_LINE(2256)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2256)
					::zpp_nape::util::ZNPList_ZPP_Arbiter tmp6 = tmp5->arbiters;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2256)
					::nape::dynamics::ArbiterList tmp7 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2256)
					::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2256)
					tmp8->wrap_arbiters = tmp7;
				}
				HX_STACK_LINE(2256)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2256)
				tmp1 = tmp5->wrap_arbiters;
			}
			HX_STACK_LINE(2256)
			::nape::dynamics::ArbiterIterator tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2256)
			::nape::dynamics::ArbiterIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2256)
			while((true)){
				HX_STACK_LINE(2256)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2256)
				{
					HX_STACK_LINE(2256)
					::zpp_nape::util::ZPP_ArbiterList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2256)
					tmp4->valmod();
					HX_STACK_LINE(2256)
					int tmp5 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2256)
					int length = tmp5;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(2256)
					_g->zpp_critical = true;
					HX_STACK_LINE(2256)
					bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2256)
					if ((tmp6)){
						HX_STACK_LINE(2256)
						tmp3 = true;
					}
					else{
						HX_STACK_LINE(2256)
						{
							HX_STACK_LINE(2256)
							::nape::dynamics::ArbiterIterator tmp7 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2256)
							_g->zpp_next = tmp7;
							HX_STACK_LINE(2256)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(2256)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(2256)
						tmp3 = false;
					}
				}
				HX_STACK_LINE(2256)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2256)
				if ((tmp4)){
					HX_STACK_LINE(2256)
					break;
				}
				HX_STACK_LINE(2256)
				::nape::dynamics::Arbiter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2256)
				{
					HX_STACK_LINE(2256)
					_g->zpp_critical = false;
					HX_STACK_LINE(2256)
					int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2256)
					tmp5 = _g->zpp_inner->at(tmp6);
				}
				HX_STACK_LINE(2256)
				::nape::dynamics::Arbiter oarb = tmp5;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(2257)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2258)
				int tmp6 = arb->type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2258)
				int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2258)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2258)
				if ((tmp8)){
					HX_STACK_LINE(2258)
					continue;
				}
				HX_STACK_LINE(2259)
				bool tmp9 = (body != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2259)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2259)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2259)
				if ((tmp10)){
					HX_STACK_LINE(2259)
					tmp11 = (arb->b2 != body->zpp_inner);
				}
				else{
					HX_STACK_LINE(2259)
					tmp11 = false;
				}
				HX_STACK_LINE(2259)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2259)
				if ((tmp11)){
					HX_STACK_LINE(2259)
					tmp12 = (arb->b1 != body->zpp_inner);
				}
				else{
					HX_STACK_LINE(2259)
					tmp12 = false;
				}
				HX_STACK_LINE(2259)
				if ((tmp12)){
					HX_STACK_LINE(2259)
					continue;
				}
				HX_STACK_LINE(2260)
				{
					HX_STACK_LINE(2261)
					::nape::dynamics::FluidArbiter tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2261)
					{
						HX_STACK_LINE(2261)
						::nape::dynamics::Arbiter tmp14 = arb->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2261)
						::nape::dynamics::Arbiter _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2261)
						int tmp15 = _this->zpp_inner->type;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2261)
						int tmp16 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2261)
						bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2261)
						if ((tmp17)){
							HX_STACK_LINE(2261)
							::zpp_nape::dynamics::ZPP_FluidArbiter tmp18 = _this->zpp_inner->fluidarb;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2261)
							tmp13 = tmp18->outer_zn;
						}
						else{
							HX_STACK_LINE(2261)
							tmp13 = null();
						}
					}
					HX_STACK_LINE(2261)
					::nape::geom::Vec3 tmp14 = tmp13->dragImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2261)
					::nape::geom::Vec3 imp = tmp14;		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2262)
					{
						HX_STACK_LINE(2263)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2264)
						{
							HX_STACK_LINE(2265)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2274)
							Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2274)
							{
								HX_STACK_LINE(2274)
								{
									HX_STACK_LINE(2274)
									bool tmp16 = (imp != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2274)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2274)
									if ((tmp16)){
										HX_STACK_LINE(2274)
										tmp17 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2274)
										tmp17 = false;
									}
									HX_STACK_LINE(2274)
									if ((tmp17)){
										HX_STACK_LINE(2274)
										::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2274)
										::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(2274)
										HX_STACK_DO_THROW(tmp19);
									}
								}
								HX_STACK_LINE(2274)
								{
									HX_STACK_LINE(2274)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2274)
									bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2274)
									if ((tmp16)){
										HX_STACK_LINE(2274)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2274)
								tmp15 = imp->zpp_inner->x;
							}
							HX_STACK_LINE(2274)
							int tmp16 = t1;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2274)
							Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2274)
							hx::AddEq(retx,tmp17);
							HX_STACK_LINE(2275)
							Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2275)
							{
								HX_STACK_LINE(2275)
								{
									HX_STACK_LINE(2275)
									bool tmp19 = (imp != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2275)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2275)
									if ((tmp19)){
										HX_STACK_LINE(2275)
										tmp20 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2275)
										tmp20 = false;
									}
									HX_STACK_LINE(2275)
									if ((tmp20)){
										HX_STACK_LINE(2275)
										::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(2275)
										::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(2275)
										HX_STACK_DO_THROW(tmp22);
									}
								}
								HX_STACK_LINE(2275)
								{
									HX_STACK_LINE(2275)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2275)
									bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2275)
									if ((tmp19)){
										HX_STACK_LINE(2275)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2275)
								tmp18 = imp->zpp_inner->y;
							}
							HX_STACK_LINE(2275)
							int tmp19 = t1;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(2275)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2275)
							hx::AddEq(rety,tmp20);
						}
						HX_STACK_LINE(2277)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2277)
						{
							HX_STACK_LINE(2277)
							{
								HX_STACK_LINE(2277)
								bool tmp16 = (imp != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2277)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2277)
								if ((tmp16)){
									HX_STACK_LINE(2277)
									tmp17 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(2277)
									tmp17 = false;
								}
								HX_STACK_LINE(2277)
								if ((tmp17)){
									HX_STACK_LINE(2277)
									::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2277)
									::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2277)
									HX_STACK_DO_THROW(tmp19);
								}
							}
							HX_STACK_LINE(2277)
							{
								HX_STACK_LINE(2277)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2277)
								bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2277)
								if ((tmp16)){
									HX_STACK_LINE(2277)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2277)
							tmp15 = imp->zpp_inner->z;
						}
						HX_STACK_LINE(2277)
						int tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2277)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2277)
						hx::AddEq(retz,tmp17);
					}
					HX_STACK_LINE(2279)
					imp->dispose();
				}
			}
		}
	}
	HX_STACK_LINE(2283)
	Float tmp = retx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2283)
	Float tmp1 = rety;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2283)
	Float tmp2 = retz;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2283)
	::nape::geom::Vec3 tmp3 = ::nape::geom::Vec3_obj::get(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2283)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,dragImpulse,return )

::nape::geom::Vec3 Body_obj::totalFluidImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.phys.Body","totalFluidImpulse",0x5f513f99,"nape.phys.Body.totalFluidImpulse","nape/phys/Body.hx",2296,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(2297)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2298)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2315)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2316)
	{
		HX_STACK_LINE(2317)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2317)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = tmp->arbiters;		HX_STACK_VAR(arbs,"arbs");
		HX_STACK_LINE(2318)
		{
			HX_STACK_LINE(2318)
			::nape::dynamics::ArbiterList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2318)
			{
				HX_STACK_LINE(2318)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2318)
				::nape::dynamics::ArbiterList tmp3 = tmp2->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2318)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2318)
				if ((tmp4)){
					HX_STACK_LINE(2318)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2318)
					::zpp_nape::util::ZNPList_ZPP_Arbiter tmp6 = tmp5->arbiters;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2318)
					::nape::dynamics::ArbiterList tmp7 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2318)
					::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2318)
					tmp8->wrap_arbiters = tmp7;
				}
				HX_STACK_LINE(2318)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2318)
				tmp1 = tmp5->wrap_arbiters;
			}
			HX_STACK_LINE(2318)
			::nape::dynamics::ArbiterIterator tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2318)
			::nape::dynamics::ArbiterIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2318)
			while((true)){
				HX_STACK_LINE(2318)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2318)
				{
					HX_STACK_LINE(2318)
					::zpp_nape::util::ZPP_ArbiterList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2318)
					tmp4->valmod();
					HX_STACK_LINE(2318)
					int tmp5 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2318)
					int length = tmp5;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(2318)
					_g->zpp_critical = true;
					HX_STACK_LINE(2318)
					bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2318)
					if ((tmp6)){
						HX_STACK_LINE(2318)
						tmp3 = true;
					}
					else{
						HX_STACK_LINE(2318)
						{
							HX_STACK_LINE(2318)
							::nape::dynamics::ArbiterIterator tmp7 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2318)
							_g->zpp_next = tmp7;
							HX_STACK_LINE(2318)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(2318)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(2318)
						tmp3 = false;
					}
				}
				HX_STACK_LINE(2318)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2318)
				if ((tmp4)){
					HX_STACK_LINE(2318)
					break;
				}
				HX_STACK_LINE(2318)
				::nape::dynamics::Arbiter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2318)
				{
					HX_STACK_LINE(2318)
					_g->zpp_critical = false;
					HX_STACK_LINE(2318)
					int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2318)
					tmp5 = _g->zpp_inner->at(tmp6);
				}
				HX_STACK_LINE(2318)
				::nape::dynamics::Arbiter oarb = tmp5;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(2319)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2320)
				int tmp6 = arb->type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2320)
				int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2320)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2320)
				if ((tmp8)){
					HX_STACK_LINE(2320)
					continue;
				}
				HX_STACK_LINE(2321)
				bool tmp9 = (body != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2321)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2321)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2321)
				if ((tmp10)){
					HX_STACK_LINE(2321)
					tmp11 = (arb->b2 != body->zpp_inner);
				}
				else{
					HX_STACK_LINE(2321)
					tmp11 = false;
				}
				HX_STACK_LINE(2321)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2321)
				if ((tmp11)){
					HX_STACK_LINE(2321)
					tmp12 = (arb->b1 != body->zpp_inner);
				}
				else{
					HX_STACK_LINE(2321)
					tmp12 = false;
				}
				HX_STACK_LINE(2321)
				if ((tmp12)){
					HX_STACK_LINE(2321)
					continue;
				}
				HX_STACK_LINE(2322)
				{
					HX_STACK_LINE(2323)
					::nape::dynamics::FluidArbiter tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2323)
					{
						HX_STACK_LINE(2323)
						::nape::dynamics::Arbiter tmp14 = arb->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2323)
						::nape::dynamics::Arbiter _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2323)
						int tmp15 = _this->zpp_inner->type;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2323)
						int tmp16 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2323)
						bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2323)
						if ((tmp17)){
							HX_STACK_LINE(2323)
							::zpp_nape::dynamics::ZPP_FluidArbiter tmp18 = _this->zpp_inner->fluidarb;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2323)
							tmp13 = tmp18->outer_zn;
						}
						else{
							HX_STACK_LINE(2323)
							tmp13 = null();
						}
					}
					HX_STACK_LINE(2323)
					::nape::geom::Vec3 tmp14 = tmp13->totalImpulse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2323)
					::nape::geom::Vec3 imp = tmp14;		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2324)
					{
						HX_STACK_LINE(2325)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2326)
						{
							HX_STACK_LINE(2327)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2336)
							Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2336)
							{
								HX_STACK_LINE(2336)
								{
									HX_STACK_LINE(2336)
									bool tmp16 = (imp != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2336)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2336)
									if ((tmp16)){
										HX_STACK_LINE(2336)
										tmp17 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2336)
										tmp17 = false;
									}
									HX_STACK_LINE(2336)
									if ((tmp17)){
										HX_STACK_LINE(2336)
										::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(2336)
										::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(2336)
										HX_STACK_DO_THROW(tmp19);
									}
								}
								HX_STACK_LINE(2336)
								{
									HX_STACK_LINE(2336)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2336)
									bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2336)
									if ((tmp16)){
										HX_STACK_LINE(2336)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2336)
								tmp15 = imp->zpp_inner->x;
							}
							HX_STACK_LINE(2336)
							int tmp16 = t1;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2336)
							Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2336)
							hx::AddEq(retx,tmp17);
							HX_STACK_LINE(2337)
							Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2337)
							{
								HX_STACK_LINE(2337)
								{
									HX_STACK_LINE(2337)
									bool tmp19 = (imp != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2337)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2337)
									if ((tmp19)){
										HX_STACK_LINE(2337)
										tmp20 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2337)
										tmp20 = false;
									}
									HX_STACK_LINE(2337)
									if ((tmp20)){
										HX_STACK_LINE(2337)
										::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(2337)
										::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(2337)
										HX_STACK_DO_THROW(tmp22);
									}
								}
								HX_STACK_LINE(2337)
								{
									HX_STACK_LINE(2337)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2337)
									bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2337)
									if ((tmp19)){
										HX_STACK_LINE(2337)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2337)
								tmp18 = imp->zpp_inner->y;
							}
							HX_STACK_LINE(2337)
							int tmp19 = t1;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(2337)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2337)
							hx::AddEq(rety,tmp20);
						}
						HX_STACK_LINE(2339)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2339)
						{
							HX_STACK_LINE(2339)
							{
								HX_STACK_LINE(2339)
								bool tmp16 = (imp != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2339)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2339)
								if ((tmp16)){
									HX_STACK_LINE(2339)
									tmp17 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(2339)
									tmp17 = false;
								}
								HX_STACK_LINE(2339)
								if ((tmp17)){
									HX_STACK_LINE(2339)
									::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2339)
									::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2339)
									HX_STACK_DO_THROW(tmp19);
								}
							}
							HX_STACK_LINE(2339)
							{
								HX_STACK_LINE(2339)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2339)
								bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2339)
								if ((tmp16)){
									HX_STACK_LINE(2339)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2339)
							tmp15 = imp->zpp_inner->z;
						}
						HX_STACK_LINE(2339)
						int tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2339)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2339)
						hx::AddEq(retz,tmp17);
					}
					HX_STACK_LINE(2341)
					imp->dispose();
				}
			}
		}
	}
	HX_STACK_LINE(2345)
	Float tmp = retx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2345)
	Float tmp1 = rety;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2345)
	Float tmp2 = retz;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2345)
	::nape::geom::Vec3 tmp3 = ::nape::geom::Vec3_obj::get(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2345)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,totalFluidImpulse,return )

::nape::geom::Vec3 Body_obj::constraintsImpulse( ){
	HX_STACK_FRAME("nape.phys.Body","constraintsImpulse",0x3e34d8b5,"nape.phys.Body.constraintsImpulse","nape/phys/Body.hx",2353,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2354)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2355)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2372)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2373)
	{
		HX_STACK_LINE(2374)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2374)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp1 = tmp->constraints->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2374)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2375)
		while((true)){
			HX_STACK_LINE(2375)
			bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2375)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2375)
			if ((tmp3)){
				HX_STACK_LINE(2375)
				break;
			}
			HX_STACK_LINE(2376)
			::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(2377)
			{
				HX_STACK_LINE(2378)
				::nape::geom::Vec3 tmp4 = con->outer->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2378)
				::nape::geom::Vec3 imp = tmp4;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(2379)
				{
					HX_STACK_LINE(2380)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2381)
					{
						HX_STACK_LINE(2382)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(2391)
						Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2391)
						{
							HX_STACK_LINE(2391)
							{
								HX_STACK_LINE(2391)
								bool tmp6 = (imp != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(2391)
								bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(2391)
								if ((tmp6)){
									HX_STACK_LINE(2391)
									tmp7 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(2391)
									tmp7 = false;
								}
								HX_STACK_LINE(2391)
								if ((tmp7)){
									HX_STACK_LINE(2391)
									::String tmp8 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(2391)
									::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(2391)
									HX_STACK_DO_THROW(tmp9);
								}
							}
							HX_STACK_LINE(2391)
							{
								HX_STACK_LINE(2391)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2391)
								bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(2391)
								if ((tmp6)){
									HX_STACK_LINE(2391)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2391)
							tmp5 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(2391)
						int tmp6 = t1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2391)
						Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2391)
						hx::AddEq(retx,tmp7);
						HX_STACK_LINE(2392)
						Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2392)
						{
							HX_STACK_LINE(2392)
							{
								HX_STACK_LINE(2392)
								bool tmp9 = (imp != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2392)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2392)
								if ((tmp9)){
									HX_STACK_LINE(2392)
									tmp10 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(2392)
									tmp10 = false;
								}
								HX_STACK_LINE(2392)
								if ((tmp10)){
									HX_STACK_LINE(2392)
									::String tmp11 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(2392)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(2392)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(2392)
							{
								HX_STACK_LINE(2392)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2392)
								bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2392)
								if ((tmp9)){
									HX_STACK_LINE(2392)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2392)
							tmp8 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(2392)
						int tmp9 = t1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2392)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2392)
						hx::AddEq(rety,tmp10);
					}
					HX_STACK_LINE(2394)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2394)
					{
						HX_STACK_LINE(2394)
						{
							HX_STACK_LINE(2394)
							bool tmp6 = (imp != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(2394)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2394)
							if ((tmp6)){
								HX_STACK_LINE(2394)
								tmp7 = imp->zpp_disp;
							}
							else{
								HX_STACK_LINE(2394)
								tmp7 = false;
							}
							HX_STACK_LINE(2394)
							if ((tmp7)){
								HX_STACK_LINE(2394)
								::String tmp8 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2394)
								::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2394)
								HX_STACK_DO_THROW(tmp9);
							}
						}
						HX_STACK_LINE(2394)
						{
							HX_STACK_LINE(2394)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2394)
							bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(2394)
							if ((tmp6)){
								HX_STACK_LINE(2394)
								_this->_validate();
							}
						}
						HX_STACK_LINE(2394)
						tmp5 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(2394)
					int tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2394)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2394)
					hx::AddEq(retz,tmp7);
				}
				HX_STACK_LINE(2396)
				imp->dispose();
			}
			HX_STACK_LINE(2398)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(2401)
	Float tmp = retx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2401)
	Float tmp1 = rety;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2401)
	Float tmp2 = retz;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2401)
	::nape::geom::Vec3 tmp3 = ::nape::geom::Vec3_obj::get(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2401)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,constraintsImpulse,return )

::nape::geom::Vec3 Body_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.phys.Body","totalImpulse",0xab4a77a7,"nape.phys.Body.totalImpulse","nape/phys/Body.hx",2419,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(2420)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2421)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2438)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2439)
		::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2439)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = tmp->arbiters;		HX_STACK_VAR(arbs,"arbs");
		HX_STACK_LINE(2440)
		{
			HX_STACK_LINE(2440)
			::nape::dynamics::ArbiterList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2440)
			{
				HX_STACK_LINE(2440)
				::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2440)
				::nape::dynamics::ArbiterList tmp3 = tmp2->wrap_arbiters;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2440)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2440)
				if ((tmp4)){
					HX_STACK_LINE(2440)
					::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2440)
					::zpp_nape::util::ZNPList_ZPP_Arbiter tmp6 = tmp5->arbiters;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2440)
					::nape::dynamics::ArbiterList tmp7 = ::zpp_nape::util::ZPP_ArbiterList_obj::get(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2440)
					::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2440)
					tmp8->wrap_arbiters = tmp7;
				}
				HX_STACK_LINE(2440)
				::zpp_nape::phys::ZPP_Body tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2440)
				tmp1 = tmp5->wrap_arbiters;
			}
			HX_STACK_LINE(2440)
			::nape::dynamics::ArbiterIterator tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2440)
			::nape::dynamics::ArbiterIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2440)
			while((true)){
				HX_STACK_LINE(2440)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2440)
				{
					HX_STACK_LINE(2440)
					::zpp_nape::util::ZPP_ArbiterList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2440)
					tmp4->valmod();
					HX_STACK_LINE(2440)
					int tmp5 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2440)
					int length = tmp5;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(2440)
					_g->zpp_critical = true;
					HX_STACK_LINE(2440)
					bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2440)
					if ((tmp6)){
						HX_STACK_LINE(2440)
						tmp3 = true;
					}
					else{
						HX_STACK_LINE(2440)
						{
							HX_STACK_LINE(2440)
							::nape::dynamics::ArbiterIterator tmp7 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2440)
							_g->zpp_next = tmp7;
							HX_STACK_LINE(2440)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(2440)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(2440)
						tmp3 = false;
					}
				}
				HX_STACK_LINE(2440)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2440)
				if ((tmp4)){
					HX_STACK_LINE(2440)
					break;
				}
				HX_STACK_LINE(2440)
				::nape::dynamics::Arbiter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2440)
				{
					HX_STACK_LINE(2440)
					_g->zpp_critical = false;
					HX_STACK_LINE(2440)
					int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2440)
					tmp5 = _g->zpp_inner->at(tmp6);
				}
				HX_STACK_LINE(2440)
				::nape::dynamics::Arbiter oarb = tmp5;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(2441)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2442)
				int tmp6 = arb->type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2442)
				int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2442)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2442)
				if ((tmp8)){
					HX_STACK_LINE(2442)
					continue;
				}
				HX_STACK_LINE(2443)
				bool tmp9 = (body != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2443)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2443)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2443)
				if ((tmp10)){
					HX_STACK_LINE(2443)
					tmp11 = (arb->b2 != body->zpp_inner);
				}
				else{
					HX_STACK_LINE(2443)
					tmp11 = false;
				}
				HX_STACK_LINE(2443)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2443)
				if ((tmp11)){
					HX_STACK_LINE(2443)
					tmp12 = (arb->b1 != body->zpp_inner);
				}
				else{
					HX_STACK_LINE(2443)
					tmp12 = false;
				}
				HX_STACK_LINE(2443)
				if ((tmp12)){
					HX_STACK_LINE(2443)
					continue;
				}
				HX_STACK_LINE(2444)
				::nape::dynamics::Arbiter tmp13 = arb->wrapper();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2444)
				bool tmp14 = freshOnly;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2444)
				::nape::geom::Vec3 tmp15 = tmp13->totalImpulse(hx::ObjectPtr<OBJ_>(this),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2444)
				::nape::geom::Vec3 imp = tmp15;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(2445)
				{
					HX_STACK_LINE(2446)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2447)
					{
						HX_STACK_LINE(2448)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(2457)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2457)
						{
							HX_STACK_LINE(2457)
							{
								HX_STACK_LINE(2457)
								bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2457)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2457)
								if ((tmp17)){
									HX_STACK_LINE(2457)
									tmp18 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(2457)
									tmp18 = false;
								}
								HX_STACK_LINE(2457)
								if ((tmp18)){
									HX_STACK_LINE(2457)
									::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2457)
									::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2457)
									HX_STACK_DO_THROW(tmp20);
								}
							}
							HX_STACK_LINE(2457)
							{
								HX_STACK_LINE(2457)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2457)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2457)
								if ((tmp17)){
									HX_STACK_LINE(2457)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2457)
							tmp16 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(2457)
						int tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2457)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2457)
						hx::AddEq(retx,tmp18);
						HX_STACK_LINE(2458)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2458)
						{
							HX_STACK_LINE(2458)
							{
								HX_STACK_LINE(2458)
								bool tmp20 = (imp != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2458)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2458)
								if ((tmp20)){
									HX_STACK_LINE(2458)
									tmp21 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(2458)
									tmp21 = false;
								}
								HX_STACK_LINE(2458)
								if ((tmp21)){
									HX_STACK_LINE(2458)
									::String tmp22 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(2458)
									::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(2458)
									HX_STACK_DO_THROW(tmp23);
								}
							}
							HX_STACK_LINE(2458)
							{
								HX_STACK_LINE(2458)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2458)
								bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2458)
								if ((tmp20)){
									HX_STACK_LINE(2458)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2458)
							tmp19 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(2458)
						int tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2458)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2458)
						hx::AddEq(rety,tmp21);
					}
					HX_STACK_LINE(2460)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2460)
					{
						HX_STACK_LINE(2460)
						{
							HX_STACK_LINE(2460)
							bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2460)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2460)
							if ((tmp17)){
								HX_STACK_LINE(2460)
								tmp18 = imp->zpp_disp;
							}
							else{
								HX_STACK_LINE(2460)
								tmp18 = false;
							}
							HX_STACK_LINE(2460)
							if ((tmp18)){
								HX_STACK_LINE(2460)
								::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2460)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2460)
								HX_STACK_DO_THROW(tmp20);
							}
						}
						HX_STACK_LINE(2460)
						{
							HX_STACK_LINE(2460)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2460)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2460)
							if ((tmp17)){
								HX_STACK_LINE(2460)
								_this->_validate();
							}
						}
						HX_STACK_LINE(2460)
						tmp16 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(2460)
					int tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2460)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2460)
					hx::AddEq(retz,tmp18);
				}
				HX_STACK_LINE(2462)
				imp->dispose();
			}
		}
		HX_STACK_LINE(2464)
		{
			HX_STACK_LINE(2465)
			::zpp_nape::phys::ZPP_Body tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2465)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp2 = tmp1->constraints->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2465)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp2;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2466)
			while((true)){
				HX_STACK_LINE(2466)
				bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2466)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2466)
				if ((tmp4)){
					HX_STACK_LINE(2466)
					break;
				}
				HX_STACK_LINE(2467)
				::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
				HX_STACK_LINE(2468)
				{
					HX_STACK_LINE(2469)
					bool tmp5 = con->active;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2469)
					if ((tmp5)){
						HX_STACK_LINE(2470)
						::nape::geom::Vec3 tmp6 = con->outer->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2470)
						::nape::geom::Vec3 imp = tmp6;		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2471)
						{
							HX_STACK_LINE(2472)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2473)
							{
								HX_STACK_LINE(2474)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(2483)
								Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(2483)
								{
									HX_STACK_LINE(2483)
									{
										HX_STACK_LINE(2483)
										bool tmp8 = (imp != null());		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(2483)
										bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(2483)
										if ((tmp8)){
											HX_STACK_LINE(2483)
											tmp9 = imp->zpp_disp;
										}
										else{
											HX_STACK_LINE(2483)
											tmp9 = false;
										}
										HX_STACK_LINE(2483)
										if ((tmp9)){
											HX_STACK_LINE(2483)
											::String tmp10 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(2483)
											::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(2483)
											HX_STACK_DO_THROW(tmp11);
										}
									}
									HX_STACK_LINE(2483)
									{
										HX_STACK_LINE(2483)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2483)
										bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(2483)
										if ((tmp8)){
											HX_STACK_LINE(2483)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2483)
									tmp7 = imp->zpp_inner->x;
								}
								HX_STACK_LINE(2483)
								int tmp8 = t1;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2483)
								Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2483)
								hx::AddEq(retx,tmp9);
								HX_STACK_LINE(2484)
								Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2484)
								{
									HX_STACK_LINE(2484)
									{
										HX_STACK_LINE(2484)
										bool tmp11 = (imp != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2484)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(2484)
										if ((tmp11)){
											HX_STACK_LINE(2484)
											tmp12 = imp->zpp_disp;
										}
										else{
											HX_STACK_LINE(2484)
											tmp12 = false;
										}
										HX_STACK_LINE(2484)
										if ((tmp12)){
											HX_STACK_LINE(2484)
											::String tmp13 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(2484)
											::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(2484)
											HX_STACK_DO_THROW(tmp14);
										}
									}
									HX_STACK_LINE(2484)
									{
										HX_STACK_LINE(2484)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2484)
										bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2484)
										if ((tmp11)){
											HX_STACK_LINE(2484)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2484)
									tmp10 = imp->zpp_inner->y;
								}
								HX_STACK_LINE(2484)
								int tmp11 = t1;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(2484)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2484)
								hx::AddEq(rety,tmp12);
							}
							HX_STACK_LINE(2486)
							Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2486)
							{
								HX_STACK_LINE(2486)
								{
									HX_STACK_LINE(2486)
									bool tmp8 = (imp != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(2486)
									bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(2486)
									if ((tmp8)){
										HX_STACK_LINE(2486)
										tmp9 = imp->zpp_disp;
									}
									else{
										HX_STACK_LINE(2486)
										tmp9 = false;
									}
									HX_STACK_LINE(2486)
									if ((tmp9)){
										HX_STACK_LINE(2486)
										::String tmp10 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(2486)
										::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(2486)
										HX_STACK_DO_THROW(tmp11);
									}
								}
								HX_STACK_LINE(2486)
								{
									HX_STACK_LINE(2486)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2486)
									bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(2486)
									if ((tmp8)){
										HX_STACK_LINE(2486)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2486)
								tmp7 = imp->zpp_inner->z;
							}
							HX_STACK_LINE(2486)
							int tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2486)
							Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2486)
							hx::AddEq(retz,tmp9);
						}
						HX_STACK_LINE(2488)
						imp->dispose();
					}
				}
				HX_STACK_LINE(2491)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(2494)
		Float tmp1 = retx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2494)
		Float tmp2 = rety;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2494)
		Float tmp3 = retz;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2494)
		::nape::geom::Vec3 tmp4 = ::nape::geom::Vec3_obj::get(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2494)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,totalImpulse,return )

bool Body_obj::contains( ::nape::geom::Vec2 point){
	HX_STACK_FRAME("nape.phys.Body","contains",0x18d08975,"nape.phys.Body.contains","nape/phys/Body.hx",2504,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(2505)
	{
		HX_STACK_LINE(2507)
		bool tmp = (point != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2507)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2507)
		if ((tmp)){
			HX_STACK_LINE(2507)
			tmp1 = point->zpp_disp;
		}
		else{
			HX_STACK_LINE(2507)
			tmp1 = false;
		}
		HX_STACK_LINE(2507)
		if ((tmp1)){
			HX_STACK_LINE(2507)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2507)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2507)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2511)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2511)
	if ((tmp)){
		HX_STACK_LINE(2511)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot check containment of null point","\xab","\x9d","\xc9","\x26"));
	}
	HX_STACK_LINE(2513)
	bool tmp1 = point->zpp_inner->weak;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2513)
	bool wasWeak = tmp1;		HX_STACK_VAR(wasWeak,"wasWeak");
	HX_STACK_LINE(2514)
	point->zpp_inner->weak = false;
	HX_STACK_LINE(2515)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(2516)
	{
		HX_STACK_LINE(2517)
		retvar = false;
		HX_STACK_LINE(2518)
		{
			HX_STACK_LINE(2519)
			::zpp_nape::phys::ZPP_Body tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2519)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = tmp2->shapes->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2519)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp3;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2520)
			while((true)){
				HX_STACK_LINE(2520)
				bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2520)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2520)
				if ((tmp5)){
					HX_STACK_LINE(2520)
					break;
				}
				HX_STACK_LINE(2521)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(2522)
				{
					HX_STACK_LINE(2523)
					::nape::geom::Vec2 tmp6 = point;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2523)
					bool tmp7 = s->outer->contains(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2523)
					if ((tmp7)){
						HX_STACK_LINE(2524)
						retvar = true;
						HX_STACK_LINE(2525)
						break;
					}
				}
				HX_STACK_LINE(2528)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2532)
	point->zpp_inner->weak = wasWeak;
	HX_STACK_LINE(2533)
	{
		HX_STACK_LINE(2534)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2535)
		tmp2 = point->zpp_inner->weak;
		HX_STACK_LINE(2534)
		if ((tmp2)){
			HX_STACK_LINE(2537)
			{
				HX_STACK_LINE(2537)
				{
					HX_STACK_LINE(2537)
					bool tmp3 = (point != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2537)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2537)
					if ((tmp3)){
						HX_STACK_LINE(2537)
						tmp4 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(2537)
						tmp4 = false;
					}
					HX_STACK_LINE(2537)
					if ((tmp4)){
						HX_STACK_LINE(2537)
						::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2537)
						::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2537)
						HX_STACK_DO_THROW(tmp6);
					}
				}
				HX_STACK_LINE(2537)
				{
					HX_STACK_LINE(2537)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2537)
					bool tmp3 = _this->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2537)
					if ((tmp3)){
						HX_STACK_LINE(2537)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(2537)
					bool tmp4 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2537)
					if ((tmp4)){
						HX_STACK_LINE(2537)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(2537)
				bool tmp3 = point->zpp_inner->_inuse;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2537)
				if ((tmp3)){
					HX_STACK_LINE(2537)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(2537)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(2537)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(2537)
				point->zpp_inner = null();
				HX_STACK_LINE(2537)
				{
					HX_STACK_LINE(2537)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2537)
					o->zpp_pool = null();
					HX_STACK_LINE(2537)
					::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2537)
					bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2537)
					if ((tmp5)){
						HX_STACK_LINE(2537)
						::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2537)
						tmp6->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(2537)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(2537)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(2537)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(2537)
				{
					HX_STACK_LINE(2537)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2537)
					{
						HX_STACK_LINE(2537)
						bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(2537)
						if ((tmp4)){
							HX_STACK_LINE(2537)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(2537)
							o->outer = null();
						}
						HX_STACK_LINE(2537)
						o->_isimmutable = null();
						HX_STACK_LINE(2537)
						o->_validate = null();
						HX_STACK_LINE(2537)
						o->_invalidate = null();
					}
					HX_STACK_LINE(2537)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2537)
					o->next = tmp4;
					HX_STACK_LINE(2537)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(2538)
			true;
		}
		else{
			HX_STACK_LINE(2541)
			false;
		}
	}
	HX_STACK_LINE(2544)
	bool tmp2 = retvar;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2544)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,contains,return )

::String Body_obj::toString( ){
	HX_STACK_FRAME("nape.phys.Body","toString",0x24c40002,"nape.phys.Body.toString","nape/phys/Body.hx",2549,0xcb2bb586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2550)
	::zpp_nape::phys::ZPP_Body tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2550)
	bool tmp1 = tmp->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2550)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2550)
	if ((tmp1)){
		HX_STACK_LINE(2550)
		tmp2 = HX_HCSTRING("(space::world","\xb4","\x3f","\xcf","\x3b");
	}
	else{
		HX_STACK_LINE(2550)
		::zpp_nape::phys::ZPP_Body tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2550)
		int tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2550)
		int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2550)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2550)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2550)
		if ((tmp6)){
			HX_STACK_LINE(2550)
			tmp7 = HX_HCSTRING("dynamic","\x7f","\x9f","\x15","\x36");
		}
		else{
			HX_STACK_LINE(2550)
			::zpp_nape::phys::ZPP_Body tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2550)
			int tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2550)
			int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2550)
			bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2550)
			if ((tmp11)){
				HX_STACK_LINE(2550)
				tmp7 = HX_HCSTRING("static","\xae","\xdc","\xfb","\x05");
			}
			else{
				HX_STACK_LINE(2550)
				tmp7 = HX_HCSTRING("kinematic","\x05","\x79","\xff","\xe3");
			}
		}
		HX_STACK_LINE(2550)
		tmp2 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp7);
	}
	HX_STACK_LINE(2550)
	::String tmp3 = (tmp2 + HX_HCSTRING(")#","\xda","\x23","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2550)
	::zpp_nape::phys::ZPP_Interactor tmp4 = this->zpp_inner_i;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2550)
	int tmp5 = tmp4->id;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2550)
	::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2550)
	return tmp6;
}



Body_obj::Body_obj()
{
}

void Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Body);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	::nape::phys::Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	::nape::phys::Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Body_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"mass") ) { if (inCallProp == hx::paccAlways) return get_mass(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return get_space(); }
		if (HX_FIELD_EQ(inName,"force") ) { if (inCallProp == hx::paccAlways) return get_force(); }
		if (HX_FIELD_EQ(inName,"align") ) { return align_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { if (inCallProp == hx::paccAlways) return get_shapes(); }
		if (HX_FIELD_EQ(inName,"torque") ) { if (inCallProp == hx::paccAlways) return get_torque(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == hx::paccAlways) return get_bounds(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { if (inCallProp == hx::paccAlways) return get_inertia(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"isBullet") ) { if (inCallProp == hx::paccAlways) return get_isBullet(); }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"compound") ) { if (inCallProp == hx::paccAlways) return get_compound(); }
		if (HX_FIELD_EQ(inName,"arbiters") ) { if (inCallProp == hx::paccAlways) return get_arbiters(); }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"velocity") ) { if (inCallProp == hx::paccAlways) return get_velocity(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"massMode") ) { if (inCallProp == hx::paccAlways) return get_massMode(); }
		if (HX_FIELD_EQ(inName,"get_mass") ) { return get_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mass") ) { return set_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMass") ) { if (inCallProp == hx::paccAlways) return get_gravMass(); }
		if (HX_FIELD_EQ(inName,"localCOM") ) { if (inCallProp == hx::paccAlways) return get_localCOM(); }
		if (HX_FIELD_EQ(inName,"worldCOM") ) { if (inCallProp == hx::paccAlways) return get_worldCOM(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"integrate") ) { return integrate_dyn(); }
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_force") ) { return get_force_dyn(); }
		if (HX_FIELD_EQ(inName,"set_force") ) { return set_force_dyn(); }
		if (HX_FIELD_EQ(inName,"kinAngVel") ) { if (inCallProp == hx::paccAlways) return get_kinAngVel(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disableCCD") ) { if (inCallProp == hx::paccAlways) return get_disableCCD(); }
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"isSleeping") ) { if (inCallProp == hx::paccAlways) return get_isSleeping(); }
		if (HX_FIELD_EQ(inName,"surfaceVel") ) { if (inCallProp == hx::paccAlways) return get_surfaceVel(); }
		if (HX_FIELD_EQ(inName,"angularVel") ) { if (inCallProp == hx::paccAlways) return get_angularVel(); }
		if (HX_FIELD_EQ(inName,"get_torque") ) { return get_torque_dyn(); }
		if (HX_FIELD_EQ(inName,"set_torque") ) { return set_torque_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints") ) { if (inCallProp == hx::paccAlways) return get_constraints(); }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { if (inCallProp == hx::paccAlways) return get_inertiaMode(); }
		if (HX_FIELD_EQ(inName,"get_inertia") ) { return get_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertia") ) { return set_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"crushFactor") ) { return crushFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleShapes") ) { return scaleShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"dragImpulse") ) { return dragImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_isBullet") ) { return get_isBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isBullet") ) { return set_isBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_velocity") ) { return get_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_velocity") ) { return set_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"kinematicVel") ) { if (inCallProp == hx::paccAlways) return get_kinematicVel(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_massMode") ) { return get_massMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_massMode") ) { return set_massMode_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { if (inCallProp == hx::paccAlways) return get_gravMassMode(); }
		if (HX_FIELD_EQ(inName,"get_gravMass") ) { return get_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravMass") ) { return set_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulse") ) { return applyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateShapes") ) { return rotateShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localCOM") ) { return get_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldCOM") ) { return get_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_kinAngVel") ) { return get_kinAngVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_kinAngVel") ) { return set_kinAngVel_dyn(); }
		if (HX_FIELD_EQ(inName,"allowMovement") ) { if (inCallProp == hx::paccAlways) return get_allowMovement(); }
		if (HX_FIELD_EQ(inName,"allowRotation") ) { if (inCallProp == hx::paccAlways) return get_allowRotation(); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { if (inCallProp == hx::paccAlways) return get_gravMassScale(); }
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_disableCCD") ) { return get_disableCCD_dyn(); }
		if (HX_FIELD_EQ(inName,"set_disableCCD") ) { return set_disableCCD_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"get_surfaceVel") ) { return get_surfaceVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_surfaceVel") ) { return set_surfaceVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angularVel") ) { return get_angularVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angularVel") ) { return set_angularVel_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintMass") ) { if (inCallProp == hx::paccAlways) return get_constraintMass(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inertiaMode") ) { return get_inertiaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertiaMode") ) { return set_inertiaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"connectedBodies") ) { return connectedBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"translateShapes") ) { return translateShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"transformShapes") ) { return transformShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"setShapeFilters") ) { return setShapeFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"buoyancyImpulse") ) { return buoyancyImpulse_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_kinematicVel") ) { return get_kinematicVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_kinematicVel") ) { return set_kinematicVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMassMode") ) { return get_gravMassMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravMassMode") ) { return set_gravMassMode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_allowMovement") ) { return get_allowMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowMovement") ) { return set_allowMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"get_allowRotation") ) { return get_allowRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowRotation") ) { return set_allowRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMassScale") ) { return get_gravMassScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravMassScale") ) { return set_gravMassScale_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintInertia") ) { if (inCallProp == hx::paccAlways) return get_constraintInertia(); }
		if (HX_FIELD_EQ(inName,"interactingBodies") ) { return interactingBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"localPointToWorld") ) { return localPointToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"worldPointToLocal") ) { return worldPointToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"setShapeMaterials") ) { return setShapeMaterials_dyn(); }
		if (HX_FIELD_EQ(inName,"totalFluidImpulse") ) { return totalFluidImpulse_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"constraintVelocity") ) { if (inCallProp == hx::paccAlways) return get_constraintVelocity(); }
		if (HX_FIELD_EQ(inName,"get_constraintMass") ) { return get_constraintMass_dyn(); }
		if (HX_FIELD_EQ(inName,"localVectorToWorld") ) { return localVectorToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"worldVectorToLocal") ) { return worldVectorToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintsImpulse") ) { return constraintsImpulse_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyAngularImpulse") ) { return applyAngularImpulse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"totalContactsImpulse") ) { return totalContactsImpulse_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setVelocityFromTarget") ) { return setVelocityFromTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"get_constraintInertia") ) { return get_constraintInertia_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_constraintVelocity") ) { return get_constraintVelocity_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setShapeFluidProperties") ) { return setShapeFluidProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue); }
		if (HX_FIELD_EQ(inName,"mass") ) { if (inCallProp == hx::paccAlways) return set_mass(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return set_space(inValue); }
		if (HX_FIELD_EQ(inName,"force") ) { if (inCallProp == hx::paccAlways) return set_force(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"torque") ) { if (inCallProp == hx::paccAlways) return set_torque(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { if (inCallProp == hx::paccAlways) return set_inertia(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isBullet") ) { if (inCallProp == hx::paccAlways) return set_isBullet(inValue); }
		if (HX_FIELD_EQ(inName,"compound") ) { if (inCallProp == hx::paccAlways) return set_compound(inValue); }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"velocity") ) { if (inCallProp == hx::paccAlways) return set_velocity(inValue); }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"massMode") ) { if (inCallProp == hx::paccAlways) return set_massMode(inValue); }
		if (HX_FIELD_EQ(inName,"gravMass") ) { if (inCallProp == hx::paccAlways) return set_gravMass(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinAngVel") ) { if (inCallProp == hx::paccAlways) return set_kinAngVel(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disableCCD") ) { if (inCallProp == hx::paccAlways) return set_disableCCD(inValue); }
		if (HX_FIELD_EQ(inName,"surfaceVel") ) { if (inCallProp == hx::paccAlways) return set_surfaceVel(inValue); }
		if (HX_FIELD_EQ(inName,"angularVel") ) { if (inCallProp == hx::paccAlways) return set_angularVel(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { if (inCallProp == hx::paccAlways) return set_inertiaMode(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"kinematicVel") ) { if (inCallProp == hx::paccAlways) return set_kinematicVel(inValue); }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { if (inCallProp == hx::paccAlways) return set_gravMassMode(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMovement") ) { if (inCallProp == hx::paccAlways) return set_allowMovement(inValue); }
		if (HX_FIELD_EQ(inName,"allowRotation") ) { if (inCallProp == hx::paccAlways) return set_allowRotation(inValue); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { if (inCallProp == hx::paccAlways) return set_gravMassScale(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Body_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("isBullet","\xcc","\x2d","\xfa","\x2c"));
	outFields->push(HX_HCSTRING("disableCCD","\xbc","\xc8","\x9b","\xb6"));
	outFields->push(HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"));
	outFields->push(HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21"));
	outFields->push(HX_HCSTRING("isSleeping","\x35","\x6a","\x42","\x8b"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("kinematicVel","\x58","\xd2","\xc1","\x63"));
	outFields->push(HX_HCSTRING("surfaceVel","\x30","\x8e","\x1a","\xe0"));
	outFields->push(HX_HCSTRING("force","\xeb","\xb1","\x94","\x04"));
	outFields->push(HX_HCSTRING("constraintVelocity","\x9a","\xe3","\x2e","\xa1"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("angularVel","\x9b","\xe4","\x92","\xd8"));
	outFields->push(HX_HCSTRING("kinAngVel","\xd3","\x90","\x6d","\x16"));
	outFields->push(HX_HCSTRING("torque","\xca","\xb6","\x90","\x96"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("allowMovement","\xd8","\x16","\xf2","\xd0"));
	outFields->push(HX_HCSTRING("allowRotation","\xe7","\xce","\x40","\xd9"));
	outFields->push(HX_HCSTRING("massMode","\x77","\xca","\x75","\x81"));
	outFields->push(HX_HCSTRING("constraintMass","\xf1","\x5f","\x3f","\x70"));
	outFields->push(HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("gravMassMode","\x77","\x36","\xb6","\x49"));
	outFields->push(HX_HCSTRING("gravMass","\xf4","\xac","\xf0","\x74"));
	outFields->push(HX_HCSTRING("gravMassScale","\xf6","\x1c","\x30","\xa2"));
	outFields->push(HX_HCSTRING("inertiaMode","\x7d","\xb5","\x39","\x0d"));
	outFields->push(HX_HCSTRING("constraintInertia","\x1d","\x4e","\x13","\xe8"));
	outFields->push(HX_HCSTRING("inertia","\xfa","\xb0","\xba","\x7c"));
	outFields->push(HX_HCSTRING("localCOM","\x96","\xc7","\xdf","\xdf"));
	outFields->push(HX_HCSTRING("worldCOM","\x0f","\xc5","\x83","\xa4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(Body_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsBool,(int)offsetof(Body_obj,debugDraw),HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_isBullet","\xd5","\xe1","\x13","\xe2"),
	HX_HCSTRING("set_isBullet","\x49","\x05","\x0d","\xf7"),
	HX_HCSTRING("get_disableCCD","\x05","\x51","\x91","\x2c"),
	HX_HCSTRING("set_disableCCD","\x79","\x39","\xb1","\x4c"),
	HX_HCSTRING("integrate","\x71","\x6e","\x60","\xec"),
	HX_HCSTRING("isStatic","\x38","\x78","\x65","\x5e"),
	HX_HCSTRING("isDynamic","\xb5","\x1c","\x14","\x3a"),
	HX_HCSTRING("isKinematic","\xbb","\x2f","\x80","\xc2"),
	HX_HCSTRING("get_shapes","\xfb","\x49","\xb1","\x0d"),
	HX_HCSTRING("get_compound","\x74","\x77","\xe9","\x36"),
	HX_HCSTRING("set_compound","\xe8","\x9a","\xe2","\x4b"),
	HX_HCSTRING("get_space","\x1d","\xe9","\x0f","\xc5"),
	HX_HCSTRING("set_space","\x29","\xd5","\x60","\xa8"),
	HX_HCSTRING("get_arbiters","\x73","\xe0","\xcb","\xd6"),
	HX_HCSTRING("get_isSleeping","\x7e","\xf2","\x37","\x01"),
	HX_HCSTRING("get_constraints","\x0d","\x09","\x96","\xd8"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get_velocity","\x26","\xb6","\x17","\xd4"),
	HX_HCSTRING("set_velocity","\x9a","\xd9","\x10","\xe9"),
	HX_HCSTRING("setVelocityFromTarget","\x1a","\xf5","\x8b","\xd2"),
	HX_HCSTRING("get_kinematicVel","\xe1","\xbe","\x60","\x68"),
	HX_HCSTRING("set_kinematicVel","\x55","\xac","\xa2","\xbe"),
	HX_HCSTRING("get_surfaceVel","\x79","\x16","\x10","\x56"),
	HX_HCSTRING("set_surfaceVel","\xed","\xfe","\x2f","\x76"),
	HX_HCSTRING("get_force","\x42","\x0e","\x3e","\x48"),
	HX_HCSTRING("set_force","\x4e","\xfa","\x8e","\x2b"),
	HX_HCSTRING("get_constraintVelocity","\xe3","\x5c","\xc3","\xfa"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_angularVel","\xe4","\x6c","\x88","\x4e"),
	HX_HCSTRING("set_angularVel","\x58","\x55","\xa8","\x6e"),
	HX_HCSTRING("get_kinAngVel","\xaa","\x64","\xd1","\xd7"),
	HX_HCSTRING("set_kinAngVel","\xb6","\x46","\xd7","\x1c"),
	HX_HCSTRING("get_torque","\x93","\x26","\x18","\x87"),
	HX_HCSTRING("set_torque","\x07","\xc5","\x95","\x8a"),
	HX_HCSTRING("get_bounds","\x3e","\xf6","\xa4","\x56"),
	HX_HCSTRING("get_allowMovement","\x2f","\x22","\x62","\xd7"),
	HX_HCSTRING("set_allowMovement","\x3b","\xfa","\xcf","\xfa"),
	HX_HCSTRING("get_allowRotation","\x3e","\xda","\xb0","\xdf"),
	HX_HCSTRING("set_allowRotation","\x4a","\xb2","\x1e","\x03"),
	HX_HCSTRING("get_massMode","\x80","\x7e","\x8f","\x36"),
	HX_HCSTRING("set_massMode","\xf4","\xa1","\x88","\x4b"),
	HX_HCSTRING("get_constraintMass","\xba","\x40","\xd9","\x0b"),
	HX_HCSTRING("get_mass","\x7d","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mass","\xf1","\x55","\x6e","\x76"),
	HX_HCSTRING("get_gravMassMode","\x00","\x23","\x55","\x4e"),
	HX_HCSTRING("set_gravMassMode","\x74","\x10","\x97","\xa4"),
	HX_HCSTRING("get_gravMass","\xfd","\x60","\x0a","\x2a"),
	HX_HCSTRING("set_gravMass","\x71","\x84","\x03","\x3f"),
	HX_HCSTRING("get_gravMassScale","\x4d","\x28","\xa0","\xa8"),
	HX_HCSTRING("set_gravMassScale","\x59","\x00","\x0e","\xcc"),
	HX_HCSTRING("get_inertiaMode","\x14","\x6d","\x1b","\xce"),
	HX_HCSTRING("set_inertiaMode","\x20","\xea","\xe6","\xc9"),
	HX_HCSTRING("get_constraintInertia","\xf4","\x50","\xc1","\x66"),
	HX_HCSTRING("get_inertia","\x11","\x11","\xb5","\x02"),
	HX_HCSTRING("set_inertia","\x1d","\x18","\x22","\x0d"),
	HX_HCSTRING("connectedBodies","\x29","\x2f","\x18","\x68"),
	HX_HCSTRING("interactingBodies","\x8c","\xbf","\x60","\xf1"),
	HX_HCSTRING("crushFactor","\x2a","\x68","\x85","\x8e"),
	HX_HCSTRING("localPointToWorld","\x72","\x8a","\x8d","\xac"),
	HX_HCSTRING("worldPointToLocal","\xf2","\xc8","\xc0","\xe1"),
	HX_HCSTRING("localVectorToWorld","\xe9","\x07","\x47","\xd4"),
	HX_HCSTRING("worldVectorToLocal","\xbb","\x29","\x56","\x46"),
	HX_HCSTRING("applyImpulse","\xe7","\x9c","\x2a","\xad"),
	HX_HCSTRING("applyAngularImpulse","\x01","\xc8","\x65","\x34"),
	HX_HCSTRING("translateShapes","\x20","\x94","\xc3","\x76"),
	HX_HCSTRING("rotateShapes","\xed","\x4a","\x78","\xdb"),
	HX_HCSTRING("scaleShapes","\x5c","\xa0","\x2d","\x09"),
	HX_HCSTRING("transformShapes","\xbe","\x54","\x7f","\x58"),
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("setShapeMaterials","\xcd","\x4d","\x08","\xca"),
	HX_HCSTRING("setShapeFilters","\x5c","\xcf","\x63","\x8f"),
	HX_HCSTRING("setShapeFluidProperties","\x3e","\x41","\xe5","\x88"),
	HX_HCSTRING("get_localCOM","\x9f","\x7b","\xf9","\x94"),
	HX_HCSTRING("get_worldCOM","\x18","\x79","\x9d","\x59"),
	HX_HCSTRING("normalImpulse","\x4e","\xa9","\x46","\x07"),
	HX_HCSTRING("tangentImpulse","\x70","\x2e","\x3e","\x65"),
	HX_HCSTRING("totalContactsImpulse","\xbe","\x67","\xe6","\x6f"),
	HX_HCSTRING("rollingImpulse","\xb0","\xb5","\xdd","\xca"),
	HX_HCSTRING("buoyancyImpulse","\x75","\xa7","\x03","\x9f"),
	HX_HCSTRING("dragImpulse","\x21","\x73","\xde","\x23"),
	HX_HCSTRING("totalFluidImpulse","\xaf","\x09","\x40","\xb9"),
	HX_HCSTRING("constraintsImpulse","\xdf","\xe1","\x36","\x95"),
	HX_HCSTRING("totalImpulse","\x51","\xe5","\xbb","\x16"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

#endif

hx::Class Body_obj::__mClass;

void Body_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.phys.Body","\xd8","\x73","\x7a","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Body_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Body_obj >;
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
} // end namespace phys
