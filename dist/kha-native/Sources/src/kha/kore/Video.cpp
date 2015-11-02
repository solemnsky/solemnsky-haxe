#include <hxcpp.h>

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha_kore_Video
#include <kha/kore/Video.h>
#endif
namespace kha{
namespace kore{

Void Video_obj::__construct(::String filename)
{
HX_STACK_FRAME("kha.kore.Video","new",0x65ff4f00,"kha.kore.Video.new","kha/kore/Video.hx",12,0x2ec24cd0)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
{
	HX_STACK_LINE(13)
	super::__construct();
	HX_STACK_LINE(14)
	::String tmp = filename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->init(tmp);
}
;
	return null();
}

//Video_obj::~Video_obj() { }

Dynamic Video_obj::__CreateEmpty() { return  new Video_obj; }
hx::ObjectPtr< Video_obj > Video_obj::__new(::String filename)
{  hx::ObjectPtr< Video_obj > _result_ = new Video_obj();
	_result_->__construct(filename);
	return _result_;}

Dynamic Video_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Video_obj > _result_ = new Video_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Video_obj::init( ::String filename){

	video = new Kore::Video(filename.c_str());
	
{
		HX_STACK_FRAME("kha.kore.Video","init",0xd61e8870,"kha.kore.Video.init","kha/kore/Video.hx",20,0x2ec24cd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filename,"filename")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,init,(void))

Void Video_obj::play( hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(false);
	HX_STACK_FRAME("kha.kore.Video","play",0xdabd7b54,"kha.kore.Video.play","kha/kore/Video.hx",27,0x2ec24cd0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(loop,"loop")

	video->play();
	
{
	}
return null();
}


Void Video_obj::pause( ){

	video->pause();
	
{
		HX_STACK_FRAME("kha.kore.Video","pause",0x83d83d96,"kha.kore.Video.pause","kha/kore/Video.hx",34,0x2ec24cd0)
		HX_STACK_THIS(this)
	}
return null();
}


Void Video_obj::stop( ){

	video->stop();
	
{
		HX_STACK_FRAME("kha.kore.Video","stop",0xdcbf3d62,"kha.kore.Video.stop","kha/kore/Video.hx",41,0x2ec24cd0)
		HX_STACK_THIS(this)
	}
return null();
}


int Video_obj::getLength( ){

	return static_cast<int>(video->duration * 1000.0);
	
{
		HX_STACK_FRAME("kha.kore.Video","getLength",0x212654bc,"kha.kore.Video.getLength","kha/kore/Video.hx",49,0x2ec24cd0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		return (int)0;
	}
}


int Video_obj::getCurrentPos( ){
	HX_STACK_FRAME("kha.kore.Video","getCurrentPos",0x70da85b1,"kha.kore.Video.getCurrentPos","kha/kore/Video.hx",56,0x2ec24cd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return (int)0;
}


bool Video_obj::isFinished( ){

	return video->finished;
	
{
		HX_STACK_FRAME("kha.kore.Video","isFinished",0x19253adc,"kha.kore.Video.isFinished","kha/kore/Video.hx",63,0x2ec24cd0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		return false;
	}
}


int Video_obj::width( ){

	return video->width();
	
{
		HX_STACK_FRAME("kha.kore.Video","width",0x90e31ca6,"kha.kore.Video.width","kha/kore/Video.hx",69,0x2ec24cd0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		return (int)100;
	}
}


int Video_obj::height( ){

	return video->height();
	
{
		HX_STACK_FRAME("kha.kore.Video","height",0xec256d47,"kha.kore.Video.height","kha/kore/Video.hx",74,0x2ec24cd0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		return (int)100;
	}
}


Void Video_obj::unload( ){

	delete video;
	video = nullptr;
	
{
		HX_STACK_FRAME("kha.kore.Video","unload",0x4f66065f,"kha.kore.Video.unload","kha/kore/Video.hx",80,0x2ec24cd0)
		HX_STACK_THIS(this)
	}
return null();
}



Video_obj::Video_obj()
{
}

Dynamic Video_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFinished") ) { return isFinished_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCurrentPos") ) { return getCurrentPos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getCurrentPos","\x11","\x7f","\xa2","\x23"),
	HX_HCSTRING("isFinished","\x7c","\xa5","\xbd","\x0f"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Video_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Video_obj::__mClass,"__mClass");
};

#endif

hx::Class Video_obj::__mClass;

void Video_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.Video","\x0e","\x0f","\xf4","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Video_obj >;
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

void Video_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/kore/Video.hx",11,0x2ec24cd0)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/kore/Video.hx",11,0x2ec24cd0)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/kore/Video.hx",11,0x2ec24cd0)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("functionCode","\x65","\xf4","\xbf","\x28") , cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("\r\n\treturn scast<int>(video->position * 1000.0);\r\n\t","\x4d","\x64","\xdb","\x63")),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("getCurrentPos","\x11","\x7f","\xa2","\x23") , _Function_2_1::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace kha
} // end namespace kore
