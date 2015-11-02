#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Starter
#include <kha/Starter.h>
#endif
#ifndef INCLUDED_kha_input_Mouse
#include <kha/input/Mouse.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
namespace kha{
namespace input{

Void Mouse_obj::__construct()
{
HX_STACK_FRAME("kha.input.Mouse","new",0xc4b103c9,"kha.input.Mouse.new","kha/input/Mouse.hx",58,0x8b3f5089)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(59)
	super::__construct();
	HX_STACK_LINE(60)
	cpp::ArrayBase tmp = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	this->downListeners = tmp;
	HX_STACK_LINE(61)
	cpp::ArrayBase tmp1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	this->upListeners = tmp1;
	HX_STACK_LINE(62)
	cpp::ArrayBase tmp2 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	this->moveListeners = tmp2;
	HX_STACK_LINE(63)
	cpp::ArrayBase tmp3 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	this->wheelListeners = tmp3;
	HX_STACK_LINE(64)
	::kha::input::Mouse_obj::instance = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Void Mouse_obj::notify( Dynamic downListener,Dynamic upListener,Dynamic moveListener,Dynamic wheelListener){
{
		HX_STACK_FRAME("kha.input.Mouse","notify",0xc0c4ef00,"kha.input.Mouse.notify","kha/input/Mouse.hx",14,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(downListener,"downListener")
		HX_STACK_ARG(upListener,"upListener")
		HX_STACK_ARG(moveListener,"moveListener")
		HX_STACK_ARG(wheelListener,"wheelListener")
		HX_STACK_LINE(15)
		bool tmp = (downListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		if ((tmp)){
			HX_STACK_LINE(15)
			cpp::ArrayBase tmp1 = this->downListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(15)
			Dynamic tmp2 = downListener;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(15)
			tmp1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		}
		HX_STACK_LINE(16)
		bool tmp1 = (upListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		if ((tmp1)){
			HX_STACK_LINE(16)
			cpp::ArrayBase tmp2 = this->upListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(16)
			Dynamic tmp3 = upListener;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(16)
			tmp2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		}
		HX_STACK_LINE(17)
		bool tmp2 = (moveListener != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		if ((tmp2)){
			HX_STACK_LINE(17)
			cpp::ArrayBase tmp3 = this->moveListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			Dynamic tmp4 = moveListener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			tmp3->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		}
		HX_STACK_LINE(18)
		bool tmp3 = (wheelListener != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		if ((tmp3)){
			HX_STACK_LINE(18)
			cpp::ArrayBase tmp4 = this->wheelListeners;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(18)
			Dynamic tmp5 = wheelListener;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(18)
			tmp4->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,notify,(void))

Void Mouse_obj::remove( Dynamic downListener,Dynamic upListener,Dynamic moveListener,Dynamic wheelListener){
{
		HX_STACK_FRAME("kha.input.Mouse","remove",0x9394b07b,"kha.input.Mouse.remove","kha/input/Mouse.hx",21,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(downListener,"downListener")
		HX_STACK_ARG(upListener,"upListener")
		HX_STACK_ARG(moveListener,"moveListener")
		HX_STACK_ARG(wheelListener,"wheelListener")
		HX_STACK_LINE(22)
		bool tmp = (downListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		if ((tmp)){
			HX_STACK_LINE(22)
			cpp::ArrayBase tmp1 = this->downListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			Dynamic tmp2 = downListener;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			tmp1->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp2);
		}
		HX_STACK_LINE(23)
		bool tmp1 = (upListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		if ((tmp1)){
			HX_STACK_LINE(23)
			cpp::ArrayBase tmp2 = this->upListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			Dynamic tmp3 = upListener;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		}
		HX_STACK_LINE(24)
		bool tmp2 = (moveListener != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		if ((tmp2)){
			HX_STACK_LINE(24)
			cpp::ArrayBase tmp3 = this->moveListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			Dynamic tmp4 = moveListener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			tmp3->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp4);
		}
		HX_STACK_LINE(25)
		bool tmp3 = (wheelListener != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		if ((tmp3)){
			HX_STACK_LINE(25)
			cpp::ArrayBase tmp4 = this->wheelListeners;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			Dynamic tmp5 = wheelListener;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(25)
			tmp4->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,remove,(void))

Void Mouse_obj::lock( ){
{
		HX_STACK_FRAME("kha.input.Mouse","lock",0x54e76462,"kha.input.Mouse.lock","kha/input/Mouse.hx",29,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::kha::Starter_obj::lockMouse();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,lock,(void))

Void Mouse_obj::unlock( ){
{
		HX_STACK_FRAME("kha.input.Mouse","unlock",0xf498b6fb,"kha.input.Mouse.unlock","kha/input/Mouse.hx",33,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::kha::Starter_obj::unlockMouse();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,unlock,(void))

bool Mouse_obj::canLock( ){
	HX_STACK_FRAME("kha.input.Mouse","canLock",0x01952004,"kha.input.Mouse.canLock","kha/input/Mouse.hx",36,0x8b3f5089)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	bool tmp = ::kha::Starter_obj::canLockMouse();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,canLock,return )

bool Mouse_obj::isLocked( ){
	HX_STACK_FRAME("kha.input.Mouse","isLocked",0x2b93708b,"kha.input.Mouse.isLocked","kha/input/Mouse.hx",40,0x8b3f5089)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	bool tmp = ::kha::Starter_obj::isMouseLocked();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,isLocked,return )

Void Mouse_obj::notifyOfLockChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.input.Mouse","notifyOfLockChange",0x276ae6d2,"kha.input.Mouse.notifyOfLockChange","kha/input/Mouse.hx",44,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(45)
		Dynamic tmp = func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Dynamic tmp1 = error;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::kha::Starter_obj::notifyOfMouseLockChange(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,notifyOfLockChange,(void))

Void Mouse_obj::removeFromLockChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.input.Mouse","removeFromLockChange",0x65e93ba0,"kha.input.Mouse.removeFromLockChange","kha/input/Mouse.hx",48,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(49)
		Dynamic tmp = func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		Dynamic tmp1 = error;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::kha::Starter_obj::removeFromMouseLockChange(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,removeFromLockChange,(void))

Void Mouse_obj::sendDownEvent( int button,int x,int y){
{
		HX_STACK_FRAME("kha.input.Mouse","sendDownEvent",0xd589f699,"kha.input.Mouse.sendDownEvent","kha/input/Mouse.hx",69,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(69)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		cpp::ArrayBase tmp = this->downListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		while((true)){
			HX_STACK_LINE(69)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			if ((tmp2)){
				HX_STACK_LINE(69)
				break;
			}
			HX_STACK_LINE(69)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(69)
			++(_g);
			HX_STACK_LINE(70)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			listener(tmp4,tmp5,tmp6).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mouse_obj,sendDownEvent,(void))

Void Mouse_obj::sendUpEvent( int button,int x,int y){
{
		HX_STACK_FRAME("kha.input.Mouse","sendUpEvent",0xe2927fc0,"kha.input.Mouse.sendUpEvent","kha/input/Mouse.hx",76,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(76)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		cpp::ArrayBase tmp = this->upListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			if ((tmp2)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(76)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(76)
			++(_g);
			HX_STACK_LINE(77)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			listener(tmp4,tmp5,tmp6).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mouse_obj,sendUpEvent,(void))

Void Mouse_obj::sendMoveEvent( int x,int y,int movementX,int movementY){
{
		HX_STACK_FRAME("kha.input.Mouse","sendMoveEvent",0x7d3af18a,"kha.input.Mouse.sendMoveEvent","kha/input/Mouse.hx",83,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(movementX,"movementX")
		HX_STACK_ARG(movementY,"movementY")
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		cpp::ArrayBase tmp = this->moveListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			if ((tmp2)){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(83)
			++(_g);
			HX_STACK_LINE(84)
			int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			int tmp6 = movementX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			int tmp7 = movementY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			listener(tmp4,tmp5,tmp6,tmp7).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,sendMoveEvent,(void))

Void Mouse_obj::sendWheelEvent( int delta){
{
		HX_STACK_FRAME("kha.input.Mouse","sendWheelEvent",0x74cc101e,"kha.input.Mouse.sendWheelEvent","kha/input/Mouse.hx",90,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		cpp::ArrayBase tmp = this->wheelListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		while((true)){
			HX_STACK_LINE(90)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(90)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			if ((tmp2)){
				HX_STACK_LINE(90)
				break;
			}
			HX_STACK_LINE(90)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(90)
			++(_g);
			HX_STACK_LINE(91)
			int tmp4 = delta;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			listener(tmp4).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,sendWheelEvent,(void))

Void Mouse_obj::_receive( int offset,::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("kha.input.Mouse","_receive",0xdd738b5b,"kha.input.Mouse._receive","kha/network/ControllerBuilder.hx",263,0x77f946ab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(bytes,"bytes")
	}
return null();
}


::kha::input::Mouse Mouse_obj::get( hx::Null< int >  __o_num){
int num = __o_num.Default(0);
	HX_STACK_FRAME("kha.input.Mouse","get",0xc4abb3ff,"kha.input.Mouse.get","kha/input/Mouse.hx",9,0x8b3f5089)
	HX_STACK_ARG(num,"num")
{
		HX_STACK_LINE(10)
		bool tmp = (num != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		if ((tmp)){
			HX_STACK_LINE(10)
			return null();
		}
		HX_STACK_LINE(11)
		::kha::input::Mouse tmp1 = ::kha::input::Mouse_obj::instance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,get,return )

::kha::input::Mouse Mouse_obj::instance;


Mouse_obj::Mouse_obj()
{
}

void Mouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mouse);
	HX_MARK_MEMBER_NAME(downListeners,"downListeners");
	HX_MARK_MEMBER_NAME(upListeners,"upListeners");
	HX_MARK_MEMBER_NAME(moveListeners,"moveListeners");
	HX_MARK_MEMBER_NAME(wheelListeners,"wheelListeners");
	HX_MARK_END_CLASS();
}

void Mouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downListeners,"downListeners");
	HX_VISIT_MEMBER_NAME(upListeners,"upListeners");
	HX_VISIT_MEMBER_NAME(moveListeners,"moveListeners");
	HX_VISIT_MEMBER_NAME(wheelListeners,"wheelListeners");
}

Dynamic Mouse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canLock") ) { return canLock_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isLocked") ) { return isLocked_dyn(); }
		if (HX_FIELD_EQ(inName,"_receive") ) { return _receive_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"upListeners") ) { return upListeners; }
		if (HX_FIELD_EQ(inName,"sendUpEvent") ) { return sendUpEvent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"downListeners") ) { return downListeners; }
		if (HX_FIELD_EQ(inName,"moveListeners") ) { return moveListeners; }
		if (HX_FIELD_EQ(inName,"sendDownEvent") ) { return sendDownEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"sendMoveEvent") ) { return sendMoveEvent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wheelListeners") ) { return wheelListeners; }
		if (HX_FIELD_EQ(inName,"sendWheelEvent") ) { return sendWheelEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"notifyOfLockChange") ) { return notifyOfLockChange_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeFromLockChange") ) { return removeFromLockChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

Dynamic Mouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"upListeners") ) { upListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"downListeners") ) { downListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveListeners") ) { moveListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wheelListeners") ) { wheelListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::kha::input::Mouse >(); return true; }
	}
	return false;
}

void Mouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("downListeners","\xbd","\x30","\xf6","\xdd"));
	outFields->push(HX_HCSTRING("upListeners","\xa4","\xbb","\x9c","\x9b"));
	outFields->push(HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e"));
	outFields->push(HX_HCSTRING("wheelListeners","\x64","\x25","\xd7","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Mouse_obj,downListeners),HX_HCSTRING("downListeners","\xbd","\x30","\xf6","\xdd")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Mouse_obj,upListeners),HX_HCSTRING("upListeners","\xa4","\xbb","\x9c","\x9b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Mouse_obj,moveListeners),HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Mouse_obj,wheelListeners),HX_HCSTRING("wheelListeners","\x64","\x25","\xd7","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::input::Mouse*/ ,(void *) &Mouse_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("notify","\xc9","\xda","\xb8","\x31"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("canLock","\x1b","\x84","\x0f","\x66"),
	HX_HCSTRING("isLocked","\x94","\xa0","\x30","\xb2"),
	HX_HCSTRING("notifyOfLockChange","\x1b","\xdc","\x35","\x30"),
	HX_HCSTRING("removeFromLockChange","\x29","\xd5","\x52","\x6f"),
	HX_HCSTRING("downListeners","\xbd","\x30","\xf6","\xdd"),
	HX_HCSTRING("upListeners","\xa4","\xbb","\x9c","\x9b"),
	HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e"),
	HX_HCSTRING("wheelListeners","\x64","\x25","\xd7","\x51"),
	HX_HCSTRING("sendDownEvent","\xf0","\x05","\x55","\xf0"),
	HX_HCSTRING("sendUpEvent","\x57","\x3b","\x46","\x5c"),
	HX_HCSTRING("sendMoveEvent","\xe1","\x00","\x06","\x98"),
	HX_HCSTRING("sendWheelEvent","\xe7","\x6c","\xae","\xcb"),
	HX_HCSTRING("_receive","\x64","\xbb","\x10","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mouse_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mouse_obj::instance,"instance");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void Mouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
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

void Mouse_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",8,0x8b3f5089)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",8,0x8b3f5089)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",8,0x8b3f5089)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendDownEvent","\xf0","\x05","\x55","\xf0") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",8,0x8b3f5089)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendUpEvent","\x57","\x3b","\x46","\x5c") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",8,0x8b3f5089)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendMoveEvent","\xe1","\x00","\x06","\x98") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",8,0x8b3f5089)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendWheelEvent","\xe7","\x6c","\xae","\xcb") , _Function_2_4::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace kha
} // end namespace input
