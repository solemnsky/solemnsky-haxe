#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

Void Reflect_obj::__construct()
{
	return null();
}

//Reflect_obj::~Reflect_obj() { }

Dynamic Reflect_obj::__CreateEmpty() { return  new Reflect_obj; }
hx::ObjectPtr< Reflect_obj > Reflect_obj::__new()
{  hx::ObjectPtr< Reflect_obj > _result_ = new Reflect_obj();
	_result_->__construct();
	return _result_;}

Dynamic Reflect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reflect_obj > _result_ = new Reflect_obj();
	_result_->__construct();
	return _result_;}

bool Reflect_obj::hasField( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","hasField",0xef8c2571,"Reflect.hasField","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/Reflect.hx",24,0xb5ea8560)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(25)
	bool tmp = (o != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(25)
		tmp1 = o->__HasField(field);
	}
	else{
		HX_STACK_LINE(25)
		tmp1 = false;
	}
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

Dynamic Reflect_obj::field( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","field",0x54b04da9,"Reflect.field","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/Reflect.hx",28,0xb5ea8560)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(29)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(29)
		tmp1 = o->__Field(field,hx::paccNever);
	}
	HX_STACK_LINE(29)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,field,return )

Void Reflect_obj::setField( Dynamic o,::String field,Dynamic value){
{
		HX_STACK_FRAME("Reflect","setField",0x71684429,"Reflect.setField","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/Reflect.hx",32,0xb5ea8560)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(33)
		bool tmp = (o != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(34)
			o->__SetField(field,value,hx::paccNever);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setField,(void))

Array< ::String > Reflect_obj::fields( Dynamic o){
	HX_STACK_FRAME("Reflect","fields",0xc593a6aa,"Reflect.fields","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/Reflect.hx",53,0xb5ea8560)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(54)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	if ((tmp)){
		HX_STACK_LINE(54)
		Array< ::String > tmp1 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		return tmp1;
	}
	HX_STACK_LINE(55)
	Array< ::String > tmp1 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Array< ::String > a = tmp1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(56)
	o->__GetFields(a);
	HX_STACK_LINE(57)
	Array< ::String > tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,fields,return )

int Reflect_obj::compare( Dynamic a,Dynamic b){
	HX_STACK_FRAME("Reflect","compare",0xa2d92b54,"Reflect.compare","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/Reflect.hx",64,0xb5ea8560)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(65)
	bool tmp = (a == b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	if ((tmp)){
		HX_STACK_LINE(65)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(65)
		bool tmp2 = (a > b);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(65)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(65)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(65)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compare,return )

bool Reflect_obj::isEnumValue( Dynamic v){
	HX_STACK_FRAME("Reflect","isEnumValue",0x97884d95,"Reflect.isEnumValue","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/Reflect.hx",83,0xb5ea8560)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(84)
	bool tmp = (v != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(84)
		Dynamic tmp2 = v->__GetType();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Dynamic tmp4 = ::vtEnum;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		tmp1 = (tmp3 == tmp4);
	}
	else{
		HX_STACK_LINE(84)
		tmp1 = false;
	}
	HX_STACK_LINE(84)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isEnumValue,return )

Dynamic Reflect_obj::copy( Dynamic o){
	HX_STACK_FRAME("Reflect","copy",0x47e2b5a6,"Reflect.copy","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/Reflect.hx",92,0xb5ea8560)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(93)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	if ((tmp)){
		HX_STACK_LINE(93)
		return null();
	}
	HX_STACK_LINE(94)
	Dynamic tmp1 = o->__GetType();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	Dynamic tmp2 = ::vtString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	if ((tmp3)){
		HX_STACK_LINE(94)
		Dynamic tmp4 = o;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		return tmp4;
	}
	HX_STACK_LINE(95)
	Dynamic tmp4 = o->__GetType();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	Dynamic tmp5 = ::vtArray;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	if ((tmp6)){
		HX_STACK_LINE(96)
		Dynamic tmp7 = o->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),hx::paccDynamic);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Dynamic tmp8 = tmp7();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		return tmp8;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/Reflect.hx",97,0xb5ea8560)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(97)
	Dynamic tmp7 = _Function_1_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	Dynamic o2 = tmp7;		HX_STACK_VAR(o2,"o2");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		Dynamic tmp8 = o;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		Array< ::String > tmp9 = ::Reflect_obj::fields(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(98)
		Array< ::String > _g1 = tmp9;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			if ((tmp11)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			::String tmp12 = _g1->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(98)
			::String f = tmp12;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(98)
			++(_g);
			HX_STACK_LINE(99)
			Dynamic tmp13 = o2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(99)
			::String tmp14 = f;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(99)
			Dynamic tmp15 = o;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(99)
			::String tmp16 = f;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(99)
			Dynamic tmp17 = ::Reflect_obj::field(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(99)
			::Reflect_obj::setField(tmp13,tmp14,tmp17);
		}
	}
	HX_STACK_LINE(100)
	Dynamic tmp8 = o2;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(100)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,copy,return )


Reflect_obj::Reflect_obj()
{
}

bool Reflect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { outValue = field_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { outValue = fields_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { outValue = hasField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setField") ) { outValue = setField_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isEnumValue") ) { outValue = isEnumValue_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#endif

hx::Class Reflect_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("hasField","\x00","\xdf","\xeb","\x8c"),
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("setField","\xb8","\xfd","\xc7","\x0e"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("isEnumValue","\x66","\xb7","\x87","\x06"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

void Reflect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Reflect","\x1d","\xac","\x7a","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reflect_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Reflect_obj >;
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

