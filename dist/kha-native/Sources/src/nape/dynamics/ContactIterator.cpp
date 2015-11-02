#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
namespace nape{
namespace dynamics{

Void ContactIterator_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.ContactIterator","new",0x1ab1426c,"nape.dynamics.ContactIterator.new","nape/dynamics/ContactIterator.hx",178,0xab69de64)
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
	bool tmp = ::zpp_nape::util::ZPP_ContactList_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate Contact","\x5b","\x8f","\xa4","\x9c");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		::String tmp3 = (tmp2 + HX_HCSTRING("Iterator derp!","\x30","\x02","\xd8","\xd7"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//ContactIterator_obj::~ContactIterator_obj() { }

Dynamic ContactIterator_obj::__CreateEmpty() { return  new ContactIterator_obj; }
hx::ObjectPtr< ContactIterator_obj > ContactIterator_obj::__new()
{  hx::ObjectPtr< ContactIterator_obj > _result_ = new ContactIterator_obj();
	_result_->__construct();
	return _result_;}

Dynamic ContactIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContactIterator_obj > _result_ = new ContactIterator_obj();
	_result_->__construct();
	return _result_;}

bool ContactIterator_obj::hasNext( ){
	HX_STACK_FRAME("nape.dynamics.ContactIterator","hasNext",0xbc140d79,"nape.dynamics.ContactIterator.hasNext","nape/dynamics/ContactIterator.hx",240,0xab69de64)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	::nape::dynamics::ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	tmp->zpp_inner->valmod();
	HX_STACK_LINE(244)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		::nape::dynamics::ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		::nape::dynamics::ContactList _this = tmp2;		HX_STACK_VAR(_this,"_this");
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
				_this->zpp_inner->user_length = (int)0;
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Contact tmp4 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp4->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(244)
					while((true)){
						HX_STACK_LINE(244)
						bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(244)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(244)
						if ((tmp6)){
							HX_STACK_LINE(244)
							break;
						}
						HX_STACK_LINE(244)
						::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(244)
						bool tmp7 = i->active;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(244)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(244)
						if ((tmp7)){
							HX_STACK_LINE(244)
							tmp8 = i->arbiter->active;
						}
						else{
							HX_STACK_LINE(244)
							tmp8 = false;
						}
						HX_STACK_LINE(244)
						if ((tmp8)){
							HX_STACK_LINE(244)
							(_this->zpp_inner->user_length)++;
						}
						HX_STACK_LINE(244)
						cx_ite = cx_ite->next;
					}
				}
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
			::nape::dynamics::ContactIterator tmp5 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			this->zpp_next = tmp5;
			HX_STACK_LINE(252)
			::nape::dynamics::ContactIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactIterator_obj,hasNext,return )

::nape::dynamics::Contact ContactIterator_obj::next( ){
	HX_STACK_FRAME("nape.dynamics.ContactIterator","next",0x4068dd67,"nape.dynamics.ContactIterator.next","nape/dynamics/ContactIterator.hx",264,0xab69de64)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	::nape::dynamics::ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = (this->zpp_i)++;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	::nape::dynamics::Contact tmp2 = tmp->at(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactIterator_obj,next,return )

::nape::dynamics::ContactIterator ContactIterator_obj::zpp_pool;

::nape::dynamics::ContactIterator ContactIterator_obj::get( ::nape::dynamics::ContactList list){
	HX_STACK_FRAME("nape.dynamics.ContactIterator","get",0x1aabf2a2,"nape.dynamics.ContactIterator.get","nape/dynamics/ContactIterator.hx",217,0xab69de64)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(218)
	::nape::dynamics::ContactIterator tmp = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	::nape::dynamics::ContactIterator tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	if ((tmp1)){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_ContactList_obj::internal = true;
		HX_STACK_LINE(220)
		::nape::dynamics::ContactIterator ret = ::nape::dynamics::ContactIterator_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_ContactList_obj::internal = false;
		HX_STACK_LINE(222)
		tmp2 = ret;
	}
	else{
		HX_STACK_LINE(225)
		::nape::dynamics::ContactIterator tmp3 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		::nape::dynamics::ContactIterator r = tmp3;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(226)
		::nape::dynamics::ContactIterator_obj::zpp_pool = r->zpp_next;
		HX_STACK_LINE(227)
		tmp2 = r;
	}
	HX_STACK_LINE(218)
	::nape::dynamics::ContactIterator ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(229)
	ret->zpp_i = (int)0;
	HX_STACK_LINE(230)
	ret->zpp_inner = list;
	HX_STACK_LINE(231)
	ret->zpp_critical = false;
	HX_STACK_LINE(232)
	::nape::dynamics::ContactIterator tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContactIterator_obj,get,return )


ContactIterator_obj::ContactIterator_obj()
{
}

void ContactIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContactIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_END_CLASS();
}

void ContactIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
}

Dynamic ContactIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ContactIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic ContactIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::dynamics::ContactIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::dynamics::ContactList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ContactIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::nape::dynamics::ContactIterator >(); return true; }
	}
	return false;
}

void ContactIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("zpp_i","\xa4","\xfa","\x3f","\x89"));
	outFields->push(HX_HCSTRING("zpp_critical","\xc4","\x9f","\x6b","\xcd"));
	outFields->push(HX_HCSTRING("zpp_next","\x98","\x61","\x7a","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::ContactList*/ ,(int)offsetof(ContactIterator_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsInt,(int)offsetof(ContactIterator_obj,zpp_i),HX_HCSTRING("zpp_i","\xa4","\xfa","\x3f","\x89")},
	{hx::fsBool,(int)offsetof(ContactIterator_obj,zpp_critical),HX_HCSTRING("zpp_critical","\xc4","\x9f","\x6b","\xcd")},
	{hx::fsObject /*::nape::dynamics::ContactIterator*/ ,(int)offsetof(ContactIterator_obj,zpp_next),HX_HCSTRING("zpp_next","\x98","\x61","\x7a","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::ContactIterator*/ ,(void *) &ContactIterator_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_MARK_MEMBER_NAME(ContactIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ContactIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContactIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ContactIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ContactIterator_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ContactIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.ContactIterator","\x7a","\xdc","\x74","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ContactIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &ContactIterator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ContactIterator_obj >;
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

void ContactIterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace dynamics
