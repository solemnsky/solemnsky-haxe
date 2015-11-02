#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_ColArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","new",0xa8567bd9,"zpp_nape.dynamics.ZPP_ColArbiter.new","zpp_nape/dynamics/Arbiter.hx",1391,0x26846f2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1879)
	this->pre_dt = ((Float)0.0);
	HX_STACK_LINE(1723)
	this->_mutable = false;
	HX_STACK_LINE(1555)
	this->stat = false;
	HX_STACK_LINE(1485)
	this->next = null();
	HX_STACK_LINE(1484)
	this->hpc2 = false;
	HX_STACK_LINE(1483)
	this->hc2 = false;
	HX_STACK_LINE(1482)
	this->oc2 = null();
	HX_STACK_LINE(1481)
	this->c2 = null();
	HX_STACK_LINE(1480)
	this->oc1 = null();
	HX_STACK_LINE(1479)
	this->c1 = null();
	HX_STACK_LINE(1478)
	this->__ref_vertex = (int)0;
	HX_STACK_LINE(1477)
	this->__ref_edge2 = null();
	HX_STACK_LINE(1476)
	this->__ref_edge1 = null();
	HX_STACK_LINE(1475)
	this->biasCoef = ((Float)0.0);
	HX_STACK_LINE(1474)
	this->rev = false;
	HX_STACK_LINE(1473)
	this->radius = ((Float)0.0);
	HX_STACK_LINE(1472)
	this->lproj = ((Float)0.0);
	HX_STACK_LINE(1471)
	this->lnormy = ((Float)0.0);
	HX_STACK_LINE(1470)
	this->lnormx = ((Float)0.0);
	HX_STACK_LINE(1465)
	this->surfacey = ((Float)0.0);
	HX_STACK_LINE(1464)
	this->surfacex = ((Float)0.0);
	HX_STACK_LINE(1463)
	this->k2y = ((Float)0.0);
	HX_STACK_LINE(1462)
	this->k2x = ((Float)0.0);
	HX_STACK_LINE(1461)
	this->k1y = ((Float)0.0);
	HX_STACK_LINE(1460)
	this->k1x = ((Float)0.0);
	HX_STACK_LINE(1459)
	this->rt2b = ((Float)0.0);
	HX_STACK_LINE(1458)
	this->rn2b = ((Float)0.0);
	HX_STACK_LINE(1457)
	this->rt2a = ((Float)0.0);
	HX_STACK_LINE(1456)
	this->rn2a = ((Float)0.0);
	HX_STACK_LINE(1455)
	this->rt1b = ((Float)0.0);
	HX_STACK_LINE(1454)
	this->rn1b = ((Float)0.0);
	HX_STACK_LINE(1453)
	this->rt1a = ((Float)0.0);
	HX_STACK_LINE(1452)
	this->rn1a = ((Float)0.0);
	HX_STACK_LINE(1451)
	this->jrAcc = ((Float)0.0);
	HX_STACK_LINE(1450)
	this->rMass = ((Float)0.0);
	HX_STACK_LINE(1449)
	this->Kc = ((Float)0.0);
	HX_STACK_LINE(1448)
	this->Kb = ((Float)0.0);
	HX_STACK_LINE(1447)
	this->Ka = ((Float)0.0);
	HX_STACK_LINE(1446)
	this->kMassc = ((Float)0.0);
	HX_STACK_LINE(1445)
	this->kMassb = ((Float)0.0);
	HX_STACK_LINE(1444)
	this->kMassa = ((Float)0.0);
	HX_STACK_LINE(1437)
	this->wrap_normal = null();
	HX_STACK_LINE(1407)
	this->ny = ((Float)0.0);
	HX_STACK_LINE(1406)
	this->nx = ((Float)0.0);
	HX_STACK_LINE(1405)
	this->innards = null();
	HX_STACK_LINE(1404)
	this->wrap_contacts = null();
	HX_STACK_LINE(1403)
	this->contacts = null();
	HX_STACK_LINE(1402)
	this->s2 = null();
	HX_STACK_LINE(1401)
	this->s1 = null();
	HX_STACK_LINE(1400)
	this->userdef_rfric = false;
	HX_STACK_LINE(1399)
	this->userdef_restitution = false;
	HX_STACK_LINE(1398)
	this->userdef_stat_fric = false;
	HX_STACK_LINE(1397)
	this->userdef_dyn_fric = false;
	HX_STACK_LINE(1396)
	this->rfric = ((Float)0.0);
	HX_STACK_LINE(1395)
	this->restitution = ((Float)0.0);
	HX_STACK_LINE(1394)
	this->stat_fric = ((Float)0.0);
	HX_STACK_LINE(1393)
	this->dyn_fric = ((Float)0.0);
	HX_STACK_LINE(1392)
	this->outer_zn = null();
	HX_STACK_LINE(1511)
	super::__construct();
	HX_STACK_LINE(1512)
	this->pre_dt = ((Float)-1.0);
	HX_STACK_LINE(1513)
	::zpp_nape::dynamics::ZPP_Contact tmp = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1513)
	this->contacts = tmp;
	HX_STACK_LINE(1514)
	::zpp_nape::dynamics::ZPP_IContact tmp1 = ::zpp_nape::dynamics::ZPP_IContact_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1514)
	this->innards = tmp1;
	HX_STACK_LINE(1515)
	int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1515)
	this->type = tmp2;
	HX_STACK_LINE(1516)
	this->colarb = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ZPP_ColArbiter_obj::~ZPP_ColArbiter_obj() { }

Dynamic ZPP_ColArbiter_obj::__CreateEmpty() { return  new ZPP_ColArbiter_obj; }
hx::ObjectPtr< ZPP_ColArbiter_obj > ZPP_ColArbiter_obj::__new()
{  hx::ObjectPtr< ZPP_ColArbiter_obj > _result_ = new ZPP_ColArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_ColArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ColArbiter_obj > _result_ = new ZPP_ColArbiter_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_ColArbiter_obj::normal_validate( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","normal_validate",0xea7cd5e7,"zpp_nape.dynamics.ZPP_ColArbiter.normal_validate","zpp_nape/dynamics/Arbiter.hx",1408,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1409)
		bool tmp = this->cleared;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1409)
		if ((tmp)){
			HX_STACK_LINE(1409)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(1410)
		{
			HX_STACK_LINE(1411)
			Float tmp1 = this->nx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1411)
			::nape::geom::Vec2 tmp2 = this->wrap_normal;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1411)
			tmp2->zpp_inner->x = tmp1;
			HX_STACK_LINE(1412)
			Float tmp3 = this->ny;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1412)
			::nape::geom::Vec2 tmp4 = this->wrap_normal;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1412)
			tmp4->zpp_inner->y = tmp3;
			HX_STACK_LINE(1421)
			{
			}
		}
		HX_STACK_LINE(1430)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->ws1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1430)
		int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1430)
		::zpp_nape::shape::ZPP_Shape tmp3 = this->ws2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1430)
		int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1430)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1430)
		if ((tmp5)){
			HX_STACK_LINE(1432)
			::nape::geom::Vec2 tmp6 = this->wrap_normal;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1432)
			Float tmp7 = tmp6->zpp_inner->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1432)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1432)
			::nape::geom::Vec2 tmp9 = this->wrap_normal;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1432)
			tmp9->zpp_inner->x = tmp8;
			HX_STACK_LINE(1433)
			::nape::geom::Vec2 tmp10 = this->wrap_normal;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1433)
			Float tmp11 = tmp10->zpp_inner->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1433)
			Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1433)
			::nape::geom::Vec2 tmp13 = this->wrap_normal;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1433)
			tmp13->zpp_inner->y = tmp12;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,normal_validate,(void))

Void ZPP_ColArbiter_obj::getnormal( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","getnormal",0x8ba59376,"zpp_nape.dynamics.ZPP_ColArbiter.getnormal","zpp_nape/dynamics/Arbiter.hx",1438,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1439)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1439)
		{
			HX_STACK_LINE(1439)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1439)
			bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1439)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1439)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1439)
			if ((tmp2)){
				HX_STACK_LINE(1439)
				tmp3 = false;
			}
			else{
				HX_STACK_LINE(1439)
				tmp3 = true;
			}
			HX_STACK_LINE(1439)
			if ((tmp3)){
				HX_STACK_LINE(1439)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1439)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1439)
			{
				HX_STACK_LINE(1439)
				::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1439)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1439)
				if ((tmp5)){
					HX_STACK_LINE(1439)
					::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1439)
					ret = tmp6;
				}
				else{
					HX_STACK_LINE(1439)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1439)
					ret = tmp6;
					HX_STACK_LINE(1439)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1439)
					ret->zpp_pool = null();
					HX_STACK_LINE(1439)
					ret->zpp_disp = false;
					HX_STACK_LINE(1439)
					::nape::geom::Vec2 tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1439)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1439)
					bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1439)
					if ((tmp9)){
						HX_STACK_LINE(1439)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1439)
			bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1439)
			if ((tmp4)){
				HX_STACK_LINE(1439)
				::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1439)
				{
					HX_STACK_LINE(1439)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1439)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1439)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1439)
						if ((tmp7)){
							HX_STACK_LINE(1439)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1439)
							ret1 = tmp8;
						}
						else{
							HX_STACK_LINE(1439)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1439)
							ret1 = tmp8;
							HX_STACK_LINE(1439)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1439)
							ret1->next = null();
						}
						HX_STACK_LINE(1439)
						ret1->weak = false;
					}
					HX_STACK_LINE(1439)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						ret1->x = (int)0;
						HX_STACK_LINE(1439)
						ret1->y = (int)0;
						HX_STACK_LINE(1439)
						{
						}
					}
					HX_STACK_LINE(1439)
					tmp5 = ret1;
				}
				HX_STACK_LINE(1439)
				ret->zpp_inner = tmp5;
				HX_STACK_LINE(1439)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1439)
				{
					HX_STACK_LINE(1439)
					bool tmp5 = (ret != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1439)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1439)
					if ((tmp5)){
						HX_STACK_LINE(1439)
						tmp6 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1439)
						tmp6 = false;
					}
					HX_STACK_LINE(1439)
					if ((tmp6)){
						HX_STACK_LINE(1439)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1439)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1439)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(1439)
				{
					HX_STACK_LINE(1439)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1439)
					bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1439)
					if ((tmp5)){
						HX_STACK_LINE(1439)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1439)
					bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1439)
					if ((tmp6)){
						HX_STACK_LINE(1439)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1439)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1439)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1439)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1439)
				if ((tmp6)){
					HX_STACK_LINE(1439)
					tmp7 = false;
				}
				else{
					HX_STACK_LINE(1439)
					tmp7 = true;
				}
				HX_STACK_LINE(1439)
				if ((tmp7)){
					HX_STACK_LINE(1439)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1439)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1439)
				{
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1439)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1439)
						if ((tmp9)){
							HX_STACK_LINE(1439)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1439)
							tmp10 = false;
						}
						HX_STACK_LINE(1439)
						if ((tmp10)){
							HX_STACK_LINE(1439)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1439)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1439)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1439)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1439)
						if ((tmp9)){
							HX_STACK_LINE(1439)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1439)
					tmp8 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1439)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1439)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1439)
				if ((tmp9)){
					HX_STACK_LINE(1439)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						{
							HX_STACK_LINE(1439)
							bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1439)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1439)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1439)
							bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1439)
							if ((tmp15)){
								HX_STACK_LINE(1439)
								tmp14 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1439)
								tmp14 = false;
							}
							HX_STACK_LINE(1439)
							bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1439)
							if ((tmp16)){
								HX_STACK_LINE(1439)
								::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1439)
								::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1439)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1439)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1439)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1439)
								HX_STACK_DO_THROW(tmp21);
							}
						}
						HX_STACK_LINE(1439)
						{
							HX_STACK_LINE(1439)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1439)
							bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1439)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1439)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1439)
							if ((tmp14)){
								HX_STACK_LINE(1439)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1439)
						Float tmp12 = ret->zpp_inner->y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1439)
						tmp11 = tmp12;
					}
					HX_STACK_LINE(1439)
					tmp10 = (tmp11 == (int)0);
				}
				else{
					HX_STACK_LINE(1439)
					tmp10 = false;
				}
				HX_STACK_LINE(1439)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1439)
				if ((tmp11)){
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						ret->zpp_inner->x = (int)0;
						HX_STACK_LINE(1439)
						ret->zpp_inner->y = (int)0;
						HX_STACK_LINE(1439)
						{
						}
					}
					HX_STACK_LINE(1439)
					{
						HX_STACK_LINE(1439)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1439)
						bool tmp12 = (_this->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1439)
						if ((tmp12)){
							HX_STACK_LINE(1439)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1439)
							_this->_invalidate(tmp13);
						}
					}
				}
				HX_STACK_LINE(1439)
				ret;
			}
			HX_STACK_LINE(1439)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1439)
			tmp = ret;
		}
		HX_STACK_LINE(1439)
		this->wrap_normal = tmp;
		HX_STACK_LINE(1440)
		::nape::geom::Vec2 tmp1 = this->wrap_normal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1440)
		tmp1->zpp_inner->_immutable = true;
		HX_STACK_LINE(1441)
		::nape::geom::Vec2 tmp2 = this->wrap_normal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1441)
		tmp2->zpp_inner->_inuse = true;
		HX_STACK_LINE(1442)
		Dynamic tmp3 = this->normal_validate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1442)
		::nape::geom::Vec2 tmp4 = this->wrap_normal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1442)
		tmp4->zpp_inner->_validate = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,getnormal,(void))

Void ZPP_ColArbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","alloc",0xd032e02e,"zpp_nape.dynamics.ZPP_ColArbiter.alloc","zpp_nape/dynamics/Arbiter.hx",1521,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,alloc,(void))

Void ZPP_ColArbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","free",0x9e15fb13,"zpp_nape.dynamics.ZPP_ColArbiter.free","zpp_nape/dynamics/Arbiter.hx",1532,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1549)
		this->userdef_dyn_fric = false;
		HX_STACK_LINE(1550)
		this->userdef_stat_fric = false;
		HX_STACK_LINE(1551)
		this->userdef_restitution = false;
		HX_STACK_LINE(1552)
		this->userdef_rfric = false;
		HX_STACK_LINE(1553)
		::zpp_nape::shape::ZPP_Edge tmp = this->__ref_edge2 = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1553)
		this->__ref_edge1 = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,free,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_ColArbiter_obj::injectContact( Float px,Float py,Float nx,Float ny,Float dist,int hash,hx::Null< bool >  __o_posOnly){
bool posOnly = __o_posOnly.Default(false);
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","injectContact",0x73f258c8,"zpp_nape.dynamics.ZPP_ColArbiter.injectContact","zpp_nape/dynamics/Arbiter.hx",1558,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(nx,"nx")
	HX_STACK_ARG(ny,"ny")
	HX_STACK_ARG(dist,"dist")
	HX_STACK_ARG(hash,"hash")
	HX_STACK_ARG(posOnly,"posOnly")
{
		HX_STACK_LINE(1559)
		::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(1560)
		{
			HX_STACK_LINE(1561)
			::zpp_nape::dynamics::ZPP_Contact tmp = this->contacts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1561)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1562)
			while((true)){
				HX_STACK_LINE(1562)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1562)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1562)
				if ((tmp2)){
					HX_STACK_LINE(1562)
					break;
				}
				HX_STACK_LINE(1563)
				::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1564)
				bool tmp3 = (hash == cur->hash);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1564)
				if ((tmp3)){
					HX_STACK_LINE(1565)
					c = cur;
					HX_STACK_LINE(1566)
					break;
				}
				HX_STACK_LINE(1568)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1571)
		bool tmp = (c == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1571)
		if ((tmp)){
			HX_STACK_LINE(1572)
			{
				HX_STACK_LINE(1573)
				::zpp_nape::dynamics::ZPP_Contact tmp1 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1573)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1573)
				if ((tmp2)){
					HX_STACK_LINE(1574)
					::zpp_nape::dynamics::ZPP_Contact tmp3 = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1574)
					c = tmp3;
				}
				else{
					HX_STACK_LINE(1580)
					::zpp_nape::dynamics::ZPP_Contact tmp3 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1580)
					c = tmp3;
					HX_STACK_LINE(1581)
					::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
					HX_STACK_LINE(1582)
					c->next = null();
				}
				HX_STACK_LINE(1587)
				Dynamic();
			}
			HX_STACK_LINE(1589)
			::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
			HX_STACK_LINE(1590)
			Float tmp1 = ci->jtAcc = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1590)
			ci->jnAcc = tmp1;
			HX_STACK_LINE(1591)
			c->hash = hash;
			HX_STACK_LINE(1592)
			c->fresh = true;
			HX_STACK_LINE(1593)
			c->arbiter = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(1594)
			this->jrAcc = (int)0;
			HX_STACK_LINE(1595)
			{
				HX_STACK_LINE(1595)
				::zpp_nape::dynamics::ZPP_Contact tmp2 = this->contacts;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1595)
				::zpp_nape::dynamics::ZPP_Contact _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1595)
				::zpp_nape::dynamics::ZPP_Contact tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1595)
				{
					HX_STACK_LINE(1595)
					c->_inuse = true;
					HX_STACK_LINE(1595)
					tmp3 = c;
				}
				HX_STACK_LINE(1595)
				::zpp_nape::dynamics::ZPP_Contact temp = tmp3;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1595)
				temp->next = _this->next;
				HX_STACK_LINE(1595)
				_this->next = temp;
				HX_STACK_LINE(1595)
				_this->modified = true;
				HX_STACK_LINE(1595)
				(_this->length)++;
				HX_STACK_LINE(1595)
				c;
			}
			HX_STACK_LINE(1596)
			::zpp_nape::dynamics::ZPP_IContact tmp2 = this->innards;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1596)
			::zpp_nape::dynamics::ZPP_IContact tmp3 = ci;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1596)
			tmp2->add(tmp3);
		}
		else{
			HX_STACK_LINE(1598)
			c->fresh = false;
		}
		HX_STACK_LINE(1599)
		{
			HX_STACK_LINE(1600)
			c->px = px;
			HX_STACK_LINE(1601)
			c->py = py;
			HX_STACK_LINE(1610)
			{
			}
		}
		HX_STACK_LINE(1619)
		{
			HX_STACK_LINE(1620)
			this->nx = nx;
			HX_STACK_LINE(1621)
			this->ny = ny;
			HX_STACK_LINE(1630)
			{
			}
		}
		HX_STACK_LINE(1639)
		c->dist = dist;
		HX_STACK_LINE(1640)
		int tmp1 = this->stamp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1640)
		c->stamp = tmp1;
		HX_STACK_LINE(1641)
		c->posOnly = posOnly;
		HX_STACK_LINE(1642)
		::zpp_nape::dynamics::ZPP_Contact tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1642)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_ColArbiter_obj,injectContact,return )

Void ZPP_ColArbiter_obj::assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","assign",0x68bb4c56,"zpp_nape.dynamics.ZPP_ColArbiter.assign","zpp_nape/dynamics/Arbiter.hx",1646,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s1,"s1")
		HX_STACK_ARG(s2,"s2")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(di,"di")
		HX_STACK_LINE(1647)
		{
			HX_STACK_LINE(1647)
			this->b1 = s1->body;
			HX_STACK_LINE(1647)
			this->ws1 = s1;
			HX_STACK_LINE(1647)
			this->b2 = s2->body;
			HX_STACK_LINE(1647)
			this->ws2 = s2;
			HX_STACK_LINE(1647)
			this->id = id;
			HX_STACK_LINE(1647)
			this->di = di;
			HX_STACK_LINE(1647)
			{
				HX_STACK_LINE(1647)
				::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1647)
				{
					HX_STACK_LINE(1647)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1647)
					{
						HX_STACK_LINE(1647)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1647)
						bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1647)
						if ((tmp3)){
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1647)
							ret = tmp4;
						}
						else{
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1647)
							ret = tmp4;
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
							HX_STACK_LINE(1647)
							ret->next = null();
						}
						HX_STACK_LINE(1647)
						Dynamic();
					}
					HX_STACK_LINE(1647)
					ret->elt = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1647)
					tmp1 = ret;
				}
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1647)
				temp->next = _this->head;
				HX_STACK_LINE(1647)
				_this->head = temp;
				HX_STACK_LINE(1647)
				_this->modified = true;
				HX_STACK_LINE(1647)
				(_this->length)++;
				HX_STACK_LINE(1647)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1647)
			{
				HX_STACK_LINE(1647)
				::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1647)
				{
					HX_STACK_LINE(1647)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1647)
					{
						HX_STACK_LINE(1647)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1647)
						bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1647)
						if ((tmp3)){
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1647)
							ret = tmp4;
						}
						else{
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1647)
							ret = tmp4;
							HX_STACK_LINE(1647)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
							HX_STACK_LINE(1647)
							ret->next = null();
						}
						HX_STACK_LINE(1647)
						Dynamic();
					}
					HX_STACK_LINE(1647)
					ret->elt = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1647)
					tmp1 = ret;
				}
				HX_STACK_LINE(1647)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1647)
				temp->next = _this->head;
				HX_STACK_LINE(1647)
				_this->head = temp;
				HX_STACK_LINE(1647)
				_this->modified = true;
				HX_STACK_LINE(1647)
				(_this->length)++;
				HX_STACK_LINE(1647)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1647)
			this->active = true;
			HX_STACK_LINE(1647)
			this->present = (int)0;
			HX_STACK_LINE(1647)
			this->cleared = false;
			HX_STACK_LINE(1647)
			this->sleeping = false;
			HX_STACK_LINE(1647)
			this->fresh = false;
			HX_STACK_LINE(1647)
			this->presentable = false;
		}
		HX_STACK_LINE(1648)
		this->s1 = s1;
		HX_STACK_LINE(1649)
		this->s2 = s2;
		HX_STACK_LINE(1650)
		{
			HX_STACK_LINE(1650)
			bool tmp = this->userdef_restitution;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1650)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1650)
			if ((tmp1)){
				HX_STACK_LINE(1650)
				::zpp_nape::shape::ZPP_Shape tmp2 = this->s1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1650)
				Float tmp3 = tmp2->material->elasticity;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1650)
				Float tmp4 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1650)
				bool tmp5 = (tmp3 <= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1650)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1650)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1650)
				if ((tmp6)){
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp8 = this->s2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1650)
					Float tmp10 = tmp9->material->elasticity;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1650)
					Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1650)
					Float tmp12 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1650)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1650)
					tmp7 = (tmp11 <= tmp13);
				}
				else{
					HX_STACK_LINE(1650)
					tmp7 = true;
				}
				HX_STACK_LINE(1650)
				if ((tmp7)){
					HX_STACK_LINE(1650)
					this->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp8 = this->s1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1650)
					Float tmp9 = tmp8->material->elasticity;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1650)
					Float tmp10 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1650)
					bool tmp11 = (tmp9 >= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1650)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1650)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1650)
					if ((tmp12)){
						HX_STACK_LINE(1650)
						::zpp_nape::shape::ZPP_Shape tmp14 = this->s2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1650)
						::zpp_nape::shape::ZPP_Shape tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1650)
						Float tmp16 = tmp15->material->elasticity;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1650)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1650)
						Float tmp18 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1650)
						Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1650)
						tmp13 = (tmp17 >= tmp19);
					}
					else{
						HX_STACK_LINE(1650)
						tmp13 = true;
					}
					HX_STACK_LINE(1650)
					if ((tmp13)){
						HX_STACK_LINE(1650)
						this->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(1650)
						::zpp_nape::shape::ZPP_Shape tmp14 = this->s1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1650)
						Float tmp15 = tmp14->material->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1650)
						::zpp_nape::shape::ZPP_Shape tmp16 = this->s2;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1650)
						Float tmp17 = tmp16->material->elasticity;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1650)
						Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1650)
						Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1650)
						this->restitution = tmp19;
					}
				}
				HX_STACK_LINE(1650)
				Float tmp8 = this->restitution;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1650)
				bool tmp9 = (tmp8 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1650)
				if ((tmp9)){
					HX_STACK_LINE(1650)
					this->restitution = (int)0;
				}
				HX_STACK_LINE(1650)
				Float tmp10 = this->restitution;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1650)
				bool tmp11 = (tmp10 > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1650)
				if ((tmp11)){
					HX_STACK_LINE(1650)
					this->restitution = (int)1;
				}
			}
			HX_STACK_LINE(1650)
			bool tmp2 = this->userdef_dyn_fric;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1650)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1650)
			if ((tmp3)){
				HX_STACK_LINE(1650)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1650)
				{
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp5 = this->s1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1650)
					Float tmp6 = tmp5->material->dynamicFriction;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp7 = this->s2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1650)
					Float tmp8 = tmp7->material->dynamicFriction;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1650)
					Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1650)
					tmp4 = ::Math_obj::sqrt(tmp9);
				}
				HX_STACK_LINE(1650)
				this->dyn_fric = tmp4;
			}
			HX_STACK_LINE(1650)
			bool tmp4 = this->userdef_stat_fric;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1650)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1650)
			if ((tmp5)){
				HX_STACK_LINE(1650)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1650)
				{
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp7 = this->s1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1650)
					Float tmp8 = tmp7->material->staticFriction;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp9 = this->s2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1650)
					Float tmp10 = tmp9->material->staticFriction;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1650)
					Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1650)
					tmp6 = ::Math_obj::sqrt(tmp11);
				}
				HX_STACK_LINE(1650)
				this->stat_fric = tmp6;
			}
			HX_STACK_LINE(1650)
			bool tmp6 = this->userdef_rfric;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1650)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1650)
			if ((tmp7)){
				HX_STACK_LINE(1650)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1650)
				{
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp9 = this->s1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1650)
					Float tmp10 = tmp9->material->rollingFriction;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1650)
					::zpp_nape::shape::ZPP_Shape tmp11 = this->s2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1650)
					Float tmp12 = tmp11->material->rollingFriction;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1650)
					Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1650)
					tmp8 = ::Math_obj::sqrt(tmp13);
				}
				HX_STACK_LINE(1650)
				this->rfric = tmp8;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ColArbiter_obj,assign,(void))

Void ZPP_ColArbiter_obj::calcProperties( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","calcProperties",0xc66e8a0f,"zpp_nape.dynamics.ZPP_ColArbiter.calcProperties","zpp_nape/dynamics/Arbiter.hx",1654,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1655)
		bool tmp = this->userdef_restitution;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1655)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1655)
		if ((tmp1)){
			HX_STACK_LINE(1656)
			::zpp_nape::shape::ZPP_Shape tmp2 = this->s1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1656)
			Float tmp3 = tmp2->material->elasticity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1656)
			Float tmp4 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1656)
			bool tmp5 = (tmp3 <= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1656)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1656)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1656)
			if ((tmp6)){
				HX_STACK_LINE(1656)
				::zpp_nape::shape::ZPP_Shape tmp8 = this->s2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1656)
				::zpp_nape::shape::ZPP_Shape tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1656)
				Float tmp10 = tmp9->material->elasticity;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1656)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1656)
				Float tmp12 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1656)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1656)
				tmp7 = (tmp11 <= tmp13);
			}
			else{
				HX_STACK_LINE(1656)
				tmp7 = true;
			}
			HX_STACK_LINE(1656)
			if ((tmp7)){
				HX_STACK_LINE(1656)
				this->restitution = (int)0;
			}
			else{
				HX_STACK_LINE(1657)
				::zpp_nape::shape::ZPP_Shape tmp8 = this->s1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1657)
				Float tmp9 = tmp8->material->elasticity;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1657)
				Float tmp10 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1657)
				bool tmp11 = (tmp9 >= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1657)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1657)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1657)
				if ((tmp12)){
					HX_STACK_LINE(1657)
					::zpp_nape::shape::ZPP_Shape tmp14 = this->s2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1657)
					::zpp_nape::shape::ZPP_Shape tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1657)
					Float tmp16 = tmp15->material->elasticity;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1657)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1657)
					Float tmp18 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1657)
					Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1657)
					tmp13 = (tmp17 >= tmp19);
				}
				else{
					HX_STACK_LINE(1657)
					tmp13 = true;
				}
				HX_STACK_LINE(1657)
				if ((tmp13)){
					HX_STACK_LINE(1657)
					this->restitution = (int)1;
				}
				else{
					HX_STACK_LINE(1658)
					::zpp_nape::shape::ZPP_Shape tmp14 = this->s1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1658)
					Float tmp15 = tmp14->material->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1658)
					::zpp_nape::shape::ZPP_Shape tmp16 = this->s2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1658)
					Float tmp17 = tmp16->material->elasticity;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1658)
					Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1658)
					Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1658)
					this->restitution = tmp19;
				}
			}
			HX_STACK_LINE(1659)
			Float tmp8 = this->restitution;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1659)
			bool tmp9 = (tmp8 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1659)
			if ((tmp9)){
				HX_STACK_LINE(1659)
				this->restitution = (int)0;
			}
			HX_STACK_LINE(1660)
			Float tmp10 = this->restitution;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1660)
			bool tmp11 = (tmp10 > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1660)
			if ((tmp11)){
				HX_STACK_LINE(1660)
				this->restitution = (int)1;
			}
		}
		HX_STACK_LINE(1662)
		bool tmp2 = this->userdef_dyn_fric;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1662)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1662)
		if ((tmp3)){
			HX_STACK_LINE(1663)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1663)
			{
				HX_STACK_LINE(1663)
				::zpp_nape::shape::ZPP_Shape tmp5 = this->s1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1663)
				Float tmp6 = tmp5->material->dynamicFriction;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1663)
				::zpp_nape::shape::ZPP_Shape tmp7 = this->s2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1663)
				Float tmp8 = tmp7->material->dynamicFriction;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1663)
				Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1663)
				tmp4 = ::Math_obj::sqrt(tmp9);
			}
			HX_STACK_LINE(1663)
			this->dyn_fric = tmp4;
		}
		HX_STACK_LINE(1665)
		bool tmp4 = this->userdef_stat_fric;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1665)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1665)
		if ((tmp5)){
			HX_STACK_LINE(1666)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1666)
			{
				HX_STACK_LINE(1666)
				::zpp_nape::shape::ZPP_Shape tmp7 = this->s1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1666)
				Float tmp8 = tmp7->material->staticFriction;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1666)
				::zpp_nape::shape::ZPP_Shape tmp9 = this->s2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1666)
				Float tmp10 = tmp9->material->staticFriction;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1666)
				Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1666)
				tmp6 = ::Math_obj::sqrt(tmp11);
			}
			HX_STACK_LINE(1666)
			this->stat_fric = tmp6;
		}
		HX_STACK_LINE(1668)
		bool tmp6 = this->userdef_rfric;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1668)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1668)
		if ((tmp7)){
			HX_STACK_LINE(1669)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1669)
			{
				HX_STACK_LINE(1669)
				::zpp_nape::shape::ZPP_Shape tmp9 = this->s1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1669)
				Float tmp10 = tmp9->material->rollingFriction;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1669)
				::zpp_nape::shape::ZPP_Shape tmp11 = this->s2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1669)
				Float tmp12 = tmp11->material->rollingFriction;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1669)
				Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1669)
				tmp8 = ::Math_obj::sqrt(tmp13);
			}
			HX_STACK_LINE(1669)
			this->rfric = tmp8;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,calcProperties,(void))

Void ZPP_ColArbiter_obj::validate_props( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","validate_props",0x089c98ee,"zpp_nape.dynamics.ZPP_ColArbiter.validate_props","zpp_nape/dynamics/Arbiter.hx",1674,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1675)
		bool tmp = this->invalidated;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1675)
		if ((tmp)){
			HX_STACK_LINE(1676)
			this->invalidated = false;
			HX_STACK_LINE(1677)
			{
				HX_STACK_LINE(1677)
				bool tmp1 = this->userdef_restitution;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1677)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1677)
				if ((tmp2)){
					HX_STACK_LINE(1677)
					::zpp_nape::shape::ZPP_Shape tmp3 = this->s1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1677)
					Float tmp4 = tmp3->material->elasticity;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1677)
					Float tmp5 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1677)
					bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1677)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1677)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1677)
					if ((tmp7)){
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp9 = this->s2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1677)
						Float tmp11 = tmp10->material->elasticity;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1677)
						Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1677)
						Float tmp13 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1677)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1677)
						tmp8 = (tmp12 <= tmp14);
					}
					else{
						HX_STACK_LINE(1677)
						tmp8 = true;
					}
					HX_STACK_LINE(1677)
					if ((tmp8)){
						HX_STACK_LINE(1677)
						this->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp9 = this->s1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1677)
						Float tmp10 = tmp9->material->elasticity;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1677)
						Float tmp11 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1677)
						bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1677)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1677)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1677)
						if ((tmp13)){
							HX_STACK_LINE(1677)
							::zpp_nape::shape::ZPP_Shape tmp15 = this->s2;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1677)
							::zpp_nape::shape::ZPP_Shape tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1677)
							Float tmp17 = tmp16->material->elasticity;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1677)
							Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1677)
							Float tmp19 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1677)
							Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1677)
							tmp14 = (tmp18 >= tmp20);
						}
						else{
							HX_STACK_LINE(1677)
							tmp14 = true;
						}
						HX_STACK_LINE(1677)
						if ((tmp14)){
							HX_STACK_LINE(1677)
							this->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(1677)
							::zpp_nape::shape::ZPP_Shape tmp15 = this->s1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1677)
							Float tmp16 = tmp15->material->elasticity;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1677)
							::zpp_nape::shape::ZPP_Shape tmp17 = this->s2;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1677)
							Float tmp18 = tmp17->material->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1677)
							Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1677)
							Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1677)
							this->restitution = tmp20;
						}
					}
					HX_STACK_LINE(1677)
					Float tmp9 = this->restitution;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1677)
					bool tmp10 = (tmp9 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1677)
					if ((tmp10)){
						HX_STACK_LINE(1677)
						this->restitution = (int)0;
					}
					HX_STACK_LINE(1677)
					Float tmp11 = this->restitution;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1677)
					bool tmp12 = (tmp11 > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1677)
					if ((tmp12)){
						HX_STACK_LINE(1677)
						this->restitution = (int)1;
					}
				}
				HX_STACK_LINE(1677)
				bool tmp3 = this->userdef_dyn_fric;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1677)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1677)
				if ((tmp4)){
					HX_STACK_LINE(1677)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1677)
					{
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp6 = this->s1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1677)
						Float tmp7 = tmp6->material->dynamicFriction;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp8 = this->s2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1677)
						Float tmp9 = tmp8->material->dynamicFriction;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1677)
						Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1677)
						tmp5 = ::Math_obj::sqrt(tmp10);
					}
					HX_STACK_LINE(1677)
					this->dyn_fric = tmp5;
				}
				HX_STACK_LINE(1677)
				bool tmp5 = this->userdef_stat_fric;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1677)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1677)
				if ((tmp6)){
					HX_STACK_LINE(1677)
					Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1677)
					{
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp8 = this->s1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1677)
						Float tmp9 = tmp8->material->staticFriction;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp10 = this->s2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1677)
						Float tmp11 = tmp10->material->staticFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1677)
						Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1677)
						tmp7 = ::Math_obj::sqrt(tmp12);
					}
					HX_STACK_LINE(1677)
					this->stat_fric = tmp7;
				}
				HX_STACK_LINE(1677)
				bool tmp7 = this->userdef_rfric;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1677)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1677)
				if ((tmp8)){
					HX_STACK_LINE(1677)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1677)
					{
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp10 = this->s1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1677)
						Float tmp11 = tmp10->material->rollingFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1677)
						::zpp_nape::shape::ZPP_Shape tmp12 = this->s2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1677)
						Float tmp13 = tmp12->material->rollingFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1677)
						Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1677)
						tmp9 = ::Math_obj::sqrt(tmp14);
					}
					HX_STACK_LINE(1677)
					this->rfric = tmp9;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,validate_props,(void))

