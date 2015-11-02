#include <hxcpp.h>

#ifndef INCLUDED_kha_Rectangle
#include <kha/Rectangle.h>
#endif
namespace kha{

Void Rectangle_obj::__construct(Float x,Float y,Float width,Float height)
{
HX_STACK_FRAME("kha.Rectangle","new",0x06ee06b7,"kha.Rectangle.new","kha/Rectangle.hx",32,0x5de3fa1a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(33)
	this->x = x;
	HX_STACK_LINE(34)
	this->y = y;
	HX_STACK_LINE(35)
	this->width = width;
	HX_STACK_LINE(36)
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(Float x,Float y,Float width,Float height)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(x,y,width,height);
	return _result_;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Rectangle_obj::setPos( int x,int y){
{
		HX_STACK_FRAME("kha.Rectangle","setPos",0xf01a051b,"kha.Rectangle.setPos","kha/Rectangle.hx",42,0x5de3fa1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(43)
		this->x = x;
		HX_STACK_LINE(44)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,setPos,(void))

Void Rectangle_obj::moveX( int xdelta){
{
		HX_STACK_FRAME("kha.Rectangle","moveX",0x96bb863e,"kha.Rectangle.moveX","kha/Rectangle.hx",53,0x5de3fa1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xdelta,"xdelta")
		HX_STACK_LINE(53)
		hx::AddEq(this->x,xdelta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,moveX,(void))

Void Rectangle_obj::moveY( int ydelta){
{
		HX_STACK_FRAME("kha.Rectangle","moveY",0x96bb863f,"kha.Rectangle.moveY","kha/Rectangle.hx",62,0x5de3fa1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ydelta,"ydelta")
		HX_STACK_LINE(62)
		hx::AddEq(this->y,ydelta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,moveY,(void))

bool Rectangle_obj::collision( ::kha::Rectangle r){
	HX_STACK_FRAME("kha.Rectangle","collision",0x7a2cba09,"kha.Rectangle.collision","kha/Rectangle.hx",72,0x5de3fa1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(73)
	bool a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(74)
	bool b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(75)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	Float tmp1 = r->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	if ((tmp2)){
		HX_STACK_LINE(75)
		Float tmp3 = r->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		bool tmp7 = (tmp3 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		a = tmp7;
	}
	else{
		HX_STACK_LINE(76)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		Float tmp4 = (r->x + r->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		a = tmp5;
	}
	HX_STACK_LINE(77)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	Float tmp4 = r->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	if ((tmp5)){
		HX_STACK_LINE(77)
		Float tmp6 = r->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		Float tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		bool tmp10 = (tmp6 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(77)
		b = tmp10;
	}
	else{
		HX_STACK_LINE(78)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		Float tmp7 = (r->y + r->height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		b = tmp8;
	}
	HX_STACK_LINE(79)
	bool tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(79)
	if ((tmp6)){
		HX_STACK_LINE(79)
		tmp7 = b;
	}
	else{
		HX_STACK_LINE(79)
		tmp7 = false;
	}
	HX_STACK_LINE(79)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,collision,return )


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"moveX") ) { return moveX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveY") ) { return moveY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"setPos") ) { return setPos_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Rectangle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("setPos","\x12","\xeb","\x6c","\x6f"),
	HX_HCSTRING("moveX","\x27","\xcc","\x65","\x0c"),
	HX_HCSTRING("moveY","\x28","\xcc","\x65","\x0c"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Rectangle","\x45","\xdf","\x30","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Rectangle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
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
