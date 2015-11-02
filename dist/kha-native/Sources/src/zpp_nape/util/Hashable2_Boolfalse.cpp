#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
namespace zpp_nape{
namespace util{

Void Hashable2_Boolfalse_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","new",0x169bec0b,"zpp_nape.util.Hashable2_Boolfalse.new","zpp_nape/util/FastHash.hx",176,0x5d785189)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(205)
	this->di = (int)0;
	HX_STACK_LINE(204)
	this->id = (int)0;
	HX_STACK_LINE(203)
	this->hnext = null();
	HX_STACK_LINE(178)
	this->next = null();
	HX_STACK_LINE(177)
	this->value = false;
}
;
	return null();
}

//Hashable2_Boolfalse_obj::~Hashable2_Boolfalse_obj() { }

Dynamic Hashable2_Boolfalse_obj::__CreateEmpty() { return  new Hashable2_Boolfalse_obj; }
hx::ObjectPtr< Hashable2_Boolfalse_obj > Hashable2_Boolfalse_obj::__new()
{  hx::ObjectPtr< Hashable2_Boolfalse_obj > _result_ = new Hashable2_Boolfalse_obj();
	_result_->__construct();
	return _result_;}

Dynamic Hashable2_Boolfalse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hashable2_Boolfalse_obj > _result_ = new Hashable2_Boolfalse_obj();
	_result_->__construct();
	return _result_;}

Void Hashable2_Boolfalse_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","free",0xac92b6a1,"zpp_nape.util.Hashable2_Boolfalse.free","zpp_nape/util/FastHash.hx",208,0x5d785189)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hashable2_Boolfalse_obj,free,(void))

Void Hashable2_Boolfalse_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","alloc",0x6eda40e0,"zpp_nape.util.Hashable2_Boolfalse.alloc","zpp_nape/util/FastHash.hx",211,0x5d785189)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hashable2_Boolfalse_obj,alloc,(void))

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::zpp_pool;

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::get( int id,int di,bool val){
	HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","get",0x16969c41,"zpp_nape.util.Hashable2_Boolfalse.get","zpp_nape/util/FastHash.hx",214,0x5d785189)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(215)
	::zpp_nape::util::Hashable2_Boolfalse tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::zpp_nape::util::Hashable2_Boolfalse tmp1 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(215)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(215)
			if ((tmp2)){
				HX_STACK_LINE(215)
				::zpp_nape::util::Hashable2_Boolfalse tmp3 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(215)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(215)
				::zpp_nape::util::Hashable2_Boolfalse tmp3 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(215)
				ret = tmp3;
				HX_STACK_LINE(215)
				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
				HX_STACK_LINE(215)
				ret->next = null();
			}
			HX_STACK_LINE(215)
			Dynamic();
		}
		HX_STACK_LINE(215)
		ret->id = id;
		HX_STACK_LINE(215)
		ret->di = di;
		HX_STACK_LINE(215)
		tmp = ret;
	}
	HX_STACK_LINE(215)
	::zpp_nape::util::Hashable2_Boolfalse ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(216)
	ret->value = val;
	HX_STACK_LINE(217)
	::zpp_nape::util::Hashable2_Boolfalse tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Hashable2_Boolfalse_obj,get,return )

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::getpersist( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","getpersist",0x4ef4fff3,"zpp_nape.util.Hashable2_Boolfalse.getpersist","zpp_nape/util/FastHash.hx",220,0x5d785189)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(221)
	::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(223)
		::zpp_nape::util::Hashable2_Boolfalse tmp = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		if ((tmp1)){
			HX_STACK_LINE(224)
			::zpp_nape::util::Hashable2_Boolfalse tmp2 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(230)
			::zpp_nape::util::Hashable2_Boolfalse tmp2 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			ret = tmp2;
			HX_STACK_LINE(231)
			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
			HX_STACK_LINE(232)
			ret->next = null();
		}
		HX_STACK_LINE(237)
		Dynamic();
	}
	HX_STACK_LINE(239)
	ret->id = id;
	HX_STACK_LINE(240)
	ret->di = di;
	HX_STACK_LINE(241)
	::zpp_nape::util::Hashable2_Boolfalse tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Hashable2_Boolfalse_obj,getpersist,return )

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::ordered_get( int id,int di,bool val){
	HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","ordered_get",0x2e30472f,"zpp_nape.util.Hashable2_Boolfalse.ordered_get","zpp_nape/util/FastHash.hx",244,0x5d785189)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(245)
	bool tmp = (id <= di);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	::zpp_nape::util::Hashable2_Boolfalse tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	if ((tmp)){
		HX_STACK_LINE(245)
		::zpp_nape::util::Hashable2_Boolfalse tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::zpp_nape::util::Hashable2_Boolfalse tmp3 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(245)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(245)
				if ((tmp4)){
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse tmp5 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(245)
					ret = tmp5;
				}
				else{
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse tmp5 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(245)
					ret = tmp5;
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
					HX_STACK_LINE(245)
					ret->next = null();
				}
				HX_STACK_LINE(245)
				Dynamic();
			}
			HX_STACK_LINE(245)
			ret->id = id;
			HX_STACK_LINE(245)
			ret->di = di;
			HX_STACK_LINE(245)
			tmp2 = ret;
		}
		HX_STACK_LINE(245)
		::zpp_nape::util::Hashable2_Boolfalse ret = tmp2;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(245)
		ret->value = val;
		HX_STACK_LINE(245)
		tmp1 = ret;
	}
	else{
		HX_STACK_LINE(245)
		::zpp_nape::util::Hashable2_Boolfalse tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::zpp_nape::util::Hashable2_Boolfalse tmp3 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(245)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(245)
				if ((tmp4)){
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse tmp5 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(245)
					ret = tmp5;
				}
				else{
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse tmp5 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(245)
					ret = tmp5;
					HX_STACK_LINE(245)
					::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
					HX_STACK_LINE(245)
					ret->next = null();
				}
				HX_STACK_LINE(245)
				Dynamic();
			}
			HX_STACK_LINE(245)
			ret->id = di;
			HX_STACK_LINE(245)
			ret->di = id;
			HX_STACK_LINE(245)
			tmp2 = ret;
		}
		HX_STACK_LINE(245)
		::zpp_nape::util::Hashable2_Boolfalse ret = tmp2;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(245)
		ret->value = val;
		HX_STACK_LINE(245)
		tmp1 = ret;
	}
	HX_STACK_LINE(245)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Hashable2_Boolfalse_obj,ordered_get,return )

