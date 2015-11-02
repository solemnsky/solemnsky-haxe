#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerIterator
#include <nape/callbacks/ListenerIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Listener
#include <zpp_nape/util/ZNPList_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
namespace nape{
namespace callbacks{

Void ListenerIterator_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.ListenerIterator","new",0x02be2aba,"nape.callbacks.ListenerIterator.new","nape/callbacks/ListenerIterator.hx",178,0x5711eff4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(198)
	this->zpp_next = null();
	HX_STACK_LINE(190)
	this->zpp_critical = false;
	HX_STACK_LINE(186)
	this->zpp_i = (int)0;
	HX_STACK_LINE(182)
	this->zpp_inner = null();
	HX_STACK_LINE(204)
	bool tmp = ::zpp_nape::util::ZPP_ListenerList_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate Listener","\x59","\x0f","\x14","\x7f");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		::String tmp3 = (tmp2 + HX_HCSTRING("Iterator derp!","\x30","\x02","\xd8","\xd7"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//ListenerIterator_obj::~ListenerIterator_obj() { }

Dynamic ListenerIterator_obj::__CreateEmpty() { return  new ListenerIterator_obj; }
hx::ObjectPtr< ListenerIterator_obj > ListenerIterator_obj::__new()
{  hx::ObjectPtr< ListenerIterator_obj > _result_ = new ListenerIterator_obj();
	_result_->__construct();
	return _result_;}

Dynamic ListenerIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListenerIterator_obj > _result_ = new ListenerIterator_obj();
	_result_->__construct();
	return _result_;}

bool ListenerIterator_obj::hasNext( ){
	HX_STACK_FRAME("nape.callbacks.ListenerIterator","hasNext",0x79f634c7,"nape.callbacks.ListenerIterator.hasNext","nape/callbacks/ListenerIterator.hx",240,0x5711eff4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	::nape::callbacks::ListenerList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	tmp->zpp_inner->valmod();
	HX_STACK_LINE(244)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		::nape::callbacks::ListenerList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		::nape::callbacks::ListenerList _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(244)
		_this->zpp_inner->valmod();
		HX_STACK_LINE(244)
		bool tmp3 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		if ((tmp3)){
			HX_STACK_LINE(244)
			_this->zpp_inner->zip_length = false;
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::zpp_nape::util::ZNPList_ZPP_Listener tmp4 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(244)
				_this->zpp_inner->user_length = tmp4->length;
			}
		}
		HX_STACK_LINE(244)
		tmp1 = _this->zpp_inner->user_length;
	}
	HX_STACK_LINE(244)
	int length = tmp1;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(245)
	this->zpp_critical = true;
	HX_STACK_LINE(246)
	int tmp2 = this->zpp_i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	int tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(246)
	bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(246)
	if ((tmp4)){
		HX_STACK_LINE(247)
		return true;
	}
	else{
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(251)
			::nape::callbacks::ListenerIterator tmp5 = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			this->zpp_next = tmp5;
			HX_STACK_LINE(252)
			::nape::callbacks::ListenerIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ListenerIterator_obj,hasNext,return )

::nape::callbacks::Listener ListenerIterator_obj::next( ){
	HX_STACK_FRAME("nape.callbacks.ListenerIterator","next",0x63a73959,"nape.callbacks.ListenerIterator.next","nape/callbacks/ListenerIterator.hx",264,0x5711eff4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	::nape::callbacks::ListenerList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = (this->zpp_i)++;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	::nape::callbacks::Listener tmp2 = tmp->at(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ListenerIterator_obj,next,return )

::nape::callbacks::ListenerIterator ListenerIterator_obj::zpp_pool;

::nape::callbacks::ListenerIterator ListenerIterator_obj::get( ::nape::callbacks::ListenerList list){
	HX_STACK_FRAME("nape.callbacks.ListenerIterator","get",0x02b8daf0,"nape.callbacks.ListenerIterator.get","nape/callbacks/ListenerIterator.hx",217,0x5711eff4)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(218)
	::nape::callbacks::ListenerIterator tmp = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	::nape::callbacks::ListenerIterator tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	if ((tmp1)){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_ListenerList_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::callbacks::ListenerIterator ret = ::nape::callbacks::ListenerIterator_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_ListenerList_obj::internal = false;
		HX_STACK_LINE(222)
		tmp2 = ret;
	}
	else{
		HX_STACK_LINE(225)
		::nape::callbacks::ListenerIterator tmp3 = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		::nape::callbacks::ListenerIterator r = tmp3;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(226)
		::nape::callbacks::ListenerIterator_obj::zpp_pool = r->zpp_next;
		HX_STACK_LINE(227)
		tmp2 = r;
	}
	HX_STACK_LINE(218)
	::nape::callbacks::ListenerIterator ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(229)
	ret->zpp_i = (int)0;
	HX_STACK_LINE(230)
	ret->zpp_inner = list;
	HX_STACK_LINE(231)
	ret->zpp_critical = false;
	HX_STACK_LINE(232)
	::nape::callbacks::ListenerIterator tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ListenerIterator_obj,get,return )


ListenerIterator_obj::ListenerIterator_obj()
{
}

void ListenerIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListenerIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void ListenerIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

Dynamic ListenerIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { return zpp_i; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { return zpp_next; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { return zpp_critical; }
	}
	return super::__Field(inName,inCallProp);
}

bool ListenerIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ListenerIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::callbacks::ListenerIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::callbacks::ListenerList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ListenerIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::nape::callbacks::ListenerIterator >(); return true; }
	}
	return false;
}

void ListenerIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("zpp_i","\xa4","\xfa","\x3f","\x89"));
	outFields->push(HX_HCSTRING("zpp_critical","\xc4","\x9f","\x6b","\xcd"));
	outFields->push(HX_HCSTRING("zpp_next","\x98","\x61","\x7a","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::ListenerList*/ ,(int)offsetof(ListenerIterator_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsInt,(int)offsetof(ListenerIterator_obj,zpp_i),HX_HCSTRING("zpp_i","\xa4","\xfa","\x3f","\x89")},
	{hx::fsBool,(int)offsetof(ListenerIterator_obj,zpp_critical),HX_HCSTRING("zpp_critical","\xc4","\x9f","\x6b","\xcd")},
	{hx::fsObject /*::nape::callbacks::ListenerIterator*/ ,(int)offsetof(ListenerIterator_obj,zpp_next),HX_HCSTRING("zpp_next","\x98","\x61","\x7a","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::ListenerIterator*/ ,(void *) &ListenerIterator_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("zpp_i","\xa4","\xfa","\x3f","\x89"),
	HX_HCSTRING("zpp_critical","\xc4","\x9f","\x6b","\xcd"),
	HX_HCSTRING("zpp_next","\x98","\x61","\x7a","\x37"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListenerIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ListenerIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListenerIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ListenerIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ListenerIterator_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ListenerIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.ListenerIterator","\xc8","\x05","\xf8","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ListenerIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &ListenerIterator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListenerIterator_obj >;
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

void ListenerIterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace callbacks
