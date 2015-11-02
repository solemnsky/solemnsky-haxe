#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Body_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","new",0x86c808f4,"zpp_nape.phys.ZPP_Body.new","zpp_nape/phys/Body.hx",174,0x4bb115c1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1050)
	this->wrap_worldCOM = null();
	HX_STACK_LINE(1049)
	this->wrap_localCOM = null();
	HX_STACK_LINE(1048)
	this->zip_worldCOM = false;
	HX_STACK_LINE(1047)
	this->worldCOMy = ((Float)0.0);
	HX_STACK_LINE(1046)
	this->worldCOMx = ((Float)0.0);
	HX_STACK_LINE(1045)
	this->zip_localCOM = false;
	HX_STACK_LINE(1044)
	this->localCOMy = ((Float)0.0);
	HX_STACK_LINE(1043)
	this->localCOMx = ((Float)0.0);
	HX_STACK_LINE(977)
	this->zip_aabb = false;
	HX_STACK_LINE(976)
	this->aabb = null();
	HX_STACK_LINE(936)
	this->norotate = false;
	HX_STACK_LINE(935)
	this->sinertia = ((Float)0.0);
	HX_STACK_LINE(934)
	this->iinertia = ((Float)0.0);
	HX_STACK_LINE(933)
	this->cinertia = ((Float)0.0);
	HX_STACK_LINE(932)
	this->zip_inertia = false;
	HX_STACK_LINE(931)
	this->inertia = ((Float)0.0);
	HX_STACK_LINE(930)
	this->inertiaMode = (int)0;
	HX_STACK_LINE(896)
	this->zip_gravMassScale = false;
	HX_STACK_LINE(895)
	this->gravMassScale = ((Float)0.0);
	HX_STACK_LINE(894)
	this->gravMassMode = (int)0;
	HX_STACK_LINE(893)
	this->zip_gravMass = false;
	HX_STACK_LINE(892)
	this->gravMass = ((Float)0.0);
	HX_STACK_LINE(857)
	this->nomove = false;
	HX_STACK_LINE(856)
	this->cmass = ((Float)0.0);
	HX_STACK_LINE(855)
	this->smass = ((Float)0.0);
	HX_STACK_LINE(854)
	this->imass = ((Float)0.0);
	HX_STACK_LINE(853)
	this->massMode = (int)0;
	HX_STACK_LINE(852)
	this->zip_mass = false;
	HX_STACK_LINE(851)
	this->mass = ((Float)0.0);
	HX_STACK_LINE(804)
	this->zip_axis = false;
	HX_STACK_LINE(803)
	this->axisy = ((Float)0.0);
	HX_STACK_LINE(802)
	this->axisx = ((Float)0.0);
	HX_STACK_LINE(781)
	this->rot = ((Float)0.0);
	HX_STACK_LINE(780)
	this->pre_rot = ((Float)0.0);
	HX_STACK_LINE(779)
	this->kinangvel = ((Float)0.0);
	HX_STACK_LINE(778)
	this->torque = ((Float)0.0);
	HX_STACK_LINE(777)
	this->angvel = ((Float)0.0);
	HX_STACK_LINE(770)
	this->wrapcvel = null();
	HX_STACK_LINE(464)
	this->wrap_svel = null();
	HX_STACK_LINE(463)
	this->svely = ((Float)0.0);
	HX_STACK_LINE(462)
	this->svelx = ((Float)0.0);
	HX_STACK_LINE(461)
	this->wrap_kinvel = null();
	HX_STACK_LINE(460)
	this->kinvely = ((Float)0.0);
	HX_STACK_LINE(459)
	this->kinvelx = ((Float)0.0);
	HX_STACK_LINE(458)
	this->wrap_force = null();
	HX_STACK_LINE(457)
	this->forcey = ((Float)0.0);
	HX_STACK_LINE(456)
	this->forcex = ((Float)0.0);
	HX_STACK_LINE(455)
	this->wrap_vel = null();
	HX_STACK_LINE(454)
	this->vely = ((Float)0.0);
	HX_STACK_LINE(453)
	this->velx = ((Float)0.0);
	HX_STACK_LINE(452)
	this->wrap_pos = null();
	HX_STACK_LINE(451)
	this->posy = ((Float)0.0);
	HX_STACK_LINE(450)
	this->posx = ((Float)0.0);
	HX_STACK_LINE(449)
	this->pre_posy = ((Float)0.0);
	HX_STACK_LINE(448)
	this->pre_posx = ((Float)0.0);
	HX_STACK_LINE(346)
	this->disableCCD = false;
	HX_STACK_LINE(345)
	this->bulletEnabled = false;
	HX_STACK_LINE(344)
	this->bullet = false;
	HX_STACK_LINE(343)
	this->sweepRadius = ((Float)0.0);
	HX_STACK_LINE(342)
	this->sweepFrozen = false;
	HX_STACK_LINE(341)
	this->sweep_angvel = ((Float)0.0);
	HX_STACK_LINE(340)
	this->sweepTime = ((Float)0.0);
	HX_STACK_LINE(218)
	this->graph_depth = (int)0;
	HX_STACK_LINE(212)
	this->component = null();
	HX_STACK_LINE(211)
	this->wrap_constraints = null();
	HX_STACK_LINE(210)
	this->constraints = null();
	HX_STACK_LINE(209)
	this->wrap_arbiters = null();
	HX_STACK_LINE(208)
	this->arbiters = null();
	HX_STACK_LINE(207)
	this->space = null();
	HX_STACK_LINE(200)
	this->wrap_shapes = null();
	HX_STACK_LINE(199)
	this->shapes = null();
	HX_STACK_LINE(198)
	this->compound = null();
	HX_STACK_LINE(177)
	this->type = (int)0;
	HX_STACK_LINE(176)
	this->world = false;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(1421)
	super::__construct();
	HX_STACK_LINE(1422)
	this->ibody = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(1423)
	this->world = false;
	HX_STACK_LINE(1424)
	this->bulletEnabled = false;
	HX_STACK_LINE(1425)
	this->sweepTime = (int)0;
	HX_STACK_LINE(1426)
	this->sweep_angvel = (int)0;
	HX_STACK_LINE(1427)
	bool tmp = this->nomove = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1427)
	this->norotate = tmp;
	HX_STACK_LINE(1428)
	this->disableCCD = false;
	HX_STACK_LINE(1429)
	{
		HX_STACK_LINE(1430)
		this->posx = (int)0;
		HX_STACK_LINE(1431)
		this->posy = (int)0;
		HX_STACK_LINE(1440)
		{
		}
	}
	HX_STACK_LINE(1449)
	this->rot = (int)0;
	HX_STACK_LINE(1450)
	{
		HX_STACK_LINE(1451)
		this->axisx = (int)0;
		HX_STACK_LINE(1452)
		this->axisy = (int)1;
		HX_STACK_LINE(1461)
		{
		}
	}
	HX_STACK_LINE(1470)
	{
		HX_STACK_LINE(1471)
		this->svelx = (int)0;
		HX_STACK_LINE(1472)
		this->svely = (int)0;
		HX_STACK_LINE(1481)
		{
		}
	}
	HX_STACK_LINE(1490)
	{
		HX_STACK_LINE(1491)
		this->velx = (int)0;
		HX_STACK_LINE(1492)
		this->vely = (int)0;
		HX_STACK_LINE(1501)
		{
		}
	}
	HX_STACK_LINE(1510)
	{
		HX_STACK_LINE(1511)
		this->kinvelx = (int)0;
		HX_STACK_LINE(1512)
		this->kinvely = (int)0;
		HX_STACK_LINE(1521)
		{
		}
	}
	HX_STACK_LINE(1530)
	{
		HX_STACK_LINE(1531)
		this->forcex = (int)0;
		HX_STACK_LINE(1532)
		this->forcey = (int)0;
		HX_STACK_LINE(1541)
		{
		}
	}
	HX_STACK_LINE(1550)
	Float tmp1 = this->kinangvel = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1550)
	Float tmp2 = this->angvel = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1550)
	this->torque = tmp2;
	HX_STACK_LINE(1551)
	{
		HX_STACK_LINE(1552)
		Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1552)
		this->pre_posx = tmp3;
		HX_STACK_LINE(1553)
		Float tmp4 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1553)
		this->pre_posy = tmp4;
		HX_STACK_LINE(1562)
		{
		}
	}
	HX_STACK_LINE(1571)
	Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1571)
	this->pre_rot = tmp3;
	HX_STACK_LINE(1572)
	{
		HX_STACK_LINE(1573)
		this->localCOMx = (int)0;
		HX_STACK_LINE(1574)
		this->localCOMy = (int)0;
		HX_STACK_LINE(1583)
		{
		}
	}
	HX_STACK_LINE(1592)
	{
		HX_STACK_LINE(1593)
		this->worldCOMx = (int)0;
		HX_STACK_LINE(1594)
		this->worldCOMy = (int)0;
		HX_STACK_LINE(1603)
		{
		}
	}
	HX_STACK_LINE(1612)
	this->zip_aabb = true;
	HX_STACK_LINE(1613)
	::zpp_nape::geom::ZPP_AABB tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1613)
	{
		HX_STACK_LINE(1613)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1613)
		{
			HX_STACK_LINE(1613)
			::zpp_nape::geom::ZPP_AABB tmp5 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1613)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1613)
			if ((tmp6)){
				HX_STACK_LINE(1613)
				::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1613)
				ret = tmp7;
			}
			else{
				HX_STACK_LINE(1613)
				::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1613)
				ret = tmp7;
				HX_STACK_LINE(1613)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1613)
				ret->next = null();
			}
			HX_STACK_LINE(1613)
			Dynamic();
		}
		HX_STACK_LINE(1613)
		{
			HX_STACK_LINE(1613)
			ret->minx = (int)0;
			HX_STACK_LINE(1613)
			ret->miny = (int)0;
			HX_STACK_LINE(1613)
			{
			}
		}
		HX_STACK_LINE(1613)
		{
			HX_STACK_LINE(1613)
			ret->maxx = (int)0;
			HX_STACK_LINE(1613)
			ret->maxy = (int)0;
			HX_STACK_LINE(1613)
			{
			}
		}
		HX_STACK_LINE(1613)
		tmp4 = ret;
	}
	HX_STACK_LINE(1613)
	this->aabb = tmp4;
	HX_STACK_LINE(1614)
	::zpp_nape::geom::ZPP_AABB tmp5 = this->aabb;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1614)
	tmp5->_immutable = true;
	HX_STACK_LINE(1615)
	::zpp_nape::phys::ZPP_Body me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(1616)
	Dynamic tmp6 = this->aabb_validate_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1616)
	::zpp_nape::geom::ZPP_AABB tmp7 = this->aabb;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1616)
	tmp7->_validate = tmp6;
	HX_STACK_LINE(1617)
	int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1617)
	this->massMode = tmp8;
	HX_STACK_LINE(1618)
	int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1618)
	this->gravMassMode = tmp9;
	HX_STACK_LINE(1619)
	this->gravMassScale = ((Float)1.0);
	HX_STACK_LINE(1620)
	int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1620)
	this->inertiaMode = tmp10;
	HX_STACK_LINE(1621)
	::zpp_nape::util::ZNPList_ZPP_Arbiter tmp11 = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1621)
	this->arbiters = tmp11;
	HX_STACK_LINE(1622)
	::zpp_nape::util::ZNPList_ZPP_Constraint tmp12 = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1622)
	this->constraints = tmp12;
	HX_STACK_LINE(1623)
	::zpp_nape::util::ZNPList_ZPP_Shape tmp13 = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1623)
	this->shapes = tmp13;
	HX_STACK_LINE(1624)
	::zpp_nape::util::ZNPList_ZPP_Shape tmp14 = this->shapes;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1624)
	::nape::shape::ShapeList tmp15 = ::zpp_nape::util::ZPP_ShapeList_obj::get(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1624)
	this->wrap_shapes = tmp15;
	HX_STACK_LINE(1625)
	Dynamic tmp16 = this->shapes_adder_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1625)
	::nape::shape::ShapeList tmp17 = this->wrap_shapes;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1625)
	tmp17->zpp_inner->adder = tmp16;
	HX_STACK_LINE(1626)
	Dynamic tmp18 = this->shapes_subber_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1626)
	::nape::shape::ShapeList tmp19 = this->wrap_shapes;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1626)
	tmp19->zpp_inner->subber = tmp18;
	HX_STACK_LINE(1627)
	Dynamic tmp20 = this->shapes_invalidate_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1627)
	::nape::shape::ShapeList tmp21 = this->wrap_shapes;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1627)
	tmp21->zpp_inner->_invalidate = tmp20;
	HX_STACK_LINE(1629)
	Dynamic tmp22 = this->shapes_modifiable_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1629)
	::nape::shape::ShapeList tmp23 = this->wrap_shapes;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1629)
	tmp23->zpp_inner->_modifiable = tmp22;
	HX_STACK_LINE(1631)
	this->kinematicDelaySleep = false;
}
;
	return null();
}

//ZPP_Body_obj::~ZPP_Body_obj() { }

