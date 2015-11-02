#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
namespace kha{
namespace graphics4{

Void IndexBuffer_obj::__construct(int indexCount,::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead)
{
HX_STACK_FRAME("kha.graphics4.IndexBuffer","new",0x2cfac555,"kha.graphics4.IndexBuffer.new","kha/graphics4/IndexBuffer.hx",13,0xae48d67d)
HX_STACK_THIS(this)
HX_STACK_ARG(indexCount,"indexCount")
HX_STACK_ARG(usage,"usage")
HX_STACK_ARG(__o_canRead,"canRead")
bool canRead = __o_canRead.Default(false);
{
	HX_STACK_LINE(14)
	this->myCount = indexCount;
	HX_STACK_LINE(15)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	this->data = tmp;
	HX_STACK_LINE(16)
	Array< int > tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	int tmp2 = this->myCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	tmp1[tmp3] = (int)0;
	HX_STACK_LINE(17)
	int tmp4 = indexCount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	this->init(tmp4);
}
;
	return null();
}

//IndexBuffer_obj::~IndexBuffer_obj() { }

Dynamic IndexBuffer_obj::__CreateEmpty() { return  new IndexBuffer_obj; }
hx::ObjectPtr< IndexBuffer_obj > IndexBuffer_obj::__new(int indexCount,::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead)
{  hx::ObjectPtr< IndexBuffer_obj > _result_ = new IndexBuffer_obj();
	_result_->__construct(indexCount,usage,__o_canRead);
	return _result_;}

Dynamic IndexBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer_obj > _result_ = new IndexBuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void IndexBuffer_obj::init( int count){

		buffer = new Kore::IndexBuffer(count);
	
{
		HX_STACK_FRAME("kha.graphics4.IndexBuffer","init",0x2b2a9c7b,"kha.graphics4.IndexBuffer.init","kha/graphics4/IndexBuffer.hx",23,0xae48d67d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(count,"count")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer_obj,init,(void))

Array< int > IndexBuffer_obj::lock( ){
	HX_STACK_FRAME("kha.graphics4.IndexBuffer","lock",0x2d26fd56,"kha.graphics4.IndexBuffer.lock","kha/graphics4/IndexBuffer.hx",27,0xae48d67d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	Array< int > tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer_obj,lock,return )

Void IndexBuffer_obj::unlock( ){

		int* indices = buffer->lock();
		for (int i = 0; i < myCount; ++i) {
			indices[i] = data[i];
		}
		buffer->unlock();
	
{
		HX_STACK_FRAME("kha.graphics4.IndexBuffer","unlock",0x0ea774ef,"kha.graphics4.IndexBuffer.unlock","kha/graphics4/IndexBuffer.hx",38,0xae48d67d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer_obj,unlock,(void))

int IndexBuffer_obj::count( ){
	HX_STACK_FRAME("kha.graphics4.IndexBuffer","count",0x26692104,"kha.graphics4.IndexBuffer.count","kha/graphics4/IndexBuffer.hx",42,0xae48d67d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	int tmp = this->myCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer_obj,count,return )


IndexBuffer_obj::IndexBuffer_obj()
{
}

void IndexBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(myCount,"myCount");
	HX_MARK_END_CLASS();
}

void IndexBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(myCount,"myCount");
}

Dynamic IndexBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myCount") ) { return myCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IndexBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myCount") ) { myCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool IndexBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void IndexBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("myCount","\xc3","\xed","\x62","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(IndexBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(IndexBuffer_obj,myCount),HX_HCSTRING("myCount","\xc3","\xed","\x62","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("myCount","\xc3","\xed","\x62","\xf3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer_obj::__mClass;

void IndexBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.IndexBuffer","\xe3","\x76","\xd6","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &IndexBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer_obj >;
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
} // end namespace graphics4
