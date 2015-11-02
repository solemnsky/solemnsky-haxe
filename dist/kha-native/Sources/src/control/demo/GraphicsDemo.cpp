#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Type
#include <Type.h>
#endif
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
#ifndef INCLUDED_control_Profile
#include <control/Profile.h>
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
#ifndef INCLUDED_control_demo_GraphicsDemo
#include <control/demo/GraphicsDemo.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_util_Transform
#include <util/Transform.h>
#endif
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif
namespace control{
namespace demo{

Void GraphicsDemo_obj::__construct()
{
HX_STACK_FRAME("control.demo.GraphicsDemo","new",0x4e107d7a,"control.demo.GraphicsDemo.new","control/demo/GraphicsDemo.hx",14,0xc0f4ded6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->exit = false;
	HX_STACK_LINE(18)
	this->y = ((Float)0);
	HX_STACK_LINE(17)
	this->x = ((Float)0);
	HX_STACK_LINE(16)
	this->time = ((Float)0);
}
;
	return null();
}

//GraphicsDemo_obj::~GraphicsDemo_obj() { }

Dynamic GraphicsDemo_obj::__CreateEmpty() { return  new GraphicsDemo_obj; }
hx::ObjectPtr< GraphicsDemo_obj > GraphicsDemo_obj::__new()
{  hx::ObjectPtr< GraphicsDemo_obj > _result_ = new GraphicsDemo_obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsDemo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsDemo_obj > _result_ = new GraphicsDemo_obj();
	_result_->__construct();
	return _result_;}

hx::Object *GraphicsDemo_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::control::Control_obj)) return operator ::control::Control_obj *();
	return super::__ToInterface(inType);
}

GraphicsDemo_obj::operator ::control::Control_obj *()
	{ return new ::control::Control_delegate_< GraphicsDemo_obj >(this); }
