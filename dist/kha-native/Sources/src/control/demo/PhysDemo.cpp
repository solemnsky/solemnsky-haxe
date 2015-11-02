#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_control_DrawPrim
#include <control/DrawPrim.h>
#endif
#ifndef INCLUDED_control_Event
#include <control/Event.h>
#endif
#ifndef INCLUDED_control_Key
#include <control/Key.h>
#endif
#ifndef INCLUDED_control_Network
#include <control/Network.h>
#endif
#ifndef INCLUDED_control_Scene
#include <control/Scene.h>
#endif
#ifndef INCLUDED_control_TextAlign
#include <control/TextAlign.h>
#endif
#ifndef INCLUDED_control_demo_DemoSelect
#include <control/demo/DemoSelect.h>
#endif
#ifndef INCLUDED_control_demo_Direction
#include <control/demo/Direction.h>
#endif
#ifndef INCLUDED_control_demo_FloatingBox
#include <control/demo/FloatingBox.h>
#endif
#ifndef INCLUDED_control_demo_PhysDemo
#include <control/demo/PhysDemo.h>
#endif
#ifndef INCLUDED_control_demo_Projectile
#include <control/demo/Projectile.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
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
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_util_Transform
#include <util/Transform.h>
#endif
#ifndef INCLUDED_util_Util
#include <util/Util.h>
#endif
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace control{
namespace demo{

Void PhysDemo_obj::__construct()
{
HX_STACK_FRAME("control.demo.PhysDemo","new",0x09599881,"control.demo.PhysDemo.new","control/demo/PhysDemo.hx",110,0xb139f1af)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(122)
	this->exit = false;
	HX_STACK_LINE(140)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		if ((tmp2)){
			HX_STACK_LINE(140)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(140)
			tmp3 = true;
		}
		HX_STACK_LINE(140)
		if ((tmp3)){
			HX_STACK_LINE(140)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(140)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			if ((tmp5)){
				HX_STACK_LINE(140)
				::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				ret = tmp6;
			}
			else{
				HX_STACK_LINE(140)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				ret = tmp6;
				HX_STACK_LINE(140)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(140)
				ret->zpp_pool = null();
				HX_STACK_LINE(140)
				ret->zpp_disp = false;
				HX_STACK_LINE(140)
				::nape::geom::Vec2 tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(140)
				::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(140)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(140)
				if ((tmp9)){
					HX_STACK_LINE(140)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
		}
		HX_STACK_LINE(140)
		bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		if ((tmp4)){
			HX_STACK_LINE(140)
			::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(140)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(140)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					if ((tmp7)){
						HX_STACK_LINE(140)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(140)
						ret1 = tmp8;
					}
					else{
						HX_STACK_LINE(140)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(140)
						ret1 = tmp8;
						HX_STACK_LINE(140)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(140)
						ret1->next = null();
					}
					HX_STACK_LINE(140)
					ret1->weak = false;
				}
				HX_STACK_LINE(140)
				ret1->_immutable = immutable;
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					ret1->x = (int)0;
					HX_STACK_LINE(140)
					ret1->y = (int)600;
					HX_STACK_LINE(140)
					{
					}
				}
				HX_STACK_LINE(140)
				tmp5 = ret1;
			}
			HX_STACK_LINE(140)
			ret->zpp_inner = tmp5;
			HX_STACK_LINE(140)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				bool tmp5 = (ret != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				if ((tmp5)){
					HX_STACK_LINE(140)
					tmp6 = ret->zpp_disp;
				}
				else{
					HX_STACK_LINE(140)
					tmp6 = false;
				}
				HX_STACK_LINE(140)
				if ((tmp6)){
					HX_STACK_LINE(140)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(140)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(140)
				bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				if ((tmp5)){
					HX_STACK_LINE(140)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(140)
				bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				if ((tmp6)){
					HX_STACK_LINE(140)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(140)
			bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			if ((tmp6)){
				HX_STACK_LINE(140)
				tmp7 = false;
			}
			else{
				HX_STACK_LINE(140)
				tmp7 = true;
			}
			HX_STACK_LINE(140)
			if ((tmp7)){
				HX_STACK_LINE(140)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(140)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(140)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(140)
					if ((tmp9)){
						HX_STACK_LINE(140)
						tmp10 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(140)
						tmp10 = false;
					}
					HX_STACK_LINE(140)
					if ((tmp10)){
						HX_STACK_LINE(140)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(140)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(140)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(140)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(140)
					if ((tmp9)){
						HX_STACK_LINE(140)
						_this->_validate();
					}
				}
				HX_STACK_LINE(140)
				tmp8 = ret->zpp_inner->x;
			}
			HX_STACK_LINE(140)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			if ((tmp9)){
				HX_STACK_LINE(140)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(140)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(140)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(140)
						bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(140)
						if ((tmp15)){
							HX_STACK_LINE(140)
							tmp14 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(140)
							tmp14 = false;
						}
						HX_STACK_LINE(140)
						bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(140)
						if ((tmp16)){
							HX_STACK_LINE(140)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(140)
							::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(140)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(140)
							::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(140)
							::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(140)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(140)
						bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(140)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(140)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(140)
						if ((tmp14)){
							HX_STACK_LINE(140)
							_this->_validate();
						}
					}
					HX_STACK_LINE(140)
					Float tmp12 = ret->zpp_inner->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(140)
					tmp11 = tmp12;
				}
				HX_STACK_LINE(140)
				tmp10 = (tmp11 == (int)600);
			}
			else{
				HX_STACK_LINE(140)
				tmp10 = false;
			}
			HX_STACK_LINE(140)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(140)
			if ((tmp11)){
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					ret->zpp_inner->x = (int)0;
					HX_STACK_LINE(140)
					ret->zpp_inner->y = (int)600;
					HX_STACK_LINE(140)
					{
					}
				}
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(140)
					bool tmp12 = (_this->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(140)
					if ((tmp12)){
						HX_STACK_LINE(140)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(140)
						_this->_invalidate(tmp13);
					}
				}
			}
			HX_STACK_LINE(140)
			ret;
		}
		HX_STACK_LINE(140)
		ret->zpp_inner->weak = true;
		HX_STACK_LINE(140)
		tmp = ret;
	}
	HX_STACK_LINE(140)
	::nape::geom::Vec2 gravity = tmp;		HX_STACK_VAR(gravity,"gravity");
	HX_STACK_LINE(141)
	::nape::space::Space tmp1 = ::nape::space::Space_obj::__new(gravity,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	this->space = tmp1;
	HX_STACK_LINE(143)
	int w = (int)1600;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(144)
	int h = (int)900;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(146)
	::nape::phys::BodyType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		::nape::phys::BodyType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		if ((tmp4)){
			HX_STACK_LINE(146)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(146)
			::nape::phys::BodyType tmp5 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp5;
			HX_STACK_LINE(146)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(146)
		tmp2 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
	}
	HX_STACK_LINE(146)
	::nape::phys::Body tmp3 = ::nape::phys::Body_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(146)
	::nape::phys::Body floor = tmp3;		HX_STACK_VAR(floor,"floor");
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		::nape::shape::ShapeList tmp4 = floor->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		::nape::shape::ShapeList _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(148)
		int tmp5 = (h - (int)50);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		int tmp6 = (w - (int)50);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		Array< ::Dynamic > tmp7 = ::nape::shape::Polygon_obj::rect((int)50,tmp5,tmp6,(int)1,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		::nape::shape::Polygon tmp8 = ::nape::shape::Polygon_obj::__new(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(148)
		::nape::shape::Shape obj = tmp8;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(147)
		bool tmp9 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		if ((tmp9)){
			HX_STACK_LINE(147)
			::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(147)
			_this->push(tmp10);
		}
		else{
			HX_STACK_LINE(147)
			::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(147)
			_this->unshift(tmp10);
		}
	}
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::nape::space::Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		::nape::space::Space space = tmp4;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::zpp_nape::phys::ZPP_Compound tmp5 = floor->zpp_inner->compound;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			if ((tmp6)){
				HX_STACK_LINE(149)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
			}
			HX_STACK_LINE(149)
			floor->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
			HX_STACK_LINE(149)
			bool tmp7 = floor->zpp_inner->world;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			if ((tmp7)){
				HX_STACK_LINE(149)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(149)
			::zpp_nape::space::ZPP_Space tmp8 = floor->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			::nape::space::Space tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(149)
			if ((tmp9)){
				HX_STACK_LINE(149)
				tmp10 = null();
			}
			else{
				HX_STACK_LINE(149)
				::zpp_nape::space::ZPP_Space tmp11 = floor->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(149)
				tmp10 = tmp11->outer;
			}
			HX_STACK_LINE(149)
			::nape::space::Space tmp11 = space;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(149)
			bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(149)
			if ((tmp12)){
				HX_STACK_LINE(149)
				::zpp_nape::space::ZPP_Space tmp13 = floor->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(149)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(149)
				::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(149)
				if ((tmp14)){
					HX_STACK_LINE(149)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(149)
					::zpp_nape::space::ZPP_Space tmp16 = floor->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(149)
					tmp15 = tmp16->outer;
				}
				HX_STACK_LINE(149)
				bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(149)
				if ((tmp16)){
					HX_STACK_LINE(149)
					::zpp_nape::space::ZPP_Component tmp17 = floor->zpp_inner->component;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(149)
					tmp17->woken = false;
				}
				HX_STACK_LINE(149)
				::zpp_nape::space::ZPP_Space tmp17 = floor->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(149)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(149)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(149)
				if ((tmp18)){
					HX_STACK_LINE(149)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(149)
					::zpp_nape::space::ZPP_Space tmp20 = floor->zpp_inner->space;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(149)
					tmp19 = tmp20->outer;
				}
				HX_STACK_LINE(149)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(149)
				if ((tmp20)){
					HX_STACK_LINE(149)
					::zpp_nape::space::ZPP_Space tmp21 = floor->zpp_inner->space;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(149)
					bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(149)
					::nape::space::Space tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(149)
					if ((tmp22)){
						HX_STACK_LINE(149)
						tmp23 = null();
					}
					else{
						HX_STACK_LINE(149)
						::zpp_nape::space::ZPP_Space tmp24 = floor->zpp_inner->space;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(149)
						tmp23 = tmp24->outer;
					}
					HX_STACK_LINE(149)
					::nape::phys::BodyList tmp24 = tmp23->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(149)
					::nape::phys::Body tmp25 = floor;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(149)
					tmp24->remove(tmp25);
				}
				HX_STACK_LINE(149)
				bool tmp21 = (space != null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(149)
				if ((tmp21)){
					HX_STACK_LINE(149)
					::nape::phys::BodyList tmp22 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(149)
					::nape::phys::BodyList _this = tmp22;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(149)
					bool tmp23 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(149)
					if ((tmp23)){
						HX_STACK_LINE(149)
						::nape::phys::Body tmp24 = floor;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(149)
						_this->push(tmp24);
					}
					else{
						HX_STACK_LINE(149)
						::nape::phys::Body tmp24 = floor;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(149)
						_this->unshift(tmp24);
					}
				}
			}
		}
		HX_STACK_LINE(149)
		::zpp_nape::space::ZPP_Space tmp5 = floor->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		if ((tmp6)){
			HX_STACK_LINE(149)
			Dynamic();
		}
		else{
			HX_STACK_LINE(149)
			::zpp_nape::space::ZPP_Space tmp7 = floor->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			tmp7->outer;
		}
	}
	HX_STACK_LINE(156)
	::haxe::ds::EnumValueMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::haxe::ds::EnumValueMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::haxe::ds::EnumValueMap tmp6 = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			tmp5 = tmp6;
		}
		HX_STACK_LINE(156)
		::haxe::ds::EnumValueMap _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		_g->set(::control::demo::Direction_obj::UpDir,(int)0);
		HX_STACK_LINE(156)
		_g->set(::control::demo::Direction_obj::DownDir,(int)0);
		HX_STACK_LINE(156)
		_g->set(::control::demo::Direction_obj::LeftDir,(int)0);
		HX_STACK_LINE(156)
		_g->set(::control::demo::Direction_obj::RightDir,(int)0);
		HX_STACK_LINE(156)
		tmp4 = _g;
	}
	HX_STACK_LINE(156)
	this->cooldown = tmp4;
	HX_STACK_LINE(159)
	::haxe::ds::EnumValueMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(159)
	{
		HX_STACK_LINE(159)
		::haxe::ds::EnumValueMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			::haxe::ds::EnumValueMap tmp7 = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			tmp6 = tmp7;
		}
		HX_STACK_LINE(159)
		::haxe::ds::EnumValueMap _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(159)
		_g1->set(::control::demo::Direction_obj::UpDir,false);
		HX_STACK_LINE(159)
		_g1->set(::control::demo::Direction_obj::DownDir,false);
		HX_STACK_LINE(159)
		_g1->set(::control::demo::Direction_obj::LeftDir,false);
		HX_STACK_LINE(159)
		_g1->set(::control::demo::Direction_obj::RightDir,false);
		HX_STACK_LINE(159)
		tmp5 = _g1;
	}
	HX_STACK_LINE(159)
	this->movement = tmp5;
	HX_STACK_LINE(165)
	Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(165)
	this->projectiles = tmp6;
	HX_STACK_LINE(167)
	Array< ::Dynamic > tmp7 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(167)
	this->boxes = tmp7;
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp8 = (_g2 < (int)16);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			if ((tmp9)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			int tmp10 = (_g2)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(168)
			int i = tmp10;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(169)
			::nape::space::Space tmp11 = this->space;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(169)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(169)
			::control::demo::FloatingBox box = ::control::demo::FloatingBox_obj::__new(tmp11,tmp12);		HX_STACK_VAR(box,"box");
			HX_STACK_LINE(170)
			Array< ::Dynamic > tmp13 = this->boxes;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(170)
			::control::demo::FloatingBox tmp14 = box;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(170)
			tmp13->push(tmp14);
		}
	}
	HX_STACK_LINE(175)
	::nape::phys::BodyType tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		::nape::phys::BodyType tmp9 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		if ((tmp10)){
			HX_STACK_LINE(175)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(175)
			::nape::phys::BodyType tmp11 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(175)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp11;
			HX_STACK_LINE(175)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(175)
		tmp8 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
	}
	HX_STACK_LINE(175)
	::nape::phys::Body tmp9 = ::nape::phys::Body_obj::__new(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(175)
	this->ball = tmp9;
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		::nape::phys::Body tmp10 = this->ball;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(176)
		::nape::shape::ShapeList tmp11 = tmp10->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(176)
		::nape::shape::ShapeList _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(176)
		::nape::shape::Shape obj = ::nape::shape::Circle_obj::__new((int)40,null(),null(),null());		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(176)
		bool tmp12 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(176)
		if ((tmp12)){
			HX_STACK_LINE(176)
			::nape::shape::Shape tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			_this->push(tmp13);
		}
		else{
			HX_STACK_LINE(176)
			::nape::shape::Shape tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			_this->unshift(tmp13);
		}
	}
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::nape::phys::Body tmp11 = this->ball;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(177)
			::nape::geom::Vec2 tmp12 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			if ((tmp13)){
				HX_STACK_LINE(177)
				_this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(177)
			tmp10 = _this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(177)
		::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(177)
		Float tmp11 = (Float(h) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(177)
		Float y = tmp11;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			if ((tmp12)){
				HX_STACK_LINE(177)
				tmp13 = _this->zpp_disp;
			}
			else{
				HX_STACK_LINE(177)
				tmp13 = false;
			}
			HX_STACK_LINE(177)
			if ((tmp13)){
				HX_STACK_LINE(177)
				::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(177)
				::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(177)
				HX_STACK_DO_THROW(tmp15);
			}
		}
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(177)
			bool tmp12 = _this1->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			if ((tmp12)){
				HX_STACK_LINE(177)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(177)
			bool tmp13 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			if ((tmp13)){
				HX_STACK_LINE(177)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(177)
		bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(177)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(177)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(177)
		if ((tmp13)){
			HX_STACK_LINE(177)
			tmp14 = (y != y);
		}
		else{
			HX_STACK_LINE(177)
			tmp14 = true;
		}
		HX_STACK_LINE(177)
		if ((tmp14)){
			HX_STACK_LINE(177)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(177)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				bool tmp16 = (_this != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(177)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(177)
				if ((tmp16)){
					HX_STACK_LINE(177)
					tmp17 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(177)
					tmp17 = false;
				}
				HX_STACK_LINE(177)
				if ((tmp17)){
					HX_STACK_LINE(177)
					::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(177)
					::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(177)
					HX_STACK_DO_THROW(tmp19);
				}
			}
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(177)
				bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(177)
				if ((tmp16)){
					HX_STACK_LINE(177)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(177)
			tmp15 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(177)
		bool tmp16 = (tmp15 == (int)50);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(177)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(177)
		if ((tmp16)){
			HX_STACK_LINE(177)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				{
					HX_STACK_LINE(177)
					bool tmp19 = (_this != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(177)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(177)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(177)
					bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(177)
					if ((tmp22)){
						HX_STACK_LINE(177)
						tmp21 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(177)
						tmp21 = false;
					}
					HX_STACK_LINE(177)
					bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(177)
					if ((tmp23)){
						HX_STACK_LINE(177)
						::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(177)
						::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(177)
						::String tmp26 = (tmp25 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(177)
						::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(177)
						::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(177)
						HX_STACK_DO_THROW(tmp28);
					}
				}
				HX_STACK_LINE(177)
				{
					HX_STACK_LINE(177)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(177)
					bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(177)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(177)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(177)
					if ((tmp21)){
						HX_STACK_LINE(177)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(177)
				Float tmp19 = _this->zpp_inner->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(177)
				tmp18 = tmp19;
			}
			HX_STACK_LINE(177)
			Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(177)
			tmp17 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(177)
			tmp17 = false;
		}
		HX_STACK_LINE(177)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(177)
		if ((tmp18)){
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				_this->zpp_inner->x = (int)50;
				HX_STACK_LINE(177)
				_this->zpp_inner->y = y;
				HX_STACK_LINE(177)
				{
				}
			}
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(177)
				bool tmp19 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(177)
				if ((tmp19)){
					HX_STACK_LINE(177)
					::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(177)
					_this1->_invalidate(tmp20);
				}
			}
		}
		HX_STACK_LINE(177)
		_this;
	}
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		::nape::phys::Body tmp10 = this->ball;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(178)
		::nape::phys::Body _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			bool tmp11 = _this->zpp_inner->world;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(178)
			if ((tmp11)){
				HX_STACK_LINE(178)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(178)
			Float tmp12 = _this->zpp_inner->angvel;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			bool tmp13 = (tmp12 != (int)10);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(178)
			if ((tmp13)){
				HX_STACK_LINE(178)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(178)
				if ((tmp14)){
					HX_STACK_LINE(178)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::angularVel cannot be NaN","\xc6","\x69","\x71","\x8d"));
				}
				HX_STACK_LINE(178)
				int tmp15 = _this->zpp_inner->type;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(178)
				int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(178)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(178)
				if ((tmp17)){
					HX_STACK_LINE(178)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: A static object cannot be given a velocity","\x3b","\xe0","\xbd","\x35"));
				}
				HX_STACK_LINE(178)
				_this->zpp_inner->angvel = (int)10;
				HX_STACK_LINE(178)
				_this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(178)
		_this->zpp_inner->angvel;
	}
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		::nape::phys::Body tmp10 = this->ball;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		::nape::phys::Body _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(179)
		::nape::space::Space tmp11 = this->space;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(179)
		::nape::space::Space space = tmp11;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::zpp_nape::phys::ZPP_Compound tmp12 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(179)
			bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(179)
			if ((tmp13)){
				HX_STACK_LINE(179)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
			}
			HX_STACK_LINE(179)
			_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
			HX_STACK_LINE(179)
			bool tmp14 = _this->zpp_inner->world;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(179)
			if ((tmp14)){
				HX_STACK_LINE(179)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(179)
			::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(179)
			bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(179)
			::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(179)
			if ((tmp16)){
				HX_STACK_LINE(179)
				tmp17 = null();
			}
			else{
				HX_STACK_LINE(179)
				::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(179)
				tmp17 = tmp18->outer;
			}
			HX_STACK_LINE(179)
			::nape::space::Space tmp18 = space;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(179)
			bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(179)
			if ((tmp19)){
				HX_STACK_LINE(179)
				::zpp_nape::space::ZPP_Space tmp20 = _this->zpp_inner->space;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(179)
				::nape::space::Space tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(179)
				if ((tmp21)){
					HX_STACK_LINE(179)
					tmp22 = null();
				}
				else{
					HX_STACK_LINE(179)
					::zpp_nape::space::ZPP_Space tmp23 = _this->zpp_inner->space;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					tmp22 = tmp23->outer;
				}
				HX_STACK_LINE(179)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(179)
				if ((tmp23)){
					HX_STACK_LINE(179)
					::zpp_nape::space::ZPP_Component tmp24 = _this->zpp_inner->component;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(179)
					tmp24->woken = false;
				}
				HX_STACK_LINE(179)
				::zpp_nape::space::ZPP_Space tmp24 = _this->zpp_inner->space;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(179)
				bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(179)
				::nape::space::Space tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(179)
				if ((tmp25)){
					HX_STACK_LINE(179)
					tmp26 = null();
				}
				else{
					HX_STACK_LINE(179)
					::zpp_nape::space::ZPP_Space tmp27 = _this->zpp_inner->space;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(179)
					tmp26 = tmp27->outer;
				}
				HX_STACK_LINE(179)
				bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(179)
				if ((tmp27)){
					HX_STACK_LINE(179)
					::zpp_nape::space::ZPP_Space tmp28 = _this->zpp_inner->space;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(179)
					bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(179)
					::nape::space::Space tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(179)
					if ((tmp29)){
						HX_STACK_LINE(179)
						tmp30 = null();
					}
					else{
						HX_STACK_LINE(179)
						::zpp_nape::space::ZPP_Space tmp31 = _this->zpp_inner->space;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(179)
						tmp30 = tmp31->outer;
					}
					HX_STACK_LINE(179)
					::nape::phys::BodyList tmp31 = tmp30->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(179)
					::nape::phys::Body tmp32 = _this;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(179)
					tmp31->remove(tmp32);
				}
				HX_STACK_LINE(179)
				bool tmp28 = (space != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(179)
				if ((tmp28)){
					HX_STACK_LINE(179)
					::nape::phys::BodyList tmp29 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(179)
					::nape::phys::BodyList _this1 = tmp29;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(179)
					bool tmp30 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(179)
					if ((tmp30)){
						HX_STACK_LINE(179)
						::nape::phys::Body tmp31 = _this;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(179)
						_this1->push(tmp31);
					}
					else{
						HX_STACK_LINE(179)
						::nape::phys::Body tmp31 = _this;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(179)
						_this1->unshift(tmp31);
					}
				}
			}
		}
		HX_STACK_LINE(179)
		::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(179)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(179)
		if ((tmp13)){
			HX_STACK_LINE(179)
			Dynamic();
		}
		else{
			HX_STACK_LINE(179)
			::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(179)
			tmp14->outer;
		}
	}
}
;
	return null();
}

//PhysDemo_obj::~PhysDemo_obj() { }

Dynamic PhysDemo_obj::__CreateEmpty() { return  new PhysDemo_obj; }
hx::ObjectPtr< PhysDemo_obj > PhysDemo_obj::__new()
{  hx::ObjectPtr< PhysDemo_obj > _result_ = new PhysDemo_obj();
	_result_->__construct();
	return _result_;}

Dynamic PhysDemo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysDemo_obj > _result_ = new PhysDemo_obj();
	_result_->__construct();
	return _result_;}

hx::Object *PhysDemo_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::control::Control_obj)) return operator ::control::Control_obj *();
	return super::__ToInterface(inType);
}

PhysDemo_obj::operator ::control::Control_obj *()
	{ return new ::control::Control_delegate_< PhysDemo_obj >(this); }
Void PhysDemo_obj::init( ::control::Network _){
{
		HX_STACK_FRAME("control.demo.PhysDemo","init",0x21c48fcf,"control.demo.PhysDemo.init","control/demo/PhysDemo.hx",133,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysDemo_obj,init,(void))

::util::Vector PhysDemo_obj::vecFromDir( ::control::demo::Direction m){
	HX_STACK_FRAME("control.demo.PhysDemo","vecFromDir",0x399ff40e,"control.demo.PhysDemo.vecFromDir","control/demo/PhysDemo.hx",187,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(187)
	switch( (int)(m->__Index())){
		case (int)0: {
			HX_STACK_LINE(188)
			::util::Vector tmp = ::util::Vector_obj::__new((int)0,(int)-1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(188)
			return tmp;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(189)
			::util::Vector tmp = ::util::Vector_obj::__new((int)-1,(int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(189)
			return tmp;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(190)
			::util::Vector tmp = ::util::Vector_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(190)
			return tmp;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(191)
			::util::Vector tmp = ::util::Vector_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(191)
			return tmp;
		}
		;break;
	}
	HX_STACK_LINE(187)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysDemo_obj,vecFromDir,return )

::control::demo::Direction PhysDemo_obj::dirFromKey( ::control::Key key){
	HX_STACK_FRAME("control.demo.PhysDemo","dirFromKey",0x5a232687,"control.demo.PhysDemo.dirFromKey","control/demo/PhysDemo.hx",196,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(196)
	switch( (int)(key->__Index())){
		case (int)0: {
			HX_STACK_LINE(196)
			::String tmp = (::control::Key(key))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(196)
			::String _char = tmp;		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(198)
				bool tmp1 = (_char == HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(198)
				if ((tmp1)){
					HX_STACK_LINE(198)
					return ::control::demo::Direction_obj::UpDir;
				}
				HX_STACK_LINE(199)
				bool tmp2 = (_char == HX_HCSTRING("j","\x6a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(199)
				if ((tmp2)){
					HX_STACK_LINE(199)
					return ::control::demo::Direction_obj::LeftDir;
				}
				HX_STACK_LINE(200)
				bool tmp3 = (_char == HX_HCSTRING("l","\x6c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				if ((tmp3)){
					HX_STACK_LINE(200)
					return ::control::demo::Direction_obj::RightDir;
				}
				HX_STACK_LINE(201)
				bool tmp4 = (_char == HX_HCSTRING("k","\x6b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(201)
				if ((tmp4)){
					HX_STACK_LINE(201)
					return ::control::demo::Direction_obj::DownDir;
				}
				HX_STACK_LINE(202)
				return null();
			}
		}
		;break;
		default: {
			HX_STACK_LINE(204)
			return null();
		}
	}
	HX_STACK_LINE(196)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysDemo_obj,dirFromKey,return )

Void PhysDemo_obj::tick( Float delta){
{
		HX_STACK_FRAME("control.demo.PhysDemo","tick",0x2906181c,"control.demo.PhysDemo.tick","control/demo/PhysDemo.hx",208,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(209)
		::nape::space::Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		Float tmp1 = (Float(delta) / Float((int)1000));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		tmp->step(tmp1,null(),null());
		HX_STACK_LINE(211)
		::haxe::ds::EnumValueMap tmp2 = this->movement;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		for(::cpp::FastIterator_obj< ::control::demo::Direction > *__it = ::cpp::CreateFastIterator< ::control::demo::Direction >(tmp3);  __it->hasNext(); ){
			::control::demo::Direction d = __it->next();
			{
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					::haxe::ds::EnumValueMap tmp4 = this->cooldown;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(212)
					::control::demo::Direction tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(212)
					Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(212)
					Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(212)
					Float tmp8 = delta;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(212)
					Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(212)
					Float value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(212)
					::haxe::ds::EnumValueMap tmp10 = this->cooldown;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(212)
					::control::demo::Direction tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(212)
					Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(212)
					tmp10->set(tmp11,tmp12);
				}
				HX_STACK_LINE(214)
				::haxe::ds::EnumValueMap tmp4 = this->movement;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(214)
				::control::demo::Direction tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(214)
				if ((tmp7)){
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						::nape::phys::Body tmp8 = this->ball;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(215)
						::nape::phys::Body _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(216)
						::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(216)
						{
							HX_STACK_LINE(216)
							::nape::phys::Body tmp10 = this->ball;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(216)
							::nape::phys::Body _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(216)
							::nape::geom::Vec2 tmp11 = _this1->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(216)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(216)
							if ((tmp12)){
								HX_STACK_LINE(216)
								_this1->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(216)
							tmp9 = _this1->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(217)
						::util::Vector tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							::control::demo::Direction tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(217)
							::util::Vector tmp12 = this->vecFromDir(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(217)
							::util::Vector _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(217)
							Float tmp13 = (_this1->x * delta);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(217)
							Float tmp14 = (_this1->y * delta);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(217)
							tmp10 = ::util::Vector_obj::__new(tmp13,tmp14);
						}
						HX_STACK_LINE(216)
						::nape::geom::Vec2 tmp11 = ::util::Util_obj::napeFromVector(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(216)
						::nape::geom::Vec2 tmp12 = tmp9->add(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(216)
						::nape::geom::Vec2 velocity = tmp12;		HX_STACK_VAR(velocity,"velocity");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								bool tmp13 = (velocity != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(215)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(215)
								if ((tmp13)){
									HX_STACK_LINE(215)
									tmp14 = velocity->zpp_disp;
								}
								else{
									HX_STACK_LINE(215)
									tmp14 = false;
								}
								HX_STACK_LINE(215)
								if ((tmp14)){
									HX_STACK_LINE(215)
									::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(215)
									::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(215)
									HX_STACK_DO_THROW(tmp16);
								}
							}
							HX_STACK_LINE(215)
							bool tmp13 = (velocity == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(215)
							if ((tmp13)){
								HX_STACK_LINE(215)
								::String tmp14 = HX_HCSTRING("Error: Body::velocity","\xed","\xb6","\xb8","\xc7");		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(215)
								::String tmp15 = (tmp14 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(215)
								HX_STACK_DO_THROW(tmp15);
							}
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									::nape::geom::Vec2 tmp15 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(215)
									bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(215)
									if ((tmp16)){
										HX_STACK_LINE(215)
										_this->zpp_inner->setupVelocity();
									}
									HX_STACK_LINE(215)
									tmp14 = _this->zpp_inner->wrap_vel;
								}
								HX_STACK_LINE(215)
								::nape::geom::Vec2 _this1 = tmp14;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									bool tmp15 = (_this1 != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(215)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(215)
									if ((tmp15)){
										HX_STACK_LINE(215)
										tmp16 = _this1->zpp_disp;
									}
									else{
										HX_STACK_LINE(215)
										tmp16 = false;
									}
									HX_STACK_LINE(215)
									if ((tmp16)){
										HX_STACK_LINE(215)
										::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(215)
										::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(215)
										HX_STACK_DO_THROW(tmp18);
									}
								}
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									bool tmp15 = (velocity != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(215)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(215)
									if ((tmp15)){
										HX_STACK_LINE(215)
										tmp16 = velocity->zpp_disp;
									}
									else{
										HX_STACK_LINE(215)
										tmp16 = false;
									}
									HX_STACK_LINE(215)
									if ((tmp16)){
										HX_STACK_LINE(215)
										::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(215)
										::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(215)
										HX_STACK_DO_THROW(tmp18);
									}
								}
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(215)
									bool tmp15 = _this2->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(215)
									if ((tmp15)){
										HX_STACK_LINE(215)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(215)
									bool tmp16 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(215)
									if ((tmp16)){
										HX_STACK_LINE(215)
										_this2->_isimmutable();
									}
								}
								HX_STACK_LINE(215)
								bool tmp15 = (velocity == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(215)
								if ((tmp15)){
									HX_STACK_LINE(215)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
								}
								HX_STACK_LINE(215)
								::nape::geom::Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(215)
									{
										HX_STACK_LINE(215)
										bool tmp18 = (velocity != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(215)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(215)
										if ((tmp18)){
											HX_STACK_LINE(215)
											tmp19 = velocity->zpp_disp;
										}
										else{
											HX_STACK_LINE(215)
											tmp19 = false;
										}
										HX_STACK_LINE(215)
										if ((tmp19)){
											HX_STACK_LINE(215)
											::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(215)
											::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(tmp21);
										}
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(215)
											bool tmp20 = (_this2->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(215)
											if ((tmp20)){
												HX_STACK_LINE(215)
												_this2->_validate();
											}
										}
										HX_STACK_LINE(215)
										tmp17 = velocity->zpp_inner->x;
									}
									HX_STACK_LINE(215)
									Float x = tmp17;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(215)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(215)
									{
										HX_STACK_LINE(215)
										bool tmp19 = (velocity != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(215)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(215)
										if ((tmp19)){
											HX_STACK_LINE(215)
											tmp20 = velocity->zpp_disp;
										}
										else{
											HX_STACK_LINE(215)
											tmp20 = false;
										}
										HX_STACK_LINE(215)
										if ((tmp20)){
											HX_STACK_LINE(215)
											::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(215)
											::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(tmp22);
										}
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(215)
											bool tmp21 = (_this2->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(215)
											if ((tmp21)){
												HX_STACK_LINE(215)
												_this2->_validate();
											}
										}
										HX_STACK_LINE(215)
										tmp18 = velocity->zpp_inner->y;
									}
									HX_STACK_LINE(215)
									Float y = tmp18;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(215)
									{
										HX_STACK_LINE(215)
										bool tmp19 = (_this1 != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(215)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(215)
										if ((tmp19)){
											HX_STACK_LINE(215)
											tmp20 = _this1->zpp_disp;
										}
										else{
											HX_STACK_LINE(215)
											tmp20 = false;
										}
										HX_STACK_LINE(215)
										if ((tmp20)){
											HX_STACK_LINE(215)
											::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(215)
											::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(tmp22);
										}
									}
									HX_STACK_LINE(215)
									{
										HX_STACK_LINE(215)
										::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(215)
										bool tmp19 = _this2->_immutable;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(215)
										if ((tmp19)){
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(215)
										bool tmp20 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(215)
										if ((tmp20)){
											HX_STACK_LINE(215)
											_this2->_isimmutable();
										}
									}
									HX_STACK_LINE(215)
									bool tmp19 = (x != x);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(215)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(215)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(215)
									if ((tmp20)){
										HX_STACK_LINE(215)
										tmp21 = (y != y);
									}
									else{
										HX_STACK_LINE(215)
										tmp21 = true;
									}
									HX_STACK_LINE(215)
									if ((tmp21)){
										HX_STACK_LINE(215)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
									}
									HX_STACK_LINE(215)
									Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(215)
									{
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											bool tmp23 = (_this1 != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(215)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(215)
											if ((tmp23)){
												HX_STACK_LINE(215)
												tmp24 = _this1->zpp_disp;
											}
											else{
												HX_STACK_LINE(215)
												tmp24 = false;
											}
											HX_STACK_LINE(215)
											if ((tmp24)){
												HX_STACK_LINE(215)
												::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(215)
												::String tmp26 = (tmp25 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(215)
												HX_STACK_DO_THROW(tmp26);
											}
										}
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(215)
											bool tmp23 = (_this2->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(215)
											if ((tmp23)){
												HX_STACK_LINE(215)
												_this2->_validate();
											}
										}
										HX_STACK_LINE(215)
										tmp22 = _this1->zpp_inner->x;
									}
									HX_STACK_LINE(215)
									Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(215)
									bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(215)
									bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(215)
									if ((tmp24)){
										HX_STACK_LINE(215)
										Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											{
												HX_STACK_LINE(215)
												bool tmp27 = (_this1 != null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(215)
												bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(215)
												bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(215)
												bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(215)
												if ((tmp30)){
													HX_STACK_LINE(215)
													tmp29 = _this1->zpp_disp;
												}
												else{
													HX_STACK_LINE(215)
													tmp29 = false;
												}
												HX_STACK_LINE(215)
												bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(215)
												if ((tmp31)){
													HX_STACK_LINE(215)
													::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(215)
													::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(215)
													::String tmp34 = (tmp33 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(215)
													::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(215)
													::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(215)
													HX_STACK_DO_THROW(tmp36);
												}
											}
											HX_STACK_LINE(215)
											{
												HX_STACK_LINE(215)
												::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(215)
												bool tmp27 = (_this2->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(215)
												bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(215)
												bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(215)
												if ((tmp29)){
													HX_STACK_LINE(215)
													_this2->_validate();
												}
											}
											HX_STACK_LINE(215)
											Float tmp27 = _this1->zpp_inner->y;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(215)
											tmp26 = tmp27;
										}
										HX_STACK_LINE(215)
										Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(215)
										tmp25 = (tmp26 == tmp27);
									}
									else{
										HX_STACK_LINE(215)
										tmp25 = false;
									}
									HX_STACK_LINE(215)
									bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(215)
									if ((tmp26)){
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											_this1->zpp_inner->x = x;
											HX_STACK_LINE(215)
											_this1->zpp_inner->y = y;
											HX_STACK_LINE(215)
											{
											}
										}
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(215)
											bool tmp27 = (_this2->_invalidate != null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(215)
											if ((tmp27)){
												HX_STACK_LINE(215)
												::zpp_nape::geom::ZPP_Vec2 tmp28 = _this2;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(215)
												_this2->_invalidate(tmp28);
											}
										}
									}
									HX_STACK_LINE(215)
									tmp16 = _this1;
								}
								HX_STACK_LINE(215)
								::nape::geom::Vec2 ret = tmp16;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(215)
									tmp17 = velocity->zpp_inner->weak;
									HX_STACK_LINE(215)
									if ((tmp17)){
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											{
												HX_STACK_LINE(215)
												bool tmp18 = (velocity != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(215)
												bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(215)
												if ((tmp18)){
													HX_STACK_LINE(215)
													tmp19 = velocity->zpp_disp;
												}
												else{
													HX_STACK_LINE(215)
													tmp19 = false;
												}
												HX_STACK_LINE(215)
												if ((tmp19)){
													HX_STACK_LINE(215)
													::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(215)
													::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(215)
													HX_STACK_DO_THROW(tmp21);
												}
											}
											HX_STACK_LINE(215)
											{
												HX_STACK_LINE(215)
												::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(215)
												bool tmp18 = _this2->_immutable;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(215)
												if ((tmp18)){
													HX_STACK_LINE(215)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
												}
												HX_STACK_LINE(215)
												bool tmp19 = (_this2->_isimmutable != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(215)
												if ((tmp19)){
													HX_STACK_LINE(215)
													_this2->_isimmutable();
												}
											}
											HX_STACK_LINE(215)
											bool tmp18 = velocity->zpp_inner->_inuse;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(215)
											if ((tmp18)){
												HX_STACK_LINE(215)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
											}
											HX_STACK_LINE(215)
											::zpp_nape::geom::ZPP_Vec2 inner = velocity->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(215)
											velocity->zpp_inner->outer = null();
											HX_STACK_LINE(215)
											velocity->zpp_inner = null();
											HX_STACK_LINE(215)
											{
												HX_STACK_LINE(215)
												::nape::geom::Vec2 o = velocity;		HX_STACK_VAR(o,"o");
												HX_STACK_LINE(215)
												o->zpp_pool = null();
												HX_STACK_LINE(215)
												::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(215)
												bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(215)
												if ((tmp20)){
													HX_STACK_LINE(215)
													::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(215)
													tmp21->zpp_pool = o;
												}
												else{
													HX_STACK_LINE(215)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
												}
												HX_STACK_LINE(215)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
												HX_STACK_LINE(215)
												o->zpp_disp = true;
											}
											HX_STACK_LINE(215)
											{
												HX_STACK_LINE(215)
												::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
												HX_STACK_LINE(215)
												{
													HX_STACK_LINE(215)
													bool tmp19 = (o->outer != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(215)
													if ((tmp19)){
														HX_STACK_LINE(215)
														o->outer->zpp_inner = null();
														HX_STACK_LINE(215)
														o->outer = null();
													}
													HX_STACK_LINE(215)
													o->_isimmutable = null();
													HX_STACK_LINE(215)
													o->_validate = null();
													HX_STACK_LINE(215)
													o->_invalidate = null();
												}
												HX_STACK_LINE(215)
												::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(215)
												o->next = tmp19;
												HX_STACK_LINE(215)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
											}
										}
										HX_STACK_LINE(215)
										true;
									}
									else{
										HX_STACK_LINE(215)
										false;
									}
								}
								HX_STACK_LINE(215)
								ret;
							}
						}
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::nape::geom::Vec2 tmp13 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(215)
							bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(215)
							if ((tmp14)){
								HX_STACK_LINE(215)
								_this->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(215)
							_this->zpp_inner->wrap_vel;
						}
					}
					HX_STACK_LINE(220)
					::haxe::ds::EnumValueMap tmp8 = this->cooldown;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(220)
					::control::demo::Direction tmp9 = d;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(220)
					Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(220)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(220)
					bool tmp12 = (tmp11 > ((Float)100));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(220)
					if ((tmp12)){
						HX_STACK_LINE(221)
						::haxe::ds::EnumValueMap tmp13 = this->cooldown;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(221)
						::control::demo::Direction tmp14 = d;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(221)
						tmp13->set(tmp14,(int)0);
						HX_STACK_LINE(223)
						::util::Vector tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(223)
						{
							HX_STACK_LINE(223)
							::util::Vector tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(223)
							{
								HX_STACK_LINE(223)
								::control::demo::Direction tmp17 = d;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(223)
								::util::Vector tmp18 = this->vecFromDir(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(223)
								::util::Vector _this = tmp18;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(223)
								Float tmp19 = (_this->x * (int)-50);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(223)
								Float tmp20 = (_this->y * (int)-50);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(223)
								tmp16 = ::util::Vector_obj::__new(tmp19,tmp20);
							}
							HX_STACK_LINE(223)
							::util::Vector _this = tmp16;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(225)
							::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(225)
							{
								HX_STACK_LINE(225)
								::nape::phys::Body tmp18 = this->ball;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(225)
								::nape::phys::Body _this1 = tmp18;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(225)
								::nape::geom::Vec2 tmp19 = _this1->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(225)
								bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(225)
								if ((tmp20)){
									HX_STACK_LINE(225)
									_this1->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(225)
								tmp17 = _this1->zpp_inner->wrap_pos;
							}
							HX_STACK_LINE(225)
							::util::Vector tmp18 = ::util::Util_obj::vectorFromNape(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(225)
							::util::Vector v = tmp18;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(223)
							Float tmp19 = (_this->x + v->x);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(223)
							Float tmp20 = (_this->y + v->y);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(223)
							tmp15 = ::util::Vector_obj::__new(tmp19,tmp20);
						}
						HX_STACK_LINE(223)
						::util::Vector pos = tmp15;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(226)
						::util::Vector tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(226)
							::control::demo::Direction tmp17 = d;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(226)
							::util::Vector tmp18 = this->vecFromDir(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(226)
							::util::Vector _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(226)
							Float tmp19 = (_this->x * ((Float)20));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(226)
							Float tmp20 = (_this->y * ((Float)20));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(226)
							tmp16 = ::util::Vector_obj::__new(tmp19,tmp20);
						}
						HX_STACK_LINE(226)
						::util::Vector vel = tmp16;		HX_STACK_VAR(vel,"vel");
						HX_STACK_LINE(228)
						Array< ::Dynamic > tmp17 = this->projectiles;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(229)
						::nape::space::Space tmp18 = this->space;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(229)
						::util::Vector tmp19 = pos;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(229)
						::util::Vector tmp20 = vel;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(228)
						::control::demo::Projectile tmp21 = ::control::demo::Projectile_obj::__new(tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(228)
						tmp17->push(tmp21);
					}
				}
			}
;
		}
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			Array< ::Dynamic > tmp4 = this->projectiles;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			Array< ::Dynamic > _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(234)
			while((true)){
				HX_STACK_LINE(234)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(234)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(234)
				if ((tmp6)){
					HX_STACK_LINE(234)
					break;
				}
				HX_STACK_LINE(234)
				::control::demo::Projectile tmp7 = _g1->__get(_g).StaticCast< ::control::demo::Projectile >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(234)
				::control::demo::Projectile p = tmp7;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(234)
				++(_g);
				HX_STACK_LINE(235)
				Float tmp8 = delta;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(235)
				p->tick(tmp8);
			}
		}
		HX_STACK_LINE(238)
		Array< ::Dynamic > tmp4 = this->projectiles;		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		bool run(::control::demo::Projectile p){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","control/demo/PhysDemo.hx",238,0xb139f1af)
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(239)
				bool tmp5 = p->conclude();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(239)
				if ((tmp5)){
					HX_STACK_LINE(239)
					::nape::phys::Body _this = p->box;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						::zpp_nape::phys::ZPP_Compound tmp6 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(239)
						bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(239)
						if ((tmp7)){
							HX_STACK_LINE(239)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
						}
						HX_STACK_LINE(239)
						_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
						HX_STACK_LINE(239)
						bool tmp8 = _this->zpp_inner->world;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(239)
						if ((tmp8)){
							HX_STACK_LINE(239)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
						}
						HX_STACK_LINE(239)
						::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(239)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(239)
						::nape::space::Space tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(239)
						if ((tmp10)){
							HX_STACK_LINE(239)
							tmp11 = null();
						}
						else{
							HX_STACK_LINE(239)
							::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(239)
							tmp11 = tmp12->outer;
						}
						HX_STACK_LINE(239)
						bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(239)
						if ((tmp12)){
							HX_STACK_LINE(239)
							::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(239)
							bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(239)
							::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(239)
							if ((tmp14)){
								HX_STACK_LINE(239)
								tmp15 = null();
							}
							else{
								HX_STACK_LINE(239)
								::zpp_nape::space::ZPP_Space tmp16 = _this->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(239)
								tmp15 = tmp16->outer;
							}
							HX_STACK_LINE(239)
							bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(239)
							if ((tmp16)){
								HX_STACK_LINE(239)
								::zpp_nape::space::ZPP_Component tmp17 = _this->zpp_inner->component;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(239)
								tmp17->woken = false;
							}
							HX_STACK_LINE(239)
							::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(239)
							bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(239)
							::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(239)
							if ((tmp18)){
								HX_STACK_LINE(239)
								tmp19 = null();
							}
							else{
								HX_STACK_LINE(239)
								::zpp_nape::space::ZPP_Space tmp20 = _this->zpp_inner->space;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(239)
								tmp19 = tmp20->outer;
							}
							HX_STACK_LINE(239)
							bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(239)
							if ((tmp20)){
								HX_STACK_LINE(239)
								::zpp_nape::space::ZPP_Space tmp21 = _this->zpp_inner->space;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(239)
								bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(239)
								::nape::space::Space tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(239)
								if ((tmp22)){
									HX_STACK_LINE(239)
									tmp23 = null();
								}
								else{
									HX_STACK_LINE(239)
									::zpp_nape::space::ZPP_Space tmp24 = _this->zpp_inner->space;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(239)
									tmp23 = tmp24->outer;
								}
								HX_STACK_LINE(239)
								::nape::phys::BodyList tmp24 = tmp23->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(239)
								::nape::phys::Body tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(239)
								tmp24->remove(tmp25);
							}
							HX_STACK_LINE(239)
							bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(239)
							if ((tmp21)){
								HX_STACK_LINE(239)
								::zpp_nape::space::ZPP_Space tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(239)
								::nape::phys::BodyList _this1 = tmp22->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(239)
								bool tmp23 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(239)
								if ((tmp23)){
									HX_STACK_LINE(239)
									::nape::phys::Body tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(239)
									_this1->push(tmp24);
								}
								else{
									HX_STACK_LINE(239)
									::nape::phys::Body tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(239)
									_this1->unshift(tmp24);
								}
							}
						}
					}
					HX_STACK_LINE(239)
					::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(239)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(239)
					if ((tmp7)){
						HX_STACK_LINE(239)
						Dynamic();
					}
					else{
						HX_STACK_LINE(239)
						::zpp_nape::space::ZPP_Space tmp8 = _this->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(239)
						tmp8->outer;
					}
				}
				HX_STACK_LINE(240)
				bool tmp6 = p->conclude();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				return tmp7;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(238)
		Array< ::Dynamic > tmp5 = tmp4->filter( Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		this->projectiles = tmp5;
		HX_STACK_LINE(243)
		{
			HX_STACK_LINE(243)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(243)
			Array< ::Dynamic > tmp6 = this->boxes;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(243)
			Array< ::Dynamic > _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(243)
			while((true)){
				HX_STACK_LINE(243)
				bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(243)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(243)
				if ((tmp8)){
					HX_STACK_LINE(243)
					break;
				}
				HX_STACK_LINE(243)
				::control::demo::FloatingBox tmp9 = _g1->__get(_g).StaticCast< ::control::demo::FloatingBox >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(243)
				::control::demo::FloatingBox b = tmp9;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(243)
				++(_g);
				HX_STACK_LINE(244)
				Float tmp10 = delta;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(244)
				b->tick(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysDemo_obj,tick,(void))

Void PhysDemo_obj::profiling( Dynamic d){
{
		HX_STACK_FRAME("control.demo.PhysDemo","profiling",0x8ae02587,"control.demo.PhysDemo.profiling","control/demo/PhysDemo.hx",252,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
		HX_STACK_LINE(253)
		::String tmp = d->__Field(HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("PhysDemo.hx","\xa9","\x45","\x74","\x43"),253,HX_HCSTRING("control.demo.PhysDemo","\x0f","\x44","\xa9","\x7f"),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysDemo_obj,profiling,(void))

bool PhysDemo_obj::controlling( ){
	HX_STACK_FRAME("control.demo.PhysDemo","controlling",0x033646f4,"control.demo.PhysDemo.controlling","control/demo/PhysDemo.hx",271,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	::haxe::ds::EnumValueMap tmp = this->movement;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	for(::cpp::FastIterator_obj< ::control::demo::Direction > *__it = ::cpp::CreateFastIterator< ::control::demo::Direction >(tmp1);  __it->hasNext(); ){
		::control::demo::Direction d = __it->next();
		{
			HX_STACK_LINE(273)
			::haxe::ds::EnumValueMap tmp2 = this->movement;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			::control::demo::Direction tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			if ((tmp5)){
				HX_STACK_LINE(273)
				return true;
			}
		}
;
	}
	HX_STACK_LINE(274)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(PhysDemo_obj,controlling,return )

::control::Scene PhysDemo_obj::score( ){
	HX_STACK_FRAME("control.demo.PhysDemo","score",0x24fa45b3,"control.demo.PhysDemo.score","control/demo/PhysDemo.hx",277,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	::String text = HX_HCSTRING("use i/j/k/l to move","\x9a","\x30","\x49","\x2c");		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(279)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(281)
	::control::DrawPrim tmp = ::control::DrawPrim_obj::SetColor((int)0,(int)0,(int)0,(int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	::control::DrawPrim tmp1 = ::control::DrawPrim_obj::SetFont(HX_HCSTRING("Arial","\x23","\x09","\xb6","\xb8"),(int)14);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	::util::Vector tmp2 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(283)
	::control::DrawPrim tmp4 = ::control::DrawPrim_obj::DrawText(tmp2,::control::TextAlign_obj::CenterText,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(280)
	Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(280)
	scene->prims = tmp5;
	HX_STACK_LINE(285)
	::util::Transform tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(285)
		Float _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
		HX_STACK_LINE(285)
		Float _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
		HX_STACK_LINE(285)
		Float _this__20 = (int)800;		HX_STACK_VAR(_this__20,"_this__20");
		HX_STACK_LINE(285)
		Float _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
		HX_STACK_LINE(285)
		Float _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
		HX_STACK_LINE(285)
		Float _this__21 = (int)20;		HX_STACK_VAR(_this__21,"_this__21");
		HX_STACK_LINE(285)
		Float _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
		HX_STACK_LINE(285)
		Float _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
		HX_STACK_LINE(285)
		Float _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
		HX_STACK_LINE(286)
		Float m__00 = (int)3;		HX_STACK_VAR(m__00,"m__00");
		HX_STACK_LINE(286)
		Float m__10 = (int)0;		HX_STACK_VAR(m__10,"m__10");
		HX_STACK_LINE(286)
		Float m__20 = (int)0;		HX_STACK_VAR(m__20,"m__20");
		HX_STACK_LINE(286)
		Float m__01 = (int)0;		HX_STACK_VAR(m__01,"m__01");
		HX_STACK_LINE(286)
		Float m__11 = (int)3;		HX_STACK_VAR(m__11,"m__11");
		HX_STACK_LINE(286)
		Float m__21 = (int)0;		HX_STACK_VAR(m__21,"m__21");
		HX_STACK_LINE(286)
		Float m__02 = (int)0;		HX_STACK_VAR(m__02,"m__02");
		HX_STACK_LINE(286)
		Float m__12 = (int)0;		HX_STACK_VAR(m__12,"m__12");
		HX_STACK_LINE(286)
		Float m__22 = (int)1;		HX_STACK_VAR(m__22,"m__22");
		HX_STACK_LINE(285)
		Float tmp7 = (_this__00 * m__00);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(285)
		Float tmp8 = (_this__10 * m__01);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(285)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(285)
		Float tmp10 = (_this__20 * m__02);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(285)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(285)
		Float tmp12 = (_this__00 * m__10);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(285)
		Float tmp13 = (_this__10 * m__11);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(285)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(285)
		Float tmp15 = (_this__20 * m__12);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(285)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(285)
		Float tmp17 = (_this__00 * m__20);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(285)
		Float tmp18 = (_this__10 * m__21);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(285)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(285)
		Float tmp20 = (_this__20 * m__22);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(285)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(285)
		Float tmp22 = (_this__01 * m__00);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(285)
		Float tmp23 = (_this__11 * m__01);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(285)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(285)
		Float tmp25 = (_this__21 * m__02);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(285)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(285)
		Float tmp27 = (_this__01 * m__10);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(285)
		Float tmp28 = (_this__11 * m__11);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(285)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(285)
		Float tmp30 = (_this__21 * m__12);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(285)
		Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(285)
		Float tmp32 = (_this__01 * m__20);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(285)
		Float tmp33 = (_this__11 * m__21);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(285)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(285)
		Float tmp35 = (_this__21 * m__22);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(285)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(285)
		Float tmp37 = (_this__02 * m__00);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(285)
		Float tmp38 = (_this__12 * m__01);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(285)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(285)
		Float tmp40 = (_this__22 * m__02);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(285)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(285)
		Float tmp42 = (_this__02 * m__10);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(285)
		Float tmp43 = (_this__12 * m__11);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(285)
		Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(285)
		Float tmp45 = (_this__22 * m__12);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(285)
		Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(285)
		Float tmp47 = (_this__02 * m__20);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(285)
		Float tmp48 = (_this__12 * m__21);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(285)
		Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(285)
		Float tmp50 = (_this__22 * m__22);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(285)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(285)
		tmp6 = ::util::Transform_obj::__new(tmp11,tmp16,tmp21,tmp26,tmp31,tmp36,tmp41,tmp46,tmp51);
	}
	HX_STACK_LINE(285)
	scene->trans = tmp6;
	HX_STACK_LINE(287)
	::control::Scene tmp7 = scene;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(287)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(PhysDemo_obj,score,return )

::control::Scene PhysDemo_obj::render( Float delta){
	HX_STACK_FRAME("control.demo.PhysDemo","render",0xf5c0add5,"control.demo.PhysDemo.render","control/demo/PhysDemo.hx",291,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(292)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(295)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	{
		HX_STACK_LINE(295)
		::nape::phys::Body tmp1 = this->ball;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(295)
		::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(295)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		if ((tmp3)){
			HX_STACK_LINE(295)
			_this->zpp_inner->setupPosition();
		}
		HX_STACK_LINE(295)
		tmp = _this->zpp_inner->wrap_pos;
	}
	HX_STACK_LINE(295)
	::util::Vector tmp1 = ::util::Util_obj::vectorFromNape(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	::control::DrawPrim tmp2 = ::control::DrawPrim_obj::DrawCircle(tmp1,(int)40);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	::control::DrawPrim tmp3 = ::control::DrawPrim_obj::SetColor((int)0,(int)255,(int)0,(int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(294)
	Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new().Add(tmp2).Add(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(294)
	scene->prims = tmp4;
	HX_STACK_LINE(299)
	bool tmp5 = this->controlling();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(299)
	if ((tmp5)){
		HX_STACK_LINE(300)
		::control::DrawPrim tmp6 = ::control::DrawPrim_obj::SetColor((int)50,(int)0,(int)0,(int)255);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(300)
		scene->prims->unshift(tmp6);
	}
	else{
		HX_STACK_LINE(301)
		::control::DrawPrim tmp6 = ::control::DrawPrim_obj::SetColor((int)0,(int)0,(int)0,(int)255);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(301)
		scene->prims->unshift(tmp6);
	}
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		Array< ::Dynamic > tmp6 = this->boxes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		Array< ::Dynamic > _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(303)
		while((true)){
			HX_STACK_LINE(303)
			bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(303)
			if ((tmp8)){
				HX_STACK_LINE(303)
				break;
			}
			HX_STACK_LINE(303)
			::control::demo::FloatingBox tmp9 = _g1->__get(_g).StaticCast< ::control::demo::FloatingBox >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(303)
			::control::demo::FloatingBox box = tmp9;		HX_STACK_VAR(box,"box");
			HX_STACK_LINE(303)
			++(_g);
			HX_STACK_LINE(304)
			::control::Scene tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(305)
				::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::nape::phys::Body _this = box->box;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					::nape::geom::Vec2 tmp12 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(305)
					bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(305)
					if ((tmp13)){
						HX_STACK_LINE(305)
						_this->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(305)
					tmp11 = _this->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(305)
				::util::Vector tmp12 = ::util::Util_obj::vectorFromNape(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(305)
				::util::Vector pos = tmp12;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(307)
				::zpp_nape::phys::ZPP_Body tmp13 = box->box->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(307)
				Float alpha = tmp13->rot;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(308)
				::control::DrawPrim tmp14 = ::control::DrawPrim_obj::SetColor((int)0,(int)255,(int)0,(int)255);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(308)
				::control::DrawPrim color = tmp14;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(304)
				::control::Scene scene1 = ::control::Scene_obj::__new();		HX_STACK_VAR(scene1,"scene1");
				HX_STACK_LINE(304)
				::control::DrawPrim tmp15 = color;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(304)
				Float tmp16 = (int)-12;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(304)
				Float tmp17 = (int)-12;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(304)
				::util::Vector tmp18 = ::util::Vector_obj::__new(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(304)
				::util::Vector tmp19 = ::util::Vector_obj::__new((int)12,(int)12);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(304)
				::control::DrawPrim tmp20 = ::control::DrawPrim_obj::DrawRect(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(304)
				Array< ::Dynamic > tmp21 = Array_obj< ::Dynamic >::__new().Add(tmp15).Add(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(304)
				scene1->prims = tmp21;
				HX_STACK_LINE(304)
				::util::Transform tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					Float _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
					HX_STACK_LINE(304)
					Float _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
					HX_STACK_LINE(304)
					Float _this__20 = pos->x;		HX_STACK_VAR(_this__20,"_this__20");
					HX_STACK_LINE(304)
					Float _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
					HX_STACK_LINE(304)
					Float _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
					HX_STACK_LINE(304)
					Float _this__21 = pos->y;		HX_STACK_VAR(_this__21,"_this__21");
					HX_STACK_LINE(304)
					Float _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
					HX_STACK_LINE(304)
					Float _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
					HX_STACK_LINE(304)
					Float _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
					HX_STACK_LINE(304)
					Float tmp23 = alpha;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(304)
					Float tmp24 = ::Math_obj::cos(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(304)
					Float tmp25 = alpha;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(304)
					Float tmp26 = ::Math_obj::sin(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(304)
					Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(304)
					Float tmp28 = alpha;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(304)
					Float tmp29 = ::Math_obj::sin(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(304)
					Float tmp30 = alpha;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(304)
					Float tmp31 = ::Math_obj::cos(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(304)
					::util::Transform tmp32 = ::util::Transform_obj::__new(tmp24,tmp27,(int)0,tmp29,tmp31,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(304)
					::util::Transform m = tmp32;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(304)
					Float tmp33 = (_this__00 * m->_00);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(304)
					Float tmp34 = (_this__10 * m->_01);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(304)
					Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(304)
					Float tmp36 = (_this__20 * m->_02);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(304)
					Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(304)
					Float tmp38 = (_this__00 * m->_10);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(304)
					Float tmp39 = (_this__10 * m->_11);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(304)
					Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(304)
					Float tmp41 = (_this__20 * m->_12);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(304)
					Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(304)
					Float tmp43 = (_this__00 * m->_20);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(304)
					Float tmp44 = (_this__10 * m->_21);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(304)
					Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(304)
					Float tmp46 = (_this__20 * m->_22);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(304)
					Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(304)
					Float tmp48 = (_this__01 * m->_00);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(304)
					Float tmp49 = (_this__11 * m->_01);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(304)
					Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(304)
					Float tmp51 = (_this__21 * m->_02);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(304)
					Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(304)
					Float tmp53 = (_this__01 * m->_10);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(304)
					Float tmp54 = (_this__11 * m->_11);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(304)
					Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(304)
					Float tmp56 = (_this__21 * m->_12);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(304)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(304)
					Float tmp58 = (_this__01 * m->_20);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(304)
					Float tmp59 = (_this__11 * m->_21);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(304)
					Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(304)
					Float tmp61 = (_this__21 * m->_22);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(304)
					Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(304)
					Float tmp63 = (_this__02 * m->_00);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(304)
					Float tmp64 = (_this__12 * m->_01);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(304)
					Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(304)
					Float tmp66 = (_this__22 * m->_02);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(304)
					Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(304)
					Float tmp68 = (_this__02 * m->_10);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(304)
					Float tmp69 = (_this__12 * m->_11);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(304)
					Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(304)
					Float tmp71 = (_this__22 * m->_12);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(304)
					Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(304)
					Float tmp73 = (_this__02 * m->_20);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(304)
					Float tmp74 = (_this__12 * m->_21);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(304)
					Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(304)
					Float tmp76 = (_this__22 * m->_22);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(304)
					Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(304)
					tmp22 = ::util::Transform_obj::__new(tmp37,tmp42,tmp47,tmp52,tmp57,tmp62,tmp67,tmp72,tmp77);
				}
				HX_STACK_LINE(304)
				scene1->trans = tmp22;
				HX_STACK_LINE(304)
				tmp10 = scene1;
			}
			HX_STACK_LINE(304)
			scene->children->push(tmp10);
		}
	}
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(312)
		Array< ::Dynamic > tmp6 = this->projectiles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(312)
		Array< ::Dynamic > _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(312)
		while((true)){
			HX_STACK_LINE(312)
			bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(312)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(312)
			if ((tmp8)){
				HX_STACK_LINE(312)
				break;
			}
			HX_STACK_LINE(312)
			::control::demo::Projectile tmp9 = _g1->__get(_g).StaticCast< ::control::demo::Projectile >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(312)
			::control::demo::Projectile p = tmp9;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(312)
			++(_g);
			HX_STACK_LINE(313)
			::control::Scene tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(314)
				::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(314)
					::nape::phys::Body _this = p->box;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(314)
					::nape::geom::Vec2 tmp12 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(314)
					bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(314)
					if ((tmp13)){
						HX_STACK_LINE(314)
						_this->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(314)
					tmp11 = _this->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(314)
				::util::Vector tmp12 = ::util::Util_obj::vectorFromNape(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(314)
				::util::Vector pos = tmp12;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(316)
				::zpp_nape::phys::ZPP_Body tmp13 = p->box->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(316)
				Float alpha = tmp13->rot;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(317)
				Float tmp14 = p->vivacity();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(317)
				Float tmp15 = (tmp14 * (int)255);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(317)
				int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(317)
				::control::DrawPrim tmp17 = ::control::DrawPrim_obj::SetColor((int)200,(int)0,(int)0,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(317)
				::control::DrawPrim color = tmp17;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(313)
				::control::Scene scene1 = ::control::Scene_obj::__new();		HX_STACK_VAR(scene1,"scene1");
				HX_STACK_LINE(313)
				::control::DrawPrim tmp18 = color;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(313)
				Float tmp19 = (int)-10;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(313)
				Float tmp20 = (int)-10;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(313)
				::util::Vector tmp21 = ::util::Vector_obj::__new(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(313)
				::util::Vector tmp22 = ::util::Vector_obj::__new((int)10,(int)10);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(313)
				::control::DrawPrim tmp23 = ::control::DrawPrim_obj::DrawRect(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(313)
				Array< ::Dynamic > tmp24 = Array_obj< ::Dynamic >::__new().Add(tmp18).Add(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(313)
				scene1->prims = tmp24;
				HX_STACK_LINE(313)
				::util::Transform tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					Float _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
					HX_STACK_LINE(313)
					Float _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
					HX_STACK_LINE(313)
					Float _this__20 = pos->x;		HX_STACK_VAR(_this__20,"_this__20");
					HX_STACK_LINE(313)
					Float _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
					HX_STACK_LINE(313)
					Float _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
					HX_STACK_LINE(313)
					Float _this__21 = pos->y;		HX_STACK_VAR(_this__21,"_this__21");
					HX_STACK_LINE(313)
					Float _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
					HX_STACK_LINE(313)
					Float _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
					HX_STACK_LINE(313)
					Float _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
					HX_STACK_LINE(313)
					Float tmp26 = alpha;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(313)
					Float tmp27 = ::Math_obj::cos(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(313)
					Float tmp28 = alpha;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(313)
					Float tmp29 = ::Math_obj::sin(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(313)
					Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(313)
					Float tmp31 = alpha;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(313)
					Float tmp32 = ::Math_obj::sin(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(313)
					Float tmp33 = alpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(313)
					Float tmp34 = ::Math_obj::cos(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(313)
					::util::Transform tmp35 = ::util::Transform_obj::__new(tmp27,tmp30,(int)0,tmp32,tmp34,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(313)
					::util::Transform m = tmp35;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(313)
					Float tmp36 = (_this__00 * m->_00);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(313)
					Float tmp37 = (_this__10 * m->_01);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(313)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(313)
					Float tmp39 = (_this__20 * m->_02);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(313)
					Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(313)
					Float tmp41 = (_this__00 * m->_10);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(313)
					Float tmp42 = (_this__10 * m->_11);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(313)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(313)
					Float tmp44 = (_this__20 * m->_12);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(313)
					Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(313)
					Float tmp46 = (_this__00 * m->_20);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(313)
					Float tmp47 = (_this__10 * m->_21);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(313)
					Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(313)
					Float tmp49 = (_this__20 * m->_22);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(313)
					Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(313)
					Float tmp51 = (_this__01 * m->_00);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(313)
					Float tmp52 = (_this__11 * m->_01);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(313)
					Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(313)
					Float tmp54 = (_this__21 * m->_02);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(313)
					Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(313)
					Float tmp56 = (_this__01 * m->_10);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(313)
					Float tmp57 = (_this__11 * m->_11);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(313)
					Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(313)
					Float tmp59 = (_this__21 * m->_12);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(313)
					Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(313)
					Float tmp61 = (_this__01 * m->_20);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(313)
					Float tmp62 = (_this__11 * m->_21);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(313)
					Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(313)
					Float tmp64 = (_this__21 * m->_22);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(313)
					Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(313)
					Float tmp66 = (_this__02 * m->_00);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(313)
					Float tmp67 = (_this__12 * m->_01);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(313)
					Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(313)
					Float tmp69 = (_this__22 * m->_02);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(313)
					Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(313)
					Float tmp71 = (_this__02 * m->_10);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(313)
					Float tmp72 = (_this__12 * m->_11);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(313)
					Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(313)
					Float tmp74 = (_this__22 * m->_12);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(313)
					Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(313)
					Float tmp76 = (_this__02 * m->_20);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(313)
					Float tmp77 = (_this__12 * m->_21);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(313)
					Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(313)
					Float tmp79 = (_this__22 * m->_22);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(313)
					Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(313)
					tmp25 = ::util::Transform_obj::__new(tmp40,tmp45,tmp50,tmp55,tmp60,tmp65,tmp70,tmp75,tmp80);
				}
				HX_STACK_LINE(313)
				scene1->trans = tmp25;
				HX_STACK_LINE(313)
				tmp10 = scene1;
			}
			HX_STACK_LINE(313)
			scene->children->push(tmp10);
		}
	}
	HX_STACK_LINE(321)
	::control::Scene tmp6 = this->score();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(321)
	scene->children->push(tmp6);
	HX_STACK_LINE(323)
	::control::Scene tmp7 = scene;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(323)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(PhysDemo_obj,render,return )

Void PhysDemo_obj::handleKb( ::control::Key key,bool state){
{
		HX_STACK_FRAME("control.demo.PhysDemo","handleKb",0x8bf01f9e,"control.demo.PhysDemo.handleKb","control/demo/PhysDemo.hx",330,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(331)
		::control::Key tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		::control::demo::Direction tmp1 = this->dirFromKey(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		::control::demo::Direction dir = tmp1;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(332)
		bool tmp2 = (dir != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		if ((tmp2)){
			HX_STACK_LINE(333)
			::haxe::ds::EnumValueMap tmp3 = this->movement;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			::control::demo::Direction tmp4 = dir;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			bool tmp5 = state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			tmp3->set(tmp4,tmp5);
			HX_STACK_LINE(334)
			return null();
		}
		HX_STACK_LINE(336)
		switch( (int)(key->__Index())){
			case (int)0: {
				HX_STACK_LINE(336)
				::String tmp3 = (::control::Key(key))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(336)
				::String c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(338)
					bool tmp4 = (c == HX_HCSTRING("r","\x72","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(338)
					if ((tmp4)){
						HX_STACK_LINE(339)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(339)
						Array< ::Dynamic > tmp5 = this->boxes;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(339)
						Array< ::Dynamic > _g1 = tmp5;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(339)
						while((true)){
							HX_STACK_LINE(339)
							bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(339)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(339)
							if ((tmp7)){
								HX_STACK_LINE(339)
								break;
							}
							HX_STACK_LINE(339)
							::control::demo::FloatingBox tmp8 = _g1->__get(_g).StaticCast< ::control::demo::FloatingBox >();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(339)
							::control::demo::FloatingBox b = tmp8;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(339)
							++(_g);
							HX_STACK_LINE(339)
							b->reset();
						}
					}
					HX_STACK_LINE(340)
					bool tmp5 = (c == HX_HCSTRING("q","\x71","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(340)
					if ((tmp5)){
						HX_STACK_LINE(341)
						this->exit = true;
					}
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysDemo_obj,handleKb,(void))

Void PhysDemo_obj::handle( ::control::Event e){
{
		HX_STACK_FRAME("control.demo.PhysDemo","handle",0xa894c627,"control.demo.PhysDemo.handle","control/demo/PhysDemo.hx",348,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(348)
		switch( (int)(e->__Index())){
			case (int)1: {
				HX_STACK_LINE(348)
				bool tmp = (::control::Event(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(348)
				bool state = tmp;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(348)
				::control::Key tmp1 = (::control::Event(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(348)
				::control::Key key = tmp1;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					::control::Key tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(349)
					bool tmp3 = state;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(349)
					this->handleKb(tmp2,tmp3);
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysDemo_obj,handle,(void))

::control::demo::DemoSelect PhysDemo_obj::conclude( ){
	HX_STACK_FRAME("control.demo.PhysDemo","conclude",0x20c608ea,"control.demo.PhysDemo.conclude","control/demo/PhysDemo.hx",354,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(355)
	bool tmp = this->exit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	if ((tmp)){
		HX_STACK_LINE(355)
		return ::control::demo::DemoSelect_obj::HomeSelect;
	}
	HX_STACK_LINE(356)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysDemo_obj,conclude,return )

Float PhysDemo_obj::maxCoolDown;

Float PhysDemo_obj::initSpeed;

::control::Scene PhysDemo_obj::rotatedBox( ::util::Vector pos,Float width,Float alpha,::control::DrawPrim color){
	HX_STACK_FRAME("control.demo.PhysDemo","rotatedBox",0xa9c1c9e1,"control.demo.PhysDemo.rotatedBox","control/demo/PhysDemo.hx",261,0xb139f1af)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(262)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(264)
	::control::DrawPrim tmp = color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	Float tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(265)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(265)
	::util::Vector tmp5 = ::util::Vector_obj::__new(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(265)
	::util::Vector tmp6 = ::util::Vector_obj::__new(width,width);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(265)
	::control::DrawPrim tmp7 = ::control::DrawPrim_obj::DrawRect(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(263)
	Array< ::Dynamic > tmp8 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(263)
	scene->prims = tmp8;
	HX_STACK_LINE(266)
	::util::Transform tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(266)
		Float _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
		HX_STACK_LINE(266)
		Float _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
		HX_STACK_LINE(266)
		Float _this__20 = pos->x;		HX_STACK_VAR(_this__20,"_this__20");
		HX_STACK_LINE(266)
		Float _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
		HX_STACK_LINE(266)
		Float _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
		HX_STACK_LINE(266)
		Float _this__21 = pos->y;		HX_STACK_VAR(_this__21,"_this__21");
		HX_STACK_LINE(266)
		Float _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
		HX_STACK_LINE(266)
		Float _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
		HX_STACK_LINE(266)
		Float _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
		HX_STACK_LINE(267)
		Float tmp10 = alpha;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(267)
		Float tmp11 = ::Math_obj::cos(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(267)
		Float tmp12 = alpha;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(267)
		Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(267)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(267)
		Float tmp15 = alpha;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(267)
		Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(267)
		Float tmp17 = alpha;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(267)
		Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(267)
		::util::Transform tmp19 = ::util::Transform_obj::__new(tmp11,tmp14,(int)0,tmp16,tmp18,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(267)
		::util::Transform m = tmp19;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(266)
		Float tmp20 = (_this__00 * m->_00);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(266)
		Float tmp21 = (_this__10 * m->_01);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(266)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(266)
		Float tmp23 = (_this__20 * m->_02);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(266)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(266)
		Float tmp25 = (_this__00 * m->_10);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(266)
		Float tmp26 = (_this__10 * m->_11);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(266)
		Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(266)
		Float tmp28 = (_this__20 * m->_12);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(266)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(266)
		Float tmp30 = (_this__00 * m->_20);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(266)
		Float tmp31 = (_this__10 * m->_21);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(266)
		Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(266)
		Float tmp33 = (_this__20 * m->_22);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(266)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(266)
		Float tmp35 = (_this__01 * m->_00);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(266)
		Float tmp36 = (_this__11 * m->_01);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(266)
		Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(266)
		Float tmp38 = (_this__21 * m->_02);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(266)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(266)
		Float tmp40 = (_this__01 * m->_10);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(266)
		Float tmp41 = (_this__11 * m->_11);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(266)
		Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(266)
		Float tmp43 = (_this__21 * m->_12);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(266)
		Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(266)
		Float tmp45 = (_this__01 * m->_20);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(266)
		Float tmp46 = (_this__11 * m->_21);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(266)
		Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(266)
		Float tmp48 = (_this__21 * m->_22);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(266)
		Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(266)
		Float tmp50 = (_this__02 * m->_00);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(266)
		Float tmp51 = (_this__12 * m->_01);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(266)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(266)
		Float tmp53 = (_this__22 * m->_02);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(266)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(266)
		Float tmp55 = (_this__02 * m->_10);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(266)
		Float tmp56 = (_this__12 * m->_11);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(266)
		Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(266)
		Float tmp58 = (_this__22 * m->_12);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(266)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(266)
		Float tmp60 = (_this__02 * m->_20);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(266)
		Float tmp61 = (_this__12 * m->_21);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(266)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(266)
		Float tmp63 = (_this__22 * m->_22);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(266)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(266)
		tmp9 = ::util::Transform_obj::__new(tmp24,tmp29,tmp34,tmp39,tmp44,tmp49,tmp54,tmp59,tmp64);
	}
	HX_STACK_LINE(266)
	scene->trans = tmp9;
	HX_STACK_LINE(268)
	::control::Scene tmp10 = scene;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(268)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PhysDemo_obj,rotatedBox,return )


PhysDemo_obj::PhysDemo_obj()
{
}

void PhysDemo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysDemo);
	HX_MARK_MEMBER_NAME(cooldown,"cooldown");
	HX_MARK_MEMBER_NAME(movement,"movement");
	HX_MARK_MEMBER_NAME(projectiles,"projectiles");
	HX_MARK_MEMBER_NAME(boxes,"boxes");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(exit,"exit");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_END_CLASS();
}

void PhysDemo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cooldown,"cooldown");
	HX_VISIT_MEMBER_NAME(movement,"movement");
	HX_VISIT_MEMBER_NAME(projectiles,"projectiles");
	HX_VISIT_MEMBER_NAME(boxes,"boxes");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(exit,"exit");
	HX_VISIT_MEMBER_NAME(space,"space");
}

Dynamic PhysDemo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"boxes") ) { return boxes; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"score") ) { return score_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cooldown") ) { return cooldown; }
		if (HX_FIELD_EQ(inName,"movement") ) { return movement; }
		if (HX_FIELD_EQ(inName,"handleKb") ) { return handleKb_dyn(); }
		if (HX_FIELD_EQ(inName,"conclude") ) { return conclude_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vecFromDir") ) { return vecFromDir_dyn(); }
		if (HX_FIELD_EQ(inName,"dirFromKey") ) { return dirFromKey_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectiles") ) { return projectiles; }
		if (HX_FIELD_EQ(inName,"controlling") ) { return controlling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool PhysDemo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"rotatedBox") ) { outValue = rotatedBox_dyn(); return true;  }
	}
	return false;
}

Dynamic PhysDemo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exit") ) { exit=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"boxes") ) { boxes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cooldown") ) { cooldown=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movement") ) { movement=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectiles") ) { projectiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PhysDemo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PhysDemo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cooldown","\xab","\x4b","\xa2","\xf9"));
	outFields->push(HX_HCSTRING("movement","\x2f","\x85","\x37","\x00"));
	outFields->push(HX_HCSTRING("projectiles","\x6a","\xa6","\x89","\x35"));
	outFields->push(HX_HCSTRING("boxes","\x39","\xef","\xfe","\xb6"));
	outFields->push(HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"));
	outFields->push(HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::EnumValueMap*/ ,(int)offsetof(PhysDemo_obj,cooldown),HX_HCSTRING("cooldown","\xab","\x4b","\xa2","\xf9")},
	{hx::fsObject /*::haxe::ds::EnumValueMap*/ ,(int)offsetof(PhysDemo_obj,movement),HX_HCSTRING("movement","\x2f","\x85","\x37","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PhysDemo_obj,projectiles),HX_HCSTRING("projectiles","\x6a","\xa6","\x89","\x35")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PhysDemo_obj,boxes),HX_HCSTRING("boxes","\x39","\xef","\xfe","\xb6")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(PhysDemo_obj,ball),HX_HCSTRING("ball","\xff","\xe1","\x10","\x41")},
	{hx::fsBool,(int)offsetof(PhysDemo_obj,exit),HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43")},
	{hx::fsObject /*::nape::space::Space*/ ,(int)offsetof(PhysDemo_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &PhysDemo_obj::maxCoolDown,HX_HCSTRING("maxCoolDown","\x8f","\x82","\x41","\x5a")},
	{hx::fsFloat,(void *) &PhysDemo_obj::initSpeed,HX_HCSTRING("initSpeed","\x57","\xb2","\xfb","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cooldown","\xab","\x4b","\xa2","\xf9"),
	HX_HCSTRING("movement","\x2f","\x85","\x37","\x00"),
	HX_HCSTRING("projectiles","\x6a","\xa6","\x89","\x35"),
	HX_HCSTRING("boxes","\x39","\xef","\xfe","\xb6"),
	HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("vecFromDir","\x0f","\x06","\x5c","\x1f"),
	HX_HCSTRING("dirFromKey","\x88","\x38","\xdf","\x3f"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("controlling","\xd3","\xf5","\x09","\x22"),
	HX_HCSTRING("score","\x52","\x73","\xd9","\x78"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("handleKb","\x5f","\xff","\x23","\xd5"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("conclude","\xab","\xe8","\xf9","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysDemo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PhysDemo_obj::maxCoolDown,"maxCoolDown");
	HX_MARK_MEMBER_NAME(PhysDemo_obj::initSpeed,"initSpeed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysDemo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PhysDemo_obj::maxCoolDown,"maxCoolDown");
	HX_VISIT_MEMBER_NAME(PhysDemo_obj::initSpeed,"initSpeed");
};

#endif

hx::Class PhysDemo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("maxCoolDown","\x8f","\x82","\x41","\x5a"),
	HX_HCSTRING("initSpeed","\x57","\xb2","\xfb","\x9c"),
	HX_HCSTRING("rotatedBox","\xe2","\xdb","\x7d","\x8f"),
	::String(null()) };

void PhysDemo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.demo.PhysDemo","\x0f","\x44","\xa9","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PhysDemo_obj::__GetStatic;
	__mClass->mSetStaticField = &PhysDemo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PhysDemo_obj >;
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

void PhysDemo_obj::__boot()
{
	maxCoolDown= ((Float)100);
	initSpeed= ((Float)20);
}

} // end namespace control
} // end namespace demo
