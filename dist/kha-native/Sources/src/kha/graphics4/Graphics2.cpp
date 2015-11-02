#include <hxcpp.h>

#include "Kore/Simd/float32x4.h"
#include "float32array.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
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
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32Array
#include <kha/arrays/Float32Array.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <kha/graphics4/BlendingOperation.h>
#endif
#ifndef INCLUDED_kha_graphics4_ColoredShaderPainter
#include <kha/graphics4/ColoredShaderPainter.h>
#endif
#ifndef INCLUDED_kha_graphics4_CullMode
#include <kha/graphics4/CullMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics2
#include <kha/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_graphics4_ImageShaderPainter
#include <kha/graphics4/ImageShaderPainter.h>
#endif
#ifndef INCLUDED_kha_graphics4_Program
#include <kha/graphics4/Program.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextShaderPainter
#include <kha/graphics4/TextShaderPainter.h>
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
#ifndef INCLUDED_kha_math_FastVector2
#include <kha/math/FastVector2.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
namespace kha{
namespace graphics4{

Void Graphics2_obj::__construct(::kha::Canvas canvas)
{
HX_STACK_FRAME("kha.graphics4.Graphics2","new",0x1f2768ea,"kha.graphics4.Graphics2.new","kha/graphics4/Graphics2.hx",756,0x0c1de808)
HX_STACK_THIS(this)
HX_STACK_ARG(canvas,"canvas")
{
	HX_STACK_LINE(757)
	super::__construct();
	HX_STACK_LINE(758)
	int tmp = ::kha::_Color::Color_Impl__obj::White;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(758)
	this->set_color(tmp);
	HX_STACK_LINE(759)
	this->canvas = canvas;
	HX_STACK_LINE(760)
	::kha::graphics4::Graphics tmp1 = canvas->get_g4();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(760)
	this->g = tmp1;
	HX_STACK_LINE(761)
	::kha::graphics4::Graphics tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(761)
	::kha::graphics4::ImageShaderPainter tmp3 = ::kha::graphics4::ImageShaderPainter_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(761)
	this->imagePainter = tmp3;
	HX_STACK_LINE(762)
	::kha::graphics4::Graphics tmp4 = this->g;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(762)
	::kha::graphics4::ColoredShaderPainter tmp5 = ::kha::graphics4::ColoredShaderPainter_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(762)
	this->coloredPainter = tmp5;
	HX_STACK_LINE(763)
	::kha::graphics4::Graphics tmp6 = this->g;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(763)
	::kha::graphics4::TextShaderPainter tmp7 = ::kha::graphics4::TextShaderPainter_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(763)
	this->textPainter = tmp7;
	HX_STACK_LINE(764)
	this->setProjection();
	HX_STACK_LINE(766)
	::kha::Loader tmp8 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(766)
	::kha::Blob tmp9 = tmp8->getShader(HX_HCSTRING("painter-video.frag","\xc7","\xa2","\x9f","\x13"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(766)
	::kha::graphics4::FragmentShader tmp10 = ::kha::graphics4::FragmentShader_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(766)
	::kha::graphics4::FragmentShader fragmentShader = tmp10;		HX_STACK_VAR(fragmentShader,"fragmentShader");
	HX_STACK_LINE(767)
	::kha::Loader tmp11 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(767)
	::kha::Blob tmp12 = tmp11->getShader(HX_HCSTRING("painter-video.vert","\x46","\x3e","\x29","\x1e"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(767)
	::kha::graphics4::VertexShader tmp13 = ::kha::graphics4::VertexShader_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(767)
	::kha::graphics4::VertexShader vertexShader = tmp13;		HX_STACK_VAR(vertexShader,"vertexShader");
	HX_STACK_LINE(769)
	::kha::graphics4::Program tmp14 = ::kha::graphics4::Program_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(769)
	this->videoProgram = tmp14;
	HX_STACK_LINE(770)
	::kha::graphics4::Program tmp15 = this->videoProgram;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(770)
	::kha::graphics4::FragmentShader tmp16 = fragmentShader;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(770)
	tmp15->setFragmentShader(tmp16);
	HX_STACK_LINE(771)
	::kha::graphics4::Program tmp17 = this->videoProgram;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(771)
	::kha::graphics4::VertexShader tmp18 = vertexShader;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(771)
	tmp17->setVertexShader(tmp18);
	HX_STACK_LINE(773)
	::kha::graphics4::VertexStructure structure = ::kha::graphics4::VertexStructure_obj::__new();		HX_STACK_VAR(structure,"structure");
	HX_STACK_LINE(774)
	structure->add(HX_HCSTRING("vertexPosition","\x2d","\x3c","\x14","\x50"),::kha::graphics4::VertexData_obj::Float3);
	HX_STACK_LINE(775)
	structure->add(HX_HCSTRING("texPosition","\xb0","\x79","\xff","\xc7"),::kha::graphics4::VertexData_obj::Float2);
	HX_STACK_LINE(776)
	structure->add(HX_HCSTRING("vertexColor","\x5f","\x3b","\x98","\x5e"),::kha::graphics4::VertexData_obj::Float4);
	HX_STACK_LINE(778)
	::kha::graphics4::Program tmp19 = this->videoProgram;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(778)
	::kha::graphics4::VertexStructure tmp20 = structure;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(778)
	tmp19->link(tmp20);
}
;
	return null();
}

//Graphics2_obj::~Graphics2_obj() { }

Dynamic Graphics2_obj::__CreateEmpty() { return  new Graphics2_obj; }
hx::ObjectPtr< Graphics2_obj > Graphics2_obj::__new(::kha::Canvas canvas)
{  hx::ObjectPtr< Graphics2_obj > _result_ = new Graphics2_obj();
	_result_->__construct(canvas);
	return _result_;}

Dynamic Graphics2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics2_obj > _result_ = new Graphics2_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Graphics2_obj::setProjection( ){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","setProjection",0xf22b2fdb,"kha.graphics4.Graphics2.setProjection","kha/graphics4/Graphics2.hx",792,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(793)
		::kha::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(793)
		int tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(793)
		int width = tmp1;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(794)
		::kha::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(794)
		int tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(794)
		int height = tmp3;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(795)
		::kha::Canvas tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(795)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::kha::Framebuffer >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(795)
		if ((tmp5)){
			HX_STACK_LINE(796)
			int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(796)
			int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(796)
			::kha::math::Matrix4 tmp8 = ::kha::math::Matrix4_obj::orthogonalProjection((int)0,tmp6,tmp7,(int)0,((Float)0.1),(int)1000);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(796)
			this->projectionMatrix = tmp8;
		}
		else{
			HX_STACK_LINE(798)
			bool tmp6 = ::kha::Image_obj::get_nonPow2Supported();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(798)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(798)
			if ((tmp7)){
				HX_STACK_LINE(799)
				int tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(799)
				int tmp9 = ::kha::graphics4::Graphics2_obj::upperPowerOfTwo(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(799)
				width = tmp9;
				HX_STACK_LINE(800)
				int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(800)
				int tmp11 = ::kha::graphics4::Graphics2_obj::upperPowerOfTwo(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(800)
				height = tmp11;
			}
			HX_STACK_LINE(802)
			::kha::graphics4::Graphics tmp8 = this->g;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(802)
			bool tmp9 = tmp8->renderTargetsInvertedY();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(802)
			if ((tmp9)){
				HX_STACK_LINE(803)
				int tmp10 = width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(803)
				int tmp11 = height;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(803)
				::kha::math::Matrix4 tmp12 = ::kha::math::Matrix4_obj::orthogonalProjection((int)0,tmp10,(int)0,tmp11,((Float)0.1),(int)1000);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(803)
				this->projectionMatrix = tmp12;
			}
			else{
				HX_STACK_LINE(805)
				int tmp10 = width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(805)
				int tmp11 = height;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(805)
				::kha::math::Matrix4 tmp12 = ::kha::math::Matrix4_obj::orthogonalProjection((int)0,tmp10,tmp11,(int)0,((Float)0.1),(int)1000);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(805)
				this->projectionMatrix = tmp12;
			}
		}
		HX_STACK_LINE(808)
		::kha::graphics4::ImageShaderPainter tmp6 = this->imagePainter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(808)
		::kha::math::Matrix4 tmp7 = this->projectionMatrix;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(808)
		tmp6->setProjection(tmp7);
		HX_STACK_LINE(809)
		::kha::graphics4::ColoredShaderPainter tmp8 = this->coloredPainter;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(809)
		::kha::math::Matrix4 tmp9 = this->projectionMatrix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(809)
		tmp8->setProjection(tmp9);
		HX_STACK_LINE(810)
		::kha::graphics4::TextShaderPainter tmp10 = this->textPainter;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(810)
		::kha::math::Matrix4 tmp11 = this->projectionMatrix;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(810)
		tmp10->setProjection(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics2_obj,setProjection,(void))

Void Graphics2_obj::drawImage( ::kha::Image img,::cpp::Float32 x,::cpp::Float32 y){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","drawImage",0x2d9bf0c1,"kha.graphics4.Graphics2.drawImage","kha/graphics4/Graphics2.hx",814,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(815)
		{
			HX_STACK_LINE(815)
			::kha::graphics4::ColoredShaderPainter tmp = this->coloredPainter;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(815)
			::kha::graphics4::ColoredShaderPainter _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(815)
				bool tmp1 = (_this->triangleBufferIndex > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(815)
				if ((tmp1)){
					HX_STACK_LINE(815)
					_this->drawTriBuffer(false);
				}
			}
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(815)
				bool tmp1 = (_this->bufferIndex > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(815)
				if ((tmp1)){
					HX_STACK_LINE(815)
					_this->drawBuffer(false);
				}
			}
		}
		HX_STACK_LINE(816)
		::kha::graphics4::TextShaderPainter tmp = this->textPainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(816)
		tmp->end();
		HX_STACK_LINE(817)
		::cpp::Float32 tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(817)
		int tmp2 = img->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(817)
		::cpp::Float32 tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(817)
		::cpp::Float32 xw = tmp3;		HX_STACK_VAR(xw,"xw");
		HX_STACK_LINE(818)
		::cpp::Float32 tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(818)
		int tmp5 = img->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(818)
		::cpp::Float32 tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(818)
		::cpp::Float32 yh = tmp6;		HX_STACK_VAR(yh,"yh");
		HX_STACK_LINE(820)
		::cpp::Float32 tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(820)
		::cpp::Float32 tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(820)
		::cpp::Float32 tmp9 = xw;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(820)
		::cpp::Float32 tmp10 = xw;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(820)
		Kore::float32x4 tmp11 = Kore::load(tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(820)
		Kore::float32x4 xx = tmp11;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(821)
		::cpp::Float32 tmp12 = yh;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(821)
		::cpp::Float32 tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(821)
		::cpp::Float32 tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(821)
		::cpp::Float32 tmp15 = yh;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(821)
		Kore::float32x4 tmp16 = Kore::load(tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(821)
		Kore::float32x4 yy = tmp16;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(823)
		Array< ::Dynamic > tmp17 = this->transformations;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(823)
		Array< ::Dynamic > tmp18 = this->transformations;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(823)
		int tmp19 = tmp18->length;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(823)
		int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(823)
		::kha::math::FastMatrix3 tmp21 = tmp17->__get(tmp20).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(823)
		::cpp::Float32 tmp22 = tmp21->_00;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(823)
		Kore::float32x4 tmp23 = Kore::loadAll(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(823)
		Kore::float32x4 _00 = tmp23;		HX_STACK_VAR(_00,"_00");
		HX_STACK_LINE(824)
		Array< ::Dynamic > tmp24 = this->transformations;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(824)
		Array< ::Dynamic > tmp25 = this->transformations;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(824)
		int tmp26 = tmp25->length;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(824)
		int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(824)
		::kha::math::FastMatrix3 tmp28 = tmp24->__get(tmp27).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(824)
		::cpp::Float32 tmp29 = tmp28->_01;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(824)
		Kore::float32x4 tmp30 = Kore::loadAll(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(824)
		Kore::float32x4 _01 = tmp30;		HX_STACK_VAR(_01,"_01");
		HX_STACK_LINE(825)
		Array< ::Dynamic > tmp31 = this->transformations;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(825)
		Array< ::Dynamic > tmp32 = this->transformations;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(825)
		int tmp33 = tmp32->length;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(825)
		int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(825)
		::kha::math::FastMatrix3 tmp35 = tmp31->__get(tmp34).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(825)
		::cpp::Float32 tmp36 = tmp35->_02;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(825)
		Kore::float32x4 tmp37 = Kore::loadAll(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(825)
		Kore::float32x4 _02 = tmp37;		HX_STACK_VAR(_02,"_02");
		HX_STACK_LINE(826)
		Array< ::Dynamic > tmp38 = this->transformations;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(826)
		Array< ::Dynamic > tmp39 = this->transformations;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(826)
		int tmp40 = tmp39->length;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(826)
		int tmp41 = (tmp40 - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(826)
		::kha::math::FastMatrix3 tmp42 = tmp38->__get(tmp41).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(826)
		::cpp::Float32 tmp43 = tmp42->_10;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(826)
		Kore::float32x4 tmp44 = Kore::loadAll(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(826)
		Kore::float32x4 _10 = tmp44;		HX_STACK_VAR(_10,"_10");
		HX_STACK_LINE(827)
		Array< ::Dynamic > tmp45 = this->transformations;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(827)
		Array< ::Dynamic > tmp46 = this->transformations;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(827)
		int tmp47 = tmp46->length;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(827)
		int tmp48 = (tmp47 - (int)1);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(827)
		::kha::math::FastMatrix3 tmp49 = tmp45->__get(tmp48).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(827)
		::cpp::Float32 tmp50 = tmp49->_11;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(827)
		Kore::float32x4 tmp51 = Kore::loadAll(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(827)
		Kore::float32x4 _11 = tmp51;		HX_STACK_VAR(_11,"_11");
		HX_STACK_LINE(828)
		Array< ::Dynamic > tmp52 = this->transformations;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(828)
		Array< ::Dynamic > tmp53 = this->transformations;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(828)
		int tmp54 = tmp53->length;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(828)
		int tmp55 = (tmp54 - (int)1);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(828)
		::kha::math::FastMatrix3 tmp56 = tmp52->__get(tmp55).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(828)
		::cpp::Float32 tmp57 = tmp56->_12;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(828)
		Kore::float32x4 tmp58 = Kore::loadAll(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(828)
		Kore::float32x4 _12 = tmp58;		HX_STACK_VAR(_12,"_12");
		HX_STACK_LINE(829)
		Array< ::Dynamic > tmp59 = this->transformations;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(829)
		Array< ::Dynamic > tmp60 = this->transformations;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(829)
		int tmp61 = tmp60->length;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(829)
		int tmp62 = (tmp61 - (int)1);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(829)
		::kha::math::FastMatrix3 tmp63 = tmp59->__get(tmp62).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(829)
		::cpp::Float32 tmp64 = tmp63->_20;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(829)
		Kore::float32x4 tmp65 = Kore::loadAll(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(829)
		Kore::float32x4 _20 = tmp65;		HX_STACK_VAR(_20,"_20");
		HX_STACK_LINE(830)
		Array< ::Dynamic > tmp66 = this->transformations;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(830)
		Array< ::Dynamic > tmp67 = this->transformations;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(830)
		int tmp68 = tmp67->length;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(830)
		int tmp69 = (tmp68 - (int)1);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(830)
		::kha::math::FastMatrix3 tmp70 = tmp66->__get(tmp69).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(830)
		::cpp::Float32 tmp71 = tmp70->_21;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(830)
		Kore::float32x4 tmp72 = Kore::loadAll(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(830)
		Kore::float32x4 _21 = tmp72;		HX_STACK_VAR(_21,"_21");
		HX_STACK_LINE(831)
		Array< ::Dynamic > tmp73 = this->transformations;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(831)
		Array< ::Dynamic > tmp74 = this->transformations;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(831)
		int tmp75 = tmp74->length;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(831)
		int tmp76 = (tmp75 - (int)1);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(831)
		::kha::math::FastMatrix3 tmp77 = tmp73->__get(tmp76).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(831)
		::cpp::Float32 tmp78 = tmp77->_22;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(831)
		Kore::float32x4 tmp79 = Kore::loadAll(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(831)
		Kore::float32x4 _22 = tmp79;		HX_STACK_VAR(_22,"_22");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp80 = _02;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp81 = xx;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp82 = Kore::mul(tmp80,tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp83 = _12;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp84 = yy;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp85 = Kore::mul(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp86 = Kore::add(tmp82,tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp87 = _22;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(834)
		Kore::float32x4 tmp88 = Kore::add(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(834)
		Kore::float32x4 w = tmp88;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp89 = _00;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp90 = xx;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp91 = Kore::mul(tmp89,tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp92 = _10;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp93 = yy;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp94 = Kore::mul(tmp92,tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp95 = Kore::add(tmp91,tmp94);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp96 = _20;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp97 = Kore::add(tmp95,tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp98 = w;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(835)
		Kore::float32x4 tmp99 = Kore::div(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(835)
		Kore::float32x4 px = tmp99;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp100 = _01;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp101 = xx;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp102 = Kore::mul(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp103 = _11;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp104 = yy;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp105 = Kore::mul(tmp103,tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp106 = Kore::add(tmp102,tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp107 = _21;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp108 = Kore::add(tmp106,tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp109 = w;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(836)
		Kore::float32x4 tmp110 = Kore::div(tmp108,tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(836)
		Kore::float32x4 py = tmp110;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(838)
		{
			HX_STACK_LINE(838)
			::kha::graphics4::ImageShaderPainter tmp111 = this->imagePainter;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(838)
			::kha::graphics4::ImageShaderPainter _this = tmp111;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(838)
			Kore::float32x4 tmp112 = px;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(838)
			Float tmp113 = Kore::get(tmp112,(int)0);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(838)
			::cpp::Float32 bottomleftx = tmp113;		HX_STACK_VAR(bottomleftx,"bottomleftx");
			HX_STACK_LINE(838)
			Kore::float32x4 tmp114 = py;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(838)
			Float tmp115 = Kore::get(tmp114,(int)0);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(838)
			::cpp::Float32 bottomlefty = tmp115;		HX_STACK_VAR(bottomlefty,"bottomlefty");
			HX_STACK_LINE(838)
			Kore::float32x4 tmp116 = px;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(838)
			Float tmp117 = Kore::get(tmp116,(int)1);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(838)
			::cpp::Float32 topleftx = tmp117;		HX_STACK_VAR(topleftx,"topleftx");
			HX_STACK_LINE(838)
			Kore::float32x4 tmp118 = py;		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(838)
			Float tmp119 = Kore::get(tmp118,(int)1);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(838)
			::cpp::Float32 toplefty = tmp119;		HX_STACK_VAR(toplefty,"toplefty");
			HX_STACK_LINE(839)
			Kore::float32x4 tmp120 = px;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(839)
			Float tmp121 = Kore::get(tmp120,(int)2);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(839)
			::cpp::Float32 toprightx = tmp121;		HX_STACK_VAR(toprightx,"toprightx");
			HX_STACK_LINE(839)
			Kore::float32x4 tmp122 = py;		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(839)
			Float tmp123 = Kore::get(tmp122,(int)2);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(839)
			::cpp::Float32 toprighty = tmp123;		HX_STACK_VAR(toprighty,"toprighty");
			HX_STACK_LINE(839)
			Kore::float32x4 tmp124 = px;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(839)
			Float tmp125 = Kore::get(tmp124,(int)3);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(839)
			::cpp::Float32 bottomrightx = tmp125;		HX_STACK_VAR(bottomrightx,"bottomrightx");
			HX_STACK_LINE(839)
			Kore::float32x4 tmp126 = py;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(839)
			Float tmp127 = Kore::get(tmp126,(int)3);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(839)
			::cpp::Float32 bottomrighty = tmp127;		HX_STACK_VAR(bottomrighty,"bottomrighty");
			HX_STACK_LINE(839)
			Float tmp128 = this->get_opacity();		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(839)
			::cpp::Float32 opacity = tmp128;		HX_STACK_VAR(opacity,"opacity");
			HX_STACK_LINE(839)
			int tmp129 = this->get_color();		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(839)
			int color = tmp129;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(838)
			::kha::Image tex = img;		HX_STACK_VAR(tex,"tex");
			HX_STACK_LINE(838)
			int tmp130 = (_this->bufferIndex + (int)1);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(838)
			int tmp131 = ::kha::graphics4::ImageShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(838)
			bool tmp132 = (tmp130 >= tmp131);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(838)
			bool tmp133 = !(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(838)
			bool tmp134;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(838)
			if ((tmp133)){
				HX_STACK_LINE(838)
				bool tmp135 = (_this->lastTexture != null());		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(838)
				bool tmp136 = tmp135;		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(838)
				bool tmp137 = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(838)
				if ((tmp137)){
					HX_STACK_LINE(838)
					tmp134 = (tex != _this->lastTexture);
				}
				else{
					HX_STACK_LINE(838)
					tmp134 = false;
				}
			}
			else{
				HX_STACK_LINE(838)
				tmp134 = true;
			}
			HX_STACK_LINE(838)
			if ((tmp134)){
				HX_STACK_LINE(838)
				_this->drawBuffer();
			}
			HX_STACK_LINE(838)
			{
				HX_STACK_LINE(838)
				int tmp135 = color;		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(838)
				int tmp136 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp137 = (tmp136 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(838)
				::cpp::Float32 r = tmp137;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(838)
				int tmp138 = color;		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(838)
				int tmp139 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp138);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp140 = (tmp139 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(838)
				::cpp::Float32 g = tmp140;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(838)
				int tmp141 = color;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(838)
				int tmp142 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp143 = (tmp142 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(838)
				::cpp::Float32 b = tmp143;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(838)
				int tmp144 = _this->bufferIndex;		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(838)
				int tmp145 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(838)
				int tmp146 = (tmp144 * tmp145);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(838)
				int tmp147 = (tmp146 * (int)4);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(838)
				int baseIndex = tmp147;		HX_STACK_VAR(baseIndex,"baseIndex");
				HX_STACK_LINE(838)
				float32array tmp148 = _this->rectVertices->data;		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(838)
				int tmp149 = (baseIndex + (int)5);		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp150 = r;		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(838)
				tmp148.set(tmp149,tmp150);
				HX_STACK_LINE(838)
				float32array tmp151 = _this->rectVertices->data;		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(838)
				int tmp152 = (baseIndex + (int)6);		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp153 = g;		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(838)
				tmp151.set(tmp152,tmp153);
				HX_STACK_LINE(838)
				float32array tmp154 = _this->rectVertices->data;		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(838)
				int tmp155 = (baseIndex + (int)7);		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp156 = b;		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(838)
				tmp154.set(tmp155,tmp156);
				HX_STACK_LINE(838)
				float32array tmp157 = _this->rectVertices->data;		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(838)
				int tmp158 = (baseIndex + (int)8);		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp159 = opacity;		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(838)
				tmp157.set(tmp158,tmp159);
				HX_STACK_LINE(838)
				float32array tmp160 = _this->rectVertices->data;		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(838)
				int tmp161 = (baseIndex + (int)14);		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp162 = r;		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(838)
				tmp160.set(tmp161,tmp162);
				HX_STACK_LINE(838)
				float32array tmp163 = _this->rectVertices->data;		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(838)
				int tmp164 = (baseIndex + (int)15);		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp165 = g;		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(838)
				tmp163.set(tmp164,tmp165);
				HX_STACK_LINE(838)
				float32array tmp166 = _this->rectVertices->data;		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(838)
				int tmp167 = (baseIndex + (int)16);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp168 = b;		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(838)
				tmp166.set(tmp167,tmp168);
				HX_STACK_LINE(838)
				float32array tmp169 = _this->rectVertices->data;		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(838)
				int tmp170 = (baseIndex + (int)17);		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp171 = opacity;		HX_STACK_VAR(tmp171,"tmp171");
				HX_STACK_LINE(838)
				tmp169.set(tmp170,tmp171);
				HX_STACK_LINE(838)
				float32array tmp172 = _this->rectVertices->data;		HX_STACK_VAR(tmp172,"tmp172");
				HX_STACK_LINE(838)
				int tmp173 = (baseIndex + (int)23);		HX_STACK_VAR(tmp173,"tmp173");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp174 = r;		HX_STACK_VAR(tmp174,"tmp174");
				HX_STACK_LINE(838)
				tmp172.set(tmp173,tmp174);
				HX_STACK_LINE(838)
				float32array tmp175 = _this->rectVertices->data;		HX_STACK_VAR(tmp175,"tmp175");
				HX_STACK_LINE(838)
				int tmp176 = (baseIndex + (int)24);		HX_STACK_VAR(tmp176,"tmp176");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp177 = g;		HX_STACK_VAR(tmp177,"tmp177");
				HX_STACK_LINE(838)
				tmp175.set(tmp176,tmp177);
				HX_STACK_LINE(838)
				float32array tmp178 = _this->rectVertices->data;		HX_STACK_VAR(tmp178,"tmp178");
				HX_STACK_LINE(838)
				int tmp179 = (baseIndex + (int)25);		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp180 = b;		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(838)
				tmp178.set(tmp179,tmp180);
				HX_STACK_LINE(838)
				float32array tmp181 = _this->rectVertices->data;		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(838)
				int tmp182 = (baseIndex + (int)26);		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp183 = opacity;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(838)
				tmp181.set(tmp182,tmp183);
				HX_STACK_LINE(838)
				float32array tmp184 = _this->rectVertices->data;		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(838)
				int tmp185 = (baseIndex + (int)32);		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp186 = r;		HX_STACK_VAR(tmp186,"tmp186");
				HX_STACK_LINE(838)
				tmp184.set(tmp185,tmp186);
				HX_STACK_LINE(838)
				float32array tmp187 = _this->rectVertices->data;		HX_STACK_VAR(tmp187,"tmp187");
				HX_STACK_LINE(838)
				int tmp188 = (baseIndex + (int)33);		HX_STACK_VAR(tmp188,"tmp188");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp189 = g;		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(838)
				tmp187.set(tmp188,tmp189);
				HX_STACK_LINE(838)
				float32array tmp190 = _this->rectVertices->data;		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(838)
				int tmp191 = (baseIndex + (int)34);		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp192 = b;		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(838)
				tmp190.set(tmp191,tmp192);
				HX_STACK_LINE(838)
				float32array tmp193 = _this->rectVertices->data;		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(838)
				int tmp194 = (baseIndex + (int)35);		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp195 = opacity;		HX_STACK_VAR(tmp195,"tmp195");
				HX_STACK_LINE(838)
				tmp193.set(tmp194,tmp195);
			}
			HX_STACK_LINE(838)
			{
				HX_STACK_LINE(838)
				int tmp135 = tex->get_width();		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(838)
				int tmp136 = tex->get_realWidth();		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(838)
				Float tmp137 = (Float(tmp135) / Float(tmp136));		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(838)
				::cpp::Float32 right = tmp137;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(838)
				int tmp138 = tex->get_height();		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(838)
				int tmp139 = tex->get_realHeight();		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(838)
				Float tmp140 = (Float(tmp138) / Float(tmp139));		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(838)
				::cpp::Float32 bottom = tmp140;		HX_STACK_VAR(bottom,"bottom");
				HX_STACK_LINE(838)
				int tmp141 = _this->bufferIndex;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(838)
				int tmp142 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(838)
				int tmp143 = (tmp141 * tmp142);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(838)
				int tmp144 = (tmp143 * (int)4);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(838)
				int baseIndex = tmp144;		HX_STACK_VAR(baseIndex,"baseIndex");
				HX_STACK_LINE(838)
				float32array tmp145 = _this->rectVertices->data;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(838)
				int tmp146 = (baseIndex + (int)3);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(838)
				tmp145.set(tmp146,(int)0);
				HX_STACK_LINE(838)
				float32array tmp147 = _this->rectVertices->data;		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(838)
				int tmp148 = (baseIndex + (int)4);		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp149 = bottom;		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(838)
				tmp147.set(tmp148,tmp149);
				HX_STACK_LINE(838)
				float32array tmp150 = _this->rectVertices->data;		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(838)
				int tmp151 = (baseIndex + (int)12);		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(838)
				tmp150.set(tmp151,(int)0);
				HX_STACK_LINE(838)
				float32array tmp152 = _this->rectVertices->data;		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(838)
				int tmp153 = (baseIndex + (int)13);		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(838)
				tmp152.set(tmp153,(int)0);
				HX_STACK_LINE(838)
				float32array tmp154 = _this->rectVertices->data;		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(838)
				int tmp155 = (baseIndex + (int)21);		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp156 = right;		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(838)
				tmp154.set(tmp155,tmp156);
				HX_STACK_LINE(838)
				float32array tmp157 = _this->rectVertices->data;		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(838)
				int tmp158 = (baseIndex + (int)22);		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(838)
				tmp157.set(tmp158,(int)0);
				HX_STACK_LINE(838)
				float32array tmp159 = _this->rectVertices->data;		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(838)
				int tmp160 = (baseIndex + (int)30);		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp161 = right;		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(838)
				tmp159.set(tmp160,tmp161);
				HX_STACK_LINE(838)
				float32array tmp162 = _this->rectVertices->data;		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(838)
				int tmp163 = (baseIndex + (int)31);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp164 = bottom;		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(838)
				tmp162.set(tmp163,tmp164);
			}
			HX_STACK_LINE(838)
			{
				HX_STACK_LINE(838)
				int tmp135 = _this->bufferIndex;		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(838)
				int tmp136 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(838)
				int tmp137 = (tmp135 * tmp136);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(838)
				int tmp138 = (tmp137 * (int)4);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(838)
				int baseIndex = tmp138;		HX_STACK_VAR(baseIndex,"baseIndex");
				HX_STACK_LINE(838)
				float32array tmp139 = _this->rectVertices->data;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(838)
				int tmp140 = baseIndex;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp141 = bottomleftx;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(838)
				tmp139.set(tmp140,tmp141);
				HX_STACK_LINE(838)
				float32array tmp142 = _this->rectVertices->data;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(838)
				int tmp143 = (baseIndex + (int)1);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp144 = bottomlefty;		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(838)
				tmp142.set(tmp143,tmp144);
				HX_STACK_LINE(838)
				float32array tmp145 = _this->rectVertices->data;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(838)
				int tmp146 = (baseIndex + (int)2);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(838)
				tmp145.set(tmp146,((Float)-5.0));
				HX_STACK_LINE(838)
				float32array tmp147 = _this->rectVertices->data;		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(838)
				int tmp148 = (baseIndex + (int)9);		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp149 = topleftx;		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(838)
				tmp147.set(tmp148,tmp149);
				HX_STACK_LINE(838)
				float32array tmp150 = _this->rectVertices->data;		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(838)
				int tmp151 = (baseIndex + (int)10);		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp152 = toplefty;		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(838)
				tmp150.set(tmp151,tmp152);
				HX_STACK_LINE(838)
				float32array tmp153 = _this->rectVertices->data;		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(838)
				int tmp154 = (baseIndex + (int)11);		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(838)
				tmp153.set(tmp154,((Float)-5.0));
				HX_STACK_LINE(838)
				float32array tmp155 = _this->rectVertices->data;		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(838)
				int tmp156 = (baseIndex + (int)18);		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp157 = toprightx;		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(838)
				tmp155.set(tmp156,tmp157);
				HX_STACK_LINE(838)
				float32array tmp158 = _this->rectVertices->data;		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(838)
				int tmp159 = (baseIndex + (int)19);		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp160 = toprighty;		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(838)
				tmp158.set(tmp159,tmp160);
				HX_STACK_LINE(838)
				float32array tmp161 = _this->rectVertices->data;		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(838)
				int tmp162 = (baseIndex + (int)20);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(838)
				tmp161.set(tmp162,((Float)-5.0));
				HX_STACK_LINE(838)
				float32array tmp163 = _this->rectVertices->data;		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(838)
				int tmp164 = (baseIndex + (int)27);		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp165 = bottomrightx;		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(838)
				tmp163.set(tmp164,tmp165);
				HX_STACK_LINE(838)
				float32array tmp166 = _this->rectVertices->data;		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(838)
				int tmp167 = (baseIndex + (int)28);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(838)
				::cpp::Float32 tmp168 = bottomrighty;		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(838)
				tmp166.set(tmp167,tmp168);
				HX_STACK_LINE(838)
				float32array tmp169 = _this->rectVertices->data;		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(838)
				int tmp170 = (baseIndex + (int)29);		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(838)
				tmp169.set(tmp170,((Float)-5.0));
			}
			HX_STACK_LINE(838)
			++(_this->bufferIndex);
			HX_STACK_LINE(838)
			_this->lastTexture = tex;
		}
	}
return null();
}


Void Graphics2_obj::drawScaledSubImage( ::kha::Image img,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh,::cpp::Float32 dx,::cpp::Float32 dy,::cpp::Float32 dw,::cpp::Float32 dh){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","drawScaledSubImage",0x67aa184f,"kha.graphics4.Graphics2.drawScaledSubImage","kha/graphics4/Graphics2.hx",855,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dw,"dw")
		HX_STACK_ARG(dh,"dh")
		HX_STACK_LINE(856)
		{
			HX_STACK_LINE(856)
			::kha::graphics4::ColoredShaderPainter tmp = this->coloredPainter;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(856)
			::kha::graphics4::ColoredShaderPainter _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(856)
				bool tmp1 = (_this->triangleBufferIndex > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(856)
				if ((tmp1)){
					HX_STACK_LINE(856)
					_this->drawTriBuffer(false);
				}
			}
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(856)
				bool tmp1 = (_this->bufferIndex > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(856)
				if ((tmp1)){
					HX_STACK_LINE(856)
					_this->drawBuffer(false);
				}
			}
		}
		HX_STACK_LINE(857)
		::kha::graphics4::TextShaderPainter tmp = this->textPainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(857)
		tmp->end();
		HX_STACK_LINE(858)
		Array< ::Dynamic > tmp1 = this->transformations;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(858)
		Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(858)
		int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(858)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(858)
		::kha::math::FastMatrix3 tmp5 = tmp1->__get(tmp4).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(858)
		::kha::math::FastMatrix3 _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(858)
		::cpp::Float32 value_x = dx;		HX_STACK_VAR(value_x,"value_x");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp6 = (dy + dh);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(858)
		::cpp::Float32 value_y = tmp6;		HX_STACK_VAR(value_y,"value_y");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp7 = (_this->_02 * value_x);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp8 = (_this->_12 * value_y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp10 = _this->_22;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(858)
		::cpp::Float32 w = tmp11;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp12 = (_this->_00 * value_x);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp13 = (_this->_10 * value_y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp15 = _this->_20;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp17 = w;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(858)
		Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(858)
		Float x = tmp18;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp19 = (_this->_01 * value_x);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp20 = (_this->_11 * value_y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp22 = _this->_21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(858)
		::cpp::Float32 tmp24 = w;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(858)
		Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(858)
		Float y = tmp25;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(858)
		::cpp::Float32 p1_x = x;		HX_STACK_VAR(p1_x,"p1_x");
		HX_STACK_LINE(858)
		::cpp::Float32 p1_y = y;		HX_STACK_VAR(p1_y,"p1_y");
		HX_STACK_LINE(859)
		Array< ::Dynamic > tmp26 = this->transformations;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(859)
		Array< ::Dynamic > tmp27 = this->transformations;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(859)
		int tmp28 = tmp27->length;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(859)
		int tmp29 = (tmp28 - (int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(859)
		::kha::math::FastMatrix3 tmp30 = tmp26->__get(tmp29).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(859)
		::kha::math::FastMatrix3 _this1 = tmp30;		HX_STACK_VAR(_this1,"_this1");
		HX_STACK_LINE(859)
		::cpp::Float32 value_x1 = dx;		HX_STACK_VAR(value_x1,"value_x1");
		HX_STACK_LINE(859)
		::cpp::Float32 value_y1 = dy;		HX_STACK_VAR(value_y1,"value_y1");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp31 = (_this1->_02 * value_x1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp32 = (_this1->_12 * value_y1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp34 = _this1->_22;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(859)
		::cpp::Float32 w1 = tmp35;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp36 = (_this1->_00 * value_x1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp37 = (_this1->_10 * value_y1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp39 = _this1->_20;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp41 = w1;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(859)
		Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(859)
		Float x1 = tmp42;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp43 = (_this1->_01 * value_x1);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp44 = (_this1->_11 * value_y1);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp46 = _this1->_21;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(859)
		::cpp::Float32 tmp48 = w1;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(859)
		Float tmp49 = (Float(tmp47) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(859)
		Float y1 = tmp49;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(859)
		::cpp::Float32 p2_x = x1;		HX_STACK_VAR(p2_x,"p2_x");
		HX_STACK_LINE(859)
		::cpp::Float32 p2_y = y1;		HX_STACK_VAR(p2_y,"p2_y");
		HX_STACK_LINE(860)
		Array< ::Dynamic > tmp50 = this->transformations;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(860)
		Array< ::Dynamic > tmp51 = this->transformations;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(860)
		int tmp52 = tmp51->length;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(860)
		int tmp53 = (tmp52 - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(860)
		::kha::math::FastMatrix3 tmp54 = tmp50->__get(tmp53).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(860)
		::kha::math::FastMatrix3 _this2 = tmp54;		HX_STACK_VAR(_this2,"_this2");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp55 = (dx + dw);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(860)
		::cpp::Float32 value_x2 = tmp55;		HX_STACK_VAR(value_x2,"value_x2");
		HX_STACK_LINE(860)
		::cpp::Float32 value_y2 = dy;		HX_STACK_VAR(value_y2,"value_y2");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp56 = (_this2->_02 * value_x2);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp57 = (_this2->_12 * value_y2);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp59 = _this2->_22;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(860)
		::cpp::Float32 w2 = tmp60;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp61 = (_this2->_00 * value_x2);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp62 = (_this2->_10 * value_y2);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp64 = _this2->_20;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp66 = w2;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(860)
		Float tmp67 = (Float(tmp65) / Float(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(860)
		Float x2 = tmp67;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp68 = (_this2->_01 * value_x2);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp69 = (_this2->_11 * value_y2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp71 = _this2->_21;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(860)
		::cpp::Float32 tmp73 = w2;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(860)
		Float tmp74 = (Float(tmp72) / Float(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(860)
		Float y2 = tmp74;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(860)
		::cpp::Float32 p3_x = x2;		HX_STACK_VAR(p3_x,"p3_x");
		HX_STACK_LINE(860)
		::cpp::Float32 p3_y = y2;		HX_STACK_VAR(p3_y,"p3_y");
		HX_STACK_LINE(861)
		Array< ::Dynamic > tmp75 = this->transformations;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(861)
		Array< ::Dynamic > tmp76 = this->transformations;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(861)
		int tmp77 = tmp76->length;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(861)
		int tmp78 = (tmp77 - (int)1);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(861)
		::kha::math::FastMatrix3 tmp79 = tmp75->__get(tmp78).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(861)
		::kha::math::FastMatrix3 _this3 = tmp79;		HX_STACK_VAR(_this3,"_this3");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp80 = (dx + dw);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(861)
		::cpp::Float32 value_x3 = tmp80;		HX_STACK_VAR(value_x3,"value_x3");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp81 = (dy + dh);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(861)
		::cpp::Float32 value_y3 = tmp81;		HX_STACK_VAR(value_y3,"value_y3");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp82 = (_this3->_02 * value_x3);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp83 = (_this3->_12 * value_y3);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp85 = _this3->_22;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(861)
		::cpp::Float32 w3 = tmp86;		HX_STACK_VAR(w3,"w3");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp87 = (_this3->_00 * value_x3);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp88 = (_this3->_10 * value_y3);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp90 = _this3->_20;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp92 = w3;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(861)
		Float tmp93 = (Float(tmp91) / Float(tmp92));		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(861)
		Float x3 = tmp93;		HX_STACK_VAR(x3,"x3");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp94 = (_this3->_01 * value_x3);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp95 = (_this3->_11 * value_y3);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp97 = _this3->_21;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(861)
		::cpp::Float32 tmp99 = w3;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(861)
		Float tmp100 = (Float(tmp98) / Float(tmp99));		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(861)
		Float y3 = tmp100;		HX_STACK_VAR(y3,"y3");
		HX_STACK_LINE(861)
		::cpp::Float32 p4_x = x3;		HX_STACK_VAR(p4_x,"p4_x");
		HX_STACK_LINE(861)
		::cpp::Float32 p4_y = y3;		HX_STACK_VAR(p4_y,"p4_y");
		HX_STACK_LINE(862)
		{
			HX_STACK_LINE(862)
			::kha::graphics4::ImageShaderPainter tmp101 = this->imagePainter;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(862)
			::kha::graphics4::ImageShaderPainter _this4 = tmp101;		HX_STACK_VAR(_this4,"_this4");
			HX_STACK_LINE(862)
			Float tmp102 = this->get_opacity();		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(862)
			::cpp::Float32 opacity = tmp102;		HX_STACK_VAR(opacity,"opacity");
			HX_STACK_LINE(862)
			int tmp103 = this->get_color();		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(862)
			int color = tmp103;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(862)
			::kha::Image tex = img;		HX_STACK_VAR(tex,"tex");
			HX_STACK_LINE(862)
			int tmp104 = (_this4->bufferIndex + (int)1);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(862)
			int tmp105 = ::kha::graphics4::ImageShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(862)
			bool tmp106 = (tmp104 >= tmp105);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(862)
			bool tmp107 = !(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(862)
			bool tmp108;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(862)
			if ((tmp107)){
				HX_STACK_LINE(862)
				bool tmp109 = (_this4->lastTexture != null());		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(862)
				bool tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(862)
				bool tmp111 = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(862)
				if ((tmp111)){
					HX_STACK_LINE(862)
					tmp108 = (tex != _this4->lastTexture);
				}
				else{
					HX_STACK_LINE(862)
					tmp108 = false;
				}
			}
			else{
				HX_STACK_LINE(862)
				tmp108 = true;
			}
			HX_STACK_LINE(862)
			if ((tmp108)){
				HX_STACK_LINE(862)
				_this4->drawBuffer();
			}
			HX_STACK_LINE(862)
			{
				HX_STACK_LINE(862)
				::cpp::Float32 tmp109 = sx;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(862)
				int tmp110 = tex->get_realWidth();		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(862)
				Float tmp111 = (Float(tmp109) / Float(tmp110));		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(862)
				::cpp::Float32 left = tmp111;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp112 = sy;		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(862)
				int tmp113 = tex->get_realHeight();		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(862)
				Float tmp114 = (Float(tmp112) / Float(tmp113));		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(862)
				::cpp::Float32 top = tmp114;		HX_STACK_VAR(top,"top");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp115 = (sx + sw);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(862)
				int tmp116 = tex->get_realWidth();		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(862)
				Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(862)
				::cpp::Float32 right = tmp117;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp118 = (sy + sh);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(862)
				int tmp119 = tex->get_realHeight();		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(862)
				Float tmp120 = (Float(tmp118) / Float(tmp119));		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(862)
				::cpp::Float32 bottom = tmp120;		HX_STACK_VAR(bottom,"bottom");
				HX_STACK_LINE(862)
				int tmp121 = _this4->bufferIndex;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(862)
				int tmp122 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(862)
				int tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(862)
				int tmp124 = (tmp123 * (int)4);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(862)
				int baseIndex = tmp124;		HX_STACK_VAR(baseIndex,"baseIndex");
				HX_STACK_LINE(862)
				float32array tmp125 = _this4->rectVertices->data;		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(862)
				int tmp126 = (baseIndex + (int)3);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp127 = left;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(862)
				tmp125.set(tmp126,tmp127);
				HX_STACK_LINE(862)
				float32array tmp128 = _this4->rectVertices->data;		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(862)
				int tmp129 = (baseIndex + (int)4);		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp130 = bottom;		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(862)
				tmp128.set(tmp129,tmp130);
				HX_STACK_LINE(862)
				float32array tmp131 = _this4->rectVertices->data;		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(862)
				int tmp132 = (baseIndex + (int)12);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp133 = left;		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(862)
				tmp131.set(tmp132,tmp133);
				HX_STACK_LINE(862)
				float32array tmp134 = _this4->rectVertices->data;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(862)
				int tmp135 = (baseIndex + (int)13);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp136 = top;		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(862)
				tmp134.set(tmp135,tmp136);
				HX_STACK_LINE(862)
				float32array tmp137 = _this4->rectVertices->data;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(862)
				int tmp138 = (baseIndex + (int)21);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp139 = right;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(862)
				tmp137.set(tmp138,tmp139);
				HX_STACK_LINE(862)
				float32array tmp140 = _this4->rectVertices->data;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(862)
				int tmp141 = (baseIndex + (int)22);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp142 = top;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(862)
				tmp140.set(tmp141,tmp142);
				HX_STACK_LINE(862)
				float32array tmp143 = _this4->rectVertices->data;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(862)
				int tmp144 = (baseIndex + (int)30);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp145 = right;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(862)
				tmp143.set(tmp144,tmp145);
				HX_STACK_LINE(862)
				float32array tmp146 = _this4->rectVertices->data;		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(862)
				int tmp147 = (baseIndex + (int)31);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp148 = bottom;		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(862)
				tmp146.set(tmp147,tmp148);
			}
			HX_STACK_LINE(862)
			{
				HX_STACK_LINE(862)
				int tmp109 = color;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(862)
				int tmp110 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp111 = (tmp110 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(862)
				::cpp::Float32 r = tmp111;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(862)
				int tmp112 = color;		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(862)
				int tmp113 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp114 = (tmp113 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(862)
				::cpp::Float32 g = tmp114;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(862)
				int tmp115 = color;		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(862)
				int tmp116 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp117 = (tmp116 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(862)
				::cpp::Float32 b = tmp117;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(862)
				int tmp118 = _this4->bufferIndex;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(862)
				int tmp119 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(862)
				int tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(862)
				int tmp121 = (tmp120 * (int)4);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(862)
				int baseIndex = tmp121;		HX_STACK_VAR(baseIndex,"baseIndex");
				HX_STACK_LINE(862)
				float32array tmp122 = _this4->rectVertices->data;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(862)
				int tmp123 = (baseIndex + (int)5);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp124 = r;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(862)
				tmp122.set(tmp123,tmp124);
				HX_STACK_LINE(862)
				float32array tmp125 = _this4->rectVertices->data;		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(862)
				int tmp126 = (baseIndex + (int)6);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp127 = g;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(862)
				tmp125.set(tmp126,tmp127);
				HX_STACK_LINE(862)
				float32array tmp128 = _this4->rectVertices->data;		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(862)
				int tmp129 = (baseIndex + (int)7);		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp130 = b;		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(862)
				tmp128.set(tmp129,tmp130);
				HX_STACK_LINE(862)
				float32array tmp131 = _this4->rectVertices->data;		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(862)
				int tmp132 = (baseIndex + (int)8);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp133 = opacity;		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(862)
				tmp131.set(tmp132,tmp133);
				HX_STACK_LINE(862)
				float32array tmp134 = _this4->rectVertices->data;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(862)
				int tmp135 = (baseIndex + (int)14);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp136 = r;		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(862)
				tmp134.set(tmp135,tmp136);
				HX_STACK_LINE(862)
				float32array tmp137 = _this4->rectVertices->data;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(862)
				int tmp138 = (baseIndex + (int)15);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp139 = g;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(862)
				tmp137.set(tmp138,tmp139);
				HX_STACK_LINE(862)
				float32array tmp140 = _this4->rectVertices->data;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(862)
				int tmp141 = (baseIndex + (int)16);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp142 = b;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(862)
				tmp140.set(tmp141,tmp142);
				HX_STACK_LINE(862)
				float32array tmp143 = _this4->rectVertices->data;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(862)
				int tmp144 = (baseIndex + (int)17);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp145 = opacity;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(862)
				tmp143.set(tmp144,tmp145);
				HX_STACK_LINE(862)
				float32array tmp146 = _this4->rectVertices->data;		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(862)
				int tmp147 = (baseIndex + (int)23);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp148 = r;		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(862)
				tmp146.set(tmp147,tmp148);
				HX_STACK_LINE(862)
				float32array tmp149 = _this4->rectVertices->data;		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(862)
				int tmp150 = (baseIndex + (int)24);		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp151 = g;		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(862)
				tmp149.set(tmp150,tmp151);
				HX_STACK_LINE(862)
				float32array tmp152 = _this4->rectVertices->data;		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(862)
				int tmp153 = (baseIndex + (int)25);		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp154 = b;		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(862)
				tmp152.set(tmp153,tmp154);
				HX_STACK_LINE(862)
				float32array tmp155 = _this4->rectVertices->data;		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(862)
				int tmp156 = (baseIndex + (int)26);		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp157 = opacity;		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(862)
				tmp155.set(tmp156,tmp157);
				HX_STACK_LINE(862)
				float32array tmp158 = _this4->rectVertices->data;		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(862)
				int tmp159 = (baseIndex + (int)32);		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp160 = r;		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(862)
				tmp158.set(tmp159,tmp160);
				HX_STACK_LINE(862)
				float32array tmp161 = _this4->rectVertices->data;		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(862)
				int tmp162 = (baseIndex + (int)33);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp163 = g;		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(862)
				tmp161.set(tmp162,tmp163);
				HX_STACK_LINE(862)
				float32array tmp164 = _this4->rectVertices->data;		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(862)
				int tmp165 = (baseIndex + (int)34);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp166 = b;		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(862)
				tmp164.set(tmp165,tmp166);
				HX_STACK_LINE(862)
				float32array tmp167 = _this4->rectVertices->data;		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(862)
				int tmp168 = (baseIndex + (int)35);		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(862)
				::cpp::Float32 tmp169 = opacity;		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(862)
				tmp167.set(tmp168,tmp169);
			}
			HX_STACK_LINE(862)
			{
				HX_STACK_LINE(862)
				int tmp109 = _this4->bufferIndex;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(862)
				int tmp110 = ::kha::graphics4::ImageShaderPainter_obj::vertexSize;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(862)
				int tmp111 = (tmp109 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(862)
				int tmp112 = (tmp111 * (int)4);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(862)
				int baseIndex = tmp112;		HX_STACK_VAR(baseIndex,"baseIndex");
				HX_STACK_LINE(862)
				float32array tmp113 = _this4->rectVertices->data;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(862)
				int tmp114 = baseIndex;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(855)
				::cpp::Float32 tmp115 = p1_x;		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(862)
				tmp113.set(tmp114,tmp115);
				HX_STACK_LINE(862)
				float32array tmp116 = _this4->rectVertices->data;		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(862)
				int tmp117 = (baseIndex + (int)1);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(855)
				::cpp::Float32 tmp118 = p1_y;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(862)
				tmp116.set(tmp117,tmp118);
				HX_STACK_LINE(862)
				float32array tmp119 = _this4->rectVertices->data;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(862)
				int tmp120 = (baseIndex + (int)2);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(862)
				tmp119.set(tmp120,((Float)-5.0));
				HX_STACK_LINE(862)
				float32array tmp121 = _this4->rectVertices->data;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(862)
				int tmp122 = (baseIndex + (int)9);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(855)
				::cpp::Float32 tmp123 = p2_x;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(862)
				tmp121.set(tmp122,tmp123);
				HX_STACK_LINE(862)
				float32array tmp124 = _this4->rectVertices->data;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(862)
				int tmp125 = (baseIndex + (int)10);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(855)
				::cpp::Float32 tmp126 = p2_y;		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(862)
				tmp124.set(tmp125,tmp126);
				HX_STACK_LINE(862)
				float32array tmp127 = _this4->rectVertices->data;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(862)
				int tmp128 = (baseIndex + (int)11);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(862)
				tmp127.set(tmp128,((Float)-5.0));
				HX_STACK_LINE(862)
				float32array tmp129 = _this4->rectVertices->data;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(862)
				int tmp130 = (baseIndex + (int)18);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(855)
				::cpp::Float32 tmp131 = p3_x;		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(862)
				tmp129.set(tmp130,tmp131);
				HX_STACK_LINE(862)
				float32array tmp132 = _this4->rectVertices->data;		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(862)
				int tmp133 = (baseIndex + (int)19);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(855)
				::cpp::Float32 tmp134 = p3_y;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(862)
				tmp132.set(tmp133,tmp134);
				HX_STACK_LINE(862)
				float32array tmp135 = _this4->rectVertices->data;		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(862)
				int tmp136 = (baseIndex + (int)20);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(862)
				tmp135.set(tmp136,((Float)-5.0));
				HX_STACK_LINE(862)
				float32array tmp137 = _this4->rectVertices->data;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(862)
				int tmp138 = (baseIndex + (int)27);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(855)
				::cpp::Float32 tmp139 = p4_x;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(862)
				tmp137.set(tmp138,tmp139);
				HX_STACK_LINE(862)
				float32array tmp140 = _this4->rectVertices->data;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(862)
				int tmp141 = (baseIndex + (int)28);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(855)
				::cpp::Float32 tmp142 = p4_y;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(862)
				tmp140.set(tmp141,tmp142);
				HX_STACK_LINE(862)
				float32array tmp143 = _this4->rectVertices->data;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(862)
				int tmp144 = (baseIndex + (int)29);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(862)
				tmp143.set(tmp144,((Float)-5.0));
			}
			HX_STACK_LINE(862)
			++(_this4->bufferIndex);
			HX_STACK_LINE(862)
			_this4->lastTexture = tex;
		}
	}
return null();
}


int Graphics2_obj::get_color( ){
	HX_STACK_FRAME("kha.graphics4.Graphics2","get_color",0x362d69c4,"kha.graphics4.Graphics2.get_color","kha/graphics4/Graphics2.hx",865,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(866)
	int tmp = this->myColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(866)
	return tmp;
}


int Graphics2_obj::set_color( int color){
	HX_STACK_FRAME("kha.graphics4.Graphics2","set_color",0x197e55d0,"kha.graphics4.Graphics2.set_color","kha/graphics4/Graphics2.hx",869,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(870)
	int tmp = this->myColor = color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(870)
	return tmp;
}


Void Graphics2_obj::drawRect( Float x,Float y,Float width,Float height,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(((Float)1.0));
	HX_STACK_FRAME("kha.graphics4.Graphics2","drawRect",0x10762a7e,"kha.graphics4.Graphics2.drawRect","kha/graphics4/Graphics2.hx",873,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(strength,"strength")
{
		HX_STACK_LINE(874)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(874)
		tmp->end();
		HX_STACK_LINE(875)
		::kha::graphics4::TextShaderPainter tmp1 = this->textPainter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(875)
		tmp1->end();
		HX_STACK_LINE(877)
		::kha::math::FastVector2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(877)
		{
			HX_STACK_LINE(877)
			Array< ::Dynamic > tmp3 = this->transformations;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(877)
			Array< ::Dynamic > tmp4 = this->transformations;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(877)
			int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(877)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(877)
			::kha::math::FastMatrix3 tmp7 = tmp3->__get(tmp6).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(877)
			::kha::math::FastMatrix3 _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(877)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(877)
			Float tmp9 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(877)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(877)
			::cpp::Float32 value_x = tmp10;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(877)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(877)
			Float tmp12 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(877)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(877)
			::cpp::Float32 value_y = tmp13;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp14 = (_this->_02 * value_x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp15 = (_this->_12 * value_y);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp17 = _this->_22;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(877)
			::cpp::Float32 w = tmp18;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp19 = (_this->_00 * value_x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp20 = (_this->_10 * value_y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp22 = _this->_20;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp24 = w;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(877)
			Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(877)
			Float x1 = tmp25;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp26 = (_this->_01 * value_x);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp27 = (_this->_11 * value_y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp29 = _this->_21;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(877)
			::cpp::Float32 tmp31 = w;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(877)
			Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(877)
			Float y1 = tmp32;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(877)
			tmp2 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(877)
		::kha::math::FastVector2 p1 = tmp2;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(878)
		::kha::math::FastVector2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(878)
		{
			HX_STACK_LINE(878)
			Array< ::Dynamic > tmp4 = this->transformations;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(878)
			Array< ::Dynamic > tmp5 = this->transformations;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(878)
			int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(878)
			int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(878)
			::kha::math::FastMatrix3 tmp8 = tmp4->__get(tmp7).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(878)
			::kha::math::FastMatrix3 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(878)
			Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(878)
			Float tmp10 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(878)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(878)
			::cpp::Float32 value_x = tmp11;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(878)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(878)
			Float tmp13 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(878)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(878)
			::cpp::Float32 value_y = tmp14;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp15 = (_this->_02 * value_x);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp16 = (_this->_12 * value_y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp18 = _this->_22;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(878)
			::cpp::Float32 w = tmp19;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp20 = (_this->_00 * value_x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp21 = (_this->_10 * value_y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp23 = _this->_20;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp25 = w;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(878)
			Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(878)
			Float x1 = tmp26;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp27 = (_this->_01 * value_x);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp28 = (_this->_11 * value_y);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp30 = _this->_21;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(878)
			::cpp::Float32 tmp32 = w;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(878)
			Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(878)
			Float y1 = tmp33;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(878)
			tmp3 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(878)
		::kha::math::FastVector2 p2 = tmp3;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(879)
		::kha::math::FastVector2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(879)
		{
			HX_STACK_LINE(879)
			Array< ::Dynamic > tmp5 = this->transformations;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(879)
			Array< ::Dynamic > tmp6 = this->transformations;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(879)
			int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(879)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(879)
			::kha::math::FastMatrix3 tmp9 = tmp5->__get(tmp8).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(879)
			::kha::math::FastMatrix3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(879)
			Float tmp10 = (x + width);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(879)
			Float tmp11 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(879)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(879)
			::cpp::Float32 value_x = tmp12;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(879)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(879)
			Float tmp14 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(879)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(879)
			::cpp::Float32 value_y = tmp15;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp16 = (_this->_02 * value_x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp17 = (_this->_12 * value_y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp19 = _this->_22;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(879)
			::cpp::Float32 w = tmp20;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp21 = (_this->_00 * value_x);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp22 = (_this->_10 * value_y);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp24 = _this->_20;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp26 = w;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(879)
			Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(879)
			Float x1 = tmp27;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp28 = (_this->_01 * value_x);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp29 = (_this->_11 * value_y);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp31 = _this->_21;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(879)
			::cpp::Float32 tmp33 = w;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(879)
			Float tmp34 = (Float(tmp32) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(879)
			Float y1 = tmp34;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(879)
			tmp4 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(879)
		::kha::math::FastVector2 p3 = tmp4;		HX_STACK_VAR(p3,"p3");
		HX_STACK_LINE(880)
		::kha::math::FastVector2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(880)
		{
			HX_STACK_LINE(880)
			Array< ::Dynamic > tmp6 = this->transformations;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(880)
			Array< ::Dynamic > tmp7 = this->transformations;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(880)
			int tmp8 = tmp7->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(880)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(880)
			::kha::math::FastMatrix3 tmp10 = tmp6->__get(tmp9).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(880)
			::kha::math::FastMatrix3 _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(880)
			Float tmp11 = (x + width);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(880)
			Float tmp12 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(880)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(880)
			::cpp::Float32 value_x = tmp13;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(880)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(880)
			Float tmp15 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(880)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(880)
			::cpp::Float32 value_y = tmp16;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp17 = (_this->_02 * value_x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp18 = (_this->_12 * value_y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp20 = _this->_22;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(880)
			::cpp::Float32 w = tmp21;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp22 = (_this->_00 * value_x);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp23 = (_this->_10 * value_y);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp25 = _this->_20;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp27 = w;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(880)
			Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(880)
			Float x1 = tmp28;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp29 = (_this->_01 * value_x);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp30 = (_this->_11 * value_y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp32 = _this->_21;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(880)
			::cpp::Float32 tmp34 = w;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(880)
			Float tmp35 = (Float(tmp33) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(880)
			Float y1 = tmp35;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(880)
			tmp5 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(880)
		::kha::math::FastVector2 p4 = tmp5;		HX_STACK_VAR(p4,"p4");
		HX_STACK_LINE(881)
		::kha::graphics4::ColoredShaderPainter tmp6 = this->coloredPainter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(881)
		int tmp7 = this->get_color();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(881)
		::cpp::Float32 tmp8 = p1->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(881)
		::cpp::Float32 tmp9 = p1->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(881)
		::cpp::Float32 tmp10 = p2->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(881)
		::cpp::Float32 tmp11 = p2->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(881)
		::cpp::Float32 tmp12 = p3->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(881)
		::cpp::Float32 tmp13 = p3->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(881)
		::cpp::Float32 tmp14 = p4->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(881)
		::cpp::Float32 tmp15 = p4->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(881)
		tmp6->fillRect(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
		HX_STACK_LINE(883)
		::kha::math::FastVector2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(883)
		{
			HX_STACK_LINE(883)
			Array< ::Dynamic > tmp17 = this->transformations;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(883)
			Array< ::Dynamic > tmp18 = this->transformations;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(883)
			int tmp19 = tmp18->length;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(883)
			int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(883)
			::kha::math::FastMatrix3 tmp21 = tmp17->__get(tmp20).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(883)
			::kha::math::FastMatrix3 _this = tmp21;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(883)
			Float tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(883)
			Float tmp23 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(883)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(883)
			::cpp::Float32 value_x = tmp24;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(883)
			Float tmp25 = (y + height);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(883)
			Float tmp26 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(883)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(883)
			::cpp::Float32 value_y = tmp27;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp28 = (_this->_02 * value_x);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp29 = (_this->_12 * value_y);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp31 = _this->_22;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(883)
			::cpp::Float32 w = tmp32;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp33 = (_this->_00 * value_x);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp34 = (_this->_10 * value_y);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp36 = _this->_20;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp38 = w;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(883)
			Float tmp39 = (Float(tmp37) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(883)
			Float x1 = tmp39;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp40 = (_this->_01 * value_x);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp41 = (_this->_11 * value_y);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp43 = _this->_21;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(883)
			::cpp::Float32 tmp45 = w;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(883)
			Float tmp46 = (Float(tmp44) / Float(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(883)
			Float y1 = tmp46;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(883)
			tmp16 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(883)
		p1 = tmp16;
		HX_STACK_LINE(884)
		::kha::math::FastVector2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(884)
		{
			HX_STACK_LINE(884)
			Array< ::Dynamic > tmp18 = this->transformations;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(884)
			Array< ::Dynamic > tmp19 = this->transformations;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(884)
			int tmp20 = tmp19->length;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(884)
			int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(884)
			::kha::math::FastMatrix3 tmp22 = tmp18->__get(tmp21).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(884)
			::kha::math::FastMatrix3 _this = tmp22;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(884)
			Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(884)
			Float tmp24 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(884)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(884)
			::cpp::Float32 value_x = tmp25;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(884)
			Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(884)
			Float tmp27 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(884)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(884)
			::cpp::Float32 value_y = tmp28;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp29 = (_this->_02 * value_x);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp30 = (_this->_12 * value_y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp32 = _this->_22;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(884)
			::cpp::Float32 w = tmp33;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp34 = (_this->_00 * value_x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp35 = (_this->_10 * value_y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp37 = _this->_20;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp39 = w;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(884)
			Float tmp40 = (Float(tmp38) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(884)
			Float x1 = tmp40;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp41 = (_this->_01 * value_x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp42 = (_this->_11 * value_y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp44 = _this->_21;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(884)
			::cpp::Float32 tmp46 = w;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(884)
			Float tmp47 = (Float(tmp45) / Float(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(884)
			Float y1 = tmp47;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(884)
			tmp17 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(884)
		p3 = tmp17;
		HX_STACK_LINE(885)
		::kha::math::FastVector2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(885)
		{
			HX_STACK_LINE(885)
			Array< ::Dynamic > tmp19 = this->transformations;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(885)
			Array< ::Dynamic > tmp20 = this->transformations;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(885)
			int tmp21 = tmp20->length;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(885)
			int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(885)
			::kha::math::FastMatrix3 tmp23 = tmp19->__get(tmp22).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(885)
			::kha::math::FastMatrix3 _this = tmp23;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(885)
			Float tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(885)
			Float tmp25 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(885)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(885)
			::cpp::Float32 value_x = tmp26;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(885)
			Float tmp27 = (y + height);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(885)
			Float tmp28 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(885)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(885)
			::cpp::Float32 value_y = tmp29;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp30 = (_this->_02 * value_x);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp31 = (_this->_12 * value_y);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp33 = _this->_22;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(885)
			::cpp::Float32 w = tmp34;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp35 = (_this->_00 * value_x);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp36 = (_this->_10 * value_y);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp38 = _this->_20;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp40 = w;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(885)
			Float tmp41 = (Float(tmp39) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(885)
			Float x1 = tmp41;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp42 = (_this->_01 * value_x);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp43 = (_this->_11 * value_y);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp45 = _this->_21;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(885)
			::cpp::Float32 tmp47 = w;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(885)
			Float tmp48 = (Float(tmp46) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(885)
			Float y1 = tmp48;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(885)
			tmp18 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(885)
		p4 = tmp18;
		HX_STACK_LINE(886)
		::kha::graphics4::ColoredShaderPainter tmp19 = this->coloredPainter;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(886)
		int tmp20 = this->get_color();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(886)
		::cpp::Float32 tmp21 = p1->x;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(886)
		::cpp::Float32 tmp22 = p1->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(886)
		::cpp::Float32 tmp23 = p2->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(886)
		::cpp::Float32 tmp24 = p2->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(886)
		::cpp::Float32 tmp25 = p3->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(886)
		::cpp::Float32 tmp26 = p3->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(886)
		::cpp::Float32 tmp27 = p4->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(886)
		::cpp::Float32 tmp28 = p4->y;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(886)
		tmp19->fillRect(tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28);
		HX_STACK_LINE(888)
		::kha::math::FastVector2 tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(888)
		{
			HX_STACK_LINE(888)
			Array< ::Dynamic > tmp30 = this->transformations;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(888)
			Array< ::Dynamic > tmp31 = this->transformations;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(888)
			int tmp32 = tmp31->length;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(888)
			int tmp33 = (tmp32 - (int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(888)
			::kha::math::FastMatrix3 tmp34 = tmp30->__get(tmp33).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(888)
			::kha::math::FastMatrix3 _this = tmp34;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(888)
			Float tmp35 = x;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(888)
			Float tmp36 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(888)
			Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(888)
			::cpp::Float32 value_x = tmp37;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(888)
			Float tmp38 = (y + height);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(888)
			Float tmp39 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(888)
			Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(888)
			::cpp::Float32 value_y = tmp40;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp41 = (_this->_02 * value_x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp42 = (_this->_12 * value_y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp44 = _this->_22;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(888)
			::cpp::Float32 w = tmp45;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp46 = (_this->_00 * value_x);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp47 = (_this->_10 * value_y);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp49 = _this->_20;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp51 = w;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(888)
			Float tmp52 = (Float(tmp50) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(888)
			Float x1 = tmp52;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp53 = (_this->_01 * value_x);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp54 = (_this->_11 * value_y);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp56 = _this->_21;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(888)
			::cpp::Float32 tmp58 = w;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(888)
			Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(888)
			Float y1 = tmp59;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(888)
			tmp29 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(888)
		p2 = tmp29;
		HX_STACK_LINE(889)
		::kha::math::FastVector2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(889)
		{
			HX_STACK_LINE(889)
			Array< ::Dynamic > tmp31 = this->transformations;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(889)
			Array< ::Dynamic > tmp32 = this->transformations;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(889)
			int tmp33 = tmp32->length;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(889)
			int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(889)
			::kha::math::FastMatrix3 tmp35 = tmp31->__get(tmp34).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(889)
			::kha::math::FastMatrix3 _this = tmp35;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(889)
			Float tmp36 = (x + width);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(889)
			Float tmp37 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(889)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(889)
			::cpp::Float32 value_x = tmp38;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(889)
			Float tmp39 = (y + height);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(889)
			Float tmp40 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(889)
			Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(889)
			::cpp::Float32 value_y = tmp41;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp42 = (_this->_02 * value_x);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp43 = (_this->_12 * value_y);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp45 = _this->_22;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(889)
			::cpp::Float32 w = tmp46;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp47 = (_this->_00 * value_x);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp48 = (_this->_10 * value_y);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp50 = _this->_20;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp52 = w;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(889)
			Float tmp53 = (Float(tmp51) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(889)
			Float x1 = tmp53;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp54 = (_this->_01 * value_x);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp55 = (_this->_11 * value_y);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp57 = _this->_21;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(889)
			::cpp::Float32 tmp59 = w;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(889)
			Float tmp60 = (Float(tmp58) / Float(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(889)
			Float y1 = tmp60;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(889)
			tmp30 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(889)
		p3 = tmp30;
		HX_STACK_LINE(890)
		::kha::math::FastVector2 tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			Array< ::Dynamic > tmp32 = this->transformations;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(890)
			Array< ::Dynamic > tmp33 = this->transformations;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(890)
			int tmp34 = tmp33->length;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(890)
			int tmp35 = (tmp34 - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(890)
			::kha::math::FastMatrix3 tmp36 = tmp32->__get(tmp35).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(890)
			::kha::math::FastMatrix3 _this = tmp36;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(890)
			Float tmp37 = (x + width);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(890)
			Float tmp38 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(890)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(890)
			::cpp::Float32 value_x = tmp39;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(890)
			Float tmp40 = (y + height);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(890)
			Float tmp41 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(890)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(890)
			::cpp::Float32 value_y = tmp42;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp43 = (_this->_02 * value_x);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp44 = (_this->_12 * value_y);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp46 = _this->_22;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(890)
			::cpp::Float32 w = tmp47;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp48 = (_this->_00 * value_x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp49 = (_this->_10 * value_y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp51 = _this->_20;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp53 = w;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(890)
			Float tmp54 = (Float(tmp52) / Float(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(890)
			Float x1 = tmp54;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp55 = (_this->_01 * value_x);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp56 = (_this->_11 * value_y);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp58 = _this->_21;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(890)
			::cpp::Float32 tmp60 = w;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(890)
			Float tmp61 = (Float(tmp59) / Float(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(890)
			Float y1 = tmp61;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(890)
			tmp31 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(890)
		p4 = tmp31;
		HX_STACK_LINE(891)
		::kha::graphics4::ColoredShaderPainter tmp32 = this->coloredPainter;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(891)
		int tmp33 = this->get_color();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(891)
		::cpp::Float32 tmp34 = p1->x;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(891)
		::cpp::Float32 tmp35 = p1->y;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(891)
		::cpp::Float32 tmp36 = p2->x;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(891)
		::cpp::Float32 tmp37 = p2->y;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(891)
		::cpp::Float32 tmp38 = p3->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(891)
		::cpp::Float32 tmp39 = p3->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(891)
		::cpp::Float32 tmp40 = p4->x;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(891)
		::cpp::Float32 tmp41 = p4->y;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(891)
		tmp32->fillRect(tmp33,tmp34,tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);
		HX_STACK_LINE(893)
		::kha::math::FastVector2 tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(893)
		{
			HX_STACK_LINE(893)
			Array< ::Dynamic > tmp43 = this->transformations;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(893)
			Array< ::Dynamic > tmp44 = this->transformations;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(893)
			int tmp45 = tmp44->length;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(893)
			int tmp46 = (tmp45 - (int)1);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(893)
			::kha::math::FastMatrix3 tmp47 = tmp43->__get(tmp46).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(893)
			::kha::math::FastMatrix3 _this = tmp47;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(893)
			Float tmp48 = (x + width);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(893)
			Float tmp49 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(893)
			Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(893)
			::cpp::Float32 value_x = tmp50;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(893)
			Float tmp51 = (y + height);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(893)
			Float tmp52 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(893)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(893)
			::cpp::Float32 value_y = tmp53;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp54 = (_this->_02 * value_x);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp55 = (_this->_12 * value_y);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp57 = _this->_22;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(893)
			::cpp::Float32 w = tmp58;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp59 = (_this->_00 * value_x);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp60 = (_this->_10 * value_y);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp62 = _this->_20;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp64 = w;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(893)
			Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(893)
			Float x1 = tmp65;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp66 = (_this->_01 * value_x);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp67 = (_this->_11 * value_y);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp69 = _this->_21;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(893)
			::cpp::Float32 tmp71 = w;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(893)
			Float tmp72 = (Float(tmp70) / Float(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(893)
			Float y1 = tmp72;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(893)
			tmp42 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(893)
		p1 = tmp42;
		HX_STACK_LINE(894)
		::kha::math::FastVector2 tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(894)
		{
			HX_STACK_LINE(894)
			Array< ::Dynamic > tmp44 = this->transformations;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(894)
			Array< ::Dynamic > tmp45 = this->transformations;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(894)
			int tmp46 = tmp45->length;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(894)
			int tmp47 = (tmp46 - (int)1);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(894)
			::kha::math::FastMatrix3 tmp48 = tmp44->__get(tmp47).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(894)
			::kha::math::FastMatrix3 _this = tmp48;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(894)
			Float tmp49 = (x + width);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(894)
			Float tmp50 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(894)
			Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(894)
			::cpp::Float32 value_x = tmp51;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(894)
			Float tmp52 = y;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(894)
			Float tmp53 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(894)
			Float tmp54 = (tmp52 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(894)
			::cpp::Float32 value_y = tmp54;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp55 = (_this->_02 * value_x);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp56 = (_this->_12 * value_y);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp58 = _this->_22;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(894)
			::cpp::Float32 w = tmp59;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp60 = (_this->_00 * value_x);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp61 = (_this->_10 * value_y);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp63 = _this->_20;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp65 = w;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(894)
			Float tmp66 = (Float(tmp64) / Float(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(894)
			Float x1 = tmp66;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp67 = (_this->_01 * value_x);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp68 = (_this->_11 * value_y);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp70 = _this->_21;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(894)
			::cpp::Float32 tmp72 = w;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(894)
			Float tmp73 = (Float(tmp71) / Float(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(894)
			Float y1 = tmp73;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(894)
			tmp43 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(894)
		p2 = tmp43;
		HX_STACK_LINE(895)
		::kha::math::FastVector2 tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(895)
		{
			HX_STACK_LINE(895)
			Array< ::Dynamic > tmp45 = this->transformations;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(895)
			Array< ::Dynamic > tmp46 = this->transformations;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(895)
			int tmp47 = tmp46->length;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(895)
			int tmp48 = (tmp47 - (int)1);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(895)
			::kha::math::FastMatrix3 tmp49 = tmp45->__get(tmp48).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(895)
			::kha::math::FastMatrix3 _this = tmp49;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(895)
			Float tmp50 = (x + width);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(895)
			Float tmp51 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(895)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(895)
			::cpp::Float32 value_x = tmp52;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(895)
			Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(895)
			Float tmp54 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(895)
			Float tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(895)
			::cpp::Float32 value_y = tmp55;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp56 = (_this->_02 * value_x);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp57 = (_this->_12 * value_y);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp59 = _this->_22;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(895)
			::cpp::Float32 w = tmp60;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp61 = (_this->_00 * value_x);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp62 = (_this->_10 * value_y);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp64 = _this->_20;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp66 = w;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(895)
			Float tmp67 = (Float(tmp65) / Float(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(895)
			Float x1 = tmp67;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp68 = (_this->_01 * value_x);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp69 = (_this->_11 * value_y);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp71 = _this->_21;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(895)
			::cpp::Float32 tmp73 = w;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(895)
			Float tmp74 = (Float(tmp72) / Float(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(895)
			Float y1 = tmp74;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(895)
			tmp44 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(895)
		p3 = tmp44;
		HX_STACK_LINE(896)
		::kha::math::FastVector2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(896)
		{
			HX_STACK_LINE(896)
			Array< ::Dynamic > tmp46 = this->transformations;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(896)
			Array< ::Dynamic > tmp47 = this->transformations;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(896)
			int tmp48 = tmp47->length;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(896)
			int tmp49 = (tmp48 - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(896)
			::kha::math::FastMatrix3 tmp50 = tmp46->__get(tmp49).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(896)
			::kha::math::FastMatrix3 _this = tmp50;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(896)
			Float tmp51 = (x + width);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(896)
			Float tmp52 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(896)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(896)
			::cpp::Float32 value_x = tmp53;		HX_STACK_VAR(value_x,"value_x");
			HX_STACK_LINE(896)
			Float tmp54 = (y + height);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(896)
			Float tmp55 = (Float(strength) / Float((int)2));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(896)
			Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(896)
			::cpp::Float32 value_y = tmp56;		HX_STACK_VAR(value_y,"value_y");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp57 = (_this->_02 * value_x);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp58 = (_this->_12 * value_y);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp60 = _this->_22;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(896)
			::cpp::Float32 w = tmp61;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp62 = (_this->_00 * value_x);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp63 = (_this->_10 * value_y);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp65 = _this->_20;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp67 = w;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(896)
			Float tmp68 = (Float(tmp66) / Float(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(896)
			Float x1 = tmp68;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp69 = (_this->_01 * value_x);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp70 = (_this->_11 * value_y);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp72 = _this->_21;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(896)
			::cpp::Float32 tmp74 = w;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(896)
			Float tmp75 = (Float(tmp73) / Float(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(896)
			Float y1 = tmp75;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(896)
			tmp45 = ::kha::math::FastVector2_obj::__new(x1,y1);
		}
		HX_STACK_LINE(896)
		p4 = tmp45;
		HX_STACK_LINE(897)
		::kha::graphics4::ColoredShaderPainter tmp46 = this->coloredPainter;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(897)
		int tmp47 = this->get_color();		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(897)
		::cpp::Float32 tmp48 = p1->x;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(897)
		::cpp::Float32 tmp49 = p1->y;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(897)
		::cpp::Float32 tmp50 = p2->x;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(897)
		::cpp::Float32 tmp51 = p2->y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(897)
		::cpp::Float32 tmp52 = p3->x;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(897)
		::cpp::Float32 tmp53 = p3->y;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(897)
		::cpp::Float32 tmp54 = p4->x;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(897)
		::cpp::Float32 tmp55 = p4->y;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(897)
		tmp46->fillRect(tmp47,tmp48,tmp49,tmp50,tmp51,tmp52,tmp53,tmp54,tmp55);
	}
return null();
}


Void Graphics2_obj::fillRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","fillRect",0x1d1e787d,"kha.graphics4.Graphics2.fillRect","kha/graphics4/Graphics2.hx",900,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(901)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(901)
		tmp->end();
		HX_STACK_LINE(902)
		::kha::graphics4::TextShaderPainter tmp1 = this->textPainter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(902)
		tmp1->end();
		HX_STACK_LINE(904)
		Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(904)
		Array< ::Dynamic > tmp3 = this->transformations;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(904)
		int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(904)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(904)
		::kha::math::FastMatrix3 tmp6 = tmp2->__get(tmp5).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(904)
		::kha::math::FastMatrix3 _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(904)
		::cpp::Float32 value_x = x;		HX_STACK_VAR(value_x,"value_x");
		HX_STACK_LINE(904)
		Float tmp7 = (y + height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(904)
		::cpp::Float32 value_y = tmp7;		HX_STACK_VAR(value_y,"value_y");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp8 = (_this->_02 * value_x);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp9 = (_this->_12 * value_y);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp11 = _this->_22;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(904)
		::cpp::Float32 w = tmp12;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp13 = (_this->_00 * value_x);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp14 = (_this->_10 * value_y);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp16 = _this->_20;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp18 = w;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(904)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(904)
		Float x1 = tmp19;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp20 = (_this->_01 * value_x);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp21 = (_this->_11 * value_y);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp23 = _this->_21;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(904)
		::cpp::Float32 tmp25 = w;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(904)
		Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(904)
		Float y1 = tmp26;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(904)
		::cpp::Float32 p1_x = x1;		HX_STACK_VAR(p1_x,"p1_x");
		HX_STACK_LINE(904)
		::cpp::Float32 p1_y = y1;		HX_STACK_VAR(p1_y,"p1_y");
		HX_STACK_LINE(905)
		Array< ::Dynamic > tmp27 = this->transformations;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(905)
		Array< ::Dynamic > tmp28 = this->transformations;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(905)
		int tmp29 = tmp28->length;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(905)
		int tmp30 = (tmp29 - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(905)
		::kha::math::FastMatrix3 tmp31 = tmp27->__get(tmp30).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(905)
		::kha::math::FastMatrix3 _this1 = tmp31;		HX_STACK_VAR(_this1,"_this1");
		HX_STACK_LINE(905)
		::cpp::Float32 value_x1 = x;		HX_STACK_VAR(value_x1,"value_x1");
		HX_STACK_LINE(905)
		::cpp::Float32 value_y1 = y;		HX_STACK_VAR(value_y1,"value_y1");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp32 = (_this1->_02 * value_x1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp33 = (_this1->_12 * value_y1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp35 = _this1->_22;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(905)
		::cpp::Float32 w1 = tmp36;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp37 = (_this1->_00 * value_x1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp38 = (_this1->_10 * value_y1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp40 = _this1->_20;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp42 = w1;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(905)
		Float tmp43 = (Float(tmp41) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(905)
		Float x2 = tmp43;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp44 = (_this1->_01 * value_x1);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp45 = (_this1->_11 * value_y1);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp47 = _this1->_21;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(905)
		::cpp::Float32 tmp49 = w1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(905)
		Float tmp50 = (Float(tmp48) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(905)
		Float y2 = tmp50;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(905)
		::cpp::Float32 p2_x = x2;		HX_STACK_VAR(p2_x,"p2_x");
		HX_STACK_LINE(905)
		::cpp::Float32 p2_y = y2;		HX_STACK_VAR(p2_y,"p2_y");
		HX_STACK_LINE(906)
		Array< ::Dynamic > tmp51 = this->transformations;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(906)
		Array< ::Dynamic > tmp52 = this->transformations;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(906)
		int tmp53 = tmp52->length;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(906)
		int tmp54 = (tmp53 - (int)1);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(906)
		::kha::math::FastMatrix3 tmp55 = tmp51->__get(tmp54).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(906)
		::kha::math::FastMatrix3 _this2 = tmp55;		HX_STACK_VAR(_this2,"_this2");
		HX_STACK_LINE(906)
		Float tmp56 = (x + width);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(906)
		::cpp::Float32 value_x2 = tmp56;		HX_STACK_VAR(value_x2,"value_x2");
		HX_STACK_LINE(906)
		::cpp::Float32 value_y2 = y;		HX_STACK_VAR(value_y2,"value_y2");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp57 = (_this2->_02 * value_x2);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp58 = (_this2->_12 * value_y2);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp60 = _this2->_22;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(906)
		::cpp::Float32 w2 = tmp61;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp62 = (_this2->_00 * value_x2);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp63 = (_this2->_10 * value_y2);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp65 = _this2->_20;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp67 = w2;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(906)
		Float tmp68 = (Float(tmp66) / Float(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(906)
		Float x3 = tmp68;		HX_STACK_VAR(x3,"x3");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp69 = (_this2->_01 * value_x2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp70 = (_this2->_11 * value_y2);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp72 = _this2->_21;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(906)
		::cpp::Float32 tmp74 = w2;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(906)
		Float tmp75 = (Float(tmp73) / Float(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(906)
		Float y3 = tmp75;		HX_STACK_VAR(y3,"y3");
		HX_STACK_LINE(906)
		::cpp::Float32 p3_x = x3;		HX_STACK_VAR(p3_x,"p3_x");
		HX_STACK_LINE(906)
		::cpp::Float32 p3_y = y3;		HX_STACK_VAR(p3_y,"p3_y");
		HX_STACK_LINE(907)
		Array< ::Dynamic > tmp76 = this->transformations;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(907)
		Array< ::Dynamic > tmp77 = this->transformations;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(907)
		int tmp78 = tmp77->length;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(907)
		int tmp79 = (tmp78 - (int)1);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(907)
		::kha::math::FastMatrix3 tmp80 = tmp76->__get(tmp79).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(907)
		::kha::math::FastMatrix3 _this3 = tmp80;		HX_STACK_VAR(_this3,"_this3");
		HX_STACK_LINE(907)
		Float tmp81 = (x + width);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(907)
		::cpp::Float32 value_x3 = tmp81;		HX_STACK_VAR(value_x3,"value_x3");
		HX_STACK_LINE(907)
		Float tmp82 = (y + height);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(907)
		::cpp::Float32 value_y3 = tmp82;		HX_STACK_VAR(value_y3,"value_y3");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp83 = (_this3->_02 * value_x3);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp84 = (_this3->_12 * value_y3);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp86 = _this3->_22;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(907)
		::cpp::Float32 w3 = tmp87;		HX_STACK_VAR(w3,"w3");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp88 = (_this3->_00 * value_x3);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp89 = (_this3->_10 * value_y3);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp91 = _this3->_20;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp93 = w3;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(907)
		Float tmp94 = (Float(tmp92) / Float(tmp93));		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(907)
		Float x4 = tmp94;		HX_STACK_VAR(x4,"x4");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp95 = (_this3->_01 * value_x3);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp96 = (_this3->_11 * value_y3);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp98 = _this3->_21;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(907)
		::cpp::Float32 tmp100 = w3;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(907)
		Float tmp101 = (Float(tmp99) / Float(tmp100));		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(907)
		Float y4 = tmp101;		HX_STACK_VAR(y4,"y4");
		HX_STACK_LINE(907)
		::cpp::Float32 p4_x = x4;		HX_STACK_VAR(p4_x,"p4_x");
		HX_STACK_LINE(907)
		::cpp::Float32 p4_y = y4;		HX_STACK_VAR(p4_y,"p4_y");
		HX_STACK_LINE(908)
		::kha::graphics4::ColoredShaderPainter tmp102 = this->coloredPainter;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(908)
		int tmp103 = this->get_color();		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(900)
		::cpp::Float32 tmp104 = p1_x;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(900)
		::cpp::Float32 tmp105 = p1_y;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(900)
		::cpp::Float32 tmp106 = p2_x;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(900)
		::cpp::Float32 tmp107 = p2_y;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(900)
		::cpp::Float32 tmp108 = p3_x;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(900)
		::cpp::Float32 tmp109 = p3_y;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(900)
		::cpp::Float32 tmp110 = p4_x;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(900)
		::cpp::Float32 tmp111 = p4_y;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(908)
		tmp102->fillRect(tmp103,tmp104,tmp105,tmp106,tmp107,tmp108,tmp109,tmp110,tmp111);
	}
return null();
}


Void Graphics2_obj::drawString( ::String text,Float x,Float y){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","drawString",0xcd7490ab,"kha.graphics4.Graphics2.drawString","kha/graphics4/Graphics2.hx",911,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(912)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(912)
		tmp->end();
		HX_STACK_LINE(913)
		{
			HX_STACK_LINE(913)
			::kha::graphics4::ColoredShaderPainter tmp1 = this->coloredPainter;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(913)
			::kha::graphics4::ColoredShaderPainter _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(913)
			{
				HX_STACK_LINE(913)
				bool tmp2 = (_this->triangleBufferIndex > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(913)
				if ((tmp2)){
					HX_STACK_LINE(913)
					_this->drawTriBuffer(false);
				}
			}
			HX_STACK_LINE(913)
			{
				HX_STACK_LINE(913)
				bool tmp2 = (_this->bufferIndex > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(913)
				if ((tmp2)){
					HX_STACK_LINE(913)
					_this->drawBuffer(false);
				}
			}
		}
		HX_STACK_LINE(915)
		::kha::graphics4::TextShaderPainter tmp1 = this->textPainter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(915)
		::String tmp2 = text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(915)
		int tmp3 = this->get_color();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(915)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(915)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(915)
		Array< ::Dynamic > tmp6 = this->transformations;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(915)
		Array< ::Dynamic > tmp7 = this->transformations;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(915)
		int tmp8 = tmp7->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(915)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(915)
		::kha::math::FastMatrix3 tmp10 = tmp6->__get(tmp9).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(915)
		tmp1->drawString(tmp2,tmp3,tmp4,tmp5,tmp10);
	}
return null();
}


::kha::Font Graphics2_obj::get_font( ){
	HX_STACK_FRAME("kha.graphics4.Graphics2","get_font",0x73e04c8e,"kha.graphics4.Graphics2.get_font","kha/graphics4/Graphics2.hx",918,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(919)
	::kha::Font tmp = this->myFont;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(919)
	return tmp;
}


::kha::Font Graphics2_obj::set_font( ::kha::Font font){
	HX_STACK_FRAME("kha.graphics4.Graphics2","set_font",0x223da602,"kha.graphics4.Graphics2.set_font","kha/graphics4/Graphics2.hx",922,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_LINE(923)
	::kha::graphics4::TextShaderPainter tmp = this->textPainter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(923)
	::kha::Font tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(923)
	tmp->setFont(tmp1);
	HX_STACK_LINE(924)
	::kha::Font tmp2 = this->myFont = font;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(924)
	return tmp2;
}


Void Graphics2_obj::drawLine( Float x1,Float y1,Float x2,Float y2,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(((Float)1.0));
	HX_STACK_FRAME("kha.graphics4.Graphics2","drawLine",0x0c81f54e,"kha.graphics4.Graphics2.drawLine","kha/graphics4/Graphics2.hx",927,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(strength,"strength")
{
		HX_STACK_LINE(928)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(928)
		tmp->end();
		HX_STACK_LINE(929)
		::kha::graphics4::TextShaderPainter tmp1 = this->textPainter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(929)
		tmp1->end();
		HX_STACK_LINE(931)
		::kha::math::FastVector2 vec;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(932)
		bool tmp2 = (y2 == y1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(932)
		if ((tmp2)){
			HX_STACK_LINE(932)
			::kha::math::FastVector2 tmp3 = ::kha::math::FastVector2_obj::__new((int)0,(int)-1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(932)
			vec = tmp3;
		}
		else{
			HX_STACK_LINE(933)
			Float tmp3 = (x2 - x1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(933)
			Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(933)
			Float tmp5 = (y2 - y1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(933)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(933)
			::kha::math::FastVector2 tmp7 = ::kha::math::FastVector2_obj::__new((int)1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(933)
			vec = tmp7;
		}
		HX_STACK_LINE(934)
		Float tmp3 = strength;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(934)
		vec->set_length(tmp3);
		HX_STACK_LINE(935)
		Float tmp4 = x1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(935)
		Float tmp5 = (((Float)0.5) * vec->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(935)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(935)
		Float tmp7 = y1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(935)
		Float tmp8 = (((Float)0.5) * vec->y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(935)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(935)
		::kha::math::FastVector2 p1 = ::kha::math::FastVector2_obj::__new(tmp6,tmp9);		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(936)
		Float tmp10 = x2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(936)
		Float tmp11 = (((Float)0.5) * vec->x);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(936)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(936)
		Float tmp13 = y2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(936)
		Float tmp14 = (((Float)0.5) * vec->y);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(936)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(936)
		::kha::math::FastVector2 p2 = ::kha::math::FastVector2_obj::__new(tmp12,tmp15);		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(937)
		::cpp::Float32 tmp16 = (p1->x - vec->x);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(937)
		::cpp::Float32 tmp17 = (p1->y - vec->y);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(937)
		::kha::math::FastVector2 p3 = ::kha::math::FastVector2_obj::__new(tmp16,tmp17);		HX_STACK_VAR(p3,"p3");
		HX_STACK_LINE(938)
		::cpp::Float32 tmp18 = (p2->x - vec->x);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(938)
		::cpp::Float32 tmp19 = (p2->y - vec->y);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(938)
		::kha::math::FastVector2 p4 = ::kha::math::FastVector2_obj::__new(tmp18,tmp19);		HX_STACK_VAR(p4,"p4");
		HX_STACK_LINE(940)
		::kha::math::FastVector2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(940)
		{
			HX_STACK_LINE(940)
			Array< ::Dynamic > tmp21 = this->transformations;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(940)
			Array< ::Dynamic > tmp22 = this->transformations;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(940)
			int tmp23 = tmp22->length;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(940)
			int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(940)
			::kha::math::FastMatrix3 tmp25 = tmp21->__get(tmp24).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(940)
			::kha::math::FastMatrix3 _this = tmp25;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp26 = (_this->_02 * p1->x);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp27 = (_this->_12 * p1->y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp29 = _this->_22;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(940)
			::cpp::Float32 w = tmp30;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp31 = (_this->_00 * p1->x);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp32 = (_this->_10 * p1->y);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp34 = _this->_20;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp36 = w;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(940)
			Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(940)
			Float x = tmp37;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp38 = (_this->_01 * p1->x);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp39 = (_this->_11 * p1->y);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp41 = _this->_21;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(940)
			::cpp::Float32 tmp43 = w;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(940)
			Float tmp44 = (Float(tmp42) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(940)
			Float y = tmp44;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(940)
			tmp20 = ::kha::math::FastVector2_obj::__new(x,y);
		}
		HX_STACK_LINE(940)
		p1 = tmp20;
		HX_STACK_LINE(941)
		::kha::math::FastVector2 tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(941)
		{
			HX_STACK_LINE(941)
			Array< ::Dynamic > tmp22 = this->transformations;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(941)
			Array< ::Dynamic > tmp23 = this->transformations;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(941)
			int tmp24 = tmp23->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(941)
			int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(941)
			::kha::math::FastMatrix3 tmp26 = tmp22->__get(tmp25).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(941)
			::kha::math::FastMatrix3 _this = tmp26;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp27 = (_this->_02 * p2->x);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp28 = (_this->_12 * p2->y);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp30 = _this->_22;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(941)
			::cpp::Float32 w = tmp31;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp32 = (_this->_00 * p2->x);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp33 = (_this->_10 * p2->y);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp35 = _this->_20;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp37 = w;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(941)
			Float tmp38 = (Float(tmp36) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(941)
			Float x = tmp38;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp39 = (_this->_01 * p2->x);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp40 = (_this->_11 * p2->y);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp42 = _this->_21;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(941)
			::cpp::Float32 tmp44 = w;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(941)
			Float tmp45 = (Float(tmp43) / Float(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(941)
			Float y = tmp45;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(941)
			tmp21 = ::kha::math::FastVector2_obj::__new(x,y);
		}
		HX_STACK_LINE(941)
		p2 = tmp21;
		HX_STACK_LINE(942)
		::kha::math::FastVector2 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(942)
		{
			HX_STACK_LINE(942)
			Array< ::Dynamic > tmp23 = this->transformations;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(942)
			Array< ::Dynamic > tmp24 = this->transformations;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(942)
			int tmp25 = tmp24->length;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(942)
			int tmp26 = (tmp25 - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(942)
			::kha::math::FastMatrix3 tmp27 = tmp23->__get(tmp26).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(942)
			::kha::math::FastMatrix3 _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp28 = (_this->_02 * p3->x);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp29 = (_this->_12 * p3->y);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp31 = _this->_22;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(942)
			::cpp::Float32 w = tmp32;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp33 = (_this->_00 * p3->x);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp34 = (_this->_10 * p3->y);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp36 = _this->_20;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp38 = w;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(942)
			Float tmp39 = (Float(tmp37) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(942)
			Float x = tmp39;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp40 = (_this->_01 * p3->x);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp41 = (_this->_11 * p3->y);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp43 = _this->_21;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(942)
			::cpp::Float32 tmp45 = w;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(942)
			Float tmp46 = (Float(tmp44) / Float(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(942)
			Float y = tmp46;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(942)
			tmp22 = ::kha::math::FastVector2_obj::__new(x,y);
		}
		HX_STACK_LINE(942)
		p3 = tmp22;
		HX_STACK_LINE(943)
		::kha::math::FastVector2 tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(943)
		{
			HX_STACK_LINE(943)
			Array< ::Dynamic > tmp24 = this->transformations;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(943)
			Array< ::Dynamic > tmp25 = this->transformations;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(943)
			int tmp26 = tmp25->length;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(943)
			int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(943)
			::kha::math::FastMatrix3 tmp28 = tmp24->__get(tmp27).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(943)
			::kha::math::FastMatrix3 _this = tmp28;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp29 = (_this->_02 * p4->x);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp30 = (_this->_12 * p4->y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp32 = _this->_22;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(943)
			::cpp::Float32 w = tmp33;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp34 = (_this->_00 * p4->x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp35 = (_this->_10 * p4->y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp37 = _this->_20;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp39 = w;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(943)
			Float tmp40 = (Float(tmp38) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(943)
			Float x = tmp40;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp41 = (_this->_01 * p4->x);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp42 = (_this->_11 * p4->y);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp44 = _this->_21;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(943)
			::cpp::Float32 tmp46 = w;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(943)
			Float tmp47 = (Float(tmp45) / Float(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(943)
			Float y = tmp47;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(943)
			tmp23 = ::kha::math::FastVector2_obj::__new(x,y);
		}
		HX_STACK_LINE(943)
		p4 = tmp23;
		HX_STACK_LINE(945)
		::kha::graphics4::ColoredShaderPainter tmp24 = this->coloredPainter;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(945)
		int tmp25 = this->get_color();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(945)
		::cpp::Float32 tmp26 = p1->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(945)
		::cpp::Float32 tmp27 = p1->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(945)
		::cpp::Float32 tmp28 = p2->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(945)
		::cpp::Float32 tmp29 = p2->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(945)
		::cpp::Float32 tmp30 = p3->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(945)
		::cpp::Float32 tmp31 = p3->y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(945)
		tmp24->fillTriangle(tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31);
		HX_STACK_LINE(946)
		::kha::graphics4::ColoredShaderPainter tmp32 = this->coloredPainter;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(946)
		int tmp33 = this->get_color();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(946)
		::cpp::Float32 tmp34 = p3->x;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(946)
		::cpp::Float32 tmp35 = p3->y;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(946)
		::cpp::Float32 tmp36 = p2->x;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(946)
		::cpp::Float32 tmp37 = p2->y;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(946)
		::cpp::Float32 tmp38 = p4->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(946)
		::cpp::Float32 tmp39 = p4->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(946)
		tmp32->fillTriangle(tmp33,tmp34,tmp35,tmp36,tmp37,tmp38,tmp39);
	}
return null();
}


Void Graphics2_obj::fillTriangle( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","fillTriangle",0x60580aa1,"kha.graphics4.Graphics2.fillTriangle","kha/graphics4/Graphics2.hx",949,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(950)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(950)
		tmp->end();
		HX_STACK_LINE(951)
		::kha::graphics4::TextShaderPainter tmp1 = this->textPainter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(951)
		tmp1->end();
		HX_STACK_LINE(953)
		Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(953)
		Array< ::Dynamic > tmp3 = this->transformations;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(953)
		int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(953)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(953)
		::kha::math::FastMatrix3 tmp6 = tmp2->__get(tmp5).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(953)
		::kha::math::FastMatrix3 _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(953)
		::cpp::Float32 value_x = x1;		HX_STACK_VAR(value_x,"value_x");
		HX_STACK_LINE(953)
		::cpp::Float32 value_y = y1;		HX_STACK_VAR(value_y,"value_y");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp7 = (_this->_02 * value_x);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp8 = (_this->_12 * value_y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp10 = _this->_22;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(953)
		::cpp::Float32 w = tmp11;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp12 = (_this->_00 * value_x);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp13 = (_this->_10 * value_y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp15 = _this->_20;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp17 = w;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(953)
		Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(953)
		Float x = tmp18;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp19 = (_this->_01 * value_x);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp20 = (_this->_11 * value_y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp22 = _this->_21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(953)
		::cpp::Float32 tmp24 = w;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(953)
		Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(953)
		Float y = tmp25;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(953)
		::cpp::Float32 p1_x = x;		HX_STACK_VAR(p1_x,"p1_x");
		HX_STACK_LINE(953)
		::cpp::Float32 p1_y = y;		HX_STACK_VAR(p1_y,"p1_y");
		HX_STACK_LINE(954)
		Array< ::Dynamic > tmp26 = this->transformations;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(954)
		Array< ::Dynamic > tmp27 = this->transformations;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(954)
		int tmp28 = tmp27->length;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(954)
		int tmp29 = (tmp28 - (int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(954)
		::kha::math::FastMatrix3 tmp30 = tmp26->__get(tmp29).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(954)
		::kha::math::FastMatrix3 _this1 = tmp30;		HX_STACK_VAR(_this1,"_this1");
		HX_STACK_LINE(954)
		::cpp::Float32 value_x1 = x2;		HX_STACK_VAR(value_x1,"value_x1");
		HX_STACK_LINE(954)
		::cpp::Float32 value_y1 = y2;		HX_STACK_VAR(value_y1,"value_y1");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp31 = (_this1->_02 * value_x1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp32 = (_this1->_12 * value_y1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp34 = _this1->_22;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(954)
		::cpp::Float32 w1 = tmp35;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp36 = (_this1->_00 * value_x1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp37 = (_this1->_10 * value_y1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp39 = _this1->_20;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp41 = w1;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(954)
		Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(954)
		Float x4 = tmp42;		HX_STACK_VAR(x4,"x4");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp43 = (_this1->_01 * value_x1);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp44 = (_this1->_11 * value_y1);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp46 = _this1->_21;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(954)
		::cpp::Float32 tmp48 = w1;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(954)
		Float tmp49 = (Float(tmp47) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(954)
		Float y4 = tmp49;		HX_STACK_VAR(y4,"y4");
		HX_STACK_LINE(954)
		::cpp::Float32 p2_x = x4;		HX_STACK_VAR(p2_x,"p2_x");
		HX_STACK_LINE(954)
		::cpp::Float32 p2_y = y4;		HX_STACK_VAR(p2_y,"p2_y");
		HX_STACK_LINE(955)
		Array< ::Dynamic > tmp50 = this->transformations;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(955)
		Array< ::Dynamic > tmp51 = this->transformations;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(955)
		int tmp52 = tmp51->length;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(955)
		int tmp53 = (tmp52 - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(955)
		::kha::math::FastMatrix3 tmp54 = tmp50->__get(tmp53).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(955)
		::kha::math::FastMatrix3 _this2 = tmp54;		HX_STACK_VAR(_this2,"_this2");
		HX_STACK_LINE(955)
		::cpp::Float32 value_x2 = x3;		HX_STACK_VAR(value_x2,"value_x2");
		HX_STACK_LINE(955)
		::cpp::Float32 value_y2 = y3;		HX_STACK_VAR(value_y2,"value_y2");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp55 = (_this2->_02 * value_x2);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp56 = (_this2->_12 * value_y2);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp58 = _this2->_22;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(955)
		::cpp::Float32 w2 = tmp59;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp60 = (_this2->_00 * value_x2);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp61 = (_this2->_10 * value_y2);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp63 = _this2->_20;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp65 = w2;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(955)
		Float tmp66 = (Float(tmp64) / Float(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(955)
		Float x5 = tmp66;		HX_STACK_VAR(x5,"x5");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp67 = (_this2->_01 * value_x2);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp68 = (_this2->_11 * value_y2);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp70 = _this2->_21;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(955)
		::cpp::Float32 tmp72 = w2;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(955)
		Float tmp73 = (Float(tmp71) / Float(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(955)
		Float y5 = tmp73;		HX_STACK_VAR(y5,"y5");
		HX_STACK_LINE(955)
		::cpp::Float32 p3_x = x5;		HX_STACK_VAR(p3_x,"p3_x");
		HX_STACK_LINE(955)
		::cpp::Float32 p3_y = y5;		HX_STACK_VAR(p3_y,"p3_y");
		HX_STACK_LINE(956)
		::kha::graphics4::ColoredShaderPainter tmp74 = this->coloredPainter;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(956)
		int tmp75 = this->get_color();		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(949)
		::cpp::Float32 tmp76 = p1_x;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(949)
		::cpp::Float32 tmp77 = p1_y;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(949)
		::cpp::Float32 tmp78 = p2_x;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(949)
		::cpp::Float32 tmp79 = p2_y;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(949)
		::cpp::Float32 tmp80 = p3_x;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(949)
		::cpp::Float32 tmp81 = p3_y;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(956)
		tmp74->fillTriangle(tmp75,tmp76,tmp77,tmp78,tmp79,tmp80,tmp81);
	}
return null();
}


Void Graphics2_obj::setBilinearFiltering( bool bilinear){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","setBilinearFiltering",0xa0f995d2,"kha.graphics4.Graphics2.setBilinearFiltering","kha/graphics4/Graphics2.hx",959,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bilinear,"bilinear")
		HX_STACK_LINE(960)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(960)
		bool tmp1 = bilinear;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(960)
		tmp->setBilinearFilter(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics2_obj,setBilinearFiltering,(void))

Void Graphics2_obj::setProgram( ::kha::graphics4::Program program){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","setProgram",0xc1595bb8,"kha.graphics4.Graphics2.setProgram","kha/graphics4/Graphics2.hx",963,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(964)
		this->flush();
		HX_STACK_LINE(965)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(965)
		::kha::graphics4::Program tmp1 = program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(965)
		tmp->set_program(tmp1);
		HX_STACK_LINE(966)
		::kha::graphics4::ColoredShaderPainter tmp2 = this->coloredPainter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(966)
		::kha::graphics4::Program tmp3 = program;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(966)
		tmp2->set_program(tmp3);
		HX_STACK_LINE(967)
		::kha::graphics4::TextShaderPainter tmp4 = this->textPainter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(967)
		::kha::graphics4::Program tmp5 = program;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(967)
		tmp4->set_program(tmp5);
		HX_STACK_LINE(968)
		bool tmp6 = (program != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(968)
		if ((tmp6)){
			HX_STACK_LINE(968)
			::kha::graphics4::Graphics tmp7 = this->g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(968)
			::kha::graphics4::Program tmp8 = program;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(968)
			tmp7->setProgram(tmp8);
		}
	}
return null();
}


Void Graphics2_obj::setBlendingMode( ::kha::graphics4::BlendingOperation source,::kha::graphics4::BlendingOperation destination){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","setBlendingMode",0x7f4e6b80,"kha.graphics4.Graphics2.setBlendingMode","kha/graphics4/Graphics2.hx",971,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(destination,"destination")
		HX_STACK_LINE(972)
		this->flush();
		HX_STACK_LINE(973)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(973)
		tmp->sourceBlend = source;
		HX_STACK_LINE(974)
		::kha::graphics4::ImageShaderPainter tmp1 = this->imagePainter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(974)
		tmp1->destinationBlend = destination;
		HX_STACK_LINE(975)
		::kha::graphics4::ColoredShaderPainter tmp2 = this->coloredPainter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(975)
		tmp2->sourceBlend = source;
		HX_STACK_LINE(976)
		::kha::graphics4::ColoredShaderPainter tmp3 = this->coloredPainter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(976)
		tmp3->destinationBlend = destination;
		HX_STACK_LINE(977)
		::kha::graphics4::TextShaderPainter tmp4 = this->textPainter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(977)
		tmp4->sourceBlend = source;
		HX_STACK_LINE(978)
		::kha::graphics4::TextShaderPainter tmp5 = this->textPainter;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(978)
		tmp5->destinationBlend = destination;
	}
return null();
}


Void Graphics2_obj::begin( hx::Null< bool >  __o_clear,Dynamic clearColor){
bool clear = __o_clear.Default(true);
	HX_STACK_FRAME("kha.graphics4.Graphics2","begin",0xdda83933,"kha.graphics4.Graphics2.begin","kha/graphics4/Graphics2.hx",981,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clear,"clear")
	HX_STACK_ARG(clearColor,"clearColor")
{
		HX_STACK_LINE(982)
		::kha::graphics4::Graphics tmp = this->g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(982)
		tmp->begin();
		HX_STACK_LINE(983)
		bool tmp1 = clear;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(983)
		if ((tmp1)){
			HX_STACK_LINE(983)
			Dynamic tmp2 = clearColor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(983)
			this->clear(tmp2);
		}
		HX_STACK_LINE(984)
		this->setProjection();
		HX_STACK_LINE(985)
		::kha::graphics4::Graphics tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(985)
		tmp2->setCullMode(::kha::graphics4::CullMode_obj::None);
	}
return null();
}


Void Graphics2_obj::clear( Dynamic color){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","clear",0x75adc097,"kha.graphics4.Graphics2.clear","kha/graphics4/Graphics2.hx",988,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(989)
		::kha::graphics4::Graphics tmp = this->g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(989)
		bool tmp1 = (color == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(989)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(989)
		if ((tmp1)){
			HX_STACK_LINE(989)
			tmp2 = ::kha::_Color::Color_Impl__obj::Black;
		}
		else{
			HX_STACK_LINE(989)
			tmp2 = color;
		}
		HX_STACK_LINE(989)
		tmp->clear(tmp2,null(),null());
	}
return null();
}


Void Graphics2_obj::flush( ){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","flush",0x2fedb1ce,"kha.graphics4.Graphics2.flush","kha/graphics4/Graphics2.hx",992,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(993)
		::kha::graphics4::ImageShaderPainter tmp = this->imagePainter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(993)
		tmp->end();
		HX_STACK_LINE(994)
		::kha::graphics4::TextShaderPainter tmp1 = this->textPainter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(994)
		tmp1->end();
		HX_STACK_LINE(995)
		{
			HX_STACK_LINE(995)
			::kha::graphics4::ColoredShaderPainter tmp2 = this->coloredPainter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(995)
			::kha::graphics4::ColoredShaderPainter _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(995)
			{
				HX_STACK_LINE(995)
				bool tmp3 = (_this->triangleBufferIndex > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(995)
				if ((tmp3)){
					HX_STACK_LINE(995)
					_this->drawTriBuffer(false);
				}
			}
			HX_STACK_LINE(995)
			{
				HX_STACK_LINE(995)
				bool tmp3 = (_this->bufferIndex > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(995)
				if ((tmp3)){
					HX_STACK_LINE(995)
					_this->drawBuffer(false);
				}
			}
		}
	}
return null();
}


Void Graphics2_obj::end( ){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","end",0x1f209c65,"kha.graphics4.Graphics2.end","kha/graphics4/Graphics2.hx",998,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(999)
		this->flush();
		HX_STACK_LINE(1000)
		::kha::graphics4::Graphics tmp = this->g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1000)
		tmp->end();
	}
return null();
}


Void Graphics2_obj::drawVideoInternal( ::kha::Video video,Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","drawVideoInternal",0xe071523e,"kha.graphics4.Graphics2.drawVideoInternal","kha/graphics4/Graphics2.hx",1003,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(video,"video")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics2_obj,drawVideoInternal,(void))

Void Graphics2_obj::drawVideo( ::kha::Video video,Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("kha.graphics4.Graphics2","drawVideo",0xa72ee5e1,"kha.graphics4.Graphics2.drawVideo","kha/graphics4/Graphics2.hx",1007,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(video,"video")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1008)
		::kha::graphics4::Program tmp = this->videoProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1008)
		this->setProgram(tmp);
		HX_STACK_LINE(1009)
		::kha::Video tmp1 = video;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1009)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1009)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1009)
		Float tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1009)
		Float tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1009)
		this->drawVideoInternal(tmp1,tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(1010)
		this->setProgram(null());
	}
return null();
}


int Graphics2_obj::upperPowerOfTwo( int v){
	HX_STACK_FRAME("kha.graphics4.Graphics2","upperPowerOfTwo",0x6f9869fc,"kha.graphics4.Graphics2.upperPowerOfTwo","kha/graphics4/Graphics2.hx",781,0x0c1de808)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(782)
	(v)--;
	HX_STACK_LINE(783)
	int tmp = hx::UShr(v,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(783)
	hx::OrEq(v,tmp);
	HX_STACK_LINE(784)
	int tmp1 = hx::UShr(v,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(784)
	hx::OrEq(v,tmp1);
	HX_STACK_LINE(785)
	int tmp2 = hx::UShr(v,(int)4);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(785)
	hx::OrEq(v,tmp2);
	HX_STACK_LINE(786)
	int tmp3 = hx::UShr(v,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(786)
	hx::OrEq(v,tmp3);
	HX_STACK_LINE(787)
	int tmp4 = hx::UShr(v,(int)16);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(787)
	hx::OrEq(v,tmp4);
	HX_STACK_LINE(788)
	(v)++;
	HX_STACK_LINE(789)
	int tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(789)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics2_obj,upperPowerOfTwo,return )


Graphics2_obj::Graphics2_obj()
{
}

void Graphics2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics2);
	HX_MARK_MEMBER_NAME(myColor,"myColor");
	HX_MARK_MEMBER_NAME(myFont,"myFont");
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(imagePainter,"imagePainter");
	HX_MARK_MEMBER_NAME(coloredPainter,"coloredPainter");
	HX_MARK_MEMBER_NAME(textPainter,"textPainter");
	HX_MARK_MEMBER_NAME(videoProgram,"videoProgram");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(g,"g");
	::kha::graphics2::Graphics_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphics2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(myColor,"myColor");
	HX_VISIT_MEMBER_NAME(myFont,"myFont");
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(imagePainter,"imagePainter");
	HX_VISIT_MEMBER_NAME(coloredPainter,"coloredPainter");
	HX_VISIT_MEMBER_NAME(textPainter,"textPainter");
	HX_VISIT_MEMBER_NAME(videoProgram,"videoProgram");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(g,"g");
	::kha::graphics2::Graphics_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Graphics2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"myFont") ) { return myFont; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myColor") ) { return myColor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"drawVideo") ) { return drawVideo_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawString") ) { return drawString_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textPainter") ) { return textPainter; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imagePainter") ) { return imagePainter; }
		if (HX_FIELD_EQ(inName,"videoProgram") ) { return videoProgram; }
		if (HX_FIELD_EQ(inName,"fillTriangle") ) { return fillTriangle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setProjection") ) { return setProjection_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coloredPainter") ) { return coloredPainter; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setBlendingMode") ) { return setBlendingMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawVideoInternal") ) { return drawVideoInternal_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawScaledSubImage") ) { return drawScaledSubImage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setBilinearFiltering") ) { return setBilinearFiltering_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Graphics2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"upperPowerOfTwo") ) { outValue = upperPowerOfTwo_dyn(); return true;  }
	}
	return false;
}

Dynamic Graphics2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"myFont") ) { myFont=inValue.Cast< ::kha::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::kha::Canvas >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myColor") ) { myColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textPainter") ) { textPainter=inValue.Cast< ::kha::graphics4::TextShaderPainter >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imagePainter") ) { imagePainter=inValue.Cast< ::kha::graphics4::ImageShaderPainter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"videoProgram") ) { videoProgram=inValue.Cast< ::kha::graphics4::Program >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coloredPainter") ) { coloredPainter=inValue.Cast< ::kha::graphics4::ColoredShaderPainter >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::kha::math::Matrix4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics2_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Graphics2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("myColor","\x57","\x1a","\x5c","\xf3"));
	outFields->push(HX_HCSTRING("myFont","\x5b","\x0f","\xfc","\x6e"));
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("imagePainter","\x70","\x2d","\xeb","\xa7"));
	outFields->push(HX_HCSTRING("coloredPainter","\x29","\xa7","\x40","\xdc"));
	outFields->push(HX_HCSTRING("textPainter","\x5e","\xae","\xa2","\x93"));
	outFields->push(HX_HCSTRING("videoProgram","\x49","\xb3","\xf5","\x0d"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Graphics2_obj,myColor),HX_HCSTRING("myColor","\x57","\x1a","\x5c","\xf3")},
	{hx::fsObject /*::kha::Font*/ ,(int)offsetof(Graphics2_obj,myFont),HX_HCSTRING("myFont","\x5b","\x0f","\xfc","\x6e")},
	{hx::fsObject /*::kha::math::Matrix4*/ ,(int)offsetof(Graphics2_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsObject /*::kha::graphics4::ImageShaderPainter*/ ,(int)offsetof(Graphics2_obj,imagePainter),HX_HCSTRING("imagePainter","\x70","\x2d","\xeb","\xa7")},
	{hx::fsObject /*::kha::graphics4::ColoredShaderPainter*/ ,(int)offsetof(Graphics2_obj,coloredPainter),HX_HCSTRING("coloredPainter","\x29","\xa7","\x40","\xdc")},
	{hx::fsObject /*::kha::graphics4::TextShaderPainter*/ ,(int)offsetof(Graphics2_obj,textPainter),HX_HCSTRING("textPainter","\x5e","\xae","\xa2","\x93")},
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(Graphics2_obj,videoProgram),HX_HCSTRING("videoProgram","\x49","\xb3","\xf5","\x0d")},
	{hx::fsObject /*::kha::Canvas*/ ,(int)offsetof(Graphics2_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(Graphics2_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("myColor","\x57","\x1a","\x5c","\xf3"),
	HX_HCSTRING("myFont","\x5b","\x0f","\xfc","\x6e"),
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("imagePainter","\x70","\x2d","\xeb","\xa7"),
	HX_HCSTRING("coloredPainter","\x29","\xa7","\x40","\xdc"),
	HX_HCSTRING("textPainter","\x5e","\xae","\xa2","\x93"),
	HX_HCSTRING("videoProgram","\x49","\xb3","\xf5","\x0d"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("setProjection","\xd1","\xc6","\x03","\x66"),
	HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"),
	HX_HCSTRING("drawScaledSubImage","\x99","\x85","\xbc","\xe8"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("drawString","\xf5","\xa3","\xf3","\x52"),
	HX_HCSTRING("get_font","\x58","\x19","\x7b","\xc3"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("fillTriangle","\x6b","\x04","\x3a","\x92"),
	HX_HCSTRING("setBilinearFiltering","\x9c","\x69","\x79","\x5d"),
	HX_HCSTRING("setProgram","\x02","\x6f","\xd8","\x46"),
	HX_HCSTRING("setBlendingMode","\xf6","\x2b","\xb3","\x0b"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("drawVideoInternal","\x34","\x9c","\xdf","\xdf"),
	HX_HCSTRING("drawVideo","\xd7","\x49","\x07","\xff"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics2_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics2_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("upperPowerOfTwo","\x72","\x2a","\xfd","\xfb"),
	::String(null()) };

void Graphics2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.Graphics2","\xf8","\x6b","\xfa","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Graphics2_obj::__GetStatic;
	__mClass->mSetStaticField = &Graphics2_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics2_obj >;
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

} // end namespace kha
} // end namespace graphics4
