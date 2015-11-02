#include <hxcpp.h>

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
#ifndef INCLUDED_control_demo_SelectionScreen
#include <control/demo/SelectionScreen.h>
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

Void SelectionScreen_obj::__construct()
{
HX_STACK_FRAME("control.demo.SelectionScreen","new",0x9d3e9010,"control.demo.SelectionScreen.new","control/demo/AllDemo.hx",19,0x43214134)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->selection = null();
}
;
	return null();
}

//SelectionScreen_obj::~SelectionScreen_obj() { }

Dynamic SelectionScreen_obj::__CreateEmpty() { return  new SelectionScreen_obj; }
hx::ObjectPtr< SelectionScreen_obj > SelectionScreen_obj::__new()
{  hx::ObjectPtr< SelectionScreen_obj > _result_ = new SelectionScreen_obj();
	_result_->__construct();
	return _result_;}

Dynamic SelectionScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SelectionScreen_obj > _result_ = new SelectionScreen_obj();
	_result_->__construct();
	return _result_;}

hx::Object *SelectionScreen_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::control::Control_obj)) return operator ::control::Control_obj *();
	return super::__ToInterface(inType);
}

SelectionScreen_obj::operator ::control::Control_obj *()
	{ return new ::control::Control_delegate_< SelectionScreen_obj >(this); }
