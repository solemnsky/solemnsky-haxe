#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Key
#include <kha/Key.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
namespace kha{
namespace input{

Void Keyboard_obj::__construct()
{
HX_STACK_FRAME("kha.input.Keyboard","new",0xce3ad227,"kha.input.Keyboard.new","kha/input/Keyboard.hx",28,0xb57e4ba7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(30)
	cpp::ArrayBase tmp = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->downListeners = tmp;
	HX_STACK_LINE(31)
	cpp::ArrayBase tmp1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	this->upListeners = tmp1;
	HX_STACK_LINE(32)
	::kha::input::Keyboard_obj::instance = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Keyboard_obj::~Keyboard_obj() { }

Dynamic Keyboard_obj::__CreateEmpty() { return  new Keyboard_obj; }
hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new()
{  hx::ObjectPtr< Keyboard_obj > _result_ = new Keyboard_obj();
	_result_->__construct();
	return _result_;}

Dynamic Keyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keyboard_obj > _result_ = new Keyboard_obj();
	_result_->__construct();
	return _result_;}

Void Keyboard_obj::notify( Dynamic downListener,Dynamic upListener){
{
		HX_STACK_FRAME("kha.input.Keyboard","notify",0xfaf1ef62,"kha.input.Keyboard.notify","kha/input/Keyboard.hx",14,0xb57e4ba7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(downListener,"downListener")
		HX_STACK_ARG(upListener,"upListener")
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
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Keyboard_obj,notify,(void))

Void Keyboard_obj::remove( Dynamic downListener,Dynamic upListener){
{
		HX_STACK_FRAME("kha.input.Keyboard","remove",0xcdc1b0dd,"kha.input.Keyboard.remove","kha/input/Keyboard.hx",19,0xb57e4ba7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(downListener,"downListener")
		HX_STACK_ARG(upListener,"upListener")
		HX_STACK_LINE(20)
		bool tmp = (downListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		if ((tmp)){
			HX_STACK_LINE(20)
			cpp::ArrayBase tmp1 = this->downListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(20)
			Dynamic tmp2 = downListener;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(20)
			tmp1->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp2);
		}
		HX_STACK_LINE(21)
		bool tmp1 = (upListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		if ((tmp1)){
			HX_STACK_LINE(21)
			cpp::ArrayBase tmp2 = this->upListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			Dynamic tmp3 = upListener;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Keyboard_obj,remove,(void))

Void Keyboard_obj::sendDownEvent( ::kha::Key key,::String _char){
{
		HX_STACK_FRAME("kha.input.Keyboard","sendDownEvent",0xd04ca677,"kha.input.Keyboard.sendDownEvent","kha/input/Keyboard.hx",40,0xb57e4ba7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(_char,"char")
		HX_STACK_LINE(40)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		cpp::ArrayBase tmp = this->downListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			if ((tmp2)){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(40)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(40)
			++(_g);
			HX_STACK_LINE(41)
			::kha::Key tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			::String tmp5 = _char;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			listener(tmp4,tmp5).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Keyboard_obj,sendDownEvent,(void))

Void Keyboard_obj::sendUpEvent( ::kha::Key key,::String _char){
{
		HX_STACK_FRAME("kha.input.Keyboard","sendUpEvent",0xd43edc1e,"kha.input.Keyboard.sendUpEvent","kha/input/Keyboard.hx",50,0xb57e4ba7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(_char,"char")
		HX_STACK_LINE(50)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		cpp::ArrayBase tmp = this->upListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		while((true)){
			HX_STACK_LINE(50)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			if ((tmp2)){
				HX_STACK_LINE(50)
				break;
			}
			HX_STACK_LINE(50)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(50)
			++(_g);
			HX_STACK_LINE(51)
			::kha::Key tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			::String tmp5 = _char;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			listener(tmp4,tmp5).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Keyboard_obj,sendUpEvent,(void))

Void Keyboard_obj::_receive( int offset,::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("kha.input.Keyboard","_receive",0xbd2ae83d,"kha.input.Keyboard._receive","kha/network/ControllerBuilder.hx",263,0x77f946ab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(bytes,"bytes")
	}
return null();
}


::kha::input::Keyboard Keyboard_obj::get( hx::Null< int >  __o_num){
int num = __o_num.Default(0);
	HX_STACK_FRAME("kha.input.Keyboard","get",0xce35825d,"kha.input.Keyboard.get","kha/input/Keyboard.hx",9,0xb57e4ba7)
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
		::kha::input::Keyboard tmp1 = ::kha::input::Keyboard_obj::instance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,get,return )

::kha::input::Keyboard Keyboard_obj::instance;


Keyboard_obj::Keyboard_obj()
{
}

void Keyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Keyboard);
	HX_MARK_MEMBER_NAME(downListeners,"downListeners");
	HX_MARK_MEMBER_NAME(upListeners,"upListeners");
	HX_MARK_END_CLASS();
}

void Keyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downListeners,"downListeners");
	HX_VISIT_MEMBER_NAME(upListeners,"upListeners");
}

Dynamic Keyboard_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_receive") ) { return _receive_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"upListeners") ) { return upListeners; }
		if (HX_FIELD_EQ(inName,"sendUpEvent") ) { return sendUpEvent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"downListeners") ) { return downListeners; }
		if (HX_FIELD_EQ(inName,"sendDownEvent") ) { return sendDownEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Keyboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic Keyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"upListeners") ) { upListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"downListeners") ) { downListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Keyboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::kha::input::Keyboard >(); return true; }
	}
	return false;
}

void Keyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("downListeners","\xbd","\x30","\xf6","\xdd"));
	outFields->push(HX_HCSTRING("upListeners","\xa4","\xbb","\x9c","\x9b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Keyboard_obj,downListeners),HX_HCSTRING("downListeners","\xbd","\x30","\xf6","\xdd")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Keyboard_obj,upListeners),HX_HCSTRING("upListeners","\xa4","\xbb","\x9c","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::input::Keyboard*/ ,(void *) &Keyboard_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("notify","\xc9","\xda","\xb8","\x31"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("downListeners","\xbd","\x30","\xf6","\xdd"),
	HX_HCSTRING("upListeners","\xa4","\xbb","\x9c","\x9b"),
	HX_HCSTRING("sendDownEvent","\xf0","\x05","\x55","\xf0"),
	HX_HCSTRING("sendUpEvent","\x57","\x3b","\x46","\x5c"),
	HX_HCSTRING("_receive","\x64","\xbb","\x10","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Keyboard_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::instance,"instance");
};

#endif

hx::Class Keyboard_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void Keyboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.input.Keyboard","\xb5","\x32","\x77","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Keyboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Keyboard_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Keyboard_obj >;
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

void Keyboard_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Keyboard.hx",8,0xb57e4ba7)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Keyboard.hx",8,0xb57e4ba7)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Keyboard.hx",8,0xb57e4ba7)
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
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Keyboard.hx",8,0xb57e4ba7)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendUpEvent","\x57","\x3b","\x46","\x5c") , _Function_2_2::Block(),false);
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
