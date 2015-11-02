#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_StorageFile
#include <kha/StorageFile.h>
#endif
namespace kha{

Void StorageFile_obj::__construct()
{
	return null();
}

//StorageFile_obj::~StorageFile_obj() { }

Dynamic StorageFile_obj::__CreateEmpty() { return  new StorageFile_obj; }
hx::ObjectPtr< StorageFile_obj > StorageFile_obj::__new()
{  hx::ObjectPtr< StorageFile_obj > _result_ = new StorageFile_obj();
	_result_->__construct();
	return _result_;}

Dynamic StorageFile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StorageFile_obj > _result_ = new StorageFile_obj();
	_result_->__construct();
	return _result_;}

::kha::Blob StorageFile_obj::read( ){
	HX_STACK_FRAME("kha.StorageFile","read",0x61d90f77,"kha.StorageFile.read","kha/StorageFile.hx",18,0x6d7ec4b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StorageFile_obj,read,return )

Void StorageFile_obj::write( ::kha::Blob data){
{
		HX_STACK_FRAME("kha.StorageFile","write",0x25b3459e,"kha.StorageFile.write","kha/StorageFile.hx",25,0x6d7ec4b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StorageFile_obj,write,(void))

Void StorageFile_obj::append( ::kha::Blob data){
{
		HX_STACK_FRAME("kha.StorageFile","append",0xe917b03b,"kha.StorageFile.append","kha/StorageFile.hx",32,0x6d7ec4b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StorageFile_obj,append,(void))

bool StorageFile_obj::canAppend( ){
	HX_STACK_FRAME("kha.StorageFile","canAppend",0xdec8da49,"kha.StorageFile.canAppend","kha/StorageFile.hx",37,0x6d7ec4b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(StorageFile_obj,canAppend,return )

int StorageFile_obj::maxSize( ){
	HX_STACK_FRAME("kha.StorageFile","maxSize",0x8e94c004,"kha.StorageFile.maxSize","kha/StorageFile.hx",42,0x6d7ec4b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(StorageFile_obj,maxSize,return )

Void StorageFile_obj::writeString( ::String data){
{
		HX_STACK_FRAME("kha.StorageFile","writeString",0x26f8ed0f,"kha.StorageFile.writeString","kha/StorageFile.hx",49,0x6d7ec4b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(50)
		::String tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(51)
		::kha::Blob tmp2 = ::kha::Blob_obj::__new(bytes);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		this->write(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StorageFile_obj,writeString,(void))

Void StorageFile_obj::appendString( ::String data){
{
		HX_STACK_FRAME("kha.StorageFile","appendString",0xf132ab6c,"kha.StorageFile.appendString","kha/StorageFile.hx",59,0x6d7ec4b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(60)
		::String tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(61)
		::kha::Blob tmp2 = ::kha::Blob_obj::__new(bytes);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		this->append(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StorageFile_obj,appendString,(void))

::String StorageFile_obj::readString( ){
	HX_STACK_FRAME("kha.StorageFile","readString",0x26cd1fa8,"kha.StorageFile.readString","kha/StorageFile.hx",69,0x6d7ec4b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	::kha::Blob tmp = this->read();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	::kha::Blob blob = tmp;		HX_STACK_VAR(blob,"blob");
	HX_STACK_LINE(71)
	bool tmp1 = (blob == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	if ((tmp1)){
		HX_STACK_LINE(71)
		return null();
	}
	else{
		HX_STACK_LINE(72)
		::String tmp2 = blob->toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		return tmp2;
	}
	HX_STACK_LINE(71)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StorageFile_obj,readString,return )

Void StorageFile_obj::writeObject( Dynamic object){
{
		HX_STACK_FRAME("kha.StorageFile","writeObject",0x2b0842fd,"kha.StorageFile.writeObject","kha/StorageFile.hx",80,0x6d7ec4b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(81)
		Dynamic tmp = object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::String tmp1 = ::haxe::Serializer_obj::run(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		this->writeString(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StorageFile_obj,writeObject,(void))

Dynamic StorageFile_obj::readObject( ){
	HX_STACK_FRAME("kha.StorageFile","readObject",0x2adc7596,"kha.StorageFile.readObject","kha/StorageFile.hx",89,0x6d7ec4b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	::String tmp = this->readString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	::String s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(91)
	bool tmp1 = (s == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	if ((tmp1)){
		HX_STACK_LINE(91)
		return null();
	}
	HX_STACK_LINE(92)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(93)
		::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		Dynamic tmp3 = ::haxe::Unserializer_obj::run(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		return tmp3;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(96)
				return null();
			}
		}
	}
	HX_STACK_LINE(92)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StorageFile_obj,readObject,return )


StorageFile_obj::StorageFile_obj()
{
}

Dynamic StorageFile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canAppend") ) { return canAppend_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		if (HX_FIELD_EQ(inName,"readObject") ) { return readObject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return writeString_dyn(); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return writeObject_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"appendString") ) { return appendString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("canAppend","\x0a","\x36","\x1a","\xe2"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("writeString","\x10","\x7b","\x29","\xa6"),
	HX_HCSTRING("appendString","\x4b","\x5e","\x7e","\xbc"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("writeObject","\xfe","\xd0","\x38","\xaa"),
	HX_HCSTRING("readObject","\xb5","\x62","\xbb","\x0e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StorageFile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StorageFile_obj::__mClass,"__mClass");
};

#endif

hx::Class StorageFile_obj::__mClass;

void StorageFile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.StorageFile","\xed","\x0f","\x5b","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StorageFile_obj >;
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