Void ZPP_ColArbiter_obj::retire( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","retire",0x25d98fc2,"zpp_nape.dynamics.ZPP_ColArbiter.retire","zpp_nape/dynamics/Arbiter.hx",1682,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1683)
		{
			HX_STACK_LINE(1683)
			bool tmp = this->cleared;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1683)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1683)
			if ((tmp1)){
				HX_STACK_LINE(1683)
				{
					HX_STACK_LINE(1683)
					::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1683)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1683)
					{
						HX_STACK_LINE(1683)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1683)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1683)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1683)
						while((true)){
							HX_STACK_LINE(1683)
							bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1683)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1683)
							if ((tmp4)){
								HX_STACK_LINE(1683)
								break;
							}
							HX_STACK_LINE(1683)
							bool tmp5 = (cur->elt == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1683)
							if ((tmp5)){
								HX_STACK_LINE(1683)
								{
									HX_STACK_LINE(1683)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1683)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1683)
									bool tmp6 = (pre == null());		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(1683)
									if ((tmp6)){
										HX_STACK_LINE(1683)
										old = _this->head;
										HX_STACK_LINE(1683)
										ret1 = old->next;
										HX_STACK_LINE(1683)
										_this->head = ret1;
										HX_STACK_LINE(1683)
										bool tmp7 = (_this->head == null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(1683)
										if ((tmp7)){
											HX_STACK_LINE(1683)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1683)
										old = pre->next;
										HX_STACK_LINE(1683)
										ret1 = old->next;
										HX_STACK_LINE(1683)
										pre->next = ret1;
										HX_STACK_LINE(1683)
										bool tmp7 = (ret1 == null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(1683)
										if ((tmp7)){
											HX_STACK_LINE(1683)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1683)
									{
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1683)
										o->elt = null();
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(1683)
										o->next = tmp7;
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1683)
									_this->modified = true;
									HX_STACK_LINE(1683)
									(_this->length)--;
									HX_STACK_LINE(1683)
									_this->pushmod = true;
									HX_STACK_LINE(1683)
									ret1;
								}
								HX_STACK_LINE(1683)
								ret = true;
								HX_STACK_LINE(1683)
								break;
							}
							HX_STACK_LINE(1683)
							pre = cur;
							HX_STACK_LINE(1683)
							cur = cur->next;
						}
						HX_STACK_LINE(1683)
						ret;
					}
				}
				HX_STACK_LINE(1683)
				{
					HX_STACK_LINE(1683)
					::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1683)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1683)
					{
						HX_STACK_LINE(1683)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1683)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1683)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1683)
						while((true)){
							HX_STACK_LINE(1683)
							bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1683)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1683)
							if ((tmp4)){
								HX_STACK_LINE(1683)
								break;
							}
							HX_STACK_LINE(1683)
							bool tmp5 = (cur->elt == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1683)
							if ((tmp5)){
								HX_STACK_LINE(1683)
								{
									HX_STACK_LINE(1683)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1683)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1683)
									bool tmp6 = (pre == null());		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(1683)
									if ((tmp6)){
										HX_STACK_LINE(1683)
										old = _this->head;
										HX_STACK_LINE(1683)
										ret1 = old->next;
										HX_STACK_LINE(1683)
										_this->head = ret1;
										HX_STACK_LINE(1683)
										bool tmp7 = (_this->head == null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(1683)
										if ((tmp7)){
											HX_STACK_LINE(1683)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1683)
										old = pre->next;
										HX_STACK_LINE(1683)
										ret1 = old->next;
										HX_STACK_LINE(1683)
										pre->next = ret1;
										HX_STACK_LINE(1683)
										bool tmp7 = (ret1 == null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(1683)
										if ((tmp7)){
											HX_STACK_LINE(1683)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1683)
									{
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1683)
										o->elt = null();
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(1683)
										o->next = tmp7;
										HX_STACK_LINE(1683)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1683)
									_this->modified = true;
									HX_STACK_LINE(1683)
									(_this->length)--;
									HX_STACK_LINE(1683)
									_this->pushmod = true;
									HX_STACK_LINE(1683)
									ret1;
								}
								HX_STACK_LINE(1683)
								ret = true;
								HX_STACK_LINE(1683)
								break;
							}
							HX_STACK_LINE(1683)
							pre = cur;
							HX_STACK_LINE(1683)
							cur = cur->next;
						}
						HX_STACK_LINE(1683)
						ret;
					}
				}
				HX_STACK_LINE(1683)
				::zpp_nape::space::ZPP_AABBPair tmp2 = this->pair;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1683)
				bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1683)
				if ((tmp3)){
					HX_STACK_LINE(1683)
					::zpp_nape::space::ZPP_AABBPair tmp4 = this->pair;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1683)
					tmp4->arb = null();
					HX_STACK_LINE(1683)
					this->pair = null();
				}
			}
			HX_STACK_LINE(1683)
			::zpp_nape::phys::ZPP_Body tmp2 = this->b2 = null();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1683)
			this->b1 = tmp2;
			HX_STACK_LINE(1683)
			this->active = false;
			HX_STACK_LINE(1683)
			this->intchange = false;
		}
		HX_STACK_LINE(1684)
		while((true)){
			HX_STACK_LINE(1684)
			::zpp_nape::dynamics::ZPP_Contact tmp = this->contacts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1684)
			::zpp_nape::dynamics::ZPP_Contact tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1684)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1684)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1684)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1684)
			if ((tmp4)){
				HX_STACK_LINE(1684)
				break;
			}
			HX_STACK_LINE(1685)
			{
				HX_STACK_LINE(1686)
				::zpp_nape::dynamics::ZPP_Contact tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1686)
				{
					HX_STACK_LINE(1686)
					::zpp_nape::dynamics::ZPP_Contact tmp6 = this->contacts;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1686)
					::zpp_nape::dynamics::ZPP_Contact _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1686)
					::zpp_nape::dynamics::ZPP_Contact ret = _this->next;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1686)
					_this->pop();
					HX_STACK_LINE(1686)
					tmp5 = ret;
				}
				HX_STACK_LINE(1686)
				::zpp_nape::dynamics::ZPP_Contact o = tmp5;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1695)
				o->arbiter = null();
				HX_STACK_LINE(1696)
				::zpp_nape::dynamics::ZPP_Contact tmp6 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1696)
				o->next = tmp6;
				HX_STACK_LINE(1697)
				::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1702)
			{
				HX_STACK_LINE(1702)
				::zpp_nape::dynamics::ZPP_IContact tmp5 = this->innards;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1702)
				::zpp_nape::dynamics::ZPP_IContact _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1702)
				::zpp_nape::dynamics::ZPP_IContact ret = _this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1702)
				_this->next = ret->next;
				HX_STACK_LINE(1702)
				ret->_inuse = false;
				HX_STACK_LINE(1702)
				bool tmp6 = (_this->next == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1702)
				if ((tmp6)){
					HX_STACK_LINE(1702)
					_this->pushmod = true;
				}
				HX_STACK_LINE(1702)
				_this->modified = true;
				HX_STACK_LINE(1702)
				(_this->length)--;
			}
		}
		HX_STACK_LINE(1704)
		{
			HX_STACK_LINE(1705)
			::zpp_nape::dynamics::ZPP_ColArbiter o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1714)
			{
				HX_STACK_LINE(1714)
				o->userdef_dyn_fric = false;
				HX_STACK_LINE(1714)
				o->userdef_stat_fric = false;
				HX_STACK_LINE(1714)
				o->userdef_restitution = false;
				HX_STACK_LINE(1714)
				o->userdef_rfric = false;
				HX_STACK_LINE(1714)
				::zpp_nape::shape::ZPP_Edge tmp = o->__ref_edge2 = null();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1714)
				o->__ref_edge1 = tmp;
			}
			HX_STACK_LINE(1715)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1715)
			o->next = tmp;
			HX_STACK_LINE(1716)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1721)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,retire,(void))

Void ZPP_ColArbiter_obj::makemutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","makemutable",0x6d41cbf1,"zpp_nape.dynamics.ZPP_ColArbiter.makemutable","zpp_nape/dynamics/Arbiter.hx",1726,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1727)
		this->_mutable = true;
		HX_STACK_LINE(1728)
		::nape::geom::Vec2 tmp = this->wrap_normal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1728)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1728)
		if ((tmp1)){
			HX_STACK_LINE(1728)
			::nape::geom::Vec2 tmp2 = this->wrap_normal;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1728)
			tmp2->zpp_inner->_immutable = false;
		}
		HX_STACK_LINE(1729)
		::nape::dynamics::ContactList tmp2 = this->wrap_contacts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1729)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1729)
		if ((tmp3)){
			HX_STACK_LINE(1729)
			::nape::dynamics::ContactList tmp4 = this->wrap_contacts;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1729)
			tmp4->zpp_inner->immutable = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,makemutable,(void))

Void ZPP_ColArbiter_obj::makeimmutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","makeimmutable",0xb6e45d4d,"zpp_nape.dynamics.ZPP_ColArbiter.makeimmutable","zpp_nape/dynamics/Arbiter.hx",1733,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1734)
		this->_mutable = false;
		HX_STACK_LINE(1735)
		::nape::geom::Vec2 tmp = this->wrap_normal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1735)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1735)
		if ((tmp1)){
			HX_STACK_LINE(1735)
			::nape::geom::Vec2 tmp2 = this->wrap_normal;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1735)
			tmp2->zpp_inner->_immutable = true;
		}
		HX_STACK_LINE(1736)
		::nape::dynamics::ContactList tmp2 = this->wrap_contacts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1736)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1736)
		if ((tmp3)){
			HX_STACK_LINE(1736)
			::nape::dynamics::ContactList tmp4 = this->wrap_contacts;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1736)
			tmp4->zpp_inner->immutable = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,makeimmutable,(void))

bool ZPP_ColArbiter_obj::contacts_adder( ::nape::dynamics::Contact x){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","contacts_adder",0x72379349,"zpp_nape.dynamics.ZPP_ColArbiter.contacts_adder","zpp_nape/dynamics/Arbiter.hx",1738,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1740)
	HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot add new contacts, information required is far too specific and detailed :)","\xfb","\x36","\xa0","\xb5"));
	HX_STACK_LINE(1742)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,contacts_adder,return )

Void ZPP_ColArbiter_obj::contacts_subber( ::nape::dynamics::Contact x){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","contacts_subber",0x7950e8f4,"zpp_nape.dynamics.ZPP_ColArbiter.contacts_subber","zpp_nape/dynamics/Arbiter.hx",1744,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1745)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1746)
		::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
		HX_STACK_LINE(1747)
		::zpp_nape::dynamics::ZPP_IContact tmp = this->innards;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1747)
		::zpp_nape::dynamics::ZPP_IContact cx_itei = tmp->next;		HX_STACK_VAR(cx_itei,"cx_itei");
		HX_STACK_LINE(1748)
		{
			HX_STACK_LINE(1749)
			::zpp_nape::dynamics::ZPP_Contact tmp1 = this->contacts;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1749)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp1->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1750)
			while((true)){
				HX_STACK_LINE(1750)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1750)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1750)
				if ((tmp3)){
					HX_STACK_LINE(1750)
					break;
				}
				HX_STACK_LINE(1751)
				::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1752)
				{
					HX_STACK_LINE(1753)
					bool tmp4 = (c == x->zpp_inner);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1753)
					if ((tmp4)){
						HX_STACK_LINE(1754)
						::zpp_nape::dynamics::ZPP_Contact tmp5 = this->contacts;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1754)
						::zpp_nape::dynamics::ZPP_Contact tmp6 = pre;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1754)
						tmp5->erase(tmp6);
						HX_STACK_LINE(1755)
						::zpp_nape::dynamics::ZPP_IContact tmp7 = this->innards;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1755)
						::zpp_nape::dynamics::ZPP_IContact tmp8 = prei;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1755)
						tmp7->erase(tmp8);
						HX_STACK_LINE(1756)
						{
							HX_STACK_LINE(1757)
							::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1766)
							o->arbiter = null();
							HX_STACK_LINE(1767)
							::zpp_nape::dynamics::ZPP_Contact tmp9 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1767)
							o->next = tmp9;
							HX_STACK_LINE(1768)
							::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1773)
						break;
					}
					HX_STACK_LINE(1775)
					pre = cx_ite;
					HX_STACK_LINE(1776)
					prei = cx_itei;
					HX_STACK_LINE(1777)
					cx_itei = cx_itei->next;
				}
				HX_STACK_LINE(1779)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,contacts_subber,(void))

Void ZPP_ColArbiter_obj::setupcontacts( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","setupcontacts",0xfc2be209,"zpp_nape.dynamics.ZPP_ColArbiter.setupcontacts","zpp_nape/dynamics/Arbiter.hx",1783,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1784)
		::zpp_nape::dynamics::ZPP_Contact tmp = this->contacts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1784)
		::nape::dynamics::ContactList tmp1 = ::zpp_nape::util::ZPP_ContactList_obj::get(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1784)
		this->wrap_contacts = tmp1;
		HX_STACK_LINE(1785)
		bool tmp2 = this->_mutable;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1785)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1785)
		::nape::dynamics::ContactList tmp4 = this->wrap_contacts;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1785)
		tmp4->zpp_inner->immutable = tmp3;
		HX_STACK_LINE(1786)
		Dynamic tmp5 = this->contacts_adder_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1786)
		::nape::dynamics::ContactList tmp6 = this->wrap_contacts;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1786)
		tmp6->zpp_inner->adder = tmp5;
		HX_STACK_LINE(1787)
		::nape::dynamics::ContactList tmp7 = this->wrap_contacts;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1787)
		tmp7->zpp_inner->dontremove = true;
		HX_STACK_LINE(1788)
		Dynamic tmp8 = this->contacts_subber_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1788)
		::nape::dynamics::ContactList tmp9 = this->wrap_contacts;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1788)
		tmp9->zpp_inner->subber = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,setupcontacts,(void))

bool ZPP_ColArbiter_obj::cleanupContacts( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","cleanupContacts",0xed1bdb10,"zpp_nape.dynamics.ZPP_ColArbiter.cleanupContacts","zpp_nape/dynamics/Arbiter.hx",1792,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1793)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(1794)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1795)
	::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
	HX_STACK_LINE(1796)
	::zpp_nape::dynamics::ZPP_IContact tmp = this->innards;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1796)
	::zpp_nape::dynamics::ZPP_IContact cx_itei = tmp->next;		HX_STACK_VAR(cx_itei,"cx_itei");
	HX_STACK_LINE(1797)
	this->hc2 = false;
	HX_STACK_LINE(1798)
	{
		HX_STACK_LINE(1799)
		::zpp_nape::dynamics::ZPP_Contact tmp1 = this->contacts;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1799)
		::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp1->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1800)
		while((true)){
			HX_STACK_LINE(1800)
			bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1800)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1800)
			if ((tmp3)){
				HX_STACK_LINE(1800)
				break;
			}
			HX_STACK_LINE(1801)
			::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1802)
			{
				HX_STACK_LINE(1803)
				int tmp4 = c->stamp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1803)
				int tmp5 = ::nape::Config_obj::arbiterExpirationDelay;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1803)
				int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1803)
				int tmp7 = this->stamp;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1803)
				bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1803)
				if ((tmp8)){
					HX_STACK_LINE(1804)
					::zpp_nape::dynamics::ZPP_Contact tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1804)
					{
						HX_STACK_LINE(1804)
						::zpp_nape::dynamics::ZPP_Contact tmp10 = this->contacts;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1804)
						::zpp_nape::dynamics::ZPP_Contact _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1804)
						::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1804)
						::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1804)
						bool tmp11 = (pre == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1804)
						if ((tmp11)){
							HX_STACK_LINE(1804)
							old = _this->next;
							HX_STACK_LINE(1804)
							ret = old->next;
							HX_STACK_LINE(1804)
							_this->next = ret;
							HX_STACK_LINE(1804)
							bool tmp12 = (_this->next == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1804)
							if ((tmp12)){
								HX_STACK_LINE(1804)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1804)
							old = pre->next;
							HX_STACK_LINE(1804)
							ret = old->next;
							HX_STACK_LINE(1804)
							pre->next = ret;
							HX_STACK_LINE(1804)
							bool tmp12 = (ret == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1804)
							if ((tmp12)){
								HX_STACK_LINE(1804)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1804)
						old->_inuse = false;
						HX_STACK_LINE(1804)
						_this->modified = true;
						HX_STACK_LINE(1804)
						(_this->length)--;
						HX_STACK_LINE(1804)
						_this->pushmod = true;
						HX_STACK_LINE(1804)
						tmp9 = ret;
					}
					HX_STACK_LINE(1804)
					cx_ite = tmp9;
					HX_STACK_LINE(1805)
					::zpp_nape::dynamics::ZPP_IContact tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1805)
					{
						HX_STACK_LINE(1805)
						::zpp_nape::dynamics::ZPP_IContact tmp11 = this->innards;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1805)
						::zpp_nape::dynamics::ZPP_IContact _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1805)
						::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1805)
						::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1805)
						bool tmp12 = (prei == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1805)
						if ((tmp12)){
							HX_STACK_LINE(1805)
							old = _this->next;
							HX_STACK_LINE(1805)
							ret = old->next;
							HX_STACK_LINE(1805)
							_this->next = ret;
							HX_STACK_LINE(1805)
							bool tmp13 = (_this->next == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1805)
							if ((tmp13)){
								HX_STACK_LINE(1805)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1805)
							old = prei->next;
							HX_STACK_LINE(1805)
							ret = old->next;
							HX_STACK_LINE(1805)
							prei->next = ret;
							HX_STACK_LINE(1805)
							bool tmp13 = (ret == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1805)
							if ((tmp13)){
								HX_STACK_LINE(1805)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1805)
						old->_inuse = false;
						HX_STACK_LINE(1805)
						_this->modified = true;
						HX_STACK_LINE(1805)
						(_this->length)--;
						HX_STACK_LINE(1805)
						_this->pushmod = true;
						HX_STACK_LINE(1805)
						tmp10 = ret;
					}
					HX_STACK_LINE(1805)
					cx_itei = tmp10;
					HX_STACK_LINE(1806)
					{
						HX_STACK_LINE(1807)
						::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1816)
						o->arbiter = null();
						HX_STACK_LINE(1817)
						::zpp_nape::dynamics::ZPP_Contact tmp11 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1817)
						o->next = tmp11;
						HX_STACK_LINE(1818)
						::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1823)
					continue;
				}
				HX_STACK_LINE(1825)
				::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
				HX_STACK_LINE(1826)
				bool pact = c->active;		HX_STACK_VAR(pact,"pact");
				HX_STACK_LINE(1827)
				int tmp9 = c->stamp;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1827)
				int tmp10 = this->stamp;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1827)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1827)
				c->active = tmp11;
				HX_STACK_LINE(1828)
				bool tmp12 = c->active;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1828)
				if ((tmp12)){
					HX_STACK_LINE(1829)
					bool tmp13 = fst;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1829)
					if ((tmp13)){
						HX_STACK_LINE(1830)
						fst = false;
						HX_STACK_LINE(1831)
						this->c1 = ci;
						HX_STACK_LINE(1832)
						this->oc1 = c;
					}
					else{
						HX_STACK_LINE(1843)
						this->hc2 = true;
						HX_STACK_LINE(1844)
						this->c2 = ci;
						HX_STACK_LINE(1845)
						this->oc2 = c;
					}
				}
				HX_STACK_LINE(1848)
				bool tmp13 = (pact != c->active);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1848)
				if ((tmp13)){
					HX_STACK_LINE(1848)
					::zpp_nape::dynamics::ZPP_Contact tmp14 = this->contacts;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1848)
					tmp14->modified = true;
				}
				HX_STACK_LINE(1849)
				pre = cx_ite;
				HX_STACK_LINE(1850)
				prei = cx_itei;
				HX_STACK_LINE(1851)
				cx_itei = cx_itei->next;
			}
			HX_STACK_LINE(1853)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1856)
	bool tmp1 = this->hc2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1856)
	if ((tmp1)){
		HX_STACK_LINE(1857)
		this->hpc2 = true;
		HX_STACK_LINE(1858)
		::zpp_nape::dynamics::ZPP_Contact tmp2 = this->oc1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1858)
		bool tmp3 = tmp2->posOnly;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1858)
		if ((tmp3)){
			HX_STACK_LINE(1859)
			::zpp_nape::dynamics::ZPP_IContact tmp4 = this->c1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1859)
			::zpp_nape::dynamics::ZPP_IContact tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1860)
			::zpp_nape::dynamics::ZPP_IContact tmp6 = this->c2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1860)
			this->c1 = tmp6;
			HX_STACK_LINE(1861)
			this->c2 = tmp5;
			HX_STACK_LINE(1862)
			::zpp_nape::dynamics::ZPP_Contact tmp7 = this->oc1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1862)
			::zpp_nape::dynamics::ZPP_Contact tmp21 = tmp7;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1863)
			::zpp_nape::dynamics::ZPP_Contact tmp8 = this->oc2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1863)
			this->oc1 = tmp8;
			HX_STACK_LINE(1864)
			this->oc2 = tmp21;
			HX_STACK_LINE(1865)
			this->hc2 = false;
		}
		else{
			HX_STACK_LINE(1867)
			::zpp_nape::dynamics::ZPP_Contact tmp4 = this->oc2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1867)
			bool tmp5 = tmp4->posOnly;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1867)
			if ((tmp5)){
				HX_STACK_LINE(1868)
				this->hc2 = false;
			}
		}
		HX_STACK_LINE(1870)
		::zpp_nape::dynamics::ZPP_Contact tmp4 = this->oc1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1870)
		bool tmp5 = tmp4->posOnly;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1870)
		if ((tmp5)){
			HX_STACK_LINE(1871)
			fst = true;
		}
	}
	else{
		HX_STACK_LINE(1875)
		this->hpc2 = false;
	}
	HX_STACK_LINE(1877)
	bool tmp2 = fst;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1877)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,cleanupContacts,return )

