#include <hxcpp.h>

#include "float32array.h"
#include "hxMath.h"
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Key
#include <kha/Key.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sys
#include <kha/Sys.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32Array
#include <kha/arrays/Float32Array.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_Program
#include <kha/graphics4/Program.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_input_Gamepad
#include <kha/input/Gamepad.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_input_Mouse
#include <kha/input/Mouse.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
#ifndef INCLUDED_kha_math_Quaternion
#include <kha/math/Quaternion.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif
#ifndef INCLUDED_kha_math_Vector4
#include <kha/math/Vector4.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
#ifndef INCLUDED_kha_vr_Pose
#include <kha/vr/Pose.h>
#endif
#ifndef INCLUDED_kha_vr_PoseState
#include <kha/vr/PoseState.h>
#endif
#ifndef INCLUDED_kha_vr_SensorState
#include <kha/vr/SensorState.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpImage
#include <kha/vr/TimeWarpImage.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpParms
#include <kha/vr/TimeWarpParms.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterface
#include <kha/vr/VrInterface.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterfaceEmulated
#include <kha/vr/VrInterfaceEmulated.h>
#endif
namespace kha{
namespace vr{

Void VrInterfaceEmulated_obj::__construct()
{
HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","new",0xc6e9e8f8,"kha.vr.VrInterfaceEmulated.new","kha/vr/VrInterfaceEmulated.hx",31,0x856b8c18)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(146)
	this->mouseButtonDown = false;
	HX_STACK_LINE(126)
	this->oldMouseY = (int)0;
	HX_STACK_LINE(125)
	this->oldMouseX = (int)0;
	HX_STACK_LINE(42)
	this->yawDelta = ((Float)0.0);
	HX_STACK_LINE(41)
	this->pitchDelta = ((Float)0.0);
	HX_STACK_LINE(39)
	this->yawDegrees = ((Float)0.0);
	HX_STACK_LINE(38)
	this->pitchDegrees = ((Float)0.0);
	HX_STACK_LINE(264)
	super::__construct();
	HX_STACK_LINE(266)
	::kha::input::Gamepad tmp = ::kha::input::Gamepad_obj::get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	Dynamic tmp1 = this->axisEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	Dynamic tmp2 = this->buttonEvent_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	tmp->notify(tmp1,tmp2);
	HX_STACK_LINE(267)
	::kha::input::Keyboard tmp3 = ::kha::input::Keyboard_obj::get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(267)
	Dynamic tmp4 = this->keyDownEvent_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(267)
	Dynamic tmp5 = this->keyUpEvent_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(267)
	tmp3->notify(tmp4,tmp5);
	HX_STACK_LINE(268)
	::kha::input::Mouse tmp6 = ::kha::input::Mouse_obj::get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(268)
	Dynamic tmp7 = this->mouseButtonDownEvent_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(268)
	Dynamic tmp8 = this->mouseButtonUpEvent_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(268)
	Dynamic tmp9 = this->mouseMoveEvent_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(268)
	tmp6->notify(tmp7,tmp8,tmp9,null());
	HX_STACK_LINE(271)
	::kha::graphics4::VertexStructure structure = ::kha::graphics4::VertexStructure_obj::__new();		HX_STACK_VAR(structure,"structure");
	HX_STACK_LINE(273)
	::kha::math::Quaternion tmp10 = ::kha::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(273)
	this->orientation = tmp10;
	HX_STACK_LINE(274)
	this->updateOrientation();
	HX_STACK_LINE(278)
	structure->add(HX_HCSTRING("vertexPosition","\x2d","\x3c","\x14","\x50"),::kha::graphics4::VertexData_obj::Float3);
	HX_STACK_LINE(279)
	structure->add(HX_HCSTRING("texPosition","\xb0","\x79","\xff","\xc7"),::kha::graphics4::VertexData_obj::Float2);
	HX_STACK_LINE(280)
	structure->add(HX_HCSTRING("vertexColor","\x5f","\x3b","\x98","\x5e"),::kha::graphics4::VertexData_obj::Float4);
	HX_STACK_LINE(282)
	::kha::graphics4::VertexBuffer tmp11 = ::kha::graphics4::VertexBuffer_obj::__new((int)4,structure,::kha::graphics4::Usage_obj::StaticUsage,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(282)
	this->vb = tmp11;
	HX_STACK_LINE(283)
	::kha::graphics4::VertexBuffer tmp12 = this->vb;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(283)
	::kha::arrays::Float32Array tmp13 = tmp12->lock(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(283)
	::kha::arrays::Float32Array verts = tmp13;		HX_STACK_VAR(verts,"verts");
	HX_STACK_LINE(285)
	::kha::arrays::Float32Array tmp14 = verts;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(285)
	::kha::math::Vector3 tmp15 = ::kha::math::Vector3_obj::__new((int)-1,(int)-1,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(285)
	::kha::math::Vector2 tmp16 = ::kha::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(285)
	::kha::math::Vector4 tmp17 = ::kha::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(285)
	this->setVertex(tmp14,(int)0,tmp15,tmp16,tmp17);
	HX_STACK_LINE(286)
	::kha::arrays::Float32Array tmp18 = verts;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(286)
	::kha::math::Vector3 tmp19 = ::kha::math::Vector3_obj::__new((int)-1,(int)1,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(286)
	::kha::math::Vector2 tmp20 = ::kha::math::Vector2_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(286)
	::kha::math::Vector4 tmp21 = ::kha::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(286)
	this->setVertex(tmp18,(int)1,tmp19,tmp20,tmp21);
	HX_STACK_LINE(287)
	::kha::arrays::Float32Array tmp22 = verts;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(287)
	::kha::math::Vector3 tmp23 = ::kha::math::Vector3_obj::__new((int)1,(int)-1,(int)0);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(287)
	::kha::math::Vector2 tmp24 = ::kha::math::Vector2_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(287)
	::kha::math::Vector4 tmp25 = ::kha::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(287)
	this->setVertex(tmp22,(int)2,tmp23,tmp24,tmp25);
	HX_STACK_LINE(288)
	::kha::arrays::Float32Array tmp26 = verts;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(288)
	::kha::math::Vector3 tmp27 = ::kha::math::Vector3_obj::__new((int)1,(int)1,(int)0);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(288)
	::kha::math::Vector2 tmp28 = ::kha::math::Vector2_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(288)
	::kha::math::Vector4 tmp29 = ::kha::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(288)
	this->setVertex(tmp26,(int)3,tmp27,tmp28,tmp29);
	HX_STACK_LINE(290)
	::kha::graphics4::VertexBuffer tmp30 = this->vb;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(290)
	tmp30->unlock();
	HX_STACK_LINE(292)
	::kha::graphics4::IndexBuffer tmp31 = ::kha::graphics4::IndexBuffer_obj::__new((int)6,::kha::graphics4::Usage_obj::StaticUsage,null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(292)
	this->ib = tmp31;
	HX_STACK_LINE(293)
	::kha::graphics4::IndexBuffer tmp32 = this->ib;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(293)
	Array< int > tmp33 = tmp32->lock();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(293)
	Array< int > indices = tmp33;		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(295)
	indices[(int)0] = (int)0;
	HX_STACK_LINE(296)
	indices[(int)1] = (int)1;
	HX_STACK_LINE(297)
	indices[(int)2] = (int)2;
	HX_STACK_LINE(298)
	indices[(int)3] = (int)1;
	HX_STACK_LINE(299)
	indices[(int)4] = (int)3;
	HX_STACK_LINE(300)
	indices[(int)5] = (int)2;
	HX_STACK_LINE(303)
	::kha::graphics4::IndexBuffer tmp34 = this->ib;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(303)
	tmp34->unlock();
	HX_STACK_LINE(305)
	::kha::graphics4::Program tmp35 = ::kha::graphics4::Program_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(305)
	this->program = tmp35;
	HX_STACK_LINE(307)
	::kha::graphics4::Program tmp36 = this->program;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(307)
	::kha::Loader tmp37 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(307)
	::kha::Blob tmp38 = tmp37->getShader(HX_HCSTRING("painter-image.vert","\x66","\xc7","\x28","\x4e"));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(307)
	::kha::graphics4::VertexShader tmp39 = ::kha::graphics4::VertexShader_obj::__new(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(307)
	tmp36->setVertexShader(tmp39);
	HX_STACK_LINE(308)
	::kha::graphics4::Program tmp40 = this->program;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(308)
	::kha::Loader tmp41 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(308)
	::kha::Blob tmp42 = tmp41->getShader(HX_HCSTRING("painter-image.frag","\xe7","\x2b","\x9f","\x43"));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(308)
	::kha::graphics4::FragmentShader tmp43 = ::kha::graphics4::FragmentShader_obj::__new(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(308)
	tmp40->setFragmentShader(tmp43);
	HX_STACK_LINE(309)
	::kha::graphics4::Program tmp44 = this->program;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(309)
	::kha::graphics4::VertexStructure tmp45 = structure;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(309)
	tmp44->link(tmp45);
}
;
	return null();
}

//VrInterfaceEmulated_obj::~VrInterfaceEmulated_obj() { }

Dynamic VrInterfaceEmulated_obj::__CreateEmpty() { return  new VrInterfaceEmulated_obj; }
hx::ObjectPtr< VrInterfaceEmulated_obj > VrInterfaceEmulated_obj::__new()
{  hx::ObjectPtr< VrInterfaceEmulated_obj > _result_ = new VrInterfaceEmulated_obj();
	_result_->__construct();
	return _result_;}

Dynamic VrInterfaceEmulated_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VrInterfaceEmulated_obj > _result_ = new VrInterfaceEmulated_obj();
	_result_->__construct();
	return _result_;}

Float VrInterfaceEmulated_obj::degreesToRadians( Float degrees){
	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","degreesToRadians",0x4600b5f8,"kha.vr.VrInterfaceEmulated.degreesToRadians","kha/vr/VrInterfaceEmulated.hx",51,0x856b8c18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(52)
	Float tmp = degrees;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	Float tmp3 = (Float(tmp2) / Float(((Float)180.0)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(VrInterfaceEmulated_obj,degreesToRadians,return )

Void VrInterfaceEmulated_obj::updateOrientation( ){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","updateOrientation",0x4fdf8ddf,"kha.vr.VrInterfaceEmulated.updateOrientation","kha/vr/VrInterfaceEmulated.hx",56,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		Float tmp = this->yawDelta;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		hx::AddEq(this->yawDegrees,tmp);
		HX_STACK_LINE(59)
		Float tmp1 = this->pitchDelta;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		hx::AddEq(this->pitchDegrees,tmp1);
		HX_STACK_LINE(61)
		Float tmp2 = this->pitchDegrees;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		bool tmp3 = (tmp2 < ((Float)-80));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		if ((tmp3)){
			HX_STACK_LINE(62)
			this->pitchDegrees = ((Float)-80);
		}
		HX_STACK_LINE(63)
		Float tmp4 = this->pitchDegrees;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		bool tmp5 = (tmp4 > ((Float)80));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		if ((tmp5)){
			HX_STACK_LINE(64)
			this->pitchDegrees = ((Float)80);
		}
		HX_STACK_LINE(69)
		::kha::math::Vector3 tmp6 = ::kha::math::Vector3_obj::__new((int)1,(int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		Float tmp7 = this->pitchDegrees;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		Float tmp8 = this->degreesToRadians(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		::kha::math::Quaternion tmp9 = ::kha::math::Quaternion_obj::fromAxisAngle(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		::kha::math::Quaternion pitchQuat = tmp9;		HX_STACK_VAR(pitchQuat,"pitchQuat");
		HX_STACK_LINE(71)
		::kha::math::Vector3 tmp10 = ::kha::math::Vector3_obj::__new((int)0,(int)1,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(71)
		Float tmp11 = this->yawDegrees;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(71)
		Float tmp12 = this->degreesToRadians(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(71)
		::kha::math::Quaternion tmp13 = ::kha::math::Quaternion_obj::fromAxisAngle(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(71)
		::kha::math::Quaternion yawQuat = tmp13;		HX_STACK_VAR(yawQuat,"yawQuat");
		HX_STACK_LINE(72)
		::kha::math::Quaternion tmp14 = pitchQuat;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(72)
		::kha::math::Quaternion tmp15 = yawQuat->mult(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(72)
		this->orientation = tmp15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VrInterfaceEmulated_obj,updateOrientation,(void))

Void VrInterfaceEmulated_obj::buttonEvent( int button,Float value){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","buttonEvent",0xf133f960,"kha.vr.VrInterfaceEmulated.buttonEvent","kha/vr/VrInterfaceEmulated.hx",76,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,buttonEvent,(void))

Void VrInterfaceEmulated_obj::axisEvent( int axis,Float value){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","axisEvent",0x5e5f4e51,"kha.vr.VrInterfaceEmulated.axisEvent","kha/vr/VrInterfaceEmulated.hx",80,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,axisEvent,(void))

Void VrInterfaceEmulated_obj::keyDownEvent( ::kha::Key key,::String _char){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","keyDownEvent",0x41c15b21,"kha.vr.VrInterfaceEmulated.keyDownEvent","kha/vr/VrInterfaceEmulated.hx",85,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(_char,"char")
		HX_STACK_LINE(85)
		switch( (int)(key->__Index())){
			case (int)11: {
				HX_STACK_LINE(87)
				this->yawDelta = ((Float)2.0);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(90)
				Float tmp = ((Float)-2.);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(90)
				this->yawDelta = tmp;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(93)
				this->pitchDelta = ((Float)2.0);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(96)
				Float tmp = ((Float)-2.);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(96)
				this->pitchDelta = tmp;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,keyDownEvent,(void))

Void VrInterfaceEmulated_obj::keyUpEvent( ::kha::Key key,::String _char){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","keyUpEvent",0xc9923248,"kha.vr.VrInterfaceEmulated.keyUpEvent","kha/vr/VrInterfaceEmulated.hx",106,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(_char,"char")
		HX_STACK_LINE(106)
		switch( (int)(key->__Index())){
			case (int)11: {
				HX_STACK_LINE(108)
				this->yawDelta = ((Float)0.0);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(111)
				this->yawDelta = ((Float)0.0);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(114)
				this->pitchDelta = ((Float)0.0);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(117)
				this->pitchDelta = ((Float)0.0);
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,keyUpEvent,(void))

Void VrInterfaceEmulated_obj::mouseMoveEvent( int x,int y,int movementX,int movementY){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","mouseMoveEvent",0xf683f2cc,"kha.vr.VrInterfaceEmulated.mouseMoveEvent","kha/vr/VrInterfaceEmulated.hx",128,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(movementX,"movementX")
		HX_STACK_ARG(movementY,"movementY")
		HX_STACK_LINE(129)
		bool tmp = this->mouseButtonDown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		if ((tmp1)){
			HX_STACK_LINE(129)
			return null();
		}
		HX_STACK_LINE(131)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		int tmp3 = this->oldMouseX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		int mouseDeltaX = tmp4;		HX_STACK_VAR(mouseDeltaX,"mouseDeltaX");
		HX_STACK_LINE(132)
		int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		int tmp6 = this->oldMouseY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		int mouseDeltaY = tmp7;		HX_STACK_VAR(mouseDeltaY,"mouseDeltaY");
		HX_STACK_LINE(133)
		this->oldMouseX = x;
		HX_STACK_LINE(134)
		this->oldMouseY = y;
		HX_STACK_LINE(137)
		Float tmp8 = (mouseDeltaX * ((Float)0.1));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(137)
		hx::AddEq(this->yawDegrees,tmp8);
		HX_STACK_LINE(138)
		Float tmp9 = (mouseDeltaY * ((Float)0.1));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		hx::AddEq(this->pitchDegrees,tmp9);
		HX_STACK_LINE(140)
		Float tmp10 = this->pitchDegrees;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		bool tmp11 = (tmp10 < ((Float)-80));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		if ((tmp11)){
			HX_STACK_LINE(141)
			this->pitchDegrees = ((Float)-80);
		}
		HX_STACK_LINE(142)
		Float tmp12 = this->pitchDegrees;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(142)
		bool tmp13 = (tmp12 > ((Float)80));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(142)
		if ((tmp13)){
			HX_STACK_LINE(143)
			this->pitchDegrees = ((Float)80);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VrInterfaceEmulated_obj,mouseMoveEvent,(void))

Void VrInterfaceEmulated_obj::mouseButtonDownEvent( int button,int x,int y){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","mouseButtonDownEvent",0xcb48abc9,"kha.vr.VrInterfaceEmulated.mouseButtonDownEvent","kha/vr/VrInterfaceEmulated.hx",148,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(149)
		bool tmp = (button == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		if ((tmp)){
			HX_STACK_LINE(150)
			this->mouseButtonDown = true;
			HX_STACK_LINE(151)
			this->oldMouseX = x;
			HX_STACK_LINE(152)
			this->oldMouseY = y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VrInterfaceEmulated_obj,mouseButtonDownEvent,(void))

Void VrInterfaceEmulated_obj::mouseButtonUpEvent( int button,int x,int y){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","mouseButtonUpEvent",0x73d888f0,"kha.vr.VrInterfaceEmulated.mouseButtonUpEvent","kha/vr/VrInterfaceEmulated.hx",156,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(157)
		bool tmp = (button == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		if ((tmp)){
			HX_STACK_LINE(158)
			this->mouseButtonDown = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VrInterfaceEmulated_obj,mouseButtonUpEvent,(void))

::kha::vr::SensorState VrInterfaceEmulated_obj::GetSensorState( ){
	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","GetSensorState",0x2d744709,"kha.vr.VrInterfaceEmulated.GetSensorState","kha/vr/VrInterfaceEmulated.hx",166,0x856b8c18)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	::kha::vr::SensorState tmp = this->GetPredictedSensorState(((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


::kha::vr::SensorState VrInterfaceEmulated_obj::GetPredictedSensorState( Float time){
	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","GetPredictedSensorState",0x7876e4cd,"kha.vr.VrInterfaceEmulated.GetPredictedSensorState","kha/vr/VrInterfaceEmulated.hx",172,0x856b8c18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(174)
	this->updateOrientation();
	HX_STACK_LINE(176)
	::kha::vr::SensorState result = ::kha::vr::SensorState_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(178)
	result->Status = (int)0;
	HX_STACK_LINE(179)
	result->Temperature = (int)75;
	HX_STACK_LINE(180)
	::kha::vr::PoseState tmp = ::kha::vr::PoseState_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	result->Predicted = tmp;
	HX_STACK_LINE(181)
	result->Recorded = result->Predicted;
	HX_STACK_LINE(183)
	::kha::math::Vector3 tmp1 = ::kha::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	result->Predicted->AngularAcceleration = tmp1;
	HX_STACK_LINE(184)
	::kha::math::Vector3 tmp2 = ::kha::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	result->Predicted->AngularVelocity = tmp2;
	HX_STACK_LINE(185)
	::kha::math::Vector3 tmp3 = ::kha::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	result->Predicted->LinearAcceleration = tmp3;
	HX_STACK_LINE(186)
	::kha::math::Vector3 tmp4 = ::kha::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	result->Predicted->LinearVelocity = tmp4;
	HX_STACK_LINE(187)
	result->Predicted->TimeInSeconds = time;
	HX_STACK_LINE(188)
	::kha::vr::Pose tmp5 = ::kha::vr::Pose_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(188)
	result->Predicted->Pose = tmp5;
	HX_STACK_LINE(189)
	::kha::math::Quaternion tmp6 = this->orientation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(189)
	::kha::vr::Pose tmp7 = result->Predicted->Pose;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(189)
	tmp7->Orientation = tmp6;
	HX_STACK_LINE(190)
	::kha::math::Vector3 tmp8 = ::kha::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(190)
	::kha::vr::Pose tmp9 = result->Predicted->Pose;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(190)
	tmp9->Position = tmp8;
	HX_STACK_LINE(194)
	::kha::vr::SensorState tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(194)
	return tmp10;
}


Void VrInterfaceEmulated_obj::WarpSwapBlack( ){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","WarpSwapBlack",0x6a38f13c,"kha.vr.VrInterfaceEmulated.WarpSwapBlack","kha/vr/VrInterfaceEmulated.hx",199,0x856b8c18)
		HX_STACK_THIS(this)
	}
return null();
}


Void VrInterfaceEmulated_obj::WarpSwapLoadingIcon( ){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","WarpSwapLoadingIcon",0x01b62752,"kha.vr.VrInterfaceEmulated.WarpSwapLoadingIcon","kha/vr/VrInterfaceEmulated.hx",205,0x856b8c18)
		HX_STACK_THIS(this)
	}
return null();
}


Void VrInterfaceEmulated_obj::WarpSwap( ::kha::vr::TimeWarpParms parms){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","WarpSwap",0x6b1ff983,"kha.vr.VrInterfaceEmulated.WarpSwap","kha/vr/VrInterfaceEmulated.hx",210,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parms,"parms")
		HX_STACK_LINE(212)
		::kha::Framebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		::kha::graphics4::Graphics tmp1 = tmp->get_g4();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		::kha::graphics4::Graphics g = tmp1;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(213)
		g->begin();
		HX_STACK_LINE(214)
		::kha::graphics4::Program tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		g->setProgram(tmp2);
		HX_STACK_LINE(215)
		::kha::graphics4::VertexBuffer tmp3 = this->vb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		g->setVertexBuffer(tmp3);
		HX_STACK_LINE(216)
		::kha::graphics4::IndexBuffer tmp4 = this->ib;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		g->setIndexBuffer(tmp4);
		HX_STACK_LINE(217)
		::kha::graphics4::Program tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		::kha::graphics4::ConstantLocation tmp6 = tmp5->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		::kha::graphics4::ConstantLocation matrixLocation = tmp6;		HX_STACK_VAR(matrixLocation,"matrixLocation");
		HX_STACK_LINE(218)
		::kha::math::Matrix4 p = ::kha::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(219)
		::kha::graphics4::ConstantLocation tmp7 = matrixLocation;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(219)
		::kha::math::Matrix4 tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(219)
		g->setMatrix(tmp7,tmp8);
		HX_STACK_LINE(220)
		::kha::graphics4::Program tmp9 = this->program;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		::kha::graphics4::TextureUnit tmp10 = tmp9->getTextureUnit(HX_HCSTRING("tex","\xe7","\x5d","\x58","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		::kha::graphics4::TextureUnit texture = tmp10;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(222)
		::kha::graphics4::TextureUnit tmp11 = texture;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		::kha::Image tmp12 = parms->RightImage->Image;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(222)
		g->setTexture(tmp11,tmp12);
		HX_STACK_LINE(223)
		g->drawIndexedVertices(null(),null());
		HX_STACK_LINE(231)
		g->end();
	}
return null();
}


Float VrInterfaceEmulated_obj::GetTimeInSeconds( ){
	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","GetTimeInSeconds",0xdfb4915f,"kha.vr.VrInterfaceEmulated.GetTimeInSeconds","kha/vr/VrInterfaceEmulated.hx",237,0x856b8c18)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	Float tmp = ::kha::Sys_obj::getTime();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	return tmp;
}


Void VrInterfaceEmulated_obj::setVertex( ::kha::arrays::Float32Array a,int index,::kha::math::Vector3 pos,::kha::math::Vector2 uv,::kha::math::Vector4 color){
{
		HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","setVertex",0x8fe5eb3e,"kha.vr.VrInterfaceEmulated.setVertex","kha/vr/VrInterfaceEmulated.hx",248,0x856b8c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(uv,"uv")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(249)
		int tmp = (index * (int)9);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		int base = tmp;		HX_STACK_VAR(base,"base");
		HX_STACK_LINE(250)
		int tmp1 = base;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		Float tmp2 = pos->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		a->data.set(tmp1,tmp2);
		HX_STACK_LINE(251)
		int tmp3 = (base + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		Float tmp4 = pos->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		a->data.set(tmp3,tmp4);
		HX_STACK_LINE(252)
		int tmp5 = (base + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		Float tmp6 = pos->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		a->data.set(tmp5,tmp6);
		HX_STACK_LINE(253)
		hx::AddEq(base,(int)3);
		HX_STACK_LINE(254)
		int tmp7 = base;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(254)
		Float tmp8 = uv->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(254)
		a->data.set(tmp7,tmp8);
		HX_STACK_LINE(255)
		int tmp9 = (base + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(255)
		Float tmp10 = uv->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(255)
		a->data.set(tmp9,tmp10);
		HX_STACK_LINE(256)
		hx::AddEq(base,(int)2);
		HX_STACK_LINE(257)
		int tmp11 = base;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(257)
		Float tmp12 = color->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(257)
		a->data.set(tmp11,tmp12);
		HX_STACK_LINE(258)
		int tmp13 = (base + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(258)
		Float tmp14 = color->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(258)
		a->data.set(tmp13,tmp14);
		HX_STACK_LINE(259)
		int tmp15 = (base + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(259)
		Float tmp16 = color->z;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(259)
		a->data.set(tmp15,tmp16);
		HX_STACK_LINE(260)
		int tmp17 = (base + (int)3);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(260)
		Float tmp18 = color->w;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(260)
		a->data.set(tmp17,tmp18);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(VrInterfaceEmulated_obj,setVertex,(void))

Float VrInterfaceEmulated_obj::keyboardSpeed;

Float VrInterfaceEmulated_obj::mouseSpeed;

Float VrInterfaceEmulated_obj::minPitchDegrees;

Float VrInterfaceEmulated_obj::maxPitchDegrees;


VrInterfaceEmulated_obj::VrInterfaceEmulated_obj()
{
}

void VrInterfaceEmulated_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VrInterfaceEmulated);
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(pitchDegrees,"pitchDegrees");
	HX_MARK_MEMBER_NAME(yawDegrees,"yawDegrees");
	HX_MARK_MEMBER_NAME(pitchDelta,"pitchDelta");
	HX_MARK_MEMBER_NAME(yawDelta,"yawDelta");
	HX_MARK_MEMBER_NAME(oldMouseX,"oldMouseX");
	HX_MARK_MEMBER_NAME(oldMouseY,"oldMouseY");
	HX_MARK_MEMBER_NAME(mouseButtonDown,"mouseButtonDown");
	HX_MARK_MEMBER_NAME(vb,"vb");
	HX_MARK_MEMBER_NAME(ib,"ib");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_END_CLASS();
}

void VrInterfaceEmulated_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(pitchDegrees,"pitchDegrees");
	HX_VISIT_MEMBER_NAME(yawDegrees,"yawDegrees");
	HX_VISIT_MEMBER_NAME(pitchDelta,"pitchDelta");
	HX_VISIT_MEMBER_NAME(yawDelta,"yawDelta");
	HX_VISIT_MEMBER_NAME(oldMouseX,"oldMouseX");
	HX_VISIT_MEMBER_NAME(oldMouseY,"oldMouseY");
	HX_VISIT_MEMBER_NAME(mouseButtonDown,"mouseButtonDown");
	HX_VISIT_MEMBER_NAME(vb,"vb");
	HX_VISIT_MEMBER_NAME(ib,"ib");
	HX_VISIT_MEMBER_NAME(program,"program");
}

Dynamic VrInterfaceEmulated_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { return vb; }
		if (HX_FIELD_EQ(inName,"ib") ) { return ib; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yawDelta") ) { return yawDelta; }
		if (HX_FIELD_EQ(inName,"WarpSwap") ) { return WarpSwap_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"axisEvent") ) { return axisEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"oldMouseX") ) { return oldMouseX; }
		if (HX_FIELD_EQ(inName,"oldMouseY") ) { return oldMouseY; }
		if (HX_FIELD_EQ(inName,"setVertex") ) { return setVertex_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"yawDegrees") ) { return yawDegrees; }
		if (HX_FIELD_EQ(inName,"pitchDelta") ) { return pitchDelta; }
		if (HX_FIELD_EQ(inName,"keyUpEvent") ) { return keyUpEvent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"buttonEvent") ) { return buttonEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pitchDegrees") ) { return pitchDegrees; }
		if (HX_FIELD_EQ(inName,"keyDownEvent") ) { return keyDownEvent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WarpSwapBlack") ) { return WarpSwapBlack_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseMoveEvent") ) { return mouseMoveEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"GetSensorState") ) { return GetSensorState_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mouseButtonDown") ) { return mouseButtonDown; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"degreesToRadians") ) { return degreesToRadians_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTimeInSeconds") ) { return GetTimeInSeconds_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateOrientation") ) { return updateOrientation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mouseButtonUpEvent") ) { return mouseButtonUpEvent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"WarpSwapLoadingIcon") ) { return WarpSwapLoadingIcon_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouseButtonDownEvent") ) { return mouseButtonDownEvent_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GetPredictedSensorState") ) { return GetPredictedSensorState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VrInterfaceEmulated_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { vb=inValue.Cast< ::kha::graphics4::VertexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ib") ) { ib=inValue.Cast< ::kha::graphics4::IndexBuffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::kha::graphics4::Program >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yawDelta") ) { yawDelta=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"oldMouseX") ) { oldMouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldMouseY") ) { oldMouseY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"yawDegrees") ) { yawDegrees=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pitchDelta") ) { pitchDelta=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::kha::Framebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::kha::math::Quaternion >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pitchDegrees") ) { pitchDegrees=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mouseButtonDown") ) { mouseButtonDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VrInterfaceEmulated_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VrInterfaceEmulated_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98"));
	outFields->push(HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e"));
	outFields->push(HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4"));
	outFields->push(HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9"));
	outFields->push(HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6"));
	outFields->push(HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6"));
	outFields->push(HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd"));
	outFields->push(HX_HCSTRING("vb","\x2c","\x67","\x00","\x00"));
	outFields->push(HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Framebuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*::kha::math::Quaternion*/ ,(int)offsetof(VrInterfaceEmulated_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,pitchDegrees),HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,yawDegrees),HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,pitchDelta),HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,yawDelta),HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9")},
	{hx::fsInt,(int)offsetof(VrInterfaceEmulated_obj,oldMouseX),HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6")},
	{hx::fsInt,(int)offsetof(VrInterfaceEmulated_obj,oldMouseY),HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6")},
	{hx::fsBool,(int)offsetof(VrInterfaceEmulated_obj,mouseButtonDown),HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,vb),HX_HCSTRING("vb","\x2c","\x67","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,ib),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(VrInterfaceEmulated_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::keyboardSpeed,HX_HCSTRING("keyboardSpeed","\x60","\x0d","\x3d","\x55")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::mouseSpeed,HX_HCSTRING("mouseSpeed","\x22","\x8b","\x36","\x9f")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::minPitchDegrees,HX_HCSTRING("minPitchDegrees","\x79","\xb8","\x40","\xa1")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::maxPitchDegrees,HX_HCSTRING("maxPitchDegrees","\x8b","\x04","\x5b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98"),
	HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e"),
	HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4"),
	HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9"),
	HX_HCSTRING("degreesToRadians","\x90","\x4d","\x9c","\x1b"),
	HX_HCSTRING("updateOrientation","\x47","\x9b","\x68","\x62"),
	HX_HCSTRING("buttonEvent","\xc8","\x88","\x6f","\xc3"),
	HX_HCSTRING("axisEvent","\xb9","\xb3","\x68","\xcf"),
	HX_HCSTRING("keyDownEvent","\xb9","\x46","\xa3","\x63"),
	HX_HCSTRING("keyUpEvent","\xe0","\x87","\xc1","\x40"),
	HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6"),
	HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6"),
	HX_HCSTRING("mouseMoveEvent","\x64","\xf4","\x69","\xc5"),
	HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd"),
	HX_HCSTRING("mouseButtonDownEvent","\x61","\xef","\xe3","\x10"),
	HX_HCSTRING("mouseButtonUpEvent","\x88","\x36","\x3b","\x99"),
	HX_HCSTRING("GetSensorState","\xa1","\x48","\x5a","\xfc"),
	HX_HCSTRING("GetPredictedSensorState","\x35","\xf0","\x7f","\x13"),
	HX_HCSTRING("WarpSwapBlack","\xa4","\x2a","\x05","\xee"),
	HX_HCSTRING("WarpSwapLoadingIcon","\xba","\x5e","\xab","\x92"),
	HX_HCSTRING("WarpSwap","\x1b","\x39","\x8e","\x7a"),
	HX_HCSTRING("GetTimeInSeconds","\xf7","\x28","\x50","\xb5"),
	HX_HCSTRING("vb","\x2c","\x67","\x00","\x00"),
	HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	HX_HCSTRING("setVertex","\xa6","\x50","\xef","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::keyboardSpeed,"keyboardSpeed");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::mouseSpeed,"mouseSpeed");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::minPitchDegrees,"minPitchDegrees");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::maxPitchDegrees,"maxPitchDegrees");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::keyboardSpeed,"keyboardSpeed");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::mouseSpeed,"mouseSpeed");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::minPitchDegrees,"minPitchDegrees");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::maxPitchDegrees,"maxPitchDegrees");
};

#endif

hx::Class VrInterfaceEmulated_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("keyboardSpeed","\x60","\x0d","\x3d","\x55"),
	HX_HCSTRING("mouseSpeed","\x22","\x8b","\x36","\x9f"),
	HX_HCSTRING("minPitchDegrees","\x79","\xb8","\x40","\xa1"),
	HX_HCSTRING("maxPitchDegrees","\x8b","\x04","\x5b","\x45"),
	::String(null()) };

void VrInterfaceEmulated_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.VrInterfaceEmulated","\x06","\x4d","\x1c","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VrInterfaceEmulated_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VrInterfaceEmulated_obj >;
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

void VrInterfaceEmulated_obj::__boot()
{
	keyboardSpeed= ((Float)2.0);
	mouseSpeed= ((Float)0.1);
	minPitchDegrees= ((Float)-80);
	maxPitchDegrees= ((Float)80);
}

} // end namespace kha
} // end namespace vr
