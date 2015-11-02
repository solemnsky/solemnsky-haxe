#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_Buffer
#include <kha/audio2/Buffer.h>
#endif
namespace kha{
namespace audio2{

Void Buffer_obj::__construct(int size,int channels,int samplesPerSecond)
{
HX_STACK_FRAME("kha.audio2.Buffer","new",0xffac43da,"kha.audio2.Buffer.new","kha/audio2/Buffer.hx",14,0x623cbeb6)
HX_STACK_THIS(this)
HX_STACK_ARG(size,"size")
HX_STACK_ARG(channels,"channels")
HX_STACK_ARG(samplesPerSecond,"samplesPerSecond")
{
	HX_STACK_LINE(15)
	this->size = size;
	HX_STACK_LINE(16)
	Array< Float > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		Array< Float > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(16)
		Array< Float > tmp1 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		this1 = tmp1;
		HX_STACK_LINE(16)
		int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		this1->__SetSizeExact(tmp2);
		HX_STACK_LINE(16)
		tmp = this1;
	}
	HX_STACK_LINE(16)
	this->data = tmp;
	HX_STACK_LINE(17)
	this->channels = channels;
	HX_STACK_LINE(18)
	this->samplesPerSecond = samplesPerSecond;
	HX_STACK_LINE(19)
	this->readLocation = (int)0;
	HX_STACK_LINE(20)
	this->writeLocation = (int)0;
}
;
	return null();
}

//Buffer_obj::~Buffer_obj() { }

Dynamic Buffer_obj::__CreateEmpty() { return  new Buffer_obj; }
hx::ObjectPtr< Buffer_obj > Buffer_obj::__new(int size,int channels,int samplesPerSecond)
{  hx::ObjectPtr< Buffer_obj > _result_ = new Buffer_obj();
	_result_->__construct(size,channels,samplesPerSecond);
	return _result_;}

Dynamic Buffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Buffer_obj > _result_ = new Buffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(samplesPerSecond,"samplesPerSecond");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(readLocation,"readLocation");
	HX_MARK_MEMBER_NAME(writeLocation,"writeLocation");
	HX_MARK_END_CLASS();
}

void Buffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(samplesPerSecond,"samplesPerSecond");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(readLocation,"readLocation");
	HX_VISIT_MEMBER_NAME(writeLocation,"writeLocation");
}

Dynamic Buffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readLocation") ) { return readLocation; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeLocation") ) { return writeLocation; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"samplesPerSecond") ) { return samplesPerSecond; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Buffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readLocation") ) { readLocation=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeLocation") ) { writeLocation=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"samplesPerSecond") ) { samplesPerSecond=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Buffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("samplesPerSecond","\xe8","\xcd","\xb6","\xe5"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("readLocation","\xab","\xbb","\x7b","\x20"));
	outFields->push(HX_HCSTRING("writeLocation","\x34","\x0e","\xe8","\xa8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Buffer_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsInt,(int)offsetof(Buffer_obj,samplesPerSecond),HX_HCSTRING("samplesPerSecond","\xe8","\xcd","\xb6","\xe5")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Buffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(Buffer_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsInt,(int)offsetof(Buffer_obj,readLocation),HX_HCSTRING("readLocation","\xab","\xbb","\x7b","\x20")},
	{hx::fsInt,(int)offsetof(Buffer_obj,writeLocation),HX_HCSTRING("writeLocation","\x34","\x0e","\xe8","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("samplesPerSecond","\xe8","\xcd","\xb6","\xe5"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("readLocation","\xab","\xbb","\x7b","\x20"),
	HX_HCSTRING("writeLocation","\x34","\x0e","\xe8","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Buffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Buffer_obj::__mClass,"__mClass");
};

#endif

hx::Class Buffer_obj::__mClass;

void Buffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.Buffer","\xe8","\x0e","\x5b","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Buffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Buffer_obj >;
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
} // end namespace audio2
