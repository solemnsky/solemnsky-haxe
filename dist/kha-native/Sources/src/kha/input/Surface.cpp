#include <hxcpp.h>

#ifndef INCLUDED_kha_input_Surface
#include <kha/input/Surface.h>
#endif
namespace kha{
namespace input{

Void Surface_obj::__construct()
{
HX_STACK_FRAME("kha.input.Surface","new",0x73f96851,"kha.input.Surface.new","kha/input/Surface.hx",28,0xe9f00981)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	cpp::ArrayBase tmp = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->touchStartListeners = tmp;
	HX_STACK_LINE(30)
	cpp::ArrayBase tmp1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	this->touchEndListeners = tmp1;
	HX_STACK_LINE(31)
	cpp::ArrayBase tmp2 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	this->moveListeners = tmp2;
	HX_STACK_LINE(32)
	::kha::input::Surface_obj::instance = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Surface_obj::~Surface_obj() { }

Dynamic Surface_obj::__CreateEmpty() { return  new Surface_obj; }
hx::ObjectPtr< Surface_obj > Surface_obj::__new()
{  hx::ObjectPtr< Surface_obj > _result_ = new Surface_obj();
	_result_->__construct();
	return _result_;}

Dynamic Surface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Surface_obj > _result_ = new Surface_obj();
	_result_->__construct();
	return _result_;}

Void Surface_obj::notify( Dynamic touchStartListener,Dynamic touchEndListener,Dynamic moveListener){
{
		HX_STACK_FRAME("kha.input.Surface","notify",0x41b80f78,"kha.input.Surface.notify","kha/input/Surface.hx",11,0xe9f00981)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touchStartListener,"touchStartListener")
		HX_STACK_ARG(touchEndListener,"touchEndListener")
		HX_STACK_ARG(moveListener,"moveListener")
		HX_STACK_LINE(12)
		bool tmp = (touchStartListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		if ((tmp)){
			HX_STACK_LINE(12)
			cpp::ArrayBase tmp1 = this->touchStartListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12)
			Dynamic tmp2 = touchStartListener;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12)
			tmp1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		}
		HX_STACK_LINE(13)
		bool tmp1 = (touchEndListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		if ((tmp1)){
			HX_STACK_LINE(13)
			cpp::ArrayBase tmp2 = this->touchEndListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13)
			Dynamic tmp3 = touchEndListener;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13)
			tmp2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		}
		HX_STACK_LINE(14)
		bool tmp2 = (moveListener != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14)
		if ((tmp2)){
			HX_STACK_LINE(14)
			cpp::ArrayBase tmp3 = this->moveListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14)
			Dynamic tmp4 = moveListener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(14)
			tmp3->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,notify,(void))

