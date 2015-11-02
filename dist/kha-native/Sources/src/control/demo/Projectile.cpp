#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_control_demo_Projectile
#include <control/demo/Projectile.h>
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
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace control{
namespace demo{

Void Projectile_obj::__construct(::nape::space::Space space,::util::Vector pos,::util::Vector vel)
{
HX_STACK_FRAME("control.demo.Projectile","new",0x17453ad5,"control.demo.Projectile.new","control/demo/PhysDemo.hx",37,0xb139f1af)
HX_STACK_THIS(this)
HX_STACK_ARG(space,"space")
HX_STACK_ARG(pos,"pos")
HX_STACK_ARG(vel,"vel")
{
	HX_STACK_LINE(39)
	this->life = ((Float)0);
	HX_STACK_LINE(43)
	::nape::phys::BodyType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::nape::phys::BodyType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		if ((tmp2)){
			HX_STACK_LINE(43)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(43)
			::nape::phys::BodyType tmp3 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp3;
			HX_STACK_LINE(43)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(43)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
	}
	HX_STACK_LINE(43)
	::nape::phys::Body tmp1 = ::nape::phys::Body_obj::__new(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	this->box = tmp1;
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::nape::phys::Body tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		::nape::shape::ShapeList tmp3 = tmp2->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		::nape::shape::ShapeList _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(44)
		Array< ::Dynamic > tmp4 = ::nape::shape::Polygon_obj::box((int)20,(int)20,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::nape::shape::Polygon tmp5 = ::nape::shape::Polygon_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::nape::shape::Shape obj = tmp5;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(44)
		bool tmp6 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		if ((tmp6)){
			HX_STACK_LINE(44)
			::nape::shape::Shape tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			_this->push(tmp7);
		}
		else{
			HX_STACK_LINE(44)
			::nape::shape::Shape tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			_this->unshift(tmp7);
		}
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::nape::phys::Body tmp3 = this->box;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(45)
			::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			if ((tmp5)){
				HX_STACK_LINE(45)
				_this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(45)
			tmp2 = _this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(45)
		::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		Float x = pos->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(45)
		Float y = pos->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			bool tmp3 = (_this != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			if ((tmp3)){
				HX_STACK_LINE(45)
				tmp4 = _this->zpp_disp;
			}
			else{
				HX_STACK_LINE(45)
				tmp4 = false;
			}
			HX_STACK_LINE(45)
			if ((tmp4)){
				HX_STACK_LINE(45)
				::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(45)
			bool tmp3 = _this1->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			if ((tmp3)){
				HX_STACK_LINE(45)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(45)
			bool tmp4 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			if ((tmp4)){
				HX_STACK_LINE(45)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(45)
		bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		if ((tmp4)){
			HX_STACK_LINE(45)
			tmp5 = (y != y);
		}
		else{
			HX_STACK_LINE(45)
			tmp5 = true;
		}
		HX_STACK_LINE(45)
		if ((tmp5)){
			HX_STACK_LINE(45)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(45)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				if ((tmp7)){
					HX_STACK_LINE(45)
					tmp8 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(45)
					tmp8 = false;
				}
				HX_STACK_LINE(45)
				if ((tmp8)){
					HX_STACK_LINE(45)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(45)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(45)
					HX_STACK_DO_THROW(tmp10);
				}
			}
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(45)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				if ((tmp7)){
					HX_STACK_LINE(45)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(45)
			tmp6 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(45)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		if ((tmp8)){
			HX_STACK_LINE(45)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(45)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(45)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(45)
					if ((tmp14)){
						HX_STACK_LINE(45)
						tmp13 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(45)
						tmp13 = false;
					}
					HX_STACK_LINE(45)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(45)
					if ((tmp15)){
						HX_STACK_LINE(45)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(45)
						::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(45)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(45)
						::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(45)
						::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(45)
						HX_STACK_DO_THROW(tmp20);
					}
				}
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(45)
					bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(45)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(45)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					if ((tmp13)){
						HX_STACK_LINE(45)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(45)
				Float tmp11 = _this->zpp_inner->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				tmp10 = tmp11;
			}
			HX_STACK_LINE(45)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			tmp9 = (tmp10 == tmp11);
		}
		else{
			HX_STACK_LINE(45)
			tmp9 = false;
		}
		HX_STACK_LINE(45)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		if ((tmp10)){
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				_this->zpp_inner->x = x;
				HX_STACK_LINE(45)
				_this->zpp_inner->y = y;
				HX_STACK_LINE(45)
				{
				}
			}
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(45)
				bool tmp11 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				if ((tmp11)){
					HX_STACK_LINE(45)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = _this1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(45)
					_this1->_invalidate(tmp12);
				}
			}
		}
		HX_STACK_LINE(45)
		_this;
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::nape::phys::Body tmp3 = this->box;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(46)
			::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			if ((tmp5)){
				HX_STACK_LINE(46)
				_this->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(46)
			tmp2 = _this->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(46)
		::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		Float x = vel->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(46)
		Float y = vel->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			bool tmp3 = (_this != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			if ((tmp3)){
				HX_STACK_LINE(46)
				tmp4 = _this->zpp_disp;
			}
			else{
				HX_STACK_LINE(46)
				tmp4 = false;
			}
			HX_STACK_LINE(46)
			if ((tmp4)){
				HX_STACK_LINE(46)
				::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(46)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(46)
			bool tmp3 = _this1->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			if ((tmp3)){
				HX_STACK_LINE(46)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(46)
			bool tmp4 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			if ((tmp4)){
				HX_STACK_LINE(46)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(46)
		bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		if ((tmp4)){
			HX_STACK_LINE(46)
			tmp5 = (y != y);
		}
		else{
			HX_STACK_LINE(46)
			tmp5 = true;
		}
		HX_STACK_LINE(46)
		if ((tmp5)){
			HX_STACK_LINE(46)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(46)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(46)
				if ((tmp7)){
					HX_STACK_LINE(46)
					tmp8 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(46)
					tmp8 = false;
				}
				HX_STACK_LINE(46)
				if ((tmp8)){
					HX_STACK_LINE(46)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					HX_STACK_DO_THROW(tmp10);
				}
			}
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(46)
				bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				if ((tmp7)){
					HX_STACK_LINE(46)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(46)
			tmp6 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(46)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		if ((tmp8)){
			HX_STACK_LINE(46)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(46)
					if ((tmp14)){
						HX_STACK_LINE(46)
						tmp13 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(46)
						tmp13 = false;
					}
					HX_STACK_LINE(46)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(46)
					if ((tmp15)){
						HX_STACK_LINE(46)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(46)
						::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(46)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(46)
						::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(46)
						::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(46)
						HX_STACK_DO_THROW(tmp20);
					}
				}
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(46)
					bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					if ((tmp13)){
						HX_STACK_LINE(46)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(46)
				Float tmp11 = _this->zpp_inner->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(46)
				tmp10 = tmp11;
			}
			HX_STACK_LINE(46)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			tmp9 = (tmp10 == tmp11);
		}
		else{
			HX_STACK_LINE(46)
			tmp9 = false;
		}
		HX_STACK_LINE(46)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		if ((tmp10)){
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				_this->zpp_inner->x = x;
				HX_STACK_LINE(46)
				_this->zpp_inner->y = y;
				HX_STACK_LINE(46)
				{
				}
			}
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(46)
				bool tmp11 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(46)
				if ((tmp11)){
					HX_STACK_LINE(46)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = _this1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					_this1->_invalidate(tmp12);
				}
			}
		}
		HX_STACK_LINE(46)
		_this;
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::nape::phys::Body tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::zpp_nape::phys::ZPP_Compound tmp3 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			if ((tmp4)){
				HX_STACK_LINE(47)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
			}
			HX_STACK_LINE(47)
			_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
			HX_STACK_LINE(47)
			bool tmp5 = _this->zpp_inner->world;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			if ((tmp5)){
				HX_STACK_LINE(47)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(47)
			::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			::nape::space::Space tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			if ((tmp7)){
				HX_STACK_LINE(47)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(47)
				::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				tmp8 = tmp9->outer;
			}
			HX_STACK_LINE(47)
			::nape::space::Space tmp9 = space;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			if ((tmp10)){
				HX_STACK_LINE(47)
				::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(47)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				if ((tmp12)){
					HX_STACK_LINE(47)
					tmp13 = null();
				}
				else{
					HX_STACK_LINE(47)
					::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(47)
					tmp13 = tmp14->outer;
				}
				HX_STACK_LINE(47)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				if ((tmp14)){
					HX_STACK_LINE(47)
					::zpp_nape::space::ZPP_Component tmp15 = _this->zpp_inner->component;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(47)
					tmp15->woken = false;
				}
				HX_STACK_LINE(47)
				::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(47)
				::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(47)
				if ((tmp16)){
					HX_STACK_LINE(47)
					tmp17 = null();
				}
				else{
					HX_STACK_LINE(47)
					::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(47)
					tmp17 = tmp18->outer;
				}
				HX_STACK_LINE(47)
				bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(47)
				if ((tmp18)){
					HX_STACK_LINE(47)
					::zpp_nape::space::ZPP_Space tmp19 = _this->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(47)
					bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(47)
					::nape::space::Space tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(47)
					if ((tmp20)){
						HX_STACK_LINE(47)
						tmp21 = null();
					}
					else{
						HX_STACK_LINE(47)
						::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(47)
						tmp21 = tmp22->outer;
					}
					HX_STACK_LINE(47)
					::nape::phys::BodyList tmp22 = tmp21->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(47)
					::nape::phys::Body tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(47)
					tmp22->remove(tmp23);
				}
				HX_STACK_LINE(47)
				bool tmp19 = (space != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(47)
				if ((tmp19)){
					HX_STACK_LINE(47)
					::nape::phys::BodyList tmp20 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(47)
					::nape::phys::BodyList _this1 = tmp20;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(47)
					bool tmp21 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(47)
					if ((tmp21)){
						HX_STACK_LINE(47)
						::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(47)
						_this1->push(tmp22);
					}
					else{
						HX_STACK_LINE(47)
						::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(47)
						_this1->unshift(tmp22);
					}
				}
			}
		}
		HX_STACK_LINE(47)
		::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		if ((tmp4)){
			HX_STACK_LINE(47)
			Dynamic();
		}
		else{
			HX_STACK_LINE(47)
			::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			tmp5->outer;
		}
	}
}
;
	return null();
}

//Projectile_obj::~Projectile_obj() { }

Dynamic Projectile_obj::__CreateEmpty() { return  new Projectile_obj; }
hx::ObjectPtr< Projectile_obj > Projectile_obj::__new(::nape::space::Space space,::util::Vector pos,::util::Vector vel)
{  hx::ObjectPtr< Projectile_obj > _result_ = new Projectile_obj();
	_result_->__construct(space,pos,vel);
	return _result_;}

Dynamic Projectile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Projectile_obj > _result_ = new Projectile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Projectile_obj::tick( Float delta){
{
		HX_STACK_FRAME("control.demo.Projectile","tick",0x49487f48,"control.demo.Projectile.tick","control/demo/PhysDemo.hx",51,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(51)
		hx::AddEq(this->life,delta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Projectile_obj,tick,(void))

bool Projectile_obj::conclude( ){
	HX_STACK_FRAME("control.demo.Projectile","conclude",0x25697616,"control.demo.Projectile.conclude","control/demo/PhysDemo.hx",54,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	Float tmp = this->life;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	bool tmp1 = (tmp > ((Float)1000));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,conclude,return )

Float Projectile_obj::vivacity( ){
	HX_STACK_FRAME("control.demo.Projectile","vivacity",0x70b8e734,"control.demo.Projectile.vivacity","control/demo/PhysDemo.hx",58,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	Float tmp = this->life;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	Float tmp1 = (Float(tmp) / Float(((Float)1000)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	Float tmp2 = ((int)1 - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	Float tmp4 = ((int)3 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	Float tmp5 = this->life;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	Float tmp7 = (Float(tmp6) / Float(((Float)1000)));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(59)
	Float tmp9 = (tmp2 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(59)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,vivacity,return )

Float Projectile_obj::maxLife;


Projectile_obj::Projectile_obj()
{
}

void Projectile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Projectile);
	HX_MARK_MEMBER_NAME(life,"life");
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_END_CLASS();
}

void Projectile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(life,"life");
	HX_VISIT_MEMBER_NAME(box,"box");
}

Dynamic Projectile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"life") ) { return life; }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"conclude") ) { return conclude_dyn(); }
		if (HX_FIELD_EQ(inName,"vivacity") ) { return vivacity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Projectile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"life") ) { life=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Projectile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Projectile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("life","\xfc","\x10","\xb3","\x47"));
	outFields->push(HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Projectile_obj,life),HX_HCSTRING("life","\xfc","\x10","\xb3","\x47")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Projectile_obj,box),HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Projectile_obj::maxLife,HX_HCSTRING("maxLife","\xc0","\x69","\xe3","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("life","\xfc","\x10","\xb3","\x47"),
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("conclude","\xab","\xe8","\xf9","\x69"),
	HX_HCSTRING("vivacity","\xc9","\x59","\x49","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Projectile_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Projectile_obj::maxLife,"maxLife");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Projectile_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Projectile_obj::maxLife,"maxLife");
};

#endif

hx::Class Projectile_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("maxLife","\xc0","\x69","\xe3","\xc7"),
	::String(null()) };

void Projectile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.demo.Projectile","\x63","\x2c","\x58","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Projectile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Projectile_obj >;
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

void Projectile_obj::__boot()
{
	maxLife= ((Float)1000);
}

} // end namespace control
} // end namespace demo
