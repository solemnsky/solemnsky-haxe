#include <hxcpp.h>

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_kore_Sound
#include <kha/kore/Sound.h>
#endif
namespace kha{
namespace kore{

Void Sound_obj::__construct(::String filename)
{
HX_STACK_FRAME("kha.kore.Sound","new",0x4b148154,"kha.kore.Sound.new","kha/kore/Sound.hx",13,0x7012c0fc)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	::String tmp = filename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	this->loadSound(tmp);
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::String filename)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(filename);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Sound_obj::loadSound( ::String filename){

		sound = new Kore::Sound(filename.c_str());
		if (sound->format.channels == 1) {
			if (sound->format.bitsPerSample == 8) {
				this->_createData(sound->size * 2);
				for (int i = 0; i < sound->size; ++i) {
					data[i * 2 + 0] = sound->data[i] / 255.0 * 2.0 - 1.0;
					data[i * 2 + 1] = sound->data[i] / 255.0 * 2.0 - 1.0;
				}
			}
			else if (sound->format.bitsPerSample == 16) {
				this->_createData(sound->size);
				Kore::s16* sdata = (Kore::s16*)&sound->data[0];
				for (int i = 0; i < sound->size / 2; ++i) {
					data[i * 2 + 0] = sdata[i] / 32767.0;
					data[i * 2 + 1] = sdata[i] / 32767.0;
				}
			}
			else {
				this->_createData(2);
			}
		}
		else {
			if (sound->format.bitsPerSample == 8) {
				this->_createData(sound->size);
				for (int i = 0; i < sound->size; ++i) {
					data[i] = sound->data[i] / 255.0 * 2.0 - 1.0;
				}
			}
			else if (sound->format.bitsPerSample == 16) {
				this->_createData(sound->size / 2);
				Kore::s16* sdata = (Kore::s16*)&sound->data[0];
				for (int i = 0; i < sound->size / 2; ++i) {
					data[i] = sdata[i] / 32767.0;
				}
			}
			else {
				this->_createData(2);
			}
		}
	
{
		HX_STACK_FRAME("kha.kore.Sound","loadSound",0xdaddb8bd,"kha.kore.Sound.loadSound","kha/kore/Sound.hx",59,0x7012c0fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filename,"filename")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,loadSound,(void))

Void Sound_obj::unload( ){
Kore::Mixer::stop(sound); delete sound; sound = nullptr;
{
		HX_STACK_FRAME("kha.kore.Sound","unload",0x49a2008b,"kha.kore.Sound.unload","kha/kore/Sound.hx",75,0x7012c0fc)
		HX_STACK_THIS(this)
	}
return null();
}


Void Sound_obj::_createData( int size){
{
		HX_STACK_FRAME("kha.kore.Sound","_createData",0x3883a959,"kha.kore.Sound._createData","kha/kore/Sound.hx",79,0x7012c0fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(80)
		Array< Float > tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(80)
			Array< Float > tmp1 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			this1 = tmp1;
			HX_STACK_LINE(80)
			int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			this1->__SetSizeExact(tmp2);
			HX_STACK_LINE(80)
			tmp = this1;
		}
		HX_STACK_LINE(80)
		this->data = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,_createData,(void))


Sound_obj::Sound_obj()
{
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_createData") ) { return _createData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("_createData","\x65","\xe4","\x7a","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.Sound","\x62","\x87","\xc4","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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
} // end namespace kore