bool ZPP_ColArbiter_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","preStep",0x26711d08,"zpp_nape.dynamics.ZPP_ColArbiter.preStep","zpp_nape/dynamics/Arbiter.hx",1882,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(1883)
	{
		HX_STACK_LINE(1883)
		bool tmp = this->invalidated;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1883)
		if ((tmp)){
			HX_STACK_LINE(1883)
			this->invalidated = false;
			HX_STACK_LINE(1883)
			{
				HX_STACK_LINE(1883)
				bool tmp1 = this->userdef_restitution;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1883)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1883)
				if ((tmp2)){
					HX_STACK_LINE(1883)
					::zpp_nape::shape::ZPP_Shape tmp3 = this->s1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1883)
					Float tmp4 = tmp3->material->elasticity;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1883)
					Float tmp5 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1883)
					bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1883)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1883)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1883)
					if ((tmp7)){
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp9 = this->s2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1883)
						Float tmp11 = tmp10->material->elasticity;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1883)
						Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1883)
						Float tmp13 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1883)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1883)
						tmp8 = (tmp12 <= tmp14);
					}
					else{
						HX_STACK_LINE(1883)
						tmp8 = true;
					}
					HX_STACK_LINE(1883)
					if ((tmp8)){
						HX_STACK_LINE(1883)
						this->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp9 = this->s1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1883)
						Float tmp10 = tmp9->material->elasticity;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1883)
						Float tmp11 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1883)
						bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1883)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1883)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1883)
						if ((tmp13)){
							HX_STACK_LINE(1883)
							::zpp_nape::shape::ZPP_Shape tmp15 = this->s2;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1883)
							::zpp_nape::shape::ZPP_Shape tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1883)
							Float tmp17 = tmp16->material->elasticity;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1883)
							Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1883)
							Float tmp19 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1883)
							Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1883)
							tmp14 = (tmp18 >= tmp20);
						}
						else{
							HX_STACK_LINE(1883)
							tmp14 = true;
						}
						HX_STACK_LINE(1883)
						if ((tmp14)){
							HX_STACK_LINE(1883)
							this->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(1883)
							::zpp_nape::shape::ZPP_Shape tmp15 = this->s1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1883)
							Float tmp16 = tmp15->material->elasticity;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1883)
							::zpp_nape::shape::ZPP_Shape tmp17 = this->s2;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1883)
							Float tmp18 = tmp17->material->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1883)
							Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1883)
							Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1883)
							this->restitution = tmp20;
						}
					}
					HX_STACK_LINE(1883)
					Float tmp9 = this->restitution;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1883)
					bool tmp10 = (tmp9 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1883)
					if ((tmp10)){
						HX_STACK_LINE(1883)
						this->restitution = (int)0;
					}
					HX_STACK_LINE(1883)
					Float tmp11 = this->restitution;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1883)
					bool tmp12 = (tmp11 > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1883)
					if ((tmp12)){
						HX_STACK_LINE(1883)
						this->restitution = (int)1;
					}
				}
				HX_STACK_LINE(1883)
				bool tmp3 = this->userdef_dyn_fric;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1883)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1883)
				if ((tmp4)){
					HX_STACK_LINE(1883)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1883)
					{
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp6 = this->s1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1883)
						Float tmp7 = tmp6->material->dynamicFriction;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp8 = this->s2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1883)
						Float tmp9 = tmp8->material->dynamicFriction;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1883)
						Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1883)
						tmp5 = ::Math_obj::sqrt(tmp10);
					}
					HX_STACK_LINE(1883)
					this->dyn_fric = tmp5;
				}
				HX_STACK_LINE(1883)
				bool tmp5 = this->userdef_stat_fric;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1883)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1883)
				if ((tmp6)){
					HX_STACK_LINE(1883)
					Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1883)
					{
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp8 = this->s1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1883)
						Float tmp9 = tmp8->material->staticFriction;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp10 = this->s2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1883)
						Float tmp11 = tmp10->material->staticFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1883)
						Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1883)
						tmp7 = ::Math_obj::sqrt(tmp12);
					}
					HX_STACK_LINE(1883)
					this->stat_fric = tmp7;
				}
				HX_STACK_LINE(1883)
				bool tmp7 = this->userdef_rfric;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1883)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1883)
				if ((tmp8)){
					HX_STACK_LINE(1883)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1883)
					{
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp10 = this->s1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1883)
						Float tmp11 = tmp10->material->rollingFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1883)
						::zpp_nape::shape::ZPP_Shape tmp12 = this->s2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1883)
						Float tmp13 = tmp12->material->rollingFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1883)
						Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1883)
						tmp9 = ::Math_obj::sqrt(tmp14);
					}
					HX_STACK_LINE(1883)
					this->rfric = tmp9;
				}
			}
		}
	}
	HX_STACK_LINE(1886)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1886)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1886)
	if ((tmp1)){
		HX_STACK_LINE(1886)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(1887)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1887)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1887)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1887)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(1888)
	this->pre_dt = dt;
	HX_STACK_LINE(1889)
	::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1889)
	Float tmp6 = tmp5->smass;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1889)
	::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1889)
	Float tmp8 = tmp7->smass;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1889)
	Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1889)
	Float mass_sum = tmp9;		HX_STACK_VAR(mass_sum,"mass_sum");
	HX_STACK_LINE(1890)
	this->hc2 = false;
	HX_STACK_LINE(1891)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(1892)
	::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1892)
	int tmp11 = tmp10->type;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1892)
	int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1892)
	bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1892)
	bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1892)
	bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1892)
	bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1892)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1892)
	if ((tmp16)){
		HX_STACK_LINE(1892)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1892)
		::zpp_nape::phys::ZPP_Body tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1892)
		int tmp20 = tmp19->type;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1892)
		int tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1892)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1892)
		bool tmp23 = (tmp20 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1892)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1892)
		bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1892)
		tmp17 = !(tmp25);
	}
	else{
		HX_STACK_LINE(1892)
		tmp17 = true;
	}
	HX_STACK_LINE(1892)
	bool statType = tmp17;		HX_STACK_VAR(statType,"statType");
	HX_STACK_LINE(1893)
	bool tmp18 = statType;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1893)
	Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1893)
	if ((tmp18)){
		HX_STACK_LINE(1893)
		bool tmp20 = this->continuous;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1893)
		if ((tmp20)){
			HX_STACK_LINE(1893)
			tmp19 = ::nape::Config_obj::contactContinuousStaticBiasCoef;
		}
		else{
			HX_STACK_LINE(1893)
			tmp19 = ::nape::Config_obj::contactStaticBiasCoef;
		}
	}
	else{
		HX_STACK_LINE(1893)
		bool tmp20 = this->continuous;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1893)
		if ((tmp20)){
			HX_STACK_LINE(1893)
			tmp19 = ::nape::Config_obj::contactContinuousBiasCoef;
		}
		else{
			HX_STACK_LINE(1893)
			tmp19 = ::nape::Config_obj::contactBiasCoef;
		}
	}
	HX_STACK_LINE(1893)
	Float bias = tmp19;		HX_STACK_VAR(bias,"bias");
	HX_STACK_LINE(1894)
	this->biasCoef = bias;
	HX_STACK_LINE(1895)
	this->continuous = false;
	HX_STACK_LINE(1896)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1897)
	::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
	HX_STACK_LINE(1898)
	::zpp_nape::dynamics::ZPP_IContact tmp20 = this->innards;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1898)
	::zpp_nape::dynamics::ZPP_IContact cx_itei = tmp20->next;		HX_STACK_VAR(cx_itei,"cx_itei");
	HX_STACK_LINE(1899)
	{
		HX_STACK_LINE(1900)
		::zpp_nape::dynamics::ZPP_Contact tmp21 = this->contacts;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1900)
		::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp21->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1901)
		while((true)){
			HX_STACK_LINE(1901)
			bool tmp22 = (cx_ite != null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1901)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1901)
			if ((tmp23)){
				HX_STACK_LINE(1901)
				break;
			}
			HX_STACK_LINE(1902)
			::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1903)
			{
				HX_STACK_LINE(1904)
				int tmp24 = c->stamp;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1904)
				int tmp25 = ::nape::Config_obj::arbiterExpirationDelay;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1904)
				int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1904)
				int tmp27 = this->stamp;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1904)
				bool tmp28 = (tmp26 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1904)
				if ((tmp28)){
					HX_STACK_LINE(1905)
					::zpp_nape::dynamics::ZPP_Contact tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1905)
					{
						HX_STACK_LINE(1905)
						::zpp_nape::dynamics::ZPP_Contact tmp30 = this->contacts;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1905)
						::zpp_nape::dynamics::ZPP_Contact _this = tmp30;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1905)
						::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1905)
						::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1905)
						bool tmp31 = (pre == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1905)
						if ((tmp31)){
							HX_STACK_LINE(1905)
							old = _this->next;
							HX_STACK_LINE(1905)
							ret = old->next;
							HX_STACK_LINE(1905)
							_this->next = ret;
							HX_STACK_LINE(1905)
							bool tmp32 = (_this->next == null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1905)
							if ((tmp32)){
								HX_STACK_LINE(1905)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1905)
							old = pre->next;
							HX_STACK_LINE(1905)
							ret = old->next;
							HX_STACK_LINE(1905)
							pre->next = ret;
							HX_STACK_LINE(1905)
							bool tmp32 = (ret == null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1905)
							if ((tmp32)){
								HX_STACK_LINE(1905)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1905)
						old->_inuse = false;
						HX_STACK_LINE(1905)
						_this->modified = true;
						HX_STACK_LINE(1905)
						(_this->length)--;
						HX_STACK_LINE(1905)
						_this->pushmod = true;
						HX_STACK_LINE(1905)
						tmp29 = ret;
					}
					HX_STACK_LINE(1905)
					cx_ite = tmp29;
					HX_STACK_LINE(1906)
					::zpp_nape::dynamics::ZPP_IContact tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1906)
					{
						HX_STACK_LINE(1906)
						::zpp_nape::dynamics::ZPP_IContact tmp31 = this->innards;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1906)
						::zpp_nape::dynamics::ZPP_IContact _this = tmp31;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1906)
						::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1906)
						::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1906)
						bool tmp32 = (prei == null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1906)
						if ((tmp32)){
							HX_STACK_LINE(1906)
							old = _this->next;
							HX_STACK_LINE(1906)
							ret = old->next;
							HX_STACK_LINE(1906)
							_this->next = ret;
							HX_STACK_LINE(1906)
							bool tmp33 = (_this->next == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1906)
							if ((tmp33)){
								HX_STACK_LINE(1906)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1906)
							old = prei->next;
							HX_STACK_LINE(1906)
							ret = old->next;
							HX_STACK_LINE(1906)
							prei->next = ret;
							HX_STACK_LINE(1906)
							bool tmp33 = (ret == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1906)
							if ((tmp33)){
								HX_STACK_LINE(1906)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1906)
						old->_inuse = false;
						HX_STACK_LINE(1906)
						_this->modified = true;
						HX_STACK_LINE(1906)
						(_this->length)--;
						HX_STACK_LINE(1906)
						_this->pushmod = true;
						HX_STACK_LINE(1906)
						tmp30 = ret;
					}
					HX_STACK_LINE(1906)
					cx_itei = tmp30;
					HX_STACK_LINE(1907)
					{
						HX_STACK_LINE(1908)
						::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1917)
						o->arbiter = null();
						HX_STACK_LINE(1918)
						::zpp_nape::dynamics::ZPP_Contact tmp31 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1918)
						o->next = tmp31;
						HX_STACK_LINE(1919)
						::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1924)
					continue;
				}
				HX_STACK_LINE(1928)
				::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
				HX_STACK_LINE(1929)
				bool pact = c->active;		HX_STACK_VAR(pact,"pact");
				HX_STACK_LINE(1930)
				int tmp29 = c->stamp;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1930)
				int tmp30 = this->stamp;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1930)
				bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1930)
				c->active = tmp31;
				HX_STACK_LINE(1931)
				bool tmp32 = c->active;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1931)
				if ((tmp32)){
					HX_STACK_LINE(1934)
					bool tmp33 = fst;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1934)
					if ((tmp33)){
						HX_STACK_LINE(1935)
						fst = false;
						HX_STACK_LINE(1936)
						this->c1 = ci;
						HX_STACK_LINE(1937)
						this->oc1 = c;
					}
					else{
						HX_STACK_LINE(1940)
						this->hc2 = true;
						HX_STACK_LINE(1941)
						this->c2 = ci;
						HX_STACK_LINE(1942)
						this->oc2 = c;
					}
					HX_STACK_LINE(1944)
					{
						HX_STACK_LINE(1945)
						Float tmp34 = c->px;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1945)
						::zpp_nape::phys::ZPP_Body tmp35 = this->b2;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1945)
						Float tmp36 = tmp35->posx;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1945)
						Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1945)
						ci->r2x = tmp37;
						HX_STACK_LINE(1946)
						Float tmp38 = c->py;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1946)
						::zpp_nape::phys::ZPP_Body tmp39 = this->b2;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1946)
						Float tmp40 = tmp39->posy;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1946)
						Float tmp41 = (tmp38 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1946)
						ci->r2y = tmp41;
					}
					HX_STACK_LINE(1948)
					{
						HX_STACK_LINE(1949)
						Float tmp34 = c->px;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1949)
						::zpp_nape::phys::ZPP_Body tmp35 = this->b1;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1949)
						Float tmp36 = tmp35->posx;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1949)
						Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1949)
						ci->r1x = tmp37;
						HX_STACK_LINE(1950)
						Float tmp38 = c->py;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1950)
						::zpp_nape::phys::ZPP_Body tmp39 = this->b1;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1950)
						Float tmp40 = tmp39->posy;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1950)
						Float tmp41 = (tmp38 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1950)
						ci->r1y = tmp41;
					}
					HX_STACK_LINE(1952)
					Float tmp34 = mass_sum;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1952)
					::zpp_nape::phys::ZPP_Body tmp35 = this->b2;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1952)
					Float tmp36 = tmp35->sinertia;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1952)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1952)
					{
						HX_STACK_LINE(1952)
						Float tmp38 = ci->r2x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1952)
						Float tmp39 = this->nx;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1952)
						Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1952)
						Float tmp41 = ci->r2y;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1952)
						Float tmp42 = this->ny;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1952)
						Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1952)
						Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1952)
						Float x = tmp44;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1952)
						tmp37 = (x * x);
					}
					HX_STACK_LINE(1952)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1952)
					Float tmp39 = (tmp34 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1952)
					Float kt = tmp39;		HX_STACK_VAR(kt,"kt");
					HX_STACK_LINE(1953)
					::zpp_nape::phys::ZPP_Body tmp40 = this->b1;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1953)
					Float tmp41 = tmp40->sinertia;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1953)
					Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1953)
					{
						HX_STACK_LINE(1953)
						Float tmp43 = ci->r1x;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1953)
						Float tmp44 = this->nx;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1953)
						Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1953)
						Float tmp46 = ci->r1y;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1953)
						Float tmp47 = this->ny;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1953)
						Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1953)
						Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1953)
						Float x = tmp49;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1953)
						tmp42 = (x * x);
					}
					HX_STACK_LINE(1953)
					Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1953)
					hx::AddEq(kt,tmp43);
					HX_STACK_LINE(1954)
					Float tmp44 = kt;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1954)
					Float tmp45 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1954)
					Float tmp46 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1954)
					Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1954)
					bool tmp48 = (tmp44 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1954)
					Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1954)
					if ((tmp48)){
						HX_STACK_LINE(1954)
						tmp49 = (int)0;
					}
					else{
						HX_STACK_LINE(1954)
						tmp49 = (Float(((Float)1.0)) / Float(kt));
					}
					HX_STACK_LINE(1954)
					ci->tMass = tmp49;
					HX_STACK_LINE(1955)
					Float tmp50 = mass_sum;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1955)
					::zpp_nape::phys::ZPP_Body tmp51 = this->b2;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1955)
					Float tmp52 = tmp51->sinertia;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1955)
					Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1955)
					{
						HX_STACK_LINE(1955)
						Float tmp54 = this->ny;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1955)
						Float tmp55 = ci->r2x;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1955)
						Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1955)
						Float tmp57 = this->nx;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1955)
						Float tmp58 = ci->r2y;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1955)
						Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1955)
						Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1955)
						Float x = tmp60;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1955)
						tmp53 = (x * x);
					}
					HX_STACK_LINE(1955)
					Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1955)
					Float tmp55 = (tmp50 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1955)
					Float nt = tmp55;		HX_STACK_VAR(nt,"nt");
					HX_STACK_LINE(1956)
					::zpp_nape::phys::ZPP_Body tmp56 = this->b1;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(1956)
					Float tmp57 = tmp56->sinertia;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(1956)
					Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(1956)
					{
						HX_STACK_LINE(1956)
						Float tmp59 = this->ny;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1956)
						Float tmp60 = ci->r1x;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1956)
						Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1956)
						Float tmp62 = this->nx;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1956)
						Float tmp63 = ci->r1y;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(1956)
						Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1956)
						Float tmp65 = (tmp61 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1956)
						Float x = tmp65;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1956)
						tmp58 = (x * x);
					}
					HX_STACK_LINE(1956)
					Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(1956)
					hx::AddEq(nt,tmp59);
					HX_STACK_LINE(1957)
					Float tmp60 = nt;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(1957)
					Float tmp61 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(1957)
					Float tmp62 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(1957)
					Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(1957)
					bool tmp64 = (tmp60 < tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(1957)
					Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(1957)
					if ((tmp64)){
						HX_STACK_LINE(1957)
						tmp65 = (int)0;
					}
					else{
						HX_STACK_LINE(1957)
						tmp65 = (Float(((Float)1.0)) / Float(nt));
					}
					HX_STACK_LINE(1957)
					ci->nMass = tmp65;
					HX_STACK_LINE(1958)
					Float vrx = ((Float)0.0);		HX_STACK_VAR(vrx,"vrx");
					HX_STACK_LINE(1959)
					Float vry = ((Float)0.0);		HX_STACK_VAR(vry,"vry");
					HX_STACK_LINE(1960)
					{
						HX_STACK_LINE(1961)
						::zpp_nape::phys::ZPP_Body tmp66 = this->b2;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(1961)
						Float tmp67 = tmp66->angvel;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(1961)
						::zpp_nape::phys::ZPP_Body tmp68 = this->b2;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(1961)
						Float tmp69 = tmp68->kinangvel;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(1961)
						Float tmp70 = (tmp67 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(1961)
						Float ang = tmp70;		HX_STACK_VAR(ang,"ang");
						HX_STACK_LINE(1962)
						::zpp_nape::phys::ZPP_Body tmp71 = this->b2;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(1962)
						Float tmp72 = tmp71->velx;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(1962)
						::zpp_nape::phys::ZPP_Body tmp73 = this->b2;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(1962)
						Float tmp74 = tmp73->kinvelx;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(1962)
						Float tmp75 = (tmp72 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(1962)
						Float tmp76 = (ci->r2y * ang);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(1962)
						Float tmp77 = (tmp75 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(1962)
						vrx = tmp77;
						HX_STACK_LINE(1963)
						::zpp_nape::phys::ZPP_Body tmp78 = this->b2;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(1963)
						Float tmp79 = tmp78->vely;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(1963)
						::zpp_nape::phys::ZPP_Body tmp80 = this->b2;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(1963)
						Float tmp81 = tmp80->kinvely;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(1963)
						Float tmp82 = (tmp79 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(1963)
						Float tmp83 = (ci->r2x * ang);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(1963)
						Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(1963)
						vry = tmp84;
						HX_STACK_LINE(1964)
						::zpp_nape::phys::ZPP_Body tmp85 = this->b1;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(1964)
						Float tmp86 = tmp85->angvel;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(1964)
						::zpp_nape::phys::ZPP_Body tmp87 = this->b1;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(1964)
						Float tmp88 = tmp87->kinangvel;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(1964)
						Float tmp89 = (tmp86 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(1964)
						ang = tmp89;
						HX_STACK_LINE(1965)
						::zpp_nape::phys::ZPP_Body tmp90 = this->b1;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(1965)
						Float tmp91 = tmp90->velx;		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(1965)
						::zpp_nape::phys::ZPP_Body tmp92 = this->b1;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(1965)
						Float tmp93 = tmp92->kinvelx;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(1965)
						Float tmp94 = (tmp91 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(1965)
						Float tmp95 = (ci->r1y * ang);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(1965)
						Float tmp96 = (tmp94 - tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(1965)
						hx::SubEq(vrx,tmp96);
						HX_STACK_LINE(1966)
						::zpp_nape::phys::ZPP_Body tmp97 = this->b1;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(1966)
						Float tmp98 = tmp97->vely;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(1966)
						::zpp_nape::phys::ZPP_Body tmp99 = this->b1;		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(1966)
						Float tmp100 = tmp99->kinvely;		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(1966)
						Float tmp101 = (tmp98 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(1966)
						Float tmp102 = (ci->r1x * ang);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(1966)
						Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(1966)
						hx::SubEq(vry,tmp103);
					}
					HX_STACK_LINE(1968)
					Float tmp66 = this->nx;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(1968)
					Float tmp67 = vrx;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(1968)
					Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(1968)
					Float tmp69 = this->ny;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(1968)
					Float tmp70 = vry;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(1968)
					Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(1968)
					Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(1968)
					Float vdot = tmp72;		HX_STACK_VAR(vdot,"vdot");
					HX_STACK_LINE(1969)
					Float tmp73 = this->restitution;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(1969)
					c->elasticity = tmp73;
					HX_STACK_LINE(1970)
					Float tmp74 = (vdot * c->elasticity);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1970)
					ci->bounce = tmp74;
					HX_STACK_LINE(1971)
					Float tmp75 = ci->bounce;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(1971)
					Float tmp76 = ::nape::Config_obj::elasticThreshold;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1971)
					Float tmp77 = -(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1971)
					bool tmp78 = (tmp75 > tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(1971)
					if ((tmp78)){
						HX_STACK_LINE(1972)
						ci->bounce = (int)0;
					}
					HX_STACK_LINE(1974)
					Float tmp79 = vry;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(1974)
					Float tmp80 = this->nx;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(1974)
					Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(1974)
					Float tmp82 = vrx;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(1974)
					Float tmp83 = this->ny;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1974)
					Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(1974)
					Float tmp85 = (tmp81 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(1974)
					vdot = tmp85;
					HX_STACK_LINE(1975)
					Float tmp86 = ::nape::Config_obj::staticFrictionThreshold;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(1975)
					Float thr = tmp86;		HX_STACK_VAR(thr,"thr");
					HX_STACK_LINE(1976)
					Float tmp87 = (vdot * vdot);		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(1976)
					Float tmp88 = (thr * thr);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(1976)
					bool tmp89 = (tmp87 > tmp88);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(1976)
					if ((tmp89)){
						HX_STACK_LINE(1977)
						Float tmp90 = this->dyn_fric;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(1977)
						ci->friction = tmp90;
					}
					else{
						HX_STACK_LINE(1980)
						Float tmp90 = this->stat_fric;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(1980)
						ci->friction = tmp90;
					}
					HX_STACK_LINE(1982)
					hx::MultEq(ci->jnAcc,dtratio);
					HX_STACK_LINE(1983)
					hx::MultEq(ci->jtAcc,dtratio);
				}
				HX_STACK_LINE(1985)
				bool tmp33 = (pact != c->active);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1985)
				if ((tmp33)){
					HX_STACK_LINE(1985)
					::zpp_nape::dynamics::ZPP_Contact tmp34 = this->contacts;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1985)
					tmp34->modified = true;
				}
				HX_STACK_LINE(1986)
				pre = cx_ite;
				HX_STACK_LINE(1987)
				prei = cx_itei;
				HX_STACK_LINE(1988)
				cx_itei = cx_itei->next;
			}
			HX_STACK_LINE(1990)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1993)
	bool tmp21 = this->hc2;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1993)
	if ((tmp21)){
		HX_STACK_LINE(1994)
		this->hpc2 = true;
		HX_STACK_LINE(1995)
		::zpp_nape::dynamics::ZPP_Contact tmp22 = this->oc1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1995)
		bool tmp23 = tmp22->posOnly;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1995)
		if ((tmp23)){
			HX_STACK_LINE(1996)
			::zpp_nape::dynamics::ZPP_IContact tmp24 = this->c1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1996)
			::zpp_nape::dynamics::ZPP_IContact tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1997)
			::zpp_nape::dynamics::ZPP_IContact tmp26 = this->c2;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1997)
			this->c1 = tmp26;
			HX_STACK_LINE(1998)
			this->c2 = tmp25;
			HX_STACK_LINE(1999)
			::zpp_nape::dynamics::ZPP_Contact tmp27 = this->oc1;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1999)
			::zpp_nape::dynamics::ZPP_Contact tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2000)
			::zpp_nape::dynamics::ZPP_Contact tmp29 = this->oc2;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2000)
			this->oc1 = tmp29;
			HX_STACK_LINE(2001)
			this->oc2 = tmp28;
			HX_STACK_LINE(2002)
			this->hc2 = false;
		}
		else{
			HX_STACK_LINE(2004)
			::zpp_nape::dynamics::ZPP_Contact tmp24 = this->oc2;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2004)
			bool tmp25 = tmp24->posOnly;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2004)
			if ((tmp25)){
				HX_STACK_LINE(2005)
				this->hc2 = false;
			}
		}
		HX_STACK_LINE(2007)
		::zpp_nape::dynamics::ZPP_Contact tmp24 = this->oc1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(2007)
		bool tmp25 = tmp24->posOnly;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2007)
		if ((tmp25)){
			HX_STACK_LINE(2008)
			fst = true;
		}
	}
	else{
		HX_STACK_LINE(2012)
		this->hpc2 = false;
	}
	HX_STACK_LINE(2014)
	hx::MultEq(this->jrAcc,dtratio);
	HX_STACK_LINE(2015)
	bool tmp22 = fst;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(2015)
	bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(2015)
	if ((tmp23)){
		HX_STACK_LINE(2016)
		Float tmp24 = this->ny;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(2016)
		::zpp_nape::dynamics::ZPP_IContact tmp25 = this->c1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2016)
		Float tmp26 = tmp25->r1x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2016)
		Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2016)
		Float tmp28 = this->nx;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2016)
		::zpp_nape::dynamics::ZPP_IContact tmp29 = this->c1;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(2016)
		Float tmp30 = tmp29->r1y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(2016)
		Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(2016)
		Float tmp32 = (tmp27 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2016)
		this->rn1a = tmp32;
		HX_STACK_LINE(2017)
		::zpp_nape::dynamics::ZPP_IContact tmp33 = this->c1;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(2017)
		Float tmp34 = tmp33->r1x;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(2017)
		Float tmp35 = this->nx;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(2017)
		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(2017)
		::zpp_nape::dynamics::ZPP_IContact tmp37 = this->c1;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(2017)
		Float tmp38 = tmp37->r1y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(2017)
		Float tmp39 = this->ny;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(2017)
		Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(2017)
		Float tmp41 = (tmp36 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(2017)
		this->rt1a = tmp41;
		HX_STACK_LINE(2018)
		Float tmp42 = this->ny;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(2018)
		::zpp_nape::dynamics::ZPP_IContact tmp43 = this->c1;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(2018)
		Float tmp44 = tmp43->r2x;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(2018)
		Float tmp45 = (tmp42 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(2018)
		Float tmp46 = this->nx;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(2018)
		::zpp_nape::dynamics::ZPP_IContact tmp47 = this->c1;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(2018)
		Float tmp48 = tmp47->r2y;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(2018)
		Float tmp49 = (tmp46 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(2018)
		Float tmp50 = (tmp45 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(2018)
		this->rn1b = tmp50;
		HX_STACK_LINE(2019)
		::zpp_nape::dynamics::ZPP_IContact tmp51 = this->c1;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(2019)
		Float tmp52 = tmp51->r2x;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(2019)
		Float tmp53 = this->nx;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(2019)
		Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(2019)
		::zpp_nape::dynamics::ZPP_IContact tmp55 = this->c1;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(2019)
		Float tmp56 = tmp55->r2y;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(2019)
		Float tmp57 = this->ny;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(2019)
		Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(2019)
		Float tmp59 = (tmp54 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(2019)
		this->rt1b = tmp59;
		HX_STACK_LINE(2020)
		::zpp_nape::phys::ZPP_Body tmp60 = this->b2;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(2020)
		Float tmp61 = tmp60->kinvelx;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(2020)
		::zpp_nape::dynamics::ZPP_IContact tmp62 = this->c1;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(2020)
		Float tmp63 = tmp62->r2y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(2020)
		::zpp_nape::phys::ZPP_Body tmp64 = this->b2;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(2020)
		Float tmp65 = tmp64->kinangvel;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(2020)
		Float tmp66 = (tmp63 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(2020)
		Float tmp67 = (tmp61 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(2020)
		::zpp_nape::phys::ZPP_Body tmp68 = this->b1;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(2020)
		Float tmp69 = tmp68->kinvelx;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(2020)
		::zpp_nape::dynamics::ZPP_IContact tmp70 = this->c1;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(2020)
		Float tmp71 = tmp70->r1y;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(2020)
		::zpp_nape::phys::ZPP_Body tmp72 = this->b1;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(2020)
		Float tmp73 = tmp72->kinangvel;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(2020)
		Float tmp74 = (tmp71 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(2020)
		Float tmp75 = (tmp69 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(2020)
		Float tmp76 = (tmp67 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(2020)
		this->k1x = tmp76;
		HX_STACK_LINE(2021)
		::zpp_nape::phys::ZPP_Body tmp77 = this->b2;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(2021)
		Float tmp78 = tmp77->kinvely;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(2021)
		::zpp_nape::dynamics::ZPP_IContact tmp79 = this->c1;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(2021)
		Float tmp80 = tmp79->r2x;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(2021)
		::zpp_nape::phys::ZPP_Body tmp81 = this->b2;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(2021)
		Float tmp82 = tmp81->kinangvel;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(2021)
		Float tmp83 = (tmp80 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(2021)
		Float tmp84 = (tmp78 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(2021)
		::zpp_nape::phys::ZPP_Body tmp85 = this->b1;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(2021)
		Float tmp86 = tmp85->kinvely;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(2021)
		::zpp_nape::dynamics::ZPP_IContact tmp87 = this->c1;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(2021)
		Float tmp88 = tmp87->r1x;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(2021)
		::zpp_nape::phys::ZPP_Body tmp89 = this->b1;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(2021)
		Float tmp90 = tmp89->kinangvel;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(2021)
		Float tmp91 = (tmp88 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(2021)
		Float tmp92 = (tmp86 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(2021)
		Float tmp93 = (tmp84 - tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(2021)
		this->k1y = tmp93;
	}
	HX_STACK_LINE(2023)
	bool tmp24 = this->hc2;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(2023)
	if ((tmp24)){
		HX_STACK_LINE(2024)
		Float tmp25 = this->ny;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2024)
		::zpp_nape::dynamics::ZPP_IContact tmp26 = this->c2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2024)
		Float tmp27 = tmp26->r1x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2024)
		Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2024)
		Float tmp29 = this->nx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(2024)
		::zpp_nape::dynamics::ZPP_IContact tmp30 = this->c2;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(2024)
		Float tmp31 = tmp30->r1y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(2024)
		Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2024)
		Float tmp33 = (tmp28 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(2024)
		this->rn2a = tmp33;
		HX_STACK_LINE(2025)
		::zpp_nape::dynamics::ZPP_IContact tmp34 = this->c2;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(2025)
		Float tmp35 = tmp34->r1x;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(2025)
		Float tmp36 = this->nx;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(2025)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(2025)
		::zpp_nape::dynamics::ZPP_IContact tmp38 = this->c2;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(2025)
		Float tmp39 = tmp38->r1y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(2025)
		Float tmp40 = this->ny;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(2025)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(2025)
		Float tmp42 = (tmp37 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(2025)
		this->rt2a = tmp42;
		HX_STACK_LINE(2026)
		Float tmp43 = this->ny;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(2026)
		::zpp_nape::dynamics::ZPP_IContact tmp44 = this->c2;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(2026)
		Float tmp45 = tmp44->r2x;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(2026)
		Float tmp46 = (tmp43 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(2026)
		Float tmp47 = this->nx;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(2026)
		::zpp_nape::dynamics::ZPP_IContact tmp48 = this->c2;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(2026)
		Float tmp49 = tmp48->r2y;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(2026)
		Float tmp50 = (tmp47 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(2026)
		Float tmp51 = (tmp46 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(2026)
		this->rn2b = tmp51;
		HX_STACK_LINE(2027)
		::zpp_nape::dynamics::ZPP_IContact tmp52 = this->c2;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(2027)
		Float tmp53 = tmp52->r2x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(2027)
		Float tmp54 = this->nx;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(2027)
		Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(2027)
		::zpp_nape::dynamics::ZPP_IContact tmp56 = this->c2;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(2027)
		Float tmp57 = tmp56->r2y;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(2027)
		Float tmp58 = this->ny;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(2027)
		Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(2027)
		Float tmp60 = (tmp55 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(2027)
		this->rt2b = tmp60;
		HX_STACK_LINE(2028)
		::zpp_nape::phys::ZPP_Body tmp61 = this->b2;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(2028)
		Float tmp62 = tmp61->kinvelx;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(2028)
		::zpp_nape::dynamics::ZPP_IContact tmp63 = this->c2;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(2028)
		Float tmp64 = tmp63->r2y;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(2028)
		::zpp_nape::phys::ZPP_Body tmp65 = this->b2;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(2028)
		Float tmp66 = tmp65->kinangvel;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(2028)
		Float tmp67 = (tmp64 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(2028)
		Float tmp68 = (tmp62 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(2028)
		::zpp_nape::phys::ZPP_Body tmp69 = this->b1;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(2028)
		Float tmp70 = tmp69->kinvelx;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(2028)
		::zpp_nape::dynamics::ZPP_IContact tmp71 = this->c2;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(2028)
		Float tmp72 = tmp71->r1y;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(2028)
		::zpp_nape::phys::ZPP_Body tmp73 = this->b1;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(2028)
		Float tmp74 = tmp73->kinangvel;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(2028)
		Float tmp75 = (tmp72 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(2028)
		Float tmp76 = (tmp70 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(2028)
		Float tmp77 = (tmp68 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(2028)
		this->k2x = tmp77;
		HX_STACK_LINE(2029)
		::zpp_nape::phys::ZPP_Body tmp78 = this->b2;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(2029)
		Float tmp79 = tmp78->kinvely;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(2029)
		::zpp_nape::dynamics::ZPP_IContact tmp80 = this->c2;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(2029)
		Float tmp81 = tmp80->r2x;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(2029)
		::zpp_nape::phys::ZPP_Body tmp82 = this->b2;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(2029)
		Float tmp83 = tmp82->kinangvel;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(2029)
		Float tmp84 = (tmp81 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(2029)
		Float tmp85 = (tmp79 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(2029)
		::zpp_nape::phys::ZPP_Body tmp86 = this->b1;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(2029)
		Float tmp87 = tmp86->kinvely;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(2029)
		::zpp_nape::dynamics::ZPP_IContact tmp88 = this->c2;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(2029)
		Float tmp89 = tmp88->r1x;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(2029)
		::zpp_nape::phys::ZPP_Body tmp90 = this->b1;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(2029)
		Float tmp91 = tmp90->kinangvel;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(2029)
		Float tmp92 = (tmp89 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(2029)
		Float tmp93 = (tmp87 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(2029)
		Float tmp94 = (tmp85 - tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(2029)
		this->k2y = tmp94;
		HX_STACK_LINE(2030)
		{
			HX_STACK_LINE(2031)
			Float tmp95 = mass_sum;		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(2031)
			::zpp_nape::phys::ZPP_Body tmp96 = this->b1;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(2031)
			Float tmp97 = tmp96->sinertia;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(2031)
			Float tmp98 = this->rn1a;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(2031)
			Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(2031)
			Float tmp100 = this->rn1a;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(2031)
			Float tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(2031)
			Float tmp102 = (tmp95 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(2031)
			::zpp_nape::phys::ZPP_Body tmp103 = this->b2;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(2031)
			Float tmp104 = tmp103->sinertia;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(2031)
			Float tmp105 = this->rn1b;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(2031)
			Float tmp106 = (tmp104 * tmp105);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(2031)
			Float tmp107 = this->rn1b;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(2031)
			Float tmp108 = (tmp106 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(2031)
			Float tmp109 = (tmp102 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(2031)
			this->kMassa = tmp109;
			HX_STACK_LINE(2032)
			Float tmp110 = mass_sum;		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(2032)
			::zpp_nape::phys::ZPP_Body tmp111 = this->b1;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(2032)
			Float tmp112 = tmp111->sinertia;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(2032)
			Float tmp113 = this->rn1a;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(2032)
			Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(2032)
			Float tmp115 = this->rn2a;		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(2032)
			Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(2032)
			Float tmp117 = (tmp110 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(2032)
			::zpp_nape::phys::ZPP_Body tmp118 = this->b2;		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(2032)
			Float tmp119 = tmp118->sinertia;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(2032)
			Float tmp120 = this->rn1b;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(2032)
			Float tmp121 = (tmp119 * tmp120);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(2032)
			Float tmp122 = this->rn2b;		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(2032)
			Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(2032)
			Float tmp124 = (tmp117 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(2032)
			this->kMassb = tmp124;
			HX_STACK_LINE(2033)
			Float tmp125 = mass_sum;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(2033)
			::zpp_nape::phys::ZPP_Body tmp126 = this->b1;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(2033)
			Float tmp127 = tmp126->sinertia;		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(2033)
			Float tmp128 = this->rn2a;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(2033)
			Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(2033)
			Float tmp130 = this->rn2a;		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(2033)
			Float tmp131 = (tmp129 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(2033)
			Float tmp132 = (tmp125 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(2033)
			::zpp_nape::phys::ZPP_Body tmp133 = this->b2;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(2033)
			Float tmp134 = tmp133->sinertia;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(2033)
			Float tmp135 = this->rn2b;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(2033)
			Float tmp136 = (tmp134 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(2033)
			Float tmp137 = this->rn2b;		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(2033)
			Float tmp138 = (tmp136 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(2033)
			Float tmp139 = (tmp132 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(2033)
			this->kMassc = tmp139;
		}
		HX_STACK_LINE(2035)
		Float tmp95 = this->kMassa;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(2035)
		Float tmp96 = this->kMassa;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(2035)
		Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(2035)
		Float tmp98 = this->kMassb;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(2035)
		Float tmp99 = ((int)2 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(2035)
		Float tmp100 = this->kMassb;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(2035)
		Float tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(2035)
		Float tmp102 = (tmp97 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(2035)
		Float tmp103 = this->kMassc;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(2035)
		Float tmp104 = this->kMassc;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(2035)
		Float tmp105 = (tmp103 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(2035)
		Float tmp106 = (tmp102 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(2035)
		Float norm = tmp106;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(2036)
		Float tmp107 = norm;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(2036)
		Float tmp108 = ::nape::Config_obj::illConditionedThreshold;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(2036)
		Float tmp109 = this->kMassa;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(2036)
		Float tmp110 = this->kMassc;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(2036)
		Float tmp111 = (tmp109 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(2036)
		Float tmp112 = this->kMassb;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(2036)
		Float tmp113 = this->kMassb;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(2036)
		Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(2036)
		Float tmp115 = (tmp111 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(2036)
		Float tmp116 = (tmp108 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(2036)
		bool tmp117 = (tmp107 < tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(2036)
		if ((tmp117)){
			HX_STACK_LINE(2037)
			{
				HX_STACK_LINE(2038)
				Float tmp118 = this->kMassa;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(2038)
				this->Ka = tmp118;
				HX_STACK_LINE(2039)
				Float tmp119 = this->kMassb;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(2039)
				this->Kb = tmp119;
				HX_STACK_LINE(2040)
				Float tmp120 = this->kMassc;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(2040)
				this->Kc = tmp120;
			}
			HX_STACK_LINE(2042)
			{
				HX_STACK_LINE(2043)
				Float tmp118 = this->kMassa;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(2043)
				Float tmp119 = this->kMassc;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(2043)
				Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(2043)
				Float tmp121 = this->kMassb;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(2043)
				Float tmp122 = this->kMassb;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(2043)
				Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(2043)
				Float tmp124 = (tmp120 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(2043)
				Float det = tmp124;		HX_STACK_VAR(det,"det");
				HX_STACK_LINE(2044)
				bool tmp125 = (det != det);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(2044)
				if ((tmp125)){
					HX_STACK_LINE(2045)
					Float tmp126 = this->kMassc = (int)0;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(2045)
					Float tmp127 = this->kMassb = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(2045)
					this->kMassa = tmp127;
					HX_STACK_LINE(2046)
					(int)3;
				}
				else{
					HX_STACK_LINE(2048)
					bool tmp126 = (det == (int)0);		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(2048)
					if ((tmp126)){
						HX_STACK_LINE(2049)
						int flag = (int)0;		HX_STACK_VAR(flag,"flag");
						HX_STACK_LINE(2050)
						Float tmp127 = this->kMassa;		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(2050)
						bool tmp128 = (tmp127 != (int)0);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(2050)
						if ((tmp128)){
							HX_STACK_LINE(2050)
							Float tmp129 = this->kMassa;		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(2050)
							Float tmp130 = (Float((int)1) / Float(tmp129));		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(2050)
							this->kMassa = tmp130;
						}
						else{
							HX_STACK_LINE(2052)
							this->kMassa = (int)0;
							HX_STACK_LINE(2053)
							hx::OrEq(flag,(int)1);
						}
						HX_STACK_LINE(2055)
						Float tmp129 = this->kMassc;		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(2055)
						bool tmp130 = (tmp129 != (int)0);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(2055)
						if ((tmp130)){
							HX_STACK_LINE(2055)
							Float tmp131 = this->kMassc;		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(2055)
							Float tmp132 = (Float((int)1) / Float(tmp131));		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(2055)
							this->kMassc = tmp132;
						}
						else{
							HX_STACK_LINE(2057)
							this->kMassc = (int)0;
							HX_STACK_LINE(2058)
							hx::OrEq(flag,(int)2);
						}
						HX_STACK_LINE(2060)
						this->kMassb = (int)0;
						HX_STACK_LINE(2061)
						flag;
					}
					else{
						HX_STACK_LINE(2064)
						Float tmp127 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(2064)
						det = tmp127;
						HX_STACK_LINE(2065)
						Float tmp128 = this->kMassc;		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(2065)
						Float tmp129 = det;		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(2065)
						Float tmp130 = (tmp128 * tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(2065)
						Float t = tmp130;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2066)
						Float tmp131 = this->kMassa;		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(2066)
						Float tmp132 = det;		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(2066)
						Float tmp133 = (tmp131 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(2066)
						this->kMassc = tmp133;
						HX_STACK_LINE(2067)
						this->kMassa = t;
						HX_STACK_LINE(2068)
						Float tmp134 = det;		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(2068)
						Float tmp135 = -(tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(2068)
						hx::MultEq(this->kMassb,tmp135);
						HX_STACK_LINE(2069)
						(int)0;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2074)
			this->hc2 = false;
			HX_STACK_LINE(2075)
			::zpp_nape::dynamics::ZPP_Contact tmp118 = this->oc2;		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(2075)
			Float tmp119 = tmp118->dist;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(2075)
			::zpp_nape::dynamics::ZPP_Contact tmp120 = this->oc1;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(2075)
			Float tmp121 = tmp120->dist;		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(2075)
			bool tmp122 = (tmp119 < tmp121);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(2075)
			if ((tmp122)){
				HX_STACK_LINE(2076)
				::zpp_nape::dynamics::ZPP_IContact tmp123 = this->c1;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(2076)
				::zpp_nape::dynamics::ZPP_IContact t = tmp123;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2077)
				::zpp_nape::dynamics::ZPP_IContact tmp124 = this->c2;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(2077)
				this->c1 = tmp124;
				HX_STACK_LINE(2078)
				this->c2 = t;
			}
			HX_STACK_LINE(2080)
			::zpp_nape::dynamics::ZPP_Contact tmp123 = this->oc2;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(2080)
			tmp123->active = false;
			HX_STACK_LINE(2081)
			::zpp_nape::dynamics::ZPP_Contact tmp124 = this->contacts;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(2081)
			tmp124->modified = true;
		}
	}
	HX_STACK_LINE(2084)
	{
		HX_STACK_LINE(2085)
		::zpp_nape::phys::ZPP_Body tmp25 = this->b2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2085)
		this->surfacex = tmp25->svelx;
		HX_STACK_LINE(2086)
		::zpp_nape::phys::ZPP_Body tmp26 = this->b2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2086)
		this->surfacey = tmp26->svely;
		HX_STACK_LINE(2095)
		{
		}
	}
	HX_STACK_LINE(2104)
	{
		HX_STACK_LINE(2105)
		Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(2114)
		::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2114)
		Float tmp26 = tmp25->svelx;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2114)
		Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2114)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2114)
		hx::AddEq(this->surfacex,tmp28);
		HX_STACK_LINE(2115)
		::zpp_nape::phys::ZPP_Body tmp29 = this->b1;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(2115)
		Float tmp30 = tmp29->svely;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(2115)
		Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(2115)
		Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2115)
		hx::AddEq(this->surfacey,tmp32);
	}
	HX_STACK_LINE(2117)
	{
		HX_STACK_LINE(2118)
		Float tmp25 = this->surfacex;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2118)
		Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2118)
		this->surfacex = tmp26;
		HX_STACK_LINE(2119)
		Float tmp27 = this->surfacey;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2119)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2119)
		this->surfacey = tmp28;
	}
	HX_STACK_LINE(2121)
	::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(2121)
	Float tmp26 = tmp25->sinertia;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(2121)
	::zpp_nape::phys::ZPP_Body tmp27 = this->b2;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(2121)
	Float tmp28 = tmp27->sinertia;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(2121)
	Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(2121)
	this->rMass = tmp29;
	HX_STACK_LINE(2122)
	Float tmp30 = this->rMass;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(2122)
	bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(2122)
	if ((tmp31)){
		HX_STACK_LINE(2122)
		Float tmp32 = this->rMass;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2122)
		Float tmp33 = (Float((int)1) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(2122)
		this->rMass = tmp33;
	}
	HX_STACK_LINE(2123)
	bool tmp32 = fst;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(2123)
	return tmp32;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,preStep,return )

Void ZPP_ColArbiter_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","warmStart",0xfe7d3416,"zpp_nape.dynamics.ZPP_ColArbiter.warmStart","zpp_nape/dynamics/Arbiter.hx",2127,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2128)
		{
			HX_STACK_LINE(2129)
			Float tmp = this->nx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2129)
			::zpp_nape::dynamics::ZPP_IContact tmp1 = this->c1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2129)
			Float tmp2 = tmp1->jnAcc;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2129)
			Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2129)
			Float tmp4 = this->ny;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2129)
			::zpp_nape::dynamics::ZPP_IContact tmp5 = this->c1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2129)
			Float tmp6 = tmp5->jtAcc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2129)
			Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2129)
			Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2129)
			Float jx = tmp8;		HX_STACK_VAR(jx,"jx");
			HX_STACK_LINE(2130)
			Float tmp9 = this->ny;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2130)
			::zpp_nape::dynamics::ZPP_IContact tmp10 = this->c1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2130)
			Float tmp11 = tmp10->jnAcc;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2130)
			Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2130)
			Float tmp13 = this->nx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2130)
			::zpp_nape::dynamics::ZPP_IContact tmp14 = this->c1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2130)
			Float tmp15 = tmp14->jtAcc;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2130)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2130)
			Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2130)
			Float jy = tmp17;		HX_STACK_VAR(jy,"jy");
			HX_STACK_LINE(2131)
			{
				HX_STACK_LINE(2132)
				::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2132)
				Float t = tmp18->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2141)
				Float tmp19 = (jx * t);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2141)
				::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2141)
				hx::SubEq(tmp20->velx,tmp19);
				HX_STACK_LINE(2142)
				Float tmp21 = (jy * t);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2142)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2142)
				hx::SubEq(tmp22->vely,tmp21);
			}
			HX_STACK_LINE(2144)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2144)
			Float tmp19 = tmp18->iinertia;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2144)
			Float tmp20 = jy;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2144)
			::zpp_nape::dynamics::ZPP_IContact tmp21 = this->c1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2144)
			Float tmp22 = tmp21->r1x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2144)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2144)
			Float tmp24 = jx;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2144)
			::zpp_nape::dynamics::ZPP_IContact tmp25 = this->c1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2144)
			Float tmp26 = tmp25->r1y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(2144)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2144)
			Float tmp28 = (tmp23 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2144)
			Float tmp29 = (tmp19 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2144)
			::zpp_nape::phys::ZPP_Body tmp30 = this->b1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2144)
			hx::SubEq(tmp30->angvel,tmp29);
			HX_STACK_LINE(2145)
			{
				HX_STACK_LINE(2146)
				::zpp_nape::phys::ZPP_Body tmp31 = this->b2;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(2146)
				Float t = tmp31->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2155)
				Float tmp32 = (jx * t);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(2155)
				::zpp_nape::phys::ZPP_Body tmp33 = this->b2;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2155)
				hx::AddEq(tmp33->velx,tmp32);
				HX_STACK_LINE(2156)
				Float tmp34 = (jy * t);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2156)
				::zpp_nape::phys::ZPP_Body tmp35 = this->b2;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2156)
				hx::AddEq(tmp35->vely,tmp34);
			}
			HX_STACK_LINE(2158)
			::zpp_nape::phys::ZPP_Body tmp31 = this->b2;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2158)
			Float tmp32 = tmp31->iinertia;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2158)
			Float tmp33 = jy;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2158)
			::zpp_nape::dynamics::ZPP_IContact tmp34 = this->c1;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2158)
			Float tmp35 = tmp34->r2x;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(2158)
			Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(2158)
			Float tmp37 = jx;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(2158)
			::zpp_nape::dynamics::ZPP_IContact tmp38 = this->c1;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(2158)
			Float tmp39 = tmp38->r2y;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(2158)
			Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(2158)
			Float tmp41 = (tmp36 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(2158)
			Float tmp42 = (tmp32 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(2158)
			::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(2158)
			hx::AddEq(tmp43->angvel,tmp42);
		}
		HX_STACK_LINE(2160)
		bool tmp = this->hc2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2160)
		if ((tmp)){
			HX_STACK_LINE(2161)
			Float tmp1 = this->nx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2161)
			::zpp_nape::dynamics::ZPP_IContact tmp2 = this->c2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2161)
			Float tmp3 = tmp2->jnAcc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2161)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2161)
			Float tmp5 = this->ny;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2161)
			::zpp_nape::dynamics::ZPP_IContact tmp6 = this->c2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2161)
			Float tmp7 = tmp6->jtAcc;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2161)
			Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2161)
			Float tmp9 = (tmp4 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2161)
			Float jx = tmp9;		HX_STACK_VAR(jx,"jx");
			HX_STACK_LINE(2162)
			Float tmp10 = this->ny;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2162)
			::zpp_nape::dynamics::ZPP_IContact tmp11 = this->c2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2162)
			Float tmp12 = tmp11->jnAcc;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2162)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2162)
			Float tmp14 = this->nx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2162)
			::zpp_nape::dynamics::ZPP_IContact tmp15 = this->c2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2162)
			Float tmp16 = tmp15->jtAcc;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2162)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2162)
			Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2162)
			Float jy = tmp18;		HX_STACK_VAR(jy,"jy");
			HX_STACK_LINE(2163)
			{
				HX_STACK_LINE(2164)
				::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2164)
				Float t = tmp19->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2173)
				Float tmp20 = (jx * t);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2173)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2173)
				hx::SubEq(tmp21->velx,tmp20);
				HX_STACK_LINE(2174)
				Float tmp22 = (jy * t);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2174)
				::zpp_nape::phys::ZPP_Body tmp23 = this->b1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2174)
				hx::SubEq(tmp23->vely,tmp22);
			}
			HX_STACK_LINE(2176)
			::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2176)
			Float tmp20 = tmp19->iinertia;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2176)
			Float tmp21 = jy;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2176)
			::zpp_nape::dynamics::ZPP_IContact tmp22 = this->c2;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2176)
			Float tmp23 = tmp22->r1x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2176)
			Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2176)
			Float tmp25 = jx;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2176)
			::zpp_nape::dynamics::ZPP_IContact tmp26 = this->c2;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(2176)
			Float tmp27 = tmp26->r1y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2176)
			Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2176)
			Float tmp29 = (tmp24 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2176)
			Float tmp30 = (tmp20 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2176)
			::zpp_nape::phys::ZPP_Body tmp31 = this->b1;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2176)
			hx::SubEq(tmp31->angvel,tmp30);
			HX_STACK_LINE(2177)
			{
				HX_STACK_LINE(2178)
				::zpp_nape::phys::ZPP_Body tmp32 = this->b2;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(2178)
				Float t = tmp32->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2187)
				Float tmp33 = (jx * t);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2187)
				::zpp_nape::phys::ZPP_Body tmp34 = this->b2;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2187)
				hx::AddEq(tmp34->velx,tmp33);
				HX_STACK_LINE(2188)
				Float tmp35 = (jy * t);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2188)
				::zpp_nape::phys::ZPP_Body tmp36 = this->b2;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2188)
				hx::AddEq(tmp36->vely,tmp35);
			}
			HX_STACK_LINE(2190)
			::zpp_nape::phys::ZPP_Body tmp32 = this->b2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2190)
			Float tmp33 = tmp32->iinertia;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2190)
			Float tmp34 = jy;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2190)
			::zpp_nape::dynamics::ZPP_IContact tmp35 = this->c2;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(2190)
			Float tmp36 = tmp35->r2x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(2190)
			Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(2190)
			Float tmp38 = jx;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(2190)
			::zpp_nape::dynamics::ZPP_IContact tmp39 = this->c2;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(2190)
			Float tmp40 = tmp39->r2y;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(2190)
			Float tmp41 = (tmp38 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(2190)
			Float tmp42 = (tmp37 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(2190)
			Float tmp43 = (tmp33 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(2190)
			::zpp_nape::phys::ZPP_Body tmp44 = this->b2;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(2190)
			hx::AddEq(tmp44->angvel,tmp43);
		}
		HX_STACK_LINE(2192)
		Float tmp1 = this->jrAcc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2192)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2192)
		Float tmp3 = tmp2->iinertia;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2192)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2192)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2192)
		hx::AddEq(tmp5->angvel,tmp4);
		HX_STACK_LINE(2193)
		Float tmp6 = this->jrAcc;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2193)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2193)
		Float tmp8 = tmp7->iinertia;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2193)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2193)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2193)
		hx::SubEq(tmp10->angvel,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,warmStart,(void))

