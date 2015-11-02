#include <hxcpp.h>

#ifndef INCLUDED_kha_Cursor
#include <kha/Cursor.h>
#endif
#ifndef INCLUDED_kha_Mouse
#include <kha/Mouse.h>
#endif
#ifndef INCLUDED_kha_Starter
#include <kha/Starter.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
namespace kha{

Void Mouse_obj::__construct()
{
HX_STACK_FRAME("kha.Mouse","new",0xc0eb38ad,"kha.Mouse.new","kha/Mouse.hx",3,0xe99ea464)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	this->forceSystem = false;
	HX_STACK_LINE(4)
	this->hidden = false;
	HX_STACK_LINE(16)
	Array< ::kha::Cursor > tmp = Array_obj< ::kha::Cursor >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	this->cursors = tmp;
	HX_STACK_LINE(17)
	this->cursorIndex = (int)-1;
}
;
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Void Mouse_obj::show( ){
{
		HX_STACK_FRAME("kha.Mouse","show",0x1036b010,"kha.Mouse.show","kha/Mouse.hx",20,0xe99ea464)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->hidden = false;
		HX_STACK_LINE(22)
		int tmp = this->cursorIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		if ((tmp2)){
			HX_STACK_LINE(22)
			tmp3 = this->forceSystem;
		}
		else{
			HX_STACK_LINE(22)
			tmp3 = true;
		}
		HX_STACK_LINE(22)
		if ((tmp3)){
			HX_STACK_LINE(22)
			this->showSystemCursor();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

Void Mouse_obj::hide( ){
{
		HX_STACK_FRAME("kha.Mouse","hide",0x08f20fd5,"kha.Mouse.hide","kha/Mouse.hx",25,0xe99ea464)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->hidden = true;
		HX_STACK_LINE(27)
		this->hideSystemCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::hideSystemCursor( ){
{
		HX_STACK_FRAME("kha.Mouse","hideSystemCursor",0xe6853e9a,"kha.Mouse.hideSystemCursor","kha/Mouse.hx",30,0xe99ea464)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hideSystemCursor,(void))

Void Mouse_obj::showSystemCursor( ){
{
		HX_STACK_FRAME("kha.Mouse","showSystemCursor",0x2596cb55,"kha.Mouse.showSystemCursor","kha/Mouse.hx",34,0xe99ea464)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,showSystemCursor,(void))

Void Mouse_obj::forceSystemCursor( bool force){
{
		HX_STACK_FRAME("kha.Mouse","forceSystemCursor",0x9e8a1ebd,"kha.Mouse.forceSystemCursor","kha/Mouse.hx",38,0xe99ea464)
		HX_STACK_THIS(this)
		HX_STACK_ARG(force,"force")
		HX_STACK_LINE(39)
		this->forceSystem = force;
		HX_STACK_LINE(40)
		bool tmp = this->forceSystem;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		if ((tmp)){
			HX_STACK_LINE(41)
			bool tmp1 = this->hidden;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			if ((tmp2)){
				HX_STACK_LINE(41)
				this->showSystemCursor();
			}
		}
		else{
			HX_STACK_LINE(42)
			int tmp1 = this->cursorIndex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			if ((tmp2)){
				HX_STACK_LINE(43)
				this->hideSystemCursor();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,forceSystemCursor,(void))

Void Mouse_obj::pushCursor( ::kha::Cursor cursorImage){
{
		HX_STACK_FRAME("kha.Mouse","pushCursor",0xd599dfa3,"kha.Mouse.pushCursor","kha/Mouse.hx",47,0xe99ea464)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cursorImage,"cursorImage")
		HX_STACK_LINE(48)
		++(this->cursorIndex);
		HX_STACK_LINE(49)
		Array< ::kha::Cursor > tmp = this->cursors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		int tmp1 = this->cursorIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::kha::Cursor tmp2 = cursorImage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		tmp[tmp1] = tmp2;
		HX_STACK_LINE(50)
		bool tmp3 = this->forceSystem;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		if ((tmp4)){
			HX_STACK_LINE(50)
			this->hideSystemCursor();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,pushCursor,(void))

Void Mouse_obj::popCursor( ){
{
		HX_STACK_FRAME("kha.Mouse","popCursor",0xc1688354,"kha.Mouse.popCursor","kha/Mouse.hx",53,0xe99ea464)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		--(this->cursorIndex);
		HX_STACK_LINE(55)
		int tmp = this->cursorIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		bool tmp1 = (tmp <= (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(56)
			this->cursorIndex = (int)-1;
			HX_STACK_LINE(57)
			bool tmp2 = this->hidden;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			if ((tmp3)){
				HX_STACK_LINE(58)
				this->showSystemCursor();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,popCursor,(void))

Void Mouse_obj::render( ::kha::graphics2::Graphics g){
{
		HX_STACK_FRAME("kha.Mouse","render",0x6e087129,"kha.Mouse.render","kha/Mouse.hx",63,0xe99ea464)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(64)
		int tmp = this->cursorIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(64)
			bool tmp3 = this->hidden;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(64)
			tmp2 = false;
		}
		HX_STACK_LINE(64)
		if ((tmp2)){
			HX_STACK_LINE(64)
			Array< ::kha::Cursor > tmp3 = this->cursors;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			int tmp4 = this->cursorIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			::kha::Cursor tmp5 = tmp3->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			::kha::graphics2::Graphics tmp6 = g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			int tmp7 = ::kha::Starter_obj::mouseX;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			int tmp8 = ::kha::Starter_obj::mouseY;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			tmp5->render(tmp6,tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,render,(void))

Void Mouse_obj::update( ){
{
		HX_STACK_FRAME("kha.Mouse","update",0xefe48bdc,"kha.Mouse.update","kha/Mouse.hx",67,0xe99ea464)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		int tmp = this->cursorIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		if ((tmp1)){
			HX_STACK_LINE(68)
			Array< ::kha::Cursor > tmp2 = this->cursors;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			int tmp3 = this->cursorIndex;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			::kha::Cursor tmp4 = tmp2->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			int tmp5 = ::kha::Starter_obj::mouseX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			int tmp6 = ::kha::Starter_obj::mouseY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			tmp4->update(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,update,(void))


Mouse_obj::Mouse_obj()
{
}

void Mouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mouse);
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(forceSystem,"forceSystem");
	HX_MARK_MEMBER_NAME(cursors,"cursors");
	HX_MARK_MEMBER_NAME(cursorIndex,"cursorIndex");
	HX_MARK_END_CLASS();
}

void Mouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(forceSystem,"forceSystem");
	HX_VISIT_MEMBER_NAME(cursors,"cursors");
	HX_VISIT_MEMBER_NAME(cursorIndex,"cursorIndex");
}

Dynamic Mouse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return hidden; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cursors") ) { return cursors; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popCursor") ) { return popCursor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushCursor") ) { return pushCursor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceSystem") ) { return forceSystem; }
		if (HX_FIELD_EQ(inName,"cursorIndex") ) { return cursorIndex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"forceSystemCursor") ) { return forceSystemCursor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cursors") ) { cursors=inValue.Cast< Array< ::kha::Cursor > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceSystem") ) { forceSystem=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursorIndex") ) { cursorIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Mouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"));
	outFields->push(HX_HCSTRING("forceSystem","\x3a","\x7f","\x5a","\x56"));
	outFields->push(HX_HCSTRING("cursors","\xdd","\x6c","\x94","\xcc"));
	outFields->push(HX_HCSTRING("cursorIndex","\x5c","\xf4","\xf5","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Mouse_obj,hidden),HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c")},
	{hx::fsBool,(int)offsetof(Mouse_obj,forceSystem),HX_HCSTRING("forceSystem","\x3a","\x7f","\x5a","\x56")},
	{hx::fsObject /*Array< ::kha::Cursor >*/ ,(int)offsetof(Mouse_obj,cursors),HX_HCSTRING("cursors","\xdd","\x6c","\x94","\xcc")},
	{hx::fsInt,(int)offsetof(Mouse_obj,cursorIndex),HX_HCSTRING("cursorIndex","\x5c","\xf4","\xf5","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"),
	HX_HCSTRING("forceSystem","\x3a","\x7f","\x5a","\x56"),
	HX_HCSTRING("cursors","\xdd","\x6c","\x94","\xcc"),
	HX_HCSTRING("cursorIndex","\x5c","\xf4","\xf5","\x46"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("hideSystemCursor","\x07","\x93","\x7b","\x81"),
	HX_HCSTRING("showSystemCursor","\xc2","\x1f","\x8d","\xc0"),
	HX_HCSTRING("forceSystemCursor","\xb0","\xa9","\x1d","\x9b"),
	HX_HCSTRING("pushCursor","\x50","\xf4","\xc7","\x92"),
	HX_HCSTRING("popCursor","\x47","\x63","\x5e","\xbb"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#endif

hx::Class Mouse_obj::__mClass;

void Mouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Mouse","\x3b","\x5e","\x04","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
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
