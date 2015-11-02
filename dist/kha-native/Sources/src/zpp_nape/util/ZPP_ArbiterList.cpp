#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_ArbiterList_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_ArbiterList","new",0xcbfaff29,"zpp_nape.util.ZPP_ArbiterList.new","zpp_nape/util/Lists.hx",17301,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17356)
	this->user_length = (int)0;
	HX_STACK_LINE(17355)
	this->zip_length = false;
	HX_STACK_LINE(17354)
	this->push_ite = null();
	HX_STACK_LINE(17353)
	this->at_ite = null();
	HX_STACK_LINE(17352)
	this->at_index = (int)0;
	HX_STACK_LINE(17314)
	this->reverse_flag = false;
	HX_STACK_LINE(17313)
	this->dontremove = false;
	HX_STACK_LINE(17312)
	this->subber = null();
	HX_STACK_LINE(17311)
	this->post_adder = null();
	HX_STACK_LINE(17310)
	this->adder = null();
	HX_STACK_LINE(17308)
	this->_modifiable = null();
	HX_STACK_LINE(17307)
	this->_validate = null();
	HX_STACK_LINE(17306)
	this->_invalidate = null();
	HX_STACK_LINE(17305)
	this->_invalidated = false;
	HX_STACK_LINE(17304)
	this->immutable = false;
	HX_STACK_LINE(17303)
	this->inner = null();
	HX_STACK_LINE(17302)
	this->outer = null();
	HX_STACK_LINE(17358)
	::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17358)
	this->inner = tmp;
	HX_STACK_LINE(17359)
	this->_invalidated = true;
}
;
	return null();
}

//ZPP_ArbiterList_obj::~ZPP_ArbiterList_obj() { }

Dynamic ZPP_ArbiterList_obj::__CreateEmpty() { return  new ZPP_ArbiterList_obj; }
hx::ObjectPtr< ZPP_ArbiterList_obj > ZPP_ArbiterList_obj::__new()
{  hx::ObjectPtr< ZPP_ArbiterList_obj > _result_ = new ZPP_ArbiterList_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_ArbiterList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ArbiterList_obj > _result_ = new ZPP_ArbiterList_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_ArbiterList_obj::valmod( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ArbiterList","valmod",0xf3166f58,"zpp_nape.util.ZPP_ArbiterList.valmod","zpp_nape/util/Lists.hx",17322,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17323)
		this->validate();
		HX_STACK_LINE(17324)
		::zpp_nape::util::ZNPList_ZPP_Arbiter tmp = this->inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17324)
		bool tmp1 = tmp->modified;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17324)
		if ((tmp1)){
			HX_STACK_LINE(17325)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp2 = this->inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17325)
			bool tmp3 = tmp2->pushmod;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17325)
			if ((tmp3)){
				HX_STACK_LINE(17325)
				this->push_ite = null();
			}
			HX_STACK_LINE(17326)
			this->at_ite = null();
			HX_STACK_LINE(17327)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp4 = this->inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17327)
			tmp4->modified = false;
			HX_STACK_LINE(17328)
			::zpp_nape::util::ZNPList_ZPP_Arbiter tmp5 = this->inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(17328)
			tmp5->pushmod = false;
			HX_STACK_LINE(17329)
			this->zip_length = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,valmod,(void))

Void ZPP_ArbiterList_obj::modified( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ArbiterList","modified",0x761573e0,"zpp_nape.util.ZPP_ArbiterList.modified","zpp_nape/util/Lists.hx",17332,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17333)
		this->zip_length = true;
		HX_STACK_LINE(17334)
		this->at_ite = null();
		HX_STACK_LINE(17335)
		this->push_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,modified,(void))

Void ZPP_ArbiterList_obj::modify_test( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ArbiterList","modify_test",0x58d2f540,"zpp_nape.util.ZPP_ArbiterList.modify_test","zpp_nape/util/Lists.hx",17337,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17339)
		Dynamic tmp = this->_modifiable_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17339)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17339)
		if ((tmp1)){
			HX_STACK_LINE(17339)
			this->_modifiable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,modify_test,(void))

Void ZPP_ArbiterList_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ArbiterList","validate",0x6431692d,"zpp_nape.util.ZPP_ArbiterList.validate","zpp_nape/util/Lists.hx",17342,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17343)
		bool tmp = this->_invalidated;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17343)
		if ((tmp)){
			HX_STACK_LINE(17344)
			this->_invalidated = false;
			HX_STACK_LINE(17345)
			Dynamic tmp1 = this->_validate_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(17345)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17345)
			if ((tmp2)){
				HX_STACK_LINE(17345)
				this->_validate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,validate,(void))

