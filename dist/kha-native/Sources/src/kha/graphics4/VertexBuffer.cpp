#include <hxcpp.h>

#ifndef INCLUDED_kha_arrays_Float32Array
#include <kha/arrays/Float32Array.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
namespace kha{
namespace graphics4{

Void VertexBuffer_obj::__construct(int vertexCount,::kha::graphics4::VertexStructure structure,::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead)
{
HX_STACK_FRAME("kha.graphics4.VertexBuffer","new",0x19bc5fa5,"kha.graphics4.VertexBuffer.new","kha/graphics4/VertexBuffer.hx",17,0x9edcaa69)
HX_STACK_THIS(this)
HX_STACK_ARG(vertexCount,"vertexCount")
HX_STACK_ARG(structure,"structure")
HX_STACK_ARG(usage,"usage")
HX_STACK_ARG(__o_instanceDataStepRate,"instanceDataStepRate")
HX_STACK_ARG(__o_canRead,"canRead")
int instanceDataStepRate = __o_instanceDataStepRate.Default(0);
bool canRead = __o_canRead.Default(false);
{
	HX_STACK_LINE(18)
	int tmp = vertexCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::kha::graphics4::VertexStructure tmp1 = structure;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	int tmp2 = instanceDataStepRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	this->init(tmp,tmp1,tmp2);
	HX_STACK_LINE(19)
	::kha::arrays::Float32Array tmp3 = ::kha::arrays::Float32Array_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	this->data = tmp3;
	HX_STACK_LINE(20)
	::kha::graphics4::VertexElement a = ::kha::graphics4::VertexElement_obj::__new(HX_HCSTRING("a","\x61","\x00","\x00","\x00"),::kha::graphics4::VertexData_obj::Float2);		HX_STACK_VAR(a,"a");
}
;
	return null();
}

//VertexBuffer_obj::~VertexBuffer_obj() { }

Dynamic VertexBuffer_obj::__CreateEmpty() { return  new VertexBuffer_obj; }
hx::ObjectPtr< VertexBuffer_obj > VertexBuffer_obj::__new(int vertexCount,::kha::graphics4::VertexStructure structure,::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead)
{  hx::ObjectPtr< VertexBuffer_obj > _result_ = new VertexBuffer_obj();
	_result_->__construct(vertexCount,structure,usage,__o_instanceDataStepRate,__o_canRead);
	return _result_;}

Dynamic VertexBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer_obj > _result_ = new VertexBuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void VertexBuffer_obj::init( int vertexCount,::kha::graphics4::VertexStructure structure,int instanceDataStepRate){

		Kore::VertexStructure structure2;
		for (int i = 0; i < structure->size(); ++i) {
			Kore::VertexData data;
			switch (structure->get(i)->data->index) {
			case 0:
				data = Kore::Float1VertexData;
				break;
			case 1:
				data = Kore::Float2VertexData;
				break;
			case 2:
				data = Kore::Float3VertexData;
				break;
			case 3:
				data = Kore::Float4VertexData;
				break;
			}
			structure2.add(structure->get(i)->name, data);
		}
		buffer = new Kore::VertexBuffer(vertexCount, structure2, instanceDataStepRate);
	
{
		HX_STACK_FRAME("kha.graphics4.VertexBuffer","init",0x67d0082b,"kha.graphics4.VertexBuffer.init","kha/graphics4/VertexBuffer.hx",45,0x9edcaa69)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexCount,"vertexCount")
		HX_STACK_ARG(structure,"structure")
		HX_STACK_ARG(instanceDataStepRate,"instanceDataStepRate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer_obj,init,(void))

::kha::arrays::Float32Array VertexBuffer_obj::lock( Dynamic start,Dynamic count){

		data->data.data = buffer->lock();
		data->data.myLength = buffer->count() * buffer->stride() / 4;
		return data;
	
{
		HX_STACK_FRAME("kha.graphics4.VertexBuffer","lock",0x69cc6906,"kha.graphics4.VertexBuffer.lock","kha/graphics4/VertexBuffer.hx",54,0x9edcaa69)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(55)
		::kha::arrays::Float32Array tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer_obj,lock,return )

Void VertexBuffer_obj::unlock( ){
buffer->unlock();
{
		HX_STACK_FRAME("kha.graphics4.VertexBuffer","unlock",0xd0432c9f,"kha.graphics4.VertexBuffer.unlock","kha/graphics4/VertexBuffer.hx",59,0x9edcaa69)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,unlock,(void))

int VertexBuffer_obj::stride( ){
return buffer->stride();
{
		HX_STACK_FRAME("kha.graphics4.VertexBuffer","stride",0x7be6a9f4,"kha.graphics4.VertexBuffer.stride","kha/graphics4/VertexBuffer.hx",65,0x9edcaa69)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,stride,return )

int VertexBuffer_obj::count( ){
return buffer->count();
{
		HX_STACK_FRAME("kha.graphics4.VertexBuffer","count",0xfa81ef54,"kha.graphics4.VertexBuffer.count","kha/graphics4/VertexBuffer.hx",70,0x9edcaa69)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,count,return )


VertexBuffer_obj::VertexBuffer_obj()
{
}

void VertexBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void VertexBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic VertexBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"stride") ) { return stride_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::kha::arrays::Float32Array >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VertexBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VertexBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::arrays::Float32Array*/ ,(int)offsetof(VertexBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("stride","\x19","\x20","\x30","\x11"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexBuffer_obj::__mClass;

void VertexBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.VertexBuffer","\x33","\xa9","\x88","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VertexBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer_obj >;
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