Void ZPP_ColArbiter_obj::applyImpulseVel( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","applyImpulseVel",0x4e2344af,"zpp_nape.dynamics.ZPP_ColArbiter.applyImpulseVel","zpp_nape/dynamics/Arbiter.hx",2197,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2198)
		Float jx;		HX_STACK_VAR(jx,"jx");
		HX_STACK_LINE(2199)
		Float jy;		HX_STACK_VAR(jy,"jy");
		HX_STACK_LINE(2200)
		Float j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(2201)
		Float jMax;		HX_STACK_VAR(jMax,"jMax");
		HX_STACK_LINE(2202)
		Float jOld;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(2203)
		Float cjAcc;		HX_STACK_VAR(cjAcc,"cjAcc");
		HX_STACK_LINE(2204)
		Float tmp = this->k1x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2204)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2204)
		Float tmp2 = tmp1->velx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2204)
		Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2204)
		::zpp_nape::dynamics::ZPP_IContact tmp4 = this->c1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2204)
		Float tmp5 = tmp4->r2y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2204)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2204)
		Float tmp7 = tmp6->angvel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2204)
		Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2204)
		Float tmp9 = (tmp3 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2204)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2204)
		Float tmp11 = tmp10->velx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2204)
		::zpp_nape::dynamics::ZPP_IContact tmp12 = this->c1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2204)
		Float tmp13 = tmp12->r1y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2204)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2204)
		Float tmp15 = tmp14->angvel;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2204)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2204)
		Float tmp17 = (tmp11 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2204)
		Float tmp18 = (tmp9 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(2204)
		Float v1x = tmp18;		HX_STACK_VAR(v1x,"v1x");
		HX_STACK_LINE(2205)
		Float tmp19 = this->k1y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(2205)
		::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(2205)
		Float tmp21 = tmp20->vely;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(2205)
		Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(2205)
		::zpp_nape::dynamics::ZPP_IContact tmp23 = this->c1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(2205)
		Float tmp24 = tmp23->r2x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(2205)
		::zpp_nape::phys::ZPP_Body tmp25 = this->b2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2205)
		Float tmp26 = tmp25->angvel;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2205)
		Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2205)
		Float tmp28 = (tmp22 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2205)
		::zpp_nape::phys::ZPP_Body tmp29 = this->b1;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(2205)
		Float tmp30 = tmp29->vely;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(2205)
		::zpp_nape::dynamics::ZPP_IContact tmp31 = this->c1;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(2205)
		Float tmp32 = tmp31->r1x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2205)
		::zpp_nape::phys::ZPP_Body tmp33 = this->b1;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(2205)
		Float tmp34 = tmp33->angvel;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(2205)
		Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(2205)
		Float tmp36 = (tmp30 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(2205)
		Float tmp37 = (tmp28 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(2205)
		Float v1y = tmp37;		HX_STACK_VAR(v1y,"v1y");
		HX_STACK_LINE(2206)
		Float tmp38 = v1y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(2206)
		Float tmp39 = this->nx;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(2206)
		Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(2206)
		Float tmp41 = v1x;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(2206)
		Float tmp42 = this->ny;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(2206)
		Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(2206)
		Float tmp44 = (tmp40 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(2206)
		Float tmp45 = this->surfacex;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(2206)
		Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(2206)
		::zpp_nape::dynamics::ZPP_IContact tmp47 = this->c1;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(2206)
		Float tmp48 = tmp47->tMass;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(2206)
		Float tmp49 = (tmp46 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(2206)
		j = tmp49;
		HX_STACK_LINE(2207)
		::zpp_nape::dynamics::ZPP_IContact tmp50 = this->c1;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(2207)
		Float tmp51 = tmp50->friction;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(2207)
		::zpp_nape::dynamics::ZPP_IContact tmp52 = this->c1;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(2207)
		Float tmp53 = tmp52->jnAcc;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(2207)
		Float tmp54 = (tmp51 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(2207)
		jMax = tmp54;
		HX_STACK_LINE(2208)
		::zpp_nape::dynamics::ZPP_IContact tmp55 = this->c1;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(2208)
		jOld = tmp55->jtAcc;
		HX_STACK_LINE(2209)
		Float tmp56 = (jOld - j);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(2209)
		cjAcc = tmp56;
		HX_STACK_LINE(2210)
		bool tmp57 = (cjAcc > jMax);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(2210)
		if ((tmp57)){
			HX_STACK_LINE(2210)
			cjAcc = jMax;
		}
		else{
			HX_STACK_LINE(2210)
			Float tmp58 = cjAcc;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(2210)
			Float tmp59 = jMax;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(2210)
			Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(2210)
			bool tmp61 = (tmp58 < tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(2210)
			if ((tmp61)){
				HX_STACK_LINE(2210)
				Float tmp62 = jMax;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(2210)
				Float tmp63 = -(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(2210)
				cjAcc = tmp63;
			}
		}
		HX_STACK_LINE(2211)
		Float tmp58 = (cjAcc - jOld);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(2211)
		j = tmp58;
		HX_STACK_LINE(2212)
		::zpp_nape::dynamics::ZPP_IContact tmp59 = this->c1;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(2212)
		tmp59->jtAcc = cjAcc;
		HX_STACK_LINE(2213)
		Float tmp60 = this->ny;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(2213)
		Float tmp61 = -(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(2213)
		Float tmp62 = j;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(2213)
		Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(2213)
		jx = tmp63;
		HX_STACK_LINE(2214)
		Float tmp64 = this->nx;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(2214)
		Float tmp65 = j;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(2214)
		Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(2214)
		jy = tmp66;
		HX_STACK_LINE(2215)
		Float tmp67 = jx;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(2215)
		::zpp_nape::phys::ZPP_Body tmp68 = this->b2;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(2215)
		Float tmp69 = tmp68->imass;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(2215)
		Float tmp70 = (tmp67 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(2215)
		::zpp_nape::phys::ZPP_Body tmp71 = this->b2;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(2215)
		hx::AddEq(tmp71->velx,tmp70);
		HX_STACK_LINE(2216)
		Float tmp72 = jy;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(2216)
		::zpp_nape::phys::ZPP_Body tmp73 = this->b2;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(2216)
		Float tmp74 = tmp73->imass;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(2216)
		Float tmp75 = (tmp72 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(2216)
		::zpp_nape::phys::ZPP_Body tmp76 = this->b2;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(2216)
		hx::AddEq(tmp76->vely,tmp75);
		HX_STACK_LINE(2217)
		Float tmp77 = jx;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(2217)
		::zpp_nape::phys::ZPP_Body tmp78 = this->b1;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(2217)
		Float tmp79 = tmp78->imass;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(2217)
		Float tmp80 = (tmp77 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(2217)
		::zpp_nape::phys::ZPP_Body tmp81 = this->b1;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(2217)
		hx::SubEq(tmp81->velx,tmp80);
		HX_STACK_LINE(2218)
		Float tmp82 = jy;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(2218)
		::zpp_nape::phys::ZPP_Body tmp83 = this->b1;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(2218)
		Float tmp84 = tmp83->imass;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(2218)
		Float tmp85 = (tmp82 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(2218)
		::zpp_nape::phys::ZPP_Body tmp86 = this->b1;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(2218)
		hx::SubEq(tmp86->vely,tmp85);
		HX_STACK_LINE(2219)
		Float tmp87 = this->rt1b;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(2219)
		Float tmp88 = j;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(2219)
		Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(2219)
		::zpp_nape::phys::ZPP_Body tmp90 = this->b2;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(2219)
		Float tmp91 = tmp90->iinertia;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(2219)
		Float tmp92 = (tmp89 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(2219)
		::zpp_nape::phys::ZPP_Body tmp93 = this->b2;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(2219)
		hx::AddEq(tmp93->angvel,tmp92);
		HX_STACK_LINE(2220)
		Float tmp94 = this->rt1a;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(2220)
		Float tmp95 = j;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(2220)
		Float tmp96 = (tmp94 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(2220)
		::zpp_nape::phys::ZPP_Body tmp97 = this->b1;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(2220)
		Float tmp98 = tmp97->iinertia;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(2220)
		Float tmp99 = (tmp96 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(2220)
		::zpp_nape::phys::ZPP_Body tmp100 = this->b1;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(2220)
		hx::SubEq(tmp100->angvel,tmp99);
		HX_STACK_LINE(2221)
		bool tmp101 = this->hc2;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(2221)
		if ((tmp101)){
			HX_STACK_LINE(2222)
			Float tmp102 = this->k2x;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(2222)
			::zpp_nape::phys::ZPP_Body tmp103 = this->b2;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(2222)
			Float tmp104 = tmp103->velx;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(2222)
			Float tmp105 = (tmp102 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(2222)
			::zpp_nape::dynamics::ZPP_IContact tmp106 = this->c2;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(2222)
			Float tmp107 = tmp106->r2y;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(2222)
			::zpp_nape::phys::ZPP_Body tmp108 = this->b2;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(2222)
			Float tmp109 = tmp108->angvel;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(2222)
			Float tmp110 = (tmp107 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(2222)
			Float tmp111 = (tmp105 - tmp110);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(2222)
			::zpp_nape::phys::ZPP_Body tmp112 = this->b1;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(2222)
			Float tmp113 = tmp112->velx;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(2222)
			::zpp_nape::dynamics::ZPP_IContact tmp114 = this->c2;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(2222)
			Float tmp115 = tmp114->r1y;		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(2222)
			::zpp_nape::phys::ZPP_Body tmp116 = this->b1;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(2222)
			Float tmp117 = tmp116->angvel;		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(2222)
			Float tmp118 = (tmp115 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(2222)
			Float tmp119 = (tmp113 - tmp118);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(2222)
			Float tmp120 = (tmp111 - tmp119);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(2222)
			Float v2x = tmp120;		HX_STACK_VAR(v2x,"v2x");
			HX_STACK_LINE(2223)
			Float tmp121 = this->k2y;		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(2223)
			::zpp_nape::phys::ZPP_Body tmp122 = this->b2;		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(2223)
			Float tmp123 = tmp122->vely;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(2223)
			Float tmp124 = (tmp121 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(2223)
			::zpp_nape::dynamics::ZPP_IContact tmp125 = this->c2;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(2223)
			Float tmp126 = tmp125->r2x;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(2223)
			::zpp_nape::phys::ZPP_Body tmp127 = this->b2;		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(2223)
			Float tmp128 = tmp127->angvel;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(2223)
			Float tmp129 = (tmp126 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(2223)
			Float tmp130 = (tmp124 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(2223)
			::zpp_nape::phys::ZPP_Body tmp131 = this->b1;		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(2223)
			Float tmp132 = tmp131->vely;		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(2223)
			::zpp_nape::dynamics::ZPP_IContact tmp133 = this->c2;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(2223)
			Float tmp134 = tmp133->r1x;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(2223)
			::zpp_nape::phys::ZPP_Body tmp135 = this->b1;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(2223)
			Float tmp136 = tmp135->angvel;		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(2223)
			Float tmp137 = (tmp134 * tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(2223)
			Float tmp138 = (tmp132 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(2223)
			Float tmp139 = (tmp130 - tmp138);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(2223)
			Float v2y = tmp139;		HX_STACK_VAR(v2y,"v2y");
			HX_STACK_LINE(2224)
			Float tmp140 = v2y;		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(2224)
			Float tmp141 = this->nx;		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(2224)
			Float tmp142 = (tmp140 * tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(2224)
			Float tmp143 = v2x;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(2224)
			Float tmp144 = this->ny;		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(2224)
			Float tmp145 = (tmp143 * tmp144);		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(2224)
			Float tmp146 = (tmp142 - tmp145);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(2224)
			Float tmp147 = this->surfacex;		HX_STACK_VAR(tmp147,"tmp147");
			HX_STACK_LINE(2224)
			Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(2224)
			::zpp_nape::dynamics::ZPP_IContact tmp149 = this->c2;		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(2224)
			Float tmp150 = tmp149->tMass;		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(2224)
			Float tmp151 = (tmp148 * tmp150);		HX_STACK_VAR(tmp151,"tmp151");
			HX_STACK_LINE(2224)
			j = tmp151;
			HX_STACK_LINE(2225)
			::zpp_nape::dynamics::ZPP_IContact tmp152 = this->c2;		HX_STACK_VAR(tmp152,"tmp152");
			HX_STACK_LINE(2225)
			Float tmp153 = tmp152->friction;		HX_STACK_VAR(tmp153,"tmp153");
			HX_STACK_LINE(2225)
			::zpp_nape::dynamics::ZPP_IContact tmp154 = this->c2;		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(2225)
			Float tmp155 = tmp154->jnAcc;		HX_STACK_VAR(tmp155,"tmp155");
			HX_STACK_LINE(2225)
			Float tmp156 = (tmp153 * tmp155);		HX_STACK_VAR(tmp156,"tmp156");
			HX_STACK_LINE(2225)
			jMax = tmp156;
			HX_STACK_LINE(2226)
			::zpp_nape::dynamics::ZPP_IContact tmp157 = this->c2;		HX_STACK_VAR(tmp157,"tmp157");
			HX_STACK_LINE(2226)
			jOld = tmp157->jtAcc;
			HX_STACK_LINE(2227)
			Float tmp158 = (jOld - j);		HX_STACK_VAR(tmp158,"tmp158");
			HX_STACK_LINE(2227)
			cjAcc = tmp158;
			HX_STACK_LINE(2228)
			bool tmp159 = (cjAcc > jMax);		HX_STACK_VAR(tmp159,"tmp159");
			HX_STACK_LINE(2228)
			if ((tmp159)){
				HX_STACK_LINE(2228)
				cjAcc = jMax;
			}
			else{
				HX_STACK_LINE(2228)
				Float tmp160 = cjAcc;		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(2228)
				Float tmp161 = jMax;		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(2228)
				Float tmp162 = -(tmp161);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(2228)
				bool tmp163 = (tmp160 < tmp162);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(2228)
				if ((tmp163)){
					HX_STACK_LINE(2228)
					Float tmp164 = jMax;		HX_STACK_VAR(tmp164,"tmp164");
					HX_STACK_LINE(2228)
					Float tmp165 = -(tmp164);		HX_STACK_VAR(tmp165,"tmp165");
					HX_STACK_LINE(2228)
					cjAcc = tmp165;
				}
			}
			HX_STACK_LINE(2229)
			Float tmp160 = (cjAcc - jOld);		HX_STACK_VAR(tmp160,"tmp160");
			HX_STACK_LINE(2229)
			j = tmp160;
			HX_STACK_LINE(2230)
			::zpp_nape::dynamics::ZPP_IContact tmp161 = this->c2;		HX_STACK_VAR(tmp161,"tmp161");
			HX_STACK_LINE(2230)
			tmp161->jtAcc = cjAcc;
			HX_STACK_LINE(2231)
			Float tmp162 = this->ny;		HX_STACK_VAR(tmp162,"tmp162");
			HX_STACK_LINE(2231)
			Float tmp163 = -(tmp162);		HX_STACK_VAR(tmp163,"tmp163");
			HX_STACK_LINE(2231)
			Float tmp164 = j;		HX_STACK_VAR(tmp164,"tmp164");
			HX_STACK_LINE(2231)
			Float tmp165 = (tmp163 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
			HX_STACK_LINE(2231)
			jx = tmp165;
			HX_STACK_LINE(2232)
			Float tmp166 = this->nx;		HX_STACK_VAR(tmp166,"tmp166");
			HX_STACK_LINE(2232)
			Float tmp167 = j;		HX_STACK_VAR(tmp167,"tmp167");
			HX_STACK_LINE(2232)
			Float tmp168 = (tmp166 * tmp167);		HX_STACK_VAR(tmp168,"tmp168");
			HX_STACK_LINE(2232)
			jy = tmp168;
			HX_STACK_LINE(2233)
			Float tmp169 = jx;		HX_STACK_VAR(tmp169,"tmp169");
			HX_STACK_LINE(2233)
			::zpp_nape::phys::ZPP_Body tmp170 = this->b2;		HX_STACK_VAR(tmp170,"tmp170");
			HX_STACK_LINE(2233)
			Float tmp171 = tmp170->imass;		HX_STACK_VAR(tmp171,"tmp171");
			HX_STACK_LINE(2233)
			Float tmp172 = (tmp169 * tmp171);		HX_STACK_VAR(tmp172,"tmp172");
			HX_STACK_LINE(2233)
			::zpp_nape::phys::ZPP_Body tmp173 = this->b2;		HX_STACK_VAR(tmp173,"tmp173");
			HX_STACK_LINE(2233)
			hx::AddEq(tmp173->velx,tmp172);
			HX_STACK_LINE(2234)
			Float tmp174 = jy;		HX_STACK_VAR(tmp174,"tmp174");
			HX_STACK_LINE(2234)
			::zpp_nape::phys::ZPP_Body tmp175 = this->b2;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(2234)
			Float tmp176 = tmp175->imass;		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(2234)
			Float tmp177 = (tmp174 * tmp176);		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(2234)
			::zpp_nape::phys::ZPP_Body tmp178 = this->b2;		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(2234)
			hx::AddEq(tmp178->vely,tmp177);
			HX_STACK_LINE(2235)
			Float tmp179 = jx;		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(2235)
			::zpp_nape::phys::ZPP_Body tmp180 = this->b1;		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(2235)
			Float tmp181 = tmp180->imass;		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(2235)
			Float tmp182 = (tmp179 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(2235)
			::zpp_nape::phys::ZPP_Body tmp183 = this->b1;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(2235)
			hx::SubEq(tmp183->velx,tmp182);
			HX_STACK_LINE(2236)
			Float tmp184 = jy;		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(2236)
			::zpp_nape::phys::ZPP_Body tmp185 = this->b1;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(2236)
			Float tmp186 = tmp185->imass;		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(2236)
			Float tmp187 = (tmp184 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
			HX_STACK_LINE(2236)
			::zpp_nape::phys::ZPP_Body tmp188 = this->b1;		HX_STACK_VAR(tmp188,"tmp188");
			HX_STACK_LINE(2236)
			hx::SubEq(tmp188->vely,tmp187);
			HX_STACK_LINE(2237)
			Float tmp189 = this->rt2b;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(2237)
			Float tmp190 = j;		HX_STACK_VAR(tmp190,"tmp190");
			HX_STACK_LINE(2237)
			Float tmp191 = (tmp189 * tmp190);		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(2237)
			::zpp_nape::phys::ZPP_Body tmp192 = this->b2;		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(2237)
			Float tmp193 = tmp192->iinertia;		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(2237)
			Float tmp194 = (tmp191 * tmp193);		HX_STACK_VAR(tmp194,"tmp194");
			HX_STACK_LINE(2237)
			::zpp_nape::phys::ZPP_Body tmp195 = this->b2;		HX_STACK_VAR(tmp195,"tmp195");
			HX_STACK_LINE(2237)
			hx::AddEq(tmp195->angvel,tmp194);
			HX_STACK_LINE(2238)
			Float tmp196 = this->rt2a;		HX_STACK_VAR(tmp196,"tmp196");
			HX_STACK_LINE(2238)
			Float tmp197 = j;		HX_STACK_VAR(tmp197,"tmp197");
			HX_STACK_LINE(2238)
			Float tmp198 = (tmp196 * tmp197);		HX_STACK_VAR(tmp198,"tmp198");
			HX_STACK_LINE(2238)
			::zpp_nape::phys::ZPP_Body tmp199 = this->b1;		HX_STACK_VAR(tmp199,"tmp199");
			HX_STACK_LINE(2238)
			Float tmp200 = tmp199->iinertia;		HX_STACK_VAR(tmp200,"tmp200");
			HX_STACK_LINE(2238)
			Float tmp201 = (tmp198 * tmp200);		HX_STACK_VAR(tmp201,"tmp201");
			HX_STACK_LINE(2238)
			::zpp_nape::phys::ZPP_Body tmp202 = this->b1;		HX_STACK_VAR(tmp202,"tmp202");
			HX_STACK_LINE(2238)
			hx::SubEq(tmp202->angvel,tmp201);
			HX_STACK_LINE(2239)
			Float tmp203 = this->k1x;		HX_STACK_VAR(tmp203,"tmp203");
			HX_STACK_LINE(2239)
			::zpp_nape::phys::ZPP_Body tmp204 = this->b2;		HX_STACK_VAR(tmp204,"tmp204");
			HX_STACK_LINE(2239)
			Float tmp205 = tmp204->velx;		HX_STACK_VAR(tmp205,"tmp205");
			HX_STACK_LINE(2239)
			Float tmp206 = (tmp203 + tmp205);		HX_STACK_VAR(tmp206,"tmp206");
			HX_STACK_LINE(2239)
			::zpp_nape::dynamics::ZPP_IContact tmp207 = this->c1;		HX_STACK_VAR(tmp207,"tmp207");
			HX_STACK_LINE(2239)
			Float tmp208 = tmp207->r2y;		HX_STACK_VAR(tmp208,"tmp208");
			HX_STACK_LINE(2239)
			::zpp_nape::phys::ZPP_Body tmp209 = this->b2;		HX_STACK_VAR(tmp209,"tmp209");
			HX_STACK_LINE(2239)
			Float tmp210 = tmp209->angvel;		HX_STACK_VAR(tmp210,"tmp210");
			HX_STACK_LINE(2239)
			Float tmp211 = (tmp208 * tmp210);		HX_STACK_VAR(tmp211,"tmp211");
			HX_STACK_LINE(2239)
			Float tmp212 = (tmp206 - tmp211);		HX_STACK_VAR(tmp212,"tmp212");
			HX_STACK_LINE(2239)
			::zpp_nape::phys::ZPP_Body tmp213 = this->b1;		HX_STACK_VAR(tmp213,"tmp213");
			HX_STACK_LINE(2239)
			Float tmp214 = tmp213->velx;		HX_STACK_VAR(tmp214,"tmp214");
			HX_STACK_LINE(2239)
			::zpp_nape::dynamics::ZPP_IContact tmp215 = this->c1;		HX_STACK_VAR(tmp215,"tmp215");
			HX_STACK_LINE(2239)
			Float tmp216 = tmp215->r1y;		HX_STACK_VAR(tmp216,"tmp216");
			HX_STACK_LINE(2239)
			::zpp_nape::phys::ZPP_Body tmp217 = this->b1;		HX_STACK_VAR(tmp217,"tmp217");
			HX_STACK_LINE(2239)
			Float tmp218 = tmp217->angvel;		HX_STACK_VAR(tmp218,"tmp218");
			HX_STACK_LINE(2239)
			Float tmp219 = (tmp216 * tmp218);		HX_STACK_VAR(tmp219,"tmp219");
			HX_STACK_LINE(2239)
			Float tmp220 = (tmp214 - tmp219);		HX_STACK_VAR(tmp220,"tmp220");
			HX_STACK_LINE(2239)
			Float tmp221 = (tmp212 - tmp220);		HX_STACK_VAR(tmp221,"tmp221");
			HX_STACK_LINE(2239)
			v1x = tmp221;
			HX_STACK_LINE(2240)
			Float tmp222 = this->k1y;		HX_STACK_VAR(tmp222,"tmp222");
			HX_STACK_LINE(2240)
			::zpp_nape::phys::ZPP_Body tmp223 = this->b2;		HX_STACK_VAR(tmp223,"tmp223");
			HX_STACK_LINE(2240)
			Float tmp224 = tmp223->vely;		HX_STACK_VAR(tmp224,"tmp224");
			HX_STACK_LINE(2240)
			Float tmp225 = (tmp222 + tmp224);		HX_STACK_VAR(tmp225,"tmp225");
			HX_STACK_LINE(2240)
			::zpp_nape::dynamics::ZPP_IContact tmp226 = this->c1;		HX_STACK_VAR(tmp226,"tmp226");
			HX_STACK_LINE(2240)
			Float tmp227 = tmp226->r2x;		HX_STACK_VAR(tmp227,"tmp227");
			HX_STACK_LINE(2240)
			::zpp_nape::phys::ZPP_Body tmp228 = this->b2;		HX_STACK_VAR(tmp228,"tmp228");
			HX_STACK_LINE(2240)
			Float tmp229 = tmp228->angvel;		HX_STACK_VAR(tmp229,"tmp229");
			HX_STACK_LINE(2240)
			Float tmp230 = (tmp227 * tmp229);		HX_STACK_VAR(tmp230,"tmp230");
			HX_STACK_LINE(2240)
			Float tmp231 = (tmp225 + tmp230);		HX_STACK_VAR(tmp231,"tmp231");
			HX_STACK_LINE(2240)
			::zpp_nape::phys::ZPP_Body tmp232 = this->b1;		HX_STACK_VAR(tmp232,"tmp232");
			HX_STACK_LINE(2240)
			Float tmp233 = tmp232->vely;		HX_STACK_VAR(tmp233,"tmp233");
			HX_STACK_LINE(2240)
			::zpp_nape::dynamics::ZPP_IContact tmp234 = this->c1;		HX_STACK_VAR(tmp234,"tmp234");
			HX_STACK_LINE(2240)
			Float tmp235 = tmp234->r1x;		HX_STACK_VAR(tmp235,"tmp235");
			HX_STACK_LINE(2240)
			::zpp_nape::phys::ZPP_Body tmp236 = this->b1;		HX_STACK_VAR(tmp236,"tmp236");
			HX_STACK_LINE(2240)
			Float tmp237 = tmp236->angvel;		HX_STACK_VAR(tmp237,"tmp237");
			HX_STACK_LINE(2240)
			Float tmp238 = (tmp235 * tmp237);		HX_STACK_VAR(tmp238,"tmp238");
			HX_STACK_LINE(2240)
			Float tmp239 = (tmp233 + tmp238);		HX_STACK_VAR(tmp239,"tmp239");
			HX_STACK_LINE(2240)
			Float tmp240 = (tmp231 - tmp239);		HX_STACK_VAR(tmp240,"tmp240");
			HX_STACK_LINE(2240)
			v1y = tmp240;
			HX_STACK_LINE(2241)
			Float tmp241 = this->k2x;		HX_STACK_VAR(tmp241,"tmp241");
			HX_STACK_LINE(2241)
			::zpp_nape::phys::ZPP_Body tmp242 = this->b2;		HX_STACK_VAR(tmp242,"tmp242");
			HX_STACK_LINE(2241)
			Float tmp243 = tmp242->velx;		HX_STACK_VAR(tmp243,"tmp243");
			HX_STACK_LINE(2241)
			Float tmp244 = (tmp241 + tmp243);		HX_STACK_VAR(tmp244,"tmp244");
			HX_STACK_LINE(2241)
			::zpp_nape::dynamics::ZPP_IContact tmp245 = this->c2;		HX_STACK_VAR(tmp245,"tmp245");
			HX_STACK_LINE(2241)
			Float tmp246 = tmp245->r2y;		HX_STACK_VAR(tmp246,"tmp246");
			HX_STACK_LINE(2241)
			::zpp_nape::phys::ZPP_Body tmp247 = this->b2;		HX_STACK_VAR(tmp247,"tmp247");
			HX_STACK_LINE(2241)
			Float tmp248 = tmp247->angvel;		HX_STACK_VAR(tmp248,"tmp248");
			HX_STACK_LINE(2241)
			Float tmp249 = (tmp246 * tmp248);		HX_STACK_VAR(tmp249,"tmp249");
			HX_STACK_LINE(2241)
			Float tmp250 = (tmp244 - tmp249);		HX_STACK_VAR(tmp250,"tmp250");
			HX_STACK_LINE(2241)
			::zpp_nape::phys::ZPP_Body tmp251 = this->b1;		HX_STACK_VAR(tmp251,"tmp251");
			HX_STACK_LINE(2241)
			Float tmp252 = tmp251->velx;		HX_STACK_VAR(tmp252,"tmp252");
			HX_STACK_LINE(2241)
			::zpp_nape::dynamics::ZPP_IContact tmp253 = this->c2;		HX_STACK_VAR(tmp253,"tmp253");
			HX_STACK_LINE(2241)
			Float tmp254 = tmp253->r1y;		HX_STACK_VAR(tmp254,"tmp254");
			HX_STACK_LINE(2241)
			::zpp_nape::phys::ZPP_Body tmp255 = this->b1;		HX_STACK_VAR(tmp255,"tmp255");
			HX_STACK_LINE(2241)
			Float tmp256 = tmp255->angvel;		HX_STACK_VAR(tmp256,"tmp256");
			HX_STACK_LINE(2241)
			Float tmp257 = (tmp254 * tmp256);		HX_STACK_VAR(tmp257,"tmp257");
			HX_STACK_LINE(2241)
			Float tmp258 = (tmp252 - tmp257);		HX_STACK_VAR(tmp258,"tmp258");
			HX_STACK_LINE(2241)
			Float tmp259 = (tmp250 - tmp258);		HX_STACK_VAR(tmp259,"tmp259");
			HX_STACK_LINE(2241)
			v2x = tmp259;
			HX_STACK_LINE(2242)
			Float tmp260 = this->k2y;		HX_STACK_VAR(tmp260,"tmp260");
			HX_STACK_LINE(2242)
			::zpp_nape::phys::ZPP_Body tmp261 = this->b2;		HX_STACK_VAR(tmp261,"tmp261");
			HX_STACK_LINE(2242)
			Float tmp262 = tmp261->vely;		HX_STACK_VAR(tmp262,"tmp262");
			HX_STACK_LINE(2242)
			Float tmp263 = (tmp260 + tmp262);		HX_STACK_VAR(tmp263,"tmp263");
			HX_STACK_LINE(2242)
			::zpp_nape::dynamics::ZPP_IContact tmp264 = this->c2;		HX_STACK_VAR(tmp264,"tmp264");
			HX_STACK_LINE(2242)
			Float tmp265 = tmp264->r2x;		HX_STACK_VAR(tmp265,"tmp265");
			HX_STACK_LINE(2242)
			::zpp_nape::phys::ZPP_Body tmp266 = this->b2;		HX_STACK_VAR(tmp266,"tmp266");
			HX_STACK_LINE(2242)
			Float tmp267 = tmp266->angvel;		HX_STACK_VAR(tmp267,"tmp267");
			HX_STACK_LINE(2242)
			Float tmp268 = (tmp265 * tmp267);		HX_STACK_VAR(tmp268,"tmp268");
			HX_STACK_LINE(2242)
			Float tmp269 = (tmp263 + tmp268);		HX_STACK_VAR(tmp269,"tmp269");
			HX_STACK_LINE(2242)
			::zpp_nape::phys::ZPP_Body tmp270 = this->b1;		HX_STACK_VAR(tmp270,"tmp270");
			HX_STACK_LINE(2242)
			Float tmp271 = tmp270->vely;		HX_STACK_VAR(tmp271,"tmp271");
			HX_STACK_LINE(2242)
			::zpp_nape::dynamics::ZPP_IContact tmp272 = this->c2;		HX_STACK_VAR(tmp272,"tmp272");
			HX_STACK_LINE(2242)
			Float tmp273 = tmp272->r1x;		HX_STACK_VAR(tmp273,"tmp273");
			HX_STACK_LINE(2242)
			::zpp_nape::phys::ZPP_Body tmp274 = this->b1;		HX_STACK_VAR(tmp274,"tmp274");
			HX_STACK_LINE(2242)
			Float tmp275 = tmp274->angvel;		HX_STACK_VAR(tmp275,"tmp275");
			HX_STACK_LINE(2242)
			Float tmp276 = (tmp273 * tmp275);		HX_STACK_VAR(tmp276,"tmp276");
			HX_STACK_LINE(2242)
			Float tmp277 = (tmp271 + tmp276);		HX_STACK_VAR(tmp277,"tmp277");
			HX_STACK_LINE(2242)
			Float tmp278 = (tmp269 - tmp277);		HX_STACK_VAR(tmp278,"tmp278");
			HX_STACK_LINE(2242)
			v2y = tmp278;
			HX_STACK_LINE(2243)
			::zpp_nape::dynamics::ZPP_IContact tmp279 = this->c1;		HX_STACK_VAR(tmp279,"tmp279");
			HX_STACK_LINE(2243)
			Float ax = tmp279->jnAcc;		HX_STACK_VAR(ax,"ax");
			HX_STACK_LINE(2244)
			::zpp_nape::dynamics::ZPP_IContact tmp280 = this->c2;		HX_STACK_VAR(tmp280,"tmp280");
			HX_STACK_LINE(2244)
			Float ay = tmp280->jnAcc;		HX_STACK_VAR(ay,"ay");
			HX_STACK_LINE(2261)
			Float tmp281 = v1x;		HX_STACK_VAR(tmp281,"tmp281");
			HX_STACK_LINE(2261)
			Float tmp282 = this->nx;		HX_STACK_VAR(tmp282,"tmp282");
			HX_STACK_LINE(2261)
			Float tmp283 = (tmp281 * tmp282);		HX_STACK_VAR(tmp283,"tmp283");
			HX_STACK_LINE(2261)
			Float tmp284 = v1y;		HX_STACK_VAR(tmp284,"tmp284");
			HX_STACK_LINE(2261)
			Float tmp285 = this->ny;		HX_STACK_VAR(tmp285,"tmp285");
			HX_STACK_LINE(2261)
			Float tmp286 = (tmp284 * tmp285);		HX_STACK_VAR(tmp286,"tmp286");
			HX_STACK_LINE(2261)
			Float tmp287 = (tmp283 + tmp286);		HX_STACK_VAR(tmp287,"tmp287");
			HX_STACK_LINE(2261)
			Float tmp288 = this->surfacey;		HX_STACK_VAR(tmp288,"tmp288");
			HX_STACK_LINE(2261)
			Float tmp289 = (tmp287 + tmp288);		HX_STACK_VAR(tmp289,"tmp289");
			HX_STACK_LINE(2261)
			::zpp_nape::dynamics::ZPP_IContact tmp290 = this->c1;		HX_STACK_VAR(tmp290,"tmp290");
			HX_STACK_LINE(2261)
			Float tmp291 = tmp290->bounce;		HX_STACK_VAR(tmp291,"tmp291");
			HX_STACK_LINE(2261)
			Float tmp292 = (tmp289 + tmp291);		HX_STACK_VAR(tmp292,"tmp292");
			HX_STACK_LINE(2261)
			Float tmp293 = this->Ka;		HX_STACK_VAR(tmp293,"tmp293");
			HX_STACK_LINE(2261)
			Float tmp294 = ax;		HX_STACK_VAR(tmp294,"tmp294");
			HX_STACK_LINE(2261)
			Float tmp295 = (tmp293 * tmp294);		HX_STACK_VAR(tmp295,"tmp295");
			HX_STACK_LINE(2261)
			Float tmp296 = this->Kb;		HX_STACK_VAR(tmp296,"tmp296");
			HX_STACK_LINE(2261)
			Float tmp297 = ay;		HX_STACK_VAR(tmp297,"tmp297");
			HX_STACK_LINE(2261)
			Float tmp298 = (tmp296 * tmp297);		HX_STACK_VAR(tmp298,"tmp298");
			HX_STACK_LINE(2261)
			Float tmp299 = (tmp295 + tmp298);		HX_STACK_VAR(tmp299,"tmp299");
			HX_STACK_LINE(2261)
			Float tmp300 = (tmp292 - tmp299);		HX_STACK_VAR(tmp300,"tmp300");
			HX_STACK_LINE(2261)
			Float jnx = tmp300;		HX_STACK_VAR(jnx,"jnx");
			HX_STACK_LINE(2262)
			Float tmp301 = v2x;		HX_STACK_VAR(tmp301,"tmp301");
			HX_STACK_LINE(2262)
			Float tmp302 = this->nx;		HX_STACK_VAR(tmp302,"tmp302");
			HX_STACK_LINE(2262)
			Float tmp303 = (tmp301 * tmp302);		HX_STACK_VAR(tmp303,"tmp303");
			HX_STACK_LINE(2262)
			Float tmp304 = v2y;		HX_STACK_VAR(tmp304,"tmp304");
			HX_STACK_LINE(2262)
			Float tmp305 = this->ny;		HX_STACK_VAR(tmp305,"tmp305");
			HX_STACK_LINE(2262)
			Float tmp306 = (tmp304 * tmp305);		HX_STACK_VAR(tmp306,"tmp306");
			HX_STACK_LINE(2262)
			Float tmp307 = (tmp303 + tmp306);		HX_STACK_VAR(tmp307,"tmp307");
			HX_STACK_LINE(2262)
			Float tmp308 = this->surfacey;		HX_STACK_VAR(tmp308,"tmp308");
			HX_STACK_LINE(2262)
			Float tmp309 = (tmp307 + tmp308);		HX_STACK_VAR(tmp309,"tmp309");
			HX_STACK_LINE(2262)
			::zpp_nape::dynamics::ZPP_IContact tmp310 = this->c2;		HX_STACK_VAR(tmp310,"tmp310");
			HX_STACK_LINE(2262)
			Float tmp311 = tmp310->bounce;		HX_STACK_VAR(tmp311,"tmp311");
			HX_STACK_LINE(2262)
			Float tmp312 = (tmp309 + tmp311);		HX_STACK_VAR(tmp312,"tmp312");
			HX_STACK_LINE(2262)
			Float tmp313 = this->Kb;		HX_STACK_VAR(tmp313,"tmp313");
			HX_STACK_LINE(2262)
			Float tmp314 = ax;		HX_STACK_VAR(tmp314,"tmp314");
			HX_STACK_LINE(2262)
			Float tmp315 = (tmp313 * tmp314);		HX_STACK_VAR(tmp315,"tmp315");
			HX_STACK_LINE(2262)
			Float tmp316 = this->Kc;		HX_STACK_VAR(tmp316,"tmp316");
			HX_STACK_LINE(2262)
			Float tmp317 = ay;		HX_STACK_VAR(tmp317,"tmp317");
			HX_STACK_LINE(2262)
			Float tmp318 = (tmp316 * tmp317);		HX_STACK_VAR(tmp318,"tmp318");
			HX_STACK_LINE(2262)
			Float tmp319 = (tmp315 + tmp318);		HX_STACK_VAR(tmp319,"tmp319");
			HX_STACK_LINE(2262)
			Float tmp320 = (tmp312 - tmp319);		HX_STACK_VAR(tmp320,"tmp320");
			HX_STACK_LINE(2262)
			Float jny = tmp320;		HX_STACK_VAR(jny,"jny");
			HX_STACK_LINE(2263)
			Float tmp321 = this->kMassa;		HX_STACK_VAR(tmp321,"tmp321");
			HX_STACK_LINE(2263)
			Float tmp322 = jnx;		HX_STACK_VAR(tmp322,"tmp322");
			HX_STACK_LINE(2263)
			Float tmp323 = (tmp321 * tmp322);		HX_STACK_VAR(tmp323,"tmp323");
			HX_STACK_LINE(2263)
			Float tmp324 = this->kMassb;		HX_STACK_VAR(tmp324,"tmp324");
			HX_STACK_LINE(2263)
			Float tmp325 = jny;		HX_STACK_VAR(tmp325,"tmp325");
			HX_STACK_LINE(2263)
			Float tmp326 = (tmp324 * tmp325);		HX_STACK_VAR(tmp326,"tmp326");
			HX_STACK_LINE(2263)
			Float tmp327 = (tmp323 + tmp326);		HX_STACK_VAR(tmp327,"tmp327");
			HX_STACK_LINE(2263)
			Float tmp328 = -(tmp327);		HX_STACK_VAR(tmp328,"tmp328");
			HX_STACK_LINE(2263)
			Float xx = tmp328;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(2264)
			Float tmp329 = this->kMassb;		HX_STACK_VAR(tmp329,"tmp329");
			HX_STACK_LINE(2264)
			Float tmp330 = jnx;		HX_STACK_VAR(tmp330,"tmp330");
			HX_STACK_LINE(2264)
			Float tmp331 = (tmp329 * tmp330);		HX_STACK_VAR(tmp331,"tmp331");
			HX_STACK_LINE(2264)
			Float tmp332 = this->kMassc;		HX_STACK_VAR(tmp332,"tmp332");
			HX_STACK_LINE(2264)
			Float tmp333 = jny;		HX_STACK_VAR(tmp333,"tmp333");
			HX_STACK_LINE(2264)
			Float tmp334 = (tmp332 * tmp333);		HX_STACK_VAR(tmp334,"tmp334");
			HX_STACK_LINE(2264)
			Float tmp335 = (tmp331 + tmp334);		HX_STACK_VAR(tmp335,"tmp335");
			HX_STACK_LINE(2264)
			Float tmp336 = -(tmp335);		HX_STACK_VAR(tmp336,"tmp336");
			HX_STACK_LINE(2264)
			Float xy = tmp336;		HX_STACK_VAR(xy,"xy");
			HX_STACK_LINE(2265)
			bool tmp337 = (xx >= (int)0);		HX_STACK_VAR(tmp337,"tmp337");
			HX_STACK_LINE(2265)
			bool tmp338;		HX_STACK_VAR(tmp338,"tmp338");
			HX_STACK_LINE(2265)
			if ((tmp337)){
				HX_STACK_LINE(2265)
				tmp338 = (xy >= (int)0);
			}
			else{
				HX_STACK_LINE(2265)
				tmp338 = false;
			}
			HX_STACK_LINE(2265)
			if ((tmp338)){
				HX_STACK_LINE(2266)
				{
					HX_STACK_LINE(2267)
					Float tmp339 = (xx - ax);		HX_STACK_VAR(tmp339,"tmp339");
					HX_STACK_LINE(2267)
					jnx = tmp339;
					HX_STACK_LINE(2268)
					Float tmp340 = (xy - ay);		HX_STACK_VAR(tmp340,"tmp340");
					HX_STACK_LINE(2268)
					jny = tmp340;
				}
				HX_STACK_LINE(2270)
				::zpp_nape::dynamics::ZPP_IContact tmp339 = this->c1;		HX_STACK_VAR(tmp339,"tmp339");
				HX_STACK_LINE(2270)
				tmp339->jnAcc = xx;
				HX_STACK_LINE(2271)
				::zpp_nape::dynamics::ZPP_IContact tmp340 = this->c2;		HX_STACK_VAR(tmp340,"tmp340");
				HX_STACK_LINE(2271)
				tmp340->jnAcc = xy;
			}
			else{
				HX_STACK_LINE(2274)
				::zpp_nape::dynamics::ZPP_IContact tmp339 = this->c1;		HX_STACK_VAR(tmp339,"tmp339");
				HX_STACK_LINE(2274)
				Float tmp340 = tmp339->nMass;		HX_STACK_VAR(tmp340,"tmp340");
				HX_STACK_LINE(2274)
				Float tmp341 = -(tmp340);		HX_STACK_VAR(tmp341,"tmp341");
				HX_STACK_LINE(2274)
				Float tmp342 = jnx;		HX_STACK_VAR(tmp342,"tmp342");
				HX_STACK_LINE(2274)
				Float tmp343 = (tmp341 * tmp342);		HX_STACK_VAR(tmp343,"tmp343");
				HX_STACK_LINE(2274)
				xx = tmp343;
				HX_STACK_LINE(2275)
				bool tmp344 = (xx >= (int)0);		HX_STACK_VAR(tmp344,"tmp344");
				HX_STACK_LINE(2275)
				bool tmp345;		HX_STACK_VAR(tmp345,"tmp345");
				HX_STACK_LINE(2275)
				if ((tmp344)){
					HX_STACK_LINE(2275)
					Float tmp346 = this->Kb;		HX_STACK_VAR(tmp346,"tmp346");
					HX_STACK_LINE(2275)
					Float tmp347 = tmp346;		HX_STACK_VAR(tmp347,"tmp347");
					HX_STACK_LINE(2275)
					Float tmp348 = xx;		HX_STACK_VAR(tmp348,"tmp348");
					HX_STACK_LINE(2275)
					Float tmp349 = (tmp347 * tmp348);		HX_STACK_VAR(tmp349,"tmp349");
					HX_STACK_LINE(2275)
					Float tmp350 = tmp349;		HX_STACK_VAR(tmp350,"tmp350");
					HX_STACK_LINE(2275)
					Float tmp351 = jny;		HX_STACK_VAR(tmp351,"tmp351");
					HX_STACK_LINE(2275)
					Float tmp352 = (tmp350 + tmp351);		HX_STACK_VAR(tmp352,"tmp352");
					HX_STACK_LINE(2275)
					Float tmp353 = tmp352;		HX_STACK_VAR(tmp353,"tmp353");
					HX_STACK_LINE(2275)
					tmp345 = (tmp353 >= (int)0);
				}
				else{
					HX_STACK_LINE(2275)
					tmp345 = false;
				}
				HX_STACK_LINE(2275)
				if ((tmp345)){
					HX_STACK_LINE(2276)
					Float tmp346 = (xx - ax);		HX_STACK_VAR(tmp346,"tmp346");
					HX_STACK_LINE(2276)
					jnx = tmp346;
					HX_STACK_LINE(2277)
					Float tmp347 = ay;		HX_STACK_VAR(tmp347,"tmp347");
					HX_STACK_LINE(2277)
					Float tmp348 = -(tmp347);		HX_STACK_VAR(tmp348,"tmp348");
					HX_STACK_LINE(2277)
					jny = tmp348;
					HX_STACK_LINE(2278)
					::zpp_nape::dynamics::ZPP_IContact tmp349 = this->c1;		HX_STACK_VAR(tmp349,"tmp349");
					HX_STACK_LINE(2278)
					tmp349->jnAcc = xx;
					HX_STACK_LINE(2279)
					::zpp_nape::dynamics::ZPP_IContact tmp350 = this->c2;		HX_STACK_VAR(tmp350,"tmp350");
					HX_STACK_LINE(2279)
					tmp350->jnAcc = (int)0;
				}
				else{
					HX_STACK_LINE(2282)
					::zpp_nape::dynamics::ZPP_IContact tmp346 = this->c2;		HX_STACK_VAR(tmp346,"tmp346");
					HX_STACK_LINE(2282)
					Float tmp347 = tmp346->nMass;		HX_STACK_VAR(tmp347,"tmp347");
					HX_STACK_LINE(2282)
					Float tmp348 = -(tmp347);		HX_STACK_VAR(tmp348,"tmp348");
					HX_STACK_LINE(2282)
					Float tmp349 = jny;		HX_STACK_VAR(tmp349,"tmp349");
					HX_STACK_LINE(2282)
					Float tmp350 = (tmp348 * tmp349);		HX_STACK_VAR(tmp350,"tmp350");
					HX_STACK_LINE(2282)
					xy = tmp350;
					HX_STACK_LINE(2283)
					bool tmp351 = (xy >= (int)0);		HX_STACK_VAR(tmp351,"tmp351");
					HX_STACK_LINE(2283)
					bool tmp352;		HX_STACK_VAR(tmp352,"tmp352");
					HX_STACK_LINE(2283)
					if ((tmp351)){
						HX_STACK_LINE(2283)
						Float tmp353 = this->Kb;		HX_STACK_VAR(tmp353,"tmp353");
						HX_STACK_LINE(2283)
						Float tmp354 = tmp353;		HX_STACK_VAR(tmp354,"tmp354");
						HX_STACK_LINE(2283)
						Float tmp355 = xy;		HX_STACK_VAR(tmp355,"tmp355");
						HX_STACK_LINE(2283)
						Float tmp356 = (tmp354 * tmp355);		HX_STACK_VAR(tmp356,"tmp356");
						HX_STACK_LINE(2283)
						Float tmp357 = tmp356;		HX_STACK_VAR(tmp357,"tmp357");
						HX_STACK_LINE(2283)
						Float tmp358 = jnx;		HX_STACK_VAR(tmp358,"tmp358");
						HX_STACK_LINE(2283)
						Float tmp359 = (tmp357 + tmp358);		HX_STACK_VAR(tmp359,"tmp359");
						HX_STACK_LINE(2283)
						Float tmp360 = tmp359;		HX_STACK_VAR(tmp360,"tmp360");
						HX_STACK_LINE(2283)
						tmp352 = (tmp360 >= (int)0);
					}
					else{
						HX_STACK_LINE(2283)
						tmp352 = false;
					}
					HX_STACK_LINE(2283)
					if ((tmp352)){
						HX_STACK_LINE(2284)
						Float tmp353 = ax;		HX_STACK_VAR(tmp353,"tmp353");
						HX_STACK_LINE(2284)
						Float tmp354 = -(tmp353);		HX_STACK_VAR(tmp354,"tmp354");
						HX_STACK_LINE(2284)
						jnx = tmp354;
						HX_STACK_LINE(2285)
						Float tmp355 = (xy - ay);		HX_STACK_VAR(tmp355,"tmp355");
						HX_STACK_LINE(2285)
						jny = tmp355;
						HX_STACK_LINE(2286)
						::zpp_nape::dynamics::ZPP_IContact tmp356 = this->c1;		HX_STACK_VAR(tmp356,"tmp356");
						HX_STACK_LINE(2286)
						tmp356->jnAcc = (int)0;
						HX_STACK_LINE(2287)
						::zpp_nape::dynamics::ZPP_IContact tmp357 = this->c2;		HX_STACK_VAR(tmp357,"tmp357");
						HX_STACK_LINE(2287)
						tmp357->jnAcc = xy;
					}
					else{
						HX_STACK_LINE(2289)
						bool tmp353 = (jnx >= (int)0);		HX_STACK_VAR(tmp353,"tmp353");
						HX_STACK_LINE(2289)
						bool tmp354;		HX_STACK_VAR(tmp354,"tmp354");
						HX_STACK_LINE(2289)
						if ((tmp353)){
							HX_STACK_LINE(2289)
							tmp354 = (jny >= (int)0);
						}
						else{
							HX_STACK_LINE(2289)
							tmp354 = false;
						}
						HX_STACK_LINE(2289)
						if ((tmp354)){
							HX_STACK_LINE(2290)
							Float tmp355 = ax;		HX_STACK_VAR(tmp355,"tmp355");
							HX_STACK_LINE(2290)
							Float tmp356 = -(tmp355);		HX_STACK_VAR(tmp356,"tmp356");
							HX_STACK_LINE(2290)
							jnx = tmp356;
							HX_STACK_LINE(2291)
							Float tmp357 = ay;		HX_STACK_VAR(tmp357,"tmp357");
							HX_STACK_LINE(2291)
							Float tmp358 = -(tmp357);		HX_STACK_VAR(tmp358,"tmp358");
							HX_STACK_LINE(2291)
							jny = tmp358;
							HX_STACK_LINE(2292)
							::zpp_nape::dynamics::ZPP_IContact tmp359 = this->c2;		HX_STACK_VAR(tmp359,"tmp359");
							HX_STACK_LINE(2292)
							Float tmp360 = tmp359->jnAcc = (int)0;		HX_STACK_VAR(tmp360,"tmp360");
							HX_STACK_LINE(2292)
							::zpp_nape::dynamics::ZPP_IContact tmp361 = this->c1;		HX_STACK_VAR(tmp361,"tmp361");
							HX_STACK_LINE(2292)
							tmp361->jnAcc = tmp360;
						}
						else{
							HX_STACK_LINE(2295)
							jnx = (int)0;
							HX_STACK_LINE(2296)
							jny = (int)0;
						}
					}
				}
			}
			HX_STACK_LINE(2300)
			Float tmp339 = (jnx + jny);		HX_STACK_VAR(tmp339,"tmp339");
			HX_STACK_LINE(2300)
			j = tmp339;
			HX_STACK_LINE(2301)
			Float tmp340 = this->nx;		HX_STACK_VAR(tmp340,"tmp340");
			HX_STACK_LINE(2301)
			Float tmp341 = j;		HX_STACK_VAR(tmp341,"tmp341");
			HX_STACK_LINE(2301)
			Float tmp342 = (tmp340 * tmp341);		HX_STACK_VAR(tmp342,"tmp342");
			HX_STACK_LINE(2301)
			jx = tmp342;
			HX_STACK_LINE(2302)
			Float tmp343 = this->ny;		HX_STACK_VAR(tmp343,"tmp343");
			HX_STACK_LINE(2302)
			Float tmp344 = j;		HX_STACK_VAR(tmp344,"tmp344");
			HX_STACK_LINE(2302)
			Float tmp345 = (tmp343 * tmp344);		HX_STACK_VAR(tmp345,"tmp345");
			HX_STACK_LINE(2302)
			jy = tmp345;
			HX_STACK_LINE(2303)
			Float tmp346 = jx;		HX_STACK_VAR(tmp346,"tmp346");
			HX_STACK_LINE(2303)
			::zpp_nape::phys::ZPP_Body tmp347 = this->b2;		HX_STACK_VAR(tmp347,"tmp347");
			HX_STACK_LINE(2303)
			Float tmp348 = tmp347->imass;		HX_STACK_VAR(tmp348,"tmp348");
			HX_STACK_LINE(2303)
			Float tmp349 = (tmp346 * tmp348);		HX_STACK_VAR(tmp349,"tmp349");
			HX_STACK_LINE(2303)
			::zpp_nape::phys::ZPP_Body tmp350 = this->b2;		HX_STACK_VAR(tmp350,"tmp350");
			HX_STACK_LINE(2303)
			hx::AddEq(tmp350->velx,tmp349);
			HX_STACK_LINE(2304)
			Float tmp351 = jy;		HX_STACK_VAR(tmp351,"tmp351");
			HX_STACK_LINE(2304)
			::zpp_nape::phys::ZPP_Body tmp352 = this->b2;		HX_STACK_VAR(tmp352,"tmp352");
			HX_STACK_LINE(2304)
			Float tmp353 = tmp352->imass;		HX_STACK_VAR(tmp353,"tmp353");
			HX_STACK_LINE(2304)
			Float tmp354 = (tmp351 * tmp353);		HX_STACK_VAR(tmp354,"tmp354");
			HX_STACK_LINE(2304)
			::zpp_nape::phys::ZPP_Body tmp355 = this->b2;		HX_STACK_VAR(tmp355,"tmp355");
			HX_STACK_LINE(2304)
			hx::AddEq(tmp355->vely,tmp354);
			HX_STACK_LINE(2305)
			Float tmp356 = jx;		HX_STACK_VAR(tmp356,"tmp356");
			HX_STACK_LINE(2305)
			::zpp_nape::phys::ZPP_Body tmp357 = this->b1;		HX_STACK_VAR(tmp357,"tmp357");
			HX_STACK_LINE(2305)
			Float tmp358 = tmp357->imass;		HX_STACK_VAR(tmp358,"tmp358");
			HX_STACK_LINE(2305)
			Float tmp359 = (tmp356 * tmp358);		HX_STACK_VAR(tmp359,"tmp359");
			HX_STACK_LINE(2305)
			::zpp_nape::phys::ZPP_Body tmp360 = this->b1;		HX_STACK_VAR(tmp360,"tmp360");
			HX_STACK_LINE(2305)
			hx::SubEq(tmp360->velx,tmp359);
			HX_STACK_LINE(2306)
			Float tmp361 = jy;		HX_STACK_VAR(tmp361,"tmp361");
			HX_STACK_LINE(2306)
			::zpp_nape::phys::ZPP_Body tmp362 = this->b1;		HX_STACK_VAR(tmp362,"tmp362");
			HX_STACK_LINE(2306)
			Float tmp363 = tmp362->imass;		HX_STACK_VAR(tmp363,"tmp363");
			HX_STACK_LINE(2306)
			Float tmp364 = (tmp361 * tmp363);		HX_STACK_VAR(tmp364,"tmp364");
			HX_STACK_LINE(2306)
			::zpp_nape::phys::ZPP_Body tmp365 = this->b1;		HX_STACK_VAR(tmp365,"tmp365");
			HX_STACK_LINE(2306)
			hx::SubEq(tmp365->vely,tmp364);
			HX_STACK_LINE(2307)
			Float tmp366 = this->rn1b;		HX_STACK_VAR(tmp366,"tmp366");
			HX_STACK_LINE(2307)
			Float tmp367 = jnx;		HX_STACK_VAR(tmp367,"tmp367");
			HX_STACK_LINE(2307)
			Float tmp368 = (tmp366 * tmp367);		HX_STACK_VAR(tmp368,"tmp368");
			HX_STACK_LINE(2307)
			Float tmp369 = this->rn2b;		HX_STACK_VAR(tmp369,"tmp369");
			HX_STACK_LINE(2307)
			Float tmp370 = jny;		HX_STACK_VAR(tmp370,"tmp370");
			HX_STACK_LINE(2307)
			Float tmp371 = (tmp369 * tmp370);		HX_STACK_VAR(tmp371,"tmp371");
			HX_STACK_LINE(2307)
			Float tmp372 = (tmp368 + tmp371);		HX_STACK_VAR(tmp372,"tmp372");
			HX_STACK_LINE(2307)
			::zpp_nape::phys::ZPP_Body tmp373 = this->b2;		HX_STACK_VAR(tmp373,"tmp373");
			HX_STACK_LINE(2307)
			Float tmp374 = tmp373->iinertia;		HX_STACK_VAR(tmp374,"tmp374");
			HX_STACK_LINE(2307)
			Float tmp375 = (tmp372 * tmp374);		HX_STACK_VAR(tmp375,"tmp375");
			HX_STACK_LINE(2307)
			::zpp_nape::phys::ZPP_Body tmp376 = this->b2;		HX_STACK_VAR(tmp376,"tmp376");
			HX_STACK_LINE(2307)
			hx::AddEq(tmp376->angvel,tmp375);
			HX_STACK_LINE(2308)
			Float tmp377 = this->rn1a;		HX_STACK_VAR(tmp377,"tmp377");
			HX_STACK_LINE(2308)
			Float tmp378 = jnx;		HX_STACK_VAR(tmp378,"tmp378");
			HX_STACK_LINE(2308)
			Float tmp379 = (tmp377 * tmp378);		HX_STACK_VAR(tmp379,"tmp379");
			HX_STACK_LINE(2308)
			Float tmp380 = this->rn2a;		HX_STACK_VAR(tmp380,"tmp380");
			HX_STACK_LINE(2308)
			Float tmp381 = jny;		HX_STACK_VAR(tmp381,"tmp381");
			HX_STACK_LINE(2308)
			Float tmp382 = (tmp380 * tmp381);		HX_STACK_VAR(tmp382,"tmp382");
			HX_STACK_LINE(2308)
			Float tmp383 = (tmp379 + tmp382);		HX_STACK_VAR(tmp383,"tmp383");
			HX_STACK_LINE(2308)
			::zpp_nape::phys::ZPP_Body tmp384 = this->b1;		HX_STACK_VAR(tmp384,"tmp384");
			HX_STACK_LINE(2308)
			Float tmp385 = tmp384->iinertia;		HX_STACK_VAR(tmp385,"tmp385");
			HX_STACK_LINE(2308)
			Float tmp386 = (tmp383 * tmp385);		HX_STACK_VAR(tmp386,"tmp386");
			HX_STACK_LINE(2308)
			::zpp_nape::phys::ZPP_Body tmp387 = this->b1;		HX_STACK_VAR(tmp387,"tmp387");
			HX_STACK_LINE(2308)
			hx::SubEq(tmp387->angvel,tmp386);
		}
		else{
			HX_STACK_LINE(2311)
			Float tmp102 = this->radius;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(2311)
			bool tmp103 = (tmp102 != ((Float)0.0));		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(2311)
			if ((tmp103)){
				HX_STACK_LINE(2312)
				::zpp_nape::phys::ZPP_Body tmp104 = this->b2;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(2312)
				Float tmp105 = tmp104->angvel;		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(2312)
				::zpp_nape::phys::ZPP_Body tmp106 = this->b1;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(2312)
				Float tmp107 = tmp106->angvel;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(2312)
				Float tmp108 = (tmp105 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(2312)
				Float dw = tmp108;		HX_STACK_VAR(dw,"dw");
				HX_STACK_LINE(2313)
				Float tmp109 = dw;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(2313)
				Float tmp110 = this->rMass;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(2313)
				Float tmp111 = (tmp109 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(2313)
				j = tmp111;
				HX_STACK_LINE(2314)
				Float tmp112 = this->rfric;		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(2314)
				::zpp_nape::dynamics::ZPP_IContact tmp113 = this->c1;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(2314)
				Float tmp114 = tmp113->jnAcc;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(2314)
				Float tmp115 = (tmp112 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(2314)
				jMax = tmp115;
				HX_STACK_LINE(2315)
				Float tmp116 = this->jrAcc;		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(2315)
				jOld = tmp116;
				HX_STACK_LINE(2316)
				hx::SubEq(this->jrAcc,j);
				HX_STACK_LINE(2317)
				Float tmp117 = this->jrAcc;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(2317)
				Float tmp118 = jMax;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(2317)
				bool tmp119 = (tmp117 > tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(2317)
				if ((tmp119)){
					HX_STACK_LINE(2317)
					this->jrAcc = jMax;
				}
				else{
					HX_STACK_LINE(2317)
					Float tmp120 = this->jrAcc;		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(2317)
					Float tmp121 = jMax;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(2317)
					Float tmp122 = -(tmp121);		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(2317)
					bool tmp123 = (tmp120 < tmp122);		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(2317)
					if ((tmp123)){
						HX_STACK_LINE(2317)
						Float tmp124 = jMax;		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(2317)
						Float tmp125 = -(tmp124);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(2317)
						this->jrAcc = tmp125;
					}
				}
				HX_STACK_LINE(2318)
				Float tmp120 = this->jrAcc;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(2318)
				Float tmp121 = jOld;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(2318)
				Float tmp122 = (tmp120 - tmp121);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(2318)
				j = tmp122;
				HX_STACK_LINE(2319)
				Float tmp123 = j;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(2319)
				::zpp_nape::phys::ZPP_Body tmp124 = this->b2;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(2319)
				Float tmp125 = tmp124->iinertia;		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(2319)
				Float tmp126 = (tmp123 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(2319)
				::zpp_nape::phys::ZPP_Body tmp127 = this->b2;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(2319)
				hx::AddEq(tmp127->angvel,tmp126);
				HX_STACK_LINE(2320)
				Float tmp128 = j;		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(2320)
				::zpp_nape::phys::ZPP_Body tmp129 = this->b1;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(2320)
				Float tmp130 = tmp129->iinertia;		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(2320)
				Float tmp131 = (tmp128 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(2320)
				::zpp_nape::phys::ZPP_Body tmp132 = this->b1;		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(2320)
				hx::SubEq(tmp132->angvel,tmp131);
			}
			HX_STACK_LINE(2322)
			Float tmp104 = this->k1x;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(2322)
			::zpp_nape::phys::ZPP_Body tmp105 = this->b2;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(2322)
			Float tmp106 = tmp105->velx;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(2322)
			Float tmp107 = (tmp104 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(2322)
			::zpp_nape::dynamics::ZPP_IContact tmp108 = this->c1;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(2322)
			Float tmp109 = tmp108->r2y;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(2322)
			::zpp_nape::phys::ZPP_Body tmp110 = this->b2;		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(2322)
			Float tmp111 = tmp110->angvel;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(2322)
			Float tmp112 = (tmp109 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(2322)
			Float tmp113 = (tmp107 - tmp112);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(2322)
			::zpp_nape::phys::ZPP_Body tmp114 = this->b1;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(2322)
			Float tmp115 = tmp114->velx;		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(2322)
			::zpp_nape::dynamics::ZPP_IContact tmp116 = this->c1;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(2322)
			Float tmp117 = tmp116->r1y;		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(2322)
			::zpp_nape::phys::ZPP_Body tmp118 = this->b1;		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(2322)
			Float tmp119 = tmp118->angvel;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(2322)
			Float tmp120 = (tmp117 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(2322)
			Float tmp121 = (tmp115 - tmp120);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(2322)
			Float tmp122 = (tmp113 - tmp121);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(2322)
			v1x = tmp122;
			HX_STACK_LINE(2323)
			Float tmp123 = this->k1y;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(2323)
			::zpp_nape::phys::ZPP_Body tmp124 = this->b2;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(2323)
			Float tmp125 = tmp124->vely;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(2323)
			Float tmp126 = (tmp123 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(2323)
			::zpp_nape::dynamics::ZPP_IContact tmp127 = this->c1;		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(2323)
			Float tmp128 = tmp127->r2x;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(2323)
			::zpp_nape::phys::ZPP_Body tmp129 = this->b2;		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(2323)
			Float tmp130 = tmp129->angvel;		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(2323)
			Float tmp131 = (tmp128 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(2323)
			Float tmp132 = (tmp126 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(2323)
			::zpp_nape::phys::ZPP_Body tmp133 = this->b1;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(2323)
			Float tmp134 = tmp133->vely;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(2323)
			::zpp_nape::dynamics::ZPP_IContact tmp135 = this->c1;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(2323)
			Float tmp136 = tmp135->r1x;		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(2323)
			::zpp_nape::phys::ZPP_Body tmp137 = this->b1;		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(2323)
			Float tmp138 = tmp137->angvel;		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(2323)
			Float tmp139 = (tmp136 * tmp138);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(2323)
			Float tmp140 = (tmp134 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(2323)
			Float tmp141 = (tmp132 - tmp140);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(2323)
			v1y = tmp141;
			HX_STACK_LINE(2324)
			::zpp_nape::dynamics::ZPP_IContact tmp142 = this->c1;		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(2324)
			Float tmp143 = tmp142->bounce;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(2324)
			Float tmp144 = this->nx;		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(2324)
			Float tmp145 = v1x;		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(2324)
			Float tmp146 = (tmp144 * tmp145);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(2324)
			Float tmp147 = this->ny;		HX_STACK_VAR(tmp147,"tmp147");
			HX_STACK_LINE(2324)
			Float tmp148 = v1y;		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(2324)
			Float tmp149 = (tmp147 * tmp148);		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(2324)
			Float tmp150 = (tmp146 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(2324)
			Float tmp151 = (tmp143 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
			HX_STACK_LINE(2324)
			Float tmp152 = this->surfacey;		HX_STACK_VAR(tmp152,"tmp152");
			HX_STACK_LINE(2324)
			Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
			HX_STACK_LINE(2324)
			::zpp_nape::dynamics::ZPP_IContact tmp154 = this->c1;		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(2324)
			Float tmp155 = tmp154->nMass;		HX_STACK_VAR(tmp155,"tmp155");
			HX_STACK_LINE(2324)
			Float tmp156 = (tmp153 * tmp155);		HX_STACK_VAR(tmp156,"tmp156");
			HX_STACK_LINE(2324)
			j = tmp156;
			HX_STACK_LINE(2325)
			::zpp_nape::dynamics::ZPP_IContact tmp157 = this->c1;		HX_STACK_VAR(tmp157,"tmp157");
			HX_STACK_LINE(2325)
			jOld = tmp157->jnAcc;
			HX_STACK_LINE(2326)
			Float tmp158 = (jOld - j);		HX_STACK_VAR(tmp158,"tmp158");
			HX_STACK_LINE(2326)
			cjAcc = tmp158;
			HX_STACK_LINE(2327)
			bool tmp159 = (cjAcc < ((Float)0.0));		HX_STACK_VAR(tmp159,"tmp159");
			HX_STACK_LINE(2327)
			if ((tmp159)){
				HX_STACK_LINE(2327)
				cjAcc = ((Float)0.0);
			}
			HX_STACK_LINE(2328)
			Float tmp160 = (cjAcc - jOld);		HX_STACK_VAR(tmp160,"tmp160");
			HX_STACK_LINE(2328)
			j = tmp160;
			HX_STACK_LINE(2329)
			::zpp_nape::dynamics::ZPP_IContact tmp161 = this->c1;		HX_STACK_VAR(tmp161,"tmp161");
			HX_STACK_LINE(2329)
			tmp161->jnAcc = cjAcc;
			HX_STACK_LINE(2330)
			Float tmp162 = this->nx;		HX_STACK_VAR(tmp162,"tmp162");
			HX_STACK_LINE(2330)
			Float tmp163 = j;		HX_STACK_VAR(tmp163,"tmp163");
			HX_STACK_LINE(2330)
			Float tmp164 = (tmp162 * tmp163);		HX_STACK_VAR(tmp164,"tmp164");
			HX_STACK_LINE(2330)
			jx = tmp164;
			HX_STACK_LINE(2331)
			Float tmp165 = this->ny;		HX_STACK_VAR(tmp165,"tmp165");
			HX_STACK_LINE(2331)
			Float tmp166 = j;		HX_STACK_VAR(tmp166,"tmp166");
			HX_STACK_LINE(2331)
			Float tmp167 = (tmp165 * tmp166);		HX_STACK_VAR(tmp167,"tmp167");
			HX_STACK_LINE(2331)
			jy = tmp167;
			HX_STACK_LINE(2332)
			Float tmp168 = jx;		HX_STACK_VAR(tmp168,"tmp168");
			HX_STACK_LINE(2332)
			::zpp_nape::phys::ZPP_Body tmp169 = this->b2;		HX_STACK_VAR(tmp169,"tmp169");
			HX_STACK_LINE(2332)
			Float tmp170 = tmp169->imass;		HX_STACK_VAR(tmp170,"tmp170");
			HX_STACK_LINE(2332)
			Float tmp171 = (tmp168 * tmp170);		HX_STACK_VAR(tmp171,"tmp171");
			HX_STACK_LINE(2332)
			::zpp_nape::phys::ZPP_Body tmp172 = this->b2;		HX_STACK_VAR(tmp172,"tmp172");
			HX_STACK_LINE(2332)
			hx::AddEq(tmp172->velx,tmp171);
			HX_STACK_LINE(2333)
			Float tmp173 = jy;		HX_STACK_VAR(tmp173,"tmp173");
			HX_STACK_LINE(2333)
			::zpp_nape::phys::ZPP_Body tmp174 = this->b2;		HX_STACK_VAR(tmp174,"tmp174");
			HX_STACK_LINE(2333)
			Float tmp175 = tmp174->imass;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(2333)
			Float tmp176 = (tmp173 * tmp175);		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(2333)
			::zpp_nape::phys::ZPP_Body tmp177 = this->b2;		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(2333)
			hx::AddEq(tmp177->vely,tmp176);
			HX_STACK_LINE(2334)
			Float tmp178 = jx;		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(2334)
			::zpp_nape::phys::ZPP_Body tmp179 = this->b1;		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(2334)
			Float tmp180 = tmp179->imass;		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(2334)
			Float tmp181 = (tmp178 * tmp180);		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(2334)
			::zpp_nape::phys::ZPP_Body tmp182 = this->b1;		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(2334)
			hx::SubEq(tmp182->velx,tmp181);
			HX_STACK_LINE(2335)
			Float tmp183 = jy;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(2335)
			::zpp_nape::phys::ZPP_Body tmp184 = this->b1;		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(2335)
			Float tmp185 = tmp184->imass;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(2335)
			Float tmp186 = (tmp183 * tmp185);		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(2335)
			::zpp_nape::phys::ZPP_Body tmp187 = this->b1;		HX_STACK_VAR(tmp187,"tmp187");
			HX_STACK_LINE(2335)
			hx::SubEq(tmp187->vely,tmp186);
			HX_STACK_LINE(2336)
			Float tmp188 = this->rn1b;		HX_STACK_VAR(tmp188,"tmp188");
			HX_STACK_LINE(2336)
			Float tmp189 = j;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(2336)
			Float tmp190 = (tmp188 * tmp189);		HX_STACK_VAR(tmp190,"tmp190");
			HX_STACK_LINE(2336)
			::zpp_nape::phys::ZPP_Body tmp191 = this->b2;		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(2336)
			Float tmp192 = tmp191->iinertia;		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(2336)
			Float tmp193 = (tmp190 * tmp192);		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(2336)
			::zpp_nape::phys::ZPP_Body tmp194 = this->b2;		HX_STACK_VAR(tmp194,"tmp194");
			HX_STACK_LINE(2336)
			hx::AddEq(tmp194->angvel,tmp193);
			HX_STACK_LINE(2337)
			Float tmp195 = this->rn1a;		HX_STACK_VAR(tmp195,"tmp195");
			HX_STACK_LINE(2337)
			Float tmp196 = j;		HX_STACK_VAR(tmp196,"tmp196");
			HX_STACK_LINE(2337)
			Float tmp197 = (tmp195 * tmp196);		HX_STACK_VAR(tmp197,"tmp197");
			HX_STACK_LINE(2337)
			::zpp_nape::phys::ZPP_Body tmp198 = this->b1;		HX_STACK_VAR(tmp198,"tmp198");
			HX_STACK_LINE(2337)
			Float tmp199 = tmp198->iinertia;		HX_STACK_VAR(tmp199,"tmp199");
			HX_STACK_LINE(2337)
			Float tmp200 = (tmp197 * tmp199);		HX_STACK_VAR(tmp200,"tmp200");
			HX_STACK_LINE(2337)
			::zpp_nape::phys::ZPP_Body tmp201 = this->b1;		HX_STACK_VAR(tmp201,"tmp201");
			HX_STACK_LINE(2337)
			hx::SubEq(tmp201->angvel,tmp200);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,applyImpulseVel,(void))

Void ZPP_ColArbiter_obj::applyImpulsePos( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_ColArbiter","applyImpulsePos",0x4e1ebfe6,"zpp_nape.dynamics.ZPP_ColArbiter.applyImpulsePos","zpp_nape/dynamics/Arbiter.hx",2342,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2343)
		int tmp = this->ptype;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2343)
		bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2343)
		if ((tmp1)){
			HX_STACK_LINE(2344)
			::zpp_nape::dynamics::ZPP_IContact tmp2 = this->c1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2344)
			::zpp_nape::dynamics::ZPP_IContact c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(2345)
			Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(2346)
			Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(2347)
			Float r2x = ((Float)0.0);		HX_STACK_VAR(r2x,"r2x");
			HX_STACK_LINE(2348)
			Float r2y = ((Float)0.0);		HX_STACK_VAR(r2y,"r2y");
			HX_STACK_LINE(2349)
			{
				HX_STACK_LINE(2350)
				::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2350)
				Float tmp4 = tmp3->axisy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2350)
				Float tmp5 = c->lr2x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2350)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2350)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2350)
				Float tmp8 = tmp7->axisx;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2350)
				Float tmp9 = c->lr2y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2350)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2350)
				Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2350)
				r2x = tmp11;
				HX_STACK_LINE(2351)
				Float tmp12 = c->lr2x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2351)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2351)
				Float tmp14 = tmp13->axisx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2351)
				Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2351)
				Float tmp16 = c->lr2y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2351)
				::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2351)
				Float tmp18 = tmp17->axisy;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2351)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2351)
				Float tmp20 = (tmp15 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2351)
				r2y = tmp20;
			}
			HX_STACK_LINE(2353)
			{
				HX_STACK_LINE(2354)
				Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2363)
				::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2363)
				Float tmp4 = tmp3->posx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2363)
				Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2363)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2363)
				hx::AddEq(r2x,tmp6);
				HX_STACK_LINE(2364)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2364)
				Float tmp8 = tmp7->posy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2364)
				Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2364)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2364)
				hx::AddEq(r2y,tmp10);
			}
			HX_STACK_LINE(2366)
			Float r1x = ((Float)0.0);		HX_STACK_VAR(r1x,"r1x");
			HX_STACK_LINE(2367)
			Float r1y = ((Float)0.0);		HX_STACK_VAR(r1y,"r1y");
			HX_STACK_LINE(2368)
			{
				HX_STACK_LINE(2369)
				::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2369)
				Float tmp4 = tmp3->axisy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2369)
				Float tmp5 = c->lr1x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2369)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2369)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2369)
				Float tmp8 = tmp7->axisx;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2369)
				Float tmp9 = c->lr1y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2369)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2369)
				Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2369)
				r1x = tmp11;
				HX_STACK_LINE(2370)
				Float tmp12 = c->lr1x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2370)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2370)
				Float tmp14 = tmp13->axisx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2370)
				Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2370)
				Float tmp16 = c->lr1y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2370)
				::zpp_nape::phys::ZPP_Body tmp17 = this->b1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2370)
				Float tmp18 = tmp17->axisy;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2370)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2370)
				Float tmp20 = (tmp15 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2370)
				r1y = tmp20;
			}
			HX_STACK_LINE(2372)
			{
				HX_STACK_LINE(2373)
				Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2382)
				::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2382)
				Float tmp4 = tmp3->posx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2382)
				Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2382)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2382)
				hx::AddEq(r1x,tmp6);
				HX_STACK_LINE(2383)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2383)
				Float tmp8 = tmp7->posy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2383)
				Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2383)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2383)
				hx::AddEq(r1y,tmp10);
			}
			HX_STACK_LINE(2385)
			Float dx1 = ((Float)0.0);		HX_STACK_VAR(dx1,"dx1");
			HX_STACK_LINE(2386)
			Float dy1 = ((Float)0.0);		HX_STACK_VAR(dy1,"dy1");
			HX_STACK_LINE(2387)
			{
				HX_STACK_LINE(2388)
				Float tmp3 = (r2x - r1x);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2388)
				dx1 = tmp3;
				HX_STACK_LINE(2389)
				Float tmp4 = (r2y - r1y);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2389)
				dy1 = tmp4;
			}
			HX_STACK_LINE(2391)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2391)
			{
				HX_STACK_LINE(2391)
				Float tmp4 = (dx1 * dx1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2391)
				Float tmp5 = (dy1 * dy1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2391)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2391)
				tmp3 = ::Math_obj::sqrt(tmp6);
			}
			HX_STACK_LINE(2391)
			Float dl = tmp3;		HX_STACK_VAR(dl,"dl");
			HX_STACK_LINE(2392)
			Float tmp4 = this->radius;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2392)
			Float tmp5 = ::nape::Config_obj::collisionSlop;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2392)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2392)
			Float r = tmp6;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2393)
			Float tmp7 = (dl - r);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2393)
			Float err = tmp7;		HX_STACK_VAR(err,"err");
			HX_STACK_LINE(2394)
			Float tmp8 = dx1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2394)
			Float tmp9 = this->nx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2394)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2394)
			Float tmp11 = dy1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2394)
			Float tmp12 = this->ny;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2394)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2394)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2394)
			bool tmp15 = (tmp14 < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2394)
			if ((tmp15)){
				HX_STACK_LINE(2395)
				{
					HX_STACK_LINE(2396)
					Float tmp16 = dx1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2396)
					Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2396)
					dx1 = tmp17;
					HX_STACK_LINE(2397)
					Float tmp18 = dy1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2397)
					Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2397)
					dy1 = tmp19;
				}
				HX_STACK_LINE(2399)
				Float tmp16 = this->radius;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2399)
				hx::SubEq(err,tmp16);
			}
			HX_STACK_LINE(2401)
			bool tmp16 = (err < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2401)
			if ((tmp16)){
				HX_STACK_LINE(2402)
				Float tmp17 = dl;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2402)
				Float tmp18 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2402)
				bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2402)
				if ((tmp19)){
					HX_STACK_LINE(2403)
					::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2403)
					Float tmp21 = tmp20->smass;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2403)
					bool tmp22 = (tmp21 != ((Float)0.0));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2403)
					if ((tmp22)){
						HX_STACK_LINE(2403)
						Float tmp23 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2403)
						Float tmp24 = (tmp23 * (int)10);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2403)
						::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2403)
						hx::AddEq(tmp25->posx,tmp24);
					}
					else{
						HX_STACK_LINE(2404)
						Float tmp23 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2404)
						Float tmp24 = (tmp23 * (int)10);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2404)
						::zpp_nape::phys::ZPP_Body tmp25 = this->b2;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2404)
						hx::AddEq(tmp25->posx,tmp24);
					}
				}
				else{
					HX_STACK_LINE(2407)
					{
						HX_STACK_LINE(2408)
						Float tmp20 = (Float(((Float)1.0)) / Float(dl));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2408)
						Float t = tmp20;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2417)
						hx::MultEq(dx1,t);
						HX_STACK_LINE(2418)
						hx::MultEq(dy1,t);
					}
					HX_STACK_LINE(2420)
					Float tmp20 = (r1x + r2x);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2420)
					Float tmp21 = (((Float)0.5) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2420)
					Float px = tmp21;		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(2421)
					Float tmp22 = (r1y + r2y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2421)
					Float tmp23 = (((Float)0.5) * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2421)
					Float py = tmp23;		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(2438)
					Float tmp24 = (dl - r);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2438)
					Float pen = tmp24;		HX_STACK_VAR(pen,"pen");
					HX_STACK_LINE(2439)
					{
						HX_STACK_LINE(2440)
						Float tmp25 = px;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2440)
						::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2440)
						Float tmp27 = tmp26->posx;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2440)
						Float tmp28 = (tmp25 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2440)
						r1x = tmp28;
						HX_STACK_LINE(2441)
						Float tmp29 = py;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2441)
						::zpp_nape::phys::ZPP_Body tmp30 = this->b1;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(2441)
						Float tmp31 = tmp30->posy;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2441)
						Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2441)
						r1y = tmp32;
					}
					HX_STACK_LINE(2443)
					{
						HX_STACK_LINE(2444)
						Float tmp25 = px;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2444)
						::zpp_nape::phys::ZPP_Body tmp26 = this->b2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2444)
						Float tmp27 = tmp26->posx;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2444)
						Float tmp28 = (tmp25 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2444)
						r2x = tmp28;
						HX_STACK_LINE(2445)
						Float tmp29 = py;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2445)
						::zpp_nape::phys::ZPP_Body tmp30 = this->b2;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(2445)
						Float tmp31 = tmp30->posy;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2445)
						Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2445)
						r2y = tmp32;
					}
					HX_STACK_LINE(2447)
					Float tmp25 = (dy1 * r1x);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2447)
					Float tmp26 = (dx1 * r1y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2447)
					Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2447)
					Float rn1 = tmp27;		HX_STACK_VAR(rn1,"rn1");
					HX_STACK_LINE(2448)
					Float tmp28 = (dy1 * r2x);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2448)
					Float tmp29 = (dx1 * r2y);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2448)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2448)
					Float rn2 = tmp30;		HX_STACK_VAR(rn2,"rn2");
					HX_STACK_LINE(2449)
					::zpp_nape::phys::ZPP_Body tmp31 = this->b2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2449)
					Float tmp32 = tmp31->smass;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2449)
					Float tmp33 = (rn2 * rn2);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2449)
					::zpp_nape::phys::ZPP_Body tmp34 = this->b2;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2449)
					Float tmp35 = tmp34->sinertia;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2449)
					Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2449)
					Float tmp37 = (tmp32 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2449)
					::zpp_nape::phys::ZPP_Body tmp38 = this->b1;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2449)
					Float tmp39 = tmp38->smass;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2449)
					Float tmp40 = (tmp37 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(2449)
					Float tmp41 = (rn1 * rn1);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(2449)
					::zpp_nape::phys::ZPP_Body tmp42 = this->b1;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(2449)
					Float tmp43 = tmp42->sinertia;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(2449)
					Float tmp44 = (tmp41 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(2449)
					Float tmp45 = (tmp40 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(2449)
					Float K = tmp45;		HX_STACK_VAR(K,"K");
					HX_STACK_LINE(2450)
					bool tmp46 = (K != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(2450)
					if ((tmp46)){
						HX_STACK_LINE(2451)
						Float tmp47 = this->biasCoef;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(2451)
						Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(2451)
						Float tmp49 = pen;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(2451)
						Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(2451)
						Float tmp51 = K;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(2451)
						Float tmp52 = (Float(tmp50) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(2451)
						Float jn = tmp52;		HX_STACK_VAR(jn,"jn");
						HX_STACK_LINE(2452)
						Float Jx = ((Float)0.0);		HX_STACK_VAR(Jx,"Jx");
						HX_STACK_LINE(2453)
						Float Jy = ((Float)0.0);		HX_STACK_VAR(Jy,"Jy");
						HX_STACK_LINE(2454)
						{
							HX_STACK_LINE(2455)
							Float t = jn;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2464)
							Float tmp53 = (dx1 * t);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(2464)
							Jx = tmp53;
							HX_STACK_LINE(2465)
							Float tmp54 = (dy1 * t);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(2465)
							Jy = tmp54;
						}
						HX_STACK_LINE(2467)
						{
							HX_STACK_LINE(2468)
							::zpp_nape::phys::ZPP_Body tmp53 = this->b1;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(2468)
							Float t = tmp53->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2477)
							Float tmp54 = (Jx * t);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(2477)
							::zpp_nape::phys::ZPP_Body tmp55 = this->b1;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(2477)
							hx::SubEq(tmp55->posx,tmp54);
							HX_STACK_LINE(2478)
							Float tmp56 = (Jy * t);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(2478)
							::zpp_nape::phys::ZPP_Body tmp57 = this->b1;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(2478)
							hx::SubEq(tmp57->posy,tmp56);
						}
						HX_STACK_LINE(2480)
						{
							HX_STACK_LINE(2480)
							::zpp_nape::phys::ZPP_Body tmp53 = this->b1;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(2480)
							::zpp_nape::phys::ZPP_Body _this = tmp53;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2480)
							Float tmp54 = rn1;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(2480)
							Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(2480)
							::zpp_nape::phys::ZPP_Body tmp56 = this->b1;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(2480)
							Float tmp57 = tmp56->iinertia;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(2480)
							Float tmp58 = (tmp55 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(2480)
							Float tmp59 = jn;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(2480)
							Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(2480)
							Float dr = tmp60;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2480)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2480)
							Float tmp61 = (dr * dr);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(2480)
							bool tmp62 = (tmp61 > ((Float)0.0001));		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(2480)
							if ((tmp62)){
								HX_STACK_LINE(2480)
								Float tmp63 = _this->rot;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(2480)
								Float tmp64 = ::Math_obj::sin(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(2480)
								_this->axisx = tmp64;
								HX_STACK_LINE(2480)
								Float tmp65 = _this->rot;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(2480)
								Float tmp66 = ::Math_obj::cos(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(2480)
								_this->axisy = tmp66;
								HX_STACK_LINE(2480)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2480)
								Float tmp63 = (dr * dr);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(2480)
								Float d2 = tmp63;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2480)
								Float tmp64 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(2480)
								Float tmp65 = ((int)1 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(2480)
								Float p = tmp65;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2480)
								Float tmp66 = (d2 * d2);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(2480)
								Float tmp67 = (Float(tmp66) / Float((int)8));		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(2480)
								Float tmp68 = ((int)1 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(2480)
								Float m = tmp68;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2480)
								Float tmp69 = (p * _this->axisx);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(2480)
								Float tmp70 = (dr * _this->axisy);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(2480)
								Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(2480)
								Float tmp72 = m;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(2480)
								Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(2480)
								Float nx = tmp73;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2480)
								Float tmp74 = (p * _this->axisy);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(2480)
								Float tmp75 = (dr * _this->axisx);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(2480)
								Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(2480)
								Float tmp77 = m;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(2480)
								Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(2480)
								_this->axisy = tmp78;
								HX_STACK_LINE(2480)
								_this->axisx = nx;
							}
						}
						HX_STACK_LINE(2481)
						{
							HX_STACK_LINE(2482)
							::zpp_nape::phys::ZPP_Body tmp53 = this->b2;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(2482)
							Float t = tmp53->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2491)
							Float tmp54 = (Jx * t);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(2491)
							::zpp_nape::phys::ZPP_Body tmp55 = this->b2;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(2491)
							hx::AddEq(tmp55->posx,tmp54);
							HX_STACK_LINE(2492)
							Float tmp56 = (Jy * t);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(2492)
							::zpp_nape::phys::ZPP_Body tmp57 = this->b2;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(2492)
							hx::AddEq(tmp57->posy,tmp56);
						}
						HX_STACK_LINE(2494)
						{
							HX_STACK_LINE(2494)
							::zpp_nape::phys::ZPP_Body tmp53 = this->b2;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(2494)
							::zpp_nape::phys::ZPP_Body _this = tmp53;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2494)
							Float tmp54 = rn2;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(2494)
							::zpp_nape::phys::ZPP_Body tmp55 = this->b2;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(2494)
							Float tmp56 = tmp55->iinertia;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(2494)
							Float tmp57 = (tmp54 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(2494)
							Float tmp58 = jn;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(2494)
							Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(2494)
							Float dr = tmp59;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2494)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2494)
							Float tmp60 = (dr * dr);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(2494)
							bool tmp61 = (tmp60 > ((Float)0.0001));		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(2494)
							if ((tmp61)){
								HX_STACK_LINE(2494)
								Float tmp62 = _this->rot;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(2494)
								Float tmp63 = ::Math_obj::sin(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(2494)
								_this->axisx = tmp63;
								HX_STACK_LINE(2494)
								Float tmp64 = _this->rot;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(2494)
								Float tmp65 = ::Math_obj::cos(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(2494)
								_this->axisy = tmp65;
								HX_STACK_LINE(2494)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2494)
								Float tmp62 = (dr * dr);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(2494)
								Float d2 = tmp62;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2494)
								Float tmp63 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(2494)
								Float tmp64 = ((int)1 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(2494)
								Float p = tmp64;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2494)
								Float tmp65 = (d2 * d2);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(2494)
								Float tmp66 = (Float(tmp65) / Float((int)8));		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(2494)
								Float tmp67 = ((int)1 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(2494)
								Float m = tmp67;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2494)
								Float tmp68 = (p * _this->axisx);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(2494)
								Float tmp69 = (dr * _this->axisy);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(2494)
								Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(2494)
								Float tmp71 = m;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(2494)
								Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(2494)
								Float nx = tmp72;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2494)
								Float tmp73 = (p * _this->axisy);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(2494)
								Float tmp74 = (dr * _this->axisx);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(2494)
								Float tmp75 = (tmp73 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(2494)
								Float tmp76 = m;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(2494)
								Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(2494)
								_this->axisy = tmp77;
								HX_STACK_LINE(2494)
								_this->axisx = nx;
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2500)
			Float gnormx = ((Float)0.0);		HX_STACK_VAR(gnormx,"gnormx");
			HX_STACK_LINE(2501)
			Float gnormy = ((Float)0.0);		HX_STACK_VAR(gnormy,"gnormy");
			HX_STACK_LINE(2502)
			Float gproj;		HX_STACK_VAR(gproj,"gproj");
			HX_STACK_LINE(2503)
			Float clip1x = ((Float)0.0);		HX_STACK_VAR(clip1x,"clip1x");
			HX_STACK_LINE(2504)
			Float clip1y = ((Float)0.0);		HX_STACK_VAR(clip1y,"clip1y");
			HX_STACK_LINE(2505)
			Float clip2x = (int)0;		HX_STACK_VAR(clip2x,"clip2x");
			HX_STACK_LINE(2506)
			Float clip2y = (int)0;		HX_STACK_VAR(clip2y,"clip2y");
			HX_STACK_LINE(2523)
			int tmp2 = this->ptype;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2523)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2523)
			if ((tmp3)){
				HX_STACK_LINE(2524)
				{
					HX_STACK_LINE(2525)
					::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2525)
					Float tmp5 = tmp4->axisy;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2525)
					Float tmp6 = this->lnormx;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2525)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2525)
					::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2525)
					Float tmp9 = tmp8->axisx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2525)
					Float tmp10 = this->lnormy;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2525)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2525)
					Float tmp12 = (tmp7 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2525)
					gnormx = tmp12;
					HX_STACK_LINE(2526)
					Float tmp13 = this->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2526)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2526)
					Float tmp15 = tmp14->axisx;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2526)
					Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2526)
					Float tmp17 = this->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2526)
					::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2526)
					Float tmp19 = tmp18->axisy;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2526)
					Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2526)
					Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2526)
					gnormy = tmp21;
				}
				HX_STACK_LINE(2528)
				Float tmp4 = this->lproj;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2528)
				Float tmp5 = gnormx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2528)
				::zpp_nape::phys::ZPP_Body tmp6 = this->b1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2528)
				Float tmp7 = tmp6->posx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2528)
				Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2528)
				Float tmp9 = gnormy;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2528)
				::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2528)
				Float tmp11 = tmp10->posy;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2528)
				Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2528)
				Float tmp13 = (tmp8 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2528)
				Float tmp14 = (tmp4 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2528)
				gproj = tmp14;
				HX_STACK_LINE(2529)
				{
					HX_STACK_LINE(2530)
					::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2530)
					Float tmp16 = tmp15->axisy;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2530)
					::zpp_nape::dynamics::ZPP_IContact tmp17 = this->c1;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2530)
					Float tmp18 = tmp17->lr1x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2530)
					Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2530)
					::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2530)
					Float tmp21 = tmp20->axisx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2530)
					::zpp_nape::dynamics::ZPP_IContact tmp22 = this->c1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2530)
					Float tmp23 = tmp22->lr1y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2530)
					Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2530)
					Float tmp25 = (tmp19 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2530)
					clip1x = tmp25;
					HX_STACK_LINE(2531)
					::zpp_nape::dynamics::ZPP_IContact tmp26 = this->c1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2531)
					Float tmp27 = tmp26->lr1x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2531)
					::zpp_nape::phys::ZPP_Body tmp28 = this->b2;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2531)
					Float tmp29 = tmp28->axisx;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2531)
					Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2531)
					::zpp_nape::dynamics::ZPP_IContact tmp31 = this->c1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2531)
					Float tmp32 = tmp31->lr1y;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2531)
					::zpp_nape::phys::ZPP_Body tmp33 = this->b2;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2531)
					Float tmp34 = tmp33->axisy;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2531)
					Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2531)
					Float tmp36 = (tmp30 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2531)
					clip1y = tmp36;
				}
				HX_STACK_LINE(2533)
				{
					HX_STACK_LINE(2534)
					Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2543)
					::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2543)
					Float tmp16 = tmp15->posx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2543)
					Float tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2543)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2543)
					hx::AddEq(clip1x,tmp18);
					HX_STACK_LINE(2544)
					::zpp_nape::phys::ZPP_Body tmp19 = this->b2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2544)
					Float tmp20 = tmp19->posy;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2544)
					Float tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2544)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2544)
					hx::AddEq(clip1y,tmp22);
				}
				HX_STACK_LINE(2546)
				bool tmp15 = this->hpc2;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2546)
				if ((tmp15)){
					HX_STACK_LINE(2547)
					{
						HX_STACK_LINE(2548)
						::zpp_nape::phys::ZPP_Body tmp16 = this->b2;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2548)
						Float tmp17 = tmp16->axisy;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2548)
						::zpp_nape::dynamics::ZPP_IContact tmp18 = this->c2;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2548)
						Float tmp19 = tmp18->lr1x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2548)
						Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2548)
						::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2548)
						Float tmp22 = tmp21->axisx;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2548)
						::zpp_nape::dynamics::ZPP_IContact tmp23 = this->c2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2548)
						Float tmp24 = tmp23->lr1y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2548)
						Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2548)
						Float tmp26 = (tmp20 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2548)
						clip2x = tmp26;
						HX_STACK_LINE(2549)
						::zpp_nape::dynamics::ZPP_IContact tmp27 = this->c2;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2549)
						Float tmp28 = tmp27->lr1x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2549)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2549)
						Float tmp30 = tmp29->axisx;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(2549)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2549)
						::zpp_nape::dynamics::ZPP_IContact tmp32 = this->c2;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2549)
						Float tmp33 = tmp32->lr1y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(2549)
						::zpp_nape::phys::ZPP_Body tmp34 = this->b2;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(2549)
						Float tmp35 = tmp34->axisy;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(2549)
						Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(2549)
						Float tmp37 = (tmp31 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(2549)
						clip2y = tmp37;
					}
					HX_STACK_LINE(2551)
					{
						HX_STACK_LINE(2552)
						Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2561)
						::zpp_nape::phys::ZPP_Body tmp16 = this->b2;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2561)
						Float tmp17 = tmp16->posx;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2561)
						Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2561)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2561)
						hx::AddEq(clip2x,tmp19);
						HX_STACK_LINE(2562)
						::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2562)
						Float tmp21 = tmp20->posy;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2562)
						Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2562)
						Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2562)
						hx::AddEq(clip2y,tmp23);
					}
				}
			}
			else{
				HX_STACK_LINE(2567)
				{
					HX_STACK_LINE(2568)
					::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2568)
					Float tmp5 = tmp4->axisy;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2568)
					Float tmp6 = this->lnormx;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2568)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2568)
					::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2568)
					Float tmp9 = tmp8->axisx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2568)
					Float tmp10 = this->lnormy;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2568)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2568)
					Float tmp12 = (tmp7 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2568)
					gnormx = tmp12;
					HX_STACK_LINE(2569)
					Float tmp13 = this->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2569)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2569)
					Float tmp15 = tmp14->axisx;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2569)
					Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2569)
					Float tmp17 = this->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2569)
					::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2569)
					Float tmp19 = tmp18->axisy;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2569)
					Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2569)
					Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2569)
					gnormy = tmp21;
				}
				HX_STACK_LINE(2571)
				Float tmp4 = this->lproj;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2571)
				Float tmp5 = gnormx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2571)
				::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2571)
				Float tmp7 = tmp6->posx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2571)
				Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2571)
				Float tmp9 = gnormy;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2571)
				::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2571)
				Float tmp11 = tmp10->posy;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2571)
				Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2571)
				Float tmp13 = (tmp8 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2571)
				Float tmp14 = (tmp4 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2571)
				gproj = tmp14;
				HX_STACK_LINE(2572)
				{
					HX_STACK_LINE(2573)
					::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2573)
					Float tmp16 = tmp15->axisy;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2573)
					::zpp_nape::dynamics::ZPP_IContact tmp17 = this->c1;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2573)
					Float tmp18 = tmp17->lr1x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2573)
					Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2573)
					::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2573)
					Float tmp21 = tmp20->axisx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2573)
					::zpp_nape::dynamics::ZPP_IContact tmp22 = this->c1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2573)
					Float tmp23 = tmp22->lr1y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2573)
					Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2573)
					Float tmp25 = (tmp19 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2573)
					clip1x = tmp25;
					HX_STACK_LINE(2574)
					::zpp_nape::dynamics::ZPP_IContact tmp26 = this->c1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2574)
					Float tmp27 = tmp26->lr1x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2574)
					::zpp_nape::phys::ZPP_Body tmp28 = this->b1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2574)
					Float tmp29 = tmp28->axisx;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2574)
					Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2574)
					::zpp_nape::dynamics::ZPP_IContact tmp31 = this->c1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2574)
					Float tmp32 = tmp31->lr1y;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2574)
					::zpp_nape::phys::ZPP_Body tmp33 = this->b1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2574)
					Float tmp34 = tmp33->axisy;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2574)
					Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2574)
					Float tmp36 = (tmp30 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2574)
					clip1y = tmp36;
				}
				HX_STACK_LINE(2576)
				{
					HX_STACK_LINE(2577)
					Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2586)
					::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2586)
					Float tmp16 = tmp15->posx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2586)
					Float tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2586)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2586)
					hx::AddEq(clip1x,tmp18);
					HX_STACK_LINE(2587)
					::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2587)
					Float tmp20 = tmp19->posy;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2587)
					Float tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2587)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2587)
					hx::AddEq(clip1y,tmp22);
				}
				HX_STACK_LINE(2589)
				bool tmp15 = this->hpc2;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2589)
				if ((tmp15)){
					HX_STACK_LINE(2590)
					{
						HX_STACK_LINE(2591)
						::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2591)
						Float tmp17 = tmp16->axisy;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2591)
						::zpp_nape::dynamics::ZPP_IContact tmp18 = this->c2;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2591)
						Float tmp19 = tmp18->lr1x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2591)
						Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2591)
						::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2591)
						Float tmp22 = tmp21->axisx;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2591)
						::zpp_nape::dynamics::ZPP_IContact tmp23 = this->c2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2591)
						Float tmp24 = tmp23->lr1y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2591)
						Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2591)
						Float tmp26 = (tmp20 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2591)
						clip2x = tmp26;
						HX_STACK_LINE(2592)
						::zpp_nape::dynamics::ZPP_IContact tmp27 = this->c2;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2592)
						Float tmp28 = tmp27->lr1x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2592)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b1;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2592)
						Float tmp30 = tmp29->axisx;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(2592)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2592)
						::zpp_nape::dynamics::ZPP_IContact tmp32 = this->c2;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2592)
						Float tmp33 = tmp32->lr1y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(2592)
						::zpp_nape::phys::ZPP_Body tmp34 = this->b1;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(2592)
						Float tmp35 = tmp34->axisy;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(2592)
						Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(2592)
						Float tmp37 = (tmp31 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(2592)
						clip2y = tmp37;
					}
					HX_STACK_LINE(2594)
					{
						HX_STACK_LINE(2595)
						Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2604)
						::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2604)
						Float tmp17 = tmp16->posx;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2604)
						Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2604)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2604)
						hx::AddEq(clip2x,tmp19);
						HX_STACK_LINE(2605)
						::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2605)
						Float tmp21 = tmp20->posy;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2605)
						Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2605)
						Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2605)
						hx::AddEq(clip2y,tmp23);
					}
				}
			}
			HX_STACK_LINE(2609)
			Float tmp4 = (clip1x * gnormx);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2609)
			Float tmp5 = (clip1y * gnormy);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2609)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2609)
			Float tmp7 = gproj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2609)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2609)
			Float tmp9 = this->radius;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2609)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2609)
			Float err1 = tmp10;		HX_STACK_VAR(err1,"err1");
			HX_STACK_LINE(2610)
			Float tmp11 = ::nape::Config_obj::collisionSlop;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2610)
			hx::AddEq(err1,tmp11);
			HX_STACK_LINE(2611)
			Float err2 = ((Float)0.0);		HX_STACK_VAR(err2,"err2");
			HX_STACK_LINE(2612)
			bool tmp12 = this->hpc2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2612)
			if ((tmp12)){
				HX_STACK_LINE(2613)
				Float tmp13 = (clip2x * gnormx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2613)
				Float tmp14 = (clip2y * gnormy);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2613)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2613)
				Float tmp16 = gproj;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2613)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2613)
				Float tmp18 = this->radius;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2613)
				Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2613)
				err2 = tmp19;
				HX_STACK_LINE(2614)
				Float tmp20 = ::nape::Config_obj::collisionSlop;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2614)
				hx::AddEq(err2,tmp20);
			}
			HX_STACK_LINE(2616)
			bool tmp13 = (err1 < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2616)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2616)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2616)
			if ((tmp14)){
				HX_STACK_LINE(2616)
				tmp15 = (err2 < (int)0);
			}
			else{
				HX_STACK_LINE(2616)
				tmp15 = true;
			}
			HX_STACK_LINE(2616)
			if ((tmp15)){
				HX_STACK_LINE(2617)
				bool tmp16 = this->rev;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2617)
				if ((tmp16)){
					HX_STACK_LINE(2618)
					Float tmp17 = gnormx;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2618)
					Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2618)
					gnormx = tmp18;
					HX_STACK_LINE(2619)
					Float tmp19 = gnormy;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2619)
					Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2619)
					gnormy = tmp20;
				}
				HX_STACK_LINE(2621)
				Float c1r1x = ((Float)0.0);		HX_STACK_VAR(c1r1x,"c1r1x");
				HX_STACK_LINE(2622)
				Float c1r1y = ((Float)0.0);		HX_STACK_VAR(c1r1y,"c1r1y");
				HX_STACK_LINE(2623)
				{
					HX_STACK_LINE(2624)
					Float tmp17 = clip1x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2624)
					::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2624)
					Float tmp19 = tmp18->posx;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2624)
					Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2624)
					c1r1x = tmp20;
					HX_STACK_LINE(2625)
					Float tmp21 = clip1y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2625)
					::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2625)
					Float tmp23 = tmp22->posy;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2625)
					Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2625)
					c1r1y = tmp24;
				}
				HX_STACK_LINE(2627)
				Float c1r2x = ((Float)0.0);		HX_STACK_VAR(c1r2x,"c1r2x");
				HX_STACK_LINE(2628)
				Float c1r2y = ((Float)0.0);		HX_STACK_VAR(c1r2y,"c1r2y");
				HX_STACK_LINE(2629)
				{
					HX_STACK_LINE(2630)
					Float tmp17 = clip1x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2630)
					::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2630)
					Float tmp19 = tmp18->posx;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2630)
					Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2630)
					c1r2x = tmp20;
					HX_STACK_LINE(2631)
					Float tmp21 = clip1y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2631)
					::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2631)
					Float tmp23 = tmp22->posy;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2631)
					Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2631)
					c1r2y = tmp24;
				}
				HX_STACK_LINE(2633)
				Float c2r1x = (int)0;		HX_STACK_VAR(c2r1x,"c2r1x");
				HX_STACK_LINE(2634)
				Float c2r1y = (int)0;		HX_STACK_VAR(c2r1y,"c2r1y");
				HX_STACK_LINE(2651)
				Float c2r2x = (int)0;		HX_STACK_VAR(c2r2x,"c2r2x");
				HX_STACK_LINE(2652)
				Float c2r2y = (int)0;		HX_STACK_VAR(c2r2y,"c2r2y");
				HX_STACK_LINE(2669)
				bool tmp17 = this->hpc2;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2669)
				if ((tmp17)){
					HX_STACK_LINE(2670)
					{
						HX_STACK_LINE(2671)
						Float tmp18 = clip2x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2671)
						::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2671)
						Float tmp20 = tmp19->posx;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2671)
						Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2671)
						c2r1x = tmp21;
						HX_STACK_LINE(2672)
						Float tmp22 = clip2y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2672)
						::zpp_nape::phys::ZPP_Body tmp23 = this->b1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2672)
						Float tmp24 = tmp23->posy;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2672)
						Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2672)
						c2r1y = tmp25;
					}
					HX_STACK_LINE(2674)
					{
						HX_STACK_LINE(2675)
						Float tmp18 = clip2x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2675)
						::zpp_nape::phys::ZPP_Body tmp19 = this->b2;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2675)
						Float tmp20 = tmp19->posx;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2675)
						Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2675)
						c2r2x = tmp21;
						HX_STACK_LINE(2676)
						Float tmp22 = clip2y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2676)
						::zpp_nape::phys::ZPP_Body tmp23 = this->b2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2676)
						Float tmp24 = tmp23->posy;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2676)
						Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2676)
						c2r2y = tmp25;
					}
					HX_STACK_LINE(2678)
					Float tmp18 = (gnormy * c1r1x);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2678)
					Float tmp19 = (gnormx * c1r1y);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2678)
					Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2678)
					Float rn1a = tmp20;		HX_STACK_VAR(rn1a,"rn1a");
					HX_STACK_LINE(2679)
					Float tmp21 = (gnormy * c1r2x);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2679)
					Float tmp22 = (gnormx * c1r2y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2679)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2679)
					Float rn1b = tmp23;		HX_STACK_VAR(rn1b,"rn1b");
					HX_STACK_LINE(2680)
					Float tmp24 = (gnormy * c2r1x);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2680)
					Float tmp25 = (gnormx * c2r1y);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2680)
					Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2680)
					Float rn2a = tmp26;		HX_STACK_VAR(rn2a,"rn2a");
					HX_STACK_LINE(2681)
					Float tmp27 = (gnormy * c2r2x);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2681)
					Float tmp28 = (gnormx * c2r2y);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2681)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2681)
					Float rn2b = tmp29;		HX_STACK_VAR(rn2b,"rn2b");
					HX_STACK_LINE(2682)
					::zpp_nape::phys::ZPP_Body tmp30 = this->b1;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2682)
					Float tmp31 = tmp30->smass;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2682)
					::zpp_nape::phys::ZPP_Body tmp32 = this->b2;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2682)
					Float tmp33 = tmp32->smass;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2682)
					Float tmp34 = (tmp31 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2682)
					Float mass_sum = tmp34;		HX_STACK_VAR(mass_sum,"mass_sum");
					HX_STACK_LINE(2683)
					{
						HX_STACK_LINE(2684)
						Float tmp35 = mass_sum;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(2684)
						::zpp_nape::phys::ZPP_Body tmp36 = this->b1;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(2684)
						Float tmp37 = tmp36->sinertia;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(2684)
						Float tmp38 = rn1a;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(2684)
						Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(2684)
						Float tmp40 = rn1a;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(2684)
						Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(2684)
						Float tmp42 = (tmp35 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(2684)
						::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(2684)
						Float tmp44 = tmp43->sinertia;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(2684)
						Float tmp45 = rn1b;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(2684)
						Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(2684)
						Float tmp47 = rn1b;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(2684)
						Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(2684)
						Float tmp49 = (tmp42 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(2684)
						this->kMassa = tmp49;
						HX_STACK_LINE(2685)
						Float tmp50 = mass_sum;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(2685)
						::zpp_nape::phys::ZPP_Body tmp51 = this->b1;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(2685)
						Float tmp52 = tmp51->sinertia;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(2685)
						Float tmp53 = rn1a;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(2685)
						Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(2685)
						Float tmp55 = rn2a;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(2685)
						Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(2685)
						Float tmp57 = (tmp50 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(2685)
						::zpp_nape::phys::ZPP_Body tmp58 = this->b2;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(2685)
						Float tmp59 = tmp58->sinertia;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(2685)
						Float tmp60 = rn1b;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(2685)
						Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(2685)
						Float tmp62 = rn2b;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(2685)
						Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(2685)
						Float tmp64 = (tmp57 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(2685)
						this->kMassb = tmp64;
						HX_STACK_LINE(2686)
						Float tmp65 = mass_sum;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(2686)
						::zpp_nape::phys::ZPP_Body tmp66 = this->b1;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(2686)
						Float tmp67 = tmp66->sinertia;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(2686)
						Float tmp68 = rn2a;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(2686)
						Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(2686)
						Float tmp70 = rn2a;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(2686)
						Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(2686)
						Float tmp72 = (tmp65 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(2686)
						::zpp_nape::phys::ZPP_Body tmp73 = this->b2;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(2686)
						Float tmp74 = tmp73->sinertia;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(2686)
						Float tmp75 = rn2b;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(2686)
						Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(2686)
						Float tmp77 = rn2b;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(2686)
						Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(2686)
						Float tmp79 = (tmp72 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(2686)
						this->kMassc = tmp79;
					}
					HX_STACK_LINE(2688)
					Float Ka = ((Float)0.0);		HX_STACK_VAR(Ka,"Ka");
					HX_STACK_LINE(2689)
					Float Kb = ((Float)0.0);		HX_STACK_VAR(Kb,"Kb");
					HX_STACK_LINE(2690)
					Float Kc = ((Float)0.0);		HX_STACK_VAR(Kc,"Kc");
					HX_STACK_LINE(2691)
					{
						HX_STACK_LINE(2692)
						Float tmp35 = this->kMassa;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(2692)
						Ka = tmp35;
						HX_STACK_LINE(2693)
						Float tmp36 = this->kMassb;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(2693)
						Kb = tmp36;
						HX_STACK_LINE(2694)
						Float tmp37 = this->kMassc;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(2694)
						Kc = tmp37;
					}
					HX_STACK_LINE(2696)
					Float tmp35 = err1;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2696)
					Float tmp36 = this->biasCoef;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2696)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2696)
					Float bx = tmp37;		HX_STACK_VAR(bx,"bx");
					HX_STACK_LINE(2697)
					Float tmp38 = err2;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2697)
					Float tmp39 = this->biasCoef;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2697)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(2697)
					Float by = tmp40;		HX_STACK_VAR(by,"by");
					HX_STACK_LINE(2714)
					while((true)){
						HX_STACK_LINE(2715)
						Float xx = ((Float)0.0);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(2716)
						Float xy = ((Float)0.0);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(2717)
						{
							HX_STACK_LINE(2718)
							xx = bx;
							HX_STACK_LINE(2719)
							xy = by;
							HX_STACK_LINE(2728)
							{
							}
						}
						HX_STACK_LINE(2737)
						{
							HX_STACK_LINE(2738)
							Float tmp41 = xx;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(2738)
							Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(2738)
							xx = tmp42;
							HX_STACK_LINE(2739)
							Float tmp43 = xy;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(2739)
							Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(2739)
							xy = tmp44;
						}
						HX_STACK_LINE(2741)
						{
							HX_STACK_LINE(2742)
							Float tmp41 = this->kMassa;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(2742)
							Float tmp42 = this->kMassc;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(2742)
							Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(2742)
							Float tmp44 = this->kMassb;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(2742)
							Float tmp45 = this->kMassb;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(2742)
							Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(2742)
							Float tmp47 = (tmp43 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(2742)
							Float det = tmp47;		HX_STACK_VAR(det,"det");
							HX_STACK_LINE(2743)
							bool tmp48 = (det != det);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(2743)
							if ((tmp48)){
								HX_STACK_LINE(2743)
								Float tmp49 = xy = (int)0;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2743)
								xx = tmp49;
							}
							else{
								HX_STACK_LINE(2744)
								bool tmp49 = (det == (int)0);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2744)
								if ((tmp49)){
									HX_STACK_LINE(2745)
									Float tmp50 = this->kMassa;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(2745)
									bool tmp51 = (tmp50 != (int)0);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(2745)
									if ((tmp51)){
										HX_STACK_LINE(2745)
										Float tmp52 = this->kMassa;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(2745)
										hx::DivEq(xx,tmp52);
									}
									else{
										HX_STACK_LINE(2746)
										xx = (int)0;
									}
									HX_STACK_LINE(2747)
									Float tmp52 = this->kMassc;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(2747)
									bool tmp53 = (tmp52 != (int)0);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(2747)
									if ((tmp53)){
										HX_STACK_LINE(2747)
										Float tmp54 = this->kMassc;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(2747)
										hx::DivEq(xy,tmp54);
									}
									else{
										HX_STACK_LINE(2748)
										xy = (int)0;
									}
								}
								else{
									HX_STACK_LINE(2751)
									Float tmp50 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(2751)
									det = tmp50;
									HX_STACK_LINE(2752)
									Float tmp51 = det;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(2752)
									Float tmp52 = this->kMassc;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(2752)
									Float tmp53 = xx;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(2752)
									Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(2752)
									Float tmp55 = this->kMassb;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(2752)
									Float tmp56 = xy;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(2752)
									Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(2752)
									Float tmp58 = (tmp54 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(2752)
									Float tmp59 = (tmp51 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(2752)
									Float t = tmp59;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(2753)
									Float tmp60 = det;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(2753)
									Float tmp61 = this->kMassa;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(2753)
									Float tmp62 = xy;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(2753)
									Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2753)
									Float tmp64 = this->kMassb;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2753)
									Float tmp65 = xx;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2753)
									Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(2753)
									Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(2753)
									Float tmp68 = (tmp60 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(2753)
									xy = tmp68;
									HX_STACK_LINE(2754)
									xx = t;
								}
							}
						}
						HX_STACK_LINE(2757)
						bool tmp41 = (xx >= (int)0);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(2757)
						bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(2757)
						if ((tmp41)){
							HX_STACK_LINE(2757)
							tmp42 = (xy >= (int)0);
						}
						else{
							HX_STACK_LINE(2757)
							tmp42 = false;
						}
						HX_STACK_LINE(2757)
						if ((tmp42)){
							HX_STACK_LINE(2758)
							{
								HX_STACK_LINE(2759)
								Float tmp43 = (xx + xy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(2759)
								::zpp_nape::phys::ZPP_Body tmp44 = this->b1;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(2759)
								Float tmp45 = tmp44->imass;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(2759)
								Float tmp46 = (tmp43 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(2759)
								Float t = tmp46;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2768)
								Float tmp47 = (gnormx * t);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(2768)
								::zpp_nape::phys::ZPP_Body tmp48 = this->b1;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2768)
								hx::SubEq(tmp48->posx,tmp47);
								HX_STACK_LINE(2769)
								Float tmp49 = (gnormy * t);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2769)
								::zpp_nape::phys::ZPP_Body tmp50 = this->b1;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2769)
								hx::SubEq(tmp50->posy,tmp49);
							}
							HX_STACK_LINE(2771)
							{
								HX_STACK_LINE(2771)
								::zpp_nape::phys::ZPP_Body tmp43 = this->b1;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(2771)
								::zpp_nape::phys::ZPP_Body _this = tmp43;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2771)
								::zpp_nape::phys::ZPP_Body tmp44 = this->b1;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(2771)
								Float tmp45 = tmp44->iinertia;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(2771)
								Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(2771)
								Float tmp47 = (rn1a * xx);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(2771)
								Float tmp48 = (rn2a * xy);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2771)
								Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2771)
								Float tmp50 = (tmp46 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2771)
								Float dr = tmp50;		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2771)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2771)
								Float tmp51 = (dr * dr);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(2771)
								bool tmp52 = (tmp51 > ((Float)0.0001));		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(2771)
								if ((tmp52)){
									HX_STACK_LINE(2771)
									Float tmp53 = _this->rot;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(2771)
									Float tmp54 = ::Math_obj::sin(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(2771)
									_this->axisx = tmp54;
									HX_STACK_LINE(2771)
									Float tmp55 = _this->rot;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(2771)
									Float tmp56 = ::Math_obj::cos(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(2771)
									_this->axisy = tmp56;
									HX_STACK_LINE(2771)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2771)
									Float tmp53 = (dr * dr);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(2771)
									Float d2 = tmp53;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2771)
									Float tmp54 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(2771)
									Float tmp55 = ((int)1 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(2771)
									Float p = tmp55;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2771)
									Float tmp56 = (d2 * d2);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(2771)
									Float tmp57 = (Float(tmp56) / Float((int)8));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(2771)
									Float tmp58 = ((int)1 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(2771)
									Float m = tmp58;		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2771)
									Float tmp59 = (p * _this->axisx);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(2771)
									Float tmp60 = (dr * _this->axisy);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(2771)
									Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(2771)
									Float tmp62 = m;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(2771)
									Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2771)
									Float nx = tmp63;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2771)
									Float tmp64 = (p * _this->axisy);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2771)
									Float tmp65 = (dr * _this->axisx);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2771)
									Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(2771)
									Float tmp67 = m;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(2771)
									Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(2771)
									_this->axisy = tmp68;
									HX_STACK_LINE(2771)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2772)
							{
								HX_STACK_LINE(2773)
								Float tmp43 = (xx + xy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(2773)
								::zpp_nape::phys::ZPP_Body tmp44 = this->b2;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(2773)
								Float tmp45 = tmp44->imass;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(2773)
								Float tmp46 = (tmp43 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(2773)
								Float t = tmp46;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2782)
								Float tmp47 = (gnormx * t);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(2782)
								::zpp_nape::phys::ZPP_Body tmp48 = this->b2;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2782)
								hx::AddEq(tmp48->posx,tmp47);
								HX_STACK_LINE(2783)
								Float tmp49 = (gnormy * t);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2783)
								::zpp_nape::phys::ZPP_Body tmp50 = this->b2;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2783)
								hx::AddEq(tmp50->posy,tmp49);
							}
							HX_STACK_LINE(2785)
							{
								HX_STACK_LINE(2785)
								::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(2785)
								::zpp_nape::phys::ZPP_Body _this = tmp43;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2785)
								::zpp_nape::phys::ZPP_Body tmp44 = this->b2;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(2785)
								Float tmp45 = tmp44->iinertia;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(2785)
								Float tmp46 = (rn1b * xx);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(2785)
								Float tmp47 = (rn2b * xy);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(2785)
								Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2785)
								Float tmp49 = (tmp45 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2785)
								Float dr = tmp49;		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2785)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2785)
								Float tmp50 = (dr * dr);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2785)
								bool tmp51 = (tmp50 > ((Float)0.0001));		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(2785)
								if ((tmp51)){
									HX_STACK_LINE(2785)
									Float tmp52 = _this->rot;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(2785)
									Float tmp53 = ::Math_obj::sin(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(2785)
									_this->axisx = tmp53;
									HX_STACK_LINE(2785)
									Float tmp54 = _this->rot;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(2785)
									Float tmp55 = ::Math_obj::cos(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(2785)
									_this->axisy = tmp55;
									HX_STACK_LINE(2785)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2785)
									Float tmp52 = (dr * dr);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(2785)
									Float d2 = tmp52;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2785)
									Float tmp53 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(2785)
									Float tmp54 = ((int)1 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(2785)
									Float p = tmp54;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2785)
									Float tmp55 = (d2 * d2);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(2785)
									Float tmp56 = (Float(tmp55) / Float((int)8));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(2785)
									Float tmp57 = ((int)1 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(2785)
									Float m = tmp57;		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2785)
									Float tmp58 = (p * _this->axisx);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(2785)
									Float tmp59 = (dr * _this->axisy);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(2785)
									Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(2785)
									Float tmp61 = m;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(2785)
									Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(2785)
									Float nx = tmp62;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2785)
									Float tmp63 = (p * _this->axisy);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2785)
									Float tmp64 = (dr * _this->axisx);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2785)
									Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2785)
									Float tmp66 = m;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(2785)
									Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(2785)
									_this->axisy = tmp67;
									HX_STACK_LINE(2785)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2786)
							break;
						}
						HX_STACK_LINE(2788)
						{
							HX_STACK_LINE(2789)
							Float tmp43 = bx;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(2789)
							Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(2789)
							Float tmp45 = Ka;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(2789)
							Float tmp46 = (Float(tmp44) / Float(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(2789)
							xx = tmp46;
							HX_STACK_LINE(2790)
							xy = (int)0;
							HX_STACK_LINE(2799)
							{
							}
						}
						HX_STACK_LINE(2808)
						Float tmp43 = (Kb * xx);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(2808)
						Float tmp44 = by;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(2808)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(2808)
						Float vn2 = tmp45;		HX_STACK_VAR(vn2,"vn2");
						HX_STACK_LINE(2809)
						bool tmp46 = (xx >= (int)0);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(2809)
						bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(2809)
						if ((tmp46)){
							HX_STACK_LINE(2809)
							tmp47 = (vn2 >= (int)0);
						}
						else{
							HX_STACK_LINE(2809)
							tmp47 = false;
						}
						HX_STACK_LINE(2809)
						if ((tmp47)){
							HX_STACK_LINE(2810)
							{
								HX_STACK_LINE(2811)
								Float tmp48 = (xx + xy);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2811)
								::zpp_nape::phys::ZPP_Body tmp49 = this->b1;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2811)
								Float tmp50 = tmp49->imass;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2811)
								Float tmp51 = (tmp48 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(2811)
								Float t = tmp51;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2820)
								Float tmp52 = (gnormx * t);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(2820)
								::zpp_nape::phys::ZPP_Body tmp53 = this->b1;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2820)
								hx::SubEq(tmp53->posx,tmp52);
								HX_STACK_LINE(2821)
								Float tmp54 = (gnormy * t);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2821)
								::zpp_nape::phys::ZPP_Body tmp55 = this->b1;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2821)
								hx::SubEq(tmp55->posy,tmp54);
							}
							HX_STACK_LINE(2823)
							{
								HX_STACK_LINE(2823)
								::zpp_nape::phys::ZPP_Body tmp48 = this->b1;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2823)
								::zpp_nape::phys::ZPP_Body _this = tmp48;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2823)
								::zpp_nape::phys::ZPP_Body tmp49 = this->b1;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2823)
								Float tmp50 = tmp49->iinertia;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2823)
								Float tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(2823)
								Float tmp52 = (rn1a * xx);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(2823)
								Float tmp53 = (rn2a * xy);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2823)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2823)
								Float tmp55 = (tmp51 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2823)
								Float dr = tmp55;		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2823)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2823)
								Float tmp56 = (dr * dr);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2823)
								bool tmp57 = (tmp56 > ((Float)0.0001));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2823)
								if ((tmp57)){
									HX_STACK_LINE(2823)
									Float tmp58 = _this->rot;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(2823)
									Float tmp59 = ::Math_obj::sin(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(2823)
									_this->axisx = tmp59;
									HX_STACK_LINE(2823)
									Float tmp60 = _this->rot;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(2823)
									Float tmp61 = ::Math_obj::cos(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(2823)
									_this->axisy = tmp61;
									HX_STACK_LINE(2823)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2823)
									Float tmp58 = (dr * dr);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(2823)
									Float d2 = tmp58;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2823)
									Float tmp59 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(2823)
									Float tmp60 = ((int)1 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(2823)
									Float p = tmp60;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2823)
									Float tmp61 = (d2 * d2);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(2823)
									Float tmp62 = (Float(tmp61) / Float((int)8));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(2823)
									Float tmp63 = ((int)1 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2823)
									Float m = tmp63;		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2823)
									Float tmp64 = (p * _this->axisx);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2823)
									Float tmp65 = (dr * _this->axisy);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2823)
									Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(2823)
									Float tmp67 = m;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(2823)
									Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(2823)
									Float nx = tmp68;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2823)
									Float tmp69 = (p * _this->axisy);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(2823)
									Float tmp70 = (dr * _this->axisx);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(2823)
									Float tmp71 = (tmp69 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(2823)
									Float tmp72 = m;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(2823)
									Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(2823)
									_this->axisy = tmp73;
									HX_STACK_LINE(2823)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2824)
							{
								HX_STACK_LINE(2825)
								Float tmp48 = (xx + xy);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2825)
								::zpp_nape::phys::ZPP_Body tmp49 = this->b2;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2825)
								Float tmp50 = tmp49->imass;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2825)
								Float tmp51 = (tmp48 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(2825)
								Float t = tmp51;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2834)
								Float tmp52 = (gnormx * t);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(2834)
								::zpp_nape::phys::ZPP_Body tmp53 = this->b2;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2834)
								hx::AddEq(tmp53->posx,tmp52);
								HX_STACK_LINE(2835)
								Float tmp54 = (gnormy * t);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2835)
								::zpp_nape::phys::ZPP_Body tmp55 = this->b2;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2835)
								hx::AddEq(tmp55->posy,tmp54);
							}
							HX_STACK_LINE(2837)
							{
								HX_STACK_LINE(2837)
								::zpp_nape::phys::ZPP_Body tmp48 = this->b2;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(2837)
								::zpp_nape::phys::ZPP_Body _this = tmp48;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2837)
								::zpp_nape::phys::ZPP_Body tmp49 = this->b2;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(2837)
								Float tmp50 = tmp49->iinertia;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(2837)
								Float tmp51 = (rn1b * xx);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(2837)
								Float tmp52 = (rn2b * xy);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(2837)
								Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2837)
								Float tmp54 = (tmp50 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2837)
								Float dr = tmp54;		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2837)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2837)
								Float tmp55 = (dr * dr);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2837)
								bool tmp56 = (tmp55 > ((Float)0.0001));		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2837)
								if ((tmp56)){
									HX_STACK_LINE(2837)
									Float tmp57 = _this->rot;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(2837)
									Float tmp58 = ::Math_obj::sin(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(2837)
									_this->axisx = tmp58;
									HX_STACK_LINE(2837)
									Float tmp59 = _this->rot;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(2837)
									Float tmp60 = ::Math_obj::cos(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(2837)
									_this->axisy = tmp60;
									HX_STACK_LINE(2837)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2837)
									Float tmp57 = (dr * dr);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(2837)
									Float d2 = tmp57;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2837)
									Float tmp58 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(2837)
									Float tmp59 = ((int)1 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(2837)
									Float p = tmp59;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2837)
									Float tmp60 = (d2 * d2);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(2837)
									Float tmp61 = (Float(tmp60) / Float((int)8));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(2837)
									Float tmp62 = ((int)1 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(2837)
									Float m = tmp62;		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2837)
									Float tmp63 = (p * _this->axisx);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2837)
									Float tmp64 = (dr * _this->axisy);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2837)
									Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2837)
									Float tmp66 = m;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(2837)
									Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(2837)
									Float nx = tmp67;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2837)
									Float tmp68 = (p * _this->axisy);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(2837)
									Float tmp69 = (dr * _this->axisx);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(2837)
									Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(2837)
									Float tmp71 = m;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(2837)
									Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(2837)
									_this->axisy = tmp72;
									HX_STACK_LINE(2837)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2838)
							break;
						}
						HX_STACK_LINE(2840)
						{
							HX_STACK_LINE(2841)
							xx = (int)0;
							HX_STACK_LINE(2842)
							Float tmp48 = by;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(2842)
							Float tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(2842)
							Float tmp50 = Kc;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(2842)
							Float tmp51 = (Float(tmp49) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(2842)
							xy = tmp51;
							HX_STACK_LINE(2851)
							{
							}
						}
						HX_STACK_LINE(2860)
						Float tmp48 = (Kb * xy);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(2860)
						Float tmp49 = bx;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(2860)
						Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(2860)
						Float vn1 = tmp50;		HX_STACK_VAR(vn1,"vn1");
						HX_STACK_LINE(2861)
						bool tmp51 = (xy >= (int)0);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(2861)
						bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(2861)
						if ((tmp51)){
							HX_STACK_LINE(2861)
							tmp52 = (vn1 >= (int)0);
						}
						else{
							HX_STACK_LINE(2861)
							tmp52 = false;
						}
						HX_STACK_LINE(2861)
						if ((tmp52)){
							HX_STACK_LINE(2862)
							{
								HX_STACK_LINE(2863)
								Float tmp53 = (xx + xy);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2863)
								::zpp_nape::phys::ZPP_Body tmp54 = this->b1;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2863)
								Float tmp55 = tmp54->imass;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2863)
								Float tmp56 = (tmp53 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2863)
								Float t = tmp56;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2872)
								Float tmp57 = (gnormx * t);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2872)
								::zpp_nape::phys::ZPP_Body tmp58 = this->b1;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(2872)
								hx::SubEq(tmp58->posx,tmp57);
								HX_STACK_LINE(2873)
								Float tmp59 = (gnormy * t);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(2873)
								::zpp_nape::phys::ZPP_Body tmp60 = this->b1;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(2873)
								hx::SubEq(tmp60->posy,tmp59);
							}
							HX_STACK_LINE(2875)
							{
								HX_STACK_LINE(2875)
								::zpp_nape::phys::ZPP_Body tmp53 = this->b1;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2875)
								::zpp_nape::phys::ZPP_Body _this = tmp53;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2875)
								::zpp_nape::phys::ZPP_Body tmp54 = this->b1;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2875)
								Float tmp55 = tmp54->iinertia;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2875)
								Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2875)
								Float tmp57 = (rn1a * xx);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2875)
								Float tmp58 = (rn2a * xy);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(2875)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(2875)
								Float tmp60 = (tmp56 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(2875)
								Float dr = tmp60;		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2875)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2875)
								Float tmp61 = (dr * dr);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(2875)
								bool tmp62 = (tmp61 > ((Float)0.0001));		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(2875)
								if ((tmp62)){
									HX_STACK_LINE(2875)
									Float tmp63 = _this->rot;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2875)
									Float tmp64 = ::Math_obj::sin(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2875)
									_this->axisx = tmp64;
									HX_STACK_LINE(2875)
									Float tmp65 = _this->rot;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2875)
									Float tmp66 = ::Math_obj::cos(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(2875)
									_this->axisy = tmp66;
									HX_STACK_LINE(2875)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2875)
									Float tmp63 = (dr * dr);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2875)
									Float d2 = tmp63;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2875)
									Float tmp64 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2875)
									Float tmp65 = ((int)1 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2875)
									Float p = tmp65;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2875)
									Float tmp66 = (d2 * d2);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(2875)
									Float tmp67 = (Float(tmp66) / Float((int)8));		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(2875)
									Float tmp68 = ((int)1 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(2875)
									Float m = tmp68;		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2875)
									Float tmp69 = (p * _this->axisx);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(2875)
									Float tmp70 = (dr * _this->axisy);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(2875)
									Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(2875)
									Float tmp72 = m;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(2875)
									Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(2875)
									Float nx = tmp73;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2875)
									Float tmp74 = (p * _this->axisy);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(2875)
									Float tmp75 = (dr * _this->axisx);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(2875)
									Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(2875)
									Float tmp77 = m;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(2875)
									Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(2875)
									_this->axisy = tmp78;
									HX_STACK_LINE(2875)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2876)
							{
								HX_STACK_LINE(2877)
								Float tmp53 = (xx + xy);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2877)
								::zpp_nape::phys::ZPP_Body tmp54 = this->b2;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2877)
								Float tmp55 = tmp54->imass;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2877)
								Float tmp56 = (tmp53 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2877)
								Float t = tmp56;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2886)
								Float tmp57 = (gnormx * t);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2886)
								::zpp_nape::phys::ZPP_Body tmp58 = this->b2;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(2886)
								hx::AddEq(tmp58->posx,tmp57);
								HX_STACK_LINE(2887)
								Float tmp59 = (gnormy * t);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(2887)
								::zpp_nape::phys::ZPP_Body tmp60 = this->b2;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(2887)
								hx::AddEq(tmp60->posy,tmp59);
							}
							HX_STACK_LINE(2889)
							{
								HX_STACK_LINE(2889)
								::zpp_nape::phys::ZPP_Body tmp53 = this->b2;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(2889)
								::zpp_nape::phys::ZPP_Body _this = tmp53;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2889)
								::zpp_nape::phys::ZPP_Body tmp54 = this->b2;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(2889)
								Float tmp55 = tmp54->iinertia;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2889)
								Float tmp56 = (rn1b * xx);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2889)
								Float tmp57 = (rn2b * xy);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2889)
								Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(2889)
								Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(2889)
								Float dr = tmp59;		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2889)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2889)
								Float tmp60 = (dr * dr);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(2889)
								bool tmp61 = (tmp60 > ((Float)0.0001));		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(2889)
								if ((tmp61)){
									HX_STACK_LINE(2889)
									Float tmp62 = _this->rot;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(2889)
									Float tmp63 = ::Math_obj::sin(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2889)
									_this->axisx = tmp63;
									HX_STACK_LINE(2889)
									Float tmp64 = _this->rot;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2889)
									Float tmp65 = ::Math_obj::cos(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2889)
									_this->axisy = tmp65;
									HX_STACK_LINE(2889)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2889)
									Float tmp62 = (dr * dr);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(2889)
									Float d2 = tmp62;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2889)
									Float tmp63 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(2889)
									Float tmp64 = ((int)1 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(2889)
									Float p = tmp64;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2889)
									Float tmp65 = (d2 * d2);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(2889)
									Float tmp66 = (Float(tmp65) / Float((int)8));		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(2889)
									Float tmp67 = ((int)1 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(2889)
									Float m = tmp67;		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2889)
									Float tmp68 = (p * _this->axisx);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(2889)
									Float tmp69 = (dr * _this->axisy);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(2889)
									Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(2889)
									Float tmp71 = m;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(2889)
									Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(2889)
									Float nx = tmp72;		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2889)
									Float tmp73 = (p * _this->axisy);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(2889)
									Float tmp74 = (dr * _this->axisx);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(2889)
									Float tmp75 = (tmp73 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(2889)
									Float tmp76 = m;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(2889)
									Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(2889)
									_this->axisy = tmp77;
									HX_STACK_LINE(2889)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2890)
							break;
						}
						HX_STACK_LINE(2893)
						bool tmp53 = true;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(2714)
						if ((tmp53)){
							HX_STACK_LINE(2714)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(2896)
					Float tmp18 = (gnormy * c1r1x);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2896)
					Float tmp19 = (gnormx * c1r1y);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2896)
					Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2896)
					Float rn1 = tmp20;		HX_STACK_VAR(rn1,"rn1");
					HX_STACK_LINE(2897)
					Float tmp21 = (gnormy * c1r2x);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2897)
					Float tmp22 = (gnormx * c1r2y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2897)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2897)
					Float rn2 = tmp23;		HX_STACK_VAR(rn2,"rn2");
					HX_STACK_LINE(2898)
					::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2898)
					Float tmp25 = tmp24->smass;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2898)
					Float tmp26 = (rn2 * rn2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2898)
					::zpp_nape::phys::ZPP_Body tmp27 = this->b2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2898)
					Float tmp28 = tmp27->sinertia;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2898)
					Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2898)
					Float tmp30 = (tmp25 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2898)
					::zpp_nape::phys::ZPP_Body tmp31 = this->b1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2898)
					Float tmp32 = tmp31->smass;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2898)
					Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2898)
					Float tmp34 = (rn1 * rn1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2898)
					::zpp_nape::phys::ZPP_Body tmp35 = this->b1;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2898)
					Float tmp36 = tmp35->sinertia;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2898)
					Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2898)
					Float tmp38 = (tmp33 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2898)
					Float K = tmp38;		HX_STACK_VAR(K,"K");
					HX_STACK_LINE(2899)
					bool tmp39 = (K != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2899)
					if ((tmp39)){
						HX_STACK_LINE(2900)
						Float tmp40 = this->biasCoef;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(2900)
						Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(2900)
						Float tmp42 = err1;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(2900)
						Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(2900)
						Float tmp44 = K;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(2900)
						Float tmp45 = (Float(tmp43) / Float(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(2900)
						Float jn = tmp45;		HX_STACK_VAR(jn,"jn");
						HX_STACK_LINE(2901)
						Float Jx = ((Float)0.0);		HX_STACK_VAR(Jx,"Jx");
						HX_STACK_LINE(2902)
						Float Jy = ((Float)0.0);		HX_STACK_VAR(Jy,"Jy");
						HX_STACK_LINE(2903)
						{
							HX_STACK_LINE(2904)
							Float t = jn;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2913)
							Float tmp46 = (gnormx * t);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(2913)
							Jx = tmp46;
							HX_STACK_LINE(2914)
							Float tmp47 = (gnormy * t);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(2914)
							Jy = tmp47;
						}
						HX_STACK_LINE(2916)
						{
							HX_STACK_LINE(2917)
							::zpp_nape::phys::ZPP_Body tmp46 = this->b1;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(2917)
							Float t = tmp46->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2926)
							Float tmp47 = (Jx * t);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(2926)
							::zpp_nape::phys::ZPP_Body tmp48 = this->b1;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(2926)
							hx::SubEq(tmp48->posx,tmp47);
							HX_STACK_LINE(2927)
							Float tmp49 = (Jy * t);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(2927)
							::zpp_nape::phys::ZPP_Body tmp50 = this->b1;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(2927)
							hx::SubEq(tmp50->posy,tmp49);
						}
						HX_STACK_LINE(2929)
						{
							HX_STACK_LINE(2929)
							::zpp_nape::phys::ZPP_Body tmp46 = this->b1;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(2929)
							::zpp_nape::phys::ZPP_Body _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2929)
							Float tmp47 = rn1;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(2929)
							Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(2929)
							::zpp_nape::phys::ZPP_Body tmp49 = this->b1;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(2929)
							Float tmp50 = tmp49->iinertia;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(2929)
							Float tmp51 = (tmp48 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(2929)
							Float tmp52 = jn;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(2929)
							Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(2929)
							Float dr = tmp53;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2929)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2929)
							Float tmp54 = (dr * dr);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(2929)
							bool tmp55 = (tmp54 > ((Float)0.0001));		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(2929)
							if ((tmp55)){
								HX_STACK_LINE(2929)
								Float tmp56 = _this->rot;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2929)
								Float tmp57 = ::Math_obj::sin(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2929)
								_this->axisx = tmp57;
								HX_STACK_LINE(2929)
								Float tmp58 = _this->rot;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(2929)
								Float tmp59 = ::Math_obj::cos(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(2929)
								_this->axisy = tmp59;
								HX_STACK_LINE(2929)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2929)
								Float tmp56 = (dr * dr);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2929)
								Float d2 = tmp56;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2929)
								Float tmp57 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2929)
								Float tmp58 = ((int)1 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(2929)
								Float p = tmp58;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2929)
								Float tmp59 = (d2 * d2);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(2929)
								Float tmp60 = (Float(tmp59) / Float((int)8));		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(2929)
								Float tmp61 = ((int)1 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(2929)
								Float m = tmp61;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2929)
								Float tmp62 = (p * _this->axisx);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(2929)
								Float tmp63 = (dr * _this->axisy);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(2929)
								Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(2929)
								Float tmp65 = m;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(2929)
								Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(2929)
								Float nx = tmp66;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2929)
								Float tmp67 = (p * _this->axisy);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(2929)
								Float tmp68 = (dr * _this->axisx);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(2929)
								Float tmp69 = (tmp67 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(2929)
								Float tmp70 = m;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(2929)
								Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(2929)
								_this->axisy = tmp71;
								HX_STACK_LINE(2929)
								_this->axisx = nx;
							}
						}
						HX_STACK_LINE(2930)
						{
							HX_STACK_LINE(2931)
							::zpp_nape::phys::ZPP_Body tmp46 = this->b2;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(2931)
							Float t = tmp46->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2940)
							Float tmp47 = (Jx * t);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(2940)
							::zpp_nape::phys::ZPP_Body tmp48 = this->b2;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(2940)
							hx::AddEq(tmp48->posx,tmp47);
							HX_STACK_LINE(2941)
							Float tmp49 = (Jy * t);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(2941)
							::zpp_nape::phys::ZPP_Body tmp50 = this->b2;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(2941)
							hx::AddEq(tmp50->posy,tmp49);
						}
						HX_STACK_LINE(2943)
						{
							HX_STACK_LINE(2943)
							::zpp_nape::phys::ZPP_Body tmp46 = this->b2;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(2943)
							::zpp_nape::phys::ZPP_Body _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2943)
							Float tmp47 = rn2;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(2943)
							::zpp_nape::phys::ZPP_Body tmp48 = this->b2;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(2943)
							Float tmp49 = tmp48->iinertia;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(2943)
							Float tmp50 = (tmp47 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(2943)
							Float tmp51 = jn;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(2943)
							Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(2943)
							Float dr = tmp52;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2943)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2943)
							Float tmp53 = (dr * dr);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(2943)
							bool tmp54 = (tmp53 > ((Float)0.0001));		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(2943)
							if ((tmp54)){
								HX_STACK_LINE(2943)
								Float tmp55 = _this->rot;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2943)
								Float tmp56 = ::Math_obj::sin(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2943)
								_this->axisx = tmp56;
								HX_STACK_LINE(2943)
								Float tmp57 = _this->rot;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2943)
								Float tmp58 = ::Math_obj::cos(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(2943)
								_this->axisy = tmp58;
								HX_STACK_LINE(2943)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2943)
								Float tmp55 = (dr * dr);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(2943)
								Float d2 = tmp55;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2943)
								Float tmp56 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(2943)
								Float tmp57 = ((int)1 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(2943)
								Float p = tmp57;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2943)
								Float tmp58 = (d2 * d2);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(2943)
								Float tmp59 = (Float(tmp58) / Float((int)8));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(2943)
								Float tmp60 = ((int)1 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(2943)
								Float m = tmp60;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2943)
								Float tmp61 = (p * _this->axisx);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(2943)
								Float tmp62 = (dr * _this->axisy);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(2943)
								Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(2943)
								Float tmp64 = m;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(2943)
								Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(2943)
								Float nx = tmp65;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2943)
								Float tmp66 = (p * _this->axisy);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(2943)
								Float tmp67 = (dr * _this->axisx);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(2943)
								Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(2943)
								Float tmp69 = m;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(2943)
								Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(2943)
								_this->axisy = tmp70;
								HX_STACK_LINE(2943)
								_this->axisx = nx;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,applyImpulsePos,(void))

