#include <hxcpp.h>

#include "float32array.h"
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
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
#ifndef INCLUDED_kha_graphics4_ImageShaderPainter
#include <kha/graphics4/ImageShaderPainter.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_MipMapFilter
#include <kha/graphics4/MipMapFilter.h>
#endif
#ifndef INCLUDED_kha_graphics4_Program
#include <kha/graphics4/Program.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureAddressing
#include <kha/graphics4/TextureAddressing.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFilter
#include <kha/graphics4/TextureFilter.h>
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
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
namespace kha{
namespace graphics4{

Void ImageShaderPainter_obj::__construct(::kha::graphics4::Graphics g4)
{
HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","new",0xa318bb6c,"kha.graphics4.ImageShaderPainter.new","kha/graphics4/Graphics2.hx",30,0x0c1de808)
HX_STACK_THIS(this)
HX_STACK_ARG(g4,"g4")
{
	HX_STACK_LINE(49)
	this->destinationBlend = ::kha::graphics4::BlendingOperation_obj::Undefined;
	HX_STACK_LINE(48)
	this->sourceBlend = ::kha::graphics4::BlendingOperation_obj::Undefined;
	HX_STACK_LINE(45)
	this->myProgram = null();
	HX_STACK_LINE(43)
	this->bilinear = false;
	HX_STACK_LINE(52)
	this->g = g4;
	HX_STACK_LINE(53)
	this->bufferIndex = (int)0;
	HX_STACK_LINE(54)
	this->initShaders();
	HX_STACK_LINE(55)
	this->initBuffers();
	HX_STACK_LINE(56)
	::kha::graphics4::Program tmp = this->shaderProgram;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::kha::graphics4::ConstantLocation tmp1 = tmp->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	this->projectionLocation = tmp1;
	HX_STACK_LINE(57)
	::kha::graphics4::Program tmp2 = this->shaderProgram;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::kha::graphics4::TextureUnit tmp3 = tmp2->getTextureUnit(HX_HCSTRING("tex","\xe7","\x5d","\x58","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	this->textureLocation = tmp3;
}
;
	return null();
}

//ImageShaderPainter_obj::~ImageShaderPainter_obj() { }

Dynamic ImageShaderPainter_obj::__CreateEmpty() { return  new ImageShaderPainter_obj; }
hx::ObjectPtr< ImageShaderPainter_obj > ImageShaderPainter_obj::__new(::kha::graphics4::Graphics g4)
{  hx::ObjectPtr< ImageShaderPainter_obj > _result_ = new ImageShaderPainter_obj();
	_result_->__construct(g4);
	return _result_;}

Dynamic ImageShaderPainter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageShaderPainter_obj > _result_ = new ImageShaderPainter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::kha::graphics4::Program ImageShaderPainter_obj::get_program( ){
	HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","get_program",0xff6c81a7,"kha.graphics4.ImageShaderPainter.get_program","kha/graphics4/Graphics2.hx",60,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	::kha::graphics4::Program tmp = this->myProgram;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageShaderPainter_obj,get_program,return )

::kha::graphics4::Program ImageShaderPainter_obj::set_program( ::kha::graphics4::Program prog){
	HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","set_program",0x09d988b3,"kha.graphics4.ImageShaderPainter.set_program","kha/graphics4/Graphics2.hx",64,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(prog,"prog")
	HX_STACK_LINE(65)
	bool tmp = (prog == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	if ((tmp)){
		HX_STACK_LINE(66)
		::kha::graphics4::Program tmp1 = this->shaderProgram;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::kha::graphics4::ConstantLocation tmp2 = tmp1->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		this->projectionLocation = tmp2;
		HX_STACK_LINE(67)
		::kha::graphics4::Program tmp3 = this->shaderProgram;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::kha::graphics4::TextureUnit tmp4 = tmp3->getTextureUnit(HX_HCSTRING("tex","\xe7","\x5d","\x58","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		this->textureLocation = tmp4;
	}
	else{
		HX_STACK_LINE(70)
		::kha::graphics4::ConstantLocation tmp1 = prog->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		this->projectionLocation = tmp1;
		HX_STACK_LINE(71)
		::kha::graphics4::TextureUnit tmp2 = prog->getTextureUnit(HX_HCSTRING("tex","\xe7","\x5d","\x58","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		this->textureLocation = tmp2;
	}
	HX_STACK_LINE(73)
	::kha::graphics4::Program tmp1 = this->myProgram = prog;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ImageShaderPainter_obj,set_program,return )

Void ImageShaderPainter_obj::setProjection( ::kha::math::Matrix4 projectionMatrix){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","setProjection",0xdca978dd,"kha.graphics4.ImageShaderPainter.setProjection","kha/graphics4/Graphics2.hx",77,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(projectionMatrix,"projectionMatrix")
		HX_STACK_LINE(77)
		this->projectionMatrix = projectionMatrix;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageShaderPainter_obj,setProjection,(void))

Void ImageShaderPainter_obj::initShaders( ){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","initShaders",0x9d69c78a,"kha.graphics4.ImageShaderPainter.initShaders","kha/graphics4/Graphics2.hx",80,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::kha::Loader tmp = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::kha::Blob tmp1 = tmp->getShader(HX_HCSTRING("painter-image.frag","\xe7","\x2b","\x9f","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		::kha::graphics4::FragmentShader tmp2 = ::kha::graphics4::FragmentShader_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::kha::graphics4::FragmentShader fragmentShader = tmp2;		HX_STACK_VAR(fragmentShader,"fragmentShader");
		HX_STACK_LINE(82)
		::kha::Loader tmp3 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::kha::Blob tmp4 = tmp3->getShader(HX_HCSTRING("painter-image.vert","\x66","\xc7","\x28","\x4e"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::kha::graphics4::VertexShader tmp5 = ::kha::graphics4::VertexShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		::kha::graphics4::VertexShader vertexShader = tmp5;		HX_STACK_VAR(vertexShader,"vertexShader");
		HX_STACK_LINE(84)
		::kha::graphics4::Program tmp6 = ::kha::graphics4::Program_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		this->shaderProgram = tmp6;
		HX_STACK_LINE(85)
		::kha::graphics4::Program tmp7 = this->shaderProgram;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		::kha::graphics4::FragmentShader tmp8 = fragmentShader;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		tmp7->setFragmentShader(tmp8);
		HX_STACK_LINE(86)
		::kha::graphics4::Program tmp9 = this->shaderProgram;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(86)
		::kha::graphics4::VertexShader tmp10 = vertexShader;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(86)
		tmp9->setVertexShader(tmp10);
		HX_STACK_LINE(88)
		::kha::graphics4::VertexStructure tmp11 = ::kha::graphics4::VertexStructure_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(88)
		this->structure = tmp11;
		HX_STACK_LINE(89)
		::kha::graphics4::VertexStructure tmp12 = this->structure;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(89)
		tmp12->add(HX_HCSTRING("vertexPosition","\x2d","\x3c","\x14","\x50"),::kha::graphics4::VertexData_obj::Float3);
		HX_STACK_LINE(90)
		::kha::graphics4::VertexStructure tmp13 = this->structure;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(90)
		tmp13->add(HX_HCSTRING("texPosition","\xb0","\x79","\xff","\xc7"),::kha::graphics4::VertexData_obj::Float2);
		HX_STACK_LINE(91)
		::kha::graphics4::VertexStructure tmp14 = this->structure;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(91)
		tmp14->add(HX_HCSTRING("vertexColor","\x5f","\x3b","\x98","\x5e"),::kha::graphics4::VertexData_obj::Float4);
		HX_STACK_LINE(93)
		::kha::graphics4::Program tmp15 = this->shaderProgram;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(93)
		::kha::graphics4::VertexStructure tmp16 = this->structure;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(93)
		tmp15->link(tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageShaderPainter_obj,initShaders,(void))

Void ImageShaderPainter_obj::initBuffers( ){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","initBuffers",0xef73e94f,"kha.graphics4.ImageShaderPainter.initBuffers","kha/graphics4/Graphics2.hx",96,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		int tmp = ::kha::graphics4::ImageShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		::kha::graphics4::VertexStructure tmp2 = this->structure;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		::kha::graphics4::VertexBuffer tmp3 = ::kha::graphics4::VertexBuffer_obj::__new(tmp1,tmp2,::kha::graphics4::Usage_obj::DynamicUsage,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		this->rectVertexBuffer = tmp3;
		HX_STACK_LINE(98)
		::kha::graphics4::VertexBuffer tmp4 = this->rectVertexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		::kha::arrays::Float32Array tmp5 = tmp4->lock(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		this->rectVertices = tmp5;
		HX_STACK_LINE(100)
		int tmp6 = ::kha::graphics4::ImageShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		int tmp7 = (tmp6 * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		int tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		::kha::graphics4::IndexBuffer tmp9 = ::kha::graphics4::IndexBuffer_obj::__new(tmp8,::kha::graphics4::Usage_obj::StaticUsage,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		this->indexBuffer = tmp9;
		HX_STACK_LINE(101)
		::kha::graphics4::IndexBuffer tmp10 = this->indexBuffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		Array< int > tmp11 = tmp10->lock();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		Array< int > indices = tmp11;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(102)
			int tmp12 = ::kha::graphics4::ImageShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			int _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				if ((tmp14)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(103)
				Array< int > tmp16 = indices;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(103)
				int tmp17 = (i * (int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(103)
				int tmp18 = (tmp17 * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(103)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(103)
				int tmp20 = (i * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(103)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(103)
				tmp16[tmp19] = tmp21;
				HX_STACK_LINE(104)
				Array< int > tmp22 = indices;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(104)
				int tmp23 = (i * (int)3);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(104)
				int tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(104)
				int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(104)
				int tmp26 = (i * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(104)
				int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(104)
				tmp22[tmp25] = tmp27;
				HX_STACK_LINE(105)
				Array< int > tmp28 = indices;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(105)
				int tmp29 = (i * (int)3);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(105)
				int tmp30 = (tmp29 * (int)2);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(105)
				int tmp31 = (tmp30 + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(105)
				int tmp32 = (i * (int)4);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(105)
				int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(105)
				tmp28[tmp31] = tmp33;
				HX_STACK_LINE(106)
				Array< int > tmp34 = indices;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(106)
				int tmp35 = (i * (int)3);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(106)
				int tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(106)
				int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(106)
				int tmp38 = (i * (int)4);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(106)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(106)
				tmp34[tmp37] = tmp39;
				HX_STACK_LINE(107)
				Array< int > tmp40 = indices;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(107)
				int tmp41 = (i * (int)3);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(107)
				int tmp42 = (tmp41 * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(107)
				int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(107)
				int tmp44 = (i * (int)4);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(107)
				int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(107)
				tmp40[tmp43] = tmp45;
				HX_STACK_LINE(108)
				Array< int > tmp46 = indices;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(108)
				int tmp47 = (i * (int)3);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(108)
				int tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(108)
				int tmp49 = (tmp48 + (int)5);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(108)
				int tmp50 = (i * (int)4);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(108)
				int tmp51 = (tmp50 + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(108)
				tmp46[tmp49] = tmp51;
			}
		}
		HX_STACK_LINE(110)
		::kha::graphics4::IndexBuffer tmp12 = this->indexBuffer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(110)
		tmp12->unlock();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageShaderPainter_obj,initBuffers,(void))

Void ImageShaderPainter_obj::setRectVertices( ::cpp::Float32 bottomleftx,::cpp::Float32 bottomlefty,::cpp::Float32 topleftx,::cpp::Float32 toplefty,::cpp::Float32 toprightx,::cpp::Float32 toprighty,::cpp::Float32 bottomrightx,::cpp::Float32 bottomrighty){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","setRectVertices",0x24abad0b,"kha.graphics4.ImageShaderPainter.setRectVertices","kha/graphics4/Graphics2.hx",117,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bottomleftx,"bottomleftx")
		HX_STACK_ARG(bottomlefty,"bottomlefty")
		HX_STACK_ARG(topleftx,"topleftx")
		HX_STACK_ARG(toplefty,"toplefty")
		HX_STACK_ARG(toprightx,"toprightx")
		HX_STACK_ARG(toprighty,"toprighty")
		HX_STACK_ARG(bottomrightx,"bottomrightx")
		HX_STACK_ARG(bottomrighty,"bottomrighty")
		HX_STACK_LINE(118)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		int tmp1 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		int baseIndex = tmp3;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(119)
		::kha::arrays::Float32Array tmp4 = this->rectVertices;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		int tmp5 = baseIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		::cpp::Float32 tmp6 = bottomleftx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		tmp4->data.set(tmp5,tmp6);
		HX_STACK_LINE(120)
		::kha::arrays::Float32Array tmp7 = this->rectVertices;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		int tmp8 = (baseIndex + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		::cpp::Float32 tmp9 = bottomlefty;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		tmp7->data.set(tmp8,tmp9);
		HX_STACK_LINE(121)
		::kha::arrays::Float32Array tmp10 = this->rectVertices;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		int tmp11 = (baseIndex + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(121)
		tmp10->data.set(tmp11,((Float)-5.0));
		HX_STACK_LINE(123)
		::kha::arrays::Float32Array tmp12 = this->rectVertices;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(123)
		int tmp13 = (baseIndex + (int)9);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(123)
		::cpp::Float32 tmp14 = topleftx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(123)
		tmp12->data.set(tmp13,tmp14);
		HX_STACK_LINE(124)
		::kha::arrays::Float32Array tmp15 = this->rectVertices;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(124)
		int tmp16 = (baseIndex + (int)10);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(124)
		::cpp::Float32 tmp17 = toplefty;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(124)
		tmp15->data.set(tmp16,tmp17);
		HX_STACK_LINE(125)
		::kha::arrays::Float32Array tmp18 = this->rectVertices;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(125)
		int tmp19 = (baseIndex + (int)11);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(125)
		tmp18->data.set(tmp19,((Float)-5.0));
		HX_STACK_LINE(127)
		::kha::arrays::Float32Array tmp20 = this->rectVertices;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(127)
		int tmp21 = (baseIndex + (int)18);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(127)
		::cpp::Float32 tmp22 = toprightx;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(127)
		tmp20->data.set(tmp21,tmp22);
		HX_STACK_LINE(128)
		::kha::arrays::Float32Array tmp23 = this->rectVertices;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(128)
		int tmp24 = (baseIndex + (int)19);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(128)
		::cpp::Float32 tmp25 = toprighty;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(128)
		tmp23->data.set(tmp24,tmp25);
		HX_STACK_LINE(129)
		::kha::arrays::Float32Array tmp26 = this->rectVertices;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(129)
		int tmp27 = (baseIndex + (int)20);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(129)
		tmp26->data.set(tmp27,((Float)-5.0));
		HX_STACK_LINE(131)
		::kha::arrays::Float32Array tmp28 = this->rectVertices;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(131)
		int tmp29 = (baseIndex + (int)27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(131)
		::cpp::Float32 tmp30 = bottomrightx;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(131)
		tmp28->data.set(tmp29,tmp30);
		HX_STACK_LINE(132)
		::kha::arrays::Float32Array tmp31 = this->rectVertices;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(132)
		int tmp32 = (baseIndex + (int)28);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(132)
		::cpp::Float32 tmp33 = bottomrighty;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(132)
		tmp31->data.set(tmp32,tmp33);
		HX_STACK_LINE(133)
		::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(133)
		int tmp35 = (baseIndex + (int)29);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(133)
		tmp34->data.set(tmp35,((Float)-5.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(ImageShaderPainter_obj,setRectVertices,(void))

Void ImageShaderPainter_obj::setRectTexCoords( ::cpp::Float32 left,::cpp::Float32 top,::cpp::Float32 right,::cpp::Float32 bottom){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","setRectTexCoords",0x2a0ce013,"kha.graphics4.ImageShaderPainter.setRectTexCoords","kha/graphics4/Graphics2.hx",136,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(left,"left")
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(right,"right")
		HX_STACK_ARG(bottom,"bottom")
		HX_STACK_LINE(137)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		int tmp1 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		int baseIndex = tmp3;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(138)
		::kha::arrays::Float32Array tmp4 = this->rectVertices;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		int tmp5 = (baseIndex + (int)3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		::cpp::Float32 tmp6 = left;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		tmp4->data.set(tmp5,tmp6);
		HX_STACK_LINE(139)
		::kha::arrays::Float32Array tmp7 = this->rectVertices;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(139)
		int tmp8 = (baseIndex + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(139)
		::cpp::Float32 tmp9 = bottom;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		tmp7->data.set(tmp8,tmp9);
		HX_STACK_LINE(141)
		::kha::arrays::Float32Array tmp10 = this->rectVertices;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(141)
		int tmp11 = (baseIndex + (int)12);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(141)
		::cpp::Float32 tmp12 = left;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(141)
		tmp10->data.set(tmp11,tmp12);
		HX_STACK_LINE(142)
		::kha::arrays::Float32Array tmp13 = this->rectVertices;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(142)
		int tmp14 = (baseIndex + (int)13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(142)
		::cpp::Float32 tmp15 = top;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(142)
		tmp13->data.set(tmp14,tmp15);
		HX_STACK_LINE(144)
		::kha::arrays::Float32Array tmp16 = this->rectVertices;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(144)
		int tmp17 = (baseIndex + (int)21);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(144)
		::cpp::Float32 tmp18 = right;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(144)
		tmp16->data.set(tmp17,tmp18);
		HX_STACK_LINE(145)
		::kha::arrays::Float32Array tmp19 = this->rectVertices;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(145)
		int tmp20 = (baseIndex + (int)22);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(145)
		::cpp::Float32 tmp21 = top;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(145)
		tmp19->data.set(tmp20,tmp21);
		HX_STACK_LINE(147)
		::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(147)
		int tmp23 = (baseIndex + (int)30);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(147)
		::cpp::Float32 tmp24 = right;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(147)
		tmp22->data.set(tmp23,tmp24);
		HX_STACK_LINE(148)
		::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(148)
		int tmp26 = (baseIndex + (int)31);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(148)
		::cpp::Float32 tmp27 = bottom;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(148)
		tmp25->data.set(tmp26,tmp27);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ImageShaderPainter_obj,setRectTexCoords,(void))

Void ImageShaderPainter_obj::setRectColor( ::cpp::Float32 r,::cpp::Float32 g,::cpp::Float32 b,::cpp::Float32 a){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","setRectColor",0x3cb78511,"kha.graphics4.ImageShaderPainter.setRectColor","kha/graphics4/Graphics2.hx",151,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(152)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		int tmp1 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		int baseIndex = tmp3;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(153)
		::kha::arrays::Float32Array tmp4 = this->rectVertices;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		int tmp5 = (baseIndex + (int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		::cpp::Float32 tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		tmp4->data.set(tmp5,tmp6);
		HX_STACK_LINE(154)
		::kha::arrays::Float32Array tmp7 = this->rectVertices;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		int tmp8 = (baseIndex + (int)6);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		::cpp::Float32 tmp9 = g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		tmp7->data.set(tmp8,tmp9);
		HX_STACK_LINE(155)
		::kha::arrays::Float32Array tmp10 = this->rectVertices;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(155)
		int tmp11 = (baseIndex + (int)7);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(155)
		::cpp::Float32 tmp12 = b;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		tmp10->data.set(tmp11,tmp12);
		HX_STACK_LINE(156)
		::kha::arrays::Float32Array tmp13 = this->rectVertices;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(156)
		int tmp14 = (baseIndex + (int)8);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(156)
		::cpp::Float32 tmp15 = a;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(156)
		tmp13->data.set(tmp14,tmp15);
		HX_STACK_LINE(158)
		::kha::arrays::Float32Array tmp16 = this->rectVertices;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(158)
		int tmp17 = (baseIndex + (int)14);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(158)
		::cpp::Float32 tmp18 = r;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(158)
		tmp16->data.set(tmp17,tmp18);
		HX_STACK_LINE(159)
		::kha::arrays::Float32Array tmp19 = this->rectVertices;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(159)
		int tmp20 = (baseIndex + (int)15);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(159)
		::cpp::Float32 tmp21 = g;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(159)
		tmp19->data.set(tmp20,tmp21);
		HX_STACK_LINE(160)
		::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(160)
		int tmp23 = (baseIndex + (int)16);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(160)
		::cpp::Float32 tmp24 = b;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(160)
		tmp22->data.set(tmp23,tmp24);
		HX_STACK_LINE(161)
		::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(161)
		int tmp26 = (baseIndex + (int)17);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(161)
		::cpp::Float32 tmp27 = a;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(161)
		tmp25->data.set(tmp26,tmp27);
		HX_STACK_LINE(163)
		::kha::arrays::Float32Array tmp28 = this->rectVertices;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(163)
		int tmp29 = (baseIndex + (int)23);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(163)
		::cpp::Float32 tmp30 = r;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(163)
		tmp28->data.set(tmp29,tmp30);
		HX_STACK_LINE(164)
		::kha::arrays::Float32Array tmp31 = this->rectVertices;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(164)
		int tmp32 = (baseIndex + (int)24);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(164)
		::cpp::Float32 tmp33 = g;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(164)
		tmp31->data.set(tmp32,tmp33);
		HX_STACK_LINE(165)
		::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(165)
		int tmp35 = (baseIndex + (int)25);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(165)
		::cpp::Float32 tmp36 = b;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(165)
		tmp34->data.set(tmp35,tmp36);
		HX_STACK_LINE(166)
		::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(166)
		int tmp38 = (baseIndex + (int)26);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(166)
		::cpp::Float32 tmp39 = a;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(166)
		tmp37->data.set(tmp38,tmp39);
		HX_STACK_LINE(168)
		::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(168)
		int tmp41 = (baseIndex + (int)32);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(168)
		::cpp::Float32 tmp42 = r;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(168)
		tmp40->data.set(tmp41,tmp42);
		HX_STACK_LINE(169)
		::kha::arrays::Float32Array tmp43 = this->rectVertices;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(169)
		int tmp44 = (baseIndex + (int)33);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(169)
		::cpp::Float32 tmp45 = g;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(169)
		tmp43->data.set(tmp44,tmp45);
		HX_STACK_LINE(170)
		::kha::arrays::Float32Array tmp46 = this->rectVertices;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(170)
		int tmp47 = (baseIndex + (int)34);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(170)
		::cpp::Float32 tmp48 = b;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(170)
		tmp46->data.set(tmp47,tmp48);
		HX_STACK_LINE(171)
		::kha::arrays::Float32Array tmp49 = this->rectVertices;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(171)
		int tmp50 = (baseIndex + (int)35);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(171)
		::cpp::Float32 tmp51 = a;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(171)
		tmp49->data.set(tmp50,tmp51);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ImageShaderPainter_obj,setRectColor,(void))

Void ImageShaderPainter_obj::drawBuffer( ){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","drawBuffer",0x0d340698,"kha.graphics4.ImageShaderPainter.drawBuffer","kha/graphics4/Graphics2.hx",174,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(175)
		::kha::graphics4::VertexBuffer tmp = this->rectVertexBuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		tmp->unlock();
		HX_STACK_LINE(176)
		::kha::graphics4::Graphics tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		::kha::graphics4::VertexBuffer tmp2 = this->rectVertexBuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		tmp1->setVertexBuffer(tmp2);
		HX_STACK_LINE(177)
		::kha::graphics4::Graphics tmp3 = this->g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		::kha::graphics4::IndexBuffer tmp4 = this->indexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		tmp3->setIndexBuffer(tmp4);
		HX_STACK_LINE(178)
		::kha::graphics4::Graphics tmp5 = this->g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		::kha::graphics4::Program tmp6 = this->get_program();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		::kha::graphics4::Program tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(178)
		if ((tmp7)){
			HX_STACK_LINE(178)
			tmp8 = this->shaderProgram;
		}
		else{
			HX_STACK_LINE(178)
			tmp8 = this->get_program();
		}
		HX_STACK_LINE(178)
		tmp5->setProgram(tmp8);
		HX_STACK_LINE(179)
		::kha::graphics4::Graphics tmp9 = this->g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		::kha::graphics4::TextureUnit tmp10 = this->textureLocation;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		::kha::Image tmp11 = this->lastTexture;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(179)
		tmp9->setTexture(tmp10,tmp11);
		HX_STACK_LINE(180)
		::kha::graphics4::Graphics tmp12 = this->g;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(180)
		::kha::graphics4::TextureUnit tmp13 = this->textureLocation;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(180)
		bool tmp14 = this->bilinear;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(180)
		::kha::graphics4::TextureFilter tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(180)
		if ((tmp14)){
			HX_STACK_LINE(180)
			tmp15 = ::kha::graphics4::TextureFilter_obj::LinearFilter;
		}
		else{
			HX_STACK_LINE(180)
			tmp15 = ::kha::graphics4::TextureFilter_obj::PointFilter;
		}
		HX_STACK_LINE(180)
		bool tmp16 = this->bilinear;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(180)
		::kha::graphics4::TextureFilter tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(180)
		if ((tmp16)){
			HX_STACK_LINE(180)
			tmp17 = ::kha::graphics4::TextureFilter_obj::LinearFilter;
		}
		else{
			HX_STACK_LINE(180)
			tmp17 = ::kha::graphics4::TextureFilter_obj::PointFilter;
		}
		HX_STACK_LINE(180)
		tmp12->setTextureParameters(tmp13,::kha::graphics4::TextureAddressing_obj::Clamp,::kha::graphics4::TextureAddressing_obj::Clamp,tmp15,tmp17,::kha::graphics4::MipMapFilter_obj::NoMipFilter);
		HX_STACK_LINE(181)
		::kha::graphics4::Graphics tmp18 = this->g;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(181)
		::kha::graphics4::ConstantLocation tmp19 = this->projectionLocation;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(181)
		::kha::math::Matrix4 tmp20 = this->projectionMatrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(181)
		tmp18->setMatrix(tmp19,tmp20);
		HX_STACK_LINE(182)
		::kha::graphics4::BlendingOperation tmp21 = this->sourceBlend;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(182)
		bool tmp22 = (tmp21 == ::kha::graphics4::BlendingOperation_obj::Undefined);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(182)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(182)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(182)
		if ((tmp23)){
			HX_STACK_LINE(182)
			::kha::graphics4::BlendingOperation tmp25 = this->destinationBlend;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(182)
			::kha::graphics4::BlendingOperation tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(182)
			tmp24 = (tmp26 == ::kha::graphics4::BlendingOperation_obj::Undefined);
		}
		else{
			HX_STACK_LINE(182)
			tmp24 = true;
		}
		HX_STACK_LINE(182)
		if ((tmp24)){
			HX_STACK_LINE(183)
			::kha::graphics4::Graphics tmp25 = this->g;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(183)
			tmp25->setBlendingMode(::kha::graphics4::BlendingOperation_obj::BlendOne,::kha::graphics4::BlendingOperation_obj::InverseSourceAlpha);
		}
		else{
			HX_STACK_LINE(186)
			::kha::graphics4::Graphics tmp25 = this->g;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(186)
			::kha::graphics4::BlendingOperation tmp26 = this->sourceBlend;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(186)
			::kha::graphics4::BlendingOperation tmp27 = this->destinationBlend;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(186)
			tmp25->setBlendingMode(tmp26,tmp27);
		}
		HX_STACK_LINE(189)
		::kha::graphics4::Graphics tmp25 = this->g;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(189)
		int tmp26 = this->bufferIndex;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(189)
		int tmp27 = (tmp26 * (int)2);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(189)
		int tmp28 = (tmp27 * (int)3);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(189)
		tmp25->drawIndexedVertices((int)0,tmp28);
		HX_STACK_LINE(191)
		::kha::graphics4::Graphics tmp29 = this->g;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(191)
		::kha::graphics4::TextureUnit tmp30 = this->textureLocation;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(191)
		tmp29->setTexture(tmp30,null());
		HX_STACK_LINE(192)
		this->bufferIndex = (int)0;
		HX_STACK_LINE(193)
		::kha::graphics4::VertexBuffer tmp31 = this->rectVertexBuffer;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(193)
		::kha::arrays::Float32Array tmp32 = tmp31->lock(null(),null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(193)
		this->rectVertices = tmp32;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageShaderPainter_obj,drawBuffer,(void))

Void ImageShaderPainter_obj::setBilinearFilter( bool bilinear){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","setBilinearFilter",0x7d147312,"kha.graphics4.ImageShaderPainter.setBilinearFilter","kha/graphics4/Graphics2.hx",196,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bilinear,"bilinear")
		HX_STACK_LINE(197)
		this->end();
		HX_STACK_LINE(198)
		this->bilinear = bilinear;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageShaderPainter_obj,setBilinearFilter,(void))

Void ImageShaderPainter_obj::drawImage( ::kha::Image img,::cpp::Float32 bottomleftx,::cpp::Float32 bottomlefty,::cpp::Float32 topleftx,::cpp::Float32 toplefty,::cpp::Float32 toprightx,::cpp::Float32 toprighty,::cpp::Float32 bottomrightx,::cpp::Float32 bottomrighty,::cpp::Float32 opacity,int color){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","drawImage",0xba3d10c3,"kha.graphics4.ImageShaderPainter.drawImage","kha/graphics4/Graphics2.hx",206,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(bottomleftx,"bottomleftx")
		HX_STACK_ARG(bottomlefty,"bottomlefty")
		HX_STACK_ARG(topleftx,"topleftx")
		HX_STACK_ARG(toplefty,"toplefty")
		HX_STACK_ARG(toprightx,"toprightx")
		HX_STACK_ARG(toprighty,"toprighty")
		HX_STACK_ARG(bottomrightx,"bottomrightx")
		HX_STACK_ARG(bottomrighty,"bottomrighty")
		HX_STACK_ARG(opacity,"opacity")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(207)
		::kha::Image tex = img;		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(208)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		int tmp2 = ::kha::graphics4::ImageShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		if ((tmp4)){
			HX_STACK_LINE(208)
			::kha::Image tmp6 = this->lastTexture;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			::kha::Image tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(208)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(208)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(208)
			if ((tmp10)){
				HX_STACK_LINE(208)
				::kha::Image tmp11 = tex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(208)
				::kha::Image tmp12 = this->lastTexture;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(208)
				::kha::Image tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(208)
				::kha::Image tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(208)
				tmp5 = (tmp11 != tmp14);
			}
			else{
				HX_STACK_LINE(208)
				tmp5 = false;
			}
		}
		else{
			HX_STACK_LINE(208)
			tmp5 = true;
		}
		HX_STACK_LINE(208)
		if ((tmp5)){
			HX_STACK_LINE(208)
			this->drawBuffer();
		}
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(210)
			int tmp7 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp8 = (tmp7 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(210)
			::cpp::Float32 r = tmp8;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(210)
			int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(210)
			int tmp10 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp11 = (tmp10 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(210)
			::cpp::Float32 g = tmp11;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(210)
			int tmp12 = color;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(210)
			int tmp13 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp14 = (tmp13 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(210)
			::cpp::Float32 b = tmp14;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(210)
			int tmp15 = this->bufferIndex;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(210)
			int tmp16 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(210)
			int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(210)
			int tmp18 = (tmp17 * (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(210)
			int baseIndex = tmp18;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp19 = this->rectVertices;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(210)
			int tmp20 = (baseIndex + (int)5);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp21 = r;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(210)
			tmp19->data.set(tmp20,tmp21);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(210)
			int tmp23 = (baseIndex + (int)6);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp24 = g;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(210)
			tmp22->data.set(tmp23,tmp24);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(210)
			int tmp26 = (baseIndex + (int)7);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp27 = b;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(210)
			tmp25->data.set(tmp26,tmp27);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp28 = this->rectVertices;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(210)
			int tmp29 = (baseIndex + (int)8);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp30 = opacity;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(210)
			tmp28->data.set(tmp29,tmp30);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp31 = this->rectVertices;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(210)
			int tmp32 = (baseIndex + (int)14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp33 = r;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(210)
			tmp31->data.set(tmp32,tmp33);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(210)
			int tmp35 = (baseIndex + (int)15);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp36 = g;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(210)
			tmp34->data.set(tmp35,tmp36);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(210)
			int tmp38 = (baseIndex + (int)16);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp39 = b;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(210)
			tmp37->data.set(tmp38,tmp39);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(210)
			int tmp41 = (baseIndex + (int)17);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp42 = opacity;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(210)
			tmp40->data.set(tmp41,tmp42);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp43 = this->rectVertices;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(210)
			int tmp44 = (baseIndex + (int)23);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp45 = r;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(210)
			tmp43->data.set(tmp44,tmp45);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp46 = this->rectVertices;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(210)
			int tmp47 = (baseIndex + (int)24);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp48 = g;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(210)
			tmp46->data.set(tmp47,tmp48);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp49 = this->rectVertices;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(210)
			int tmp50 = (baseIndex + (int)25);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(210)
			tmp49->data.set(tmp50,tmp51);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp52 = this->rectVertices;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(210)
			int tmp53 = (baseIndex + (int)26);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp54 = opacity;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(210)
			tmp52->data.set(tmp53,tmp54);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp55 = this->rectVertices;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(210)
			int tmp56 = (baseIndex + (int)32);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp57 = r;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(210)
			tmp55->data.set(tmp56,tmp57);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp58 = this->rectVertices;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(210)
			int tmp59 = (baseIndex + (int)33);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp60 = g;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(210)
			tmp58->data.set(tmp59,tmp60);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp61 = this->rectVertices;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(210)
			int tmp62 = (baseIndex + (int)34);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp63 = b;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(210)
			tmp61->data.set(tmp62,tmp63);
			HX_STACK_LINE(210)
			::kha::arrays::Float32Array tmp64 = this->rectVertices;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(210)
			int tmp65 = (baseIndex + (int)35);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(210)
			::cpp::Float32 tmp66 = opacity;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(210)
			tmp64->data.set(tmp65,tmp66);
		}
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			int tmp6 = tex->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			int tmp7 = tex->get_realWidth();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(211)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(211)
			::cpp::Float32 right = tmp8;		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(211)
			int tmp9 = tex->get_height();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(211)
			int tmp10 = tex->get_realHeight();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(211)
			Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(211)
			::cpp::Float32 bottom = tmp11;		HX_STACK_VAR(bottom,"bottom");
			HX_STACK_LINE(211)
			int tmp12 = this->bufferIndex;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(211)
			int tmp13 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(211)
			int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(211)
			int tmp15 = (tmp14 * (int)4);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(211)
			int baseIndex = tmp15;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(211)
			::kha::arrays::Float32Array tmp16 = this->rectVertices;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			int tmp17 = (baseIndex + (int)3);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(211)
			tmp16->data.set(tmp17,(int)0);
			HX_STACK_LINE(211)
			::kha::arrays::Float32Array tmp18 = this->rectVertices;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(211)
			int tmp19 = (baseIndex + (int)4);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(211)
			::cpp::Float32 tmp20 = bottom;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(211)
			tmp18->data.set(tmp19,tmp20);
			HX_STACK_LINE(211)
			::kha::arrays::Float32Array tmp21 = this->rectVertices;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(211)
			int tmp22 = (baseIndex + (int)12);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(211)
			tmp21->data.set(tmp22,(int)0);
			HX_STACK_LINE(211)
			::kha::arrays::Float32Array tmp23 = this->rectVertices;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(211)
			int tmp24 = (baseIndex + (int)13);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(211)
			tmp23->data.set(tmp24,(int)0);
			HX_STACK_LINE(211)
			::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(211)
			int tmp26 = (baseIndex + (int)21);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(211)
			::cpp::Float32 tmp27 = right;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(211)
			tmp25->data.set(tmp26,tmp27);
			HX_STACK_LINE(211)
			::kha::arrays::Float32Array tmp28 = this->rectVertices;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(211)
			int tmp29 = (baseIndex + (int)22);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(211)
			tmp28->data.set(tmp29,(int)0);
			HX_STACK_LINE(211)
			::kha::arrays::Float32Array tmp30 = this->rectVertices;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(211)
			int tmp31 = (baseIndex + (int)30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(211)
			::cpp::Float32 tmp32 = right;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(211)
			tmp30->data.set(tmp31,tmp32);
			HX_STACK_LINE(211)
			::kha::arrays::Float32Array tmp33 = this->rectVertices;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(211)
			int tmp34 = (baseIndex + (int)31);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(211)
			::cpp::Float32 tmp35 = bottom;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(211)
			tmp33->data.set(tmp34,tmp35);
		}
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			int tmp6 = this->bufferIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			int tmp7 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(212)
			int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(212)
			int baseIndex = tmp9;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp10 = this->rectVertices;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(212)
			int tmp11 = baseIndex;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(212)
			::cpp::Float32 tmp12 = bottomleftx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(212)
			tmp10->data.set(tmp11,tmp12);
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp13 = this->rectVertices;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(212)
			int tmp14 = (baseIndex + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(212)
			::cpp::Float32 tmp15 = bottomlefty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(212)
			tmp13->data.set(tmp14,tmp15);
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp16 = this->rectVertices;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(212)
			int tmp17 = (baseIndex + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(212)
			tmp16->data.set(tmp17,((Float)-5.0));
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp18 = this->rectVertices;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(212)
			int tmp19 = (baseIndex + (int)9);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(212)
			::cpp::Float32 tmp20 = topleftx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(212)
			tmp18->data.set(tmp19,tmp20);
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp21 = this->rectVertices;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(212)
			int tmp22 = (baseIndex + (int)10);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(212)
			::cpp::Float32 tmp23 = toplefty;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(212)
			tmp21->data.set(tmp22,tmp23);
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp24 = this->rectVertices;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(212)
			int tmp25 = (baseIndex + (int)11);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(212)
			tmp24->data.set(tmp25,((Float)-5.0));
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp26 = this->rectVertices;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(212)
			int tmp27 = (baseIndex + (int)18);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(212)
			::cpp::Float32 tmp28 = toprightx;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(212)
			tmp26->data.set(tmp27,tmp28);
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp29 = this->rectVertices;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(212)
			int tmp30 = (baseIndex + (int)19);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(212)
			::cpp::Float32 tmp31 = toprighty;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(212)
			tmp29->data.set(tmp30,tmp31);
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp32 = this->rectVertices;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(212)
			int tmp33 = (baseIndex + (int)20);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(212)
			tmp32->data.set(tmp33,((Float)-5.0));
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(212)
			int tmp35 = (baseIndex + (int)27);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(212)
			::cpp::Float32 tmp36 = bottomrightx;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(212)
			tmp34->data.set(tmp35,tmp36);
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(212)
			int tmp38 = (baseIndex + (int)28);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(212)
			::cpp::Float32 tmp39 = bottomrighty;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(212)
			tmp37->data.set(tmp38,tmp39);
			HX_STACK_LINE(212)
			::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(212)
			int tmp41 = (baseIndex + (int)29);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(212)
			tmp40->data.set(tmp41,((Float)-5.0));
		}
		HX_STACK_LINE(214)
		++(this->bufferIndex);
		HX_STACK_LINE(215)
		this->lastTexture = tex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(ImageShaderPainter_obj,drawImage,(void))

Void ImageShaderPainter_obj::drawImage2( ::kha::Image img,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh,::cpp::Float32 bottomleftx,::cpp::Float32 bottomlefty,::cpp::Float32 topleftx,::cpp::Float32 toplefty,::cpp::Float32 toprightx,::cpp::Float32 toprighty,::cpp::Float32 bottomrightx,::cpp::Float32 bottomrighty,::cpp::Float32 opacity,int color){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","drawImage2",0x3b319a0f,"kha.graphics4.ImageShaderPainter.drawImage2","kha/graphics4/Graphics2.hx",223,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_ARG(bottomleftx,"bottomleftx")
		HX_STACK_ARG(bottomlefty,"bottomlefty")
		HX_STACK_ARG(topleftx,"topleftx")
		HX_STACK_ARG(toplefty,"toplefty")
		HX_STACK_ARG(toprightx,"toprightx")
		HX_STACK_ARG(toprighty,"toprighty")
		HX_STACK_ARG(bottomrightx,"bottomrightx")
		HX_STACK_ARG(bottomrighty,"bottomrighty")
		HX_STACK_ARG(opacity,"opacity")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(224)
		::kha::Image tex = img;		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(225)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		int tmp2 = ::kha::graphics4::ImageShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		if ((tmp4)){
			HX_STACK_LINE(225)
			::kha::Image tmp6 = this->lastTexture;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			::kha::Image tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(225)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(225)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(225)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(225)
			if ((tmp10)){
				HX_STACK_LINE(225)
				::kha::Image tmp11 = tex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(225)
				::kha::Image tmp12 = this->lastTexture;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				::kha::Image tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(225)
				::kha::Image tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(225)
				tmp5 = (tmp11 != tmp14);
			}
			else{
				HX_STACK_LINE(225)
				tmp5 = false;
			}
		}
		else{
			HX_STACK_LINE(225)
			tmp5 = true;
		}
		HX_STACK_LINE(225)
		if ((tmp5)){
			HX_STACK_LINE(225)
			this->drawBuffer();
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			::cpp::Float32 tmp6 = sx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			int tmp7 = tex->get_realWidth();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			::cpp::Float32 left = tmp8;		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp9 = sy;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			int tmp10 = tex->get_realHeight();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(227)
			::cpp::Float32 top = tmp11;		HX_STACK_VAR(top,"top");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp12 = (sx + sw);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			int tmp13 = tex->get_realWidth();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(227)
			::cpp::Float32 right = tmp14;		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp15 = (sy + sh);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(227)
			int tmp16 = tex->get_realHeight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(227)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(227)
			::cpp::Float32 bottom = tmp17;		HX_STACK_VAR(bottom,"bottom");
			HX_STACK_LINE(227)
			int tmp18 = this->bufferIndex;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(227)
			int tmp19 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(227)
			int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(227)
			int tmp21 = (tmp20 * (int)4);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(227)
			int baseIndex = tmp21;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(227)
			::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(227)
			int tmp23 = (baseIndex + (int)3);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp24 = left;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(227)
			tmp22->data.set(tmp23,tmp24);
			HX_STACK_LINE(227)
			::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(227)
			int tmp26 = (baseIndex + (int)4);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp27 = bottom;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(227)
			tmp25->data.set(tmp26,tmp27);
			HX_STACK_LINE(227)
			::kha::arrays::Float32Array tmp28 = this->rectVertices;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(227)
			int tmp29 = (baseIndex + (int)12);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp30 = left;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(227)
			tmp28->data.set(tmp29,tmp30);
			HX_STACK_LINE(227)
			::kha::arrays::Float32Array tmp31 = this->rectVertices;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(227)
			int tmp32 = (baseIndex + (int)13);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp33 = top;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(227)
			tmp31->data.set(tmp32,tmp33);
			HX_STACK_LINE(227)
			::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(227)
			int tmp35 = (baseIndex + (int)21);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp36 = right;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(227)
			tmp34->data.set(tmp35,tmp36);
			HX_STACK_LINE(227)
			::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(227)
			int tmp38 = (baseIndex + (int)22);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp39 = top;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(227)
			tmp37->data.set(tmp38,tmp39);
			HX_STACK_LINE(227)
			::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(227)
			int tmp41 = (baseIndex + (int)30);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp42 = right;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(227)
			tmp40->data.set(tmp41,tmp42);
			HX_STACK_LINE(227)
			::kha::arrays::Float32Array tmp43 = this->rectVertices;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(227)
			int tmp44 = (baseIndex + (int)31);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(227)
			::cpp::Float32 tmp45 = bottom;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(227)
			tmp43->data.set(tmp44,tmp45);
		}
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(228)
			int tmp7 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp8 = (tmp7 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(228)
			::cpp::Float32 r = tmp8;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(228)
			int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(228)
			int tmp10 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp11 = (tmp10 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(228)
			::cpp::Float32 g = tmp11;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(228)
			int tmp12 = color;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(228)
			int tmp13 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp14 = (tmp13 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(228)
			::cpp::Float32 b = tmp14;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(228)
			int tmp15 = this->bufferIndex;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(228)
			int tmp16 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(228)
			int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(228)
			int tmp18 = (tmp17 * (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(228)
			int baseIndex = tmp18;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp19 = this->rectVertices;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(228)
			int tmp20 = (baseIndex + (int)5);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp21 = r;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(228)
			tmp19->data.set(tmp20,tmp21);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(228)
			int tmp23 = (baseIndex + (int)6);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp24 = g;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(228)
			tmp22->data.set(tmp23,tmp24);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(228)
			int tmp26 = (baseIndex + (int)7);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp27 = b;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(228)
			tmp25->data.set(tmp26,tmp27);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp28 = this->rectVertices;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(228)
			int tmp29 = (baseIndex + (int)8);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp30 = opacity;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(228)
			tmp28->data.set(tmp29,tmp30);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp31 = this->rectVertices;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(228)
			int tmp32 = (baseIndex + (int)14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp33 = r;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(228)
			tmp31->data.set(tmp32,tmp33);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(228)
			int tmp35 = (baseIndex + (int)15);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp36 = g;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(228)
			tmp34->data.set(tmp35,tmp36);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(228)
			int tmp38 = (baseIndex + (int)16);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp39 = b;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(228)
			tmp37->data.set(tmp38,tmp39);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(228)
			int tmp41 = (baseIndex + (int)17);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp42 = opacity;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(228)
			tmp40->data.set(tmp41,tmp42);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp43 = this->rectVertices;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(228)
			int tmp44 = (baseIndex + (int)23);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp45 = r;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(228)
			tmp43->data.set(tmp44,tmp45);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp46 = this->rectVertices;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(228)
			int tmp47 = (baseIndex + (int)24);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp48 = g;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(228)
			tmp46->data.set(tmp47,tmp48);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp49 = this->rectVertices;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(228)
			int tmp50 = (baseIndex + (int)25);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(228)
			tmp49->data.set(tmp50,tmp51);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp52 = this->rectVertices;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(228)
			int tmp53 = (baseIndex + (int)26);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp54 = opacity;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(228)
			tmp52->data.set(tmp53,tmp54);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp55 = this->rectVertices;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(228)
			int tmp56 = (baseIndex + (int)32);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp57 = r;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(228)
			tmp55->data.set(tmp56,tmp57);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp58 = this->rectVertices;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(228)
			int tmp59 = (baseIndex + (int)33);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp60 = g;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(228)
			tmp58->data.set(tmp59,tmp60);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp61 = this->rectVertices;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(228)
			int tmp62 = (baseIndex + (int)34);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp63 = b;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(228)
			tmp61->data.set(tmp62,tmp63);
			HX_STACK_LINE(228)
			::kha::arrays::Float32Array tmp64 = this->rectVertices;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(228)
			int tmp65 = (baseIndex + (int)35);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(228)
			::cpp::Float32 tmp66 = opacity;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(228)
			tmp64->data.set(tmp65,tmp66);
		}
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			int tmp6 = this->bufferIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			int tmp7 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(229)
			int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(229)
			int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(229)
			int baseIndex = tmp9;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp10 = this->rectVertices;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			int tmp11 = baseIndex;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(229)
			::cpp::Float32 tmp12 = bottomleftx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(229)
			tmp10->data.set(tmp11,tmp12);
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp13 = this->rectVertices;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(229)
			int tmp14 = (baseIndex + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(229)
			::cpp::Float32 tmp15 = bottomlefty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(229)
			tmp13->data.set(tmp14,tmp15);
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp16 = this->rectVertices;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(229)
			int tmp17 = (baseIndex + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(229)
			tmp16->data.set(tmp17,((Float)-5.0));
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp18 = this->rectVertices;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(229)
			int tmp19 = (baseIndex + (int)9);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(229)
			::cpp::Float32 tmp20 = topleftx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(229)
			tmp18->data.set(tmp19,tmp20);
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp21 = this->rectVertices;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(229)
			int tmp22 = (baseIndex + (int)10);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(229)
			::cpp::Float32 tmp23 = toplefty;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(229)
			tmp21->data.set(tmp22,tmp23);
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp24 = this->rectVertices;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(229)
			int tmp25 = (baseIndex + (int)11);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(229)
			tmp24->data.set(tmp25,((Float)-5.0));
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp26 = this->rectVertices;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(229)
			int tmp27 = (baseIndex + (int)18);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(229)
			::cpp::Float32 tmp28 = toprightx;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(229)
			tmp26->data.set(tmp27,tmp28);
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp29 = this->rectVertices;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(229)
			int tmp30 = (baseIndex + (int)19);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(229)
			::cpp::Float32 tmp31 = toprighty;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(229)
			tmp29->data.set(tmp30,tmp31);
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp32 = this->rectVertices;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(229)
			int tmp33 = (baseIndex + (int)20);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(229)
			tmp32->data.set(tmp33,((Float)-5.0));
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(229)
			int tmp35 = (baseIndex + (int)27);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(229)
			::cpp::Float32 tmp36 = bottomrightx;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(229)
			tmp34->data.set(tmp35,tmp36);
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(229)
			int tmp38 = (baseIndex + (int)28);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(229)
			::cpp::Float32 tmp39 = bottomrighty;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(229)
			tmp37->data.set(tmp38,tmp39);
			HX_STACK_LINE(229)
			::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(229)
			int tmp41 = (baseIndex + (int)29);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(229)
			tmp40->data.set(tmp41,((Float)-5.0));
		}
		HX_STACK_LINE(231)
		++(this->bufferIndex);
		HX_STACK_LINE(232)
		this->lastTexture = tex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC15(ImageShaderPainter_obj,drawImage2,(void))

Void ImageShaderPainter_obj::drawImageScale( ::kha::Image img,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh,::cpp::Float32 left,::cpp::Float32 top,::cpp::Float32 right,::cpp::Float32 bottom,::cpp::Float32 opacity,int color){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","drawImageScale",0xc1fc8ac7,"kha.graphics4.ImageShaderPainter.drawImageScale","kha/graphics4/Graphics2.hx",235,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_ARG(left,"left")
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(right,"right")
		HX_STACK_ARG(bottom,"bottom")
		HX_STACK_ARG(opacity,"opacity")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(236)
		::kha::Image tex = img;		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(237)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		int tmp2 = ::kha::graphics4::ImageShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(237)
		if ((tmp4)){
			HX_STACK_LINE(237)
			::kha::Image tmp6 = this->lastTexture;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			::kha::Image tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(237)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(237)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(237)
			if ((tmp10)){
				HX_STACK_LINE(237)
				::kha::Image tmp11 = tex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(237)
				::kha::Image tmp12 = this->lastTexture;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(237)
				::kha::Image tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(237)
				::kha::Image tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(237)
				tmp5 = (tmp11 != tmp14);
			}
			else{
				HX_STACK_LINE(237)
				tmp5 = false;
			}
		}
		else{
			HX_STACK_LINE(237)
			tmp5 = true;
		}
		HX_STACK_LINE(237)
		if ((tmp5)){
			HX_STACK_LINE(237)
			this->drawBuffer();
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			::cpp::Float32 tmp6 = sx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			int tmp7 = tex->get_realWidth();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(239)
			::cpp::Float32 left1 = tmp8;		HX_STACK_VAR(left1,"left1");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp9 = sy;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(239)
			int tmp10 = tex->get_realHeight();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(239)
			Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(239)
			::cpp::Float32 top1 = tmp11;		HX_STACK_VAR(top1,"top1");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp12 = (sx + sw);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(239)
			int tmp13 = tex->get_realWidth();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(239)
			Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(239)
			::cpp::Float32 right1 = tmp14;		HX_STACK_VAR(right1,"right1");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp15 = (sy + sh);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(239)
			int tmp16 = tex->get_realHeight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(239)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(239)
			::cpp::Float32 bottom1 = tmp17;		HX_STACK_VAR(bottom1,"bottom1");
			HX_STACK_LINE(239)
			int tmp18 = this->bufferIndex;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(239)
			int tmp19 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(239)
			int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(239)
			int tmp21 = (tmp20 * (int)4);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(239)
			int baseIndex = tmp21;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(239)
			::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(239)
			int tmp23 = (baseIndex + (int)3);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp24 = left1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(239)
			tmp22->data.set(tmp23,tmp24);
			HX_STACK_LINE(239)
			::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(239)
			int tmp26 = (baseIndex + (int)4);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp27 = bottom1;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(239)
			tmp25->data.set(tmp26,tmp27);
			HX_STACK_LINE(239)
			::kha::arrays::Float32Array tmp28 = this->rectVertices;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(239)
			int tmp29 = (baseIndex + (int)12);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp30 = left1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(239)
			tmp28->data.set(tmp29,tmp30);
			HX_STACK_LINE(239)
			::kha::arrays::Float32Array tmp31 = this->rectVertices;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(239)
			int tmp32 = (baseIndex + (int)13);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp33 = top1;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(239)
			tmp31->data.set(tmp32,tmp33);
			HX_STACK_LINE(239)
			::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(239)
			int tmp35 = (baseIndex + (int)21);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp36 = right1;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(239)
			tmp34->data.set(tmp35,tmp36);
			HX_STACK_LINE(239)
			::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(239)
			int tmp38 = (baseIndex + (int)22);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp39 = top1;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(239)
			tmp37->data.set(tmp38,tmp39);
			HX_STACK_LINE(239)
			::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(239)
			int tmp41 = (baseIndex + (int)30);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp42 = right1;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(239)
			tmp40->data.set(tmp41,tmp42);
			HX_STACK_LINE(239)
			::kha::arrays::Float32Array tmp43 = this->rectVertices;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(239)
			int tmp44 = (baseIndex + (int)31);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(239)
			::cpp::Float32 tmp45 = bottom1;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(239)
			tmp43->data.set(tmp44,tmp45);
		}
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			int tmp7 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp8 = (tmp7 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(240)
			::cpp::Float32 r = tmp8;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(240)
			int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(240)
			int tmp10 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp11 = (tmp10 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(240)
			::cpp::Float32 g = tmp11;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(240)
			int tmp12 = color;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(240)
			int tmp13 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp14 = (tmp13 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(240)
			::cpp::Float32 b = tmp14;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(240)
			int tmp15 = this->bufferIndex;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(240)
			int tmp16 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(240)
			int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(240)
			int tmp18 = (tmp17 * (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(240)
			int baseIndex = tmp18;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp19 = this->rectVertices;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(240)
			int tmp20 = (baseIndex + (int)5);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp21 = r;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(240)
			tmp19->data.set(tmp20,tmp21);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(240)
			int tmp23 = (baseIndex + (int)6);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp24 = g;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(240)
			tmp22->data.set(tmp23,tmp24);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(240)
			int tmp26 = (baseIndex + (int)7);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp27 = b;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(240)
			tmp25->data.set(tmp26,tmp27);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp28 = this->rectVertices;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(240)
			int tmp29 = (baseIndex + (int)8);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp30 = opacity;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(240)
			tmp28->data.set(tmp29,tmp30);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp31 = this->rectVertices;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(240)
			int tmp32 = (baseIndex + (int)14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp33 = r;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(240)
			tmp31->data.set(tmp32,tmp33);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(240)
			int tmp35 = (baseIndex + (int)15);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp36 = g;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(240)
			tmp34->data.set(tmp35,tmp36);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(240)
			int tmp38 = (baseIndex + (int)16);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp39 = b;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(240)
			tmp37->data.set(tmp38,tmp39);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(240)
			int tmp41 = (baseIndex + (int)17);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp42 = opacity;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(240)
			tmp40->data.set(tmp41,tmp42);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp43 = this->rectVertices;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(240)
			int tmp44 = (baseIndex + (int)23);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp45 = r;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(240)
			tmp43->data.set(tmp44,tmp45);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp46 = this->rectVertices;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(240)
			int tmp47 = (baseIndex + (int)24);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp48 = g;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(240)
			tmp46->data.set(tmp47,tmp48);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp49 = this->rectVertices;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(240)
			int tmp50 = (baseIndex + (int)25);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(240)
			tmp49->data.set(tmp50,tmp51);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp52 = this->rectVertices;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(240)
			int tmp53 = (baseIndex + (int)26);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp54 = opacity;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(240)
			tmp52->data.set(tmp53,tmp54);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp55 = this->rectVertices;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(240)
			int tmp56 = (baseIndex + (int)32);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp57 = r;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(240)
			tmp55->data.set(tmp56,tmp57);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp58 = this->rectVertices;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(240)
			int tmp59 = (baseIndex + (int)33);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp60 = g;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(240)
			tmp58->data.set(tmp59,tmp60);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp61 = this->rectVertices;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(240)
			int tmp62 = (baseIndex + (int)34);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp63 = b;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(240)
			tmp61->data.set(tmp62,tmp63);
			HX_STACK_LINE(240)
			::kha::arrays::Float32Array tmp64 = this->rectVertices;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(240)
			int tmp65 = (baseIndex + (int)35);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(240)
			::cpp::Float32 tmp66 = opacity;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(240)
			tmp64->data.set(tmp65,tmp66);
		}
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int tmp6 = this->bufferIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(241)
			int tmp7 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(241)
			int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(241)
			int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(241)
			int baseIndex = tmp9;		HX_STACK_VAR(baseIndex,"baseIndex");
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp10 = this->rectVertices;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(241)
			int tmp11 = baseIndex;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(241)
			::cpp::Float32 tmp12 = left;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(241)
			tmp10->data.set(tmp11,tmp12);
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp13 = this->rectVertices;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(241)
			int tmp14 = (baseIndex + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(241)
			::cpp::Float32 tmp15 = bottom;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(241)
			tmp13->data.set(tmp14,tmp15);
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp16 = this->rectVertices;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(241)
			int tmp17 = (baseIndex + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(241)
			tmp16->data.set(tmp17,((Float)-5.0));
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp18 = this->rectVertices;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(241)
			int tmp19 = (baseIndex + (int)9);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(241)
			::cpp::Float32 tmp20 = left;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(241)
			tmp18->data.set(tmp19,tmp20);
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp21 = this->rectVertices;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(241)
			int tmp22 = (baseIndex + (int)10);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(241)
			::cpp::Float32 tmp23 = top;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(241)
			tmp21->data.set(tmp22,tmp23);
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp24 = this->rectVertices;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(241)
			int tmp25 = (baseIndex + (int)11);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(241)
			tmp24->data.set(tmp25,((Float)-5.0));
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp26 = this->rectVertices;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(241)
			int tmp27 = (baseIndex + (int)18);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(241)
			::cpp::Float32 tmp28 = right;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(241)
			tmp26->data.set(tmp27,tmp28);
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp29 = this->rectVertices;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(241)
			int tmp30 = (baseIndex + (int)19);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(241)
			::cpp::Float32 tmp31 = top;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(241)
			tmp29->data.set(tmp30,tmp31);
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp32 = this->rectVertices;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(241)
			int tmp33 = (baseIndex + (int)20);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(241)
			tmp32->data.set(tmp33,((Float)-5.0));
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp34 = this->rectVertices;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(241)
			int tmp35 = (baseIndex + (int)27);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(241)
			::cpp::Float32 tmp36 = right;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(241)
			tmp34->data.set(tmp35,tmp36);
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp37 = this->rectVertices;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(241)
			int tmp38 = (baseIndex + (int)28);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(241)
			::cpp::Float32 tmp39 = bottom;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(241)
			tmp37->data.set(tmp38,tmp39);
			HX_STACK_LINE(241)
			::kha::arrays::Float32Array tmp40 = this->rectVertices;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(241)
			int tmp41 = (baseIndex + (int)29);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(241)
			tmp40->data.set(tmp41,((Float)-5.0));
		}
		HX_STACK_LINE(243)
		++(this->bufferIndex);
		HX_STACK_LINE(244)
		this->lastTexture = tex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(ImageShaderPainter_obj,drawImageScale,(void))

Void ImageShaderPainter_obj::end( ){
{
		HX_STACK_FRAME("kha.graphics4.ImageShaderPainter","end",0xa311eee7,"kha.graphics4.ImageShaderPainter.end","kha/graphics4/Graphics2.hx",247,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(248)
			this->drawBuffer();
		}
		HX_STACK_LINE(249)
		this->lastTexture = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageShaderPainter_obj,end,(void))

int ImageShaderPainter_obj::bufferSize;

int ImageShaderPainter_obj::vertexSize;


ImageShaderPainter_obj::ImageShaderPainter_obj()
{
}

void ImageShaderPainter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageShaderPainter);
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(shaderProgram,"shaderProgram");
	HX_MARK_MEMBER_NAME(structure,"structure");
	HX_MARK_MEMBER_NAME(projectionLocation,"projectionLocation");
	HX_MARK_MEMBER_NAME(textureLocation,"textureLocation");
	HX_MARK_MEMBER_NAME(bufferIndex,"bufferIndex");
	HX_MARK_MEMBER_NAME(rectVertexBuffer,"rectVertexBuffer");
	HX_MARK_MEMBER_NAME(rectVertices,"rectVertices");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(lastTexture,"lastTexture");
	HX_MARK_MEMBER_NAME(bilinear,"bilinear");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(myProgram,"myProgram");
	HX_MARK_MEMBER_NAME(sourceBlend,"sourceBlend");
	HX_MARK_MEMBER_NAME(destinationBlend,"destinationBlend");
	HX_MARK_END_CLASS();
}

void ImageShaderPainter_obj::__Visit(HX_VISIT_PARAMS)
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
	HX_VISIT_MEMBER_NAME(lastTexture,"lastTexture");
	HX_VISIT_MEMBER_NAME(bilinear,"bilinear");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(myProgram,"myProgram");
	HX_VISIT_MEMBER_NAME(sourceBlend,"sourceBlend");
	HX_VISIT_MEMBER_NAME(destinationBlend,"destinationBlend");
}

Dynamic ImageShaderPainter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bilinear") ) { return bilinear; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"structure") ) { return structure; }
		if (HX_FIELD_EQ(inName,"myProgram") ) { return myProgram; }
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBuffer") ) { return drawBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"drawImage2") ) { return drawImage2_dyn(); }
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
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectVertices") ) { return rectVertices; }
		if (HX_FIELD_EQ(inName,"setRectColor") ) { return setRectColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderProgram") ) { return shaderProgram; }
		if (HX_FIELD_EQ(inName,"setProjection") ) { return setProjection_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawImageScale") ) { return drawImageScale_dyn(); }
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
	case 17:
		if (HX_FIELD_EQ(inName,"setBilinearFilter") ) { return setBilinearFilter_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionLocation") ) { return projectionLocation; }
	}
	return super::__Field(inName,inCallProp);
}

bool ImageShaderPainter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferSize") ) { outValue = bufferSize; return true;  }
		if (HX_FIELD_EQ(inName,"vertexSize") ) { outValue = vertexSize; return true;  }
	}
	return false;
}

Dynamic ImageShaderPainter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { if (inCallProp == hx::paccAlways) return set_program(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bilinear") ) { bilinear=inValue.Cast< bool >(); return inValue; }
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

bool ImageShaderPainter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferSize") ) { bufferSize=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"vertexSize") ) { vertexSize=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ImageShaderPainter_obj::__GetFields(Array< ::String> &outFields)
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
	outFields->push(HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53"));
	outFields->push(HX_HCSTRING("bilinear","\xec","\xb6","\x3d","\xe0"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("myProgram","\x78","\x18","\xec","\x9a"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3"));
	outFields->push(HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::math::Matrix4*/ ,(int)offsetof(ImageShaderPainter_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(ImageShaderPainter_obj,shaderProgram),HX_HCSTRING("shaderProgram","\xdf","\x11","\x9a","\x6f")},
	{hx::fsObject /*::kha::graphics4::VertexStructure*/ ,(int)offsetof(ImageShaderPainter_obj,structure),HX_HCSTRING("structure","\x33","\x54","\x4f","\x47")},
	{hx::fsObject /*::kha::graphics4::ConstantLocation*/ ,(int)offsetof(ImageShaderPainter_obj,projectionLocation),HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b")},
	{hx::fsObject /*::kha::graphics4::TextureUnit*/ ,(int)offsetof(ImageShaderPainter_obj,textureLocation),HX_HCSTRING("textureLocation","\x30","\xc6","\x65","\x4c")},
	{hx::fsInt,(int)offsetof(ImageShaderPainter_obj,bufferIndex),HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(ImageShaderPainter_obj,rectVertexBuffer),HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97")},
	{hx::fsObject /*::kha::arrays::Float32Array*/ ,(int)offsetof(ImageShaderPainter_obj,rectVertices),HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(ImageShaderPainter_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageShaderPainter_obj,lastTexture),HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53")},
	{hx::fsBool,(int)offsetof(ImageShaderPainter_obj,bilinear),HX_HCSTRING("bilinear","\xec","\xb6","\x3d","\xe0")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(ImageShaderPainter_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(ImageShaderPainter_obj,myProgram),HX_HCSTRING("myProgram","\x78","\x18","\xec","\x9a")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(ImageShaderPainter_obj,sourceBlend),HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(ImageShaderPainter_obj,destinationBlend),HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ImageShaderPainter_obj::bufferSize,HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d")},
	{hx::fsInt,(void *) &ImageShaderPainter_obj::vertexSize,HX_HCSTRING("vertexSize","\x45","\x2a","\x10","\xdd")},
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
	HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53"),
	HX_HCSTRING("bilinear","\xec","\xb6","\x3d","\xe0"),
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
	HX_HCSTRING("setRectColor","\x9d","\x31","\x74","\xf8"),
	HX_HCSTRING("drawBuffer","\x24","\x38","\x58","\x12"),
	HX_HCSTRING("setBilinearFilter","\x06","\xcb","\xde","\x13"),
	HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"),
	HX_HCSTRING("drawImage2","\x9b","\xcb","\x55","\x40"),
	HX_HCSTRING("drawImageScale","\x53","\x72","\xa6","\x67"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageShaderPainter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ImageShaderPainter_obj::bufferSize,"bufferSize");
	HX_MARK_MEMBER_NAME(ImageShaderPainter_obj::vertexSize,"vertexSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageShaderPainter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageShaderPainter_obj::bufferSize,"bufferSize");
	HX_VISIT_MEMBER_NAME(ImageShaderPainter_obj::vertexSize,"vertexSize");
};

#endif

hx::Class ImageShaderPainter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d"),
	HX_HCSTRING("vertexSize","\x45","\x2a","\x10","\xdd"),
	::String(null()) };

void ImageShaderPainter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.ImageShaderPainter","\x7a","\xd5","\x6b","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageShaderPainter_obj::__GetStatic;
	__mClass->mSetStaticField = &ImageShaderPainter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageShaderPainter_obj >;
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

void ImageShaderPainter_obj::__boot()
{
	bufferSize= (int)1500;
	vertexSize= (int)9;
}

} // end namespace kha
} // end namespace graphics4