Dynamic ZPP_Body_obj::__CreateEmpty() { return  new ZPP_Body_obj; }
hx::ObjectPtr< ZPP_Body_obj > ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZPP_Body_obj > _result_ = new ZPP_Body_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Body_obj > _result_ = new ZPP_Body_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_Body_obj::isStatic( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","isStatic",0x1c77a724,"zpp_nape.phys.ZPP_Body.isStatic","zpp_nape/phys/Body.hx",180,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isStatic,return )

bool ZPP_Body_obj::isDynamic( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","isDynamic",0xcbeafc49,"zpp_nape.phys.ZPP_Body.isDynamic","zpp_nape/phys/Body.hx",185,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isDynamic,return )

bool ZPP_Body_obj::isKinematic( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","isKinematic",0x9f7d1c4f,"zpp_nape.phys.ZPP_Body.isKinematic","zpp_nape/phys/Body.hx",190,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isKinematic,return )

Void ZPP_Body_obj::invalidate_type( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_type",0x2dcb7dd2,"zpp_nape.phys.ZPP_Body.invalidate_type","zpp_nape/phys/Body.hx",194,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(195)
		this->invalidate_mass();
		HX_STACK_LINE(196)
		this->invalidate_inertia();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_type,(void))

Void ZPP_Body_obj::invalidate_shapes( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_shapes",0x9bf75b4a,"zpp_nape.phys.ZPP_Body.invalidate_shapes","zpp_nape/phys/Body.hx",201,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		this->zip_aabb = true;
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			this->zip_localCOM = true;
			HX_STACK_LINE(203)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(204)
		this->invalidate_mass();
		HX_STACK_LINE(205)
		this->invalidate_inertia();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_shapes,(void))

Void ZPP_Body_obj::init_bodysetlist( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","init_bodysetlist",0xcfa86a9b,"zpp_nape.phys.ZPP_Body.init_bodysetlist","zpp_nape/phys/Body.hx",220,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		if ((tmp1)){
			HX_STACK_LINE(222)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = tmp2;
			HX_STACK_LINE(223)
			Dynamic tmp3 = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			tmp4->lt = tmp3;
			HX_STACK_LINE(224)
			::zpp_nape::util::ZNPList_ZPP_Body tmp5 = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = tmp5;
		}
		HX_STACK_LINE(234)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,init_bodysetlist,(void))

Void ZPP_Body_obj::connectedBodies_cont( ::nape::phys::Body b){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","connectedBodies_cont",0xd567f2f4,"zpp_nape.phys.ZPP_Body.connectedBodies_cont","zpp_nape/phys/Body.hx",244,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		::zpp_nape::phys::ZPP_Body tmp1 = b->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		bool tmp2 = tmp->try_insert_bool(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		if ((tmp2)){
			HX_STACK_LINE(246)
			::zpp_nape::util::ZNPList_ZPP_Body tmp3 = ::zpp_nape::phys::ZPP_Body_obj::bodystack;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			::zpp_nape::phys::ZPP_Body tmp4 = b->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			tmp3->add(tmp4);
			HX_STACK_LINE(247)
			int tmp5 = ::zpp_nape::phys::ZPP_Body_obj::cur_graph_depth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			b->zpp_inner->graph_depth = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,connectedBodies_cont,(void))

::nape::phys::BodyList ZPP_Body_obj::connectedBodies( int depth,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","connectedBodies",0x3b48f5bd,"zpp_nape.phys.ZPP_Body.connectedBodies","zpp_nape/phys/Body.hx",250,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(250)
	::zpp_nape::phys::ZPP_Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		if ((tmp1)){
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = tmp2;
			HX_STACK_LINE(251)
			Dynamic tmp3 = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			tmp4->lt = tmp3;
			HX_STACK_LINE(251)
			::zpp_nape::util::ZNPList_ZPP_Body tmp5 = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = tmp5;
		}
		HX_STACK_LINE(251)
		Dynamic();
	}
	HX_STACK_LINE(252)
	bool tmp = (output == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	::nape::phys::BodyList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	if ((tmp)){
		HX_STACK_LINE(252)
		tmp1 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(252)
		tmp1 = output;
	}
	HX_STACK_LINE(252)
	::nape::phys::BodyList ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(253)
	::zpp_nape::util::ZNPList_ZPP_Body tmp2 = ::zpp_nape::phys::ZPP_Body_obj::bodystack;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	tmp2->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(254)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp3 = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	tmp3->insert(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(255)
	this->graph_depth = (int)0;
	HX_STACK_LINE(256)
	while((true)){
		HX_STACK_LINE(256)
		::zpp_nape::util::ZNPList_ZPP_Body tmp4 = ::zpp_nape::phys::ZPP_Body_obj::bodystack;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(256)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = tmp4->head;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(256)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(256)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(256)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(256)
		if ((tmp8)){
			HX_STACK_LINE(256)
			break;
		}
		HX_STACK_LINE(257)
		::zpp_nape::util::ZNPList_ZPP_Body tmp9 = ::zpp_nape::phys::ZPP_Body_obj::bodystack;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(257)
		::zpp_nape::phys::ZPP_Body tmp10 = tmp9->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(257)
		::zpp_nape::phys::ZPP_Body cur = tmp10;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(258)
		bool tmp11 = (cur->graph_depth == depth);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(258)
		if ((tmp11)){
			HX_STACK_LINE(258)
			continue;
		}
		HX_STACK_LINE(259)
		::zpp_nape::phys::ZPP_Body_obj::cur_graph_depth = cur->graph_depth;
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp12 = cur->constraints->head;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(262)
			while((true)){
				HX_STACK_LINE(262)
				bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(262)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(262)
				if ((tmp14)){
					HX_STACK_LINE(262)
					break;
				}
				HX_STACK_LINE(263)
				::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(264)
				Dynamic tmp15 = this->connectedBodies_cont_dyn();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(264)
				c->outer->visitBodies(tmp15);
				HX_STACK_LINE(265)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(269)
	{
		HX_STACK_LINE(269)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		::zpp_nape::util::ZPP_Set_ZPP_Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(269)
		bool tmp5 = (_this->parent == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(269)
		if ((tmp5)){
			HX_STACK_LINE(269)
			Dynamic();
		}
		else{
			HX_STACK_LINE(269)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = _this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(269)
			while((true)){
				HX_STACK_LINE(269)
				bool tmp6 = (cur != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(269)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(269)
				if ((tmp7)){
					HX_STACK_LINE(269)
					break;
				}
				HX_STACK_LINE(269)
				bool tmp8 = (cur->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(269)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(269)
				if ((tmp8)){
					HX_STACK_LINE(269)
					tmp9 = cur->prev;
				}
				else{
					HX_STACK_LINE(269)
					bool tmp10 = (cur->next != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(269)
					if ((tmp10)){
						HX_STACK_LINE(269)
						tmp9 = cur->next;
					}
					else{
						HX_STACK_LINE(269)
						::zpp_nape::phys::ZPP_Body tmp11 = cur->data;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(270)
						{
							HX_STACK_LINE(270)
							bool tmp12 = (tmp11 != _g);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(270)
							if ((tmp12)){
								HX_STACK_LINE(270)
								::nape::phys::Body obj = tmp11->outer;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(270)
								bool tmp13 = ret->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(270)
								if ((tmp13)){
									HX_STACK_LINE(270)
									::nape::phys::Body tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(270)
									ret->push(tmp14);
								}
								else{
									HX_STACK_LINE(270)
									::nape::phys::Body tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(270)
									ret->unshift(tmp14);
								}
							}
						}
						HX_STACK_LINE(269)
						::zpp_nape::util::ZPP_Set_ZPP_Body ret1 = cur->parent;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(269)
						bool tmp12 = (ret1 != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(269)
						if ((tmp12)){
							HX_STACK_LINE(269)
							bool tmp13 = (cur == ret1->prev);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(269)
							if ((tmp13)){
								HX_STACK_LINE(269)
								ret1->prev = null();
							}
							else{
								HX_STACK_LINE(269)
								ret1->next = null();
							}
							HX_STACK_LINE(269)
							cur->parent = null();
						}
						HX_STACK_LINE(269)
						{
							HX_STACK_LINE(269)
							::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(269)
							{
								HX_STACK_LINE(269)
								o->data = null();
								HX_STACK_LINE(269)
								o->lt = null();
								HX_STACK_LINE(269)
								o->swapped = null();
							}
							HX_STACK_LINE(269)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp13 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(269)
							o->next = tmp13;
							HX_STACK_LINE(269)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(269)
						tmp9 = ret1;
					}
				}
				HX_STACK_LINE(269)
				cur = tmp9;
			}
			HX_STACK_LINE(269)
			_this->parent = null();
		}
	}
	HX_STACK_LINE(272)
	::nape::phys::BodyList tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(272)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Body_obj,connectedBodies,return )

::nape::phys::BodyList ZPP_Body_obj::interactingBodies( int arbiter_type,int depth,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","interactingBodies",0x873f5320,"zpp_nape.phys.ZPP_Body.interactingBodies","zpp_nape/phys/Body.hx",274,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(arbiter_type,"arbiter_type")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(274)
	::zpp_nape::phys::ZPP_Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(275)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = tmp2;
			HX_STACK_LINE(275)
			Dynamic tmp3 = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			tmp4->lt = tmp3;
			HX_STACK_LINE(275)
			::zpp_nape::util::ZNPList_ZPP_Body tmp5 = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = tmp5;
		}
		HX_STACK_LINE(275)
		Dynamic();
	}
	HX_STACK_LINE(276)
	bool tmp = (output == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	::nape::phys::BodyList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	if ((tmp)){
		HX_STACK_LINE(276)
		tmp1 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(276)
		tmp1 = output;
	}
	HX_STACK_LINE(276)
	::nape::phys::BodyList ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(277)
	::zpp_nape::util::ZPP_Set_ZPP_Body tmp2 = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	tmp2->insert(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(278)
	::zpp_nape::util::ZNPList_ZPP_Body tmp3 = ::zpp_nape::phys::ZPP_Body_obj::bodystack;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	tmp3->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(279)
	this->graph_depth = (int)0;
	HX_STACK_LINE(280)
	while((true)){
		HX_STACK_LINE(280)
		::zpp_nape::util::ZNPList_ZPP_Body tmp4 = ::zpp_nape::phys::ZPP_Body_obj::bodystack;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(280)
		::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = tmp4->head;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(280)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(280)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		if ((tmp8)){
			HX_STACK_LINE(280)
			break;
		}
		HX_STACK_LINE(281)
		::zpp_nape::util::ZNPList_ZPP_Body tmp9 = ::zpp_nape::phys::ZPP_Body_obj::bodystack;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(281)
		::zpp_nape::phys::ZPP_Body tmp10 = tmp9->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(281)
		::zpp_nape::phys::ZPP_Body cur = tmp10;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(282)
		bool tmp11 = (cur->graph_depth == depth);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(282)
		if ((tmp11)){
			HX_STACK_LINE(282)
			continue;
		}
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(284)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp12 = cur->arbiters->head;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(284)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(285)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(285)
				if ((tmp14)){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(286)
				::zpp_nape::dynamics::ZPP_Arbiter arb = cx_ite->elt;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(288)
					int tmp15 = (int(arb->type) & int(arbiter_type));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(288)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(288)
					if ((tmp16)){
						HX_STACK_LINE(289)
						bool tmp17 = (arb->b1 == cur);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(289)
						::zpp_nape::phys::ZPP_Body tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(289)
						if ((tmp17)){
							HX_STACK_LINE(289)
							tmp18 = arb->b2;
						}
						else{
							HX_STACK_LINE(289)
							tmp18 = arb->b1;
						}
						HX_STACK_LINE(289)
						::zpp_nape::phys::ZPP_Body other = tmp18;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(290)
						::zpp_nape::util::ZPP_Set_ZPP_Body tmp19 = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(290)
						::zpp_nape::phys::ZPP_Body tmp20 = other;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(290)
						bool tmp21 = tmp19->try_insert_bool(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(290)
						if ((tmp21)){
							HX_STACK_LINE(291)
							::zpp_nape::util::ZNPList_ZPP_Body tmp22 = ::zpp_nape::phys::ZPP_Body_obj::bodystack;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(291)
							::zpp_nape::phys::ZPP_Body tmp23 = other;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(291)
							tmp22->add(tmp23);
							HX_STACK_LINE(292)
							int tmp24 = (cur->graph_depth + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(292)
							other->graph_depth = tmp24;
						}
					}
				}
				HX_STACK_LINE(296)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(300)
		::zpp_nape::util::ZPP_Set_ZPP_Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(300)
		bool tmp5 = (_this->parent == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(300)
		if ((tmp5)){
			HX_STACK_LINE(300)
			Dynamic();
		}
		else{
			HX_STACK_LINE(300)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = _this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(300)
			while((true)){
				HX_STACK_LINE(300)
				bool tmp6 = (cur != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(300)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(300)
				if ((tmp7)){
					HX_STACK_LINE(300)
					break;
				}
				HX_STACK_LINE(300)
				bool tmp8 = (cur->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(300)
				::zpp_nape::util::ZPP_Set_ZPP_Body tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(300)
				if ((tmp8)){
					HX_STACK_LINE(300)
					tmp9 = cur->prev;
				}
				else{
					HX_STACK_LINE(300)
					bool tmp10 = (cur->next != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(300)
					if ((tmp10)){
						HX_STACK_LINE(300)
						tmp9 = cur->next;
					}
					else{
						HX_STACK_LINE(300)
						::zpp_nape::phys::ZPP_Body tmp11 = cur->data;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							bool tmp12 = (tmp11 != _g);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(301)
							if ((tmp12)){
								HX_STACK_LINE(301)
								::nape::phys::Body obj = tmp11->outer;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(301)
								bool tmp13 = ret->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(301)
								if ((tmp13)){
									HX_STACK_LINE(301)
									::nape::phys::Body tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(301)
									ret->push(tmp14);
								}
								else{
									HX_STACK_LINE(301)
									::nape::phys::Body tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(301)
									ret->unshift(tmp14);
								}
							}
						}
						HX_STACK_LINE(300)
						::zpp_nape::util::ZPP_Set_ZPP_Body ret1 = cur->parent;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(300)
						bool tmp12 = (ret1 != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(300)
						if ((tmp12)){
							HX_STACK_LINE(300)
							bool tmp13 = (cur == ret1->prev);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(300)
							if ((tmp13)){
								HX_STACK_LINE(300)
								ret1->prev = null();
							}
							else{
								HX_STACK_LINE(300)
								ret1->next = null();
							}
							HX_STACK_LINE(300)
							cur->parent = null();
						}
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								o->data = null();
								HX_STACK_LINE(300)
								o->lt = null();
								HX_STACK_LINE(300)
								o->swapped = null();
							}
							HX_STACK_LINE(300)
							::zpp_nape::util::ZPP_Set_ZPP_Body tmp13 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(300)
							o->next = tmp13;
							HX_STACK_LINE(300)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(300)
						tmp9 = ret1;
					}
				}
				HX_STACK_LINE(300)
				cur = tmp9;
			}
			HX_STACK_LINE(300)
			_this->parent = null();
		}
	}
	HX_STACK_LINE(303)
	::nape::phys::BodyList tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(303)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Body_obj,interactingBodies,return )

bool ZPP_Body_obj::atRest( Float dt){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","atRest",0x296c2d93,"zpp_nape.phys.ZPP_Body.atRest","zpp_nape/phys/Body.hx",305,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(306)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	if ((tmp3)){
		HX_STACK_LINE(306)
		::zpp_nape::space::ZPP_Component tmp4 = this->component;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		bool tmp5 = tmp4->sleeping;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		return tmp5;
	}
	else{
		HX_STACK_LINE(308)
		Float tmp4 = ::nape::Config_obj::linearSleepThreshold;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(308)
		Float linSq = tmp4;		HX_STACK_VAR(linSq,"linSq");
		HX_STACK_LINE(309)
		hx::MultEq(linSq,linSq);
		HX_STACK_LINE(310)
		Float tmp5 = this->velx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		Float tmp6 = this->velx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(310)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		Float tmp8 = this->vely;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(310)
		Float tmp9 = this->vely;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(310)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(310)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(310)
		Float tmp12 = linSq;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(310)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(310)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(310)
		if ((tmp13)){
			HX_STACK_LINE(310)
			tmp14 = false;
		}
		else{
			HX_STACK_LINE(311)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(311)
				Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					Float tmp16 = this->posx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(311)
					Float tmp17 = this->pre_posx;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(311)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(311)
					dx = tmp18;
					HX_STACK_LINE(311)
					Float tmp19 = this->posy;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(311)
					Float tmp20 = this->pre_posy;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(311)
					Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(311)
					dy = tmp21;
				}
				HX_STACK_LINE(311)
				Float tmp16 = (dx * dx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(311)
				Float tmp17 = (dy * dy);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(311)
				tmp15 = (tmp16 + tmp17);
			}
			HX_STACK_LINE(311)
			Float tmp16 = (((Float)0.25) * linSq);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(311)
			Float tmp17 = dt;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(311)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(311)
			Float tmp19 = dt;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(311)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(311)
			bool tmp21 = (tmp15 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(311)
			if ((tmp21)){
				HX_STACK_LINE(311)
				tmp14 = false;
			}
			else{
				HX_STACK_LINE(312)
				Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(313)
				Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_AABB tmp22 = this->aabb;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(315)
					Float tmp23 = tmp22->maxx;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_AABB tmp24 = this->aabb;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(315)
					Float tmp25 = tmp24->minx;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(315)
					Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(315)
					dx = tmp26;
					HX_STACK_LINE(316)
					::zpp_nape::geom::ZPP_AABB tmp27 = this->aabb;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(316)
					Float tmp28 = tmp27->maxy;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(316)
					::zpp_nape::geom::ZPP_AABB tmp29 = this->aabb;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(316)
					Float tmp30 = tmp29->miny;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(316)
					Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(316)
					dy = tmp31;
				}
				HX_STACK_LINE(318)
				Float tmp22 = (dx * dx);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(318)
				Float tmp23 = (dy * dy);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(318)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(318)
				Float idl = tmp24;		HX_STACK_VAR(idl,"idl");
				HX_STACK_LINE(319)
				Float tmp25 = ::nape::Config_obj::angularSleepThreshold;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(319)
				Float angSq = tmp25;		HX_STACK_VAR(angSq,"angSq");
				HX_STACK_LINE(320)
				hx::MultEq(angSq,angSq);
				HX_STACK_LINE(321)
				Float tmp26 = this->angvel;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(321)
				Float tmp27 = ((int)4 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(321)
				Float tmp28 = this->angvel;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(321)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(321)
				Float tmp30 = idl;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(321)
				Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(321)
				Float tmp32 = angSq;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(321)
				bool tmp33 = (tmp31 > tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(321)
				if ((tmp33)){
					HX_STACK_LINE(321)
					tmp14 = false;
				}
				else{
					HX_STACK_LINE(322)
					Float tmp34 = this->rot;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(322)
					Float tmp35 = this->pre_rot;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(322)
					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(322)
					Float dr = tmp36;		HX_STACK_VAR(dr,"dr");
					HX_STACK_LINE(323)
					Float tmp37 = (dr * dr);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(323)
					Float tmp38 = idl;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(323)
					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(323)
					Float tmp40 = (angSq * dt);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(323)
					Float tmp41 = dt;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(323)
					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(323)
					bool tmp43 = (tmp39 > tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(323)
					if ((tmp43)){
						HX_STACK_LINE(323)
						tmp14 = false;
					}
					else{
						HX_STACK_LINE(323)
						tmp14 = true;
					}
				}
			}
		}
		HX_STACK_LINE(310)
		bool cansleep = tmp14;		HX_STACK_VAR(cansleep,"cansleep");
		HX_STACK_LINE(326)
		bool tmp15 = cansleep;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(326)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(326)
		if ((tmp16)){
			HX_STACK_LINE(326)
			::zpp_nape::space::ZPP_Space tmp17 = this->space;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(326)
			::zpp_nape::space::ZPP_Component tmp18 = this->component;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(326)
			tmp18->waket = tmp17->stamp;
		}
		HX_STACK_LINE(327)
		::zpp_nape::space::ZPP_Component tmp17 = this->component;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(327)
		int tmp18 = tmp17->waket;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(327)
		int tmp19 = ::nape::Config_obj::sleepDelay;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(327)
		int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(327)
		::zpp_nape::space::ZPP_Space tmp21 = this->space;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(327)
		int tmp22 = tmp21->stamp;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(327)
		bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(327)
		return tmp23;
	}
	HX_STACK_LINE(306)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,atRest,return )

Void ZPP_Body_obj::refreshArbiters( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","refreshArbiters",0xf23b5bf9,"zpp_nape.phys.ZPP_Body.refreshArbiters","zpp_nape/phys/Body.hx",331,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = this->arbiters;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(333)
		while((true)){
			HX_STACK_LINE(333)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(333)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(333)
			if ((tmp2)){
				HX_STACK_LINE(333)
				break;
			}
			HX_STACK_LINE(334)
			::zpp_nape::dynamics::ZPP_Arbiter arb = cx_ite->elt;		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(335)
			arb->invalidated = true;
			HX_STACK_LINE(336)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,refreshArbiters,(void))

Void ZPP_Body_obj::sweepIntegrate( Float dt){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","sweepIntegrate",0x201742d1,"zpp_nape.phys.ZPP_Body.sweepIntegrate","zpp_nape/phys/Body.hx",349,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(350)
		Float tmp = dt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		Float tmp1 = this->sweepTime;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		Float delta = tmp2;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(351)
		bool tmp3 = (delta != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(351)
		if ((tmp3)){
			HX_STACK_LINE(360)
			this->sweepTime = dt;
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(362)
				Float t = delta;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(371)
				Float tmp4 = this->velx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(371)
				Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(371)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(371)
				hx::AddEq(this->posx,tmp6);
				HX_STACK_LINE(372)
				Float tmp7 = this->vely;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(372)
				Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(372)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(372)
				hx::AddEq(this->posy,tmp9);
			}
			HX_STACK_LINE(374)
			Float tmp4 = this->angvel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(374)
			bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(374)
			if ((tmp5)){
				HX_STACK_LINE(374)
				Float tmp6 = this->sweep_angvel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(374)
				Float tmp7 = delta;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(374)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(374)
				Float dr = tmp8;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(374)
				hx::AddEq(this->rot,dr);
				HX_STACK_LINE(374)
				Float tmp9 = (dr * dr);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(374)
				bool tmp10 = (tmp9 > ((Float)0.0001));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(374)
				if ((tmp10)){
					HX_STACK_LINE(374)
					Float tmp11 = this->rot;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(374)
					Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(374)
					this->axisx = tmp12;
					HX_STACK_LINE(374)
					Float tmp13 = this->rot;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(374)
					Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					this->axisy = tmp14;
					HX_STACK_LINE(374)
					Dynamic();
				}
				else{
					HX_STACK_LINE(374)
					Float tmp11 = (dr * dr);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(374)
					Float d2 = tmp11;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(374)
					Float tmp12 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(374)
					Float tmp13 = ((int)1 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(374)
					Float p = tmp13;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(374)
					Float tmp14 = (d2 * d2);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					Float tmp15 = (Float(tmp14) / Float((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(374)
					Float tmp16 = ((int)1 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(374)
					Float m = tmp16;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(374)
					Float tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(374)
					Float tmp18 = this->axisx;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(374)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(374)
					Float tmp20 = dr;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(374)
					Float tmp21 = this->axisy;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(374)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(374)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(374)
					Float tmp24 = m;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(374)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(374)
					Float nx = tmp25;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(374)
					Float tmp26 = p;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(374)
					Float tmp27 = this->axisy;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(374)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(374)
					Float tmp29 = dr;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(374)
					Float tmp30 = this->axisx;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(374)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(374)
					Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(374)
					Float tmp33 = m;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(374)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(374)
					this->axisy = tmp34;
					HX_STACK_LINE(374)
					this->axisx = nx;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,sweepIntegrate,(void))

Void ZPP_Body_obj::sweepValidate( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","sweepValidate",0x8a49a836,"zpp_nape.phys.ZPP_Body.sweepValidate","zpp_nape/phys/Body.hx",379,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(388)
		int tmp = s->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		if ((tmp2)){
			HX_STACK_LINE(390)
			Float tmp3 = this->posx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(390)
			Float tmp4 = this->axisy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			Float tmp5 = s->localCOMx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(390)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(390)
			Float tmp7 = this->axisx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(390)
			Float tmp8 = s->localCOMy;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(390)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(390)
			Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(390)
			Float tmp11 = (tmp3 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(390)
			s->worldCOMx = tmp11;
			HX_STACK_LINE(391)
			Float tmp12 = this->posy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(391)
			Float tmp13 = s->localCOMx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(391)
			Float tmp14 = this->axisx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(391)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(391)
			Float tmp16 = s->localCOMy;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(391)
			Float tmp17 = this->axisy;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(391)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(391)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(391)
			Float tmp20 = (tmp12 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(391)
			s->worldCOMy = tmp20;
		}
		else{
			HX_STACK_LINE(395)
			::zpp_nape::shape::ZPP_Polygon p = s->polygon;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(396)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = p->lverts->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(396)
			::zpp_nape::geom::ZPP_Vec2 li = tmp3;		HX_STACK_VAR(li,"li");
			HX_STACK_LINE(397)
			{
				HX_STACK_LINE(398)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = p->gverts->next;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(398)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(399)
				while((true)){
					HX_STACK_LINE(399)
					bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(399)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(399)
					if ((tmp6)){
						HX_STACK_LINE(399)
						break;
					}
					HX_STACK_LINE(400)
					::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(402)
						::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(403)
						li = li->next;
						HX_STACK_LINE(404)
						{
							HX_STACK_LINE(405)
							Float tmp7 = this->posx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(405)
							Float tmp8 = this->axisy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(405)
							Float tmp9 = l->x;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(405)
							Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(405)
							Float tmp11 = this->axisx;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(405)
							Float tmp12 = l->y;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(405)
							Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(405)
							Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(405)
							Float tmp15 = (tmp7 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(405)
							g->x = tmp15;
							HX_STACK_LINE(406)
							Float tmp16 = this->posy;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(406)
							Float tmp17 = l->x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(406)
							Float tmp18 = this->axisx;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(406)
							Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(406)
							Float tmp20 = l->y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(406)
							Float tmp21 = this->axisy;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(406)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(406)
							Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(406)
							Float tmp24 = (tmp16 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(406)
							g->y = tmp24;
						}
					}
					HX_STACK_LINE(409)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(412)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = p->edges->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(412)
			::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp4;		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(414)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = p->gverts->next;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(414)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp5;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(415)
				::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(416)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(417)
				while((true)){
					HX_STACK_LINE(417)
					bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(417)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(417)
					if ((tmp7)){
						HX_STACK_LINE(417)
						break;
					}
					HX_STACK_LINE(418)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(420)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(421)
						ite = ite->next;
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(423)
							Float tmp8 = this->axisy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(423)
							Float tmp9 = e->lnormx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(423)
							Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(423)
							Float tmp11 = this->axisx;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(423)
							Float tmp12 = e->lnormy;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(423)
							Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(423)
							Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(423)
							e->gnormx = tmp14;
							HX_STACK_LINE(424)
							Float tmp15 = e->lnormx;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(424)
							Float tmp16 = this->axisx;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(424)
							Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(424)
							Float tmp18 = e->lnormy;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(424)
							Float tmp19 = this->axisy;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(424)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(424)
							Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(424)
							e->gnormy = tmp21;
						}
						HX_STACK_LINE(426)
						Float tmp8 = this->posx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(426)
						Float tmp9 = e->gnormx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(426)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(426)
						Float tmp11 = this->posy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(426)
						Float tmp12 = e->gnormy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(426)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(426)
						Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(426)
						Float tmp15 = e->lprojection;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(426)
						Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(426)
						e->gprojection = tmp16;
						HX_STACK_LINE(427)
						Float tmp17 = (u->y * e->gnormx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(427)
						Float tmp18 = (u->x * e->gnormy);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(427)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(427)
						e->tp0 = tmp19;
						HX_STACK_LINE(428)
						Float tmp20 = (v->y * e->gnormx);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(428)
						Float tmp21 = (v->x * e->gnormy);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(428)
						Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(428)
						e->tp1 = tmp22;
					}
					HX_STACK_LINE(430)
					u = v;
					HX_STACK_LINE(431)
					cx_ite = cx_ite->next;
				}
				HX_STACK_LINE(433)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = p->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(433)
				::zpp_nape::geom::ZPP_Vec2 v = tmp6;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(435)
					::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(436)
					ite = ite->next;
					HX_STACK_LINE(437)
					{
						HX_STACK_LINE(438)
						Float tmp7 = this->axisy;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(438)
						Float tmp8 = e->lnormx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(438)
						Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(438)
						Float tmp10 = this->axisx;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(438)
						Float tmp11 = e->lnormy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(438)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(438)
						Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(438)
						e->gnormx = tmp13;
						HX_STACK_LINE(439)
						Float tmp14 = e->lnormx;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(439)
						Float tmp15 = this->axisx;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(439)
						Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(439)
						Float tmp17 = e->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(439)
						Float tmp18 = this->axisy;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(439)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(439)
						Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(439)
						e->gnormy = tmp20;
					}
					HX_STACK_LINE(441)
					Float tmp7 = this->posx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(441)
					Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(441)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(441)
					Float tmp10 = this->posy;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(441)
					Float tmp11 = e->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(441)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(441)
					Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(441)
					Float tmp14 = e->lprojection;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(441)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(441)
					e->gprojection = tmp15;
					HX_STACK_LINE(442)
					Float tmp16 = (u->y * e->gnormx);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(442)
					Float tmp17 = (u->x * e->gnormy);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(442)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(442)
					e->tp0 = tmp18;
					HX_STACK_LINE(443)
					Float tmp19 = (v->y * e->gnormx);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(443)
					Float tmp20 = (v->x * e->gnormy);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(443)
					Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(443)
					e->tp1 = tmp21;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,sweepValidate,(void))

Void ZPP_Body_obj::invalidate_pos( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_pos",0x42c6bd7c,"zpp_nape.phys.ZPP_Body.invalidate_pos","zpp_nape/phys/Body.hx",467,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(469)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(469)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(470)
			while((true)){
				HX_STACK_LINE(470)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(470)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(470)
				if ((tmp2)){
					HX_STACK_LINE(470)
					break;
				}
				HX_STACK_LINE(471)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(472)
				{
					HX_STACK_LINE(473)
					int tmp3 = s->type;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(473)
					int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(473)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(473)
					if ((tmp5)){
						HX_STACK_LINE(474)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(475)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(477)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(479)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(482)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_pos,(void))

Void ZPP_Body_obj::pos_invalidate( ::zpp_nape::geom::ZPP_Vec2 pos){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","pos_invalidate",0x15af3172,"zpp_nape.phys.ZPP_Body.pos_invalidate","zpp_nape/phys/Body.hx",484,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(485)
		this->immutable_midstep(HX_HCSTRING("Body::position","\xab","\x00","\x99","\x2d"));
		HX_STACK_LINE(487)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(487)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(487)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(487)
		if ((tmp2)){
			HX_STACK_LINE(487)
			::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(487)
			::zpp_nape::space::ZPP_Space tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(487)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(487)
			tmp3 = false;
		}
		HX_STACK_LINE(487)
		if ((tmp3)){
			HX_STACK_LINE(487)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot move a static object once inside a Space","\x94","\x07","\xd7","\x81"));
		}
		HX_STACK_LINE(489)
		Float tmp4 = this->posx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		Float tmp5 = pos->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(489)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(489)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(489)
		if ((tmp6)){
			HX_STACK_LINE(489)
			Float tmp8 = this->posy;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(489)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(489)
			Float tmp10 = pos->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(489)
			tmp7 = (tmp9 == tmp10);
		}
		else{
			HX_STACK_LINE(489)
			tmp7 = false;
		}
		HX_STACK_LINE(489)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(489)
		if ((tmp8)){
			HX_STACK_LINE(490)
			{
				HX_STACK_LINE(491)
				this->posx = pos->x;
				HX_STACK_LINE(492)
				this->posy = pos->y;
				HX_STACK_LINE(501)
				{
				}
			}
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::util::ZNPList_ZPP_Shape tmp9 = this->shapes;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(510)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp9->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(510)
					while((true)){
						HX_STACK_LINE(510)
						bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(510)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(510)
						if ((tmp11)){
							HX_STACK_LINE(510)
							break;
						}
						HX_STACK_LINE(510)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(510)
						{
							HX_STACK_LINE(510)
							int tmp12 = s->type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(510)
							int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(510)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(510)
							if ((tmp14)){
								HX_STACK_LINE(510)
								s->polygon->invalidate_gverts();
								HX_STACK_LINE(510)
								s->polygon->invalidate_gaxi();
							}
							HX_STACK_LINE(510)
							s->invalidate_worldCOM();
						}
						HX_STACK_LINE(510)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(510)
				this->zip_worldCOM = true;
			}
			HX_STACK_LINE(511)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,pos_invalidate,(void))

Void ZPP_Body_obj::pos_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","pos_validate",0xd2702ccd,"zpp_nape.phys.ZPP_Body.pos_validate","zpp_nape/phys/Body.hx",515,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(516)
		Float tmp = this->posx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(516)
		::nape::geom::Vec2 tmp1 = this->wrap_pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(516)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(517)
		Float tmp2 = this->posy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(517)
		::nape::geom::Vec2 tmp3 = this->wrap_pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(517)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(526)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,pos_validate,(void))

Void ZPP_Body_obj::vel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","vel_invalidate",0x1ffe3f49,"zpp_nape.phys.ZPP_Body.vel_invalidate","zpp_nape/phys/Body.hx",536,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vel,"vel")
		HX_STACK_LINE(538)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(538)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(538)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(538)
		if ((tmp2)){
			HX_STACK_LINE(538)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Static body cannot have its velocity set.","\x02","\xd9","\x66","\x81"));
		}
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(541)
			this->velx = vel->x;
			HX_STACK_LINE(542)
			this->vely = vel->y;
			HX_STACK_LINE(551)
			{
			}
		}
		HX_STACK_LINE(560)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,vel_invalidate,(void))

Void ZPP_Body_obj::vel_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","vel_validate",0x123346e4,"zpp_nape.phys.ZPP_Body.vel_validate","zpp_nape/phys/Body.hx",563,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(564)
		Float tmp = this->velx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(564)
		::nape::geom::Vec2 tmp1 = this->wrap_vel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(564)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(565)
		Float tmp2 = this->vely;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(565)
		::nape::geom::Vec2 tmp3 = this->wrap_vel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(565)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(574)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,vel_validate,(void))

Void ZPP_Body_obj::kinvel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","kinvel_invalidate",0x5ff2f401,"zpp_nape.phys.ZPP_Body.kinvel_invalidate","zpp_nape/phys/Body.hx",584,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vel,"vel")
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(586)
			this->kinvelx = vel->x;
			HX_STACK_LINE(587)
			this->kinvely = vel->y;
			HX_STACK_LINE(596)
			{
			}
		}
		HX_STACK_LINE(605)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,kinvel_invalidate,(void))

Void ZPP_Body_obj::kinvel_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","kinvel_validate",0x7c0add9c,"zpp_nape.phys.ZPP_Body.kinvel_validate","zpp_nape/phys/Body.hx",608,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		Float tmp = this->kinvelx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		::nape::geom::Vec2 tmp1 = this->wrap_kinvel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(610)
		Float tmp2 = this->kinvely;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(610)
		::nape::geom::Vec2 tmp3 = this->wrap_kinvel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(610)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(619)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,kinvel_validate,(void))

Void ZPP_Body_obj::svel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","svel_invalidate",0x1785a1a4,"zpp_nape.phys.ZPP_Body.svel_invalidate","zpp_nape/phys/Body.hx",629,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vel,"vel")
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(631)
			this->svelx = vel->x;
			HX_STACK_LINE(632)
			this->svely = vel->y;
			HX_STACK_LINE(641)
			{
			}
		}
		HX_STACK_LINE(650)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,svel_invalidate,(void))

Void ZPP_Body_obj::svel_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","svel_validate",0xaed9cc7f,"zpp_nape.phys.ZPP_Body.svel_validate","zpp_nape/phys/Body.hx",653,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(654)
		Float tmp = this->svelx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(654)
		::nape::geom::Vec2 tmp1 = this->wrap_svel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(654)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(655)
		Float tmp2 = this->svely;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(655)
		::nape::geom::Vec2 tmp3 = this->wrap_svel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(655)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(664)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,svel_validate,(void))

Void ZPP_Body_obj::force_invalidate( ::zpp_nape::geom::ZPP_Vec2 force){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","force_invalidate",0xe2a1717b,"zpp_nape.phys.ZPP_Body.force_invalidate","zpp_nape/phys/Body.hx",674,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(force,"force")
		HX_STACK_LINE(676)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(676)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(676)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(676)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(676)
		if ((tmp3)){
			HX_STACK_LINE(676)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Non-dynamic body cannot have force applied.","\x30","\xb2","\x19","\xb1"));
		}
		HX_STACK_LINE(678)
		{
			HX_STACK_LINE(679)
			this->forcex = force->x;
			HX_STACK_LINE(680)
			this->forcey = force->y;
			HX_STACK_LINE(689)
			{
			}
		}
		HX_STACK_LINE(698)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,force_invalidate,(void))

Void ZPP_Body_obj::force_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","force_validate",0xdf552896,"zpp_nape.phys.ZPP_Body.force_validate","zpp_nape/phys/Body.hx",700,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(701)
		Float tmp = this->forcex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(701)
		::nape::geom::Vec2 tmp1 = this->wrap_force;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(702)
		Float tmp2 = this->forcey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(702)
		::nape::geom::Vec2 tmp3 = this->wrap_force;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(702)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(711)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,force_validate,(void))

Void ZPP_Body_obj::setupPosition( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupPosition",0x429a89da,"zpp_nape.phys.ZPP_Body.setupPosition","zpp_nape/phys/Body.hx",720,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(721)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(721)
		{
			HX_STACK_LINE(721)
			Float tmp1 = this->posx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(721)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(721)
			Float tmp2 = this->posy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(721)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(721)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(721)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(721)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(721)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(721)
			if ((tmp4)){
				HX_STACK_LINE(721)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(721)
				tmp5 = true;
			}
			HX_STACK_LINE(721)
			if ((tmp5)){
				HX_STACK_LINE(721)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(721)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(721)
			{
				HX_STACK_LINE(721)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(721)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(721)
				if ((tmp7)){
					HX_STACK_LINE(721)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(721)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(721)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(721)
					ret = tmp8;
					HX_STACK_LINE(721)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(721)
					ret->zpp_pool = null();
					HX_STACK_LINE(721)
					ret->zpp_disp = false;
					HX_STACK_LINE(721)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(721)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(721)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(721)
					if ((tmp11)){
						HX_STACK_LINE(721)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(721)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(721)
			if ((tmp6)){
				HX_STACK_LINE(721)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(721)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(721)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(721)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(721)
						if ((tmp9)){
							HX_STACK_LINE(721)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(721)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(721)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(721)
							ret1 = tmp10;
							HX_STACK_LINE(721)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(721)
							ret1->next = null();
						}
						HX_STACK_LINE(721)
						ret1->weak = false;
					}
					HX_STACK_LINE(721)
					ret1->_immutable = immutable;
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						ret1->x = x;
						HX_STACK_LINE(721)
						ret1->y = y;
						HX_STACK_LINE(721)
						{
						}
					}
					HX_STACK_LINE(721)
					tmp7 = ret1;
				}
				HX_STACK_LINE(721)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(721)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(721)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(721)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(721)
					if ((tmp7)){
						HX_STACK_LINE(721)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(721)
						tmp8 = false;
					}
					HX_STACK_LINE(721)
					if ((tmp8)){
						HX_STACK_LINE(721)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(721)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(721)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(721)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(721)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(721)
					if ((tmp7)){
						HX_STACK_LINE(721)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(721)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(721)
					if ((tmp8)){
						HX_STACK_LINE(721)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(721)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(721)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(721)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(721)
				if ((tmp8)){
					HX_STACK_LINE(721)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(721)
					tmp9 = true;
				}
				HX_STACK_LINE(721)
				if ((tmp9)){
					HX_STACK_LINE(721)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(721)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(721)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(721)
						if ((tmp11)){
							HX_STACK_LINE(721)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(721)
							tmp12 = false;
						}
						HX_STACK_LINE(721)
						if ((tmp12)){
							HX_STACK_LINE(721)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(721)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(721)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(721)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(721)
						if ((tmp11)){
							HX_STACK_LINE(721)
							_this->_validate();
						}
					}
					HX_STACK_LINE(721)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(721)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(721)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(721)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(721)
				if ((tmp12)){
					HX_STACK_LINE(721)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						{
							HX_STACK_LINE(721)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(721)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(721)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(721)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(721)
							if ((tmp18)){
								HX_STACK_LINE(721)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(721)
								tmp17 = false;
							}
							HX_STACK_LINE(721)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(721)
							if ((tmp19)){
								HX_STACK_LINE(721)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(721)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(721)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(721)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(721)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(721)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(721)
						{
							HX_STACK_LINE(721)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(721)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(721)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(721)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(721)
							if ((tmp17)){
								HX_STACK_LINE(721)
								_this->_validate();
							}
						}
						HX_STACK_LINE(721)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(721)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(721)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(721)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(721)
					tmp13 = false;
				}
				HX_STACK_LINE(721)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(721)
				if ((tmp14)){
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(721)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(721)
						{
						}
					}
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(721)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(721)
						if ((tmp15)){
							HX_STACK_LINE(721)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(721)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(721)
				ret;
			}
			HX_STACK_LINE(721)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(721)
			tmp = ret;
		}
		HX_STACK_LINE(721)
		this->wrap_pos = tmp;
		HX_STACK_LINE(722)
		::nape::geom::Vec2 tmp1 = this->wrap_pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(722)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(723)
		bool tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(723)
		if ((tmp2)){
			HX_STACK_LINE(723)
			::nape::geom::Vec2 tmp3 = this->wrap_pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(723)
			tmp3->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(725)
			Dynamic tmp3 = this->pos_invalidate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(725)
			::nape::geom::Vec2 tmp4 = this->wrap_pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(725)
			tmp4->zpp_inner->_invalidate = tmp3;
			HX_STACK_LINE(726)
			Dynamic tmp5 = this->pos_validate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(726)
			::nape::geom::Vec2 tmp6 = this->wrap_pos;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(726)
			tmp6->zpp_inner->_validate = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupPosition,(void))

Void ZPP_Body_obj::setupVelocity( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupVelocity",0x969deb4e,"zpp_nape.phys.ZPP_Body.setupVelocity","zpp_nape/phys/Body.hx",729,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(730)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			Float tmp1 = this->velx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(730)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(730)
			Float tmp2 = this->vely;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(730)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(730)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(730)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(730)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(730)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(730)
			if ((tmp4)){
				HX_STACK_LINE(730)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(730)
				tmp5 = true;
			}
			HX_STACK_LINE(730)
			if ((tmp5)){
				HX_STACK_LINE(730)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(730)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(730)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(730)
				if ((tmp7)){
					HX_STACK_LINE(730)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(730)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(730)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(730)
					ret = tmp8;
					HX_STACK_LINE(730)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(730)
					ret->zpp_pool = null();
					HX_STACK_LINE(730)
					ret->zpp_disp = false;
					HX_STACK_LINE(730)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(730)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(730)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(730)
					if ((tmp11)){
						HX_STACK_LINE(730)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(730)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(730)
			if ((tmp6)){
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(730)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(730)
						if ((tmp9)){
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(730)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(730)
							ret1 = tmp10;
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(730)
							ret1->next = null();
						}
						HX_STACK_LINE(730)
						ret1->weak = false;
					}
					HX_STACK_LINE(730)
					ret1->_immutable = immutable;
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						ret1->x = x;
						HX_STACK_LINE(730)
						ret1->y = y;
						HX_STACK_LINE(730)
						{
						}
					}
					HX_STACK_LINE(730)
					tmp7 = ret1;
				}
				HX_STACK_LINE(730)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(730)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(730)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(730)
					if ((tmp7)){
						HX_STACK_LINE(730)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(730)
						tmp8 = false;
					}
					HX_STACK_LINE(730)
					if ((tmp8)){
						HX_STACK_LINE(730)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(730)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(730)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(730)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(730)
					if ((tmp7)){
						HX_STACK_LINE(730)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(730)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(730)
					if ((tmp8)){
						HX_STACK_LINE(730)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(730)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(730)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(730)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(730)
				if ((tmp8)){
					HX_STACK_LINE(730)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(730)
					tmp9 = true;
				}
				HX_STACK_LINE(730)
				if ((tmp9)){
					HX_STACK_LINE(730)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(730)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(730)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(730)
						if ((tmp11)){
							HX_STACK_LINE(730)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(730)
							tmp12 = false;
						}
						HX_STACK_LINE(730)
						if ((tmp12)){
							HX_STACK_LINE(730)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(730)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(730)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(730)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(730)
						if ((tmp11)){
							HX_STACK_LINE(730)
							_this->_validate();
						}
					}
					HX_STACK_LINE(730)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(730)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(730)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(730)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(730)
				if ((tmp12)){
					HX_STACK_LINE(730)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(730)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(730)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(730)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(730)
							if ((tmp18)){
								HX_STACK_LINE(730)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(730)
								tmp17 = false;
							}
							HX_STACK_LINE(730)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(730)
							if ((tmp19)){
								HX_STACK_LINE(730)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(730)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(730)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(730)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(730)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(730)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(730)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(730)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(730)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(730)
							if ((tmp17)){
								HX_STACK_LINE(730)
								_this->_validate();
							}
						}
						HX_STACK_LINE(730)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(730)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(730)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(730)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(730)
					tmp13 = false;
				}
				HX_STACK_LINE(730)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(730)
				if ((tmp14)){
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(730)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(730)
						{
						}
					}
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(730)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(730)
						if ((tmp15)){
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(730)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(730)
				ret;
			}
			HX_STACK_LINE(730)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(730)
			tmp = ret;
		}
		HX_STACK_LINE(730)
		this->wrap_vel = tmp;
		HX_STACK_LINE(731)
		::nape::geom::Vec2 tmp1 = this->wrap_vel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(731)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(732)
		bool tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(732)
		if ((tmp2)){
			HX_STACK_LINE(732)
			::nape::geom::Vec2 tmp3 = this->wrap_vel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(732)
			tmp3->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(734)
			Dynamic tmp3 = this->vel_invalidate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(734)
			::nape::geom::Vec2 tmp4 = this->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(734)
			tmp4->zpp_inner->_invalidate = tmp3;
			HX_STACK_LINE(735)
			Dynamic tmp5 = this->vel_validate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(735)
			::nape::geom::Vec2 tmp6 = this->wrap_vel;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(735)
			tmp6->zpp_inner->_validate = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupVelocity,(void))

Void ZPP_Body_obj::setupkinvel( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupkinvel",0x0f6ff61e,"zpp_nape.phys.ZPP_Body.setupkinvel","zpp_nape/phys/Body.hx",738,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(739)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(739)
		{
			HX_STACK_LINE(739)
			Float tmp1 = this->kinvelx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(739)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(739)
			Float tmp2 = this->kinvely;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(739)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(739)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(739)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(739)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(739)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(739)
			if ((tmp4)){
				HX_STACK_LINE(739)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(739)
				tmp5 = true;
			}
			HX_STACK_LINE(739)
			if ((tmp5)){
				HX_STACK_LINE(739)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(739)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(739)
			{
				HX_STACK_LINE(739)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(739)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(739)
				if ((tmp7)){
					HX_STACK_LINE(739)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(739)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(739)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(739)
					ret = tmp8;
					HX_STACK_LINE(739)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(739)
					ret->zpp_pool = null();
					HX_STACK_LINE(739)
					ret->zpp_disp = false;
					HX_STACK_LINE(739)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(739)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(739)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(739)
					if ((tmp11)){
						HX_STACK_LINE(739)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(739)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(739)
			if ((tmp6)){
				HX_STACK_LINE(739)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(739)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(739)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(739)
						if ((tmp9)){
							HX_STACK_LINE(739)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(739)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(739)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(739)
							ret1 = tmp10;
							HX_STACK_LINE(739)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(739)
							ret1->next = null();
						}
						HX_STACK_LINE(739)
						ret1->weak = false;
					}
					HX_STACK_LINE(739)
					ret1->_immutable = immutable;
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						ret1->x = x;
						HX_STACK_LINE(739)
						ret1->y = y;
						HX_STACK_LINE(739)
						{
						}
					}
					HX_STACK_LINE(739)
					tmp7 = ret1;
				}
				HX_STACK_LINE(739)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(739)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(739)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(739)
					if ((tmp7)){
						HX_STACK_LINE(739)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(739)
						tmp8 = false;
					}
					HX_STACK_LINE(739)
					if ((tmp8)){
						HX_STACK_LINE(739)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(739)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(739)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(739)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(739)
					if ((tmp7)){
						HX_STACK_LINE(739)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(739)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(739)
					if ((tmp8)){
						HX_STACK_LINE(739)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(739)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(739)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(739)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(739)
				if ((tmp8)){
					HX_STACK_LINE(739)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(739)
					tmp9 = true;
				}
				HX_STACK_LINE(739)
				if ((tmp9)){
					HX_STACK_LINE(739)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(739)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(739)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(739)
						if ((tmp11)){
							HX_STACK_LINE(739)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(739)
							tmp12 = false;
						}
						HX_STACK_LINE(739)
						if ((tmp12)){
							HX_STACK_LINE(739)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(739)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(739)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(739)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(739)
						if ((tmp11)){
							HX_STACK_LINE(739)
							_this->_validate();
						}
					}
					HX_STACK_LINE(739)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(739)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(739)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(739)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(739)
				if ((tmp12)){
					HX_STACK_LINE(739)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						{
							HX_STACK_LINE(739)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(739)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(739)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(739)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(739)
							if ((tmp18)){
								HX_STACK_LINE(739)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(739)
								tmp17 = false;
							}
							HX_STACK_LINE(739)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(739)
							if ((tmp19)){
								HX_STACK_LINE(739)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(739)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(739)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(739)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(739)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(739)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(739)
						{
							HX_STACK_LINE(739)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(739)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(739)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(739)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(739)
							if ((tmp17)){
								HX_STACK_LINE(739)
								_this->_validate();
							}
						}
						HX_STACK_LINE(739)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(739)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(739)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(739)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(739)
					tmp13 = false;
				}
				HX_STACK_LINE(739)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(739)
				if ((tmp14)){
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(739)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(739)
						{
						}
					}
					HX_STACK_LINE(739)
					{
						HX_STACK_LINE(739)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(739)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(739)
						if ((tmp15)){
							HX_STACK_LINE(739)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(739)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(739)
				ret;
			}
			HX_STACK_LINE(739)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(739)
			tmp = ret;
		}
		HX_STACK_LINE(739)
		this->wrap_kinvel = tmp;
		HX_STACK_LINE(740)
		::nape::geom::Vec2 tmp1 = this->wrap_kinvel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(740)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(741)
		bool tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(741)
		if ((tmp2)){
			HX_STACK_LINE(741)
			::nape::geom::Vec2 tmp3 = this->wrap_kinvel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(741)
			tmp3->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(743)
			Dynamic tmp3 = this->kinvel_invalidate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(743)
			::nape::geom::Vec2 tmp4 = this->wrap_kinvel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(743)
			tmp4->zpp_inner->_invalidate = tmp3;
			HX_STACK_LINE(744)
			Dynamic tmp5 = this->kinvel_validate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(744)
			::nape::geom::Vec2 tmp6 = this->wrap_kinvel;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(744)
			tmp6->zpp_inner->_validate = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupkinvel,(void))

Void ZPP_Body_obj::setupsvel( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupsvel",0x4de97c5b,"zpp_nape.phys.ZPP_Body.setupsvel","zpp_nape/phys/Body.hx",747,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(748)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		{
			HX_STACK_LINE(748)
			Float tmp1 = this->svelx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(748)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(748)
			Float tmp2 = this->svely;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(748)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(748)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(748)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(748)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(748)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(748)
			if ((tmp4)){
				HX_STACK_LINE(748)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(748)
				tmp5 = true;
			}
			HX_STACK_LINE(748)
			if ((tmp5)){
				HX_STACK_LINE(748)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(748)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(748)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(748)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(748)
				if ((tmp7)){
					HX_STACK_LINE(748)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(748)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(748)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(748)
					ret = tmp8;
					HX_STACK_LINE(748)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(748)
					ret->zpp_pool = null();
					HX_STACK_LINE(748)
					ret->zpp_disp = false;
					HX_STACK_LINE(748)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(748)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(748)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(748)
					if ((tmp11)){
						HX_STACK_LINE(748)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(748)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(748)
			if ((tmp6)){
				HX_STACK_LINE(748)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(748)
				{
					HX_STACK_LINE(748)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(748)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(748)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(748)
						if ((tmp9)){
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(748)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(748)
							ret1 = tmp10;
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(748)
							ret1->next = null();
						}
						HX_STACK_LINE(748)
						ret1->weak = false;
					}
					HX_STACK_LINE(748)
					ret1->_immutable = immutable;
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						ret1->x = x;
						HX_STACK_LINE(748)
						ret1->y = y;
						HX_STACK_LINE(748)
						{
						}
					}
					HX_STACK_LINE(748)
					tmp7 = ret1;
				}
				HX_STACK_LINE(748)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(748)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(748)
				{
					HX_STACK_LINE(748)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(748)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(748)
					if ((tmp7)){
						HX_STACK_LINE(748)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(748)
						tmp8 = false;
					}
					HX_STACK_LINE(748)
					if ((tmp8)){
						HX_STACK_LINE(748)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(748)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(748)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(748)
				{
					HX_STACK_LINE(748)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(748)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(748)
					if ((tmp7)){
						HX_STACK_LINE(748)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(748)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(748)
					if ((tmp8)){
						HX_STACK_LINE(748)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(748)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(748)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(748)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(748)
				if ((tmp8)){
					HX_STACK_LINE(748)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(748)
					tmp9 = true;
				}
				HX_STACK_LINE(748)
				if ((tmp9)){
					HX_STACK_LINE(748)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(748)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(748)
				{
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(748)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(748)
						if ((tmp11)){
							HX_STACK_LINE(748)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(748)
							tmp12 = false;
						}
						HX_STACK_LINE(748)
						if ((tmp12)){
							HX_STACK_LINE(748)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(748)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(748)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(748)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(748)
						if ((tmp11)){
							HX_STACK_LINE(748)
							_this->_validate();
						}
					}
					HX_STACK_LINE(748)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(748)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(748)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(748)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(748)
				if ((tmp12)){
					HX_STACK_LINE(748)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(748)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(748)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(748)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(748)
							if ((tmp18)){
								HX_STACK_LINE(748)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(748)
								tmp17 = false;
							}
							HX_STACK_LINE(748)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(748)
							if ((tmp19)){
								HX_STACK_LINE(748)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(748)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(748)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(748)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(748)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(748)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(748)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(748)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(748)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(748)
							if ((tmp17)){
								HX_STACK_LINE(748)
								_this->_validate();
							}
						}
						HX_STACK_LINE(748)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(748)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(748)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(748)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(748)
					tmp13 = false;
				}
				HX_STACK_LINE(748)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(748)
				if ((tmp14)){
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(748)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(748)
						{
						}
					}
					HX_STACK_LINE(748)
					{
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(748)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(748)
						if ((tmp15)){
							HX_STACK_LINE(748)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(748)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(748)
				ret;
			}
			HX_STACK_LINE(748)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(748)
			tmp = ret;
		}
		HX_STACK_LINE(748)
		this->wrap_svel = tmp;
		HX_STACK_LINE(749)
		::nape::geom::Vec2 tmp1 = this->wrap_svel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(749)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(750)
		bool tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(750)
		if ((tmp2)){
			HX_STACK_LINE(750)
			::nape::geom::Vec2 tmp3 = this->wrap_svel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(750)
			tmp3->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(752)
			Dynamic tmp3 = this->svel_invalidate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(752)
			::nape::geom::Vec2 tmp4 = this->wrap_svel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(752)
			tmp4->zpp_inner->_invalidate = tmp3;
			HX_STACK_LINE(753)
			Dynamic tmp5 = this->svel_validate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(753)
			::nape::geom::Vec2 tmp6 = this->wrap_svel;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(753)
			tmp6->zpp_inner->_validate = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupsvel,(void))

Void ZPP_Body_obj::setupForce( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setupForce",0xf0c4901a,"zpp_nape.phys.ZPP_Body.setupForce","zpp_nape/phys/Body.hx",756,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(757)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(757)
		{
			HX_STACK_LINE(757)
			Float tmp1 = this->forcex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(757)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(757)
			Float tmp2 = this->forcey;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(757)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(757)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(757)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(757)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(757)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(757)
			if ((tmp4)){
				HX_STACK_LINE(757)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(757)
				tmp5 = true;
			}
			HX_STACK_LINE(757)
			if ((tmp5)){
				HX_STACK_LINE(757)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(757)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(757)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(757)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(757)
				if ((tmp7)){
					HX_STACK_LINE(757)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(757)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(757)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(757)
					ret = tmp8;
					HX_STACK_LINE(757)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(757)
					ret->zpp_pool = null();
					HX_STACK_LINE(757)
					ret->zpp_disp = false;
					HX_STACK_LINE(757)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(757)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(757)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(757)
					if ((tmp11)){
						HX_STACK_LINE(757)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(757)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(757)
			if ((tmp6)){
				HX_STACK_LINE(757)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(757)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(757)
						if ((tmp9)){
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(757)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(757)
							ret1 = tmp10;
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(757)
							ret1->next = null();
						}
						HX_STACK_LINE(757)
						ret1->weak = false;
					}
					HX_STACK_LINE(757)
					ret1->_immutable = immutable;
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						ret1->x = x;
						HX_STACK_LINE(757)
						ret1->y = y;
						HX_STACK_LINE(757)
						{
						}
					}
					HX_STACK_LINE(757)
					tmp7 = ret1;
				}
				HX_STACK_LINE(757)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(757)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(757)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(757)
					if ((tmp7)){
						HX_STACK_LINE(757)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(757)
						tmp8 = false;
					}
					HX_STACK_LINE(757)
					if ((tmp8)){
						HX_STACK_LINE(757)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(757)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(757)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(757)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(757)
					if ((tmp7)){
						HX_STACK_LINE(757)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(757)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(757)
					if ((tmp8)){
						HX_STACK_LINE(757)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(757)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(757)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(757)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(757)
				if ((tmp8)){
					HX_STACK_LINE(757)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(757)
					tmp9 = true;
				}
				HX_STACK_LINE(757)
				if ((tmp9)){
					HX_STACK_LINE(757)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(757)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(757)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(757)
						if ((tmp11)){
							HX_STACK_LINE(757)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(757)
							tmp12 = false;
						}
						HX_STACK_LINE(757)
						if ((tmp12)){
							HX_STACK_LINE(757)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(757)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(757)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(757)
						if ((tmp11)){
							HX_STACK_LINE(757)
							_this->_validate();
						}
					}
					HX_STACK_LINE(757)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(757)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(757)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(757)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(757)
				if ((tmp12)){
					HX_STACK_LINE(757)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(757)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(757)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(757)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(757)
							if ((tmp18)){
								HX_STACK_LINE(757)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(757)
								tmp17 = false;
							}
							HX_STACK_LINE(757)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(757)
							if ((tmp19)){
								HX_STACK_LINE(757)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(757)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(757)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(757)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(757)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(757)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(757)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(757)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(757)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(757)
							if ((tmp17)){
								HX_STACK_LINE(757)
								_this->_validate();
							}
						}
						HX_STACK_LINE(757)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(757)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(757)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(757)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(757)
					tmp13 = false;
				}
				HX_STACK_LINE(757)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(757)
				if ((tmp14)){
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(757)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(757)
						{
						}
					}
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(757)
						if ((tmp15)){
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(757)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(757)
				ret;
			}
			HX_STACK_LINE(757)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(757)
			tmp = ret;
		}
		HX_STACK_LINE(757)
		this->wrap_force = tmp;
		HX_STACK_LINE(758)
		::nape::geom::Vec2 tmp1 = this->wrap_force;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(758)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(759)
		bool tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(759)
		if ((tmp2)){
			HX_STACK_LINE(759)
			::nape::geom::Vec2 tmp3 = this->wrap_force;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(759)
			tmp3->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(761)
			Dynamic tmp3 = this->force_invalidate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(761)
			::nape::geom::Vec2 tmp4 = this->wrap_force;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(761)
			tmp4->zpp_inner->_invalidate = tmp3;
			HX_STACK_LINE(762)
			Dynamic tmp5 = this->force_validate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(762)
			::nape::geom::Vec2 tmp6 = this->wrap_force;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(762)
			tmp6->zpp_inner->_validate = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupForce,(void))

Void ZPP_Body_obj::cvel_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","cvel_validate",0x52d1f46f,"zpp_nape.phys.ZPP_Body.cvel_validate","zpp_nape/phys/Body.hx",765,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(766)
		Float tmp = this->velx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(766)
		Float tmp1 = this->kinvelx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(766)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(766)
		::nape::geom::Vec3 tmp3 = this->wrapcvel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(766)
		tmp3->zpp_inner->x = tmp2;
		HX_STACK_LINE(767)
		Float tmp4 = this->vely;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(767)
		Float tmp5 = this->kinvely;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(767)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(767)
		::nape::geom::Vec3 tmp7 = this->wrapcvel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(767)
		tmp7->zpp_inner->y = tmp6;
		HX_STACK_LINE(768)
		Float tmp8 = this->angvel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(768)
		Float tmp9 = this->kinangvel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(768)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(768)
		::nape::geom::Vec3 tmp11 = this->wrapcvel;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(768)
		tmp11->zpp_inner->z = tmp10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,cvel_validate,(void))

Void ZPP_Body_obj::setup_cvel( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","setup_cvel",0x4ddd8c08,"zpp_nape.phys.ZPP_Body.setup_cvel","zpp_nape/phys/Body.hx",771,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(772)
		::zpp_nape::phys::ZPP_Body me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(773)
		::nape::geom::Vec3 tmp = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(773)
		this->wrapcvel = tmp;
		HX_STACK_LINE(774)
		::nape::geom::Vec3 tmp1 = this->wrapcvel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(774)
		tmp1->zpp_inner->immutable = true;
		HX_STACK_LINE(775)
		Dynamic tmp2 = this->cvel_validate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(775)
		::nape::geom::Vec3 tmp3 = this->wrapcvel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(775)
		tmp3->zpp_inner->_validate = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setup_cvel,(void))

Void ZPP_Body_obj::invalidate_rot( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_rot",0x42c841ff,"zpp_nape.phys.ZPP_Body.invalidate_rot","zpp_nape/phys/Body.hx",784,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(785)
		this->zip_axis = true;
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(787)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(787)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(788)
			while((true)){
				HX_STACK_LINE(788)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(788)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(788)
				if ((tmp2)){
					HX_STACK_LINE(788)
					break;
				}
				HX_STACK_LINE(789)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(790)
				{
					HX_STACK_LINE(791)
					int tmp3 = s->type;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(791)
					int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(791)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(791)
					if ((tmp5)){
						HX_STACK_LINE(792)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(793)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(795)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(797)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(800)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_rot,(void))

Void ZPP_Body_obj::validate_axis( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_axis",0x53dcc1be,"zpp_nape.phys.ZPP_Body.validate_axis","zpp_nape/phys/Body.hx",806,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(807)
		bool tmp = this->zip_axis;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(807)
		if ((tmp)){
			HX_STACK_LINE(808)
			this->zip_axis = false;
			HX_STACK_LINE(809)
			{
				HX_STACK_LINE(809)
				Float tmp1 = this->rot;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(809)
				Float tmp2 = ::Math_obj::sin(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(809)
				this->axisx = tmp2;
				HX_STACK_LINE(809)
				Float tmp3 = this->rot;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(809)
				Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(809)
				this->axisy = tmp4;
				HX_STACK_LINE(809)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_axis,(void))

Void ZPP_Body_obj::quick_validate_axis( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","quick_validate_axis",0x294704ac,"zpp_nape.phys.ZPP_Body.quick_validate_axis","zpp_nape/phys/Body.hx",815,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(816)
		Float tmp = this->rot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(816)
		Float tmp1 = ::Math_obj::sin(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(816)
		this->axisx = tmp1;
		HX_STACK_LINE(817)
		Float tmp2 = this->rot;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(817)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(817)
		this->axisy = tmp3;
		HX_STACK_LINE(826)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,quick_validate_axis,(void))

Void ZPP_Body_obj::delta_rot( Float dr){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","delta_rot",0x8e7f4aa4,"zpp_nape.phys.ZPP_Body.delta_rot","zpp_nape/phys/Body.hx",838,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dr,"dr")
		HX_STACK_LINE(839)
		hx::AddEq(this->rot,dr);
		HX_STACK_LINE(840)
		Float tmp = (dr * dr);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(840)
		bool tmp1 = (tmp > ((Float)0.0001));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(840)
		if ((tmp1)){
			HX_STACK_LINE(840)
			Float tmp2 = this->rot;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(840)
			Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(840)
			this->axisx = tmp3;
			HX_STACK_LINE(840)
			Float tmp4 = this->rot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(840)
			Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(840)
			this->axisy = tmp5;
			HX_STACK_LINE(840)
			Dynamic();
		}
		else{
			HX_STACK_LINE(842)
			Float tmp2 = (dr * dr);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(842)
			Float d2 = tmp2;		HX_STACK_VAR(d2,"d2");
			HX_STACK_LINE(843)
			Float tmp3 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(843)
			Float tmp4 = ((int)1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(843)
			Float p = tmp4;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(844)
			Float tmp5 = (d2 * d2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(844)
			Float tmp6 = (Float(tmp5) / Float((int)8));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(844)
			Float tmp7 = ((int)1 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(844)
			Float m = tmp7;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(845)
			Float tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(845)
			Float tmp9 = this->axisx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(845)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(845)
			Float tmp11 = dr;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(845)
			Float tmp12 = this->axisy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(845)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(845)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(845)
			Float tmp15 = m;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(845)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(845)
			Float nx = tmp16;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(846)
			Float tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(846)
			Float tmp18 = this->axisy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(846)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(846)
			Float tmp20 = dr;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(846)
			Float tmp21 = this->axisx;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(846)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(846)
			Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(846)
			Float tmp24 = m;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(846)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(846)
			this->axisy = tmp25;
			HX_STACK_LINE(847)
			this->axisx = nx;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,delta_rot,(void))

Void ZPP_Body_obj::invalidate_mass( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_mass",0x2918cc0c,"zpp_nape.phys.ZPP_Body.invalidate_mass","zpp_nape/phys/Body.hx",858,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(859)
		this->zip_mass = true;
		HX_STACK_LINE(860)
		this->invalidate_gravMass();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_mass,(void))

Void ZPP_Body_obj::validate_mass( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_mass",0x5bb9e611,"zpp_nape.phys.ZPP_Body.validate_mass","zpp_nape/phys/Body.hx",862,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(863)
		bool exist = false;		HX_STACK_VAR(exist,"exist");
		HX_STACK_LINE(864)
		bool tmp = this->zip_mass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(864)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(864)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(864)
		if ((tmp1)){
			HX_STACK_LINE(864)
			int tmp3 = this->massMode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(864)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(864)
			int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(864)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(864)
			bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(864)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(864)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(864)
			if ((tmp9)){
				HX_STACK_LINE(864)
				tmp2 = exist;
			}
			else{
				HX_STACK_LINE(864)
				tmp2 = false;
			}
		}
		else{
			HX_STACK_LINE(864)
			tmp2 = true;
		}
		HX_STACK_LINE(864)
		if ((tmp2)){
			HX_STACK_LINE(865)
			this->zip_mass = false;
			HX_STACK_LINE(866)
			int tmp3 = this->massMode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(866)
			int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(866)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(866)
			if ((tmp5)){
				HX_STACK_LINE(867)
				this->cmass = (int)0;
				HX_STACK_LINE(868)
				{
					HX_STACK_LINE(869)
					::zpp_nape::util::ZNPList_ZPP_Shape tmp6 = this->shapes;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(869)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp6->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(870)
					while((true)){
						HX_STACK_LINE(870)
						bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(870)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(870)
						if ((tmp8)){
							HX_STACK_LINE(870)
							break;
						}
						HX_STACK_LINE(871)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(872)
						{
							HX_STACK_LINE(873)
							Float tmp9 = s->material->density;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(873)
							s->refmaterial->density = tmp9;
							HX_STACK_LINE(874)
							s->validate_area_inertia();
							HX_STACK_LINE(875)
							Float tmp10 = s->area;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(875)
							Float tmp11 = s->material->density;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(875)
							Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(875)
							hx::AddEq(this->cmass,tmp12);
						}
						HX_STACK_LINE(877)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(881)
			int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(881)
			int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(881)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(881)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(881)
			if ((tmp8)){
				HX_STACK_LINE(881)
				bool tmp10 = this->nomove;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(881)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(881)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(881)
				tmp9 = !(tmp12);
			}
			else{
				HX_STACK_LINE(881)
				tmp9 = false;
			}
			HX_STACK_LINE(881)
			if ((tmp9)){
				HX_STACK_LINE(882)
				Float tmp10 = this->cmass;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(882)
				this->mass = tmp10;
				HX_STACK_LINE(883)
				Float tmp11 = this->mass;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(883)
				Float tmp12 = (Float(((Float)1.0)) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(883)
				Float tmp13 = this->smass = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(883)
				this->imass = tmp13;
			}
			else{
				HX_STACK_LINE(886)
				Float tmp10 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(886)
				this->mass = tmp10;
				HX_STACK_LINE(887)
				Float tmp11 = this->smass = ((Float)0.0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(887)
				this->imass = tmp11;
			}
			HX_STACK_LINE(889)
			bool tmp10 = exist;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(889)
			if ((tmp10)){
				HX_STACK_LINE(889)
				this->invalidate_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_mass,(void))

Void ZPP_Body_obj::invalidate_gravMass( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_gravMass",0x62f2a40c,"zpp_nape.phys.ZPP_Body.invalidate_gravMass","zpp_nape/phys/Body.hx",897,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(898)
		int tmp = this->gravMassMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(898)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(898)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(898)
		if ((tmp2)){
			HX_STACK_LINE(898)
			this->zip_gravMass = true;
		}
		HX_STACK_LINE(899)
		int tmp3 = this->gravMassMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(899)
		int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(899)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(899)
		if ((tmp5)){
			HX_STACK_LINE(899)
			this->zip_gravMassScale = true;
		}
		HX_STACK_LINE(900)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_gravMass,(void))

Void ZPP_Body_obj::validate_gravMass( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_gravMass",0x4629a491,"zpp_nape.phys.ZPP_Body.validate_gravMass","zpp_nape/phys/Body.hx",902,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(903)
		bool tmp = this->zip_gravMass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(903)
		if ((tmp)){
			HX_STACK_LINE(904)
			this->zip_gravMass = false;
			HX_STACK_LINE(905)
			this->validate_mass();
			HX_STACK_LINE(906)
			int tmp1 = this->gravMassMode;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(906)
			int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(906)
			bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(906)
			if ((tmp3)){
				HX_STACK_LINE(907)
				this->validate_mass();
				HX_STACK_LINE(908)
				Float tmp4 = this->cmass;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(908)
				this->gravMass = tmp4;
			}
			else{
				HX_STACK_LINE(910)
				int tmp4 = this->gravMassMode;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(910)
				int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(910)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(910)
				if ((tmp6)){
					HX_STACK_LINE(911)
					this->validate_mass();
					HX_STACK_LINE(912)
					Float tmp7 = this->cmass;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(912)
					Float tmp8 = this->gravMassScale;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(912)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(912)
					this->gravMass = tmp9;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_gravMass,(void))

Void ZPP_Body_obj::invalidate_gravMassScale( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_gravMassScale",0x0f3f6ede,"zpp_nape.phys.ZPP_Body.invalidate_gravMassScale","zpp_nape/phys/Body.hx",916,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(917)
		int tmp = this->gravMassMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(917)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(917)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(917)
		if ((tmp2)){
			HX_STACK_LINE(917)
			this->zip_gravMassScale = true;
		}
		else{
			HX_STACK_LINE(918)
			this->invalidate_gravMass();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_gravMassScale,(void))

Void ZPP_Body_obj::validate_gravMassScale( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_gravMassScale",0x521f6c39,"zpp_nape.phys.ZPP_Body.validate_gravMassScale","zpp_nape/phys/Body.hx",920,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(921)
		bool tmp = this->zip_gravMassScale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(921)
		if ((tmp)){
			HX_STACK_LINE(922)
			this->zip_gravMassScale = false;
			HX_STACK_LINE(923)
			int tmp1 = this->gravMassMode;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(923)
			int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(923)
			bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(923)
			if ((tmp3)){
				HX_STACK_LINE(923)
				this->gravMassScale = ((Float)1.0);
			}
			else{
				HX_STACK_LINE(924)
				int tmp4 = this->gravMassMode;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(924)
				int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(924)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(924)
				if ((tmp6)){
					HX_STACK_LINE(925)
					this->validate_mass();
					HX_STACK_LINE(926)
					Float tmp7 = this->gravMass;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(926)
					Float tmp8 = this->cmass;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(926)
					Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(926)
					this->gravMassScale = tmp9;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_gravMassScale,(void))

Void ZPP_Body_obj::invalidate_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_inertia",0xf1be24e2,"zpp_nape.phys.ZPP_Body.invalidate_inertia","zpp_nape/phys/Body.hx",937,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(938)
		this->zip_inertia = true;
		HX_STACK_LINE(939)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_inertia,(void))

Void ZPP_Body_obj::validate_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_inertia",0x8c975bfd,"zpp_nape.phys.ZPP_Body.validate_inertia","zpp_nape/phys/Body.hx",941,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(942)
		bool exist = false;		HX_STACK_VAR(exist,"exist");
		HX_STACK_LINE(943)
		bool tmp = this->zip_inertia;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(943)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(943)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(943)
		if ((tmp1)){
			HX_STACK_LINE(943)
			int tmp3 = this->inertiaMode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(943)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(943)
			int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(943)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(943)
			bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(943)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(943)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(943)
			if ((tmp9)){
				HX_STACK_LINE(943)
				tmp2 = exist;
			}
			else{
				HX_STACK_LINE(943)
				tmp2 = false;
			}
		}
		else{
			HX_STACK_LINE(943)
			tmp2 = true;
		}
		HX_STACK_LINE(943)
		if ((tmp2)){
			HX_STACK_LINE(944)
			this->zip_inertia = false;
			HX_STACK_LINE(945)
			int tmp3 = this->inertiaMode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(945)
			int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(945)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(945)
			if ((tmp5)){
				HX_STACK_LINE(946)
				this->cinertia = (int)0;
				HX_STACK_LINE(947)
				{
					HX_STACK_LINE(948)
					::zpp_nape::util::ZNPList_ZPP_Shape tmp6 = this->shapes;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(948)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp6->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(949)
					while((true)){
						HX_STACK_LINE(949)
						bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(949)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(949)
						if ((tmp8)){
							HX_STACK_LINE(949)
							break;
						}
						HX_STACK_LINE(950)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(951)
						{
							HX_STACK_LINE(952)
							Float tmp9 = s->material->density;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(952)
							s->refmaterial->density = tmp9;
							HX_STACK_LINE(953)
							s->validate_area_inertia();
							HX_STACK_LINE(954)
							Float tmp10 = (s->inertia * s->area);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(954)
							Float tmp11 = s->material->density;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(954)
							Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(954)
							hx::AddEq(this->cinertia,tmp12);
						}
						HX_STACK_LINE(956)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(960)
			int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(960)
			int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(960)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(960)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(960)
			if ((tmp8)){
				HX_STACK_LINE(960)
				bool tmp10 = this->norotate;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(960)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(960)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(960)
				tmp9 = !(tmp12);
			}
			else{
				HX_STACK_LINE(960)
				tmp9 = false;
			}
			HX_STACK_LINE(960)
			if ((tmp9)){
				HX_STACK_LINE(961)
				Float tmp10 = this->cinertia;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(961)
				this->inertia = tmp10;
				HX_STACK_LINE(962)
				Float tmp11 = this->inertia;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(962)
				Float tmp12 = (Float(((Float)1.0)) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(962)
				Float tmp13 = this->iinertia = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(962)
				this->sinertia = tmp13;
			}
			else{
				HX_STACK_LINE(965)
				Float tmp10 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(965)
				this->inertia = tmp10;
				HX_STACK_LINE(966)
				Float tmp11 = this->iinertia = (int)0;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(966)
				this->sinertia = tmp11;
			}
			HX_STACK_LINE(968)
			bool tmp10 = exist;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(968)
			if ((tmp10)){
				HX_STACK_LINE(968)
				this->invalidate_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_inertia,(void))

Void ZPP_Body_obj::invalidate_wake( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_wake",0x2fb4e73c,"zpp_nape.phys.ZPP_Body.invalidate_wake","zpp_nape/phys/Body.hx",974,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(974)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_wake,(void))

Void ZPP_Body_obj::validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_aabb",0x53cb47bd,"zpp_nape.phys.ZPP_Body.validate_aabb","zpp_nape/phys/Body.hx",979,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(981)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(981)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = tmp->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(981)
		if ((tmp2)){
			HX_STACK_LINE(981)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Body bounds only makes sense if it contains shapes","\x7b","\xb0","\x85","\x6c"));
		}
		HX_STACK_LINE(983)
		bool tmp3 = this->zip_aabb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(983)
		if ((tmp3)){
			HX_STACK_LINE(984)
			this->zip_aabb = false;
			HX_STACK_LINE(985)
			{
				HX_STACK_LINE(986)
				Float tmp4 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(986)
				::zpp_nape::geom::ZPP_AABB tmp5 = this->aabb;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(986)
				tmp5->minx = tmp4;
				HX_STACK_LINE(987)
				Float tmp6 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(987)
				::zpp_nape::geom::ZPP_AABB tmp7 = this->aabb;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(987)
				tmp7->miny = tmp6;
				HX_STACK_LINE(996)
				{
				}
			}
			HX_STACK_LINE(1005)
			{
				HX_STACK_LINE(1006)
				Float tmp4 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1006)
				::zpp_nape::geom::ZPP_AABB tmp5 = this->aabb;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1006)
				tmp5->maxx = tmp4;
				HX_STACK_LINE(1007)
				Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1007)
				::zpp_nape::geom::ZPP_AABB tmp7 = this->aabb;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1007)
				tmp7->maxy = tmp6;
				HX_STACK_LINE(1016)
				{
				}
			}
			HX_STACK_LINE(1025)
			{
				HX_STACK_LINE(1026)
				::zpp_nape::util::ZNPList_ZPP_Shape tmp4 = this->shapes;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1026)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp4->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1027)
				while((true)){
					HX_STACK_LINE(1027)
					bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1027)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1027)
					if ((tmp6)){
						HX_STACK_LINE(1027)
						break;
					}
					HX_STACK_LINE(1028)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1029)
					{
						HX_STACK_LINE(1030)
						{
							HX_STACK_LINE(1030)
							bool tmp7 = s->zip_aabb;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1030)
							if ((tmp7)){
								HX_STACK_LINE(1030)
								bool tmp8 = (s->body != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1030)
								if ((tmp8)){
									HX_STACK_LINE(1030)
									s->zip_aabb = false;
									HX_STACK_LINE(1030)
									int tmp9 = s->type;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1030)
									int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1030)
									bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1030)
									if ((tmp11)){
										HX_STACK_LINE(1030)
										::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1030)
										{
											HX_STACK_LINE(1030)
											bool tmp12 = _this->zip_worldCOM;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1030)
											if ((tmp12)){
												HX_STACK_LINE(1030)
												bool tmp13 = (_this->body != null());		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(1030)
												if ((tmp13)){
													HX_STACK_LINE(1030)
													_this->zip_worldCOM = false;
													HX_STACK_LINE(1030)
													{
														HX_STACK_LINE(1030)
														bool tmp14 = _this->zip_localCOM;		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(1030)
														if ((tmp14)){
															HX_STACK_LINE(1030)
															_this->zip_localCOM = false;
															HX_STACK_LINE(1030)
															int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
															HX_STACK_LINE(1030)
															int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(1030)
															bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(1030)
															if ((tmp17)){
																HX_STACK_LINE(1030)
																::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(1030)
																bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(1030)
																if ((tmp19)){
																	HX_STACK_LINE(1030)
																	HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
																}
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 tmp21 = tmp20->next;		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1030)
																bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(1030)
																if ((tmp22)){
																	HX_STACK_LINE(1030)
																	::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(1030)
																	_this1->localCOMx = tmp23->x;
																	HX_STACK_LINE(1030)
																	::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(1030)
																	_this1->localCOMy = tmp24->y;
																	HX_STACK_LINE(1030)
																	Dynamic();
																}
																else{
																	HX_STACK_LINE(1030)
																	::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(1030)
																	::zpp_nape::geom::ZPP_Vec2 tmp24 = tmp23->next->next;		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(1030)
																	bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(1030)
																	if ((tmp25)){
																		HX_STACK_LINE(1030)
																		{
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																			HX_STACK_LINE(1030)
																			_this1->localCOMx = tmp26->x;
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 tmp27 = _this1->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
																			HX_STACK_LINE(1030)
																			_this1->localCOMy = tmp27->y;
																			HX_STACK_LINE(1030)
																			{
																			}
																		}
																		HX_STACK_LINE(1030)
																		{
																			HX_STACK_LINE(1030)
																			Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																			HX_STACK_LINE(1030)
																			Float tmp27 = tmp26->next->x;		HX_STACK_VAR(tmp27,"tmp27");
																			HX_STACK_LINE(1030)
																			Float tmp28 = t;		HX_STACK_VAR(tmp28,"tmp28");
																			HX_STACK_LINE(1030)
																			Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																			HX_STACK_LINE(1030)
																			hx::AddEq(_this1->localCOMx,tmp29);
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 tmp30 = _this1->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
																			HX_STACK_LINE(1030)
																			Float tmp31 = tmp30->next->y;		HX_STACK_VAR(tmp31,"tmp31");
																			HX_STACK_LINE(1030)
																			Float tmp32 = t;		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(1030)
																			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(1030)
																			hx::AddEq(_this1->localCOMy,tmp33);
																		}
																		HX_STACK_LINE(1030)
																		{
																			HX_STACK_LINE(1030)
																			Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1030)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(1030)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																	else{
																		HX_STACK_LINE(1030)
																		{
																			HX_STACK_LINE(1030)
																			_this1->localCOMx = (int)0;
																			HX_STACK_LINE(1030)
																			_this1->localCOMy = (int)0;
																			HX_STACK_LINE(1030)
																			{
																			}
																		}
																		HX_STACK_LINE(1030)
																		Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
																		HX_STACK_LINE(1030)
																		{
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp26;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																			HX_STACK_LINE(1030)
																			cx_ite1 = cx_ite1->next;
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																			HX_STACK_LINE(1030)
																			cx_ite1 = cx_ite1->next;
																			HX_STACK_LINE(1030)
																			while((true)){
																				HX_STACK_LINE(1030)
																				bool tmp27 = (cx_ite1 != null());		HX_STACK_VAR(tmp27,"tmp27");
																				HX_STACK_LINE(1030)
																				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																				HX_STACK_LINE(1030)
																				if ((tmp28)){
																					HX_STACK_LINE(1030)
																					break;
																				}
																				HX_STACK_LINE(1030)
																				::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																				HX_STACK_LINE(1030)
																				{
																					HX_STACK_LINE(1030)
																					Float tmp29 = v->x;		HX_STACK_VAR(tmp29,"tmp29");
																					HX_STACK_LINE(1030)
																					Float tmp30 = (w->y - u->y);		HX_STACK_VAR(tmp30,"tmp30");
																					HX_STACK_LINE(1030)
																					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																					HX_STACK_LINE(1030)
																					hx::AddEq(area,tmp31);
																					HX_STACK_LINE(1030)
																					Float tmp32 = (w->y * v->x);		HX_STACK_VAR(tmp32,"tmp32");
																					HX_STACK_LINE(1030)
																					Float tmp33 = (w->x * v->y);		HX_STACK_VAR(tmp33,"tmp33");
																					HX_STACK_LINE(1030)
																					Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																					HX_STACK_LINE(1030)
																					Float cf = tmp34;		HX_STACK_VAR(cf,"cf");
																					HX_STACK_LINE(1030)
																					Float tmp35 = (v->x + w->x);		HX_STACK_VAR(tmp35,"tmp35");
																					HX_STACK_LINE(1030)
																					Float tmp36 = cf;		HX_STACK_VAR(tmp36,"tmp36");
																					HX_STACK_LINE(1030)
																					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																					HX_STACK_LINE(1030)
																					hx::AddEq(_this1->localCOMx,tmp37);
																					HX_STACK_LINE(1030)
																					Float tmp38 = (v->y + w->y);		HX_STACK_VAR(tmp38,"tmp38");
																					HX_STACK_LINE(1030)
																					Float tmp39 = cf;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1030)
																					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(1030)
																					hx::AddEq(_this1->localCOMy,tmp40);
																				}
																				HX_STACK_LINE(1030)
																				u = v;
																				HX_STACK_LINE(1030)
																				v = w;
																				HX_STACK_LINE(1030)
																				cx_ite1 = cx_ite1->next;
																			}
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 tmp27 = _this1->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
																			HX_STACK_LINE(1030)
																			cx_ite1 = tmp27;
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																			HX_STACK_LINE(1030)
																			{
																				HX_STACK_LINE(1030)
																				Float tmp28 = v->x;		HX_STACK_VAR(tmp28,"tmp28");
																				HX_STACK_LINE(1030)
																				Float tmp29 = (w->y - u->y);		HX_STACK_VAR(tmp29,"tmp29");
																				HX_STACK_LINE(1030)
																				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																				HX_STACK_LINE(1030)
																				hx::AddEq(area,tmp30);
																				HX_STACK_LINE(1030)
																				Float tmp31 = (w->y * v->x);		HX_STACK_VAR(tmp31,"tmp31");
																				HX_STACK_LINE(1030)
																				Float tmp32 = (w->x * v->y);		HX_STACK_VAR(tmp32,"tmp32");
																				HX_STACK_LINE(1030)
																				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(1030)
																				Float cf = tmp33;		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(1030)
																				Float tmp34 = (v->x + w->x);		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(1030)
																				Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(1030)
																				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(1030)
																				hx::AddEq(_this1->localCOMx,tmp36);
																				HX_STACK_LINE(1030)
																				Float tmp37 = (v->y + w->y);		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1030)
																				Float tmp38 = cf;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1030)
																				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(1030)
																				hx::AddEq(_this1->localCOMy,tmp39);
																			}
																			HX_STACK_LINE(1030)
																			u = v;
																			HX_STACK_LINE(1030)
																			v = w;
																			HX_STACK_LINE(1030)
																			cx_ite1 = cx_ite1->next;
																			HX_STACK_LINE(1030)
																			::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																			HX_STACK_LINE(1030)
																			{
																				HX_STACK_LINE(1030)
																				Float tmp28 = v->x;		HX_STACK_VAR(tmp28,"tmp28");
																				HX_STACK_LINE(1030)
																				Float tmp29 = (w1->y - u->y);		HX_STACK_VAR(tmp29,"tmp29");
																				HX_STACK_LINE(1030)
																				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																				HX_STACK_LINE(1030)
																				hx::AddEq(area,tmp30);
																				HX_STACK_LINE(1030)
																				Float tmp31 = (w1->y * v->x);		HX_STACK_VAR(tmp31,"tmp31");
																				HX_STACK_LINE(1030)
																				Float tmp32 = (w1->x * v->y);		HX_STACK_VAR(tmp32,"tmp32");
																				HX_STACK_LINE(1030)
																				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(1030)
																				Float cf = tmp33;		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(1030)
																				Float tmp34 = (v->x + w1->x);		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(1030)
																				Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(1030)
																				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(1030)
																				hx::AddEq(_this1->localCOMx,tmp36);
																				HX_STACK_LINE(1030)
																				Float tmp37 = (v->y + w1->y);		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(1030)
																				Float tmp38 = cf;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(1030)
																				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(1030)
																				hx::AddEq(_this1->localCOMy,tmp39);
																			}
																		}
																		HX_STACK_LINE(1030)
																		Float tmp26 = ((int)3 * area);		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(1030)
																		Float tmp27 = (Float((int)1) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(1030)
																		area = tmp27;
																		HX_STACK_LINE(1030)
																		{
																			HX_STACK_LINE(1030)
																			Float t = area;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1030)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(1030)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																}
															}
															HX_STACK_LINE(1030)
															bool tmp18 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1030)
															if ((tmp18)){
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 tmp19 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(1030)
																tmp19->x = _this->localCOMx;
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1030)
																tmp20->y = _this->localCOMy;
																HX_STACK_LINE(1030)
																{
																}
															}
														}
													}
													HX_STACK_LINE(1030)
													{
														HX_STACK_LINE(1030)
														::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1030)
														bool tmp14 = _this1->zip_axis;		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(1030)
														if ((tmp14)){
															HX_STACK_LINE(1030)
															_this1->zip_axis = false;
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																Float tmp15 = _this1->rot;		HX_STACK_VAR(tmp15,"tmp15");
																HX_STACK_LINE(1030)
																Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
																HX_STACK_LINE(1030)
																_this1->axisx = tmp16;
																HX_STACK_LINE(1030)
																Float tmp17 = _this1->rot;		HX_STACK_VAR(tmp17,"tmp17");
																HX_STACK_LINE(1030)
																Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(1030)
																_this1->axisy = tmp18;
																HX_STACK_LINE(1030)
																Dynamic();
															}
														}
													}
													HX_STACK_LINE(1030)
													{
														HX_STACK_LINE(1030)
														Float tmp14 = _this->body->posx;		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(1030)
														Float tmp15 = _this->body->axisy;		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(1030)
														Float tmp16 = _this->localCOMx;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(1030)
														Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1030)
														Float tmp18 = _this->body->axisx;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1030)
														Float tmp19 = _this->localCOMy;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1030)
														Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1030)
														Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1030)
														Float tmp22 = (tmp14 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1030)
														_this->worldCOMx = tmp22;
														HX_STACK_LINE(1030)
														Float tmp23 = _this->body->posy;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1030)
														Float tmp24 = _this->localCOMx;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1030)
														Float tmp25 = _this->body->axisx;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1030)
														Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1030)
														Float tmp27 = _this->localCOMy;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1030)
														Float tmp28 = _this->body->axisy;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1030)
														Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1030)
														Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1030)
														Float tmp31 = (tmp23 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1030)
														_this->worldCOMy = tmp31;
													}
												}
											}
										}
										HX_STACK_LINE(1030)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1030)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1030)
										{
											HX_STACK_LINE(1030)
											Float tmp12 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1030)
											_this->aabb->minx = tmp12;
											HX_STACK_LINE(1030)
											Float tmp13 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1030)
											_this->aabb->miny = tmp13;
										}
										HX_STACK_LINE(1030)
										{
											HX_STACK_LINE(1030)
											Float tmp12 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1030)
											_this->aabb->maxx = tmp12;
											HX_STACK_LINE(1030)
											Float tmp13 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1030)
											_this->aabb->maxy = tmp13;
										}
									}
									else{
										HX_STACK_LINE(1030)
										::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1030)
										{
											HX_STACK_LINE(1030)
											bool tmp12 = _this->zip_gverts;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1030)
											if ((tmp12)){
												HX_STACK_LINE(1030)
												bool tmp13 = (_this->body != null());		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(1030)
												if ((tmp13)){
													HX_STACK_LINE(1030)
													_this->zip_gverts = false;
													HX_STACK_LINE(1030)
													_this->validate_lverts();
													HX_STACK_LINE(1030)
													{
														HX_STACK_LINE(1030)
														::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1030)
														bool tmp14 = _this1->zip_axis;		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(1030)
														if ((tmp14)){
															HX_STACK_LINE(1030)
															_this1->zip_axis = false;
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																Float tmp15 = _this1->rot;		HX_STACK_VAR(tmp15,"tmp15");
																HX_STACK_LINE(1030)
																Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
																HX_STACK_LINE(1030)
																_this1->axisx = tmp16;
																HX_STACK_LINE(1030)
																Float tmp17 = _this1->rot;		HX_STACK_VAR(tmp17,"tmp17");
																HX_STACK_LINE(1030)
																Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(1030)
																_this1->axisy = tmp18;
																HX_STACK_LINE(1030)
																Dynamic();
															}
														}
													}
													HX_STACK_LINE(1030)
													::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(1030)
													::zpp_nape::geom::ZPP_Vec2 li = tmp14;		HX_STACK_VAR(li,"li");
													HX_STACK_LINE(1030)
													{
														HX_STACK_LINE(1030)
														::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->gverts->next;		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(1030)
														::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp15;		HX_STACK_VAR(cx_ite1,"cx_ite1");
														HX_STACK_LINE(1030)
														while((true)){
															HX_STACK_LINE(1030)
															bool tmp16 = (cx_ite1 != null());		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(1030)
															bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(1030)
															if ((tmp17)){
																HX_STACK_LINE(1030)
																break;
															}
															HX_STACK_LINE(1030)
															::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
															HX_STACK_LINE(1030)
															{
																HX_STACK_LINE(1030)
																::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
																HX_STACK_LINE(1030)
																li = li->next;
																HX_STACK_LINE(1030)
																{
																	HX_STACK_LINE(1030)
																	Float tmp18 = _this->body->posx;		HX_STACK_VAR(tmp18,"tmp18");
																	HX_STACK_LINE(1030)
																	Float tmp19 = _this->body->axisy;		HX_STACK_VAR(tmp19,"tmp19");
																	HX_STACK_LINE(1030)
																	Float tmp20 = l->x;		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1030)
																	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1030)
																	Float tmp22 = _this->body->axisx;		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(1030)
																	Float tmp23 = l->y;		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(1030)
																	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(1030)
																	Float tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(1030)
																	Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(1030)
																	g->x = tmp26;
																	HX_STACK_LINE(1030)
																	Float tmp27 = _this->body->posy;		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(1030)
																	Float tmp28 = l->x;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(1030)
																	Float tmp29 = _this->body->axisx;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(1030)
																	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(1030)
																	Float tmp31 = l->y;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(1030)
																	Float tmp32 = _this->body->axisy;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(1030)
																	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(1030)
																	Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(1030)
																	Float tmp35 = (tmp27 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(1030)
																	g->y = tmp35;
																}
															}
															HX_STACK_LINE(1030)
															cx_ite1 = cx_ite1->next;
														}
													}
												}
											}
										}
										HX_STACK_LINE(1030)
										::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1030)
										bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1030)
										if ((tmp13)){
											HX_STACK_LINE(1030)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
										}
										HX_STACK_LINE(1030)
										::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->gverts->next;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1030)
										::zpp_nape::geom::ZPP_Vec2 p0 = tmp14;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1030)
										{
											HX_STACK_LINE(1030)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1030)
											_this->aabb->miny = p0->y;
											HX_STACK_LINE(1030)
											{
											}
										}
										HX_STACK_LINE(1030)
										{
											HX_STACK_LINE(1030)
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1030)
											_this->aabb->maxy = p0->y;
											HX_STACK_LINE(1030)
											{
											}
										}
										HX_STACK_LINE(1030)
										{
											HX_STACK_LINE(1030)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->gverts->next;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1030)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp15->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(1030)
											while((true)){
												HX_STACK_LINE(1030)
												bool tmp16 = (cx_ite1 != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1030)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1030)
												if ((tmp17)){
													HX_STACK_LINE(1030)
													break;
												}
												HX_STACK_LINE(1030)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1030)
												{
													HX_STACK_LINE(1030)
													Float tmp18 = p->x;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1030)
													Float tmp19 = _this->aabb->minx;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1030)
													bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1030)
													if ((tmp20)){
														HX_STACK_LINE(1030)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1030)
													Float tmp21 = p->x;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1030)
													Float tmp22 = _this->aabb->maxx;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1030)
													bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1030)
													if ((tmp23)){
														HX_STACK_LINE(1030)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1030)
													Float tmp24 = p->y;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1030)
													Float tmp25 = _this->aabb->miny;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1030)
													bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1030)
													if ((tmp26)){
														HX_STACK_LINE(1030)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1030)
													Float tmp27 = p->y;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1030)
													Float tmp28 = _this->aabb->maxy;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1030)
													bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1030)
													if ((tmp29)){
														HX_STACK_LINE(1030)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1030)
												cx_ite1 = cx_ite1->next;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(1031)
						{
							HX_STACK_LINE(1031)
							::zpp_nape::geom::ZPP_AABB tmp7 = this->aabb;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1031)
							::zpp_nape::geom::ZPP_AABB _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1031)
							::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1031)
							bool tmp8 = (x->minx < _this->minx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1031)
							if ((tmp8)){
								HX_STACK_LINE(1031)
								_this->minx = x->minx;
							}
							HX_STACK_LINE(1031)
							bool tmp9 = (x->maxx > _this->maxx);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1031)
							if ((tmp9)){
								HX_STACK_LINE(1031)
								_this->maxx = x->maxx;
							}
							HX_STACK_LINE(1031)
							bool tmp10 = (x->miny < _this->miny);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1031)
							if ((tmp10)){
								HX_STACK_LINE(1031)
								_this->miny = x->miny;
							}
							HX_STACK_LINE(1031)
							bool tmp11 = (x->maxy > _this->maxy);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1031)
							if ((tmp11)){
								HX_STACK_LINE(1031)
								_this->maxy = x->maxy;
							}
						}
					}
					HX_STACK_LINE(1033)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_aabb,(void))

Void ZPP_Body_obj::invalidate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_aabb",0x212a2db8,"zpp_nape.phys.ZPP_Body.invalidate_aabb","zpp_nape/phys/Body.hx",1041,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1041)
		this->zip_aabb = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_aabb,(void))

Void ZPP_Body_obj::invalidate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_localCOM",0xcde1beae,"zpp_nape.phys.ZPP_Body.invalidate_localCOM","zpp_nape/phys/Body.hx",1053,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1054)
		this->zip_localCOM = true;
		HX_STACK_LINE(1055)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_localCOM,(void))

Void ZPP_Body_obj::invalidate_worldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","invalidate_worldCOM",0x9285bc27,"zpp_nape.phys.ZPP_Body.invalidate_worldCOM","zpp_nape/phys/Body.hx",1060,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1060)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_worldCOM,(void))

Void ZPP_Body_obj::validate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_localCOM",0xb118bf33,"zpp_nape.phys.ZPP_Body.validate_localCOM","zpp_nape/phys/Body.hx",1062,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1063)
		bool tmp = this->zip_localCOM;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1063)
		if ((tmp)){
			HX_STACK_LINE(1064)
			this->zip_localCOM = false;
			HX_STACK_LINE(1065)
			Float tempx = (int)0;		HX_STACK_VAR(tempx,"tempx");
			HX_STACK_LINE(1066)
			Float tempy = (int)0;		HX_STACK_VAR(tempy,"tempy");
			HX_STACK_LINE(1083)
			Float msum = ((Float)0.0);		HX_STACK_VAR(msum,"msum");
			HX_STACK_LINE(1084)
			{
				HX_STACK_LINE(1085)
				::zpp_nape::util::ZNPList_ZPP_Shape tmp1 = this->shapes;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1085)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1086)
				while((true)){
					HX_STACK_LINE(1086)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1086)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1086)
					if ((tmp3)){
						HX_STACK_LINE(1086)
						break;
					}
					HX_STACK_LINE(1087)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1088)
					{
						HX_STACK_LINE(1089)
						{
							HX_STACK_LINE(1089)
							bool tmp4 = s->zip_localCOM;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1089)
							if ((tmp4)){
								HX_STACK_LINE(1089)
								s->zip_localCOM = false;
								HX_STACK_LINE(1089)
								int tmp5 = s->type;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(1089)
								int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(1089)
								bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1089)
								if ((tmp7)){
									HX_STACK_LINE(1089)
									::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1089)
									::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1089)
									bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1089)
									if ((tmp9)){
										HX_STACK_LINE(1089)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
									}
									HX_STACK_LINE(1089)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1089)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1089)
									bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1089)
									if ((tmp12)){
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1089)
										_this->localCOMx = tmp13->x;
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1089)
										_this->localCOMy = tmp14->y;
										HX_STACK_LINE(1089)
										Dynamic();
									}
									else{
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 tmp14 = tmp13->next->next;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1089)
										bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1089)
										if ((tmp15)){
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1089)
												_this->localCOMx = tmp16->x;
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1089)
												_this->localCOMy = tmp17->y;
												HX_STACK_LINE(1089)
												{
												}
											}
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1089)
												Float tmp17 = tmp16->next->x;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1089)
												Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1089)
												Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1089)
												hx::AddEq(_this->localCOMx,tmp19);
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1089)
												Float tmp21 = tmp20->next->y;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1089)
												Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1089)
												Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1089)
												hx::AddEq(_this->localCOMy,tmp23);
											}
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(1089)
												hx::MultEq(_this->localCOMx,t);
												HX_STACK_LINE(1089)
												hx::MultEq(_this->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												_this->localCOMx = (int)0;
												HX_STACK_LINE(1089)
												_this->localCOMy = (int)0;
												HX_STACK_LINE(1089)
												{
												}
											}
											HX_STACK_LINE(1089)
											Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp16;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
												HX_STACK_LINE(1089)
												cx_ite1 = cx_ite1->next;
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(1089)
												cx_ite1 = cx_ite1->next;
												HX_STACK_LINE(1089)
												while((true)){
													HX_STACK_LINE(1089)
													bool tmp17 = (cx_ite1 != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1089)
													bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1089)
													if ((tmp18)){
														HX_STACK_LINE(1089)
														break;
													}
													HX_STACK_LINE(1089)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(1089)
													{
														HX_STACK_LINE(1089)
														Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1089)
														Float tmp20 = (w->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1089)
														Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1089)
														hx::AddEq(area,tmp21);
														HX_STACK_LINE(1089)
														Float tmp22 = (w->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1089)
														Float tmp23 = (w->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1089)
														Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1089)
														Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(1089)
														Float tmp25 = (v->x + w->x);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1089)
														Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1089)
														Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1089)
														hx::AddEq(_this->localCOMx,tmp27);
														HX_STACK_LINE(1089)
														Float tmp28 = (v->y + w->y);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1089)
														Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1089)
														Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1089)
														hx::AddEq(_this->localCOMy,tmp30);
													}
													HX_STACK_LINE(1089)
													u = v;
													HX_STACK_LINE(1089)
													v = w;
													HX_STACK_LINE(1089)
													cx_ite1 = cx_ite1->next;
												}
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1089)
												cx_ite1 = tmp17;
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(1089)
												{
													HX_STACK_LINE(1089)
													Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1089)
													Float tmp19 = (w->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1089)
													Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1089)
													hx::AddEq(area,tmp20);
													HX_STACK_LINE(1089)
													Float tmp21 = (w->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1089)
													Float tmp22 = (w->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1089)
													Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1089)
													Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(1089)
													Float tmp24 = (v->x + w->x);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1089)
													Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1089)
													Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1089)
													hx::AddEq(_this->localCOMx,tmp26);
													HX_STACK_LINE(1089)
													Float tmp27 = (v->y + w->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1089)
													Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1089)
													Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1089)
													hx::AddEq(_this->localCOMy,tmp29);
												}
												HX_STACK_LINE(1089)
												u = v;
												HX_STACK_LINE(1089)
												v = w;
												HX_STACK_LINE(1089)
												cx_ite1 = cx_ite1->next;
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(1089)
												{
													HX_STACK_LINE(1089)
													Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1089)
													Float tmp19 = (w1->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1089)
													Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1089)
													hx::AddEq(area,tmp20);
													HX_STACK_LINE(1089)
													Float tmp21 = (w1->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1089)
													Float tmp22 = (w1->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1089)
													Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1089)
													Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(1089)
													Float tmp24 = (v->x + w1->x);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1089)
													Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1089)
													Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1089)
													hx::AddEq(_this->localCOMx,tmp26);
													HX_STACK_LINE(1089)
													Float tmp27 = (v->y + w1->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1089)
													Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1089)
													Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1089)
													hx::AddEq(_this->localCOMy,tmp29);
												}
											}
											HX_STACK_LINE(1089)
											Float tmp16 = ((int)3 * area);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1089)
											Float tmp17 = (Float((int)1) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1089)
											area = tmp17;
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(1089)
												hx::MultEq(_this->localCOMx,t);
												HX_STACK_LINE(1089)
												hx::MultEq(_this->localCOMy,t);
											}
										}
									}
								}
								HX_STACK_LINE(1089)
								bool tmp8 = (s->wrap_localCOM != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1089)
								if ((tmp8)){
									HX_STACK_LINE(1089)
									::zpp_nape::geom::ZPP_Vec2 tmp9 = s->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1089)
									tmp9->x = s->localCOMx;
									HX_STACK_LINE(1089)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = s->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1089)
									tmp10->y = s->localCOMy;
									HX_STACK_LINE(1089)
									{
									}
								}
							}
						}
						HX_STACK_LINE(1090)
						s->validate_area_inertia();
						HX_STACK_LINE(1091)
						{
							HX_STACK_LINE(1092)
							Float tmp4 = s->area;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1092)
							Float tmp5 = s->material->density;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1092)
							Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1092)
							Float t = tmp6;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1101)
							Float tmp7 = (s->localCOMx * t);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1101)
							hx::AddEq(tempx,tmp7);
							HX_STACK_LINE(1102)
							Float tmp8 = (s->localCOMy * t);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1102)
							hx::AddEq(tempy,tmp8);
						}
						HX_STACK_LINE(1104)
						Float tmp4 = s->area;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1104)
						Float tmp5 = s->material->density;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1104)
						Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1104)
						hx::AddEq(msum,tmp6);
					}
					HX_STACK_LINE(1106)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1109)
			bool tmp1 = (msum != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1109)
			if ((tmp1)){
				HX_STACK_LINE(1111)
				Float tmp2 = (Float(((Float)1.0)) / Float(msum));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1111)
				Float t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1120)
				Float tmp3 = (tempx * t);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1120)
				this->localCOMx = tmp3;
				HX_STACK_LINE(1121)
				Float tmp4 = (tempy * t);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1121)
				this->localCOMy = tmp4;
			}
			HX_STACK_LINE(1124)
			::nape::geom::Vec2 tmp2 = this->wrap_localCOM;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1124)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1124)
			if ((tmp3)){
				HX_STACK_LINE(1125)
				Float tmp4 = this->localCOMx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1125)
				::nape::geom::Vec2 tmp5 = this->wrap_localCOM;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1125)
				tmp5->zpp_inner->x = tmp4;
				HX_STACK_LINE(1126)
				Float tmp6 = this->localCOMy;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1126)
				::nape::geom::Vec2 tmp7 = this->wrap_localCOM;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1126)
				tmp7->zpp_inner->y = tmp6;
				HX_STACK_LINE(1135)
				{
				}
			}
			HX_STACK_LINE(1144)
			bool tmp4 = this->zip_mass;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1144)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1144)
			if ((tmp4)){
				HX_STACK_LINE(1144)
				int tmp6 = this->massMode;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1144)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1144)
				int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1144)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1144)
				tmp5 = (tmp7 == tmp9);
			}
			else{
				HX_STACK_LINE(1144)
				tmp5 = false;
			}
			HX_STACK_LINE(1144)
			if ((tmp5)){
				HX_STACK_LINE(1145)
				this->zip_mass = false;
				HX_STACK_LINE(1146)
				this->cmass = msum;
				HX_STACK_LINE(1147)
				int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1147)
				int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1147)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1147)
				if ((tmp8)){
					HX_STACK_LINE(1148)
					Float tmp9 = this->cmass;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1148)
					this->mass = tmp9;
					HX_STACK_LINE(1149)
					Float tmp10 = this->mass;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1149)
					Float tmp11 = (Float(((Float)1.0)) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1149)
					Float tmp12 = this->smass = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1149)
					this->imass = tmp12;
				}
				else{
					HX_STACK_LINE(1152)
					Float tmp9 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1152)
					this->mass = tmp9;
					HX_STACK_LINE(1153)
					Float tmp10 = this->smass = ((Float)0.0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1153)
					this->imass = tmp10;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_localCOM,(void))

