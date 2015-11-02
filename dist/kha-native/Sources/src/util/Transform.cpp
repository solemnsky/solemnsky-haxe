#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_util_Transform
#include <util/Transform.h>
#endif
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif
namespace util{

Void Transform_obj::__construct(Float _00,Float _10,Float _20,Float _01,Float _11,Float _21,Float _02,Float _12,Float _22)
{
HX_STACK_FRAME("util.Transform","new",0xef54d6d2,"util.Transform.new","util/Transform.hx",21,0x2c6be65f)
HX_STACK_THIS(this)
HX_STACK_ARG(_00,"_00")
HX_STACK_ARG(_10,"_10")
HX_STACK_ARG(_20,"_20")
HX_STACK_ARG(_01,"_01")
HX_STACK_ARG(_11,"_11")
HX_STACK_ARG(_21,"_21")
HX_STACK_ARG(_02,"_02")
HX_STACK_ARG(_12,"_12")
HX_STACK_ARG(_22,"_22")
{
	HX_STACK_LINE(22)
	this->_00 = _00;
	HX_STACK_LINE(22)
	this->_10 = _10;
	HX_STACK_LINE(22)
	this->_20 = _20;
	HX_STACK_LINE(23)
	this->_01 = _01;
	HX_STACK_LINE(23)
	this->_11 = _11;
	HX_STACK_LINE(23)
	this->_21 = _21;
	HX_STACK_LINE(24)
	this->_02 = _02;
	HX_STACK_LINE(24)
	this->_12 = _12;
	HX_STACK_LINE(24)
	this->_22 = _22;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(Float _00,Float _10,Float _20,Float _01,Float _11,Float _21,Float _02,Float _12,Float _22)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(_00,_10,_20,_01,_11,_21,_02,_12,_22);
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}

::util::Transform Transform_obj::add( ::util::Transform m){
	HX_STACK_FRAME("util.Transform","add",0xef4af893,"util.Transform.add","util/Transform.hx",75,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(77)
	Float tmp = this->_00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	Float tmp1 = m->_00;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	Float tmp3 = this->_10;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	Float tmp4 = m->_10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	Float tmp6 = this->_20;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	Float tmp7 = m->_20;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(77)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(78)
	Float tmp9 = this->_01;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(78)
	Float tmp10 = m->_01;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(78)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(78)
	Float tmp12 = this->_11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(78)
	Float tmp13 = m->_11;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(78)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(78)
	Float tmp15 = this->_21;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(78)
	Float tmp16 = m->_21;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(78)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(79)
	Float tmp18 = this->_02;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(79)
	Float tmp19 = m->_02;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(79)
	Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(79)
	Float tmp21 = this->_12;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(79)
	Float tmp22 = m->_12;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(79)
	Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(79)
	Float tmp24 = this->_22;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(79)
	Float tmp25 = m->_22;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(79)
	Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(76)
	::util::Transform tmp27 = ::util::Transform_obj::__new(tmp2,tmp5,tmp8,tmp11,tmp14,tmp17,tmp20,tmp23,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(76)
	return tmp27;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,add,return )

::util::Transform Transform_obj::sub( ::util::Transform m){
	HX_STACK_FRAME("util.Transform","sub",0xef58aff2,"util.Transform.sub","util/Transform.hx",83,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(85)
	Float tmp = this->_00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	Float tmp1 = m->_00;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	Float tmp3 = this->_10;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	Float tmp4 = m->_10;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	Float tmp6 = this->_20;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	Float tmp7 = m->_20;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(86)
	Float tmp9 = this->_01;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(86)
	Float tmp10 = m->_01;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	Float tmp12 = this->_11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(86)
	Float tmp13 = m->_11;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(86)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(86)
	Float tmp15 = this->_21;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(86)
	Float tmp16 = m->_21;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(86)
	Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(87)
	Float tmp18 = this->_02;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(87)
	Float tmp19 = m->_02;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(87)
	Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(87)
	Float tmp21 = this->_12;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(87)
	Float tmp22 = m->_12;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(87)
	Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(87)
	Float tmp24 = this->_22;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(87)
	Float tmp25 = m->_22;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(87)
	Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(84)
	::util::Transform tmp27 = ::util::Transform_obj::__new(tmp2,tmp5,tmp8,tmp11,tmp14,tmp17,tmp20,tmp23,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(84)
	return tmp27;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,sub,return )

::util::Transform Transform_obj::mult( Float value){
	HX_STACK_FRAME("util.Transform","mult",0x7a4a053e,"util.Transform.mult","util/Transform.hx",91,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(93)
	Float tmp = this->_00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	Float tmp3 = this->_10;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	Float tmp6 = this->_20;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(94)
	Float tmp9 = this->_01;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(94)
	Float tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(94)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(94)
	Float tmp12 = this->_11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(94)
	Float tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(94)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(94)
	Float tmp15 = this->_21;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(94)
	Float tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(94)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(95)
	Float tmp18 = this->_02;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(95)
	Float tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(95)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(95)
	Float tmp21 = this->_12;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(95)
	Float tmp22 = value;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(95)
	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(95)
	Float tmp24 = this->_22;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(95)
	Float tmp25 = value;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(95)
	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(92)
	::util::Transform tmp27 = ::util::Transform_obj::__new(tmp2,tmp5,tmp8,tmp11,tmp14,tmp17,tmp20,tmp23,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(92)
	return tmp27;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,mult,return )

::util::Transform Transform_obj::transpose( ){
	HX_STACK_FRAME("util.Transform","transpose",0xf747b86b,"util.Transform.transpose","util/Transform.hx",99,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	Float tmp = this->_00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	Float tmp1 = this->_01;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	Float tmp2 = this->_02;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	Float tmp3 = this->_10;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	Float tmp4 = this->_11;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	Float tmp5 = this->_12;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(103)
	Float tmp6 = this->_20;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(103)
	Float tmp7 = this->_21;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(103)
	Float tmp8 = this->_22;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(100)
	::util::Transform tmp9 = ::util::Transform_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(100)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,transpose,return )

::util::Transform Transform_obj::multmat( ::util::Transform m){
	HX_STACK_FRAME("util.Transform","multmat",0x07556022,"util.Transform.multmat","util/Transform.hx",107,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(109)
	Float tmp = this->_00;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	Float tmp1 = m->_00;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	Float tmp3 = this->_10;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	Float tmp4 = m->_01;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(109)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(109)
	Float tmp7 = this->_20;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(109)
	Float tmp8 = m->_02;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(109)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(109)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(109)
	Float tmp11 = this->_00;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(109)
	Float tmp12 = m->_10;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(109)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(109)
	Float tmp14 = this->_10;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(109)
	Float tmp15 = m->_11;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(109)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(109)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(109)
	Float tmp18 = this->_20;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(109)
	Float tmp19 = m->_12;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(109)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(109)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(109)
	Float tmp22 = this->_00;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(109)
	Float tmp23 = m->_20;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(109)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(109)
	Float tmp25 = this->_10;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(109)
	Float tmp26 = m->_21;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(109)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(109)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(109)
	Float tmp29 = this->_20;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(109)
	Float tmp30 = m->_22;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(109)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(109)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(110)
	Float tmp33 = this->_01;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(110)
	Float tmp34 = m->_00;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(110)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(110)
	Float tmp36 = this->_11;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(110)
	Float tmp37 = m->_01;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(110)
	Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(110)
	Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(110)
	Float tmp40 = this->_21;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(110)
	Float tmp41 = m->_02;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(110)
	Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(110)
	Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(110)
	Float tmp44 = this->_01;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(110)
	Float tmp45 = m->_10;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(110)
	Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(110)
	Float tmp47 = this->_11;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(110)
	Float tmp48 = m->_11;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(110)
	Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(110)
	Float tmp50 = (tmp46 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(110)
	Float tmp51 = this->_21;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(110)
	Float tmp52 = m->_12;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(110)
	Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(110)
	Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(110)
	Float tmp55 = this->_01;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(110)
	Float tmp56 = m->_20;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(110)
	Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(110)
	Float tmp58 = this->_11;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(110)
	Float tmp59 = m->_21;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(110)
	Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(110)
	Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(110)
	Float tmp62 = this->_21;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(110)
	Float tmp63 = m->_22;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(110)
	Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(110)
	Float tmp65 = (tmp61 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(111)
	Float tmp66 = this->_02;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(111)
	Float tmp67 = m->_00;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(111)
	Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(111)
	Float tmp69 = this->_12;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(111)
	Float tmp70 = m->_01;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(111)
	Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(111)
	Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(111)
	Float tmp73 = this->_22;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(111)
	Float tmp74 = m->_02;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(111)
	Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(111)
	Float tmp76 = (tmp72 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(111)
	Float tmp77 = this->_02;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(111)
	Float tmp78 = m->_10;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(111)
	Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(111)
	Float tmp80 = this->_12;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(111)
	Float tmp81 = m->_11;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(111)
	Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(111)
	Float tmp83 = (tmp79 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(111)
	Float tmp84 = this->_22;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(111)
	Float tmp85 = m->_12;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(111)
	Float tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(111)
	Float tmp87 = (tmp83 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(111)
	Float tmp88 = this->_02;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(111)
	Float tmp89 = m->_20;		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(111)
	Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(111)
	Float tmp91 = this->_12;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(111)
	Float tmp92 = m->_21;		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(111)
	Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(111)
	Float tmp94 = (tmp90 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(111)
	Float tmp95 = this->_22;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(111)
	Float tmp96 = m->_22;		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(111)
	Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(111)
	Float tmp98 = (tmp94 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(108)
	::util::Transform tmp99 = ::util::Transform_obj::__new(tmp10,tmp21,tmp32,tmp43,tmp54,tmp65,tmp76,tmp87,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(108)
	return tmp99;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,multmat,return )

::util::Vector Transform_obj::multvec( ::util::Vector value){
	HX_STACK_FRAME("util.Transform","multvec",0x075c37d6,"util.Transform.multvec","util/Transform.hx",115,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(116)
	Float tmp = this->_02;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	Float tmp1 = value->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	Float tmp3 = this->_12;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	Float tmp4 = value->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(116)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(116)
	Float tmp7 = this->_22;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(116)
	Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(116)
	Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(116)
	Float w = tmp9;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(117)
	Float tmp10 = this->_00;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(117)
	Float tmp11 = value->x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(117)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(117)
	Float tmp13 = this->_10;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(117)
	Float tmp14 = value->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(117)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(117)
	Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(117)
	Float tmp17 = this->_20;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(117)
	Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(117)
	Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(117)
	Float tmp20 = w;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(117)
	Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(117)
	Float x = tmp21;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(118)
	Float tmp22 = this->_01;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(118)
	Float tmp23 = value->x;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(118)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(118)
	Float tmp25 = this->_11;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(118)
	Float tmp26 = value->y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(118)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(118)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(118)
	Float tmp29 = this->_21;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(118)
	Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(118)
	Float tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(118)
	Float tmp32 = w;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(118)
	Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(118)
	Float y = tmp33;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(119)
	::util::Vector tmp34 = ::util::Vector_obj::__new(x,y);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(119)
	return tmp34;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,multvec,return )

Float Transform_obj::cofactor( Float m0,Float m1,Float m2,Float m3){
	HX_STACK_FRAME("util.Transform","cofactor",0xd09694c9,"util.Transform.cofactor","util/Transform.hx",129,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m0,"m0")
	HX_STACK_ARG(m1,"m1")
	HX_STACK_ARG(m2,"m2")
	HX_STACK_ARG(m3,"m3")
	HX_STACK_LINE(130)
	Float tmp = (m0 * m3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	Float tmp1 = (m1 * m2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC4(Transform_obj,cofactor,return )

Float Transform_obj::determinant( ){
	HX_STACK_FRAME("util.Transform","determinant",0x220d2607,"util.Transform.determinant","util/Transform.hx",133,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	Float tmp = this->_11;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	Float tmp1 = this->_22;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	Float tmp3 = this->_21;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	Float tmp4 = this->_12;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(134)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(134)
	Float c00 = tmp6;		HX_STACK_VAR(c00,"c00");
	HX_STACK_LINE(135)
	Float tmp7 = this->_10;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(135)
	Float tmp8 = this->_22;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(135)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(135)
	Float tmp10 = this->_20;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(135)
	Float tmp11 = this->_12;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(135)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(135)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(135)
	Float c01 = tmp13;		HX_STACK_VAR(c01,"c01");
	HX_STACK_LINE(136)
	Float tmp14 = this->_10;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(136)
	Float tmp15 = this->_21;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(136)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(136)
	Float tmp17 = this->_20;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(136)
	Float tmp18 = this->_11;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(136)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(136)
	Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(136)
	Float c02 = tmp20;		HX_STACK_VAR(c02,"c02");
	HX_STACK_LINE(137)
	Float tmp21 = this->_00;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(137)
	Float tmp22 = c00;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(137)
	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(137)
	Float tmp24 = this->_01;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(137)
	Float tmp25 = c01;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(137)
	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(137)
	Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(137)
	Float tmp28 = this->_02;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(137)
	Float tmp29 = c02;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(137)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(137)
	Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(137)
	return tmp31;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,determinant,return )

::util::Transform Transform_obj::inverse( ){
	HX_STACK_FRAME("util.Transform","inverse",0x4c9b7322,"util.Transform.inverse","util/Transform.hx",140,0x2c6be65f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	Float tmp = this->_11;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	Float tmp1 = this->_22;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	Float tmp3 = this->_21;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	Float tmp4 = this->_12;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(141)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(141)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(141)
	Float c00 = tmp6;		HX_STACK_VAR(c00,"c00");
	HX_STACK_LINE(142)
	Float tmp7 = this->_10;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(142)
	Float tmp8 = this->_22;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(142)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(142)
	Float tmp10 = this->_20;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(142)
	Float tmp11 = this->_12;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(142)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(142)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(142)
	Float c01 = tmp13;		HX_STACK_VAR(c01,"c01");
	HX_STACK_LINE(143)
	Float tmp14 = this->_10;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(143)
	Float tmp15 = this->_21;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(143)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(143)
	Float tmp17 = this->_20;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(143)
	Float tmp18 = this->_11;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(143)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(143)
	Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(143)
	Float c02 = tmp20;		HX_STACK_VAR(c02,"c02");
	HX_STACK_LINE(145)
	Float tmp21 = this->_00;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(145)
	Float tmp22 = c00;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(145)
	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(145)
	Float tmp24 = this->_01;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(145)
	Float tmp25 = c01;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(145)
	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(145)
	Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(145)
	Float tmp28 = this->_02;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(145)
	Float tmp29 = c02;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(145)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(145)
	Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(145)
	Float det = tmp31;		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(146)
	Float tmp32 = det;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(146)
	Float tmp33 = ::Math_obj::abs(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(146)
	bool tmp34 = (tmp33 < ((Float)0.000001));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(146)
	if ((tmp34)){
		HX_STACK_LINE(147)
		HX_STACK_DO_THROW(HX_HCSTRING("determinant is too small","\xf0","\xe3","\xaa","\xfc"));
	}
	HX_STACK_LINE(150)
	Float tmp35 = this->_01;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(150)
	Float tmp36 = this->_22;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(150)
	Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(150)
	Float tmp38 = this->_21;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(150)
	Float tmp39 = this->_02;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(150)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(150)
	Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(150)
	Float c10 = tmp41;		HX_STACK_VAR(c10,"c10");
	HX_STACK_LINE(151)
	Float tmp42 = this->_00;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(151)
	Float tmp43 = this->_22;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(151)
	Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(151)
	Float tmp45 = this->_20;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(151)
	Float tmp46 = this->_02;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(151)
	Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(151)
	Float tmp48 = (tmp44 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(151)
	Float c11 = tmp48;		HX_STACK_VAR(c11,"c11");
	HX_STACK_LINE(152)
	Float tmp49 = this->_00;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(152)
	Float tmp50 = this->_21;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(152)
	Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(152)
	Float tmp52 = this->_20;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(152)
	Float tmp53 = this->_01;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(152)
	Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(152)
	Float tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(152)
	Float c12 = tmp55;		HX_STACK_VAR(c12,"c12");
	HX_STACK_LINE(154)
	Float tmp56 = this->_01;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(154)
	Float tmp57 = this->_12;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(154)
	Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(154)
	Float tmp59 = this->_11;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(154)
	Float tmp60 = this->_02;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(154)
	Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(154)
	Float tmp62 = (tmp58 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(154)
	Float c20 = tmp62;		HX_STACK_VAR(c20,"c20");
	HX_STACK_LINE(155)
	Float tmp63 = this->_00;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(155)
	Float tmp64 = this->_12;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(155)
	Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(155)
	Float tmp66 = this->_10;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(155)
	Float tmp67 = this->_02;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(155)
	Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(155)
	Float tmp69 = (tmp65 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(155)
	Float c21 = tmp69;		HX_STACK_VAR(c21,"c21");
	HX_STACK_LINE(156)
	Float tmp70 = this->_00;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(156)
	Float tmp71 = this->_11;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(156)
	Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(156)
	Float tmp73 = this->_10;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(156)
	Float tmp74 = this->_01;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(156)
	Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(156)
	Float tmp76 = (tmp72 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(156)
	Float c22 = tmp76;		HX_STACK_VAR(c22,"c22");
	HX_STACK_LINE(158)
	Float tmp77 = (Float(((Float)1.0)) / Float(det));		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(158)
	Float invdet = tmp77;		HX_STACK_VAR(invdet,"invdet");
	HX_STACK_LINE(160)
	Float tmp78 = (c00 * invdet);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(160)
	Float tmp79 = c01;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(160)
	Float tmp80 = -(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(160)
	Float tmp81 = invdet;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(160)
	Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(160)
	Float tmp83 = (c02 * invdet);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(161)
	Float tmp84 = c10;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(161)
	Float tmp85 = -(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(161)
	Float tmp86 = invdet;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(161)
	Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(161)
	Float tmp88 = (c11 * invdet);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(161)
	Float tmp89 = c12;		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(161)
	Float tmp90 = -(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(161)
	Float tmp91 = invdet;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(161)
	Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(162)
	Float tmp93 = (c20 * invdet);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(162)
	Float tmp94 = c21;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(162)
	Float tmp95 = -(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(162)
	Float tmp96 = invdet;		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(162)
	Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(162)
	Float tmp98 = (c22 * invdet);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(159)
	::util::Transform tmp99 = ::util::Transform_obj::__new(tmp78,tmp82,tmp83,tmp87,tmp88,tmp92,tmp93,tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(159)
	return tmp99;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,inverse,return )

::util::Transform Transform_obj::translation( Float x,Float y){
	HX_STACK_FRAME("util.Transform","translation",0x7a99f963,"util.Transform.translation","util/Transform.hx",31,0x2c6be65f)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(32)
	::util::Transform tmp = ::util::Transform_obj::__new((int)1,(int)0,x,(int)0,(int)1,y,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,translation,return )

::util::Transform Transform_obj::empty( ){
	HX_STACK_FRAME("util.Transform","empty",0xe5ff417f,"util.Transform.empty","util/Transform.hx",39,0x2c6be65f)
	HX_STACK_LINE(40)
	::util::Transform tmp = ::util::Transform_obj::__new((int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,empty,return )

::util::Transform Transform_obj::identity( ){
	HX_STACK_FRAME("util.Transform","identity",0x7f67a18c,"util.Transform.identity","util/Transform.hx",47,0x2c6be65f)
	HX_STACK_LINE(48)
	::util::Transform tmp = ::util::Transform_obj::__new((int)1,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,identity,return )

::util::Transform Transform_obj::scale( Float x,Float y){
	HX_STACK_FRAME("util.Transform","scale",0xeef3d57c,"util.Transform.scale","util/Transform.hx",55,0x2c6be65f)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(56)
	::util::Transform tmp = ::util::Transform_obj::__new(x,(int)0,(int)0,(int)0,y,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,scale,return )

::util::Transform Transform_obj::rotation( Float alpha){
	HX_STACK_FRAME("util.Transform","rotation",0xcebe998c,"util.Transform.rotation","util/Transform.hx",63,0x2c6be65f)
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_LINE(65)
	Float tmp = alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	Float tmp5 = alpha;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(66)
	Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	::util::Transform tmp9 = ::util::Transform_obj::__new(tmp1,tmp4,(int)0,tmp6,tmp8,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(64)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,rotation,return )


Transform_obj::Transform_obj()
{
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { return _00; }
		if (HX_FIELD_EQ(inName,"_10") ) { return _10; }
		if (HX_FIELD_EQ(inName,"_20") ) { return _20; }
		if (HX_FIELD_EQ(inName,"_01") ) { return _01; }
		if (HX_FIELD_EQ(inName,"_11") ) { return _11; }
		if (HX_FIELD_EQ(inName,"_21") ) { return _21; }
		if (HX_FIELD_EQ(inName,"_02") ) { return _02; }
		if (HX_FIELD_EQ(inName,"_12") ) { return _12; }
		if (HX_FIELD_EQ(inName,"_22") ) { return _22; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"multmat") ) { return multmat_dyn(); }
		if (HX_FIELD_EQ(inName,"multvec") ) { return multvec_dyn(); }
		if (HX_FIELD_EQ(inName,"inverse") ) { return inverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cofactor") ) { return cofactor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { return determinant_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Transform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = empty_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rotation") ) { outValue = rotation_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translation") ) { outValue = translation_dyn(); return true;  }
	}
	return false;
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { _00=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_10") ) { _10=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_20") ) { _20=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_01") ) { _01=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_11") ) { _11=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_21") ) { _21=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_02") ) { _02=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_12") ) { _12=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_22") ) { _22=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Transform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_00","\x1f","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_10","\xfe","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_20","\xdd","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_01","\x20","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_11","\xff","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_21","\xde","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_02","\x21","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_12","\x00","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_22","\xdf","\x41","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Transform_obj,_00),HX_HCSTRING("_00","\x1f","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Transform_obj,_10),HX_HCSTRING("_10","\xfe","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Transform_obj,_20),HX_HCSTRING("_20","\xdd","\x41","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Transform_obj,_01),HX_HCSTRING("_01","\x20","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Transform_obj,_11),HX_HCSTRING("_11","\xff","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Transform_obj,_21),HX_HCSTRING("_21","\xde","\x41","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Transform_obj,_02),HX_HCSTRING("_02","\x21","\x40","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Transform_obj,_12),HX_HCSTRING("_12","\x00","\x41","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Transform_obj,_22),HX_HCSTRING("_22","\xdf","\x41","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_00","\x1f","\x40","\x48","\x00"),
	HX_HCSTRING("_10","\xfe","\x40","\x48","\x00"),
	HX_HCSTRING("_20","\xdd","\x41","\x48","\x00"),
	HX_HCSTRING("_01","\x20","\x40","\x48","\x00"),
	HX_HCSTRING("_11","\xff","\x40","\x48","\x00"),
	HX_HCSTRING("_21","\xde","\x41","\x48","\x00"),
	HX_HCSTRING("_02","\x21","\x40","\x48","\x00"),
	HX_HCSTRING("_12","\x00","\x41","\x48","\x00"),
	HX_HCSTRING("_22","\xdf","\x41","\x48","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("multmat","\xb0","\x38","\xab","\xf8"),
	HX_HCSTRING("multvec","\x64","\x10","\xb2","\xf8"),
	HX_HCSTRING("cofactor","\x7b","\x38","\x5e","\x0a"),
	HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"),
	HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("translation","\xf1","\x30","\xa2","\x8a"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	::String(null()) };

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.Transform","\xe0","\xc5","\x90","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Transform_obj::__GetStatic;
	__mClass->mSetStaticField = &Transform_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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

} // end namespace util
