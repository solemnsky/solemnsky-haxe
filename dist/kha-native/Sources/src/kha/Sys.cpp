#include <hxcpp.h>

#ifndef INCLUDED_kha_Mouse
#include <kha/Mouse.h>
#endif
#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
#ifndef INCLUDED_kha_Sys
#include <kha/Sys.h>
#endif
#ifndef INCLUDED_kha_kore_Mouse
#include <kha/kore/Mouse.h>
#endif
namespace kha{

Void Sys_obj::__construct()
{
	return null();
}

//Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Void Sys_obj::notifyOfFullscreenChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.Sys","notifyOfFullscreenChange",0xc09c1296,"kha.Sys.notifyOfFullscreenChange","kha/Sys.hx",99,0x8702bdbc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(100)
		bool tmp = ::kha::Sys_obj::canSwitchFullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		if ((tmp)){
			HX_STACK_LINE(100)
			tmp1 = (func != null());
		}
		else{
			HX_STACK_LINE(100)
			tmp1 = false;
		}
		HX_STACK_LINE(100)
		if ((tmp1)){
			HX_STACK_LINE(101)
			cpp::ArrayBase tmp2 = ::kha::Sys_obj::fullscreenListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			Dynamic tmp3 = func;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			tmp2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,notifyOfFullscreenChange,(void))

Void Sys_obj::removeFromFullscreenChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.Sys","removeFromFullscreenChange",0xf64beae4,"kha.Sys.removeFromFullscreenChange","kha/Sys.hx",106,0x8702bdbc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(107)
		bool tmp = ::kha::Sys_obj::canSwitchFullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(107)
			tmp1 = (func != null());
		}
		else{
			HX_STACK_LINE(107)
			tmp1 = false;
		}
		HX_STACK_LINE(107)
		if ((tmp1)){
			HX_STACK_LINE(108)
			cpp::ArrayBase tmp2 = ::kha::Sys_obj::fullscreenListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			Dynamic tmp3 = func;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,removeFromFullscreenChange,(void))

bool Sys_obj::needs3d;

::kha::Mouse Sys_obj::mouse;

::kha::ScreenRotation Sys_obj::screenRotation;

cpp::ArrayBase Sys_obj::fullscreenListeners;

int Sys_obj::previousWidth;

int Sys_obj::previousHeight;

