#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Material_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","new",0x1f6d8179,"zpp_nape.phys.ZPP_Material.new","zpp_nape/phys/Material.hx",174,0x3ab51b5c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(255)
	this->rollingFriction = ((Float)0.0);
	HX_STACK_LINE(254)
	this->elasticity = ((Float)0.0);
	HX_STACK_LINE(253)
	this->density = ((Float)0.0);
	HX_STACK_LINE(252)
	this->staticFriction = ((Float)0.0);
	HX_STACK_LINE(251)
	this->dynamicFriction = ((Float)0.0);
	HX_STACK_LINE(235)
	this->wrap_shapes = null();
	HX_STACK_LINE(234)
	this->shapes = null();
	HX_STACK_LINE(201)
	this->outer = null();
	HX_STACK_LINE(200)
	this->userData = null();
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		this->shapes = tmp;
	}
	HX_STACK_LINE(258)
	this->elasticity = (int)0;
	HX_STACK_LINE(259)
	this->dynamicFriction = (int)1;
	HX_STACK_LINE(260)
	this->staticFriction = (int)2;
	HX_STACK_LINE(261)
	this->density = ((Float)0.001);
	HX_STACK_LINE(262)
	this->rollingFriction = ((Float)0.01);
}
;
	return null();
}

//ZPP_Material_obj::~ZPP_Material_obj() { }

Dynamic ZPP_Material_obj::__CreateEmpty() { return  new ZPP_Material_obj; }
hx::ObjectPtr< ZPP_Material_obj > ZPP_Material_obj::__new()
{  hx::ObjectPtr< ZPP_Material_obj > _result_ = new ZPP_Material_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Material_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Material_obj > _result_ = new ZPP_Material_obj();
	_result_->__construct();
	return _result_;}

::nape::phys::Material ZPP_Material_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","wrapper",0x7eaf86ec,"zpp_nape.phys.ZPP_Material.wrapper","zpp_nape/phys/Material.hx",202,0x3ab51b5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	::nape::phys::Material tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::nape::phys::Material tmp2 = ::nape::phys::Material_obj::__new(null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		this->outer = tmp2;
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(206)
			::nape::phys::Material tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			::zpp_nape::phys::ZPP_Material o = tmp3->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(215)
			o->outer = null();
			HX_STACK_LINE(216)
			::zpp_nape::phys::ZPP_Material tmp4 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			o->next = tmp4;
			HX_STACK_LINE(217)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = o;
		}
		HX_STACK_LINE(222)
		::nape::phys::Material tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(224)
	::nape::phys::Material tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,wrapper,return )

Void ZPP_Material_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","free",0x5b23e173,"zpp_nape.phys.ZPP_Material.free","zpp_nape/phys/Material.hx",229,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->outer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,free,(void))

Void ZPP_Material_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","alloc",0x7f4e8dce,"zpp_nape.phys.ZPP_Material.alloc","zpp_nape/phys/Material.hx",233,0x3ab51b5c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,alloc,(void))

Void ZPP_Material_obj::feature_cons( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","feature_cons",0x750d3321,"zpp_nape.phys.ZPP_Material.feature_cons","zpp_nape/phys/Material.hx",238,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		this->shapes = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,feature_cons,(void))

Void ZPP_Material_obj::addShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","addShape",0xa58abd87,"zpp_nape.phys.ZPP_Material.addShape","zpp_nape/phys/Material.hx",243,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(244)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		::zpp_nape::shape::ZPP_Shape tmp1 = shape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Material_obj,addShape,(void))

Void ZPP_Material_obj::remShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","remShape",0x34b007ae,"zpp_nape.phys.ZPP_Material.remShape","zpp_nape/phys/Material.hx",248,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(249)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		::zpp_nape::shape::ZPP_Shape tmp1 = shape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Material_obj,remShape,(void))

::zpp_nape::phys::ZPP_Material ZPP_Material_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","copy",0x5926007c,"zpp_nape.phys.ZPP_Material.copy","zpp_nape/phys/Material.hx",264,0x3ab51b5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Material ret = ::zpp_nape::phys::ZPP_Material_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(266)
	Float tmp = this->dynamicFriction;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	ret->dynamicFriction = tmp;
	HX_STACK_LINE(267)
	Float tmp1 = this->staticFriction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	ret->staticFriction = tmp1;
	HX_STACK_LINE(268)
	Float tmp2 = this->density;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	ret->density = tmp2;
	HX_STACK_LINE(269)
	Float tmp3 = this->elasticity;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	ret->elasticity = tmp3;
	HX_STACK_LINE(270)
	Float tmp4 = this->rollingFriction;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(270)
	ret->rollingFriction = tmp4;
	HX_STACK_LINE(271)
	::zpp_nape::phys::ZPP_Material tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(271)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Material_obj,copy,return )

Void ZPP_Material_obj::set( ::zpp_nape::phys::ZPP_Material x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","set",0x1f714cbb,"zpp_nape.phys.ZPP_Material.set","zpp_nape/phys/Material.hx",273,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(274)
		this->dynamicFriction = x->dynamicFriction;
		HX_STACK_LINE(275)
		this->staticFriction = x->staticFriction;
		HX_STACK_LINE(276)
		this->density = x->density;
		HX_STACK_LINE(277)
		this->elasticity = x->elasticity;
		HX_STACK_LINE(278)
		this->rollingFriction = x->rollingFriction;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Material_obj,set,(void))