Void ZPP_Body_obj::validate_worldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","validate_worldCOM",0x75bcbcac,"zpp_nape.phys.ZPP_Body.validate_worldCOM","zpp_nape/phys/Body.hx",1158,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1159)
		bool tmp = this->zip_worldCOM;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1159)
		if ((tmp)){
			HX_STACK_LINE(1160)
			this->zip_worldCOM = false;
			HX_STACK_LINE(1161)
			this->validate_localCOM();
			HX_STACK_LINE(1162)
			{
				HX_STACK_LINE(1162)
				bool tmp1 = this->zip_axis;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1162)
				if ((tmp1)){
					HX_STACK_LINE(1162)
					this->zip_axis = false;
					HX_STACK_LINE(1162)
					{
						HX_STACK_LINE(1162)
						Float tmp2 = this->rot;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1162)
						Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1162)
						this->axisx = tmp3;
						HX_STACK_LINE(1162)
						Float tmp4 = this->rot;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1162)
						Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1162)
						this->axisy = tmp5;
						HX_STACK_LINE(1162)
						Dynamic();
					}
				}
			}
			HX_STACK_LINE(1163)
			{
				HX_STACK_LINE(1164)
				Float tmp1 = this->posx;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1164)
				Float tmp2 = this->axisy;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1164)
				Float tmp3 = this->localCOMx;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1164)
				Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1164)
				Float tmp5 = this->axisx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1164)
				Float tmp6 = this->localCOMy;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1164)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1164)
				Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1164)
				Float tmp9 = (tmp1 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1164)
				this->worldCOMx = tmp9;
				HX_STACK_LINE(1165)
				Float tmp10 = this->posy;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1165)
				Float tmp11 = this->localCOMx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1165)
				Float tmp12 = this->axisx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1165)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1165)
				Float tmp14 = this->localCOMy;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1165)
				Float tmp15 = this->axisy;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1165)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1165)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1165)
				Float tmp18 = (tmp10 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1165)
				this->worldCOMy = tmp18;
			}
			HX_STACK_LINE(1167)
			::nape::geom::Vec2 tmp1 = this->wrap_worldCOM;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1167)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1167)
			if ((tmp2)){
				HX_STACK_LINE(1168)
				Float tmp3 = this->worldCOMx;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1168)
				::nape::geom::Vec2 tmp4 = this->wrap_worldCOM;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1168)
				tmp4->zpp_inner->x = tmp3;
				HX_STACK_LINE(1169)
				Float tmp5 = this->worldCOMy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1169)
				::nape::geom::Vec2 tmp6 = this->wrap_worldCOM;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1169)
				tmp6->zpp_inner->y = tmp5;
				HX_STACK_LINE(1178)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_worldCOM,(void))