Void Sys_obj::init( ){
{
		HX_STACK_FRAME("kha.Sys","init",0x892b37bb,"kha.Sys.init","kha/Sys.hx",22,0x8702bdbc)
		HX_STACK_LINE(23)
		::kha::kore::Mouse tmp = ::kha::kore::Mouse_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		::kha::Sys_obj::mouse = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,init,(void))

Float Sys_obj::getTime( ){

		return Kore::System::time();
	
{
		HX_STACK_FRAME("kha.Sys","getTime",0x6e3c7bf8,"kha.Sys.getTime","kha/Sys.hx",31,0x8702bdbc)
		HX_STACK_LINE(31)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,getTime,return )

int Sys_obj::pixelWidth;

int Sys_obj::pixelHeight;

int Sys_obj::get_pixelWidth( ){
return Kore::System::screenWidth();
{
		HX_STACK_FRAME("kha.Sys","get_pixelWidth",0x699b2254,"kha.Sys.get_pixelWidth","kha/Sys.hx",39,0x8702bdbc)
		HX_STACK_LINE(39)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,get_pixelWidth,return )

int Sys_obj::get_pixelHeight( ){
return Kore::System::screenHeight();
{
		HX_STACK_FRAME("kha.Sys","get_pixelHeight",0xb4725fd9,"kha.Sys.get_pixelHeight","kha/Sys.hx",44,0x8702bdbc)
		HX_STACK_LINE(44)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,get_pixelHeight,return )

bool Sys_obj::vsynced( ){
	HX_STACK_FRAME("kha.Sys","vsynced",0x69295ca5,"kha.Sys.vsynced","kha/Sys.hx",48,0x8702bdbc)
	HX_STACK_LINE(48)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,vsynced,return )

int Sys_obj::refreshRate( ){
	HX_STACK_FRAME("kha.Sys","refreshRate",0xb5b9a110,"kha.Sys.refreshRate","kha/Sys.hx",52,0x8702bdbc)
	HX_STACK_LINE(52)
	return (int)60;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,refreshRate,return )

::String Sys_obj::systemId( ){
return ::String(Kore::System::systemId());
{
		HX_STACK_FRAME("kha.Sys","systemId",0xf88cded5,"kha.Sys.systemId","kha/Sys.hx",57,0x8702bdbc)
		HX_STACK_LINE(57)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemId,return )

Void Sys_obj::requestShutdown( ){
Kore::Application::the()->stop();
{
		HX_STACK_FRAME("kha.Sys","requestShutdown",0x8ff0bc3a,"kha.Sys.requestShutdown","kha/Sys.hx",61,0x8702bdbc)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,requestShutdown,(void))

bool Sys_obj::canSwitchFullscreen( ){
	HX_STACK_FRAME("kha.Sys","canSwitchFullscreen",0x99746d34,"kha.Sys.canSwitchFullscreen","kha/Sys.hx",66,0x8702bdbc)
	HX_STACK_LINE(66)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,canSwitchFullscreen,return )

bool Sys_obj::isFullscreen( ){
return Kore::Application::the()->fullscreen();
{
		HX_STACK_FRAME("kha.Sys","isFullscreen",0x20e08270,"kha.Sys.isFullscreen","kha/Sys.hx",71,0x8702bdbc)
		HX_STACK_LINE(71)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,isFullscreen,return )

Void Sys_obj::requestFullscreen( ){
{
		HX_STACK_FRAME("kha.Sys","requestFullscreen",0xb1032adf,"kha.Sys.requestFullscreen","kha/Sys.hx",74,0x8702bdbc)
		HX_STACK_LINE(75)
		bool tmp = ::kha::Sys_obj::isFullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(76)
			::kha::Sys_obj::previousWidth = Kore::Application::the()->width();;
			HX_STACK_LINE(77)
			::kha::Sys_obj::previousHeight = Kore::Application::the()->height();;
			HX_STACK_LINE(78)
			Kore::System::changeResolution(Kore::System::desktopWidth(),Kore::System::desktopHeight(), true);;
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(79)
				cpp::ArrayBase tmp2 = ::kha::Sys_obj::fullscreenListeners;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(79)
				cpp::ArrayBase _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(79)
				while((true)){
					HX_STACK_LINE(79)
					bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(79)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					if ((tmp4)){
						HX_STACK_LINE(79)
						break;
					}
					HX_STACK_LINE(79)
					Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					Dynamic listener = tmp5;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(79)
					++(_g);
					HX_STACK_LINE(80)
					listener().Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,requestFullscreen,(void))

Void Sys_obj::exitFullscreen( ){
{
		HX_STACK_FRAME("kha.Sys","exitFullscreen",0x57a32764,"kha.Sys.exitFullscreen","kha/Sys.hx",86,0x8702bdbc)
		HX_STACK_LINE(87)
		bool tmp = ::kha::Sys_obj::isFullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		if ((tmp)){
			HX_STACK_LINE(88)
			int tmp1 = ::kha::Sys_obj::previousWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(88)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			if ((tmp3)){
				HX_STACK_LINE(88)
				int tmp5 = ::kha::Sys_obj::previousHeight;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				tmp4 = (tmp6 == (int)0);
			}
			else{
				HX_STACK_LINE(88)
				tmp4 = true;
			}
			HX_STACK_LINE(88)
			if ((tmp4)){
				HX_STACK_LINE(89)
				::kha::Sys_obj::previousWidth = Kore::Application::the()->width();;
				HX_STACK_LINE(90)
				::kha::Sys_obj::previousHeight = Kore::Application::the()->height();;
			}
			HX_STACK_LINE(92)
			Kore::System::changeResolution(previousWidth,previousHeight, false);;
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(93)
				cpp::ArrayBase tmp5 = ::kha::Sys_obj::fullscreenListeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				cpp::ArrayBase _g1 = tmp5;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(93)
				while((true)){
					HX_STACK_LINE(93)
					bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(93)
					if ((tmp7)){
						HX_STACK_LINE(93)
						break;
					}
					HX_STACK_LINE(93)
					Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(93)
					Dynamic listener = tmp8;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(93)
					++(_g);
					HX_STACK_LINE(94)
					listener().Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,exitFullscreen,(void))


Sys_obj::Sys_obj()
{
}

Dynamic Sys_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"notifyOfFullscreenChange") ) { return notifyOfFullscreenChange_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"removeFromFullscreenChange") ) { return removeFromFullscreenChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { outValue = mouse; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"needs3d") ) { outValue = needs3d; return true;  }
		if (HX_FIELD_EQ(inName,"getTime") ) { outValue = getTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vsynced") ) { outValue = vsynced_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"systemId") ) { outValue = systemId_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelWidth") ) { outValue = inCallProp == hx::paccAlways ? get_pixelWidth() : pixelWidth; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelHeight") ) { outValue = inCallProp == hx::paccAlways ? get_pixelHeight() : pixelHeight; return true; }
		if (HX_FIELD_EQ(inName,"refreshRate") ) { outValue = refreshRate_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isFullscreen") ) { outValue = isFullscreen_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"previousWidth") ) { outValue = previousWidth; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"screenRotation") ) { outValue = screenRotation; return true;  }
		if (HX_FIELD_EQ(inName,"previousHeight") ) { outValue = previousHeight; return true;  }
		if (HX_FIELD_EQ(inName,"get_pixelWidth") ) { outValue = get_pixelWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"exitFullscreen") ) { outValue = exitFullscreen_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_pixelHeight") ) { outValue = get_pixelHeight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"requestShutdown") ) { outValue = requestShutdown_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"requestFullscreen") ) { outValue = requestFullscreen_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fullscreenListeners") ) { outValue = fullscreenListeners; return true;  }
		if (HX_FIELD_EQ(inName,"canSwitchFullscreen") ) { outValue = canSwitchFullscreen_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Sys_obj::needs3d,HX_HCSTRING("needs3d","\x6e","\xd5","\x2d","\xaa")},
	{hx::fsObject /*::kha::Mouse*/ ,(void *) &Sys_obj::mouse,HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsObject /*::kha::ScreenRotation*/ ,(void *) &Sys_obj::screenRotation,HX_HCSTRING("screenRotation","\xca","\x80","\xa0","\xef")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Sys_obj::fullscreenListeners,HX_HCSTRING("fullscreenListeners","\xc4","\x6b","\x7f","\xf5")},
	{hx::fsInt,(void *) &Sys_obj::previousWidth,HX_HCSTRING("previousWidth","\x4f","\xc2","\x56","\xf1")},
	{hx::fsInt,(void *) &Sys_obj::previousHeight,HX_HCSTRING("previousHeight","\x7e","\xbb","\xe2","\xf0")},
	{hx::fsInt,(void *) &Sys_obj::pixelWidth,HX_HCSTRING("pixelWidth","\xa0","\xf9","\x50","\x69")},
	{hx::fsInt,(void *) &Sys_obj::pixelHeight,HX_HCSTRING("pixelHeight","\x0d","\xeb","\xd8","\x73")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("notifyOfFullscreenChange","\x6b","\x9e","\x48","\xa5"),
	HX_HCSTRING("removeFromFullscreenChange","\xf9","\xd5","\x12","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sys_obj::needs3d,"needs3d");
	HX_MARK_MEMBER_NAME(Sys_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(Sys_obj::screenRotation,"screenRotation");
	HX_MARK_MEMBER_NAME(Sys_obj::fullscreenListeners,"fullscreenListeners");
	HX_MARK_MEMBER_NAME(Sys_obj::previousWidth,"previousWidth");
	HX_MARK_MEMBER_NAME(Sys_obj::previousHeight,"previousHeight");
	HX_MARK_MEMBER_NAME(Sys_obj::pixelWidth,"pixelWidth");
	HX_MARK_MEMBER_NAME(Sys_obj::pixelHeight,"pixelHeight");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sys_obj::needs3d,"needs3d");
	HX_VISIT_MEMBER_NAME(Sys_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(Sys_obj::screenRotation,"screenRotation");
	HX_VISIT_MEMBER_NAME(Sys_obj::fullscreenListeners,"fullscreenListeners");
	HX_VISIT_MEMBER_NAME(Sys_obj::previousWidth,"previousWidth");
	HX_VISIT_MEMBER_NAME(Sys_obj::previousHeight,"previousHeight");
	HX_VISIT_MEMBER_NAME(Sys_obj::pixelWidth,"pixelWidth");
	HX_VISIT_MEMBER_NAME(Sys_obj::pixelHeight,"pixelHeight");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("needs3d","\x6e","\xd5","\x2d","\xaa"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("screenRotation","\xca","\x80","\xa0","\xef"),
	HX_HCSTRING("fullscreenListeners","\xc4","\x6b","\x7f","\xf5"),
	HX_HCSTRING("previousWidth","\x4f","\xc2","\x56","\xf1"),
	HX_HCSTRING("previousHeight","\x7e","\xbb","\xe2","\xf0"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"),
	HX_HCSTRING("pixelWidth","\xa0","\xf9","\x50","\x69"),
	HX_HCSTRING("pixelHeight","\x0d","\xeb","\xd8","\x73"),
	HX_HCSTRING("get_pixelWidth","\xe9","\x81","\x46","\xdf"),
	HX_HCSTRING("get_pixelHeight","\xa4","\xa2","\xba","\x34"),
	HX_HCSTRING("vsynced","\x70","\x5c","\x6c","\x1a"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("systemId","\xaa","\xb0","\xe9","\x61"),
	HX_HCSTRING("requestShutdown","\x05","\xff","\x38","\x10"),
	HX_HCSTRING("canSwitchFullscreen","\x7f","\x71","\x5d","\x32"),
	HX_HCSTRING("isFullscreen","\xc5","\x62","\xd3","\xcb"),
	HX_HCSTRING("requestFullscreen","\x6a","\xf6","\xf9","\x05"),
	HX_HCSTRING("exitFullscreen","\xf9","\x86","\x4e","\xcd"),
	::String(null()) };

void Sys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Sys","\xa3","\xa3","\x1b","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
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

void Sys_obj::__boot()
{
	needs3d= false;
	screenRotation= ::kha::ScreenRotation_obj::RotationNone;
	fullscreenListeners= Dynamic( Array_obj<Dynamic>::__new() );
	previousWidth= (int)0;
	previousHeight= (int)0;
}

} // end namespace kha