int ZPP_ColArbiter_obj::FACE1;

int ZPP_ColArbiter_obj::FACE2;

int ZPP_ColArbiter_obj::CIRCLE;

::zpp_nape::dynamics::ZPP_ColArbiter ZPP_ColArbiter_obj::zpp_pool;


ZPP_ColArbiter_obj::ZPP_ColArbiter_obj()
{
}

void ZPP_ColArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ColArbiter);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(dyn_fric,"dyn_fric");
	HX_MARK_MEMBER_NAME(stat_fric,"stat_fric");
	HX_MARK_MEMBER_NAME(restitution,"restitution");
	HX_MARK_MEMBER_NAME(rfric,"rfric");
	HX_MARK_MEMBER_NAME(userdef_dyn_fric,"userdef_dyn_fric");
	HX_MARK_MEMBER_NAME(userdef_stat_fric,"userdef_stat_fric");
	HX_MARK_MEMBER_NAME(userdef_restitution,"userdef_restitution");
	HX_MARK_MEMBER_NAME(userdef_rfric,"userdef_rfric");
	HX_MARK_MEMBER_NAME(s1,"s1");
	HX_MARK_MEMBER_NAME(s2,"s2");
	HX_MARK_MEMBER_NAME(contacts,"contacts");
	HX_MARK_MEMBER_NAME(wrap_contacts,"wrap_contacts");
	HX_MARK_MEMBER_NAME(innards,"innards");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(wrap_normal,"wrap_normal");
	HX_MARK_MEMBER_NAME(kMassa,"kMassa");
	HX_MARK_MEMBER_NAME(kMassb,"kMassb");
	HX_MARK_MEMBER_NAME(kMassc,"kMassc");
	HX_MARK_MEMBER_NAME(Ka,"Ka");
	HX_MARK_MEMBER_NAME(Kb,"Kb");
	HX_MARK_MEMBER_NAME(Kc,"Kc");
	HX_MARK_MEMBER_NAME(rMass,"rMass");
	HX_MARK_MEMBER_NAME(jrAcc,"jrAcc");
	HX_MARK_MEMBER_NAME(rn1a,"rn1a");
	HX_MARK_MEMBER_NAME(rt1a,"rt1a");
	HX_MARK_MEMBER_NAME(rn1b,"rn1b");
	HX_MARK_MEMBER_NAME(rt1b,"rt1b");
	HX_MARK_MEMBER_NAME(rn2a,"rn2a");
	HX_MARK_MEMBER_NAME(rt2a,"rt2a");
	HX_MARK_MEMBER_NAME(rn2b,"rn2b");
	HX_MARK_MEMBER_NAME(rt2b,"rt2b");
	HX_MARK_MEMBER_NAME(k1x,"k1x");
	HX_MARK_MEMBER_NAME(k1y,"k1y");
	HX_MARK_MEMBER_NAME(k2x,"k2x");
	HX_MARK_MEMBER_NAME(k2y,"k2y");
	HX_MARK_MEMBER_NAME(surfacex,"surfacex");
	HX_MARK_MEMBER_NAME(surfacey,"surfacey");
	HX_MARK_MEMBER_NAME(ptype,"ptype");
	HX_MARK_MEMBER_NAME(lnormx,"lnormx");
	HX_MARK_MEMBER_NAME(lnormy,"lnormy");
	HX_MARK_MEMBER_NAME(lproj,"lproj");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(rev,"rev");
	HX_MARK_MEMBER_NAME(biasCoef,"biasCoef");
	HX_MARK_MEMBER_NAME(__ref_edge1,"__ref_edge1");
	HX_MARK_MEMBER_NAME(__ref_edge2,"__ref_edge2");
	HX_MARK_MEMBER_NAME(__ref_vertex,"__ref_vertex");
	HX_MARK_MEMBER_NAME(c1,"c1");
	HX_MARK_MEMBER_NAME(oc1,"oc1");
	HX_MARK_MEMBER_NAME(c2,"c2");
	HX_MARK_MEMBER_NAME(oc2,"oc2");
	HX_MARK_MEMBER_NAME(hc2,"hc2");
	HX_MARK_MEMBER_NAME(hpc2,"hpc2");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(stat,"stat");
	HX_MARK_MEMBER_NAME(_mutable,"mutable");
	HX_MARK_MEMBER_NAME(pre_dt,"pre_dt");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_ColArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(dyn_fric,"dyn_fric");
	HX_VISIT_MEMBER_NAME(stat_fric,"stat_fric");
	HX_VISIT_MEMBER_NAME(restitution,"restitution");
	HX_VISIT_MEMBER_NAME(rfric,"rfric");
	HX_VISIT_MEMBER_NAME(userdef_dyn_fric,"userdef_dyn_fric");
	HX_VISIT_MEMBER_NAME(userdef_stat_fric,"userdef_stat_fric");
	HX_VISIT_MEMBER_NAME(userdef_restitution,"userdef_restitution");
	HX_VISIT_MEMBER_NAME(userdef_rfric,"userdef_rfric");
	HX_VISIT_MEMBER_NAME(s1,"s1");
	HX_VISIT_MEMBER_NAME(s2,"s2");
	HX_VISIT_MEMBER_NAME(contacts,"contacts");
	HX_VISIT_MEMBER_NAME(wrap_contacts,"wrap_contacts");
	HX_VISIT_MEMBER_NAME(innards,"innards");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(wrap_normal,"wrap_normal");
	HX_VISIT_MEMBER_NAME(kMassa,"kMassa");
	HX_VISIT_MEMBER_NAME(kMassb,"kMassb");
	HX_VISIT_MEMBER_NAME(kMassc,"kMassc");
	HX_VISIT_MEMBER_NAME(Ka,"Ka");
	HX_VISIT_MEMBER_NAME(Kb,"Kb");
	HX_VISIT_MEMBER_NAME(Kc,"Kc");
	HX_VISIT_MEMBER_NAME(rMass,"rMass");
	HX_VISIT_MEMBER_NAME(jrAcc,"jrAcc");
	HX_VISIT_MEMBER_NAME(rn1a,"rn1a");
	HX_VISIT_MEMBER_NAME(rt1a,"rt1a");
	HX_VISIT_MEMBER_NAME(rn1b,"rn1b");
	HX_VISIT_MEMBER_NAME(rt1b,"rt1b");
	HX_VISIT_MEMBER_NAME(rn2a,"rn2a");
	HX_VISIT_MEMBER_NAME(rt2a,"rt2a");
	HX_VISIT_MEMBER_NAME(rn2b,"rn2b");
	HX_VISIT_MEMBER_NAME(rt2b,"rt2b");
	HX_VISIT_MEMBER_NAME(k1x,"k1x");
	HX_VISIT_MEMBER_NAME(k1y,"k1y");
	HX_VISIT_MEMBER_NAME(k2x,"k2x");
	HX_VISIT_MEMBER_NAME(k2y,"k2y");
	HX_VISIT_MEMBER_NAME(surfacex,"surfacex");
	HX_VISIT_MEMBER_NAME(surfacey,"surfacey");
	HX_VISIT_MEMBER_NAME(ptype,"ptype");
	HX_VISIT_MEMBER_NAME(lnormx,"lnormx");
	HX_VISIT_MEMBER_NAME(lnormy,"lnormy");
	HX_VISIT_MEMBER_NAME(lproj,"lproj");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(rev,"rev");
	HX_VISIT_MEMBER_NAME(biasCoef,"biasCoef");
	HX_VISIT_MEMBER_NAME(__ref_edge1,"__ref_edge1");
	HX_VISIT_MEMBER_NAME(__ref_edge2,"__ref_edge2");
	HX_VISIT_MEMBER_NAME(__ref_vertex,"__ref_vertex");
	HX_VISIT_MEMBER_NAME(c1,"c1");
	HX_VISIT_MEMBER_NAME(oc1,"oc1");
	HX_VISIT_MEMBER_NAME(c2,"c2");
	HX_VISIT_MEMBER_NAME(oc2,"oc2");
	HX_VISIT_MEMBER_NAME(hc2,"hc2");
	HX_VISIT_MEMBER_NAME(hpc2,"hpc2");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(stat,"stat");
	HX_VISIT_MEMBER_NAME(_mutable,"mutable");
	HX_VISIT_MEMBER_NAME(pre_dt,"pre_dt");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_ColArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s1") ) { return s1; }
		if (HX_FIELD_EQ(inName,"s2") ) { return s2; }
		if (HX_FIELD_EQ(inName,"nx") ) { return nx; }
		if (HX_FIELD_EQ(inName,"ny") ) { return ny; }
		if (HX_FIELD_EQ(inName,"Ka") ) { return Ka; }
		if (HX_FIELD_EQ(inName,"Kb") ) { return Kb; }
		if (HX_FIELD_EQ(inName,"Kc") ) { return Kc; }
		if (HX_FIELD_EQ(inName,"c1") ) { return c1; }
		if (HX_FIELD_EQ(inName,"c2") ) { return c2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"k1x") ) { return k1x; }
		if (HX_FIELD_EQ(inName,"k1y") ) { return k1y; }
		if (HX_FIELD_EQ(inName,"k2x") ) { return k2x; }
		if (HX_FIELD_EQ(inName,"k2y") ) { return k2y; }
		if (HX_FIELD_EQ(inName,"rev") ) { return rev; }
		if (HX_FIELD_EQ(inName,"oc1") ) { return oc1; }
		if (HX_FIELD_EQ(inName,"oc2") ) { return oc2; }
		if (HX_FIELD_EQ(inName,"hc2") ) { return hc2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rn1a") ) { return rn1a; }
		if (HX_FIELD_EQ(inName,"rt1a") ) { return rt1a; }
		if (HX_FIELD_EQ(inName,"rn1b") ) { return rn1b; }
		if (HX_FIELD_EQ(inName,"rt1b") ) { return rt1b; }
		if (HX_FIELD_EQ(inName,"rn2a") ) { return rn2a; }
		if (HX_FIELD_EQ(inName,"rt2a") ) { return rt2a; }
		if (HX_FIELD_EQ(inName,"rn2b") ) { return rn2b; }
		if (HX_FIELD_EQ(inName,"rt2b") ) { return rt2b; }
		if (HX_FIELD_EQ(inName,"hpc2") ) { return hpc2; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"stat") ) { return stat; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rfric") ) { return rfric; }
		if (HX_FIELD_EQ(inName,"rMass") ) { return rMass; }
		if (HX_FIELD_EQ(inName,"jrAcc") ) { return jrAcc; }
		if (HX_FIELD_EQ(inName,"ptype") ) { return ptype; }
		if (HX_FIELD_EQ(inName,"lproj") ) { return lproj; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kMassa") ) { return kMassa; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { return kMassb; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
		if (HX_FIELD_EQ(inName,"lnormx") ) { return lnormx; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { return lnormy; }
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		if (HX_FIELD_EQ(inName,"retire") ) { return retire_dyn(); }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { return pre_dt; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"innards") ) { return innards; }
		if (HX_FIELD_EQ(inName,"mutable") ) { return _mutable; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"dyn_fric") ) { return dyn_fric; }
		if (HX_FIELD_EQ(inName,"contacts") ) { return contacts; }
		if (HX_FIELD_EQ(inName,"surfacex") ) { return surfacex; }
		if (HX_FIELD_EQ(inName,"surfacey") ) { return surfacey; }
		if (HX_FIELD_EQ(inName,"biasCoef") ) { return biasCoef; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stat_fric") ) { return stat_fric; }
		if (HX_FIELD_EQ(inName,"getnormal") ) { return getnormal_dyn(); }
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { return restitution; }
		if (HX_FIELD_EQ(inName,"wrap_normal") ) { return wrap_normal; }
		if (HX_FIELD_EQ(inName,"__ref_edge1") ) { return __ref_edge1; }
		if (HX_FIELD_EQ(inName,"__ref_edge2") ) { return __ref_edge2; }
		if (HX_FIELD_EQ(inName,"makemutable") ) { return makemutable_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__ref_vertex") ) { return __ref_vertex; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userdef_rfric") ) { return userdef_rfric; }
		if (HX_FIELD_EQ(inName,"wrap_contacts") ) { return wrap_contacts; }
		if (HX_FIELD_EQ(inName,"injectContact") ) { return injectContact_dyn(); }
		if (HX_FIELD_EQ(inName,"makeimmutable") ) { return makeimmutable_dyn(); }
		if (HX_FIELD_EQ(inName,"setupcontacts") ) { return setupcontacts_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"calcProperties") ) { return calcProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_props") ) { return validate_props_dyn(); }
		if (HX_FIELD_EQ(inName,"contacts_adder") ) { return contacts_adder_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"normal_validate") ) { return normal_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"contacts_subber") ) { return contacts_subber_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanupContacts") ) { return cleanupContacts_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"userdef_dyn_fric") ) { return userdef_dyn_fric; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"userdef_stat_fric") ) { return userdef_stat_fric; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"userdef_restitution") ) { return userdef_restitution; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_ColArbiter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_ColArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2") ) { s2=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Ka") ) { Ka=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Kb") ) { Kb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Kc") ) { Kc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c1") ) { c1=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c2") ) { c2=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"k1x") ) { k1x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k1y") ) { k1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2x") ) { k2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2y") ) { k2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rev") ) { rev=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oc1") ) { oc1=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oc2") ) { oc2=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hc2") ) { hc2=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rn1a") ) { rn1a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt1a") ) { rt1a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn1b") ) { rn1b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt1b") ) { rt1b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn2a") ) { rn2a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt2a") ) { rt2a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn2b") ) { rn2b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt2b") ) { rt2b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hpc2") ) { hpc2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stat") ) { stat=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rfric") ) { rfric=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rMass") ) { rMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jrAcc") ) { jrAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ptype") ) { ptype=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lproj") ) { lproj=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kMassa") ) { kMassa=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { kMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lnormx") ) { lnormx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { lnormy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { pre_dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"innards") ) { innards=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mutable") ) { _mutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::dynamics::CollisionArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dyn_fric") ) { dyn_fric=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contacts") ) { contacts=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"surfacex") ) { surfacex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"surfacey") ) { surfacey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasCoef") ) { biasCoef=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stat_fric") ) { stat_fric=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { restitution=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_normal") ) { wrap_normal=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ref_edge1") ) { __ref_edge1=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ref_edge2") ) { __ref_edge2=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__ref_vertex") ) { __ref_vertex=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userdef_rfric") ) { userdef_rfric=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_contacts") ) { wrap_contacts=inValue.Cast< ::nape::dynamics::ContactList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"userdef_dyn_fric") ) { userdef_dyn_fric=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"userdef_stat_fric") ) { userdef_stat_fric=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"userdef_restitution") ) { userdef_restitution=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_ColArbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return true; }
	}
	return false;
}