Void ZPP_Body_obj::getlocalCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","getlocalCOM",0x091ebac0,"zpp_nape.phys.ZPP_Body.getlocalCOM","zpp_nape/phys/Body.hx",1189,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1191)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1191)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = tmp->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1191)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1191)
		if ((tmp2)){
			HX_STACK_LINE(1191)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: localCOM only makes sense when Body has Shapes","\x35","\x11","\x33","\x1e"));
		}
		HX_STACK_LINE(1193)
		this->validate_localCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,getlocalCOM,(void))

Void ZPP_Body_obj::getworldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","getworldCOM",0xcdc2b839,"zpp_nape.phys.ZPP_Body.getworldCOM","zpp_nape/phys/Body.hx",1195,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1197)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1197)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = tmp->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1197)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1197)
		if ((tmp2)){
			HX_STACK_LINE(1197)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: worldCOM only makes sense when Body has Shapes","\x6e","\x73","\x07","\xbd"));
		}
		HX_STACK_LINE(1199)
		this->validate_worldCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,getworldCOM,(void))

Void ZPP_Body_obj::__immutable_midstep( ::String name){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","__immutable_midstep",0x56f8ba0b,"zpp_nape.phys.ZPP_Body.__immutable_midstep","zpp_nape/phys/Body.hx",1203,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(1205)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1205)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1205)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1205)
		if ((tmp1)){
			HX_STACK_LINE(1205)
			::zpp_nape::space::ZPP_Space tmp3 = this->space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1205)
			::zpp_nape::space::ZPP_Space tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1205)
			tmp2 = tmp4->midstep;
		}
		else{
			HX_STACK_LINE(1205)
			tmp2 = false;
		}
		HX_STACK_LINE(1205)
		if ((tmp2)){
			HX_STACK_LINE(1205)
			::String tmp3 = (HX_HCSTRING("Error: ","\x4e","\xa8","\x5b","\xb7") + name);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1205)
			::String tmp4 = (tmp3 + HX_HCSTRING(" cannot be set during a space step()","\x87","\xd5","\x6a","\xc1"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1205)
			HX_STACK_DO_THROW(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,__immutable_midstep,(void))

Void ZPP_Body_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","clear",0x7ebdf721,"zpp_nape.phys.ZPP_Body.clear","zpp_nape/phys/Body.hx",1208,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1210)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1210)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1210)
		if ((tmp1)){
			HX_STACK_LINE(1210)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot clear a Body if it is currently being used by a Space!","\x22","\x6e","\x12","\xac"));
		}
		HX_STACK_LINE(1213)
		::zpp_nape::util::ZNPList_ZPP_Constraint tmp2 = this->constraints;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1213)
		::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = tmp2->head;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1213)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1213)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1213)
		if ((tmp5)){
			HX_STACK_LINE(1213)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot clear a Body if it is currently being used by a constraint!","\x5d","\x82","\xca","\xb5"));
		}
		HX_STACK_LINE(1216)
		while((true)){
			HX_STACK_LINE(1216)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp6 = this->shapes;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1216)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp7 = tmp6->head;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1216)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1216)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1216)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1216)
			if ((tmp10)){
				HX_STACK_LINE(1216)
				break;
			}
			HX_STACK_LINE(1217)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp11 = this->shapes;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1217)
			::zpp_nape::shape::ZPP_Shape tmp12 = tmp11->pop_unsafe();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1217)
			::zpp_nape::shape::ZPP_Shape s = tmp12;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1218)
			{
				HX_STACK_LINE(1219)
				s->removedFromBody();
				HX_STACK_LINE(1220)
				s->body = null();
			}
		}
		HX_STACK_LINE(1224)
		this->invalidate_shapes();
		HX_STACK_LINE(1225)
		{
			HX_STACK_LINE(1226)
			this->pre_posx = (int)0;
			HX_STACK_LINE(1227)
			this->pre_posy = (int)0;
			HX_STACK_LINE(1236)
			{
			}
		}
		HX_STACK_LINE(1245)
		{
			HX_STACK_LINE(1246)
			this->posx = (int)0;
			HX_STACK_LINE(1247)
			this->posy = (int)0;
			HX_STACK_LINE(1256)
			{
			}
		}
		HX_STACK_LINE(1265)
		{
			HX_STACK_LINE(1266)
			this->velx = (int)0;
			HX_STACK_LINE(1267)
			this->vely = (int)0;
			HX_STACK_LINE(1276)
			{
			}
		}
		HX_STACK_LINE(1285)
		{
			HX_STACK_LINE(1286)
			this->forcex = (int)0;
			HX_STACK_LINE(1287)
			this->forcey = (int)0;
			HX_STACK_LINE(1296)
			{
			}
		}
		HX_STACK_LINE(1305)
		{
			HX_STACK_LINE(1306)
			this->kinvelx = (int)0;
			HX_STACK_LINE(1307)
			this->kinvely = (int)0;
			HX_STACK_LINE(1316)
			{
			}
		}
		HX_STACK_LINE(1325)
		{
			HX_STACK_LINE(1326)
			this->svelx = (int)0;
			HX_STACK_LINE(1327)
			this->svely = (int)0;
			HX_STACK_LINE(1336)
			{
			}
		}
		HX_STACK_LINE(1345)
		Float tmp6 = this->rot = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1345)
		Float tmp7 = this->pre_rot = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1345)
		Float tmp8 = this->kinangvel = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1345)
		Float tmp9 = this->torque = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1345)
		this->angvel = tmp9;
		HX_STACK_LINE(1346)
		{
			HX_STACK_LINE(1346)
			{
				HX_STACK_LINE(1346)
				::zpp_nape::util::ZNPList_ZPP_Shape tmp10 = this->shapes;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1346)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp10->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1346)
				while((true)){
					HX_STACK_LINE(1346)
					bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1346)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1346)
					if ((tmp12)){
						HX_STACK_LINE(1346)
						break;
					}
					HX_STACK_LINE(1346)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						int tmp13 = s->type;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1346)
						int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1346)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1346)
						if ((tmp15)){
							HX_STACK_LINE(1346)
							s->polygon->invalidate_gverts();
							HX_STACK_LINE(1346)
							s->polygon->invalidate_gaxi();
						}
						HX_STACK_LINE(1346)
						s->invalidate_worldCOM();
					}
					HX_STACK_LINE(1346)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1346)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(1347)
		{
			HX_STACK_LINE(1347)
			this->zip_axis = true;
			HX_STACK_LINE(1347)
			{
				HX_STACK_LINE(1347)
				::zpp_nape::util::ZNPList_ZPP_Shape tmp10 = this->shapes;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1347)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp10->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1347)
				while((true)){
					HX_STACK_LINE(1347)
					bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1347)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1347)
					if ((tmp12)){
						HX_STACK_LINE(1347)
						break;
					}
					HX_STACK_LINE(1347)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1347)
					{
						HX_STACK_LINE(1347)
						int tmp13 = s->type;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1347)
						int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1347)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1347)
						if ((tmp15)){
							HX_STACK_LINE(1347)
							s->polygon->invalidate_gverts();
							HX_STACK_LINE(1347)
							s->polygon->invalidate_gaxi();
						}
						HX_STACK_LINE(1347)
						s->invalidate_worldCOM();
					}
					HX_STACK_LINE(1347)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1347)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(1348)
		{
			HX_STACK_LINE(1349)
			this->axisx = (int)0;
			HX_STACK_LINE(1350)
			this->axisy = (int)1;
			HX_STACK_LINE(1359)
			{
			}
		}
		HX_STACK_LINE(1368)
		this->zip_axis = false;
		HX_STACK_LINE(1369)
		int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1369)
		this->massMode = tmp10;
		HX_STACK_LINE(1370)
		int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1370)
		this->gravMassMode = tmp11;
		HX_STACK_LINE(1371)
		this->gravMassScale = ((Float)1.0);
		HX_STACK_LINE(1372)
		int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1372)
		this->inertiaMode = tmp12;
		HX_STACK_LINE(1373)
		this->norotate = false;
		HX_STACK_LINE(1374)
		this->nomove = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,clear,(void))

