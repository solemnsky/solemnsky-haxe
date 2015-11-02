#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
namespace kha{

Void Blob_obj::__construct(::haxe::io::Bytes bytes)
{
HX_STACK_FRAME("kha.Blob","new",0xd0a3ba79,"kha.Blob.new","kha/Blob.hx",14,0x7a6b6936)
HX_STACK_THIS(this)
HX_STACK_ARG(bytes,"bytes")
{
	HX_STACK_LINE(15)
	this->bytes = bytes;
	HX_STACK_LINE(16)
	this->position = (int)0;
}
;
	return null();
}

//Blob_obj::~Blob_obj() { }

Dynamic Blob_obj::__CreateEmpty() { return  new Blob_obj; }
hx::ObjectPtr< Blob_obj > Blob_obj::__new(::haxe::io::Bytes bytes)
{  hx::ObjectPtr< Blob_obj > _result_ = new Blob_obj();
	_result_->__construct(bytes);
	return _result_;}

Dynamic Blob_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Blob_obj > _result_ = new Blob_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxe::io::Bytes Blob_obj::toBytes( ){
	HX_STACK_FRAME("kha.Blob","toBytes",0x56adbf89,"kha.Blob.toBytes","kha/Blob.hx",19,0x7a6b6936)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::haxe::io::Bytes tmp = this->bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,toBytes,return )

int Blob_obj::length( ){
	HX_STACK_FRAME("kha.Blob","length",0x668c406d,"kha.Blob.length","kha/Blob.hx",23,0x7a6b6936)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::haxe::io::Bytes tmp = this->bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,length,return )

Void Blob_obj::reset( ){
{
		HX_STACK_FRAME("kha.Blob","reset",0x5a79ac28,"kha.Blob.reset","kha/Blob.hx",28,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,reset,(void))

Void Blob_obj::seek( int pos){
{
		HX_STACK_FRAME("kha.Blob","seek",0xc1ed713f,"kha.Blob.seek","kha/Blob.hx",32,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(32)
		this->position = pos;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Blob_obj,seek,(void))

int Blob_obj::readS8( ){

		Kore::s8 i = *(Kore::s8*)&bytes->b->Pointer()[position];
		position += 1;
		return i;
	
{
		HX_STACK_FRAME("kha.Blob","readS8",0xc41640e2,"kha.Blob.readS8","kha/Blob.hx",41,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readS8,return )

int Blob_obj::readU8( ){

		Kore::u8 i = *(Kore::u8*)&bytes->b->Pointer()[position];
		position += 1;
		return i;
	
{
		HX_STACK_FRAME("kha.Blob","readU8",0xc41642a0,"kha.Blob.readU8","kha/Blob.hx",50,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readU8,return )

int Blob_obj::readS16LE( ){

		Kore::u8* data = (Kore::u8*)&bytes->b->Pointer()[position];
		Kore::s16 i = (data[0] << 0) | (data[1] << 8);
		position += 2;
		return i;
	
{
		HX_STACK_FRAME("kha.Blob","readS16LE",0x4c3cb634,"kha.Blob.readS16LE","kha/Blob.hx",60,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readS16LE,return )

int Blob_obj::readS16BE( ){

		Kore::u8* data = (Kore::u8*)&bytes->b->Pointer()[position];
		Kore::s16 i = (data[1] << 0) | (data[0] << 8);
		position += 2;
		return i;
	
{
		HX_STACK_FRAME("kha.Blob","readS16BE",0x4c3cad7e,"kha.Blob.readS16BE","kha/Blob.hx",70,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readS16BE,return )

int Blob_obj::readU16LE( ){

		Kore::u8* data = (Kore::u8*)&bytes->b->Pointer()[position];
		Kore::u16 i = (data[0] << 0) | (data[1] << 8);
		position += 2;
		return i;
	
{
		HX_STACK_FRAME("kha.Blob","readU16LE",0x7309df36,"kha.Blob.readU16LE","kha/Blob.hx",80,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readU16LE,return )

int Blob_obj::readU16BE( ){

		Kore::u8* data = (Kore::u8*)&bytes->b->Pointer()[position];
		Kore::u16 i = (data[1] << 0) | (data[0] << 8);
		position += 2;
		return i;
	
{
		HX_STACK_FRAME("kha.Blob","readU16BE",0x7309d680,"kha.Blob.readU16BE","kha/Blob.hx",90,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readU16BE,return )

int Blob_obj::readS32LE( ){

		Kore::u8* data = (Kore::u8*)&bytes->b->Pointer()[position];
		int i = (data[0] << 0) | (data[1] << 8) | (data[2] << 16) | (data[3] << 24);
		position += 4;
		return i;
	
{
		HX_STACK_FRAME("kha.Blob","readS32LE",0x4d8c1a6e,"kha.Blob.readS32LE","kha/Blob.hx",100,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readS32LE,return )

int Blob_obj::readS32BE( ){

		Kore::u8* data = (Kore::u8*)&bytes->b->Pointer()[position];
		int i = (data[3] << 0) | (data[2] << 8) | (data[1] << 16) | (data[0] << 24);
		position += 4;
		return i;
	
{
		HX_STACK_FRAME("kha.Blob","readS32BE",0x4d8c11b8,"kha.Blob.readS32BE","kha/Blob.hx",110,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readS32BE,return )

Float Blob_obj::readF32LE( ){

		Kore::u8* data = (Kore::u8*)&bytes->b->Pointer()[position];
		int i = (data[0] << 0) | (data[1] << 8) | (data[2] << 16) | (data[3] << 24);
		position += 4;
		return *(float*)&i;
	
{
		HX_STACK_FRAME("kha.Blob","readF32LE",0xd1568fe1,"kha.Blob.readF32LE","kha/Blob.hx",120,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readF32LE,return )

Float Blob_obj::readF32BE( ){

		Kore::u8* data = (Kore::u8*)&bytes->b->Pointer()[position];
		int i = (data[3] << 0) | (data[2] << 8) | (data[1] << 16) | (data[0] << 24);
		position += 4;
		return *(float*)&i;
	
{
		HX_STACK_FRAME("kha.Blob","readF32BE",0xd156872b,"kha.Blob.readF32BE","kha/Blob.hx",130,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readF32BE,return )

Float Blob_obj::readF64LE( ){
	HX_STACK_FRAME("kha.Blob","readF64LE",0xd353b840,"kha.Blob.readF64LE","kha/Blob.hx",134,0x7a6b6936)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readF64LE,return )

Float Blob_obj::readF64BE( ){
	HX_STACK_FRAME("kha.Blob","readF64BE",0xd353af8a,"kha.Blob.readF64BE","kha/Blob.hx",138,0x7a6b6936)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,readF64BE,return )

::String Blob_obj::toString( ){
	HX_STACK_FRAME("kha.Blob","toString",0x6b1aabf3,"kha.Blob.toString","kha/Blob.hx",141,0x7a6b6936)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	::haxe::io::Bytes tmp = this->bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	Array< unsigned char > tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	int tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	bool tmp3 = (tmp2 == (int)239);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(142)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(142)
	if ((tmp4)){
		HX_STACK_LINE(142)
		::haxe::io::Bytes tmp6 = this->bytes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		::haxe::io::Bytes tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		::haxe::io::Bytes tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		Array< unsigned char > tmp9 = tmp8->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(142)
		int tmp10 = tmp9->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(142)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(142)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(142)
		tmp5 = (tmp12 == (int)187);
	}
	else{
		HX_STACK_LINE(142)
		tmp5 = false;
	}
	HX_STACK_LINE(142)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(142)
	if ((tmp5)){
		HX_STACK_LINE(142)
		::haxe::io::Bytes tmp7 = this->bytes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		::haxe::io::Bytes tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		Array< unsigned char > tmp9 = tmp8->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(142)
		int tmp10 = tmp9->__get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(142)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(142)
		tmp6 = (tmp11 == (int)191);
	}
	else{
		HX_STACK_LINE(142)
		tmp6 = false;
	}
	HX_STACK_LINE(142)
	if ((tmp6)){
		HX_STACK_LINE(142)
		::haxe::io::Bytes tmp7 = this->bytes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		::haxe::io::Bytes tmp8 = this->bytes;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		int tmp9 = tmp8->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(142)
		int tmp10 = (tmp9 - (int)3);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(142)
		::haxe::io::Bytes tmp11 = tmp7->sub((int)3,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(142)
		::String tmp12 = tmp11->toString();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(142)
		return tmp12;
	}
	else{
		HX_STACK_LINE(143)
		::haxe::io::Bytes tmp7 = this->bytes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		::String tmp8 = tmp7->toString();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		return tmp8;
	}
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,toString,return )

Void Blob_obj::unload( ){
{
		HX_STACK_FRAME("kha.Blob","unload",0x2d114c86,"kha.Blob.unload","kha/Blob.hx",147,0x7a6b6936)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		this->bytes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Blob_obj,unload,(void))


Blob_obj::Blob_obj()
{
}

void Blob_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Blob);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_END_CLASS();
}

void Blob_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(position,"position");
}

Dynamic Blob_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		if (HX_FIELD_EQ(inName,"readS8") ) { return readS8_dyn(); }
		if (HX_FIELD_EQ(inName,"readU8") ) { return readU8_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { return toBytes_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readS16LE") ) { return readS16LE_dyn(); }
		if (HX_FIELD_EQ(inName,"readS16BE") ) { return readS16BE_dyn(); }
		if (HX_FIELD_EQ(inName,"readU16LE") ) { return readU16LE_dyn(); }
		if (HX_FIELD_EQ(inName,"readU16BE") ) { return readU16BE_dyn(); }
		if (HX_FIELD_EQ(inName,"readS32LE") ) { return readS32LE_dyn(); }
		if (HX_FIELD_EQ(inName,"readS32BE") ) { return readS32BE_dyn(); }
		if (HX_FIELD_EQ(inName,"readF32LE") ) { return readF32LE_dyn(); }
		if (HX_FIELD_EQ(inName,"readF32BE") ) { return readF32BE_dyn(); }
		if (HX_FIELD_EQ(inName,"readF64LE") ) { return readF64LE_dyn(); }
		if (HX_FIELD_EQ(inName,"readF64BE") ) { return readF64BE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Blob_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Blob_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Blob_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Blob_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(Blob_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("readS8","\x5b","\x95","\x91","\xfc"),
	HX_HCSTRING("readU8","\x19","\x97","\x91","\xfc"),
	HX_HCSTRING("readS16LE","\x5b","\xb3","\x88","\x28"),
	HX_HCSTRING("readS16BE","\xa5","\xaa","\x88","\x28"),
	HX_HCSTRING("readU16LE","\x5d","\xdc","\x55","\x4f"),
	HX_HCSTRING("readU16BE","\xa7","\xd3","\x55","\x4f"),
	HX_HCSTRING("readS32LE","\x95","\x17","\xd8","\x29"),
	HX_HCSTRING("readS32BE","\xdf","\x0e","\xd8","\x29"),
	HX_HCSTRING("readF32LE","\x08","\x8d","\xa2","\xad"),
	HX_HCSTRING("readF32BE","\x52","\x84","\xa2","\xad"),
	HX_HCSTRING("readF64LE","\x67","\xb5","\x9f","\xaf"),
	HX_HCSTRING("readF64BE","\xb1","\xac","\x9f","\xaf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Blob_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Blob_obj::__mClass,"__mClass");
};

#endif

hx::Class Blob_obj::__mClass;

void Blob_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Blob","\x07","\x0a","\xcd","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Blob_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Blob_obj >;
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