Void ZPP_ArbiterList_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ArbiterList","invalidate",0x878045d2,"zpp_nape.util.ZPP_ArbiterList.invalidate","zpp_nape/util/Lists.hx",17348,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17349)
		this->_invalidated = true;
		HX_STACK_LINE(17350)
		Dynamic tmp = this->_invalidate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17350)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17350)
		if ((tmp1)){
			HX_STACK_LINE(17350)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ArbiterList_obj,invalidate,(void))

bool ZPP_ArbiterList_obj::internal;

::nape::dynamics::ArbiterList ZPP_ArbiterList_obj::get( ::zpp_nape::util::ZNPList_ZPP_Arbiter list,hx::Null< bool >  __o_imm){
bool imm = __o_imm.Default(false);
	HX_STACK_FRAME("zpp_nape.util.ZPP_ArbiterList","get",0xcbf5af5f,"zpp_nape.util.ZPP_ArbiterList.get","zpp_nape/util/Lists.hx",17315,0x9f4e6754)
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(imm,"imm")
{
		HX_STACK_LINE(17316)
		::nape::dynamics::ArbiterList ret = ::nape::dynamics::ArbiterList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(17317)
		ret->zpp_inner->inner = list;
		HX_STACK_LINE(17318)
		bool tmp = imm;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17318)
		if ((tmp)){
			HX_STACK_LINE(17318)
			ret->zpp_inner->immutable = true;
		}
		HX_STACK_LINE(17319)
		ret->zpp_inner->zip_length = true;
		HX_STACK_LINE(17320)
		::nape::dynamics::ArbiterList tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17320)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_ArbiterList_obj,get,return )


ZPP_ArbiterList_obj::ZPP_ArbiterList_obj()
{
}

void ZPP_ArbiterList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ArbiterList);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(immutable,"immutable");
	HX_MARK_MEMBER_NAME(_invalidated,"_invalidated");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_modifiable,"_modifiable");
	HX_MARK_MEMBER_NAME(adder,"adder");
	HX_MARK_MEMBER_NAME(post_adder,"post_adder");
	HX_MARK_MEMBER_NAME(subber,"subber");
	HX_MARK_MEMBER_NAME(dontremove,"dontremove");
	HX_MARK_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_MARK_MEMBER_NAME(at_index,"at_index");
	HX_MARK_MEMBER_NAME(at_ite,"at_ite");
	HX_MARK_MEMBER_NAME(push_ite,"push_ite");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(user_length,"user_length");
	HX_MARK_END_CLASS();
}

void ZPP_ArbiterList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(immutable,"immutable");
	HX_VISIT_MEMBER_NAME(_invalidated,"_invalidated");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_modifiable,"_modifiable");
	HX_VISIT_MEMBER_NAME(adder,"adder");
	HX_VISIT_MEMBER_NAME(post_adder,"post_adder");
	HX_VISIT_MEMBER_NAME(subber,"subber");
	HX_VISIT_MEMBER_NAME(dontremove,"dontremove");
	HX_VISIT_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_VISIT_MEMBER_NAME(at_index,"at_index");
	HX_VISIT_MEMBER_NAME(at_ite,"at_ite");
	HX_VISIT_MEMBER_NAME(push_ite,"push_ite");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(user_length,"user_length");
}