Void ZPP_Body_obj::aabb_validate( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","aabb_validate",0x5d190ae9,"zpp_nape.phys.ZPP_Body.aabb_validate","zpp_nape/phys/Body.hx",1386,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1388)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1388)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = tmp->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1388)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1388)
		if ((tmp2)){
			HX_STACK_LINE(1388)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: bounds only makes sense when Body has shapes","\xb4","\xb9","\xcd","\xb9"));
		}
		HX_STACK_LINE(1390)
		{
			HX_STACK_LINE(1390)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp3 = this->shapes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1390)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1390)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1390)
			if ((tmp5)){
				HX_STACK_LINE(1390)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Body bounds only makes sense if it contains shapes","\x7b","\xb0","\x85","\x6c"));
			}
			HX_STACK_LINE(1390)
			bool tmp6 = this->zip_aabb;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1390)
			if ((tmp6)){
				HX_STACK_LINE(1390)
				this->zip_aabb = false;
				HX_STACK_LINE(1390)
				{
					HX_STACK_LINE(1390)
					Float tmp7 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1390)
					::zpp_nape::geom::ZPP_AABB tmp8 = this->aabb;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1390)
					tmp8->minx = tmp7;
					HX_STACK_LINE(1390)
					Float tmp9 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1390)
					::zpp_nape::geom::ZPP_AABB tmp10 = this->aabb;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1390)
					tmp10->miny = tmp9;
					HX_STACK_LINE(1390)
					{
					}
				}
				HX_STACK_LINE(1390)
				{
					HX_STACK_LINE(1390)
					Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1390)
					::zpp_nape::geom::ZPP_AABB tmp8 = this->aabb;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1390)
					tmp8->maxx = tmp7;
					HX_STACK_LINE(1390)
					Float tmp9 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1390)
					::zpp_nape::geom::ZPP_AABB tmp10 = this->aabb;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1390)
					tmp10->maxy = tmp9;
					HX_STACK_LINE(1390)
					{
					}
				}
				HX_STACK_LINE(1390)
				{
					HX_STACK_LINE(1390)
					::zpp_nape::util::ZNPList_ZPP_Shape tmp7 = this->shapes;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1390)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp7->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1390)
					while((true)){
						HX_STACK_LINE(1390)
						bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1390)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1390)
						if ((tmp9)){
							HX_STACK_LINE(1390)
							break;
						}
						HX_STACK_LINE(1390)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(1390)
						{
							HX_STACK_LINE(1390)
							{
								HX_STACK_LINE(1390)
								bool tmp10 = s->zip_aabb;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1390)
								if ((tmp10)){
									HX_STACK_LINE(1390)
									bool tmp11 = (s->body != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1390)
									if ((tmp11)){
										HX_STACK_LINE(1390)
										s->zip_aabb = false;
										HX_STACK_LINE(1390)
										int tmp12 = s->type;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1390)
										int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1390)
										bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1390)
										if ((tmp14)){
											HX_STACK_LINE(1390)
											::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												bool tmp15 = _this->zip_worldCOM;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1390)
												if ((tmp15)){
													HX_STACK_LINE(1390)
													bool tmp16 = (_this->body != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1390)
													if ((tmp16)){
														HX_STACK_LINE(1390)
														_this->zip_worldCOM = false;
														HX_STACK_LINE(1390)
														{
															HX_STACK_LINE(1390)
															bool tmp17 = _this->zip_localCOM;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(1390)
															if ((tmp17)){
																HX_STACK_LINE(1390)
																_this->zip_localCOM = false;
																HX_STACK_LINE(1390)
																int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(1390)
																int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(1390)
																bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1390)
																if ((tmp20)){
																	HX_STACK_LINE(1390)
																	::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1390)
																	::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1390)
																	bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(1390)
																	if ((tmp22)){
																		HX_STACK_LINE(1390)
																		HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
																	}
																	HX_STACK_LINE(1390)
																	::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(1390)
																	::zpp_nape::geom::ZPP_Vec2 tmp24 = tmp23->next;		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(1390)
																	bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(1390)
																	if ((tmp25)){
																		HX_STACK_LINE(1390)
																		::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(1390)
																		_this1->localCOMx = tmp26->x;
																		HX_STACK_LINE(1390)
																		::zpp_nape::geom::ZPP_Vec2 tmp27 = _this1->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(1390)
																		_this1->localCOMy = tmp27->y;
																		HX_STACK_LINE(1390)
																		Dynamic();
																	}
																	else{
																		HX_STACK_LINE(1390)
																		::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(1390)
																		::zpp_nape::geom::ZPP_Vec2 tmp27 = tmp26->next->next;		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(1390)
																		bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(1390)
																		if ((tmp28)){
																			HX_STACK_LINE(1390)
																			{
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 tmp29 = _this1->lverts->next;		HX_STACK_VAR(tmp29,"tmp29");
																				HX_STACK_LINE(1390)
																				_this1->localCOMx = tmp29->x;
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 tmp30 = _this1->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
																				HX_STACK_LINE(1390)
																				_this1->localCOMy = tmp30->y;
																				HX_STACK_LINE(1390)
																				{
																				}
																			}
																			HX_STACK_LINE(1390)
																			{
																				HX_STACK_LINE(1390)
																				Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 tmp29 = _this1->lverts->next;		HX_STACK_VAR(tmp29,"tmp29");
																				HX_STACK_LINE(1390)
																				Float tmp30 = tmp29->next->x;		HX_STACK_VAR(tmp30,"tmp30");
																				HX_STACK_LINE(1390)
																				Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
																				HX_STACK_LINE(1390)
																				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																				HX_STACK_LINE(1390)
																				hx::AddEq(_this1->localCOMx,tmp32);
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 tmp33 = _this1->lverts->next;		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(1390)
																				Float tmp34 = tmp33->next->y;		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(1390)
																				Float tmp35 = t;		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(1390)
																				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(1390)
																				hx::AddEq(_this1->localCOMy,tmp36);
																			}
																			HX_STACK_LINE(1390)
																			{
																				HX_STACK_LINE(1390)
																				Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(1390)
																				hx::MultEq(_this1->localCOMx,t);
																				HX_STACK_LINE(1390)
																				hx::MultEq(_this1->localCOMy,t);
																			}
																		}
																		else{
																			HX_STACK_LINE(1390)
																			{
																				HX_STACK_LINE(1390)
																				_this1->localCOMx = (int)0;
																				HX_STACK_LINE(1390)
																				_this1->localCOMy = (int)0;
																				HX_STACK_LINE(1390)
																				{
																				}
																			}
																			HX_STACK_LINE(1390)
																			Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
																			HX_STACK_LINE(1390)
																			{
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 tmp29 = _this1->lverts->next;		HX_STACK_VAR(tmp29,"tmp29");
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp29;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																				HX_STACK_LINE(1390)
																				cx_ite1 = cx_ite1->next;
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																				HX_STACK_LINE(1390)
																				cx_ite1 = cx_ite1->next;
																				HX_STACK_LINE(1390)
																				while((true)){
																					HX_STACK_LINE(1390)
																					bool tmp30 = (cx_ite1 != null());		HX_STACK_VAR(tmp30,"tmp30");
																					HX_STACK_LINE(1390)
																					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																					HX_STACK_LINE(1390)
																					if ((tmp31)){
																						HX_STACK_LINE(1390)
																						break;
																					}
																					HX_STACK_LINE(1390)
																					::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																					HX_STACK_LINE(1390)
																					{
																						HX_STACK_LINE(1390)
																						Float tmp32 = v->x;		HX_STACK_VAR(tmp32,"tmp32");
																						HX_STACK_LINE(1390)
																						Float tmp33 = (w->y - u->y);		HX_STACK_VAR(tmp33,"tmp33");
																						HX_STACK_LINE(1390)
																						Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																						HX_STACK_LINE(1390)
																						hx::AddEq(area,tmp34);
																						HX_STACK_LINE(1390)
																						Float tmp35 = (w->y * v->x);		HX_STACK_VAR(tmp35,"tmp35");
																						HX_STACK_LINE(1390)
																						Float tmp36 = (w->x * v->y);		HX_STACK_VAR(tmp36,"tmp36");
																						HX_STACK_LINE(1390)
																						Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																						HX_STACK_LINE(1390)
																						Float cf = tmp37;		HX_STACK_VAR(cf,"cf");
																						HX_STACK_LINE(1390)
																						Float tmp38 = (v->x + w->x);		HX_STACK_VAR(tmp38,"tmp38");
																						HX_STACK_LINE(1390)
																						Float tmp39 = cf;		HX_STACK_VAR(tmp39,"tmp39");
																						HX_STACK_LINE(1390)
																						Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																						HX_STACK_LINE(1390)
																						hx::AddEq(_this1->localCOMx,tmp40);
																						HX_STACK_LINE(1390)
																						Float tmp41 = (v->y + w->y);		HX_STACK_VAR(tmp41,"tmp41");
																						HX_STACK_LINE(1390)
																						Float tmp42 = cf;		HX_STACK_VAR(tmp42,"tmp42");
																						HX_STACK_LINE(1390)
																						Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																						HX_STACK_LINE(1390)
																						hx::AddEq(_this1->localCOMy,tmp43);
																					}
																					HX_STACK_LINE(1390)
																					u = v;
																					HX_STACK_LINE(1390)
																					v = w;
																					HX_STACK_LINE(1390)
																					cx_ite1 = cx_ite1->next;
																				}
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 tmp30 = _this1->lverts->next;		HX_STACK_VAR(tmp30,"tmp30");
																				HX_STACK_LINE(1390)
																				cx_ite1 = tmp30;
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																				HX_STACK_LINE(1390)
																				{
																					HX_STACK_LINE(1390)
																					Float tmp31 = v->x;		HX_STACK_VAR(tmp31,"tmp31");
																					HX_STACK_LINE(1390)
																					Float tmp32 = (w->y - u->y);		HX_STACK_VAR(tmp32,"tmp32");
																					HX_STACK_LINE(1390)
																					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																					HX_STACK_LINE(1390)
																					hx::AddEq(area,tmp33);
																					HX_STACK_LINE(1390)
																					Float tmp34 = (w->y * v->x);		HX_STACK_VAR(tmp34,"tmp34");
																					HX_STACK_LINE(1390)
																					Float tmp35 = (w->x * v->y);		HX_STACK_VAR(tmp35,"tmp35");
																					HX_STACK_LINE(1390)
																					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																					HX_STACK_LINE(1390)
																					Float cf = tmp36;		HX_STACK_VAR(cf,"cf");
																					HX_STACK_LINE(1390)
																					Float tmp37 = (v->x + w->x);		HX_STACK_VAR(tmp37,"tmp37");
																					HX_STACK_LINE(1390)
																					Float tmp38 = cf;		HX_STACK_VAR(tmp38,"tmp38");
																					HX_STACK_LINE(1390)
																					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1390)
																					hx::AddEq(_this1->localCOMx,tmp39);
																					HX_STACK_LINE(1390)
																					Float tmp40 = (v->y + w->y);		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(1390)
																					Float tmp41 = cf;		HX_STACK_VAR(tmp41,"tmp41");
																					HX_STACK_LINE(1390)
																					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																					HX_STACK_LINE(1390)
																					hx::AddEq(_this1->localCOMy,tmp42);
																				}
																				HX_STACK_LINE(1390)
																				u = v;
																				HX_STACK_LINE(1390)
																				v = w;
																				HX_STACK_LINE(1390)
																				cx_ite1 = cx_ite1->next;
																				HX_STACK_LINE(1390)
																				::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																				HX_STACK_LINE(1390)
																				{
																					HX_STACK_LINE(1390)
																					Float tmp31 = v->x;		HX_STACK_VAR(tmp31,"tmp31");
																					HX_STACK_LINE(1390)
																					Float tmp32 = (w1->y - u->y);		HX_STACK_VAR(tmp32,"tmp32");
																					HX_STACK_LINE(1390)
																					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																					HX_STACK_LINE(1390)
																					hx::AddEq(area,tmp33);
																					HX_STACK_LINE(1390)
																					Float tmp34 = (w1->y * v->x);		HX_STACK_VAR(tmp34,"tmp34");
																					HX_STACK_LINE(1390)
																					Float tmp35 = (w1->x * v->y);		HX_STACK_VAR(tmp35,"tmp35");
																					HX_STACK_LINE(1390)
																					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																					HX_STACK_LINE(1390)
																					Float cf = tmp36;		HX_STACK_VAR(cf,"cf");
																					HX_STACK_LINE(1390)
																					Float tmp37 = (v->x + w1->x);		HX_STACK_VAR(tmp37,"tmp37");
																					HX_STACK_LINE(1390)
																					Float tmp38 = cf;		HX_STACK_VAR(tmp38,"tmp38");
																					HX_STACK_LINE(1390)
																					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(1390)
																					hx::AddEq(_this1->localCOMx,tmp39);
																					HX_STACK_LINE(1390)
																					Float tmp40 = (v->y + w1->y);		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(1390)
																					Float tmp41 = cf;		HX_STACK_VAR(tmp41,"tmp41");
																					HX_STACK_LINE(1390)
																					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																					HX_STACK_LINE(1390)
																					hx::AddEq(_this1->localCOMy,tmp42);
																				}
																			}
																			HX_STACK_LINE(1390)
																			Float tmp29 = ((int)3 * area);		HX_STACK_VAR(tmp29,"tmp29");
																			HX_STACK_LINE(1390)
																			Float tmp30 = (Float((int)1) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
																			HX_STACK_LINE(1390)
																			area = tmp30;
																			HX_STACK_LINE(1390)
																			{
																				HX_STACK_LINE(1390)
																				Float t = area;		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(1390)
																				hx::MultEq(_this1->localCOMx,t);
																				HX_STACK_LINE(1390)
																				hx::MultEq(_this1->localCOMy,t);
																			}
																		}
																	}
																}
																HX_STACK_LINE(1390)
																bool tmp21 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(1390)
																if ((tmp21)){
																	HX_STACK_LINE(1390)
																	::zpp_nape::geom::ZPP_Vec2 tmp22 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(1390)
																	tmp22->x = _this->localCOMx;
																	HX_STACK_LINE(1390)
																	::zpp_nape::geom::ZPP_Vec2 tmp23 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(1390)
																	tmp23->y = _this->localCOMy;
																	HX_STACK_LINE(1390)
																	{
																	}
																}
															}
														}
														HX_STACK_LINE(1390)
														{
															HX_STACK_LINE(1390)
															::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(1390)
															bool tmp17 = _this1->zip_axis;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(1390)
															if ((tmp17)){
																HX_STACK_LINE(1390)
																_this1->zip_axis = false;
																HX_STACK_LINE(1390)
																{
																	HX_STACK_LINE(1390)
																	Float tmp18 = _this1->rot;		HX_STACK_VAR(tmp18,"tmp18");
																	HX_STACK_LINE(1390)
																	Float tmp19 = ::Math_obj::sin(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
																	HX_STACK_LINE(1390)
																	_this1->axisx = tmp19;
																	HX_STACK_LINE(1390)
																	Float tmp20 = _this1->rot;		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1390)
																	Float tmp21 = ::Math_obj::cos(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1390)
																	_this1->axisy = tmp21;
																	HX_STACK_LINE(1390)
																	Dynamic();
																}
															}
														}
														HX_STACK_LINE(1390)
														{
															HX_STACK_LINE(1390)
															Float tmp17 = _this->body->posx;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(1390)
															Float tmp18 = _this->body->axisy;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1390)
															Float tmp19 = _this->localCOMx;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(1390)
															Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(1390)
															Float tmp21 = _this->body->axisx;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(1390)
															Float tmp22 = _this->localCOMy;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(1390)
															Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(1390)
															Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(1390)
															Float tmp25 = (tmp17 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(1390)
															_this->worldCOMx = tmp25;
															HX_STACK_LINE(1390)
															Float tmp26 = _this->body->posy;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(1390)
															Float tmp27 = _this->localCOMx;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1390)
															Float tmp28 = _this->body->axisx;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1390)
															Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1390)
															Float tmp30 = _this->localCOMy;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1390)
															Float tmp31 = _this->body->axisy;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1390)
															Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1390)
															Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(1390)
															Float tmp34 = (tmp26 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(1390)
															_this->worldCOMy = tmp34;
														}
													}
												}
											}
											HX_STACK_LINE(1390)
											Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
											HX_STACK_LINE(1390)
											Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												Float tmp15 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1390)
												_this->aabb->minx = tmp15;
												HX_STACK_LINE(1390)
												Float tmp16 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1390)
												_this->aabb->miny = tmp16;
											}
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												Float tmp15 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1390)
												_this->aabb->maxx = tmp15;
												HX_STACK_LINE(1390)
												Float tmp16 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1390)
												_this->aabb->maxy = tmp16;
											}
										}
										else{
											HX_STACK_LINE(1390)
											::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												bool tmp15 = _this->zip_gverts;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1390)
												if ((tmp15)){
													HX_STACK_LINE(1390)
													bool tmp16 = (_this->body != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1390)
													if ((tmp16)){
														HX_STACK_LINE(1390)
														_this->zip_gverts = false;
														HX_STACK_LINE(1390)
														_this->validate_lverts();
														HX_STACK_LINE(1390)
														{
															HX_STACK_LINE(1390)
															::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(1390)
															bool tmp17 = _this1->zip_axis;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(1390)
															if ((tmp17)){
																HX_STACK_LINE(1390)
																_this1->zip_axis = false;
																HX_STACK_LINE(1390)
																{
																	HX_STACK_LINE(1390)
																	Float tmp18 = _this1->rot;		HX_STACK_VAR(tmp18,"tmp18");
																	HX_STACK_LINE(1390)
																	Float tmp19 = ::Math_obj::sin(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
																	HX_STACK_LINE(1390)
																	_this1->axisx = tmp19;
																	HX_STACK_LINE(1390)
																	Float tmp20 = _this1->rot;		HX_STACK_VAR(tmp20,"tmp20");
																	HX_STACK_LINE(1390)
																	Float tmp21 = ::Math_obj::cos(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(1390)
																	_this1->axisy = tmp21;
																	HX_STACK_LINE(1390)
																	Dynamic();
																}
															}
														}
														HX_STACK_LINE(1390)
														::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1390)
														::zpp_nape::geom::ZPP_Vec2 li = tmp17;		HX_STACK_VAR(li,"li");
														HX_STACK_LINE(1390)
														{
															HX_STACK_LINE(1390)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->gverts->next;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(1390)
															::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp18;		HX_STACK_VAR(cx_ite1,"cx_ite1");
															HX_STACK_LINE(1390)
															while((true)){
																HX_STACK_LINE(1390)
																bool tmp19 = (cx_ite1 != null());		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(1390)
																bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(1390)
																if ((tmp20)){
																	HX_STACK_LINE(1390)
																	break;
																}
																HX_STACK_LINE(1390)
																::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1390)
																{
																	HX_STACK_LINE(1390)
																	::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
																	HX_STACK_LINE(1390)
																	li = li->next;
																	HX_STACK_LINE(1390)
																	{
																		HX_STACK_LINE(1390)
																		Float tmp21 = _this->body->posx;		HX_STACK_VAR(tmp21,"tmp21");
																		HX_STACK_LINE(1390)
																		Float tmp22 = _this->body->axisy;		HX_STACK_VAR(tmp22,"tmp22");
																		HX_STACK_LINE(1390)
																		Float tmp23 = l->x;		HX_STACK_VAR(tmp23,"tmp23");
																		HX_STACK_LINE(1390)
																		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																		HX_STACK_LINE(1390)
																		Float tmp25 = _this->body->axisx;		HX_STACK_VAR(tmp25,"tmp25");
																		HX_STACK_LINE(1390)
																		Float tmp26 = l->y;		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(1390)
																		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(1390)
																		Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(1390)
																		Float tmp29 = (tmp21 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(1390)
																		g->x = tmp29;
																		HX_STACK_LINE(1390)
																		Float tmp30 = _this->body->posy;		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(1390)
																		Float tmp31 = l->x;		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(1390)
																		Float tmp32 = _this->body->axisx;		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(1390)
																		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(1390)
																		Float tmp34 = l->y;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(1390)
																		Float tmp35 = _this->body->axisy;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(1390)
																		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(1390)
																		Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(1390)
																		Float tmp38 = (tmp30 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(1390)
																		g->y = tmp38;
																	}
																}
																HX_STACK_LINE(1390)
																cx_ite1 = cx_ite1->next;
															}
														}
													}
												}
											}
											HX_STACK_LINE(1390)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1390)
											bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1390)
											if ((tmp16)){
												HX_STACK_LINE(1390)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
											}
											HX_STACK_LINE(1390)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->gverts->next;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1390)
											::zpp_nape::geom::ZPP_Vec2 p0 = tmp17;		HX_STACK_VAR(p0,"p0");
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												_this->aabb->minx = p0->x;
												HX_STACK_LINE(1390)
												_this->aabb->miny = p0->y;
												HX_STACK_LINE(1390)
												{
												}
											}
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												_this->aabb->maxx = p0->x;
												HX_STACK_LINE(1390)
												_this->aabb->maxy = p0->y;
												HX_STACK_LINE(1390)
												{
												}
											}
											HX_STACK_LINE(1390)
											{
												HX_STACK_LINE(1390)
												::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->gverts->next;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1390)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp18->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(1390)
												while((true)){
													HX_STACK_LINE(1390)
													bool tmp19 = (cx_ite1 != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1390)
													bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1390)
													if ((tmp20)){
														HX_STACK_LINE(1390)
														break;
													}
													HX_STACK_LINE(1390)
													::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
													HX_STACK_LINE(1390)
													{
														HX_STACK_LINE(1390)
														Float tmp21 = p->x;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1390)
														Float tmp22 = _this->aabb->minx;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1390)
														bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1390)
														if ((tmp23)){
															HX_STACK_LINE(1390)
															_this->aabb->minx = p->x;
														}
														HX_STACK_LINE(1390)
														Float tmp24 = p->x;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1390)
														Float tmp25 = _this->aabb->maxx;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1390)
														bool tmp26 = (tmp24 > tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1390)
														if ((tmp26)){
															HX_STACK_LINE(1390)
															_this->aabb->maxx = p->x;
														}
														HX_STACK_LINE(1390)
														Float tmp27 = p->y;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1390)
														Float tmp28 = _this->aabb->miny;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1390)
														bool tmp29 = (tmp27 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1390)
														if ((tmp29)){
															HX_STACK_LINE(1390)
															_this->aabb->miny = p->y;
														}
														HX_STACK_LINE(1390)
														Float tmp30 = p->y;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1390)
														Float tmp31 = _this->aabb->maxy;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1390)
														bool tmp32 = (tmp30 > tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1390)
														if ((tmp32)){
															HX_STACK_LINE(1390)
															_this->aabb->maxy = p->y;
														}
													}
													HX_STACK_LINE(1390)
													cx_ite1 = cx_ite1->next;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1390)
							{
								HX_STACK_LINE(1390)
								::zpp_nape::geom::ZPP_AABB tmp10 = this->aabb;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1390)
								::zpp_nape::geom::ZPP_AABB _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1390)
								::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1390)
								bool tmp11 = (x->minx < _this->minx);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1390)
								if ((tmp11)){
									HX_STACK_LINE(1390)
									_this->minx = x->minx;
								}
								HX_STACK_LINE(1390)
								bool tmp12 = (x->maxx > _this->maxx);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1390)
								if ((tmp12)){
									HX_STACK_LINE(1390)
									_this->maxx = x->maxx;
								}
								HX_STACK_LINE(1390)
								bool tmp13 = (x->miny < _this->miny);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1390)
								if ((tmp13)){
									HX_STACK_LINE(1390)
									_this->miny = x->miny;
								}
								HX_STACK_LINE(1390)
								bool tmp14 = (x->maxy > _this->maxy);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1390)
								if ((tmp14)){
									HX_STACK_LINE(1390)
									_this->maxy = x->maxy;
								}
							}
						}
						HX_STACK_LINE(1390)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,aabb_validate,(void))

