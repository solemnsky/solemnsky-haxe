#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Rectangle
#include <kha/Rectangle.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <kha/graphics4/BlendingOperation.h>
#endif
#ifndef INCLUDED_kha_graphics4_CompareMode
#include <kha/graphics4/CompareMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_CubeMap
#include <kha/graphics4/CubeMap.h>
#endif
#ifndef INCLUDED_kha_graphics4_CullMode
#include <kha/graphics4/CullMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
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
#ifndef INCLUDED_kha_graphics4_StencilAction
#include <kha/graphics4/StencilAction.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureAddressing
#include <kha/graphics4/TextureAddressing.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFilter
#include <kha/graphics4/TextureFilter.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
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
#ifndef INCLUDED_kha_kore_graphics4_ConstantLocation
#include <kha/kore/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics
#include <kha/kore/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#include <kha/kore/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
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
namespace kha{
namespace kore{
namespace graphics4{

Void Graphics_obj::__construct(::kha::Image target)
{
HX_STACK_FRAME("kha.kore.graphics4.Graphics","new",0x244105cf,"kha.kore.graphics4.Graphics.new","kha/kore/graphics4/Graphics.hx",37,0xdc695dc0)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
{
	HX_STACK_LINE(37)
	this->target = target;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(::kha::Image target)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(target);
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Graphics_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::graphics4::Graphics_obj)) return operator ::kha::graphics4::Graphics_obj *();
	return super::__ToInterface(inType);
}

Graphics_obj::operator ::kha::graphics4::Graphics_obj *()
	{ return new ::kha::graphics4::Graphics_delegate_< Graphics_obj >(this); }
bool Graphics_obj::vsynced( ){

		return Kore::Graphics::vsynced();
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","vsynced",0x5f12755f,"kha.kore.graphics4.Graphics.vsynced","kha/kore/graphics4/Graphics.hx",44,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,vsynced,return )

int Graphics_obj::refreshRate( ){

		return (Int)Kore::Graphics::refreshRate();
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","refreshRate",0x0a969eca,"kha.kore.graphics4.Graphics.refreshRate","kha/kore/graphics4/Graphics.hx",51,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,refreshRate,return )

Void Graphics_obj::clear( Dynamic color,Dynamic z,Dynamic stencil){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","clear",0x2a1420bc,"kha.kore.graphics4.Graphics.clear","kha/kore/graphics4/Graphics.hx",54,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(stencil,"stencil")
		HX_STACK_LINE(55)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(56)
		bool tmp = (color != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		if ((tmp)){
			HX_STACK_LINE(56)
			hx::OrEq(flags,(int)1);
		}
		HX_STACK_LINE(57)
		bool tmp1 = (z != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		if ((tmp1)){
			HX_STACK_LINE(57)
			hx::OrEq(flags,(int)2);
		}
		HX_STACK_LINE(58)
		bool tmp2 = (stencil != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		if ((tmp2)){
			HX_STACK_LINE(58)
			hx::OrEq(flags,(int)4);
		}
		HX_STACK_LINE(59)
		int tmp3 = flags;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		bool tmp4 = (color == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		if ((tmp4)){
			HX_STACK_LINE(59)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(59)
			int this1 = color;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(59)
			tmp5 = this1;
		}
		HX_STACK_LINE(59)
		Dynamic tmp6 = z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		Dynamic tmp7 = stencil;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		this->clear2(tmp3,tmp5,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,clear,(void))

Void Graphics_obj::viewport( int x,int y,int width,int height){

		Kore::Graphics::viewport(x,y,width,height);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","viewport",0x69550497,"kha.kore.graphics4.Graphics.viewport","kha/kore/graphics4/Graphics.hx",65,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,viewport,(void))

Void Graphics_obj::setDepthMode2( bool write,int mode){

		switch (mode) {
		case 0:
			Kore::Graphics::setRenderState(Kore::DepthTest, false);
			Kore::Graphics::setRenderState(Kore::DepthTestCompare, Kore::ZCompareAlways);
			break;
		case 1:
			Kore::Graphics::setRenderState(Kore::DepthTest, true);
			Kore::Graphics::setRenderState(Kore::DepthTestCompare, Kore::ZCompareNever);
			break;
		case 2:
			Kore::Graphics::setRenderState(Kore::DepthTest, true);
			Kore::Graphics::setRenderState(Kore::DepthTestCompare, Kore::ZCompareEqual);
			break;
		case 3:
			Kore::Graphics::setRenderState(Kore::DepthTest, true);
			Kore::Graphics::setRenderState(Kore::DepthTestCompare, Kore::ZCompareNotEqual);
			break;
		case 4:
			Kore::Graphics::setRenderState(Kore::DepthTest, true);
			Kore::Graphics::setRenderState(Kore::DepthTestCompare, Kore::ZCompareLess);
			break;
		case 5:
			Kore::Graphics::setRenderState(Kore::DepthTest, true);
			Kore::Graphics::setRenderState(Kore::DepthTestCompare, Kore::ZCompareLessEqual);
			break;
		case 6:
			Kore::Graphics::setRenderState(Kore::DepthTest, true);
			Kore::Graphics::setRenderState(Kore::DepthTestCompare, Kore::ZCompareGreater);
			break;
		case 7:
			Kore::Graphics::setRenderState(Kore::DepthTest, true);
			Kore::Graphics::setRenderState(Kore::DepthTestCompare, Kore::ZCompareGreaterEqual);
			break;
		}
		Kore::Graphics::setRenderState(Kore::DepthWrite, write);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setDepthMode2",0x250e4bdd,"kha.kore.graphics4.Graphics.setDepthMode2","kha/kore/graphics4/Graphics.hx",106,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(write,"write")
		HX_STACK_ARG(mode,"mode")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setDepthMode2,(void))

Void Graphics_obj::setDepthMode( bool write,::kha::graphics4::CompareMode mode){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setDepthMode",0x04c212b5,"kha.kore.graphics4.Graphics.setDepthMode","kha/kore/graphics4/Graphics.hx",110,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(write,"write")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(111)
		bool tmp = write;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		this->setDepthMode2(tmp,mode->__Index());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setDepthMode,(void))

int Graphics_obj::getBlendingMode( ::kha::graphics4::BlendingOperation op){
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","getBlendingMode",0xfbc6ced9,"kha.kore.graphics4.Graphics.getBlendingMode","kha/kore/graphics4/Graphics.hx",116,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(116)
	switch( (int)(op->__Index())){
		case (int)1: case (int)0: {
			HX_STACK_LINE(118)
			return (int)0;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(120)
			return (int)1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(122)
			return (int)2;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(124)
			return (int)3;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(126)
			return (int)4;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(128)
			return (int)5;
		}
		;break;
	}
	HX_STACK_LINE(116)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,getBlendingMode,return )

Void Graphics_obj::setBlendingModeNative( int source,int destination){

		if (source == 0 && destination == 1) {
			Kore::Graphics::setRenderState(Kore::BlendingState, false);
		}
		else {
			Kore::Graphics::setRenderState(Kore::BlendingState, true);
			Kore::Graphics::setBlendingMode((Kore::BlendingOperation)source, (Kore::BlendingOperation)destination);
		}
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setBlendingModeNative",0x4441035c,"kha.kore.graphics4.Graphics.setBlendingModeNative","kha/kore/graphics4/Graphics.hx",141,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(destination,"destination")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setBlendingModeNative,(void))

Void Graphics_obj::setBlendingMode( ::kha::graphics4::BlendingOperation source,::kha::graphics4::BlendingOperation destination){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setBlendingMode",0xf7924be5,"kha.kore.graphics4.Graphics.setBlendingMode","kha/kore/graphics4/Graphics.hx",145,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(destination,"destination")
		HX_STACK_LINE(146)
		::kha::graphics4::BlendingOperation tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		int tmp1 = this->getBlendingMode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		::kha::graphics4::BlendingOperation tmp2 = destination;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		int tmp3 = this->getBlendingMode(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		this->setBlendingModeNative(tmp1,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setBlendingMode,(void))

Void Graphics_obj::clear2( int flags,int color,Float z,int stencil){

		Kore::Graphics::clear(flags, color, z, stencil);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","clear2",0xa78883f6,"kha.kore.graphics4.Graphics.clear2","kha/kore/graphics4/Graphics.hx",152,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(stencil,"stencil")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,clear2,(void))

Void Graphics_obj::setVertexBuffer( ::kha::graphics4::VertexBuffer vertexBuffer){
Kore::Graphics::setVertexBuffer(*vertexBuffer->buffer);
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVertexBuffer",0x7b3ea235,"kha.kore.graphics4.Graphics.setVertexBuffer","kha/kore/graphics4/Graphics.hx",161,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexBuffer,"vertexBuffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setVertexBuffer,(void))

Void Graphics_obj::setVertexBuffersInternal( ::kha::graphics4::VertexBuffer vb0,::kha::graphics4::VertexBuffer vb1,::kha::graphics4::VertexBuffer vb2,::kha::graphics4::VertexBuffer vb3,int count){

		Kore::VertexBuffer* vertexBuffers[4] = {
			vb0 == null() ? nullptr : vb0->buffer,
			vb1 == null() ? nullptr : vb1->buffer,
			vb2 == null() ? nullptr : vb2->buffer,
			vb3 == null() ? nullptr : vb3->buffer
		};
		Kore::Graphics::setVertexBuffers(vertexBuffers, count);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVertexBuffersInternal",0xe0e23dfb,"kha.kore.graphics4.Graphics.setVertexBuffersInternal","kha/kore/graphics4/Graphics.hx",174,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vb0,"vb0")
		HX_STACK_ARG(vb1,"vb1")
		HX_STACK_ARG(vb2,"vb2")
		HX_STACK_ARG(vb3,"vb3")
		HX_STACK_ARG(count,"count")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,setVertexBuffersInternal,(void))

Void Graphics_obj::setVertexBuffers( Array< ::Dynamic > vertexBuffers){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVertexBuffers",0x5b8f4c9e,"kha.kore.graphics4.Graphics.setVertexBuffers","kha/kore/graphics4/Graphics.hx",178,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexBuffers,"vertexBuffers")
		HX_STACK_LINE(180)
		bool tmp = (vertexBuffers->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		::kha::graphics4::VertexBuffer tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp)){
			HX_STACK_LINE(180)
			tmp1 = vertexBuffers->__get((int)0).StaticCast< ::kha::graphics4::VertexBuffer >();
		}
		else{
			HX_STACK_LINE(180)
			tmp1 = null();
		}
		HX_STACK_LINE(181)
		bool tmp2 = (vertexBuffers->length > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		::kha::graphics4::VertexBuffer tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		if ((tmp2)){
			HX_STACK_LINE(181)
			tmp3 = vertexBuffers->__get((int)1).StaticCast< ::kha::graphics4::VertexBuffer >();
		}
		else{
			HX_STACK_LINE(181)
			tmp3 = null();
		}
		HX_STACK_LINE(182)
		bool tmp4 = (vertexBuffers->length > (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		::kha::graphics4::VertexBuffer tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		if ((tmp4)){
			HX_STACK_LINE(182)
			tmp5 = vertexBuffers->__get((int)2).StaticCast< ::kha::graphics4::VertexBuffer >();
		}
		else{
			HX_STACK_LINE(182)
			tmp5 = null();
		}
		HX_STACK_LINE(183)
		bool tmp6 = (vertexBuffers->length > (int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		::kha::graphics4::VertexBuffer tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		if ((tmp6)){
			HX_STACK_LINE(183)
			tmp7 = vertexBuffers->__get((int)3).StaticCast< ::kha::graphics4::VertexBuffer >();
		}
		else{
			HX_STACK_LINE(183)
			tmp7 = null();
		}
		HX_STACK_LINE(184)
		int tmp8 = vertexBuffers->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		this->setVertexBuffersInternal(tmp1,tmp3,tmp5,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setVertexBuffers,(void))

Void Graphics_obj::setIndexBuffer( ::kha::graphics4::IndexBuffer indexBuffer){
Kore::Graphics::setIndexBuffer(*indexBuffer->buffer);
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setIndexBuffer",0xfa4a1421,"kha.kore.graphics4.Graphics.setIndexBuffer","kha/kore/graphics4/Graphics.hx",192,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indexBuffer,"indexBuffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setIndexBuffer,(void))

int Graphics_obj::maxTextureSize( ){
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","maxTextureSize",0x676219e9,"kha.kore.graphics4.Graphics.maxTextureSize","kha/kore/graphics4/Graphics.hx",205,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	return (int)4096;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,maxTextureSize,return )

bool Graphics_obj::supportsNonPow2Textures( ){
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","supportsNonPow2Textures",0x1ded6b6a,"kha.kore.graphics4.Graphics.supportsNonPow2Textures","kha/kore/graphics4/Graphics.hx",209,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,supportsNonPow2Textures,return )

::kha::graphics4::CubeMap Graphics_obj::createCubeMap( int size,::kha::graphics4::TextureFormat format,::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead){
bool canRead = __o_canRead.Default(false);
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","createCubeMap",0x8fe51b3a,"kha.kore.graphics4.Graphics.createCubeMap","kha/kore/graphics4/Graphics.hx",213,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(usage,"usage")
	HX_STACK_ARG(canRead,"canRead")
{
		HX_STACK_LINE(213)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,createCubeMap,return )

Void Graphics_obj::setStencilParameters( ::kha::graphics4::CompareMode compareMode,::kha::graphics4::StencilAction bothPass,::kha::graphics4::StencilAction depthFail,::kha::graphics4::StencilAction stencilFail,int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","setStencilParameters",0x597bff75,"kha.kore.graphics4.Graphics.setStencilParameters","kha/kore/graphics4/Graphics.hx",216,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compareMode,"compareMode")
	HX_STACK_ARG(bothPass,"bothPass")
	HX_STACK_ARG(depthFail,"depthFail")
	HX_STACK_ARG(stencilFail,"stencilFail")
	HX_STACK_ARG(referenceValue,"referenceValue")
	HX_STACK_ARG(readMask,"readMask")
	HX_STACK_ARG(writeMask,"writeMask")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Graphics_obj,setStencilParameters,(void))

Void Graphics_obj::setScissor( ::kha::Rectangle rect){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setScissor",0x79f9330b,"kha.kore.graphics4.Graphics.setScissor","kha/kore/graphics4/Graphics.hx",220,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setScissor,(void))

bool Graphics_obj::renderTargetsInvertedY( ){
return Kore::Graphics::renderTargetsInvertedY();
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","renderTargetsInvertedY",0x6d68a0c9,"kha.kore.graphics4.Graphics.renderTargetsInvertedY","kha/kore/graphics4/Graphics.hx",226,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,renderTargetsInvertedY,return )

bool Graphics_obj::instancedRenderingAvailable( ){
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","instancedRenderingAvailable",0xe8517e5b,"kha.kore.graphics4.Graphics.instancedRenderingAvailable","kha/kore/graphics4/Graphics.hx",230,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,instancedRenderingAvailable,return )

Void Graphics_obj::setTextureWrapNative( ::kha::kore::graphics4::TextureUnit unit,int uWrap,int vWrap){

		Kore::Graphics::setTextureAddressing(unit->unit, Kore::U, (Kore::TextureAddressing)uWrap);
		Kore::Graphics::setTextureAddressing(unit->unit, Kore::V, (Kore::TextureAddressing)vWrap);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setTextureWrapNative",0xb55b236b,"kha.kore.graphics4.Graphics.setTextureWrapNative","kha/kore/graphics4/Graphics.hx",237,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(unit,"unit")
		HX_STACK_ARG(uWrap,"uWrap")
		HX_STACK_ARG(vWrap,"vWrap")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,setTextureWrapNative,(void))

Void Graphics_obj::setTextureFiltersNative( ::kha::kore::graphics4::TextureUnit unit,int minificationFilter,int magnificationFilter,int mipMapFilter){

		Kore::Graphics::setTextureMinificationFilter(unit->unit, (Kore::TextureFilter)minificationFilter);
		Kore::Graphics::setTextureMagnificationFilter(unit->unit, (Kore::TextureFilter)magnificationFilter);
		Kore::Graphics::setTextureMipmapFilter(unit->unit, (Kore::MipmapFilter)mipMapFilter);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setTextureFiltersNative",0x958dc388,"kha.kore.graphics4.Graphics.setTextureFiltersNative","kha/kore/graphics4/Graphics.hx",246,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(unit,"unit")
		HX_STACK_ARG(minificationFilter,"minificationFilter")
		HX_STACK_ARG(magnificationFilter,"magnificationFilter")
		HX_STACK_ARG(mipMapFilter,"mipMapFilter")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,setTextureFiltersNative,(void))

int Graphics_obj::getTextureAddressing( ::kha::graphics4::TextureAddressing addressing){
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","getTextureAddressing",0x668e24a4,"kha.kore.graphics4.Graphics.getTextureAddressing","kha/kore/graphics4/Graphics.hx",251,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(addressing,"addressing")
	HX_STACK_LINE(251)
	switch( (int)(addressing->__Index())){
		case (int)0: {
			HX_STACK_LINE(253)
			return (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(255)
			return (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(257)
			return (int)2;
		}
		;break;
	}
	HX_STACK_LINE(251)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,getTextureAddressing,return )

int Graphics_obj::getTextureFilter( ::kha::graphics4::TextureFilter filter){
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","getTextureFilter",0xf9ca6dae,"kha.kore.graphics4.Graphics.getTextureFilter","kha/kore/graphics4/Graphics.hx",262,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(262)
	switch( (int)(filter->__Index())){
		case (int)0: {
			HX_STACK_LINE(264)
			return (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(266)
			return (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(268)
			return (int)2;
		}
		;break;
	}
	HX_STACK_LINE(262)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,getTextureFilter,return )

int Graphics_obj::getTextureMipMapFilter( ::kha::graphics4::MipMapFilter filter){
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","getTextureMipMapFilter",0x80e4a1b6,"kha.kore.graphics4.Graphics.getTextureMipMapFilter","kha/kore/graphics4/Graphics.hx",273,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(273)
	switch( (int)(filter->__Index())){
		case (int)0: {
			HX_STACK_LINE(275)
			return (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(277)
			return (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(279)
			return (int)2;
		}
		;break;
	}
	HX_STACK_LINE(273)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,getTextureMipMapFilter,return )

Void Graphics_obj::setTextureParameters( ::kha::graphics4::TextureUnit texunit,::kha::graphics4::TextureAddressing uAddressing,::kha::graphics4::TextureAddressing vAddressing,::kha::graphics4::TextureFilter minificationFilter,::kha::graphics4::TextureFilter magnificationFilter,::kha::graphics4::MipMapFilter mipmapFilter){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setTextureParameters",0x8088f714,"kha.kore.graphics4.Graphics.setTextureParameters","kha/kore/graphics4/Graphics.hx",283,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texunit,"texunit")
		HX_STACK_ARG(uAddressing,"uAddressing")
		HX_STACK_ARG(vAddressing,"vAddressing")
		HX_STACK_ARG(minificationFilter,"minificationFilter")
		HX_STACK_ARG(magnificationFilter,"magnificationFilter")
		HX_STACK_ARG(mipmapFilter,"mipmapFilter")
		HX_STACK_LINE(284)
		::kha::kore::graphics4::TextureUnit tmp = ((::kha::kore::graphics4::TextureUnit)(texunit));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		::kha::graphics4::TextureAddressing tmp1 = uAddressing;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		int tmp2 = this->getTextureAddressing(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		::kha::graphics4::TextureAddressing tmp3 = vAddressing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		int tmp4 = this->getTextureAddressing(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		this->setTextureWrapNative(tmp,tmp2,tmp4);
		HX_STACK_LINE(285)
		::kha::kore::graphics4::TextureUnit tmp5 = ((::kha::kore::graphics4::TextureUnit)(texunit));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(285)
		::kha::graphics4::TextureFilter tmp6 = minificationFilter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(285)
		int tmp7 = this->getTextureFilter(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(285)
		::kha::graphics4::TextureFilter tmp8 = magnificationFilter;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(285)
		int tmp9 = this->getTextureFilter(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(285)
		::kha::graphics4::MipMapFilter tmp10 = mipmapFilter;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(285)
		int tmp11 = this->getTextureMipMapFilter(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(285)
		this->setTextureFiltersNative(tmp5,tmp7,tmp9,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,setTextureParameters,(void))

Void Graphics_obj::setCullModeNative( int value){

		Kore::Graphics::setRenderState(Kore::BackfaceCulling, value);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setCullModeNative",0x37c41a9d,"kha.kore.graphics4.Graphics.setCullModeNative","kha/kore/graphics4/Graphics.hx",291,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setCullModeNative,(void))

Void Graphics_obj::setCullMode( ::kha::graphics4::CullMode mode){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setCullMode",0xab948c66,"kha.kore.graphics4.Graphics.setCullMode","kha/kore/graphics4/Graphics.hx",296,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(296)
		this->setCullModeNative(mode->__Index());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setCullMode,(void))

Void Graphics_obj::setTextureInternal( ::kha::kore::graphics4::TextureUnit unit,::kha::Image texture){

		if (texture->texture != nullptr) Kore::Graphics::setTexture(unit->unit, texture->texture);
		else texture->renderTarget->useColorAsTexture(unit->unit);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setTextureInternal",0xc422d127,"kha.kore.graphics4.Graphics.setTextureInternal","kha/kore/graphics4/Graphics.hx",303,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(unit,"unit")
		HX_STACK_ARG(texture,"texture")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setTextureInternal,(void))

Void Graphics_obj::setTexture( ::kha::graphics4::TextureUnit unit,::kha::Image texture){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setTexture",0x13f2d3ca,"kha.kore.graphics4.Graphics.setTexture","kha/kore/graphics4/Graphics.hx",307,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(unit,"unit")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(308)
		bool tmp = (texture == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		if ((tmp)){
			HX_STACK_LINE(308)
			return null();
		}
		HX_STACK_LINE(309)
		::kha::kore::graphics4::TextureUnit tmp1 = ((::kha::kore::graphics4::TextureUnit)(unit));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		::kha::Image tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		this->setTextureInternal(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setTexture,(void))

Void Graphics_obj::setVideoTexture( ::kha::graphics4::TextureUnit unit,::kha::Video texture){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVideoTexture",0xc3722451,"kha.kore.graphics4.Graphics.setVideoTexture","kha/kore/graphics4/Graphics.hx",312,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(unit,"unit")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(313)
		bool tmp = (texture == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		if ((tmp)){
			HX_STACK_LINE(313)
			return null();
		}
		HX_STACK_LINE(314)
		::kha::kore::graphics4::TextureUnit tmp1 = ((::kha::kore::graphics4::TextureUnit)(unit));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		::kha::Video tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		::kha::Image tmp3 = ::kha::Image_obj::createFromVideo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		this->setTextureInternal(tmp1,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setVideoTexture,(void))

Void Graphics_obj::setProgram( ::kha::graphics4::Program program){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setProgram",0x690b5573,"kha.kore.graphics4.Graphics.setProgram","kha/kore/graphics4/Graphics.hx",330,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(330)
		program->set();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setProgram,(void))

Void Graphics_obj::setBool( ::kha::graphics4::ConstantLocation location,bool value){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setBool",0x4b45dddb,"kha.kore.graphics4.Graphics.setBool","kha/kore/graphics4/Graphics.hx",333,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(334)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		this->setBoolPrivate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setBool,(void))

Void Graphics_obj::setBoolPrivate( ::kha::kore::graphics4::ConstantLocation location,bool value){

		Kore::Graphics::setBool(location->location, value);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setBoolPrivate",0xa8c7b868,"kha.kore.graphics4.Graphics.setBoolPrivate","kha/kore/graphics4/Graphics.hx",340,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setBoolPrivate,(void))

Void Graphics_obj::setInt( ::kha::graphics4::ConstantLocation location,int value){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setInt",0x0f48345e,"kha.kore.graphics4.Graphics.setInt","kha/kore/graphics4/Graphics.hx",344,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(345)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		this->setIntPrivate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setInt,(void))

Void Graphics_obj::setIntPrivate( ::kha::kore::graphics4::ConstantLocation location,int value){

		Kore::Graphics::setInt(location->location, value);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setIntPrivate",0x802c8845,"kha.kore.graphics4.Graphics.setIntPrivate","kha/kore/graphics4/Graphics.hx",351,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setIntPrivate,(void))

Void Graphics_obj::setFloat( ::kha::graphics4::ConstantLocation location,Float value){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloat",0xdd7ae6cb,"kha.kore.graphics4.Graphics.setFloat","kha/kore/graphics4/Graphics.hx",355,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(356)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		this->setFloatPrivate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setFloat,(void))

Void Graphics_obj::setFloatPrivate( ::kha::kore::graphics4::ConstantLocation location,Float value){

		Kore::Graphics::setFloat(location->location, value);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloatPrivate",0x2a0ead78,"kha.kore.graphics4.Graphics.setFloatPrivate","kha/kore/graphics4/Graphics.hx",362,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setFloatPrivate,(void))

Void Graphics_obj::setFloat2( ::kha::graphics4::ConstantLocation location,Float value1,Float value2){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloat2",0xee0f0b07,"kha.kore.graphics4.Graphics.setFloat2","kha/kore/graphics4/Graphics.hx",366,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_LINE(367)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		Float tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		Float tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		this->setFloat2Private(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,setFloat2,(void))

Void Graphics_obj::setFloat2Private( ::kha::kore::graphics4::ConstantLocation location,Float value1,Float value2){

		Kore::Graphics::setFloat2(location->location, value1, value2);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloat2Private",0x93d9c8bc,"kha.kore.graphics4.Graphics.setFloat2Private","kha/kore/graphics4/Graphics.hx",373,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,setFloat2Private,(void))

Void Graphics_obj::setFloat3( ::kha::graphics4::ConstantLocation location,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloat3",0xee0f0b08,"kha.kore.graphics4.Graphics.setFloat3","kha/kore/graphics4/Graphics.hx",377,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(378)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		Float tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		Float tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		Float tmp3 = value3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(378)
		this->setFloat3Private(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,setFloat3,(void))

Void Graphics_obj::setFloat3Private( ::kha::kore::graphics4::ConstantLocation location,Float value1,Float value2,Float value3){

		Kore::Graphics::setFloat3(location->location, value1, value2, value3);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloat3Private",0xcd0c3adb,"kha.kore.graphics4.Graphics.setFloat3Private","kha/kore/graphics4/Graphics.hx",384,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,setFloat3Private,(void))

Void Graphics_obj::setFloat4( ::kha::graphics4::ConstantLocation location,Float value1,Float value2,Float value3,Float value4){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloat4",0xee0f0b09,"kha.kore.graphics4.Graphics.setFloat4","kha/kore/graphics4/Graphics.hx",388,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_ARG(value4,"value4")
		HX_STACK_LINE(389)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		Float tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		Float tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(389)
		Float tmp3 = value3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(389)
		Float tmp4 = value4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		this->setFloat4Private(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,setFloat4,(void))

Void Graphics_obj::setFloat4Private( ::kha::kore::graphics4::ConstantLocation location,Float value1,Float value2,Float value3,Float value4){

		Kore::Graphics::setFloat4(location->location, value1, value2, value3, value4);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloat4Private",0x063eacfa,"kha.kore.graphics4.Graphics.setFloat4Private","kha/kore/graphics4/Graphics.hx",395,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_ARG(value4,"value4")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,setFloat4Private,(void))

Void Graphics_obj::setVector2( ::kha::graphics4::ConstantLocation location,::kha::math::Vector2 value){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVector2",0x4faf04fe,"kha.kore.graphics4.Graphics.setVector2","kha/kore/graphics4/Graphics.hx",399,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(400)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(400)
		Float tmp1 = value->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		Float tmp2 = value->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		this->setVector2Private(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setVector2,(void))

Void Graphics_obj::setVector2Private( ::kha::kore::graphics4::ConstantLocation location,Float x,Float y){

		Kore::Graphics::setFloat2(location->location, x, y);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVector2Private",0x74c70ba5,"kha.kore.graphics4.Graphics.setVector2Private","kha/kore/graphics4/Graphics.hx",406,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,setVector2Private,(void))

Void Graphics_obj::setVector3( ::kha::graphics4::ConstantLocation location,::kha::math::Vector3 value){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVector3",0x4faf04ff,"kha.kore.graphics4.Graphics.setVector3","kha/kore/graphics4/Graphics.hx",410,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(411)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		Float tmp1 = value->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		Float tmp2 = value->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		Float tmp3 = value->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		this->setVector3Private(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setVector3,(void))

Void Graphics_obj::setVector3Private( ::kha::kore::graphics4::ConstantLocation location,Float x,Float y,Float z){

		Kore::Graphics::setFloat3(location->location, x, y, z);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVector3Private",0xadf97dc4,"kha.kore.graphics4.Graphics.setVector3Private","kha/kore/graphics4/Graphics.hx",417,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,setVector3Private,(void))

Void Graphics_obj::setVector4( ::kha::graphics4::ConstantLocation location,::kha::math::Vector4 value){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVector4",0x4faf0500,"kha.kore.graphics4.Graphics.setVector4","kha/kore/graphics4/Graphics.hx",421,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(422)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		Float tmp1 = value->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		Float tmp2 = value->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		Float tmp3 = value->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(422)
		Float tmp4 = value->w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(422)
		this->setVector4Private(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setVector4,(void))

Void Graphics_obj::setVector4Private( ::kha::kore::graphics4::ConstantLocation location,Float x,Float y,Float z,Float w){

		Kore::Graphics::setFloat4(location->location, x, y, z, w);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setVector4Private",0xe72befe3,"kha.kore.graphics4.Graphics.setVector4Private","kha/kore/graphics4/Graphics.hx",428,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,setVector4Private,(void))

Void Graphics_obj::setFloats( ::kha::graphics4::ConstantLocation location,Array< Float > values){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloats",0xee0f0b48,"kha.kore.graphics4.Graphics.setFloats","kha/kore/graphics4/Graphics.hx",432,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(433)
		::kha::kore::graphics4::ConstantLocation tmp = ((::kha::kore::graphics4::ConstantLocation)(location));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(433)
		Array< Float > tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(433)
		this->setFloatsPrivate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setFloats,(void))

Void Graphics_obj::setFloatsPrivate( ::kha::kore::graphics4::ConstantLocation location,Array< Float > values){

		float v[100];
		for (int i = 0; i < values->length; ++i) v[i] = values[i];
		Kore::Graphics::setFloats(location->location, v, values->length);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setFloatsPrivate",0x19a8c29b,"kha.kore.graphics4.Graphics.setFloatsPrivate","kha/kore/graphics4/Graphics.hx",441,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(values,"values")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setFloatsPrivate,(void))

Void Graphics_obj::setMatrix( ::kha::graphics4::ConstantLocation location,::kha::math::Matrix4 matrix){

		Kore::mat4 value;
		value.Set(0, 0, matrix->_00); value.Set(0, 1, matrix->_10); value.Set(0, 2, matrix->_20); value.Set(0, 3, matrix->_30);
		value.Set(1, 0, matrix->_01); value.Set(1, 1, matrix->_11); value.Set(1, 2, matrix->_21); value.Set(1, 3, matrix->_31);
		value.Set(2, 0, matrix->_02); value.Set(2, 1, matrix->_12); value.Set(2, 2, matrix->_22); value.Set(2, 3, matrix->_32);
		value.Set(3, 0, matrix->_03); value.Set(3, 1, matrix->_13); value.Set(3, 2, matrix->_23); value.Set(3, 3, matrix->_33);
		::kha::kore::graphics4::ConstantLocation_obj* loc = dynamic_cast< ::kha::kore::graphics4::ConstantLocation_obj*>(location->__GetRealObject());
		Kore::Graphics::setMatrix(loc->location, value);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","setMatrix",0x68811e32,"kha.kore.graphics4.Graphics.setMatrix","kha/kore/graphics4/Graphics.hx",454,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(matrix,"matrix")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setMatrix,(void))

Void Graphics_obj::drawIndexedVertices( hx::Null< int >  __o_start,hx::Null< int >  __o_count){
int start = __o_start.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","drawIndexedVertices",0x712af4d5,"kha.kore.graphics4.Graphics.drawIndexedVertices","kha/kore/graphics4/Graphics.hx",458,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(459)
		bool tmp = (count < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(459)
		if ((tmp)){
			HX_STACK_LINE(459)
			this->drawAllIndexedVertices();
		}
		else{
			HX_STACK_LINE(460)
			int tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(460)
			int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(460)
			this->drawSomeIndexedVertices(tmp1,tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,drawIndexedVertices,(void))

Void Graphics_obj::drawAllIndexedVertices( ){

		Kore::Graphics::drawIndexedVertices();
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","drawAllIndexedVertices",0x864219fe,"kha.kore.graphics4.Graphics.drawAllIndexedVertices","kha/kore/graphics4/Graphics.hx",466,0xdc695dc0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,drawAllIndexedVertices,(void))

Void Graphics_obj::drawSomeIndexedVertices( int start,int count){

		Kore::Graphics::drawIndexedVertices(start, count);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","drawSomeIndexedVertices",0xad718dc1,"kha.kore.graphics4.Graphics.drawSomeIndexedVertices","kha/kore/graphics4/Graphics.hx",473,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(count,"count")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,drawSomeIndexedVertices,(void))

Void Graphics_obj::drawIndexedVerticesInstanced( int instanceCount,hx::Null< int >  __o_start,hx::Null< int >  __o_count){
int start = __o_start.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("kha.kore.graphics4.Graphics","drawIndexedVerticesInstanced",0xfeb9ab9a,"kha.kore.graphics4.Graphics.drawIndexedVerticesInstanced","kha/kore/graphics4/Graphics.hx",477,0xdc695dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(instanceCount,"instanceCount")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(478)
		bool tmp = (count < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		if ((tmp)){
			HX_STACK_LINE(478)
			int tmp1 = instanceCount;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			this->drawAllIndexedVerticesInstanced(tmp1);
		}
		else{
			HX_STACK_LINE(479)
			int tmp1 = instanceCount;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(479)
			int tmp2 = start;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(479)
			int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(479)
			this->drawSomeIndexedVerticesInstanced(tmp1,tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawIndexedVerticesInstanced,(void))

Void Graphics_obj::drawAllIndexedVerticesInstanced( int instanceCount){

		Kore::Graphics::drawIndexedVerticesInstanced(instanceCount);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","drawAllIndexedVerticesInstanced",0x9e031951,"kha.kore.graphics4.Graphics.drawAllIndexedVerticesInstanced","kha/kore/graphics4/Graphics.hx",485,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instanceCount,"instanceCount")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawAllIndexedVerticesInstanced,(void))

Void Graphics_obj::drawSomeIndexedVerticesInstanced( int instanceCount,int start,int count){

		Kore::Graphics::drawIndexedVerticesInstanced(instanceCount, start, count);
	
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","drawSomeIndexedVerticesInstanced",0x8586952e,"kha.kore.graphics4.Graphics.drawSomeIndexedVerticesInstanced","kha/kore/graphics4/Graphics.hx",492,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instanceCount,"instanceCount")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(count,"count")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawSomeIndexedVerticesInstanced,(void))

Void Graphics_obj::renderToTexture( ){
Kore::Graphics::setRenderTarget(target->renderTarget, 0);
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","renderToTexture",0xa2fc7a59,"kha.kore.graphics4.Graphics.renderToTexture","kha/kore/graphics4/Graphics.hx",497,0xdc695dc0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,renderToTexture,(void))

Void Graphics_obj::renderToBackbuffer( ){
Kore::Graphics::restoreRenderTarget();
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","renderToBackbuffer",0x6b5bffa9,"kha.kore.graphics4.Graphics.renderToBackbuffer","kha/kore/graphics4/Graphics.hx",502,0xdc695dc0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,renderToBackbuffer,(void))

Void Graphics_obj::begin( ){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","begin",0x920e9958,"kha.kore.graphics4.Graphics.begin","kha/kore/graphics4/Graphics.hx",506,0xdc695dc0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(507)
		::kha::Image tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(507)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(507)
		if ((tmp1)){
			HX_STACK_LINE(507)
			this->renderToBackbuffer();
		}
		else{
			HX_STACK_LINE(508)
			this->renderToTexture();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,begin,(void))

Void Graphics_obj::end( ){
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","end",0x243a394a,"kha.kore.graphics4.Graphics.end","kha/kore/graphics4/Graphics.hx",511,0xdc695dc0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,end,(void))

Void Graphics_obj::flush( ){
Kore::Graphics::flush();
{
		HX_STACK_FRAME("kha.kore.graphics4.Graphics","flush",0xe45411f3,"kha.kore.graphics4.Graphics.flush","kha/kore/graphics4/Graphics.hx",516,0xdc695dc0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,flush,(void))


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
}

Dynamic Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"clear2") ) { return clear2_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt") ) { return setInt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vsynced") ) { return vsynced_dyn(); }
		if (HX_FIELD_EQ(inName,"setBool") ) { return setBool_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setFloat2") ) { return setFloat2_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat3") ) { return setFloat3_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat4") ) { return setFloat4_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloats") ) { return setFloats_dyn(); }
		if (HX_FIELD_EQ(inName,"setMatrix") ) { return setMatrix_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setScissor") ) { return setScissor_dyn(); }
		if (HX_FIELD_EQ(inName,"setTexture") ) { return setTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector2") ) { return setVector2_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector3") ) { return setVector3_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector4") ) { return setVector4_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { return refreshRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setCullMode") ) { return setCullMode_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setDepthMode") ) { return setDepthMode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setDepthMode2") ) { return setDepthMode2_dyn(); }
		if (HX_FIELD_EQ(inName,"createCubeMap") ) { return createCubeMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setIntPrivate") ) { return setIntPrivate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setIndexBuffer") ) { return setIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"maxTextureSize") ) { return maxTextureSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setBoolPrivate") ) { return setBoolPrivate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getBlendingMode") ) { return getBlendingMode_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendingMode") ) { return setBlendingMode_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBuffer") ) { return setVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setVideoTexture") ) { return setVideoTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloatPrivate") ) { return setFloatPrivate_dyn(); }
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { return renderToTexture_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setVertexBuffers") ) { return setVertexBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextureFilter") ) { return getTextureFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat2Private") ) { return setFloat2Private_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat3Private") ) { return setFloat3Private_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat4Private") ) { return setFloat4Private_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloatsPrivate") ) { return setFloatsPrivate_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setCullModeNative") ) { return setCullModeNative_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector2Private") ) { return setVector2Private_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector3Private") ) { return setVector3Private_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector4Private") ) { return setVector4Private_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setTextureInternal") ) { return setTextureInternal_dyn(); }
		if (HX_FIELD_EQ(inName,"renderToBackbuffer") ) { return renderToBackbuffer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawIndexedVertices") ) { return drawIndexedVertices_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setStencilParameters") ) { return setStencilParameters_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureWrapNative") ) { return setTextureWrapNative_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextureAddressing") ) { return getTextureAddressing_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureParameters") ) { return setTextureParameters_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setBlendingModeNative") ) { return setBlendingModeNative_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"renderTargetsInvertedY") ) { return renderTargetsInvertedY_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextureMipMapFilter") ) { return getTextureMipMapFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"drawAllIndexedVertices") ) { return drawAllIndexedVertices_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"supportsNonPow2Textures") ) { return supportsNonPow2Textures_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureFiltersNative") ) { return setTextureFiltersNative_dyn(); }
		if (HX_FIELD_EQ(inName,"drawSomeIndexedVertices") ) { return drawSomeIndexedVertices_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setVertexBuffersInternal") ) { return setVertexBuffersInternal_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"instancedRenderingAvailable") ) { return instancedRenderingAvailable_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"drawIndexedVerticesInstanced") ) { return drawIndexedVerticesInstanced_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"drawAllIndexedVerticesInstanced") ) { return drawAllIndexedVerticesInstanced_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"drawSomeIndexedVerticesInstanced") ) { return drawSomeIndexedVerticesInstanced_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::kha::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(Graphics_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("vsynced","\x70","\x5c","\x6c","\x1a"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("setDepthMode2","\xae","\x55","\x3c","\x0a"),
	HX_HCSTRING("setDepthMode","\x04","\xee","\x33","\xc3"),
	HX_HCSTRING("getBlendingMode","\xea","\xae","\xe7","\x0f"),
	HX_HCSTRING("setBlendingModeNative","\x2d","\xc6","\x36","\xbb"),
	HX_HCSTRING("setBlendingMode","\xf6","\x2b","\xb3","\x0b"),
	HX_HCSTRING("clear2","\x05","\xea","\xa7","\x07"),
	HX_HCSTRING("setVertexBuffer","\x46","\x82","\x5f","\x8f"),
	HX_HCSTRING("setVertexBuffersInternal","\xca","\x53","\x97","\x36"),
	HX_HCSTRING("setVertexBuffers","\x6d","\x7b","\x32","\xe4"),
	HX_HCSTRING("setIndexBuffer","\x30","\xa1","\x64","\x9d"),
	HX_HCSTRING("maxTextureSize","\xf8","\xa6","\x7c","\x0a"),
	HX_HCSTRING("supportsNonPow2Textures","\x7b","\x44","\xf6","\x8f"),
	HX_HCSTRING("createCubeMap","\x0b","\x25","\x13","\x75"),
	HX_HCSTRING("setStencilParameters","\xc4","\x41","\x40","\x0e"),
	HX_HCSTRING("setScissor","\x9a","\x4c","\xc6","\x57"),
	HX_HCSTRING("renderTargetsInvertedY","\xd8","\x54","\x7d","\x0d"),
	HX_HCSTRING("instancedRenderingAvailable","\xec","\xb3","\x0a","\xbc"),
	HX_HCSTRING("setTextureWrapNative","\xba","\x65","\x1f","\x6a"),
	HX_HCSTRING("setTextureFiltersNative","\x99","\x9c","\x96","\x07"),
	HX_HCSTRING("getTextureAddressing","\xf3","\x66","\x52","\x1b"),
	HX_HCSTRING("getTextureFilter","\x7d","\x9c","\x6d","\x82"),
	HX_HCSTRING("getTextureMipMapFilter","\xc5","\x55","\xf9","\x20"),
	HX_HCSTRING("setTextureParameters","\x63","\x39","\x4d","\x35"),
	HX_HCSTRING("setCullModeNative","\xee","\xe0","\xe9","\x3d"),
	HX_HCSTRING("setCullMode","\xf7","\xcf","\x3d","\xe1"),
	HX_HCSTRING("setTextureInternal","\xb6","\x91","\x0a","\x1f"),
	HX_HCSTRING("setTexture","\x59","\xed","\xbf","\xf1"),
	HX_HCSTRING("setVideoTexture","\x62","\x04","\x93","\xd7"),
	HX_HCSTRING("setProgram","\x02","\x6f","\xd8","\x46"),
	HX_HCSTRING("setBool","\xec","\xc4","\x9f","\x06"),
	HX_HCSTRING("setBoolPrivate","\x77","\x45","\xe2","\x4b"),
	HX_HCSTRING("setInt","\x6d","\x9a","\x67","\x6f"),
	HX_HCSTRING("setIntPrivate","\x16","\x92","\x5a","\x65"),
	HX_HCSTRING("setFloat","\x9a","\x2e","\xcb","\x10"),
	HX_HCSTRING("setFloatPrivate","\x89","\x8d","\x2f","\x3e"),
	HX_HCSTRING("setFloat2","\x58","\x98","\xfd","\xa0"),
	HX_HCSTRING("setFloat2Private","\x8b","\xf7","\x7c","\x1c"),
	HX_HCSTRING("setFloat3","\x59","\x98","\xfd","\xa0"),
	HX_HCSTRING("setFloat3Private","\xaa","\x69","\xaf","\x55"),
	HX_HCSTRING("setFloat4","\x5a","\x98","\xfd","\xa0"),
	HX_HCSTRING("setFloat4Private","\xc9","\xdb","\xe1","\x8e"),
	HX_HCSTRING("setVector2","\x8d","\x1e","\x7c","\x2d"),
	HX_HCSTRING("setVector2Private","\xf6","\xd1","\xec","\x7a"),
	HX_HCSTRING("setVector3","\x8e","\x1e","\x7c","\x2d"),
	HX_HCSTRING("setVector3Private","\x15","\x44","\x1f","\xb4"),
	HX_HCSTRING("setVector4","\x8f","\x1e","\x7c","\x2d"),
	HX_HCSTRING("setVector4Private","\x34","\xb6","\x51","\xed"),
	HX_HCSTRING("setFloats","\x99","\x98","\xfd","\xa0"),
	HX_HCSTRING("setFloatsPrivate","\x6a","\xf1","\x4b","\xa2"),
	HX_HCSTRING("setMatrix","\x83","\xab","\x6f","\x1b"),
	HX_HCSTRING("drawIndexedVertices","\x66","\xb1","\x0b","\xa1"),
	HX_HCSTRING("drawAllIndexedVertices","\x0d","\xce","\x56","\x26"),
	HX_HCSTRING("drawSomeIndexedVertices","\xd2","\x66","\x7a","\x1f"),
	HX_HCSTRING("drawIndexedVerticesInstanced","\xe9","\x54","\x0f","\x6d"),
	HX_HCSTRING("drawAllIndexedVerticesInstanced","\x62","\xeb","\x14","\xfc"),
	HX_HCSTRING("drawSomeIndexedVerticesInstanced","\xfd","\x91","\x0c","\x77"),
	HX_HCSTRING("renderToTexture","\x6a","\x5a","\x1d","\xb7"),
	HX_HCSTRING("renderToBackbuffer","\x38","\xc0","\x43","\xc6"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.graphics4.Graphics","\x5d","\x72","\x20","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
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
} // end namespace kore
} // end namespace graphics4