void ZPP_ColArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("dyn_fric","\x2c","\x22","\x6f","\xf1"));
	outFields->push(HX_HCSTRING("stat_fric","\xb1","\x77","\x29","\xc7"));
	outFields->push(HX_HCSTRING("restitution","\x6a","\x2c","\x4d","\x08"));
	outFields->push(HX_HCSTRING("rfric","\x98","\xc1","\x70","\xe7"));
	outFields->push(HX_HCSTRING("userdef_dyn_fric","\xf1","\x55","\x5d","\x31"));
	outFields->push(HX_HCSTRING("userdef_stat_fric","\x4c","\x90","\xa8","\x77"));
	outFields->push(HX_HCSTRING("userdef_restitution","\xc5","\xe1","\x37","\x29"));
	outFields->push(HX_HCSTRING("userdef_rfric","\xb3","\xb0","\xfa","\x4e"));
	outFields->push(HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("s2","\x5f","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("contacts","\xd3","\xd1","\x76","\x2c"));
	outFields->push(HX_HCSTRING("wrap_contacts","\x28","\x06","\xa1","\x1c"));
	outFields->push(HX_HCSTRING("innards","\x29","\xc0","\x17","\xa0"));
	outFields->push(HX_HCSTRING("nx","\x4a","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("ny","\x4b","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("wrap_normal","\x3c","\x77","\xf8","\x1a"));
	outFields->push(HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("Ka","\xb6","\x41","\x00","\x00"));
	outFields->push(HX_HCSTRING("Kb","\xb7","\x41","\x00","\x00"));
	outFields->push(HX_HCSTRING("Kc","\xb8","\x41","\x00","\x00"));
	outFields->push(HX_HCSTRING("rMass","\x86","\x8e","\xdd","\xd6"));
	outFields->push(HX_HCSTRING("jrAcc","\x59","\x79","\x05","\x54"));
	outFields->push(HX_HCSTRING("rn1a","\xcc","\xf5","\xad","\x4b"));
	outFields->push(HX_HCSTRING("rt1a","\x52","\x83","\xb2","\x4b"));
	outFields->push(HX_HCSTRING("rn1b","\xcd","\xf5","\xad","\x4b"));
	outFields->push(HX_HCSTRING("rt1b","\x53","\x83","\xb2","\x4b"));
	outFields->push(HX_HCSTRING("rn2a","\xab","\xf6","\xad","\x4b"));
	outFields->push(HX_HCSTRING("rt2a","\x31","\x84","\xb2","\x4b"));
	outFields->push(HX_HCSTRING("rn2b","\xac","\xf6","\xad","\x4b"));
	outFields->push(HX_HCSTRING("rt2b","\x32","\x84","\xb2","\x4b"));
	outFields->push(HX_HCSTRING("k1x","\x52","\x5c","\x51","\x00"));
	outFields->push(HX_HCSTRING("k1y","\x53","\x5c","\x51","\x00"));
	outFields->push(HX_HCSTRING("k2x","\x31","\x5d","\x51","\x00"));
	outFields->push(HX_HCSTRING("k2y","\x32","\x5d","\x51","\x00"));
	outFields->push(HX_HCSTRING("surfacex","\xab","\x01","\xf0","\x42"));
	outFields->push(HX_HCSTRING("surfacey","\xac","\x01","\xf0","\x42"));
	outFields->push(HX_HCSTRING("ptype","\x2a","\xeb","\xe9","\xc9"));
	outFields->push(HX_HCSTRING("lnormx","\xd0","\x56","\x54","\xce"));
	outFields->push(HX_HCSTRING("lnormy","\xd1","\x56","\x54","\xce"));
	outFields->push(HX_HCSTRING("lproj","\x09","\x6e","\xa5","\x79"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	outFields->push(HX_HCSTRING("rev","\x63","\xd9","\x56","\x00"));
	outFields->push(HX_HCSTRING("biasCoef","\x26","\xf9","\xed","\x1f"));
	outFields->push(HX_HCSTRING("__ref_edge1","\x08","\x17","\xe9","\xa5"));
	outFields->push(HX_HCSTRING("__ref_edge2","\x09","\x17","\xe9","\xa5"));
	outFields->push(HX_HCSTRING("__ref_vertex","\x30","\xaf","\xd3","\xec"));
	outFields->push(HX_HCSTRING("c1","\x6e","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("oc1","\x9d","\x90","\x54","\x00"));
	outFields->push(HX_HCSTRING("c2","\x6f","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("oc2","\x9e","\x90","\x54","\x00"));
	outFields->push(HX_HCSTRING("hc2","\xd7","\x40","\x4f","\x00"));
	outFields->push(HX_HCSTRING("hpc2","\x77","\x83","\x13","\x45"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("stat","\xd4","\xe3","\x5b","\x4c"));
	outFields->push(HX_HCSTRING("mutable","\xa6","\x7f","\x48","\x87"));
	outFields->push(HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::CollisionArbiter*/ ,(int)offsetof(ZPP_ColArbiter_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,dyn_fric),HX_HCSTRING("dyn_fric","\x2c","\x22","\x6f","\xf1")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,stat_fric),HX_HCSTRING("stat_fric","\xb1","\x77","\x29","\xc7")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,restitution),HX_HCSTRING("restitution","\x6a","\x2c","\x4d","\x08")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rfric),HX_HCSTRING("rfric","\x98","\xc1","\x70","\xe7")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,userdef_dyn_fric),HX_HCSTRING("userdef_dyn_fric","\xf1","\x55","\x5d","\x31")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,userdef_stat_fric),HX_HCSTRING("userdef_stat_fric","\x4c","\x90","\xa8","\x77")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,userdef_restitution),HX_HCSTRING("userdef_restitution","\xc5","\xe1","\x37","\x29")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,userdef_rfric),HX_HCSTRING("userdef_rfric","\xb3","\xb0","\xfa","\x4e")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_ColArbiter_obj,s1),HX_HCSTRING("s1","\x5e","\x64","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_ColArbiter_obj,s2),HX_HCSTRING("s2","\x5f","\x64","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(ZPP_ColArbiter_obj,contacts),HX_HCSTRING("contacts","\xd3","\xd1","\x76","\x2c")},
	{hx::fsObject /*::nape::dynamics::ContactList*/ ,(int)offsetof(ZPP_ColArbiter_obj,wrap_contacts),HX_HCSTRING("wrap_contacts","\x28","\x06","\xa1","\x1c")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_ColArbiter_obj,innards),HX_HCSTRING("innards","\x29","\xc0","\x17","\xa0")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,nx),HX_HCSTRING("nx","\x4a","\x60","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,ny),HX_HCSTRING("ny","\x4b","\x60","\x00","\x00")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_ColArbiter_obj,wrap_normal),HX_HCSTRING("wrap_normal","\x3c","\x77","\xf8","\x1a")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,kMassa),HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,kMassb),HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,kMassc),HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,Ka),HX_HCSTRING("Ka","\xb6","\x41","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,Kb),HX_HCSTRING("Kb","\xb7","\x41","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,Kc),HX_HCSTRING("Kc","\xb8","\x41","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rMass),HX_HCSTRING("rMass","\x86","\x8e","\xdd","\xd6")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,jrAcc),HX_HCSTRING("jrAcc","\x59","\x79","\x05","\x54")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rn1a),HX_HCSTRING("rn1a","\xcc","\xf5","\xad","\x4b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rt1a),HX_HCSTRING("rt1a","\x52","\x83","\xb2","\x4b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rn1b),HX_HCSTRING("rn1b","\xcd","\xf5","\xad","\x4b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rt1b),HX_HCSTRING("rt1b","\x53","\x83","\xb2","\x4b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rn2a),HX_HCSTRING("rn2a","\xab","\xf6","\xad","\x4b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rt2a),HX_HCSTRING("rt2a","\x31","\x84","\xb2","\x4b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rn2b),HX_HCSTRING("rn2b","\xac","\xf6","\xad","\x4b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,rt2b),HX_HCSTRING("rt2b","\x32","\x84","\xb2","\x4b")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,k1x),HX_HCSTRING("k1x","\x52","\x5c","\x51","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,k1y),HX_HCSTRING("k1y","\x53","\x5c","\x51","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,k2x),HX_HCSTRING("k2x","\x31","\x5d","\x51","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,k2y),HX_HCSTRING("k2y","\x32","\x5d","\x51","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,surfacex),HX_HCSTRING("surfacex","\xab","\x01","\xf0","\x42")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,surfacey),HX_HCSTRING("surfacey","\xac","\x01","\xf0","\x42")},
	{hx::fsInt,(int)offsetof(ZPP_ColArbiter_obj,ptype),HX_HCSTRING("ptype","\x2a","\xeb","\xe9","\xc9")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,lnormx),HX_HCSTRING("lnormx","\xd0","\x56","\x54","\xce")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,lnormy),HX_HCSTRING("lnormy","\xd1","\x56","\x54","\xce")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,lproj),HX_HCSTRING("lproj","\x09","\x6e","\xa5","\x79")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,radius),HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,rev),HX_HCSTRING("rev","\x63","\xd9","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,biasCoef),HX_HCSTRING("biasCoef","\x26","\xf9","\xed","\x1f")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(ZPP_ColArbiter_obj,__ref_edge1),HX_HCSTRING("__ref_edge1","\x08","\x17","\xe9","\xa5")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(ZPP_ColArbiter_obj,__ref_edge2),HX_HCSTRING("__ref_edge2","\x09","\x17","\xe9","\xa5")},
	{hx::fsInt,(int)offsetof(ZPP_ColArbiter_obj,__ref_vertex),HX_HCSTRING("__ref_vertex","\x30","\xaf","\xd3","\xec")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_ColArbiter_obj,c1),HX_HCSTRING("c1","\x6e","\x56","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(ZPP_ColArbiter_obj,oc1),HX_HCSTRING("oc1","\x9d","\x90","\x54","\x00")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_ColArbiter_obj,c2),HX_HCSTRING("c2","\x6f","\x56","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(ZPP_ColArbiter_obj,oc2),HX_HCSTRING("oc2","\x9e","\x90","\x54","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,hc2),HX_HCSTRING("hc2","\xd7","\x40","\x4f","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,hpc2),HX_HCSTRING("hpc2","\x77","\x83","\x13","\x45")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_ColArbiter*/ ,(int)offsetof(ZPP_ColArbiter_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,stat),HX_HCSTRING("stat","\xd4","\xe3","\x5b","\x4c")},
	{hx::fsBool,(int)offsetof(ZPP_ColArbiter_obj,_mutable),HX_HCSTRING("mutable","\xa6","\x7f","\x48","\x87")},
	{hx::fsFloat,(int)offsetof(ZPP_ColArbiter_obj,pre_dt),HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ZPP_ColArbiter_obj::FACE1,HX_HCSTRING("FACE1","\xf4","\x8c","\x36","\x79")},
	{hx::fsInt,(void *) &ZPP_ColArbiter_obj::FACE2,HX_HCSTRING("FACE2","\xf5","\x8c","\x36","\x79")},
	{hx::fsInt,(void *) &ZPP_ColArbiter_obj::CIRCLE,HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_ColArbiter*/ ,(void *) &ZPP_ColArbiter_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("dyn_fric","\x2c","\x22","\x6f","\xf1"),
	HX_HCSTRING("stat_fric","\xb1","\x77","\x29","\xc7"),
	HX_HCSTRING("restitution","\x6a","\x2c","\x4d","\x08"),
	HX_HCSTRING("rfric","\x98","\xc1","\x70","\xe7"),
	HX_HCSTRING("userdef_dyn_fric","\xf1","\x55","\x5d","\x31"),
	HX_HCSTRING("userdef_stat_fric","\x4c","\x90","\xa8","\x77"),
	HX_HCSTRING("userdef_restitution","\xc5","\xe1","\x37","\x29"),
	HX_HCSTRING("userdef_rfric","\xb3","\xb0","\xfa","\x4e"),
	HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"),
	HX_HCSTRING("s2","\x5f","\x64","\x00","\x00"),
	HX_HCSTRING("contacts","\xd3","\xd1","\x76","\x2c"),
	HX_HCSTRING("wrap_contacts","\x28","\x06","\xa1","\x1c"),
	HX_HCSTRING("innards","\x29","\xc0","\x17","\xa0"),
	HX_HCSTRING("nx","\x4a","\x60","\x00","\x00"),
	HX_HCSTRING("ny","\x4b","\x60","\x00","\x00"),
	HX_HCSTRING("normal_validate","\xee","\x58","\xaa","\xbb"),
	HX_HCSTRING("wrap_normal","\x3c","\x77","\xf8","\x1a"),
	HX_HCSTRING("getnormal","\x3d","\x87","\x2b","\x78"),
	HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e"),
	HX_HCSTRING("Ka","\xb6","\x41","\x00","\x00"),
	HX_HCSTRING("Kb","\xb7","\x41","\x00","\x00"),
	HX_HCSTRING("Kc","\xb8","\x41","\x00","\x00"),
	HX_HCSTRING("rMass","\x86","\x8e","\xdd","\xd6"),
	HX_HCSTRING("jrAcc","\x59","\x79","\x05","\x54"),
	HX_HCSTRING("rn1a","\xcc","\xf5","\xad","\x4b"),
	HX_HCSTRING("rt1a","\x52","\x83","\xb2","\x4b"),
	HX_HCSTRING("rn1b","\xcd","\xf5","\xad","\x4b"),
	HX_HCSTRING("rt1b","\x53","\x83","\xb2","\x4b"),
	HX_HCSTRING("rn2a","\xab","\xf6","\xad","\x4b"),
	HX_HCSTRING("rt2a","\x31","\x84","\xb2","\x4b"),
	HX_HCSTRING("rn2b","\xac","\xf6","\xad","\x4b"),
	HX_HCSTRING("rt2b","\x32","\x84","\xb2","\x4b"),
	HX_HCSTRING("k1x","\x52","\x5c","\x51","\x00"),
	HX_HCSTRING("k1y","\x53","\x5c","\x51","\x00"),
	HX_HCSTRING("k2x","\x31","\x5d","\x51","\x00"),
	HX_HCSTRING("k2y","\x32","\x5d","\x51","\x00"),
	HX_HCSTRING("surfacex","\xab","\x01","\xf0","\x42"),
	HX_HCSTRING("surfacey","\xac","\x01","\xf0","\x42"),
	HX_HCSTRING("ptype","\x2a","\xeb","\xe9","\xc9"),
	HX_HCSTRING("lnormx","\xd0","\x56","\x54","\xce"),
	HX_HCSTRING("lnormy","\xd1","\x56","\x54","\xce"),
	HX_HCSTRING("lproj","\x09","\x6e","\xa5","\x79"),
	HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"),
	HX_HCSTRING("rev","\x63","\xd9","\x56","\x00"),
	HX_HCSTRING("biasCoef","\x26","\xf9","\xed","\x1f"),
	HX_HCSTRING("__ref_edge1","\x08","\x17","\xe9","\xa5"),
	HX_HCSTRING("__ref_edge2","\x09","\x17","\xe9","\xa5"),
	HX_HCSTRING("__ref_vertex","\x30","\xaf","\xd3","\xec"),
	HX_HCSTRING("c1","\x6e","\x56","\x00","\x00"),
	HX_HCSTRING("oc1","\x9d","\x90","\x54","\x00"),
	HX_HCSTRING("c2","\x6f","\x56","\x00","\x00"),
	HX_HCSTRING("oc2","\x9e","\x90","\x54","\x00"),
	HX_HCSTRING("hc2","\xd7","\x40","\x4f","\x00"),
	HX_HCSTRING("hpc2","\x77","\x83","\x13","\x45"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("stat","\xd4","\xe3","\x5b","\x4c"),
	HX_HCSTRING("injectContact","\x0f","\x3c","\xab","\x7a"),
	HX_HCSTRING("assign","\x2f","\x46","\x06","\x4c"),
	HX_HCSTRING("calcProperties","\xe8","\x84","\x7c","\xa1"),
	HX_HCSTRING("validate_props","\xc7","\x93","\xaa","\xe3"),
	HX_HCSTRING("retire","\x9b","\x89","\x24","\x09"),
	HX_HCSTRING("mutable","\xa6","\x7f","\x48","\x87"),
	HX_HCSTRING("makemutable","\x78","\x7f","\x01","\xfe"),
	HX_HCSTRING("makeimmutable","\x94","\x40","\x9d","\xbd"),
	HX_HCSTRING("contacts_adder","\x22","\x8e","\x45","\x4d"),
	HX_HCSTRING("contacts_subber","\xfb","\x6b","\x7e","\x4a"),
	HX_HCSTRING("setupcontacts","\x50","\xc5","\xe4","\x02"),
	HX_HCSTRING("cleanupContacts","\x17","\x5e","\x49","\xbe"),
	HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae"),
	HX_HCSTRING("preStep","\x0f","\xc1","\xc0","\x24"),
	HX_HCSTRING("warmStart","\xdd","\x27","\x03","\xeb"),
	HX_HCSTRING("applyImpulseVel","\xb6","\xc7","\x50","\x1f"),
	HX_HCSTRING("applyImpulsePos","\xed","\x42","\x4c","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::FACE1,"FACE1");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::FACE2,"FACE2");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::CIRCLE,"CIRCLE");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::FACE1,"FACE1");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::FACE2,"FACE2");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::CIRCLE,"CIRCLE");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_ColArbiter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FACE1","\xf4","\x8c","\x36","\x79"),
	HX_HCSTRING("FACE2","\xf5","\x8c","\x36","\x79"),
	HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_ColArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.dynamics.ZPP_ColArbiter","\x67","\x9b","\xeb","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_ColArbiter_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_ColArbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ColArbiter_obj >;
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

void ZPP_ColArbiter_obj::__boot()
{
	FACE1= (int)0;
	FACE2= (int)1;
	CIRCLE= (int)2;
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