bool ZPP_Body_obj::shapes_adder( ::nape::shape::Shape s){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","shapes_adder",0xe0b7bcad,"zpp_nape.phys.ZPP_Body.shapes_adder","zpp_nape/phys/Body.hx",1392,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(1393)
	::zpp_nape::phys::ZPP_Body tmp = s->zpp_inner->body;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1393)
	bool tmp1 = (tmp != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1393)
	if ((tmp1)){
		HX_STACK_LINE(1394)
		::zpp_nape::phys::ZPP_Body tmp2 = s->zpp_inner->body;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1394)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1394)
		if ((tmp3)){
			HX_STACK_LINE(1394)
			::zpp_nape::phys::ZPP_Body tmp4 = s->zpp_inner->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1394)
			::nape::shape::Shape tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1394)
			tmp4->wrap_shapes->remove(tmp5);
		}
		HX_STACK_LINE(1395)
		s->zpp_inner->body = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1396)
		s->zpp_inner->addedToBody();
		HX_STACK_LINE(1397)
		::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1397)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1397)
		if ((tmp5)){
			HX_STACK_LINE(1397)
			::zpp_nape::space::ZPP_Space tmp6 = this->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1397)
			::zpp_nape::space::ZPP_Space _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1397)
			::zpp_nape::shape::ZPP_Shape s1 = s->zpp_inner;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(1397)
			bool dontwake = false;		HX_STACK_VAR(dontwake,"dontwake");
			HX_STACK_LINE(1397)
			bool tmp7 = dontwake;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1397)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1397)
			if ((tmp8)){
				HX_STACK_LINE(1397)
				::zpp_nape::phys::ZPP_Body o = s1->body;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1397)
				bool tmp9 = o->world;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1397)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1397)
				if ((tmp10)){
					HX_STACK_LINE(1397)
					int tmp11 = _this->stamp;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1397)
					bool tmp12 = _this->midstep;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1397)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1397)
					if ((tmp12)){
						HX_STACK_LINE(1397)
						tmp13 = (int)0;
					}
					else{
						HX_STACK_LINE(1397)
						tmp13 = (int)1;
					}
					HX_STACK_LINE(1397)
					int tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1397)
					o->component->waket = tmp14;
					HX_STACK_LINE(1397)
					int tmp15 = o->type;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1397)
					int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1397)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1397)
					if ((tmp17)){
						HX_STACK_LINE(1397)
						o->kinematicDelaySleep = true;
					}
					HX_STACK_LINE(1397)
					bool tmp18 = o->component->sleeping;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1397)
					if ((tmp18)){
						HX_STACK_LINE(1397)
						::zpp_nape::phys::ZPP_Body tmp19 = o;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1397)
						_this->really_wake(tmp19,false);
					}
				}
			}
			HX_STACK_LINE(1397)
			::zpp_nape::shape::ZPP_Shape tmp9 = s1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1397)
			_this->bphase->insert(tmp9);
			HX_STACK_LINE(1397)
			s1->addedToSpace();
		}
		HX_STACK_LINE(1398)
		int tmp6 = s->zpp_inner->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1398)
		int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1398)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1398)
		if ((tmp8)){
			HX_STACK_LINE(1399)
			::zpp_nape::shape::ZPP_Polygon tmp9 = s->zpp_inner->polygon;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1399)
			tmp9->invalidate_gaxi();
			HX_STACK_LINE(1400)
			::zpp_nape::shape::ZPP_Polygon tmp10 = s->zpp_inner->polygon;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1400)
			tmp10->invalidate_gverts();
		}
		HX_STACK_LINE(1402)
		return true;
	}
	else{
		HX_STACK_LINE(1404)
		return false;
	}
	HX_STACK_LINE(1393)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_adder,return )

Void ZPP_Body_obj::shapes_subber( ::nape::shape::Shape s){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","shapes_subber",0xbaf4f710,"zpp_nape.phys.ZPP_Body.shapes_subber","zpp_nape/phys/Body.hx",1406,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(1407)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1407)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1407)
		if ((tmp1)){
			HX_STACK_LINE(1407)
			::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1407)
			::zpp_nape::shape::ZPP_Shape tmp3 = s->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1407)
			tmp2->removed_shape(tmp3,null());
		}
		HX_STACK_LINE(1408)
		s->zpp_inner->body = null();
		HX_STACK_LINE(1409)
		s->zpp_inner->removedFromBody();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_subber,(void))

Void ZPP_Body_obj::shapes_invalidate( ::zpp_nape::util::ZPP_ShapeList _){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","shapes_invalidate",0x5bc6493c,"zpp_nape.phys.ZPP_Body.shapes_invalidate","zpp_nape/phys/Body.hx",1412,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(1412)
		this->invalidate_shapes();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_invalidate,(void))

Void ZPP_Body_obj::shapes_modifiable( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","shapes_modifiable",0x0ee22ec5,"zpp_nape.phys.ZPP_Body.shapes_modifiable","zpp_nape/phys/Body.hx",1415,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1416)
		this->immutable_midstep(HX_HCSTRING("Body::shapes","\xb4","\xd5","\x70","\x23"));
		HX_STACK_LINE(1417)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1417)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1417)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1417)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1417)
		if ((tmp2)){
			HX_STACK_LINE(1417)
			::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1417)
			::zpp_nape::space::ZPP_Space tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1417)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(1417)
			tmp3 = false;
		}
		HX_STACK_LINE(1417)
		if ((tmp3)){
			HX_STACK_LINE(1417)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modifiy shapes of static object once added to Space","\x96","\xea","\xc2","\xbf"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,shapes_modifiable,(void))

Void ZPP_Body_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","addedToSpace",0x8a025957,"zpp_nape.phys.ZPP_Body.addedToSpace","zpp_nape/phys/Body.hx",1633,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1642)
		{
			HX_STACK_LINE(1643)
			::zpp_nape::space::ZPP_Component tmp = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1643)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1643)
			if ((tmp1)){
				HX_STACK_LINE(1644)
				::zpp_nape::space::ZPP_Component tmp2 = ::zpp_nape::space::ZPP_Component_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1644)
				this->component = tmp2;
			}
			else{
				HX_STACK_LINE(1650)
				::zpp_nape::space::ZPP_Component tmp2 = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1650)
				this->component = tmp2;
				HX_STACK_LINE(1651)
				::zpp_nape::space::ZPP_Component tmp3 = this->component;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1651)
				::zpp_nape::space::ZPP_Component_obj::zpp_pool = tmp3->next;
				HX_STACK_LINE(1652)
				::zpp_nape::space::ZPP_Component tmp4 = this->component;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1652)
				tmp4->next = null();
			}
			HX_STACK_LINE(1657)
			Dynamic();
		}
		HX_STACK_LINE(1659)
		::zpp_nape::space::ZPP_Component tmp = this->component;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1659)
		tmp->isBody = true;
		HX_STACK_LINE(1660)
		::zpp_nape::space::ZPP_Component tmp1 = this->component;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1660)
		tmp1->body = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1661)
		this->__iaddedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,addedToSpace,(void))

Void ZPP_Body_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","removedFromSpace",0xaf4e3e28,"zpp_nape.phys.ZPP_Body.removedFromSpace","zpp_nape/phys/Body.hx",1663,0x4bb115c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1664)
		while((true)){
			HX_STACK_LINE(1664)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = this->arbiters;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1664)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1 = tmp->head;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1664)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1664)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1664)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1664)
			if ((tmp4)){
				HX_STACK_LINE(1664)
				break;
			}
			HX_STACK_LINE(1665)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp5 = this->arbiters;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1665)
			::zpp_nape::dynamics::ZPP_Arbiter tmp6 = tmp5->pop_unsafe();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1665)
			::zpp_nape::dynamics::ZPP_Arbiter arb = tmp6;		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(1666)
			{
				HX_STACK_LINE(1666)
				arb->cleared = true;
				HX_STACK_LINE(1666)
				bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1666)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1666)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1666)
				if ((tmp8)){
					HX_STACK_LINE(1666)
					tmp9 = (arb->b2 == hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(1666)
					tmp9 = true;
				}
				HX_STACK_LINE(1666)
				if ((tmp9)){
					HX_STACK_LINE(1666)
					::zpp_nape::util::ZNPList_ZPP_Arbiter tmp10 = arb->b1->arbiters;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1666)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1666)
					{
						HX_STACK_LINE(1666)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1666)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1666)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1666)
						while((true)){
							HX_STACK_LINE(1666)
							bool tmp11 = (cur != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1666)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1666)
							if ((tmp12)){
								HX_STACK_LINE(1666)
								break;
							}
							HX_STACK_LINE(1666)
							bool tmp13 = (cur->elt == arb);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1666)
							if ((tmp13)){
								HX_STACK_LINE(1666)
								{
									HX_STACK_LINE(1666)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1666)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1666)
									bool tmp14 = (pre == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1666)
									if ((tmp14)){
										HX_STACK_LINE(1666)
										old = _this->head;
										HX_STACK_LINE(1666)
										ret1 = old->next;
										HX_STACK_LINE(1666)
										_this->head = ret1;
										HX_STACK_LINE(1666)
										bool tmp15 = (_this->head == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1666)
										if ((tmp15)){
											HX_STACK_LINE(1666)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1666)
										old = pre->next;
										HX_STACK_LINE(1666)
										ret1 = old->next;
										HX_STACK_LINE(1666)
										pre->next = ret1;
										HX_STACK_LINE(1666)
										bool tmp15 = (ret1 == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1666)
										if ((tmp15)){
											HX_STACK_LINE(1666)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1666)
									{
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1666)
										o->elt = null();
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp15 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1666)
										o->next = tmp15;
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1666)
									_this->modified = true;
									HX_STACK_LINE(1666)
									(_this->length)--;
									HX_STACK_LINE(1666)
									_this->pushmod = true;
									HX_STACK_LINE(1666)
									ret1;
								}
								HX_STACK_LINE(1666)
								ret = true;
								HX_STACK_LINE(1666)
								break;
							}
							HX_STACK_LINE(1666)
							pre = cur;
							HX_STACK_LINE(1666)
							cur = cur->next;
						}
						HX_STACK_LINE(1666)
						ret;
					}
				}
				HX_STACK_LINE(1666)
				bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1666)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1666)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1666)
				if ((tmp11)){
					HX_STACK_LINE(1666)
					tmp12 = (arb->b1 == hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(1666)
					tmp12 = true;
				}
				HX_STACK_LINE(1666)
				if ((tmp12)){
					HX_STACK_LINE(1666)
					::zpp_nape::util::ZNPList_ZPP_Arbiter tmp13 = arb->b2->arbiters;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1666)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp13;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1666)
					{
						HX_STACK_LINE(1666)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1666)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1666)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1666)
						while((true)){
							HX_STACK_LINE(1666)
							bool tmp14 = (cur != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1666)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1666)
							if ((tmp15)){
								HX_STACK_LINE(1666)
								break;
							}
							HX_STACK_LINE(1666)
							bool tmp16 = (cur->elt == arb);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1666)
							if ((tmp16)){
								HX_STACK_LINE(1666)
								{
									HX_STACK_LINE(1666)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1666)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1666)
									bool tmp17 = (pre == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1666)
									if ((tmp17)){
										HX_STACK_LINE(1666)
										old = _this->head;
										HX_STACK_LINE(1666)
										ret1 = old->next;
										HX_STACK_LINE(1666)
										_this->head = ret1;
										HX_STACK_LINE(1666)
										bool tmp18 = (_this->head == null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1666)
										if ((tmp18)){
											HX_STACK_LINE(1666)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1666)
										old = pre->next;
										HX_STACK_LINE(1666)
										ret1 = old->next;
										HX_STACK_LINE(1666)
										pre->next = ret1;
										HX_STACK_LINE(1666)
										bool tmp18 = (ret1 == null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1666)
										if ((tmp18)){
											HX_STACK_LINE(1666)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1666)
									{
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1666)
										o->elt = null();
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp18 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1666)
										o->next = tmp18;
										HX_STACK_LINE(1666)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1666)
									_this->modified = true;
									HX_STACK_LINE(1666)
									(_this->length)--;
									HX_STACK_LINE(1666)
									_this->pushmod = true;
									HX_STACK_LINE(1666)
									ret1;
								}
								HX_STACK_LINE(1666)
								ret = true;
								HX_STACK_LINE(1666)
								break;
							}
							HX_STACK_LINE(1666)
							pre = cur;
							HX_STACK_LINE(1666)
							cur = cur->next;
						}
						HX_STACK_LINE(1666)
						ret;
					}
				}
				HX_STACK_LINE(1666)
				bool tmp13 = (arb->pair != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1666)
				if ((tmp13)){
					HX_STACK_LINE(1666)
					arb->pair->arb = null();
					HX_STACK_LINE(1666)
					arb->pair = null();
				}
				HX_STACK_LINE(1666)
				arb->active = false;
				HX_STACK_LINE(1666)
				::zpp_nape::space::ZPP_Space tmp14 = this->space;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1666)
				tmp14->f_arbiters->modified = true;
			}
		}
		HX_STACK_LINE(1668)
		{
			HX_STACK_LINE(1669)
			::zpp_nape::space::ZPP_Component tmp = this->component;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1669)
			::zpp_nape::space::ZPP_Component o = tmp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1678)
			{
				HX_STACK_LINE(1678)
				o->body = null();
				HX_STACK_LINE(1678)
				o->constraint = null();
				HX_STACK_LINE(1678)
				Dynamic();
			}
			HX_STACK_LINE(1679)
			::zpp_nape::space::ZPP_Component tmp1 = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1679)
			o->next = tmp1;
			HX_STACK_LINE(1680)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1685)
		this->component = null();
		HX_STACK_LINE(1686)
		this->__iremovedFromSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,removedFromSpace,(void))

