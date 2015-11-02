#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_control_demo_FloatingBox
#include <control/demo/FloatingBox.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace control{
namespace demo{

Void FloatingBox_obj::__construct(::nape::space::Space space,int index)
{
HX_STACK_FRAME("control.demo.FloatingBox","new",0xdcd51b9d,"control.demo.FloatingBox.new","control/demo/PhysDemo.hx",83,0xb139f1af)
HX_STACK_THIS(this)
HX_STACK_ARG(space,"space")
HX_STACK_ARG(index,"index")
{
	HX_STACK_LINE(84)
	this->index = index;
	HX_STACK_LINE(86)
	::nape::phys::BodyType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		::nape::phys::BodyType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		if ((tmp2)){
			HX_STACK_LINE(86)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(86)
			::nape::phys::BodyType tmp3 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp3;
			HX_STACK_LINE(86)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(86)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
	}
	HX_STACK_LINE(86)
	::nape::phys::Body tmp1 = ::nape::phys::Body_obj::__new(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	this->box = tmp1;
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		::nape::phys::Body tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		::nape::shape::ShapeList tmp3 = tmp2->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		::nape::shape::ShapeList _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(87)
		Array< ::Dynamic > tmp4 = ::nape::shape::Polygon_obj::box((int)24,(int)24,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::nape::shape::Polygon tmp5 = ::nape::shape::Polygon_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::nape::shape::Shape obj = tmp5;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(87)
		bool tmp6 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		if ((tmp6)){
			HX_STACK_LINE(87)
			::nape::shape::Shape tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			_this->push(tmp7);
		}
		else{
			HX_STACK_LINE(87)
			::nape::shape::Shape tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			_this->unshift(tmp7);
		}
	}
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		::nape::phys::Body tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::zpp_nape::phys::ZPP_Compound tmp3 = _this->zpp_inner->compound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			if ((tmp4)){
				HX_STACK_LINE(88)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set","\x2f","\x88","\x46","\xff"));
			}
			HX_STACK_LINE(88)
			_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
			HX_STACK_LINE(88)
			bool tmp5 = _this->zpp_inner->world;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			if ((tmp5)){
				HX_STACK_LINE(88)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
			}
			HX_STACK_LINE(88)
			::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			::nape::space::Space tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			if ((tmp7)){
				HX_STACK_LINE(88)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(88)
				::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(88)
				tmp8 = tmp9->outer;
			}
			HX_STACK_LINE(88)
			::nape::space::Space tmp9 = space;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(88)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			if ((tmp10)){
				HX_STACK_LINE(88)
				::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(88)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(88)
				::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(88)
				if ((tmp12)){
					HX_STACK_LINE(88)
					tmp13 = null();
				}
				else{
					HX_STACK_LINE(88)
					::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(88)
					tmp13 = tmp14->outer;
				}
				HX_STACK_LINE(88)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(88)
				if ((tmp14)){
					HX_STACK_LINE(88)
					::zpp_nape::space::ZPP_Component tmp15 = _this->zpp_inner->component;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(88)
					tmp15->woken = false;
				}
				HX_STACK_LINE(88)
				::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(88)
				bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(88)
				::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(88)
				if ((tmp16)){
					HX_STACK_LINE(88)
					tmp17 = null();
				}
				else{
					HX_STACK_LINE(88)
					::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(88)
					tmp17 = tmp18->outer;
				}
				HX_STACK_LINE(88)
				bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(88)
				if ((tmp18)){
					HX_STACK_LINE(88)
					::zpp_nape::space::ZPP_Space tmp19 = _this->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(88)
					bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(88)
					::nape::space::Space tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(88)
					if ((tmp20)){
						HX_STACK_LINE(88)
						tmp21 = null();
					}
					else{
						HX_STACK_LINE(88)
						::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(88)
						tmp21 = tmp22->outer;
					}
					HX_STACK_LINE(88)
					::nape::phys::BodyList tmp22 = tmp21->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(88)
					::nape::phys::Body tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(88)
					tmp22->remove(tmp23);
				}
				HX_STACK_LINE(88)
				bool tmp19 = (space != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(88)
				if ((tmp19)){
					HX_STACK_LINE(88)
					::nape::phys::BodyList tmp20 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(88)
					::nape::phys::BodyList _this1 = tmp20;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(88)
					bool tmp21 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(88)
					if ((tmp21)){
						HX_STACK_LINE(88)
						::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(88)
						_this1->push(tmp22);
					}
					else{
						HX_STACK_LINE(88)
						::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(88)
						_this1->unshift(tmp22);
					}
				}
			}
		}
		HX_STACK_LINE(88)
		::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		if ((tmp4)){
			HX_STACK_LINE(88)
			Dynamic();
		}
		else{
			HX_STACK_LINE(88)
			::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			tmp5->outer;
		}
	}
	HX_STACK_LINE(89)
	::util::Vector tmp2 = this->originalPos();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	this->setPos(tmp2);
}
;
	return null();
}

//FloatingBox_obj::~FloatingBox_obj() { }

Dynamic FloatingBox_obj::__CreateEmpty() { return  new FloatingBox_obj; }
hx::ObjectPtr< FloatingBox_obj > FloatingBox_obj::__new(::nape::space::Space space,int index)
{  hx::ObjectPtr< FloatingBox_obj > _result_ = new FloatingBox_obj();
	_result_->__construct(space,index);
	return _result_;}

Dynamic FloatingBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FloatingBox_obj > _result_ = new FloatingBox_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::util::Vector FloatingBox_obj::originalPos( ){
	HX_STACK_FRAME("control.demo.FloatingBox","originalPos",0xf7c1fa00,"control.demo.FloatingBox.originalPos","control/demo/PhysDemo.hx",71,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	Float tmp = ((Float)800.);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	int tmp1 = (int)850;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	int tmp2 = this->index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	Float tmp3 = (tmp2 + ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	Float tmp4 = ((int)50 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	Float tmp5 = (tmp1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	::util::Vector tmp6 = ::util::Vector_obj::__new(tmp,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(72)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(FloatingBox_obj,originalPos,return )

::util::Vector FloatingBox_obj::getPos( ){
	HX_STACK_FRAME("control.demo.FloatingBox","getPos",0x88962f81,"control.demo.FloatingBox.getPos","control/demo/PhysDemo.hx",75,0xb139f1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		::nape::phys::Body tmp1 = this->box;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(76)
		::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp3)){
			HX_STACK_LINE(76)
			_this->zpp_inner->setupPosition();
		}
		HX_STACK_LINE(76)
		tmp = _this->zpp_inner->wrap_pos;
	}
	HX_STACK_LINE(76)
	::util::Vector tmp1 = ::util::Util_obj::vectorFromNape(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FloatingBox_obj,getPos,return )

Void FloatingBox_obj::setPos( ::util::Vector v){
{
		HX_STACK_FRAME("control.demo.FloatingBox","setPos",0x54de83f5,"control.demo.FloatingBox.setPos","control/demo/PhysDemo.hx",80,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(80)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::nape::phys::Body tmp1 = this->box;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(80)
			::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			if ((tmp3)){
				HX_STACK_LINE(80)
				_this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(80)
			tmp = _this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(80)
		::nape::geom::Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(80)
		Float x = v->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(80)
		Float y = v->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			bool tmp1 = (_this != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			if ((tmp1)){
				HX_STACK_LINE(80)
				tmp2 = _this->zpp_disp;
			}
			else{
				HX_STACK_LINE(80)
				tmp2 = false;
			}
			HX_STACK_LINE(80)
			if ((tmp2)){
				HX_STACK_LINE(80)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(80)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(80)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(80)
			bool tmp1 = _this1->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			if ((tmp1)){
				HX_STACK_LINE(80)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
			}
			HX_STACK_LINE(80)
			bool tmp2 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			if ((tmp2)){
				HX_STACK_LINE(80)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(80)
		bool tmp1 = (x != x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		if ((tmp2)){
			HX_STACK_LINE(80)
			tmp3 = (y != y);
		}
		else{
			HX_STACK_LINE(80)
			tmp3 = true;
		}
		HX_STACK_LINE(80)
		if ((tmp3)){
			HX_STACK_LINE(80)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(80)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(80)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				if ((tmp5)){
					HX_STACK_LINE(80)
					tmp6 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(80)
					tmp6 = false;
				}
				HX_STACK_LINE(80)
				if ((tmp6)){
					HX_STACK_LINE(80)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(80)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(80)
				bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(80)
				if ((tmp5)){
					HX_STACK_LINE(80)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(80)
			tmp4 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(80)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		if ((tmp6)){
			HX_STACK_LINE(80)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(80)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(80)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(80)
					bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(80)
					if ((tmp12)){
						HX_STACK_LINE(80)
						tmp11 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(80)
						tmp11 = false;
					}
					HX_STACK_LINE(80)
					bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(80)
					if ((tmp13)){
						HX_STACK_LINE(80)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(80)
						::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(80)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(80)
						::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(80)
						::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(80)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(80)
					bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(80)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(80)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(80)
					if ((tmp11)){
						HX_STACK_LINE(80)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(80)
				Float tmp9 = _this->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(80)
				tmp8 = tmp9;
			}
			HX_STACK_LINE(80)
			Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			tmp7 = (tmp8 == tmp9);
		}
		else{
			HX_STACK_LINE(80)
			tmp7 = false;
		}
		HX_STACK_LINE(80)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(80)
		if ((tmp8)){
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				_this->zpp_inner->x = x;
				HX_STACK_LINE(80)
				_this->zpp_inner->y = y;
				HX_STACK_LINE(80)
				{
				}
			}
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(80)
				bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(80)
				if ((tmp9)){
					HX_STACK_LINE(80)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(80)
					_this1->_invalidate(tmp10);
				}
			}
		}
		HX_STACK_LINE(80)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FloatingBox_obj,setPos,(void))

Void FloatingBox_obj::reset( ){
{
		HX_STACK_FRAME("control.demo.FloatingBox","reset",0xdea09e4c,"control.demo.FloatingBox.reset","control/demo/PhysDemo.hx",92,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::util::Vector tmp = this->originalPos();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		this->setPos(tmp);
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				::nape::phys::Body tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(94)
				::nape::geom::Vec2 tmp3 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				if ((tmp4)){
					HX_STACK_LINE(94)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(94)
				tmp1 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(94)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				if ((tmp2)){
					HX_STACK_LINE(94)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(94)
					tmp3 = false;
				}
				HX_STACK_LINE(94)
				if ((tmp3)){
					HX_STACK_LINE(94)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(94)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(94)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(94)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				if ((tmp2)){
					HX_STACK_LINE(94)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(94)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				if ((tmp3)){
					HX_STACK_LINE(94)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(94)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			if ((tmp3)){
				HX_STACK_LINE(94)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(94)
				tmp4 = true;
			}
			HX_STACK_LINE(94)
			if ((tmp4)){
				HX_STACK_LINE(94)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(94)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(94)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(94)
					if ((tmp6)){
						HX_STACK_LINE(94)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(94)
						tmp7 = false;
					}
					HX_STACK_LINE(94)
					if ((tmp7)){
						HX_STACK_LINE(94)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(94)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(94)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(94)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(94)
					if ((tmp6)){
						HX_STACK_LINE(94)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(94)
				tmp5 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(94)
			bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			if ((tmp6)){
				HX_STACK_LINE(94)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					{
						HX_STACK_LINE(94)
						bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(94)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(94)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(94)
						bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(94)
						if ((tmp12)){
							HX_STACK_LINE(94)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(94)
							tmp11 = false;
						}
						HX_STACK_LINE(94)
						bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(94)
						if ((tmp13)){
							HX_STACK_LINE(94)
							::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(94)
							::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(94)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(94)
							::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(94)
							::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(94)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(94)
					{
						HX_STACK_LINE(94)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(94)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(94)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(94)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(94)
						if ((tmp11)){
							HX_STACK_LINE(94)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(94)
					Float tmp9 = _this->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(94)
					tmp8 = tmp9;
				}
				HX_STACK_LINE(94)
				tmp7 = (tmp8 == (int)0);
			}
			else{
				HX_STACK_LINE(94)
				tmp7 = false;
			}
			HX_STACK_LINE(94)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			if ((tmp8)){
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					_this->zpp_inner->x = (int)0;
					HX_STACK_LINE(94)
					_this->zpp_inner->y = (int)0;
					HX_STACK_LINE(94)
					{
					}
				}
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(94)
					bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(94)
					if ((tmp9)){
						HX_STACK_LINE(94)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(94)
						_this1->_invalidate(tmp10);
					}
				}
			}
			HX_STACK_LINE(94)
			_this;
		}
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::nape::phys::Body tmp1 = this->box;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::rotation","\x40","\x9d","\x24","\x6b"));
				HX_STACK_LINE(95)
				bool tmp2 = _this->zpp_inner->world;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(95)
				if ((tmp2)){
					HX_STACK_LINE(95)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(95)
				int tmp3 = _this->zpp_inner->type;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(95)
				int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(95)
				bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				if ((tmp5)){
					HX_STACK_LINE(95)
					::zpp_nape::space::ZPP_Space tmp7 = _this->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(95)
					::zpp_nape::space::ZPP_Space tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(95)
					tmp6 = (tmp8 != null());
				}
				else{
					HX_STACK_LINE(95)
					tmp6 = false;
				}
				HX_STACK_LINE(95)
				if ((tmp6)){
					HX_STACK_LINE(95)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Static objects cannot be rotated once inside a Space","\x1b","\xe2","\x01","\xc9"));
				}
				HX_STACK_LINE(95)
				Float tmp7 = _this->zpp_inner->rot;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(95)
				if ((tmp8)){
					HX_STACK_LINE(95)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(95)
					if ((tmp9)){
						HX_STACK_LINE(95)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::rotation cannot be NaN","\xa9","\xa5","\x47","\x9c"));
					}
					HX_STACK_LINE(95)
					_this->zpp_inner->rot = (int)0;
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						::zpp_nape::phys::ZPP_Body _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(95)
						_this1->zip_axis = true;
						HX_STACK_LINE(95)
						{
							HX_STACK_LINE(95)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp10 = _this1->shapes->head;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(95)
							::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(95)
							while((true)){
								HX_STACK_LINE(95)
								bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								if ((tmp12)){
									HX_STACK_LINE(95)
									break;
								}
								HX_STACK_LINE(95)
								::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									int tmp13 = s->type;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									if ((tmp15)){
										HX_STACK_LINE(95)
										s->polygon->invalidate_gverts();
										HX_STACK_LINE(95)
										s->polygon->invalidate_gaxi();
									}
									HX_STACK_LINE(95)
									s->invalidate_worldCOM();
								}
								HX_STACK_LINE(95)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(95)
						_this1->zip_worldCOM = true;
					}
					HX_STACK_LINE(95)
					_this->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(95)
			_this->zpp_inner->rot;
		}
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::nape::phys::Body tmp1 = this->box;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				bool tmp2 = _this->zpp_inner->world;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(96)
				if ((tmp2)){
					HX_STACK_LINE(96)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(96)
				Float tmp3 = _this->zpp_inner->angvel;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(96)
				bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(96)
				if ((tmp4)){
					HX_STACK_LINE(96)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(96)
					if ((tmp5)){
						HX_STACK_LINE(96)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::angularVel cannot be NaN","\xc6","\x69","\x71","\x8d"));
					}
					HX_STACK_LINE(96)
					int tmp6 = _this->zpp_inner->type;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(96)
					int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(96)
					bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: A static object cannot be given a velocity","\x3b","\xe0","\xbd","\x35"));
					}
					HX_STACK_LINE(96)
					_this->zpp_inner->angvel = (int)0;
					HX_STACK_LINE(96)
					_this->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(96)
			_this->zpp_inner->angvel;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FloatingBox_obj,reset,(void))

Void FloatingBox_obj::tick( Float delta){
{
		HX_STACK_FRAME("control.demo.FloatingBox","tick",0x619d4d80,"control.demo.FloatingBox.tick","control/demo/PhysDemo.hx",99,0xb139f1af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(100)
		::util::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::util::Vector tmp1 = this->originalPos();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			::util::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(100)
			::util::Vector tmp2 = this->getPos();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			::util::Vector v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(100)
			Float tmp3 = (_this->x - v->x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			Float tmp4 = (_this->y - v->y);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			tmp = ::util::Vector_obj::__new(tmp3,tmp4);
		}
		HX_STACK_LINE(100)
		::util::Vector dp = tmp;		HX_STACK_VAR(dp,"dp");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				::nape::phys::Body tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(101)
				::nape::geom::Vec2 tmp3 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				if ((tmp4)){
					HX_STACK_LINE(101)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(101)
				tmp1 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(101)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(101)
			Float tmp2 = (dp->x * ((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(101)
			Float tmp3 = (dp->y * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				bool tmp4 = (_this != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				if ((tmp4)){
					HX_STACK_LINE(101)
					tmp5 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(101)
					tmp5 = false;
				}
				HX_STACK_LINE(101)
				if ((tmp5)){
					HX_STACK_LINE(101)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(101)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(101)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(101)
				bool tmp4 = _this1->_immutable;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				if ((tmp4)){
					HX_STACK_LINE(101)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(101)
				bool tmp5 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				if ((tmp5)){
					HX_STACK_LINE(101)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(101)
			bool tmp4 = (x != x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			if ((tmp5)){
				HX_STACK_LINE(101)
				tmp6 = (y != y);
			}
			else{
				HX_STACK_LINE(101)
				tmp6 = true;
			}
			HX_STACK_LINE(101)
			if ((tmp6)){
				HX_STACK_LINE(101)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(101)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(101)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(101)
					if ((tmp8)){
						HX_STACK_LINE(101)
						tmp9 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(101)
						tmp9 = false;
					}
					HX_STACK_LINE(101)
					if ((tmp9)){
						HX_STACK_LINE(101)
						::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(101)
						::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(101)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(101)
					bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(101)
					if ((tmp8)){
						HX_STACK_LINE(101)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(101)
				tmp7 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(101)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			if ((tmp9)){
				HX_STACK_LINE(101)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					{
						HX_STACK_LINE(101)
						bool tmp12 = (_this != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(101)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(101)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(101)
						bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(101)
						if ((tmp15)){
							HX_STACK_LINE(101)
							tmp14 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(101)
							tmp14 = false;
						}
						HX_STACK_LINE(101)
						bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(101)
						if ((tmp16)){
							HX_STACK_LINE(101)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(101)
							::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(101)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(101)
							::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(101)
							::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(101)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(101)
					{
						HX_STACK_LINE(101)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(101)
						bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(101)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(101)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(101)
						if ((tmp14)){
							HX_STACK_LINE(101)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(101)
					Float tmp12 = _this->zpp_inner->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(101)
					tmp11 = tmp12;
				}
				HX_STACK_LINE(101)
				Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(101)
				tmp10 = (tmp11 == tmp12);
			}
			else{
				HX_STACK_LINE(101)
				tmp10 = false;
			}
			HX_STACK_LINE(101)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(101)
			if ((tmp11)){
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(101)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(101)
					{
					}
				}
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(101)
					bool tmp12 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(101)
					if ((tmp12)){
						HX_STACK_LINE(101)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(101)
						_this1->_invalidate(tmp13);
					}
				}
			}
			HX_STACK_LINE(101)
			_this;
		}
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			::nape::phys::Body tmp1 = this->box;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(102)
			::nape::phys::Body tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			Float tmp3 = tmp2->zpp_inner->angvel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			Float tmp4 = (Float(delta) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			Float tmp5 = ::Math_obj::pow(((Float)0.5),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			Float angularVel = tmp6;		HX_STACK_VAR(angularVel,"angularVel");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				bool tmp7 = _this->zpp_inner->world;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				if ((tmp7)){
					HX_STACK_LINE(102)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(102)
				Float tmp8 = _this->zpp_inner->angvel;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				Float tmp9 = angularVel;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(102)
				if ((tmp10)){
					HX_STACK_LINE(102)
					bool tmp11 = (angularVel != angularVel);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(102)
					if ((tmp11)){
						HX_STACK_LINE(102)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::angularVel cannot be NaN","\xc6","\x69","\x71","\x8d"));
					}
					HX_STACK_LINE(102)
					int tmp12 = _this->zpp_inner->type;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(102)
					int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(102)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(102)
					if ((tmp14)){
						HX_STACK_LINE(102)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: A static object cannot be given a velocity","\x3b","\xe0","\xbd","\x35"));
					}
					HX_STACK_LINE(102)
					_this->zpp_inner->angvel = angularVel;
					HX_STACK_LINE(102)
					_this->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(102)
			_this->zpp_inner->angvel;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FloatingBox_obj,tick,(void))

int FloatingBox_obj::w;

int FloatingBox_obj::h;


FloatingBox_obj::FloatingBox_obj()
{
}

void FloatingBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FloatingBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void FloatingBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic FloatingBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getPos") ) { return getPos_dyn(); }
		if (HX_FIELD_EQ(inName,"setPos") ) { return setPos_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"originalPos") ) { return originalPos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FloatingBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FloatingBox_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FloatingBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(FloatingBox_obj,box),HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00")},
	{hx::fsInt,(int)offsetof(FloatingBox_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FloatingBox_obj::w,HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FloatingBox_obj::h,HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("originalPos","\xc3","\xa9","\xf7","\x34"),
	HX_HCSTRING("getPos","\x9e","\x96","\x24","\xa3"),
	HX_HCSTRING("setPos","\x12","\xeb","\x6c","\x6f"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FloatingBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FloatingBox_obj::w,"w");
	HX_MARK_MEMBER_NAME(FloatingBox_obj::h,"h");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatingBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FloatingBox_obj::w,"w");
	HX_VISIT_MEMBER_NAME(FloatingBox_obj::h,"h");
};

#endif

hx::Class FloatingBox_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	::String(null()) };

void FloatingBox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.demo.FloatingBox","\x2b","\x09","\xa6","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FloatingBox_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FloatingBox_obj >;
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

void FloatingBox_obj::__boot()
{
	w= (int)1600;
	h= (int)900;
}

} // end namespace control
} // end namespace demo