Void SelectionScreen_obj::init( ::control::Network _){
{
		HX_STACK_FRAME("control.demo.SelectionScreen","init",0xf6383560,"control.demo.SelectionScreen.init","control/demo/AllDemo.hx",25,0x43214134)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SelectionScreen_obj,init,(void))

Void SelectionScreen_obj::tick( Float _){
{
		HX_STACK_FRAME("control.demo.SelectionScreen","tick",0xfd79bdad,"control.demo.SelectionScreen.tick","control/demo/AllDemo.hx",27,0x43214134)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SelectionScreen_obj,tick,(void))

::control::Scene SelectionScreen_obj::render( Float delta){
	HX_STACK_FRAME("control.demo.SelectionScreen","render",0x8a9599a6,"control.demo.SelectionScreen.render","control/demo/AllDemo.hx",62,0x43214134)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(63)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(64)
	::control::Scene tmp = ::control::demo::SelectionScreen_obj::renderText();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	scene->children->push(tmp);
	HX_STACK_LINE(65)
	::control::Scene tmp1 = scene;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(SelectionScreen_obj,render,return )

Void SelectionScreen_obj::profiling( ::control::Profile data){
{
		HX_STACK_FRAME("control.demo.SelectionScreen","profiling",0x91d5b256,"control.demo.SelectionScreen.profiling","control/demo/AllDemo.hx",68,0x43214134)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(69)
		::String tmp = data->print();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("AllDemo.hx","\x7a","\x0a","\xf7","\x6b"),69,HX_HCSTRING("control.demo.SelectionScreen","\x1e","\x88","\x19","\xb9"),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SelectionScreen_obj,profiling,(void))

Void SelectionScreen_obj::handle( ::control::Event e){
{
		HX_STACK_FRAME("control.demo.SelectionScreen","handle",0x3d69b1f8,"control.demo.SelectionScreen.handle","control/demo/AllDemo.hx",77,0x43214134)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(77)
		switch( (int)(e->__Index())){
			case (int)1: {
				HX_STACK_LINE(77)
				::control::Key tmp = (::control::Event(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(77)
				::control::Key key = tmp;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(79)
					::control::Key tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(79)
					::control::Key tmp2 = ::control::Key_obj::CharKey(HX_HCSTRING("1","\x31","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(79)
					bool tmp3 = ::Type_obj::enumEq(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(79)
					if ((tmp3)){
						HX_STACK_LINE(79)
						this->selection = ::control::demo::DemoSelect_obj::GraphicsSelect;
					}
					HX_STACK_LINE(80)
					::control::Key tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(80)
					::control::Key tmp5 = ::control::Key_obj::CharKey(HX_HCSTRING("2","\x32","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(80)
					bool tmp6 = ::Type_obj::enumEq(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(80)
					if ((tmp6)){
						HX_STACK_LINE(80)
						this->selection = ::control::demo::DemoSelect_obj::InputSelect;
					}
					HX_STACK_LINE(81)
					::control::Key tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(81)
					::control::Key tmp8 = ::control::Key_obj::CharKey(HX_HCSTRING("3","\x33","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(81)
					bool tmp9 = ::Type_obj::enumEq(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(81)
					if ((tmp9)){
						HX_STACK_LINE(81)
						this->selection = ::control::demo::DemoSelect_obj::PhysSelect;
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


HX_DEFINE_DYNAMIC_FUNC1(SelectionScreen_obj,handle,(void))

::control::demo::DemoSelect SelectionScreen_obj::conclude( ){
	HX_STACK_FRAME("control.demo.SelectionScreen","conclude",0x458a4afb,"control.demo.SelectionScreen.conclude","control/demo/AllDemo.hx",87,0x43214134)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::control::demo::DemoSelect tmp = this->selection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SelectionScreen_obj,conclude,return )

::control::Scene SelectionScreen_obj::renderText( ){
	HX_STACK_FRAME("control.demo.SelectionScreen","renderText",0x142d5d73,"control.demo.SelectionScreen.renderText","control/demo/AllDemo.hx",33,0x43214134)
	HX_STACK_LINE(34)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(37)
	::String text_0 = HX_HCSTRING("Welcome to the solemnsky control technical demo.","\x7a","\xff","\xaa","\x02");		HX_STACK_VAR(text_0,"text_0");
	HX_STACK_LINE(38)
	::String text_1 = HX_HCSTRING("What you are seeing is the the control object control.AllDemo.run()","\x5f","\x9e","\x67","\x4c");		HX_STACK_VAR(text_1,"text_1");
	HX_STACK_LINE(39)
	::String text_2 = HX_HCSTRING("compiled through one of our export media.","\xbd","\x58","\x95","\x1e");		HX_STACK_VAR(text_2,"text_2");
	HX_STACK_LINE(40)
	::String text_3 = HX_HCSTRING("It demonstrates several features that should be achieved in a ","\x1b","\xb2","\xc4","\x5a");		HX_STACK_VAR(text_3,"text_3");
	HX_STACK_LINE(41)
	::String text_4 = HX_HCSTRING(" technically sound export media. ","\x31","\xa7","\xd0","\x2b");		HX_STACK_VAR(text_4,"text_4");
	HX_STACK_LINE(42)
	::String text_5 = HX_HCSTRING("Press '1', '2', or '3' to select a demo from here and 'q' to exit a demo.","\xb0","\x18","\xdc","\xfc");		HX_STACK_VAR(text_5,"text_5");
	HX_STACK_LINE(46)
	::control::DrawPrim tmp = ::control::DrawPrim_obj::SetColor((int)0,(int)0,(int)0,(int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	::control::DrawPrim tmp1 = ::control::DrawPrim_obj::SetFont(HX_HCSTRING("Arial","\x23","\x09","\xb6","\xb8"),(int)14);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	Float tmp2 = ((Float)266.666666666666686);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	::util::Vector tmp3 = ::util::Vector_obj::__new(tmp2,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	::String tmp4 = text_0;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	::control::DrawPrim tmp5 = ::control::DrawPrim_obj::DrawText(tmp3,::control::TextAlign_obj::CenterText,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	::util::Vector tmp6 = ::util::Vector_obj::__new((int)0,(int)25);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	::String tmp7 = text_1;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	::control::DrawPrim tmp8 = ::control::DrawPrim_obj::DrawText(tmp6,::control::TextAlign_obj::LeftText,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	::util::Vector tmp9 = ::util::Vector_obj::__new((int)0,(int)40);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(33)
	::String tmp10 = text_2;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(50)
	::control::DrawPrim tmp11 = ::control::DrawPrim_obj::DrawText(tmp9,::control::TextAlign_obj::LeftText,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(51)
	::util::Vector tmp12 = ::util::Vector_obj::__new((int)0,(int)65);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(33)
	::String tmp13 = text_3;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(51)
	::control::DrawPrim tmp14 = ::control::DrawPrim_obj::DrawText(tmp12,::control::TextAlign_obj::LeftText,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(52)
	::util::Vector tmp15 = ::util::Vector_obj::__new((int)0,(int)80);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(33)
	::String tmp16 = text_4;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(52)
	::control::DrawPrim tmp17 = ::control::DrawPrim_obj::DrawText(tmp15,::control::TextAlign_obj::LeftText,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(53)
	Float tmp18 = ((Float)266.666666666666686);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(53)
	::util::Vector tmp19 = ::util::Vector_obj::__new(tmp18,(int)105);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(33)
	::String tmp20 = text_5;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(53)
	::control::DrawPrim tmp21 = ::control::DrawPrim_obj::DrawText(tmp19,::control::TextAlign_obj::CenterText,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(45)
	Array< ::Dynamic > tmp22 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp5).Add(tmp8).Add(tmp11).Add(tmp14).Add(tmp17).Add(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(45)
	scene->prims = tmp22;
	HX_STACK_LINE(56)
	::util::Transform tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		Float _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
		HX_STACK_LINE(56)
		Float _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
		HX_STACK_LINE(56)
		Float _this__20 = (int)0;		HX_STACK_VAR(_this__20,"_this__20");
		HX_STACK_LINE(56)
		Float _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
		HX_STACK_LINE(56)
		Float _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
		HX_STACK_LINE(56)
		Float _this__21 = (int)5;		HX_STACK_VAR(_this__21,"_this__21");
		HX_STACK_LINE(56)
		Float _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
		HX_STACK_LINE(56)
		Float _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
		HX_STACK_LINE(56)
		Float _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
		HX_STACK_LINE(57)
		Float m__00 = (int)3;		HX_STACK_VAR(m__00,"m__00");
		HX_STACK_LINE(57)
		Float m__10 = (int)0;		HX_STACK_VAR(m__10,"m__10");
		HX_STACK_LINE(57)
		Float m__20 = (int)0;		HX_STACK_VAR(m__20,"m__20");
		HX_STACK_LINE(57)
		Float m__01 = (int)0;		HX_STACK_VAR(m__01,"m__01");
		HX_STACK_LINE(57)
		Float m__11 = (int)3;		HX_STACK_VAR(m__11,"m__11");
		HX_STACK_LINE(57)
		Float m__21 = (int)0;		HX_STACK_VAR(m__21,"m__21");
		HX_STACK_LINE(57)
		Float m__02 = (int)0;		HX_STACK_VAR(m__02,"m__02");
		HX_STACK_LINE(57)
		Float m__12 = (int)0;		HX_STACK_VAR(m__12,"m__12");
		HX_STACK_LINE(57)
		Float m__22 = (int)1;		HX_STACK_VAR(m__22,"m__22");
		HX_STACK_LINE(56)
		Float tmp24 = (_this__00 * m__00);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(56)
		Float tmp25 = (_this__10 * m__01);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(56)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(56)
		Float tmp27 = (_this__20 * m__02);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(56)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(56)
		Float tmp29 = (_this__00 * m__10);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(56)
		Float tmp30 = (_this__10 * m__11);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(56)
		Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(56)
		Float tmp32 = (_this__20 * m__12);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(56)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(56)
		Float tmp34 = (_this__00 * m__20);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(56)
		Float tmp35 = (_this__10 * m__21);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(56)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(56)
		Float tmp37 = (_this__20 * m__22);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(56)
		Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(56)
		Float tmp39 = (_this__01 * m__00);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(56)
		Float tmp40 = (_this__11 * m__01);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(56)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(56)
		Float tmp42 = (_this__21 * m__02);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(56)
		Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(56)
		Float tmp44 = (_this__01 * m__10);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(56)
		Float tmp45 = (_this__11 * m__11);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(56)
		Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(56)
		Float tmp47 = (_this__21 * m__12);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(56)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(56)
		Float tmp49 = (_this__01 * m__20);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(56)
		Float tmp50 = (_this__11 * m__21);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(56)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(56)
		Float tmp52 = (_this__21 * m__22);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(56)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(56)
		Float tmp54 = (_this__02 * m__00);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(56)
		Float tmp55 = (_this__12 * m__01);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(56)
		Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(56)
		Float tmp57 = (_this__22 * m__02);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(56)
		Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(56)
		Float tmp59 = (_this__02 * m__10);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(56)
		Float tmp60 = (_this__12 * m__11);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(56)
		Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(56)
		Float tmp62 = (_this__22 * m__12);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(56)
		Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(56)
		Float tmp64 = (_this__02 * m__20);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(56)
		Float tmp65 = (_this__12 * m__21);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(56)
		Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(56)
		Float tmp67 = (_this__22 * m__22);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(56)
		Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(56)
		tmp23 = ::util::Transform_obj::__new(tmp28,tmp33,tmp38,tmp43,tmp48,tmp53,tmp58,tmp63,tmp68);
	}
	HX_STACK_LINE(56)
	scene->trans = tmp23;
	HX_STACK_LINE(59)
	::control::Scene tmp24 = scene;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(59)
	return tmp24;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SelectionScreen_obj,renderText,return )


SelectionScreen_obj::SelectionScreen_obj()
{
}

void SelectionScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SelectionScreen);
	HX_MARK_MEMBER_NAME(selection,"selection");
	HX_MARK_END_CLASS();
}

void SelectionScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selection,"selection");
}

Dynamic SelectionScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
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
		if (HX_FIELD_EQ(inName,"selection") ) { return selection; }
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SelectionScreen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderText") ) { outValue = renderText_dyn(); return true;  }
	}
	return false;
}

Dynamic SelectionScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"selection") ) { selection=inValue.Cast< ::control::demo::DemoSelect >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SelectionScreen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SelectionScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("selection","\x4c","\xf8","\x1a","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::control::demo::DemoSelect*/ ,(int)offsetof(SelectionScreen_obj,selection),HX_HCSTRING("selection","\x4c","\xf8","\x1a","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("selection","\x4c","\xf8","\x1a","\x8e"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("conclude","\xab","\xe8","\xf9","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SelectionScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SelectionScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class SelectionScreen_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("renderText","\x23","\xc7","\x03","\xea"),
	::String(null()) };

void SelectionScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.demo.SelectionScreen","\x1e","\x88","\x19","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SelectionScreen_obj::__GetStatic;
	__mClass->mSetStaticField = &SelectionScreen_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SelectionScreen_obj >;
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
