#include <hxcpp.h>

#include "float32array.h"
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32Array
#include <kha/arrays/Float32Array.h>
#endif
#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <kha/graphics4/BlendingOperation.h>
#endif
#ifndef INCLUDED_kha_graphics4_ColoredShaderPainter
#include <kha/graphics4/ColoredShaderPainter.h>
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
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
namespace kha{
namespace graphics4{

Void ColoredShaderPainter_obj::__construct(::kha::graphics4::Graphics g4)
{
HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","new",0x02e5b025,"kha.graphics4.ColoredShaderPainter.new","kha/graphics4/Graphics2.hx",253,0x0c1de808)
HX_STACK_THIS(this)
HX_STACK_ARG(g4,"g4")
{
	HX_STACK_LINE(276)
	this->destinationBlend = ::kha::graphics4::BlendingOperation_obj::Undefined;
	HX_STACK_LINE(275)
	this->sourceBlend = ::kha::graphics4::BlendingOperation_obj::Undefined;
	HX_STACK_LINE(272)
	this->myProgram = null();
	HX_STACK_LINE(279)
	this->g = g4;
	HX_STACK_LINE(280)
	this->bufferIndex = (int)0;
	HX_STACK_LINE(281)
	this->triangleBufferIndex = (int)0;
	HX_STACK_LINE(282)
	this->initShaders();
	HX_STACK_LINE(283)
	this->initBuffers();
	HX_STACK_LINE(284)
	::kha::graphics4::Program tmp = this->shaderProgram;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	::kha::graphics4::ConstantLocation tmp1 = tmp->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	this->projectionLocation = tmp1;
}
;
	return null();
}

//ColoredShaderPainter_obj::~ColoredShaderPainter_obj() { }

Dynamic ColoredShaderPainter_obj::__CreateEmpty() { return  new ColoredShaderPainter_obj; }
hx::ObjectPtr< ColoredShaderPainter_obj > ColoredShaderPainter_obj::__new(::kha::graphics4::Graphics g4)
{  hx::ObjectPtr< ColoredShaderPainter_obj > _result_ = new ColoredShaderPainter_obj();
	_result_->__construct(g4);
	return _result_;}

Dynamic ColoredShaderPainter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColoredShaderPainter_obj > _result_ = new ColoredShaderPainter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::kha::graphics4::Program ColoredShaderPainter_obj::get_program( ){
	HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","get_program",0x93c25760,"kha.graphics4.ColoredShaderPainter.get_program","kha/graphics4/Graphics2.hx",287,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	::kha::graphics4::Program tmp = this->myProgram;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ColoredShaderPainter_obj,get_program,return )

::kha::graphics4::Program ColoredShaderPainter_obj::set_program( ::kha::graphics4::Program prog){
	HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","set_program",0x9e2f5e6c,"kha.graphics4.ColoredShaderPainter.set_program","kha/graphics4/Graphics2.hx",291,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(prog,"prog")
	HX_STACK_LINE(292)
	bool tmp = (prog == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	if ((tmp)){
		HX_STACK_LINE(293)
		::kha::graphics4::Program tmp1 = this->shaderProgram;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		::kha::graphics4::ConstantLocation tmp2 = tmp1->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		this->projectionLocation = tmp2;
	}
	else{
		HX_STACK_LINE(296)
		::kha::graphics4::ConstantLocation tmp1 = prog->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		this->projectionLocation = tmp1;
	}
	HX_STACK_LINE(298)
	::kha::graphics4::Program tmp1 = this->myProgram = prog;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,set_program,return )

Void ColoredShaderPainter_obj::setProjection( ::kha::math::Matrix4 projectionMatrix){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setProjection",0x926aeed6,"kha.graphics4.ColoredShaderPainter.setProjection","kha/graphics4/Graphics2.hx",302,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(projectionMatrix,"projectionMatrix")
		HX_STACK_LINE(302)
		this->projectionMatrix = projectionMatrix;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,setProjection,(void))

Void ColoredShaderPainter_obj::initShaders( ){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","initShaders",0x31bf9d43,"kha.graphics4.ColoredShaderPainter.initShaders","kha/graphics4/Graphics2.hx",305,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		::kha::Loader tmp = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		::kha::Blob tmp1 = tmp->getShader(HX_HCSTRING("painter-colored.frag","\xe0","\xc9","\xba","\x02"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		::kha::graphics4::FragmentShader tmp2 = ::kha::graphics4::FragmentShader_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		::kha::graphics4::FragmentShader fragmentShader = tmp2;		HX_STACK_VAR(fragmentShader,"fragmentShader");
		HX_STACK_LINE(307)
		::kha::Loader tmp3 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		::kha::Blob tmp4 = tmp3->getShader(HX_HCSTRING("painter-colored.vert","\x5f","\x65","\x44","\x0d"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		::kha::graphics4::VertexShader tmp5 = ::kha::graphics4::VertexShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(307)
		::kha::graphics4::VertexShader vertexShader = tmp5;		HX_STACK_VAR(vertexShader,"vertexShader");
		HX_STACK_LINE(309)
		::kha::graphics4::Program tmp6 = ::kha::graphics4::Program_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(309)
		this->shaderProgram = tmp6;
		HX_STACK_LINE(310)
		::kha::graphics4::Program tmp7 = this->shaderProgram;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		::kha::graphics4::FragmentShader tmp8 = fragmentShader;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(310)
		tmp7->setFragmentShader(tmp8);
		HX_STACK_LINE(311)
		::kha::graphics4::Program tmp9 = this->shaderProgram;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(311)
		::kha::graphics4::VertexShader tmp10 = vertexShader;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(311)
		tmp9->setVertexShader(tmp10);
		HX_STACK_LINE(313)
		::kha::graphics4::VertexStructure tmp11 = ::kha::graphics4::VertexStructure_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(313)
		this->structure = tmp11;
		HX_STACK_LINE(314)
		::kha::graphics4::VertexStructure tmp12 = this->structure;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(314)
		tmp12->add(HX_HCSTRING("vertexPosition","\x2d","\x3c","\x14","\x50"),::kha::graphics4::VertexData_obj::Float3);
		HX_STACK_LINE(315)
		::kha::graphics4::VertexStructure tmp13 = this->structure;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(315)
		tmp13->add(HX_HCSTRING("vertexColor","\x5f","\x3b","\x98","\x5e"),::kha::graphics4::VertexData_obj::Float4);
		HX_STACK_LINE(317)
		::kha::graphics4::Program tmp14 = this->shaderProgram;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(317)
		::kha::graphics4::VertexStructure tmp15 = this->structure;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(317)
		tmp14->link(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColoredShaderPainter_obj,initShaders,(void))

Void ColoredShaderPainter_obj::initBuffers( ){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","initBuffers",0x83c9bf08,"kha.graphics4.ColoredShaderPainter.initBuffers","kha/graphics4/Graphics2.hx",320,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		int tmp = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		::kha::graphics4::VertexStructure tmp2 = this->structure;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		::kha::graphics4::VertexBuffer tmp3 = ::kha::graphics4::VertexBuffer_obj::__new(tmp1,tmp2,::kha::graphics4::Usage_obj::DynamicUsage,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		this->rectVertexBuffer = tmp3;
		HX_STACK_LINE(322)
		::kha::graphics4::VertexBuffer tmp4 = this->rectVertexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		::kha::arrays::Float32Array tmp5 = tmp4->lock(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(322)
		this->rectVertices = tmp5;
		HX_STACK_LINE(324)
		int tmp6 = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		int tmp7 = (tmp6 * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(324)
		int tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(324)
		::kha::graphics4::IndexBuffer tmp9 = ::kha::graphics4::IndexBuffer_obj::__new(tmp8,::kha::graphics4::Usage_obj::StaticUsage,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(324)
		this->indexBuffer = tmp9;
		HX_STACK_LINE(325)
		::kha::graphics4::IndexBuffer tmp10 = this->indexBuffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(325)
		Array< int > tmp11 = tmp10->lock();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(325)
		Array< int > indices = tmp11;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(326)
		{
			HX_STACK_LINE(326)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(326)
			int tmp12 = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(326)
			int _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(326)
			while((true)){
				HX_STACK_LINE(326)
				bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(326)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(326)
				if ((tmp14)){
					HX_STACK_LINE(326)
					break;
				}
				HX_STACK_LINE(326)
				int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(326)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(327)
				Array< int > tmp16 = indices;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(327)
				int tmp17 = (i * (int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(327)
				int tmp18 = (tmp17 * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(327)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(327)
				int tmp20 = (i * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(327)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(327)
				tmp16[tmp19] = tmp21;
				HX_STACK_LINE(328)
				Array< int > tmp22 = indices;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(328)
				int tmp23 = (i * (int)3);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(328)
				int tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(328)
				int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(328)
				int tmp26 = (i * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(328)
				int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(328)
				tmp22[tmp25] = tmp27;
				HX_STACK_LINE(329)
				Array< int > tmp28 = indices;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(329)
				int tmp29 = (i * (int)3);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(329)
				int tmp30 = (tmp29 * (int)2);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(329)
				int tmp31 = (tmp30 + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(329)
				int tmp32 = (i * (int)4);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(329)
				int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(329)
				tmp28[tmp31] = tmp33;
				HX_STACK_LINE(330)
				Array< int > tmp34 = indices;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(330)
				int tmp35 = (i * (int)3);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(330)
				int tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(330)
				int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(330)
				int tmp38 = (i * (int)4);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(330)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(330)
				tmp34[tmp37] = tmp39;
				HX_STACK_LINE(331)
				Array< int > tmp40 = indices;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(331)
				int tmp41 = (i * (int)3);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(331)
				int tmp42 = (tmp41 * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(331)
				int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(331)
				int tmp44 = (i * (int)4);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(331)
				int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(331)
				tmp40[tmp43] = tmp45;
				HX_STACK_LINE(332)
				Array< int > tmp46 = indices;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(332)
				int tmp47 = (i * (int)3);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(332)
				int tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(332)
				int tmp49 = (tmp48 + (int)5);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(332)
				int tmp50 = (i * (int)4);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(332)
				int tmp51 = (tmp50 + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(332)
				tmp46[tmp49] = tmp51;
			}
		}
		HX_STACK_LINE(334)
		::kha::graphics4::IndexBuffer tmp12 = this->indexBuffer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(334)
		tmp12->unlock();
		HX_STACK_LINE(336)
		int tmp13 = ::kha::graphics4::ColoredShaderPainter_obj::triangleBufferSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(336)
		int tmp14 = (tmp13 * (int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(336)
		::kha::graphics4::VertexStructure tmp15 = this->structure;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(336)
		::kha::graphics4::VertexBuffer tmp16 = ::kha::graphics4::VertexBuffer_obj::__new(tmp14,tmp15,::kha::graphics4::Usage_obj::DynamicUsage,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(336)
		this->triangleVertexBuffer = tmp16;
		HX_STACK_LINE(337)
		::kha::graphics4::VertexBuffer tmp17 = this->triangleVertexBuffer;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(337)
		::kha::arrays::Float32Array tmp18 = tmp17->lock(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(337)
		this->triangleVertices = tmp18;
		HX_STACK_LINE(339)
		int tmp19 = ::kha::graphics4::ColoredShaderPainter_obj::triangleBufferSize;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(339)
		int tmp20 = (tmp19 * (int)3);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(339)
		::kha::graphics4::IndexBuffer tmp21 = ::kha::graphics4::IndexBuffer_obj::__new(tmp20,::kha::graphics4::Usage_obj::StaticUsage,null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(339)
		this->triangleIndexBuffer = tmp21;
		HX_STACK_LINE(340)
		::kha::graphics4::IndexBuffer tmp22 = this->triangleIndexBuffer;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(340)
		Array< int > tmp23 = tmp22->lock();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(340)
		Array< int > triIndices = tmp23;		HX_STACK_VAR(triIndices,"triIndices");
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(341)
			int tmp24 = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(341)
			int _g = tmp24;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(341)
			while((true)){
				HX_STACK_LINE(341)
				bool tmp25 = (_g1 < _g);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(341)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(341)
				if ((tmp26)){
					HX_STACK_LINE(341)
					break;
				}
				HX_STACK_LINE(341)
				int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(341)
				int i = tmp27;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(342)
				Array< int > tmp28 = triIndices;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(342)
				int tmp29 = (i * (int)3);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(342)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(342)
				int tmp31 = (i * (int)3);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(342)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(342)
				tmp28[tmp30] = tmp32;
				HX_STACK_LINE(343)
				Array< int > tmp33 = triIndices;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(343)
				int tmp34 = (i * (int)3);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(343)
				int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(343)
				int tmp36 = (i * (int)3);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(343)
				int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(343)
				tmp33[tmp35] = tmp37;
				HX_STACK_LINE(344)
				Array< int > tmp38 = triIndices;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(344)
				int tmp39 = (i * (int)3);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(344)
				int tmp40 = (tmp39 + (int)2);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(344)
				int tmp41 = (i * (int)3);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(344)
				int tmp42 = (tmp41 + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(344)
				tmp38[tmp40] = tmp42;
			}
		}
		HX_STACK_LINE(346)
		::kha::graphics4::IndexBuffer tmp24 = this->triangleIndexBuffer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(346)
		tmp24->unlock();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColoredShaderPainter_obj,initBuffers,(void))

Void ColoredShaderPainter_obj::setRectVertices( Float bottomleftx,Float bottomlefty,Float topleftx,Float toplefty,Float toprightx,Float toprighty,Float bottomrightx,Float bottomrighty){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setRectVertices",0xe6315344,"kha.graphics4.ColoredShaderPainter.setRectVertices","kha/graphics4/Graphics2.hx",353,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bottomleftx,"bottomleftx")
		HX_STACK_ARG(bottomlefty,"bottomlefty")
		HX_STACK_ARG(topleftx,"topleftx")
		HX_STACK_ARG(toplefty,"toplefty")
		HX_STACK_ARG(toprightx,"toprightx")
		HX_STACK_ARG(toprighty,"toprighty")
		HX_STACK_ARG(bottomrightx,"bottomrightx")
		HX_STACK_ARG(bottomrighty,"bottomrighty")
		HX_STACK_LINE(354)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		int tmp1 = (tmp * (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(355)
		::kha::arrays::Float32Array tmp3 = this->rectVertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		int tmp4 = baseIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		Float tmp5 = bottomleftx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(355)
		tmp3->data.set(tmp4,tmp5);
		HX_STACK_LINE(356)
		::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(356)
		int tmp7 = (baseIndex + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(356)
		Float tmp8 = bottomlefty;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(356)
		tmp6->data.set(tmp7,tmp8);
		HX_STACK_LINE(357)
		::kha::arrays::Float32Array tmp9 = this->rectVertices;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(357)
		int tmp10 = (baseIndex + (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(357)
		tmp9->data.set(tmp10,((Float)-5.0));
		HX_STACK_LINE(359)
		::kha::arrays::Float32Array tmp11 = this->rectVertices;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(359)
		int tmp12 = (baseIndex + (int)7);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(359)
		Float tmp13 = topleftx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(359)
		tmp11->data.set(tmp12,tmp13);
		HX_STACK_LINE(360)
		::kha::arrays::Float32Array tmp14 = this->rectVertices;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(360)
		int tmp15 = (baseIndex + (int)8);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(360)
		Float tmp16 = toplefty;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(360)
		tmp14->data.set(tmp15,tmp16);
		HX_STACK_LINE(361)
		::kha::arrays::Float32Array tmp17 = this->rectVertices;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(361)
		int tmp18 = (baseIndex + (int)9);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(361)
		tmp17->data.set(tmp18,((Float)-5.0));
		HX_STACK_LINE(363)
		::kha::arrays::Float32Array tmp19 = this->rectVertices;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(363)
		int tmp20 = (baseIndex + (int)14);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(363)
		Float tmp21 = toprightx;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(363)
		tmp19->data.set(tmp20,tmp21);
		HX_STACK_LINE(364)
		::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(364)
		int tmp23 = (baseIndex + (int)15);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(364)
		Float tmp24 = toprighty;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(364)
		tmp22->data.set(tmp23,tmp24);
		HX_STACK_LINE(365)
		::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(365)
		int tmp26 = (baseIndex + (int)16);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(365)
		tmp25->data.set(tmp26,((Float)-5.0));
		HX_STACK_LINE(367)
		::kha::arrays::Float32Array tmp27 = this->rectVertices;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(367)
		int tmp28 = (baseIndex + (int)21);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(367)
		Float tmp29 = bottomrightx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(367)
		tmp27->data.set(tmp28,tmp29);
		HX_STACK_LINE(368)
		::kha::arrays::Float32Array tmp30 = this->rectVertices;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(368)
		int tmp31 = (baseIndex + (int)22);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(368)
		Float tmp32 = bottomrighty;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(368)
		tmp30->data.set(tmp31,tmp32);
		HX_STACK_LINE(369)
		::kha::arrays::Float32Array tmp33 = this->rectVertices;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(369)
		int tmp34 = (baseIndex + (int)23);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(369)
		tmp33->data.set(tmp34,((Float)-5.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(ColoredShaderPainter_obj,setRectVertices,(void))

Void ColoredShaderPainter_obj::setRectColors( int color){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setRectColors",0x999e603b,"kha.graphics4.ColoredShaderPainter.setRectColors","kha/graphics4/Graphics2.hx",372,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(373)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		int tmp1 = (tmp * (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(374)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(374)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(374)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(374)
			int tmp7 = (baseIndex + (int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(374)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(374)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(375)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(375)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(375)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(375)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(375)
			int tmp7 = (baseIndex + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(375)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(375)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(376)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(376)
			int tmp7 = (baseIndex + (int)5);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(376)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(376)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(377)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(377)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(377)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(377)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			int tmp7 = (baseIndex + (int)6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(377)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(379)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(379)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(379)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(379)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(379)
			int tmp7 = (baseIndex + (int)10);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(379)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(379)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(380)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(380)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(380)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(380)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(380)
			int tmp7 = (baseIndex + (int)11);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(380)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(380)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(381)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			int tmp7 = (baseIndex + (int)12);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(381)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(381)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(382)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(382)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(382)
			int tmp7 = (baseIndex + (int)13);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(382)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(382)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(384)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(384)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(384)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			int tmp7 = (baseIndex + (int)17);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(384)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(384)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(385)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(385)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(385)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(385)
			int tmp7 = (baseIndex + (int)18);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(385)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(385)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(386)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(386)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(386)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(386)
			int tmp7 = (baseIndex + (int)19);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(386)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(386)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(387)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(387)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			int tmp7 = (baseIndex + (int)20);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(387)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(389)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(389)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(389)
			int tmp7 = (baseIndex + (int)24);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(389)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(389)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(390)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(390)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(390)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(390)
			int tmp7 = (baseIndex + (int)25);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(390)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(390)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(391)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(391)
			int tmp7 = (baseIndex + (int)26);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(391)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(391)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(392)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(392)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(392)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(392)
			int tmp7 = (baseIndex + (int)27);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			tmp6->data.set(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,setRectColors,(void))

Void ColoredShaderPainter_obj::setTriVertices( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setTriVertices",0x2457a01d,"kha.graphics4.ColoredShaderPainter.setTriVertices","kha/graphics4/Graphics2.hx",395,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(396)
		int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		int tmp1 = (tmp * (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		int tmp2 = (tmp1 * (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(397)
		::kha::arrays::Float32Array tmp3 = this->triangleVertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		int tmp4 = baseIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(397)
		Float tmp5 = x1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(397)
		tmp3->data.set(tmp4,tmp5);
		HX_STACK_LINE(398)
		::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(398)
		int tmp7 = (baseIndex + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(398)
		Float tmp8 = y1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(398)
		tmp6->data.set(tmp7,tmp8);
		HX_STACK_LINE(399)
		::kha::arrays::Float32Array tmp9 = this->triangleVertices;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		int tmp10 = (baseIndex + (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(399)
		tmp9->data.set(tmp10,((Float)-5.0));
		HX_STACK_LINE(401)
		::kha::arrays::Float32Array tmp11 = this->triangleVertices;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(401)
		int tmp12 = (baseIndex + (int)7);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(401)
		Float tmp13 = x2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(401)
		tmp11->data.set(tmp12,tmp13);
		HX_STACK_LINE(402)
		::kha::arrays::Float32Array tmp14 = this->triangleVertices;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(402)
		int tmp15 = (baseIndex + (int)8);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(402)
		Float tmp16 = y2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(402)
		tmp14->data.set(tmp15,tmp16);
		HX_STACK_LINE(403)
		::kha::arrays::Float32Array tmp17 = this->triangleVertices;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(403)
		int tmp18 = (baseIndex + (int)9);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(403)
		tmp17->data.set(tmp18,((Float)-5.0));
		HX_STACK_LINE(405)
		::kha::arrays::Float32Array tmp19 = this->triangleVertices;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(405)
		int tmp20 = (baseIndex + (int)14);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(405)
		Float tmp21 = x3;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(405)
		tmp19->data.set(tmp20,tmp21);
		HX_STACK_LINE(406)
		::kha::arrays::Float32Array tmp22 = this->triangleVertices;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(406)
		int tmp23 = (baseIndex + (int)15);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(406)
		Float tmp24 = y3;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(406)
		tmp22->data.set(tmp23,tmp24);
		HX_STACK_LINE(407)
		::kha::arrays::Float32Array tmp25 = this->triangleVertices;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(407)
		int tmp26 = (baseIndex + (int)16);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(407)
		tmp25->data.set(tmp26,((Float)-5.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ColoredShaderPainter_obj,setTriVertices,(void))

Void ColoredShaderPainter_obj::setTriColors( int color){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setTriColors",0xb69b94d4,"kha.graphics4.ColoredShaderPainter.setTriColors","kha/graphics4/Graphics2.hx",410,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(411)
		int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		int tmp1 = (tmp * (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		int tmp2 = (tmp1 * (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(412)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(412)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(412)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(412)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(412)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(412)
			int tmp7 = (baseIndex + (int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(412)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(412)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(413)
		{
			HX_STACK_LINE(413)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(413)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(413)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(413)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(413)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(413)
			int tmp7 = (baseIndex + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(413)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(413)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(414)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(414)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(414)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(414)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(414)
			int tmp7 = (baseIndex + (int)5);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(414)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(414)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(415)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(415)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			int tmp7 = (baseIndex + (int)6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(415)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(417)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(417)
			int tmp7 = (baseIndex + (int)10);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(417)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(417)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(418)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(418)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(418)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(418)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(418)
			int tmp7 = (baseIndex + (int)11);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(418)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(418)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(419)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(419)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(419)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(419)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(419)
			int tmp7 = (baseIndex + (int)12);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(419)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(419)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(420)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(420)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(420)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(420)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(420)
			int tmp7 = (baseIndex + (int)13);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(420)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(420)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(422)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(422)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(422)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(422)
			int tmp7 = (baseIndex + (int)17);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(422)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(422)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(423)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(423)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(423)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(423)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(423)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(423)
			int tmp7 = (baseIndex + (int)18);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(423)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(423)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(424)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(424)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(424)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(424)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(424)
			int tmp7 = (baseIndex + (int)19);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(424)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(424)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(425)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(425)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(425)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(425)
			::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(425)
			int tmp7 = (baseIndex + (int)20);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(425)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(425)
			tmp6->data.set(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,setTriColors,(void))

Void ColoredShaderPainter_obj::drawBuffer( bool trisDone){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","drawBuffer",0xe9220aff,"kha.graphics4.ColoredShaderPainter.drawBuffer","kha/graphics4/Graphics2.hx",428,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(trisDone,"trisDone")
		HX_STACK_LINE(429)
		bool tmp = trisDone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(429)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		if ((tmp1)){
			HX_STACK_LINE(429)
			int tmp2 = this->triangleBufferIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(429)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			if ((tmp3)){
				HX_STACK_LINE(429)
				this->drawTriBuffer(true);
			}
		}
		HX_STACK_LINE(431)
		::kha::graphics4::VertexBuffer tmp2 = this->rectVertexBuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		tmp2->unlock();
		HX_STACK_LINE(432)
		::kha::graphics4::Graphics tmp3 = this->g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(432)
		::kha::graphics4::VertexBuffer tmp4 = this->rectVertexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(432)
		tmp3->setVertexBuffer(tmp4);
		HX_STACK_LINE(433)
		::kha::graphics4::Graphics tmp5 = this->g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(433)
		::kha::graphics4::IndexBuffer tmp6 = this->indexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(433)
		tmp5->setIndexBuffer(tmp6);
		HX_STACK_LINE(434)
		::kha::graphics4::Graphics tmp7 = this->g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(434)
		::kha::graphics4::Program tmp8 = this->get_program();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(434)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(434)
		::kha::graphics4::Program tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(434)
		if ((tmp9)){
			HX_STACK_LINE(434)
			tmp10 = this->shaderProgram;
		}
		else{
			HX_STACK_LINE(434)
			tmp10 = this->get_program();
		}
		HX_STACK_LINE(434)
		tmp7->setProgram(tmp10);
		HX_STACK_LINE(435)
		::kha::graphics4::Graphics tmp11 = this->g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(435)
		::kha::graphics4::ConstantLocation tmp12 = this->projectionLocation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(435)
		::kha::math::Matrix4 tmp13 = this->projectionMatrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(435)
		tmp11->setMatrix(tmp12,tmp13);
		HX_STACK_LINE(436)
		::kha::graphics4::BlendingOperation tmp14 = this->sourceBlend;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(436)
		bool tmp15 = (tmp14 == ::kha::graphics4::BlendingOperation_obj::Undefined);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(436)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(436)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(436)
		if ((tmp16)){
			HX_STACK_LINE(436)
			::kha::graphics4::BlendingOperation tmp18 = this->destinationBlend;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(436)
			::kha::graphics4::BlendingOperation tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(436)
			tmp17 = (tmp19 == ::kha::graphics4::BlendingOperation_obj::Undefined);
		}
		else{
			HX_STACK_LINE(436)
			tmp17 = true;
		}
		HX_STACK_LINE(436)
		if ((tmp17)){
			HX_STACK_LINE(437)
			::kha::graphics4::Graphics tmp18 = this->g;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(437)
			tmp18->setBlendingMode(::kha::graphics4::BlendingOperation_obj::SourceAlpha,::kha::graphics4::BlendingOperation_obj::InverseSourceAlpha);
		}
		else{
			HX_STACK_LINE(440)
			::kha::graphics4::Graphics tmp18 = this->g;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(440)
			::kha::graphics4::BlendingOperation tmp19 = this->sourceBlend;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(440)
			::kha::graphics4::BlendingOperation tmp20 = this->destinationBlend;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(440)
			tmp18->setBlendingMode(tmp19,tmp20);
		}
		HX_STACK_LINE(443)
		::kha::graphics4::Graphics tmp18 = this->g;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(443)
		int tmp19 = this->bufferIndex;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(443)
		int tmp20 = (tmp19 * (int)2);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(443)
		int tmp21 = (tmp20 * (int)3);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(443)
		tmp18->drawIndexedVertices((int)0,tmp21);
		HX_STACK_LINE(445)
		this->bufferIndex = (int)0;
		HX_STACK_LINE(446)
		::kha::graphics4::VertexBuffer tmp22 = this->rectVertexBuffer;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(446)
		::kha::arrays::Float32Array tmp23 = tmp22->lock(null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(446)
		this->rectVertices = tmp23;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,drawBuffer,(void))

Void ColoredShaderPainter_obj::drawTriBuffer( bool rectsDone){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","drawTriBuffer",0xacdf87ec,"kha.graphics4.ColoredShaderPainter.drawTriBuffer","kha/graphics4/Graphics2.hx",449,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectsDone,"rectsDone")
		HX_STACK_LINE(450)
		bool tmp = rectsDone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(450)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(450)
		if ((tmp1)){
			HX_STACK_LINE(450)
			int tmp2 = this->bufferIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(450)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(450)
			if ((tmp3)){
				HX_STACK_LINE(450)
				this->drawBuffer(true);
			}
		}
		HX_STACK_LINE(452)
		::kha::graphics4::VertexBuffer tmp2 = this->triangleVertexBuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(452)
		tmp2->unlock();
		HX_STACK_LINE(453)
		::kha::graphics4::Graphics tmp3 = this->g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(453)
		::kha::graphics4::VertexBuffer tmp4 = this->triangleVertexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(453)
		tmp3->setVertexBuffer(tmp4);
		HX_STACK_LINE(454)
		::kha::graphics4::Graphics tmp5 = this->g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(454)
		::kha::graphics4::IndexBuffer tmp6 = this->triangleIndexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(454)
		tmp5->setIndexBuffer(tmp6);
		HX_STACK_LINE(455)
		::kha::graphics4::Graphics tmp7 = this->g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(455)
		::kha::graphics4::Program tmp8 = this->get_program();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(455)
		::kha::graphics4::Program tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(455)
		if ((tmp9)){
			HX_STACK_LINE(455)
			tmp10 = this->shaderProgram;
		}
		else{
			HX_STACK_LINE(455)
			tmp10 = this->get_program();
		}
		HX_STACK_LINE(455)
		tmp7->setProgram(tmp10);
		HX_STACK_LINE(456)
		::kha::graphics4::Graphics tmp11 = this->g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(456)
		::kha::graphics4::ConstantLocation tmp12 = this->projectionLocation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(456)
		::kha::math::Matrix4 tmp13 = this->projectionMatrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(456)
		tmp11->setMatrix(tmp12,tmp13);
		HX_STACK_LINE(457)
		::kha::graphics4::BlendingOperation tmp14 = this->sourceBlend;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(457)
		bool tmp15 = (tmp14 == ::kha::graphics4::BlendingOperation_obj::Undefined);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(457)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(457)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(457)
		if ((tmp16)){
			HX_STACK_LINE(457)
			::kha::graphics4::BlendingOperation tmp18 = this->destinationBlend;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(457)
			::kha::graphics4::BlendingOperation tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(457)
			tmp17 = (tmp19 == ::kha::graphics4::BlendingOperation_obj::Undefined);
		}
		else{
			HX_STACK_LINE(457)
			tmp17 = true;
		}
		HX_STACK_LINE(457)
		if ((tmp17)){
			HX_STACK_LINE(458)
			::kha::graphics4::Graphics tmp18 = this->g;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(458)
			tmp18->setBlendingMode(::kha::graphics4::BlendingOperation_obj::SourceAlpha,::kha::graphics4::BlendingOperation_obj::InverseSourceAlpha);
		}
		else{
			HX_STACK_LINE(461)
			::kha::graphics4::Graphics tmp18 = this->g;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(461)
			::kha::graphics4::BlendingOperation tmp19 = this->sourceBlend;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(461)
			::kha::graphics4::BlendingOperation tmp20 = this->destinationBlend;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(461)
			tmp18->setBlendingMode(tmp19,tmp20);
		}
		HX_STACK_LINE(464)
		::kha::graphics4::Graphics tmp18 = this->g;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(464)
		int tmp19 = this->triangleBufferIndex;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(464)
		int tmp20 = (tmp19 * (int)3);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(464)
		tmp18->drawIndexedVertices((int)0,tmp20);
		HX_STACK_LINE(466)
		this->triangleBufferIndex = (int)0;
		HX_STACK_LINE(467)
		::kha::graphics4::VertexBuffer tmp21 = this->triangleVertexBuffer;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(467)
		::kha::arrays::Float32Array tmp22 = tmp21->lock(null(),null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(467)
		this->triangleVertices = tmp22;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,drawTriBuffer,(void))

Void ColoredShaderPainter_obj::fillRect( int color,Float bottomleftx,Float bottomlefty,Float topleftx,Float toplefty,Float toprightx,Float toprighty,Float bottomrightx,Float bottomrighty){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","fillRect",0xd64d1b62,"kha.graphics4.ColoredShaderPainter.fillRect","kha/graphics4/Graphics2.hx",474,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(bottomleftx,"bottomleftx")
		HX_STACK_ARG(bottomlefty,"bottomlefty")
		HX_STACK_ARG(topleftx,"topleftx")
		HX_STACK_ARG(toplefty,"toplefty")
		HX_STACK_ARG(toprightx,"toprightx")
		HX_STACK_ARG(toprighty,"toprighty")
		HX_STACK_ARG(bottomrightx,"bottomrightx")
		HX_STACK_ARG(bottomrighty,"bottomrighty")
		HX_STACK_LINE(475)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(475)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(475)
		int tmp2 = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(475)
		if ((tmp3)){
			HX_STACK_LINE(475)
			this->drawBuffer(false);
		}
		HX_STACK_LINE(477)
		int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(477)
		this->setRectColors(tmp4);
		HX_STACK_LINE(478)
		Float tmp5 = bottomleftx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(478)
		Float tmp6 = bottomlefty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(478)
		Float tmp7 = topleftx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(478)
		Float tmp8 = toplefty;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(478)
		Float tmp9 = toprightx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(478)
		Float tmp10 = toprighty;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(478)
		Float tmp11 = bottomrightx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(478)
		Float tmp12 = bottomrighty;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(478)
		this->setRectVertices(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);
		HX_STACK_LINE(479)
		++(this->bufferIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(ColoredShaderPainter_obj,fillRect,(void))

Void ColoredShaderPainter_obj::fillTriangle( int color,Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","fillTriangle",0x0d428406,"kha.graphics4.ColoredShaderPainter.fillTriangle","kha/graphics4/Graphics2.hx",482,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(483)
		int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(483)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(483)
		int tmp2 = ::kha::graphics4::ColoredShaderPainter_obj::triangleBufferSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(483)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(483)
		if ((tmp3)){
			HX_STACK_LINE(483)
			this->drawTriBuffer(false);
		}
		HX_STACK_LINE(485)
		int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(485)
		this->setTriColors(tmp4);
		HX_STACK_LINE(486)
		Float tmp5 = x1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(486)
		Float tmp6 = y1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(486)
		Float tmp7 = x2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(486)
		Float tmp8 = y2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(486)
		Float tmp9 = x3;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(486)
		Float tmp10 = y3;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(486)
		this->setTriVertices(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(487)
		++(this->triangleBufferIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(ColoredShaderPainter_obj,fillTriangle,(void))

Void ColoredShaderPainter_obj::endTris( bool rectsDone){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","endTris",0x1785fca8,"kha.graphics4.ColoredShaderPainter.endTris","kha/graphics4/Graphics2.hx",490,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectsDone,"rectsDone")
		HX_STACK_LINE(491)
		int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(491)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(491)
		if ((tmp1)){
			HX_STACK_LINE(491)
			bool tmp2 = rectsDone;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(491)
			this->drawTriBuffer(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,endTris,(void))

Void ColoredShaderPainter_obj::endRects( bool trisDone){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","endRects",0x4e4d9b0f,"kha.graphics4.ColoredShaderPainter.endRects","kha/graphics4/Graphics2.hx",494,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(trisDone,"trisDone")
		HX_STACK_LINE(495)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		if ((tmp1)){
			HX_STACK_LINE(495)
			bool tmp2 = trisDone;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(495)
			this->drawBuffer(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,endRects,(void))

Void ColoredShaderPainter_obj::end( ){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","end",0x02dee3a0,"kha.graphics4.ColoredShaderPainter.end","kha/graphics4/Graphics2.hx",498,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(499)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(499)
			if ((tmp1)){
				HX_STACK_LINE(499)
				this->drawTriBuffer(false);
			}
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(500)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(500)
			if ((tmp1)){
				HX_STACK_LINE(500)
				this->drawBuffer(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColoredShaderPainter_obj,end,(void))

int ColoredShaderPainter_obj::bufferSize;

int ColoredShaderPainter_obj::triangleBufferSize;


ColoredShaderPainter_obj::ColoredShaderPainter_obj()
{
}

void ColoredShaderPainter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColoredShaderPainter);
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(shaderProgram,"shaderProgram");
	HX_MARK_MEMBER_NAME(structure,"structure");
	HX_MARK_MEMBER_NAME(projectionLocation,"projectionLocation");
	HX_MARK_MEMBER_NAME(bufferIndex,"bufferIndex");
	HX_MARK_MEMBER_NAME(rectVertexBuffer,"rectVertexBuffer");
	HX_MARK_MEMBER_NAME(rectVertices,"rectVertices");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(triangleBufferIndex,"triangleBufferIndex");
	HX_MARK_MEMBER_NAME(triangleVertexBuffer,"triangleVertexBuffer");
	HX_MARK_MEMBER_NAME(triangleVertices,"triangleVertices");
	HX_MARK_MEMBER_NAME(triangleIndexBuffer,"triangleIndexBuffer");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(myProgram,"myProgram");
	HX_MARK_MEMBER_NAME(sourceBlend,"sourceBlend");
	HX_MARK_MEMBER_NAME(destinationBlend,"destinationBlend");
	HX_MARK_END_CLASS();
}

void ColoredShaderPainter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(shaderProgram,"shaderProgram");
	HX_VISIT_MEMBER_NAME(structure,"structure");
	HX_VISIT_MEMBER_NAME(projectionLocation,"projectionLocation");
	HX_VISIT_MEMBER_NAME(bufferIndex,"bufferIndex");
	HX_VISIT_MEMBER_NAME(rectVertexBuffer,"rectVertexBuffer");
	HX_VISIT_MEMBER_NAME(rectVertices,"rectVertices");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(triangleBufferIndex,"triangleBufferIndex");
	HX_VISIT_MEMBER_NAME(triangleVertexBuffer,"triangleVertexBuffer");
	HX_VISIT_MEMBER_NAME(triangleVertices,"triangleVertices");
	HX_VISIT_MEMBER_NAME(triangleIndexBuffer,"triangleIndexBuffer");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(myProgram,"myProgram");
	HX_VISIT_MEMBER_NAME(sourceBlend,"sourceBlend");
	HX_VISIT_MEMBER_NAME(destinationBlend,"destinationBlend");
}

Dynamic ColoredShaderPainter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { if (inCallProp == hx::paccAlways) return get_program(); }
		if (HX_FIELD_EQ(inName,"endTris") ) { return endTris_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"endRects") ) { return endRects_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"structure") ) { return structure; }
		if (HX_FIELD_EQ(inName,"myProgram") ) { return myProgram; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBuffer") ) { return drawBuffer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferIndex") ) { return bufferIndex; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"sourceBlend") ) { return sourceBlend; }
		if (HX_FIELD_EQ(inName,"get_program") ) { return get_program_dyn(); }
		if (HX_FIELD_EQ(inName,"set_program") ) { return set_program_dyn(); }
		if (HX_FIELD_EQ(inName,"initShaders") ) { return initShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"initBuffers") ) { return initBuffers_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectVertices") ) { return rectVertices; }
		if (HX_FIELD_EQ(inName,"setTriColors") ) { return setTriColors_dyn(); }
		if (HX_FIELD_EQ(inName,"fillTriangle") ) { return fillTriangle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderProgram") ) { return shaderProgram; }
		if (HX_FIELD_EQ(inName,"setProjection") ) { return setProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"setRectColors") ) { return setRectColors_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriBuffer") ) { return drawTriBuffer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setTriVertices") ) { return setTriVertices_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setRectVertices") ) { return setRectVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
		if (HX_FIELD_EQ(inName,"rectVertexBuffer") ) { return rectVertexBuffer; }
		if (HX_FIELD_EQ(inName,"triangleVertices") ) { return triangleVertices; }
		if (HX_FIELD_EQ(inName,"destinationBlend") ) { return destinationBlend; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionLocation") ) { return projectionLocation; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"triangleBufferIndex") ) { return triangleBufferIndex; }
		if (HX_FIELD_EQ(inName,"triangleIndexBuffer") ) { return triangleIndexBuffer; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"triangleVertexBuffer") ) { return triangleVertexBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

bool ColoredShaderPainter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferSize") ) { outValue = bufferSize; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"triangleBufferSize") ) { outValue = triangleBufferSize; return true;  }
	}
	return false;
}

Dynamic ColoredShaderPainter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { if (inCallProp == hx::paccAlways) return set_program(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"structure") ) { structure=inValue.Cast< ::kha::graphics4::VertexStructure >(); return inValue; }
		if (HX_FIELD_EQ(inName,"myProgram") ) { myProgram=inValue.Cast< ::kha::graphics4::Program >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferIndex") ) { bufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::kha::graphics4::IndexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceBlend") ) { sourceBlend=inValue.Cast< ::kha::graphics4::BlendingOperation >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectVertices") ) { rectVertices=inValue.Cast< ::kha::arrays::Float32Array >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderProgram") ) { shaderProgram=inValue.Cast< ::kha::graphics4::Program >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::kha::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectVertexBuffer") ) { rectVertexBuffer=inValue.Cast< ::kha::graphics4::VertexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"triangleVertices") ) { triangleVertices=inValue.Cast< ::kha::arrays::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destinationBlend") ) { destinationBlend=inValue.Cast< ::kha::graphics4::BlendingOperation >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionLocation") ) { projectionLocation=inValue.Cast< ::kha::graphics4::ConstantLocation >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"triangleBufferIndex") ) { triangleBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"triangleIndexBuffer") ) { triangleIndexBuffer=inValue.Cast< ::kha::graphics4::IndexBuffer >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"triangleVertexBuffer") ) { triangleVertexBuffer=inValue.Cast< ::kha::graphics4::VertexBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColoredShaderPainter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferSize") ) { bufferSize=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"triangleBufferSize") ) { triangleBufferSize=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ColoredShaderPainter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("shaderProgram","\xdf","\x11","\x9a","\x6f"));
	outFields->push(HX_HCSTRING("structure","\x33","\x54","\x4f","\x47"));
	outFields->push(HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b"));
	outFields->push(HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b"));
	outFields->push(HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97"));
	outFields->push(HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("triangleBufferIndex","\x0a","\x6c","\xd7","\x9e"));
	outFields->push(HX_HCSTRING("triangleVertexBuffer","\x6c","\xc6","\x88","\x35"));
	outFields->push(HX_HCSTRING("triangleVertices","\xe1","\x42","\x15","\x97"));
	outFields->push(HX_HCSTRING("triangleIndexBuffer","\xca","\xa3","\x1d","\x39"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("myProgram","\x78","\x18","\xec","\x9a"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3"));
	outFields->push(HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::math::Matrix4*/ ,(int)offsetof(ColoredShaderPainter_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(ColoredShaderPainter_obj,shaderProgram),HX_HCSTRING("shaderProgram","\xdf","\x11","\x9a","\x6f")},
	{hx::fsObject /*::kha::graphics4::VertexStructure*/ ,(int)offsetof(ColoredShaderPainter_obj,structure),HX_HCSTRING("structure","\x33","\x54","\x4f","\x47")},
	{hx::fsObject /*::kha::graphics4::ConstantLocation*/ ,(int)offsetof(ColoredShaderPainter_obj,projectionLocation),HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b")},
	{hx::fsInt,(int)offsetof(ColoredShaderPainter_obj,bufferIndex),HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(ColoredShaderPainter_obj,rectVertexBuffer),HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97")},
	{hx::fsObject /*::kha::arrays::Float32Array*/ ,(int)offsetof(ColoredShaderPainter_obj,rectVertices),HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(ColoredShaderPainter_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsInt,(int)offsetof(ColoredShaderPainter_obj,triangleBufferIndex),HX_HCSTRING("triangleBufferIndex","\x0a","\x6c","\xd7","\x9e")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(ColoredShaderPainter_obj,triangleVertexBuffer),HX_HCSTRING("triangleVertexBuffer","\x6c","\xc6","\x88","\x35")},
	{hx::fsObject /*::kha::arrays::Float32Array*/ ,(int)offsetof(ColoredShaderPainter_obj,triangleVertices),HX_HCSTRING("triangleVertices","\xe1","\x42","\x15","\x97")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(ColoredShaderPainter_obj,triangleIndexBuffer),HX_HCSTRING("triangleIndexBuffer","\xca","\xa3","\x1d","\x39")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(ColoredShaderPainter_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(ColoredShaderPainter_obj,myProgram),HX_HCSTRING("myProgram","\x78","\x18","\xec","\x9a")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(ColoredShaderPainter_obj,sourceBlend),HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(ColoredShaderPainter_obj,destinationBlend),HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ColoredShaderPainter_obj::bufferSize,HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d")},
	{hx::fsInt,(void *) &ColoredShaderPainter_obj::triangleBufferSize,HX_HCSTRING("triangleBufferSize","\xc9","\x16","\x78","\xab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("shaderProgram","\xdf","\x11","\x9a","\x6f"),
	HX_HCSTRING("structure","\x33","\x54","\x4f","\x47"),
	HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b"),
	HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b"),
	HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97"),
	HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("triangleBufferIndex","\x0a","\x6c","\xd7","\x9e"),
	HX_HCSTRING("triangleVertexBuffer","\x6c","\xc6","\x88","\x35"),
	HX_HCSTRING("triangleVertices","\xe1","\x42","\x15","\x97"),
	HX_HCSTRING("triangleIndexBuffer","\xca","\xa3","\x1d","\x39"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("myProgram","\x78","\x18","\xec","\x9a"),
	HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3"),
	HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e"),
	HX_HCSTRING("get_program","\x9b","\xaa","\xf3","\x79"),
	HX_HCSTRING("set_program","\xa7","\xb1","\x60","\x84"),
	HX_HCSTRING("setProjection","\xd1","\xc6","\x03","\x66"),
	HX_HCSTRING("initShaders","\x7e","\xf0","\xf0","\x17"),
	HX_HCSTRING("initBuffers","\x43","\x12","\xfb","\x69"),
	HX_HCSTRING("setRectVertices","\xff","\x5f","\xac","\x73"),
	HX_HCSTRING("setRectColors","\x36","\x38","\x37","\x6d"),
	HX_HCSTRING("setTriVertices","\xc2","\xc3","\x7b","\x76"),
	HX_HCSTRING("setTriColors","\x39","\x15","\x93","\x3b"),
	HX_HCSTRING("drawBuffer","\x24","\x38","\x58","\x12"),
	HX_HCSTRING("drawTriBuffer","\xe7","\x5f","\x78","\x80"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("fillTriangle","\x6b","\x04","\x3a","\x92"),
	HX_HCSTRING("endTris","\x63","\x56","\x28","\x2f"),
	HX_HCSTRING("endRects","\xf4","\xc4","\xb9","\xe4"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColoredShaderPainter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColoredShaderPainter_obj::bufferSize,"bufferSize");
	HX_MARK_MEMBER_NAME(ColoredShaderPainter_obj::triangleBufferSize,"triangleBufferSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColoredShaderPainter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColoredShaderPainter_obj::bufferSize,"bufferSize");
	HX_VISIT_MEMBER_NAME(ColoredShaderPainter_obj::triangleBufferSize,"triangleBufferSize");
};

#endif

hx::Class ColoredShaderPainter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d"),
	HX_HCSTRING("triangleBufferSize","\xc9","\x16","\x78","\xab"),
	::String(null()) };

void ColoredShaderPainter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.ColoredShaderPainter","\xb3","\xb9","\x9f","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColoredShaderPainter_obj::__GetStatic;
	__mClass->mSetStaticField = &ColoredShaderPainter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColoredShaderPainter_obj >;
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

void ColoredShaderPainter_obj::__boot()
{
	bufferSize= (int)100;
	triangleBufferSize= (int)100;
}

} // end namespace kha
} // end namespace graphics4