::zpp_nape::util::Hashable2_Boolfalse Hashable2_Boolfalse_obj::ordered_get_persist( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.Hashable2_Boolfalse","ordered_get_persist",0x49cb09c4,"zpp_nape.util.Hashable2_Boolfalse.ordered_get_persist","zpp_nape/util/FastHash.hx",248,0x5d785189)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(249)
	bool tmp = (id <= di);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	::zpp_nape::util::Hashable2_Boolfalse tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	if ((tmp)){
		HX_STACK_LINE(249)
		::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			::zpp_nape::util::Hashable2_Boolfalse tmp2 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			if ((tmp3)){
				HX_STACK_LINE(249)
				::zpp_nape::util::Hashable2_Boolfalse tmp4 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(249)
				ret = tmp4;
			}
			else{
				HX_STACK_LINE(249)
				::zpp_nape::util::Hashable2_Boolfalse tmp4 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(249)
				ret = tmp4;
				HX_STACK_LINE(249)
				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
				HX_STACK_LINE(249)
				ret->next = null();
			}
			HX_STACK_LINE(249)
			Dynamic();
		}
		HX_STACK_LINE(249)
		ret->id = id;
		HX_STACK_LINE(249)
		ret->di = di;
		HX_STACK_LINE(249)
		tmp1 = ret;
	}
	else{
		HX_STACK_LINE(250)
		::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			::zpp_nape::util::Hashable2_Boolfalse tmp2 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			if ((tmp3)){
				HX_STACK_LINE(250)
				::zpp_nape::util::Hashable2_Boolfalse tmp4 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(250)
				ret = tmp4;
			}
			else{
				HX_STACK_LINE(250)
				::zpp_nape::util::Hashable2_Boolfalse tmp4 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(250)
				ret = tmp4;
				HX_STACK_LINE(250)
				::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
				HX_STACK_LINE(250)
				ret->next = null();
			}
			HX_STACK_LINE(250)
			Dynamic();
		}
		HX_STACK_LINE(250)
		ret->id = di;
		HX_STACK_LINE(250)
		ret->di = id;
		HX_STACK_LINE(250)
		tmp1 = ret;
	}
	HX_STACK_LINE(249)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Hashable2_Boolfalse_obj,ordered_get_persist,return )


Hashable2_Boolfalse_obj::Hashable2_Boolfalse_obj()
{
}

void Hashable2_Boolfalse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hashable2_Boolfalse);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(hnext,"hnext");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_END_CLASS();
}

void Hashable2_Boolfalse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(hnext,"hnext");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
}

Dynamic Hashable2_Boolfalse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"hnext") ) { return hnext; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Hashable2_Boolfalse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getpersist") ) { outValue = getpersist_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ordered_get") ) { outValue = ordered_get_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ordered_get_persist") ) { outValue = ordered_get_persist_dyn(); return true;  }
	}
	return false;
}

Dynamic Hashable2_Boolfalse_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::Hashable2_Boolfalse >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hnext") ) { hnext=inValue.Cast< ::zpp_nape::util::Hashable2_Boolfalse >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Hashable2_Boolfalse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::util::Hashable2_Boolfalse >(); return true; }
	}
	return false;
}

void Hashable2_Boolfalse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("hnext","\x5b","\xd9","\xae","\x2a"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("di","\x85","\x57","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Hashable2_Boolfalse_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*::zpp_nape::util::Hashable2_Boolfalse*/ ,(int)offsetof(Hashable2_Boolfalse_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::util::Hashable2_Boolfalse*/ ,(int)offsetof(Hashable2_Boolfalse_obj,hnext),HX_HCSTRING("hnext","\x5b","\xd9","\xae","\x2a")},
	{hx::fsInt,(int)offsetof(Hashable2_Boolfalse_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Hashable2_Boolfalse_obj,di),HX_HCSTRING("di","\x85","\x57","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::Hashable2_Boolfalse*/ ,(void *) &Hashable2_Boolfalse_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("hnext","\x5b","\xd9","\xae","\x2a"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("di","\x85","\x57","\x00","\x00"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hashable2_Boolfalse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Hashable2_Boolfalse_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hashable2_Boolfalse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Hashable2_Boolfalse_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class Hashable2_Boolfalse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("getpersist","\x3e","\x80","\x81","\x05"),
	HX_HCSTRING("ordered_get","\x84","\x08","\x94","\x32"),
	HX_HCSTRING("ordered_get_persist","\x19","\xa8","\x7f","\xf3"),
	::String(null()) };

void Hashable2_Boolfalse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.Hashable2_Boolfalse","\x99","\x8a","\x84","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Hashable2_Boolfalse_obj::__GetStatic;
	__mClass->mSetStaticField = &Hashable2_Boolfalse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Hashable2_Boolfalse_obj >;
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

void Hashable2_Boolfalse_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