::nape::phys::Body ZPP_Body_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","copy",0x610204a1,"zpp_nape.phys.ZPP_Body.copy","zpp_nape/phys/Body.hx",1688,0x4bb115c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1689)
	::nape::phys::Body tmp = ::nape::phys::Body_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1689)
	::zpp_nape::phys::ZPP_Body ret = tmp->zpp_inner;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1690)
	int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1690)
	ret->type = tmp1;
	HX_STACK_LINE(1691)
	bool tmp2 = this->bulletEnabled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1691)
	ret->bulletEnabled = tmp2;
	HX_STACK_LINE(1692)
	bool tmp3 = this->disableCCD;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1692)
	ret->disableCCD = tmp3;
	HX_STACK_LINE(1693)
	{
		HX_STACK_LINE(1694)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp4 = this->shapes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1694)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp4->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1695)
		while((true)){
			HX_STACK_LINE(1695)
			bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1695)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1695)
			if ((tmp6)){
				HX_STACK_LINE(1695)
				break;
			}
			HX_STACK_LINE(1696)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1698)
			{
				HX_STACK_LINE(1698)
				::zpp_nape::phys::ZPP_Body tmp7 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1698)
				::nape::shape::ShapeList _this = tmp7->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1698)
				::nape::shape::Shape tmp8 = s->outer->copy();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1698)
				::nape::shape::Shape obj = tmp8;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1698)
				bool tmp9 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1698)
				if ((tmp9)){
					HX_STACK_LINE(1698)
					::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1698)
					_this->push(tmp10);
				}
				else{
					HX_STACK_LINE(1698)
					::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1698)
					_this->unshift(tmp10);
				}
			}
			HX_STACK_LINE(1700)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1703)
	{
		HX_STACK_LINE(1704)
		Float tmp4 = this->posx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1704)
		ret->posx = tmp4;
		HX_STACK_LINE(1705)
		Float tmp5 = this->posy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1705)
		ret->posy = tmp5;
		HX_STACK_LINE(1714)
		{
		}
	}
	HX_STACK_LINE(1723)
	{
		HX_STACK_LINE(1724)
		Float tmp4 = this->velx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1724)
		ret->velx = tmp4;
		HX_STACK_LINE(1725)
		Float tmp5 = this->vely;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1725)
		ret->vely = tmp5;
		HX_STACK_LINE(1734)
		{
		}
	}
	HX_STACK_LINE(1743)
	{
		HX_STACK_LINE(1744)
		Float tmp4 = this->forcex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1744)
		ret->forcex = tmp4;
		HX_STACK_LINE(1745)
		Float tmp5 = this->forcey;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1745)
		ret->forcey = tmp5;
		HX_STACK_LINE(1754)
		{
		}
	}
	HX_STACK_LINE(1763)
	Float tmp4 = this->rot;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1763)
	ret->rot = tmp4;
	HX_STACK_LINE(1764)
	Float tmp5 = this->angvel;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1764)
	ret->angvel = tmp5;
	HX_STACK_LINE(1765)
	Float tmp6 = this->torque;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1765)
	ret->torque = tmp6;
	HX_STACK_LINE(1766)
	{
		HX_STACK_LINE(1767)
		Float tmp7 = this->kinvelx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1767)
		ret->kinvelx = tmp7;
		HX_STACK_LINE(1768)
		Float tmp8 = this->kinvely;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1768)
		ret->kinvely = tmp8;
		HX_STACK_LINE(1777)
		{
		}
	}
	HX_STACK_LINE(1786)
	Float tmp7 = this->kinangvel;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1786)
	ret->kinangvel = tmp7;
	HX_STACK_LINE(1787)
	{
		HX_STACK_LINE(1788)
		Float tmp8 = this->svelx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1788)
		ret->svelx = tmp8;
		HX_STACK_LINE(1789)
		Float tmp9 = this->svely;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1789)
		ret->svely = tmp9;
		HX_STACK_LINE(1798)
		{
		}
	}
	HX_STACK_LINE(1807)
	bool tmp8 = this->zip_axis;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1807)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1807)
	if ((tmp9)){
		HX_STACK_LINE(1808)
		Float tmp10 = this->axisx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1808)
		ret->axisx = tmp10;
		HX_STACK_LINE(1809)
		Float tmp11 = this->axisy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1809)
		ret->axisy = tmp11;
		HX_STACK_LINE(1818)
		{
		}
	}
	else{
		HX_STACK_LINE(1827)
		ret->zip_axis = true;
		HX_STACK_LINE(1827)
		{
			HX_STACK_LINE(1827)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp10 = ret->shapes->head;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1827)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1827)
			while((true)){
				HX_STACK_LINE(1827)
				bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1827)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1827)
				if ((tmp12)){
					HX_STACK_LINE(1827)
					break;
				}
				HX_STACK_LINE(1827)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(1827)
				{
					HX_STACK_LINE(1827)
					int tmp13 = s->type;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1827)
					int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1827)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1827)
					if ((tmp15)){
						HX_STACK_LINE(1827)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(1827)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(1827)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(1827)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1827)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1828)
	Float tmp10 = this->rot;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1828)
	ret->rot = tmp10;
	HX_STACK_LINE(1829)
	int tmp11 = this->massMode;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1829)
	ret->massMode = tmp11;
	HX_STACK_LINE(1830)
	int tmp12 = this->gravMassMode;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1830)
	ret->gravMassMode = tmp12;
	HX_STACK_LINE(1831)
	int tmp13 = this->inertiaMode;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1831)
	ret->inertiaMode = tmp13;
	HX_STACK_LINE(1832)
	bool tmp14 = this->norotate;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1832)
	ret->norotate = tmp14;
	HX_STACK_LINE(1833)
	bool tmp15 = this->nomove;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1833)
	ret->nomove = tmp15;
	HX_STACK_LINE(1834)
	Float tmp16 = this->cmass;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1834)
	ret->cmass = tmp16;
	HX_STACK_LINE(1835)
	Float tmp17 = this->cinertia;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1835)
	ret->cinertia = tmp17;
	HX_STACK_LINE(1836)
	bool tmp18 = this->zip_mass;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1836)
	bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1836)
	if ((tmp19)){
		HX_STACK_LINE(1836)
		Float tmp20 = this->mass;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1836)
		ret->mass = tmp20;
	}
	else{
		HX_STACK_LINE(1837)
		ret->invalidate_mass();
	}
	HX_STACK_LINE(1838)
	bool tmp20 = this->zip_gravMass;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1838)
	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1838)
	if ((tmp21)){
		HX_STACK_LINE(1838)
		Float tmp22 = this->gravMass;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1838)
		ret->gravMass = tmp22;
	}
	else{
		HX_STACK_LINE(1839)
		ret->invalidate_gravMass();
	}
	HX_STACK_LINE(1840)
	bool tmp22 = this->zip_gravMassScale;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1840)
	bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1840)
	if ((tmp23)){
		HX_STACK_LINE(1840)
		Float tmp24 = this->gravMassScale;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1840)
		ret->gravMassScale = tmp24;
	}
	else{
		HX_STACK_LINE(1841)
		ret->invalidate_gravMassScale();
	}
	HX_STACK_LINE(1842)
	bool tmp24 = this->zip_inertia;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1842)
	bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1842)
	if ((tmp25)){
		HX_STACK_LINE(1842)
		Float tmp26 = this->inertia;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1842)
		ret->inertia = tmp26;
	}
	else{
		HX_STACK_LINE(1843)
		ret->invalidate_inertia();
	}
	HX_STACK_LINE(1844)
	bool tmp26 = this->zip_aabb;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1844)
	bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(1844)
	if ((tmp27)){
		HX_STACK_LINE(1845)
		{
			HX_STACK_LINE(1846)
			::zpp_nape::geom::ZPP_AABB tmp28 = this->aabb;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1846)
			ret->aabb->minx = tmp28->minx;
			HX_STACK_LINE(1847)
			::zpp_nape::geom::ZPP_AABB tmp29 = this->aabb;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1847)
			ret->aabb->miny = tmp29->miny;
			HX_STACK_LINE(1856)
			{
			}
		}
		HX_STACK_LINE(1865)
		{
			HX_STACK_LINE(1866)
			::zpp_nape::geom::ZPP_AABB tmp28 = this->aabb;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1866)
			ret->aabb->maxx = tmp28->maxx;
			HX_STACK_LINE(1867)
			::zpp_nape::geom::ZPP_AABB tmp29 = this->aabb;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1867)
			ret->aabb->maxy = tmp29->maxy;
			HX_STACK_LINE(1876)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(1886)
		ret->zip_aabb = true;
	}
	HX_STACK_LINE(1887)
	bool tmp28 = this->zip_localCOM;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(1887)
	bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(1887)
	if ((tmp29)){
		HX_STACK_LINE(1888)
		Float tmp30 = this->localCOMx;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1888)
		ret->localCOMx = tmp30;
		HX_STACK_LINE(1889)
		Float tmp31 = this->localCOMy;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1889)
		ret->localCOMy = tmp31;
		HX_STACK_LINE(1898)
		{
		}
	}
	else{
		HX_STACK_LINE(1907)
		ret->zip_localCOM = true;
		HX_STACK_LINE(1907)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1908)
	bool tmp30 = this->zip_worldCOM;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(1908)
	bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(1908)
	if ((tmp31)){
		HX_STACK_LINE(1909)
		Float tmp32 = this->worldCOMx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1909)
		ret->worldCOMx = tmp32;
		HX_STACK_LINE(1910)
		Float tmp33 = this->worldCOMy;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1910)
		ret->worldCOMy = tmp33;
		HX_STACK_LINE(1919)
		{
		}
	}
	else{
		HX_STACK_LINE(1928)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1929)
	::nape::phys::Body tmp32 = ret->outer;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(1929)
	this->copyto(tmp32);
	HX_STACK_LINE(1930)
	::nape::phys::Body tmp33 = ret->outer;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(1930)
	return tmp33;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,copy,return )

Array< ::Dynamic > ZPP_Body_obj::types;

::zpp_nape::util::ZNPList_ZPP_Body ZPP_Body_obj::bodystack;

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Body_obj::bodyset;

bool ZPP_Body_obj::bodysetlt( ::zpp_nape::phys::ZPP_Body a,::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","bodysetlt",0x38e1405c,"zpp_nape.phys.ZPP_Body.bodysetlt","zpp_nape/phys/Body.hx",215,0x4bb115c1)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(216)
	bool tmp = (a->id < b->id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Body_obj,bodysetlt,return )

int ZPP_Body_obj::cur_graph_depth;

::nape::phys::Body ZPP_Body_obj::__static( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Body","__static",0x6c3d76ba,"zpp_nape.phys.ZPP_Body.__static","zpp_nape/phys/Body.hx",1376,0x4bb115c1)
	HX_STACK_LINE(1377)
	::nape::phys::BodyType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1377)
	{
		HX_STACK_LINE(1377)
		::nape::phys::BodyType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1377)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1377)
		if ((tmp2)){
			HX_STACK_LINE(1377)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1377)
			::nape::phys::BodyType tmp3 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1377)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp3;
			HX_STACK_LINE(1377)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1377)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
	}
	HX_STACK_LINE(1377)
	::nape::phys::Body tmp1 = ::nape::phys::Body_obj::__new(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1377)
	::nape::phys::Body ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1378)
	::zpp_nape::phys::ZPP_Body si = ret->zpp_inner;		HX_STACK_VAR(si,"si");
	HX_STACK_LINE(1379)
	si->world = true;
	HX_STACK_LINE(1380)
	::zpp_nape::util::ZPP_ShapeList tmp2 = si->wrap_shapes->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1380)
	tmp2->immutable = true;
	HX_STACK_LINE(1381)
	Float tmp3 = si->gravMass = ((Float)0.0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1381)
	Float tmp4 = si->mass = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1381)
	Float tmp5 = si->cmass = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1381)
	Float tmp6 = si->imass = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1381)
	si->smass = tmp6;
	HX_STACK_LINE(1382)
	Float tmp7 = si->inertia = ((Float)0.0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1382)
	Float tmp8 = si->cinertia = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1382)
	Float tmp9 = si->iinertia = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1382)
	si->sinertia = tmp9;
	HX_STACK_LINE(1383)
	si->cbTypes->clear();
	HX_STACK_LINE(1384)
	::nape::phys::Body tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1384)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,__static,return )


ZPP_Body_obj::ZPP_Body_obj()
{
}

void ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Body);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(graph_depth,"graph_depth");
	HX_MARK_MEMBER_NAME(sweepTime,"sweepTime");
	HX_MARK_MEMBER_NAME(sweep_angvel,"sweep_angvel");
	HX_MARK_MEMBER_NAME(sweepFrozen,"sweepFrozen");
	HX_MARK_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(bulletEnabled,"bulletEnabled");
	HX_MARK_MEMBER_NAME(disableCCD,"disableCCD");
	HX_MARK_MEMBER_NAME(pre_posx,"pre_posx");
	HX_MARK_MEMBER_NAME(pre_posy,"pre_posy");
	HX_MARK_MEMBER_NAME(posx,"posx");
	HX_MARK_MEMBER_NAME(posy,"posy");
	HX_MARK_MEMBER_NAME(wrap_pos,"wrap_pos");
	HX_MARK_MEMBER_NAME(velx,"velx");
	HX_MARK_MEMBER_NAME(vely,"vely");
	HX_MARK_MEMBER_NAME(wrap_vel,"wrap_vel");
	HX_MARK_MEMBER_NAME(forcex,"forcex");
	HX_MARK_MEMBER_NAME(forcey,"forcey");
	HX_MARK_MEMBER_NAME(wrap_force,"wrap_force");
	HX_MARK_MEMBER_NAME(kinvelx,"kinvelx");
	HX_MARK_MEMBER_NAME(kinvely,"kinvely");
	HX_MARK_MEMBER_NAME(wrap_kinvel,"wrap_kinvel");
	HX_MARK_MEMBER_NAME(svelx,"svelx");
	HX_MARK_MEMBER_NAME(svely,"svely");
	HX_MARK_MEMBER_NAME(wrap_svel,"wrap_svel");
	HX_MARK_MEMBER_NAME(wrapcvel,"wrapcvel");
	HX_MARK_MEMBER_NAME(angvel,"angvel");
	HX_MARK_MEMBER_NAME(torque,"torque");
	HX_MARK_MEMBER_NAME(kinangvel,"kinangvel");
	HX_MARK_MEMBER_NAME(pre_rot,"pre_rot");
	HX_MARK_MEMBER_NAME(rot,"rot");
	HX_MARK_MEMBER_NAME(axisx,"axisx");
	HX_MARK_MEMBER_NAME(axisy,"axisy");
	HX_MARK_MEMBER_NAME(zip_axis,"zip_axis");
	HX_MARK_MEMBER_NAME(kinematicDelaySleep,"kinematicDelaySleep");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(zip_mass,"zip_mass");
	HX_MARK_MEMBER_NAME(massMode,"massMode");
	HX_MARK_MEMBER_NAME(imass,"imass");
	HX_MARK_MEMBER_NAME(smass,"smass");
	HX_MARK_MEMBER_NAME(cmass,"cmass");
	HX_MARK_MEMBER_NAME(nomove,"nomove");
	HX_MARK_MEMBER_NAME(gravMass,"gravMass");
	HX_MARK_MEMBER_NAME(zip_gravMass,"zip_gravMass");
	HX_MARK_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_MARK_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_MARK_MEMBER_NAME(zip_gravMassScale,"zip_gravMassScale");
	HX_MARK_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(zip_inertia,"zip_inertia");
	HX_MARK_MEMBER_NAME(cinertia,"cinertia");
	HX_MARK_MEMBER_NAME(iinertia,"iinertia");
	HX_MARK_MEMBER_NAME(sinertia,"sinertia");
	HX_MARK_MEMBER_NAME(norotate,"norotate");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_MARK_MEMBER_NAME(localCOMx,"localCOMx");
	HX_MARK_MEMBER_NAME(localCOMy,"localCOMy");
	HX_MARK_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_MARK_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_MARK_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_MARK_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_MARK_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_MARK_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	::zpp_nape::phys::ZPP_Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(graph_depth,"graph_depth");
	HX_VISIT_MEMBER_NAME(sweepTime,"sweepTime");
	HX_VISIT_MEMBER_NAME(sweep_angvel,"sweep_angvel");
	HX_VISIT_MEMBER_NAME(sweepFrozen,"sweepFrozen");
	HX_VISIT_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(bulletEnabled,"bulletEnabled");
	HX_VISIT_MEMBER_NAME(disableCCD,"disableCCD");
	HX_VISIT_MEMBER_NAME(pre_posx,"pre_posx");
	HX_VISIT_MEMBER_NAME(pre_posy,"pre_posy");
	HX_VISIT_MEMBER_NAME(posx,"posx");
	HX_VISIT_MEMBER_NAME(posy,"posy");
	HX_VISIT_MEMBER_NAME(wrap_pos,"wrap_pos");
	HX_VISIT_MEMBER_NAME(velx,"velx");
	HX_VISIT_MEMBER_NAME(vely,"vely");
	HX_VISIT_MEMBER_NAME(wrap_vel,"wrap_vel");
	HX_VISIT_MEMBER_NAME(forcex,"forcex");
	HX_VISIT_MEMBER_NAME(forcey,"forcey");
	HX_VISIT_MEMBER_NAME(wrap_force,"wrap_force");
	HX_VISIT_MEMBER_NAME(kinvelx,"kinvelx");
	HX_VISIT_MEMBER_NAME(kinvely,"kinvely");
	HX_VISIT_MEMBER_NAME(wrap_kinvel,"wrap_kinvel");
	HX_VISIT_MEMBER_NAME(svelx,"svelx");
	HX_VISIT_MEMBER_NAME(svely,"svely");
	HX_VISIT_MEMBER_NAME(wrap_svel,"wrap_svel");
	HX_VISIT_MEMBER_NAME(wrapcvel,"wrapcvel");
	HX_VISIT_MEMBER_NAME(angvel,"angvel");
	HX_VISIT_MEMBER_NAME(torque,"torque");
	HX_VISIT_MEMBER_NAME(kinangvel,"kinangvel");
	HX_VISIT_MEMBER_NAME(pre_rot,"pre_rot");
	HX_VISIT_MEMBER_NAME(rot,"rot");
	HX_VISIT_MEMBER_NAME(axisx,"axisx");
	HX_VISIT_MEMBER_NAME(axisy,"axisy");
	HX_VISIT_MEMBER_NAME(zip_axis,"zip_axis");
	HX_VISIT_MEMBER_NAME(kinematicDelaySleep,"kinematicDelaySleep");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(zip_mass,"zip_mass");
	HX_VISIT_MEMBER_NAME(massMode,"massMode");
	HX_VISIT_MEMBER_NAME(imass,"imass");
	HX_VISIT_MEMBER_NAME(smass,"smass");
	HX_VISIT_MEMBER_NAME(cmass,"cmass");
	HX_VISIT_MEMBER_NAME(nomove,"nomove");
	HX_VISIT_MEMBER_NAME(gravMass,"gravMass");
	HX_VISIT_MEMBER_NAME(zip_gravMass,"zip_gravMass");
	HX_VISIT_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_VISIT_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_VISIT_MEMBER_NAME(zip_gravMassScale,"zip_gravMassScale");
	HX_VISIT_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(zip_inertia,"zip_inertia");
	HX_VISIT_MEMBER_NAME(cinertia,"cinertia");
	HX_VISIT_MEMBER_NAME(iinertia,"iinertia");
	HX_VISIT_MEMBER_NAME(sinertia,"sinertia");
	HX_VISIT_MEMBER_NAME(norotate,"norotate");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_VISIT_MEMBER_NAME(localCOMx,"localCOMx");
	HX_VISIT_MEMBER_NAME(localCOMy,"localCOMy");
	HX_VISIT_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_VISIT_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_VISIT_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_VISIT_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_VISIT_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_VISIT_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	::zpp_nape::phys::ZPP_Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Body_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rot") ) { return rot; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"posx") ) { return posx; }
		if (HX_FIELD_EQ(inName,"posy") ) { return posy; }
		if (HX_FIELD_EQ(inName,"velx") ) { return velx; }
		if (HX_FIELD_EQ(inName,"vely") ) { return vely; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"svelx") ) { return svelx; }
		if (HX_FIELD_EQ(inName,"svely") ) { return svely; }
		if (HX_FIELD_EQ(inName,"axisx") ) { return axisx; }
		if (HX_FIELD_EQ(inName,"axisy") ) { return axisy; }
		if (HX_FIELD_EQ(inName,"imass") ) { return imass; }
		if (HX_FIELD_EQ(inName,"smass") ) { return smass; }
		if (HX_FIELD_EQ(inName,"cmass") ) { return cmass; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		if (HX_FIELD_EQ(inName,"atRest") ) { return atRest_dyn(); }
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet; }
		if (HX_FIELD_EQ(inName,"forcex") ) { return forcex; }
		if (HX_FIELD_EQ(inName,"forcey") ) { return forcey; }
		if (HX_FIELD_EQ(inName,"angvel") ) { return angvel; }
		if (HX_FIELD_EQ(inName,"torque") ) { return torque; }
		if (HX_FIELD_EQ(inName,"nomove") ) { return nomove; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kinvelx") ) { return kinvelx; }
		if (HX_FIELD_EQ(inName,"kinvely") ) { return kinvely; }
		if (HX_FIELD_EQ(inName,"pre_rot") ) { return pre_rot; }
		if (HX_FIELD_EQ(inName,"inertia") ) { return inertia; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"compound") ) { return compound; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return arbiters; }
		if (HX_FIELD_EQ(inName,"pre_posx") ) { return pre_posx; }
		if (HX_FIELD_EQ(inName,"pre_posy") ) { return pre_posy; }
		if (HX_FIELD_EQ(inName,"wrap_pos") ) { return wrap_pos; }
		if (HX_FIELD_EQ(inName,"wrap_vel") ) { return wrap_vel; }
		if (HX_FIELD_EQ(inName,"wrapcvel") ) { return wrapcvel; }
		if (HX_FIELD_EQ(inName,"zip_axis") ) { return zip_axis; }
		if (HX_FIELD_EQ(inName,"zip_mass") ) { return zip_mass; }
		if (HX_FIELD_EQ(inName,"massMode") ) { return massMode; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { return gravMass; }
		if (HX_FIELD_EQ(inName,"cinertia") ) { return cinertia; }
		if (HX_FIELD_EQ(inName,"iinertia") ) { return iinertia; }
		if (HX_FIELD_EQ(inName,"sinertia") ) { return sinertia; }
		if (HX_FIELD_EQ(inName,"norotate") ) { return norotate; }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { return zip_aabb; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"component") ) { return component; }
		if (HX_FIELD_EQ(inName,"sweepTime") ) { return sweepTime; }
		if (HX_FIELD_EQ(inName,"wrap_svel") ) { return wrap_svel; }
		if (HX_FIELD_EQ(inName,"setupsvel") ) { return setupsvel_dyn(); }
		if (HX_FIELD_EQ(inName,"kinangvel") ) { return kinangvel; }
		if (HX_FIELD_EQ(inName,"delta_rot") ) { return delta_rot_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { return localCOMx; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { return localCOMy; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { return worldCOMx; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { return worldCOMy; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return disableCCD; }
		if (HX_FIELD_EQ(inName,"wrap_force") ) { return wrap_force; }
		if (HX_FIELD_EQ(inName,"setupForce") ) { return setupForce_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_cvel") ) { return setup_cvel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		if (HX_FIELD_EQ(inName,"graph_depth") ) { return graph_depth; }
		if (HX_FIELD_EQ(inName,"sweepFrozen") ) { return sweepFrozen; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { return sweepRadius; }
		if (HX_FIELD_EQ(inName,"wrap_kinvel") ) { return wrap_kinvel; }
		if (HX_FIELD_EQ(inName,"setupkinvel") ) { return setupkinvel_dyn(); }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return inertiaMode; }
		if (HX_FIELD_EQ(inName,"zip_inertia") ) { return zip_inertia; }
		if (HX_FIELD_EQ(inName,"getlocalCOM") ) { return getlocalCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"getworldCOM") ) { return getworldCOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sweep_angvel") ) { return sweep_angvel; }
		if (HX_FIELD_EQ(inName,"pos_validate") ) { return pos_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"vel_validate") ) { return vel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_gravMass") ) { return zip_gravMass; }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return gravMassMode; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { return zip_localCOM; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { return zip_worldCOM; }
		if (HX_FIELD_EQ(inName,"shapes_adder") ) { return shapes_adder_dyn(); }
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { return wrap_arbiters; }
		if (HX_FIELD_EQ(inName,"bulletEnabled") ) { return bulletEnabled; }
		if (HX_FIELD_EQ(inName,"sweepValidate") ) { return sweepValidate_dyn(); }
		if (HX_FIELD_EQ(inName,"svel_validate") ) { return svel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"setupPosition") ) { return setupPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setupVelocity") ) { return setupVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"cvel_validate") ) { return cvel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_axis") ) { return validate_axis_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_mass") ) { return validate_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return gravMassScale; }
		if (HX_FIELD_EQ(inName,"validate_aabb") ) { return validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { return wrap_localCOM; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { return wrap_worldCOM; }
		if (HX_FIELD_EQ(inName,"aabb_validate") ) { return aabb_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_subber") ) { return shapes_subber_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sweepIntegrate") ) { return sweepIntegrate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_pos") ) { return invalidate_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"pos_invalidate") ) { return pos_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"vel_invalidate") ) { return vel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"force_validate") ) { return force_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_rot") ) { return invalidate_rot_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"invalidate_type") ) { return invalidate_type_dyn(); }
		if (HX_FIELD_EQ(inName,"connectedBodies") ) { return connectedBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshArbiters") ) { return refreshArbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"kinvel_validate") ) { return kinvel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"svel_invalidate") ) { return svel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_mass") ) { return invalidate_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_wake") ) { return invalidate_wake_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_aabb") ) { return invalidate_aabb_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		if (HX_FIELD_EQ(inName,"init_bodysetlist") ) { return init_bodysetlist_dyn(); }
		if (HX_FIELD_EQ(inName,"force_invalidate") ) { return force_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_inertia") ) { return validate_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"invalidate_shapes") ) { return invalidate_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"interactingBodies") ) { return interactingBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"kinvel_invalidate") ) { return kinvel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_gravMassScale") ) { return zip_gravMassScale; }
		if (HX_FIELD_EQ(inName,"validate_gravMass") ) { return validate_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_localCOM") ) { return validate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_worldCOM") ) { return validate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_invalidate") ) { return shapes_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_modifiable") ) { return shapes_modifiable_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidate_inertia") ) { return invalidate_inertia_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"quick_validate_axis") ) { return quick_validate_axis_dyn(); }
		if (HX_FIELD_EQ(inName,"kinematicDelaySleep") ) { return kinematicDelaySleep; }
		if (HX_FIELD_EQ(inName,"invalidate_gravMass") ) { return invalidate_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_localCOM") ) { return invalidate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_worldCOM") ) { return invalidate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"__immutable_midstep") ) { return __immutable_midstep_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"connectedBodies_cont") ) { return connectedBodies_cont_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"validate_gravMassScale") ) { return validate_gravMassScale_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidate_gravMassScale") ) { return invalidate_gravMassScale_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Body_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { outValue = types; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyset") ) { outValue = bodyset; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__static") ) { outValue = __static_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodystack") ) { outValue = bodystack; return true;  }
		if (HX_FIELD_EQ(inName,"bodysetlt") ) { outValue = bodysetlt_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_graph_depth") ) { outValue = cur_graph_depth; return true;  }
	}
	return false;
}

