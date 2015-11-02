#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MatMN_obj::__construct(int m,int n)
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_MatMN","new",0x27e6157d,"zpp_nape.geom.ZPP_MatMN.new","zpp_nape/geom/MatMN.hx",174,0x7fddad2e)
HX_STACK_THIS(this)
HX_STACK_ARG(m,"m")
HX_STACK_ARG(n,"n")
{
	HX_STACK_LINE(178)
	this->x = null();
	HX_STACK_LINE(177)
	this->n = (int)0;
	HX_STACK_LINE(176)
	this->m = (int)0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(180)
	this->m = m;
	HX_STACK_LINE(181)
	this->n = n;
	HX_STACK_LINE(183)
	Array< Float > tmp = Array_obj< Float >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	this->x = tmp;
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(184)
		int tmp1 = (m * n);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		while((true)){
			HX_STACK_LINE(184)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			if ((tmp3)){
				HX_STACK_LINE(184)
				break;
			}
			HX_STACK_LINE(184)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(185)
			Array< Float > tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			tmp5->push(((Float)0.0));
		}
	}
}
;
	return null();
}

//ZPP_MatMN_obj::~ZPP_MatMN_obj() { }

Dynamic ZPP_MatMN_obj::__CreateEmpty() { return  new ZPP_MatMN_obj; }
hx::ObjectPtr< ZPP_MatMN_obj > ZPP_MatMN_obj::__new(int m,int n)
{  hx::ObjectPtr< ZPP_MatMN_obj > _result_ = new ZPP_MatMN_obj();
	_result_->__construct(m,n);
	return _result_;}

Dynamic ZPP_MatMN_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MatMN_obj > _result_ = new ZPP_MatMN_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


ZPP_MatMN_obj::ZPP_MatMN_obj()
{
}

void ZPP_MatMN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MatMN);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void ZPP_MatMN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic ZPP_MatMN_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MatMN_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::MatMN >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_MatMN_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_MatMN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::MatMN*/ ,(int)offsetof(ZPP_MatMN_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsInt,(int)offsetof(ZPP_MatMN_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_MatMN_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_MatMN_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MatMN_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MatMN_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_MatMN_obj::__mClass;

void ZPP_MatMN_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_MatMN","\x0b","\x93","\x7c","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_MatMN_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_MatMN_obj >;
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

} // end namespace zpp_nape
} // end namespace geom
