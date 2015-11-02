#include <hxcpp.h>

#include "float32array.h"
#ifndef INCLUDED_kha_AlignedQuad
#include <kha/AlignedQuad.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
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
#ifndef INCLUDED_kha_graphics4_TextShaderPainter
#include <kha/graphics4/TextShaderPainter.h>
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
#ifndef INCLUDED_kha_math_FastMatrix3
#include <kha/math/FastMatrix3.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
namespace kha{
namespace graphics4{

Void TextShaderPainter_obj::__construct(::kha::graphics4::Graphics g4)
{
HX_STACK_FRAME("kha.graphics4.TextShaderPainter","new",0x421e3fdc,"kha.graphics4.TextShaderPainter.new","kha/graphics4/Graphics2.hx",507,0x0c1de808)
HX_STACK_THIS(this)
HX_STACK_ARG(g4,"g4")
{
	HX_STACK_LINE(525)
	this->destinationBlend = ::kha::graphics4::BlendingOperation_obj::Undefined;
	HX_STACK_LINE(524)
	this->sourceBlend = ::kha::graphics4::BlendingOperation_obj::Undefined;
	HX_STACK_LINE(521)
	this->myProgram = null();
	HX_STACK_LINE(528)
	this->g = g4;
	HX_STACK_LINE(529)
	this->bufferIndex = (int)0;
	HX_STACK_LINE(530)
	this->initShaders();
	HX_STACK_LINE(531)
	this->initBuffers();
	HX_STACK_LINE(532)
	::kha::graphics4::Program tmp = this->shaderProgram;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(532)
	::kha::graphics4::ConstantLocation tmp1 = tmp->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(532)
	this->projectionLocation = tmp1;
	HX_STACK_LINE(533)
	::kha::graphics4::Program tmp2 = this->shaderProgram;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(533)
	::kha::graphics4::TextureUnit tmp3 = tmp2->getTextureUnit(HX_HCSTRING("tex","\xe7","\x5d","\x58","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(533)
	this->textureLocation = tmp3;
}
;
	return null();
}

//TextShaderPainter_obj::~TextShaderPainter_obj() { }

Dynamic TextShaderPainter_obj::__CreateEmpty() { return  new TextShaderPainter_obj; }
hx::ObjectPtr< TextShaderPainter_obj > TextShaderPainter_obj::__new(::kha::graphics4::Graphics g4)
{  hx::ObjectPtr< TextShaderPainter_obj > _result_ = new TextShaderPainter_obj();
	_result_->__construct(g4);
	return _result_;}

Dynamic TextShaderPainter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextShaderPainter_obj > _result_ = new TextShaderPainter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::kha::graphics4::Program TextShaderPainter_obj::get_program( ){
	HX_STACK_FRAME("kha.graphics4.TextShaderPainter","get_program",0x6f33f617,"kha.graphics4.TextShaderPainter.get_program","kha/graphics4/Graphics2.hx",536,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(537)
	::kha::graphics4::Program tmp = this->myProgram;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextShaderPainter_obj,get_program,return )

::kha::graphics4::Program TextShaderPainter_obj::set_program( ::kha::graphics4::Program prog){
	HX_STACK_FRAME("kha.graphics4.TextShaderPainter","set_program",0x79a0fd23,"kha.graphics4.TextShaderPainter.set_program","kha/graphics4/Graphics2.hx",540,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(prog,"prog")
	HX_STACK_LINE(541)
	bool tmp = (prog == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(541)
	if ((tmp)){
		HX_STACK_LINE(542)
		::kha::graphics4::Program tmp1 = this->shaderProgram;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(542)
		::kha::graphics4::ConstantLocation tmp2 = tmp1->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(542)
		this->projectionLocation = tmp2;
		HX_STACK_LINE(543)
		::kha::graphics4::Program tmp3 = this->shaderProgram;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(543)
		::kha::graphics4::TextureUnit tmp4 = tmp3->getTextureUnit(HX_HCSTRING("tex","\xe7","\x5d","\x58","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(543)
		this->textureLocation = tmp4;
	}
	else{
		HX_STACK_LINE(546)
		::kha::graphics4::ConstantLocation tmp1 = prog->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(546)
		this->projectionLocation = tmp1;
		HX_STACK_LINE(547)
		::kha::graphics4::TextureUnit tmp2 = prog->getTextureUnit(HX_HCSTRING("tex","\xe7","\x5d","\x58","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(547)
		this->textureLocation = tmp2;
	}
	HX_STACK_LINE(549)
	::kha::graphics4::Program tmp1 = this->myProgram = prog;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(549)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextShaderPainter_obj,set_program,return )

Void TextShaderPainter_obj::setProjection( ::kha::math::Matrix4 projectionMatrix){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","setProjection",0x648ae94d,"kha.graphics4.TextShaderPainter.setProjection","kha/graphics4/Graphics2.hx",553,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(projectionMatrix,"projectionMatrix")
		HX_STACK_LINE(553)
		this->projectionMatrix = projectionMatrix;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextShaderPainter_obj,setProjection,(void))

Void TextShaderPainter_obj::initShaders( ){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","initShaders",0x0d313bfa,"kha.graphics4.TextShaderPainter.initShaders","kha/graphics4/Graphics2.hx",556,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(557)
		::kha::Loader tmp = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		::kha::Blob tmp1 = tmp->getShader(HX_HCSTRING("painter-text.frag","\x11","\x2a","\x6d","\x07"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		::kha::graphics4::FragmentShader tmp2 = ::kha::graphics4::FragmentShader_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(557)
		::kha::graphics4::FragmentShader fragmentShader = tmp2;		HX_STACK_VAR(fragmentShader,"fragmentShader");
		HX_STACK_LINE(558)
		::kha::Loader tmp3 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(558)
		::kha::Blob tmp4 = tmp3->getShader(HX_HCSTRING("painter-text.vert","\x90","\xc5","\xf6","\x11"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(558)
		::kha::graphics4::VertexShader tmp5 = ::kha::graphics4::VertexShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(558)
		::kha::graphics4::VertexShader vertexShader = tmp5;		HX_STACK_VAR(vertexShader,"vertexShader");
		HX_STACK_LINE(560)
		::kha::graphics4::Program tmp6 = ::kha::graphics4::Program_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(560)
		this->shaderProgram = tmp6;
		HX_STACK_LINE(561)
		::kha::graphics4::Program tmp7 = this->shaderProgram;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(561)
		::kha::graphics4::FragmentShader tmp8 = fragmentShader;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(561)
		tmp7->setFragmentShader(tmp8);
		HX_STACK_LINE(562)
		::kha::graphics4::Program tmp9 = this->shaderProgram;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(562)
		::kha::graphics4::VertexShader tmp10 = vertexShader;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(562)
		tmp9->setVertexShader(tmp10);
		HX_STACK_LINE(564)
		::kha::graphics4::VertexStructure tmp11 = ::kha::graphics4::VertexStructure_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(564)
		this->structure = tmp11;
		HX_STACK_LINE(565)
		::kha::graphics4::VertexStructure tmp12 = this->structure;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(565)
		tmp12->add(HX_HCSTRING("vertexPosition","\x2d","\x3c","\x14","\x50"),::kha::graphics4::VertexData_obj::Float3);
		HX_STACK_LINE(566)
		::kha::graphics4::VertexStructure tmp13 = this->structure;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(566)
		tmp13->add(HX_HCSTRING("texPosition","\xb0","\x79","\xff","\xc7"),::kha::graphics4::VertexData_obj::Float2);
		HX_STACK_LINE(567)
		::kha::graphics4::VertexStructure tmp14 = this->structure;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(567)
		tmp14->add(HX_HCSTRING("vertexColor","\x5f","\x3b","\x98","\x5e"),::kha::graphics4::VertexData_obj::Float4);
		HX_STACK_LINE(569)
		::kha::graphics4::Program tmp15 = this->shaderProgram;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(569)
		::kha::graphics4::VertexStructure tmp16 = this->structure;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(569)
		tmp15->link(tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextShaderPainter_obj,initShaders,(void))

Void TextShaderPainter_obj::initBuffers( ){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","initBuffers",0x5f3b5dbf,"kha.graphics4.TextShaderPainter.initBuffers","kha/graphics4/Graphics2.hx",572,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(573)
		int tmp = ::kha::graphics4::TextShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(573)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(573)
		::kha::graphics4::VertexStructure tmp2 = this->structure;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(573)
		::kha::graphics4::VertexBuffer tmp3 = ::kha::graphics4::VertexBuffer_obj::__new(tmp1,tmp2,::kha::graphics4::Usage_obj::DynamicUsage,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(573)
		this->rectVertexBuffer = tmp3;
		HX_STACK_LINE(574)
		::kha::graphics4::VertexBuffer tmp4 = this->rectVertexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(574)
		::kha::arrays::Float32Array tmp5 = tmp4->lock(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(574)
		this->rectVertices = tmp5;
		HX_STACK_LINE(576)
		int tmp6 = ::kha::graphics4::TextShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(576)
		int tmp7 = (tmp6 * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(576)
		int tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(576)
		::kha::graphics4::IndexBuffer tmp9 = ::kha::graphics4::IndexBuffer_obj::__new(tmp8,::kha::graphics4::Usage_obj::StaticUsage,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(576)
		this->indexBuffer = tmp9;
		HX_STACK_LINE(577)
		::kha::graphics4::IndexBuffer tmp10 = this->indexBuffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(577)
		Array< int > tmp11 = tmp10->lock();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(577)
		Array< int > indices = tmp11;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(578)
			int tmp12 = ::kha::graphics4::TextShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(578)
			int _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(578)
			while((true)){
				HX_STACK_LINE(578)
				bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(578)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(578)
				if ((tmp14)){
					HX_STACK_LINE(578)
					break;
				}
				HX_STACK_LINE(578)
				int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(578)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(579)
				Array< int > tmp16 = indices;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(579)
				int tmp17 = (i * (int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(579)
				int tmp18 = (tmp17 * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(579)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(579)
				int tmp20 = (i * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(579)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(579)
				tmp16[tmp19] = tmp21;
				HX_STACK_LINE(580)
				Array< int > tmp22 = indices;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(580)
				int tmp23 = (i * (int)3);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(580)
				int tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(580)
				int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(580)
				int tmp26 = (i * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(580)
				int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(580)
				tmp22[tmp25] = tmp27;
				HX_STACK_LINE(581)
				Array< int > tmp28 = indices;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(581)
				int tmp29 = (i * (int)3);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(581)
				int tmp30 = (tmp29 * (int)2);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(581)
				int tmp31 = (tmp30 + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(581)
				int tmp32 = (i * (int)4);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(581)
				int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(581)
				tmp28[tmp31] = tmp33;
				HX_STACK_LINE(582)
				Array< int > tmp34 = indices;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(582)
				int tmp35 = (i * (int)3);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(582)
				int tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(582)
				int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(582)
				int tmp38 = (i * (int)4);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(582)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(582)
				tmp34[tmp37] = tmp39;
				HX_STACK_LINE(583)
				Array< int > tmp40 = indices;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(583)
				int tmp41 = (i * (int)3);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(583)
				int tmp42 = (tmp41 * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(583)
				int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(583)
				int tmp44 = (i * (int)4);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(583)
				int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(583)
				tmp40[tmp43] = tmp45;
				HX_STACK_LINE(584)
				Array< int > tmp46 = indices;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(584)
				int tmp47 = (i * (int)3);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(584)
				int tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(584)
				int tmp49 = (tmp48 + (int)5);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(584)
				int tmp50 = (i * (int)4);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(584)
				int tmp51 = (tmp50 + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(584)
				tmp46[tmp49] = tmp51;
			}
		}
		HX_STACK_LINE(586)
		::kha::graphics4::IndexBuffer tmp12 = this->indexBuffer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(586)
		tmp12->unlock();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextShaderPainter_obj,initBuffers,(void))

Void TextShaderPainter_obj::setRectVertices( Float bottomleftx,Float bottomlefty,Float topleftx,Float toplefty,Float toprightx,Float toprighty,Float bottomrightx,Float bottomrighty){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","setRectVertices",0x7c1e197b,"kha.graphics4.TextShaderPainter.setRectVertices","kha/graphics4/Graphics2.hx",593,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bottomleftx,"bottomleftx")
		HX_STACK_ARG(bottomlefty,"bottomlefty")
		HX_STACK_ARG(topleftx,"topleftx")
		HX_STACK_ARG(toplefty,"toplefty")
		HX_STACK_ARG(toprightx,"toprightx")
		HX_STACK_ARG(toprighty,"toprighty")
		HX_STACK_ARG(bottomrightx,"bottomrightx")
		HX_STACK_ARG(bottomrighty,"bottomrighty")
		HX_STACK_LINE(594)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(594)
		int tmp1 = (tmp * (int)9);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(594)
		int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(594)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(595)
		::kha::arrays::Float32Array tmp3 = this->rectVertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(595)
		int tmp4 = baseIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(595)
		Float tmp5 = bottomleftx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(595)
		tmp3->data.set(tmp4,tmp5);
		HX_STACK_LINE(596)
		::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(596)
		int tmp7 = (baseIndex + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(596)
		Float tmp8 = bottomlefty;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(596)
		tmp6->data.set(tmp7,tmp8);
		HX_STACK_LINE(597)
		::kha::arrays::Float32Array tmp9 = this->rectVertices;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(597)
		int tmp10 = (baseIndex + (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(597)
		tmp9->data.set(tmp10,((Float)-5.0));
		HX_STACK_LINE(599)
		::kha::arrays::Float32Array tmp11 = this->rectVertices;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(599)
		int tmp12 = (baseIndex + (int)9);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(599)
		Float tmp13 = topleftx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(599)
		tmp11->data.set(tmp12,tmp13);
		HX_STACK_LINE(600)
		::kha::arrays::Float32Array tmp14 = this->rectVertices;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(600)
		int tmp15 = (baseIndex + (int)10);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(600)
		Float tmp16 = toplefty;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(600)
		tmp14->data.set(tmp15,tmp16);
		HX_STACK_LINE(601)
		::kha::arrays::Float32Array tmp17 = this->rectVertices;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(601)
		int tmp18 = (baseIndex + (int)11);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(601)
		tmp17->data.set(tmp18,((Float)-5.0));
		HX_STACK_LINE(603)
		::kha::arrays::Float32Array tmp19 = this->rectVertices;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(603)
		int tmp20 = (baseIndex + (int)18);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(603)
		Float tmp21 = toprightx;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(603)
		tmp19->data.set(tmp20,tmp21);
		HX_STACK_LINE(604)
		::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(604)
		int tmp23 = (baseIndex + (int)19);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(604)
		Float tmp24 = toprighty;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(604)
		tmp22->data.set(tmp23,tmp24);
		HX_STACK_LINE(605)
		::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(605)
		int tmp26 = (baseIndex + (int)20);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(605)
		tmp25->data.set(tmp26,((Float)-5.0));
		HX_STACK_LINE(607)
		::kha::arrays::Float32Array tmp27 = this->rectVertices;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(607)
		int tmp28 = (baseIndex + (int)27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(607)
		Float tmp29 = bottomrightx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(607)
		tmp27->data.set(tmp28,tmp29);
		HX_STACK_LINE(608)
		::kha::arrays::Float32Array tmp30 = this->rectVertices;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(608)
		int tmp31 = (baseIndex + (int)28);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(608)
		Float tmp32 = bottomrighty;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(608)
		tmp30->data.set(tmp31,tmp32);
		HX_STACK_LINE(609)
		::kha::arrays::Float32Array tmp33 = this->rectVertices;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(609)
		int tmp34 = (baseIndex + (int)29);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(609)
		tmp33->data.set(tmp34,((Float)-5.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(TextShaderPainter_obj,setRectVertices,(void))

Void TextShaderPainter_obj::setRectTexCoords( Float left,Float top,Float right,Float bottom){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","setRectTexCoords",0x56b955a3,"kha.graphics4.TextShaderPainter.setRectTexCoords","kha/graphics4/Graphics2.hx",612,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(left,"left")
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(right,"right")
		HX_STACK_ARG(bottom,"bottom")
		HX_STACK_LINE(613)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(613)
		int tmp1 = (tmp * (int)9);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(613)
		int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(613)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(614)
		::kha::arrays::Float32Array tmp3 = this->rectVertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		int tmp4 = (baseIndex + (int)3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		Float tmp5 = left;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(614)
		tmp3->data.set(tmp4,tmp5);
		HX_STACK_LINE(615)
		::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(615)
		int tmp7 = (baseIndex + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(615)
		Float tmp8 = bottom;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(615)
		tmp6->data.set(tmp7,tmp8);
		HX_STACK_LINE(617)
		::kha::arrays::Float32Array tmp9 = this->rectVertices;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(617)
		int tmp10 = (baseIndex + (int)12);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(617)
		Float tmp11 = left;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(617)
		tmp9->data.set(tmp10,tmp11);
		HX_STACK_LINE(618)
		::kha::arrays::Float32Array tmp12 = this->rectVertices;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(618)
		int tmp13 = (baseIndex + (int)13);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(618)
		Float tmp14 = top;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(618)
		tmp12->data.set(tmp13,tmp14);
		HX_STACK_LINE(620)
		::kha::arrays::Float32Array tmp15 = this->rectVertices;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(620)
		int tmp16 = (baseIndex + (int)21);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(620)
		Float tmp17 = right;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(620)
		tmp15->data.set(tmp16,tmp17);
		HX_STACK_LINE(621)
		::kha::arrays::Float32Array tmp18 = this->rectVertices;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(621)
		int tmp19 = (baseIndex + (int)22);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(621)
		Float tmp20 = top;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(621)
		tmp18->data.set(tmp19,tmp20);
		HX_STACK_LINE(623)
		::kha::arrays::Float32Array tmp21 = this->rectVertices;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(623)
		int tmp22 = (baseIndex + (int)30);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(623)
		Float tmp23 = right;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(623)
		tmp21->data.set(tmp22,tmp23);
		HX_STACK_LINE(624)
		::kha::arrays::Float32Array tmp24 = this->rectVertices;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(624)
		int tmp25 = (baseIndex + (int)31);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(624)
		Float tmp26 = bottom;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(624)
		tmp24->data.set(tmp25,tmp26);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TextShaderPainter_obj,setRectTexCoords,(void))

Void TextShaderPainter_obj::setRectColors( int color){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","setRectColors",0x6bbe5ab2,"kha.graphics4.TextShaderPainter.setRectColors","kha/graphics4/Graphics2.hx",627,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(628)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(628)
		int tmp1 = (tmp * (int)9);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(628)
		int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(628)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(629)
		{
			HX_STACK_LINE(629)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(629)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(629)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(629)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(629)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(629)
			int tmp7 = (baseIndex + (int)5);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(629)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(629)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(630)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(630)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(630)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(630)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(630)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(630)
			int tmp7 = (baseIndex + (int)6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(630)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(630)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(631)
		{
			HX_STACK_LINE(631)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(631)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(631)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(631)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(631)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(631)
			int tmp7 = (baseIndex + (int)7);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(631)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(631)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(632)
		{
			HX_STACK_LINE(632)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(632)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(632)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(632)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(632)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(632)
			int tmp7 = (baseIndex + (int)8);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(632)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(632)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(634)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(634)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(634)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(634)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(634)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(634)
			int tmp7 = (baseIndex + (int)14);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(634)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(634)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(635)
		{
			HX_STACK_LINE(635)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(635)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(635)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(635)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(635)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(635)
			int tmp7 = (baseIndex + (int)15);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(635)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(635)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(636)
		{
			HX_STACK_LINE(636)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(636)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(636)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(636)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(636)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(636)
			int tmp7 = (baseIndex + (int)16);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(636)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(636)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(637)
		{
			HX_STACK_LINE(637)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(637)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(637)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(637)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(637)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(637)
			int tmp7 = (baseIndex + (int)17);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(637)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(637)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(639)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(639)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(639)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(639)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(639)
			int tmp7 = (baseIndex + (int)23);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(639)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(639)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(640)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(640)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(640)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(640)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(640)
			int tmp7 = (baseIndex + (int)24);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(640)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(640)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(641)
		{
			HX_STACK_LINE(641)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(641)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(641)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(641)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(641)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(641)
			int tmp7 = (baseIndex + (int)25);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(641)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(641)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(642)
		{
			HX_STACK_LINE(642)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(642)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(642)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(642)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(642)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(642)
			int tmp7 = (baseIndex + (int)26);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(642)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(642)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(644)
		{
			HX_STACK_LINE(644)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(644)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(644)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(644)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(644)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(644)
			int tmp7 = (baseIndex + (int)32);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(644)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(644)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(645)
		{
			HX_STACK_LINE(645)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(645)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(645)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(645)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(645)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(645)
			int tmp7 = (baseIndex + (int)33);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(645)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(645)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(646)
		{
			HX_STACK_LINE(646)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(646)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(646)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(646)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(646)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(646)
			int tmp7 = (baseIndex + (int)34);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(646)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(646)
			tmp6->data.set(tmp7,tmp8);
		}
		HX_STACK_LINE(647)
		{
			HX_STACK_LINE(647)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(647)
			int tmp4 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(647)
			::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(647)
			::cpp::Float32 value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(647)
			::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(647)
			int tmp7 = (baseIndex + (int)35);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(647)
			::cpp::Float32 tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(647)
			tmp6->data.set(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextShaderPainter_obj,setRectColors,(void))

Void TextShaderPainter_obj::drawBuffer( ){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","drawBuffer",0x91b8f028,"kha.graphics4.TextShaderPainter.drawBuffer","kha/graphics4/Graphics2.hx",650,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(651)
		::kha::graphics4::VertexBuffer tmp = this->rectVertexBuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		tmp->unlock();
		HX_STACK_LINE(652)
		::kha::graphics4::Graphics tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(652)
		::kha::graphics4::VertexBuffer tmp2 = this->rectVertexBuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(652)
		tmp1->setVertexBuffer(tmp2);
		HX_STACK_LINE(653)
		::kha::graphics4::Graphics tmp3 = this->g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(653)
		::kha::graphics4::IndexBuffer tmp4 = this->indexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(653)
		tmp3->setIndexBuffer(tmp4);
		HX_STACK_LINE(654)
		::kha::graphics4::Graphics tmp5 = this->g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(654)
		::kha::graphics4::Program tmp6 = this->get_program();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(654)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(654)
		::kha::graphics4::Program tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(654)
		if ((tmp7)){
			HX_STACK_LINE(654)
			tmp8 = this->shaderProgram;
		}
		else{
			HX_STACK_LINE(654)
			tmp8 = this->get_program();
		}
		HX_STACK_LINE(654)
		tmp5->setProgram(tmp8);
		HX_STACK_LINE(655)
		::kha::graphics4::Graphics tmp9 = this->g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(655)
		::kha::graphics4::TextureUnit tmp10 = this->textureLocation;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(655)
		::kha::Image tmp11 = this->lastTexture;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(655)
		tmp9->setTexture(tmp10,tmp11);
		HX_STACK_LINE(656)
		::kha::graphics4::Graphics tmp12 = this->g;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(656)
		::kha::graphics4::ConstantLocation tmp13 = this->projectionLocation;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(656)
		::kha::math::Matrix4 tmp14 = this->projectionMatrix;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(656)
		tmp12->setMatrix(tmp13,tmp14);
		HX_STACK_LINE(657)
		::kha::graphics4::BlendingOperation tmp15 = this->sourceBlend;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(657)
		bool tmp16 = (tmp15 == ::kha::graphics4::BlendingOperation_obj::Undefined);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(657)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(657)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(657)
		if ((tmp17)){
			HX_STACK_LINE(657)
			::kha::graphics4::BlendingOperation tmp19 = this->destinationBlend;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(657)
			::kha::graphics4::BlendingOperation tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(657)
			tmp18 = (tmp20 == ::kha::graphics4::BlendingOperation_obj::Undefined);
		}
		else{
			HX_STACK_LINE(657)
			tmp18 = true;
		}
		HX_STACK_LINE(657)
		if ((tmp18)){
			HX_STACK_LINE(658)
			::kha::graphics4::Graphics tmp19 = this->g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(658)
			tmp19->setBlendingMode(::kha::graphics4::BlendingOperation_obj::SourceAlpha,::kha::graphics4::BlendingOperation_obj::InverseSourceAlpha);
		}
		else{
			HX_STACK_LINE(661)
			::kha::graphics4::Graphics tmp19 = this->g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(661)
			::kha::graphics4::BlendingOperation tmp20 = this->sourceBlend;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(661)
			::kha::graphics4::BlendingOperation tmp21 = this->destinationBlend;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(661)
			tmp19->setBlendingMode(tmp20,tmp21);
		}
		HX_STACK_LINE(664)
		::kha::graphics4::Graphics tmp19 = this->g;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(664)
		int tmp20 = this->bufferIndex;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(664)
		int tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(664)
		int tmp22 = (tmp21 * (int)3);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(664)
		tmp19->drawIndexedVertices((int)0,tmp22);
		HX_STACK_LINE(666)
		::kha::graphics4::Graphics tmp23 = this->g;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(666)
		::kha::graphics4::TextureUnit tmp24 = this->textureLocation;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(666)
		tmp23->setTexture(tmp24,null());
		HX_STACK_LINE(667)
		this->bufferIndex = (int)0;
		HX_STACK_LINE(668)
		::kha::graphics4::VertexBuffer tmp25 = this->rectVertexBuffer;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(668)
		::kha::arrays::Float32Array tmp26 = tmp25->lock(null(),null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(668)
		this->rectVertices = tmp26;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextShaderPainter_obj,drawBuffer,(void))

Void TextShaderPainter_obj::setFont( ::kha::Font font){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","setFont",0xd8227c0d,"kha.graphics4.TextShaderPainter.setFont","kha/graphics4/Graphics2.hx",671,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(672)
		::kha::Kravur tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		tmp = hx::TCast< ::kha::Kravur >::cast(font);
		HX_STACK_LINE(672)
		this->font = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextShaderPainter_obj,setFont,(void))

Void TextShaderPainter_obj::startString( ::String text){

		wtext = text.__WCStr();
	
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","startString",0x7e56d24f,"kha.graphics4.TextShaderPainter.startString","kha/graphics4/Graphics2.hx",683,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(683)
		this->text = text;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextShaderPainter_obj,startString,(void))

int TextShaderPainter_obj::charCodeAt( int position){

		return wtext[position];
	
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","charCodeAt",0xb4b59efa,"kha.graphics4.TextShaderPainter.charCodeAt","kha/graphics4/Graphics2.hx",691,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(692)
		::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(692)
		int tmp1 = position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(692)
		Dynamic tmp2 = tmp.charCodeAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(692)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextShaderPainter_obj,charCodeAt,return )

int TextShaderPainter_obj::stringLength( ){

		return wcslen(wtext);
	
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","stringLength",0xd961e59b,"kha.graphics4.TextShaderPainter.stringLength","kha/graphics4/Graphics2.hx",700,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(701)
		::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(701)
		int tmp1 = tmp.length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(TextShaderPainter_obj,stringLength,return )

Void TextShaderPainter_obj::endString( ){

		wtext = 0;
	
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","endString",0xf93fab88,"kha.graphics4.TextShaderPainter.endString","kha/graphics4/Graphics2.hx",710,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(710)
		this->text = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextShaderPainter_obj,endString,(void))

Void TextShaderPainter_obj::drawString( ::String text,int color,Float x,Float y,::kha::math::FastMatrix3 transformation){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","drawString",0xd2545bf9,"kha.graphics4.TextShaderPainter.drawString","kha/graphics4/Graphics2.hx",713,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(transformation,"transformation")
		HX_STACK_LINE(714)
		::kha::Kravur tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(714)
		::kha::Image tmp1 = tmp->getTexture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		::kha::Image tex = tmp1;		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(715)
		::kha::Image tmp2 = this->lastTexture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(715)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(715)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(715)
		if ((tmp3)){
			HX_STACK_LINE(715)
			::kha::Image tmp5 = tex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(715)
			::kha::Image tmp6 = this->lastTexture;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(715)
			::kha::Image tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(715)
			tmp4 = (tmp5 != tmp7);
		}
		else{
			HX_STACK_LINE(715)
			tmp4 = false;
		}
		HX_STACK_LINE(715)
		if ((tmp4)){
			HX_STACK_LINE(715)
			this->drawBuffer();
		}
		HX_STACK_LINE(716)
		this->lastTexture = tex;
		HX_STACK_LINE(718)
		Float xpos = x;		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(719)
		Float ypos = y;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(720)
		::String tmp5 = text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(720)
		this->startString(tmp5);
		HX_STACK_LINE(721)
		{
			HX_STACK_LINE(721)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(721)
			int tmp6 = this->stringLength();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(721)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(721)
			while((true)){
				HX_STACK_LINE(721)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(721)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(721)
				if ((tmp8)){
					HX_STACK_LINE(721)
					break;
				}
				HX_STACK_LINE(721)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(721)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(722)
				::kha::Kravur tmp10 = this->font;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(722)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(722)
				int tmp12 = this->charCodeAt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(722)
				int tmp13 = (tmp12 - (int)32);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(722)
				Float tmp14 = xpos;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(722)
				Float tmp15 = ypos;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(722)
				::kha::AlignedQuad tmp16 = tmp10->getBakedQuad(tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(722)
				::kha::AlignedQuad q = tmp16;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(723)
				bool tmp17 = (q != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(723)
				if ((tmp17)){
					HX_STACK_LINE(724)
					int tmp18 = this->bufferIndex;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(724)
					int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(724)
					int tmp20 = ::kha::graphics4::TextShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(724)
					bool tmp21 = (tmp19 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(724)
					if ((tmp21)){
						HX_STACK_LINE(724)
						this->drawBuffer();
					}
					HX_STACK_LINE(725)
					int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(725)
					this->setRectColors(tmp22);
					HX_STACK_LINE(726)
					Float tmp23 = q->s0;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(726)
					int tmp24 = tex->get_width();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(726)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(726)
					int tmp26 = tex->get_realWidth();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(726)
					Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(726)
					Float tmp28 = q->t0;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(726)
					int tmp29 = tex->get_height();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(726)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(726)
					int tmp31 = tex->get_realHeight();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(726)
					Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(726)
					Float tmp33 = q->s1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(726)
					int tmp34 = tex->get_width();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(726)
					Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(726)
					int tmp36 = tex->get_realWidth();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(726)
					Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(726)
					Float tmp38 = q->t1;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(726)
					int tmp39 = tex->get_height();		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(726)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(726)
					int tmp41 = tex->get_realHeight();		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(726)
					Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(726)
					this->setRectTexCoords(tmp27,tmp32,tmp37,tmp42);
					HX_STACK_LINE(727)
					::cpp::Float32 value_x = q->x0;		HX_STACK_VAR(value_x,"value_x");
					HX_STACK_LINE(727)
					::cpp::Float32 value_y = q->y1;		HX_STACK_VAR(value_y,"value_y");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp43 = (transformation->_02 * value_x);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp44 = (transformation->_12 * value_y);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp46 = transformation->_22;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(727)
					::cpp::Float32 w = tmp47;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp48 = (transformation->_00 * value_x);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp49 = (transformation->_10 * value_y);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp51 = transformation->_20;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp53 = w;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(727)
					Float tmp54 = (Float(tmp52) / Float(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(727)
					Float x1 = tmp54;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp55 = (transformation->_01 * value_x);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp56 = (transformation->_11 * value_y);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp58 = transformation->_21;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(727)
					::cpp::Float32 tmp60 = w;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(727)
					Float tmp61 = (Float(tmp59) / Float(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(727)
					Float y1 = tmp61;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(727)
					::cpp::Float32 p0_x = x1;		HX_STACK_VAR(p0_x,"p0_x");
					HX_STACK_LINE(727)
					::cpp::Float32 p0_y = y1;		HX_STACK_VAR(p0_y,"p0_y");
					HX_STACK_LINE(728)
					::cpp::Float32 value_x1 = q->x0;		HX_STACK_VAR(value_x1,"value_x1");
					HX_STACK_LINE(728)
					::cpp::Float32 value_y1 = q->y0;		HX_STACK_VAR(value_y1,"value_y1");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp62 = (transformation->_02 * value_x1);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp63 = (transformation->_12 * value_y1);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp65 = transformation->_22;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(728)
					::cpp::Float32 w1 = tmp66;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp67 = (transformation->_00 * value_x1);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp68 = (transformation->_10 * value_y1);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp70 = transformation->_20;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp72 = w1;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(728)
					Float tmp73 = (Float(tmp71) / Float(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(728)
					Float x2 = tmp73;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp74 = (transformation->_01 * value_x1);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp75 = (transformation->_11 * value_y1);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp77 = transformation->_21;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(728)
					::cpp::Float32 tmp79 = w1;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(728)
					Float tmp80 = (Float(tmp78) / Float(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(728)
					Float y2 = tmp80;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(728)
					::cpp::Float32 p1_x = x2;		HX_STACK_VAR(p1_x,"p1_x");
					HX_STACK_LINE(728)
					::cpp::Float32 p1_y = y2;		HX_STACK_VAR(p1_y,"p1_y");
					HX_STACK_LINE(729)
					::cpp::Float32 value_x2 = q->x1;		HX_STACK_VAR(value_x2,"value_x2");
					HX_STACK_LINE(729)
					::cpp::Float32 value_y2 = q->y0;		HX_STACK_VAR(value_y2,"value_y2");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp81 = (transformation->_02 * value_x2);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp82 = (transformation->_12 * value_y2);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp84 = transformation->_22;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(729)
					::cpp::Float32 w2 = tmp85;		HX_STACK_VAR(w2,"w2");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp86 = (transformation->_00 * value_x2);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp87 = (transformation->_10 * value_y2);		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp89 = transformation->_20;		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp91 = w2;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(729)
					Float tmp92 = (Float(tmp90) / Float(tmp91));		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(729)
					Float x3 = tmp92;		HX_STACK_VAR(x3,"x3");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp93 = (transformation->_01 * value_x2);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp94 = (transformation->_11 * value_y2);		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp96 = transformation->_21;		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(729)
					::cpp::Float32 tmp98 = w2;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(729)
					Float tmp99 = (Float(tmp97) / Float(tmp98));		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(729)
					Float y3 = tmp99;		HX_STACK_VAR(y3,"y3");
					HX_STACK_LINE(729)
					::cpp::Float32 p2_x = x3;		HX_STACK_VAR(p2_x,"p2_x");
					HX_STACK_LINE(729)
					::cpp::Float32 p2_y = y3;		HX_STACK_VAR(p2_y,"p2_y");
					HX_STACK_LINE(730)
					::cpp::Float32 value_x3 = q->x1;		HX_STACK_VAR(value_x3,"value_x3");
					HX_STACK_LINE(730)
					::cpp::Float32 value_y3 = q->y1;		HX_STACK_VAR(value_y3,"value_y3");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp100 = (transformation->_02 * value_x3);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp101 = (transformation->_12 * value_y3);		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp103 = transformation->_22;		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(730)
					::cpp::Float32 w3 = tmp104;		HX_STACK_VAR(w3,"w3");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp105 = (transformation->_00 * value_x3);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp106 = (transformation->_10 * value_y3);		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp108 = transformation->_20;		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp110 = w3;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(730)
					Float tmp111 = (Float(tmp109) / Float(tmp110));		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(730)
					Float x4 = tmp111;		HX_STACK_VAR(x4,"x4");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp112 = (transformation->_01 * value_x3);		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp113 = (transformation->_11 * value_y3);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp115 = transformation->_21;		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(730)
					::cpp::Float32 tmp117 = w3;		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(730)
					Float tmp118 = (Float(tmp116) / Float(tmp117));		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(730)
					Float y4 = tmp118;		HX_STACK_VAR(y4,"y4");
					HX_STACK_LINE(730)
					::cpp::Float32 p3_x = x4;		HX_STACK_VAR(p3_x,"p3_x");
					HX_STACK_LINE(730)
					::cpp::Float32 p3_y = y4;		HX_STACK_VAR(p3_y,"p3_y");
					HX_STACK_LINE(713)
					::cpp::Float32 tmp119 = p0_x;		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(713)
					::cpp::Float32 tmp120 = p0_y;		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(713)
					::cpp::Float32 tmp121 = p1_x;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(713)
					::cpp::Float32 tmp122 = p1_y;		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(713)
					::cpp::Float32 tmp123 = p2_x;		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(713)
					::cpp::Float32 tmp124 = p2_y;		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(713)
					::cpp::Float32 tmp125 = p3_x;		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(713)
					::cpp::Float32 tmp126 = p3_y;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(731)
					this->setRectVertices(tmp119,tmp120,tmp121,tmp122,tmp123,tmp124,tmp125,tmp126);
					HX_STACK_LINE(732)
					hx::AddEq(xpos,q->xadvance);
					HX_STACK_LINE(733)
					++(this->bufferIndex);
				}
			}
		}
		HX_STACK_LINE(736)
		this->endString();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(TextShaderPainter_obj,drawString,(void))

Void TextShaderPainter_obj::end( ){
{
		HX_STACK_FRAME("kha.graphics4.TextShaderPainter","end",0x42177357,"kha.graphics4.TextShaderPainter.end","kha/graphics4/Graphics2.hx",739,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(740)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(740)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(740)
		if ((tmp1)){
			HX_STACK_LINE(740)
			this->drawBuffer();
		}
		HX_STACK_LINE(741)
		this->lastTexture = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextShaderPainter_obj,end,(void))

int TextShaderPainter_obj::bufferSize;


TextShaderPainter_obj::TextShaderPainter_obj()
{
}

void TextShaderPainter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextShaderPainter);
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(shaderProgram,"shaderProgram");
	HX_MARK_MEMBER_NAME(structure,"structure");
	HX_MARK_MEMBER_NAME(projectionLocation,"projectionLocation");
	HX_MARK_MEMBER_NAME(textureLocation,"textureLocation");
	HX_MARK_MEMBER_NAME(bufferIndex,"bufferIndex");
	HX_MARK_MEMBER_NAME(rectVertexBuffer,"rectVertexBuffer");
	HX_MARK_MEMBER_NAME(rectVertices,"rectVertices");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(lastTexture,"lastTexture");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(myProgram,"myProgram");
	HX_MARK_MEMBER_NAME(sourceBlend,"sourceBlend");
	HX_MARK_MEMBER_NAME(destinationBlend,"destinationBlend");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_END_CLASS();
}

void TextShaderPainter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(shaderProgram,"shaderProgram");
	HX_VISIT_MEMBER_NAME(structure,"structure");
	HX_VISIT_MEMBER_NAME(projectionLocation,"projectionLocation");
	HX_VISIT_MEMBER_NAME(textureLocation,"textureLocation");
	HX_VISIT_MEMBER_NAME(bufferIndex,"bufferIndex");
	HX_VISIT_MEMBER_NAME(rectVertexBuffer,"rectVertexBuffer");
	HX_VISIT_MEMBER_NAME(rectVertices,"rectVertices");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(lastTexture,"lastTexture");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(myProgram,"myProgram");
	HX_VISIT_MEMBER_NAME(sourceBlend,"sourceBlend");
	HX_VISIT_MEMBER_NAME(destinationBlend,"destinationBlend");
	HX_VISIT_MEMBER_NAME(text,"text");
}

Dynamic TextShaderPainter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { if (inCallProp == hx::paccAlways) return get_program(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"structure") ) { return structure; }
		if (HX_FIELD_EQ(inName,"myProgram") ) { return myProgram; }
		if (HX_FIELD_EQ(inName,"endString") ) { return endString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBuffer") ) { return drawBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { return charCodeAt_dyn(); }
		if (HX_FIELD_EQ(inName,"drawString") ) { return drawString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferIndex") ) { return bufferIndex; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"lastTexture") ) { return lastTexture; }
		if (HX_FIELD_EQ(inName,"sourceBlend") ) { return sourceBlend; }
		if (HX_FIELD_EQ(inName,"get_program") ) { return get_program_dyn(); }
		if (HX_FIELD_EQ(inName,"set_program") ) { return set_program_dyn(); }
		if (HX_FIELD_EQ(inName,"initShaders") ) { return initShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"initBuffers") ) { return initBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"startString") ) { return startString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectVertices") ) { return rectVertices; }
		if (HX_FIELD_EQ(inName,"stringLength") ) { return stringLength_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderProgram") ) { return shaderProgram; }
		if (HX_FIELD_EQ(inName,"setProjection") ) { return setProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"setRectColors") ) { return setRectColors_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textureLocation") ) { return textureLocation; }
		if (HX_FIELD_EQ(inName,"setRectVertices") ) { return setRectVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
		if (HX_FIELD_EQ(inName,"rectVertexBuffer") ) { return rectVertexBuffer; }
		if (HX_FIELD_EQ(inName,"destinationBlend") ) { return destinationBlend; }
		if (HX_FIELD_EQ(inName,"setRectTexCoords") ) { return setRectTexCoords_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionLocation") ) { return projectionLocation; }
	}
	return super::__Field(inName,inCallProp);
}

bool TextShaderPainter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferSize") ) { outValue = bufferSize; return true;  }
	}
	return false;
}

Dynamic TextShaderPainter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::kha::Kravur >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"lastTexture") ) { lastTexture=inValue.Cast< ::kha::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceBlend") ) { sourceBlend=inValue.Cast< ::kha::graphics4::BlendingOperation >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectVertices") ) { rectVertices=inValue.Cast< ::kha::arrays::Float32Array >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderProgram") ) { shaderProgram=inValue.Cast< ::kha::graphics4::Program >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textureLocation") ) { textureLocation=inValue.Cast< ::kha::graphics4::TextureUnit >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::kha::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectVertexBuffer") ) { rectVertexBuffer=inValue.Cast< ::kha::graphics4::VertexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destinationBlend") ) { destinationBlend=inValue.Cast< ::kha::graphics4::BlendingOperation >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionLocation") ) { projectionLocation=inValue.Cast< ::kha::graphics4::ConstantLocation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextShaderPainter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferSize") ) { bufferSize=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void TextShaderPainter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("shaderProgram","\xdf","\x11","\x9a","\x6f"));
	outFields->push(HX_HCSTRING("structure","\x33","\x54","\x4f","\x47"));
	outFields->push(HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b"));
	outFields->push(HX_HCSTRING("textureLocation","\x30","\xc6","\x65","\x4c"));
	outFields->push(HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b"));
	outFields->push(HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97"));
	outFields->push(HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("myProgram","\x78","\x18","\xec","\x9a"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3"));
	outFields->push(HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::math::Matrix4*/ ,(int)offsetof(TextShaderPainter_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(TextShaderPainter_obj,shaderProgram),HX_HCSTRING("shaderProgram","\xdf","\x11","\x9a","\x6f")},
	{hx::fsObject /*::kha::graphics4::VertexStructure*/ ,(int)offsetof(TextShaderPainter_obj,structure),HX_HCSTRING("structure","\x33","\x54","\x4f","\x47")},
	{hx::fsObject /*::kha::graphics4::ConstantLocation*/ ,(int)offsetof(TextShaderPainter_obj,projectionLocation),HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b")},
	{hx::fsObject /*::kha::graphics4::TextureUnit*/ ,(int)offsetof(TextShaderPainter_obj,textureLocation),HX_HCSTRING("textureLocation","\x30","\xc6","\x65","\x4c")},
	{hx::fsInt,(int)offsetof(TextShaderPainter_obj,bufferIndex),HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(TextShaderPainter_obj,rectVertexBuffer),HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97")},
	{hx::fsObject /*::kha::arrays::Float32Array*/ ,(int)offsetof(TextShaderPainter_obj,rectVertices),HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(TextShaderPainter_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsObject /*::kha::Kravur*/ ,(int)offsetof(TextShaderPainter_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(TextShaderPainter_obj,lastTexture),HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(TextShaderPainter_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(TextShaderPainter_obj,myProgram),HX_HCSTRING("myProgram","\x78","\x18","\xec","\x9a")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(TextShaderPainter_obj,sourceBlend),HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(TextShaderPainter_obj,destinationBlend),HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e")},
	{hx::fsString,(int)offsetof(TextShaderPainter_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextShaderPainter_obj::bufferSize,HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("shaderProgram","\xdf","\x11","\x9a","\x6f"),
	HX_HCSTRING("structure","\x33","\x54","\x4f","\x47"),
	HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b"),
	HX_HCSTRING("textureLocation","\x30","\xc6","\x65","\x4c"),
	HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b"),
	HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97"),
	HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53"),
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
	HX_HCSTRING("setRectTexCoords","\x9f","\xc2","\xa8","\xfb"),
	HX_HCSTRING("setRectColors","\x36","\x38","\x37","\x6d"),
	HX_HCSTRING("drawBuffer","\x24","\x38","\x58","\x12"),
	HX_HCSTRING("setFont","\x91","\x9e","\x44","\x09"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("startString","\xd3","\x86","\x16","\x89"),
	HX_HCSTRING("charCodeAt","\xf6","\xe6","\x54","\x35"),
	HX_HCSTRING("stringLength","\x97","\x24","\x60","\x36"),
	HX_HCSTRING("endString","\x0c","\x77","\x12","\x51"),
	HX_HCSTRING("drawString","\xf5","\xa3","\xf3","\x52"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextShaderPainter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextShaderPainter_obj::bufferSize,"bufferSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextShaderPainter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextShaderPainter_obj::bufferSize,"bufferSize");
};

#endif

hx::Class TextShaderPainter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d"),
	::String(null()) };

void TextShaderPainter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.TextShaderPainter","\xea","\x61","\x5a","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextShaderPainter_obj::__GetStatic;
	__mClass->mSetStaticField = &TextShaderPainter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextShaderPainter_obj >;
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

void TextShaderPainter_obj::__boot()
{
	bufferSize= (int)100;
}

} // end namespace kha
} // end namespace graphics4
