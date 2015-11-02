#include <hxcpp.h>

#ifndef INCLUDED_kha_input_Gamepad
#include <kha/input/Gamepad.h>
#endif
namespace kha{
namespace input{

Void Gamepad_obj::__construct(hx::Null< int >  __o_id)
{
HX_STACK_FRAME("kha.input.Gamepad","new",0x1b762cc5,"kha.input.Gamepad.new","kha/input/Gamepad.hx",25,0xfbe88f8d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_id,"id")
int id = __o_id.Default(0);
{
	HX_STACK_LINE(26)
	cpp::ArrayBase tmp = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->axisListeners = tmp;
	HX_STACK_LINE(27)
	cpp::ArrayBase tmp1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	this->buttonListeners = tmp1;
	HX_STACK_LINE(28)
	Array< ::Dynamic > tmp2 = ::kha::input::Gamepad_obj::instances;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	int tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	tmp2[tmp3] = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Gamepad_obj::~Gamepad_obj() { }

Dynamic Gamepad_obj::__CreateEmpty() { return  new Gamepad_obj; }
hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(hx::Null< int >  __o_id)
{  hx::ObjectPtr< Gamepad_obj > _result_ = new Gamepad_obj();
	_result_->__construct(__o_id);
	return _result_;}

Dynamic Gamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gamepad_obj > _result_ = new Gamepad_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Gamepad_obj::notify( Dynamic axisListener,Dynamic buttonListener){
{
		HX_STACK_FRAME("kha.input.Gamepad","notify",0x4a3a8b84,"kha.input.Gamepad.notify","kha/input/Gamepad.hx",11,0xfbe88f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axisListener,"axisListener")
		HX_STACK_ARG(buttonListener,"buttonListener")
		HX_STACK_LINE(12)
		bool tmp = (axisListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		if ((tmp)){
			HX_STACK_LINE(12)
			cpp::ArrayBase tmp1 = this->axisListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12)
			Dynamic tmp2 = axisListener;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12)
			tmp1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		}
		HX_STACK_LINE(13)
		bool tmp1 = (buttonListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		if ((tmp1)){
			HX_STACK_LINE(13)
			cpp::ArrayBase tmp2 = this->buttonListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13)
			Dynamic tmp3 = buttonListener;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13)
			tmp2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,notify,(void))

Void Gamepad_obj::remove( Dynamic axisListener,Dynamic buttonListener){
{
		HX_STACK_FRAME("kha.input.Gamepad","remove",0x1d0a4cff,"kha.input.Gamepad.remove","kha/input/Gamepad.hx",16,0xfbe88f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axisListener,"axisListener")
		HX_STACK_ARG(buttonListener,"buttonListener")
		HX_STACK_LINE(17)
		bool tmp = (axisListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		if ((tmp)){
			HX_STACK_LINE(17)
			cpp::ArrayBase tmp1 = this->axisListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(17)
			Dynamic tmp2 = axisListener;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17)
			tmp1->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp2);
		}
		HX_STACK_LINE(18)
		bool tmp1 = (buttonListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		if ((tmp1)){
			HX_STACK_LINE(18)
			cpp::ArrayBase tmp2 = this->buttonListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(18)
			Dynamic tmp3 = buttonListener;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(18)
			tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,remove,(void))

Void Gamepad_obj::sendAxisEvent( int axis,Float value){
{
		HX_STACK_FRAME("kha.input.Gamepad","sendAxisEvent",0x13d0c9f6,"kha.input.Gamepad.sendAxisEvent","kha/input/Gamepad.hx",32,0xfbe88f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(32)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		cpp::ArrayBase tmp = this->axisListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			if ((tmp2)){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(32)
			++(_g);
			HX_STACK_LINE(33)
			int tmp4 = axis;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			listener(tmp4,tmp5).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,sendAxisEvent,(void))

Void Gamepad_obj::sendButtonEvent( int button,Float value){
{
		HX_STACK_FRAME("kha.input.Gamepad","sendButtonEvent",0x02b76845,"kha.input.Gamepad.sendButtonEvent","kha/input/Gamepad.hx",38,0xfbe88f8d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(38)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		cpp::ArrayBase tmp = this->buttonListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		while((true)){
			HX_STACK_LINE(38)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(38)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			if ((tmp2)){
				HX_STACK_LINE(38)
				break;
			}
			HX_STACK_LINE(38)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(38)
			++(_g);
			HX_STACK_LINE(39)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			listener(tmp4,tmp5).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gamepad_obj,sendButtonEvent,(void))

::kha::input::Gamepad Gamepad_obj::get( hx::Null< int >  __o_num){
int num = __o_num.Default(0);
	HX_STACK_FRAME("kha.input.Gamepad","get",0x1b70dcfb,"kha.input.Gamepad.get","kha/input/Gamepad.hx",6,0xfbe88f8d)
	HX_STACK_ARG(num,"num")
{
		HX_STACK_LINE(7)
		int tmp = num;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7)
		Array< ::Dynamic > tmp1 = ::kha::input::Gamepad_obj::instances;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7)
		int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7)
		bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7)
		if ((tmp3)){
			HX_STACK_LINE(7)
			return null();
		}
		HX_STACK_LINE(8)
		Array< ::Dynamic > tmp4 = ::kha::input::Gamepad_obj::instances;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(8)
		int tmp5 = num;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(8)
		::kha::input::Gamepad tmp6 = tmp4->__get(tmp5).StaticCast< ::kha::input::Gamepad >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(8)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,get,return )

Array< ::Dynamic > Gamepad_obj::instances;


Gamepad_obj::Gamepad_obj()
{
}

void Gamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gamepad);
	HX_MARK_MEMBER_NAME(axisListeners,"axisListeners");
	HX_MARK_MEMBER_NAME(buttonListeners,"buttonListeners");
	HX_MARK_END_CLASS();
}

void Gamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axisListeners,"axisListeners");
	HX_VISIT_MEMBER_NAME(buttonListeners,"buttonListeners");
}

Dynamic Gamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"axisListeners") ) { return axisListeners; }
		if (HX_FIELD_EQ(inName,"sendAxisEvent") ) { return sendAxisEvent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonListeners") ) { return buttonListeners; }
		if (HX_FIELD_EQ(inName,"sendButtonEvent") ) { return sendButtonEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Gamepad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { outValue = instances; return true;  }
	}
	return false;
}

Dynamic Gamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"axisListeners") ) { axisListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonListeners") ) { buttonListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("axisListeners","\x9e","\x0c","\xba","\x11"));
	outFields->push(HX_HCSTRING("buttonListeners","\x2d","\x15","\x52","\x7d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Gamepad_obj,axisListeners),HX_HCSTRING("axisListeners","\x9e","\x0c","\xba","\x11")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Gamepad_obj,buttonListeners),HX_HCSTRING("buttonListeners","\x2d","\x15","\x52","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Gamepad_obj::instances,HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("notify","\xc9","\xda","\xb8","\x31"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("axisListeners","\x9e","\x0c","\xba","\x11"),
	HX_HCSTRING("buttonListeners","\x2d","\x15","\x52","\x7d"),
	HX_HCSTRING("sendAxisEvent","\x51","\x1d","\xe3","\x33"),
	HX_HCSTRING("sendButtonEvent","\x60","\x88","\x89","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gamepad_obj::instances,"instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::instances,"instances");
};

#endif

hx::Class Gamepad_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"),
	::String(null()) };

void Gamepad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.input.Gamepad","\x53","\x66","\xcd","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gamepad_obj::__GetStatic;
	__mClass->mSetStaticField = &Gamepad_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Gamepad_obj >;
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

void Gamepad_obj::__boot()
{
	instances= Array_obj< ::Dynamic >::__new();
}

} // end namespace kha
} // end namespace input
