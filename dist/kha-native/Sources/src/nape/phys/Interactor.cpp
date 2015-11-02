#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroup
#include <nape/dynamics/InteractionGroup.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
namespace nape{
namespace phys{

Void Interactor_obj::__construct()
{
HX_STACK_FRAME("nape.phys.Interactor","new",0x114ae081,"nape.phys.Interactor.new","nape/phys/Interactor.hx",174,0xc210d1af)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(178)
	this->zpp_inner_i = null();
	HX_STACK_LINE(290)
	bool tmp = ::nape::phys::Interactor_obj::zpp_internalAlloc;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(290)
	if ((tmp1)){
		HX_STACK_LINE(290)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot instantiate an Interactor, only Shape/Body/Compound","\x51","\xd5","\x1e","\x29"));
	}
}
;
	return null();
}

//Interactor_obj::~Interactor_obj() { }

Dynamic Interactor_obj::__CreateEmpty() { return  new Interactor_obj; }
hx::ObjectPtr< Interactor_obj > Interactor_obj::__new()
{  hx::ObjectPtr< Interactor_obj > _result_ = new Interactor_obj();
	_result_->__construct();
	return _result_;}

Dynamic Interactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Interactor_obj > _result_ = new Interactor_obj();
	_result_->__construct();
	return _result_;}

