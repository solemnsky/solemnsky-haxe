#include <hxcpp.h>

#ifndef INCLUDED_kha_input_Sensor
#include <kha/input/Sensor.h>
#endif
#ifndef INCLUDED_kha_input_SensorType
#include <kha/input/SensorType.h>
#endif
namespace kha{
namespace input{

Void Sensor_obj::__construct()
{
HX_STACK_FRAME("kha.input.Sensor","new",0x06ac0dba,"kha.input.Sensor.new","kha/input/Sensor.hx",3,0xcd8927f4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(6)
	this->listeners = Dynamic( Array_obj<Dynamic>::__new() );
}
;
	return null();
}

//Sensor_obj::~Sensor_obj() { }

Dynamic Sensor_obj::__CreateEmpty() { return  new Sensor_obj; }
hx::ObjectPtr< Sensor_obj > Sensor_obj::__new()
{  hx::ObjectPtr< Sensor_obj > _result_ = new Sensor_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sensor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sensor_obj > _result_ = new Sensor_obj();
	_result_->__construct();
	return _result_;}

Void Sensor_obj::notify( Dynamic listener){
{
		HX_STACK_FRAME("kha.input.Sensor","notify",0x3fe1f1af,"kha.input.Sensor.notify","kha/input/Sensor.hx",17,0xcd8927f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(18)
		cpp::ArrayBase tmp = this->listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		tmp->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sensor_obj,notify,(void))

::kha::input::Sensor Sensor_obj::accelerometer;

::kha::input::Sensor Sensor_obj::gyroscope;

::kha::input::Sensor Sensor_obj::get( ::kha::input::SensorType type){
	HX_STACK_FRAME("kha.input.Sensor","get",0x06a6bdf0,"kha.input.Sensor.get","kha/input/Sensor.hx",9,0xcd8927f4)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(9)
	switch( (int)(type->__Index())){
		case (int)0: {
			HX_STACK_LINE(11)
			::kha::input::Sensor tmp = ::kha::input::Sensor_obj::accelerometer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11)
			return tmp;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(13)
			::kha::input::Sensor tmp = ::kha::input::Sensor_obj::gyroscope;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13)
			return tmp;
		}
		;break;
	}
	HX_STACK_LINE(9)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sensor_obj,get,return )

Void Sensor_obj::_changed( int type,Float x,Float y,Float z){
{
		HX_STACK_FRAME("kha.input.Sensor","_changed",0xc24e26db,"kha.input.Sensor._changed","kha/input/Sensor.hx",25,0xcd8927f4)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(26)
		bool tmp = (type == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::kha::input::SensorType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp)){
			HX_STACK_LINE(26)
			tmp1 = ::kha::input::SensorType_obj::Accelerometer;
		}
		else{
			HX_STACK_LINE(26)
			tmp1 = ::kha::input::SensorType_obj::Gyroscope;
		}
		HX_STACK_LINE(26)
		::kha::input::Sensor tmp2 = ::kha::input::Sensor_obj::get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		::kha::input::Sensor sensor = tmp2;		HX_STACK_VAR(sensor,"sensor");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			cpp::ArrayBase _g1 = sensor->listeners;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(27)
			while((true)){
				HX_STACK_LINE(27)
				bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(27)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(27)
				if ((tmp4)){
					HX_STACK_LINE(27)
					break;
				}
				HX_STACK_LINE(27)
				Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(27)
				Dynamic listener = tmp5;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(27)
				++(_g);
				HX_STACK_LINE(28)
				Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(28)
				Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(28)
				Float tmp8 = z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(28)
				listener(tmp6,tmp7,tmp8).Cast< Void >();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Sensor_obj,_changed,(void))


Sensor_obj::Sensor_obj()
{
}

void Sensor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sensor);
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_END_CLASS();
}

void Sensor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
}

Dynamic Sensor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
	}
	return super::__Field(inName,inCallProp);
}

bool Sensor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_changed") ) { outValue = _changed_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gyroscope") ) { outValue = gyroscope; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerometer") ) { outValue = accelerometer; return true;  }
	}
	return false;
}

Dynamic Sensor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sensor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"gyroscope") ) { gyroscope=ioValue.Cast< ::kha::input::Sensor >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerometer") ) { accelerometer=ioValue.Cast< ::kha::input::Sensor >(); return true; }
	}
	return false;
}

void Sensor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Sensor_obj,listeners),HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::input::Sensor*/ ,(void *) &Sensor_obj::accelerometer,HX_HCSTRING("accelerometer","\xcf","\x1e","\x0f","\x09")},
	{hx::fsObject /*::kha::input::Sensor*/ ,(void *) &Sensor_obj::gyroscope,HX_HCSTRING("gyroscope","\xc5","\x90","\xfe","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"),
	HX_HCSTRING("notify","\xc9","\xda","\xb8","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sensor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sensor_obj::accelerometer,"accelerometer");
	HX_MARK_MEMBER_NAME(Sensor_obj::gyroscope,"gyroscope");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sensor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sensor_obj::accelerometer,"accelerometer");
	HX_VISIT_MEMBER_NAME(Sensor_obj::gyroscope,"gyroscope");
};

#endif

hx::Class Sensor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("accelerometer","\xcf","\x1e","\x0f","\x09"),
	HX_HCSTRING("gyroscope","\xc5","\x90","\xfe","\x46"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("_changed","\x75","\x0a","\x85","\x06"),
	::String(null()) };

void Sensor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.input.Sensor","\xc8","\x68","\x78","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sensor_obj::__GetStatic;
	__mClass->mSetStaticField = &Sensor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sensor_obj >;
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

void Sensor_obj::__boot()
{
	accelerometer= ::kha::input::Sensor_obj::__new();
	gyroscope= ::kha::input::Sensor_obj::__new();
}

} // end namespace kha
} // end namespace input
