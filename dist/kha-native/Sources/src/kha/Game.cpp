#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha_Button
#include <kha/Button.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
#ifndef INCLUDED_kha_HighscoreList
#include <kha/HighscoreList.h>
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
#ifndef INCLUDED_kha_Scaler
#include <kha/Scaler.h>
#endif
#ifndef INCLUDED_kha_ScreenCanvas
#include <kha/ScreenCanvas.h>
#endif
#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
#ifndef INCLUDED_kha_Sys
#include <kha/Sys.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
namespace kha{

Void Game_obj::__construct(::String name,hx::Null< bool >  __o_hasHighscores)
{
HX_STACK_FRAME("kha.Game","new",0x12b0df8e,"kha.Game.new","kha/Game.hx",9,0xbf983dc1)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(__o_hasHighscores,"hasHighscores")
bool hasHighscores = __o_hasHighscores.Default(false);
{
	HX_STACK_LINE(127)
	this->deprecatedImage = null();
	HX_STACK_LINE(42)
	this->setInstance();
	HX_STACK_LINE(43)
	this->name = name;
	HX_STACK_LINE(44)
	bool tmp = hasHighscores;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	if ((tmp)){
		HX_STACK_LINE(44)
		::kha::HighscoreList tmp1 = ::kha::HighscoreList_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		this->highscores = tmp1;
	}
	HX_STACK_LINE(45)
	::kha::Loader tmp1 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	int tmp2 = tmp1->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	this->width = tmp3;
	HX_STACK_LINE(46)
	::kha::Loader tmp4 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	int tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	this->height = tmp6;
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new(::String name,hx::Null< bool >  __o_hasHighscores)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct(name,__o_hasHighscores);
	return _result_;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Game_obj::setInstance( ){
{
		HX_STACK_FRAME("kha.Game","setInstance",0xce26d685,"kha.Game.setInstance","kha/Game.hx",53,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::kha::Game_obj::the = hx::ObjectPtr<OBJ_>(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,setInstance,(void))

Void Game_obj::loadFinished( ){
{
		HX_STACK_FRAME("kha.Game","loadFinished",0x72e21aca,"kha.Game.loadFinished","kha/Game.hx",61,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::kha::Loader tmp = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		int w = tmp->width;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(63)
		bool tmp1 = (w > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(63)
			this->width = w;
		}
		HX_STACK_LINE(64)
		::kha::Loader tmp2 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		int h = tmp2->height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(65)
		bool tmp3 = (h > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(65)
			this->height = h;
		}
		HX_STACK_LINE(66)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,loadFinished,(void))

Void Game_obj::init( ){
{
		HX_STACK_FRAME("kha.Game","init",0x44cb7422,"kha.Game.init","kha/Game.hx",73,0xbf983dc1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,init,(void))

Void Game_obj::update( ){
{
		HX_STACK_FRAME("kha.Game","update",0x9563a79b,"kha.Game.update","kha/Game.hx",79,0xbf983dc1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,update,(void))

Void Game_obj::startRender( ::kha::Framebuffer frame){
{
		HX_STACK_FRAME("kha.Game","startRender",0xc0f4b686,"kha.Game.startRender","kha/Game.hx",88,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(90)
		::kha::graphics2::Graphics tmp = frame->get_g2();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		tmp->begin(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,startRender,(void))

Void Game_obj::endRender( ::kha::Framebuffer frame){
{
		HX_STACK_FRAME("kha.Game","endRender",0x35f95f3f,"kha.Game.endRender","kha/Game.hx",99,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(102)
		::kha::graphics2::Graphics tmp = frame->get_g2();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		tmp->end();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,endRender,(void))

Void Game_obj::render( ::kha::Framebuffer frame){
{
		HX_STACK_FRAME("kha.Game","render",0x13878ce8,"kha.Game.render","kha/Game.hx",110,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(112)
		::kha::Framebuffer tmp = frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		this->startRender(tmp);
		HX_STACK_LINE(116)
		::kha::Framebuffer tmp1 = frame;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		this->endRender(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,render,(void))

::kha::HighscoreList Game_obj::getHighscores( ){
	HX_STACK_FRAME("kha.Game","getHighscores",0xe603d2a7,"kha.Game.getHighscores","kha/Game.hx",123,0xbf983dc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	::kha::HighscoreList tmp = this->highscores;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getHighscores,return )

Void Game_obj::initDeprecatedImage( ){
{
		HX_STACK_FRAME("kha.Game","initDeprecatedImage",0x0c6a38e6,"kha.Game.initDeprecatedImage","kha/Game.hx",129,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::kha::Image tmp = this->deprecatedImage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(130)
			return null();
		}
		HX_STACK_LINE(131)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		::kha::Image tmp4 = ::kha::Image_obj::create(tmp2,tmp3,::kha::graphics4::TextureFormat_obj::L8,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		this->deprecatedImage = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,initDeprecatedImage,(void))

int Game_obj::painterTransformMouseX( int x,int y){
	HX_STACK_FRAME("kha.Game","painterTransformMouseX",0x4172b366,"kha.Game.painterTransformMouseX","kha/Game.hx",135,0xbf983dc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(136)
	this->initDeprecatedImage();
	HX_STACK_LINE(137)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	::kha::Image tmp2 = this->deprecatedImage;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	::kha::ScreenCanvas tmp3 = ::kha::ScreenCanvas_obj::get_the();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	::kha::ScreenRotation tmp4 = ::kha::Sys_obj::screenRotation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(137)
	int tmp5 = ::kha::Scaler_obj::transformX(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(137)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,painterTransformMouseX,return )

int Game_obj::painterTransformMouseY( int x,int y){
	HX_STACK_FRAME("kha.Game","painterTransformMouseY",0x4172b367,"kha.Game.painterTransformMouseY","kha/Game.hx",141,0xbf983dc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(142)
	this->initDeprecatedImage();
	HX_STACK_LINE(143)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	::kha::Image tmp2 = this->deprecatedImage;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	::kha::ScreenCanvas tmp3 = ::kha::ScreenCanvas_obj::get_the();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	::kha::ScreenRotation tmp4 = ::kha::Sys_obj::screenRotation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	int tmp5 = ::kha::Scaler_obj::transformY(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(143)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,painterTransformMouseY,return )

Void Game_obj::buttonDown( ::kha::Button button){
{
		HX_STACK_FRAME("kha.Game","buttonDown",0x8b67ba06,"kha.Game.buttonDown","kha/Game.hx",147,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,buttonDown,(void))

Void Game_obj::buttonUp( ::kha::Button button){
{
		HX_STACK_FRAME("kha.Game","buttonUp",0x5789b6ff,"kha.Game.buttonUp","kha/Game.hx",149,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,buttonUp,(void))

Void Game_obj::keyDown( ::kha::Key key,::String _char){
{
		HX_STACK_FRAME("kha.Game","keyDown",0x2046a7cf,"kha.Game.keyDown","kha/Game.hx",152,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(_char,"char")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,keyDown,(void))

Void Game_obj::keyUp( ::kha::Key key,::String _char){
{
		HX_STACK_FRAME("kha.Game","keyUp",0x0e207088,"kha.Game.keyUp","kha/Game.hx",154,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(_char,"char")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,keyUp,(void))

Void Game_obj::mouseDown( int x,int y){
{
		HX_STACK_FRAME("kha.Game","mouseDown",0xdfb056d5,"kha.Game.mouseDown","kha/Game.hx",157,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,mouseDown,(void))

Void Game_obj::mouseUp( int x,int y){
{
		HX_STACK_FRAME("kha.Game","mouseUp",0x4472320e,"kha.Game.mouseUp","kha/Game.hx",159,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,mouseUp,(void))

Void Game_obj::rightMouseDown( int x,int y){
{
		HX_STACK_FRAME("kha.Game","rightMouseDown",0xd66c2d3d,"kha.Game.rightMouseDown","kha/Game.hx",161,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,rightMouseDown,(void))

Void Game_obj::rightMouseUp( int x,int y){
{
		HX_STACK_FRAME("kha.Game","rightMouseUp",0xcf8c1e76,"kha.Game.rightMouseUp","kha/Game.hx",163,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,rightMouseUp,(void))

Void Game_obj::middleMouseDown( int x,int y){
{
		HX_STACK_FRAME("kha.Game","middleMouseDown",0x7bcc4740,"kha.Game.middleMouseDown","kha/Game.hx",165,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,middleMouseDown,(void))

Void Game_obj::middleMouseUp( int x,int y){
{
		HX_STACK_FRAME("kha.Game","middleMouseUp",0xf3d2a1b9,"kha.Game.middleMouseUp","kha/Game.hx",167,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,middleMouseUp,(void))

Void Game_obj::mouseMove( int x,int y){
{
		HX_STACK_FRAME("kha.Game","mouseMove",0xe5a34184,"kha.Game.mouseMove","kha/Game.hx",169,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,mouseMove,(void))

Void Game_obj::mouseWheel( int delta){
{
		HX_STACK_FRAME("kha.Game","mouseWheel",0xc68a7ac8,"kha.Game.mouseWheel","kha/Game.hx",171,0xbf983dc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,mouseWheel,(void))

Void Game_obj::onForeground( ){
{
		HX_STACK_FRAME("kha.Game","onForeground",0x0d9d55d4,"kha.Game.onForeground","kha/Game.hx",177,0xbf983dc1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onForeground,(void))

Void Game_obj::onResume( ){
{
		HX_STACK_FRAME("kha.Game","onResume",0xe3888a3e,"kha.Game.onResume","kha/Game.hx",182,0xbf983dc1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onResume,(void))

Void Game_obj::onPause( ){
{
		HX_STACK_FRAME("kha.Game","onPause",0xd794b385,"kha.Game.onPause","kha/Game.hx",187,0xbf983dc1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onPause,(void))

Void Game_obj::onBackground( ){
{
		HX_STACK_FRAME("kha.Game","onBackground",0x22cbd0ff,"kha.Game.onBackground","kha/Game.hx",192,0xbf983dc1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onBackground,(void))

Void Game_obj::onShutdown( ){
{
		HX_STACK_FRAME("kha.Game","onShutdown",0x27c62367,"kha.Game.onShutdown","kha/Game.hx",197,0xbf983dc1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,onShutdown,(void))

int Game_obj::FPS;

::kha::Game Game_obj::the;


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(highscores,"highscores");
	HX_MARK_MEMBER_NAME(deprecatedImage,"deprecatedImage");
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(highscores,"highscores");
	HX_VISIT_MEMBER_NAME(deprecatedImage,"deprecatedImage");
}

Dynamic Game_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"keyUp") ) { return keyUp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyDown") ) { return keyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onPause") ) { return onPause_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { return buttonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onResume") ) { return onResume_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endRender") ) { return endRender_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"highscores") ) { return highscores; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return buttonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { return mouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onShutdown") ) { return onShutdown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setInstance") ) { return setInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"startRender") ) { return startRender_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFinished") ) { return loadFinished_dyn(); }
		if (HX_FIELD_EQ(inName,"rightMouseUp") ) { return rightMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onForeground") ) { return onForeground_dyn(); }
		if (HX_FIELD_EQ(inName,"onBackground") ) { return onBackground_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getHighscores") ) { return getHighscores_dyn(); }
		if (HX_FIELD_EQ(inName,"middleMouseUp") ) { return middleMouseUp_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightMouseDown") ) { return rightMouseDown_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deprecatedImage") ) { return deprecatedImage; }
		if (HX_FIELD_EQ(inName,"middleMouseDown") ) { return middleMouseDown_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initDeprecatedImage") ) { return initDeprecatedImage_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"painterTransformMouseX") ) { return painterTransformMouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"painterTransformMouseY") ) { return painterTransformMouseY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Game_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"FPS") ) { outValue = FPS; return true;  }
		if (HX_FIELD_EQ(inName,"the") ) { outValue = the; return true;  }
	}
	return false;
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"highscores") ) { highscores=inValue.Cast< ::kha::HighscoreList >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deprecatedImage") ) { deprecatedImage=inValue.Cast< ::kha::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Game_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"FPS") ) { FPS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"the") ) { the=ioValue.Cast< ::kha::Game >(); return true; }
	}
	return false;
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("highscores","\xc3","\x61","\xb4","\xd0"));
	outFields->push(HX_HCSTRING("deprecatedImage","\xe8","\xae","\x41","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Game_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Game_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Game_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::kha::HighscoreList*/ ,(int)offsetof(Game_obj,highscores),HX_HCSTRING("highscores","\xc3","\x61","\xb4","\xd0")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(Game_obj,deprecatedImage),HX_HCSTRING("deprecatedImage","\xe8","\xae","\x41","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Game_obj::FPS,HX_HCSTRING("FPS","\xc9","\x63","\x35","\x00")},
	{hx::fsObject /*::kha::Game*/ ,(void *) &Game_obj::the,HX_HCSTRING("the","\x71","\x60","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("highscores","\xc3","\x61","\xb4","\xd0"),
	HX_HCSTRING("setInstance","\x57","\xe9","\x41","\x8a"),
	HX_HCSTRING("loadFinished","\xb8","\x7f","\x77","\x4e"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("startRender","\x58","\xc9","\x0f","\x7d"),
	HX_HCSTRING("endRender","\x91","\xb9","\x0b","\x45"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("getHighscores","\xf9","\xbd","\x26","\x2d"),
	HX_HCSTRING("deprecatedImage","\xe8","\xae","\x41","\x8d"),
	HX_HCSTRING("initDeprecatedImage","\xb8","\x6d","\xef","\xde"),
	HX_HCSTRING("painterTransformMouseX","\xd4","\xcd","\xf4","\xf9"),
	HX_HCSTRING("painterTransformMouseY","\xd5","\xcd","\xf4","\xf9"),
	HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),
	HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"),
	HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),
	HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),
	HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),
	HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),
	HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"),
	HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"),
	HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01"),
	HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a"),
	HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),
	HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),
	HX_HCSTRING("onForeground","\xc2","\xba","\x32","\xe9"),
	HX_HCSTRING("onResume","\x2c","\x60","\x31","\xe8"),
	HX_HCSTRING("onPause","\x57","\x75","\x95","\x53"),
	HX_HCSTRING("onBackground","\xed","\x35","\x61","\xfe"),
	HX_HCSTRING("onShutdown","\xd5","\xd0","\xc2","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Game_obj::FPS,"FPS");
	HX_MARK_MEMBER_NAME(Game_obj::the,"the");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Game_obj::FPS,"FPS");
	HX_VISIT_MEMBER_NAME(Game_obj::the,"the");
};

#endif

hx::Class Game_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FPS","\xc9","\x63","\x35","\x00"),
	HX_HCSTRING("the","\x71","\x60","\x58","\x00"),
	::String(null()) };

void Game_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Game","\x9c","\xc0","\x12","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Game_obj::__GetStatic;
	__mClass->mSetStaticField = &Game_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Game_obj >;
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

void Game_obj::__boot()
{
	FPS= (int)60;
}

} // end namespace kha