Void ZPP_Material_obj::invalidate( int x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Material","invalidate",0xe405ad82,"zpp_nape.phys.ZPP_Material.invalidate","zpp_nape/phys/Material.hx",285,0x3ab51b5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(286)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(287)
		while((true)){
			HX_STACK_LINE(287)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			if ((tmp2)){
				HX_STACK_LINE(287)
				break;
			}
			HX_STACK_LINE(288)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(289)
			int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			s->invalidate_material(tmp3);
			HX_STACK_LINE(290)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Material_obj,invalidate,(void))

::zpp_nape::phys::ZPP_Material ZPP_Material_obj::zpp_pool;

int ZPP_Material_obj::WAKE;

int ZPP_Material_obj::PROPS;

int ZPP_Material_obj::ANGDRAG;

int ZPP_Material_obj::ARBITERS;


ZPP_Material_obj::ZPP_Material_obj()
{
}

void ZPP_Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Material);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(dynamicFriction,"dynamicFriction");
	HX_MARK_MEMBER_NAME(staticFriction,"staticFriction");
	HX_MARK_MEMBER_NAME(density,"density");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(rollingFriction,"rollingFriction");
	HX_MARK_END_CLASS();
}

void ZPP_Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(dynamicFriction,"dynamicFriction");
	HX_VISIT_MEMBER_NAME(staticFriction,"staticFriction");
	HX_VISIT_MEMBER_NAME(density,"density");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(rollingFriction,"rollingFriction");
}

Dynamic ZPP_Material_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"density") ) { return density; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"addShape") ) { return addShape_dyn(); }
		if (HX_FIELD_EQ(inName,"remShape") ) { return remShape_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"feature_cons") ) { return feature_cons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { return staticFriction; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { return dynamicFriction; }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { return rollingFriction; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Material_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"WAKE") ) { outValue = WAKE; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"PROPS") ) { outValue = PROPS; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ANGDRAG") ) { outValue = ANGDRAG; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		if (HX_FIELD_EQ(inName,"ARBITERS") ) { outValue = ARBITERS; return true;  }
	}
	return false;
}

Dynamic ZPP_Material_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::Material >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { density=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { staticFriction=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { dynamicFriction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { rollingFriction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Material_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"WAKE") ) { WAKE=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"PROPS") ) { PROPS=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ANGDRAG") ) { ANGDRAG=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return true; }
		if (HX_FIELD_EQ(inName,"ARBITERS") ) { ARBITERS=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ZPP_Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"));
	outFields->push(HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07"));
	outFields->push(HX_HCSTRING("dynamicFriction","\x99","\xeb","\x8a","\xda"));
	outFields->push(HX_HCSTRING("staticFriction","\xc8","\x6f","\xc8","\x40"));
	outFields->push(HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("rollingFriction","\x9f","\x6f","\x01","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Material*/ ,(int)offsetof(ZPP_Material_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Material_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*::nape::phys::Material*/ ,(int)offsetof(ZPP_Material_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Shape*/ ,(int)offsetof(ZPP_Material_obj,shapes),HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_Material_obj,wrap_shapes),HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,dynamicFriction),HX_HCSTRING("dynamicFriction","\x99","\xeb","\x8a","\xda")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,staticFriction),HX_HCSTRING("staticFriction","\xc8","\x6f","\xc8","\x40")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,density),HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{hx::fsFloat,(int)offsetof(ZPP_Material_obj,rollingFriction),HX_HCSTRING("rollingFriction","\x9f","\x6f","\x01","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Material*/ ,(void *) &ZPP_Material_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{hx::fsInt,(void *) &ZPP_Material_obj::WAKE,HX_HCSTRING("WAKE","\x24","\x24","\xb3","\x39")},
	{hx::fsInt,(void *) &ZPP_Material_obj::PROPS,HX_HCSTRING("PROPS","\x50","\x1f","\x7e","\x46")},
	{hx::fsInt,(void *) &ZPP_Material_obj::ANGDRAG,HX_HCSTRING("ANGDRAG","\xae","\x6f","\x6d","\xcd")},
	{hx::fsInt,(void *) &ZPP_Material_obj::ARBITERS,HX_HCSTRING("ARBITERS","\x6a","\xbc","\x37","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"),
	HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07"),
	HX_HCSTRING("feature_cons","\x5a","\x4f","\x1f","\x7b"),
	HX_HCSTRING("addShape","\x40","\x09","\x7a","\xf5"),
	HX_HCSTRING("remShape","\x67","\x53","\x9f","\x84"),
	HX_HCSTRING("dynamicFriction","\x99","\xeb","\x8a","\xda"),
	HX_HCSTRING("staticFriction","\xc8","\x6f","\xc8","\x40"),
	HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("rollingFriction","\x9f","\x6f","\x01","\xb7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::WAKE,"WAKE");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::PROPS,"PROPS");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::ANGDRAG,"ANGDRAG");
	HX_MARK_MEMBER_NAME(ZPP_Material_obj::ARBITERS,"ARBITERS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::WAKE,"WAKE");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::PROPS,"PROPS");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::ANGDRAG,"ANGDRAG");
	HX_VISIT_MEMBER_NAME(ZPP_Material_obj::ARBITERS,"ARBITERS");
};

#endif

hx::Class ZPP_Material_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("WAKE","\x24","\x24","\xb3","\x39"),
	HX_HCSTRING("PROPS","\x50","\x1f","\x7e","\x46"),
	HX_HCSTRING("ANGDRAG","\xae","\x6f","\x6d","\xcd"),
	HX_HCSTRING("ARBITERS","\x6a","\xbc","\x37","\x7b"),
	::String(null()) };

void ZPP_Material_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.phys.ZPP_Material","\x07","\x51","\x67","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Material_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Material_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Material_obj >;
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

void ZPP_Material_obj::__boot()
{
	zpp_pool= null();
	WAKE= (int)1;
	PROPS= (int)2;
	ANGDRAG= (int)4;
	ARBITERS= (int)8;
}

} // end namespace zpp_nape
} // end namespace phys
