#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
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
#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics1
#include <kha/graphics2/Graphics1.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics2
#include <kha/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_kore_Video
#include <kha/kore/Video.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics
#include <kha/kore/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics2
#include <kha/kore/graphics4/Graphics2.h>
#endif
namespace kha{

Void Image_obj::__construct(bool readable)
{
HX_STACK_FRAME("kha.Image","new",0xf6cb14e3,"kha.Image.new","kha/Image.hx",14,0xc9b7c0ee)
HX_STACK_THIS(this)
HX_STACK_ARG(readable,"readable")
{
	HX_STACK_LINE(161)
	this->bytes = null();
	HX_STACK_LINE(38)
	this->readable = readable;
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(bool readable)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(readable);
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Image_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::Canvas_obj)) return operator ::kha::Canvas_obj *();
	if (inType==typeid( ::kha::Resource_obj)) return operator ::kha::Resource_obj *();
	return super::__ToInterface(inType);
}

Image_obj::operator ::kha::Canvas_obj *()
	{ return new ::kha::Canvas_delegate_< Image_obj >(this); }
Image_obj::operator ::kha::Resource_obj *()
	{ return new ::kha::Resource_delegate_< Image_obj >(this); }
Void Image_obj::initRenderTarget( int width,int height,int format,bool depthBuffer){
renderTarget = new Kore::RenderTarget(width, height, depthBuffer, false, Kore::Target32Bit); texture = nullptr;
{
		HX_STACK_FRAME("kha.Image","initRenderTarget",0x9d84bc14,"kha.Image.initRenderTarget","kha/Image.hx",50,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(depthBuffer,"depthBuffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,initRenderTarget,(void))

Void Image_obj::init( int width,int height,int format){
texture = new Kore::Texture(width, height, (Kore::Image::Format)format, readable); renderTarget = nullptr;
{
		HX_STACK_FRAME("kha.Image","init",0xf79fe92d,"kha.Image.init","kha/Image.hx",55,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,init,(void))

Void Image_obj::initVideo( ::kha::kore::Video video){
texture = video->video->currentImage(); renderTarget = nullptr;
{
		HX_STACK_FRAME("kha.Image","initVideo",0xf74c380e,"kha.Image.initVideo","kha/Image.hx",60,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_ARG(video,"video")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,initVideo,(void))

Void Image_obj::initFromFile( ::String filename){
texture = new Kore::Texture(filename.c_str(), readable);
{
		HX_STACK_FRAME("kha.Image","initFromFile",0x76d9b753,"kha.Image.initFromFile","kha/Image.hx",72,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filename,"filename")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,initFromFile,(void))

::kha::graphics1::Graphics Image_obj::get_g1( ){
	HX_STACK_FRAME("kha.Image","get_g1",0x1a322090,"kha.Image.get_g1","kha/Image.hx",78,0xc9b7c0ee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::kha::graphics1::Graphics tmp = this->graphics1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	if ((tmp1)){
		HX_STACK_LINE(80)
		::kha::graphics2::Graphics1 tmp2 = ::kha::graphics2::Graphics1_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		this->graphics1 = tmp2;
	}
	HX_STACK_LINE(82)
	::kha::graphics1::Graphics tmp2 = this->graphics1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_g1,return )

::kha::graphics2::Graphics Image_obj::get_g2( ){
	HX_STACK_FRAME("kha.Image","get_g2",0x1a322091,"kha.Image.get_g2","kha/Image.hx",87,0xc9b7c0ee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::kha::graphics2::Graphics tmp = this->graphics2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	if ((tmp1)){
		HX_STACK_LINE(89)
		::kha::kore::graphics4::Graphics2 tmp2 = ::kha::kore::graphics4::Graphics2_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		this->graphics2 = tmp2;
	}
	HX_STACK_LINE(91)
	::kha::graphics2::Graphics tmp2 = this->graphics2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_g2,return )

::kha::graphics4::Graphics Image_obj::get_g4( ){
	HX_STACK_FRAME("kha.Image","get_g4",0x1a322093,"kha.Image.get_g4","kha/Image.hx",96,0xc9b7c0ee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	::kha::graphics4::Graphics tmp = this->graphics4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	if ((tmp1)){
		HX_STACK_LINE(98)
		::kha::kore::graphics4::Graphics tmp2 = ::kha::kore::graphics4::Graphics_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		this->graphics4 = tmp2;
	}
	HX_STACK_LINE(100)
	::kha::graphics4::Graphics tmp2 = this->graphics4;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_g4,return )

int Image_obj::get_width( ){
if (texture != nullptr) return texture->width; else return renderTarget->width;
{
		HX_STACK_FRAME("kha.Image","get_width",0xb2ca1b20,"kha.Image.get_width","kha/Image.hx",121,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_width,return )

int Image_obj::get_height( ){
if (texture != nullptr) return texture->height; else return renderTarget->height;
{
		HX_STACK_FRAME("kha.Image","get_height",0x745d198d,"kha.Image.get_height","kha/Image.hx",126,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_height,return )

int Image_obj::get_realWidth( ){
if (texture != nullptr) return texture->texWidth; else return renderTarget->texWidth;
{
		HX_STACK_FRAME("kha.Image","get_realWidth",0xe70ddfe2,"kha.Image.get_realWidth","kha/Image.hx",134,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_realWidth,return )

int Image_obj::get_realHeight( ){
if (texture != nullptr) return texture->texHeight; else return renderTarget->texHeight;
{
		HX_STACK_FRAME("kha.Image","get_realHeight",0xfb657e8b,"kha.Image.get_realHeight","kha/Image.hx",139,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_realHeight,return )

bool Image_obj::isOpaque( int x,int y){
return (texture->at(x, y) & 0xff) != 0;
{
		HX_STACK_FRAME("kha.Image","isOpaque",0x56cdf908,"kha.Image.isOpaque","kha/Image.hx",144,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(144)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,isOpaque,return )

int Image_obj::atInternal( int x,int y){
return texture->at(x, y);
{
		HX_STACK_FRAME("kha.Image","atInternal",0xf54cc52d,"kha.Image.atInternal","kha/Image.hx",149,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(149)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,atInternal,return )

int Image_obj::at( int x,int y){
	HX_STACK_FRAME("kha.Image","at",0xf6c651d0,"kha.Image.at","kha/Image.hx",152,0xc9b7c0ee)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(153)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		int tmp3 = this->atInternal(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		int value = tmp3;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(153)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		tmp = ::kha::_Color::Color_Impl__obj::_new(tmp4);
	}
	HX_STACK_LINE(153)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,at,return )

Void Image_obj::unload( ){
delete texture; texture = nullptr; delete renderTarget; renderTarget = nullptr;
{
		HX_STACK_FRAME("kha.Image","unload",0xdc8ed05c,"kha.Image.unload","kha/Image.hx",157,0xc9b7c0ee)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,unload,(void))

::haxe::io::Bytes Image_obj::lock( hx::Null< int >  __o_level){
int level = __o_level.Default(0);
	HX_STACK_FRAME("kha.Image","lock",0xf99c4a08,"kha.Image.lock","kha/Image.hx",163,0xc9b7c0ee)
	HX_STACK_THIS(this)
	HX_STACK_ARG(level,"level")
{
		HX_STACK_LINE(164)
		::kha::graphics4::TextureFormat tmp = this->format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		bool tmp1 = (tmp == ::kha::graphics4::TextureFormat_obj::RGBA32);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		if ((tmp1)){
			HX_STACK_LINE(164)
			int tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			int tmp4 = ((int)4 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			int tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			tmp2 = (tmp4 * tmp5);
		}
		else{
			HX_STACK_LINE(164)
			int tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			int tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			tmp2 = (tmp3 * tmp4);
		}
		HX_STACK_LINE(164)
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		this->bytes = tmp3;
		HX_STACK_LINE(165)
		::haxe::io::Bytes tmp4 = this->bytes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,lock,return )

Void Image_obj::unlock( ){

		Kore::u8* b = bytes->b->Pointer();
		Kore::u8* tex = texture->lock();
		for (int i = 0; i < ((texture->format == Kore::Image::RGBA32) ? (4 * texture->width * texture->height) : (texture->width * texture->height)); ++i) tex[i] = b[i];
		texture->unlock();
	
{
		HX_STACK_FRAME("kha.Image","unlock",0xdc8ed221,"kha.Image.unlock","kha/Image.hx",175,0xc9b7c0ee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(175)
		this->bytes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,unlock,(void))

::kha::Image Image_obj::createFromVideo( ::kha::Video video){
	HX_STACK_FRAME("kha.Image","createFromVideo",0xac473518,"kha.Image.createFromVideo","kha/Image.hx",22,0xc9b7c0ee)
	HX_STACK_ARG(video,"video")
	HX_STACK_LINE(23)
	::kha::Image image = ::kha::Image_obj::__new(false);		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(24)
	image->format = ::kha::graphics4::TextureFormat_obj::RGBA32;
	HX_STACK_LINE(25)
	::kha::kore::Video tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	tmp = hx::TCast< ::kha::kore::Video >::cast(video);
	HX_STACK_LINE(25)
	image->initVideo(tmp);
	HX_STACK_LINE(26)
	::kha::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,createFromVideo,return )

::kha::Image Image_obj::create( int width,int height,::kha::graphics4::TextureFormat format,::kha::graphics4::Usage usage,hx::Null< int >  __o_levels){
int levels = __o_levels.Default(1);
	HX_STACK_FRAME("kha.Image","create",0xf3119659,"kha.Image.create","kha/Image.hx",29,0xc9b7c0ee)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(usage,"usage")
	HX_STACK_ARG(levels,"levels")
{
		HX_STACK_LINE(30)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		bool tmp2 = (format == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		::kha::graphics4::TextureFormat tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		if ((tmp2)){
			HX_STACK_LINE(30)
			tmp3 = ::kha::graphics4::TextureFormat_obj::RGBA32;
		}
		else{
			HX_STACK_LINE(30)
			tmp3 = format;
		}
		HX_STACK_LINE(30)
		::kha::Image tmp4 = ::kha::Image_obj::create2(tmp,tmp1,tmp3,false,false,false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Image_obj,create,return )

::kha::Image Image_obj::createRenderTarget( int width,int height,::kha::graphics4::TextureFormat format,hx::Null< bool >  __o_depthStencil,hx::Null< int >  __o_antiAliasingSamples){
bool depthStencil = __o_depthStencil.Default(false);
int antiAliasingSamples = __o_antiAliasingSamples.Default(1);
	HX_STACK_FRAME("kha.Image","createRenderTarget",0x905b7b40,"kha.Image.createRenderTarget","kha/Image.hx",33,0xc9b7c0ee)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(depthStencil,"depthStencil")
	HX_STACK_ARG(antiAliasingSamples,"antiAliasingSamples")
{
		HX_STACK_LINE(34)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		bool tmp2 = (format == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::kha::graphics4::TextureFormat tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		if ((tmp2)){
			HX_STACK_LINE(34)
			tmp3 = ::kha::graphics4::TextureFormat_obj::RGBA32;
		}
		else{
			HX_STACK_LINE(34)
			tmp3 = format;
		}
		HX_STACK_LINE(34)
		bool tmp4 = depthStencil;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::kha::Image tmp5 = ::kha::Image_obj::create2(tmp,tmp1,tmp3,false,true,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Image_obj,createRenderTarget,return )

::kha::Image Image_obj::create2( int width,int height,::kha::graphics4::TextureFormat format,bool readable,bool renderTarget,bool depthBuffer){
	HX_STACK_FRAME("kha.Image","create2",0xbc51f7b9,"kha.Image.create2","kha/Image.hx",41,0xc9b7c0ee)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(readable,"readable")
	HX_STACK_ARG(renderTarget,"renderTarget")
	HX_STACK_ARG(depthBuffer,"depthBuffer")
	HX_STACK_LINE(42)
	::kha::Image image = ::kha::Image_obj::__new(readable);		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(43)
	image->format = format;
	HX_STACK_LINE(44)
	bool tmp = renderTarget;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	if ((tmp)){
		HX_STACK_LINE(44)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		bool tmp3 = (format == ::kha::graphics4::TextureFormat_obj::RGBA32);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		if ((tmp3)){
			HX_STACK_LINE(44)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(44)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(44)
		bool tmp5 = depthBuffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		image->initRenderTarget(tmp1,tmp2,tmp4,tmp5);
	}
	else{
		HX_STACK_LINE(45)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = (format == ::kha::graphics4::TextureFormat_obj::RGBA32);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		if ((tmp3)){
			HX_STACK_LINE(45)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(45)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(45)
		image->init(tmp1,tmp2,tmp4);
	}
	HX_STACK_LINE(46)
	::kha::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Image_obj,create2,return )

::kha::Image Image_obj::fromFile( ::String filename,bool readable){
	HX_STACK_FRAME("kha.Image","fromFile",0x80fa1da3,"kha.Image.fromFile","kha/Image.hx",64,0xc9b7c0ee)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(readable,"readable")
	HX_STACK_LINE(65)
	::kha::Image image = ::kha::Image_obj::__new(readable);		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(66)
	image->format = ::kha::graphics4::TextureFormat_obj::RGBA32;
	HX_STACK_LINE(67)
	::String tmp = filename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	image->initFromFile(tmp);
	HX_STACK_LINE(68)
	::kha::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fromFile,return )

int Image_obj::maxSize;

int Image_obj::get_maxSize( ){
	HX_STACK_FRAME("kha.Image","get_maxSize",0x2962591f,"kha.Image.get_maxSize","kha/Image.hx",106,0xc9b7c0ee)
	HX_STACK_LINE(106)
	return (int)4096;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_maxSize,return )

bool Image_obj::nonPow2Supported;

bool Image_obj::get_nonPow2Supported( ){
return Kore::Graphics::nonPow2TexturesSupported();
{
		HX_STACK_FRAME("kha.Image","get_nonPow2Supported",0xb7e34b0d,"kha.Image.get_nonPow2Supported","kha/Image.hx",113,0xc9b7c0ee)
		HX_STACK_LINE(113)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_nonPow2Supported,return )


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(readable,"readable");
	HX_MARK_MEMBER_NAME(graphics1,"graphics1");
	HX_MARK_MEMBER_NAME(graphics2,"graphics2");
	HX_MARK_MEMBER_NAME(graphics4,"graphics4");
	HX_MARK_MEMBER_NAME(g1,"g1");
	HX_MARK_MEMBER_NAME(g2,"g2");
	HX_MARK_MEMBER_NAME(g4,"g4");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(realWidth,"realWidth");
	HX_MARK_MEMBER_NAME(realHeight,"realHeight");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(readable,"readable");
	HX_VISIT_MEMBER_NAME(graphics1,"graphics1");
	HX_VISIT_MEMBER_NAME(graphics2,"graphics2");
	HX_VISIT_MEMBER_NAME(graphics4,"graphics4");
	HX_VISIT_MEMBER_NAME(g1,"g1");
	HX_VISIT_MEMBER_NAME(g2,"g2");
	HX_VISIT_MEMBER_NAME(g4,"g4");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(realWidth,"realWidth");
	HX_VISIT_MEMBER_NAME(realHeight,"realHeight");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"g1") ) { return inCallProp == hx::paccAlways ? get_g1() : g1; }
		if (HX_FIELD_EQ(inName,"g2") ) { return inCallProp == hx::paccAlways ? get_g2() : g2; }
		if (HX_FIELD_EQ(inName,"g4") ) { return inCallProp == hx::paccAlways ? get_g4() : g4; }
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"get_g1") ) { return get_g1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_g2") ) { return get_g2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_g4") ) { return get_g4_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readable") ) { return readable; }
		if (HX_FIELD_EQ(inName,"isOpaque") ) { return isOpaque_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"graphics1") ) { return graphics1; }
		if (HX_FIELD_EQ(inName,"graphics2") ) { return graphics2; }
		if (HX_FIELD_EQ(inName,"graphics4") ) { return graphics4; }
		if (HX_FIELD_EQ(inName,"initVideo") ) { return initVideo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"realWidth") ) { return inCallProp == hx::paccAlways ? get_realWidth() : realWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"realHeight") ) { return inCallProp == hx::paccAlways ? get_realHeight() : realHeight; }
		if (HX_FIELD_EQ(inName,"atInternal") ) { return atInternal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initFromFile") ) { return initFromFile_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_realWidth") ) { return get_realWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_realHeight") ) { return get_realHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initRenderTarget") ) { return initRenderTarget_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Image_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"create2") ) { outValue = create2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"maxSize") ) { outValue = inCallProp == hx::paccAlways ? get_maxSize() : maxSize; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_maxSize") ) { outValue = get_maxSize_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromVideo") ) { outValue = createFromVideo_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nonPow2Supported") ) { outValue = inCallProp == hx::paccAlways ? get_nonPow2Supported() : nonPow2Supported; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createRenderTarget") ) { outValue = createRenderTarget_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_nonPow2Supported") ) { outValue = get_nonPow2Supported_dyn(); return true;  }
	}
	return false;
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"g1") ) { g1=inValue.Cast< ::kha::graphics1::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g2") ) { g2=inValue.Cast< ::kha::graphics2::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g4") ) { g4=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::kha::graphics4::TextureFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readable") ) { readable=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"graphics1") ) { graphics1=inValue.Cast< ::kha::graphics1::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics2") ) { graphics2=inValue.Cast< ::kha::graphics2::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics4") ) { graphics4=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realWidth") ) { realWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"realHeight") ) { realHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Image_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nonPow2Supported") ) { nonPow2Supported=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d"));
	outFields->push(HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("g1","\xea","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("g2","\xeb","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("g4","\xed","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce"));
	outFields->push(HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48"));
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::graphics4::TextureFormat*/ ,(int)offsetof(Image_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsBool,(int)offsetof(Image_obj,readable),HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d")},
	{hx::fsObject /*::kha::graphics1::Graphics*/ ,(int)offsetof(Image_obj,graphics1),HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics2::Graphics*/ ,(int)offsetof(Image_obj,graphics2),HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(Image_obj,graphics4),HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics1::Graphics*/ ,(int)offsetof(Image_obj,g1),HX_HCSTRING("g1","\xea","\x59","\x00","\x00")},
	{hx::fsObject /*::kha::graphics2::Graphics*/ ,(int)offsetof(Image_obj,g2),HX_HCSTRING("g2","\xeb","\x59","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(Image_obj,g4),HX_HCSTRING("g4","\xed","\x59","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Image_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Image_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Image_obj,realWidth),HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce")},
	{hx::fsInt,(int)offsetof(Image_obj,realHeight),HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Image_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Image_obj::maxSize,HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")},
	{hx::fsBool,(void *) &Image_obj::nonPow2Supported,HX_HCSTRING("nonPow2Supported","\xe7","\x6d","\x39","\x51")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d"),
	HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08"),
	HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08"),
	HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08"),
	HX_HCSTRING("initRenderTarget","\x77","\xd6","\x84","\xe9"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initVideo","\x4b","\x2f","\x8e","\x52"),
	HX_HCSTRING("initFromFile","\x36","\x24","\x3e","\x46"),
	HX_HCSTRING("g1","\xea","\x59","\x00","\x00"),
	HX_HCSTRING("get_g1","\x33","\xf1","\x2f","\xa3"),
	HX_HCSTRING("g2","\xeb","\x59","\x00","\x00"),
	HX_HCSTRING("get_g2","\x34","\xf1","\x2f","\xa3"),
	HX_HCSTRING("g4","\xed","\x59","\x00","\x00"),
	HX_HCSTRING("get_g4","\x36","\xf1","\x2f","\xa3"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce"),
	HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48"),
	HX_HCSTRING("get_realWidth","\x9f","\xb9","\x88","\x8f"),
	HX_HCSTRING("get_realHeight","\x2e","\x2a","\x69","\xbe"),
	HX_HCSTRING("isOpaque","\x6b","\x78","\x5b","\x77"),
	HX_HCSTRING("atInternal","\x50","\x23","\xc3","\x73"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(Image_obj::nonPow2Supported,"nonPow2Supported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(Image_obj::nonPow2Supported,"nonPow2Supported");
};

#endif

hx::Class Image_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("createFromVideo","\x15","\xb8","\x79","\x8c"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createRenderTarget","\x63","\x34","\x61","\xf0"),
	HX_HCSTRING("create2","\xb6","\xb5","\x6a","\x11"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("get_maxSize","\x9c","\x59","\x7e","\x52"),
	HX_HCSTRING("nonPow2Supported","\xe7","\x6d","\x39","\x51"),
	HX_HCSTRING("get_nonPow2Supported","\xf0","\xd2","\xa3","\x6f"),
	::String(null()) };

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Image","\x71","\x67","\x08","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Image_obj::__GetStatic;
	__mClass->mSetStaticField = &Image_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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