Dynamic ZPP_ArbiterList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"adder") ) { return adder; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { return subber; }
		if (HX_FIELD_EQ(inName,"valmod") ) { return valmod_dyn(); }
		if (HX_FIELD_EQ(inName,"at_ite") ) { return at_ite; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return modified_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"at_index") ) { return at_index; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { return push_ite; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { return immutable; }
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"post_adder") ) { return post_adder; }
		if (HX_FIELD_EQ(inName,"dontremove") ) { return dontremove; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		if (HX_FIELD_EQ(inName,"_modifiable") ) { return _modifiable; }
		if (HX_FIELD_EQ(inName,"modify_test") ) { return modify_test_dyn(); }
		if (HX_FIELD_EQ(inName,"user_length") ) { return user_length; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_invalidated") ) { return _invalidated; }
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { return reverse_flag; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_ArbiterList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
	}
	return false;
}

Dynamic ZPP_ArbiterList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { immutable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"post_adder") ) { post_adder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dontremove") ) { dontremove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_modifiable") ) { _modifiable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"user_length") ) { user_length=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_invalidated") ) { _invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { reverse_flag=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_ArbiterList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_ArbiterList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("immutable","\x42","\x28","\xc7","\x66"));
	outFields->push(HX_HCSTRING("_invalidated","\x8a","\xe0","\xb5","\x23"));
	outFields->push(HX_HCSTRING("dontremove","\x95","\xcf","\xb2","\x03"));
	outFields->push(HX_HCSTRING("reverse_flag","\x29","\x93","\x06","\x7a"));
	outFields->push(HX_HCSTRING("at_index","\x86","\xef","\xd2","\x3d"));
	outFields->push(HX_HCSTRING("at_ite","\x8e","\xa1","\x34","\xd2"));
	outFields->push(HX_HCSTRING("push_ite","\xf5","\x5d","\x33","\x23"));
	outFields->push(HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c"));
	outFields->push(HX_HCSTRING("user_length","\x9a","\xc3","\x4e","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::ArbiterList*/ ,(int)offsetof(ZPP_ArbiterList_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Arbiter*/ ,(int)offsetof(ZPP_ArbiterList_obj,inner),HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe")},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,immutable),HX_HCSTRING("immutable","\x42","\x28","\xc7","\x66")},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,_invalidated),HX_HCSTRING("_invalidated","\x8a","\xe0","\xb5","\x23")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ArbiterList_obj,_invalidate),HX_HCSTRING("_invalidate","\x9a","\xe6","\xb3","\x59")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ArbiterList_obj,_validate),HX_HCSTRING("_validate","\xf5","\xc7","\x79","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ArbiterList_obj,_modifiable),HX_HCSTRING("_modifiable","\x23","\xcc","\xcf","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ArbiterList_obj,adder),HX_HCSTRING("adder","\xce","\xd4","\x43","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ArbiterList_obj,post_adder),HX_HCSTRING("post_adder","\x6f","\x28","\xcf","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_ArbiterList_obj,subber),HX_HCSTRING("subber","\xcf","\xfb","\xfd","\x99")},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,dontremove),HX_HCSTRING("dontremove","\x95","\xcf","\xb2","\x03")},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,reverse_flag),HX_HCSTRING("reverse_flag","\x29","\x93","\x06","\x7a")},
	{hx::fsInt,(int)offsetof(ZPP_ArbiterList_obj,at_index),HX_HCSTRING("at_index","\x86","\xef","\xd2","\x3d")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Arbiter*/ ,(int)offsetof(ZPP_ArbiterList_obj,at_ite),HX_HCSTRING("at_ite","\x8e","\xa1","\x34","\xd2")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Arbiter*/ ,(int)offsetof(ZPP_ArbiterList_obj,push_ite),HX_HCSTRING("push_ite","\xf5","\x5d","\x33","\x23")},
	{hx::fsBool,(int)offsetof(ZPP_ArbiterList_obj,zip_length),HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c")},
	{hx::fsInt,(int)offsetof(ZPP_ArbiterList_obj,user_length),HX_HCSTRING("user_length","\x9a","\xc3","\x4e","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_ArbiterList_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"),
	HX_HCSTRING("immutable","\x42","\x28","\xc7","\x66"),
	HX_HCSTRING("_invalidated","\x8a","\xe0","\xb5","\x23"),
	HX_HCSTRING("_invalidate","\x9a","\xe6","\xb3","\x59"),
	HX_HCSTRING("_validate","\xf5","\xc7","\x79","\x4c"),
	HX_HCSTRING("_modifiable","\x23","\xcc","\xcf","\x0c"),
	HX_HCSTRING("adder","\xce","\xd4","\x43","\x1c"),
	HX_HCSTRING("post_adder","\x6f","\x28","\xcf","\x38"),
	HX_HCSTRING("subber","\xcf","\xfb","\xfd","\x99"),
	HX_HCSTRING("dontremove","\x95","\xcf","\xb2","\x03"),
	HX_HCSTRING("reverse_flag","\x29","\x93","\x06","\x7a"),
	HX_HCSTRING("valmod","\x81","\xfa","\xb0","\x4f"),
	HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"),
	HX_HCSTRING("modify_test","\x77","\x55","\xc2","\x0d"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("at_index","\x86","\xef","\xd2","\x3d"),
	HX_HCSTRING("at_ite","\x8e","\xa1","\x34","\xd2"),
	HX_HCSTRING("push_ite","\xf5","\x5d","\x33","\x23"),
	HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c"),
	HX_HCSTRING("user_length","\x9a","\xc3","\x4e","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ArbiterList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ArbiterList_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ArbiterList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ArbiterList_obj::internal,"internal");
};

#endif

hx::Class ZPP_ArbiterList_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_ArbiterList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_ArbiterList","\xb7","\x36","\x98","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_ArbiterList_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_ArbiterList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ArbiterList_obj >;
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

void ZPP_ArbiterList_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