Void GraphicsDemo_obj::init( ::control::Network _){
{
		HX_STACK_FRAME("control.demo.GraphicsDemo","init",0xfd1604b6,"control.demo.GraphicsDemo.init","control/demo/GraphicsDemo.hx",23,0xc0f4ded6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsDemo_obj,init,(void))

Void GraphicsDemo_obj::tick( Float delta){
{
		HX_STACK_FRAME("control.demo.GraphicsDemo","tick",0x04578d03,"control.demo.GraphicsDemo.tick","control/demo/GraphicsDemo.hx",26,0xc0f4ded6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(26)
		hx::AddEq(this->time,delta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsDemo_obj,tick,(void))

::control::Scene GraphicsDemo_obj::renderElem( ::util::Vector centerPos){
	HX_STACK_FRAME("control.demo.GraphicsDemo","renderElem",0xe8215d2b,"control.demo.GraphicsDemo.renderElem","control/demo/GraphicsDemo.hx",29,0xc0f4ded6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(centerPos,"centerPos")
	HX_STACK_LINE(30)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(31)
	::util::Vector pos = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(32)
	::util::Vector offset = ::util::Vector_obj::__new((int)27,(int)0);		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(35)
	::control::DrawPrim tmp = ::control::DrawPrim_obj::SetColor((int)0,(int)255,(int)0,(int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::util::Vector tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	::control::DrawPrim tmp2 = ::control::DrawPrim_obj::DrawCircle(tmp1,(int)20);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Float tmp3 = (pos->x + offset->x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	Float tmp4 = (pos->y + offset->y);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	::util::Vector tmp5 = ::util::Vector_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	::control::DrawPrim tmp6 = ::control::DrawPrim_obj::DrawCircle(tmp5,(int)7);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	Array< ::Dynamic > tmp7 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp2).Add(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	scene->prims = tmp7;
	HX_STACK_LINE(39)
	::util::Transform tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		Float _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
		HX_STACK_LINE(39)
		Float _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
		HX_STACK_LINE(39)
		Float _this__20 = (int)0;		HX_STACK_VAR(_this__20,"_this__20");
		HX_STACK_LINE(39)
		Float _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
		HX_STACK_LINE(39)
		Float _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
		HX_STACK_LINE(39)
		Float _this__21 = (int)0;		HX_STACK_VAR(_this__21,"_this__21");
		HX_STACK_LINE(39)
		Float _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
		HX_STACK_LINE(39)
		Float _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
		HX_STACK_LINE(39)
		Float _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
		HX_STACK_LINE(40)
		Float m__00 = (int)1;		HX_STACK_VAR(m__00,"m__00");
		HX_STACK_LINE(40)
		Float m__10 = (int)0;		HX_STACK_VAR(m__10,"m__10");
		HX_STACK_LINE(40)
		Float m__20 = centerPos->x;		HX_STACK_VAR(m__20,"m__20");
		HX_STACK_LINE(40)
		Float m__01 = (int)0;		HX_STACK_VAR(m__01,"m__01");
		HX_STACK_LINE(40)
		Float m__11 = (int)1;		HX_STACK_VAR(m__11,"m__11");
		HX_STACK_LINE(40)
		Float m__21 = centerPos->y;		HX_STACK_VAR(m__21,"m__21");
		HX_STACK_LINE(40)
		Float m__02 = (int)0;		HX_STACK_VAR(m__02,"m__02");
		HX_STACK_LINE(40)
		Float m__12 = (int)0;		HX_STACK_VAR(m__12,"m__12");
		HX_STACK_LINE(40)
		Float m__22 = (int)1;		HX_STACK_VAR(m__22,"m__22");
		HX_STACK_LINE(39)
		Float tmp9 = (_this__00 * m__00);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		Float tmp10 = (_this__10 * m__01);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(39)
		Float tmp12 = (_this__20 * m__02);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		Float _this__001 = tmp13;		HX_STACK_VAR(_this__001,"_this__001");
		HX_STACK_LINE(39)
		Float tmp14 = (_this__00 * m__10);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(39)
		Float tmp15 = (_this__10 * m__11);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(39)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(39)
		Float tmp17 = (_this__20 * m__12);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(39)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(39)
		Float _this__101 = tmp18;		HX_STACK_VAR(_this__101,"_this__101");
		HX_STACK_LINE(39)
		Float tmp19 = (_this__00 * m__20);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(39)
		Float tmp20 = (_this__10 * m__21);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(39)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(39)
		Float tmp22 = (_this__20 * m__22);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(39)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(39)
		Float _this__201 = tmp23;		HX_STACK_VAR(_this__201,"_this__201");
		HX_STACK_LINE(39)
		Float tmp24 = (_this__01 * m__00);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(39)
		Float tmp25 = (_this__11 * m__01);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(39)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(39)
		Float tmp27 = (_this__21 * m__02);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(39)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(39)
		Float _this__011 = tmp28;		HX_STACK_VAR(_this__011,"_this__011");
		HX_STACK_LINE(39)
		Float tmp29 = (_this__01 * m__10);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(39)
		Float tmp30 = (_this__11 * m__11);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(39)
		Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(39)
		Float tmp32 = (_this__21 * m__12);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(39)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(39)
		Float _this__111 = tmp33;		HX_STACK_VAR(_this__111,"_this__111");
		HX_STACK_LINE(39)
		Float tmp34 = (_this__01 * m__20);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(39)
		Float tmp35 = (_this__11 * m__21);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(39)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(39)
		Float tmp37 = (_this__21 * m__22);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(39)
		Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(39)
		Float _this__211 = tmp38;		HX_STACK_VAR(_this__211,"_this__211");
		HX_STACK_LINE(39)
		Float tmp39 = (_this__02 * m__00);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(39)
		Float tmp40 = (_this__12 * m__01);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(39)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(39)
		Float tmp42 = (_this__22 * m__02);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(39)
		Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(39)
		Float _this__021 = tmp43;		HX_STACK_VAR(_this__021,"_this__021");
		HX_STACK_LINE(39)
		Float tmp44 = (_this__02 * m__10);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(39)
		Float tmp45 = (_this__12 * m__11);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(39)
		Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(39)
		Float tmp47 = (_this__22 * m__12);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(39)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(39)
		Float _this__121 = tmp48;		HX_STACK_VAR(_this__121,"_this__121");
		HX_STACK_LINE(39)
		Float tmp49 = (_this__02 * m__20);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(39)
		Float tmp50 = (_this__12 * m__21);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(39)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(39)
		Float tmp52 = (_this__22 * m__22);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(39)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(39)
		Float _this__221 = tmp53;		HX_STACK_VAR(_this__221,"_this__221");
		HX_STACK_LINE(41)
		::util::Transform tmp54;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			Float tmp55 = this->time;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(41)
			Float tmp56 = (Float(tmp55) / Float((int)1000));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(41)
			Float alpha = tmp56;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(41)
			Float tmp57 = alpha;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(41)
			Float tmp58 = ::Math_obj::cos(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(41)
			Float tmp59 = alpha;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(41)
			Float tmp60 = ::Math_obj::sin(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(41)
			Float tmp61 = -(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(41)
			Float tmp62 = alpha;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(41)
			Float tmp63 = ::Math_obj::sin(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(41)
			Float tmp64 = alpha;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(41)
			Float tmp65 = ::Math_obj::cos(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(41)
			tmp54 = ::util::Transform_obj::__new(tmp58,tmp61,(int)0,tmp63,tmp65,(int)0,(int)0,(int)0,(int)1);
		}
		HX_STACK_LINE(41)
		::util::Transform m = tmp54;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(39)
		Float tmp55 = (_this__001 * m->_00);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(39)
		Float tmp56 = (_this__101 * m->_01);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(39)
		Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(39)
		Float tmp58 = (_this__201 * m->_02);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(39)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(39)
		Float tmp60 = (_this__001 * m->_10);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(39)
		Float tmp61 = (_this__101 * m->_11);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(39)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(39)
		Float tmp63 = (_this__201 * m->_12);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(39)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(39)
		Float tmp65 = (_this__001 * m->_20);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(39)
		Float tmp66 = (_this__101 * m->_21);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(39)
		Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(39)
		Float tmp68 = (_this__201 * m->_22);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(39)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(39)
		Float tmp70 = (_this__011 * m->_00);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(39)
		Float tmp71 = (_this__111 * m->_01);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(39)
		Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(39)
		Float tmp73 = (_this__211 * m->_02);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(39)
		Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(39)
		Float tmp75 = (_this__011 * m->_10);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(39)
		Float tmp76 = (_this__111 * m->_11);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(39)
		Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(39)
		Float tmp78 = (_this__211 * m->_12);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(39)
		Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(39)
		Float tmp80 = (_this__011 * m->_20);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(39)
		Float tmp81 = (_this__111 * m->_21);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(39)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(39)
		Float tmp83 = (_this__211 * m->_22);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(39)
		Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(39)
		Float tmp85 = (_this__021 * m->_00);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(39)
		Float tmp86 = (_this__121 * m->_01);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(39)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(39)
		Float tmp88 = (_this__221 * m->_02);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(39)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(39)
		Float tmp90 = (_this__021 * m->_10);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(39)
		Float tmp91 = (_this__121 * m->_11);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(39)
		Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(39)
		Float tmp93 = (_this__221 * m->_12);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(39)
		Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(39)
		Float tmp95 = (_this__021 * m->_20);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(39)
		Float tmp96 = (_this__121 * m->_21);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(39)
		Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(39)
		Float tmp98 = (_this__221 * m->_22);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(39)
		Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(39)
		tmp8 = ::util::Transform_obj::__new(tmp59,tmp64,tmp69,tmp74,tmp79,tmp84,tmp89,tmp94,tmp99);
	}
	HX_STACK_LINE(39)
	scene->trans = tmp8;
	HX_STACK_LINE(43)
	::control::Scene tmp9 = scene;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(43)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsDemo_obj,renderElem,return )

::control::Scene GraphicsDemo_obj::renderFront( Float delta){
	HX_STACK_FRAME("control.demo.GraphicsDemo","renderFront",0xcc759c8d,"control.demo.GraphicsDemo.renderFront","control/demo/GraphicsDemo.hx",46,0xc0f4ded6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(47)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(49)
	::util::Vector offset = ::util::Vector_obj::__new((int)40,(int)-40);		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(50)
	::util::Vector offset2 = ::util::Vector_obj::__new((int)40,(int)40);		HX_STACK_VAR(offset2,"offset2");
	HX_STACK_LINE(52)
	::util::Vector pos = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		while((true)){
			HX_STACK_LINE(53)
			bool tmp = (_g < (int)20);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(53)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			if ((tmp1)){
				HX_STACK_LINE(53)
				break;
			}
			HX_STACK_LINE(53)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(54)
			::util::Vector tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			::control::Scene tmp4 = this->renderElem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			scene->children->push(tmp4);
			HX_STACK_LINE(55)
			Float tmp5 = (pos->x + offset->x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			Float tmp6 = (pos->y + offset->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			::util::Vector tmp7 = ::util::Vector_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			pos = tmp7;
		}
	}
	HX_STACK_LINE(58)
	::util::Vector tmp = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	pos = tmp;
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		while((true)){
			HX_STACK_LINE(59)
			bool tmp1 = (_g < (int)20);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			if ((tmp2)){
				HX_STACK_LINE(59)
				break;
			}
			HX_STACK_LINE(59)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(60)
			::util::Vector tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			::control::Scene tmp5 = this->renderElem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			scene->children->push(tmp5);
			HX_STACK_LINE(61)
			Float tmp6 = (pos->x + offset2->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Float tmp7 = (pos->y + offset2->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			::util::Vector tmp8 = ::util::Vector_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			pos = tmp8;
		}
	}
	HX_STACK_LINE(64)
	::util::Vector tmp1 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	pos = tmp1;
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		while((true)){
			HX_STACK_LINE(65)
			bool tmp2 = (_g < (int)20);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			if ((tmp3)){
				HX_STACK_LINE(65)
				break;
			}
			HX_STACK_LINE(65)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(66)
			::util::Vector tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			::control::Scene tmp6 = this->renderElem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			scene->children->push(tmp6);
			HX_STACK_LINE(67)
			Float tmp7 = (pos->x - offset2->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			Float tmp8 = (pos->y - offset2->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			::util::Vector tmp9 = ::util::Vector_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			pos = tmp9;
		}
	}
	HX_STACK_LINE(70)
	::util::Vector tmp2 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	pos = tmp2;
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			bool tmp3 = (_g < (int)20);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			if ((tmp4)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			::util::Vector tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			::control::Scene tmp7 = this->renderElem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			scene->children->push(tmp7);
			HX_STACK_LINE(73)
			Float tmp8 = (pos->x - offset->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			Float tmp9 = (pos->y - offset->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			::util::Vector tmp10 = ::util::Vector_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(73)
			pos = tmp10;
		}
	}
	HX_STACK_LINE(77)
	::control::DrawPrim tmp3 = ::control::DrawPrim_obj::SetColor((int)0,(int)0,(int)0,(int)100);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	::util::Vector tmp4 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	::util::Vector tmp5 = ::util::Vector_obj::__new((int)200,(int)200);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	::control::DrawPrim tmp6 = ::control::DrawPrim_obj::DrawRect(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	::util::Vector tmp7 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(79)
	::util::Vector tmp8 = ::util::Vector_obj::__new((int)-200,(int)-200);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(79)
	::control::DrawPrim tmp9 = ::control::DrawPrim_obj::DrawRect(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(80)
	::control::DrawPrim tmp10 = ::control::DrawPrim_obj::SetColor((int)0,(int)0,(int)0,(int)200);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(81)
	::util::Vector tmp11 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(81)
	::util::Vector tmp12 = ::util::Vector_obj::__new((int)200,(int)-200);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(81)
	::control::DrawPrim tmp13 = ::control::DrawPrim_obj::DrawRect(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(82)
	::util::Vector tmp14 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(82)
	::util::Vector tmp15 = ::util::Vector_obj::__new((int)-200,(int)200);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(82)
	::control::DrawPrim tmp16 = ::control::DrawPrim_obj::DrawRect(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(76)
	Array< ::Dynamic > tmp17 = Array_obj< ::Dynamic >::__new().Add(tmp3).Add(tmp6).Add(tmp9).Add(tmp10).Add(tmp13).Add(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(76)
	scene->prims = tmp17;
	HX_STACK_LINE(85)
	::util::Transform tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		Float _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
		HX_STACK_LINE(85)
		Float _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
		HX_STACK_LINE(85)
		Float _this__20 = (int)0;		HX_STACK_VAR(_this__20,"_this__20");
		HX_STACK_LINE(85)
		Float _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
		HX_STACK_LINE(85)
		Float _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
		HX_STACK_LINE(85)
		Float _this__21 = (int)0;		HX_STACK_VAR(_this__21,"_this__21");
		HX_STACK_LINE(85)
		Float _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
		HX_STACK_LINE(85)
		Float _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
		HX_STACK_LINE(85)
		Float _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
		HX_STACK_LINE(86)
		Float m__00 = (int)1;		HX_STACK_VAR(m__00,"m__00");
		HX_STACK_LINE(86)
		Float m__10 = (int)0;		HX_STACK_VAR(m__10,"m__10");
		HX_STACK_LINE(86)
		Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(86)
		Float m__20 = tmp19;		HX_STACK_VAR(m__20,"m__20");
		HX_STACK_LINE(86)
		Float m__01 = (int)0;		HX_STACK_VAR(m__01,"m__01");
		HX_STACK_LINE(86)
		Float m__11 = (int)1;		HX_STACK_VAR(m__11,"m__11");
		HX_STACK_LINE(86)
		Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(86)
		Float m__21 = tmp20;		HX_STACK_VAR(m__21,"m__21");
		HX_STACK_LINE(86)
		Float m__02 = (int)0;		HX_STACK_VAR(m__02,"m__02");
		HX_STACK_LINE(86)
		Float m__12 = (int)0;		HX_STACK_VAR(m__12,"m__12");
		HX_STACK_LINE(86)
		Float m__22 = (int)1;		HX_STACK_VAR(m__22,"m__22");
		HX_STACK_LINE(85)
		Float tmp21 = (_this__00 * m__00);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(85)
		Float tmp22 = (_this__10 * m__01);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(85)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(85)
		Float tmp24 = (_this__20 * m__02);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(85)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(85)
		Float _this__001 = tmp25;		HX_STACK_VAR(_this__001,"_this__001");
		HX_STACK_LINE(85)
		Float tmp26 = (_this__00 * m__10);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(85)
		Float tmp27 = (_this__10 * m__11);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(85)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(85)
		Float tmp29 = (_this__20 * m__12);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(85)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(85)
		Float _this__101 = tmp30;		HX_STACK_VAR(_this__101,"_this__101");
		HX_STACK_LINE(85)
		Float tmp31 = (_this__00 * m__20);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(85)
		Float tmp32 = (_this__10 * m__21);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(85)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(85)
		Float tmp34 = (_this__20 * m__22);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(85)
		Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(85)
		Float _this__201 = tmp35;		HX_STACK_VAR(_this__201,"_this__201");
		HX_STACK_LINE(85)
		Float tmp36 = (_this__01 * m__00);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(85)
		Float tmp37 = (_this__11 * m__01);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(85)
		Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(85)
		Float tmp39 = (_this__21 * m__02);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(85)
		Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(85)
		Float _this__011 = tmp40;		HX_STACK_VAR(_this__011,"_this__011");
		HX_STACK_LINE(85)
		Float tmp41 = (_this__01 * m__10);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(85)
		Float tmp42 = (_this__11 * m__11);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(85)
		Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(85)
		Float tmp44 = (_this__21 * m__12);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(85)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(85)
		Float _this__111 = tmp45;		HX_STACK_VAR(_this__111,"_this__111");
		HX_STACK_LINE(85)
		Float tmp46 = (_this__01 * m__20);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(85)
		Float tmp47 = (_this__11 * m__21);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(85)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(85)
		Float tmp49 = (_this__21 * m__22);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(85)
		Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(85)
		Float _this__211 = tmp50;		HX_STACK_VAR(_this__211,"_this__211");
		HX_STACK_LINE(85)
		Float tmp51 = (_this__02 * m__00);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(85)
		Float tmp52 = (_this__12 * m__01);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(85)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(85)
		Float tmp54 = (_this__22 * m__02);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(85)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(85)
		Float _this__021 = tmp55;		HX_STACK_VAR(_this__021,"_this__021");
		HX_STACK_LINE(85)
		Float tmp56 = (_this__02 * m__10);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(85)
		Float tmp57 = (_this__12 * m__11);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(85)
		Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(85)
		Float tmp59 = (_this__22 * m__12);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(85)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(85)
		Float _this__121 = tmp60;		HX_STACK_VAR(_this__121,"_this__121");
		HX_STACK_LINE(85)
		Float tmp61 = (_this__02 * m__20);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(85)
		Float tmp62 = (_this__12 * m__21);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(85)
		Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(85)
		Float tmp64 = (_this__22 * m__22);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(85)
		Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(85)
		Float _this__221 = tmp65;		HX_STACK_VAR(_this__221,"_this__221");
		HX_STACK_LINE(87)
		::util::Transform tmp66;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			Float tmp67 = this->time;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(87)
			Float tmp68 = -(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(87)
			Float tmp69 = (Float(tmp68) / Float((int)1200));		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(87)
			Float alpha = tmp69;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(87)
			Float tmp70 = alpha;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(87)
			Float tmp71 = ::Math_obj::cos(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(87)
			Float tmp72 = alpha;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(87)
			Float tmp73 = ::Math_obj::sin(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(87)
			Float tmp74 = -(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(87)
			Float tmp75 = alpha;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(87)
			Float tmp76 = ::Math_obj::sin(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(87)
			Float tmp77 = alpha;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(87)
			Float tmp78 = ::Math_obj::cos(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(87)
			tmp66 = ::util::Transform_obj::__new(tmp71,tmp74,(int)0,tmp76,tmp78,(int)0,(int)0,(int)0,(int)1);
		}
		HX_STACK_LINE(87)
		::util::Transform m = tmp66;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(85)
		Float tmp67 = (_this__001 * m->_00);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(85)
		Float tmp68 = (_this__101 * m->_01);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(85)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(85)
		Float tmp70 = (_this__201 * m->_02);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(85)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(85)
		Float tmp72 = (_this__001 * m->_10);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(85)
		Float tmp73 = (_this__101 * m->_11);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(85)
		Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(85)
		Float tmp75 = (_this__201 * m->_12);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(85)
		Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(85)
		Float tmp77 = (_this__001 * m->_20);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(85)
		Float tmp78 = (_this__101 * m->_21);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(85)
		Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(85)
		Float tmp80 = (_this__201 * m->_22);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(85)
		Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(85)
		Float tmp82 = (_this__011 * m->_00);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(85)
		Float tmp83 = (_this__111 * m->_01);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(85)
		Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(85)
		Float tmp85 = (_this__211 * m->_02);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(85)
		Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(85)
		Float tmp87 = (_this__011 * m->_10);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(85)
		Float tmp88 = (_this__111 * m->_11);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(85)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(85)
		Float tmp90 = (_this__211 * m->_12);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(85)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(85)
		Float tmp92 = (_this__011 * m->_20);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(85)
		Float tmp93 = (_this__111 * m->_21);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(85)
		Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(85)
		Float tmp95 = (_this__211 * m->_22);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(85)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(85)
		Float tmp97 = (_this__021 * m->_00);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(85)
		Float tmp98 = (_this__121 * m->_01);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(85)
		Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(85)
		Float tmp100 = (_this__221 * m->_02);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(85)
		Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(85)
		Float tmp102 = (_this__021 * m->_10);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(85)
		Float tmp103 = (_this__121 * m->_11);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(85)
		Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(85)
		Float tmp105 = (_this__221 * m->_12);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(85)
		Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(85)
		Float tmp107 = (_this__021 * m->_20);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(85)
		Float tmp108 = (_this__121 * m->_21);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(85)
		Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(85)
		Float tmp110 = (_this__221 * m->_22);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(85)
		Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(85)
		tmp18 = ::util::Transform_obj::__new(tmp71,tmp76,tmp81,tmp86,tmp91,tmp96,tmp101,tmp106,tmp111);
	}
	HX_STACK_LINE(85)
	scene->trans = tmp18;
	HX_STACK_LINE(89)
	::control::Scene tmp19 = scene;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(89)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsDemo_obj,renderFront,return )

::control::Scene GraphicsDemo_obj::render( Float delta){
	HX_STACK_FRAME("control.demo.GraphicsDemo","render",0x60066a7c,"control.demo.GraphicsDemo.render","control/demo/GraphicsDemo.hx",92,0xc0f4ded6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(93)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(95)
	Float tmp = delta;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	::control::Scene tmp1 = this->renderFront(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new().Add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	scene->children = tmp2;
	HX_STACK_LINE(98)
	::control::DrawPrim tmp3 = ::control::DrawPrim_obj::SetColor((int)0,(int)0,(int)255,(int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	::util::Vector tmp4 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	::control::DrawPrim tmp5 = ::control::DrawPrim_obj::DrawImage(tmp4,HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(100)
	::control::DrawPrim tmp6 = ::control::DrawPrim_obj::SetColor((int)0,(int)0,(int)0,(int)255);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(101)
	::control::DrawPrim tmp7 = ::control::DrawPrim_obj::SetFont(HX_HCSTRING("Arial","\x23","\x09","\xb6","\xb8"),(int)14);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	::util::Vector tmp8 = ::util::Vector_obj::__new((int)500,(int)500);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(102)
	::control::DrawPrim tmp9 = ::control::DrawPrim_obj::DrawText(tmp8,::control::TextAlign_obj::LeftText,HX_HCSTRING("this text isn't part of the image","\xd0","\x89","\xe3","\xcb"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(97)
	Array< ::Dynamic > tmp10 = Array_obj< ::Dynamic >::__new().Add(tmp3).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(97)
	scene->prims = tmp10;
	HX_STACK_LINE(106)
	::control::Scene tmp11 = scene;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(106)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsDemo_obj,render,return )

Void GraphicsDemo_obj::handle( ::control::Event e){
{
		HX_STACK_FRAME("control.demo.GraphicsDemo","handle",0x12da82ce,"control.demo.GraphicsDemo.handle","control/demo/GraphicsDemo.hx",110,0xc0f4ded6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(110)
		switch( (int)(e->__Index())){
			case (int)0: {
				HX_STACK_LINE(110)
				Float tmp = (::control::Event(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(110)
				Float y = tmp;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(110)
				Float tmp1 = (::control::Event(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(110)
				Float x = tmp1;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(112)
					this->x = x;
					HX_STACK_LINE(112)
					this->y = y;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(110)
				bool tmp = (::control::Event(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(110)
				bool state = tmp;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(110)
				::control::Key tmp1 = (::control::Event(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(110)
				::control::Key key = tmp1;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(115)
					::control::Key tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(115)
					::control::Key tmp3 = ::control::Key_obj::CharKey(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(115)
					bool tmp4 = ::Type_obj::enumEq(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(115)
					if ((tmp4)){
						HX_STACK_LINE(116)
						this->exit = true;
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsDemo_obj,handle,(void))

Void GraphicsDemo_obj::profiling( ::control::Profile data){
{
		HX_STACK_FRAME("control.demo.GraphicsDemo","profiling",0xcc3a8b40,"control.demo.GraphicsDemo.profiling","control/demo/GraphicsDemo.hx",122,0xc0f4ded6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(123)
		::String tmp = data->print();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("GraphicsDemo.hx","\xd0","\xb7","\x81","\x2c"),123,HX_HCSTRING("control.demo.GraphicsDemo","\x88","\xf8","\x79","\x50"),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicsDemo_obj,profiling,(void))

::control::demo::DemoSelect GraphicsDemo_obj::conclude( ){
	HX_STACK_FRAME("control.demo.GraphicsDemo","conclude",0xf5717d51,"control.demo.GraphicsDemo.conclude","control/demo/GraphicsDemo.hx",126,0xc0f4ded6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	bool tmp = this->exit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	if ((tmp)){
		HX_STACK_LINE(127)
		return ::control::demo::DemoSelect_obj::HomeSelect;
	}
	HX_STACK_LINE(128)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsDemo_obj,conclude,return )


GraphicsDemo_obj::GraphicsDemo_obj()
{
}

Dynamic GraphicsDemo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"conclude") ) { return conclude_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderElem") ) { return renderElem_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderFront") ) { return renderFront_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsDemo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exit") ) { exit=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GraphicsDemo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GraphicsDemo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GraphicsDemo_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsFloat,(int)offsetof(GraphicsDemo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(GraphicsDemo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(GraphicsDemo_obj,exit),HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("renderElem","\x05","\xd3","\x1e","\xe0"),
	HX_HCSTRING("renderFront","\x73","\x45","\x3f","\xd2"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("conclude","\xab","\xe8","\xf9","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsDemo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsDemo_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsDemo_obj::__mClass;

void GraphicsDemo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.demo.GraphicsDemo","\x88","\xf8","\x79","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GraphicsDemo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsDemo_obj >;
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

} // end namespace control
} // end namespace demo
