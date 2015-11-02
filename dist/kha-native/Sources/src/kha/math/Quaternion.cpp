#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
#ifndef INCLUDED_kha_math_Quaternion
#include <kha/math/Quaternion.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif
namespace kha{
namespace math{

Void Quaternion_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{
HX_STACK_FRAME("kha.math.Quaternion","new",0xc02c67cc,"kha.math.Quaternion.new","kha/math/Quaternion.hx",13,0x3ed4fcc4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
HX_STACK_ARG(__o_w,"w")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(1);
{
	HX_STACK_LINE(14)
	Array< Float > tmp = Array_obj< Float >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->values = tmp;
	HX_STACK_LINE(15)
	Array< Float > tmp1 = this->values;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	tmp1->push(tmp2);
	HX_STACK_LINE(16)
	Array< Float > tmp3 = this->values;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	tmp3->push(tmp4);
	HX_STACK_LINE(17)
	Array< Float > tmp5 = this->values;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(17)
	Float tmp6 = z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(17)
	tmp5->push(tmp6);
	HX_STACK_LINE(18)
	Array< Float > tmp7 = this->values;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(18)
	Float tmp8 = w;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(18)
	tmp7->push(tmp8);
}
;
	return null();
}

//Quaternion_obj::~Quaternion_obj() { }

Dynamic Quaternion_obj::__CreateEmpty() { return  new Quaternion_obj; }
hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{  hx::ObjectPtr< Quaternion_obj > _result_ = new Quaternion_obj();
	_result_->__construct(__o_x,__o_y,__o_z,__o_w);
	return _result_;}

Dynamic Quaternion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quaternion_obj > _result_ = new Quaternion_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::kha::math::Quaternion Quaternion_obj::slerp( Float t,::kha::math::Quaternion q){
	HX_STACK_FRAME("kha.math.Quaternion","slerp",0x578312d6,"kha.math.Quaternion.slerp","kha/math/Quaternion.hx",32,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(33)
	Float epsilon = ((Float)0.0005);		HX_STACK_VAR(epsilon,"epsilon");
	HX_STACK_LINE(35)
	::kha::math::Quaternion tmp = q;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	Float tmp1 = this->dot(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	Float dot = tmp1;		HX_STACK_VAR(dot,"dot");
	HX_STACK_LINE(37)
	Float tmp2 = dot;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Float tmp3 = ((int)1 - epsilon);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	if ((tmp4)){
		HX_STACK_LINE(38)
		::kha::math::Quaternion tmp5 = q;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		::kha::math::Quaternion tmp6 = this->sub(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		::kha::math::Quaternion tmp8 = tmp6->scaled(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		::kha::math::Quaternion tmp9 = q->add(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		::kha::math::Quaternion result = tmp9;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(39)
		result->normalize();
		HX_STACK_LINE(40)
		::kha::math::Quaternion tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		return tmp10;
	}
	HX_STACK_LINE(42)
	bool tmp5 = (dot < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	if ((tmp5)){
		HX_STACK_LINE(42)
		dot = (int)0;
	}
	HX_STACK_LINE(43)
	bool tmp6 = (dot > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	if ((tmp6)){
		HX_STACK_LINE(43)
		dot = (int)1;
	}
	HX_STACK_LINE(45)
	Float tmp7 = dot;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	Float tmp8 = ::Math_obj::acos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	Float theta0 = tmp8;		HX_STACK_VAR(theta0,"theta0");
	HX_STACK_LINE(46)
	Float tmp9 = (theta0 * t);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(46)
	Float theta = tmp9;		HX_STACK_VAR(theta,"theta");
	HX_STACK_LINE(48)
	Float tmp10 = dot;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(48)
	::kha::math::Quaternion tmp11 = this->scaled(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	::kha::math::Quaternion tmp12 = q->sub(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(48)
	::kha::math::Quaternion q2 = tmp12;		HX_STACK_VAR(q2,"q2");
	HX_STACK_LINE(49)
	q2->normalize();
	HX_STACK_LINE(51)
	Float tmp13 = theta;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(51)
	Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(51)
	::kha::math::Quaternion tmp15 = this->scaled(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(51)
	Float tmp16 = theta;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(51)
	Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(51)
	::kha::math::Quaternion tmp18 = q2->scaled(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(51)
	::kha::math::Quaternion tmp19 = tmp15->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(51)
	::kha::math::Quaternion result = tmp19;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(53)
	result->normalize();
	HX_STACK_LINE(55)
	::kha::math::Quaternion tmp20 = result;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(55)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,slerp,return )

::kha::math::Quaternion Quaternion_obj::rotated( ::kha::math::Quaternion b){
	HX_STACK_FRAME("kha.math.Quaternion","rotated",0x2dd40715,"kha.math.Quaternion.rotated","kha/math/Quaternion.hx",59,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(60)
	::kha::math::Quaternion q = ::kha::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(61)
	Float tmp = this->get_w();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Float tmp1 = b->get_w();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	Float tmp3 = this->get_x();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	Float tmp4 = b->get_x();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	Float tmp7 = this->get_y();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(61)
	Float tmp8 = b->get_y();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(61)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(61)
	Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(61)
	Float tmp11 = this->get_z();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(61)
	Float tmp12 = b->get_z();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(61)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(61)
	Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(61)
	q->set_w(tmp14);
	HX_STACK_LINE(62)
	Float tmp15 = this->get_w();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(62)
	Float tmp16 = b->get_x();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(62)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(62)
	Float tmp18 = this->get_x();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(62)
	Float tmp19 = b->get_w();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(62)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(62)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(62)
	Float tmp22 = this->get_y();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(62)
	Float tmp23 = b->get_z();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(62)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(62)
	Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(62)
	Float tmp26 = this->get_z();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(62)
	Float tmp27 = b->get_y();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(62)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(62)
	Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(62)
	q->set_x(tmp29);
	HX_STACK_LINE(63)
	Float tmp30 = this->get_w();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(63)
	Float tmp31 = b->get_y();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(63)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(63)
	Float tmp33 = this->get_y();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(63)
	Float tmp34 = b->get_w();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(63)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(63)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(63)
	Float tmp37 = this->get_z();		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(63)
	Float tmp38 = b->get_x();		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(63)
	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(63)
	Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(63)
	Float tmp41 = this->get_x();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(63)
	Float tmp42 = b->get_z();		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(63)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(63)
	Float tmp44 = (tmp40 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(63)
	q->set_y(tmp44);
	HX_STACK_LINE(64)
	Float tmp45 = this->get_w();		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(64)
	Float tmp46 = b->get_z();		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(64)
	Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(64)
	Float tmp48 = this->get_z();		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(64)
	Float tmp49 = b->get_w();		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(64)
	Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(64)
	Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(64)
	Float tmp52 = this->get_x();		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(64)
	Float tmp53 = b->get_y();		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(64)
	Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(64)
	Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(64)
	Float tmp56 = this->get_y();		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(64)
	Float tmp57 = b->get_x();		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(64)
	Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(64)
	Float tmp59 = (tmp55 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(64)
	q->set_z(tmp59);
	HX_STACK_LINE(65)
	q->normalize();
	HX_STACK_LINE(66)
	::kha::math::Quaternion tmp60 = q;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(66)
	return tmp60;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,rotated,return )

::kha::math::Quaternion Quaternion_obj::scaled( Float scale){
	HX_STACK_FRAME("kha.math.Quaternion","scaled",0x09e8beae,"kha.math.Quaternion.scaled","kha/math/Quaternion.hx",69,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(70)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	Float tmp1 = scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	Float tmp4 = scale;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	Float tmp6 = this->get_z();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	Float tmp7 = scale;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(70)
	Float tmp9 = this->get_w();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(70)
	Float tmp10 = scale;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(70)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(70)
	::kha::math::Quaternion tmp12 = ::kha::math::Quaternion_obj::__new(tmp2,tmp5,tmp8,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(70)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,scaled,return )

Void Quaternion_obj::scale( Float scale){
{
		HX_STACK_FRAME("kha.math.Quaternion","scale",0x518d18f6,"kha.math.Quaternion.scale","kha/math/Quaternion.hx",73,0x3ed4fcc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(74)
		Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		Float tmp1 = scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		this->set_x(tmp2);
		HX_STACK_LINE(75)
		Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		Float tmp4 = scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		this->set_y(tmp5);
		HX_STACK_LINE(76)
		Float tmp6 = this->get_z();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		Float tmp7 = scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		this->set_z(tmp8);
		HX_STACK_LINE(77)
		Float tmp9 = this->get_w();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		Float tmp10 = scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(77)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(77)
		this->set_w(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,scale,(void))

::kha::math::Matrix4 Quaternion_obj::matrix( ){
	HX_STACK_FRAME("kha.math.Quaternion","matrix",0x898b0a55,"kha.math.Quaternion.matrix","kha/math/Quaternion.hx",80,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Float s = ((Float)2.0);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(83)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	Float tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	Float xs = tmp2;		HX_STACK_VAR(xs,"xs");
	HX_STACK_LINE(84)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	Float tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(84)
	Float ys = tmp5;		HX_STACK_VAR(ys,"ys");
	HX_STACK_LINE(85)
	Float tmp6 = this->get_z();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	Float tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	Float zs = tmp8;		HX_STACK_VAR(zs,"zs");
	HX_STACK_LINE(86)
	Float tmp9 = this->get_w();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(86)
	Float tmp10 = xs;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	Float wx = tmp11;		HX_STACK_VAR(wx,"wx");
	HX_STACK_LINE(87)
	Float tmp12 = this->get_w();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(87)
	Float tmp13 = ys;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(87)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(87)
	Float wy = tmp14;		HX_STACK_VAR(wy,"wy");
	HX_STACK_LINE(88)
	Float tmp15 = this->get_w();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(88)
	Float tmp16 = zs;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(88)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(88)
	Float wz = tmp17;		HX_STACK_VAR(wz,"wz");
	HX_STACK_LINE(89)
	Float tmp18 = this->get_x();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(89)
	Float tmp19 = xs;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(89)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(89)
	Float xx = tmp20;		HX_STACK_VAR(xx,"xx");
	HX_STACK_LINE(90)
	Float tmp21 = this->get_x();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(90)
	Float tmp22 = ys;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(90)
	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(90)
	Float xy = tmp23;		HX_STACK_VAR(xy,"xy");
	HX_STACK_LINE(91)
	Float tmp24 = this->get_x();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(91)
	Float tmp25 = zs;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(91)
	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(91)
	Float xz = tmp26;		HX_STACK_VAR(xz,"xz");
	HX_STACK_LINE(92)
	Float tmp27 = this->get_y();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(92)
	Float tmp28 = ys;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(92)
	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(92)
	Float yy = tmp29;		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(93)
	Float tmp30 = this->get_y();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(93)
	Float tmp31 = zs;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(93)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(93)
	Float yz = tmp32;		HX_STACK_VAR(yz,"yz");
	HX_STACK_LINE(94)
	Float tmp33 = this->get_z();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(94)
	Float tmp34 = zs;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(94)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(94)
	Float zz = tmp35;		HX_STACK_VAR(zz,"zz");
	HX_STACK_LINE(97)
	Float tmp36 = (yy + zz);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(97)
	Float tmp37 = ((int)1 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(97)
	Float tmp38 = (xy - wz);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(97)
	Float tmp39 = (xz + wy);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(98)
	Float tmp40 = (xy + wz);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(98)
	Float tmp41 = (xx + zz);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(98)
	Float tmp42 = ((int)1 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(98)
	Float tmp43 = (yz - wx);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(99)
	Float tmp44 = (xz - wy);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(99)
	Float tmp45 = (yz + wx);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(99)
	Float tmp46 = (xx + yy);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(99)
	Float tmp47 = ((int)1 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(96)
	::kha::math::Matrix4 tmp48 = ::kha::math::Matrix4_obj::__new(tmp37,tmp38,tmp39,(int)0,tmp40,tmp42,tmp43,(int)0,tmp44,tmp45,tmp47,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(96)
	return tmp48;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,matrix,return )

Float Quaternion_obj::get( int index){
	HX_STACK_FRAME("kha.math.Quaternion","get",0xc0271802,"kha.math.Quaternion.get","kha/math/Quaternion.hx",105,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(106)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	Float tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,get,return )

Void Quaternion_obj::set( int index,Float value){
{
		HX_STACK_FRAME("kha.math.Quaternion","set",0xc030330e,"kha.math.Quaternion.set","kha/math/Quaternion.hx",109,0x3ed4fcc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(110)
		Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		tmp[tmp1] = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,set,(void))

Float Quaternion_obj::get_x( ){
	HX_STACK_FRAME("kha.math.Quaternion","get_x",0x6a1eefbb,"kha.math.Quaternion.get_x","kha/math/Quaternion.hx",119,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Float tmp1 = tmp->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_x,return )

Float Quaternion_obj::set_x( Float value){
	HX_STACK_FRAME("kha.math.Quaternion","set_x",0x52ede5c7,"kha.math.Quaternion.set_x","kha/math/Quaternion.hx",123,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(124)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	Float tmp2 = tmp[(int)0] = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_x,return )

Float Quaternion_obj::get_y( ){
	HX_STACK_FRAME("kha.math.Quaternion","get_y",0x6a1eefbc,"kha.math.Quaternion.get_y","kha/math/Quaternion.hx",127,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	Float tmp1 = tmp->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_y,return )

Float Quaternion_obj::set_y( Float value){
	HX_STACK_FRAME("kha.math.Quaternion","set_y",0x52ede5c8,"kha.math.Quaternion.set_y","kha/math/Quaternion.hx",131,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(132)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	Float tmp2 = tmp[(int)1] = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_y,return )

Float Quaternion_obj::get_z( ){
	HX_STACK_FRAME("kha.math.Quaternion","get_z",0x6a1eefbd,"kha.math.Quaternion.get_z","kha/math/Quaternion.hx",135,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	Float tmp1 = tmp->__get((int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_z,return )

Float Quaternion_obj::set_z( Float value){
	HX_STACK_FRAME("kha.math.Quaternion","set_z",0x52ede5c9,"kha.math.Quaternion.set_z","kha/math/Quaternion.hx",139,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(140)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	Float tmp2 = tmp[(int)2] = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_z,return )

Float Quaternion_obj::get_w( ){
	HX_STACK_FRAME("kha.math.Quaternion","get_w",0x6a1eefba,"kha.math.Quaternion.get_w","kha/math/Quaternion.hx",143,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	Float tmp1 = tmp->__get((int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_w,return )

Float Quaternion_obj::set_w( Float value){
	HX_STACK_FRAME("kha.math.Quaternion","set_w",0x52ede5c6,"kha.math.Quaternion.set_w","kha/math/Quaternion.hx",147,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(148)
	Array< Float > tmp = this->values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	Float tmp2 = tmp[(int)3] = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_w,return )

Float Quaternion_obj::get_length( ){
	HX_STACK_FRAME("kha.math.Quaternion","get_length",0xdd4f72c3,"kha.math.Quaternion.get_length","kha/math/Quaternion.hx",152,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	Float tmp1 = this->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	Float tmp4 = this->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(153)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(153)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(153)
	Float tmp7 = this->get_z();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(153)
	Float tmp8 = this->get_z();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(153)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(153)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(153)
	Float tmp11 = this->get_w();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(153)
	Float tmp12 = this->get_w();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(153)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(153)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(153)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(153)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_length,return )

Float Quaternion_obj::set_length( Float length){
	HX_STACK_FRAME("kha.math.Quaternion","set_length",0xe0cd1137,"kha.math.Quaternion.set_length","kha/math/Quaternion.hx",156,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(157)
	Float tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	if ((tmp1)){
		HX_STACK_LINE(157)
		return (int)0;
	}
	HX_STACK_LINE(158)
	Float tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	Float tmp3 = this->get_length();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(158)
	Float mul = tmp4;		HX_STACK_VAR(mul,"mul");
	HX_STACK_LINE(159)
	{
		HX_STACK_LINE(159)
		::kha::math::Quaternion _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(159)
		Float tmp5 = _g->get_x();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		Float tmp6 = mul;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(159)
		_g->set_x(tmp7);
	}
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		::kha::math::Quaternion _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		Float tmp5 = _g->get_y();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		Float tmp6 = mul;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		_g->set_y(tmp7);
	}
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		::kha::math::Quaternion _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		Float tmp5 = _g->get_z();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Float tmp6 = mul;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		_g->set_z(tmp7);
	}
	HX_STACK_LINE(162)
	Float tmp5 = length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(162)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_length,return )

::kha::math::Quaternion Quaternion_obj::addVector( ::kha::math::Vector3 vec){
	HX_STACK_FRAME("kha.math.Quaternion","addVector",0x3573d630,"kha.math.Quaternion.addVector","kha/math/Quaternion.hx",166,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(167)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	Float tmp1 = this->get_y();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	Float tmp2 = this->get_z();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	Float tmp3 = this->get_w();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(167)
	::kha::math::Quaternion tmp4 = ::kha::math::Quaternion_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(167)
	::kha::math::Quaternion result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(168)
	::kha::math::Quaternion q1 = ::kha::math::Quaternion_obj::__new((int)0,vec->x,vec->y,vec->z);		HX_STACK_VAR(q1,"q1");
	HX_STACK_LINE(170)
	::kha::math::Quaternion tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(170)
	::kha::math::Quaternion tmp6 = q1->mult(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(170)
	q1 = tmp6;
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		::kha::math::Quaternion _g = result;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		Float tmp7 = _g->get_x();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		Float tmp8 = q1->get_x();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(172)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(172)
		_g->set_x(tmp10);
	}
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		::kha::math::Quaternion _g = result;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		Float tmp7 = _g->get_y();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		Float tmp8 = q1->get_y();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(173)
		_g->set_y(tmp10);
	}
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		::kha::math::Quaternion _g = result;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(174)
		Float tmp7 = _g->get_z();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		Float tmp8 = q1->get_z();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(174)
		_g->set_z(tmp10);
	}
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		::kha::math::Quaternion _g = result;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		Float tmp7 = _g->get_w();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		Float tmp8 = q1->get_w();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(175)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		_g->set_w(tmp10);
	}
	HX_STACK_LINE(176)
	::kha::math::Quaternion tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(176)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,addVector,return )

::kha::math::Quaternion Quaternion_obj::add( ::kha::math::Quaternion q){
	HX_STACK_FRAME("kha.math.Quaternion","add",0xc022898d,"kha.math.Quaternion.add","kha/math/Quaternion.hx",179,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(180)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	Float tmp1 = q->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	Float tmp4 = q->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(180)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	Float tmp6 = this->get_z();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	Float tmp7 = q->get_z();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	Float tmp9 = this->get_w();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(180)
	Float tmp10 = q->get_w();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(180)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(180)
	::kha::math::Quaternion tmp12 = ::kha::math::Quaternion_obj::__new(tmp2,tmp5,tmp8,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(180)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,add,return )

::kha::math::Quaternion Quaternion_obj::sub( ::kha::math::Quaternion q){
	HX_STACK_FRAME("kha.math.Quaternion","sub",0xc03040ec,"kha.math.Quaternion.sub","kha/math/Quaternion.hx",183,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(184)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	Float tmp1 = q->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	Float tmp4 = q->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	Float tmp6 = this->get_z();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(184)
	Float tmp7 = q->get_z();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(184)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(184)
	Float tmp9 = this->get_w();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(184)
	Float tmp10 = q->get_w();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(184)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(184)
	::kha::math::Quaternion tmp12 = ::kha::math::Quaternion_obj::__new(tmp2,tmp5,tmp8,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(184)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,sub,return )

::kha::math::Quaternion Quaternion_obj::mult( ::kha::math::Quaternion r){
	HX_STACK_FRAME("kha.math.Quaternion","mult",0x66114f04,"kha.math.Quaternion.mult","kha/math/Quaternion.hx",188,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(189)
	::kha::math::Quaternion q = ::kha::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(190)
	Float tmp = this->get_w();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	Float tmp1 = r->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	Float tmp3 = this->get_x();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	Float tmp4 = r->get_w();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(190)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(190)
	Float tmp7 = this->get_y();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(190)
	Float tmp8 = r->get_z();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(190)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(190)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(190)
	Float tmp11 = this->get_z();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(190)
	Float tmp12 = r->get_y();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(190)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(190)
	Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(190)
	q->set_x(tmp14);
	HX_STACK_LINE(191)
	Float tmp15 = this->get_w();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(191)
	Float tmp16 = r->get_y();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(191)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(191)
	Float tmp18 = this->get_x();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(191)
	Float tmp19 = r->get_z();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(191)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(191)
	Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(191)
	Float tmp22 = this->get_y();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(191)
	Float tmp23 = r->get_w();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(191)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(191)
	Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(191)
	Float tmp26 = this->get_z();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(191)
	Float tmp27 = r->get_x();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(191)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(191)
	Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(191)
	q->set_y(tmp29);
	HX_STACK_LINE(192)
	Float tmp30 = this->get_w();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(192)
	Float tmp31 = r->get_z();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(192)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(192)
	Float tmp33 = this->get_x();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(192)
	Float tmp34 = r->get_y();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(192)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(192)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(192)
	Float tmp37 = this->get_y();		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(192)
	Float tmp38 = r->get_x();		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(192)
	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(192)
	Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(192)
	Float tmp41 = this->get_z();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(192)
	Float tmp42 = r->get_w();		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(192)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(192)
	Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(192)
	q->set_z(tmp44);
	HX_STACK_LINE(193)
	Float tmp45 = this->get_w();		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(193)
	Float tmp46 = r->get_w();		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(193)
	Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(193)
	Float tmp48 = this->get_x();		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(193)
	Float tmp49 = r->get_x();		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(193)
	Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(193)
	Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(193)
	Float tmp52 = this->get_y();		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(193)
	Float tmp53 = r->get_y();		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(193)
	Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(193)
	Float tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(193)
	Float tmp56 = this->get_z();		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(193)
	Float tmp57 = r->get_z();		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(193)
	Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(193)
	Float tmp59 = (tmp55 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(193)
	q->set_w(tmp59);
	HX_STACK_LINE(194)
	::kha::math::Quaternion tmp60 = q;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(194)
	return tmp60;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,mult,return )

Void Quaternion_obj::normalize( ){
{
		HX_STACK_FRAME("kha.math.Quaternion","normalize",0x919327f9,"kha.math.Quaternion.normalize","kha/math/Quaternion.hx",197,0x3ed4fcc4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		Float tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		Float tmp1 = (Float(((Float)1.0)) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		this->scale(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,normalize,(void))

Float Quaternion_obj::dot( ::kha::math::Quaternion q){
	HX_STACK_FRAME("kha.math.Quaternion","dot",0xc024d9f5,"kha.math.Quaternion.dot","kha/math/Quaternion.hx",201,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(202)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	Float tmp1 = q->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	Float tmp4 = q->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(202)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(202)
	Float tmp7 = this->get_z();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(202)
	Float tmp8 = q->get_z();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(202)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(202)
	Float tmp11 = this->get_w();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(202)
	Float tmp12 = q->get_w();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(202)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(202)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(202)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,dot,return )

::kha::math::Vector3 Quaternion_obj::getEulerAngles( int A1,int A2,int A3,hx::Null< int >  __o_S,hx::Null< int >  __o_D){
int S = __o_S.Default(1);
int D = __o_D.Default(1);
	HX_STACK_FRAME("kha.math.Quaternion","getEulerAngles",0xb1f632a7,"kha.math.Quaternion.getEulerAngles","kha/math/Quaternion.hx",221,0x3ed4fcc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(A1,"A1")
	HX_STACK_ARG(A2,"A2")
	HX_STACK_ARG(A3,"A3")
	HX_STACK_ARG(S,"S")
	HX_STACK_ARG(D,"D")
{
		HX_STACK_LINE(223)
		::kha::math::Vector3 result = ::kha::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(226)
		Array< Float > Q = Array_obj< Float >::__new();		HX_STACK_VAR(Q,"Q");
		HX_STACK_LINE(227)
		Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		Q[(int)0] = tmp;
		HX_STACK_LINE(228)
		Float tmp1 = this->get_y();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		Q[(int)1] = tmp1;
		HX_STACK_LINE(229)
		Float tmp2 = this->get_z();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		Q[(int)2] = tmp2;
		HX_STACK_LINE(231)
		Float tmp3 = this->get_w();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		Float tmp4 = this->get_w();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		Float ww = tmp5;		HX_STACK_VAR(ww,"ww");
		HX_STACK_LINE(233)
		Float tmp6 = Q->__get(A1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(233)
		Float tmp7 = Q->__get(A1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(233)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		Float Q11 = tmp8;		HX_STACK_VAR(Q11,"Q11");
		HX_STACK_LINE(234)
		Float tmp9 = Q->__get(A2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(234)
		Float tmp10 = Q->__get(A2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(234)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(234)
		Float Q22 = tmp11;		HX_STACK_VAR(Q22,"Q22");
		HX_STACK_LINE(235)
		Float tmp12 = Q->__get(A3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(235)
		Float tmp13 = Q->__get(A3);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(235)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(235)
		Float Q33 = tmp14;		HX_STACK_VAR(Q33,"Q33");
		HX_STACK_LINE(237)
		Float psign = (int)-1;		HX_STACK_VAR(psign,"psign");
		HX_STACK_LINE(239)
		Float SingularityRadius = ((Float)0.0000001);		HX_STACK_VAR(SingularityRadius,"SingularityRadius");
		HX_STACK_LINE(240)
		Float tmp15 = ::Math_obj::PI;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(240)
		Float tmp16 = (Float(tmp15) / Float(((Float)2.0)));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(240)
		Float PiOver2 = tmp16;		HX_STACK_VAR(PiOver2,"PiOver2");
		HX_STACK_LINE(243)
		int tmp17 = (A1 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(243)
		int tmp18 = hx::Mod(tmp17,(int)3);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(243)
		int tmp19 = A2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(243)
		bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(243)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(243)
		if ((tmp20)){
			HX_STACK_LINE(243)
			int tmp22 = (A2 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(243)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(243)
			int tmp24 = hx::Mod(tmp23,(int)3);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(243)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(243)
			int tmp26 = A3;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(243)
			tmp21 = (tmp25 == tmp26);
		}
		else{
			HX_STACK_LINE(243)
			tmp21 = false;
		}
		HX_STACK_LINE(243)
		if ((tmp21)){
			HX_STACK_LINE(244)
			psign = (int)1;
		}
		HX_STACK_LINE(246)
		Float tmp22 = (psign * ((Float)2.0));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(246)
		Float tmp23 = psign;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(246)
		Float tmp24 = this->get_w();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(246)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(246)
		Float tmp26 = Q->__get(A2);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(246)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(246)
		Float tmp28 = Q->__get(A1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(246)
		Float tmp29 = Q->__get(A3);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(246)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(246)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(246)
		Float tmp32 = (tmp22 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(246)
		Float s2 = tmp32;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(249)
		Float tmp33 = s2;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(249)
		int tmp34 = (int)-1;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(249)
		Float tmp35 = SingularityRadius;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(249)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(249)
		bool tmp37 = (tmp33 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(249)
		if ((tmp37)){
			HX_STACK_LINE(251)
			result->x = (int)0;
			HX_STACK_LINE(252)
			int tmp38 = S;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(252)
			int tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(252)
			int tmp40 = D;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(252)
			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(252)
			Float tmp42 = PiOver2;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(252)
			Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(252)
			result->y = tmp43;
			HX_STACK_LINE(253)
			int tmp44 = (S * D);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(253)
			Float tmp45 = psign;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(253)
			Float tmp46 = Q->__get(A1);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(253)
			Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(253)
			Float tmp48 = Q->__get(A2);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(253)
			Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(253)
			Float tmp50 = this->get_w();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(253)
			Float tmp51 = Q->__get(A3);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(253)
			Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(253)
			Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(253)
			Float tmp54 = ((int)2 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(254)
			Float tmp55 = (ww + Q22);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(254)
			Float tmp56 = Q11;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(254)
			Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(254)
			Float tmp58 = Q33;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(254)
			Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(253)
			Float tmp60 = ::Math_obj::atan2(tmp54,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(253)
			Float tmp61 = (tmp44 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(253)
			result->z = tmp61;
		}
		else{
			HX_STACK_LINE(256)
			Float tmp38 = s2;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(256)
			Float tmp39 = ((int)1 - SingularityRadius);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(256)
			bool tmp40 = (tmp38 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(256)
			if ((tmp40)){
				HX_STACK_LINE(258)
				result->x = (int)0;
				HX_STACK_LINE(259)
				int tmp41 = (S * D);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(259)
				Float tmp42 = PiOver2;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(259)
				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(259)
				result->y = tmp43;
				HX_STACK_LINE(260)
				int tmp44 = (S * D);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(260)
				Float tmp45 = psign;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(260)
				Float tmp46 = Q->__get(A1);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(260)
				Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(260)
				Float tmp48 = Q->__get(A2);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(260)
				Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(260)
				Float tmp50 = this->get_w();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(260)
				Float tmp51 = Q->__get(A3);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(260)
				Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(260)
				Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(260)
				Float tmp54 = ((int)2 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(261)
				Float tmp55 = (ww + Q22);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(261)
				Float tmp56 = Q11;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(261)
				Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(261)
				Float tmp58 = Q33;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(261)
				Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(260)
				Float tmp60 = ::Math_obj::atan2(tmp54,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(260)
				Float tmp61 = (tmp44 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(260)
				result->z = tmp61;
			}
			else{
				HX_STACK_LINE(265)
				int tmp41 = S;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(265)
				int tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(265)
				int tmp43 = D;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(265)
				int tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(265)
				int tmp45 = (int)-2;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(265)
				Float tmp46 = this->get_w();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(265)
				Float tmp47 = Q->__get(A1);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(265)
				Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(265)
				Float tmp49 = psign;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(265)
				Float tmp50 = Q->__get(A2);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(265)
				Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(265)
				Float tmp52 = Q->__get(A3);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(265)
				Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(265)
				Float tmp54 = (tmp48 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(265)
				Float tmp55 = (tmp45 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(266)
				Float tmp56 = (ww + Q33);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(266)
				Float tmp57 = Q11;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(266)
				Float tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(266)
				Float tmp59 = Q22;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(266)
				Float tmp60 = (tmp58 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(265)
				Float tmp61 = ::Math_obj::atan2(tmp55,tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(265)
				Float tmp62 = (tmp44 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(265)
				result->x = tmp62;
				HX_STACK_LINE(267)
				int tmp63 = (S * D);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(267)
				Float tmp64 = s2;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(267)
				Float tmp65 = ::Math_obj::asin(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(267)
				Float tmp66 = (tmp63 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(267)
				result->y = tmp66;
				HX_STACK_LINE(268)
				int tmp67 = (S * D);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(268)
				Float tmp68 = this->get_w();		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(268)
				Float tmp69 = Q->__get(A3);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(268)
				Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(268)
				Float tmp71 = psign;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(268)
				Float tmp72 = Q->__get(A1);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(268)
				Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(268)
				Float tmp74 = Q->__get(A2);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(268)
				Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(268)
				Float tmp76 = (tmp70 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(268)
				Float tmp77 = ((int)2 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(269)
				Float tmp78 = (ww + Q11);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(269)
				Float tmp79 = Q22;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(269)
				Float tmp80 = (tmp78 - tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(269)
				Float tmp81 = Q33;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(269)
				Float tmp82 = (tmp80 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(268)
				Float tmp83 = ::Math_obj::atan2(tmp77,tmp82);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(268)
				Float tmp84 = (tmp67 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(268)
				result->z = tmp84;
			}
		}
		HX_STACK_LINE(272)
		::kha::math::Vector3 tmp38 = result;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(272)
		return tmp38;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Quaternion_obj,getEulerAngles,return )

::kha::math::Quaternion Quaternion_obj::fromAxisAngle( ::kha::math::Vector3 axis,Float radians){
	HX_STACK_FRAME("kha.math.Quaternion","fromAxisAngle",0x7d600314,"kha.math.Quaternion.fromAxisAngle","kha/math/Quaternion.hx",22,0x3ed4fcc4)
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(23)
	::kha::math::Quaternion q = ::kha::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(24)
	Float tmp = (Float(radians) / Float(((Float)2.0)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	q->set_w(tmp1);
	HX_STACK_LINE(25)
	Float tmp2 = (Float(radians) / Float(((Float)2.0)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	Float tmp4 = q->set_z(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	Float tmp5 = q->set_y(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	q->set_x(tmp5);
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::kha::math::Quaternion _g = q;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		Float tmp6 = _g->get_x();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		Float tmp7 = axis->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(26)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		_g->set_x(tmp8);
	}
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::kha::math::Quaternion _g = q;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		Float tmp6 = _g->get_y();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		Float tmp7 = axis->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		_g->set_y(tmp8);
	}
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::kha::math::Quaternion _g = q;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		Float tmp6 = _g->get_z();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		Float tmp7 = axis->z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(28)
		_g->set_z(tmp8);
	}
	HX_STACK_LINE(29)
	::kha::math::Quaternion tmp6 = q;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,fromAxisAngle,return )

int Quaternion_obj::AXIS_X;

int Quaternion_obj::AXIS_Y;

int Quaternion_obj::AXIS_Z;


Quaternion_obj::Quaternion_obj()
{
}

void Quaternion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quaternion);
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void Quaternion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(values,"values");
}

Dynamic Quaternion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return get_z(); }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == hx::paccAlways) return get_w(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slerp") ) { return slerp_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		if (HX_FIELD_EQ(inName,"get_w") ) { return get_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
		if (HX_FIELD_EQ(inName,"scaled") ) { return scaled_dyn(); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addVector") ) { return addVector_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getEulerAngles") ) { return getEulerAngles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Quaternion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fromAxisAngle") ) { outValue = fromAxisAngle_dyn(); return true;  }
	}
	return false;
}

Dynamic Quaternion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return set_z(inValue); }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == hx::paccAlways) return set_w(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Quaternion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Quaternion_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Quaternion_obj::AXIS_X,HX_HCSTRING("AXIS_X","\xfa","\x61","\xf5","\xd8")},
	{hx::fsInt,(void *) &Quaternion_obj::AXIS_Y,HX_HCSTRING("AXIS_Y","\xfb","\x61","\xf5","\xd8")},
	{hx::fsInt,(void *) &Quaternion_obj::AXIS_Z,HX_HCSTRING("AXIS_Z","\xfc","\x61","\xf5","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("slerp","\x6a","\xc8","\xc4","\x7e"),
	HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"),
	HX_HCSTRING("scaled","\x9a","\xea","\x25","\x3c"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_z","\x51","\xa5","\x60","\x91"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_w","\x4e","\xa5","\x60","\x91"),
	HX_HCSTRING("set_w","\x5a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("addVector","\xc4","\xe5","\x81","\x4f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("getEulerAngles","\x93","\x2a","\x63","\xec"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_X,"AXIS_X");
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_Y,"AXIS_Y");
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_Z,"AXIS_Z");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_X,"AXIS_X");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_Y,"AXIS_Y");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_Z,"AXIS_Z");
};

#endif

hx::Class Quaternion_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromAxisAngle","\xa8","\x6c","\x6f","\xf0"),
	HX_HCSTRING("AXIS_X","\xfa","\x61","\xf5","\xd8"),
	HX_HCSTRING("AXIS_Y","\xfb","\x61","\xf5","\xd8"),
	HX_HCSTRING("AXIS_Z","\xfc","\x61","\xf5","\xd8"),
	::String(null()) };

void Quaternion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.math.Quaternion","\xda","\xd1","\x59","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quaternion_obj::__GetStatic;
	__mClass->mSetStaticField = &Quaternion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Quaternion_obj >;
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

void Quaternion_obj::__boot()
{
	AXIS_X= (int)0;
	AXIS_Y= (int)1;
	AXIS_Z= (int)2;
}

} // end namespace kha
} // end namespace math
