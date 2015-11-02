#include <hxcpp.h>

#ifndef INCLUDED_kha_FontStyle
#include <kha/FontStyle.h>
#endif
namespace kha{

Void FontStyle_obj::__construct(bool bold,bool italic,bool underlined)
{
HX_STACK_FRAME("kha.FontStyle","new",0x976e50ea,"kha.FontStyle.new","kha/FontStyle.hx",31,0x9ff93747)
HX_STACK_THIS(this)
HX_STACK_ARG(bold,"bold")
HX_STACK_ARG(italic,"italic")
HX_STACK_ARG(underlined,"underlined")
{
	HX_STACK_LINE(32)
	this->bold = bold;
	HX_STACK_LINE(33)
	this->italic = italic;
	HX_STACK_LINE(34)
	this->underlined = underlined;
}
;
	return null();
}

//FontStyle_obj::~FontStyle_obj() { }

Dynamic FontStyle_obj::__CreateEmpty() { return  new FontStyle_obj; }
hx::ObjectPtr< FontStyle_obj > FontStyle_obj::__new(bool bold,bool italic,bool underlined)
{  hx::ObjectPtr< FontStyle_obj > _result_ = new FontStyle_obj();
	_result_->__construct(bold,italic,underlined);
	return _result_;}

Dynamic FontStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontStyle_obj > _result_ = new FontStyle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool FontStyle_obj::getBold( ){
	HX_STACK_FRAME("kha.FontStyle","getBold",0xff44bec5,"kha.FontStyle.getBold","kha/FontStyle.hx",40,0x9ff93747)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	bool tmp = this->bold;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FontStyle_obj,getBold,return )

bool FontStyle_obj::getItalic( ){
	HX_STACK_FRAME("kha.FontStyle","getItalic",0x8f473c30,"kha.FontStyle.getItalic","kha/FontStyle.hx",47,0x9ff93747)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	bool tmp = this->italic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FontStyle_obj,getItalic,return )

bool FontStyle_obj::getUnderlined( ){
	HX_STACK_FRAME("kha.FontStyle","getUnderlined",0x94b40318,"kha.FontStyle.getUnderlined","kha/FontStyle.hx",54,0x9ff93747)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	bool tmp = this->underlined;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FontStyle_obj,getUnderlined,return )

::kha::FontStyle FontStyle_obj::Default;


FontStyle_obj::FontStyle_obj()
{
}

Dynamic FontStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return bold; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return italic; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getBold") ) { return getBold_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getItalic") ) { return getItalic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { return underlined; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getUnderlined") ) { return getUnderlined_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FontStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"Default") ) { outValue = Default; return true;  }
	}
	return false;
}

Dynamic FontStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { underlined=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FontStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"Default") ) { Default=ioValue.Cast< ::kha::FontStyle >(); return true; }
	}
	return false;
}

void FontStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
	outFields->push(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
	outFields->push(HX_HCSTRING("underlined","\xd8","\x55","\x21","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FontStyle_obj,bold),HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")},
	{hx::fsBool,(int)offsetof(FontStyle_obj,italic),HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")},
	{hx::fsBool,(int)offsetof(FontStyle_obj,underlined),HX_HCSTRING("underlined","\xd8","\x55","\x21","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::FontStyle*/ ,(void *) &FontStyle_obj::Default,HX_HCSTRING("Default","\xa1","\x00","\x15","\x69")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"),
	HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"),
	HX_HCSTRING("underlined","\xd8","\x55","\x21","\x4f"),
	HX_HCSTRING("getBold","\x3b","\x31","\x9e","\x13"),
	HX_HCSTRING("getItalic","\x26","\xb8","\xba","\x82"),
	HX_HCSTRING("getUnderlined","\x0e","\xb2","\x93","\xab"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontStyle_obj::Default,"Default");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::Default,"Default");
};

#endif

hx::Class FontStyle_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Default","\xa1","\x00","\x15","\x69"),
	::String(null()) };

void FontStyle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.FontStyle","\xf8","\x53","\xad","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &FontStyle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FontStyle_obj >;
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

void FontStyle_obj::__boot()
{
	Default= ::kha::FontStyle_obj::__new(false,false,false);
}

} // end namespace kha