int Interactor_obj::get_id( ){
	HX_STACK_FRAME("nape.phys.Interactor","get_id",0xefd2eda3,"nape.phys.Interactor.get_id","nape/phys/Interactor.hx",184,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_id,return )

Dynamic Interactor_obj::get_userData( ){
	HX_STACK_FRAME("nape.phys.Interactor","get_userData",0xc382addd,"nape.phys.Interactor.get_userData","nape/phys/Interactor.hx",200,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	Dynamic tmp1 = tmp->userData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	if ((tmp2)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Interactor.hx",202,0xc210d1af)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(202)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		::zpp_nape::phys::ZPP_Interactor tmp4 = this->zpp_inner_i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		tmp4->userData = tmp3;
	}
	HX_STACK_LINE(204)
	::zpp_nape::phys::ZPP_Interactor tmp3 = this->zpp_inner_i;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	Dynamic tmp4 = tmp3->userData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_userData,return )

bool Interactor_obj::isShape( ){
	HX_STACK_FRAME("nape.phys.Interactor","isShape",0xda9abb78,"nape.phys.Interactor.isShape","nape/phys/Interactor.hx",211,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	::zpp_nape::shape::ZPP_Shape tmp1 = tmp->ishape;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,isShape,return )

bool Interactor_obj::isBody( ){
	HX_STACK_FRAME("nape.phys.Interactor","isBody",0xab253a2b,"nape.phys.Interactor.isBody","nape/phys/Interactor.hx",219,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->ibody;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,isBody,return )

bool Interactor_obj::isCompound( ){
	HX_STACK_FRAME("nape.phys.Interactor","isCompound",0x8f0a7b74,"nape.phys.Interactor.isCompound","nape/phys/Interactor.hx",227,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->icompound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,isCompound,return )

::nape::shape::Shape Interactor_obj::get_castShape( ){
	HX_STACK_FRAME("nape.phys.Interactor","get_castShape",0x2ec8171a,"nape.phys.Interactor.get_castShape","nape/phys/Interactor.hx",235,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::zpp_nape::shape::ZPP_Shape tmp1 = tmp->ishape;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	::nape::shape::Shape tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(236)
	if ((tmp2)){
		HX_STACK_LINE(236)
		::zpp_nape::phys::ZPP_Interactor tmp4 = this->zpp_inner_i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		tmp3 = tmp4->ishape->outer;
	}
	else{
		HX_STACK_LINE(236)
		tmp3 = null();
	}
	HX_STACK_LINE(236)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_castShape,return )

::nape::phys::Body Interactor_obj::get_castBody( ){
	HX_STACK_FRAME("nape.phys.Interactor","get_castBody",0x8ff8a8c9,"nape.phys.Interactor.get_castBody","nape/phys/Interactor.hx",243,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->ibody;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	if ((tmp2)){
		HX_STACK_LINE(244)
		::zpp_nape::phys::ZPP_Interactor tmp4 = this->zpp_inner_i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		tmp3 = tmp4->ibody->outer;
	}
	else{
		HX_STACK_LINE(244)
		tmp3 = null();
	}
	HX_STACK_LINE(244)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_castBody,return )

::nape::phys::Compound Interactor_obj::get_castCompound( ){
	HX_STACK_FRAME("nape.phys.Interactor","get_castCompound",0xe67c9112,"nape.phys.Interactor.get_castCompound","nape/phys/Interactor.hx",251,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->icompound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(252)
	::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	if ((tmp2)){
		HX_STACK_LINE(252)
		::zpp_nape::phys::ZPP_Interactor tmp4 = this->zpp_inner_i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		tmp3 = tmp4->icompound->outer;
	}
	else{
		HX_STACK_LINE(252)
		tmp3 = null();
	}
	HX_STACK_LINE(252)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_castCompound,return )

::nape::dynamics::InteractionGroup Interactor_obj::get_group( ){
	HX_STACK_FRAME("nape.phys.Interactor","get_group",0x35856e77,"nape.phys.Interactor.get_group","nape/phys/Interactor.hx",261,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(262)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = tmp->group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	::nape::dynamics::InteractionGroup tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	if ((tmp2)){
		HX_STACK_LINE(262)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(262)
		::zpp_nape::phys::ZPP_Interactor tmp4 = this->zpp_inner_i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		tmp3 = tmp4->group->outer;
	}
	HX_STACK_LINE(262)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_group,return )

::nape::dynamics::InteractionGroup Interactor_obj::set_group( ::nape::dynamics::InteractionGroup group){
	HX_STACK_FRAME("nape.phys.Interactor","set_group",0x18d65a83,"nape.phys.Interactor.set_group","nape/phys/Interactor.hx",264,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(group,"group")
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(266)
		::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		tmp->immutable_midstep(HX_HCSTRING("Interactor::group","\x26","\xef","\x48","\x55"));
		HX_STACK_LINE(267)
		::zpp_nape::phys::ZPP_Interactor tmp1 = this->zpp_inner_i;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		bool tmp2 = (group == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		if ((tmp2)){
			HX_STACK_LINE(267)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(267)
			tmp3 = group->zpp_inner;
		}
		HX_STACK_LINE(267)
		tmp1->setGroup(tmp3);
	}
	HX_STACK_LINE(269)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = tmp->group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	::nape::dynamics::InteractionGroup tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	if ((tmp2)){
		HX_STACK_LINE(269)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(269)
		::zpp_nape::phys::ZPP_Interactor tmp4 = this->zpp_inner_i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		tmp3 = tmp4->group->outer;
	}
	HX_STACK_LINE(269)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Interactor_obj,set_group,return )

::nape::callbacks::CbTypeList Interactor_obj::get_cbTypes( ){
	HX_STACK_FRAME("nape.phys.Interactor","get_cbTypes",0x1f5f2292,"nape.phys.Interactor.get_cbTypes","nape/phys/Interactor.hx",278,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	::nape::callbacks::CbTypeList tmp1 = tmp->wrap_cbTypes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	if ((tmp2)){
		HX_STACK_LINE(279)
		::zpp_nape::phys::ZPP_Interactor tmp3 = this->zpp_inner_i;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		tmp3->setupcbTypes();
	}
	HX_STACK_LINE(280)
	::zpp_nape::phys::ZPP_Interactor tmp3 = this->zpp_inner_i;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	::nape::callbacks::CbTypeList tmp4 = tmp3->wrap_cbTypes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(280)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_cbTypes,return )

::String Interactor_obj::toString( ){
	HX_STACK_FRAME("nape.phys.Interactor","toString",0x2fa4a8eb,"nape.phys.Interactor.toString","nape/phys/Interactor.hx",297,0xc210d1af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,toString,return )

bool Interactor_obj::zpp_internalAlloc;


Interactor_obj::Interactor_obj()
{
}

void Interactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interactor);
	HX_MARK_MEMBER_NAME(zpp_inner_i,"zpp_inner_i");
	HX_MARK_END_CLASS();
}

void Interactor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_i,"zpp_inner_i");
}

Dynamic Interactor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return get_id(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return get_group(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		if (HX_FIELD_EQ(inName,"isBody") ) { return isBody_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isShape") ) { return isShape_dyn(); }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { if (inCallProp == hx::paccAlways) return get_cbTypes(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return get_userData(); }
		if (HX_FIELD_EQ(inName,"castBody") ) { if (inCallProp == hx::paccAlways) return get_castBody(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"castShape") ) { if (inCallProp == hx::paccAlways) return get_castShape(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isCompound") ) { return isCompound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zpp_inner_i") ) { return zpp_inner_i; }
		if (HX_FIELD_EQ(inName,"get_cbTypes") ) { return get_cbTypes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_castBody") ) { return get_castBody_dyn(); }
		if (HX_FIELD_EQ(inName,"castCompound") ) { if (inCallProp == hx::paccAlways) return get_castCompound(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_castShape") ) { return get_castShape_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_castCompound") ) { return get_castCompound_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Interactor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"zpp_internalAlloc") ) { outValue = zpp_internalAlloc; return true;  }
	}
	return false;
}

Dynamic Interactor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return set_group(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zpp_inner_i") ) { zpp_inner_i=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Interactor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"zpp_internalAlloc") ) { zpp_internalAlloc=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Interactor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_i","\xbb","\x6e","\xa6","\xb0"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("castShape","\xe2","\x5f","\x4d","\x5e"));
	outFields->push(HX_HCSTRING("castBody","\x01","\x91","\x9e","\xd1"));
	outFields->push(HX_HCSTRING("castCompound","\x4a","\xf5","\xa6","\x93"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Interactor*/ ,(int)offsetof(Interactor_obj,zpp_inner_i),HX_HCSTRING("zpp_inner_i","\xbb","\x6e","\xa6","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Interactor_obj::zpp_internalAlloc,HX_HCSTRING("zpp_internalAlloc","\xb3","\x36","\x26","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_i","\xbb","\x6e","\xa6","\xb0"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("isShape","\xd7","\x86","\xa2","\x18"),
	HX_HCSTRING("isBody","\xac","\x3f","\x82","\x5e"),
	HX_HCSTRING("isCompound","\x75","\xd5","\x7e","\xfc"),
	HX_HCSTRING("get_castShape","\xb9","\x33","\xb1","\x1f"),
	HX_HCSTRING("get_castBody","\x0a","\x45","\xb8","\x86"),
	HX_HCSTRING("get_castCompound","\xd3","\xe1","\x45","\x98"),
	HX_HCSTRING("get_group","\x96","\x0f","\x9e","\xdd"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("get_cbTypes","\x71","\x89","\xb9","\x77"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interactor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Interactor_obj::zpp_internalAlloc,"zpp_internalAlloc");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interactor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Interactor_obj::zpp_internalAlloc,"zpp_internalAlloc");
};

#endif

hx::Class Interactor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_internalAlloc","\xb3","\x36","\x26","\x40"),
	::String(null()) };

void Interactor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.phys.Interactor","\x0f","\x8c","\x56","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Interactor_obj::__GetStatic;
	__mClass->mSetStaticField = &Interactor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Interactor_obj >;
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

void Interactor_obj::__boot()
{
	zpp_internalAlloc= false;
}

} // end namespace nape
} // end namespace phys