Void Surface_obj::remove( Dynamic touchStartListener,Dynamic touchEndListener,Dynamic moveListener){
{
		HX_STACK_FRAME("kha.input.Surface","remove",0x1487d0f3,"kha.input.Surface.remove","kha/input/Surface.hx",17,0xe9f00981)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touchStartListener,"touchStartListener")
		HX_STACK_ARG(touchEndListener,"touchEndListener")
		HX_STACK_ARG(moveListener,"moveListener")
		HX_STACK_LINE(18)
		bool tmp = (touchStartListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		if ((tmp)){
			HX_STACK_LINE(18)
			cpp::ArrayBase tmp1 = this->touchStartListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(18)
			Dynamic tmp2 = touchStartListener;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(18)
			tmp1->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp2);
		}
		HX_STACK_LINE(19)
		bool tmp1 = (touchEndListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		if ((tmp1)){
			HX_STACK_LINE(19)
			cpp::ArrayBase tmp2 = this->touchEndListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(19)
			Dynamic tmp3 = touchEndListener;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(19)
			tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		}
		HX_STACK_LINE(20)
		bool tmp2 = (moveListener != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		if ((tmp2)){
			HX_STACK_LINE(20)
			cpp::ArrayBase tmp3 = this->moveListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(20)
			Dynamic tmp4 = moveListener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			tmp3->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,remove,(void))

Void Surface_obj::sendTouchStartEvent( int index,int x,int y){
{
		HX_STACK_FRAME("kha.input.Surface","sendTouchStartEvent",0xfc8e7680,"kha.input.Surface.sendTouchStartEvent","kha/input/Surface.hx",36,0xe9f00981)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		cpp::ArrayBase tmp = this->touchStartListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			if ((tmp2)){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(36)
			++(_g);
			HX_STACK_LINE(37)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			listener(tmp4,tmp5,tmp6).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,sendTouchStartEvent,(void))

Void Surface_obj::sendTouchEndEvent( int index,int x,int y){
{
		HX_STACK_FRAME("kha.input.Surface","sendTouchEndEvent",0x76ffd667,"kha.input.Surface.sendTouchEndEvent","kha/input/Surface.hx",42,0xe9f00981)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		cpp::ArrayBase tmp = this->touchEndListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			if ((tmp2)){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(42)
			++(_g);
			HX_STACK_LINE(43)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			listener(tmp4,tmp5,tmp6).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,sendTouchEndEvent,(void))

Void Surface_obj::sendMoveEvent( int index,int x,int y){
{
		HX_STACK_FRAME("kha.input.Surface","sendMoveEvent",0x6e915012,"kha.input.Surface.sendMoveEvent","kha/input/Surface.hx",48,0xe9f00981)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(48)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		cpp::ArrayBase tmp = this->moveListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		while((true)){
			HX_STACK_LINE(48)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			if ((tmp2)){
				HX_STACK_LINE(48)
				break;
			}
			HX_STACK_LINE(48)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(48)
			++(_g);
			HX_STACK_LINE(49)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			listener(tmp4,tmp5,tmp6).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,sendMoveEvent,(void))

::kha::input::Surface Surface_obj::get( hx::Null< int >  __o_num){
int num = __o_num.Default(0);
	HX_STACK_FRAME("kha.input.Surface","get",0x73f41887,"kha.input.Surface.get","kha/input/Surface.hx",6,0xe9f00981)
	HX_STACK_ARG(num,"num")
{
		HX_STACK_LINE(7)
		bool tmp = (num != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7)
		if ((tmp)){
			HX_STACK_LINE(7)
			return null();
		}
		HX_STACK_LINE(8)
		::kha::input::Surface tmp1 = ::kha::input::Surface_obj::instance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Surface_obj,get,return )

::kha::input::Surface Surface_obj::instance;


Surface_obj::Surface_obj()
{
}

void Surface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Surface);
	HX_MARK_MEMBER_NAME(touchStartListeners,"touchStartListeners");
	HX_MARK_MEMBER_NAME(touchEndListeners,"touchEndListeners");
	HX_MARK_MEMBER_NAME(moveListeners,"moveListeners");
	HX_MARK_END_CLASS();
}

void Surface_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(touchStartListeners,"touchStartListeners");
	HX_VISIT_MEMBER_NAME(touchEndListeners,"touchEndListeners");
	HX_VISIT_MEMBER_NAME(moveListeners,"moveListeners");
}

Dynamic Surface_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"moveListeners") ) { return moveListeners; }
		if (HX_FIELD_EQ(inName,"sendMoveEvent") ) { return sendMoveEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"touchEndListeners") ) { return touchEndListeners; }
		if (HX_FIELD_EQ(inName,"sendTouchEndEvent") ) { return sendTouchEndEvent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"touchStartListeners") ) { return touchStartListeners; }
		if (HX_FIELD_EQ(inName,"sendTouchStartEvent") ) { return sendTouchStartEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Surface_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic Surface_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"moveListeners") ) { moveListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"touchEndListeners") ) { touchEndListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"touchStartListeners") ) { touchStartListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Surface_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::kha::input::Surface >(); return true; }
	}
	return false;
}

void Surface_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("touchStartListeners","\xdc","\x50","\xa8","\x67"));
	outFields->push(HX_HCSTRING("touchEndListeners","\x83","\xf4","\x39","\x35"));
	outFields->push(HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Surface_obj,touchStartListeners),HX_HCSTRING("touchStartListeners","\xdc","\x50","\xa8","\x67")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Surface_obj,touchEndListeners),HX_HCSTRING("touchEndListeners","\x83","\xf4","\x39","\x35")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Surface_obj,moveListeners),HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::input::Surface*/ ,(void *) &Surface_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("notify","\xc9","\xda","\xb8","\x31"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("touchStartListeners","\xdc","\x50","\xa8","\x67"),
	HX_HCSTRING("touchEndListeners","\x83","\xf4","\x39","\x35"),
	HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e"),
	HX_HCSTRING("sendTouchStartEvent","\x8f","\x2c","\x82","\x16"),
	HX_HCSTRING("sendTouchEndEvent","\xb6","\x9a","\x7e","\x20"),
	HX_HCSTRING("sendMoveEvent","\xe1","\x00","\x06","\x98"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Surface_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Surface_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Surface_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Surface_obj::instance,"instance");
};

#endif

hx::Class Surface_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void Surface_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.input.Surface","\xdf","\xeb","\x90","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Surface_obj::__GetStatic;
	__mClass->mSetStaticField = &Surface_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Surface_obj >;
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
} // end namespace input