Dynamic ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rot") ) { rot=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posx") ) { posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posy") ) { posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velx") ) { velx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vely") ) { vely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"svelx") ) { svelx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"svely") ) { svely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisx") ) { axisx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisy") ) { axisy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imass") ) { imass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smass") ) { smass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cmass") ) { cmass=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forcex") ) { forcex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forcey") ) { forcey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angvel") ) { angvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"torque") ) { torque=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nomove") ) { nomove=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kinvelx") ) { kinvelx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinvely") ) { kinvely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_rot") ) { pre_rot=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertia") ) { inertia=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_posx") ) { pre_posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_posy") ) { pre_posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_pos") ) { wrap_pos=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_vel") ) { wrap_vel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapcvel") ) { wrapcvel=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_axis") ) { zip_axis=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_mass") ) { zip_mass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"massMode") ) { massMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { gravMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cinertia") ) { cinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iinertia") ) { iinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinertia") ) { sinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"norotate") ) { norotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { zip_aabb=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepTime") ) { sweepTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_svel") ) { wrap_svel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinangvel") ) { kinangvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { localCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { localCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { worldCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { worldCOMy=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disableCCD") ) { disableCCD=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_force") ) { wrap_force=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graph_depth") ) { graph_depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepFrozen") ) { sweepFrozen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { sweepRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_kinvel") ) { wrap_kinvel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { inertiaMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_inertia") ) { zip_inertia=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sweep_angvel") ) { sweep_angvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_gravMass") ) { zip_gravMass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { gravMassMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { zip_localCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { zip_worldCOM=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { wrap_arbiters=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletEnabled") ) { bulletEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { gravMassScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { wrap_localCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { wrap_worldCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"zip_gravMassScale") ) { zip_gravMassScale=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"kinematicDelaySleep") ) { kinematicDelaySleep=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Body_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyset") ) { bodyset=ioValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodystack") ) { bodystack=ioValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Body >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_graph_depth") ) { cur_graph_depth=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"));
	outFields->push(HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"));
	outFields->push(HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21"));
	outFields->push(HX_HCSTRING("wrap_arbiters","\xbf","\x60","\xdc","\x11"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	outFields->push(HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"));
	outFields->push(HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
	outFields->push(HX_HCSTRING("graph_depth","\x12","\xb6","\xfa","\x25"));
	outFields->push(HX_HCSTRING("sweepTime","\x19","\x74","\x9f","\xd7"));
	outFields->push(HX_HCSTRING("sweep_angvel","\xf6","\x7c","\xab","\x5e"));
	outFields->push(HX_HCSTRING("sweepFrozen","\xac","\x4c","\x76","\x2c"));
	outFields->push(HX_HCSTRING("sweepRadius","\x5e","\x93","\x9c","\x27"));
	outFields->push(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"));
	outFields->push(HX_HCSTRING("bulletEnabled","\x5f","\x46","\x09","\xad"));
	outFields->push(HX_HCSTRING("disableCCD","\xbc","\xc8","\x9b","\xb6"));
	outFields->push(HX_HCSTRING("pre_posx","\x40","\xe1","\x19","\xea"));
	outFields->push(HX_HCSTRING("pre_posy","\x41","\xe1","\x19","\xea"));
	outFields->push(HX_HCSTRING("posx","\x64","\x84","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("posy","\x65","\x84","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("wrap_pos","\x5f","\x89","\xa1","\x9f"));
	outFields->push(HX_HCSTRING("velx","\x7b","\x2f","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("vely","\x7c","\x2f","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("wrap_vel","\x28","\x0e","\xa6","\x9f"));
	outFields->push(HX_HCSTRING("forcex","\x2d","\xfc","\x86","\xfd"));
	outFields->push(HX_HCSTRING("forcey","\x2e","\xfc","\x86","\xfd"));
	outFields->push(HX_HCSTRING("wrap_force","\x76","\xa6","\x1b","\x30"));
	outFields->push(HX_HCSTRING("kinvelx","\x8b","\x84","\x51","\x01"));
	outFields->push(HX_HCSTRING("kinvely","\x8c","\x84","\x51","\x01"));
	outFields->push(HX_HCSTRING("wrap_kinvel","\x62","\xe4","\xe0","\x70"));
	outFields->push(HX_HCSTRING("svelx","\x6e","\xe5","\x60","\x85"));
	outFields->push(HX_HCSTRING("svely","\x6f","\xe5","\x60","\x85"));
	outFields->push(HX_HCSTRING("wrap_svel","\x9f","\x91","\xb7","\x0f"));
	outFields->push(HX_HCSTRING("wrapcvel","\xa4","\xe8","\x4a","\xa2"));
	outFields->push(HX_HCSTRING("angvel","\xc3","\xab","\x20","\x63"));
	outFields->push(HX_HCSTRING("torque","\xca","\xb6","\x90","\x96"));
	outFields->push(HX_HCSTRING("kinangvel","\xd3","\x64","\xf1","\xe1"));
	outFields->push(HX_HCSTRING("pre_rot","\xbb","\xd4","\xad","\x2c"));
	outFields->push(HX_HCSTRING("rot","\x17","\xe2","\x56","\x00"));
	outFields->push(HX_HCSTRING("axisx","\xb7","\xf0","\x7f","\x29"));
	outFields->push(HX_HCSTRING("axisy","\xb8","\xf0","\x7f","\x29"));
	outFields->push(HX_HCSTRING("zip_axis","\xff","\xb9","\xda","\x0b"));
	outFields->push(HX_HCSTRING("kinematicDelaySleep","\xf9","\x0f","\xda","\xc0"));
	outFields->push(HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("zip_mass","\x52","\xde","\xb7","\x13"));
	outFields->push(HX_HCSTRING("massMode","\x77","\xca","\x75","\x81"));
	outFields->push(HX_HCSTRING("imass","\xdd","\x29","\x69","\xbd"));
	outFields->push(HX_HCSTRING("smass","\xe7","\xf6","\x6a","\x7f"));
	outFields->push(HX_HCSTRING("cmass","\xd7","\xae","\x01","\x49"));
	outFields->push(HX_HCSTRING("nomove","\xd2","\xf7","\x1c","\x2d"));
	outFields->push(HX_HCSTRING("gravMass","\xf4","\xac","\xf0","\x74"));
	outFields->push(HX_HCSTRING("zip_gravMass","\x52","\x51","\x8f","\x0d"));
	outFields->push(HX_HCSTRING("gravMassMode","\x77","\x36","\xb6","\x49"));
	outFields->push(HX_HCSTRING("gravMassScale","\xf6","\x1c","\x30","\xa2"));
	outFields->push(HX_HCSTRING("zip_gravMassScale","\xd8","\xe3","\x8a","\x29"));
	outFields->push(HX_HCSTRING("inertiaMode","\x7d","\xb5","\x39","\x0d"));
	outFields->push(HX_HCSTRING("inertia","\xfa","\xb0","\xba","\x7c"));
	outFields->push(HX_HCSTRING("zip_inertia","\x5c","\x42","\x9b","\x48"));
	outFields->push(HX_HCSTRING("cinertia","\xf7","\xd2","\x3c","\x9b"));
	outFields->push(HX_HCSTRING("iinertia","\xb1","\x7f","\x6b","\xf2"));
	outFields->push(HX_HCSTRING("sinertia","\xe7","\xf4","\x63","\x2e"));
	outFields->push(HX_HCSTRING("norotate","\x5c","\xcd","\x9b","\x66"));
	outFields->push(HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"));
	outFields->push(HX_HCSTRING("zip_aabb","\xfe","\x3f","\xc9","\x0b"));
	outFields->push(HX_HCSTRING("localCOMx","\x22","\xdc","\xee","\x03"));
	outFields->push(HX_HCSTRING("localCOMy","\x23","\xdc","\xee","\x03"));
	outFields->push(HX_HCSTRING("zip_localCOM","\xf4","\x6b","\x7e","\x78"));
	outFields->push(HX_HCSTRING("worldCOMx","\x89","\xa8","\xc8","\x4e"));
	outFields->push(HX_HCSTRING("worldCOMy","\x8a","\xa8","\xc8","\x4e"));
	outFields->push(HX_HCSTRING("zip_worldCOM","\x6d","\x69","\x22","\x3d"));
	outFields->push(HX_HCSTRING("wrap_localCOM","\xeb","\xfb","\x09","\xd0"));
	outFields->push(HX_HCSTRING("wrap_worldCOM","\x64","\xf9","\xad","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(ZPP_Body_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Body_obj,compound),HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Shape*/ ,(int)offsetof(ZPP_Body_obj,shapes),HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_Body_obj,wrap_shapes),HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Body_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Arbiter*/ ,(int)offsetof(ZPP_Body_obj,arbiters),HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21")},
	{hx::fsObject /*::nape::dynamics::ArbiterList*/ ,(int)offsetof(ZPP_Body_obj,wrap_arbiters),HX_HCSTRING("wrap_arbiters","\xbf","\x60","\xdc","\x11")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Constraint*/ ,(int)offsetof(ZPP_Body_obj,constraints),HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17")},
	{hx::fsObject /*::nape::constraint::ConstraintList*/ ,(int)offsetof(ZPP_Body_obj,wrap_constraints),HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Component*/ ,(int)offsetof(ZPP_Body_obj,component),HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,graph_depth),HX_HCSTRING("graph_depth","\x12","\xb6","\xfa","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,sweepTime),HX_HCSTRING("sweepTime","\x19","\x74","\x9f","\xd7")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,sweep_angvel),HX_HCSTRING("sweep_angvel","\xf6","\x7c","\xab","\x5e")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,sweepFrozen),HX_HCSTRING("sweepFrozen","\xac","\x4c","\x76","\x2c")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,sweepRadius),HX_HCSTRING("sweepRadius","\x5e","\x93","\x9c","\x27")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,bullet),HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,bulletEnabled),HX_HCSTRING("bulletEnabled","\x5f","\x46","\x09","\xad")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,disableCCD),HX_HCSTRING("disableCCD","\xbc","\xc8","\x9b","\xb6")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,pre_posx),HX_HCSTRING("pre_posx","\x40","\xe1","\x19","\xea")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,pre_posy),HX_HCSTRING("pre_posy","\x41","\xe1","\x19","\xea")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,posx),HX_HCSTRING("posx","\x64","\x84","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,posy),HX_HCSTRING("posy","\x65","\x84","\x5c","\x4a")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_pos),HX_HCSTRING("wrap_pos","\x5f","\x89","\xa1","\x9f")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,velx),HX_HCSTRING("velx","\x7b","\x2f","\x4c","\x4e")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,vely),HX_HCSTRING("vely","\x7c","\x2f","\x4c","\x4e")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_vel),HX_HCSTRING("wrap_vel","\x28","\x0e","\xa6","\x9f")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,forcex),HX_HCSTRING("forcex","\x2d","\xfc","\x86","\xfd")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,forcey),HX_HCSTRING("forcey","\x2e","\xfc","\x86","\xfd")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_force),HX_HCSTRING("wrap_force","\x76","\xa6","\x1b","\x30")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,kinvelx),HX_HCSTRING("kinvelx","\x8b","\x84","\x51","\x01")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,kinvely),HX_HCSTRING("kinvely","\x8c","\x84","\x51","\x01")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_kinvel),HX_HCSTRING("wrap_kinvel","\x62","\xe4","\xe0","\x70")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,svelx),HX_HCSTRING("svelx","\x6e","\xe5","\x60","\x85")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,svely),HX_HCSTRING("svely","\x6f","\xe5","\x60","\x85")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_svel),HX_HCSTRING("wrap_svel","\x9f","\x91","\xb7","\x0f")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(int)offsetof(ZPP_Body_obj,wrapcvel),HX_HCSTRING("wrapcvel","\xa4","\xe8","\x4a","\xa2")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,angvel),HX_HCSTRING("angvel","\xc3","\xab","\x20","\x63")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,torque),HX_HCSTRING("torque","\xca","\xb6","\x90","\x96")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,kinangvel),HX_HCSTRING("kinangvel","\xd3","\x64","\xf1","\xe1")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,pre_rot),HX_HCSTRING("pre_rot","\xbb","\xd4","\xad","\x2c")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,rot),HX_HCSTRING("rot","\x17","\xe2","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,axisx),HX_HCSTRING("axisx","\xb7","\xf0","\x7f","\x29")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,axisy),HX_HCSTRING("axisy","\xb8","\xf0","\x7f","\x29")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_axis),HX_HCSTRING("zip_axis","\xff","\xb9","\xda","\x0b")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,kinematicDelaySleep),HX_HCSTRING("kinematicDelaySleep","\xf9","\x0f","\xda","\xc0")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,mass),HX_HCSTRING("mass","\xf4","\x40","\x56","\x48")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_mass),HX_HCSTRING("zip_mass","\x52","\xde","\xb7","\x13")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,massMode),HX_HCSTRING("massMode","\x77","\xca","\x75","\x81")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,imass),HX_HCSTRING("imass","\xdd","\x29","\x69","\xbd")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,smass),HX_HCSTRING("smass","\xe7","\xf6","\x6a","\x7f")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,cmass),HX_HCSTRING("cmass","\xd7","\xae","\x01","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,nomove),HX_HCSTRING("nomove","\xd2","\xf7","\x1c","\x2d")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,gravMass),HX_HCSTRING("gravMass","\xf4","\xac","\xf0","\x74")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_gravMass),HX_HCSTRING("zip_gravMass","\x52","\x51","\x8f","\x0d")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,gravMassMode),HX_HCSTRING("gravMassMode","\x77","\x36","\xb6","\x49")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,gravMassScale),HX_HCSTRING("gravMassScale","\xf6","\x1c","\x30","\xa2")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_gravMassScale),HX_HCSTRING("zip_gravMassScale","\xd8","\xe3","\x8a","\x29")},
	{hx::fsInt,(int)offsetof(ZPP_Body_obj,inertiaMode),HX_HCSTRING("inertiaMode","\x7d","\xb5","\x39","\x0d")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,inertia),HX_HCSTRING("inertia","\xfa","\xb0","\xba","\x7c")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_inertia),HX_HCSTRING("zip_inertia","\x5c","\x42","\x9b","\x48")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,cinertia),HX_HCSTRING("cinertia","\xf7","\xd2","\x3c","\x9b")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,iinertia),HX_HCSTRING("iinertia","\xb1","\x7f","\x6b","\xf2")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,sinertia),HX_HCSTRING("sinertia","\xe7","\xf4","\x63","\x2e")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,norotate),HX_HCSTRING("norotate","\x5c","\xcd","\x9b","\x66")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_Body_obj,aabb),HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_aabb),HX_HCSTRING("zip_aabb","\xfe","\x3f","\xc9","\x0b")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,localCOMx),HX_HCSTRING("localCOMx","\x22","\xdc","\xee","\x03")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,localCOMy),HX_HCSTRING("localCOMy","\x23","\xdc","\xee","\x03")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_localCOM),HX_HCSTRING("zip_localCOM","\xf4","\x6b","\x7e","\x78")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,worldCOMx),HX_HCSTRING("worldCOMx","\x89","\xa8","\xc8","\x4e")},
	{hx::fsFloat,(int)offsetof(ZPP_Body_obj,worldCOMy),HX_HCSTRING("worldCOMy","\x8a","\xa8","\xc8","\x4e")},
	{hx::fsBool,(int)offsetof(ZPP_Body_obj,zip_worldCOM),HX_HCSTRING("zip_worldCOM","\x6d","\x69","\x22","\x3d")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_localCOM),HX_HCSTRING("wrap_localCOM","\xeb","\xfb","\x09","\xd0")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Body_obj,wrap_worldCOM),HX_HCSTRING("wrap_worldCOM","\x64","\xf9","\xad","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &ZPP_Body_obj::types,HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Body*/ ,(void *) &ZPP_Body_obj::bodystack,HX_HCSTRING("bodystack","\x66","\x21","\xe6","\xb0")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_Body*/ ,(void *) &ZPP_Body_obj::bodyset,HX_HCSTRING("bodyset","\x40","\xf2","\x38","\x31")},
	{hx::fsInt,(void *) &ZPP_Body_obj::cur_graph_depth,HX_HCSTRING("cur_graph_depth","\x93","\x29","\x42","\x32")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("isStatic","\x38","\x78","\x65","\x5e"),
	HX_HCSTRING("isDynamic","\xb5","\x1c","\x14","\x3a"),
	HX_HCSTRING("isKinematic","\xbb","\x2f","\x80","\xc2"),
	HX_HCSTRING("invalidate_type","\x3e","\xb7","\x9a","\x5a"),
	HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"),
	HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"),
	HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07"),
	HX_HCSTRING("invalidate_shapes","\xb6","\xc7","\x18","\x06"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21"),
	HX_HCSTRING("wrap_arbiters","\xbf","\x60","\xdc","\x11"),
	HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"),
	HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"),
	HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"),
	HX_HCSTRING("graph_depth","\x12","\xb6","\xfa","\x25"),
	HX_HCSTRING("init_bodysetlist","\xaf","\x6f","\x2b","\xd8"),
	HX_HCSTRING("connectedBodies_cont","\x08","\x12","\x55","\x60"),
	HX_HCSTRING("connectedBodies","\x29","\x2f","\x18","\x68"),
	HX_HCSTRING("interactingBodies","\x8c","\xbf","\x60","\xf1"),
	HX_HCSTRING("atRest","\xa7","\xd1","\x99","\xc9"),
	HX_HCSTRING("refreshArbiters","\x65","\x95","\x0a","\x1f"),
	HX_HCSTRING("sweepTime","\x19","\x74","\x9f","\xd7"),
	HX_HCSTRING("sweep_angvel","\xf6","\x7c","\xab","\x5e"),
	HX_HCSTRING("sweepFrozen","\xac","\x4c","\x76","\x2c"),
	HX_HCSTRING("sweepRadius","\x5e","\x93","\x9c","\x27"),
	HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"),
	HX_HCSTRING("bulletEnabled","\x5f","\x46","\x09","\xad"),
	HX_HCSTRING("disableCCD","\xbc","\xc8","\x9b","\xb6"),
	HX_HCSTRING("sweepIntegrate","\xe5","\x1a","\x65","\x57"),
	HX_HCSTRING("sweepValidate","\xa2","\x6e","\xc9","\xc2"),
	HX_HCSTRING("pre_posx","\x40","\xe1","\x19","\xea"),
	HX_HCSTRING("pre_posy","\x41","\xe1","\x19","\xea"),
	HX_HCSTRING("posx","\x64","\x84","\x5c","\x4a"),
	HX_HCSTRING("posy","\x65","\x84","\x5c","\x4a"),
	HX_HCSTRING("wrap_pos","\x5f","\x89","\xa1","\x9f"),
	HX_HCSTRING("velx","\x7b","\x2f","\x4c","\x4e"),
	HX_HCSTRING("vely","\x7c","\x2f","\x4c","\x4e"),
	HX_HCSTRING("wrap_vel","\x28","\x0e","\xa6","\x9f"),
	HX_HCSTRING("forcex","\x2d","\xfc","\x86","\xfd"),
	HX_HCSTRING("forcey","\x2e","\xfc","\x86","\xfd"),
	HX_HCSTRING("wrap_force","\x76","\xa6","\x1b","\x30"),
	HX_HCSTRING("kinvelx","\x8b","\x84","\x51","\x01"),
	HX_HCSTRING("kinvely","\x8c","\x84","\x51","\x01"),
	HX_HCSTRING("wrap_kinvel","\x62","\xe4","\xe0","\x70"),
	HX_HCSTRING("svelx","\x6e","\xe5","\x60","\x85"),
	HX_HCSTRING("svely","\x6f","\xe5","\x60","\x85"),
	HX_HCSTRING("wrap_svel","\x9f","\x91","\xb7","\x0f"),
	HX_HCSTRING("invalidate_pos","\x90","\x95","\x14","\x7a"),
	HX_HCSTRING("pos_invalidate","\x86","\x09","\xfd","\x4c"),
	HX_HCSTRING("pos_validate","\xe1","\x17","\x1e","\x52"),
	HX_HCSTRING("vel_invalidate","\x5d","\x17","\x4c","\x57"),
	HX_HCSTRING("vel_validate","\xf8","\x31","\xe1","\x91"),
	HX_HCSTRING("kinvel_invalidate","\x6d","\x60","\x14","\xca"),
	HX_HCSTRING("kinvel_validate","\x08","\x17","\xda","\xa8"),
	HX_HCSTRING("svel_invalidate","\x10","\xdb","\x54","\x44"),
	HX_HCSTRING("svel_validate","\xeb","\x92","\x59","\xe7"),
	HX_HCSTRING("force_invalidate","\x8f","\x76","\x24","\xeb"),
	HX_HCSTRING("force_validate","\xaa","\x00","\xa3","\x16"),
	HX_HCSTRING("setupPosition","\x46","\x50","\x1a","\x7b"),
	HX_HCSTRING("setupVelocity","\xba","\xb1","\x1d","\xcf"),
	HX_HCSTRING("setupkinvel","\x8a","\x09","\x73","\x32"),
	HX_HCSTRING("setupsvel","\xc7","\x9c","\x12","\xbc"),
	HX_HCSTRING("setupForce","\x2e","\xce","\x97","\xe6"),
	HX_HCSTRING("cvel_validate","\xdb","\xba","\x51","\x8b"),
	HX_HCSTRING("wrapcvel","\xa4","\xe8","\x4a","\xa2"),
	HX_HCSTRING("setup_cvel","\x1c","\xca","\xb0","\x43"),
	HX_HCSTRING("angvel","\xc3","\xab","\x20","\x63"),
	HX_HCSTRING("torque","\xca","\xb6","\x90","\x96"),
	HX_HCSTRING("kinangvel","\xd3","\x64","\xf1","\xe1"),
	HX_HCSTRING("pre_rot","\xbb","\xd4","\xad","\x2c"),
	HX_HCSTRING("rot","\x17","\xe2","\x56","\x00"),
	HX_HCSTRING("invalidate_rot","\x13","\x1a","\x16","\x7a"),
	HX_HCSTRING("axisx","\xb7","\xf0","\x7f","\x29"),
	HX_HCSTRING("axisy","\xb8","\xf0","\x7f","\x29"),
	HX_HCSTRING("zip_axis","\xff","\xb9","\xda","\x0b"),
	HX_HCSTRING("validate_axis","\x2a","\x88","\x5c","\x8c"),
	HX_HCSTRING("quick_validate_axis","\x18","\x64","\xed","\x6f"),
	HX_HCSTRING("delta_rot","\x10","\x6b","\xa8","\xfc"),
	HX_HCSTRING("kinematicDelaySleep","\xf9","\x0f","\xda","\xc0"),
	HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"),
	HX_HCSTRING("zip_mass","\x52","\xde","\xb7","\x13"),
	HX_HCSTRING("massMode","\x77","\xca","\x75","\x81"),
	HX_HCSTRING("imass","\xdd","\x29","\x69","\xbd"),
	HX_HCSTRING("smass","\xe7","\xf6","\x6a","\x7f"),
	HX_HCSTRING("cmass","\xd7","\xae","\x01","\x49"),
	HX_HCSTRING("nomove","\xd2","\xf7","\x1c","\x2d"),
	HX_HCSTRING("invalidate_mass","\x78","\x05","\xe8","\x55"),
	HX_HCSTRING("validate_mass","\x7d","\xac","\x39","\x94"),
	HX_HCSTRING("gravMass","\xf4","\xac","\xf0","\x74"),
	HX_HCSTRING("zip_gravMass","\x52","\x51","\x8f","\x0d"),
	HX_HCSTRING("gravMassMode","\x77","\x36","\xb6","\x49"),
	HX_HCSTRING("gravMassScale","\xf6","\x1c","\x30","\xa2"),
	HX_HCSTRING("zip_gravMassScale","\xd8","\xe3","\x8a","\x29"),
	HX_HCSTRING("invalidate_gravMass","\x78","\x03","\x99","\xa9"),
	HX_HCSTRING("validate_gravMass","\xfd","\x10","\x4b","\xb0"),
	HX_HCSTRING("invalidate_gravMassScale","\xf2","\xa7","\xab","\x04"),
	HX_HCSTRING("validate_gravMassScale","\x4d","\x78","\xe1","\x49"),
	HX_HCSTRING("inertiaMode","\x7d","\xb5","\x39","\x0d"),
	HX_HCSTRING("inertia","\xfa","\xb0","\xba","\x7c"),
	HX_HCSTRING("zip_inertia","\x5c","\x42","\x9b","\x48"),
	HX_HCSTRING("cinertia","\xf7","\xd2","\x3c","\x9b"),
	HX_HCSTRING("iinertia","\xb1","\x7f","\x6b","\xf2"),
	HX_HCSTRING("sinertia","\xe7","\xf4","\x63","\x2e"),
	HX_HCSTRING("norotate","\x5c","\xcd","\x9b","\x66"),
	HX_HCSTRING("invalidate_inertia","\xf6","\x96","\xdb","\x64"),
	HX_HCSTRING("validate_inertia","\x11","\x61","\x1a","\x95"),
	HX_HCSTRING("invalidate_wake","\xa8","\x20","\x84","\x5c"),
	HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"),
	HX_HCSTRING("zip_aabb","\xfe","\x3f","\xc9","\x0b"),
	HX_HCSTRING("validate_aabb","\x29","\x0e","\x4b","\x8c"),
	HX_HCSTRING("invalidate_aabb","\x24","\x67","\xf9","\x4d"),
	HX_HCSTRING("localCOMx","\x22","\xdc","\xee","\x03"),
	HX_HCSTRING("localCOMy","\x23","\xdc","\xee","\x03"),
	HX_HCSTRING("zip_localCOM","\xf4","\x6b","\x7e","\x78"),
	HX_HCSTRING("worldCOMx","\x89","\xa8","\xc8","\x4e"),
	HX_HCSTRING("worldCOMy","\x8a","\xa8","\xc8","\x4e"),
	HX_HCSTRING("zip_worldCOM","\x6d","\x69","\x22","\x3d"),
	HX_HCSTRING("wrap_localCOM","\xeb","\xfb","\x09","\xd0"),
	HX_HCSTRING("wrap_worldCOM","\x64","\xf9","\xad","\x94"),
	HX_HCSTRING("invalidate_localCOM","\x1a","\x1e","\x88","\x14"),
	HX_HCSTRING("invalidate_worldCOM","\x93","\x1b","\x2c","\xd9"),
	HX_HCSTRING("validate_localCOM","\x9f","\x2b","\x3a","\x1b"),
	HX_HCSTRING("validate_worldCOM","\x18","\x29","\xde","\xdf"),
	HX_HCSTRING("getlocalCOM","\x2c","\xce","\x21","\x2c"),
	HX_HCSTRING("getworldCOM","\xa5","\xcb","\xc5","\xf0"),
	HX_HCSTRING("__immutable_midstep","\x77","\x19","\x9f","\x9d"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("aabb_validate","\x55","\xd1","\x98","\x95"),
	HX_HCSTRING("shapes_adder","\xc1","\xa7","\x65","\x60"),
	HX_HCSTRING("shapes_subber","\x7c","\xbd","\x74","\xf3"),
	HX_HCSTRING("shapes_invalidate","\xa8","\xb5","\xe7","\xc5"),
	HX_HCSTRING("shapes_modifiable","\x31","\x9b","\x03","\x79"),
	HX_HCSTRING("addedToSpace","\x6b","\x44","\xb0","\x09"),
	HX_HCSTRING("removedFromSpace","\x3c","\x43","\xd1","\xb7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::types,"types");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::bodystack,"bodystack");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::bodyset,"bodyset");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::cur_graph_depth,"cur_graph_depth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::types,"types");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::bodystack,"bodystack");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::bodyset,"bodyset");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::cur_graph_depth,"cur_graph_depth");
};

#endif

hx::Class ZPP_Body_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("bodystack","\x66","\x21","\xe6","\xb0"),
	HX_HCSTRING("bodyset","\x40","\xf2","\x38","\x31"),
	HX_HCSTRING("bodysetlt","\xc8","\x60","\x0a","\xa7"),
	HX_HCSTRING("cur_graph_depth","\x93","\x29","\x42","\x32"),
	HX_HCSTRING("__static","\xce","\x47","\x2b","\xae"),
	::String(null()) };

void ZPP_Body_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.phys.ZPP_Body","\x02","\xbf","\xf3","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Body_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Body_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Body_obj >;
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

void ZPP_Body_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/phys/Body.hx",193,0x4bb115c1)
		{
			HX_STACK_LINE(193)
			::nape::phys::BodyType tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::nape::phys::BodyType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(193)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(193)
				if ((tmp2)){
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(193)
					::nape::phys::BodyType tmp3 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp3;
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(193)
				tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			HX_STACK_LINE(193)
			::nape::phys::BodyType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::nape::phys::BodyType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(193)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(193)
				if ((tmp3)){
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(193)
					::nape::phys::BodyType tmp4 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp4;
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(193)
				tmp1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			HX_STACK_LINE(193)
			::nape::phys::BodyType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				::nape::phys::BodyType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(193)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(193)
				if ((tmp4)){
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(193)
					::nape::phys::BodyType tmp5 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp5;
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(193)
				tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
			}
			HX_STACK_LINE(193)
			return Array_obj< ::Dynamic >::__new().Add(null()).Add(tmp).Add(tmp1).Add(tmp2);
		}
		return null();
	}
};
	types= _Function_0_1::Block();
	bodystack= null();
	bodyset= null();
	cur_graph_depth= (int)0;
}

} // end namespace zpp_nape
} // end namespace phys
